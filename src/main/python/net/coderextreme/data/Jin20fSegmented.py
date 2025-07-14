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
meta3.content = "JinScaledV2L1LOA4MinimumSkeleton20f.x3d"

head1.children.append(meta3)

X3D0.head = head1
Scene4 = x3d.Scene()
"""https://www.web3d.org/documents/specifications/19774/V2.0/index.html"""
"""0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule."""
WorldInfo5 = x3d.WorldInfo()
WorldInfo5.title = "20f Jin v2 loa4 Level 1, Joints, Segments, Sites"

Scene4.children.append(WorldInfo5)
Transform6 = x3d.Transform()
Transform6.DEF = "ContainerScene000"
Shape7 = x3d.Shape()
Shape7.DEF = "AxisLinesShape"
"""Red +X, Green +Y, Blue +Z"""
IndexedLineSet8 = x3d.IndexedLineSet()
IndexedLineSet8.colorIndex = [0,1,2]
IndexedLineSet8.colorPerVertex = False
IndexedLineSet8.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Color9 = x3d.Color()

IndexedLineSet8.color = Color9
Coordinate10 = x3d.Coordinate()

IndexedLineSet8.coord = Coordinate10

Shape7.geometry = IndexedLineSet8

Transform6.children.append(Shape7)

Scene4.children.append(Transform6)
HAnimHumanoid11 = x3d.HAnimHumanoid()
HAnimHumanoid11.name = "JinLOA4S"
HAnimHumanoid11.DEF = "hanim_JinLOA4S"
HAnimHumanoid11.loa = 4
HAnimHumanoid11.version = "2.0"
HAnimJoint12 = x3d.HAnimJoint()
HAnimJoint12.name = "humanoid_root"
HAnimJoint12.DEF = "hanim_humanoid_root"
HAnimJoint12.center = [0,0.77,0]
HAnimJoint12.ulimit = [0,0,0]
HAnimJoint12.llimit = [0,0,0]
HAnimSegment13 = x3d.HAnimSegment()
HAnimSegment13.name = "sacrum"
HAnimSegment13.DEF = "hanim_sacrum"
Transform14 = x3d.Transform()
Transform14.DEF = "Humanoid000"
Shape15 = x3d.Shape()
Shape15.USE = "AxisLinesShape"

Transform14.children.append(Shape15)

HAnimSegment13.children.append(Transform14)

HAnimJoint12.children.append(HAnimSegment13)
HAnimJoint16 = x3d.HAnimJoint()
HAnimJoint16.name = "sacroiliac"
HAnimJoint16.DEF = "hanim_sacroiliac"
HAnimJoint16.center = [0,0.826,0.02]
HAnimJoint16.ulimit = [0,0,0]
HAnimJoint16.llimit = [0,0,0]
HAnimSegment17 = x3d.HAnimSegment()
HAnimSegment17.name = "pelvis"
HAnimSegment17.DEF = "hanim_pelvis"
HAnimSite18 = x3d.HAnimSite()
HAnimSite18.name = "l_iliocristale"
HAnimSite18.DEF = "hanim_l_iliocristale_pt"
HAnimSite18.translation = [0.13,0.92,0.0035]
TouchSensor19 = x3d.TouchSensor()
TouchSensor19.description = "HAnimSite 33 hanim_l_iliocristale_pt"

HAnimSite18.children.append(TouchSensor19)
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [1,1,1]

Appearance21.material = Material22

Shape20.appearance = Appearance21
IndexedFaceSet23 = x3d.IndexedFaceSet()
IndexedFaceSet23.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet23.creaseAngle = 0.5
IndexedFaceSet23.solid = False
ColorRGBA24 = x3d.ColorRGBA()

IndexedFaceSet23.color = ColorRGBA24
Coordinate25 = x3d.Coordinate()

IndexedFaceSet23.coord = Coordinate25

Shape20.geometry = IndexedFaceSet23

HAnimSite18.children.append(Shape20)
Billboard26 = x3d.Billboard()
Billboard26.axisOfRotation = [0,0,0]
Shape27 = x3d.Shape()
Text28 = x3d.Text()
Text28.string = ["33"]
FontStyle29 = x3d.FontStyle()
FontStyle29.size = 0.035

Text28.fontStyle = FontStyle29

Shape27.geometry = Text28

Billboard26.children.append(Shape27)

HAnimSite18.children.append(Billboard26)

HAnimSegment17.children.append(HAnimSite18)
HAnimSite30 = x3d.HAnimSite()
HAnimSite30.name = "r_iliocristale"
HAnimSite30.DEF = "hanim_r_iliocristale_pt"
HAnimSite30.translation = [-0.13,0.92,0.0035]
TouchSensor31 = x3d.TouchSensor()
TouchSensor31.description = "HAnimSite 36 hanim_r_iliocristale_pt"

HAnimSite30.children.append(TouchSensor31)
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.diffuseColor = [1,1,1]

Appearance33.material = Material34

Shape32.appearance = Appearance33
IndexedFaceSet35 = x3d.IndexedFaceSet()
IndexedFaceSet35.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet35.creaseAngle = 0.5
IndexedFaceSet35.solid = False
ColorRGBA36 = x3d.ColorRGBA()

IndexedFaceSet35.color = ColorRGBA36
Coordinate37 = x3d.Coordinate()

IndexedFaceSet35.coord = Coordinate37

Shape32.geometry = IndexedFaceSet35

HAnimSite30.children.append(Shape32)
Billboard38 = x3d.Billboard()
Billboard38.axisOfRotation = [0,0,0]
Shape39 = x3d.Shape()
Text40 = x3d.Text()
Text40.string = ["36"]
FontStyle41 = x3d.FontStyle()
FontStyle41.size = 0.035

Text40.fontStyle = FontStyle41

Shape39.geometry = Text40

Billboard38.children.append(Shape39)

HAnimSite30.children.append(Billboard38)

HAnimSegment17.children.append(HAnimSite30)
HAnimSite42 = x3d.HAnimSite()
HAnimSite42.name = "l_trochanterion"
HAnimSite42.DEF = "hanim_l_trochanterion_pt"
HAnimSite42.translation = [0.14,0.8,0.0035]
TouchSensor43 = x3d.TouchSensor()
TouchSensor43.description = "HAnimSite 42 hanim_l_trochanterion_pt"

HAnimSite42.children.append(TouchSensor43)
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.diffuseColor = [1,1,1]

Appearance45.material = Material46

Shape44.appearance = Appearance45
IndexedFaceSet47 = x3d.IndexedFaceSet()
IndexedFaceSet47.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet47.creaseAngle = 0.5
IndexedFaceSet47.solid = False
ColorRGBA48 = x3d.ColorRGBA()

IndexedFaceSet47.color = ColorRGBA48
Coordinate49 = x3d.Coordinate()

IndexedFaceSet47.coord = Coordinate49

Shape44.geometry = IndexedFaceSet47

HAnimSite42.children.append(Shape44)
Billboard50 = x3d.Billboard()
Billboard50.axisOfRotation = [0,0,0]
Shape51 = x3d.Shape()
Text52 = x3d.Text()
Text52.string = ["42"]
FontStyle53 = x3d.FontStyle()
FontStyle53.size = 0.035

Text52.fontStyle = FontStyle53

Shape51.geometry = Text52

Billboard50.children.append(Shape51)

HAnimSite42.children.append(Billboard50)

HAnimSegment17.children.append(HAnimSite42)
HAnimSite54 = x3d.HAnimSite()
HAnimSite54.name = "r_trochanterion"
HAnimSite54.DEF = "hanim_r_trochanterion_pt"
HAnimSite54.translation = [-0.14,0.8,0.0035]
TouchSensor55 = x3d.TouchSensor()
TouchSensor55.description = "HAnimSite 46 hanim_r_trochanterion_pt"

HAnimSite54.children.append(TouchSensor55)
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()
Material58.diffuseColor = [1,1,1]

Appearance57.material = Material58

Shape56.appearance = Appearance57
IndexedFaceSet59 = x3d.IndexedFaceSet()
IndexedFaceSet59.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet59.creaseAngle = 0.5
IndexedFaceSet59.solid = False
ColorRGBA60 = x3d.ColorRGBA()

IndexedFaceSet59.color = ColorRGBA60
Coordinate61 = x3d.Coordinate()

IndexedFaceSet59.coord = Coordinate61

Shape56.geometry = IndexedFaceSet59

HAnimSite54.children.append(Shape56)
Billboard62 = x3d.Billboard()
Billboard62.axisOfRotation = [0,0,0]
Shape63 = x3d.Shape()
Text64 = x3d.Text()
Text64.string = ["46"]
FontStyle65 = x3d.FontStyle()
FontStyle65.size = 0.035

Text64.fontStyle = FontStyle65

Shape63.geometry = Text64

Billboard62.children.append(Shape63)

HAnimSite54.children.append(Billboard62)

HAnimSegment17.children.append(HAnimSite54)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.name = "l_asis"
HAnimSite66.DEF = "hanim_l_asis_pt"
HAnimSite66.translation = [0.1,0.86,0.0035]
TouchSensor67 = x3d.TouchSensor()
TouchSensor67.description = "HAnimSite 32 hanim_l_asis_pt"

HAnimSite66.children.append(TouchSensor67)
Shape68 = x3d.Shape()
Appearance69 = x3d.Appearance()
Material70 = x3d.Material()
Material70.diffuseColor = [1,1,1]

Appearance69.material = Material70

Shape68.appearance = Appearance69
IndexedFaceSet71 = x3d.IndexedFaceSet()
IndexedFaceSet71.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet71.creaseAngle = 0.5
IndexedFaceSet71.solid = False
ColorRGBA72 = x3d.ColorRGBA()

IndexedFaceSet71.color = ColorRGBA72
Coordinate73 = x3d.Coordinate()

IndexedFaceSet71.coord = Coordinate73

Shape68.geometry = IndexedFaceSet71

HAnimSite66.children.append(Shape68)
Billboard74 = x3d.Billboard()
Billboard74.axisOfRotation = [0,0,0]
Shape75 = x3d.Shape()
Text76 = x3d.Text()
Text76.string = ["32"]
FontStyle77 = x3d.FontStyle()
FontStyle77.size = 0.035

Text76.fontStyle = FontStyle77

Shape75.geometry = Text76

Billboard74.children.append(Shape75)

HAnimSite66.children.append(Billboard74)

HAnimSegment17.children.append(HAnimSite66)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.name = "r_asis"
HAnimSite78.DEF = "hanim_r_asis_pt"
HAnimSite78.translation = [-0.1,0.86,0.0035]
TouchSensor79 = x3d.TouchSensor()
TouchSensor79.description = "HAnimSite 35 hanim_r_asis_pt"

HAnimSite78.children.append(TouchSensor79)
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
Material82 = x3d.Material()
Material82.diffuseColor = [1,1,1]

Appearance81.material = Material82

Shape80.appearance = Appearance81
IndexedFaceSet83 = x3d.IndexedFaceSet()
IndexedFaceSet83.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet83.creaseAngle = 0.5
IndexedFaceSet83.solid = False
ColorRGBA84 = x3d.ColorRGBA()

IndexedFaceSet83.color = ColorRGBA84
Coordinate85 = x3d.Coordinate()

IndexedFaceSet83.coord = Coordinate85

Shape80.geometry = IndexedFaceSet83

HAnimSite78.children.append(Shape80)
Billboard86 = x3d.Billboard()
Billboard86.axisOfRotation = [0,0,0]
Shape87 = x3d.Shape()
Text88 = x3d.Text()
Text88.string = ["35"]
FontStyle89 = x3d.FontStyle()
FontStyle89.size = 0.035

Text88.fontStyle = FontStyle89

Shape87.geometry = Text88

Billboard86.children.append(Shape87)

HAnimSite78.children.append(Billboard86)

HAnimSegment17.children.append(HAnimSite78)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.name = "l_psis"
HAnimSite90.DEF = "hanim_l_psis_pt"
HAnimSite90.translation = [0.05,0.84,-0.11]
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.description = "HAnimSite 34 hanim_l_psis_pt"

HAnimSite90.children.append(TouchSensor91)
Shape92 = x3d.Shape()
Appearance93 = x3d.Appearance()
Material94 = x3d.Material()
Material94.diffuseColor = [1,1,1]

Appearance93.material = Material94

Shape92.appearance = Appearance93
IndexedFaceSet95 = x3d.IndexedFaceSet()
IndexedFaceSet95.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet95.creaseAngle = 0.5
IndexedFaceSet95.solid = False
ColorRGBA96 = x3d.ColorRGBA()

IndexedFaceSet95.color = ColorRGBA96
Coordinate97 = x3d.Coordinate()

IndexedFaceSet95.coord = Coordinate97

Shape92.geometry = IndexedFaceSet95

HAnimSite90.children.append(Shape92)
Billboard98 = x3d.Billboard()
Billboard98.axisOfRotation = [0,0,0]
Shape99 = x3d.Shape()
Text100 = x3d.Text()
Text100.string = ["34"]
FontStyle101 = x3d.FontStyle()
FontStyle101.size = 0.035

Text100.fontStyle = FontStyle101

Shape99.geometry = Text100

Billboard98.children.append(Shape99)

HAnimSite90.children.append(Billboard98)

HAnimSegment17.children.append(HAnimSite90)
HAnimSite102 = x3d.HAnimSite()
HAnimSite102.name = "r_psis"
HAnimSite102.DEF = "hanim_r_psis_pt"
HAnimSite102.translation = [-0.05,0.84,-0.11]
TouchSensor103 = x3d.TouchSensor()
TouchSensor103.description = "HAnimSite 37 hanim_r_psis_pt"

HAnimSite102.children.append(TouchSensor103)
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.diffuseColor = [1,1,1]

Appearance105.material = Material106

Shape104.appearance = Appearance105
IndexedFaceSet107 = x3d.IndexedFaceSet()
IndexedFaceSet107.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet107.creaseAngle = 0.5
IndexedFaceSet107.solid = False
ColorRGBA108 = x3d.ColorRGBA()

IndexedFaceSet107.color = ColorRGBA108
Coordinate109 = x3d.Coordinate()

IndexedFaceSet107.coord = Coordinate109

Shape104.geometry = IndexedFaceSet107

HAnimSite102.children.append(Shape104)
Billboard110 = x3d.Billboard()
Billboard110.axisOfRotation = [0,0,0]
Shape111 = x3d.Shape()
Text112 = x3d.Text()
Text112.string = ["37"]
FontStyle113 = x3d.FontStyle()
FontStyle113.size = 0.035

Text112.fontStyle = FontStyle113

Shape111.geometry = Text112

Billboard110.children.append(Shape111)

HAnimSite102.children.append(Billboard110)

HAnimSegment17.children.append(HAnimSite102)
HAnimSite114 = x3d.HAnimSite()
HAnimSite114.name = "crotch"
HAnimSite114.DEF = "hanim_crotch_pt"
HAnimSite114.translation = [0,0.703,0]
TouchSensor115 = x3d.TouchSensor()
TouchSensor115.description = "HAnimSite 38 hanim_crotch_pt"

HAnimSite114.children.append(TouchSensor115)
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.diffuseColor = [1,1,1]

Appearance117.material = Material118

Shape116.appearance = Appearance117
IndexedFaceSet119 = x3d.IndexedFaceSet()
IndexedFaceSet119.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet119.creaseAngle = 0.5
IndexedFaceSet119.solid = False
ColorRGBA120 = x3d.ColorRGBA()

IndexedFaceSet119.color = ColorRGBA120
Coordinate121 = x3d.Coordinate()

IndexedFaceSet119.coord = Coordinate121

Shape116.geometry = IndexedFaceSet119

HAnimSite114.children.append(Shape116)
Billboard122 = x3d.Billboard()
Billboard122.axisOfRotation = [0,0,0]
Shape123 = x3d.Shape()
Text124 = x3d.Text()
Text124.string = ["38"]
FontStyle125 = x3d.FontStyle()
FontStyle125.size = 0.035

Text124.fontStyle = FontStyle125

Shape123.geometry = Text124

Billboard122.children.append(Shape123)

HAnimSite114.children.append(Billboard122)

HAnimSegment17.children.append(HAnimSite114)
HAnimSite126 = x3d.HAnimSite()
HAnimSite126.name = "buttocks_standing_wall_contact_point"
HAnimSite126.DEF = "hanim_buttocks_standing_wall_contact_point_pt"
HAnimSite126.translation = [0,0.8,-0.15]
TouchSensor127 = x3d.TouchSensor()
TouchSensor127.description = "HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt"

HAnimSite126.children.append(TouchSensor127)
Shape128 = x3d.Shape()
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()
Material130.diffuseColor = [1,1,1]

Appearance129.material = Material130

Shape128.appearance = Appearance129
IndexedFaceSet131 = x3d.IndexedFaceSet()
IndexedFaceSet131.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet131.creaseAngle = 0.5
IndexedFaceSet131.solid = False
ColorRGBA132 = x3d.ColorRGBA()

IndexedFaceSet131.color = ColorRGBA132
Coordinate133 = x3d.Coordinate()

IndexedFaceSet131.coord = Coordinate133

Shape128.geometry = IndexedFaceSet131

HAnimSite126.children.append(Shape128)
Billboard134 = x3d.Billboard()
Billboard134.axisOfRotation = [0,0,0]
Shape135 = x3d.Shape()
Text136 = x3d.Text()
Text136.string = ["93"]
FontStyle137 = x3d.FontStyle()
FontStyle137.size = 0.035

Text136.fontStyle = FontStyle137

Shape135.geometry = Text136

Billboard134.children.append(Shape135)

HAnimSite126.children.append(Billboard134)

HAnimSegment17.children.append(HAnimSite126)
Shape138 = x3d.Shape()
LineSet139 = x3d.LineSet()
LineSet139.vertexCount = [2]
ColorRGBA140 = x3d.ColorRGBA()

LineSet139.color = ColorRGBA140
Coordinate141 = x3d.Coordinate()

LineSet139.coord = Coordinate141

Shape138.geometry = LineSet139

HAnimSegment17.children.append(Shape138)

HAnimJoint16.children.append(HAnimSegment17)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.name = "l_hip"
HAnimJoint142.DEF = "hanim_l_hip"
HAnimJoint142.center = [0.095,0.8266,-0.0183]
HAnimJoint142.ulimit = [0,0,0]
HAnimJoint142.llimit = [0,0,0]
HAnimSegment143 = x3d.HAnimSegment()
HAnimSegment143.name = "l_thigh"
HAnimSegment143.DEF = "hanim_l_thigh"
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.name = "l_knee_crease"
HAnimSite144.DEF = "hanim_l_knee_crease_pt"
HAnimSite144.translation = [0.09,0.41,-0.056]
TouchSensor145 = x3d.TouchSensor()
TouchSensor145.description = "HAnimSite 90 hanim_l_knee_crease_pt"

HAnimSite144.children.append(TouchSensor145)
Shape146 = x3d.Shape()
Appearance147 = x3d.Appearance()
Material148 = x3d.Material()
Material148.diffuseColor = [1,1,1]

Appearance147.material = Material148

Shape146.appearance = Appearance147
IndexedFaceSet149 = x3d.IndexedFaceSet()
IndexedFaceSet149.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet149.creaseAngle = 0.5
IndexedFaceSet149.solid = False
ColorRGBA150 = x3d.ColorRGBA()

IndexedFaceSet149.color = ColorRGBA150
Coordinate151 = x3d.Coordinate()

IndexedFaceSet149.coord = Coordinate151

Shape146.geometry = IndexedFaceSet149

HAnimSite144.children.append(Shape146)
Billboard152 = x3d.Billboard()
Billboard152.axisOfRotation = [0,0,0]
Shape153 = x3d.Shape()
Text154 = x3d.Text()
Text154.string = ["90"]
FontStyle155 = x3d.FontStyle()
FontStyle155.size = 0.035

Text154.fontStyle = FontStyle155

Shape153.geometry = Text154

Billboard152.children.append(Shape153)

HAnimSite144.children.append(Billboard152)

HAnimSegment143.children.append(HAnimSite144)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.name = "l_femoral_medial_epicondyle"
HAnimSite156.DEF = "hanim_l_femoral_medial_epicondyle_pt"
HAnimSite156.translation = [0.039,0.41,-0.01]
TouchSensor157 = x3d.TouchSensor()
TouchSensor157.description = "HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt"

HAnimSite156.children.append(TouchSensor157)
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.diffuseColor = [1,1,1]

Appearance159.material = Material160

Shape158.appearance = Appearance159
IndexedFaceSet161 = x3d.IndexedFaceSet()
IndexedFaceSet161.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet161.creaseAngle = 0.5
IndexedFaceSet161.solid = False
ColorRGBA162 = x3d.ColorRGBA()

IndexedFaceSet161.color = ColorRGBA162
Coordinate163 = x3d.Coordinate()

IndexedFaceSet161.coord = Coordinate163

Shape158.geometry = IndexedFaceSet161

HAnimSite156.children.append(Shape158)
Billboard164 = x3d.Billboard()
Billboard164.axisOfRotation = [0,0,0]
Shape165 = x3d.Shape()
Text166 = x3d.Text()
Text166.string = ["40"]
FontStyle167 = x3d.FontStyle()
FontStyle167.size = 0.035

Text166.fontStyle = FontStyle167

Shape165.geometry = Text166

Billboard164.children.append(Shape165)

HAnimSite156.children.append(Billboard164)

HAnimSegment143.children.append(HAnimSite156)
HAnimSite168 = x3d.HAnimSite()
HAnimSite168.name = "l_femoral_lateral_epicondyle"
HAnimSite168.DEF = "hanim_l_femoral_lateral_epicondyle_pt"
HAnimSite168.translation = [0.127,0.41,-0.01]
TouchSensor169 = x3d.TouchSensor()
TouchSensor169.description = "HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt"

HAnimSite168.children.append(TouchSensor169)
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.diffuseColor = [1,1,1]

Appearance171.material = Material172

Shape170.appearance = Appearance171
IndexedFaceSet173 = x3d.IndexedFaceSet()
IndexedFaceSet173.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet173.creaseAngle = 0.5
IndexedFaceSet173.solid = False
ColorRGBA174 = x3d.ColorRGBA()

IndexedFaceSet173.color = ColorRGBA174
Coordinate175 = x3d.Coordinate()

IndexedFaceSet173.coord = Coordinate175

Shape170.geometry = IndexedFaceSet173

HAnimSite168.children.append(Shape170)
Billboard176 = x3d.Billboard()
Billboard176.axisOfRotation = [0,0,0]
Shape177 = x3d.Shape()
Text178 = x3d.Text()
Text178.string = ["39"]
FontStyle179 = x3d.FontStyle()
FontStyle179.size = 0.035

Text178.fontStyle = FontStyle179

Shape177.geometry = Text178

Billboard176.children.append(Shape177)

HAnimSite168.children.append(Billboard176)

HAnimSegment143.children.append(HAnimSite168)
HAnimSite180 = x3d.HAnimSite()
HAnimSite180.name = "l_suprapatella"
HAnimSite180.DEF = "hanim_l_suprapatella_pt"
HAnimSite180.translation = [0.085,0.41,0.042]
TouchSensor181 = x3d.TouchSensor()
TouchSensor181.description = "HAnimSite 41 hanim_l_suprapatella_pt"

HAnimSite180.children.append(TouchSensor181)
Shape182 = x3d.Shape()
Appearance183 = x3d.Appearance()
Material184 = x3d.Material()
Material184.diffuseColor = [1,1,1]

Appearance183.material = Material184

Shape182.appearance = Appearance183
IndexedFaceSet185 = x3d.IndexedFaceSet()
IndexedFaceSet185.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet185.creaseAngle = 0.5
IndexedFaceSet185.solid = False
ColorRGBA186 = x3d.ColorRGBA()

IndexedFaceSet185.color = ColorRGBA186
Coordinate187 = x3d.Coordinate()

IndexedFaceSet185.coord = Coordinate187

Shape182.geometry = IndexedFaceSet185

HAnimSite180.children.append(Shape182)
Billboard188 = x3d.Billboard()
Billboard188.axisOfRotation = [0,0,0]
Shape189 = x3d.Shape()
Text190 = x3d.Text()
Text190.string = ["41"]
FontStyle191 = x3d.FontStyle()
FontStyle191.size = 0.035

Text190.fontStyle = FontStyle191

Shape189.geometry = Text190

Billboard188.children.append(Shape189)

HAnimSite180.children.append(Billboard188)

HAnimSegment143.children.append(HAnimSite180)
Shape192 = x3d.Shape()
LineSet193 = x3d.LineSet()
LineSet193.vertexCount = [2]
ColorRGBA194 = x3d.ColorRGBA()

LineSet193.color = ColorRGBA194
Coordinate195 = x3d.Coordinate()

LineSet193.coord = Coordinate195

Shape192.geometry = LineSet193

HAnimSegment143.children.append(Shape192)

HAnimJoint142.children.append(HAnimSegment143)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.name = "l_knee"
HAnimJoint196.DEF = "hanim_l_knee"
HAnimJoint196.center = [0.0926,0.4088,-0.01944]
HAnimJoint196.ulimit = [0,0,0]
HAnimJoint196.llimit = [0,0,0]
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.name = "l_calf"
HAnimSegment197.DEF = "hanim_l_calf"
HAnimSite198 = x3d.HAnimSite()
HAnimSite198.name = "l_tibiale"
HAnimSite198.DEF = "hanim_l_tibiale_pt"
HAnimSite198.translation = [0.09,0.31,0.038]
TouchSensor199 = x3d.TouchSensor()
TouchSensor199.description = "HAnimSite 47 hanim_l_tibiale_pt"

HAnimSite198.children.append(TouchSensor199)
Shape200 = x3d.Shape()
Appearance201 = x3d.Appearance()
Material202 = x3d.Material()
Material202.diffuseColor = [1,1,1]

Appearance201.material = Material202

Shape200.appearance = Appearance201
IndexedFaceSet203 = x3d.IndexedFaceSet()
IndexedFaceSet203.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet203.creaseAngle = 0.5
IndexedFaceSet203.solid = False
ColorRGBA204 = x3d.ColorRGBA()

IndexedFaceSet203.color = ColorRGBA204
Coordinate205 = x3d.Coordinate()

IndexedFaceSet203.coord = Coordinate205

Shape200.geometry = IndexedFaceSet203

HAnimSite198.children.append(Shape200)
Billboard206 = x3d.Billboard()
Billboard206.axisOfRotation = [0,0,0]
Shape207 = x3d.Shape()
Text208 = x3d.Text()
Text208.string = ["47"]
FontStyle209 = x3d.FontStyle()
FontStyle209.size = 0.035

Text208.fontStyle = FontStyle209

Shape207.geometry = Text208

Billboard206.children.append(Shape207)

HAnimSite198.children.append(Billboard206)

HAnimSegment197.children.append(HAnimSite198)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.name = "l_medial_malleolus"
HAnimSite210.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite210.translation = [0.061,0.095,-0.02]
TouchSensor211 = x3d.TouchSensor()
TouchSensor211.description = "HAnimSite 48 hanim_l_medial_malleolus_pt"

HAnimSite210.children.append(TouchSensor211)
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Material214 = x3d.Material()
Material214.diffuseColor = [1,1,1]

Appearance213.material = Material214

Shape212.appearance = Appearance213
IndexedFaceSet215 = x3d.IndexedFaceSet()
IndexedFaceSet215.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet215.creaseAngle = 0.5
IndexedFaceSet215.solid = False
ColorRGBA216 = x3d.ColorRGBA()

IndexedFaceSet215.color = ColorRGBA216
Coordinate217 = x3d.Coordinate()

IndexedFaceSet215.coord = Coordinate217

Shape212.geometry = IndexedFaceSet215

HAnimSite210.children.append(Shape212)
Billboard218 = x3d.Billboard()
Billboard218.axisOfRotation = [0,0,0]
Shape219 = x3d.Shape()
Text220 = x3d.Text()
Text220.string = ["48"]
FontStyle221 = x3d.FontStyle()
FontStyle221.size = 0.035

Text220.fontStyle = FontStyle221

Shape219.geometry = Text220

Billboard218.children.append(Shape219)

HAnimSite210.children.append(Billboard218)

HAnimSegment197.children.append(HAnimSite210)
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.name = "l_lateral_malleolus"
HAnimSite222.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite222.translation = [0.12,0.095,-0.02]
TouchSensor223 = x3d.TouchSensor()
TouchSensor223.description = "HAnimSite 49 hanim_l_lateral_malleolus_pt"

HAnimSite222.children.append(TouchSensor223)
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.diffuseColor = [1,1,1]

Appearance225.material = Material226

Shape224.appearance = Appearance225
IndexedFaceSet227 = x3d.IndexedFaceSet()
IndexedFaceSet227.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet227.creaseAngle = 0.5
IndexedFaceSet227.solid = False
ColorRGBA228 = x3d.ColorRGBA()

IndexedFaceSet227.color = ColorRGBA228
Coordinate229 = x3d.Coordinate()

IndexedFaceSet227.coord = Coordinate229

Shape224.geometry = IndexedFaceSet227

HAnimSite222.children.append(Shape224)
Billboard230 = x3d.Billboard()
Billboard230.axisOfRotation = [0,0,0]
Shape231 = x3d.Shape()
Text232 = x3d.Text()
Text232.string = ["49"]
FontStyle233 = x3d.FontStyle()
FontStyle233.size = 0.035

Text232.fontStyle = FontStyle233

Shape231.geometry = Text232

Billboard230.children.append(Shape231)

HAnimSite222.children.append(Billboard230)

HAnimSegment197.children.append(HAnimSite222)
Shape234 = x3d.Shape()
LineSet235 = x3d.LineSet()
LineSet235.vertexCount = [2]
ColorRGBA236 = x3d.ColorRGBA()

LineSet235.color = ColorRGBA236
Coordinate237 = x3d.Coordinate()

LineSet235.coord = Coordinate237

Shape234.geometry = LineSet235

HAnimSegment197.children.append(Shape234)

HAnimJoint196.children.append(HAnimSegment197)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.name = "l_talocrural"
HAnimJoint238.DEF = "hanim_l_talocrural"
HAnimJoint238.center = [0.0888,0.09545,-0.01045]
HAnimJoint238.ulimit = [0,0,0]
HAnimJoint238.llimit = [0,0,0]
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.name = "l_talus"
HAnimSegment239.DEF = "hanim_l_talus"
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.name = "l_sphyrion"
HAnimSite240.DEF = "hanim_l_sphyrion_pt"
HAnimSite240.translation = [0.054,0.065,-0.02]
TouchSensor241 = x3d.TouchSensor()
TouchSensor241.description = "HAnimSite 50 hanim_l_sphyrion_pt"

HAnimSite240.children.append(TouchSensor241)
Shape242 = x3d.Shape()
Appearance243 = x3d.Appearance()
Material244 = x3d.Material()
Material244.diffuseColor = [1,1,1]

Appearance243.material = Material244

Shape242.appearance = Appearance243
IndexedFaceSet245 = x3d.IndexedFaceSet()
IndexedFaceSet245.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet245.creaseAngle = 0.5
IndexedFaceSet245.solid = False
ColorRGBA246 = x3d.ColorRGBA()

IndexedFaceSet245.color = ColorRGBA246
Coordinate247 = x3d.Coordinate()

IndexedFaceSet245.coord = Coordinate247

Shape242.geometry = IndexedFaceSet245

HAnimSite240.children.append(Shape242)
Billboard248 = x3d.Billboard()
Billboard248.axisOfRotation = [0,0,0]
Shape249 = x3d.Shape()
Text250 = x3d.Text()
Text250.string = ["50"]
FontStyle251 = x3d.FontStyle()
FontStyle251.size = 0.035

Text250.fontStyle = FontStyle251

Shape249.geometry = Text250

Billboard248.children.append(Shape249)

HAnimSite240.children.append(Billboard248)

HAnimSegment239.children.append(HAnimSite240)
HAnimSite252 = x3d.HAnimSite()
HAnimSite252.name = "l_calcaneus_posterior"
HAnimSite252.DEF = "hanim_l_calcaneus_posterior_pt"
HAnimSite252.translation = [0.09,0.03,-0.06]
TouchSensor253 = x3d.TouchSensor()
TouchSensor253.description = "HAnimSite 58 hanim_l_calcaneus_posterior_pt"

HAnimSite252.children.append(TouchSensor253)
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance()
Material256 = x3d.Material()
Material256.diffuseColor = [1,1,1]

Appearance255.material = Material256

Shape254.appearance = Appearance255
IndexedFaceSet257 = x3d.IndexedFaceSet()
IndexedFaceSet257.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet257.creaseAngle = 0.5
IndexedFaceSet257.solid = False
ColorRGBA258 = x3d.ColorRGBA()

IndexedFaceSet257.color = ColorRGBA258
Coordinate259 = x3d.Coordinate()

IndexedFaceSet257.coord = Coordinate259

Shape254.geometry = IndexedFaceSet257

HAnimSite252.children.append(Shape254)
Billboard260 = x3d.Billboard()
Billboard260.axisOfRotation = [0,0,0]
Shape261 = x3d.Shape()
Text262 = x3d.Text()
Text262.string = ["58"]
FontStyle263 = x3d.FontStyle()
FontStyle263.size = 0.035

Text262.fontStyle = FontStyle263

Shape261.geometry = Text262

Billboard260.children.append(Shape261)

HAnimSite252.children.append(Billboard260)

HAnimSegment239.children.append(HAnimSite252)
Shape264 = x3d.Shape()
LineSet265 = x3d.LineSet()
LineSet265.vertexCount = [2]
ColorRGBA266 = x3d.ColorRGBA()

LineSet265.color = ColorRGBA266
Coordinate267 = x3d.Coordinate()

LineSet265.coord = Coordinate267

Shape264.geometry = LineSet265

HAnimSegment239.children.append(Shape264)

HAnimJoint238.children.append(HAnimSegment239)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.name = "l_talocalcaneonavicular"
HAnimJoint268.DEF = "hanim_l_talocalcaneonavicular"
HAnimJoint268.center = [0.0783,0.0369,0.0049]
HAnimJoint268.ulimit = [0,0,0]
HAnimJoint268.llimit = [0,0,0]
HAnimSegment269 = x3d.HAnimSegment()
HAnimSegment269.name = "l_navicular"
HAnimSegment269.DEF = "hanim_l_navicular"
Shape270 = x3d.Shape()
LineSet271 = x3d.LineSet()
LineSet271.vertexCount = [2]
ColorRGBA272 = x3d.ColorRGBA()

LineSet271.color = ColorRGBA272
Coordinate273 = x3d.Coordinate()

LineSet271.coord = Coordinate273

Shape270.geometry = LineSet271

HAnimSegment269.children.append(Shape270)

HAnimJoint268.children.append(HAnimSegment269)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.name = "l_cuneonavicular_1"
HAnimJoint274.DEF = "hanim_l_cuneonavicular_1"
HAnimJoint274.center = [0.0674,0.0321,0.0184]
HAnimJoint274.ulimit = [0,0,0]
HAnimJoint274.llimit = [0,0,0]
HAnimSegment275 = x3d.HAnimSegment()
HAnimSegment275.name = "l_cuneiform_1"
HAnimSegment275.DEF = "hanim_l_cuneiform_1"
Shape276 = x3d.Shape()
LineSet277 = x3d.LineSet()
LineSet277.vertexCount = [2]
ColorRGBA278 = x3d.ColorRGBA()

LineSet277.color = ColorRGBA278
Coordinate279 = x3d.Coordinate()

LineSet277.coord = Coordinate279

Shape276.geometry = LineSet277

HAnimSegment275.children.append(Shape276)

HAnimJoint274.children.append(HAnimSegment275)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.name = "l_tarsometatarsal_1"
HAnimJoint280.DEF = "hanim_l_tarsometatarsal_1"
HAnimJoint280.center = [0.0646,0.02324,0.0442]
HAnimJoint280.ulimit = [0,0,0]
HAnimJoint280.llimit = [0,0,0]
HAnimSegment281 = x3d.HAnimSegment()
HAnimSegment281.name = "l_metatarsal_1"
HAnimSegment281.DEF = "hanim_l_metatarsal_1"
Shape282 = x3d.Shape()
LineSet283 = x3d.LineSet()
LineSet283.vertexCount = [2]
ColorRGBA284 = x3d.ColorRGBA()

LineSet283.color = ColorRGBA284
Coordinate285 = x3d.Coordinate()

LineSet283.coord = Coordinate285

Shape282.geometry = LineSet283

HAnimSegment281.children.append(Shape282)

HAnimJoint280.children.append(HAnimSegment281)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.name = "l_metatarsophalangeal_1"
HAnimJoint286.DEF = "hanim_l_metatarsophalangeal_1"
HAnimJoint286.center = [0.0621,0.01442,0.0936]
HAnimJoint286.ulimit = [0,0,0]
HAnimJoint286.llimit = [0,0,0]
HAnimSegment287 = x3d.HAnimSegment()
HAnimSegment287.name = "l_tarsal_proximal_phalanx_1"
HAnimSegment287.DEF = "hanim_l_tarsal_proximal_phalanx_1"
HAnimSite288 = x3d.HAnimSite()
HAnimSite288.name = "l_metatarsal_phalanx_1"
HAnimSite288.DEF = "hanim_l_metatarsal_phalanx_1_pt"
HAnimSite288.translation = [0.062,0.012,0.1]
TouchSensor289 = x3d.TouchSensor()
TouchSensor289.description = "HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt"

HAnimSite288.children.append(TouchSensor289)
Shape290 = x3d.Shape()
Appearance291 = x3d.Appearance()
Material292 = x3d.Material()
Material292.diffuseColor = [1,1,1]

Appearance291.material = Material292

Shape290.appearance = Appearance291
IndexedFaceSet293 = x3d.IndexedFaceSet()
IndexedFaceSet293.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet293.creaseAngle = 0.5
IndexedFaceSet293.solid = False
ColorRGBA294 = x3d.ColorRGBA()

IndexedFaceSet293.color = ColorRGBA294
Coordinate295 = x3d.Coordinate()

IndexedFaceSet293.coord = Coordinate295

Shape290.geometry = IndexedFaceSet293

HAnimSite288.children.append(Shape290)
Billboard296 = x3d.Billboard()
Billboard296.axisOfRotation = [0,0,0]
Shape297 = x3d.Shape()
Text298 = x3d.Text()
Text298.string = ["55"]
FontStyle299 = x3d.FontStyle()
FontStyle299.size = 0.035

Text298.fontStyle = FontStyle299

Shape297.geometry = Text298

Billboard296.children.append(Shape297)

HAnimSite288.children.append(Billboard296)

HAnimSegment287.children.append(HAnimSite288)
Shape300 = x3d.Shape()
LineSet301 = x3d.LineSet()
LineSet301.vertexCount = [2]
ColorRGBA302 = x3d.ColorRGBA()

LineSet301.color = ColorRGBA302
Coordinate303 = x3d.Coordinate()

LineSet301.coord = Coordinate303

Shape300.geometry = LineSet301

HAnimSegment287.children.append(Shape300)

HAnimJoint286.children.append(HAnimSegment287)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.name = "l_tarsal_interphalangeal_1"
HAnimJoint304.DEF = "hanim_l_tarsal_interphalangeal_1"
HAnimJoint304.center = [0.062,0.012,0.115]
HAnimJoint304.ulimit = [0,0,0]
HAnimJoint304.llimit = [0,0,0]
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.name = "l_tarsal_distal_phalanx_1"
HAnimSegment305.DEF = "hanim_l_tarsal_distal_phalanx_1"
HAnimSite306 = x3d.HAnimSite()
HAnimSite306.name = "l_tarsal_distal_phalanx_1"
HAnimSite306.DEF = "hanim_l_tarsal_distal_phalanx_1_tip"
HAnimSite306.translation = [0.062,0.012,0.134]
TouchSensor307 = x3d.TouchSensor()
TouchSensor307.description = "HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip"

HAnimSite306.children.append(TouchSensor307)
Shape308 = x3d.Shape()
Appearance309 = x3d.Appearance()
Material310 = x3d.Material()
Material310.diffuseColor = [1,1,1]

Appearance309.material = Material310

Shape308.appearance = Appearance309
IndexedFaceSet311 = x3d.IndexedFaceSet()
IndexedFaceSet311.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet311.creaseAngle = 0.5
IndexedFaceSet311.solid = False
ColorRGBA312 = x3d.ColorRGBA()

IndexedFaceSet311.color = ColorRGBA312
Coordinate313 = x3d.Coordinate()

IndexedFaceSet311.coord = Coordinate313

Shape308.geometry = IndexedFaceSet311

HAnimSite306.children.append(Shape308)
Billboard314 = x3d.Billboard()
Billboard314.axisOfRotation = [0,0,0]
Shape315 = x3d.Shape()
Text316 = x3d.Text()
Text316.string = ["111"]
FontStyle317 = x3d.FontStyle()
FontStyle317.size = 0.035

Text316.fontStyle = FontStyle317

Shape315.geometry = Text316

Billboard314.children.append(Shape315)

HAnimSite306.children.append(Billboard314)

HAnimSegment305.children.append(HAnimSite306)
Shape318 = x3d.Shape()
LineSet319 = x3d.LineSet()
LineSet319.vertexCount = [2]
ColorRGBA320 = x3d.ColorRGBA()

LineSet319.color = ColorRGBA320
Coordinate321 = x3d.Coordinate()

LineSet319.coord = Coordinate321

Shape318.geometry = LineSet319

HAnimSegment305.children.append(Shape318)

HAnimJoint304.children.append(HAnimSegment305)

HAnimJoint286.children.append(HAnimJoint304)

HAnimJoint280.children.append(HAnimJoint286)

HAnimJoint274.children.append(HAnimJoint280)

HAnimJoint268.children.append(HAnimJoint274)
HAnimJoint322 = x3d.HAnimJoint()
HAnimJoint322.name = "l_cuneonavicular_2"
HAnimJoint322.DEF = "hanim_l_cuneonavicular_2"
HAnimJoint322.center = [0.0814,0.0335,0.02143]
HAnimJoint322.ulimit = [0,0,0]
HAnimJoint322.llimit = [0,0,0]
HAnimSegment323 = x3d.HAnimSegment()
HAnimSegment323.name = "l_cuneiform_2"
HAnimSegment323.DEF = "hanim_l_cuneiform_2"
Shape324 = x3d.Shape()
LineSet325 = x3d.LineSet()
LineSet325.vertexCount = [2]
ColorRGBA326 = x3d.ColorRGBA()

LineSet325.color = ColorRGBA326
Coordinate327 = x3d.Coordinate()

LineSet325.coord = Coordinate327

Shape324.geometry = LineSet325

HAnimSegment323.children.append(Shape324)

HAnimJoint322.children.append(HAnimSegment323)
HAnimJoint328 = x3d.HAnimJoint()
HAnimJoint328.name = "l_tarsometatarsal_2"
HAnimJoint328.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint328.center = [0.0802,0.0261,0.0411]
HAnimJoint328.ulimit = [0,0,0]
HAnimJoint328.llimit = [0,0,0]
HAnimSegment329 = x3d.HAnimSegment()
HAnimSegment329.name = "l_metatarsal_2"
HAnimSegment329.DEF = "hanim_l_metatarsal_2"
Shape330 = x3d.Shape()
LineSet331 = x3d.LineSet()
LineSet331.vertexCount = [2]
ColorRGBA332 = x3d.ColorRGBA()

LineSet331.color = ColorRGBA332
Coordinate333 = x3d.Coordinate()

LineSet331.coord = Coordinate333

Shape330.geometry = LineSet331

HAnimSegment329.children.append(Shape330)

HAnimJoint328.children.append(HAnimSegment329)
HAnimJoint334 = x3d.HAnimJoint()
HAnimJoint334.name = "l_metatarsophalangeal_2"
HAnimJoint334.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint334.center = [0.0825,0.01497,0.09783]
HAnimJoint334.ulimit = [0,0,0]
HAnimJoint334.llimit = [0,0,0]
HAnimSegment335 = x3d.HAnimSegment()
HAnimSegment335.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment335.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Shape336 = x3d.Shape()
LineSet337 = x3d.LineSet()
LineSet337.vertexCount = [2]
ColorRGBA338 = x3d.ColorRGBA()

LineSet337.color = ColorRGBA338
Coordinate339 = x3d.Coordinate()

LineSet337.coord = Coordinate339

Shape336.geometry = LineSet337

HAnimSegment335.children.append(Shape336)

HAnimJoint334.children.append(HAnimSegment335)
HAnimJoint340 = x3d.HAnimJoint()
HAnimJoint340.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint340.DEF = "hanim_l_tarsal_proximal_interphalangeal_2"
HAnimJoint340.center = [0.0843,0.01265,0.114]
HAnimJoint340.ulimit = [0,0,0]
HAnimJoint340.llimit = [0,0,0]
HAnimSegment341 = x3d.HAnimSegment()
HAnimSegment341.name = "l_tarsal_middle_phalanx_2"
HAnimSegment341.DEF = "hanim_l_tarsal_middle_phalanx_2"
Shape342 = x3d.Shape()
LineSet343 = x3d.LineSet()
LineSet343.vertexCount = [2]
ColorRGBA344 = x3d.ColorRGBA()

LineSet343.color = ColorRGBA344
Coordinate345 = x3d.Coordinate()

LineSet343.coord = Coordinate345

Shape342.geometry = LineSet343

HAnimSegment341.children.append(Shape342)

HAnimJoint340.children.append(HAnimSegment341)
HAnimJoint346 = x3d.HAnimJoint()
HAnimJoint346.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint346.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint346.center = [0.0843,0.00982,0.123435]
HAnimJoint346.ulimit = [0,0,0]
HAnimJoint346.llimit = [0,0,0]
HAnimSegment347 = x3d.HAnimSegment()
HAnimSegment347.name = "l_tarsal_distal_phalanx_2"
HAnimSegment347.DEF = "hanim_l_tarsal_distal_phalanx_2"
HAnimSite348 = x3d.HAnimSite()
HAnimSite348.name = "l_tarsal_distal_phalanx_2"
HAnimSite348.DEF = "hanim_l_tarsal_distal_phalanx_2_tip"
HAnimSite348.translation = [0.08,0.016,0.14]
TouchSensor349 = x3d.TouchSensor()
TouchSensor349.description = "HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip"

HAnimSite348.children.append(TouchSensor349)
Shape350 = x3d.Shape()
Appearance351 = x3d.Appearance()
Material352 = x3d.Material()
Material352.diffuseColor = [1,1,1]

Appearance351.material = Material352

Shape350.appearance = Appearance351
IndexedFaceSet353 = x3d.IndexedFaceSet()
IndexedFaceSet353.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet353.creaseAngle = 0.5
IndexedFaceSet353.solid = False
ColorRGBA354 = x3d.ColorRGBA()

IndexedFaceSet353.color = ColorRGBA354
Coordinate355 = x3d.Coordinate()

IndexedFaceSet353.coord = Coordinate355

Shape350.geometry = IndexedFaceSet353

HAnimSite348.children.append(Shape350)
Billboard356 = x3d.Billboard()
Billboard356.axisOfRotation = [0,0,0]
Shape357 = x3d.Shape()
Text358 = x3d.Text()
Text358.string = ["112"]
FontStyle359 = x3d.FontStyle()
FontStyle359.size = 0.035

Text358.fontStyle = FontStyle359

Shape357.geometry = Text358

Billboard356.children.append(Shape357)

HAnimSite348.children.append(Billboard356)

HAnimSegment347.children.append(HAnimSite348)
Shape360 = x3d.Shape()
LineSet361 = x3d.LineSet()
LineSet361.vertexCount = [2]
ColorRGBA362 = x3d.ColorRGBA()

LineSet361.color = ColorRGBA362
Coordinate363 = x3d.Coordinate()

LineSet361.coord = Coordinate363

Shape360.geometry = LineSet361

HAnimSegment347.children.append(Shape360)

HAnimJoint346.children.append(HAnimSegment347)

HAnimJoint340.children.append(HAnimJoint346)

HAnimJoint334.children.append(HAnimJoint340)

HAnimJoint328.children.append(HAnimJoint334)

HAnimJoint322.children.append(HAnimJoint328)

HAnimJoint268.children.append(HAnimJoint322)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.name = "l_cuneonavicular_3"
HAnimJoint364.DEF = "hanim_l_cuneonavicular_3"
HAnimJoint364.center = [0.09297,0.0334,0.01982]
HAnimJoint364.ulimit = [0,0,0]
HAnimJoint364.llimit = [0,0,0]
HAnimSegment365 = x3d.HAnimSegment()
HAnimSegment365.name = "l_cuneiform_3"
HAnimSegment365.DEF = "hanim_l_cuneiform_3"
Shape366 = x3d.Shape()
LineSet367 = x3d.LineSet()
LineSet367.vertexCount = [2]
ColorRGBA368 = x3d.ColorRGBA()

LineSet367.color = ColorRGBA368
Coordinate369 = x3d.Coordinate()

LineSet367.coord = Coordinate369

Shape366.geometry = LineSet367

HAnimSegment365.children.append(Shape366)

HAnimJoint364.children.append(HAnimSegment365)
HAnimJoint370 = x3d.HAnimJoint()
HAnimJoint370.name = "l_tarsometatarsal_3"
HAnimJoint370.DEF = "hanim_l_tarsometatarsal_3"
HAnimJoint370.center = [0.09459,0.0261,0.0394]
HAnimJoint370.ulimit = [0,0,0]
HAnimJoint370.llimit = [0,0,0]
HAnimSegment371 = x3d.HAnimSegment()
HAnimSegment371.name = "l_metatarsal_3"
HAnimSegment371.DEF = "hanim_l_metatarsal_3"
Shape372 = x3d.Shape()
LineSet373 = x3d.LineSet()
LineSet373.vertexCount = [2]
ColorRGBA374 = x3d.ColorRGBA()

LineSet373.color = ColorRGBA374
Coordinate375 = x3d.Coordinate()

LineSet373.coord = Coordinate375

Shape372.geometry = LineSet373

HAnimSegment371.children.append(Shape372)

HAnimJoint370.children.append(HAnimSegment371)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.name = "l_metatarsophalangeal_3"
HAnimJoint376.DEF = "hanim_l_metatarsophalangeal_3"
HAnimJoint376.center = [0.0965,0.01505,0.0954]
HAnimJoint376.ulimit = [0,0,0]
HAnimJoint376.llimit = [0,0,0]
HAnimSegment377 = x3d.HAnimSegment()
HAnimSegment377.name = "l_tarsal_proximal_phalanx_3"
HAnimSegment377.DEF = "hanim_l_tarsal_proximal_phalanx_3"
Shape378 = x3d.Shape()
LineSet379 = x3d.LineSet()
LineSet379.vertexCount = [2]
ColorRGBA380 = x3d.ColorRGBA()

LineSet379.color = ColorRGBA380
Coordinate381 = x3d.Coordinate()

LineSet379.coord = Coordinate381

Shape378.geometry = LineSet379

HAnimSegment377.children.append(Shape378)

HAnimJoint376.children.append(HAnimSegment377)
HAnimJoint382 = x3d.HAnimJoint()
HAnimJoint382.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint382.DEF = "hanim_l_tarsal_proximal_interphalangeal_3"
HAnimJoint382.center = [0.09886,0.01192,0.11047]
HAnimJoint382.ulimit = [0,0,0]
HAnimJoint382.llimit = [0,0,0]
HAnimSegment383 = x3d.HAnimSegment()
HAnimSegment383.name = "l_tarsal_middle_phalanx_3"
HAnimSegment383.DEF = "hanim_l_tarsal_middle_phalanx_3"
Shape384 = x3d.Shape()
LineSet385 = x3d.LineSet()
LineSet385.vertexCount = [2]
ColorRGBA386 = x3d.ColorRGBA()

LineSet385.color = ColorRGBA386
Coordinate387 = x3d.Coordinate()

LineSet385.coord = Coordinate387

Shape384.geometry = LineSet385

HAnimSegment383.children.append(Shape384)

HAnimJoint382.children.append(HAnimSegment383)
HAnimJoint388 = x3d.HAnimJoint()
HAnimJoint388.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint388.DEF = "hanim_l_tarsal_distal_interphalangeal_3"
HAnimJoint388.center = [0.1004,0.00983,0.1197]
HAnimJoint388.ulimit = [0,0,0]
HAnimJoint388.llimit = [0,0,0]
HAnimSegment389 = x3d.HAnimSegment()
HAnimSegment389.name = "l_tarsal_distal_phalanx_3"
HAnimSegment389.DEF = "hanim_l_tarsal_distal_phalanx_3"
HAnimSite390 = x3d.HAnimSite()
HAnimSite390.name = "l_tarsal_distal_phalanx_3"
HAnimSite390.DEF = "hanim_l_tarsal_distal_phalanx_3_tip"
HAnimSite390.translation = [0.1,0.016,0.14]
TouchSensor391 = x3d.TouchSensor()
TouchSensor391.description = "HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip"

HAnimSite390.children.append(TouchSensor391)
Shape392 = x3d.Shape()
Appearance393 = x3d.Appearance()
Material394 = x3d.Material()
Material394.diffuseColor = [1,1,1]

Appearance393.material = Material394

Shape392.appearance = Appearance393
IndexedFaceSet395 = x3d.IndexedFaceSet()
IndexedFaceSet395.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet395.creaseAngle = 0.5
IndexedFaceSet395.solid = False
ColorRGBA396 = x3d.ColorRGBA()

IndexedFaceSet395.color = ColorRGBA396
Coordinate397 = x3d.Coordinate()

IndexedFaceSet395.coord = Coordinate397

Shape392.geometry = IndexedFaceSet395

HAnimSite390.children.append(Shape392)
Billboard398 = x3d.Billboard()
Billboard398.axisOfRotation = [0,0,0]
Shape399 = x3d.Shape()
Text400 = x3d.Text()
Text400.string = ["113"]
FontStyle401 = x3d.FontStyle()
FontStyle401.size = 0.035

Text400.fontStyle = FontStyle401

Shape399.geometry = Text400

Billboard398.children.append(Shape399)

HAnimSite390.children.append(Billboard398)

HAnimSegment389.children.append(HAnimSite390)
Shape402 = x3d.Shape()
LineSet403 = x3d.LineSet()
LineSet403.vertexCount = [2]
ColorRGBA404 = x3d.ColorRGBA()

LineSet403.color = ColorRGBA404
Coordinate405 = x3d.Coordinate()

LineSet403.coord = Coordinate405

Shape402.geometry = LineSet403

HAnimSegment389.children.append(Shape402)

HAnimJoint388.children.append(HAnimSegment389)

HAnimJoint382.children.append(HAnimJoint388)

HAnimJoint376.children.append(HAnimJoint382)

HAnimJoint370.children.append(HAnimJoint376)

HAnimJoint364.children.append(HAnimJoint370)

HAnimJoint268.children.append(HAnimJoint364)

HAnimJoint238.children.append(HAnimJoint268)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.name = "l_calcaneocuboid"
HAnimJoint406.DEF = "hanim_l_calcaneocuboid"
HAnimJoint406.center = [0.0891,0.05798,-0.0259]
HAnimJoint406.ulimit = [0,0,0]
HAnimJoint406.llimit = [0,0,0]
HAnimSegment407 = x3d.HAnimSegment()
HAnimSegment407.name = "l_calcaneus"
HAnimSegment407.DEF = "hanim_l_calcaneus"
Shape408 = x3d.Shape()
LineSet409 = x3d.LineSet()
LineSet409.vertexCount = [2]
ColorRGBA410 = x3d.ColorRGBA()

LineSet409.color = ColorRGBA410
Coordinate411 = x3d.Coordinate()

LineSet409.coord = Coordinate411

Shape408.geometry = LineSet409

HAnimSegment407.children.append(Shape408)

HAnimJoint406.children.append(HAnimSegment407)
HAnimJoint412 = x3d.HAnimJoint()
HAnimJoint412.name = "l_transversetarsal"
HAnimJoint412.DEF = "hanim_l_transversetarsal"
HAnimJoint412.center = [0.11063,0.03528,0.0021]
HAnimJoint412.ulimit = [0,0,0]
HAnimJoint412.llimit = [0,0,0]
HAnimSegment413 = x3d.HAnimSegment()
HAnimSegment413.name = "l_cuboid"
HAnimSegment413.DEF = "hanim_l_cuboid"
Shape414 = x3d.Shape()
LineSet415 = x3d.LineSet()
LineSet415.vertexCount = [2]
ColorRGBA416 = x3d.ColorRGBA()

LineSet415.color = ColorRGBA416
Coordinate417 = x3d.Coordinate()

LineSet415.coord = Coordinate417

Shape414.geometry = LineSet415

HAnimSegment413.children.append(Shape414)

HAnimJoint412.children.append(HAnimSegment413)
HAnimJoint418 = x3d.HAnimJoint()
HAnimJoint418.name = "l_tarsometatarsal_4"
HAnimJoint418.DEF = "hanim_l_tarsometatarsal_4"
HAnimJoint418.center = [0.10649,0.02454,0.03843]
HAnimJoint418.ulimit = [0,0,0]
HAnimJoint418.llimit = [0,0,0]
HAnimSegment419 = x3d.HAnimSegment()
HAnimSegment419.name = "l_metatarsal_4"
HAnimSegment419.DEF = "hanim_l_metatarsal_4"
Shape420 = x3d.Shape()
LineSet421 = x3d.LineSet()
LineSet421.vertexCount = [2]
ColorRGBA422 = x3d.ColorRGBA()

LineSet421.color = ColorRGBA422
Coordinate423 = x3d.Coordinate()

LineSet421.coord = Coordinate423

Shape420.geometry = LineSet421

HAnimSegment419.children.append(Shape420)

HAnimJoint418.children.append(HAnimSegment419)
HAnimJoint424 = x3d.HAnimJoint()
HAnimJoint424.name = "l_metatarsophalangeal_4"
HAnimJoint424.DEF = "hanim_l_metatarsophalangeal_4"
HAnimJoint424.center = [0.109867,0.01435,0.09117]
HAnimJoint424.ulimit = [0,0,0]
HAnimJoint424.llimit = [0,0,0]
HAnimSegment425 = x3d.HAnimSegment()
HAnimSegment425.name = "l_tarsal_proximal_phalanx_4"
HAnimSegment425.DEF = "hanim_l_tarsal_proximal_phalanx_4"
Shape426 = x3d.Shape()
LineSet427 = x3d.LineSet()
LineSet427.vertexCount = [2]
ColorRGBA428 = x3d.ColorRGBA()

LineSet427.color = ColorRGBA428
Coordinate429 = x3d.Coordinate()

LineSet427.coord = Coordinate429

Shape426.geometry = LineSet427

HAnimSegment425.children.append(Shape426)

HAnimJoint424.children.append(HAnimSegment425)
HAnimJoint430 = x3d.HAnimJoint()
HAnimJoint430.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint430.DEF = "hanim_l_tarsal_proximal_interphalangeal_4"
HAnimJoint430.center = [0.11416,0.01224,0.10631]
HAnimJoint430.ulimit = [0,0,0]
HAnimJoint430.llimit = [0,0,0]
HAnimSegment431 = x3d.HAnimSegment()
HAnimSegment431.name = "l_tarsal_middle_phalanx_4"
HAnimSegment431.DEF = "hanim_l_tarsal_middle_phalanx_4"
Shape432 = x3d.Shape()
LineSet433 = x3d.LineSet()
LineSet433.vertexCount = [2]
ColorRGBA434 = x3d.ColorRGBA()

LineSet433.color = ColorRGBA434
Coordinate435 = x3d.Coordinate()

LineSet433.coord = Coordinate435

Shape432.geometry = LineSet433

HAnimSegment431.children.append(Shape432)

HAnimJoint430.children.append(HAnimSegment431)
HAnimJoint436 = x3d.HAnimJoint()
HAnimJoint436.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint436.DEF = "hanim_l_tarsal_distal_interphalangeal_4"
HAnimJoint436.center = [0.11567,0.00936,0.11369]
HAnimJoint436.ulimit = [0,0,0]
HAnimJoint436.llimit = [0,0,0]
HAnimSegment437 = x3d.HAnimSegment()
HAnimSegment437.name = "l_tarsal_distal_phalanx_4"
HAnimSegment437.DEF = "hanim_l_tarsal_distal_phalanx_4"
HAnimSite438 = x3d.HAnimSite()
HAnimSite438.name = "l_tarsal_distal_phalanx_4"
HAnimSite438.DEF = "hanim_l_tarsal_distal_phalanx_4_tip"
HAnimSite438.translation = [0.115,0.016,0.13]
TouchSensor439 = x3d.TouchSensor()
TouchSensor439.description = "HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip"

HAnimSite438.children.append(TouchSensor439)
Shape440 = x3d.Shape()
Appearance441 = x3d.Appearance()
Material442 = x3d.Material()
Material442.diffuseColor = [1,1,1]

Appearance441.material = Material442

Shape440.appearance = Appearance441
IndexedFaceSet443 = x3d.IndexedFaceSet()
IndexedFaceSet443.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet443.creaseAngle = 0.5
IndexedFaceSet443.solid = False
ColorRGBA444 = x3d.ColorRGBA()

IndexedFaceSet443.color = ColorRGBA444
Coordinate445 = x3d.Coordinate()

IndexedFaceSet443.coord = Coordinate445

Shape440.geometry = IndexedFaceSet443

HAnimSite438.children.append(Shape440)
Billboard446 = x3d.Billboard()
Billboard446.axisOfRotation = [0,0,0]
Shape447 = x3d.Shape()
Text448 = x3d.Text()
Text448.string = ["114"]
FontStyle449 = x3d.FontStyle()
FontStyle449.size = 0.035

Text448.fontStyle = FontStyle449

Shape447.geometry = Text448

Billboard446.children.append(Shape447)

HAnimSite438.children.append(Billboard446)

HAnimSegment437.children.append(HAnimSite438)
Shape450 = x3d.Shape()
LineSet451 = x3d.LineSet()
LineSet451.vertexCount = [2]
ColorRGBA452 = x3d.ColorRGBA()

LineSet451.color = ColorRGBA452
Coordinate453 = x3d.Coordinate()

LineSet451.coord = Coordinate453

Shape450.geometry = LineSet451

HAnimSegment437.children.append(Shape450)

HAnimJoint436.children.append(HAnimSegment437)

HAnimJoint430.children.append(HAnimJoint436)

HAnimJoint424.children.append(HAnimJoint430)

HAnimJoint418.children.append(HAnimJoint424)

HAnimJoint412.children.append(HAnimJoint418)
HAnimJoint454 = x3d.HAnimJoint()
HAnimJoint454.name = "l_tarsometatarsal_5"
HAnimJoint454.DEF = "hanim_l_tarsometatarsal_5"
HAnimJoint454.center = [0.1208,0.02094,0.03474]
HAnimJoint454.ulimit = [0,0,0]
HAnimJoint454.llimit = [0,0,0]
HAnimSegment455 = x3d.HAnimSegment()
HAnimSegment455.name = "l_metatarsal_5"
HAnimSegment455.DEF = "hanim_l_metatarsal_5"
Shape456 = x3d.Shape()
LineSet457 = x3d.LineSet()
LineSet457.vertexCount = [2]
ColorRGBA458 = x3d.ColorRGBA()

LineSet457.color = ColorRGBA458
Coordinate459 = x3d.Coordinate()

LineSet457.coord = Coordinate459

Shape456.geometry = LineSet457

HAnimSegment455.children.append(Shape456)

HAnimJoint454.children.append(HAnimSegment455)
HAnimJoint460 = x3d.HAnimJoint()
HAnimJoint460.name = "l_metatarsophalangeal_5"
HAnimJoint460.DEF = "hanim_l_metatarsophalangeal_5"
HAnimJoint460.center = [0.124065,0.01367,0.08656]
HAnimJoint460.ulimit = [0,0,0]
HAnimJoint460.llimit = [0,0,0]
HAnimSegment461 = x3d.HAnimSegment()
HAnimSegment461.name = "l_tarsal_proximal_phalanx_5"
HAnimSegment461.DEF = "hanim_l_tarsal_proximal_phalanx_5"
Shape462 = x3d.Shape()
LineSet463 = x3d.LineSet()
LineSet463.vertexCount = [2]
ColorRGBA464 = x3d.ColorRGBA()

LineSet463.color = ColorRGBA464
Coordinate465 = x3d.Coordinate()

LineSet463.coord = Coordinate465

Shape462.geometry = LineSet463

HAnimSegment461.children.append(Shape462)

HAnimJoint460.children.append(HAnimSegment461)
HAnimJoint466 = x3d.HAnimJoint()
HAnimJoint466.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint466.DEF = "hanim_l_tarsal_proximal_interphalangeal_5"
HAnimJoint466.center = [0.12638,0.01086,0.09414]
HAnimJoint466.ulimit = [0,0,0]
HAnimJoint466.llimit = [0,0,0]
HAnimSegment467 = x3d.HAnimSegment()
HAnimSegment467.name = "l_tarsal_middle_phalanx_5"
HAnimSegment467.DEF = "hanim_l_tarsal_middle_phalanx_5"
HAnimSite468 = x3d.HAnimSite()
HAnimSite468.name = "l_metatarsal_phalanx_5"
HAnimSite468.DEF = "hanim_l_metatarsal_phalanx_5_pt"
HAnimSite468.translation = [0.12,0.02,0.04]
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.description = "HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt"

HAnimSite468.children.append(TouchSensor469)
Shape470 = x3d.Shape()
Appearance471 = x3d.Appearance()
Material472 = x3d.Material()
Material472.diffuseColor = [1,1,1]

Appearance471.material = Material472

Shape470.appearance = Appearance471
IndexedFaceSet473 = x3d.IndexedFaceSet()
IndexedFaceSet473.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet473.creaseAngle = 0.5
IndexedFaceSet473.solid = False
ColorRGBA474 = x3d.ColorRGBA()

IndexedFaceSet473.color = ColorRGBA474
Coordinate475 = x3d.Coordinate()

IndexedFaceSet473.coord = Coordinate475

Shape470.geometry = IndexedFaceSet473

HAnimSite468.children.append(Shape470)
Billboard476 = x3d.Billboard()
Billboard476.axisOfRotation = [0,0,0]
Shape477 = x3d.Shape()
Text478 = x3d.Text()
Text478.string = ["56"]
FontStyle479 = x3d.FontStyle()
FontStyle479.size = 0.035

Text478.fontStyle = FontStyle479

Shape477.geometry = Text478

Billboard476.children.append(Shape477)

HAnimSite468.children.append(Billboard476)

HAnimSegment467.children.append(HAnimSite468)
Shape480 = x3d.Shape()
LineSet481 = x3d.LineSet()
LineSet481.vertexCount = [2]
ColorRGBA482 = x3d.ColorRGBA()

LineSet481.color = ColorRGBA482
Coordinate483 = x3d.Coordinate()

LineSet481.coord = Coordinate483

Shape480.geometry = LineSet481

HAnimSegment467.children.append(Shape480)

HAnimJoint466.children.append(HAnimSegment467)
HAnimJoint484 = x3d.HAnimJoint()
HAnimJoint484.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint484.DEF = "hanim_l_tarsal_distal_interphalangeal_5"
HAnimJoint484.center = [0.12728,0.00856,0.10188]
HAnimJoint484.ulimit = [0,0,0]
HAnimJoint484.llimit = [0,0,0]
HAnimSegment485 = x3d.HAnimSegment()
HAnimSegment485.name = "l_tarsal_distal_phalanx_5"
HAnimSegment485.DEF = "hanim_l_tarsal_distal_phalanx_5"
HAnimSite486 = x3d.HAnimSite()
HAnimSite486.name = "l_tarsal_distal_phalanx_5"
HAnimSite486.DEF = "hanim_l_tarsal_distal_phalanx_5_tip"
HAnimSite486.translation = [0.125,0.016,0.115]
TouchSensor487 = x3d.TouchSensor()
TouchSensor487.description = "HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip"

HAnimSite486.children.append(TouchSensor487)
Shape488 = x3d.Shape()
Appearance489 = x3d.Appearance()
Material490 = x3d.Material()
Material490.diffuseColor = [1,1,1]

Appearance489.material = Material490

Shape488.appearance = Appearance489
IndexedFaceSet491 = x3d.IndexedFaceSet()
IndexedFaceSet491.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet491.creaseAngle = 0.5
IndexedFaceSet491.solid = False
ColorRGBA492 = x3d.ColorRGBA()

IndexedFaceSet491.color = ColorRGBA492
Coordinate493 = x3d.Coordinate()

IndexedFaceSet491.coord = Coordinate493

Shape488.geometry = IndexedFaceSet491

HAnimSite486.children.append(Shape488)
Billboard494 = x3d.Billboard()
Billboard494.axisOfRotation = [0,0,0]
Shape495 = x3d.Shape()
Text496 = x3d.Text()
Text496.string = ["115"]
FontStyle497 = x3d.FontStyle()
FontStyle497.size = 0.035

Text496.fontStyle = FontStyle497

Shape495.geometry = Text496

Billboard494.children.append(Shape495)

HAnimSite486.children.append(Billboard494)

HAnimSegment485.children.append(HAnimSite486)
Shape498 = x3d.Shape()
LineSet499 = x3d.LineSet()
LineSet499.vertexCount = [2]
ColorRGBA500 = x3d.ColorRGBA()

LineSet499.color = ColorRGBA500
Coordinate501 = x3d.Coordinate()

LineSet499.coord = Coordinate501

Shape498.geometry = LineSet499

HAnimSegment485.children.append(Shape498)

HAnimJoint484.children.append(HAnimSegment485)

HAnimJoint466.children.append(HAnimJoint484)

HAnimJoint460.children.append(HAnimJoint466)

HAnimJoint454.children.append(HAnimJoint460)

HAnimJoint412.children.append(HAnimJoint454)

HAnimJoint406.children.append(HAnimJoint412)

HAnimJoint238.children.append(HAnimJoint406)

HAnimJoint196.children.append(HAnimJoint238)

HAnimJoint142.children.append(HAnimJoint196)

HAnimJoint16.children.append(HAnimJoint142)
HAnimJoint502 = x3d.HAnimJoint()
HAnimJoint502.name = "r_hip"
HAnimJoint502.DEF = "hanim_r_hip"
HAnimJoint502.center = [-0.09466,0.82665,-0.01835]
HAnimJoint502.ulimit = [0,0,0]
HAnimJoint502.llimit = [0,0,0]
HAnimSegment503 = x3d.HAnimSegment()
HAnimSegment503.name = "r_thigh"
HAnimSegment503.DEF = "hanim_r_thigh"
HAnimSite504 = x3d.HAnimSite()
HAnimSite504.name = "r_knee_crease"
HAnimSite504.DEF = "hanim_r_knee_crease_pt"
HAnimSite504.translation = [-0.09,0.41,-0.056]
TouchSensor505 = x3d.TouchSensor()
TouchSensor505.description = "HAnimSite 91 hanim_r_knee_crease_pt"

HAnimSite504.children.append(TouchSensor505)
Shape506 = x3d.Shape()
Appearance507 = x3d.Appearance()
Material508 = x3d.Material()
Material508.diffuseColor = [1,1,1]

Appearance507.material = Material508

Shape506.appearance = Appearance507
IndexedFaceSet509 = x3d.IndexedFaceSet()
IndexedFaceSet509.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet509.creaseAngle = 0.5
IndexedFaceSet509.solid = False
ColorRGBA510 = x3d.ColorRGBA()

IndexedFaceSet509.color = ColorRGBA510
Coordinate511 = x3d.Coordinate()

IndexedFaceSet509.coord = Coordinate511

Shape506.geometry = IndexedFaceSet509

HAnimSite504.children.append(Shape506)
Billboard512 = x3d.Billboard()
Billboard512.axisOfRotation = [0,0,0]
Shape513 = x3d.Shape()
Text514 = x3d.Text()
Text514.string = ["91"]
FontStyle515 = x3d.FontStyle()
FontStyle515.size = 0.035

Text514.fontStyle = FontStyle515

Shape513.geometry = Text514

Billboard512.children.append(Shape513)

HAnimSite504.children.append(Billboard512)

HAnimSegment503.children.append(HAnimSite504)
HAnimSite516 = x3d.HAnimSite()
HAnimSite516.name = "r_femoral_medial_epicondyle"
HAnimSite516.DEF = "hanim_r_femoral_medial_epicondyle_pt"
HAnimSite516.translation = [-0.039,0.41,-0.01]
TouchSensor517 = x3d.TouchSensor()
TouchSensor517.description = "HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt"

HAnimSite516.children.append(TouchSensor517)
Shape518 = x3d.Shape()
Appearance519 = x3d.Appearance()
Material520 = x3d.Material()
Material520.diffuseColor = [1,1,1]

Appearance519.material = Material520

Shape518.appearance = Appearance519
IndexedFaceSet521 = x3d.IndexedFaceSet()
IndexedFaceSet521.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet521.creaseAngle = 0.5
IndexedFaceSet521.solid = False
ColorRGBA522 = x3d.ColorRGBA()

IndexedFaceSet521.color = ColorRGBA522
Coordinate523 = x3d.Coordinate()

IndexedFaceSet521.coord = Coordinate523

Shape518.geometry = IndexedFaceSet521

HAnimSite516.children.append(Shape518)
Billboard524 = x3d.Billboard()
Billboard524.axisOfRotation = [0,0,0]
Shape525 = x3d.Shape()
Text526 = x3d.Text()
Text526.string = ["44"]
FontStyle527 = x3d.FontStyle()
FontStyle527.size = 0.035

Text526.fontStyle = FontStyle527

Shape525.geometry = Text526

Billboard524.children.append(Shape525)

HAnimSite516.children.append(Billboard524)

HAnimSegment503.children.append(HAnimSite516)
HAnimSite528 = x3d.HAnimSite()
HAnimSite528.name = "r_femoral_lateral_epicondyle"
HAnimSite528.DEF = "hanim_r_femoral_lateral_epicondyle_pt"
HAnimSite528.translation = [-0.127,0.41,-0.01]
TouchSensor529 = x3d.TouchSensor()
TouchSensor529.description = "HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt"

HAnimSite528.children.append(TouchSensor529)
Shape530 = x3d.Shape()
Appearance531 = x3d.Appearance()
Material532 = x3d.Material()
Material532.diffuseColor = [1,1,1]

Appearance531.material = Material532

Shape530.appearance = Appearance531
IndexedFaceSet533 = x3d.IndexedFaceSet()
IndexedFaceSet533.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet533.creaseAngle = 0.5
IndexedFaceSet533.solid = False
ColorRGBA534 = x3d.ColorRGBA()

IndexedFaceSet533.color = ColorRGBA534
Coordinate535 = x3d.Coordinate()

IndexedFaceSet533.coord = Coordinate535

Shape530.geometry = IndexedFaceSet533

HAnimSite528.children.append(Shape530)
Billboard536 = x3d.Billboard()
Billboard536.axisOfRotation = [0,0,0]
Shape537 = x3d.Shape()
Text538 = x3d.Text()
Text538.string = ["43"]
FontStyle539 = x3d.FontStyle()
FontStyle539.size = 0.035

Text538.fontStyle = FontStyle539

Shape537.geometry = Text538

Billboard536.children.append(Shape537)

HAnimSite528.children.append(Billboard536)

HAnimSegment503.children.append(HAnimSite528)
HAnimSite540 = x3d.HAnimSite()
HAnimSite540.name = "r_suprapatella"
HAnimSite540.DEF = "hanim_r_suprapatella_pt"
HAnimSite540.translation = [-0.085,0.41,0.042]
TouchSensor541 = x3d.TouchSensor()
TouchSensor541.description = "HAnimSite 45 hanim_r_suprapatella_pt"

HAnimSite540.children.append(TouchSensor541)
Shape542 = x3d.Shape()
Appearance543 = x3d.Appearance()
Material544 = x3d.Material()
Material544.diffuseColor = [1,1,1]

Appearance543.material = Material544

Shape542.appearance = Appearance543
IndexedFaceSet545 = x3d.IndexedFaceSet()
IndexedFaceSet545.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet545.creaseAngle = 0.5
IndexedFaceSet545.solid = False
ColorRGBA546 = x3d.ColorRGBA()

IndexedFaceSet545.color = ColorRGBA546
Coordinate547 = x3d.Coordinate()

IndexedFaceSet545.coord = Coordinate547

Shape542.geometry = IndexedFaceSet545

HAnimSite540.children.append(Shape542)
Billboard548 = x3d.Billboard()
Billboard548.axisOfRotation = [0,0,0]
Shape549 = x3d.Shape()
Text550 = x3d.Text()
Text550.string = ["45"]
FontStyle551 = x3d.FontStyle()
FontStyle551.size = 0.035

Text550.fontStyle = FontStyle551

Shape549.geometry = Text550

Billboard548.children.append(Shape549)

HAnimSite540.children.append(Billboard548)

HAnimSegment503.children.append(HAnimSite540)
Shape552 = x3d.Shape()
LineSet553 = x3d.LineSet()
LineSet553.vertexCount = [2]
ColorRGBA554 = x3d.ColorRGBA()

LineSet553.color = ColorRGBA554
Coordinate555 = x3d.Coordinate()

LineSet553.coord = Coordinate555

Shape552.geometry = LineSet553

HAnimSegment503.children.append(Shape552)

HAnimJoint502.children.append(HAnimSegment503)
HAnimJoint556 = x3d.HAnimJoint()
HAnimJoint556.name = "r_knee"
HAnimJoint556.DEF = "hanim_r_knee"
HAnimJoint556.center = [-0.0926,0.408825,-0.01944]
HAnimJoint556.ulimit = [0,0,0]
HAnimJoint556.llimit = [0,0,0]
HAnimSegment557 = x3d.HAnimSegment()
HAnimSegment557.name = "r_calf"
HAnimSegment557.DEF = "hanim_r_calf"
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.name = "r_tibiale"
HAnimSite558.DEF = "hanim_r_tibiale_pt"
HAnimSite558.translation = [-0.09,0.31,0.038]
TouchSensor559 = x3d.TouchSensor()
TouchSensor559.description = "HAnimSite 51 hanim_r_tibiale_pt"

HAnimSite558.children.append(TouchSensor559)
Shape560 = x3d.Shape()
Appearance561 = x3d.Appearance()
Material562 = x3d.Material()
Material562.diffuseColor = [1,1,1]

Appearance561.material = Material562

Shape560.appearance = Appearance561
IndexedFaceSet563 = x3d.IndexedFaceSet()
IndexedFaceSet563.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet563.creaseAngle = 0.5
IndexedFaceSet563.solid = False
ColorRGBA564 = x3d.ColorRGBA()

IndexedFaceSet563.color = ColorRGBA564
Coordinate565 = x3d.Coordinate()

IndexedFaceSet563.coord = Coordinate565

Shape560.geometry = IndexedFaceSet563

HAnimSite558.children.append(Shape560)
Billboard566 = x3d.Billboard()
Billboard566.axisOfRotation = [0,0,0]
Shape567 = x3d.Shape()
Text568 = x3d.Text()
Text568.string = ["51"]
FontStyle569 = x3d.FontStyle()
FontStyle569.size = 0.035

Text568.fontStyle = FontStyle569

Shape567.geometry = Text568

Billboard566.children.append(Shape567)

HAnimSite558.children.append(Billboard566)

HAnimSegment557.children.append(HAnimSite558)
HAnimSite570 = x3d.HAnimSite()
HAnimSite570.name = "r_medial_malleolus"
HAnimSite570.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite570.translation = [-0.061,0.095,-0.02]
TouchSensor571 = x3d.TouchSensor()
TouchSensor571.description = "HAnimSite 52 hanim_r_medial_malleolus_pt"

HAnimSite570.children.append(TouchSensor571)
Shape572 = x3d.Shape()
Appearance573 = x3d.Appearance()
Material574 = x3d.Material()
Material574.diffuseColor = [1,1,1]

Appearance573.material = Material574

Shape572.appearance = Appearance573
IndexedFaceSet575 = x3d.IndexedFaceSet()
IndexedFaceSet575.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet575.creaseAngle = 0.5
IndexedFaceSet575.solid = False
ColorRGBA576 = x3d.ColorRGBA()

IndexedFaceSet575.color = ColorRGBA576
Coordinate577 = x3d.Coordinate()

IndexedFaceSet575.coord = Coordinate577

Shape572.geometry = IndexedFaceSet575

HAnimSite570.children.append(Shape572)
Billboard578 = x3d.Billboard()
Billboard578.axisOfRotation = [0,0,0]
Shape579 = x3d.Shape()
Text580 = x3d.Text()
Text580.string = ["52"]
FontStyle581 = x3d.FontStyle()
FontStyle581.size = 0.035

Text580.fontStyle = FontStyle581

Shape579.geometry = Text580

Billboard578.children.append(Shape579)

HAnimSite570.children.append(Billboard578)

HAnimSegment557.children.append(HAnimSite570)
HAnimSite582 = x3d.HAnimSite()
HAnimSite582.name = "r_lateral_malleolus"
HAnimSite582.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite582.translation = [-0.12,0.095,-0.02]
TouchSensor583 = x3d.TouchSensor()
TouchSensor583.description = "HAnimSite 53 hanim_r_lateral_malleolus_pt"

HAnimSite582.children.append(TouchSensor583)
Shape584 = x3d.Shape()
Appearance585 = x3d.Appearance()
Material586 = x3d.Material()
Material586.diffuseColor = [1,1,1]

Appearance585.material = Material586

Shape584.appearance = Appearance585
IndexedFaceSet587 = x3d.IndexedFaceSet()
IndexedFaceSet587.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet587.creaseAngle = 0.5
IndexedFaceSet587.solid = False
ColorRGBA588 = x3d.ColorRGBA()

IndexedFaceSet587.color = ColorRGBA588
Coordinate589 = x3d.Coordinate()

IndexedFaceSet587.coord = Coordinate589

Shape584.geometry = IndexedFaceSet587

HAnimSite582.children.append(Shape584)
Billboard590 = x3d.Billboard()
Billboard590.axisOfRotation = [0,0,0]
Shape591 = x3d.Shape()
Text592 = x3d.Text()
Text592.string = ["53"]
FontStyle593 = x3d.FontStyle()
FontStyle593.size = 0.035

Text592.fontStyle = FontStyle593

Shape591.geometry = Text592

Billboard590.children.append(Shape591)

HAnimSite582.children.append(Billboard590)

HAnimSegment557.children.append(HAnimSite582)
Shape594 = x3d.Shape()
LineSet595 = x3d.LineSet()
LineSet595.vertexCount = [2]
ColorRGBA596 = x3d.ColorRGBA()

LineSet595.color = ColorRGBA596
Coordinate597 = x3d.Coordinate()

LineSet595.coord = Coordinate597

Shape594.geometry = LineSet595

HAnimSegment557.children.append(Shape594)

HAnimJoint556.children.append(HAnimSegment557)
HAnimJoint598 = x3d.HAnimJoint()
HAnimJoint598.name = "r_talocrural"
HAnimJoint598.DEF = "hanim_r_talocrural"
HAnimJoint598.center = [-0.08845,0.09544,-0.01045]
HAnimJoint598.ulimit = [0,0,0]
HAnimJoint598.llimit = [0,0,0]
HAnimSegment599 = x3d.HAnimSegment()
HAnimSegment599.name = "r_talus"
HAnimSegment599.DEF = "hanim_r_talus"
HAnimSite600 = x3d.HAnimSite()
HAnimSite600.name = "r_sphyrion"
HAnimSite600.DEF = "hanim_r_sphyrion_pt"
HAnimSite600.translation = [-0.054,0.065,-0.02]
TouchSensor601 = x3d.TouchSensor()
TouchSensor601.description = "HAnimSite 54 hanim_r_sphyrion_pt"

HAnimSite600.children.append(TouchSensor601)
Shape602 = x3d.Shape()
Appearance603 = x3d.Appearance()
Material604 = x3d.Material()
Material604.diffuseColor = [1,1,1]

Appearance603.material = Material604

Shape602.appearance = Appearance603
IndexedFaceSet605 = x3d.IndexedFaceSet()
IndexedFaceSet605.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet605.creaseAngle = 0.5
IndexedFaceSet605.solid = False
ColorRGBA606 = x3d.ColorRGBA()

IndexedFaceSet605.color = ColorRGBA606
Coordinate607 = x3d.Coordinate()

IndexedFaceSet605.coord = Coordinate607

Shape602.geometry = IndexedFaceSet605

HAnimSite600.children.append(Shape602)
Billboard608 = x3d.Billboard()
Billboard608.axisOfRotation = [0,0,0]
Shape609 = x3d.Shape()
Text610 = x3d.Text()
Text610.string = ["54"]
FontStyle611 = x3d.FontStyle()
FontStyle611.size = 0.035

Text610.fontStyle = FontStyle611

Shape609.geometry = Text610

Billboard608.children.append(Shape609)

HAnimSite600.children.append(Billboard608)

HAnimSegment599.children.append(HAnimSite600)
HAnimSite612 = x3d.HAnimSite()
HAnimSite612.name = "r_calcaneus_posterior"
HAnimSite612.DEF = "hanim_r_calcaneus_posterior_pt"
HAnimSite612.translation = [-0.09,0.03,-0.06]
TouchSensor613 = x3d.TouchSensor()
TouchSensor613.description = "HAnimSite 62 hanim_r_calcaneus_posterior_pt"

HAnimSite612.children.append(TouchSensor613)
Shape614 = x3d.Shape()
Appearance615 = x3d.Appearance()
Material616 = x3d.Material()
Material616.diffuseColor = [1,1,1]

Appearance615.material = Material616

Shape614.appearance = Appearance615
IndexedFaceSet617 = x3d.IndexedFaceSet()
IndexedFaceSet617.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet617.creaseAngle = 0.5
IndexedFaceSet617.solid = False
ColorRGBA618 = x3d.ColorRGBA()

IndexedFaceSet617.color = ColorRGBA618
Coordinate619 = x3d.Coordinate()

IndexedFaceSet617.coord = Coordinate619

Shape614.geometry = IndexedFaceSet617

HAnimSite612.children.append(Shape614)
Billboard620 = x3d.Billboard()
Billboard620.axisOfRotation = [0,0,0]
Shape621 = x3d.Shape()
Text622 = x3d.Text()
Text622.string = ["62"]
FontStyle623 = x3d.FontStyle()
FontStyle623.size = 0.035

Text622.fontStyle = FontStyle623

Shape621.geometry = Text622

Billboard620.children.append(Shape621)

HAnimSite612.children.append(Billboard620)

HAnimSegment599.children.append(HAnimSite612)
Shape624 = x3d.Shape()
LineSet625 = x3d.LineSet()
LineSet625.vertexCount = [2]
ColorRGBA626 = x3d.ColorRGBA()

LineSet625.color = ColorRGBA626
Coordinate627 = x3d.Coordinate()

LineSet625.coord = Coordinate627

Shape624.geometry = LineSet625

HAnimSegment599.children.append(Shape624)

HAnimJoint598.children.append(HAnimSegment599)
HAnimJoint628 = x3d.HAnimJoint()
HAnimJoint628.name = "r_talocalcaneonavicular"
HAnimJoint628.DEF = "hanim_r_talocalcaneonavicular"
HAnimJoint628.center = [-0.07794,0.0369,0.00486]
HAnimJoint628.ulimit = [0,0,0]
HAnimJoint628.llimit = [0,0,0]
HAnimSegment629 = x3d.HAnimSegment()
HAnimSegment629.name = "r_navicular"
HAnimSegment629.DEF = "hanim_r_navicular"
Shape630 = x3d.Shape()
LineSet631 = x3d.LineSet()
LineSet631.vertexCount = [2]
ColorRGBA632 = x3d.ColorRGBA()

LineSet631.color = ColorRGBA632
Coordinate633 = x3d.Coordinate()

LineSet631.coord = Coordinate633

Shape630.geometry = LineSet631

HAnimSegment629.children.append(Shape630)

HAnimJoint628.children.append(HAnimSegment629)
HAnimJoint634 = x3d.HAnimJoint()
HAnimJoint634.name = "r_cuneonavicular_1"
HAnimJoint634.DEF = "hanim_r_cuneonavicular_1"
HAnimJoint634.center = [-0.06698,0.032107,0.01839]
HAnimJoint634.ulimit = [0,0,0]
HAnimJoint634.llimit = [0,0,0]
HAnimSegment635 = x3d.HAnimSegment()
HAnimSegment635.name = "r_cuneiform_1"
HAnimSegment635.DEF = "hanim_r_cuneiform_1"
Shape636 = x3d.Shape()
LineSet637 = x3d.LineSet()
LineSet637.vertexCount = [2]
ColorRGBA638 = x3d.ColorRGBA()

LineSet637.color = ColorRGBA638
Coordinate639 = x3d.Coordinate()

LineSet637.coord = Coordinate639

Shape636.geometry = LineSet637

HAnimSegment635.children.append(Shape636)

HAnimJoint634.children.append(HAnimSegment635)
HAnimJoint640 = x3d.HAnimJoint()
HAnimJoint640.name = "r_tarsometatarsal_1"
HAnimJoint640.DEF = "hanim_r_tarsometatarsal_1"
HAnimJoint640.center = [-0.064,0.02324,0.04419]
HAnimJoint640.ulimit = [0,0,0]
HAnimJoint640.llimit = [0,0,0]
HAnimSegment641 = x3d.HAnimSegment()
HAnimSegment641.name = "r_metatarsal_1"
HAnimSegment641.DEF = "hanim_r_metatarsal_1"
Shape642 = x3d.Shape()
LineSet643 = x3d.LineSet()
LineSet643.vertexCount = [2]
ColorRGBA644 = x3d.ColorRGBA()

LineSet643.color = ColorRGBA644
Coordinate645 = x3d.Coordinate()

LineSet643.coord = Coordinate645

Shape642.geometry = LineSet643

HAnimSegment641.children.append(Shape642)

HAnimJoint640.children.append(HAnimSegment641)
HAnimJoint646 = x3d.HAnimJoint()
HAnimJoint646.name = "r_metatarsophalangeal_1"
HAnimJoint646.DEF = "hanim_r_metatarsophalangeal_1"
HAnimJoint646.center = [-0.06176,0.014425,0.09362]
HAnimJoint646.ulimit = [0,0,0]
HAnimJoint646.llimit = [0,0,0]
HAnimSegment647 = x3d.HAnimSegment()
HAnimSegment647.name = "r_tarsal_proximal_phalanx_1"
HAnimSegment647.DEF = "hanim_r_tarsal_proximal_phalanx_1"
HAnimSite648 = x3d.HAnimSite()
HAnimSite648.name = "r_metatarsal_phalanx_1"
HAnimSite648.DEF = "hanim_r_metatarsal_phalanx_1_pt"
HAnimSite648.translation = [-0.062,0.012,0.1]
TouchSensor649 = x3d.TouchSensor()
TouchSensor649.description = "HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt"

HAnimSite648.children.append(TouchSensor649)
Shape650 = x3d.Shape()
Appearance651 = x3d.Appearance()
Material652 = x3d.Material()
Material652.diffuseColor = [1,1,1]

Appearance651.material = Material652

Shape650.appearance = Appearance651
IndexedFaceSet653 = x3d.IndexedFaceSet()
IndexedFaceSet653.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet653.creaseAngle = 0.5
IndexedFaceSet653.solid = False
ColorRGBA654 = x3d.ColorRGBA()

IndexedFaceSet653.color = ColorRGBA654
Coordinate655 = x3d.Coordinate()

IndexedFaceSet653.coord = Coordinate655

Shape650.geometry = IndexedFaceSet653

HAnimSite648.children.append(Shape650)
Billboard656 = x3d.Billboard()
Billboard656.axisOfRotation = [0,0,0]
Shape657 = x3d.Shape()
Text658 = x3d.Text()
Text658.string = ["59"]
FontStyle659 = x3d.FontStyle()
FontStyle659.size = 0.035

Text658.fontStyle = FontStyle659

Shape657.geometry = Text658

Billboard656.children.append(Shape657)

HAnimSite648.children.append(Billboard656)

HAnimSegment647.children.append(HAnimSite648)
Shape660 = x3d.Shape()
LineSet661 = x3d.LineSet()
LineSet661.vertexCount = [2]
ColorRGBA662 = x3d.ColorRGBA()

LineSet661.color = ColorRGBA662
Coordinate663 = x3d.Coordinate()

LineSet661.coord = Coordinate663

Shape660.geometry = LineSet661

HAnimSegment647.children.append(Shape660)

HAnimJoint646.children.append(HAnimSegment647)
HAnimJoint664 = x3d.HAnimJoint()
HAnimJoint664.name = "r_tarsal_interphalangeal_1"
HAnimJoint664.DEF = "hanim_r_tarsal_interphalangeal_1"
HAnimJoint664.center = [-0.06174,0.0121,0.1153]
HAnimJoint664.ulimit = [0,0,0]
HAnimJoint664.llimit = [0,0,0]
HAnimSegment665 = x3d.HAnimSegment()
HAnimSegment665.name = "r_tarsal_distal_phalanx_1"
HAnimSegment665.DEF = "hanim_r_tarsal_distal_phalanx_1"
HAnimSite666 = x3d.HAnimSite()
HAnimSite666.name = "r_tarsal_distal_phalanx_1"
HAnimSite666.DEF = "hanim_r_tarsal_distal_phalanx_1_tip"
HAnimSite666.translation = [-0.06,0.012,0.14]
TouchSensor667 = x3d.TouchSensor()
TouchSensor667.description = "HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip"

HAnimSite666.children.append(TouchSensor667)
Shape668 = x3d.Shape()
Appearance669 = x3d.Appearance()
Material670 = x3d.Material()
Material670.diffuseColor = [1,1,1]

Appearance669.material = Material670

Shape668.appearance = Appearance669
IndexedFaceSet671 = x3d.IndexedFaceSet()
IndexedFaceSet671.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet671.creaseAngle = 0.5
IndexedFaceSet671.solid = False
ColorRGBA672 = x3d.ColorRGBA()

IndexedFaceSet671.color = ColorRGBA672
Coordinate673 = x3d.Coordinate()

IndexedFaceSet671.coord = Coordinate673

Shape668.geometry = IndexedFaceSet671

HAnimSite666.children.append(Shape668)
Billboard674 = x3d.Billboard()
Billboard674.axisOfRotation = [0,0,0]
Shape675 = x3d.Shape()
Text676 = x3d.Text()
Text676.string = ["116"]
FontStyle677 = x3d.FontStyle()
FontStyle677.size = 0.035

Text676.fontStyle = FontStyle677

Shape675.geometry = Text676

Billboard674.children.append(Shape675)

HAnimSite666.children.append(Billboard674)

HAnimSegment665.children.append(HAnimSite666)
Shape678 = x3d.Shape()
LineSet679 = x3d.LineSet()
LineSet679.vertexCount = [2]
ColorRGBA680 = x3d.ColorRGBA()

LineSet679.color = ColorRGBA680
Coordinate681 = x3d.Coordinate()

LineSet679.coord = Coordinate681

Shape678.geometry = LineSet679

HAnimSegment665.children.append(Shape678)

HAnimJoint664.children.append(HAnimSegment665)

HAnimJoint646.children.append(HAnimJoint664)

HAnimJoint640.children.append(HAnimJoint646)

HAnimJoint634.children.append(HAnimJoint640)

HAnimJoint628.children.append(HAnimJoint634)
HAnimJoint682 = x3d.HAnimJoint()
HAnimJoint682.name = "r_cuneonavicular_2"
HAnimJoint682.DEF = "hanim_r_cuneonavicular_2"
HAnimJoint682.center = [-0.081,0.0335,0.02142]
HAnimJoint682.ulimit = [0,0,0]
HAnimJoint682.llimit = [0,0,0]
HAnimSegment683 = x3d.HAnimSegment()
HAnimSegment683.name = "r_cuneiform_2"
HAnimSegment683.DEF = "hanim_r_cuneiform_2"
Shape684 = x3d.Shape()
LineSet685 = x3d.LineSet()
LineSet685.vertexCount = [2]
ColorRGBA686 = x3d.ColorRGBA()

LineSet685.color = ColorRGBA686
Coordinate687 = x3d.Coordinate()

LineSet685.coord = Coordinate687

Shape684.geometry = LineSet685

HAnimSegment683.children.append(Shape684)

HAnimJoint682.children.append(HAnimSegment683)
HAnimJoint688 = x3d.HAnimJoint()
HAnimJoint688.name = "r_tarsometatarsal_2"
HAnimJoint688.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint688.center = [-0.07983,0.0261,0.04106]
HAnimJoint688.ulimit = [0,0,0]
HAnimJoint688.llimit = [0,0,0]
HAnimSegment689 = x3d.HAnimSegment()
HAnimSegment689.name = "r_metatarsal_2"
HAnimSegment689.DEF = "hanim_r_metatarsal_2"
Shape690 = x3d.Shape()
LineSet691 = x3d.LineSet()
LineSet691.vertexCount = [2]
ColorRGBA692 = x3d.ColorRGBA()

LineSet691.color = ColorRGBA692
Coordinate693 = x3d.Coordinate()

LineSet691.coord = Coordinate693

Shape690.geometry = LineSet691

HAnimSegment689.children.append(Shape690)

HAnimJoint688.children.append(HAnimSegment689)
HAnimJoint694 = x3d.HAnimJoint()
HAnimJoint694.name = "r_metatarsophalangeal_2"
HAnimJoint694.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint694.center = [-0.0821,0.01497,0.09783]
HAnimJoint694.ulimit = [0,0,0]
HAnimJoint694.llimit = [0,0,0]
HAnimSegment695 = x3d.HAnimSegment()
HAnimSegment695.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment695.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Shape696 = x3d.Shape()
LineSet697 = x3d.LineSet()
LineSet697.vertexCount = [2]
ColorRGBA698 = x3d.ColorRGBA()

LineSet697.color = ColorRGBA698
Coordinate699 = x3d.Coordinate()

LineSet697.coord = Coordinate699

Shape696.geometry = LineSet697

HAnimSegment695.children.append(Shape696)

HAnimJoint694.children.append(HAnimSegment695)
HAnimJoint700 = x3d.HAnimJoint()
HAnimJoint700.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint700.DEF = "hanim_r_tarsal_proximal_interphalangeal_2"
HAnimJoint700.center = [-0.0839,0.012647,0.114]
HAnimJoint700.ulimit = [0,0,0]
HAnimJoint700.llimit = [0,0,0]
HAnimSegment701 = x3d.HAnimSegment()
HAnimSegment701.name = "r_tarsal_middle_phalanx_2"
HAnimSegment701.DEF = "hanim_r_tarsal_middle_phalanx_2"
Shape702 = x3d.Shape()
LineSet703 = x3d.LineSet()
LineSet703.vertexCount = [2]
ColorRGBA704 = x3d.ColorRGBA()

LineSet703.color = ColorRGBA704
Coordinate705 = x3d.Coordinate()

LineSet703.coord = Coordinate705

Shape702.geometry = LineSet703

HAnimSegment701.children.append(Shape702)

HAnimJoint700.children.append(HAnimSegment701)
HAnimJoint706 = x3d.HAnimJoint()
HAnimJoint706.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint706.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint706.center = [-0.0839,0.009825,0.123435]
HAnimJoint706.ulimit = [0,0,0]
HAnimJoint706.llimit = [0,0,0]
HAnimSegment707 = x3d.HAnimSegment()
HAnimSegment707.name = "r_tarsal_distal_phalanx_2"
HAnimSegment707.DEF = "hanim_r_tarsal_distal_phalanx_2"
HAnimSite708 = x3d.HAnimSite()
HAnimSite708.name = "r_tarsal_distal_phalanx_2"
HAnimSite708.DEF = "hanim_r_tarsal_distal_phalanx_2_tip"
HAnimSite708.translation = [-0.08,0.016,0.14]
TouchSensor709 = x3d.TouchSensor()
TouchSensor709.description = "HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip"

HAnimSite708.children.append(TouchSensor709)
Shape710 = x3d.Shape()
Appearance711 = x3d.Appearance()
Material712 = x3d.Material()
Material712.diffuseColor = [1,1,1]

Appearance711.material = Material712

Shape710.appearance = Appearance711
IndexedFaceSet713 = x3d.IndexedFaceSet()
IndexedFaceSet713.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet713.creaseAngle = 0.5
IndexedFaceSet713.solid = False
ColorRGBA714 = x3d.ColorRGBA()

IndexedFaceSet713.color = ColorRGBA714
Coordinate715 = x3d.Coordinate()

IndexedFaceSet713.coord = Coordinate715

Shape710.geometry = IndexedFaceSet713

HAnimSite708.children.append(Shape710)
Billboard716 = x3d.Billboard()
Billboard716.axisOfRotation = [0,0,0]
Shape717 = x3d.Shape()
Text718 = x3d.Text()
Text718.string = ["117"]
FontStyle719 = x3d.FontStyle()
FontStyle719.size = 0.035

Text718.fontStyle = FontStyle719

Shape717.geometry = Text718

Billboard716.children.append(Shape717)

HAnimSite708.children.append(Billboard716)

HAnimSegment707.children.append(HAnimSite708)
Shape720 = x3d.Shape()
LineSet721 = x3d.LineSet()
LineSet721.vertexCount = [2]
ColorRGBA722 = x3d.ColorRGBA()

LineSet721.color = ColorRGBA722
Coordinate723 = x3d.Coordinate()

LineSet721.coord = Coordinate723

Shape720.geometry = LineSet721

HAnimSegment707.children.append(Shape720)

HAnimJoint706.children.append(HAnimSegment707)

HAnimJoint700.children.append(HAnimJoint706)

HAnimJoint694.children.append(HAnimJoint700)

HAnimJoint688.children.append(HAnimJoint694)

HAnimJoint682.children.append(HAnimJoint688)

HAnimJoint628.children.append(HAnimJoint682)
HAnimJoint724 = x3d.HAnimJoint()
HAnimJoint724.name = "r_cuneonavicular_3"
HAnimJoint724.DEF = "hanim_r_cuneonavicular_3"
HAnimJoint724.center = [-0.09261,0.03339,0.01982]
HAnimJoint724.ulimit = [0,0,0]
HAnimJoint724.llimit = [0,0,0]
HAnimSegment725 = x3d.HAnimSegment()
HAnimSegment725.name = "r_cuneiform_3"
HAnimSegment725.DEF = "hanim_r_cuneiform_3"
Shape726 = x3d.Shape()
LineSet727 = x3d.LineSet()
LineSet727.vertexCount = [2]
ColorRGBA728 = x3d.ColorRGBA()

LineSet727.color = ColorRGBA728
Coordinate729 = x3d.Coordinate()

LineSet727.coord = Coordinate729

Shape726.geometry = LineSet727

HAnimSegment725.children.append(Shape726)

HAnimJoint724.children.append(HAnimSegment725)
HAnimJoint730 = x3d.HAnimJoint()
HAnimJoint730.name = "r_tarsometatarsal_3"
HAnimJoint730.DEF = "hanim_r_tarsometatarsal_3"
HAnimJoint730.center = [-0.09423,0.0261,0.0394]
HAnimJoint730.ulimit = [0,0,0]
HAnimJoint730.llimit = [0,0,0]
HAnimSegment731 = x3d.HAnimSegment()
HAnimSegment731.name = "r_metatarsal_3"
HAnimSegment731.DEF = "hanim_r_metatarsal_3"
Shape732 = x3d.Shape()
LineSet733 = x3d.LineSet()
LineSet733.vertexCount = [2]
ColorRGBA734 = x3d.ColorRGBA()

LineSet733.color = ColorRGBA734
Coordinate735 = x3d.Coordinate()

LineSet733.coord = Coordinate735

Shape732.geometry = LineSet733

HAnimSegment731.children.append(Shape732)

HAnimJoint730.children.append(HAnimSegment731)
HAnimJoint736 = x3d.HAnimJoint()
HAnimJoint736.name = "r_metatarsophalangeal_3"
HAnimJoint736.DEF = "hanim_r_metatarsophalangeal_3"
HAnimJoint736.center = [-0.0961,0.01505,0.09542]
HAnimJoint736.ulimit = [0,0,0]
HAnimJoint736.llimit = [0,0,0]
HAnimSegment737 = x3d.HAnimSegment()
HAnimSegment737.name = "r_tarsal_proximal_phalanx_3"
HAnimSegment737.DEF = "hanim_r_tarsal_proximal_phalanx_3"
Shape738 = x3d.Shape()
LineSet739 = x3d.LineSet()
LineSet739.vertexCount = [2]
ColorRGBA740 = x3d.ColorRGBA()

LineSet739.color = ColorRGBA740
Coordinate741 = x3d.Coordinate()

LineSet739.coord = Coordinate741

Shape738.geometry = LineSet739

HAnimSegment737.children.append(Shape738)

HAnimJoint736.children.append(HAnimSegment737)
HAnimJoint742 = x3d.HAnimJoint()
HAnimJoint742.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint742.DEF = "hanim_r_tarsal_proximal_interphalangeal_3"
HAnimJoint742.center = [-0.0985,0.01192,0.11047]
HAnimJoint742.ulimit = [0,0,0]
HAnimJoint742.llimit = [0,0,0]
HAnimSegment743 = x3d.HAnimSegment()
HAnimSegment743.name = "r_tarsal_middle_phalanx_3"
HAnimSegment743.DEF = "hanim_r_tarsal_middle_phalanx_3"
Shape744 = x3d.Shape()
LineSet745 = x3d.LineSet()
LineSet745.vertexCount = [2]
ColorRGBA746 = x3d.ColorRGBA()

LineSet745.color = ColorRGBA746
Coordinate747 = x3d.Coordinate()

LineSet745.coord = Coordinate747

Shape744.geometry = LineSet745

HAnimSegment743.children.append(Shape744)

HAnimJoint742.children.append(HAnimSegment743)
HAnimJoint748 = x3d.HAnimJoint()
HAnimJoint748.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint748.DEF = "hanim_r_tarsal_distal_interphalangeal_3"
HAnimJoint748.center = [-0.100035,0.00982,0.1197]
HAnimJoint748.ulimit = [0,0,0]
HAnimJoint748.llimit = [0,0,0]
HAnimSegment749 = x3d.HAnimSegment()
HAnimSegment749.name = "r_tarsal_distal_phalanx_3"
HAnimSegment749.DEF = "hanim_r_tarsal_distal_phalanx_3"
HAnimSite750 = x3d.HAnimSite()
HAnimSite750.name = "r_tarsal_distal_phalanx_3"
HAnimSite750.DEF = "hanim_r_tarsal_distal_phalanx_3_tip"
HAnimSite750.translation = [-0.1,0.016,0.14]
TouchSensor751 = x3d.TouchSensor()
TouchSensor751.description = "HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip"

HAnimSite750.children.append(TouchSensor751)
Shape752 = x3d.Shape()
Appearance753 = x3d.Appearance()
Material754 = x3d.Material()
Material754.diffuseColor = [1,1,1]

Appearance753.material = Material754

Shape752.appearance = Appearance753
IndexedFaceSet755 = x3d.IndexedFaceSet()
IndexedFaceSet755.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet755.creaseAngle = 0.5
IndexedFaceSet755.solid = False
ColorRGBA756 = x3d.ColorRGBA()

IndexedFaceSet755.color = ColorRGBA756
Coordinate757 = x3d.Coordinate()

IndexedFaceSet755.coord = Coordinate757

Shape752.geometry = IndexedFaceSet755

HAnimSite750.children.append(Shape752)
Billboard758 = x3d.Billboard()
Billboard758.axisOfRotation = [0,0,0]
Shape759 = x3d.Shape()
Text760 = x3d.Text()
Text760.string = ["118"]
FontStyle761 = x3d.FontStyle()
FontStyle761.size = 0.035

Text760.fontStyle = FontStyle761

Shape759.geometry = Text760

Billboard758.children.append(Shape759)

HAnimSite750.children.append(Billboard758)

HAnimSegment749.children.append(HAnimSite750)
Shape762 = x3d.Shape()
LineSet763 = x3d.LineSet()
LineSet763.vertexCount = [2]
ColorRGBA764 = x3d.ColorRGBA()

LineSet763.color = ColorRGBA764
Coordinate765 = x3d.Coordinate()

LineSet763.coord = Coordinate765

Shape762.geometry = LineSet763

HAnimSegment749.children.append(Shape762)

HAnimJoint748.children.append(HAnimSegment749)

HAnimJoint742.children.append(HAnimJoint748)

HAnimJoint736.children.append(HAnimJoint742)

HAnimJoint730.children.append(HAnimJoint736)

HAnimJoint724.children.append(HAnimJoint730)

HAnimJoint628.children.append(HAnimJoint724)

HAnimJoint598.children.append(HAnimJoint628)
HAnimJoint766 = x3d.HAnimJoint()
HAnimJoint766.name = "r_calcaneocuboid"
HAnimJoint766.DEF = "hanim_r_calcaneocuboid"
HAnimJoint766.center = [-0.088717,0.05798,-0.025965]
HAnimJoint766.ulimit = [0,0,0]
HAnimJoint766.llimit = [0,0,0]
HAnimSegment767 = x3d.HAnimSegment()
HAnimSegment767.name = "r_calcaneus"
HAnimSegment767.DEF = "hanim_r_calcaneus"
Shape768 = x3d.Shape()
LineSet769 = x3d.LineSet()
LineSet769.vertexCount = [2]
ColorRGBA770 = x3d.ColorRGBA()

LineSet769.color = ColorRGBA770
Coordinate771 = x3d.Coordinate()

LineSet769.coord = Coordinate771

Shape768.geometry = LineSet769

HAnimSegment767.children.append(Shape768)

HAnimJoint766.children.append(HAnimSegment767)
HAnimJoint772 = x3d.HAnimJoint()
HAnimJoint772.name = "r_transversetarsal"
HAnimJoint772.DEF = "hanim_r_transversetarsal"
HAnimJoint772.center = [-0.11027,0.03528,0.0021]
HAnimJoint772.ulimit = [0,0,0]
HAnimJoint772.llimit = [0,0,0]
HAnimSegment773 = x3d.HAnimSegment()
HAnimSegment773.name = "r_cuboid"
HAnimSegment773.DEF = "hanim_r_cuboid"
Shape774 = x3d.Shape()
LineSet775 = x3d.LineSet()
LineSet775.vertexCount = [2]
ColorRGBA776 = x3d.ColorRGBA()

LineSet775.color = ColorRGBA776
Coordinate777 = x3d.Coordinate()

LineSet775.coord = Coordinate777

Shape774.geometry = LineSet775

HAnimSegment773.children.append(Shape774)

HAnimJoint772.children.append(HAnimSegment773)
HAnimJoint778 = x3d.HAnimJoint()
HAnimJoint778.name = "r_tarsometatarsal_4"
HAnimJoint778.DEF = "hanim_r_tarsometatarsal_4"
HAnimJoint778.center = [-0.10613,0.02454,0.03843]
HAnimJoint778.ulimit = [0,0,0]
HAnimJoint778.llimit = [0,0,0]
HAnimSegment779 = x3d.HAnimSegment()
HAnimSegment779.name = "r_metatarsal_4"
HAnimSegment779.DEF = "hanim_r_metatarsal_4"
Shape780 = x3d.Shape()
LineSet781 = x3d.LineSet()
LineSet781.vertexCount = [2]
ColorRGBA782 = x3d.ColorRGBA()

LineSet781.color = ColorRGBA782
Coordinate783 = x3d.Coordinate()

LineSet781.coord = Coordinate783

Shape780.geometry = LineSet781

HAnimSegment779.children.append(Shape780)

HAnimJoint778.children.append(HAnimSegment779)
HAnimJoint784 = x3d.HAnimJoint()
HAnimJoint784.name = "r_metatarsophalangeal_4"
HAnimJoint784.DEF = "hanim_r_metatarsophalangeal_4"
HAnimJoint784.center = [-0.1095,0.01435,0.09117]
HAnimJoint784.ulimit = [0,0,0]
HAnimJoint784.llimit = [0,0,0]
HAnimSegment785 = x3d.HAnimSegment()
HAnimSegment785.name = "r_tarsal_proximal_phalanx_4"
HAnimSegment785.DEF = "hanim_r_tarsal_proximal_phalanx_4"
Shape786 = x3d.Shape()
LineSet787 = x3d.LineSet()
LineSet787.vertexCount = [2]
ColorRGBA788 = x3d.ColorRGBA()

LineSet787.color = ColorRGBA788
Coordinate789 = x3d.Coordinate()

LineSet787.coord = Coordinate789

Shape786.geometry = LineSet787

HAnimSegment785.children.append(Shape786)

HAnimJoint784.children.append(HAnimSegment785)
HAnimJoint790 = x3d.HAnimJoint()
HAnimJoint790.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint790.DEF = "hanim_r_tarsal_proximal_interphalangeal_4"
HAnimJoint790.center = [-0.11378,0.01224,0.1063]
HAnimJoint790.ulimit = [0,0,0]
HAnimJoint790.llimit = [0,0,0]
HAnimSegment791 = x3d.HAnimSegment()
HAnimSegment791.name = "r_tarsal_middle_phalanx_4"
HAnimSegment791.DEF = "hanim_r_tarsal_middle_phalanx_4"
Shape792 = x3d.Shape()
LineSet793 = x3d.LineSet()
LineSet793.vertexCount = [2]
ColorRGBA794 = x3d.ColorRGBA()

LineSet793.color = ColorRGBA794
Coordinate795 = x3d.Coordinate()

LineSet793.coord = Coordinate795

Shape792.geometry = LineSet793

HAnimSegment791.children.append(Shape792)

HAnimJoint790.children.append(HAnimSegment791)
HAnimJoint796 = x3d.HAnimJoint()
HAnimJoint796.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint796.DEF = "hanim_r_tarsal_distal_interphalangeal_4"
HAnimJoint796.center = [-0.1153,0.00937,0.11369]
HAnimJoint796.ulimit = [0,0,0]
HAnimJoint796.llimit = [0,0,0]
HAnimSegment797 = x3d.HAnimSegment()
HAnimSegment797.name = "r_tarsal_distal_phalanx_4"
HAnimSegment797.DEF = "hanim_r_tarsal_distal_phalanx_4"
HAnimSite798 = x3d.HAnimSite()
HAnimSite798.name = "r_tarsal_distal_phalanx_4"
HAnimSite798.DEF = "hanim_r_tarsal_distal_phalanx_4_tip"
HAnimSite798.translation = [-0.115,0.016,0.13]
TouchSensor799 = x3d.TouchSensor()
TouchSensor799.description = "HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip"

HAnimSite798.children.append(TouchSensor799)
Shape800 = x3d.Shape()
Appearance801 = x3d.Appearance()
Material802 = x3d.Material()
Material802.diffuseColor = [1,1,1]

Appearance801.material = Material802

Shape800.appearance = Appearance801
IndexedFaceSet803 = x3d.IndexedFaceSet()
IndexedFaceSet803.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet803.creaseAngle = 0.5
IndexedFaceSet803.solid = False
ColorRGBA804 = x3d.ColorRGBA()

IndexedFaceSet803.color = ColorRGBA804
Coordinate805 = x3d.Coordinate()

IndexedFaceSet803.coord = Coordinate805

Shape800.geometry = IndexedFaceSet803

HAnimSite798.children.append(Shape800)
Billboard806 = x3d.Billboard()
Billboard806.axisOfRotation = [0,0,0]
Shape807 = x3d.Shape()
Text808 = x3d.Text()
Text808.string = ["119"]
FontStyle809 = x3d.FontStyle()
FontStyle809.size = 0.035

Text808.fontStyle = FontStyle809

Shape807.geometry = Text808

Billboard806.children.append(Shape807)

HAnimSite798.children.append(Billboard806)

HAnimSegment797.children.append(HAnimSite798)
Shape810 = x3d.Shape()
LineSet811 = x3d.LineSet()
LineSet811.vertexCount = [2]
ColorRGBA812 = x3d.ColorRGBA()

LineSet811.color = ColorRGBA812
Coordinate813 = x3d.Coordinate()

LineSet811.coord = Coordinate813

Shape810.geometry = LineSet811

HAnimSegment797.children.append(Shape810)

HAnimJoint796.children.append(HAnimSegment797)

HAnimJoint790.children.append(HAnimJoint796)

HAnimJoint784.children.append(HAnimJoint790)

HAnimJoint778.children.append(HAnimJoint784)

HAnimJoint772.children.append(HAnimJoint778)
HAnimJoint814 = x3d.HAnimJoint()
HAnimJoint814.name = "r_tarsometatarsal_5"
HAnimJoint814.DEF = "hanim_r_tarsometatarsal_5"
HAnimJoint814.center = [-0.12044,0.020945,0.03474]
HAnimJoint814.ulimit = [0,0,0]
HAnimJoint814.llimit = [0,0,0]
HAnimSegment815 = x3d.HAnimSegment()
HAnimSegment815.name = "r_metatarsal_5"
HAnimSegment815.DEF = "hanim_r_metatarsal_5"
Shape816 = x3d.Shape()
LineSet817 = x3d.LineSet()
LineSet817.vertexCount = [2]
ColorRGBA818 = x3d.ColorRGBA()

LineSet817.color = ColorRGBA818
Coordinate819 = x3d.Coordinate()

LineSet817.coord = Coordinate819

Shape816.geometry = LineSet817

HAnimSegment815.children.append(Shape816)

HAnimJoint814.children.append(HAnimSegment815)
HAnimJoint820 = x3d.HAnimJoint()
HAnimJoint820.name = "r_metatarsophalangeal_5"
HAnimJoint820.DEF = "hanim_r_metatarsophalangeal_5"
HAnimJoint820.center = [-0.12368,0.01367,0.08656]
HAnimJoint820.ulimit = [0,0,0]
HAnimJoint820.llimit = [0,0,0]
HAnimSegment821 = x3d.HAnimSegment()
HAnimSegment821.name = "r_tarsal_proximal_phalanx_5"
HAnimSegment821.DEF = "hanim_r_tarsal_proximal_phalanx_5"
Shape822 = x3d.Shape()
LineSet823 = x3d.LineSet()
LineSet823.vertexCount = [2]
ColorRGBA824 = x3d.ColorRGBA()

LineSet823.color = ColorRGBA824
Coordinate825 = x3d.Coordinate()

LineSet823.coord = Coordinate825

Shape822.geometry = LineSet823

HAnimSegment821.children.append(Shape822)

HAnimJoint820.children.append(HAnimSegment821)
HAnimJoint826 = x3d.HAnimJoint()
HAnimJoint826.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint826.DEF = "hanim_r_tarsal_proximal_interphalangeal_5"
HAnimJoint826.center = [-0.126,0.01086,0.09414]
HAnimJoint826.ulimit = [0,0,0]
HAnimJoint826.llimit = [0,0,0]
HAnimSegment827 = x3d.HAnimSegment()
HAnimSegment827.name = "r_tarsal_middle_phalanx_5"
HAnimSegment827.DEF = "hanim_r_tarsal_middle_phalanx_5"
HAnimSite828 = x3d.HAnimSite()
HAnimSite828.name = "r_metatarsal_phalanx_5"
HAnimSite828.DEF = "hanim_r_metatarsal_phalanx_5_pt"
HAnimSite828.translation = [-0.12,0.02,0.04]
TouchSensor829 = x3d.TouchSensor()
TouchSensor829.description = "HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt"

HAnimSite828.children.append(TouchSensor829)
Shape830 = x3d.Shape()
Appearance831 = x3d.Appearance()
Material832 = x3d.Material()
Material832.diffuseColor = [1,1,1]

Appearance831.material = Material832

Shape830.appearance = Appearance831
IndexedFaceSet833 = x3d.IndexedFaceSet()
IndexedFaceSet833.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet833.creaseAngle = 0.5
IndexedFaceSet833.solid = False
ColorRGBA834 = x3d.ColorRGBA()

IndexedFaceSet833.color = ColorRGBA834
Coordinate835 = x3d.Coordinate()

IndexedFaceSet833.coord = Coordinate835

Shape830.geometry = IndexedFaceSet833

HAnimSite828.children.append(Shape830)
Billboard836 = x3d.Billboard()
Billboard836.axisOfRotation = [0,0,0]
Shape837 = x3d.Shape()
Text838 = x3d.Text()
Text838.string = ["60"]
FontStyle839 = x3d.FontStyle()
FontStyle839.size = 0.035

Text838.fontStyle = FontStyle839

Shape837.geometry = Text838

Billboard836.children.append(Shape837)

HAnimSite828.children.append(Billboard836)

HAnimSegment827.children.append(HAnimSite828)
Shape840 = x3d.Shape()
LineSet841 = x3d.LineSet()
LineSet841.vertexCount = [2]
ColorRGBA842 = x3d.ColorRGBA()

LineSet841.color = ColorRGBA842
Coordinate843 = x3d.Coordinate()

LineSet841.coord = Coordinate843

Shape840.geometry = LineSet841

HAnimSegment827.children.append(Shape840)

HAnimJoint826.children.append(HAnimSegment827)
HAnimJoint844 = x3d.HAnimJoint()
HAnimJoint844.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint844.DEF = "hanim_r_tarsal_distal_interphalangeal_5"
HAnimJoint844.center = [-0.1269,0.00856,0.10188]
HAnimJoint844.ulimit = [0,0,0]
HAnimJoint844.llimit = [0,0,0]
HAnimSegment845 = x3d.HAnimSegment()
HAnimSegment845.name = "r_tarsal_distal_phalanx_5"
HAnimSegment845.DEF = "hanim_r_tarsal_distal_phalanx_5"
HAnimSite846 = x3d.HAnimSite()
HAnimSite846.name = "r_tarsal_distal_phalanx_5"
HAnimSite846.DEF = "hanim_r_tarsal_distal_phalanx_5_tip"
HAnimSite846.translation = [-0.125,0.016,0.115]
TouchSensor847 = x3d.TouchSensor()
TouchSensor847.description = "HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip"

HAnimSite846.children.append(TouchSensor847)
Shape848 = x3d.Shape()
Appearance849 = x3d.Appearance()
Material850 = x3d.Material()
Material850.diffuseColor = [1,1,1]

Appearance849.material = Material850

Shape848.appearance = Appearance849
IndexedFaceSet851 = x3d.IndexedFaceSet()
IndexedFaceSet851.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet851.creaseAngle = 0.5
IndexedFaceSet851.solid = False
ColorRGBA852 = x3d.ColorRGBA()

IndexedFaceSet851.color = ColorRGBA852
Coordinate853 = x3d.Coordinate()

IndexedFaceSet851.coord = Coordinate853

Shape848.geometry = IndexedFaceSet851

HAnimSite846.children.append(Shape848)
Billboard854 = x3d.Billboard()
Billboard854.axisOfRotation = [0,0,0]
Shape855 = x3d.Shape()
Text856 = x3d.Text()
Text856.string = ["120"]
FontStyle857 = x3d.FontStyle()
FontStyle857.size = 0.035

Text856.fontStyle = FontStyle857

Shape855.geometry = Text856

Billboard854.children.append(Shape855)

HAnimSite846.children.append(Billboard854)

HAnimSegment845.children.append(HAnimSite846)
Shape858 = x3d.Shape()
LineSet859 = x3d.LineSet()
LineSet859.vertexCount = [2]
ColorRGBA860 = x3d.ColorRGBA()

LineSet859.color = ColorRGBA860
Coordinate861 = x3d.Coordinate()

LineSet859.coord = Coordinate861

Shape858.geometry = LineSet859

HAnimSegment845.children.append(Shape858)

HAnimJoint844.children.append(HAnimSegment845)

HAnimJoint826.children.append(HAnimJoint844)

HAnimJoint820.children.append(HAnimJoint826)

HAnimJoint814.children.append(HAnimJoint820)

HAnimJoint772.children.append(HAnimJoint814)

HAnimJoint766.children.append(HAnimJoint772)

HAnimJoint598.children.append(HAnimJoint766)

HAnimJoint556.children.append(HAnimJoint598)

HAnimJoint502.children.append(HAnimJoint556)

HAnimJoint16.children.append(HAnimJoint502)

HAnimJoint12.children.append(HAnimJoint16)
HAnimJoint862 = x3d.HAnimJoint()
HAnimJoint862.name = "vl5"
HAnimJoint862.DEF = "hanim_vl5"
HAnimJoint862.center = [0,0.9254,-0.01376]
HAnimJoint862.ulimit = [0,0,0]
HAnimJoint862.llimit = [0,0,0]
HAnimSegment863 = x3d.HAnimSegment()
HAnimSegment863.name = "l5"
HAnimSegment863.DEF = "hanim_l5"
HAnimSite864 = x3d.HAnimSite()
HAnimSite864.name = "spine_1_middle_back"
HAnimSite864.DEF = "hanim_spine_1_middle_back_pt"
HAnimSite864.translation = [0,1,-0.1]
TouchSensor865 = x3d.TouchSensor()
TouchSensor865.description = "HAnimSite 24 hanim_spine_1_middle_back_pt"

HAnimSite864.children.append(TouchSensor865)
Shape866 = x3d.Shape()
Appearance867 = x3d.Appearance()
Material868 = x3d.Material()
Material868.diffuseColor = [1,1,1]

Appearance867.material = Material868

Shape866.appearance = Appearance867
IndexedFaceSet869 = x3d.IndexedFaceSet()
IndexedFaceSet869.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet869.creaseAngle = 0.5
IndexedFaceSet869.solid = False
ColorRGBA870 = x3d.ColorRGBA()

IndexedFaceSet869.color = ColorRGBA870
Coordinate871 = x3d.Coordinate()

IndexedFaceSet869.coord = Coordinate871

Shape866.geometry = IndexedFaceSet869

HAnimSite864.children.append(Shape866)
Billboard872 = x3d.Billboard()
Billboard872.axisOfRotation = [0,0,0]
Shape873 = x3d.Shape()
Text874 = x3d.Text()
Text874.string = ["24"]
FontStyle875 = x3d.FontStyle()
FontStyle875.size = 0.035

Text874.fontStyle = FontStyle875

Shape873.geometry = Text874

Billboard872.children.append(Shape873)

HAnimSite864.children.append(Billboard872)

HAnimSegment863.children.append(HAnimSite864)
HAnimSite876 = x3d.HAnimSite()
HAnimSite876.name = "spine_2_lower_back"
HAnimSite876.DEF = "hanim_spine_2_lower_back_pt"
HAnimSite876.translation = [0,0.95,-0.1]
TouchSensor877 = x3d.TouchSensor()
TouchSensor877.description = "HAnimSite 25 hanim_spine_2_lower_back_pt"

HAnimSite876.children.append(TouchSensor877)
Shape878 = x3d.Shape()
Appearance879 = x3d.Appearance()
Material880 = x3d.Material()
Material880.diffuseColor = [1,1,1]

Appearance879.material = Material880

Shape878.appearance = Appearance879
IndexedFaceSet881 = x3d.IndexedFaceSet()
IndexedFaceSet881.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet881.creaseAngle = 0.5
IndexedFaceSet881.solid = False
ColorRGBA882 = x3d.ColorRGBA()

IndexedFaceSet881.color = ColorRGBA882
Coordinate883 = x3d.Coordinate()

IndexedFaceSet881.coord = Coordinate883

Shape878.geometry = IndexedFaceSet881

HAnimSite876.children.append(Shape878)
Billboard884 = x3d.Billboard()
Billboard884.axisOfRotation = [0,0,0]
Shape885 = x3d.Shape()
Text886 = x3d.Text()
Text886.string = ["25"]
FontStyle887 = x3d.FontStyle()
FontStyle887.size = 0.035

Text886.fontStyle = FontStyle887

Shape885.geometry = Text886

Billboard884.children.append(Shape885)

HAnimSite876.children.append(Billboard884)

HAnimSegment863.children.append(HAnimSite876)
HAnimSite888 = x3d.HAnimSite()
HAnimSite888.name = "waist_preferred_anterior"
HAnimSite888.DEF = "hanim_waist_preferred_anterior_pt"
HAnimSite888.translation = [0,0.9,0.1]
TouchSensor889 = x3d.TouchSensor()
TouchSensor889.description = "HAnimSite 26 hanim_waist_preferred_anterior_pt"

HAnimSite888.children.append(TouchSensor889)
Shape890 = x3d.Shape()
Appearance891 = x3d.Appearance()
Material892 = x3d.Material()
Material892.diffuseColor = [1,1,1]

Appearance891.material = Material892

Shape890.appearance = Appearance891
IndexedFaceSet893 = x3d.IndexedFaceSet()
IndexedFaceSet893.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet893.creaseAngle = 0.5
IndexedFaceSet893.solid = False
ColorRGBA894 = x3d.ColorRGBA()

IndexedFaceSet893.color = ColorRGBA894
Coordinate895 = x3d.Coordinate()

IndexedFaceSet893.coord = Coordinate895

Shape890.geometry = IndexedFaceSet893

HAnimSite888.children.append(Shape890)
Billboard896 = x3d.Billboard()
Billboard896.axisOfRotation = [0,0,0]
Shape897 = x3d.Shape()
Text898 = x3d.Text()
Text898.string = ["26"]
FontStyle899 = x3d.FontStyle()
FontStyle899.size = 0.035

Text898.fontStyle = FontStyle899

Shape897.geometry = Text898

Billboard896.children.append(Shape897)

HAnimSite888.children.append(Billboard896)

HAnimSegment863.children.append(HAnimSite888)
HAnimSite900 = x3d.HAnimSite()
HAnimSite900.name = "waist_preferred_posterior"
HAnimSite900.DEF = "hanim_waist_preferred_posterior_pt"
HAnimSite900.translation = [0,0.9,-0.1]
TouchSensor901 = x3d.TouchSensor()
TouchSensor901.description = "HAnimSite 27 hanim_waist_preferred_posterior_pt"

HAnimSite900.children.append(TouchSensor901)
Shape902 = x3d.Shape()
Appearance903 = x3d.Appearance()
Material904 = x3d.Material()
Material904.diffuseColor = [1,1,1]

Appearance903.material = Material904

Shape902.appearance = Appearance903
IndexedFaceSet905 = x3d.IndexedFaceSet()
IndexedFaceSet905.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet905.creaseAngle = 0.5
IndexedFaceSet905.solid = False
ColorRGBA906 = x3d.ColorRGBA()

IndexedFaceSet905.color = ColorRGBA906
Coordinate907 = x3d.Coordinate()

IndexedFaceSet905.coord = Coordinate907

Shape902.geometry = IndexedFaceSet905

HAnimSite900.children.append(Shape902)
Billboard908 = x3d.Billboard()
Billboard908.axisOfRotation = [0,0,0]
Shape909 = x3d.Shape()
Text910 = x3d.Text()
Text910.string = ["27"]
FontStyle911 = x3d.FontStyle()
FontStyle911.size = 0.035

Text910.fontStyle = FontStyle911

Shape909.geometry = Text910

Billboard908.children.append(Shape909)

HAnimSite900.children.append(Billboard908)

HAnimSegment863.children.append(HAnimSite900)
HAnimSite912 = x3d.HAnimSite()
HAnimSite912.name = "navel"
HAnimSite912.DEF = "hanim_navel_pt"
HAnimSite912.translation = [0,0.9,-0.1]
TouchSensor913 = x3d.TouchSensor()
TouchSensor913.description = "HAnimSite 84 hanim_navel_pt"

HAnimSite912.children.append(TouchSensor913)
Shape914 = x3d.Shape()
Appearance915 = x3d.Appearance()
Material916 = x3d.Material()
Material916.diffuseColor = [1,1,1]

Appearance915.material = Material916

Shape914.appearance = Appearance915
IndexedFaceSet917 = x3d.IndexedFaceSet()
IndexedFaceSet917.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet917.creaseAngle = 0.5
IndexedFaceSet917.solid = False
ColorRGBA918 = x3d.ColorRGBA()

IndexedFaceSet917.color = ColorRGBA918
Coordinate919 = x3d.Coordinate()

IndexedFaceSet917.coord = Coordinate919

Shape914.geometry = IndexedFaceSet917

HAnimSite912.children.append(Shape914)
Billboard920 = x3d.Billboard()
Billboard920.axisOfRotation = [0,0,0]
Shape921 = x3d.Shape()
Text922 = x3d.Text()
Text922.string = ["84"]
FontStyle923 = x3d.FontStyle()
FontStyle923.size = 0.035

Text922.fontStyle = FontStyle923

Shape921.geometry = Text922

Billboard920.children.append(Shape921)

HAnimSite912.children.append(Billboard920)

HAnimSegment863.children.append(HAnimSite912)
Shape924 = x3d.Shape()
LineSet925 = x3d.LineSet()
LineSet925.vertexCount = [2]
ColorRGBA926 = x3d.ColorRGBA()

LineSet925.color = ColorRGBA926
Coordinate927 = x3d.Coordinate()

LineSet925.coord = Coordinate927

Shape924.geometry = LineSet925

HAnimSegment863.children.append(Shape924)

HAnimJoint862.children.append(HAnimSegment863)
HAnimJoint928 = x3d.HAnimJoint()
HAnimJoint928.name = "vl4"
HAnimJoint928.DEF = "hanim_vl4"
HAnimJoint928.center = [0,0.9497,-0.01376]
HAnimJoint928.ulimit = [0,0,0]
HAnimJoint928.llimit = [0,0,0]
HAnimSegment929 = x3d.HAnimSegment()
HAnimSegment929.name = "l4"
HAnimSegment929.DEF = "hanim_l4"
Shape930 = x3d.Shape()
LineSet931 = x3d.LineSet()
LineSet931.vertexCount = [2]
ColorRGBA932 = x3d.ColorRGBA()

LineSet931.color = ColorRGBA932
Coordinate933 = x3d.Coordinate()

LineSet931.coord = Coordinate933

Shape930.geometry = LineSet931

HAnimSegment929.children.append(Shape930)

HAnimJoint928.children.append(HAnimSegment929)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.name = "vl3"
HAnimJoint934.DEF = "hanim_vl3"
HAnimJoint934.center = [0,0.9659,-0.01376]
HAnimJoint934.ulimit = [0,0,0]
HAnimJoint934.llimit = [0,0,0]
HAnimSegment935 = x3d.HAnimSegment()
HAnimSegment935.name = "l3"
HAnimSegment935.DEF = "hanim_l3"
Shape936 = x3d.Shape()
LineSet937 = x3d.LineSet()
LineSet937.vertexCount = [2]
ColorRGBA938 = x3d.ColorRGBA()

LineSet937.color = ColorRGBA938
Coordinate939 = x3d.Coordinate()

LineSet937.coord = Coordinate939

Shape936.geometry = LineSet937

HAnimSegment935.children.append(Shape936)

HAnimJoint934.children.append(HAnimSegment935)
HAnimJoint940 = x3d.HAnimJoint()
HAnimJoint940.name = "vl2"
HAnimJoint940.DEF = "hanim_vl2"
HAnimJoint940.center = [0,0.98235,-0.01376]
HAnimJoint940.ulimit = [0,0,0]
HAnimJoint940.llimit = [0,0,0]
HAnimSegment941 = x3d.HAnimSegment()
HAnimSegment941.name = "l2"
HAnimSegment941.DEF = "hanim_l2"
HAnimSite942 = x3d.HAnimSite()
HAnimSite942.name = "l_rib10"
HAnimSite942.DEF = "hanim_l_rib10_pt"
HAnimSite942.translation = [0.09,1,0.04]
TouchSensor943 = x3d.TouchSensor()
TouchSensor943.description = "HAnimSite 28 hanim_l_rib10_pt"

HAnimSite942.children.append(TouchSensor943)
Shape944 = x3d.Shape()
Appearance945 = x3d.Appearance()
Material946 = x3d.Material()
Material946.diffuseColor = [1,1,1]

Appearance945.material = Material946

Shape944.appearance = Appearance945
IndexedFaceSet947 = x3d.IndexedFaceSet()
IndexedFaceSet947.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet947.creaseAngle = 0.5
IndexedFaceSet947.solid = False
ColorRGBA948 = x3d.ColorRGBA()

IndexedFaceSet947.color = ColorRGBA948
Coordinate949 = x3d.Coordinate()

IndexedFaceSet947.coord = Coordinate949

Shape944.geometry = IndexedFaceSet947

HAnimSite942.children.append(Shape944)
Billboard950 = x3d.Billboard()
Billboard950.axisOfRotation = [0,0,0]
Shape951 = x3d.Shape()
Text952 = x3d.Text()
Text952.string = ["28"]
FontStyle953 = x3d.FontStyle()
FontStyle953.size = 0.035

Text952.fontStyle = FontStyle953

Shape951.geometry = Text952

Billboard950.children.append(Shape951)

HAnimSite942.children.append(Billboard950)

HAnimSegment941.children.append(HAnimSite942)
HAnimSite954 = x3d.HAnimSite()
HAnimSite954.name = "r_rib10"
HAnimSite954.DEF = "hanim_r_rib10_pt"
HAnimSite954.translation = [-0.09,1,0.04]
TouchSensor955 = x3d.TouchSensor()
TouchSensor955.description = "HAnimSite 30 hanim_r_rib10_pt"

HAnimSite954.children.append(TouchSensor955)
Shape956 = x3d.Shape()
Appearance957 = x3d.Appearance()
Material958 = x3d.Material()
Material958.diffuseColor = [1,1,1]

Appearance957.material = Material958

Shape956.appearance = Appearance957
IndexedFaceSet959 = x3d.IndexedFaceSet()
IndexedFaceSet959.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet959.creaseAngle = 0.5
IndexedFaceSet959.solid = False
ColorRGBA960 = x3d.ColorRGBA()

IndexedFaceSet959.color = ColorRGBA960
Coordinate961 = x3d.Coordinate()

IndexedFaceSet959.coord = Coordinate961

Shape956.geometry = IndexedFaceSet959

HAnimSite954.children.append(Shape956)
Billboard962 = x3d.Billboard()
Billboard962.axisOfRotation = [0,0,0]
Shape963 = x3d.Shape()
Text964 = x3d.Text()
Text964.string = ["30"]
FontStyle965 = x3d.FontStyle()
FontStyle965.size = 0.035

Text964.fontStyle = FontStyle965

Shape963.geometry = Text964

Billboard962.children.append(Shape963)

HAnimSite954.children.append(Billboard962)

HAnimSegment941.children.append(HAnimSite954)
Shape966 = x3d.Shape()
LineSet967 = x3d.LineSet()
LineSet967.vertexCount = [2]
ColorRGBA968 = x3d.ColorRGBA()

LineSet967.color = ColorRGBA968
Coordinate969 = x3d.Coordinate()

LineSet967.coord = Coordinate969

Shape966.geometry = LineSet967

HAnimSegment941.children.append(Shape966)

HAnimJoint940.children.append(HAnimSegment941)
HAnimJoint970 = x3d.HAnimJoint()
HAnimJoint970.name = "vl1"
HAnimJoint970.DEF = "hanim_vl1"
HAnimJoint970.center = [0,0.99967,-0.01376]
HAnimJoint970.ulimit = [0,0,0]
HAnimJoint970.llimit = [0,0,0]
HAnimSegment971 = x3d.HAnimSegment()
HAnimSegment971.name = "l1"
HAnimSegment971.DEF = "hanim_l1"
Shape972 = x3d.Shape()
LineSet973 = x3d.LineSet()
LineSet973.vertexCount = [2]
ColorRGBA974 = x3d.ColorRGBA()

LineSet973.color = ColorRGBA974
Coordinate975 = x3d.Coordinate()

LineSet973.coord = Coordinate975

Shape972.geometry = LineSet973

HAnimSegment971.children.append(Shape972)

HAnimJoint970.children.append(HAnimSegment971)
HAnimJoint976 = x3d.HAnimJoint()
HAnimJoint976.name = "vt12"
HAnimJoint976.DEF = "hanim_vt12"
HAnimJoint976.center = [0,1.0231,-0.01376]
HAnimJoint976.ulimit = [0,0,0]
HAnimJoint976.llimit = [0,0,0]
HAnimSegment977 = x3d.HAnimSegment()
HAnimSegment977.name = "t12"
HAnimSegment977.DEF = "hanim_t12"
Shape978 = x3d.Shape()
LineSet979 = x3d.LineSet()
LineSet979.vertexCount = [2]
ColorRGBA980 = x3d.ColorRGBA()

LineSet979.color = ColorRGBA980
Coordinate981 = x3d.Coordinate()

LineSet979.coord = Coordinate981

Shape978.geometry = LineSet979

HAnimSegment977.children.append(Shape978)

HAnimJoint976.children.append(HAnimSegment977)
HAnimJoint982 = x3d.HAnimJoint()
HAnimJoint982.name = "vt11"
HAnimJoint982.DEF = "hanim_vt11"
HAnimJoint982.center = [0,1.0467,-0.01376]
HAnimJoint982.ulimit = [0,0,0]
HAnimJoint982.llimit = [0,0,0]
HAnimSegment983 = x3d.HAnimSegment()
HAnimSegment983.name = "t11"
HAnimSegment983.DEF = "hanim_t11"
Shape984 = x3d.Shape()
LineSet985 = x3d.LineSet()
LineSet985.vertexCount = [2]
ColorRGBA986 = x3d.ColorRGBA()

LineSet985.color = ColorRGBA986
Coordinate987 = x3d.Coordinate()

LineSet985.coord = Coordinate987

Shape984.geometry = LineSet985

HAnimSegment983.children.append(Shape984)

HAnimJoint982.children.append(HAnimSegment983)
HAnimJoint988 = x3d.HAnimJoint()
HAnimJoint988.name = "vt10"
HAnimJoint988.DEF = "hanim_vt10"
HAnimJoint988.center = [0,1.0638,-0.01378]
HAnimJoint988.ulimit = [0,0,0]
HAnimJoint988.llimit = [0,0,0]
HAnimSegment989 = x3d.HAnimSegment()
HAnimSegment989.name = "t10"
HAnimSegment989.DEF = "hanim_t10"
HAnimSite990 = x3d.HAnimSite()
HAnimSite990.name = "substernale"
HAnimSite990.DEF = "hanim_substernale_pt"
HAnimSite990.translation = [0,1.08,0.076]
TouchSensor991 = x3d.TouchSensor()
TouchSensor991.description = "HAnimSite 13 hanim_substernale_pt"

HAnimSite990.children.append(TouchSensor991)
Shape992 = x3d.Shape()
Appearance993 = x3d.Appearance()
Material994 = x3d.Material()
Material994.diffuseColor = [1,1,1]

Appearance993.material = Material994

Shape992.appearance = Appearance993
IndexedFaceSet995 = x3d.IndexedFaceSet()
IndexedFaceSet995.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet995.creaseAngle = 0.5
IndexedFaceSet995.solid = False
ColorRGBA996 = x3d.ColorRGBA()

IndexedFaceSet995.color = ColorRGBA996
Coordinate997 = x3d.Coordinate()

IndexedFaceSet995.coord = Coordinate997

Shape992.geometry = IndexedFaceSet995

HAnimSite990.children.append(Shape992)
Billboard998 = x3d.Billboard()
Billboard998.axisOfRotation = [0,0,0]
Shape999 = x3d.Shape()
Text1000 = x3d.Text()
Text1000.string = ["13"]
FontStyle1001 = x3d.FontStyle()
FontStyle1001.size = 0.035

Text1000.fontStyle = FontStyle1001

Shape999.geometry = Text1000

Billboard998.children.append(Shape999)

HAnimSite990.children.append(Billboard998)

HAnimSegment989.children.append(HAnimSite990)
HAnimSite1002 = x3d.HAnimSite()
HAnimSite1002.name = "mesosternale"
HAnimSite1002.DEF = "hanim_mesosternale_pt"
HAnimSite1002.translation = [0,1.15,0.076]
TouchSensor1003 = x3d.TouchSensor()
TouchSensor1003.description = "HAnimSite 88 hanim_mesosternale_pt"

HAnimSite1002.children.append(TouchSensor1003)
Shape1004 = x3d.Shape()
Appearance1005 = x3d.Appearance()
Material1006 = x3d.Material()
Material1006.diffuseColor = [1,1,1]

Appearance1005.material = Material1006

Shape1004.appearance = Appearance1005
IndexedFaceSet1007 = x3d.IndexedFaceSet()
IndexedFaceSet1007.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1007.creaseAngle = 0.5
IndexedFaceSet1007.solid = False
ColorRGBA1008 = x3d.ColorRGBA()

IndexedFaceSet1007.color = ColorRGBA1008
Coordinate1009 = x3d.Coordinate()

IndexedFaceSet1007.coord = Coordinate1009

Shape1004.geometry = IndexedFaceSet1007

HAnimSite1002.children.append(Shape1004)
Billboard1010 = x3d.Billboard()
Billboard1010.axisOfRotation = [0,0,0]
Shape1011 = x3d.Shape()
Text1012 = x3d.Text()
Text1012.string = ["88"]
FontStyle1013 = x3d.FontStyle()
FontStyle1013.size = 0.035

Text1012.fontStyle = FontStyle1013

Shape1011.geometry = Text1012

Billboard1010.children.append(Shape1011)

HAnimSite1002.children.append(Billboard1010)

HAnimSegment989.children.append(HAnimSite1002)
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.vertexCount = [2]
ColorRGBA1016 = x3d.ColorRGBA()

LineSet1015.color = ColorRGBA1016
Coordinate1017 = x3d.Coordinate()

LineSet1015.coord = Coordinate1017

Shape1014.geometry = LineSet1015

HAnimSegment989.children.append(Shape1014)

HAnimJoint988.children.append(HAnimSegment989)
HAnimJoint1018 = x3d.HAnimJoint()
HAnimJoint1018.name = "vt9"
HAnimJoint1018.DEF = "hanim_vt9"
HAnimJoint1018.center = [0,1.0784,-0.01376]
HAnimJoint1018.ulimit = [0,0,0]
HAnimJoint1018.llimit = [0,0,0]
HAnimSegment1019 = x3d.HAnimSegment()
HAnimSegment1019.name = "t9"
HAnimSegment1019.DEF = "hanim_t9"
HAnimSite1020 = x3d.HAnimSite()
HAnimSite1020.name = "l_thelion"
HAnimSite1020.DEF = "hanim_l_thelion_pt"
HAnimSite1020.translation = [0.07,1.12,0.09]
TouchSensor1021 = x3d.TouchSensor()
TouchSensor1021.description = "HAnimSite 29 hanim_l_thelion_pt"

HAnimSite1020.children.append(TouchSensor1021)
Shape1022 = x3d.Shape()
Appearance1023 = x3d.Appearance()
Material1024 = x3d.Material()
Material1024.diffuseColor = [1,1,1]

Appearance1023.material = Material1024

Shape1022.appearance = Appearance1023
IndexedFaceSet1025 = x3d.IndexedFaceSet()
IndexedFaceSet1025.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1025.creaseAngle = 0.5
IndexedFaceSet1025.solid = False
ColorRGBA1026 = x3d.ColorRGBA()

IndexedFaceSet1025.color = ColorRGBA1026
Coordinate1027 = x3d.Coordinate()

IndexedFaceSet1025.coord = Coordinate1027

Shape1022.geometry = IndexedFaceSet1025

HAnimSite1020.children.append(Shape1022)
Billboard1028 = x3d.Billboard()
Billboard1028.axisOfRotation = [0,0,0]
Shape1029 = x3d.Shape()
Text1030 = x3d.Text()
Text1030.string = ["29"]
FontStyle1031 = x3d.FontStyle()
FontStyle1031.size = 0.035

Text1030.fontStyle = FontStyle1031

Shape1029.geometry = Text1030

Billboard1028.children.append(Shape1029)

HAnimSite1020.children.append(Billboard1028)

HAnimSegment1019.children.append(HAnimSite1020)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.name = "r_thelion"
HAnimSite1032.DEF = "hanim_r_thelion_pt"
HAnimSite1032.translation = [-0.07,1.12,0.09]
TouchSensor1033 = x3d.TouchSensor()
TouchSensor1033.description = "HAnimSite 31 hanim_r_thelion_pt"

HAnimSite1032.children.append(TouchSensor1033)
Shape1034 = x3d.Shape()
Appearance1035 = x3d.Appearance()
Material1036 = x3d.Material()
Material1036.diffuseColor = [1,1,1]

Appearance1035.material = Material1036

Shape1034.appearance = Appearance1035
IndexedFaceSet1037 = x3d.IndexedFaceSet()
IndexedFaceSet1037.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1037.creaseAngle = 0.5
IndexedFaceSet1037.solid = False
ColorRGBA1038 = x3d.ColorRGBA()

IndexedFaceSet1037.color = ColorRGBA1038
Coordinate1039 = x3d.Coordinate()

IndexedFaceSet1037.coord = Coordinate1039

Shape1034.geometry = IndexedFaceSet1037

HAnimSite1032.children.append(Shape1034)
Billboard1040 = x3d.Billboard()
Billboard1040.axisOfRotation = [0,0,0]
Shape1041 = x3d.Shape()
Text1042 = x3d.Text()
Text1042.string = ["31"]
FontStyle1043 = x3d.FontStyle()
FontStyle1043.size = 0.035

Text1042.fontStyle = FontStyle1043

Shape1041.geometry = Text1042

Billboard1040.children.append(Shape1041)

HAnimSite1032.children.append(Billboard1040)

HAnimSegment1019.children.append(HAnimSite1032)
HAnimSite1044 = x3d.HAnimSite()
HAnimSite1044.name = "rear_center_midsagittal_plane"
HAnimSite1044.DEF = "hanim_rear_center_midsagittal_plane_pt"
HAnimSite1044.translation = [0,1.1,-0.1]
TouchSensor1045 = x3d.TouchSensor()
TouchSensor1045.description = "HAnimSite 92 hanim_rear_center_midsagittal_plane_pt"

HAnimSite1044.children.append(TouchSensor1045)
Shape1046 = x3d.Shape()
Appearance1047 = x3d.Appearance()
Material1048 = x3d.Material()
Material1048.diffuseColor = [1,1,1]

Appearance1047.material = Material1048

Shape1046.appearance = Appearance1047
IndexedFaceSet1049 = x3d.IndexedFaceSet()
IndexedFaceSet1049.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1049.creaseAngle = 0.5
IndexedFaceSet1049.solid = False
ColorRGBA1050 = x3d.ColorRGBA()

IndexedFaceSet1049.color = ColorRGBA1050
Coordinate1051 = x3d.Coordinate()

IndexedFaceSet1049.coord = Coordinate1051

Shape1046.geometry = IndexedFaceSet1049

HAnimSite1044.children.append(Shape1046)
Billboard1052 = x3d.Billboard()
Billboard1052.axisOfRotation = [0,0,0]
Shape1053 = x3d.Shape()
Text1054 = x3d.Text()
Text1054.string = ["92"]
FontStyle1055 = x3d.FontStyle()
FontStyle1055.size = 0.035

Text1054.fontStyle = FontStyle1055

Shape1053.geometry = Text1054

Billboard1052.children.append(Shape1053)

HAnimSite1044.children.append(Billboard1052)

HAnimSegment1019.children.append(HAnimSite1044)
HAnimSite1056 = x3d.HAnimSite()
HAnimSite1056.name = "l_chest_midsagittal_plane"
HAnimSite1056.DEF = "hanim_l_chest_midsagittal_plane_pt"
HAnimSite1056.translation = [0.13,1.12,0]
TouchSensor1057 = x3d.TouchSensor()
TouchSensor1057.description = "HAnimSite 94 hanim_l_chest_midsagittal_plane_pt"

HAnimSite1056.children.append(TouchSensor1057)
Shape1058 = x3d.Shape()
Appearance1059 = x3d.Appearance()
Material1060 = x3d.Material()
Material1060.diffuseColor = [1,1,1]

Appearance1059.material = Material1060

Shape1058.appearance = Appearance1059
IndexedFaceSet1061 = x3d.IndexedFaceSet()
IndexedFaceSet1061.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1061.creaseAngle = 0.5
IndexedFaceSet1061.solid = False
ColorRGBA1062 = x3d.ColorRGBA()

IndexedFaceSet1061.color = ColorRGBA1062
Coordinate1063 = x3d.Coordinate()

IndexedFaceSet1061.coord = Coordinate1063

Shape1058.geometry = IndexedFaceSet1061

HAnimSite1056.children.append(Shape1058)
Billboard1064 = x3d.Billboard()
Billboard1064.axisOfRotation = [0,0,0]
Shape1065 = x3d.Shape()
Text1066 = x3d.Text()
Text1066.string = ["94"]
FontStyle1067 = x3d.FontStyle()
FontStyle1067.size = 0.035

Text1066.fontStyle = FontStyle1067

Shape1065.geometry = Text1066

Billboard1064.children.append(Shape1065)

HAnimSite1056.children.append(Billboard1064)

HAnimSegment1019.children.append(HAnimSite1056)
HAnimSite1068 = x3d.HAnimSite()
HAnimSite1068.name = "r_chest_midsagittal_plane"
HAnimSite1068.DEF = "hanim_r_chest_midsagittal_plane_pt"
HAnimSite1068.translation = [-0.13,1.12,0]
TouchSensor1069 = x3d.TouchSensor()
TouchSensor1069.description = "HAnimSite 95 hanim_r_chest_midsagittal_plane_pt"

HAnimSite1068.children.append(TouchSensor1069)
Shape1070 = x3d.Shape()
Appearance1071 = x3d.Appearance()
Material1072 = x3d.Material()
Material1072.diffuseColor = [1,1,1]

Appearance1071.material = Material1072

Shape1070.appearance = Appearance1071
IndexedFaceSet1073 = x3d.IndexedFaceSet()
IndexedFaceSet1073.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1073.creaseAngle = 0.5
IndexedFaceSet1073.solid = False
ColorRGBA1074 = x3d.ColorRGBA()

IndexedFaceSet1073.color = ColorRGBA1074
Coordinate1075 = x3d.Coordinate()

IndexedFaceSet1073.coord = Coordinate1075

Shape1070.geometry = IndexedFaceSet1073

HAnimSite1068.children.append(Shape1070)
Billboard1076 = x3d.Billboard()
Billboard1076.axisOfRotation = [0,0,0]
Shape1077 = x3d.Shape()
Text1078 = x3d.Text()
Text1078.string = ["95"]
FontStyle1079 = x3d.FontStyle()
FontStyle1079.size = 0.035

Text1078.fontStyle = FontStyle1079

Shape1077.geometry = Text1078

Billboard1076.children.append(Shape1077)

HAnimSite1068.children.append(Billboard1076)

HAnimSegment1019.children.append(HAnimSite1068)
Shape1080 = x3d.Shape()
LineSet1081 = x3d.LineSet()
LineSet1081.vertexCount = [2]
ColorRGBA1082 = x3d.ColorRGBA()

LineSet1081.color = ColorRGBA1082
Coordinate1083 = x3d.Coordinate()

LineSet1081.coord = Coordinate1083

Shape1080.geometry = LineSet1081

HAnimSegment1019.children.append(Shape1080)

HAnimJoint1018.children.append(HAnimSegment1019)
HAnimJoint1084 = x3d.HAnimJoint()
HAnimJoint1084.name = "vt8"
HAnimJoint1084.DEF = "hanim_vt8"
HAnimJoint1084.center = [0,1.093,-0.01376]
HAnimJoint1084.ulimit = [0,0,0]
HAnimJoint1084.llimit = [0,0,0]
HAnimSegment1085 = x3d.HAnimSegment()
HAnimSegment1085.name = "t8"
HAnimSegment1085.DEF = "hanim_t8"
Shape1086 = x3d.Shape()
LineSet1087 = x3d.LineSet()
LineSet1087.vertexCount = [2]
ColorRGBA1088 = x3d.ColorRGBA()

LineSet1087.color = ColorRGBA1088
Coordinate1089 = x3d.Coordinate()

LineSet1087.coord = Coordinate1089

Shape1086.geometry = LineSet1087

HAnimSegment1085.children.append(Shape1086)

HAnimJoint1084.children.append(HAnimSegment1085)
HAnimJoint1090 = x3d.HAnimJoint()
HAnimJoint1090.name = "vt7"
HAnimJoint1090.DEF = "hanim_vt7"
HAnimJoint1090.center = [0,1.1088,-0.01376]
HAnimJoint1090.ulimit = [0,0,0]
HAnimJoint1090.llimit = [0,0,0]
HAnimSegment1091 = x3d.HAnimSegment()
HAnimSegment1091.name = "t7"
HAnimSegment1091.DEF = "hanim_t7"
Shape1092 = x3d.Shape()
LineSet1093 = x3d.LineSet()
LineSet1093.vertexCount = [2]
ColorRGBA1094 = x3d.ColorRGBA()

LineSet1093.color = ColorRGBA1094
Coordinate1095 = x3d.Coordinate()

LineSet1093.coord = Coordinate1095

Shape1092.geometry = LineSet1093

HAnimSegment1091.children.append(Shape1092)

HAnimJoint1090.children.append(HAnimSegment1091)
HAnimJoint1096 = x3d.HAnimJoint()
HAnimJoint1096.name = "vt6"
HAnimJoint1096.DEF = "hanim_vt6"
HAnimJoint1096.center = [0,1.1216,-0.01376]
HAnimJoint1096.ulimit = [0,0,0]
HAnimJoint1096.llimit = [0,0,0]
HAnimSegment1097 = x3d.HAnimSegment()
HAnimSegment1097.name = "t6"
HAnimSegment1097.DEF = "hanim_t6"
Shape1098 = x3d.Shape()
LineSet1099 = x3d.LineSet()
LineSet1099.vertexCount = [2]
ColorRGBA1100 = x3d.ColorRGBA()

LineSet1099.color = ColorRGBA1100
Coordinate1101 = x3d.Coordinate()

LineSet1099.coord = Coordinate1101

Shape1098.geometry = LineSet1099

HAnimSegment1097.children.append(Shape1098)

HAnimJoint1096.children.append(HAnimSegment1097)
HAnimJoint1102 = x3d.HAnimJoint()
HAnimJoint1102.name = "vt5"
HAnimJoint1102.DEF = "hanim_vt5"
HAnimJoint1102.center = [0,1.137,-0.01376]
HAnimJoint1102.ulimit = [0,0,0]
HAnimJoint1102.llimit = [0,0,0]
HAnimSegment1103 = x3d.HAnimSegment()
HAnimSegment1103.name = "t5"
HAnimSegment1103.DEF = "hanim_t5"
Shape1104 = x3d.Shape()
LineSet1105 = x3d.LineSet()
LineSet1105.vertexCount = [2]
ColorRGBA1106 = x3d.ColorRGBA()

LineSet1105.color = ColorRGBA1106
Coordinate1107 = x3d.Coordinate()

LineSet1105.coord = Coordinate1107

Shape1104.geometry = LineSet1105

HAnimSegment1103.children.append(Shape1104)

HAnimJoint1102.children.append(HAnimSegment1103)
HAnimJoint1108 = x3d.HAnimJoint()
HAnimJoint1108.name = "vt4"
HAnimJoint1108.DEF = "hanim_vt4"
HAnimJoint1108.center = [0,1.1524,-0.01376]
HAnimJoint1108.ulimit = [0,0,0]
HAnimJoint1108.llimit = [0,0,0]
HAnimSegment1109 = x3d.HAnimSegment()
HAnimSegment1109.name = "t4"
HAnimSegment1109.DEF = "hanim_t4"
Shape1110 = x3d.Shape()
LineSet1111 = x3d.LineSet()
LineSet1111.vertexCount = [2]
ColorRGBA1112 = x3d.ColorRGBA()

LineSet1111.color = ColorRGBA1112
Coordinate1113 = x3d.Coordinate()

LineSet1111.coord = Coordinate1113

Shape1110.geometry = LineSet1111

HAnimSegment1109.children.append(Shape1110)

HAnimJoint1108.children.append(HAnimSegment1109)
HAnimJoint1114 = x3d.HAnimJoint()
HAnimJoint1114.name = "vt3"
HAnimJoint1114.DEF = "hanim_vt3"
HAnimJoint1114.center = [0,1.1709,-0.01376]
HAnimJoint1114.ulimit = [0,0,0]
HAnimJoint1114.llimit = [0,0,0]
HAnimSegment1115 = x3d.HAnimSegment()
HAnimSegment1115.name = "t3"
HAnimSegment1115.DEF = "hanim_t3"
Shape1116 = x3d.Shape()
LineSet1117 = x3d.LineSet()
LineSet1117.vertexCount = [2]
ColorRGBA1118 = x3d.ColorRGBA()

LineSet1117.color = ColorRGBA1118
Coordinate1119 = x3d.Coordinate()

LineSet1117.coord = Coordinate1119

Shape1116.geometry = LineSet1117

HAnimSegment1115.children.append(Shape1116)

HAnimJoint1114.children.append(HAnimSegment1115)
HAnimJoint1120 = x3d.HAnimJoint()
HAnimJoint1120.name = "vt2"
HAnimJoint1120.DEF = "hanim_vt2"
HAnimJoint1120.center = [0,1.1956,-0.01378]
HAnimJoint1120.ulimit = [0,0,0]
HAnimJoint1120.llimit = [0,0,0]
HAnimSegment1121 = x3d.HAnimSegment()
HAnimSegment1121.name = "t2"
HAnimSegment1121.DEF = "hanim_t2"
Shape1122 = x3d.Shape()
LineSet1123 = x3d.LineSet()
LineSet1123.vertexCount = [2]
ColorRGBA1124 = x3d.ColorRGBA()

LineSet1123.color = ColorRGBA1124
Coordinate1125 = x3d.Coordinate()

LineSet1123.coord = Coordinate1125

Shape1122.geometry = LineSet1123

HAnimSegment1121.children.append(Shape1122)

HAnimJoint1120.children.append(HAnimSegment1121)
HAnimJoint1126 = x3d.HAnimJoint()
HAnimJoint1126.name = "vt1"
HAnimJoint1126.DEF = "hanim_vt1"
HAnimJoint1126.center = [0,1.22,-0.0138]
HAnimJoint1126.ulimit = [0,0,0]
HAnimJoint1126.llimit = [0,0,0]
HAnimSegment1127 = x3d.HAnimSegment()
HAnimSegment1127.name = "t1"
HAnimSegment1127.DEF = "hanim_t1"
HAnimSite1128 = x3d.HAnimSite()
HAnimSite1128.name = "suprasternale"
HAnimSite1128.DEF = "hanim_suprasternale_pt"
HAnimSite1128.translation = [0,1.22,0.08]
TouchSensor1129 = x3d.TouchSensor()
TouchSensor1129.description = "HAnimSite 12 hanim_suprasternale_pt"

HAnimSite1128.children.append(TouchSensor1129)
Shape1130 = x3d.Shape()
Appearance1131 = x3d.Appearance()
Material1132 = x3d.Material()
Material1132.diffuseColor = [1,1,1]

Appearance1131.material = Material1132

Shape1130.appearance = Appearance1131
IndexedFaceSet1133 = x3d.IndexedFaceSet()
IndexedFaceSet1133.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1133.creaseAngle = 0.5
IndexedFaceSet1133.solid = False
ColorRGBA1134 = x3d.ColorRGBA()

IndexedFaceSet1133.color = ColorRGBA1134
Coordinate1135 = x3d.Coordinate()

IndexedFaceSet1133.coord = Coordinate1135

Shape1130.geometry = IndexedFaceSet1133

HAnimSite1128.children.append(Shape1130)
Billboard1136 = x3d.Billboard()
Billboard1136.axisOfRotation = [0,0,0]
Shape1137 = x3d.Shape()
Text1138 = x3d.Text()
Text1138.string = ["12"]
FontStyle1139 = x3d.FontStyle()
FontStyle1139.size = 0.035

Text1138.fontStyle = FontStyle1139

Shape1137.geometry = Text1138

Billboard1136.children.append(Shape1137)

HAnimSite1128.children.append(Billboard1136)

HAnimSegment1127.children.append(HAnimSite1128)
HAnimSite1140 = x3d.HAnimSite()
HAnimSite1140.name = "cervicale"
HAnimSite1140.DEF = "hanim_cervicale_pt"
HAnimSite1140.translation = [0,1.22,-0.08]
TouchSensor1141 = x3d.TouchSensor()
TouchSensor1141.description = "HAnimSite 10 hanim_cervicale_pt"

HAnimSite1140.children.append(TouchSensor1141)
Shape1142 = x3d.Shape()
Appearance1143 = x3d.Appearance()
Material1144 = x3d.Material()
Material1144.diffuseColor = [1,1,1]

Appearance1143.material = Material1144

Shape1142.appearance = Appearance1143
IndexedFaceSet1145 = x3d.IndexedFaceSet()
IndexedFaceSet1145.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1145.creaseAngle = 0.5
IndexedFaceSet1145.solid = False
ColorRGBA1146 = x3d.ColorRGBA()

IndexedFaceSet1145.color = ColorRGBA1146
Coordinate1147 = x3d.Coordinate()

IndexedFaceSet1145.coord = Coordinate1147

Shape1142.geometry = IndexedFaceSet1145

HAnimSite1140.children.append(Shape1142)
Billboard1148 = x3d.Billboard()
Billboard1148.axisOfRotation = [0,0,0]
Shape1149 = x3d.Shape()
Text1150 = x3d.Text()
Text1150.string = ["10"]
FontStyle1151 = x3d.FontStyle()
FontStyle1151.size = 0.035

Text1150.fontStyle = FontStyle1151

Shape1149.geometry = Text1150

Billboard1148.children.append(Shape1149)

HAnimSite1140.children.append(Billboard1148)

HAnimSegment1127.children.append(HAnimSite1140)
Shape1152 = x3d.Shape()
LineSet1153 = x3d.LineSet()
LineSet1153.vertexCount = [2]
ColorRGBA1154 = x3d.ColorRGBA()

LineSet1153.color = ColorRGBA1154
Coordinate1155 = x3d.Coordinate()

LineSet1153.coord = Coordinate1155

Shape1152.geometry = LineSet1153

HAnimSegment1127.children.append(Shape1152)

HAnimJoint1126.children.append(HAnimSegment1127)
HAnimJoint1156 = x3d.HAnimJoint()
HAnimJoint1156.name = "vc7"
HAnimJoint1156.DEF = "hanim_vc7"
HAnimJoint1156.center = [0,1.2453,-0.01506]
HAnimJoint1156.ulimit = [0,0,0]
HAnimJoint1156.llimit = [0,0,0]
HAnimSegment1157 = x3d.HAnimSegment()
HAnimSegment1157.name = "c7"
HAnimSegment1157.DEF = "hanim_c7"
HAnimSite1158 = x3d.HAnimSite()
HAnimSite1158.name = "l_neck_base"
HAnimSite1158.DEF = "hanim_l_neck_base_pt"
HAnimSite1158.translation = [0.06,1.26,0]
TouchSensor1159 = x3d.TouchSensor()
TouchSensor1159.description = "HAnimSite 82 hanim_l_neck_base_pt"

HAnimSite1158.children.append(TouchSensor1159)
Shape1160 = x3d.Shape()
Appearance1161 = x3d.Appearance()
Material1162 = x3d.Material()
Material1162.diffuseColor = [1,1,1]

Appearance1161.material = Material1162

Shape1160.appearance = Appearance1161
IndexedFaceSet1163 = x3d.IndexedFaceSet()
IndexedFaceSet1163.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1163.creaseAngle = 0.5
IndexedFaceSet1163.solid = False
ColorRGBA1164 = x3d.ColorRGBA()

IndexedFaceSet1163.color = ColorRGBA1164
Coordinate1165 = x3d.Coordinate()

IndexedFaceSet1163.coord = Coordinate1165

Shape1160.geometry = IndexedFaceSet1163

HAnimSite1158.children.append(Shape1160)
Billboard1166 = x3d.Billboard()
Billboard1166.axisOfRotation = [0,0,0]
Shape1167 = x3d.Shape()
Text1168 = x3d.Text()
Text1168.string = ["82"]
FontStyle1169 = x3d.FontStyle()
FontStyle1169.size = 0.035

Text1168.fontStyle = FontStyle1169

Shape1167.geometry = Text1168

Billboard1166.children.append(Shape1167)

HAnimSite1158.children.append(Billboard1166)

HAnimSegment1157.children.append(HAnimSite1158)
HAnimSite1170 = x3d.HAnimSite()
HAnimSite1170.name = "r_neck_base"
HAnimSite1170.DEF = "hanim_r_neck_base_pt"
HAnimSite1170.translation = [-0.06,1.26,0]
TouchSensor1171 = x3d.TouchSensor()
TouchSensor1171.description = "HAnimSite 83 hanim_r_neck_base_pt"

HAnimSite1170.children.append(TouchSensor1171)
Shape1172 = x3d.Shape()
Appearance1173 = x3d.Appearance()
Material1174 = x3d.Material()
Material1174.diffuseColor = [1,1,1]

Appearance1173.material = Material1174

Shape1172.appearance = Appearance1173
IndexedFaceSet1175 = x3d.IndexedFaceSet()
IndexedFaceSet1175.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1175.creaseAngle = 0.5
IndexedFaceSet1175.solid = False
ColorRGBA1176 = x3d.ColorRGBA()

IndexedFaceSet1175.color = ColorRGBA1176
Coordinate1177 = x3d.Coordinate()

IndexedFaceSet1175.coord = Coordinate1177

Shape1172.geometry = IndexedFaceSet1175

HAnimSite1170.children.append(Shape1172)
Billboard1178 = x3d.Billboard()
Billboard1178.axisOfRotation = [0,0,0]
Shape1179 = x3d.Shape()
Text1180 = x3d.Text()
Text1180.string = ["83"]
FontStyle1181 = x3d.FontStyle()
FontStyle1181.size = 0.035

Text1180.fontStyle = FontStyle1181

Shape1179.geometry = Text1180

Billboard1178.children.append(Shape1179)

HAnimSite1170.children.append(Billboard1178)

HAnimSegment1157.children.append(HAnimSite1170)
Shape1182 = x3d.Shape()
LineSet1183 = x3d.LineSet()
LineSet1183.vertexCount = [2]
ColorRGBA1184 = x3d.ColorRGBA()

LineSet1183.color = ColorRGBA1184
Coordinate1185 = x3d.Coordinate()

LineSet1183.coord = Coordinate1185

Shape1182.geometry = LineSet1183

HAnimSegment1157.children.append(Shape1182)

HAnimJoint1156.children.append(HAnimSegment1157)
HAnimJoint1186 = x3d.HAnimJoint()
HAnimJoint1186.name = "vc6"
HAnimJoint1186.DEF = "hanim_vc6"
HAnimJoint1186.center = [0,1.2575,-0.01506]
HAnimJoint1186.ulimit = [0,0,0]
HAnimJoint1186.llimit = [0,0,0]
HAnimSegment1187 = x3d.HAnimSegment()
HAnimSegment1187.name = "c6"
HAnimSegment1187.DEF = "hanim_c6"
Shape1188 = x3d.Shape()
LineSet1189 = x3d.LineSet()
LineSet1189.vertexCount = [2]
ColorRGBA1190 = x3d.ColorRGBA()

LineSet1189.color = ColorRGBA1190
Coordinate1191 = x3d.Coordinate()

LineSet1189.coord = Coordinate1191

Shape1188.geometry = LineSet1189

HAnimSegment1187.children.append(Shape1188)

HAnimJoint1186.children.append(HAnimSegment1187)
HAnimJoint1192 = x3d.HAnimJoint()
HAnimJoint1192.name = "vc5"
HAnimJoint1192.DEF = "hanim_vc5"
HAnimJoint1192.center = [0,1.2699,-0.01506]
HAnimJoint1192.ulimit = [0,0,0]
HAnimJoint1192.llimit = [0,0,0]
HAnimSegment1193 = x3d.HAnimSegment()
HAnimSegment1193.name = "c5"
HAnimSegment1193.DEF = "hanim_c5"
Shape1194 = x3d.Shape()
LineSet1195 = x3d.LineSet()
LineSet1195.vertexCount = [2]
ColorRGBA1196 = x3d.ColorRGBA()

LineSet1195.color = ColorRGBA1196
Coordinate1197 = x3d.Coordinate()

LineSet1195.coord = Coordinate1197

Shape1194.geometry = LineSet1195

HAnimSegment1193.children.append(Shape1194)

HAnimJoint1192.children.append(HAnimSegment1193)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.name = "vc4"
HAnimJoint1198.DEF = "hanim_vc4"
HAnimJoint1198.center = [0,1.28227,-0.01506]
HAnimJoint1198.ulimit = [0,0,0]
HAnimJoint1198.llimit = [0,0,0]
HAnimSegment1199 = x3d.HAnimSegment()
HAnimSegment1199.name = "c4"
HAnimSegment1199.DEF = "hanim_c4"
Shape1200 = x3d.Shape()
LineSet1201 = x3d.LineSet()
LineSet1201.vertexCount = [2]
ColorRGBA1202 = x3d.ColorRGBA()

LineSet1201.color = ColorRGBA1202
Coordinate1203 = x3d.Coordinate()

LineSet1201.coord = Coordinate1203

Shape1200.geometry = LineSet1201

HAnimSegment1199.children.append(Shape1200)

HAnimJoint1198.children.append(HAnimSegment1199)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.name = "vc3"
HAnimJoint1204.DEF = "hanim_vc3"
HAnimJoint1204.center = [0,1.2951,-0.01506]
HAnimJoint1204.ulimit = [0,0,0]
HAnimJoint1204.llimit = [0,0,0]
HAnimSegment1205 = x3d.HAnimSegment()
HAnimSegment1205.name = "c3"
HAnimSegment1205.DEF = "hanim_c3"
Shape1206 = x3d.Shape()
LineSet1207 = x3d.LineSet()
LineSet1207.vertexCount = [2]
ColorRGBA1208 = x3d.ColorRGBA()

LineSet1207.color = ColorRGBA1208
Coordinate1209 = x3d.Coordinate()

LineSet1207.coord = Coordinate1209

Shape1206.geometry = LineSet1207

HAnimSegment1205.children.append(Shape1206)

HAnimJoint1204.children.append(HAnimSegment1205)
HAnimJoint1210 = x3d.HAnimJoint()
HAnimJoint1210.name = "vc2"
HAnimJoint1210.DEF = "hanim_vc2"
HAnimJoint1210.center = [0,1.307,-0.015]
HAnimJoint1210.ulimit = [0,0,0]
HAnimJoint1210.llimit = [0,0,0]
HAnimSegment1211 = x3d.HAnimSegment()
HAnimSegment1211.name = "c2"
HAnimSegment1211.DEF = "hanim_c2"
HAnimSite1212 = x3d.HAnimSite()
HAnimSite1212.name = "adams_apple"
HAnimSite1212.DEF = "hanim_adams_apple_pt"
HAnimSite1212.translation = [0,1.29,0.04]
TouchSensor1213 = x3d.TouchSensor()
TouchSensor1213.description = "HAnimSite 11 hanim_adams_apple_pt"

HAnimSite1212.children.append(TouchSensor1213)
Shape1214 = x3d.Shape()
Appearance1215 = x3d.Appearance()
Material1216 = x3d.Material()
Material1216.diffuseColor = [1,1,1]

Appearance1215.material = Material1216

Shape1214.appearance = Appearance1215
IndexedFaceSet1217 = x3d.IndexedFaceSet()
IndexedFaceSet1217.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1217.creaseAngle = 0.5
IndexedFaceSet1217.solid = False
ColorRGBA1218 = x3d.ColorRGBA()

IndexedFaceSet1217.color = ColorRGBA1218
Coordinate1219 = x3d.Coordinate()

IndexedFaceSet1217.coord = Coordinate1219

Shape1214.geometry = IndexedFaceSet1217

HAnimSite1212.children.append(Shape1214)
Billboard1220 = x3d.Billboard()
Billboard1220.axisOfRotation = [0,0,0]
Shape1221 = x3d.Shape()
Text1222 = x3d.Text()
Text1222.string = ["11"]
FontStyle1223 = x3d.FontStyle()
FontStyle1223.size = 0.035

Text1222.fontStyle = FontStyle1223

Shape1221.geometry = Text1222

Billboard1220.children.append(Shape1221)

HAnimSite1212.children.append(Billboard1220)

HAnimSegment1211.children.append(HAnimSite1212)
Shape1224 = x3d.Shape()
LineSet1225 = x3d.LineSet()
LineSet1225.vertexCount = [2]
ColorRGBA1226 = x3d.ColorRGBA()

LineSet1225.color = ColorRGBA1226
Coordinate1227 = x3d.Coordinate()

LineSet1225.coord = Coordinate1227

Shape1224.geometry = LineSet1225

HAnimSegment1211.children.append(Shape1224)

HAnimJoint1210.children.append(HAnimSegment1211)
HAnimJoint1228 = x3d.HAnimJoint()
HAnimJoint1228.name = "vc1"
HAnimJoint1228.DEF = "hanim_vc1"
HAnimJoint1228.center = [0,1.3185,-0.0151]
HAnimJoint1228.ulimit = [0,0,0]
HAnimJoint1228.llimit = [0,0,0]
HAnimSegment1229 = x3d.HAnimSegment()
HAnimSegment1229.name = "c1"
HAnimSegment1229.DEF = "hanim_c1"
Shape1230 = x3d.Shape()
LineSet1231 = x3d.LineSet()
LineSet1231.vertexCount = [2]
ColorRGBA1232 = x3d.ColorRGBA()

LineSet1231.color = ColorRGBA1232
Coordinate1233 = x3d.Coordinate()

LineSet1231.coord = Coordinate1233

Shape1230.geometry = LineSet1231

HAnimSegment1229.children.append(Shape1230)

HAnimJoint1228.children.append(HAnimSegment1229)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.name = "skullbase"
HAnimJoint1234.DEF = "hanim_skullbase"
HAnimJoint1234.center = [0,1.3126,-0.0154]
HAnimJoint1234.ulimit = [0,0,0]
HAnimJoint1234.llimit = [0,0,0]
HAnimSegment1235 = x3d.HAnimSegment()
HAnimSegment1235.name = "skull"
HAnimSegment1235.DEF = "hanim_skull"
HAnimSite1236 = x3d.HAnimSite()
HAnimSite1236.name = "skull_vertex"
HAnimSite1236.DEF = "hanim_skull_vertex_pt"
HAnimSite1236.translation = [0,1.612,-0.03]
TouchSensor1237 = x3d.TouchSensor()
TouchSensor1237.description = "HAnimSite 0 hanim_skull_vertex_pt"

HAnimSite1236.children.append(TouchSensor1237)
Shape1238 = x3d.Shape()
Appearance1239 = x3d.Appearance()
Material1240 = x3d.Material()
Material1240.diffuseColor = [1,1,1]

Appearance1239.material = Material1240

Shape1238.appearance = Appearance1239
IndexedFaceSet1241 = x3d.IndexedFaceSet()
IndexedFaceSet1241.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1241.creaseAngle = 0.5
IndexedFaceSet1241.solid = False
ColorRGBA1242 = x3d.ColorRGBA()

IndexedFaceSet1241.color = ColorRGBA1242
Coordinate1243 = x3d.Coordinate()

IndexedFaceSet1241.coord = Coordinate1243

Shape1238.geometry = IndexedFaceSet1241

HAnimSite1236.children.append(Shape1238)
Billboard1244 = x3d.Billboard()
Billboard1244.axisOfRotation = [0,0,0]
Shape1245 = x3d.Shape()
Text1246 = x3d.Text()
Text1246.string = ["0"]
FontStyle1247 = x3d.FontStyle()
FontStyle1247.size = 0.035

Text1246.fontStyle = FontStyle1247

Shape1245.geometry = Text1246

Billboard1244.children.append(Shape1245)

HAnimSite1236.children.append(Billboard1244)

HAnimSegment1235.children.append(HAnimSite1236)
HAnimSite1248 = x3d.HAnimSite()
HAnimSite1248.name = "glabella"
HAnimSite1248.DEF = "hanim_glabella_pt"
HAnimSite1248.translation = [0,1.454,0.128]
TouchSensor1249 = x3d.TouchSensor()
TouchSensor1249.description = "HAnimSite 1 hanim_glabella_pt"

HAnimSite1248.children.append(TouchSensor1249)
Shape1250 = x3d.Shape()
Appearance1251 = x3d.Appearance()
Material1252 = x3d.Material()
Material1252.diffuseColor = [1,1,1]

Appearance1251.material = Material1252

Shape1250.appearance = Appearance1251
IndexedFaceSet1253 = x3d.IndexedFaceSet()
IndexedFaceSet1253.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1253.creaseAngle = 0.5
IndexedFaceSet1253.solid = False
ColorRGBA1254 = x3d.ColorRGBA()

IndexedFaceSet1253.color = ColorRGBA1254
Coordinate1255 = x3d.Coordinate()

IndexedFaceSet1253.coord = Coordinate1255

Shape1250.geometry = IndexedFaceSet1253

HAnimSite1248.children.append(Shape1250)
Billboard1256 = x3d.Billboard()
Billboard1256.axisOfRotation = [0,0,0]
Shape1257 = x3d.Shape()
Text1258 = x3d.Text()
Text1258.string = ["1"]
FontStyle1259 = x3d.FontStyle()
FontStyle1259.size = 0.035

Text1258.fontStyle = FontStyle1259

Shape1257.geometry = Text1258

Billboard1256.children.append(Shape1257)

HAnimSite1248.children.append(Billboard1256)

HAnimSegment1235.children.append(HAnimSite1248)
HAnimSite1260 = x3d.HAnimSite()
HAnimSite1260.name = "sellion"
HAnimSite1260.DEF = "hanim_sellion_pt"
HAnimSite1260.translation = [0,1.4,0.12]
TouchSensor1261 = x3d.TouchSensor()
TouchSensor1261.description = "HAnimSite 2 hanim_sellion_pt"

HAnimSite1260.children.append(TouchSensor1261)
Shape1262 = x3d.Shape()
Appearance1263 = x3d.Appearance()
Material1264 = x3d.Material()
Material1264.diffuseColor = [1,1,1]

Appearance1263.material = Material1264

Shape1262.appearance = Appearance1263
IndexedFaceSet1265 = x3d.IndexedFaceSet()
IndexedFaceSet1265.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1265.creaseAngle = 0.5
IndexedFaceSet1265.solid = False
ColorRGBA1266 = x3d.ColorRGBA()

IndexedFaceSet1265.color = ColorRGBA1266
Coordinate1267 = x3d.Coordinate()

IndexedFaceSet1265.coord = Coordinate1267

Shape1262.geometry = IndexedFaceSet1265

HAnimSite1260.children.append(Shape1262)
Billboard1268 = x3d.Billboard()
Billboard1268.axisOfRotation = [0,0,0]
Shape1269 = x3d.Shape()
Text1270 = x3d.Text()
Text1270.string = ["2"]
FontStyle1271 = x3d.FontStyle()
FontStyle1271.size = 0.035

Text1270.fontStyle = FontStyle1271

Shape1269.geometry = Text1270

Billboard1268.children.append(Shape1269)

HAnimSite1260.children.append(Billboard1268)

HAnimSegment1235.children.append(HAnimSite1260)
HAnimSite1272 = x3d.HAnimSite()
HAnimSite1272.name = "l_infraorbitale"
HAnimSite1272.DEF = "hanim_l_infraorbitale_pt"
HAnimSite1272.translation = [0.039,1.38,0.09]
TouchSensor1273 = x3d.TouchSensor()
TouchSensor1273.description = "HAnimSite 3 hanim_l_infraorbitale_pt"

HAnimSite1272.children.append(TouchSensor1273)
Shape1274 = x3d.Shape()
Appearance1275 = x3d.Appearance()
Material1276 = x3d.Material()
Material1276.diffuseColor = [1,1,1]

Appearance1275.material = Material1276

Shape1274.appearance = Appearance1275
IndexedFaceSet1277 = x3d.IndexedFaceSet()
IndexedFaceSet1277.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1277.creaseAngle = 0.5
IndexedFaceSet1277.solid = False
ColorRGBA1278 = x3d.ColorRGBA()

IndexedFaceSet1277.color = ColorRGBA1278
Coordinate1279 = x3d.Coordinate()

IndexedFaceSet1277.coord = Coordinate1279

Shape1274.geometry = IndexedFaceSet1277

HAnimSite1272.children.append(Shape1274)
Billboard1280 = x3d.Billboard()
Billboard1280.axisOfRotation = [0,0,0]
Shape1281 = x3d.Shape()
Text1282 = x3d.Text()
Text1282.string = ["3"]
FontStyle1283 = x3d.FontStyle()
FontStyle1283.size = 0.035

Text1282.fontStyle = FontStyle1283

Shape1281.geometry = Text1282

Billboard1280.children.append(Shape1281)

HAnimSite1272.children.append(Billboard1280)

HAnimSegment1235.children.append(HAnimSite1272)
HAnimSite1284 = x3d.HAnimSite()
HAnimSite1284.name = "l_tragion"
HAnimSite1284.DEF = "hanim_l_tragion_pt"
HAnimSite1284.translation = [0.1,1.38,0.0282]
TouchSensor1285 = x3d.TouchSensor()
TouchSensor1285.description = "HAnimSite 4 hanim_l_tragion_pt"

HAnimSite1284.children.append(TouchSensor1285)
Shape1286 = x3d.Shape()
Appearance1287 = x3d.Appearance()
Material1288 = x3d.Material()
Material1288.diffuseColor = [1,1,1]

Appearance1287.material = Material1288

Shape1286.appearance = Appearance1287
IndexedFaceSet1289 = x3d.IndexedFaceSet()
IndexedFaceSet1289.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1289.creaseAngle = 0.5
IndexedFaceSet1289.solid = False
ColorRGBA1290 = x3d.ColorRGBA()

IndexedFaceSet1289.color = ColorRGBA1290
Coordinate1291 = x3d.Coordinate()

IndexedFaceSet1289.coord = Coordinate1291

Shape1286.geometry = IndexedFaceSet1289

HAnimSite1284.children.append(Shape1286)
Billboard1292 = x3d.Billboard()
Billboard1292.axisOfRotation = [0,0,0]
Shape1293 = x3d.Shape()
Text1294 = x3d.Text()
Text1294.string = ["4"]
FontStyle1295 = x3d.FontStyle()
FontStyle1295.size = 0.035

Text1294.fontStyle = FontStyle1295

Shape1293.geometry = Text1294

Billboard1292.children.append(Shape1293)

HAnimSite1284.children.append(Billboard1292)

HAnimSegment1235.children.append(HAnimSite1284)
HAnimSite1296 = x3d.HAnimSite()
HAnimSite1296.name = "r_infraorbitale"
HAnimSite1296.DEF = "hanim_r_infraorbitale_pt"
HAnimSite1296.translation = [-0.039,1.38,0.09]
TouchSensor1297 = x3d.TouchSensor()
TouchSensor1297.description = "HAnimSite 6 hanim_r_infraorbitale_pt"

HAnimSite1296.children.append(TouchSensor1297)
Shape1298 = x3d.Shape()
Appearance1299 = x3d.Appearance()
Material1300 = x3d.Material()
Material1300.diffuseColor = [1,1,1]

Appearance1299.material = Material1300

Shape1298.appearance = Appearance1299
IndexedFaceSet1301 = x3d.IndexedFaceSet()
IndexedFaceSet1301.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1301.creaseAngle = 0.5
IndexedFaceSet1301.solid = False
ColorRGBA1302 = x3d.ColorRGBA()

IndexedFaceSet1301.color = ColorRGBA1302
Coordinate1303 = x3d.Coordinate()

IndexedFaceSet1301.coord = Coordinate1303

Shape1298.geometry = IndexedFaceSet1301

HAnimSite1296.children.append(Shape1298)
Billboard1304 = x3d.Billboard()
Billboard1304.axisOfRotation = [0,0,0]
Shape1305 = x3d.Shape()
Text1306 = x3d.Text()
Text1306.string = ["6"]
FontStyle1307 = x3d.FontStyle()
FontStyle1307.size = 0.035

Text1306.fontStyle = FontStyle1307

Shape1305.geometry = Text1306

Billboard1304.children.append(Shape1305)

HAnimSite1296.children.append(Billboard1304)

HAnimSegment1235.children.append(HAnimSite1296)
HAnimSite1308 = x3d.HAnimSite()
HAnimSite1308.name = "r_tragion"
HAnimSite1308.DEF = "hanim_r_tragion_pt"
HAnimSite1308.translation = [-0.1,1.38,0.0282]
TouchSensor1309 = x3d.TouchSensor()
TouchSensor1309.description = "HAnimSite 7 hanim_r_tragion_pt"

HAnimSite1308.children.append(TouchSensor1309)
Shape1310 = x3d.Shape()
Appearance1311 = x3d.Appearance()
Material1312 = x3d.Material()
Material1312.diffuseColor = [1,1,1]

Appearance1311.material = Material1312

Shape1310.appearance = Appearance1311
IndexedFaceSet1313 = x3d.IndexedFaceSet()
IndexedFaceSet1313.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1313.creaseAngle = 0.5
IndexedFaceSet1313.solid = False
ColorRGBA1314 = x3d.ColorRGBA()

IndexedFaceSet1313.color = ColorRGBA1314
Coordinate1315 = x3d.Coordinate()

IndexedFaceSet1313.coord = Coordinate1315

Shape1310.geometry = IndexedFaceSet1313

HAnimSite1308.children.append(Shape1310)
Billboard1316 = x3d.Billboard()
Billboard1316.axisOfRotation = [0,0,0]
Shape1317 = x3d.Shape()
Text1318 = x3d.Text()
Text1318.string = ["7"]
FontStyle1319 = x3d.FontStyle()
FontStyle1319.size = 0.035

Text1318.fontStyle = FontStyle1319

Shape1317.geometry = Text1318

Billboard1316.children.append(Shape1317)

HAnimSite1308.children.append(Billboard1316)

HAnimSegment1235.children.append(HAnimSite1308)
HAnimSite1320 = x3d.HAnimSite()
HAnimSite1320.name = "nuchale"
HAnimSite1320.DEF = "hanim_nuchale_pt"
HAnimSite1320.translation = [0.0039,1.35,-0.16]
TouchSensor1321 = x3d.TouchSensor()
TouchSensor1321.description = "HAnimSite 81 hanim_nuchale_pt"

HAnimSite1320.children.append(TouchSensor1321)
Shape1322 = x3d.Shape()
Appearance1323 = x3d.Appearance()
Material1324 = x3d.Material()
Material1324.diffuseColor = [1,1,1]

Appearance1323.material = Material1324

Shape1322.appearance = Appearance1323
IndexedFaceSet1325 = x3d.IndexedFaceSet()
IndexedFaceSet1325.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1325.creaseAngle = 0.5
IndexedFaceSet1325.solid = False
ColorRGBA1326 = x3d.ColorRGBA()

IndexedFaceSet1325.color = ColorRGBA1326
Coordinate1327 = x3d.Coordinate()

IndexedFaceSet1325.coord = Coordinate1327

Shape1322.geometry = IndexedFaceSet1325

HAnimSite1320.children.append(Shape1322)
Billboard1328 = x3d.Billboard()
Billboard1328.axisOfRotation = [0,0,0]
Shape1329 = x3d.Shape()
Text1330 = x3d.Text()
Text1330.string = ["81"]
FontStyle1331 = x3d.FontStyle()
FontStyle1331.size = 0.035

Text1330.fontStyle = FontStyle1331

Shape1329.geometry = Text1330

Billboard1328.children.append(Shape1329)

HAnimSite1320.children.append(Billboard1328)

HAnimSegment1235.children.append(HAnimSite1320)
HAnimSite1332 = x3d.HAnimSite()
HAnimSite1332.name = "opisthocranion"
HAnimSite1332.DEF = "hanim_opisthocranion_pt"
HAnimSite1332.translation = [0.0039,1.4588,-0.18]
TouchSensor1333 = x3d.TouchSensor()
TouchSensor1333.description = "HAnimSite 89 hanim_opisthocranion_pt"

HAnimSite1332.children.append(TouchSensor1333)
Shape1334 = x3d.Shape()
Appearance1335 = x3d.Appearance()
Material1336 = x3d.Material()
Material1336.diffuseColor = [1,1,1]

Appearance1335.material = Material1336

Shape1334.appearance = Appearance1335
IndexedFaceSet1337 = x3d.IndexedFaceSet()
IndexedFaceSet1337.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1337.creaseAngle = 0.5
IndexedFaceSet1337.solid = False
ColorRGBA1338 = x3d.ColorRGBA()

IndexedFaceSet1337.color = ColorRGBA1338
Coordinate1339 = x3d.Coordinate()

IndexedFaceSet1337.coord = Coordinate1339

Shape1334.geometry = IndexedFaceSet1337

HAnimSite1332.children.append(Shape1334)
Billboard1340 = x3d.Billboard()
Billboard1340.axisOfRotation = [0,0,0]
Shape1341 = x3d.Shape()
Text1342 = x3d.Text()
Text1342.string = ["89"]
FontStyle1343 = x3d.FontStyle()
FontStyle1343.size = 0.035

Text1342.fontStyle = FontStyle1343

Shape1341.geometry = Text1342

Billboard1340.children.append(Shape1341)

HAnimSite1332.children.append(Billboard1340)

HAnimSegment1235.children.append(HAnimSite1332)
HAnimSite1344 = x3d.HAnimSite()
HAnimSite1344.name = "l_ectocanthus"
HAnimSite1344.DEF = "hanim_l_ectocanthus_pt"
HAnimSite1344.translation = [0.086,1.399,0.074]
TouchSensor1345 = x3d.TouchSensor()
TouchSensor1345.description = "HAnimSite 85 hanim_l_ectocanthus_pt"

HAnimSite1344.children.append(TouchSensor1345)
Shape1346 = x3d.Shape()
Appearance1347 = x3d.Appearance()
Material1348 = x3d.Material()
Material1348.diffuseColor = [1,1,1]

Appearance1347.material = Material1348

Shape1346.appearance = Appearance1347
IndexedFaceSet1349 = x3d.IndexedFaceSet()
IndexedFaceSet1349.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1349.creaseAngle = 0.5
IndexedFaceSet1349.solid = False
ColorRGBA1350 = x3d.ColorRGBA()

IndexedFaceSet1349.color = ColorRGBA1350
Coordinate1351 = x3d.Coordinate()

IndexedFaceSet1349.coord = Coordinate1351

Shape1346.geometry = IndexedFaceSet1349

HAnimSite1344.children.append(Shape1346)
Billboard1352 = x3d.Billboard()
Billboard1352.axisOfRotation = [0,0,0]
Shape1353 = x3d.Shape()
Text1354 = x3d.Text()
Text1354.string = ["85"]
FontStyle1355 = x3d.FontStyle()
FontStyle1355.size = 0.035

Text1354.fontStyle = FontStyle1355

Shape1353.geometry = Text1354

Billboard1352.children.append(Shape1353)

HAnimSite1344.children.append(Billboard1352)

HAnimSegment1235.children.append(HAnimSite1344)
HAnimSite1356 = x3d.HAnimSite()
HAnimSite1356.name = "r_ectocanthus"
HAnimSite1356.DEF = "hanim_r_ectocanthus_pt"
HAnimSite1356.translation = [-0.086,1.399,0.074]
TouchSensor1357 = x3d.TouchSensor()
TouchSensor1357.description = "HAnimSite 86 hanim_r_ectocanthus_pt"

HAnimSite1356.children.append(TouchSensor1357)
Shape1358 = x3d.Shape()
Appearance1359 = x3d.Appearance()
Material1360 = x3d.Material()
Material1360.diffuseColor = [1,1,1]

Appearance1359.material = Material1360

Shape1358.appearance = Appearance1359
IndexedFaceSet1361 = x3d.IndexedFaceSet()
IndexedFaceSet1361.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1361.creaseAngle = 0.5
IndexedFaceSet1361.solid = False
ColorRGBA1362 = x3d.ColorRGBA()

IndexedFaceSet1361.color = ColorRGBA1362
Coordinate1363 = x3d.Coordinate()

IndexedFaceSet1361.coord = Coordinate1363

Shape1358.geometry = IndexedFaceSet1361

HAnimSite1356.children.append(Shape1358)
Billboard1364 = x3d.Billboard()
Billboard1364.axisOfRotation = [0,0,0]
Shape1365 = x3d.Shape()
Text1366 = x3d.Text()
Text1366.string = ["86"]
FontStyle1367 = x3d.FontStyle()
FontStyle1367.size = 0.035

Text1366.fontStyle = FontStyle1367

Shape1365.geometry = Text1366

Billboard1364.children.append(Shape1365)

HAnimSite1356.children.append(Billboard1364)

HAnimSegment1235.children.append(HAnimSite1356)
Shape1368 = x3d.Shape()
LineSet1369 = x3d.LineSet()
LineSet1369.vertexCount = [2]
ColorRGBA1370 = x3d.ColorRGBA()

LineSet1369.color = ColorRGBA1370
Coordinate1371 = x3d.Coordinate()

LineSet1369.coord = Coordinate1371

Shape1368.geometry = LineSet1369

HAnimSegment1235.children.append(Shape1368)

HAnimJoint1234.children.append(HAnimSegment1235)
HAnimJoint1372 = x3d.HAnimJoint()
HAnimJoint1372.name = "l_eyelid_joint"
HAnimJoint1372.DEF = "hanim_l_eyelid_joint"
HAnimJoint1372.center = [0.0505,1.42425,0.03294]
HAnimJoint1372.ulimit = [0,0,0]
HAnimJoint1372.llimit = [0,0,0]
HAnimSegment1373 = x3d.HAnimSegment()
HAnimSegment1373.name = "l_eyelid"
HAnimSegment1373.DEF = "hanim_l_eyelid"
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.name = "l_eyelid_tip"
HAnimSite1374.DEF = "hanim_l_eyelid_tip"
HAnimSite1374.translation = [0,2.64,0]
TouchSensor1375 = x3d.TouchSensor()
TouchSensor1375.description = "HAnimSite l_eyelid_tip hanim_l_eyelid_tip"

HAnimSite1374.children.append(TouchSensor1375)
Shape1376 = x3d.Shape()
Appearance1377 = x3d.Appearance()
Material1378 = x3d.Material()
Material1378.diffuseColor = [1,1,1]

Appearance1377.material = Material1378

Shape1376.appearance = Appearance1377
IndexedFaceSet1379 = x3d.IndexedFaceSet()
IndexedFaceSet1379.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1379.creaseAngle = 0.5
IndexedFaceSet1379.solid = False
ColorRGBA1380 = x3d.ColorRGBA()

IndexedFaceSet1379.color = ColorRGBA1380
Coordinate1381 = x3d.Coordinate()

IndexedFaceSet1379.coord = Coordinate1381

Shape1376.geometry = IndexedFaceSet1379

HAnimSite1374.children.append(Shape1376)
Billboard1382 = x3d.Billboard()
Billboard1382.axisOfRotation = [0,0,0]
Shape1383 = x3d.Shape()
Text1384 = x3d.Text()
Text1384.string = ["l_eyelid_tip"]
FontStyle1385 = x3d.FontStyle()
FontStyle1385.size = 0.035

Text1384.fontStyle = FontStyle1385

Shape1383.geometry = Text1384

Billboard1382.children.append(Shape1383)

HAnimSite1374.children.append(Billboard1382)

HAnimSegment1373.children.append(HAnimSite1374)
Shape1386 = x3d.Shape()
LineSet1387 = x3d.LineSet()
LineSet1387.vertexCount = [2]
ColorRGBA1388 = x3d.ColorRGBA()

LineSet1387.color = ColorRGBA1388
Coordinate1389 = x3d.Coordinate()

LineSet1387.coord = Coordinate1389

Shape1386.geometry = LineSet1387

HAnimSegment1373.children.append(Shape1386)

HAnimJoint1372.children.append(HAnimSegment1373)

HAnimJoint1234.children.append(HAnimJoint1372)
HAnimJoint1390 = x3d.HAnimJoint()
HAnimJoint1390.name = "r_eyelid_joint"
HAnimJoint1390.DEF = "hanim_r_eyelid_joint"
HAnimJoint1390.center = [-0.0505,1.42425,0.03294]
HAnimJoint1390.ulimit = [0,0,0]
HAnimJoint1390.llimit = [0,0,0]
HAnimSegment1391 = x3d.HAnimSegment()
HAnimSegment1391.name = "r_eyelid"
HAnimSegment1391.DEF = "hanim_r_eyelid"
HAnimSite1392 = x3d.HAnimSite()
HAnimSite1392.name = "r_eyelid_tip"
HAnimSite1392.DEF = "hanim_r_eyelid_tip"
HAnimSite1392.translation = [0,2.68,0]
TouchSensor1393 = x3d.TouchSensor()
TouchSensor1393.description = "HAnimSite r_eyelid_tip hanim_r_eyelid_tip"

HAnimSite1392.children.append(TouchSensor1393)
Shape1394 = x3d.Shape()
Appearance1395 = x3d.Appearance()
Material1396 = x3d.Material()
Material1396.diffuseColor = [1,1,1]

Appearance1395.material = Material1396

Shape1394.appearance = Appearance1395
IndexedFaceSet1397 = x3d.IndexedFaceSet()
IndexedFaceSet1397.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1397.creaseAngle = 0.5
IndexedFaceSet1397.solid = False
ColorRGBA1398 = x3d.ColorRGBA()

IndexedFaceSet1397.color = ColorRGBA1398
Coordinate1399 = x3d.Coordinate()

IndexedFaceSet1397.coord = Coordinate1399

Shape1394.geometry = IndexedFaceSet1397

HAnimSite1392.children.append(Shape1394)
Billboard1400 = x3d.Billboard()
Billboard1400.axisOfRotation = [0,0,0]
Shape1401 = x3d.Shape()
Text1402 = x3d.Text()
Text1402.string = ["r_eyelid_tip"]
FontStyle1403 = x3d.FontStyle()
FontStyle1403.size = 0.035

Text1402.fontStyle = FontStyle1403

Shape1401.geometry = Text1402

Billboard1400.children.append(Shape1401)

HAnimSite1392.children.append(Billboard1400)

HAnimSegment1391.children.append(HAnimSite1392)
Shape1404 = x3d.Shape()
LineSet1405 = x3d.LineSet()
LineSet1405.vertexCount = [2]
ColorRGBA1406 = x3d.ColorRGBA()

LineSet1405.color = ColorRGBA1406
Coordinate1407 = x3d.Coordinate()

LineSet1405.coord = Coordinate1407

Shape1404.geometry = LineSet1405

HAnimSegment1391.children.append(Shape1404)

HAnimJoint1390.children.append(HAnimSegment1391)

HAnimJoint1234.children.append(HAnimJoint1390)
HAnimJoint1408 = x3d.HAnimJoint()
HAnimJoint1408.name = "l_eyeball_joint"
HAnimJoint1408.DEF = "hanim_l_eyeball_joint"
HAnimJoint1408.center = [0.048127,1.4049,0.08305]
HAnimJoint1408.ulimit = [0,0,0]
HAnimJoint1408.llimit = [0,0,0]
HAnimSegment1409 = x3d.HAnimSegment()
HAnimSegment1409.name = "l_eyeball"
HAnimSegment1409.DEF = "hanim_l_eyeball"
HAnimSite1410 = x3d.HAnimSite()
HAnimSite1410.name = "l_eyeball_tip"
HAnimSite1410.DEF = "hanim_l_eyeball_tip"
HAnimSite1410.translation = [0,2.72,0]
TouchSensor1411 = x3d.TouchSensor()
TouchSensor1411.description = "HAnimSite l_eyeball_tip hanim_l_eyeball_tip"

HAnimSite1410.children.append(TouchSensor1411)
Shape1412 = x3d.Shape()
Appearance1413 = x3d.Appearance()
Material1414 = x3d.Material()
Material1414.diffuseColor = [1,1,1]

Appearance1413.material = Material1414

Shape1412.appearance = Appearance1413
IndexedFaceSet1415 = x3d.IndexedFaceSet()
IndexedFaceSet1415.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1415.creaseAngle = 0.5
IndexedFaceSet1415.solid = False
ColorRGBA1416 = x3d.ColorRGBA()

IndexedFaceSet1415.color = ColorRGBA1416
Coordinate1417 = x3d.Coordinate()

IndexedFaceSet1415.coord = Coordinate1417

Shape1412.geometry = IndexedFaceSet1415

HAnimSite1410.children.append(Shape1412)
Billboard1418 = x3d.Billboard()
Billboard1418.axisOfRotation = [0,0,0]
Shape1419 = x3d.Shape()
Text1420 = x3d.Text()
Text1420.string = ["l_eyeball_tip"]
FontStyle1421 = x3d.FontStyle()
FontStyle1421.size = 0.035

Text1420.fontStyle = FontStyle1421

Shape1419.geometry = Text1420

Billboard1418.children.append(Shape1419)

HAnimSite1410.children.append(Billboard1418)

HAnimSegment1409.children.append(HAnimSite1410)
Shape1422 = x3d.Shape()
LineSet1423 = x3d.LineSet()
LineSet1423.vertexCount = [2]
ColorRGBA1424 = x3d.ColorRGBA()

LineSet1423.color = ColorRGBA1424
Coordinate1425 = x3d.Coordinate()

LineSet1423.coord = Coordinate1425

Shape1422.geometry = LineSet1423

HAnimSegment1409.children.append(Shape1422)

HAnimJoint1408.children.append(HAnimSegment1409)

HAnimJoint1234.children.append(HAnimJoint1408)
HAnimJoint1426 = x3d.HAnimJoint()
HAnimJoint1426.name = "r_eyeball_joint"
HAnimJoint1426.DEF = "hanim_r_eyeball_joint"
HAnimJoint1426.center = [-0.04813,1.4049,0.08305]
HAnimJoint1426.ulimit = [0,0,0]
HAnimJoint1426.llimit = [0,0,0]
HAnimSegment1427 = x3d.HAnimSegment()
HAnimSegment1427.name = "r_eyeball"
HAnimSegment1427.DEF = "hanim_r_eyeball"
HAnimSite1428 = x3d.HAnimSite()
HAnimSite1428.name = "r_eyeball_tip"
HAnimSite1428.DEF = "hanim_r_eyeball_tip"
HAnimSite1428.translation = [0,2.76,0]
TouchSensor1429 = x3d.TouchSensor()
TouchSensor1429.description = "HAnimSite r_eyeball_tip hanim_r_eyeball_tip"

HAnimSite1428.children.append(TouchSensor1429)
Shape1430 = x3d.Shape()
Appearance1431 = x3d.Appearance()
Material1432 = x3d.Material()
Material1432.diffuseColor = [1,1,1]

Appearance1431.material = Material1432

Shape1430.appearance = Appearance1431
IndexedFaceSet1433 = x3d.IndexedFaceSet()
IndexedFaceSet1433.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1433.creaseAngle = 0.5
IndexedFaceSet1433.solid = False
ColorRGBA1434 = x3d.ColorRGBA()

IndexedFaceSet1433.color = ColorRGBA1434
Coordinate1435 = x3d.Coordinate()

IndexedFaceSet1433.coord = Coordinate1435

Shape1430.geometry = IndexedFaceSet1433

HAnimSite1428.children.append(Shape1430)
Billboard1436 = x3d.Billboard()
Billboard1436.axisOfRotation = [0,0,0]
Shape1437 = x3d.Shape()
Text1438 = x3d.Text()
Text1438.string = ["r_eyeball_tip"]
FontStyle1439 = x3d.FontStyle()
FontStyle1439.size = 0.035

Text1438.fontStyle = FontStyle1439

Shape1437.geometry = Text1438

Billboard1436.children.append(Shape1437)

HAnimSite1428.children.append(Billboard1436)

HAnimSegment1427.children.append(HAnimSite1428)
Shape1440 = x3d.Shape()
LineSet1441 = x3d.LineSet()
LineSet1441.vertexCount = [2]
ColorRGBA1442 = x3d.ColorRGBA()

LineSet1441.color = ColorRGBA1442
Coordinate1443 = x3d.Coordinate()

LineSet1441.coord = Coordinate1443

Shape1440.geometry = LineSet1441

HAnimSegment1427.children.append(Shape1440)

HAnimJoint1426.children.append(HAnimSegment1427)

HAnimJoint1234.children.append(HAnimJoint1426)
HAnimJoint1444 = x3d.HAnimJoint()
HAnimJoint1444.name = "l_eyebrow_joint"
HAnimJoint1444.DEF = "hanim_l_eyebrow_joint"
HAnimJoint1444.center = [0.02175,1.4139,0.1069]
HAnimJoint1444.ulimit = [0,0,0]
HAnimJoint1444.llimit = [0,0,0]
HAnimSegment1445 = x3d.HAnimSegment()
HAnimSegment1445.name = "l_eyebrow"
HAnimSegment1445.DEF = "hanim_l_eyebrow"
HAnimSite1446 = x3d.HAnimSite()
HAnimSite1446.name = "l_eyebrow_tip"
HAnimSite1446.DEF = "hanim_l_eyebrow_tip"
HAnimSite1446.translation = [0,2.8,0]
TouchSensor1447 = x3d.TouchSensor()
TouchSensor1447.description = "HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip"

HAnimSite1446.children.append(TouchSensor1447)
Shape1448 = x3d.Shape()
Appearance1449 = x3d.Appearance()
Material1450 = x3d.Material()
Material1450.diffuseColor = [1,1,1]

Appearance1449.material = Material1450

Shape1448.appearance = Appearance1449
IndexedFaceSet1451 = x3d.IndexedFaceSet()
IndexedFaceSet1451.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1451.creaseAngle = 0.5
IndexedFaceSet1451.solid = False
ColorRGBA1452 = x3d.ColorRGBA()

IndexedFaceSet1451.color = ColorRGBA1452
Coordinate1453 = x3d.Coordinate()

IndexedFaceSet1451.coord = Coordinate1453

Shape1448.geometry = IndexedFaceSet1451

HAnimSite1446.children.append(Shape1448)
Billboard1454 = x3d.Billboard()
Billboard1454.axisOfRotation = [0,0,0]
Shape1455 = x3d.Shape()
Text1456 = x3d.Text()
Text1456.string = ["l_eyebrow_tip"]
FontStyle1457 = x3d.FontStyle()
FontStyle1457.size = 0.035

Text1456.fontStyle = FontStyle1457

Shape1455.geometry = Text1456

Billboard1454.children.append(Shape1455)

HAnimSite1446.children.append(Billboard1454)

HAnimSegment1445.children.append(HAnimSite1446)
Shape1458 = x3d.Shape()
LineSet1459 = x3d.LineSet()
LineSet1459.vertexCount = [2]
ColorRGBA1460 = x3d.ColorRGBA()

LineSet1459.color = ColorRGBA1460
Coordinate1461 = x3d.Coordinate()

LineSet1459.coord = Coordinate1461

Shape1458.geometry = LineSet1459

HAnimSegment1445.children.append(Shape1458)

HAnimJoint1444.children.append(HAnimSegment1445)

HAnimJoint1234.children.append(HAnimJoint1444)
HAnimJoint1462 = x3d.HAnimJoint()
HAnimJoint1462.name = "r_eyebrow_joint"
HAnimJoint1462.DEF = "hanim_r_eyebrow_joint"
HAnimJoint1462.center = [-0.02175,1.4139,0.10694]
HAnimJoint1462.ulimit = [0,0,0]
HAnimJoint1462.llimit = [0,0,0]
HAnimSegment1463 = x3d.HAnimSegment()
HAnimSegment1463.name = "r_eyebrow"
HAnimSegment1463.DEF = "hanim_r_eyebrow"
HAnimSite1464 = x3d.HAnimSite()
HAnimSite1464.name = "r_eyebrow_tip"
HAnimSite1464.DEF = "hanim_r_eyebrow_tip"
HAnimSite1464.translation = [0,2.84,0]
TouchSensor1465 = x3d.TouchSensor()
TouchSensor1465.description = "HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip"

HAnimSite1464.children.append(TouchSensor1465)
Shape1466 = x3d.Shape()
Appearance1467 = x3d.Appearance()
Material1468 = x3d.Material()
Material1468.diffuseColor = [1,1,1]

Appearance1467.material = Material1468

Shape1466.appearance = Appearance1467
IndexedFaceSet1469 = x3d.IndexedFaceSet()
IndexedFaceSet1469.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1469.creaseAngle = 0.5
IndexedFaceSet1469.solid = False
ColorRGBA1470 = x3d.ColorRGBA()

IndexedFaceSet1469.color = ColorRGBA1470
Coordinate1471 = x3d.Coordinate()

IndexedFaceSet1469.coord = Coordinate1471

Shape1466.geometry = IndexedFaceSet1469

HAnimSite1464.children.append(Shape1466)
Billboard1472 = x3d.Billboard()
Billboard1472.axisOfRotation = [0,0,0]
Shape1473 = x3d.Shape()
Text1474 = x3d.Text()
Text1474.string = ["r_eyebrow_tip"]
FontStyle1475 = x3d.FontStyle()
FontStyle1475.size = 0.035

Text1474.fontStyle = FontStyle1475

Shape1473.geometry = Text1474

Billboard1472.children.append(Shape1473)

HAnimSite1464.children.append(Billboard1472)

HAnimSegment1463.children.append(HAnimSite1464)
Shape1476 = x3d.Shape()
LineSet1477 = x3d.LineSet()
LineSet1477.vertexCount = [2]
ColorRGBA1478 = x3d.ColorRGBA()

LineSet1477.color = ColorRGBA1478
Coordinate1479 = x3d.Coordinate()

LineSet1477.coord = Coordinate1479

Shape1476.geometry = LineSet1477

HAnimSegment1463.children.append(Shape1476)

HAnimJoint1462.children.append(HAnimSegment1463)

HAnimJoint1234.children.append(HAnimJoint1462)
HAnimJoint1480 = x3d.HAnimJoint()
HAnimJoint1480.name = "temporomandibular"
HAnimJoint1480.DEF = "hanim_temporomandibular"
HAnimJoint1480.center = [0,1.3128,0.01538]
HAnimJoint1480.ulimit = [0,0,0]
HAnimJoint1480.llimit = [0,0,0]
HAnimSegment1481 = x3d.HAnimSegment()
HAnimSegment1481.name = "jaw"
HAnimSegment1481.DEF = "hanim_jaw"
HAnimSite1482 = x3d.HAnimSite()
HAnimSite1482.name = "l_gonion"
HAnimSite1482.DEF = "hanim_l_gonion_pt"
HAnimSite1482.translation = [0.068,1.346,0.033]
TouchSensor1483 = x3d.TouchSensor()
TouchSensor1483.description = "HAnimSite 5 hanim_l_gonion_pt"

HAnimSite1482.children.append(TouchSensor1483)
Shape1484 = x3d.Shape()
Appearance1485 = x3d.Appearance()
Material1486 = x3d.Material()
Material1486.diffuseColor = [1,1,1]

Appearance1485.material = Material1486

Shape1484.appearance = Appearance1485
IndexedFaceSet1487 = x3d.IndexedFaceSet()
IndexedFaceSet1487.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1487.creaseAngle = 0.5
IndexedFaceSet1487.solid = False
ColorRGBA1488 = x3d.ColorRGBA()

IndexedFaceSet1487.color = ColorRGBA1488
Coordinate1489 = x3d.Coordinate()

IndexedFaceSet1487.coord = Coordinate1489

Shape1484.geometry = IndexedFaceSet1487

HAnimSite1482.children.append(Shape1484)
Billboard1490 = x3d.Billboard()
Billboard1490.axisOfRotation = [0,0,0]
Shape1491 = x3d.Shape()
Text1492 = x3d.Text()
Text1492.string = ["5"]
FontStyle1493 = x3d.FontStyle()
FontStyle1493.size = 0.035

Text1492.fontStyle = FontStyle1493

Shape1491.geometry = Text1492

Billboard1490.children.append(Shape1491)

HAnimSite1482.children.append(Billboard1490)

HAnimSegment1481.children.append(HAnimSite1482)
HAnimSite1494 = x3d.HAnimSite()
HAnimSite1494.name = "r_gonion"
HAnimSite1494.DEF = "hanim_r_gonion_pt"
HAnimSite1494.translation = [-0.068,1.346,0.033]
TouchSensor1495 = x3d.TouchSensor()
TouchSensor1495.description = "HAnimSite 8 hanim_r_gonion_pt"

HAnimSite1494.children.append(TouchSensor1495)
Shape1496 = x3d.Shape()
Appearance1497 = x3d.Appearance()
Material1498 = x3d.Material()
Material1498.diffuseColor = [1,1,1]

Appearance1497.material = Material1498

Shape1496.appearance = Appearance1497
IndexedFaceSet1499 = x3d.IndexedFaceSet()
IndexedFaceSet1499.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1499.creaseAngle = 0.5
IndexedFaceSet1499.solid = False
ColorRGBA1500 = x3d.ColorRGBA()

IndexedFaceSet1499.color = ColorRGBA1500
Coordinate1501 = x3d.Coordinate()

IndexedFaceSet1499.coord = Coordinate1501

Shape1496.geometry = IndexedFaceSet1499

HAnimSite1494.children.append(Shape1496)
Billboard1502 = x3d.Billboard()
Billboard1502.axisOfRotation = [0,0,0]
Shape1503 = x3d.Shape()
Text1504 = x3d.Text()
Text1504.string = ["8"]
FontStyle1505 = x3d.FontStyle()
FontStyle1505.size = 0.035

Text1504.fontStyle = FontStyle1505

Shape1503.geometry = Text1504

Billboard1502.children.append(Shape1503)

HAnimSite1494.children.append(Billboard1502)

HAnimSegment1481.children.append(HAnimSite1494)
HAnimSite1506 = x3d.HAnimSite()
HAnimSite1506.name = "supramenton"
HAnimSite1506.DEF = "hanim_supramenton_pt"
HAnimSite1506.translation = [0,1.32,0.086]
TouchSensor1507 = x3d.TouchSensor()
TouchSensor1507.description = "HAnimSite 9 hanim_supramenton_pt"

HAnimSite1506.children.append(TouchSensor1507)
Shape1508 = x3d.Shape()
Appearance1509 = x3d.Appearance()
Material1510 = x3d.Material()
Material1510.diffuseColor = [1,1,1]

Appearance1509.material = Material1510

Shape1508.appearance = Appearance1509
IndexedFaceSet1511 = x3d.IndexedFaceSet()
IndexedFaceSet1511.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1511.creaseAngle = 0.5
IndexedFaceSet1511.solid = False
ColorRGBA1512 = x3d.ColorRGBA()

IndexedFaceSet1511.color = ColorRGBA1512
Coordinate1513 = x3d.Coordinate()

IndexedFaceSet1511.coord = Coordinate1513

Shape1508.geometry = IndexedFaceSet1511

HAnimSite1506.children.append(Shape1508)
Billboard1514 = x3d.Billboard()
Billboard1514.axisOfRotation = [0,0,0]
Shape1515 = x3d.Shape()
Text1516 = x3d.Text()
Text1516.string = ["9"]
FontStyle1517 = x3d.FontStyle()
FontStyle1517.size = 0.035

Text1516.fontStyle = FontStyle1517

Shape1515.geometry = Text1516

Billboard1514.children.append(Shape1515)

HAnimSite1506.children.append(Billboard1514)

HAnimSegment1481.children.append(HAnimSite1506)
HAnimSite1518 = x3d.HAnimSite()
HAnimSite1518.name = "menton"
HAnimSite1518.DEF = "hanim_menton_pt"
HAnimSite1518.translation = [0,1.3,0.08]
TouchSensor1519 = x3d.TouchSensor()
TouchSensor1519.description = "HAnimSite 87 hanim_menton_pt"

HAnimSite1518.children.append(TouchSensor1519)
Shape1520 = x3d.Shape()
Appearance1521 = x3d.Appearance()
Material1522 = x3d.Material()
Material1522.diffuseColor = [1,1,1]

Appearance1521.material = Material1522

Shape1520.appearance = Appearance1521
IndexedFaceSet1523 = x3d.IndexedFaceSet()
IndexedFaceSet1523.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1523.creaseAngle = 0.5
IndexedFaceSet1523.solid = False
ColorRGBA1524 = x3d.ColorRGBA()

IndexedFaceSet1523.color = ColorRGBA1524
Coordinate1525 = x3d.Coordinate()

IndexedFaceSet1523.coord = Coordinate1525

Shape1520.geometry = IndexedFaceSet1523

HAnimSite1518.children.append(Shape1520)
Billboard1526 = x3d.Billboard()
Billboard1526.axisOfRotation = [0,0,0]
Shape1527 = x3d.Shape()
Text1528 = x3d.Text()
Text1528.string = ["87"]
FontStyle1529 = x3d.FontStyle()
FontStyle1529.size = 0.035

Text1528.fontStyle = FontStyle1529

Shape1527.geometry = Text1528

Billboard1526.children.append(Shape1527)

HAnimSite1518.children.append(Billboard1526)

HAnimSegment1481.children.append(HAnimSite1518)
Shape1530 = x3d.Shape()
LineSet1531 = x3d.LineSet()
LineSet1531.vertexCount = [2]
ColorRGBA1532 = x3d.ColorRGBA()

LineSet1531.color = ColorRGBA1532
Coordinate1533 = x3d.Coordinate()

LineSet1531.coord = Coordinate1533

Shape1530.geometry = LineSet1531

HAnimSegment1481.children.append(Shape1530)

HAnimJoint1480.children.append(HAnimSegment1481)

HAnimJoint1234.children.append(HAnimJoint1480)

HAnimJoint1228.children.append(HAnimJoint1234)

HAnimJoint1210.children.append(HAnimJoint1228)

HAnimJoint1204.children.append(HAnimJoint1210)

HAnimJoint1198.children.append(HAnimJoint1204)

HAnimJoint1192.children.append(HAnimJoint1198)

HAnimJoint1186.children.append(HAnimJoint1192)

HAnimJoint1156.children.append(HAnimJoint1186)

HAnimJoint1126.children.append(HAnimJoint1156)
HAnimJoint1534 = x3d.HAnimJoint()
HAnimJoint1534.name = "l_sternoclavicular"
HAnimJoint1534.DEF = "hanim_l_sternoclavicular"
HAnimJoint1534.center = [0.03847,1.2087,-0.01378]
HAnimJoint1534.ulimit = [0,0,0]
HAnimJoint1534.llimit = [0,0,0]
HAnimSegment1535 = x3d.HAnimSegment()
HAnimSegment1535.name = "l_clavicle"
HAnimSegment1535.DEF = "hanim_l_clavicle"
HAnimSite1536 = x3d.HAnimSite()
HAnimSite1536.name = "l_clavicale"
HAnimSite1536.DEF = "hanim_l_clavicale_pt"
HAnimSite1536.translation = [0.03,1.2,0.04]
TouchSensor1537 = x3d.TouchSensor()
TouchSensor1537.description = "HAnimSite l_clavicale hanim_l_clavicale_pt"

HAnimSite1536.children.append(TouchSensor1537)
Shape1538 = x3d.Shape()
Appearance1539 = x3d.Appearance()
Material1540 = x3d.Material()
Material1540.diffuseColor = [1,1,1]

Appearance1539.material = Material1540

Shape1538.appearance = Appearance1539
IndexedFaceSet1541 = x3d.IndexedFaceSet()
IndexedFaceSet1541.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1541.creaseAngle = 0.5
IndexedFaceSet1541.solid = False
ColorRGBA1542 = x3d.ColorRGBA()

IndexedFaceSet1541.color = ColorRGBA1542
Coordinate1543 = x3d.Coordinate()

IndexedFaceSet1541.coord = Coordinate1543

Shape1538.geometry = IndexedFaceSet1541

HAnimSite1536.children.append(Shape1538)
Billboard1544 = x3d.Billboard()
Billboard1544.axisOfRotation = [0,0,0]
Shape1545 = x3d.Shape()
Text1546 = x3d.Text()
Text1546.string = ["l_clavicale"]
FontStyle1547 = x3d.FontStyle()
FontStyle1547.size = 0.035

Text1546.fontStyle = FontStyle1547

Shape1545.geometry = Text1546

Billboard1544.children.append(Shape1545)

HAnimSite1536.children.append(Billboard1544)

HAnimSegment1535.children.append(HAnimSite1536)
Shape1548 = x3d.Shape()
LineSet1549 = x3d.LineSet()
LineSet1549.vertexCount = [2]
ColorRGBA1550 = x3d.ColorRGBA()

LineSet1549.color = ColorRGBA1550
Coordinate1551 = x3d.Coordinate()

LineSet1549.coord = Coordinate1551

Shape1548.geometry = LineSet1549

HAnimSegment1535.children.append(Shape1548)

HAnimJoint1534.children.append(HAnimSegment1535)
HAnimJoint1552 = x3d.HAnimJoint()
HAnimJoint1552.name = "l_acromioclavicular"
HAnimJoint1552.DEF = "hanim_l_acromioclavicular"
HAnimJoint1552.center = [0.12294,1.191825,-0.0129]
HAnimJoint1552.ulimit = [0,0,0]
HAnimJoint1552.llimit = [0,0,0]
HAnimSegment1553 = x3d.HAnimSegment()
HAnimSegment1553.name = "l_scapula"
HAnimSegment1553.DEF = "hanim_l_scapula"
HAnimSite1554 = x3d.HAnimSite()
HAnimSite1554.name = "l_acromion"
HAnimSite1554.DEF = "hanim_l_acromion_pt"
HAnimSite1554.translation = [0.15,1.222,-0.02]
TouchSensor1555 = x3d.TouchSensor()
TouchSensor1555.description = "HAnimSite 15 hanim_l_acromion_pt"

HAnimSite1554.children.append(TouchSensor1555)
Shape1556 = x3d.Shape()
Appearance1557 = x3d.Appearance()
Material1558 = x3d.Material()
Material1558.diffuseColor = [1,1,1]

Appearance1557.material = Material1558

Shape1556.appearance = Appearance1557
IndexedFaceSet1559 = x3d.IndexedFaceSet()
IndexedFaceSet1559.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1559.creaseAngle = 0.5
IndexedFaceSet1559.solid = False
ColorRGBA1560 = x3d.ColorRGBA()

IndexedFaceSet1559.color = ColorRGBA1560
Coordinate1561 = x3d.Coordinate()

IndexedFaceSet1559.coord = Coordinate1561

Shape1556.geometry = IndexedFaceSet1559

HAnimSite1554.children.append(Shape1556)
Billboard1562 = x3d.Billboard()
Billboard1562.axisOfRotation = [0,0,0]
Shape1563 = x3d.Shape()
Text1564 = x3d.Text()
Text1564.string = ["15"]
FontStyle1565 = x3d.FontStyle()
FontStyle1565.size = 0.035

Text1564.fontStyle = FontStyle1565

Shape1563.geometry = Text1564

Billboard1562.children.append(Shape1563)

HAnimSite1554.children.append(Billboard1562)

HAnimSegment1553.children.append(HAnimSite1554)
HAnimSite1566 = x3d.HAnimSite()
HAnimSite1566.name = "l_axilla_proximal"
HAnimSite1566.DEF = "hanim_l_axilla_proximal_pt"
HAnimSite1566.translation = [0.15,1.16,0.04]
TouchSensor1567 = x3d.TouchSensor()
TouchSensor1567.description = "HAnimSite 16 hanim_l_axilla_proximal_pt"

HAnimSite1566.children.append(TouchSensor1567)
Shape1568 = x3d.Shape()
Appearance1569 = x3d.Appearance()
Material1570 = x3d.Material()
Material1570.diffuseColor = [1,1,1]

Appearance1569.material = Material1570

Shape1568.appearance = Appearance1569
IndexedFaceSet1571 = x3d.IndexedFaceSet()
IndexedFaceSet1571.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1571.creaseAngle = 0.5
IndexedFaceSet1571.solid = False
ColorRGBA1572 = x3d.ColorRGBA()

IndexedFaceSet1571.color = ColorRGBA1572
Coordinate1573 = x3d.Coordinate()

IndexedFaceSet1571.coord = Coordinate1573

Shape1568.geometry = IndexedFaceSet1571

HAnimSite1566.children.append(Shape1568)
Billboard1574 = x3d.Billboard()
Billboard1574.axisOfRotation = [0,0,0]
Shape1575 = x3d.Shape()
Text1576 = x3d.Text()
Text1576.string = ["16"]
FontStyle1577 = x3d.FontStyle()
FontStyle1577.size = 0.035

Text1576.fontStyle = FontStyle1577

Shape1575.geometry = Text1576

Billboard1574.children.append(Shape1575)

HAnimSite1566.children.append(Billboard1574)

HAnimSegment1553.children.append(HAnimSite1566)
HAnimSite1578 = x3d.HAnimSite()
HAnimSite1578.name = "l_axilla_distal"
HAnimSite1578.DEF = "hanim_l_axilla_distal_pt"
HAnimSite1578.translation = [0.17,1.14,0]
TouchSensor1579 = x3d.TouchSensor()
TouchSensor1579.description = "HAnimSite 17 hanim_l_axilla_distal_pt"

HAnimSite1578.children.append(TouchSensor1579)
Shape1580 = x3d.Shape()
Appearance1581 = x3d.Appearance()
Material1582 = x3d.Material()
Material1582.diffuseColor = [1,1,1]

Appearance1581.material = Material1582

Shape1580.appearance = Appearance1581
IndexedFaceSet1583 = x3d.IndexedFaceSet()
IndexedFaceSet1583.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1583.creaseAngle = 0.5
IndexedFaceSet1583.solid = False
ColorRGBA1584 = x3d.ColorRGBA()

IndexedFaceSet1583.color = ColorRGBA1584
Coordinate1585 = x3d.Coordinate()

IndexedFaceSet1583.coord = Coordinate1585

Shape1580.geometry = IndexedFaceSet1583

HAnimSite1578.children.append(Shape1580)
Billboard1586 = x3d.Billboard()
Billboard1586.axisOfRotation = [0,0,0]
Shape1587 = x3d.Shape()
Text1588 = x3d.Text()
Text1588.string = ["17"]
FontStyle1589 = x3d.FontStyle()
FontStyle1589.size = 0.035

Text1588.fontStyle = FontStyle1589

Shape1587.geometry = Text1588

Billboard1586.children.append(Shape1587)

HAnimSite1578.children.append(Billboard1586)

HAnimSegment1553.children.append(HAnimSite1578)
HAnimSite1590 = x3d.HAnimSite()
HAnimSite1590.name = "l_axilla_posterior_folds"
HAnimSite1590.DEF = "hanim_l_axilla_posterior_folds_pt"
HAnimSite1590.translation = [0.15,1.145,-0.04]
TouchSensor1591 = x3d.TouchSensor()
TouchSensor1591.description = "HAnimSite 18 hanim_l_axilla_posterior_folds_pt"

HAnimSite1590.children.append(TouchSensor1591)
Shape1592 = x3d.Shape()
Appearance1593 = x3d.Appearance()
Material1594 = x3d.Material()
Material1594.diffuseColor = [1,1,1]

Appearance1593.material = Material1594

Shape1592.appearance = Appearance1593
IndexedFaceSet1595 = x3d.IndexedFaceSet()
IndexedFaceSet1595.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1595.creaseAngle = 0.5
IndexedFaceSet1595.solid = False
ColorRGBA1596 = x3d.ColorRGBA()

IndexedFaceSet1595.color = ColorRGBA1596
Coordinate1597 = x3d.Coordinate()

IndexedFaceSet1595.coord = Coordinate1597

Shape1592.geometry = IndexedFaceSet1595

HAnimSite1590.children.append(Shape1592)
Billboard1598 = x3d.Billboard()
Billboard1598.axisOfRotation = [0,0,0]
Shape1599 = x3d.Shape()
Text1600 = x3d.Text()
Text1600.string = ["18"]
FontStyle1601 = x3d.FontStyle()
FontStyle1601.size = 0.035

Text1600.fontStyle = FontStyle1601

Shape1599.geometry = Text1600

Billboard1598.children.append(Shape1599)

HAnimSite1590.children.append(Billboard1598)

HAnimSegment1553.children.append(HAnimSite1590)
Shape1602 = x3d.Shape()
LineSet1603 = x3d.LineSet()
LineSet1603.vertexCount = [2]
ColorRGBA1604 = x3d.ColorRGBA()

LineSet1603.color = ColorRGBA1604
Coordinate1605 = x3d.Coordinate()

LineSet1603.coord = Coordinate1605

Shape1602.geometry = LineSet1603

HAnimSegment1553.children.append(Shape1602)

HAnimJoint1552.children.append(HAnimSegment1553)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.name = "l_shoulder"
HAnimJoint1606.DEF = "hanim_l_shoulder"
HAnimJoint1606.center = [0.16506,1.17855,-0.00327]
HAnimJoint1606.ulimit = [0,0,0]
HAnimJoint1606.llimit = [0,0,0]
HAnimSegment1607 = x3d.HAnimSegment()
HAnimSegment1607.name = "l_upperarm"
HAnimSegment1607.DEF = "hanim_l_upperarm"
HAnimSite1608 = x3d.HAnimSite()
HAnimSite1608.name = "l_humeral_lateral_epicondyle"
HAnimSite1608.DEF = "hanim_l_humeral_lateral_epicondyle_pt"
HAnimSite1608.translation = [0.2,0.95,-0.03]
TouchSensor1609 = x3d.TouchSensor()
TouchSensor1609.description = "HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt"

HAnimSite1608.children.append(TouchSensor1609)
Shape1610 = x3d.Shape()
Appearance1611 = x3d.Appearance()
Material1612 = x3d.Material()
Material1612.diffuseColor = [1,1,1]

Appearance1611.material = Material1612

Shape1610.appearance = Appearance1611
IndexedFaceSet1613 = x3d.IndexedFaceSet()
IndexedFaceSet1613.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1613.creaseAngle = 0.5
IndexedFaceSet1613.solid = False
ColorRGBA1614 = x3d.ColorRGBA()

IndexedFaceSet1613.color = ColorRGBA1614
Coordinate1615 = x3d.Coordinate()

IndexedFaceSet1613.coord = Coordinate1615

Shape1610.geometry = IndexedFaceSet1613

HAnimSite1608.children.append(Shape1610)
Billboard1616 = x3d.Billboard()
Billboard1616.axisOfRotation = [0,0,0]
Shape1617 = x3d.Shape()
Text1618 = x3d.Text()
Text1618.string = ["63"]
FontStyle1619 = x3d.FontStyle()
FontStyle1619.size = 0.035

Text1618.fontStyle = FontStyle1619

Shape1617.geometry = Text1618

Billboard1616.children.append(Shape1617)

HAnimSite1608.children.append(Billboard1616)

HAnimSegment1607.children.append(HAnimSite1608)
HAnimSite1620 = x3d.HAnimSite()
HAnimSite1620.name = "l_humeral_medial_epicondyle"
HAnimSite1620.DEF = "hanim_l_humeral_medial_epicondyle_pt"
HAnimSite1620.translation = [0.18,0.93,-0.03]
TouchSensor1621 = x3d.TouchSensor()
TouchSensor1621.description = "HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt"

HAnimSite1620.children.append(TouchSensor1621)
Shape1622 = x3d.Shape()
Appearance1623 = x3d.Appearance()
Material1624 = x3d.Material()
Material1624.diffuseColor = [1,1,1]

Appearance1623.material = Material1624

Shape1622.appearance = Appearance1623
IndexedFaceSet1625 = x3d.IndexedFaceSet()
IndexedFaceSet1625.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1625.creaseAngle = 0.5
IndexedFaceSet1625.solid = False
ColorRGBA1626 = x3d.ColorRGBA()

IndexedFaceSet1625.color = ColorRGBA1626
Coordinate1627 = x3d.Coordinate()

IndexedFaceSet1625.coord = Coordinate1627

Shape1622.geometry = IndexedFaceSet1625

HAnimSite1620.children.append(Shape1622)
Billboard1628 = x3d.Billboard()
Billboard1628.axisOfRotation = [0,0,0]
Shape1629 = x3d.Shape()
Text1630 = x3d.Text()
Text1630.string = ["64"]
FontStyle1631 = x3d.FontStyle()
FontStyle1631.size = 0.035

Text1630.fontStyle = FontStyle1631

Shape1629.geometry = Text1630

Billboard1628.children.append(Shape1629)

HAnimSite1620.children.append(Billboard1628)

HAnimSegment1607.children.append(HAnimSite1620)
HAnimSite1632 = x3d.HAnimSite()
HAnimSite1632.name = "l_radiale"
HAnimSite1632.DEF = "hanim_l_radiale_pt"
HAnimSite1632.translation = [0.2,0.91,-0.03]
TouchSensor1633 = x3d.TouchSensor()
TouchSensor1633.description = "HAnimSite 69 hanim_l_radiale_pt"

HAnimSite1632.children.append(TouchSensor1633)
Shape1634 = x3d.Shape()
Appearance1635 = x3d.Appearance()
Material1636 = x3d.Material()
Material1636.diffuseColor = [1,1,1]

Appearance1635.material = Material1636

Shape1634.appearance = Appearance1635
IndexedFaceSet1637 = x3d.IndexedFaceSet()
IndexedFaceSet1637.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1637.creaseAngle = 0.5
IndexedFaceSet1637.solid = False
ColorRGBA1638 = x3d.ColorRGBA()

IndexedFaceSet1637.color = ColorRGBA1638
Coordinate1639 = x3d.Coordinate()

IndexedFaceSet1637.coord = Coordinate1639

Shape1634.geometry = IndexedFaceSet1637

HAnimSite1632.children.append(Shape1634)
Billboard1640 = x3d.Billboard()
Billboard1640.axisOfRotation = [0,0,0]
Shape1641 = x3d.Shape()
Text1642 = x3d.Text()
Text1642.string = ["69"]
FontStyle1643 = x3d.FontStyle()
FontStyle1643.size = 0.035

Text1642.fontStyle = FontStyle1643

Shape1641.geometry = Text1642

Billboard1640.children.append(Shape1641)

HAnimSite1632.children.append(Billboard1640)

HAnimSegment1607.children.append(HAnimSite1632)
HAnimSite1644 = x3d.HAnimSite()
HAnimSite1644.name = "l_bideltoid"
HAnimSite1644.DEF = "hanim_l_bideltoid_pt"
HAnimSite1644.translation = [0.225,1.185,0]
TouchSensor1645 = x3d.TouchSensor()
TouchSensor1645.description = "HAnimSite 96 hanim_l_bideltoid_pt"

HAnimSite1644.children.append(TouchSensor1645)
Shape1646 = x3d.Shape()
Appearance1647 = x3d.Appearance()
Material1648 = x3d.Material()
Material1648.diffuseColor = [1,1,1]

Appearance1647.material = Material1648

Shape1646.appearance = Appearance1647
IndexedFaceSet1649 = x3d.IndexedFaceSet()
IndexedFaceSet1649.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1649.creaseAngle = 0.5
IndexedFaceSet1649.solid = False
ColorRGBA1650 = x3d.ColorRGBA()

IndexedFaceSet1649.color = ColorRGBA1650
Coordinate1651 = x3d.Coordinate()

IndexedFaceSet1649.coord = Coordinate1651

Shape1646.geometry = IndexedFaceSet1649

HAnimSite1644.children.append(Shape1646)
Billboard1652 = x3d.Billboard()
Billboard1652.axisOfRotation = [0,0,0]
Shape1653 = x3d.Shape()
Text1654 = x3d.Text()
Text1654.string = ["96"]
FontStyle1655 = x3d.FontStyle()
FontStyle1655.size = 0.035

Text1654.fontStyle = FontStyle1655

Shape1653.geometry = Text1654

Billboard1652.children.append(Shape1653)

HAnimSite1644.children.append(Billboard1652)

HAnimSegment1607.children.append(HAnimSite1644)
Shape1656 = x3d.Shape()
LineSet1657 = x3d.LineSet()
LineSet1657.vertexCount = [2]
ColorRGBA1658 = x3d.ColorRGBA()

LineSet1657.color = ColorRGBA1658
Coordinate1659 = x3d.Coordinate()

LineSet1657.coord = Coordinate1659

Shape1656.geometry = LineSet1657

HAnimSegment1607.children.append(Shape1656)

HAnimJoint1606.children.append(HAnimSegment1607)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.name = "l_elbow"
HAnimJoint1660.DEF = "hanim_l_elbow"
HAnimJoint1660.center = [0.18209,0.9288,-0.00563]
HAnimJoint1660.ulimit = [0,0,0]
HAnimJoint1660.llimit = [0,0,0]
HAnimSegment1661 = x3d.HAnimSegment()
HAnimSegment1661.name = "l_forearm"
HAnimSegment1661.DEF = "hanim_l_forearm"
HAnimSite1662 = x3d.HAnimSite()
HAnimSite1662.name = "l_radial_styloid"
HAnimSite1662.DEF = "hanim_l_radial_styloid_pt"
HAnimSite1662.translation = [0.18,0.725,0.025]
TouchSensor1663 = x3d.TouchSensor()
TouchSensor1663.description = "HAnimSite 71 hanim_l_radial_styloid_pt"

HAnimSite1662.children.append(TouchSensor1663)
Shape1664 = x3d.Shape()
Appearance1665 = x3d.Appearance()
Material1666 = x3d.Material()
Material1666.diffuseColor = [1,1,1]

Appearance1665.material = Material1666

Shape1664.appearance = Appearance1665
IndexedFaceSet1667 = x3d.IndexedFaceSet()
IndexedFaceSet1667.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1667.creaseAngle = 0.5
IndexedFaceSet1667.solid = False
ColorRGBA1668 = x3d.ColorRGBA()

IndexedFaceSet1667.color = ColorRGBA1668
Coordinate1669 = x3d.Coordinate()

IndexedFaceSet1667.coord = Coordinate1669

Shape1664.geometry = IndexedFaceSet1667

HAnimSite1662.children.append(Shape1664)
Billboard1670 = x3d.Billboard()
Billboard1670.axisOfRotation = [0,0,0]
Shape1671 = x3d.Shape()
Text1672 = x3d.Text()
Text1672.string = ["71"]
FontStyle1673 = x3d.FontStyle()
FontStyle1673.size = 0.035

Text1672.fontStyle = FontStyle1673

Shape1671.geometry = Text1672

Billboard1670.children.append(Shape1671)

HAnimSite1662.children.append(Billboard1670)

HAnimSegment1661.children.append(HAnimSite1662)
HAnimSite1674 = x3d.HAnimSite()
HAnimSite1674.name = "l_olecranon"
HAnimSite1674.DEF = "hanim_l_olecranon_pt"
HAnimSite1674.translation = [0.2,0.92,-0.03]
TouchSensor1675 = x3d.TouchSensor()
TouchSensor1675.description = "HAnimSite 65 hanim_l_olecranon_pt"

HAnimSite1674.children.append(TouchSensor1675)
Shape1676 = x3d.Shape()
Appearance1677 = x3d.Appearance()
Material1678 = x3d.Material()
Material1678.diffuseColor = [1,1,1]

Appearance1677.material = Material1678

Shape1676.appearance = Appearance1677
IndexedFaceSet1679 = x3d.IndexedFaceSet()
IndexedFaceSet1679.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1679.creaseAngle = 0.5
IndexedFaceSet1679.solid = False
ColorRGBA1680 = x3d.ColorRGBA()

IndexedFaceSet1679.color = ColorRGBA1680
Coordinate1681 = x3d.Coordinate()

IndexedFaceSet1679.coord = Coordinate1681

Shape1676.geometry = IndexedFaceSet1679

HAnimSite1674.children.append(Shape1676)
Billboard1682 = x3d.Billboard()
Billboard1682.axisOfRotation = [0,0,0]
Shape1683 = x3d.Shape()
Text1684 = x3d.Text()
Text1684.string = ["65"]
FontStyle1685 = x3d.FontStyle()
FontStyle1685.size = 0.035

Text1684.fontStyle = FontStyle1685

Shape1683.geometry = Text1684

Billboard1682.children.append(Shape1683)

HAnimSite1674.children.append(Billboard1682)

HAnimSegment1661.children.append(HAnimSite1674)
Shape1686 = x3d.Shape()
LineSet1687 = x3d.LineSet()
LineSet1687.vertexCount = [2]
ColorRGBA1688 = x3d.ColorRGBA()

LineSet1687.color = ColorRGBA1688
Coordinate1689 = x3d.Coordinate()

LineSet1687.coord = Coordinate1689

Shape1686.geometry = LineSet1687

HAnimSegment1661.children.append(Shape1686)

HAnimJoint1660.children.append(HAnimSegment1661)
HAnimJoint1690 = x3d.HAnimJoint()
HAnimJoint1690.name = "l_radiocarpal"
HAnimJoint1690.DEF = "hanim_l_radiocarpal"
HAnimJoint1690.center = [0.1819,0.72427,-0.005]
HAnimJoint1690.ulimit = [0,0,0]
HAnimJoint1690.llimit = [0,0,0]
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.name = "l_carpal"
HAnimSegment1691.DEF = "hanim_l_carpal"
HAnimSite1692 = x3d.HAnimSite()
HAnimSite1692.name = "l_ulnar_styloid"
HAnimSite1692.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite1692.translation = [0.2,0.725,0]
TouchSensor1693 = x3d.TouchSensor()
TouchSensor1693.description = "HAnimSite 70 hanim_l_ulnar_styloid_pt"

HAnimSite1692.children.append(TouchSensor1693)
Shape1694 = x3d.Shape()
Appearance1695 = x3d.Appearance()
Material1696 = x3d.Material()
Material1696.diffuseColor = [1,1,1]

Appearance1695.material = Material1696

Shape1694.appearance = Appearance1695
IndexedFaceSet1697 = x3d.IndexedFaceSet()
IndexedFaceSet1697.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1697.creaseAngle = 0.5
IndexedFaceSet1697.solid = False
ColorRGBA1698 = x3d.ColorRGBA()

IndexedFaceSet1697.color = ColorRGBA1698
Coordinate1699 = x3d.Coordinate()

IndexedFaceSet1697.coord = Coordinate1699

Shape1694.geometry = IndexedFaceSet1697

HAnimSite1692.children.append(Shape1694)
Billboard1700 = x3d.Billboard()
Billboard1700.axisOfRotation = [0,0,0]
Shape1701 = x3d.Shape()
Text1702 = x3d.Text()
Text1702.string = ["70"]
FontStyle1703 = x3d.FontStyle()
FontStyle1703.size = 0.035

Text1702.fontStyle = FontStyle1703

Shape1701.geometry = Text1702

Billboard1700.children.append(Shape1701)

HAnimSite1692.children.append(Billboard1700)

HAnimSegment1691.children.append(HAnimSite1692)
Shape1704 = x3d.Shape()
LineSet1705 = x3d.LineSet()
LineSet1705.vertexCount = [2]
ColorRGBA1706 = x3d.ColorRGBA()

LineSet1705.color = ColorRGBA1706
Coordinate1707 = x3d.Coordinate()

LineSet1705.coord = Coordinate1707

Shape1704.geometry = LineSet1705

HAnimSegment1691.children.append(Shape1704)

HAnimJoint1690.children.append(HAnimSegment1691)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.name = "l_midcarpal_1"
HAnimJoint1708.DEF = "hanim_l_midcarpal_1"
HAnimJoint1708.center = [0.1813,0.706,0.0193]
HAnimJoint1708.ulimit = [0,0,0]
HAnimJoint1708.llimit = [0,0,0]
HAnimSegment1709 = x3d.HAnimSegment()
HAnimSegment1709.name = "l_trapezium"
HAnimSegment1709.DEF = "hanim_l_trapezium"
Shape1710 = x3d.Shape()
LineSet1711 = x3d.LineSet()
LineSet1711.vertexCount = [2]
ColorRGBA1712 = x3d.ColorRGBA()

LineSet1711.color = ColorRGBA1712
Coordinate1713 = x3d.Coordinate()

LineSet1711.coord = Coordinate1713

Shape1710.geometry = LineSet1711

HAnimSegment1709.children.append(Shape1710)

HAnimJoint1708.children.append(HAnimSegment1709)
HAnimJoint1714 = x3d.HAnimJoint()
HAnimJoint1714.name = "l_carpometacarpal_1"
HAnimJoint1714.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint1714.center = [0.1805,0.69255,0.026]
HAnimJoint1714.ulimit = [0,0,0]
HAnimJoint1714.llimit = [0,0,0]
HAnimSegment1715 = x3d.HAnimSegment()
HAnimSegment1715.name = "l_metacarpal_1"
HAnimSegment1715.DEF = "hanim_l_metacarpal_1"
HAnimSite1716 = x3d.HAnimSite()
HAnimSite1716.name = "l_metacarpal_phalanx_2"
HAnimSite1716.DEF = "hanim_l_metacarpal_phalanx_2_pt"
HAnimSite1716.translation = [0.2,0.665,0.012]
TouchSensor1717 = x3d.TouchSensor()
TouchSensor1717.description = "HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt"

HAnimSite1716.children.append(TouchSensor1717)
Shape1718 = x3d.Shape()
Appearance1719 = x3d.Appearance()
Material1720 = x3d.Material()
Material1720.diffuseColor = [1,1,1]

Appearance1719.material = Material1720

Shape1718.appearance = Appearance1719
IndexedFaceSet1721 = x3d.IndexedFaceSet()
IndexedFaceSet1721.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1721.creaseAngle = 0.5
IndexedFaceSet1721.solid = False
ColorRGBA1722 = x3d.ColorRGBA()

IndexedFaceSet1721.color = ColorRGBA1722
Coordinate1723 = x3d.Coordinate()

IndexedFaceSet1721.coord = Coordinate1723

Shape1718.geometry = IndexedFaceSet1721

HAnimSite1716.children.append(Shape1718)
Billboard1724 = x3d.Billboard()
Billboard1724.axisOfRotation = [0,0,0]
Shape1725 = x3d.Shape()
Text1726 = x3d.Text()
Text1726.string = ["75"]
FontStyle1727 = x3d.FontStyle()
FontStyle1727.size = 0.035

Text1726.fontStyle = FontStyle1727

Shape1725.geometry = Text1726

Billboard1724.children.append(Shape1725)

HAnimSite1716.children.append(Billboard1724)

HAnimSegment1715.children.append(HAnimSite1716)
Shape1728 = x3d.Shape()
LineSet1729 = x3d.LineSet()
LineSet1729.vertexCount = [2]
ColorRGBA1730 = x3d.ColorRGBA()

LineSet1729.color = ColorRGBA1730
Coordinate1731 = x3d.Coordinate()

LineSet1729.coord = Coordinate1731

Shape1728.geometry = LineSet1729

HAnimSegment1715.children.append(Shape1728)

HAnimJoint1714.children.append(HAnimSegment1715)
HAnimJoint1732 = x3d.HAnimJoint()
HAnimJoint1732.name = "l_metacarpophalangeal_1"
HAnimJoint1732.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint1732.center = [0.181,0.6727,0.03577]
HAnimJoint1732.ulimit = [0,0,0]
HAnimJoint1732.llimit = [0,0,0]
HAnimSegment1733 = x3d.HAnimSegment()
HAnimSegment1733.name = "l_carpal_proximal_phalanx_1"
HAnimSegment1733.DEF = "hanim_l_carpal_proximal_phalanx_1"
Shape1734 = x3d.Shape()
LineSet1735 = x3d.LineSet()
LineSet1735.vertexCount = [2]
ColorRGBA1736 = x3d.ColorRGBA()

LineSet1735.color = ColorRGBA1736
Coordinate1737 = x3d.Coordinate()

LineSet1735.coord = Coordinate1737

Shape1734.geometry = LineSet1735

HAnimSegment1733.children.append(Shape1734)

HAnimJoint1732.children.append(HAnimSegment1733)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.name = "l_carpal_interphalangeal_1"
HAnimJoint1738.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint1738.center = [0.1826,0.654,0.04966]
HAnimJoint1738.ulimit = [0,0,0]
HAnimJoint1738.llimit = [0,0,0]
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.name = "l_carpal_distal_phalanx_1"
HAnimSegment1739.DEF = "hanim_l_carpal_distal_phalanx_1"
HAnimSite1740 = x3d.HAnimSite()
HAnimSite1740.name = "l_carpal_distal_phalanx_1"
HAnimSite1740.DEF = "hanim_l_carpal_distal_phalanx_1_tip"
HAnimSite1740.translation = [0.18,0.64,0.06]
TouchSensor1741 = x3d.TouchSensor()
TouchSensor1741.description = "HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip"

HAnimSite1740.children.append(TouchSensor1741)
Shape1742 = x3d.Shape()
Appearance1743 = x3d.Appearance()
Material1744 = x3d.Material()
Material1744.diffuseColor = [1,1,1]

Appearance1743.material = Material1744

Shape1742.appearance = Appearance1743
IndexedFaceSet1745 = x3d.IndexedFaceSet()
IndexedFaceSet1745.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1745.creaseAngle = 0.5
IndexedFaceSet1745.solid = False
ColorRGBA1746 = x3d.ColorRGBA()

IndexedFaceSet1745.color = ColorRGBA1746
Coordinate1747 = x3d.Coordinate()

IndexedFaceSet1745.coord = Coordinate1747

Shape1742.geometry = IndexedFaceSet1745

HAnimSite1740.children.append(Shape1742)
Billboard1748 = x3d.Billboard()
Billboard1748.axisOfRotation = [0,0,0]
Shape1749 = x3d.Shape()
Text1750 = x3d.Text()
Text1750.string = ["101"]
FontStyle1751 = x3d.FontStyle()
FontStyle1751.size = 0.035

Text1750.fontStyle = FontStyle1751

Shape1749.geometry = Text1750

Billboard1748.children.append(Shape1749)

HAnimSite1740.children.append(Billboard1748)

HAnimSegment1739.children.append(HAnimSite1740)
Shape1752 = x3d.Shape()
LineSet1753 = x3d.LineSet()
LineSet1753.vertexCount = [2]
ColorRGBA1754 = x3d.ColorRGBA()

LineSet1753.color = ColorRGBA1754
Coordinate1755 = x3d.Coordinate()

LineSet1753.coord = Coordinate1755

Shape1752.geometry = LineSet1753

HAnimSegment1739.children.append(Shape1752)

HAnimJoint1738.children.append(HAnimSegment1739)

HAnimJoint1732.children.append(HAnimJoint1738)

HAnimJoint1714.children.append(HAnimJoint1732)

HAnimJoint1708.children.append(HAnimJoint1714)

HAnimJoint1690.children.append(HAnimJoint1708)
HAnimJoint1756 = x3d.HAnimJoint()
HAnimJoint1756.name = "l_midcarpal_2"
HAnimJoint1756.DEF = "hanim_l_midcarpal_2"
HAnimJoint1756.center = [0.18128,0.70695,0.00842]
HAnimJoint1756.ulimit = [0,0,0]
HAnimJoint1756.llimit = [0,0,0]
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.name = "l_trapezoid"
HAnimSegment1757.DEF = "hanim_l_trapezoid"
Shape1758 = x3d.Shape()
LineSet1759 = x3d.LineSet()
LineSet1759.vertexCount = [2]
ColorRGBA1760 = x3d.ColorRGBA()

LineSet1759.color = ColorRGBA1760
Coordinate1761 = x3d.Coordinate()

LineSet1759.coord = Coordinate1761

Shape1758.geometry = LineSet1759

HAnimSegment1757.children.append(Shape1758)

HAnimJoint1756.children.append(HAnimSegment1757)
HAnimJoint1762 = x3d.HAnimJoint()
HAnimJoint1762.name = "l_carpometacarpal_2"
HAnimJoint1762.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint1762.center = [0.18128,0.6876,0.0098]
HAnimJoint1762.ulimit = [0,0,0]
HAnimJoint1762.llimit = [0,0,0]
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.name = "l_metacarpal_2"
HAnimSegment1763.DEF = "hanim_l_metacarpal_2"
Shape1764 = x3d.Shape()
LineSet1765 = x3d.LineSet()
LineSet1765.vertexCount = [2]
ColorRGBA1766 = x3d.ColorRGBA()

LineSet1765.color = ColorRGBA1766
Coordinate1767 = x3d.Coordinate()

LineSet1765.coord = Coordinate1767

Shape1764.geometry = LineSet1765

HAnimSegment1763.children.append(Shape1764)

HAnimJoint1762.children.append(HAnimSegment1763)
HAnimJoint1768 = x3d.HAnimJoint()
HAnimJoint1768.name = "l_metacarpophalangeal_2"
HAnimJoint1768.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint1768.center = [0.1837,0.6372,0.01507]
HAnimJoint1768.ulimit = [0,0,0]
HAnimJoint1768.llimit = [0,0,0]
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.name = "l_carpal_proximal_phalanx_2"
HAnimSegment1769.DEF = "hanim_l_carpal_proximal_phalanx_2"
Shape1770 = x3d.Shape()
LineSet1771 = x3d.LineSet()
LineSet1771.vertexCount = [2]
ColorRGBA1772 = x3d.ColorRGBA()

LineSet1771.color = ColorRGBA1772
Coordinate1773 = x3d.Coordinate()

LineSet1771.coord = Coordinate1773

Shape1770.geometry = LineSet1771

HAnimSegment1769.children.append(Shape1770)

HAnimJoint1768.children.append(HAnimSegment1769)
HAnimJoint1774 = x3d.HAnimJoint()
HAnimJoint1774.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1774.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint1774.center = [0.18171,0.6068,0.01418]
HAnimJoint1774.ulimit = [0,0,0]
HAnimJoint1774.llimit = [0,0,0]
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.name = "l_carpal_middle_phalanx_2"
HAnimSegment1775.DEF = "hanim_l_carpal_middle_phalanx_2"
Shape1776 = x3d.Shape()
LineSet1777 = x3d.LineSet()
LineSet1777.vertexCount = [2]
ColorRGBA1778 = x3d.ColorRGBA()

LineSet1777.color = ColorRGBA1778
Coordinate1779 = x3d.Coordinate()

LineSet1777.coord = Coordinate1779

Shape1776.geometry = LineSet1777

HAnimSegment1775.children.append(Shape1776)

HAnimJoint1774.children.append(HAnimSegment1775)
HAnimJoint1780 = x3d.HAnimJoint()
HAnimJoint1780.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1780.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint1780.center = [0.18067,0.5816,0.01338]
HAnimJoint1780.ulimit = [0,0,0]
HAnimJoint1780.llimit = [0,0,0]
HAnimSegment1781 = x3d.HAnimSegment()
HAnimSegment1781.name = "l_carpal_distal_phalanx_2"
HAnimSegment1781.DEF = "hanim_l_carpal_distal_phalanx_2"
HAnimSite1782 = x3d.HAnimSite()
HAnimSite1782.name = "l_dactylion"
HAnimSite1782.DEF = "hanim_l_dactylion_pt"
HAnimSite1782.translation = [0.17,0.558,0.017]
TouchSensor1783 = x3d.TouchSensor()
TouchSensor1783.description = "HAnimSite 57 hanim_l_dactylion_pt"

HAnimSite1782.children.append(TouchSensor1783)
Shape1784 = x3d.Shape()
Appearance1785 = x3d.Appearance()
Material1786 = x3d.Material()
Material1786.diffuseColor = [1,1,1]

Appearance1785.material = Material1786

Shape1784.appearance = Appearance1785
IndexedFaceSet1787 = x3d.IndexedFaceSet()
IndexedFaceSet1787.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1787.creaseAngle = 0.5
IndexedFaceSet1787.solid = False
ColorRGBA1788 = x3d.ColorRGBA()

IndexedFaceSet1787.color = ColorRGBA1788
Coordinate1789 = x3d.Coordinate()

IndexedFaceSet1787.coord = Coordinate1789

Shape1784.geometry = IndexedFaceSet1787

HAnimSite1782.children.append(Shape1784)
Billboard1790 = x3d.Billboard()
Billboard1790.axisOfRotation = [0,0,0]
Shape1791 = x3d.Shape()
Text1792 = x3d.Text()
Text1792.string = ["57"]
FontStyle1793 = x3d.FontStyle()
FontStyle1793.size = 0.035

Text1792.fontStyle = FontStyle1793

Shape1791.geometry = Text1792

Billboard1790.children.append(Shape1791)

HAnimSite1782.children.append(Billboard1790)

HAnimSegment1781.children.append(HAnimSite1782)
HAnimSite1794 = x3d.HAnimSite()
HAnimSite1794.name = "l_carpal_distal_phalanx_2"
HAnimSite1794.DEF = "hanim_l_carpal_distal_phalanx_2_tip"
HAnimSite1794.translation = [0.172,0.558,0.017]
TouchSensor1795 = x3d.TouchSensor()
TouchSensor1795.description = "HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip"

HAnimSite1794.children.append(TouchSensor1795)
Shape1796 = x3d.Shape()
Appearance1797 = x3d.Appearance()
Material1798 = x3d.Material()
Material1798.diffuseColor = [1,1,1]

Appearance1797.material = Material1798

Shape1796.appearance = Appearance1797
IndexedFaceSet1799 = x3d.IndexedFaceSet()
IndexedFaceSet1799.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1799.creaseAngle = 0.5
IndexedFaceSet1799.solid = False
ColorRGBA1800 = x3d.ColorRGBA()

IndexedFaceSet1799.color = ColorRGBA1800
Coordinate1801 = x3d.Coordinate()

IndexedFaceSet1799.coord = Coordinate1801

Shape1796.geometry = IndexedFaceSet1799

HAnimSite1794.children.append(Shape1796)
Billboard1802 = x3d.Billboard()
Billboard1802.axisOfRotation = [0,0,0]
Shape1803 = x3d.Shape()
Text1804 = x3d.Text()
Text1804.string = ["102"]
FontStyle1805 = x3d.FontStyle()
FontStyle1805.size = 0.035

Text1804.fontStyle = FontStyle1805

Shape1803.geometry = Text1804

Billboard1802.children.append(Shape1803)

HAnimSite1794.children.append(Billboard1802)

HAnimSegment1781.children.append(HAnimSite1794)
Shape1806 = x3d.Shape()
LineSet1807 = x3d.LineSet()
LineSet1807.vertexCount = [2]
ColorRGBA1808 = x3d.ColorRGBA()

LineSet1807.color = ColorRGBA1808
Coordinate1809 = x3d.Coordinate()

LineSet1807.coord = Coordinate1809

Shape1806.geometry = LineSet1807

HAnimSegment1781.children.append(Shape1806)

HAnimJoint1780.children.append(HAnimSegment1781)

HAnimJoint1774.children.append(HAnimJoint1780)

HAnimJoint1768.children.append(HAnimJoint1774)

HAnimJoint1762.children.append(HAnimJoint1768)

HAnimJoint1756.children.append(HAnimJoint1762)

HAnimJoint1690.children.append(HAnimJoint1756)
HAnimJoint1810 = x3d.HAnimJoint()
HAnimJoint1810.name = "l_midcarpal_3"
HAnimJoint1810.DEF = "hanim_l_midcarpal_3"
HAnimJoint1810.center = [0.18108,0.708525,-0.0048]
HAnimJoint1810.ulimit = [0,0,0]
HAnimJoint1810.llimit = [0,0,0]
HAnimSegment1811 = x3d.HAnimSegment()
HAnimSegment1811.name = "l_capitate"
HAnimSegment1811.DEF = "hanim_l_capitate"
Shape1812 = x3d.Shape()
LineSet1813 = x3d.LineSet()
LineSet1813.vertexCount = [2]
ColorRGBA1814 = x3d.ColorRGBA()

LineSet1813.color = ColorRGBA1814
Coordinate1815 = x3d.Coordinate()

LineSet1813.coord = Coordinate1815

Shape1812.geometry = LineSet1813

HAnimSegment1811.children.append(Shape1812)

HAnimJoint1810.children.append(HAnimSegment1811)
HAnimJoint1816 = x3d.HAnimJoint()
HAnimJoint1816.name = "l_carpometacarpal_3"
HAnimJoint1816.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint1816.center = [0.18108,0.6858,-0.00625]
HAnimJoint1816.ulimit = [0,0,0]
HAnimJoint1816.llimit = [0,0,0]
HAnimSegment1817 = x3d.HAnimSegment()
HAnimSegment1817.name = "l_metacarpal_3"
HAnimSegment1817.DEF = "hanim_l_metacarpal_3"
HAnimSite1818 = x3d.HAnimSite()
HAnimSite1818.name = "l_metacarpal_phalanx_3"
HAnimSite1818.DEF = "hanim_l_metacarpal_phalanx_3_pt"
HAnimSite1818.translation = [0.2,0.665,-0.039]
TouchSensor1819 = x3d.TouchSensor()
TouchSensor1819.description = "HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt"

HAnimSite1818.children.append(TouchSensor1819)
Shape1820 = x3d.Shape()
Appearance1821 = x3d.Appearance()
Material1822 = x3d.Material()
Material1822.diffuseColor = [1,1,1]

Appearance1821.material = Material1822

Shape1820.appearance = Appearance1821
IndexedFaceSet1823 = x3d.IndexedFaceSet()
IndexedFaceSet1823.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1823.creaseAngle = 0.5
IndexedFaceSet1823.solid = False
ColorRGBA1824 = x3d.ColorRGBA()

IndexedFaceSet1823.color = ColorRGBA1824
Coordinate1825 = x3d.Coordinate()

IndexedFaceSet1823.coord = Coordinate1825

Shape1820.geometry = IndexedFaceSet1823

HAnimSite1818.children.append(Shape1820)
Billboard1826 = x3d.Billboard()
Billboard1826.axisOfRotation = [0,0,0]
Shape1827 = x3d.Shape()
Text1828 = x3d.Text()
Text1828.string = ["76"]
FontStyle1829 = x3d.FontStyle()
FontStyle1829.size = 0.035

Text1828.fontStyle = FontStyle1829

Shape1827.geometry = Text1828

Billboard1826.children.append(Shape1827)

HAnimSite1818.children.append(Billboard1826)

HAnimSegment1817.children.append(HAnimSite1818)
Shape1830 = x3d.Shape()
LineSet1831 = x3d.LineSet()
LineSet1831.vertexCount = [2]
ColorRGBA1832 = x3d.ColorRGBA()

LineSet1831.color = ColorRGBA1832
Coordinate1833 = x3d.Coordinate()

LineSet1831.coord = Coordinate1833

Shape1830.geometry = LineSet1831

HAnimSegment1817.children.append(Shape1830)

HAnimJoint1816.children.append(HAnimSegment1817)
HAnimJoint1834 = x3d.HAnimJoint()
HAnimJoint1834.name = "l_metacarpophalangeal_3"
HAnimJoint1834.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint1834.center = [0.18369,0.6349,-0.0039]
HAnimJoint1834.ulimit = [0,0,0]
HAnimJoint1834.llimit = [0,0,0]
HAnimSegment1835 = x3d.HAnimSegment()
HAnimSegment1835.name = "l_carpal_proximal_phalanx_3"
HAnimSegment1835.DEF = "hanim_l_carpal_proximal_phalanx_3"
Shape1836 = x3d.Shape()
LineSet1837 = x3d.LineSet()
LineSet1837.vertexCount = [2]
ColorRGBA1838 = x3d.ColorRGBA()

LineSet1837.color = ColorRGBA1838
Coordinate1839 = x3d.Coordinate()

LineSet1837.coord = Coordinate1839

Shape1836.geometry = LineSet1837

HAnimSegment1835.children.append(Shape1836)

HAnimJoint1834.children.append(HAnimSegment1835)
HAnimJoint1840 = x3d.HAnimJoint()
HAnimJoint1840.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1840.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint1840.center = [0.18171,0.6032,-0.0035]
HAnimJoint1840.ulimit = [0,0,0]
HAnimJoint1840.llimit = [0,0,0]
HAnimSegment1841 = x3d.HAnimSegment()
HAnimSegment1841.name = "l_carpal_middle_phalanx_3"
HAnimSegment1841.DEF = "hanim_l_carpal_middle_phalanx_3"
Shape1842 = x3d.Shape()
LineSet1843 = x3d.LineSet()
LineSet1843.vertexCount = [2]
ColorRGBA1844 = x3d.ColorRGBA()

LineSet1843.color = ColorRGBA1844
Coordinate1845 = x3d.Coordinate()

LineSet1843.coord = Coordinate1845

Shape1842.geometry = LineSet1843

HAnimSegment1841.children.append(Shape1842)

HAnimJoint1840.children.append(HAnimSegment1841)
HAnimJoint1846 = x3d.HAnimJoint()
HAnimJoint1846.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1846.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint1846.center = [0.1807,0.5753,-0.0037]
HAnimJoint1846.ulimit = [0,0,0]
HAnimJoint1846.llimit = [0,0,0]
HAnimSegment1847 = x3d.HAnimSegment()
HAnimSegment1847.name = "l_carpal_distal_phalanx_3"
HAnimSegment1847.DEF = "hanim_l_carpal_distal_phalanx_3"
HAnimSite1848 = x3d.HAnimSite()
HAnimSite1848.name = "l_carpal_distal_phalanx_3"
HAnimSite1848.DEF = "hanim_l_carpal_distal_phalanx_3_tip"
HAnimSite1848.translation = [0.172,0.555,-0.006]
TouchSensor1849 = x3d.TouchSensor()
TouchSensor1849.description = "HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip"

HAnimSite1848.children.append(TouchSensor1849)
Shape1850 = x3d.Shape()
Appearance1851 = x3d.Appearance()
Material1852 = x3d.Material()
Material1852.diffuseColor = [1,1,1]

Appearance1851.material = Material1852

Shape1850.appearance = Appearance1851
IndexedFaceSet1853 = x3d.IndexedFaceSet()
IndexedFaceSet1853.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1853.creaseAngle = 0.5
IndexedFaceSet1853.solid = False
ColorRGBA1854 = x3d.ColorRGBA()

IndexedFaceSet1853.color = ColorRGBA1854
Coordinate1855 = x3d.Coordinate()

IndexedFaceSet1853.coord = Coordinate1855

Shape1850.geometry = IndexedFaceSet1853

HAnimSite1848.children.append(Shape1850)
Billboard1856 = x3d.Billboard()
Billboard1856.axisOfRotation = [0,0,0]
Shape1857 = x3d.Shape()
Text1858 = x3d.Text()
Text1858.string = ["103"]
FontStyle1859 = x3d.FontStyle()
FontStyle1859.size = 0.035

Text1858.fontStyle = FontStyle1859

Shape1857.geometry = Text1858

Billboard1856.children.append(Shape1857)

HAnimSite1848.children.append(Billboard1856)

HAnimSegment1847.children.append(HAnimSite1848)
Shape1860 = x3d.Shape()
LineSet1861 = x3d.LineSet()
LineSet1861.vertexCount = [2]
ColorRGBA1862 = x3d.ColorRGBA()

LineSet1861.color = ColorRGBA1862
Coordinate1863 = x3d.Coordinate()

LineSet1861.coord = Coordinate1863

Shape1860.geometry = LineSet1861

HAnimSegment1847.children.append(Shape1860)

HAnimJoint1846.children.append(HAnimSegment1847)

HAnimJoint1840.children.append(HAnimJoint1846)

HAnimJoint1834.children.append(HAnimJoint1840)

HAnimJoint1816.children.append(HAnimJoint1834)

HAnimJoint1810.children.append(HAnimJoint1816)

HAnimJoint1690.children.append(HAnimJoint1810)
HAnimJoint1864 = x3d.HAnimJoint()
HAnimJoint1864.name = "l_midcarpal_4_5"
HAnimJoint1864.DEF = "hanim_l_midcarpal_4_5"
HAnimJoint1864.center = [0.18108,0.70582,-0.02574]
HAnimJoint1864.ulimit = [0,0,0]
HAnimJoint1864.llimit = [0,0,0]
HAnimSegment1865 = x3d.HAnimSegment()
HAnimSegment1865.name = "l_hamate"
HAnimSegment1865.DEF = "hanim_l_hamate"
Shape1866 = x3d.Shape()
LineSet1867 = x3d.LineSet()
LineSet1867.vertexCount = [2]
ColorRGBA1868 = x3d.ColorRGBA()

LineSet1867.color = ColorRGBA1868
Coordinate1869 = x3d.Coordinate()

LineSet1867.coord = Coordinate1869

Shape1866.geometry = LineSet1867

HAnimSegment1865.children.append(Shape1866)

HAnimJoint1864.children.append(HAnimSegment1865)
HAnimJoint1870 = x3d.HAnimJoint()
HAnimJoint1870.name = "l_carpometacarpal_4"
HAnimJoint1870.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint1870.center = [0.1811,0.68625,-0.0199]
HAnimJoint1870.ulimit = [0,0,0]
HAnimJoint1870.llimit = [0,0,0]
HAnimSegment1871 = x3d.HAnimSegment()
HAnimSegment1871.name = "l_metacarpal_4"
HAnimSegment1871.DEF = "hanim_l_metacarpal_4"
Shape1872 = x3d.Shape()
LineSet1873 = x3d.LineSet()
LineSet1873.vertexCount = [2]
ColorRGBA1874 = x3d.ColorRGBA()

LineSet1873.color = ColorRGBA1874
Coordinate1875 = x3d.Coordinate()

LineSet1873.coord = Coordinate1875

Shape1872.geometry = LineSet1873

HAnimSegment1871.children.append(Shape1872)

HAnimJoint1870.children.append(HAnimSegment1871)
HAnimJoint1876 = x3d.HAnimJoint()
HAnimJoint1876.name = "l_metacarpophalangeal_4"
HAnimJoint1876.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint1876.center = [0.18369,0.63405,-0.02144]
HAnimJoint1876.ulimit = [0,0,0]
HAnimJoint1876.llimit = [0,0,0]
HAnimSegment1877 = x3d.HAnimSegment()
HAnimSegment1877.name = "l_carpal_proximal_phalanx_4"
HAnimSegment1877.DEF = "hanim_l_carpal_proximal_phalanx_4"
Shape1878 = x3d.Shape()
LineSet1879 = x3d.LineSet()
LineSet1879.vertexCount = [2]
ColorRGBA1880 = x3d.ColorRGBA()

LineSet1879.color = ColorRGBA1880
Coordinate1881 = x3d.Coordinate()

LineSet1879.coord = Coordinate1881

Shape1878.geometry = LineSet1879

HAnimSegment1877.children.append(Shape1878)

HAnimJoint1876.children.append(HAnimSegment1877)
HAnimJoint1882 = x3d.HAnimJoint()
HAnimJoint1882.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1882.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint1882.center = [0.1817,0.6066,-0.02064]
HAnimJoint1882.ulimit = [0,0,0]
HAnimJoint1882.llimit = [0,0,0]
HAnimSegment1883 = x3d.HAnimSegment()
HAnimSegment1883.name = "l_carpal_middle_phalanx_4"
HAnimSegment1883.DEF = "hanim_l_carpal_middle_phalanx_4"
Shape1884 = x3d.Shape()
LineSet1885 = x3d.LineSet()
LineSet1885.vertexCount = [2]
ColorRGBA1886 = x3d.ColorRGBA()

LineSet1885.color = ColorRGBA1886
Coordinate1887 = x3d.Coordinate()

LineSet1885.coord = Coordinate1887

Shape1884.geometry = LineSet1885

HAnimSegment1883.children.append(Shape1884)

HAnimJoint1882.children.append(HAnimSegment1883)
HAnimJoint1888 = x3d.HAnimJoint()
HAnimJoint1888.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1888.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint1888.center = [0.18067,0.580725,-0.01977]
HAnimJoint1888.ulimit = [0,0,0]
HAnimJoint1888.llimit = [0,0,0]
HAnimSegment1889 = x3d.HAnimSegment()
HAnimSegment1889.name = "l_carpal_distal_phalanx_4"
HAnimSegment1889.DEF = "hanim_l_carpal_distal_phalanx_4"
HAnimSite1890 = x3d.HAnimSite()
HAnimSite1890.name = "l_carpal_distal_phalanx_4"
HAnimSite1890.DEF = "hanim_l_carpal_distal_phalanx_4_tip"
HAnimSite1890.translation = [0.172,0.559,-0.024]
TouchSensor1891 = x3d.TouchSensor()
TouchSensor1891.description = "HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip"

HAnimSite1890.children.append(TouchSensor1891)
Shape1892 = x3d.Shape()
Appearance1893 = x3d.Appearance()
Material1894 = x3d.Material()
Material1894.diffuseColor = [1,1,1]

Appearance1893.material = Material1894

Shape1892.appearance = Appearance1893
IndexedFaceSet1895 = x3d.IndexedFaceSet()
IndexedFaceSet1895.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1895.creaseAngle = 0.5
IndexedFaceSet1895.solid = False
ColorRGBA1896 = x3d.ColorRGBA()

IndexedFaceSet1895.color = ColorRGBA1896
Coordinate1897 = x3d.Coordinate()

IndexedFaceSet1895.coord = Coordinate1897

Shape1892.geometry = IndexedFaceSet1895

HAnimSite1890.children.append(Shape1892)
Billboard1898 = x3d.Billboard()
Billboard1898.axisOfRotation = [0,0,0]
Shape1899 = x3d.Shape()
Text1900 = x3d.Text()
Text1900.string = ["104"]
FontStyle1901 = x3d.FontStyle()
FontStyle1901.size = 0.035

Text1900.fontStyle = FontStyle1901

Shape1899.geometry = Text1900

Billboard1898.children.append(Shape1899)

HAnimSite1890.children.append(Billboard1898)

HAnimSegment1889.children.append(HAnimSite1890)
Shape1902 = x3d.Shape()
LineSet1903 = x3d.LineSet()
LineSet1903.vertexCount = [2]
ColorRGBA1904 = x3d.ColorRGBA()

LineSet1903.color = ColorRGBA1904
Coordinate1905 = x3d.Coordinate()

LineSet1903.coord = Coordinate1905

Shape1902.geometry = LineSet1903

HAnimSegment1889.children.append(Shape1902)

HAnimJoint1888.children.append(HAnimSegment1889)

HAnimJoint1882.children.append(HAnimJoint1888)

HAnimJoint1876.children.append(HAnimJoint1882)

HAnimJoint1870.children.append(HAnimJoint1876)

HAnimJoint1864.children.append(HAnimJoint1870)

HAnimJoint1690.children.append(HAnimJoint1864)
HAnimJoint1906 = x3d.HAnimJoint()
HAnimJoint1906.name = "l_carpometacarpal_5"
HAnimJoint1906.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint1906.center = [0.18164,0.68827,-0.03278]
HAnimJoint1906.ulimit = [0,0,0]
HAnimJoint1906.llimit = [0,0,0]
HAnimSegment1907 = x3d.HAnimSegment()
HAnimSegment1907.name = "l_metacarpal_5"
HAnimSegment1907.DEF = "hanim_l_metacarpal_5"
HAnimSite1908 = x3d.HAnimSite()
HAnimSite1908.name = "l_metacarpal_phalanx_5"
HAnimSite1908.DEF = "hanim_l_metacarpal_phalanx_5_pt"
HAnimSite1908.translation = [0.2,0.665,-0.036]
TouchSensor1909 = x3d.TouchSensor()
TouchSensor1909.description = "HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt"

HAnimSite1908.children.append(TouchSensor1909)
Shape1910 = x3d.Shape()
Appearance1911 = x3d.Appearance()
Material1912 = x3d.Material()
Material1912.diffuseColor = [1,1,1]

Appearance1911.material = Material1912

Shape1910.appearance = Appearance1911
IndexedFaceSet1913 = x3d.IndexedFaceSet()
IndexedFaceSet1913.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1913.creaseAngle = 0.5
IndexedFaceSet1913.solid = False
ColorRGBA1914 = x3d.ColorRGBA()

IndexedFaceSet1913.color = ColorRGBA1914
Coordinate1915 = x3d.Coordinate()

IndexedFaceSet1913.coord = Coordinate1915

Shape1910.geometry = IndexedFaceSet1913

HAnimSite1908.children.append(Shape1910)
Billboard1916 = x3d.Billboard()
Billboard1916.axisOfRotation = [0,0,0]
Shape1917 = x3d.Shape()
Text1918 = x3d.Text()
Text1918.string = ["77"]
FontStyle1919 = x3d.FontStyle()
FontStyle1919.size = 0.035

Text1918.fontStyle = FontStyle1919

Shape1917.geometry = Text1918

Billboard1916.children.append(Shape1917)

HAnimSite1908.children.append(Billboard1916)

HAnimSegment1907.children.append(HAnimSite1908)
Shape1920 = x3d.Shape()
LineSet1921 = x3d.LineSet()
LineSet1921.vertexCount = [2]
ColorRGBA1922 = x3d.ColorRGBA()

LineSet1921.color = ColorRGBA1922
Coordinate1923 = x3d.Coordinate()

LineSet1921.coord = Coordinate1923

Shape1920.geometry = LineSet1921

HAnimSegment1907.children.append(Shape1920)

HAnimJoint1906.children.append(HAnimSegment1907)
HAnimJoint1924 = x3d.HAnimJoint()
HAnimJoint1924.name = "l_metacarpophalangeal_5"
HAnimJoint1924.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint1924.center = [0.1833,0.6381,-0.037]
HAnimJoint1924.ulimit = [0,0,0]
HAnimJoint1924.llimit = [0,0,0]
HAnimSegment1925 = x3d.HAnimSegment()
HAnimSegment1925.name = "l_carpal_proximal_phalanx_5"
HAnimSegment1925.DEF = "hanim_l_carpal_proximal_phalanx_5"
Shape1926 = x3d.Shape()
LineSet1927 = x3d.LineSet()
LineSet1927.vertexCount = [2]
ColorRGBA1928 = x3d.ColorRGBA()

LineSet1927.color = ColorRGBA1928
Coordinate1929 = x3d.Coordinate()

LineSet1927.coord = Coordinate1929

Shape1926.geometry = LineSet1927

HAnimSegment1925.children.append(Shape1926)

HAnimJoint1924.children.append(HAnimSegment1925)
HAnimJoint1930 = x3d.HAnimJoint()
HAnimJoint1930.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1930.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint1930.center = [0.18166,0.621,-0.03715]
HAnimJoint1930.ulimit = [0,0,0]
HAnimJoint1930.llimit = [0,0,0]
HAnimSegment1931 = x3d.HAnimSegment()
HAnimSegment1931.name = "l_carpal_middle_phalanx_5"
HAnimSegment1931.DEF = "hanim_l_carpal_middle_phalanx_5"
Shape1932 = x3d.Shape()
LineSet1933 = x3d.LineSet()
LineSet1933.vertexCount = [2]
ColorRGBA1934 = x3d.ColorRGBA()

LineSet1933.color = ColorRGBA1934
Coordinate1935 = x3d.Coordinate()

LineSet1933.coord = Coordinate1935

Shape1932.geometry = LineSet1933

HAnimSegment1931.children.append(Shape1932)

HAnimJoint1930.children.append(HAnimSegment1931)
HAnimJoint1936 = x3d.HAnimJoint()
HAnimJoint1936.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1936.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint1936.center = [0.1808,0.6023,-0.0369]
HAnimJoint1936.ulimit = [0,0,0]
HAnimJoint1936.llimit = [0,0,0]
HAnimSegment1937 = x3d.HAnimSegment()
HAnimSegment1937.name = "l_carpal_distal_phalanx_5"
HAnimSegment1937.DEF = "hanim_l_carpal_distal_phalanx_5"
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.name = "l_carpal_distal_phalanx_5"
HAnimSite1938.DEF = "hanim_l_carpal_distal_phalanx_5_tip"
HAnimSite1938.translation = [0.172,0.58,-0.039]
TouchSensor1939 = x3d.TouchSensor()
TouchSensor1939.description = "HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip"

HAnimSite1938.children.append(TouchSensor1939)
Shape1940 = x3d.Shape()
Appearance1941 = x3d.Appearance()
Material1942 = x3d.Material()
Material1942.diffuseColor = [1,1,1]

Appearance1941.material = Material1942

Shape1940.appearance = Appearance1941
IndexedFaceSet1943 = x3d.IndexedFaceSet()
IndexedFaceSet1943.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1943.creaseAngle = 0.5
IndexedFaceSet1943.solid = False
ColorRGBA1944 = x3d.ColorRGBA()

IndexedFaceSet1943.color = ColorRGBA1944
Coordinate1945 = x3d.Coordinate()

IndexedFaceSet1943.coord = Coordinate1945

Shape1940.geometry = IndexedFaceSet1943

HAnimSite1938.children.append(Shape1940)
Billboard1946 = x3d.Billboard()
Billboard1946.axisOfRotation = [0,0,0]
Shape1947 = x3d.Shape()
Text1948 = x3d.Text()
Text1948.string = ["105"]
FontStyle1949 = x3d.FontStyle()
FontStyle1949.size = 0.035

Text1948.fontStyle = FontStyle1949

Shape1947.geometry = Text1948

Billboard1946.children.append(Shape1947)

HAnimSite1938.children.append(Billboard1946)

HAnimSegment1937.children.append(HAnimSite1938)
Shape1950 = x3d.Shape()
LineSet1951 = x3d.LineSet()
LineSet1951.vertexCount = [2]
ColorRGBA1952 = x3d.ColorRGBA()

LineSet1951.color = ColorRGBA1952
Coordinate1953 = x3d.Coordinate()

LineSet1951.coord = Coordinate1953

Shape1950.geometry = LineSet1951

HAnimSegment1937.children.append(Shape1950)

HAnimJoint1936.children.append(HAnimSegment1937)

HAnimJoint1930.children.append(HAnimJoint1936)

HAnimJoint1924.children.append(HAnimJoint1930)

HAnimJoint1906.children.append(HAnimJoint1924)

HAnimJoint1690.children.append(HAnimJoint1906)

HAnimJoint1660.children.append(HAnimJoint1690)

HAnimJoint1606.children.append(HAnimJoint1660)

HAnimJoint1552.children.append(HAnimJoint1606)

HAnimJoint1534.children.append(HAnimJoint1552)

HAnimJoint1126.children.append(HAnimJoint1534)
HAnimJoint1954 = x3d.HAnimJoint()
HAnimJoint1954.name = "r_sternoclavicular"
HAnimJoint1954.DEF = "hanim_r_sternoclavicular"
HAnimJoint1954.center = [-0.03847,1.2087,-0.0138]
HAnimJoint1954.ulimit = [0,0,0]
HAnimJoint1954.llimit = [0,0,0]
HAnimSegment1955 = x3d.HAnimSegment()
HAnimSegment1955.name = "r_clavicle"
HAnimSegment1955.DEF = "hanim_r_clavicle"
HAnimSite1956 = x3d.HAnimSite()
HAnimSite1956.name = "r_clavicale"
HAnimSite1956.DEF = "hanim_r_clavicale_pt"
HAnimSite1956.translation = [-0.03,1.2,0.04]
TouchSensor1957 = x3d.TouchSensor()
TouchSensor1957.description = "HAnimSite r_clavicale hanim_r_clavicale_pt"

HAnimSite1956.children.append(TouchSensor1957)
Shape1958 = x3d.Shape()
Appearance1959 = x3d.Appearance()
Material1960 = x3d.Material()
Material1960.diffuseColor = [1,1,1]

Appearance1959.material = Material1960

Shape1958.appearance = Appearance1959
IndexedFaceSet1961 = x3d.IndexedFaceSet()
IndexedFaceSet1961.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1961.creaseAngle = 0.5
IndexedFaceSet1961.solid = False
ColorRGBA1962 = x3d.ColorRGBA()

IndexedFaceSet1961.color = ColorRGBA1962
Coordinate1963 = x3d.Coordinate()

IndexedFaceSet1961.coord = Coordinate1963

Shape1958.geometry = IndexedFaceSet1961

HAnimSite1956.children.append(Shape1958)
Billboard1964 = x3d.Billboard()
Billboard1964.axisOfRotation = [0,0,0]
Shape1965 = x3d.Shape()
Text1966 = x3d.Text()
Text1966.string = ["r_clavicale"]
FontStyle1967 = x3d.FontStyle()
FontStyle1967.size = 0.035

Text1966.fontStyle = FontStyle1967

Shape1965.geometry = Text1966

Billboard1964.children.append(Shape1965)

HAnimSite1956.children.append(Billboard1964)

HAnimSegment1955.children.append(HAnimSite1956)
Shape1968 = x3d.Shape()
LineSet1969 = x3d.LineSet()
LineSet1969.vertexCount = [2]
ColorRGBA1970 = x3d.ColorRGBA()

LineSet1969.color = ColorRGBA1970
Coordinate1971 = x3d.Coordinate()

LineSet1969.coord = Coordinate1971

Shape1968.geometry = LineSet1969

HAnimSegment1955.children.append(Shape1968)

HAnimJoint1954.children.append(HAnimSegment1955)
HAnimJoint1972 = x3d.HAnimJoint()
HAnimJoint1972.name = "r_acromioclavicular"
HAnimJoint1972.DEF = "hanim_r_acromioclavicular"
HAnimJoint1972.center = [-0.1229,1.19182,-0.0129]
HAnimJoint1972.ulimit = [0,0,0]
HAnimJoint1972.llimit = [0,0,0]
HAnimSegment1973 = x3d.HAnimSegment()
HAnimSegment1973.name = "r_scapula"
HAnimSegment1973.DEF = "hanim_r_scapula"
HAnimSite1974 = x3d.HAnimSite()
HAnimSite1974.name = "r_acromion"
HAnimSite1974.DEF = "hanim_r_acromion_pt"
HAnimSite1974.translation = [-0.15,1.222,-0.02]
TouchSensor1975 = x3d.TouchSensor()
TouchSensor1975.description = "HAnimSite 20 hanim_r_acromion_pt"

HAnimSite1974.children.append(TouchSensor1975)
Shape1976 = x3d.Shape()
Appearance1977 = x3d.Appearance()
Material1978 = x3d.Material()
Material1978.diffuseColor = [1,1,1]

Appearance1977.material = Material1978

Shape1976.appearance = Appearance1977
IndexedFaceSet1979 = x3d.IndexedFaceSet()
IndexedFaceSet1979.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1979.creaseAngle = 0.5
IndexedFaceSet1979.solid = False
ColorRGBA1980 = x3d.ColorRGBA()

IndexedFaceSet1979.color = ColorRGBA1980
Coordinate1981 = x3d.Coordinate()

IndexedFaceSet1979.coord = Coordinate1981

Shape1976.geometry = IndexedFaceSet1979

HAnimSite1974.children.append(Shape1976)
Billboard1982 = x3d.Billboard()
Billboard1982.axisOfRotation = [0,0,0]
Shape1983 = x3d.Shape()
Text1984 = x3d.Text()
Text1984.string = ["20"]
FontStyle1985 = x3d.FontStyle()
FontStyle1985.size = 0.035

Text1984.fontStyle = FontStyle1985

Shape1983.geometry = Text1984

Billboard1982.children.append(Shape1983)

HAnimSite1974.children.append(Billboard1982)

HAnimSegment1973.children.append(HAnimSite1974)
HAnimSite1986 = x3d.HAnimSite()
HAnimSite1986.name = "r_axilla_proximal"
HAnimSite1986.DEF = "hanim_r_axilla_proximal_pt"
HAnimSite1986.translation = [-0.15,1.16,0.04]
TouchSensor1987 = x3d.TouchSensor()
TouchSensor1987.description = "HAnimSite 21 hanim_r_axilla_proximal_pt"

HAnimSite1986.children.append(TouchSensor1987)
Shape1988 = x3d.Shape()
Appearance1989 = x3d.Appearance()
Material1990 = x3d.Material()
Material1990.diffuseColor = [1,1,1]

Appearance1989.material = Material1990

Shape1988.appearance = Appearance1989
IndexedFaceSet1991 = x3d.IndexedFaceSet()
IndexedFaceSet1991.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet1991.creaseAngle = 0.5
IndexedFaceSet1991.solid = False
ColorRGBA1992 = x3d.ColorRGBA()

IndexedFaceSet1991.color = ColorRGBA1992
Coordinate1993 = x3d.Coordinate()

IndexedFaceSet1991.coord = Coordinate1993

Shape1988.geometry = IndexedFaceSet1991

HAnimSite1986.children.append(Shape1988)
Billboard1994 = x3d.Billboard()
Billboard1994.axisOfRotation = [0,0,0]
Shape1995 = x3d.Shape()
Text1996 = x3d.Text()
Text1996.string = ["21"]
FontStyle1997 = x3d.FontStyle()
FontStyle1997.size = 0.035

Text1996.fontStyle = FontStyle1997

Shape1995.geometry = Text1996

Billboard1994.children.append(Shape1995)

HAnimSite1986.children.append(Billboard1994)

HAnimSegment1973.children.append(HAnimSite1986)
HAnimSite1998 = x3d.HAnimSite()
HAnimSite1998.name = "r_axilla_distal"
HAnimSite1998.DEF = "hanim_r_axilla_distal_pt"
HAnimSite1998.translation = [-0.17,1.14,0]
TouchSensor1999 = x3d.TouchSensor()
TouchSensor1999.description = "HAnimSite 22 hanim_r_axilla_distal_pt"

HAnimSite1998.children.append(TouchSensor1999)
Shape2000 = x3d.Shape()
Appearance2001 = x3d.Appearance()
Material2002 = x3d.Material()
Material2002.diffuseColor = [1,1,1]

Appearance2001.material = Material2002

Shape2000.appearance = Appearance2001
IndexedFaceSet2003 = x3d.IndexedFaceSet()
IndexedFaceSet2003.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2003.creaseAngle = 0.5
IndexedFaceSet2003.solid = False
ColorRGBA2004 = x3d.ColorRGBA()

IndexedFaceSet2003.color = ColorRGBA2004
Coordinate2005 = x3d.Coordinate()

IndexedFaceSet2003.coord = Coordinate2005

Shape2000.geometry = IndexedFaceSet2003

HAnimSite1998.children.append(Shape2000)
Billboard2006 = x3d.Billboard()
Billboard2006.axisOfRotation = [0,0,0]
Shape2007 = x3d.Shape()
Text2008 = x3d.Text()
Text2008.string = ["22"]
FontStyle2009 = x3d.FontStyle()
FontStyle2009.size = 0.035

Text2008.fontStyle = FontStyle2009

Shape2007.geometry = Text2008

Billboard2006.children.append(Shape2007)

HAnimSite1998.children.append(Billboard2006)

HAnimSegment1973.children.append(HAnimSite1998)
HAnimSite2010 = x3d.HAnimSite()
HAnimSite2010.name = "r_axilla_posterior_folds"
HAnimSite2010.DEF = "hanim_r_axilla_posterior_folds_pt"
HAnimSite2010.translation = [-0.15,1.145,-0.04]
TouchSensor2011 = x3d.TouchSensor()
TouchSensor2011.description = "HAnimSite 23 hanim_r_axilla_posterior_folds_pt"

HAnimSite2010.children.append(TouchSensor2011)
Shape2012 = x3d.Shape()
Appearance2013 = x3d.Appearance()
Material2014 = x3d.Material()
Material2014.diffuseColor = [1,1,1]

Appearance2013.material = Material2014

Shape2012.appearance = Appearance2013
IndexedFaceSet2015 = x3d.IndexedFaceSet()
IndexedFaceSet2015.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2015.creaseAngle = 0.5
IndexedFaceSet2015.solid = False
ColorRGBA2016 = x3d.ColorRGBA()

IndexedFaceSet2015.color = ColorRGBA2016
Coordinate2017 = x3d.Coordinate()

IndexedFaceSet2015.coord = Coordinate2017

Shape2012.geometry = IndexedFaceSet2015

HAnimSite2010.children.append(Shape2012)
Billboard2018 = x3d.Billboard()
Billboard2018.axisOfRotation = [0,0,0]
Shape2019 = x3d.Shape()
Text2020 = x3d.Text()
Text2020.string = ["23"]
FontStyle2021 = x3d.FontStyle()
FontStyle2021.size = 0.035

Text2020.fontStyle = FontStyle2021

Shape2019.geometry = Text2020

Billboard2018.children.append(Shape2019)

HAnimSite2010.children.append(Billboard2018)

HAnimSegment1973.children.append(HAnimSite2010)
Shape2022 = x3d.Shape()
LineSet2023 = x3d.LineSet()
LineSet2023.vertexCount = [2]
ColorRGBA2024 = x3d.ColorRGBA()

LineSet2023.color = ColorRGBA2024
Coordinate2025 = x3d.Coordinate()

LineSet2023.coord = Coordinate2025

Shape2022.geometry = LineSet2023

HAnimSegment1973.children.append(Shape2022)

HAnimJoint1972.children.append(HAnimSegment1973)
HAnimJoint2026 = x3d.HAnimJoint()
HAnimJoint2026.name = "r_shoulder"
HAnimJoint2026.DEF = "hanim_r_shoulder"
HAnimJoint2026.center = [-0.1647,1.17855,-0.00327]
HAnimJoint2026.ulimit = [0,0,0]
HAnimJoint2026.llimit = [0,0,0]
HAnimSegment2027 = x3d.HAnimSegment()
HAnimSegment2027.name = "r_upperarm"
HAnimSegment2027.DEF = "hanim_r_upperarm"
HAnimSite2028 = x3d.HAnimSite()
HAnimSite2028.name = "r_humeral_lateral_epicondyle"
HAnimSite2028.DEF = "hanim_r_humeral_lateral_epicondyle_pt"
HAnimSite2028.translation = [-0.2,0.95,-0.03]
TouchSensor2029 = x3d.TouchSensor()
TouchSensor2029.description = "HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt"

HAnimSite2028.children.append(TouchSensor2029)
Shape2030 = x3d.Shape()
Appearance2031 = x3d.Appearance()
Material2032 = x3d.Material()
Material2032.diffuseColor = [1,1,1]

Appearance2031.material = Material2032

Shape2030.appearance = Appearance2031
IndexedFaceSet2033 = x3d.IndexedFaceSet()
IndexedFaceSet2033.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2033.creaseAngle = 0.5
IndexedFaceSet2033.solid = False
ColorRGBA2034 = x3d.ColorRGBA()

IndexedFaceSet2033.color = ColorRGBA2034
Coordinate2035 = x3d.Coordinate()

IndexedFaceSet2033.coord = Coordinate2035

Shape2030.geometry = IndexedFaceSet2033

HAnimSite2028.children.append(Shape2030)
Billboard2036 = x3d.Billboard()
Billboard2036.axisOfRotation = [0,0,0]
Shape2037 = x3d.Shape()
Text2038 = x3d.Text()
Text2038.string = ["66"]
FontStyle2039 = x3d.FontStyle()
FontStyle2039.size = 0.035

Text2038.fontStyle = FontStyle2039

Shape2037.geometry = Text2038

Billboard2036.children.append(Shape2037)

HAnimSite2028.children.append(Billboard2036)

HAnimSegment2027.children.append(HAnimSite2028)
HAnimSite2040 = x3d.HAnimSite()
HAnimSite2040.name = "r_humeral_medial_epicondyle"
HAnimSite2040.DEF = "hanim_r_humeral_medial_epicondyle_pt"
HAnimSite2040.translation = [-0.18,0.93,-0.03]
TouchSensor2041 = x3d.TouchSensor()
TouchSensor2041.description = "HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt"

HAnimSite2040.children.append(TouchSensor2041)
Shape2042 = x3d.Shape()
Appearance2043 = x3d.Appearance()
Material2044 = x3d.Material()
Material2044.diffuseColor = [1,1,1]

Appearance2043.material = Material2044

Shape2042.appearance = Appearance2043
IndexedFaceSet2045 = x3d.IndexedFaceSet()
IndexedFaceSet2045.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2045.creaseAngle = 0.5
IndexedFaceSet2045.solid = False
ColorRGBA2046 = x3d.ColorRGBA()

IndexedFaceSet2045.color = ColorRGBA2046
Coordinate2047 = x3d.Coordinate()

IndexedFaceSet2045.coord = Coordinate2047

Shape2042.geometry = IndexedFaceSet2045

HAnimSite2040.children.append(Shape2042)
Billboard2048 = x3d.Billboard()
Billboard2048.axisOfRotation = [0,0,0]
Shape2049 = x3d.Shape()
Text2050 = x3d.Text()
Text2050.string = ["67"]
FontStyle2051 = x3d.FontStyle()
FontStyle2051.size = 0.035

Text2050.fontStyle = FontStyle2051

Shape2049.geometry = Text2050

Billboard2048.children.append(Shape2049)

HAnimSite2040.children.append(Billboard2048)

HAnimSegment2027.children.append(HAnimSite2040)
HAnimSite2052 = x3d.HAnimSite()
HAnimSite2052.name = "r_radiale"
HAnimSite2052.DEF = "hanim_r_radiale_pt"
HAnimSite2052.translation = [-0.2,0.91,-0.03]
TouchSensor2053 = x3d.TouchSensor()
TouchSensor2053.description = "HAnimSite 72 hanim_r_radiale_pt"

HAnimSite2052.children.append(TouchSensor2053)
Shape2054 = x3d.Shape()
Appearance2055 = x3d.Appearance()
Material2056 = x3d.Material()
Material2056.diffuseColor = [1,1,1]

Appearance2055.material = Material2056

Shape2054.appearance = Appearance2055
IndexedFaceSet2057 = x3d.IndexedFaceSet()
IndexedFaceSet2057.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2057.creaseAngle = 0.5
IndexedFaceSet2057.solid = False
ColorRGBA2058 = x3d.ColorRGBA()

IndexedFaceSet2057.color = ColorRGBA2058
Coordinate2059 = x3d.Coordinate()

IndexedFaceSet2057.coord = Coordinate2059

Shape2054.geometry = IndexedFaceSet2057

HAnimSite2052.children.append(Shape2054)
Billboard2060 = x3d.Billboard()
Billboard2060.axisOfRotation = [0,0,0]
Shape2061 = x3d.Shape()
Text2062 = x3d.Text()
Text2062.string = ["72"]
FontStyle2063 = x3d.FontStyle()
FontStyle2063.size = 0.035

Text2062.fontStyle = FontStyle2063

Shape2061.geometry = Text2062

Billboard2060.children.append(Shape2061)

HAnimSite2052.children.append(Billboard2060)

HAnimSegment2027.children.append(HAnimSite2052)
HAnimSite2064 = x3d.HAnimSite()
HAnimSite2064.name = "r_bideltoid"
HAnimSite2064.DEF = "hanim_r_bideltoid_pt"
HAnimSite2064.translation = [-0.225,1.185,0]
TouchSensor2065 = x3d.TouchSensor()
TouchSensor2065.description = "HAnimSite 97 hanim_r_bideltoid_pt"

HAnimSite2064.children.append(TouchSensor2065)
Shape2066 = x3d.Shape()
Appearance2067 = x3d.Appearance()
Material2068 = x3d.Material()
Material2068.diffuseColor = [1,1,1]

Appearance2067.material = Material2068

Shape2066.appearance = Appearance2067
IndexedFaceSet2069 = x3d.IndexedFaceSet()
IndexedFaceSet2069.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2069.creaseAngle = 0.5
IndexedFaceSet2069.solid = False
ColorRGBA2070 = x3d.ColorRGBA()

IndexedFaceSet2069.color = ColorRGBA2070
Coordinate2071 = x3d.Coordinate()

IndexedFaceSet2069.coord = Coordinate2071

Shape2066.geometry = IndexedFaceSet2069

HAnimSite2064.children.append(Shape2066)
Billboard2072 = x3d.Billboard()
Billboard2072.axisOfRotation = [0,0,0]
Shape2073 = x3d.Shape()
Text2074 = x3d.Text()
Text2074.string = ["97"]
FontStyle2075 = x3d.FontStyle()
FontStyle2075.size = 0.035

Text2074.fontStyle = FontStyle2075

Shape2073.geometry = Text2074

Billboard2072.children.append(Shape2073)

HAnimSite2064.children.append(Billboard2072)

HAnimSegment2027.children.append(HAnimSite2064)
Shape2076 = x3d.Shape()
LineSet2077 = x3d.LineSet()
LineSet2077.vertexCount = [2]
ColorRGBA2078 = x3d.ColorRGBA()

LineSet2077.color = ColorRGBA2078
Coordinate2079 = x3d.Coordinate()

LineSet2077.coord = Coordinate2079

Shape2076.geometry = LineSet2077

HAnimSegment2027.children.append(Shape2076)

HAnimJoint2026.children.append(HAnimSegment2027)
HAnimJoint2080 = x3d.HAnimJoint()
HAnimJoint2080.name = "r_elbow"
HAnimJoint2080.DEF = "hanim_r_elbow"
HAnimJoint2080.center = [-0.1817,0.9288,-0.00564]
HAnimJoint2080.ulimit = [0,0,0]
HAnimJoint2080.llimit = [0,0,0]
HAnimSegment2081 = x3d.HAnimSegment()
HAnimSegment2081.name = "r_forearm"
HAnimSegment2081.DEF = "hanim_r_forearm"
HAnimSite2082 = x3d.HAnimSite()
HAnimSite2082.name = "r_radial_styloid"
HAnimSite2082.DEF = "hanim_r_radial_styloid_pt"
HAnimSite2082.translation = [-0.18,0.725,0.025]
TouchSensor2083 = x3d.TouchSensor()
TouchSensor2083.description = "HAnimSite 74 hanim_r_radial_styloid_pt"

HAnimSite2082.children.append(TouchSensor2083)
Shape2084 = x3d.Shape()
Appearance2085 = x3d.Appearance()
Material2086 = x3d.Material()
Material2086.diffuseColor = [1,1,1]

Appearance2085.material = Material2086

Shape2084.appearance = Appearance2085
IndexedFaceSet2087 = x3d.IndexedFaceSet()
IndexedFaceSet2087.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2087.creaseAngle = 0.5
IndexedFaceSet2087.solid = False
ColorRGBA2088 = x3d.ColorRGBA()

IndexedFaceSet2087.color = ColorRGBA2088
Coordinate2089 = x3d.Coordinate()

IndexedFaceSet2087.coord = Coordinate2089

Shape2084.geometry = IndexedFaceSet2087

HAnimSite2082.children.append(Shape2084)
Billboard2090 = x3d.Billboard()
Billboard2090.axisOfRotation = [0,0,0]
Shape2091 = x3d.Shape()
Text2092 = x3d.Text()
Text2092.string = ["74"]
FontStyle2093 = x3d.FontStyle()
FontStyle2093.size = 0.035

Text2092.fontStyle = FontStyle2093

Shape2091.geometry = Text2092

Billboard2090.children.append(Shape2091)

HAnimSite2082.children.append(Billboard2090)

HAnimSegment2081.children.append(HAnimSite2082)
HAnimSite2094 = x3d.HAnimSite()
HAnimSite2094.name = "r_olecranon"
HAnimSite2094.DEF = "hanim_r_olecranon_pt"
HAnimSite2094.translation = [-0.2,0.92,-0.03]
TouchSensor2095 = x3d.TouchSensor()
TouchSensor2095.description = "HAnimSite 68 hanim_r_olecranon_pt"

HAnimSite2094.children.append(TouchSensor2095)
Shape2096 = x3d.Shape()
Appearance2097 = x3d.Appearance()
Material2098 = x3d.Material()
Material2098.diffuseColor = [1,1,1]

Appearance2097.material = Material2098

Shape2096.appearance = Appearance2097
IndexedFaceSet2099 = x3d.IndexedFaceSet()
IndexedFaceSet2099.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2099.creaseAngle = 0.5
IndexedFaceSet2099.solid = False
ColorRGBA2100 = x3d.ColorRGBA()

IndexedFaceSet2099.color = ColorRGBA2100
Coordinate2101 = x3d.Coordinate()

IndexedFaceSet2099.coord = Coordinate2101

Shape2096.geometry = IndexedFaceSet2099

HAnimSite2094.children.append(Shape2096)
Billboard2102 = x3d.Billboard()
Billboard2102.axisOfRotation = [0,0,0]
Shape2103 = x3d.Shape()
Text2104 = x3d.Text()
Text2104.string = ["68"]
FontStyle2105 = x3d.FontStyle()
FontStyle2105.size = 0.035

Text2104.fontStyle = FontStyle2105

Shape2103.geometry = Text2104

Billboard2102.children.append(Shape2103)

HAnimSite2094.children.append(Billboard2102)

HAnimSegment2081.children.append(HAnimSite2094)
Shape2106 = x3d.Shape()
LineSet2107 = x3d.LineSet()
LineSet2107.vertexCount = [2]
ColorRGBA2108 = x3d.ColorRGBA()

LineSet2107.color = ColorRGBA2108
Coordinate2109 = x3d.Coordinate()

LineSet2107.coord = Coordinate2109

Shape2106.geometry = LineSet2107

HAnimSegment2081.children.append(Shape2106)

HAnimJoint2080.children.append(HAnimSegment2081)
HAnimJoint2110 = x3d.HAnimJoint()
HAnimJoint2110.name = "r_radiocarpal"
HAnimJoint2110.DEF = "hanim_r_radiocarpal"
HAnimJoint2110.center = [-0.1816,0.7242,-0.005]
HAnimJoint2110.ulimit = [0,0,0]
HAnimJoint2110.llimit = [0,0,0]
HAnimSegment2111 = x3d.HAnimSegment()
HAnimSegment2111.name = "r_carpal"
HAnimSegment2111.DEF = "hanim_r_carpal"
HAnimSite2112 = x3d.HAnimSite()
HAnimSite2112.name = "r_ulnar_styloid"
HAnimSite2112.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite2112.translation = [-0.2,0.725,0]
TouchSensor2113 = x3d.TouchSensor()
TouchSensor2113.description = "HAnimSite 73 hanim_r_ulnar_styloid_pt"

HAnimSite2112.children.append(TouchSensor2113)
Shape2114 = x3d.Shape()
Appearance2115 = x3d.Appearance()
Material2116 = x3d.Material()
Material2116.diffuseColor = [1,1,1]

Appearance2115.material = Material2116

Shape2114.appearance = Appearance2115
IndexedFaceSet2117 = x3d.IndexedFaceSet()
IndexedFaceSet2117.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2117.creaseAngle = 0.5
IndexedFaceSet2117.solid = False
ColorRGBA2118 = x3d.ColorRGBA()

IndexedFaceSet2117.color = ColorRGBA2118
Coordinate2119 = x3d.Coordinate()

IndexedFaceSet2117.coord = Coordinate2119

Shape2114.geometry = IndexedFaceSet2117

HAnimSite2112.children.append(Shape2114)
Billboard2120 = x3d.Billboard()
Billboard2120.axisOfRotation = [0,0,0]
Shape2121 = x3d.Shape()
Text2122 = x3d.Text()
Text2122.string = ["73"]
FontStyle2123 = x3d.FontStyle()
FontStyle2123.size = 0.035

Text2122.fontStyle = FontStyle2123

Shape2121.geometry = Text2122

Billboard2120.children.append(Shape2121)

HAnimSite2112.children.append(Billboard2120)

HAnimSegment2111.children.append(HAnimSite2112)
Shape2124 = x3d.Shape()
LineSet2125 = x3d.LineSet()
LineSet2125.vertexCount = [2]
ColorRGBA2126 = x3d.ColorRGBA()

LineSet2125.color = ColorRGBA2126
Coordinate2127 = x3d.Coordinate()

LineSet2125.coord = Coordinate2127

Shape2124.geometry = LineSet2125

HAnimSegment2111.children.append(Shape2124)

HAnimJoint2110.children.append(HAnimSegment2111)
HAnimJoint2128 = x3d.HAnimJoint()
HAnimJoint2128.name = "r_midcarpal_1"
HAnimJoint2128.DEF = "hanim_r_midcarpal_1"
HAnimJoint2128.center = [-0.18097,0.70605,0.0193]
HAnimJoint2128.ulimit = [0,0,0]
HAnimJoint2128.llimit = [0,0,0]
HAnimSegment2129 = x3d.HAnimSegment()
HAnimSegment2129.name = "r_trapezium"
HAnimSegment2129.DEF = "hanim_r_trapezium"
Shape2130 = x3d.Shape()
LineSet2131 = x3d.LineSet()
LineSet2131.vertexCount = [2]
ColorRGBA2132 = x3d.ColorRGBA()

LineSet2131.color = ColorRGBA2132
Coordinate2133 = x3d.Coordinate()

LineSet2131.coord = Coordinate2133

Shape2130.geometry = LineSet2131

HAnimSegment2129.children.append(Shape2130)

HAnimJoint2128.children.append(HAnimSegment2129)
HAnimJoint2134 = x3d.HAnimJoint()
HAnimJoint2134.name = "r_carpometacarpal_1"
HAnimJoint2134.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint2134.center = [-0.18,0.69255,0.02598]
HAnimJoint2134.ulimit = [0,0,0]
HAnimJoint2134.llimit = [0,0,0]
HAnimSegment2135 = x3d.HAnimSegment()
HAnimSegment2135.name = "r_metacarpal_1"
HAnimSegment2135.DEF = "hanim_r_metacarpal_1"
HAnimSite2136 = x3d.HAnimSite()
HAnimSite2136.name = "r_metacarpal_phalanx_2"
HAnimSite2136.DEF = "hanim_r_metacarpal_phalanx_2_pt"
HAnimSite2136.translation = [-0.2,0.665,0.012]
TouchSensor2137 = x3d.TouchSensor()
TouchSensor2137.description = "HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt"

HAnimSite2136.children.append(TouchSensor2137)
Shape2138 = x3d.Shape()
Appearance2139 = x3d.Appearance()
Material2140 = x3d.Material()
Material2140.diffuseColor = [1,1,1]

Appearance2139.material = Material2140

Shape2138.appearance = Appearance2139
IndexedFaceSet2141 = x3d.IndexedFaceSet()
IndexedFaceSet2141.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2141.creaseAngle = 0.5
IndexedFaceSet2141.solid = False
ColorRGBA2142 = x3d.ColorRGBA()

IndexedFaceSet2141.color = ColorRGBA2142
Coordinate2143 = x3d.Coordinate()

IndexedFaceSet2141.coord = Coordinate2143

Shape2138.geometry = IndexedFaceSet2141

HAnimSite2136.children.append(Shape2138)
Billboard2144 = x3d.Billboard()
Billboard2144.axisOfRotation = [0,0,0]
Shape2145 = x3d.Shape()
Text2146 = x3d.Text()
Text2146.string = ["78"]
FontStyle2147 = x3d.FontStyle()
FontStyle2147.size = 0.035

Text2146.fontStyle = FontStyle2147

Shape2145.geometry = Text2146

Billboard2144.children.append(Shape2145)

HAnimSite2136.children.append(Billboard2144)

HAnimSegment2135.children.append(HAnimSite2136)
Shape2148 = x3d.Shape()
LineSet2149 = x3d.LineSet()
LineSet2149.vertexCount = [2]
ColorRGBA2150 = x3d.ColorRGBA()

LineSet2149.color = ColorRGBA2150
Coordinate2151 = x3d.Coordinate()

LineSet2149.coord = Coordinate2151

Shape2148.geometry = LineSet2149

HAnimSegment2135.children.append(Shape2148)

HAnimJoint2134.children.append(HAnimSegment2135)
HAnimJoint2152 = x3d.HAnimJoint()
HAnimJoint2152.name = "r_metacarpophalangeal_1"
HAnimJoint2152.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint2152.center = [-0.18065,0.67275,0.03577]
HAnimJoint2152.ulimit = [0,0,0]
HAnimJoint2152.llimit = [0,0,0]
HAnimSegment2153 = x3d.HAnimSegment()
HAnimSegment2153.name = "r_carpal_proximal_phalanx_1"
HAnimSegment2153.DEF = "hanim_r_carpal_proximal_phalanx_1"
Shape2154 = x3d.Shape()
LineSet2155 = x3d.LineSet()
LineSet2155.vertexCount = [2]
ColorRGBA2156 = x3d.ColorRGBA()

LineSet2155.color = ColorRGBA2156
Coordinate2157 = x3d.Coordinate()

LineSet2155.coord = Coordinate2157

Shape2154.geometry = LineSet2155

HAnimSegment2153.children.append(Shape2154)

HAnimJoint2152.children.append(HAnimSegment2153)
HAnimJoint2158 = x3d.HAnimJoint()
HAnimJoint2158.name = "r_carpal_interphalangeal_1"
HAnimJoint2158.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint2158.center = [-0.18227,0.654,0.0496]
HAnimJoint2158.ulimit = [0,0,0]
HAnimJoint2158.llimit = [0,0,0]
HAnimSegment2159 = x3d.HAnimSegment()
HAnimSegment2159.name = "r_carpal_distal_phalanx_1"
HAnimSegment2159.DEF = "hanim_r_carpal_distal_phalanx_1"
HAnimSite2160 = x3d.HAnimSite()
HAnimSite2160.name = "r_carpal_distal_phalanx_1"
HAnimSite2160.DEF = "hanim_r_carpal_distal_phalanx_1_tip"
HAnimSite2160.translation = [-0.18,0.64,0.06]
TouchSensor2161 = x3d.TouchSensor()
TouchSensor2161.description = "HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip"

HAnimSite2160.children.append(TouchSensor2161)
Shape2162 = x3d.Shape()
Appearance2163 = x3d.Appearance()
Material2164 = x3d.Material()
Material2164.diffuseColor = [1,1,1]

Appearance2163.material = Material2164

Shape2162.appearance = Appearance2163
IndexedFaceSet2165 = x3d.IndexedFaceSet()
IndexedFaceSet2165.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2165.creaseAngle = 0.5
IndexedFaceSet2165.solid = False
ColorRGBA2166 = x3d.ColorRGBA()

IndexedFaceSet2165.color = ColorRGBA2166
Coordinate2167 = x3d.Coordinate()

IndexedFaceSet2165.coord = Coordinate2167

Shape2162.geometry = IndexedFaceSet2165

HAnimSite2160.children.append(Shape2162)
Billboard2168 = x3d.Billboard()
Billboard2168.axisOfRotation = [0,0,0]
Shape2169 = x3d.Shape()
Text2170 = x3d.Text()
Text2170.string = ["106"]
FontStyle2171 = x3d.FontStyle()
FontStyle2171.size = 0.035

Text2170.fontStyle = FontStyle2171

Shape2169.geometry = Text2170

Billboard2168.children.append(Shape2169)

HAnimSite2160.children.append(Billboard2168)

HAnimSegment2159.children.append(HAnimSite2160)
Shape2172 = x3d.Shape()
LineSet2173 = x3d.LineSet()
LineSet2173.vertexCount = [2]
ColorRGBA2174 = x3d.ColorRGBA()

LineSet2173.color = ColorRGBA2174
Coordinate2175 = x3d.Coordinate()

LineSet2173.coord = Coordinate2175

Shape2172.geometry = LineSet2173

HAnimSegment2159.children.append(Shape2172)

HAnimJoint2158.children.append(HAnimSegment2159)

HAnimJoint2152.children.append(HAnimJoint2158)

HAnimJoint2134.children.append(HAnimJoint2152)

HAnimJoint2128.children.append(HAnimJoint2134)

HAnimJoint2110.children.append(HAnimJoint2128)
HAnimJoint2176 = x3d.HAnimJoint()
HAnimJoint2176.name = "r_midcarpal_2"
HAnimJoint2176.DEF = "hanim_r_midcarpal_2"
HAnimJoint2176.center = [-0.18097,0.70695,0.0084]
HAnimJoint2176.ulimit = [0,0,0]
HAnimJoint2176.llimit = [0,0,0]
HAnimSegment2177 = x3d.HAnimSegment()
HAnimSegment2177.name = "r_trapezoid"
HAnimSegment2177.DEF = "hanim_r_trapezoid"
Shape2178 = x3d.Shape()
LineSet2179 = x3d.LineSet()
LineSet2179.vertexCount = [2]
ColorRGBA2180 = x3d.ColorRGBA()

LineSet2179.color = ColorRGBA2180
Coordinate2181 = x3d.Coordinate()

LineSet2179.coord = Coordinate2181

Shape2178.geometry = LineSet2179

HAnimSegment2177.children.append(Shape2178)

HAnimJoint2176.children.append(HAnimSegment2177)
HAnimJoint2182 = x3d.HAnimJoint()
HAnimJoint2182.name = "r_carpometacarpal_2"
HAnimJoint2182.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint2182.center = [-0.1809,0.6876,0.0097]
HAnimJoint2182.ulimit = [0,0,0]
HAnimJoint2182.llimit = [0,0,0]
HAnimSegment2183 = x3d.HAnimSegment()
HAnimSegment2183.name = "r_metacarpal_2"
HAnimSegment2183.DEF = "hanim_r_metacarpal_2"
Shape2184 = x3d.Shape()
LineSet2185 = x3d.LineSet()
LineSet2185.vertexCount = [2]
ColorRGBA2186 = x3d.ColorRGBA()

LineSet2185.color = ColorRGBA2186
Coordinate2187 = x3d.Coordinate()

LineSet2185.coord = Coordinate2187

Shape2184.geometry = LineSet2185

HAnimSegment2183.children.append(Shape2184)

HAnimJoint2182.children.append(HAnimSegment2183)
HAnimJoint2188 = x3d.HAnimJoint()
HAnimJoint2188.name = "r_metacarpophalangeal_2"
HAnimJoint2188.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint2188.center = [-0.18335,0.6372,0.01507]
HAnimJoint2188.ulimit = [0,0,0]
HAnimJoint2188.llimit = [0,0,0]
HAnimSegment2189 = x3d.HAnimSegment()
HAnimSegment2189.name = "r_carpal_proximal_phalanx_2"
HAnimSegment2189.DEF = "hanim_r_carpal_proximal_phalanx_2"
Shape2190 = x3d.Shape()
LineSet2191 = x3d.LineSet()
LineSet2191.vertexCount = [2]
ColorRGBA2192 = x3d.ColorRGBA()

LineSet2191.color = ColorRGBA2192
Coordinate2193 = x3d.Coordinate()

LineSet2191.coord = Coordinate2193

Shape2190.geometry = LineSet2191

HAnimSegment2189.children.append(Shape2190)

HAnimJoint2188.children.append(HAnimSegment2189)
HAnimJoint2194 = x3d.HAnimJoint()
HAnimJoint2194.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint2194.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint2194.center = [-0.1813,0.6068,0.01418]
HAnimJoint2194.ulimit = [0,0,0]
HAnimJoint2194.llimit = [0,0,0]
HAnimSegment2195 = x3d.HAnimSegment()
HAnimSegment2195.name = "r_carpal_middle_phalanx_2"
HAnimSegment2195.DEF = "hanim_r_carpal_middle_phalanx_2"
Shape2196 = x3d.Shape()
LineSet2197 = x3d.LineSet()
LineSet2197.vertexCount = [2]
ColorRGBA2198 = x3d.ColorRGBA()

LineSet2197.color = ColorRGBA2198
Coordinate2199 = x3d.Coordinate()

LineSet2197.coord = Coordinate2199

Shape2196.geometry = LineSet2197

HAnimSegment2195.children.append(Shape2196)

HAnimJoint2194.children.append(HAnimSegment2195)
HAnimJoint2200 = x3d.HAnimJoint()
HAnimJoint2200.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint2200.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint2200.center = [-0.1803,0.5816,0.01338]
HAnimJoint2200.ulimit = [0,0,0]
HAnimJoint2200.llimit = [0,0,0]
HAnimSegment2201 = x3d.HAnimSegment()
HAnimSegment2201.name = "r_carpal_distal_phalanx_2"
HAnimSegment2201.DEF = "hanim_r_carpal_distal_phalanx_2"
HAnimSite2202 = x3d.HAnimSite()
HAnimSite2202.name = "r_dactylion"
HAnimSite2202.DEF = "hanim_r_dactylion_pt"
HAnimSite2202.translation = [-0.17,0.558,0.017]
TouchSensor2203 = x3d.TouchSensor()
TouchSensor2203.description = "HAnimSite 61 hanim_r_dactylion_pt"

HAnimSite2202.children.append(TouchSensor2203)
Shape2204 = x3d.Shape()
Appearance2205 = x3d.Appearance()
Material2206 = x3d.Material()
Material2206.diffuseColor = [1,1,1]

Appearance2205.material = Material2206

Shape2204.appearance = Appearance2205
IndexedFaceSet2207 = x3d.IndexedFaceSet()
IndexedFaceSet2207.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2207.creaseAngle = 0.5
IndexedFaceSet2207.solid = False
ColorRGBA2208 = x3d.ColorRGBA()

IndexedFaceSet2207.color = ColorRGBA2208
Coordinate2209 = x3d.Coordinate()

IndexedFaceSet2207.coord = Coordinate2209

Shape2204.geometry = IndexedFaceSet2207

HAnimSite2202.children.append(Shape2204)
Billboard2210 = x3d.Billboard()
Billboard2210.axisOfRotation = [0,0,0]
Shape2211 = x3d.Shape()
Text2212 = x3d.Text()
Text2212.string = ["61"]
FontStyle2213 = x3d.FontStyle()
FontStyle2213.size = 0.035

Text2212.fontStyle = FontStyle2213

Shape2211.geometry = Text2212

Billboard2210.children.append(Shape2211)

HAnimSite2202.children.append(Billboard2210)

HAnimSegment2201.children.append(HAnimSite2202)
HAnimSite2214 = x3d.HAnimSite()
HAnimSite2214.name = "r_carpal_distal_phalanx_2"
HAnimSite2214.DEF = "hanim_r_carpal_distal_phalanx_2_tip"
HAnimSite2214.translation = [-0.172,0.558,0.017]
TouchSensor2215 = x3d.TouchSensor()
TouchSensor2215.description = "HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip"

HAnimSite2214.children.append(TouchSensor2215)
Shape2216 = x3d.Shape()
Appearance2217 = x3d.Appearance()
Material2218 = x3d.Material()
Material2218.diffuseColor = [1,1,1]

Appearance2217.material = Material2218

Shape2216.appearance = Appearance2217
IndexedFaceSet2219 = x3d.IndexedFaceSet()
IndexedFaceSet2219.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2219.creaseAngle = 0.5
IndexedFaceSet2219.solid = False
ColorRGBA2220 = x3d.ColorRGBA()

IndexedFaceSet2219.color = ColorRGBA2220
Coordinate2221 = x3d.Coordinate()

IndexedFaceSet2219.coord = Coordinate2221

Shape2216.geometry = IndexedFaceSet2219

HAnimSite2214.children.append(Shape2216)
Billboard2222 = x3d.Billboard()
Billboard2222.axisOfRotation = [0,0,0]
Shape2223 = x3d.Shape()
Text2224 = x3d.Text()
Text2224.string = ["107"]
FontStyle2225 = x3d.FontStyle()
FontStyle2225.size = 0.035

Text2224.fontStyle = FontStyle2225

Shape2223.geometry = Text2224

Billboard2222.children.append(Shape2223)

HAnimSite2214.children.append(Billboard2222)

HAnimSegment2201.children.append(HAnimSite2214)
Shape2226 = x3d.Shape()
LineSet2227 = x3d.LineSet()
LineSet2227.vertexCount = [2]
ColorRGBA2228 = x3d.ColorRGBA()

LineSet2227.color = ColorRGBA2228
Coordinate2229 = x3d.Coordinate()

LineSet2227.coord = Coordinate2229

Shape2226.geometry = LineSet2227

HAnimSegment2201.children.append(Shape2226)

HAnimJoint2200.children.append(HAnimSegment2201)

HAnimJoint2194.children.append(HAnimJoint2200)

HAnimJoint2188.children.append(HAnimJoint2194)

HAnimJoint2182.children.append(HAnimJoint2188)

HAnimJoint2176.children.append(HAnimJoint2182)

HAnimJoint2110.children.append(HAnimJoint2176)
HAnimJoint2230 = x3d.HAnimJoint()
HAnimJoint2230.name = "r_midcarpal_3"
HAnimJoint2230.DEF = "hanim_r_midcarpal_3"
HAnimJoint2230.center = [-0.18072,0.708525,-0.004797]
HAnimJoint2230.ulimit = [0,0,0]
HAnimJoint2230.llimit = [0,0,0]
HAnimSegment2231 = x3d.HAnimSegment()
HAnimSegment2231.name = "r_capitate"
HAnimSegment2231.DEF = "hanim_r_capitate"
Shape2232 = x3d.Shape()
LineSet2233 = x3d.LineSet()
LineSet2233.vertexCount = [2]
ColorRGBA2234 = x3d.ColorRGBA()

LineSet2233.color = ColorRGBA2234
Coordinate2235 = x3d.Coordinate()

LineSet2233.coord = Coordinate2235

Shape2232.geometry = LineSet2233

HAnimSegment2231.children.append(Shape2232)

HAnimJoint2230.children.append(HAnimSegment2231)
HAnimJoint2236 = x3d.HAnimJoint()
HAnimJoint2236.name = "r_carpometacarpal_3"
HAnimJoint2236.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint2236.center = [-0.18072,0.6858,-0.00625]
HAnimJoint2236.ulimit = [0,0,0]
HAnimJoint2236.llimit = [0,0,0]
HAnimSegment2237 = x3d.HAnimSegment()
HAnimSegment2237.name = "r_metacarpal_3"
HAnimSegment2237.DEF = "hanim_r_metacarpal_3"
HAnimSite2238 = x3d.HAnimSite()
HAnimSite2238.name = "r_metacarpal_phalanx_3"
HAnimSite2238.DEF = "hanim_r_metacarpal_phalanx_3_pt"
HAnimSite2238.translation = [-0.2,0.665,0.016]
TouchSensor2239 = x3d.TouchSensor()
TouchSensor2239.description = "HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt"

HAnimSite2238.children.append(TouchSensor2239)
Shape2240 = x3d.Shape()
Appearance2241 = x3d.Appearance()
Material2242 = x3d.Material()
Material2242.diffuseColor = [1,1,1]

Appearance2241.material = Material2242

Shape2240.appearance = Appearance2241
IndexedFaceSet2243 = x3d.IndexedFaceSet()
IndexedFaceSet2243.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2243.creaseAngle = 0.5
IndexedFaceSet2243.solid = False
ColorRGBA2244 = x3d.ColorRGBA()

IndexedFaceSet2243.color = ColorRGBA2244
Coordinate2245 = x3d.Coordinate()

IndexedFaceSet2243.coord = Coordinate2245

Shape2240.geometry = IndexedFaceSet2243

HAnimSite2238.children.append(Shape2240)
Billboard2246 = x3d.Billboard()
Billboard2246.axisOfRotation = [0,0,0]
Shape2247 = x3d.Shape()
Text2248 = x3d.Text()
Text2248.string = ["79"]
FontStyle2249 = x3d.FontStyle()
FontStyle2249.size = 0.035

Text2248.fontStyle = FontStyle2249

Shape2247.geometry = Text2248

Billboard2246.children.append(Shape2247)

HAnimSite2238.children.append(Billboard2246)

HAnimSegment2237.children.append(HAnimSite2238)
Shape2250 = x3d.Shape()
LineSet2251 = x3d.LineSet()
LineSet2251.vertexCount = [2]
ColorRGBA2252 = x3d.ColorRGBA()

LineSet2251.color = ColorRGBA2252
Coordinate2253 = x3d.Coordinate()

LineSet2251.coord = Coordinate2253

Shape2250.geometry = LineSet2251

HAnimSegment2237.children.append(Shape2250)

HAnimJoint2236.children.append(HAnimSegment2237)
HAnimJoint2254 = x3d.HAnimJoint()
HAnimJoint2254.name = "r_metacarpophalangeal_3"
HAnimJoint2254.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint2254.center = [-0.1833,0.63495,-0.0039]
HAnimJoint2254.ulimit = [0,0,0]
HAnimJoint2254.llimit = [0,0,0]
HAnimSegment2255 = x3d.HAnimSegment()
HAnimSegment2255.name = "r_carpal_proximal_phalanx_3"
HAnimSegment2255.DEF = "hanim_r_carpal_proximal_phalanx_3"
Shape2256 = x3d.Shape()
LineSet2257 = x3d.LineSet()
LineSet2257.vertexCount = [2]
ColorRGBA2258 = x3d.ColorRGBA()

LineSet2257.color = ColorRGBA2258
Coordinate2259 = x3d.Coordinate()

LineSet2257.coord = Coordinate2259

Shape2256.geometry = LineSet2257

HAnimSegment2255.children.append(Shape2256)

HAnimJoint2254.children.append(HAnimSegment2255)
HAnimJoint2260 = x3d.HAnimJoint()
HAnimJoint2260.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint2260.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint2260.center = [-0.1813,0.6032,-0.0035]
HAnimJoint2260.ulimit = [0,0,0]
HAnimJoint2260.llimit = [0,0,0]
HAnimSegment2261 = x3d.HAnimSegment()
HAnimSegment2261.name = "r_carpal_middle_phalanx_3"
HAnimSegment2261.DEF = "hanim_r_carpal_middle_phalanx_3"
Shape2262 = x3d.Shape()
LineSet2263 = x3d.LineSet()
LineSet2263.vertexCount = [2]
ColorRGBA2264 = x3d.ColorRGBA()

LineSet2263.color = ColorRGBA2264
Coordinate2265 = x3d.Coordinate()

LineSet2263.coord = Coordinate2265

Shape2262.geometry = LineSet2263

HAnimSegment2261.children.append(Shape2262)

HAnimJoint2260.children.append(HAnimSegment2261)
HAnimJoint2266 = x3d.HAnimJoint()
HAnimJoint2266.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint2266.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint2266.center = [-0.18029,0.5753,-0.00375]
HAnimJoint2266.ulimit = [0,0,0]
HAnimJoint2266.llimit = [0,0,0]
HAnimSegment2267 = x3d.HAnimSegment()
HAnimSegment2267.name = "r_carpal_distal_phalanx_3"
HAnimSegment2267.DEF = "hanim_r_carpal_distal_phalanx_3"
HAnimSite2268 = x3d.HAnimSite()
HAnimSite2268.name = "r_carpal_distal_phalanx_3"
HAnimSite2268.DEF = "hanim_r_carpal_distal_phalanx_3_tip"
HAnimSite2268.translation = [-0.17,0.555,-0.006]
TouchSensor2269 = x3d.TouchSensor()
TouchSensor2269.description = "HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip"

HAnimSite2268.children.append(TouchSensor2269)
Shape2270 = x3d.Shape()
Appearance2271 = x3d.Appearance()
Material2272 = x3d.Material()
Material2272.diffuseColor = [1,1,1]

Appearance2271.material = Material2272

Shape2270.appearance = Appearance2271
IndexedFaceSet2273 = x3d.IndexedFaceSet()
IndexedFaceSet2273.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2273.creaseAngle = 0.5
IndexedFaceSet2273.solid = False
ColorRGBA2274 = x3d.ColorRGBA()

IndexedFaceSet2273.color = ColorRGBA2274
Coordinate2275 = x3d.Coordinate()

IndexedFaceSet2273.coord = Coordinate2275

Shape2270.geometry = IndexedFaceSet2273

HAnimSite2268.children.append(Shape2270)
Billboard2276 = x3d.Billboard()
Billboard2276.axisOfRotation = [0,0,0]
Shape2277 = x3d.Shape()
Text2278 = x3d.Text()
Text2278.string = ["108"]
FontStyle2279 = x3d.FontStyle()
FontStyle2279.size = 0.035

Text2278.fontStyle = FontStyle2279

Shape2277.geometry = Text2278

Billboard2276.children.append(Shape2277)

HAnimSite2268.children.append(Billboard2276)

HAnimSegment2267.children.append(HAnimSite2268)
Shape2280 = x3d.Shape()
LineSet2281 = x3d.LineSet()
LineSet2281.vertexCount = [2]
ColorRGBA2282 = x3d.ColorRGBA()

LineSet2281.color = ColorRGBA2282
Coordinate2283 = x3d.Coordinate()

LineSet2281.coord = Coordinate2283

Shape2280.geometry = LineSet2281

HAnimSegment2267.children.append(Shape2280)

HAnimJoint2266.children.append(HAnimSegment2267)

HAnimJoint2260.children.append(HAnimJoint2266)

HAnimJoint2254.children.append(HAnimJoint2260)

HAnimJoint2236.children.append(HAnimJoint2254)

HAnimJoint2230.children.append(HAnimJoint2236)

HAnimJoint2110.children.append(HAnimJoint2230)
HAnimJoint2284 = x3d.HAnimJoint()
HAnimJoint2284.name = "r_midcarpal_4_5"
HAnimJoint2284.DEF = "hanim_r_midcarpal_4_5"
HAnimJoint2284.center = [-0.18072,0.70583,-0.02574]
HAnimJoint2284.ulimit = [0,0,0]
HAnimJoint2284.llimit = [0,0,0]
HAnimSegment2285 = x3d.HAnimSegment()
HAnimSegment2285.name = "r_hamate"
HAnimSegment2285.DEF = "hanim_r_hamate"
Shape2286 = x3d.Shape()
LineSet2287 = x3d.LineSet()
LineSet2287.vertexCount = [2]
ColorRGBA2288 = x3d.ColorRGBA()

LineSet2287.color = ColorRGBA2288
Coordinate2289 = x3d.Coordinate()

LineSet2287.coord = Coordinate2289

Shape2286.geometry = LineSet2287

HAnimSegment2285.children.append(Shape2286)

HAnimJoint2284.children.append(HAnimSegment2285)
HAnimJoint2290 = x3d.HAnimJoint()
HAnimJoint2290.name = "r_carpometacarpal_4"
HAnimJoint2290.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint2290.center = [-0.18072,0.68625,-0.01992]
HAnimJoint2290.ulimit = [0,0,0]
HAnimJoint2290.llimit = [0,0,0]
HAnimSegment2291 = x3d.HAnimSegment()
HAnimSegment2291.name = "r_metacarpal_4"
HAnimSegment2291.DEF = "hanim_r_metacarpal_4"
Shape2292 = x3d.Shape()
LineSet2293 = x3d.LineSet()
LineSet2293.vertexCount = [2]
ColorRGBA2294 = x3d.ColorRGBA()

LineSet2293.color = ColorRGBA2294
Coordinate2295 = x3d.Coordinate()

LineSet2293.coord = Coordinate2295

Shape2292.geometry = LineSet2293

HAnimSegment2291.children.append(Shape2292)

HAnimJoint2290.children.append(HAnimSegment2291)
HAnimJoint2296 = x3d.HAnimJoint()
HAnimJoint2296.name = "r_metacarpophalangeal_4"
HAnimJoint2296.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint2296.center = [-0.1833,0.63405,-0.02144]
HAnimJoint2296.ulimit = [0,0,0]
HAnimJoint2296.llimit = [0,0,0]
HAnimSegment2297 = x3d.HAnimSegment()
HAnimSegment2297.name = "r_carpal_proximal_phalanx_4"
HAnimSegment2297.DEF = "hanim_r_carpal_proximal_phalanx_4"
Shape2298 = x3d.Shape()
LineSet2299 = x3d.LineSet()
LineSet2299.vertexCount = [2]
ColorRGBA2300 = x3d.ColorRGBA()

LineSet2299.color = ColorRGBA2300
Coordinate2301 = x3d.Coordinate()

LineSet2299.coord = Coordinate2301

Shape2298.geometry = LineSet2299

HAnimSegment2297.children.append(Shape2298)

HAnimJoint2296.children.append(HAnimSegment2297)
HAnimJoint2302 = x3d.HAnimJoint()
HAnimJoint2302.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint2302.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint2302.center = [-0.1813,0.6066,-0.02064]
HAnimJoint2302.ulimit = [0,0,0]
HAnimJoint2302.llimit = [0,0,0]
HAnimSegment2303 = x3d.HAnimSegment()
HAnimSegment2303.name = "r_carpal_middle_phalanx_4"
HAnimSegment2303.DEF = "hanim_r_carpal_middle_phalanx_4"
Shape2304 = x3d.Shape()
LineSet2305 = x3d.LineSet()
LineSet2305.vertexCount = [2]
ColorRGBA2306 = x3d.ColorRGBA()

LineSet2305.color = ColorRGBA2306
Coordinate2307 = x3d.Coordinate()

LineSet2305.coord = Coordinate2307

Shape2304.geometry = LineSet2305

HAnimSegment2303.children.append(Shape2304)

HAnimJoint2302.children.append(HAnimSegment2303)
HAnimJoint2308 = x3d.HAnimJoint()
HAnimJoint2308.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint2308.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint2308.center = [-0.18029,0.5807,-0.01978]
HAnimJoint2308.ulimit = [0,0,0]
HAnimJoint2308.llimit = [0,0,0]
HAnimSegment2309 = x3d.HAnimSegment()
HAnimSegment2309.name = "r_carpal_distal_phalanx_4"
HAnimSegment2309.DEF = "hanim_r_carpal_distal_phalanx_4"
HAnimSite2310 = x3d.HAnimSite()
HAnimSite2310.name = "r_carpal_distal_phalanx_4"
HAnimSite2310.DEF = "hanim_r_carpal_distal_phalanx_4_tip"
HAnimSite2310.translation = [-0.172,0.559,-0.024]
TouchSensor2311 = x3d.TouchSensor()
TouchSensor2311.description = "HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip"

HAnimSite2310.children.append(TouchSensor2311)
Shape2312 = x3d.Shape()
Appearance2313 = x3d.Appearance()
Material2314 = x3d.Material()
Material2314.diffuseColor = [1,1,1]

Appearance2313.material = Material2314

Shape2312.appearance = Appearance2313
IndexedFaceSet2315 = x3d.IndexedFaceSet()
IndexedFaceSet2315.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2315.creaseAngle = 0.5
IndexedFaceSet2315.solid = False
ColorRGBA2316 = x3d.ColorRGBA()

IndexedFaceSet2315.color = ColorRGBA2316
Coordinate2317 = x3d.Coordinate()

IndexedFaceSet2315.coord = Coordinate2317

Shape2312.geometry = IndexedFaceSet2315

HAnimSite2310.children.append(Shape2312)
Billboard2318 = x3d.Billboard()
Billboard2318.axisOfRotation = [0,0,0]
Shape2319 = x3d.Shape()
Text2320 = x3d.Text()
Text2320.string = ["109"]
FontStyle2321 = x3d.FontStyle()
FontStyle2321.size = 0.035

Text2320.fontStyle = FontStyle2321

Shape2319.geometry = Text2320

Billboard2318.children.append(Shape2319)

HAnimSite2310.children.append(Billboard2318)

HAnimSegment2309.children.append(HAnimSite2310)
Shape2322 = x3d.Shape()
LineSet2323 = x3d.LineSet()
LineSet2323.vertexCount = [2]
ColorRGBA2324 = x3d.ColorRGBA()

LineSet2323.color = ColorRGBA2324
Coordinate2325 = x3d.Coordinate()

LineSet2323.coord = Coordinate2325

Shape2322.geometry = LineSet2323

HAnimSegment2309.children.append(Shape2322)

HAnimJoint2308.children.append(HAnimSegment2309)

HAnimJoint2302.children.append(HAnimJoint2308)

HAnimJoint2296.children.append(HAnimJoint2302)

HAnimJoint2290.children.append(HAnimJoint2296)

HAnimJoint2284.children.append(HAnimJoint2290)

HAnimJoint2110.children.append(HAnimJoint2284)
HAnimJoint2326 = x3d.HAnimJoint()
HAnimJoint2326.name = "r_carpometacarpal_5"
HAnimJoint2326.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint2326.center = [-0.18126,0.68827,-0.03278]
HAnimJoint2326.ulimit = [0,0,0]
HAnimJoint2326.llimit = [0,0,0]
HAnimSegment2327 = x3d.HAnimSegment()
HAnimSegment2327.name = "r_metacarpal_5"
HAnimSegment2327.DEF = "hanim_r_metacarpal_5"
HAnimSite2328 = x3d.HAnimSite()
HAnimSite2328.name = "r_metacarpal_phalanx_5"
HAnimSite2328.DEF = "hanim_r_metacarpal_phalanx_5_pt"
HAnimSite2328.translation = [-0.2,0.665,-0.036]
TouchSensor2329 = x3d.TouchSensor()
TouchSensor2329.description = "HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt"

HAnimSite2328.children.append(TouchSensor2329)
Shape2330 = x3d.Shape()
Appearance2331 = x3d.Appearance()
Material2332 = x3d.Material()
Material2332.diffuseColor = [1,1,1]

Appearance2331.material = Material2332

Shape2330.appearance = Appearance2331
IndexedFaceSet2333 = x3d.IndexedFaceSet()
IndexedFaceSet2333.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2333.creaseAngle = 0.5
IndexedFaceSet2333.solid = False
ColorRGBA2334 = x3d.ColorRGBA()

IndexedFaceSet2333.color = ColorRGBA2334
Coordinate2335 = x3d.Coordinate()

IndexedFaceSet2333.coord = Coordinate2335

Shape2330.geometry = IndexedFaceSet2333

HAnimSite2328.children.append(Shape2330)
Billboard2336 = x3d.Billboard()
Billboard2336.axisOfRotation = [0,0,0]
Shape2337 = x3d.Shape()
Text2338 = x3d.Text()
Text2338.string = ["80"]
FontStyle2339 = x3d.FontStyle()
FontStyle2339.size = 0.035

Text2338.fontStyle = FontStyle2339

Shape2337.geometry = Text2338

Billboard2336.children.append(Shape2337)

HAnimSite2328.children.append(Billboard2336)

HAnimSegment2327.children.append(HAnimSite2328)
Shape2340 = x3d.Shape()
LineSet2341 = x3d.LineSet()
LineSet2341.vertexCount = [2]
ColorRGBA2342 = x3d.ColorRGBA()

LineSet2341.color = ColorRGBA2342
Coordinate2343 = x3d.Coordinate()

LineSet2341.coord = Coordinate2343

Shape2340.geometry = LineSet2341

HAnimSegment2327.children.append(Shape2340)

HAnimJoint2326.children.append(HAnimSegment2327)
HAnimJoint2344 = x3d.HAnimJoint()
HAnimJoint2344.name = "r_metacarpophalangeal_5"
HAnimJoint2344.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint2344.center = [-0.18297,0.6381,-0.0371]
HAnimJoint2344.ulimit = [0,0,0]
HAnimJoint2344.llimit = [0,0,0]
HAnimSegment2345 = x3d.HAnimSegment()
HAnimSegment2345.name = "r_carpal_proximal_phalanx_5"
HAnimSegment2345.DEF = "hanim_r_carpal_proximal_phalanx_5"
Shape2346 = x3d.Shape()
LineSet2347 = x3d.LineSet()
LineSet2347.vertexCount = [2]
ColorRGBA2348 = x3d.ColorRGBA()

LineSet2347.color = ColorRGBA2348
Coordinate2349 = x3d.Coordinate()

LineSet2347.coord = Coordinate2349

Shape2346.geometry = LineSet2347

HAnimSegment2345.children.append(Shape2346)

HAnimJoint2344.children.append(HAnimSegment2345)
HAnimJoint2350 = x3d.HAnimJoint()
HAnimJoint2350.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint2350.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint2350.center = [-0.1813,0.621,-0.03715]
HAnimJoint2350.ulimit = [0,0,0]
HAnimJoint2350.llimit = [0,0,0]
HAnimSegment2351 = x3d.HAnimSegment()
HAnimSegment2351.name = "r_carpal_middle_phalanx_5"
HAnimSegment2351.DEF = "hanim_r_carpal_middle_phalanx_5"
Shape2352 = x3d.Shape()
LineSet2353 = x3d.LineSet()
LineSet2353.vertexCount = [2]
ColorRGBA2354 = x3d.ColorRGBA()

LineSet2353.color = ColorRGBA2354
Coordinate2355 = x3d.Coordinate()

LineSet2353.coord = Coordinate2355

Shape2352.geometry = LineSet2353

HAnimSegment2351.children.append(Shape2352)

HAnimJoint2350.children.append(HAnimSegment2351)
HAnimJoint2356 = x3d.HAnimJoint()
HAnimJoint2356.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint2356.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint2356.center = [-0.18045,0.602325,-0.03697]
HAnimJoint2356.ulimit = [0,0,0]
HAnimJoint2356.llimit = [0,0,0]
HAnimSegment2357 = x3d.HAnimSegment()
HAnimSegment2357.name = "r_carpal_distal_phalanx_5"
HAnimSegment2357.DEF = "hanim_r_carpal_distal_phalanx_5"
HAnimSite2358 = x3d.HAnimSite()
HAnimSite2358.name = "r_carpal_distal_phalanx_5"
HAnimSite2358.DEF = "hanim_r_carpal_distal_phalanx_5_tip"
HAnimSite2358.translation = [-0.172,0.58,-0.039]
TouchSensor2359 = x3d.TouchSensor()
TouchSensor2359.description = "HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip"

HAnimSite2358.children.append(TouchSensor2359)
Shape2360 = x3d.Shape()
Appearance2361 = x3d.Appearance()
Material2362 = x3d.Material()
Material2362.diffuseColor = [1,1,1]

Appearance2361.material = Material2362

Shape2360.appearance = Appearance2361
IndexedFaceSet2363 = x3d.IndexedFaceSet()
IndexedFaceSet2363.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet2363.creaseAngle = 0.5
IndexedFaceSet2363.solid = False
ColorRGBA2364 = x3d.ColorRGBA()

IndexedFaceSet2363.color = ColorRGBA2364
Coordinate2365 = x3d.Coordinate()

IndexedFaceSet2363.coord = Coordinate2365

Shape2360.geometry = IndexedFaceSet2363

HAnimSite2358.children.append(Shape2360)
Billboard2366 = x3d.Billboard()
Billboard2366.axisOfRotation = [0,0,0]
Shape2367 = x3d.Shape()
Text2368 = x3d.Text()
Text2368.string = ["110"]
FontStyle2369 = x3d.FontStyle()
FontStyle2369.size = 0.035

Text2368.fontStyle = FontStyle2369

Shape2367.geometry = Text2368

Billboard2366.children.append(Shape2367)

HAnimSite2358.children.append(Billboard2366)

HAnimSegment2357.children.append(HAnimSite2358)
Shape2370 = x3d.Shape()
LineSet2371 = x3d.LineSet()
LineSet2371.vertexCount = [2]
ColorRGBA2372 = x3d.ColorRGBA()

LineSet2371.color = ColorRGBA2372
Coordinate2373 = x3d.Coordinate()

LineSet2371.coord = Coordinate2373

Shape2370.geometry = LineSet2371

HAnimSegment2357.children.append(Shape2370)

HAnimJoint2356.children.append(HAnimSegment2357)

HAnimJoint2350.children.append(HAnimJoint2356)

HAnimJoint2344.children.append(HAnimJoint2350)

HAnimJoint2326.children.append(HAnimJoint2344)

HAnimJoint2110.children.append(HAnimJoint2326)

HAnimJoint2080.children.append(HAnimJoint2110)

HAnimJoint2026.children.append(HAnimJoint2080)

HAnimJoint1972.children.append(HAnimJoint2026)

HAnimJoint1954.children.append(HAnimJoint1972)

HAnimJoint1126.children.append(HAnimJoint1954)

HAnimJoint1120.children.append(HAnimJoint1126)

HAnimJoint1114.children.append(HAnimJoint1120)

HAnimJoint1108.children.append(HAnimJoint1114)

HAnimJoint1102.children.append(HAnimJoint1108)

HAnimJoint1096.children.append(HAnimJoint1102)

HAnimJoint1090.children.append(HAnimJoint1096)

HAnimJoint1084.children.append(HAnimJoint1090)

HAnimJoint1018.children.append(HAnimJoint1084)

HAnimJoint988.children.append(HAnimJoint1018)

HAnimJoint982.children.append(HAnimJoint988)

HAnimJoint976.children.append(HAnimJoint982)

HAnimJoint970.children.append(HAnimJoint976)

HAnimJoint940.children.append(HAnimJoint970)

HAnimJoint934.children.append(HAnimJoint940)

HAnimJoint928.children.append(HAnimJoint934)

HAnimJoint862.children.append(HAnimJoint928)

HAnimJoint12.children.append(HAnimJoint862)

HAnimHumanoid11.skeleton.append(HAnimJoint12)

Scene4.children.append(HAnimHumanoid11)
NavigationInfo2374 = x3d.NavigationInfo()
NavigationInfo2374.headlight = False

Scene4.children.append(NavigationInfo2374)
Background2375 = x3d.Background()
Background2375.DEF = "Background1"

Scene4.children.append(Background2375)
DirectionalLight2376 = x3d.DirectionalLight()
DirectionalLight2376.global_ = True

Scene4.children.append(DirectionalLight2376)
Viewpoint2377 = x3d.Viewpoint()
Viewpoint2377.centerOfRotation = [0,1,0]
Viewpoint2377.description = "JinLOA4"
Viewpoint2377.position = [0,1,3]

Scene4.children.append(Viewpoint2377)
Transform2378 = x3d.Transform()
Transform2378.DEF = "Landmark000"
"""Another Parent Scene 0 0 0 landmark"""
Shape2379 = x3d.Shape()
Shape2379.DEF = "HAnim000Landmark"
Appearance2380 = x3d.Appearance()
Material2381 = x3d.Material()
Material2381.diffuseColor = [0,1,0]
Material2381.emissiveColor = [0,1,0]

Appearance2380.material = Material2381

Shape2379.appearance = Appearance2380
Sphere2382 = x3d.Sphere()
Sphere2382.radius = 0.01

Shape2379.geometry = Sphere2382

Transform2378.children.append(Shape2379)

Scene4.children.append(Transform2378)

X3D0.Scene = Scene4
f = open("../data/Jin20fSegmented.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Jin20fSegmented.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
