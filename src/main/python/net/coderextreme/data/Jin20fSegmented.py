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

X3D0.head = head1
Scene3 = x3d.Scene()
WorldInfo4 = x3d.WorldInfo()
WorldInfo4.title = "20f Jin v2 loa4 Level 1, Joints, Segments, Sites"

Scene3.children.append(WorldInfo4)
Transform5 = x3d.Transform(DEF="ContainerScene000")
Shape6 = x3d.Shape(DEF="AxisLinesShape")
IndexedLineSet7 = x3d.IndexedLineSet()
IndexedLineSet7.colorPerVertex = False
IndexedLineSet7.colorIndex = [0,1,2]
IndexedLineSet7.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Color8 = x3d.Color()
Color8.color = [(1, 0, 0),(0, 0.6, 0),(0, 0, 1)]

IndexedLineSet7.color = Color8
Coordinate9 = x3d.Coordinate()
Coordinate9.point = [(0, 0, 0),(0.1, 0, 0),(0, 0.1, 0),(0, 0, 0.1)]

IndexedLineSet7.coord = Coordinate9

Shape6.geometry = IndexedLineSet7

Transform5.children.append(Shape6)

Scene3.children.append(Transform5)
HAnimHumanoid10 = x3d.HAnimHumanoid(DEF="hanim_JinLOA4S")
HAnimHumanoid10.name = "JinLOA4S"
HAnimHumanoid10.version = "2.0"
HAnimHumanoid10.loa = 4
HAnimJoint11 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint11.name = "humanoid_root"
HAnimJoint11.center = [0,0.77,0]
HAnimSegment12 = x3d.HAnimSegment(DEF="hanim_sacrum")
HAnimSegment12.name = "sacrum"
Transform13 = x3d.Transform(DEF="Humanoid000")
Shape14 = x3d.Shape(USE="AxisLinesShape")

Transform13.children.append(Shape14)

HAnimSegment12.children.append(Transform13)

HAnimJoint11.children.append(HAnimSegment12)
HAnimJoint15 = x3d.HAnimJoint(DEF="hanim_sacroiliac")
HAnimJoint15.name = "sacroiliac"
HAnimJoint15.center = [0,0.826,0.02]
HAnimSegment16 = x3d.HAnimSegment(DEF="hanim_pelvis")
HAnimSegment16.name = "pelvis"
HAnimSite17 = x3d.HAnimSite(DEF="hanim_l_iliocristale_pt")
HAnimSite17.name = "l_iliocristale"
HAnimSite17.translation = [0.13,0.92,0.0035]
TouchSensor18 = x3d.TouchSensor()
TouchSensor18.description = "HAnimSite 33 hanim_l_iliocristale_pt"

HAnimSite17.children.append(TouchSensor18)
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.diffuseColor = [1,1,1]

Appearance20.material = Material21

Shape19.appearance = Appearance20
IndexedFaceSet22 = x3d.IndexedFaceSet()
IndexedFaceSet22.solid = False
IndexedFaceSet22.creaseAngle = 0.5
IndexedFaceSet22.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA23 = x3d.ColorRGBA()
ColorRGBA23.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet22.color = ColorRGBA23
Coordinate24 = x3d.Coordinate()
Coordinate24.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet22.coord = Coordinate24

Shape19.geometry = IndexedFaceSet22

HAnimSite17.children.append(Shape19)
Billboard25 = x3d.Billboard()
Billboard25.axisOfRotation = [0,0,0]
Shape26 = x3d.Shape()
Text27 = x3d.Text()
Text27.string = ["33"]
FontStyle28 = x3d.FontStyle()
FontStyle28.size = 0.035

Text27.fontStyle = FontStyle28

Shape26.geometry = Text27

Billboard25.children.append(Shape26)

HAnimSite17.children.append(Billboard25)

HAnimSegment16.children.append(HAnimSite17)
HAnimSite29 = x3d.HAnimSite(DEF="hanim_r_iliocristale_pt")
HAnimSite29.name = "r_iliocristale"
HAnimSite29.translation = [-0.13,0.92,0.0035]
TouchSensor30 = x3d.TouchSensor()
TouchSensor30.description = "HAnimSite 36 hanim_r_iliocristale_pt"

HAnimSite29.children.append(TouchSensor30)
Shape31 = x3d.Shape()
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()
Material33.diffuseColor = [1,1,1]

Appearance32.material = Material33

Shape31.appearance = Appearance32
IndexedFaceSet34 = x3d.IndexedFaceSet()
IndexedFaceSet34.solid = False
IndexedFaceSet34.creaseAngle = 0.5
IndexedFaceSet34.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA35 = x3d.ColorRGBA()
ColorRGBA35.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet34.color = ColorRGBA35
Coordinate36 = x3d.Coordinate()
Coordinate36.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet34.coord = Coordinate36

Shape31.geometry = IndexedFaceSet34

HAnimSite29.children.append(Shape31)
Billboard37 = x3d.Billboard()
Billboard37.axisOfRotation = [0,0,0]
Shape38 = x3d.Shape()
Text39 = x3d.Text()
Text39.string = ["36"]
FontStyle40 = x3d.FontStyle()
FontStyle40.size = 0.035

Text39.fontStyle = FontStyle40

Shape38.geometry = Text39

Billboard37.children.append(Shape38)

HAnimSite29.children.append(Billboard37)

HAnimSegment16.children.append(HAnimSite29)
HAnimSite41 = x3d.HAnimSite(DEF="hanim_l_trochanterion_pt")
HAnimSite41.name = "l_trochanterion"
HAnimSite41.translation = [0.14,0.8,0.0035]
TouchSensor42 = x3d.TouchSensor()
TouchSensor42.description = "HAnimSite 42 hanim_l_trochanterion_pt"

HAnimSite41.children.append(TouchSensor42)
Shape43 = x3d.Shape()
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.diffuseColor = [1,1,1]

Appearance44.material = Material45

Shape43.appearance = Appearance44
IndexedFaceSet46 = x3d.IndexedFaceSet()
IndexedFaceSet46.solid = False
IndexedFaceSet46.creaseAngle = 0.5
IndexedFaceSet46.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA47 = x3d.ColorRGBA()
ColorRGBA47.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet46.color = ColorRGBA47
Coordinate48 = x3d.Coordinate()
Coordinate48.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet46.coord = Coordinate48

Shape43.geometry = IndexedFaceSet46

HAnimSite41.children.append(Shape43)
Billboard49 = x3d.Billboard()
Billboard49.axisOfRotation = [0,0,0]
Shape50 = x3d.Shape()
Text51 = x3d.Text()
Text51.string = ["42"]
FontStyle52 = x3d.FontStyle()
FontStyle52.size = 0.035

Text51.fontStyle = FontStyle52

Shape50.geometry = Text51

Billboard49.children.append(Shape50)

HAnimSite41.children.append(Billboard49)

HAnimSegment16.children.append(HAnimSite41)
HAnimSite53 = x3d.HAnimSite(DEF="hanim_r_trochanterion_pt")
HAnimSite53.name = "r_trochanterion"
HAnimSite53.translation = [-0.14,0.8,0.0035]
TouchSensor54 = x3d.TouchSensor()
TouchSensor54.description = "HAnimSite 46 hanim_r_trochanterion_pt"

HAnimSite53.children.append(TouchSensor54)
Shape55 = x3d.Shape()
Appearance56 = x3d.Appearance()
Material57 = x3d.Material()
Material57.diffuseColor = [1,1,1]

Appearance56.material = Material57

Shape55.appearance = Appearance56
IndexedFaceSet58 = x3d.IndexedFaceSet()
IndexedFaceSet58.solid = False
IndexedFaceSet58.creaseAngle = 0.5
IndexedFaceSet58.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA59 = x3d.ColorRGBA()
ColorRGBA59.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet58.color = ColorRGBA59
Coordinate60 = x3d.Coordinate()
Coordinate60.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet58.coord = Coordinate60

Shape55.geometry = IndexedFaceSet58

HAnimSite53.children.append(Shape55)
Billboard61 = x3d.Billboard()
Billboard61.axisOfRotation = [0,0,0]
Shape62 = x3d.Shape()
Text63 = x3d.Text()
Text63.string = ["46"]
FontStyle64 = x3d.FontStyle()
FontStyle64.size = 0.035

Text63.fontStyle = FontStyle64

Shape62.geometry = Text63

Billboard61.children.append(Shape62)

HAnimSite53.children.append(Billboard61)

HAnimSegment16.children.append(HAnimSite53)
HAnimSite65 = x3d.HAnimSite(DEF="hanim_l_asis_pt")
HAnimSite65.name = "l_asis"
HAnimSite65.translation = [0.1,0.86,0.0035]
TouchSensor66 = x3d.TouchSensor()
TouchSensor66.description = "HAnimSite 32 hanim_l_asis_pt"

HAnimSite65.children.append(TouchSensor66)
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.diffuseColor = [1,1,1]

Appearance68.material = Material69

Shape67.appearance = Appearance68
IndexedFaceSet70 = x3d.IndexedFaceSet()
IndexedFaceSet70.solid = False
IndexedFaceSet70.creaseAngle = 0.5
IndexedFaceSet70.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA71 = x3d.ColorRGBA()
ColorRGBA71.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet70.color = ColorRGBA71
Coordinate72 = x3d.Coordinate()
Coordinate72.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet70.coord = Coordinate72

Shape67.geometry = IndexedFaceSet70

HAnimSite65.children.append(Shape67)
Billboard73 = x3d.Billboard()
Billboard73.axisOfRotation = [0,0,0]
Shape74 = x3d.Shape()
Text75 = x3d.Text()
Text75.string = ["32"]
FontStyle76 = x3d.FontStyle()
FontStyle76.size = 0.035

Text75.fontStyle = FontStyle76

Shape74.geometry = Text75

Billboard73.children.append(Shape74)

HAnimSite65.children.append(Billboard73)

HAnimSegment16.children.append(HAnimSite65)
HAnimSite77 = x3d.HAnimSite(DEF="hanim_r_asis_pt")
HAnimSite77.name = "r_asis"
HAnimSite77.translation = [-0.1,0.86,0.0035]
TouchSensor78 = x3d.TouchSensor()
TouchSensor78.description = "HAnimSite 35 hanim_r_asis_pt"

HAnimSite77.children.append(TouchSensor78)
Shape79 = x3d.Shape()
Appearance80 = x3d.Appearance()
Material81 = x3d.Material()
Material81.diffuseColor = [1,1,1]

Appearance80.material = Material81

Shape79.appearance = Appearance80
IndexedFaceSet82 = x3d.IndexedFaceSet()
IndexedFaceSet82.solid = False
IndexedFaceSet82.creaseAngle = 0.5
IndexedFaceSet82.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA83 = x3d.ColorRGBA()
ColorRGBA83.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet82.color = ColorRGBA83
Coordinate84 = x3d.Coordinate()
Coordinate84.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet82.coord = Coordinate84

Shape79.geometry = IndexedFaceSet82

HAnimSite77.children.append(Shape79)
Billboard85 = x3d.Billboard()
Billboard85.axisOfRotation = [0,0,0]
Shape86 = x3d.Shape()
Text87 = x3d.Text()
Text87.string = ["35"]
FontStyle88 = x3d.FontStyle()
FontStyle88.size = 0.035

Text87.fontStyle = FontStyle88

Shape86.geometry = Text87

Billboard85.children.append(Shape86)

HAnimSite77.children.append(Billboard85)

HAnimSegment16.children.append(HAnimSite77)
HAnimSite89 = x3d.HAnimSite(DEF="hanim_l_psis_pt")
HAnimSite89.name = "l_psis"
HAnimSite89.translation = [0.05,0.84,-0.11]
TouchSensor90 = x3d.TouchSensor()
TouchSensor90.description = "HAnimSite 34 hanim_l_psis_pt"

HAnimSite89.children.append(TouchSensor90)
Shape91 = x3d.Shape()
Appearance92 = x3d.Appearance()
Material93 = x3d.Material()
Material93.diffuseColor = [1,1,1]

Appearance92.material = Material93

Shape91.appearance = Appearance92
IndexedFaceSet94 = x3d.IndexedFaceSet()
IndexedFaceSet94.solid = False
IndexedFaceSet94.creaseAngle = 0.5
IndexedFaceSet94.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA95 = x3d.ColorRGBA()
ColorRGBA95.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet94.color = ColorRGBA95
Coordinate96 = x3d.Coordinate()
Coordinate96.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet94.coord = Coordinate96

Shape91.geometry = IndexedFaceSet94

HAnimSite89.children.append(Shape91)
Billboard97 = x3d.Billboard()
Billboard97.axisOfRotation = [0,0,0]
Shape98 = x3d.Shape()
Text99 = x3d.Text()
Text99.string = ["34"]
FontStyle100 = x3d.FontStyle()
FontStyle100.size = 0.035

Text99.fontStyle = FontStyle100

Shape98.geometry = Text99

Billboard97.children.append(Shape98)

HAnimSite89.children.append(Billboard97)

HAnimSegment16.children.append(HAnimSite89)
HAnimSite101 = x3d.HAnimSite(DEF="hanim_r_psis_pt")
HAnimSite101.name = "r_psis"
HAnimSite101.translation = [-0.05,0.84,-0.11]
TouchSensor102 = x3d.TouchSensor()
TouchSensor102.description = "HAnimSite 37 hanim_r_psis_pt"

HAnimSite101.children.append(TouchSensor102)
Shape103 = x3d.Shape()
Appearance104 = x3d.Appearance()
Material105 = x3d.Material()
Material105.diffuseColor = [1,1,1]

Appearance104.material = Material105

Shape103.appearance = Appearance104
IndexedFaceSet106 = x3d.IndexedFaceSet()
IndexedFaceSet106.solid = False
IndexedFaceSet106.creaseAngle = 0.5
IndexedFaceSet106.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA107 = x3d.ColorRGBA()
ColorRGBA107.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet106.color = ColorRGBA107
Coordinate108 = x3d.Coordinate()
Coordinate108.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet106.coord = Coordinate108

Shape103.geometry = IndexedFaceSet106

HAnimSite101.children.append(Shape103)
Billboard109 = x3d.Billboard()
Billboard109.axisOfRotation = [0,0,0]
Shape110 = x3d.Shape()
Text111 = x3d.Text()
Text111.string = ["37"]
FontStyle112 = x3d.FontStyle()
FontStyle112.size = 0.035

Text111.fontStyle = FontStyle112

Shape110.geometry = Text111

Billboard109.children.append(Shape110)

HAnimSite101.children.append(Billboard109)

HAnimSegment16.children.append(HAnimSite101)
HAnimSite113 = x3d.HAnimSite(DEF="hanim_crotch_pt")
HAnimSite113.name = "crotch"
HAnimSite113.translation = [0,0.703,0]
TouchSensor114 = x3d.TouchSensor()
TouchSensor114.description = "HAnimSite 38 hanim_crotch_pt"

HAnimSite113.children.append(TouchSensor114)
Shape115 = x3d.Shape()
Appearance116 = x3d.Appearance()
Material117 = x3d.Material()
Material117.diffuseColor = [1,1,1]

Appearance116.material = Material117

Shape115.appearance = Appearance116
IndexedFaceSet118 = x3d.IndexedFaceSet()
IndexedFaceSet118.solid = False
IndexedFaceSet118.creaseAngle = 0.5
IndexedFaceSet118.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA119 = x3d.ColorRGBA()
ColorRGBA119.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet118.color = ColorRGBA119
Coordinate120 = x3d.Coordinate()
Coordinate120.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet118.coord = Coordinate120

Shape115.geometry = IndexedFaceSet118

HAnimSite113.children.append(Shape115)
Billboard121 = x3d.Billboard()
Billboard121.axisOfRotation = [0,0,0]
Shape122 = x3d.Shape()
Text123 = x3d.Text()
Text123.string = ["38"]
FontStyle124 = x3d.FontStyle()
FontStyle124.size = 0.035

Text123.fontStyle = FontStyle124

Shape122.geometry = Text123

Billboard121.children.append(Shape122)

HAnimSite113.children.append(Billboard121)

HAnimSegment16.children.append(HAnimSite113)
HAnimSite125 = x3d.HAnimSite(DEF="hanim_buttocks_standing_wall_contact_point_pt")
HAnimSite125.name = "buttocks_standing_wall_contact_point"
HAnimSite125.translation = [0,0.8,-0.15]
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.description = "HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt"

HAnimSite125.children.append(TouchSensor126)
Shape127 = x3d.Shape()
Appearance128 = x3d.Appearance()
Material129 = x3d.Material()
Material129.diffuseColor = [1,1,1]

Appearance128.material = Material129

Shape127.appearance = Appearance128
IndexedFaceSet130 = x3d.IndexedFaceSet()
IndexedFaceSet130.solid = False
IndexedFaceSet130.creaseAngle = 0.5
IndexedFaceSet130.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA131 = x3d.ColorRGBA()
ColorRGBA131.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet130.color = ColorRGBA131
Coordinate132 = x3d.Coordinate()
Coordinate132.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet130.coord = Coordinate132

Shape127.geometry = IndexedFaceSet130

HAnimSite125.children.append(Shape127)
Billboard133 = x3d.Billboard()
Billboard133.axisOfRotation = [0,0,0]
Shape134 = x3d.Shape()
Text135 = x3d.Text()
Text135.string = ["93"]
FontStyle136 = x3d.FontStyle()
FontStyle136.size = 0.035

Text135.fontStyle = FontStyle136

Shape134.geometry = Text135

Billboard133.children.append(Shape134)

HAnimSite125.children.append(Billboard133)

HAnimSegment16.children.append(HAnimSite125)
Shape137 = x3d.Shape()
LineSet138 = x3d.LineSet()
LineSet138.vertexCount = [2]
ColorRGBA139 = x3d.ColorRGBA()
ColorRGBA139.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet138.color = ColorRGBA139
Coordinate140 = x3d.Coordinate()
Coordinate140.point = [(0, 0.826, 0.02),(0, 0.77, 0)]

LineSet138.coord = Coordinate140

Shape137.geometry = LineSet138

HAnimSegment16.children.append(Shape137)

HAnimJoint15.children.append(HAnimSegment16)
HAnimJoint141 = x3d.HAnimJoint(DEF="hanim_l_hip")
HAnimJoint141.name = "l_hip"
HAnimJoint141.center = [0.095,0.8266,-0.0183]
HAnimSegment142 = x3d.HAnimSegment(DEF="hanim_l_thigh")
HAnimSegment142.name = "l_thigh"
HAnimSite143 = x3d.HAnimSite(DEF="hanim_l_knee_crease_pt")
HAnimSite143.name = "l_knee_crease"
HAnimSite143.translation = [0.09,0.41,-0.056]
TouchSensor144 = x3d.TouchSensor()
TouchSensor144.description = "HAnimSite 90 hanim_l_knee_crease_pt"

HAnimSite143.children.append(TouchSensor144)
Shape145 = x3d.Shape()
Appearance146 = x3d.Appearance()
Material147 = x3d.Material()
Material147.diffuseColor = [1,1,1]

Appearance146.material = Material147

Shape145.appearance = Appearance146
IndexedFaceSet148 = x3d.IndexedFaceSet()
IndexedFaceSet148.solid = False
IndexedFaceSet148.creaseAngle = 0.5
IndexedFaceSet148.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA149 = x3d.ColorRGBA()
ColorRGBA149.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet148.color = ColorRGBA149
Coordinate150 = x3d.Coordinate()
Coordinate150.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet148.coord = Coordinate150

Shape145.geometry = IndexedFaceSet148

HAnimSite143.children.append(Shape145)
Billboard151 = x3d.Billboard()
Billboard151.axisOfRotation = [0,0,0]
Shape152 = x3d.Shape()
Text153 = x3d.Text()
Text153.string = ["90"]
FontStyle154 = x3d.FontStyle()
FontStyle154.size = 0.035

Text153.fontStyle = FontStyle154

Shape152.geometry = Text153

Billboard151.children.append(Shape152)

HAnimSite143.children.append(Billboard151)

HAnimSegment142.children.append(HAnimSite143)
HAnimSite155 = x3d.HAnimSite(DEF="hanim_l_femoral_medial_epicondyle_pt")
HAnimSite155.name = "l_femoral_medial_epicondyle"
HAnimSite155.translation = [0.039,0.41,-0.01]
TouchSensor156 = x3d.TouchSensor()
TouchSensor156.description = "HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt"

HAnimSite155.children.append(TouchSensor156)
Shape157 = x3d.Shape()
Appearance158 = x3d.Appearance()
Material159 = x3d.Material()
Material159.diffuseColor = [1,1,1]

Appearance158.material = Material159

Shape157.appearance = Appearance158
IndexedFaceSet160 = x3d.IndexedFaceSet()
IndexedFaceSet160.solid = False
IndexedFaceSet160.creaseAngle = 0.5
IndexedFaceSet160.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA161 = x3d.ColorRGBA()
ColorRGBA161.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet160.color = ColorRGBA161
Coordinate162 = x3d.Coordinate()
Coordinate162.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet160.coord = Coordinate162

Shape157.geometry = IndexedFaceSet160

HAnimSite155.children.append(Shape157)
Billboard163 = x3d.Billboard()
Billboard163.axisOfRotation = [0,0,0]
Shape164 = x3d.Shape()
Text165 = x3d.Text()
Text165.string = ["40"]
FontStyle166 = x3d.FontStyle()
FontStyle166.size = 0.035

Text165.fontStyle = FontStyle166

Shape164.geometry = Text165

Billboard163.children.append(Shape164)

HAnimSite155.children.append(Billboard163)

HAnimSegment142.children.append(HAnimSite155)
HAnimSite167 = x3d.HAnimSite(DEF="hanim_l_femoral_lateral_epicondyle_pt")
HAnimSite167.name = "l_femoral_lateral_epicondyle"
HAnimSite167.translation = [0.127,0.41,-0.01]
TouchSensor168 = x3d.TouchSensor()
TouchSensor168.description = "HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt"

HAnimSite167.children.append(TouchSensor168)
Shape169 = x3d.Shape()
Appearance170 = x3d.Appearance()
Material171 = x3d.Material()
Material171.diffuseColor = [1,1,1]

Appearance170.material = Material171

Shape169.appearance = Appearance170
IndexedFaceSet172 = x3d.IndexedFaceSet()
IndexedFaceSet172.solid = False
IndexedFaceSet172.creaseAngle = 0.5
IndexedFaceSet172.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA173 = x3d.ColorRGBA()
ColorRGBA173.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet172.color = ColorRGBA173
Coordinate174 = x3d.Coordinate()
Coordinate174.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet172.coord = Coordinate174

Shape169.geometry = IndexedFaceSet172

HAnimSite167.children.append(Shape169)
Billboard175 = x3d.Billboard()
Billboard175.axisOfRotation = [0,0,0]
Shape176 = x3d.Shape()
Text177 = x3d.Text()
Text177.string = ["39"]
FontStyle178 = x3d.FontStyle()
FontStyle178.size = 0.035

Text177.fontStyle = FontStyle178

Shape176.geometry = Text177

Billboard175.children.append(Shape176)

HAnimSite167.children.append(Billboard175)

HAnimSegment142.children.append(HAnimSite167)
HAnimSite179 = x3d.HAnimSite(DEF="hanim_l_suprapatella_pt")
HAnimSite179.name = "l_suprapatella"
HAnimSite179.translation = [0.085,0.41,0.042]
TouchSensor180 = x3d.TouchSensor()
TouchSensor180.description = "HAnimSite 41 hanim_l_suprapatella_pt"

HAnimSite179.children.append(TouchSensor180)
Shape181 = x3d.Shape()
Appearance182 = x3d.Appearance()
Material183 = x3d.Material()
Material183.diffuseColor = [1,1,1]

Appearance182.material = Material183

Shape181.appearance = Appearance182
IndexedFaceSet184 = x3d.IndexedFaceSet()
IndexedFaceSet184.solid = False
IndexedFaceSet184.creaseAngle = 0.5
IndexedFaceSet184.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA185 = x3d.ColorRGBA()
ColorRGBA185.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet184.color = ColorRGBA185
Coordinate186 = x3d.Coordinate()
Coordinate186.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet184.coord = Coordinate186

Shape181.geometry = IndexedFaceSet184

HAnimSite179.children.append(Shape181)
Billboard187 = x3d.Billboard()
Billboard187.axisOfRotation = [0,0,0]
Shape188 = x3d.Shape()
Text189 = x3d.Text()
Text189.string = ["41"]
FontStyle190 = x3d.FontStyle()
FontStyle190.size = 0.035

Text189.fontStyle = FontStyle190

Shape188.geometry = Text189

Billboard187.children.append(Shape188)

HAnimSite179.children.append(Billboard187)

HAnimSegment142.children.append(HAnimSite179)
Shape191 = x3d.Shape()
LineSet192 = x3d.LineSet()
LineSet192.vertexCount = [2]
ColorRGBA193 = x3d.ColorRGBA()
ColorRGBA193.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet192.color = ColorRGBA193
Coordinate194 = x3d.Coordinate()
Coordinate194.point = [(0.095, 0.8266, -0.0183),(0, 0.826, 0.02)]

LineSet192.coord = Coordinate194

Shape191.geometry = LineSet192

HAnimSegment142.children.append(Shape191)

HAnimJoint141.children.append(HAnimSegment142)
HAnimJoint195 = x3d.HAnimJoint(DEF="hanim_l_knee")
HAnimJoint195.name = "l_knee"
HAnimJoint195.center = [0.0926,0.4088,-0.01944]
HAnimSegment196 = x3d.HAnimSegment(DEF="hanim_l_calf")
HAnimSegment196.name = "l_calf"
HAnimSite197 = x3d.HAnimSite(DEF="hanim_l_tibiale_pt")
HAnimSite197.name = "l_tibiale"
HAnimSite197.translation = [0.09,0.31,0.038]
TouchSensor198 = x3d.TouchSensor()
TouchSensor198.description = "HAnimSite 47 hanim_l_tibiale_pt"

HAnimSite197.children.append(TouchSensor198)
Shape199 = x3d.Shape()
Appearance200 = x3d.Appearance()
Material201 = x3d.Material()
Material201.diffuseColor = [1,1,1]

Appearance200.material = Material201

Shape199.appearance = Appearance200
IndexedFaceSet202 = x3d.IndexedFaceSet()
IndexedFaceSet202.solid = False
IndexedFaceSet202.creaseAngle = 0.5
IndexedFaceSet202.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA203 = x3d.ColorRGBA()
ColorRGBA203.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet202.color = ColorRGBA203
Coordinate204 = x3d.Coordinate()
Coordinate204.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet202.coord = Coordinate204

Shape199.geometry = IndexedFaceSet202

HAnimSite197.children.append(Shape199)
Billboard205 = x3d.Billboard()
Billboard205.axisOfRotation = [0,0,0]
Shape206 = x3d.Shape()
Text207 = x3d.Text()
Text207.string = ["47"]
FontStyle208 = x3d.FontStyle()
FontStyle208.size = 0.035

Text207.fontStyle = FontStyle208

Shape206.geometry = Text207

Billboard205.children.append(Shape206)

HAnimSite197.children.append(Billboard205)

HAnimSegment196.children.append(HAnimSite197)
HAnimSite209 = x3d.HAnimSite(DEF="hanim_l_medial_malleolus_pt")
HAnimSite209.name = "l_medial_malleolus"
HAnimSite209.translation = [0.061,0.095,-0.02]
TouchSensor210 = x3d.TouchSensor()
TouchSensor210.description = "HAnimSite 48 hanim_l_medial_malleolus_pt"

HAnimSite209.children.append(TouchSensor210)
Shape211 = x3d.Shape()
Appearance212 = x3d.Appearance()
Material213 = x3d.Material()
Material213.diffuseColor = [1,1,1]

Appearance212.material = Material213

Shape211.appearance = Appearance212
IndexedFaceSet214 = x3d.IndexedFaceSet()
IndexedFaceSet214.solid = False
IndexedFaceSet214.creaseAngle = 0.5
IndexedFaceSet214.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA215 = x3d.ColorRGBA()
ColorRGBA215.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet214.color = ColorRGBA215
Coordinate216 = x3d.Coordinate()
Coordinate216.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet214.coord = Coordinate216

Shape211.geometry = IndexedFaceSet214

HAnimSite209.children.append(Shape211)
Billboard217 = x3d.Billboard()
Billboard217.axisOfRotation = [0,0,0]
Shape218 = x3d.Shape()
Text219 = x3d.Text()
Text219.string = ["48"]
FontStyle220 = x3d.FontStyle()
FontStyle220.size = 0.035

Text219.fontStyle = FontStyle220

Shape218.geometry = Text219

Billboard217.children.append(Shape218)

HAnimSite209.children.append(Billboard217)

HAnimSegment196.children.append(HAnimSite209)
HAnimSite221 = x3d.HAnimSite(DEF="hanim_l_lateral_malleolus_pt")
HAnimSite221.name = "l_lateral_malleolus"
HAnimSite221.translation = [0.12,0.095,-0.02]
TouchSensor222 = x3d.TouchSensor()
TouchSensor222.description = "HAnimSite 49 hanim_l_lateral_malleolus_pt"

HAnimSite221.children.append(TouchSensor222)
Shape223 = x3d.Shape()
Appearance224 = x3d.Appearance()
Material225 = x3d.Material()
Material225.diffuseColor = [1,1,1]

Appearance224.material = Material225

Shape223.appearance = Appearance224
IndexedFaceSet226 = x3d.IndexedFaceSet()
IndexedFaceSet226.solid = False
IndexedFaceSet226.creaseAngle = 0.5
IndexedFaceSet226.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA227 = x3d.ColorRGBA()
ColorRGBA227.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet226.color = ColorRGBA227
Coordinate228 = x3d.Coordinate()
Coordinate228.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet226.coord = Coordinate228

Shape223.geometry = IndexedFaceSet226

HAnimSite221.children.append(Shape223)
Billboard229 = x3d.Billboard()
Billboard229.axisOfRotation = [0,0,0]
Shape230 = x3d.Shape()
Text231 = x3d.Text()
Text231.string = ["49"]
FontStyle232 = x3d.FontStyle()
FontStyle232.size = 0.035

Text231.fontStyle = FontStyle232

Shape230.geometry = Text231

Billboard229.children.append(Shape230)

HAnimSite221.children.append(Billboard229)

HAnimSegment196.children.append(HAnimSite221)
Shape233 = x3d.Shape()
LineSet234 = x3d.LineSet()
LineSet234.vertexCount = [2]
ColorRGBA235 = x3d.ColorRGBA()
ColorRGBA235.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet234.color = ColorRGBA235
Coordinate236 = x3d.Coordinate()
Coordinate236.point = [(0.0926, 0.4088, -0.01944),(0.095, 0.8266, -0.0183)]

LineSet234.coord = Coordinate236

Shape233.geometry = LineSet234

HAnimSegment196.children.append(Shape233)

HAnimJoint195.children.append(HAnimSegment196)
HAnimJoint237 = x3d.HAnimJoint(DEF="hanim_l_talocrural")
HAnimJoint237.name = "l_talocrural"
HAnimJoint237.center = [0.0888,0.09545,-0.01045]
HAnimSegment238 = x3d.HAnimSegment(DEF="hanim_l_talus")
HAnimSegment238.name = "l_talus"
HAnimSite239 = x3d.HAnimSite(DEF="hanim_l_sphyrion_pt")
HAnimSite239.name = "l_sphyrion"
HAnimSite239.translation = [0.054,0.065,-0.02]
TouchSensor240 = x3d.TouchSensor()
TouchSensor240.description = "HAnimSite 50 hanim_l_sphyrion_pt"

HAnimSite239.children.append(TouchSensor240)
Shape241 = x3d.Shape()
Appearance242 = x3d.Appearance()
Material243 = x3d.Material()
Material243.diffuseColor = [1,1,1]

Appearance242.material = Material243

Shape241.appearance = Appearance242
IndexedFaceSet244 = x3d.IndexedFaceSet()
IndexedFaceSet244.solid = False
IndexedFaceSet244.creaseAngle = 0.5
IndexedFaceSet244.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA245 = x3d.ColorRGBA()
ColorRGBA245.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet244.color = ColorRGBA245
Coordinate246 = x3d.Coordinate()
Coordinate246.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet244.coord = Coordinate246

Shape241.geometry = IndexedFaceSet244

HAnimSite239.children.append(Shape241)
Billboard247 = x3d.Billboard()
Billboard247.axisOfRotation = [0,0,0]
Shape248 = x3d.Shape()
Text249 = x3d.Text()
Text249.string = ["50"]
FontStyle250 = x3d.FontStyle()
FontStyle250.size = 0.035

Text249.fontStyle = FontStyle250

Shape248.geometry = Text249

Billboard247.children.append(Shape248)

HAnimSite239.children.append(Billboard247)

HAnimSegment238.children.append(HAnimSite239)
HAnimSite251 = x3d.HAnimSite(DEF="hanim_l_calcaneus_posterior_pt")
HAnimSite251.name = "l_calcaneus_posterior"
HAnimSite251.translation = [0.09,0.03,-0.06]
TouchSensor252 = x3d.TouchSensor()
TouchSensor252.description = "HAnimSite 58 hanim_l_calcaneus_posterior_pt"

HAnimSite251.children.append(TouchSensor252)
Shape253 = x3d.Shape()
Appearance254 = x3d.Appearance()
Material255 = x3d.Material()
Material255.diffuseColor = [1,1,1]

Appearance254.material = Material255

Shape253.appearance = Appearance254
IndexedFaceSet256 = x3d.IndexedFaceSet()
IndexedFaceSet256.solid = False
IndexedFaceSet256.creaseAngle = 0.5
IndexedFaceSet256.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA257 = x3d.ColorRGBA()
ColorRGBA257.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet256.color = ColorRGBA257
Coordinate258 = x3d.Coordinate()
Coordinate258.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet256.coord = Coordinate258

Shape253.geometry = IndexedFaceSet256

HAnimSite251.children.append(Shape253)
Billboard259 = x3d.Billboard()
Billboard259.axisOfRotation = [0,0,0]
Shape260 = x3d.Shape()
Text261 = x3d.Text()
Text261.string = ["58"]
FontStyle262 = x3d.FontStyle()
FontStyle262.size = 0.035

Text261.fontStyle = FontStyle262

Shape260.geometry = Text261

Billboard259.children.append(Shape260)

HAnimSite251.children.append(Billboard259)

HAnimSegment238.children.append(HAnimSite251)
Shape263 = x3d.Shape()
LineSet264 = x3d.LineSet()
LineSet264.vertexCount = [2]
ColorRGBA265 = x3d.ColorRGBA()
ColorRGBA265.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet264.color = ColorRGBA265
Coordinate266 = x3d.Coordinate()
Coordinate266.point = [(0.0888, 0.09545, -0.01045),(0.0926, 0.4088, -0.01944)]

LineSet264.coord = Coordinate266

Shape263.geometry = LineSet264

HAnimSegment238.children.append(Shape263)

HAnimJoint237.children.append(HAnimSegment238)
HAnimJoint267 = x3d.HAnimJoint(DEF="hanim_l_talocalcaneonavicular")
HAnimJoint267.name = "l_talocalcaneonavicular"
HAnimJoint267.center = [0.0783,0.0369,0.0049]
HAnimSegment268 = x3d.HAnimSegment(DEF="hanim_l_navicular")
HAnimSegment268.name = "l_navicular"
Shape269 = x3d.Shape()
LineSet270 = x3d.LineSet()
LineSet270.vertexCount = [2]
ColorRGBA271 = x3d.ColorRGBA()
ColorRGBA271.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet270.color = ColorRGBA271
Coordinate272 = x3d.Coordinate()
Coordinate272.point = [(0.0783, 0.0369, 0.0049),(0.0888, 0.09545, -0.01045)]

LineSet270.coord = Coordinate272

Shape269.geometry = LineSet270

HAnimSegment268.children.append(Shape269)

HAnimJoint267.children.append(HAnimSegment268)
HAnimJoint273 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_1")
HAnimJoint273.name = "l_cuneonavicular_1"
HAnimJoint273.center = [0.0674,0.0321,0.0184]
HAnimSegment274 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_1")
HAnimSegment274.name = "l_cuneiform_1"
Shape275 = x3d.Shape()
LineSet276 = x3d.LineSet()
LineSet276.vertexCount = [2]
ColorRGBA277 = x3d.ColorRGBA()
ColorRGBA277.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet276.color = ColorRGBA277
Coordinate278 = x3d.Coordinate()
Coordinate278.point = [(0.0674, 0.0321, 0.0184),(0.0783, 0.0369, 0.0049)]

LineSet276.coord = Coordinate278

Shape275.geometry = LineSet276

HAnimSegment274.children.append(Shape275)

HAnimJoint273.children.append(HAnimSegment274)
HAnimJoint279 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_1")
HAnimJoint279.name = "l_tarsometatarsal_1"
HAnimJoint279.center = [0.0646,0.02324,0.0442]
HAnimSegment280 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_1")
HAnimSegment280.name = "l_metatarsal_1"
Shape281 = x3d.Shape()
LineSet282 = x3d.LineSet()
LineSet282.vertexCount = [2]
ColorRGBA283 = x3d.ColorRGBA()
ColorRGBA283.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet282.color = ColorRGBA283
Coordinate284 = x3d.Coordinate()
Coordinate284.point = [(0.0646, 0.02324, 0.0442),(0.0674, 0.0321, 0.0184)]

LineSet282.coord = Coordinate284

Shape281.geometry = LineSet282

HAnimSegment280.children.append(Shape281)

HAnimJoint279.children.append(HAnimSegment280)
HAnimJoint285 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_1")
HAnimJoint285.name = "l_metatarsophalangeal_1"
HAnimJoint285.center = [0.0621,0.01442,0.0936]
HAnimSegment286 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_1")
HAnimSegment286.name = "l_tarsal_proximal_phalanx_1"
HAnimSite287 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_1_pt")
HAnimSite287.name = "l_metatarsal_phalanx_1"
HAnimSite287.translation = [0.062,0.012,0.1]
TouchSensor288 = x3d.TouchSensor()
TouchSensor288.description = "HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt"

HAnimSite287.children.append(TouchSensor288)
Shape289 = x3d.Shape()
Appearance290 = x3d.Appearance()
Material291 = x3d.Material()
Material291.diffuseColor = [1,1,1]

Appearance290.material = Material291

Shape289.appearance = Appearance290
IndexedFaceSet292 = x3d.IndexedFaceSet()
IndexedFaceSet292.solid = False
IndexedFaceSet292.creaseAngle = 0.5
IndexedFaceSet292.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA293 = x3d.ColorRGBA()
ColorRGBA293.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet292.color = ColorRGBA293
Coordinate294 = x3d.Coordinate()
Coordinate294.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet292.coord = Coordinate294

Shape289.geometry = IndexedFaceSet292

HAnimSite287.children.append(Shape289)
Billboard295 = x3d.Billboard()
Billboard295.axisOfRotation = [0,0,0]
Shape296 = x3d.Shape()
Text297 = x3d.Text()
Text297.string = ["55"]
FontStyle298 = x3d.FontStyle()
FontStyle298.size = 0.035

Text297.fontStyle = FontStyle298

Shape296.geometry = Text297

Billboard295.children.append(Shape296)

HAnimSite287.children.append(Billboard295)

HAnimSegment286.children.append(HAnimSite287)
Shape299 = x3d.Shape()
LineSet300 = x3d.LineSet()
LineSet300.vertexCount = [2]
ColorRGBA301 = x3d.ColorRGBA()
ColorRGBA301.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet300.color = ColorRGBA301
Coordinate302 = x3d.Coordinate()
Coordinate302.point = [(0.0621, 0.01442, 0.0936),(0.0646, 0.02324, 0.0442)]

LineSet300.coord = Coordinate302

Shape299.geometry = LineSet300

HAnimSegment286.children.append(Shape299)

HAnimJoint285.children.append(HAnimSegment286)
HAnimJoint303 = x3d.HAnimJoint(DEF="hanim_l_tarsal_interphalangeal_1")
HAnimJoint303.name = "l_tarsal_interphalangeal_1"
HAnimJoint303.center = [0.062,0.012,0.115]
HAnimSegment304 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_1")
HAnimSegment304.name = "l_tarsal_distal_phalanx_1"
HAnimSite305 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_1_tip")
HAnimSite305.name = "l_tarsal_distal_phalanx_1"
HAnimSite305.translation = [0.062,0.012,0.134]
TouchSensor306 = x3d.TouchSensor()
TouchSensor306.description = "HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip"

HAnimSite305.children.append(TouchSensor306)
Shape307 = x3d.Shape()
Appearance308 = x3d.Appearance()
Material309 = x3d.Material()
Material309.diffuseColor = [1,1,1]

Appearance308.material = Material309

Shape307.appearance = Appearance308
IndexedFaceSet310 = x3d.IndexedFaceSet()
IndexedFaceSet310.solid = False
IndexedFaceSet310.creaseAngle = 0.5
IndexedFaceSet310.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA311 = x3d.ColorRGBA()
ColorRGBA311.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet310.color = ColorRGBA311
Coordinate312 = x3d.Coordinate()
Coordinate312.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet310.coord = Coordinate312

Shape307.geometry = IndexedFaceSet310

HAnimSite305.children.append(Shape307)
Billboard313 = x3d.Billboard()
Billboard313.axisOfRotation = [0,0,0]
Shape314 = x3d.Shape()
Text315 = x3d.Text()
Text315.string = ["111"]
FontStyle316 = x3d.FontStyle()
FontStyle316.size = 0.035

Text315.fontStyle = FontStyle316

Shape314.geometry = Text315

Billboard313.children.append(Shape314)

HAnimSite305.children.append(Billboard313)

HAnimSegment304.children.append(HAnimSite305)
Shape317 = x3d.Shape()
LineSet318 = x3d.LineSet()
LineSet318.vertexCount = [2]
ColorRGBA319 = x3d.ColorRGBA()
ColorRGBA319.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet318.color = ColorRGBA319
Coordinate320 = x3d.Coordinate()
Coordinate320.point = [(0.062, 0.012, 0.115),(0.0621, 0.01442, 0.0936)]

LineSet318.coord = Coordinate320

Shape317.geometry = LineSet318

HAnimSegment304.children.append(Shape317)

HAnimJoint303.children.append(HAnimSegment304)

HAnimJoint285.children.append(HAnimJoint303)

HAnimJoint279.children.append(HAnimJoint285)

HAnimJoint273.children.append(HAnimJoint279)

HAnimJoint267.children.append(HAnimJoint273)
HAnimJoint321 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_2")
HAnimJoint321.name = "l_cuneonavicular_2"
HAnimJoint321.center = [0.0814,0.0335,0.02143]
HAnimSegment322 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_2")
HAnimSegment322.name = "l_cuneiform_2"
Shape323 = x3d.Shape()
LineSet324 = x3d.LineSet()
LineSet324.vertexCount = [2]
ColorRGBA325 = x3d.ColorRGBA()
ColorRGBA325.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet324.color = ColorRGBA325
Coordinate326 = x3d.Coordinate()
Coordinate326.point = [(0.0814, 0.0335, 0.02143),(0.0783, 0.0369, 0.0049)]

LineSet324.coord = Coordinate326

Shape323.geometry = LineSet324

HAnimSegment322.children.append(Shape323)

HAnimJoint321.children.append(HAnimSegment322)
HAnimJoint327 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_2")
HAnimJoint327.name = "l_tarsometatarsal_2"
HAnimJoint327.center = [0.0802,0.0261,0.0411]
HAnimSegment328 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_2")
HAnimSegment328.name = "l_metatarsal_2"
Shape329 = x3d.Shape()
LineSet330 = x3d.LineSet()
LineSet330.vertexCount = [2]
ColorRGBA331 = x3d.ColorRGBA()
ColorRGBA331.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet330.color = ColorRGBA331
Coordinate332 = x3d.Coordinate()
Coordinate332.point = [(0.0802, 0.0261, 0.0411),(0.0814, 0.0335, 0.02143)]

LineSet330.coord = Coordinate332

Shape329.geometry = LineSet330

HAnimSegment328.children.append(Shape329)

HAnimJoint327.children.append(HAnimSegment328)
HAnimJoint333 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint333.name = "l_metatarsophalangeal_2"
HAnimJoint333.center = [0.0825,0.01497,0.09783]
HAnimSegment334 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_2")
HAnimSegment334.name = "l_tarsal_proximal_phalanx_2"
Shape335 = x3d.Shape()
LineSet336 = x3d.LineSet()
LineSet336.vertexCount = [2]
ColorRGBA337 = x3d.ColorRGBA()
ColorRGBA337.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet336.color = ColorRGBA337
Coordinate338 = x3d.Coordinate()
Coordinate338.point = [(0.0825, 0.01497, 0.09783),(0.0802, 0.0261, 0.0411)]

LineSet336.coord = Coordinate338

Shape335.geometry = LineSet336

HAnimSegment334.children.append(Shape335)

HAnimJoint333.children.append(HAnimSegment334)
HAnimJoint339 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint339.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint339.center = [0.0843,0.01265,0.114]
HAnimSegment340 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_2")
HAnimSegment340.name = "l_tarsal_middle_phalanx_2"
Shape341 = x3d.Shape()
LineSet342 = x3d.LineSet()
LineSet342.vertexCount = [2]
ColorRGBA343 = x3d.ColorRGBA()
ColorRGBA343.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet342.color = ColorRGBA343
Coordinate344 = x3d.Coordinate()
Coordinate344.point = [(0.0843, 0.01265, 0.114),(0.0825, 0.01497, 0.09783)]

LineSet342.coord = Coordinate344

Shape341.geometry = LineSet342

HAnimSegment340.children.append(Shape341)

HAnimJoint339.children.append(HAnimSegment340)
HAnimJoint345 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint345.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint345.center = [0.0843,0.00982,0.123435]
HAnimSegment346 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_2")
HAnimSegment346.name = "l_tarsal_distal_phalanx_2"
HAnimSite347 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite347.name = "l_tarsal_distal_phalanx_2"
HAnimSite347.translation = [0.08,0.016,0.14]
TouchSensor348 = x3d.TouchSensor()
TouchSensor348.description = "HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip"

HAnimSite347.children.append(TouchSensor348)
Shape349 = x3d.Shape()
Appearance350 = x3d.Appearance()
Material351 = x3d.Material()
Material351.diffuseColor = [1,1,1]

Appearance350.material = Material351

Shape349.appearance = Appearance350
IndexedFaceSet352 = x3d.IndexedFaceSet()
IndexedFaceSet352.solid = False
IndexedFaceSet352.creaseAngle = 0.5
IndexedFaceSet352.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA353 = x3d.ColorRGBA()
ColorRGBA353.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet352.color = ColorRGBA353
Coordinate354 = x3d.Coordinate()
Coordinate354.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet352.coord = Coordinate354

Shape349.geometry = IndexedFaceSet352

HAnimSite347.children.append(Shape349)
Billboard355 = x3d.Billboard()
Billboard355.axisOfRotation = [0,0,0]
Shape356 = x3d.Shape()
Text357 = x3d.Text()
Text357.string = ["112"]
FontStyle358 = x3d.FontStyle()
FontStyle358.size = 0.035

Text357.fontStyle = FontStyle358

Shape356.geometry = Text357

Billboard355.children.append(Shape356)

HAnimSite347.children.append(Billboard355)

HAnimSegment346.children.append(HAnimSite347)
Shape359 = x3d.Shape()
LineSet360 = x3d.LineSet()
LineSet360.vertexCount = [2]
ColorRGBA361 = x3d.ColorRGBA()
ColorRGBA361.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet360.color = ColorRGBA361
Coordinate362 = x3d.Coordinate()
Coordinate362.point = [(0.0843, 0.00982, 0.123435),(0.0843, 0.01265, 0.114)]

LineSet360.coord = Coordinate362

Shape359.geometry = LineSet360

HAnimSegment346.children.append(Shape359)

HAnimJoint345.children.append(HAnimSegment346)

HAnimJoint339.children.append(HAnimJoint345)

HAnimJoint333.children.append(HAnimJoint339)

HAnimJoint327.children.append(HAnimJoint333)

HAnimJoint321.children.append(HAnimJoint327)

HAnimJoint267.children.append(HAnimJoint321)
HAnimJoint363 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_3")
HAnimJoint363.name = "l_cuneonavicular_3"
HAnimJoint363.center = [0.09297,0.0334,0.01982]
HAnimSegment364 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_3")
HAnimSegment364.name = "l_cuneiform_3"
Shape365 = x3d.Shape()
LineSet366 = x3d.LineSet()
LineSet366.vertexCount = [2]
ColorRGBA367 = x3d.ColorRGBA()
ColorRGBA367.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet366.color = ColorRGBA367
Coordinate368 = x3d.Coordinate()
Coordinate368.point = [(0.09297, 0.0334, 0.01982),(0.0783, 0.0369, 0.0049)]

LineSet366.coord = Coordinate368

Shape365.geometry = LineSet366

HAnimSegment364.children.append(Shape365)

HAnimJoint363.children.append(HAnimSegment364)
HAnimJoint369 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_3")
HAnimJoint369.name = "l_tarsometatarsal_3"
HAnimJoint369.center = [0.09459,0.0261,0.0394]
HAnimSegment370 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_3")
HAnimSegment370.name = "l_metatarsal_3"
Shape371 = x3d.Shape()
LineSet372 = x3d.LineSet()
LineSet372.vertexCount = [2]
ColorRGBA373 = x3d.ColorRGBA()
ColorRGBA373.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet372.color = ColorRGBA373
Coordinate374 = x3d.Coordinate()
Coordinate374.point = [(0.09459, 0.0261, 0.0394),(0.09297, 0.0334, 0.01982)]

LineSet372.coord = Coordinate374

Shape371.geometry = LineSet372

HAnimSegment370.children.append(Shape371)

HAnimJoint369.children.append(HAnimSegment370)
HAnimJoint375 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_3")
HAnimJoint375.name = "l_metatarsophalangeal_3"
HAnimJoint375.center = [0.0965,0.01505,0.0954]
HAnimSegment376 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_3")
HAnimSegment376.name = "l_tarsal_proximal_phalanx_3"
Shape377 = x3d.Shape()
LineSet378 = x3d.LineSet()
LineSet378.vertexCount = [2]
ColorRGBA379 = x3d.ColorRGBA()
ColorRGBA379.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet378.color = ColorRGBA379
Coordinate380 = x3d.Coordinate()
Coordinate380.point = [(0.0965, 0.01505, 0.0954),(0.09459, 0.0261, 0.0394)]

LineSet378.coord = Coordinate380

Shape377.geometry = LineSet378

HAnimSegment376.children.append(Shape377)

HAnimJoint375.children.append(HAnimSegment376)
HAnimJoint381 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint381.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint381.center = [0.09886,0.01192,0.11047]
HAnimSegment382 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_3")
HAnimSegment382.name = "l_tarsal_middle_phalanx_3"
Shape383 = x3d.Shape()
LineSet384 = x3d.LineSet()
LineSet384.vertexCount = [2]
ColorRGBA385 = x3d.ColorRGBA()
ColorRGBA385.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet384.color = ColorRGBA385
Coordinate386 = x3d.Coordinate()
Coordinate386.point = [(0.09886, 0.01192, 0.11047),(0.0965, 0.01505, 0.0954)]

LineSet384.coord = Coordinate386

Shape383.geometry = LineSet384

HAnimSegment382.children.append(Shape383)

HAnimJoint381.children.append(HAnimSegment382)
HAnimJoint387 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint387.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint387.center = [0.1004,0.00983,0.1197]
HAnimSegment388 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_3")
HAnimSegment388.name = "l_tarsal_distal_phalanx_3"
HAnimSite389 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_3_tip")
HAnimSite389.name = "l_tarsal_distal_phalanx_3"
HAnimSite389.translation = [0.1,0.016,0.14]
TouchSensor390 = x3d.TouchSensor()
TouchSensor390.description = "HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip"

HAnimSite389.children.append(TouchSensor390)
Shape391 = x3d.Shape()
Appearance392 = x3d.Appearance()
Material393 = x3d.Material()
Material393.diffuseColor = [1,1,1]

Appearance392.material = Material393

Shape391.appearance = Appearance392
IndexedFaceSet394 = x3d.IndexedFaceSet()
IndexedFaceSet394.solid = False
IndexedFaceSet394.creaseAngle = 0.5
IndexedFaceSet394.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA395 = x3d.ColorRGBA()
ColorRGBA395.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet394.color = ColorRGBA395
Coordinate396 = x3d.Coordinate()
Coordinate396.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet394.coord = Coordinate396

Shape391.geometry = IndexedFaceSet394

HAnimSite389.children.append(Shape391)
Billboard397 = x3d.Billboard()
Billboard397.axisOfRotation = [0,0,0]
Shape398 = x3d.Shape()
Text399 = x3d.Text()
Text399.string = ["113"]
FontStyle400 = x3d.FontStyle()
FontStyle400.size = 0.035

Text399.fontStyle = FontStyle400

Shape398.geometry = Text399

Billboard397.children.append(Shape398)

HAnimSite389.children.append(Billboard397)

HAnimSegment388.children.append(HAnimSite389)
Shape401 = x3d.Shape()
LineSet402 = x3d.LineSet()
LineSet402.vertexCount = [2]
ColorRGBA403 = x3d.ColorRGBA()
ColorRGBA403.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet402.color = ColorRGBA403
Coordinate404 = x3d.Coordinate()
Coordinate404.point = [(0.1004, 0.00983, 0.1197),(0.09886, 0.01192, 0.11047)]

LineSet402.coord = Coordinate404

Shape401.geometry = LineSet402

HAnimSegment388.children.append(Shape401)

HAnimJoint387.children.append(HAnimSegment388)

HAnimJoint381.children.append(HAnimJoint387)

HAnimJoint375.children.append(HAnimJoint381)

HAnimJoint369.children.append(HAnimJoint375)

HAnimJoint363.children.append(HAnimJoint369)

HAnimJoint267.children.append(HAnimJoint363)

HAnimJoint237.children.append(HAnimJoint267)
HAnimJoint405 = x3d.HAnimJoint(DEF="hanim_l_calcaneocuboid")
HAnimJoint405.name = "l_calcaneocuboid"
HAnimJoint405.center = [0.0891,0.05798,-0.0259]
HAnimSegment406 = x3d.HAnimSegment(DEF="hanim_l_calcaneus")
HAnimSegment406.name = "l_calcaneus"
Shape407 = x3d.Shape()
LineSet408 = x3d.LineSet()
LineSet408.vertexCount = [2]
ColorRGBA409 = x3d.ColorRGBA()
ColorRGBA409.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet408.color = ColorRGBA409
Coordinate410 = x3d.Coordinate()
Coordinate410.point = [(0.0891, 0.05798, -0.0259),(0.0888, 0.09545, -0.01045)]

LineSet408.coord = Coordinate410

Shape407.geometry = LineSet408

HAnimSegment406.children.append(Shape407)

HAnimJoint405.children.append(HAnimSegment406)
HAnimJoint411 = x3d.HAnimJoint(DEF="hanim_l_transversetarsal")
HAnimJoint411.name = "l_transversetarsal"
HAnimJoint411.center = [0.11063,0.03528,0.0021]
HAnimSegment412 = x3d.HAnimSegment(DEF="hanim_l_cuboid")
HAnimSegment412.name = "l_cuboid"
Shape413 = x3d.Shape()
LineSet414 = x3d.LineSet()
LineSet414.vertexCount = [2]
ColorRGBA415 = x3d.ColorRGBA()
ColorRGBA415.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet414.color = ColorRGBA415
Coordinate416 = x3d.Coordinate()
Coordinate416.point = [(0.11063, 0.03528, 0.0021),(0.0891, 0.05798, -0.0259)]

LineSet414.coord = Coordinate416

Shape413.geometry = LineSet414

HAnimSegment412.children.append(Shape413)

HAnimJoint411.children.append(HAnimSegment412)
HAnimJoint417 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_4")
HAnimJoint417.name = "l_tarsometatarsal_4"
HAnimJoint417.center = [0.10649,0.02454,0.03843]
HAnimSegment418 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_4")
HAnimSegment418.name = "l_metatarsal_4"
Shape419 = x3d.Shape()
LineSet420 = x3d.LineSet()
LineSet420.vertexCount = [2]
ColorRGBA421 = x3d.ColorRGBA()
ColorRGBA421.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet420.color = ColorRGBA421
Coordinate422 = x3d.Coordinate()
Coordinate422.point = [(0.10649, 0.02454, 0.03843),(0.11063, 0.03528, 0.0021)]

LineSet420.coord = Coordinate422

Shape419.geometry = LineSet420

HAnimSegment418.children.append(Shape419)

HAnimJoint417.children.append(HAnimSegment418)
HAnimJoint423 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_4")
HAnimJoint423.name = "l_metatarsophalangeal_4"
HAnimJoint423.center = [0.109867,0.01435,0.09117]
HAnimSegment424 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_4")
HAnimSegment424.name = "l_tarsal_proximal_phalanx_4"
Shape425 = x3d.Shape()
LineSet426 = x3d.LineSet()
LineSet426.vertexCount = [2]
ColorRGBA427 = x3d.ColorRGBA()
ColorRGBA427.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet426.color = ColorRGBA427
Coordinate428 = x3d.Coordinate()
Coordinate428.point = [(0.109867, 0.01435, 0.09117),(0.10649, 0.02454, 0.03843)]

LineSet426.coord = Coordinate428

Shape425.geometry = LineSet426

HAnimSegment424.children.append(Shape425)

HAnimJoint423.children.append(HAnimSegment424)
HAnimJoint429 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint429.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint429.center = [0.11416,0.01224,0.10631]
HAnimSegment430 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_4")
HAnimSegment430.name = "l_tarsal_middle_phalanx_4"
Shape431 = x3d.Shape()
LineSet432 = x3d.LineSet()
LineSet432.vertexCount = [2]
ColorRGBA433 = x3d.ColorRGBA()
ColorRGBA433.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet432.color = ColorRGBA433
Coordinate434 = x3d.Coordinate()
Coordinate434.point = [(0.11416, 0.01224, 0.10631),(0.109867, 0.01435, 0.09117)]

LineSet432.coord = Coordinate434

Shape431.geometry = LineSet432

HAnimSegment430.children.append(Shape431)

HAnimJoint429.children.append(HAnimSegment430)
HAnimJoint435 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint435.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint435.center = [0.11567,0.00936,0.11369]
HAnimSegment436 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_4")
HAnimSegment436.name = "l_tarsal_distal_phalanx_4"
HAnimSite437 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_4_tip")
HAnimSite437.name = "l_tarsal_distal_phalanx_4"
HAnimSite437.translation = [0.115,0.016,0.13]
TouchSensor438 = x3d.TouchSensor()
TouchSensor438.description = "HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip"

HAnimSite437.children.append(TouchSensor438)
Shape439 = x3d.Shape()
Appearance440 = x3d.Appearance()
Material441 = x3d.Material()
Material441.diffuseColor = [1,1,1]

Appearance440.material = Material441

Shape439.appearance = Appearance440
IndexedFaceSet442 = x3d.IndexedFaceSet()
IndexedFaceSet442.solid = False
IndexedFaceSet442.creaseAngle = 0.5
IndexedFaceSet442.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA443 = x3d.ColorRGBA()
ColorRGBA443.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet442.color = ColorRGBA443
Coordinate444 = x3d.Coordinate()
Coordinate444.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet442.coord = Coordinate444

Shape439.geometry = IndexedFaceSet442

HAnimSite437.children.append(Shape439)
Billboard445 = x3d.Billboard()
Billboard445.axisOfRotation = [0,0,0]
Shape446 = x3d.Shape()
Text447 = x3d.Text()
Text447.string = ["114"]
FontStyle448 = x3d.FontStyle()
FontStyle448.size = 0.035

Text447.fontStyle = FontStyle448

Shape446.geometry = Text447

Billboard445.children.append(Shape446)

HAnimSite437.children.append(Billboard445)

HAnimSegment436.children.append(HAnimSite437)
Shape449 = x3d.Shape()
LineSet450 = x3d.LineSet()
LineSet450.vertexCount = [2]
ColorRGBA451 = x3d.ColorRGBA()
ColorRGBA451.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet450.color = ColorRGBA451
Coordinate452 = x3d.Coordinate()
Coordinate452.point = [(0.11567, 0.00936, 0.11369),(0.11416, 0.01224, 0.10631)]

LineSet450.coord = Coordinate452

Shape449.geometry = LineSet450

HAnimSegment436.children.append(Shape449)

HAnimJoint435.children.append(HAnimSegment436)

HAnimJoint429.children.append(HAnimJoint435)

HAnimJoint423.children.append(HAnimJoint429)

HAnimJoint417.children.append(HAnimJoint423)

HAnimJoint411.children.append(HAnimJoint417)
HAnimJoint453 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_5")
HAnimJoint453.name = "l_tarsometatarsal_5"
HAnimJoint453.center = [0.1208,0.02094,0.03474]
HAnimSegment454 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_5")
HAnimSegment454.name = "l_metatarsal_5"
Shape455 = x3d.Shape()
LineSet456 = x3d.LineSet()
LineSet456.vertexCount = [2]
ColorRGBA457 = x3d.ColorRGBA()
ColorRGBA457.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet456.color = ColorRGBA457
Coordinate458 = x3d.Coordinate()
Coordinate458.point = [(0.1208, 0.02094, 0.03474),(0.11063, 0.03528, 0.0021)]

LineSet456.coord = Coordinate458

Shape455.geometry = LineSet456

HAnimSegment454.children.append(Shape455)

HAnimJoint453.children.append(HAnimSegment454)
HAnimJoint459 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_5")
HAnimJoint459.name = "l_metatarsophalangeal_5"
HAnimJoint459.center = [0.124065,0.01367,0.08656]
HAnimSegment460 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_5")
HAnimSegment460.name = "l_tarsal_proximal_phalanx_5"
Shape461 = x3d.Shape()
LineSet462 = x3d.LineSet()
LineSet462.vertexCount = [2]
ColorRGBA463 = x3d.ColorRGBA()
ColorRGBA463.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet462.color = ColorRGBA463
Coordinate464 = x3d.Coordinate()
Coordinate464.point = [(0.124065, 0.01367, 0.08656),(0.1208, 0.02094, 0.03474)]

LineSet462.coord = Coordinate464

Shape461.geometry = LineSet462

HAnimSegment460.children.append(Shape461)

HAnimJoint459.children.append(HAnimSegment460)
HAnimJoint465 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint465.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint465.center = [0.12638,0.01086,0.09414]
HAnimSegment466 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_5")
HAnimSegment466.name = "l_tarsal_middle_phalanx_5"
HAnimSite467 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_5_pt")
HAnimSite467.name = "l_metatarsal_phalanx_5"
HAnimSite467.translation = [0.12,0.02,0.04]
TouchSensor468 = x3d.TouchSensor()
TouchSensor468.description = "HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt"

HAnimSite467.children.append(TouchSensor468)
Shape469 = x3d.Shape()
Appearance470 = x3d.Appearance()
Material471 = x3d.Material()
Material471.diffuseColor = [1,1,1]

Appearance470.material = Material471

Shape469.appearance = Appearance470
IndexedFaceSet472 = x3d.IndexedFaceSet()
IndexedFaceSet472.solid = False
IndexedFaceSet472.creaseAngle = 0.5
IndexedFaceSet472.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA473 = x3d.ColorRGBA()
ColorRGBA473.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet472.color = ColorRGBA473
Coordinate474 = x3d.Coordinate()
Coordinate474.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet472.coord = Coordinate474

Shape469.geometry = IndexedFaceSet472

HAnimSite467.children.append(Shape469)
Billboard475 = x3d.Billboard()
Billboard475.axisOfRotation = [0,0,0]
Shape476 = x3d.Shape()
Text477 = x3d.Text()
Text477.string = ["56"]
FontStyle478 = x3d.FontStyle()
FontStyle478.size = 0.035

Text477.fontStyle = FontStyle478

Shape476.geometry = Text477

Billboard475.children.append(Shape476)

HAnimSite467.children.append(Billboard475)

HAnimSegment466.children.append(HAnimSite467)
Shape479 = x3d.Shape()
LineSet480 = x3d.LineSet()
LineSet480.vertexCount = [2]
ColorRGBA481 = x3d.ColorRGBA()
ColorRGBA481.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet480.color = ColorRGBA481
Coordinate482 = x3d.Coordinate()
Coordinate482.point = [(0.12638, 0.01086, 0.09414),(0.124065, 0.01367, 0.08656)]

LineSet480.coord = Coordinate482

Shape479.geometry = LineSet480

HAnimSegment466.children.append(Shape479)

HAnimJoint465.children.append(HAnimSegment466)
HAnimJoint483 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint483.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint483.center = [0.12728,0.00856,0.10188]
HAnimSegment484 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_5")
HAnimSegment484.name = "l_tarsal_distal_phalanx_5"
HAnimSite485 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_5_tip")
HAnimSite485.name = "l_tarsal_distal_phalanx_5"
HAnimSite485.translation = [0.125,0.016,0.115]
TouchSensor486 = x3d.TouchSensor()
TouchSensor486.description = "HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip"

HAnimSite485.children.append(TouchSensor486)
Shape487 = x3d.Shape()
Appearance488 = x3d.Appearance()
Material489 = x3d.Material()
Material489.diffuseColor = [1,1,1]

Appearance488.material = Material489

Shape487.appearance = Appearance488
IndexedFaceSet490 = x3d.IndexedFaceSet()
IndexedFaceSet490.solid = False
IndexedFaceSet490.creaseAngle = 0.5
IndexedFaceSet490.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA491 = x3d.ColorRGBA()
ColorRGBA491.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet490.color = ColorRGBA491
Coordinate492 = x3d.Coordinate()
Coordinate492.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet490.coord = Coordinate492

Shape487.geometry = IndexedFaceSet490

HAnimSite485.children.append(Shape487)
Billboard493 = x3d.Billboard()
Billboard493.axisOfRotation = [0,0,0]
Shape494 = x3d.Shape()
Text495 = x3d.Text()
Text495.string = ["115"]
FontStyle496 = x3d.FontStyle()
FontStyle496.size = 0.035

Text495.fontStyle = FontStyle496

Shape494.geometry = Text495

Billboard493.children.append(Shape494)

HAnimSite485.children.append(Billboard493)

HAnimSegment484.children.append(HAnimSite485)
Shape497 = x3d.Shape()
LineSet498 = x3d.LineSet()
LineSet498.vertexCount = [2]
ColorRGBA499 = x3d.ColorRGBA()
ColorRGBA499.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet498.color = ColorRGBA499
Coordinate500 = x3d.Coordinate()
Coordinate500.point = [(0.12728, 0.00856, 0.10188),(0.12638, 0.01086, 0.09414)]

LineSet498.coord = Coordinate500

Shape497.geometry = LineSet498

HAnimSegment484.children.append(Shape497)

HAnimJoint483.children.append(HAnimSegment484)

HAnimJoint465.children.append(HAnimJoint483)

HAnimJoint459.children.append(HAnimJoint465)

HAnimJoint453.children.append(HAnimJoint459)

HAnimJoint411.children.append(HAnimJoint453)

HAnimJoint405.children.append(HAnimJoint411)

HAnimJoint237.children.append(HAnimJoint405)

HAnimJoint195.children.append(HAnimJoint237)

HAnimJoint141.children.append(HAnimJoint195)

HAnimJoint15.children.append(HAnimJoint141)
HAnimJoint501 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint501.name = "r_hip"
HAnimJoint501.center = [-0.09466,0.82665,-0.01835]
HAnimSegment502 = x3d.HAnimSegment(DEF="hanim_r_thigh")
HAnimSegment502.name = "r_thigh"
HAnimSite503 = x3d.HAnimSite(DEF="hanim_r_knee_crease_pt")
HAnimSite503.name = "r_knee_crease"
HAnimSite503.translation = [-0.09,0.41,-0.056]
TouchSensor504 = x3d.TouchSensor()
TouchSensor504.description = "HAnimSite 91 hanim_r_knee_crease_pt"

HAnimSite503.children.append(TouchSensor504)
Shape505 = x3d.Shape()
Appearance506 = x3d.Appearance()
Material507 = x3d.Material()
Material507.diffuseColor = [1,1,1]

Appearance506.material = Material507

Shape505.appearance = Appearance506
IndexedFaceSet508 = x3d.IndexedFaceSet()
IndexedFaceSet508.solid = False
IndexedFaceSet508.creaseAngle = 0.5
IndexedFaceSet508.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA509 = x3d.ColorRGBA()
ColorRGBA509.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet508.color = ColorRGBA509
Coordinate510 = x3d.Coordinate()
Coordinate510.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet508.coord = Coordinate510

Shape505.geometry = IndexedFaceSet508

HAnimSite503.children.append(Shape505)
Billboard511 = x3d.Billboard()
Billboard511.axisOfRotation = [0,0,0]
Shape512 = x3d.Shape()
Text513 = x3d.Text()
Text513.string = ["91"]
FontStyle514 = x3d.FontStyle()
FontStyle514.size = 0.035

Text513.fontStyle = FontStyle514

Shape512.geometry = Text513

Billboard511.children.append(Shape512)

HAnimSite503.children.append(Billboard511)

HAnimSegment502.children.append(HAnimSite503)
HAnimSite515 = x3d.HAnimSite(DEF="hanim_r_femoral_medial_epicondyle_pt")
HAnimSite515.name = "r_femoral_medial_epicondyle"
HAnimSite515.translation = [-0.039,0.41,-0.01]
TouchSensor516 = x3d.TouchSensor()
TouchSensor516.description = "HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt"

HAnimSite515.children.append(TouchSensor516)
Shape517 = x3d.Shape()
Appearance518 = x3d.Appearance()
Material519 = x3d.Material()
Material519.diffuseColor = [1,1,1]

Appearance518.material = Material519

Shape517.appearance = Appearance518
IndexedFaceSet520 = x3d.IndexedFaceSet()
IndexedFaceSet520.solid = False
IndexedFaceSet520.creaseAngle = 0.5
IndexedFaceSet520.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA521 = x3d.ColorRGBA()
ColorRGBA521.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet520.color = ColorRGBA521
Coordinate522 = x3d.Coordinate()
Coordinate522.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet520.coord = Coordinate522

Shape517.geometry = IndexedFaceSet520

HAnimSite515.children.append(Shape517)
Billboard523 = x3d.Billboard()
Billboard523.axisOfRotation = [0,0,0]
Shape524 = x3d.Shape()
Text525 = x3d.Text()
Text525.string = ["44"]
FontStyle526 = x3d.FontStyle()
FontStyle526.size = 0.035

Text525.fontStyle = FontStyle526

Shape524.geometry = Text525

Billboard523.children.append(Shape524)

HAnimSite515.children.append(Billboard523)

HAnimSegment502.children.append(HAnimSite515)
HAnimSite527 = x3d.HAnimSite(DEF="hanim_r_femoral_lateral_epicondyle_pt")
HAnimSite527.name = "r_femoral_lateral_epicondyle"
HAnimSite527.translation = [-0.127,0.41,-0.01]
TouchSensor528 = x3d.TouchSensor()
TouchSensor528.description = "HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt"

HAnimSite527.children.append(TouchSensor528)
Shape529 = x3d.Shape()
Appearance530 = x3d.Appearance()
Material531 = x3d.Material()
Material531.diffuseColor = [1,1,1]

Appearance530.material = Material531

Shape529.appearance = Appearance530
IndexedFaceSet532 = x3d.IndexedFaceSet()
IndexedFaceSet532.solid = False
IndexedFaceSet532.creaseAngle = 0.5
IndexedFaceSet532.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA533 = x3d.ColorRGBA()
ColorRGBA533.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet532.color = ColorRGBA533
Coordinate534 = x3d.Coordinate()
Coordinate534.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet532.coord = Coordinate534

Shape529.geometry = IndexedFaceSet532

HAnimSite527.children.append(Shape529)
Billboard535 = x3d.Billboard()
Billboard535.axisOfRotation = [0,0,0]
Shape536 = x3d.Shape()
Text537 = x3d.Text()
Text537.string = ["43"]
FontStyle538 = x3d.FontStyle()
FontStyle538.size = 0.035

Text537.fontStyle = FontStyle538

Shape536.geometry = Text537

Billboard535.children.append(Shape536)

HAnimSite527.children.append(Billboard535)

HAnimSegment502.children.append(HAnimSite527)
HAnimSite539 = x3d.HAnimSite(DEF="hanim_r_suprapatella_pt")
HAnimSite539.name = "r_suprapatella"
HAnimSite539.translation = [-0.085,0.41,0.042]
TouchSensor540 = x3d.TouchSensor()
TouchSensor540.description = "HAnimSite 45 hanim_r_suprapatella_pt"

HAnimSite539.children.append(TouchSensor540)
Shape541 = x3d.Shape()
Appearance542 = x3d.Appearance()
Material543 = x3d.Material()
Material543.diffuseColor = [1,1,1]

Appearance542.material = Material543

Shape541.appearance = Appearance542
IndexedFaceSet544 = x3d.IndexedFaceSet()
IndexedFaceSet544.solid = False
IndexedFaceSet544.creaseAngle = 0.5
IndexedFaceSet544.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA545 = x3d.ColorRGBA()
ColorRGBA545.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet544.color = ColorRGBA545
Coordinate546 = x3d.Coordinate()
Coordinate546.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet544.coord = Coordinate546

Shape541.geometry = IndexedFaceSet544

HAnimSite539.children.append(Shape541)
Billboard547 = x3d.Billboard()
Billboard547.axisOfRotation = [0,0,0]
Shape548 = x3d.Shape()
Text549 = x3d.Text()
Text549.string = ["45"]
FontStyle550 = x3d.FontStyle()
FontStyle550.size = 0.035

Text549.fontStyle = FontStyle550

Shape548.geometry = Text549

Billboard547.children.append(Shape548)

HAnimSite539.children.append(Billboard547)

HAnimSegment502.children.append(HAnimSite539)
Shape551 = x3d.Shape()
LineSet552 = x3d.LineSet()
LineSet552.vertexCount = [2]
ColorRGBA553 = x3d.ColorRGBA()
ColorRGBA553.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet552.color = ColorRGBA553
Coordinate554 = x3d.Coordinate()
Coordinate554.point = [(-0.09466, 0.82665, -0.01835),(0, 0.826, 0.02)]

LineSet552.coord = Coordinate554

Shape551.geometry = LineSet552

HAnimSegment502.children.append(Shape551)

HAnimJoint501.children.append(HAnimSegment502)
HAnimJoint555 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint555.name = "r_knee"
HAnimJoint555.center = [-0.0926,0.408825,-0.01944]
HAnimSegment556 = x3d.HAnimSegment(DEF="hanim_r_calf")
HAnimSegment556.name = "r_calf"
HAnimSite557 = x3d.HAnimSite(DEF="hanim_r_tibiale_pt")
HAnimSite557.name = "r_tibiale"
HAnimSite557.translation = [-0.09,0.31,0.038]
TouchSensor558 = x3d.TouchSensor()
TouchSensor558.description = "HAnimSite 51 hanim_r_tibiale_pt"

HAnimSite557.children.append(TouchSensor558)
Shape559 = x3d.Shape()
Appearance560 = x3d.Appearance()
Material561 = x3d.Material()
Material561.diffuseColor = [1,1,1]

Appearance560.material = Material561

Shape559.appearance = Appearance560
IndexedFaceSet562 = x3d.IndexedFaceSet()
IndexedFaceSet562.solid = False
IndexedFaceSet562.creaseAngle = 0.5
IndexedFaceSet562.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA563 = x3d.ColorRGBA()
ColorRGBA563.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet562.color = ColorRGBA563
Coordinate564 = x3d.Coordinate()
Coordinate564.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet562.coord = Coordinate564

Shape559.geometry = IndexedFaceSet562

HAnimSite557.children.append(Shape559)
Billboard565 = x3d.Billboard()
Billboard565.axisOfRotation = [0,0,0]
Shape566 = x3d.Shape()
Text567 = x3d.Text()
Text567.string = ["51"]
FontStyle568 = x3d.FontStyle()
FontStyle568.size = 0.035

Text567.fontStyle = FontStyle568

Shape566.geometry = Text567

Billboard565.children.append(Shape566)

HAnimSite557.children.append(Billboard565)

HAnimSegment556.children.append(HAnimSite557)
HAnimSite569 = x3d.HAnimSite(DEF="hanim_r_medial_malleolus_pt")
HAnimSite569.name = "r_medial_malleolus"
HAnimSite569.translation = [-0.061,0.095,-0.02]
TouchSensor570 = x3d.TouchSensor()
TouchSensor570.description = "HAnimSite 52 hanim_r_medial_malleolus_pt"

HAnimSite569.children.append(TouchSensor570)
Shape571 = x3d.Shape()
Appearance572 = x3d.Appearance()
Material573 = x3d.Material()
Material573.diffuseColor = [1,1,1]

Appearance572.material = Material573

Shape571.appearance = Appearance572
IndexedFaceSet574 = x3d.IndexedFaceSet()
IndexedFaceSet574.solid = False
IndexedFaceSet574.creaseAngle = 0.5
IndexedFaceSet574.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA575 = x3d.ColorRGBA()
ColorRGBA575.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet574.color = ColorRGBA575
Coordinate576 = x3d.Coordinate()
Coordinate576.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet574.coord = Coordinate576

Shape571.geometry = IndexedFaceSet574

HAnimSite569.children.append(Shape571)
Billboard577 = x3d.Billboard()
Billboard577.axisOfRotation = [0,0,0]
Shape578 = x3d.Shape()
Text579 = x3d.Text()
Text579.string = ["52"]
FontStyle580 = x3d.FontStyle()
FontStyle580.size = 0.035

Text579.fontStyle = FontStyle580

Shape578.geometry = Text579

Billboard577.children.append(Shape578)

HAnimSite569.children.append(Billboard577)

HAnimSegment556.children.append(HAnimSite569)
HAnimSite581 = x3d.HAnimSite(DEF="hanim_r_lateral_malleolus_pt")
HAnimSite581.name = "r_lateral_malleolus"
HAnimSite581.translation = [-0.12,0.095,-0.02]
TouchSensor582 = x3d.TouchSensor()
TouchSensor582.description = "HAnimSite 53 hanim_r_lateral_malleolus_pt"

HAnimSite581.children.append(TouchSensor582)
Shape583 = x3d.Shape()
Appearance584 = x3d.Appearance()
Material585 = x3d.Material()
Material585.diffuseColor = [1,1,1]

Appearance584.material = Material585

Shape583.appearance = Appearance584
IndexedFaceSet586 = x3d.IndexedFaceSet()
IndexedFaceSet586.solid = False
IndexedFaceSet586.creaseAngle = 0.5
IndexedFaceSet586.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA587 = x3d.ColorRGBA()
ColorRGBA587.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet586.color = ColorRGBA587
Coordinate588 = x3d.Coordinate()
Coordinate588.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet586.coord = Coordinate588

Shape583.geometry = IndexedFaceSet586

HAnimSite581.children.append(Shape583)
Billboard589 = x3d.Billboard()
Billboard589.axisOfRotation = [0,0,0]
Shape590 = x3d.Shape()
Text591 = x3d.Text()
Text591.string = ["53"]
FontStyle592 = x3d.FontStyle()
FontStyle592.size = 0.035

Text591.fontStyle = FontStyle592

Shape590.geometry = Text591

Billboard589.children.append(Shape590)

HAnimSite581.children.append(Billboard589)

HAnimSegment556.children.append(HAnimSite581)
Shape593 = x3d.Shape()
LineSet594 = x3d.LineSet()
LineSet594.vertexCount = [2]
ColorRGBA595 = x3d.ColorRGBA()
ColorRGBA595.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet594.color = ColorRGBA595
Coordinate596 = x3d.Coordinate()
Coordinate596.point = [(-0.0926, 0.408825, -0.01944),(-0.09466, 0.82665, -0.01835)]

LineSet594.coord = Coordinate596

Shape593.geometry = LineSet594

HAnimSegment556.children.append(Shape593)

HAnimJoint555.children.append(HAnimSegment556)
HAnimJoint597 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint597.name = "r_talocrural"
HAnimJoint597.center = [-0.08845,0.09544,-0.01045]
HAnimSegment598 = x3d.HAnimSegment(DEF="hanim_r_talus")
HAnimSegment598.name = "r_talus"
HAnimSite599 = x3d.HAnimSite(DEF="hanim_r_sphyrion_pt")
HAnimSite599.name = "r_sphyrion"
HAnimSite599.translation = [-0.054,0.065,-0.02]
TouchSensor600 = x3d.TouchSensor()
TouchSensor600.description = "HAnimSite 54 hanim_r_sphyrion_pt"

HAnimSite599.children.append(TouchSensor600)
Shape601 = x3d.Shape()
Appearance602 = x3d.Appearance()
Material603 = x3d.Material()
Material603.diffuseColor = [1,1,1]

Appearance602.material = Material603

Shape601.appearance = Appearance602
IndexedFaceSet604 = x3d.IndexedFaceSet()
IndexedFaceSet604.solid = False
IndexedFaceSet604.creaseAngle = 0.5
IndexedFaceSet604.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA605 = x3d.ColorRGBA()
ColorRGBA605.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet604.color = ColorRGBA605
Coordinate606 = x3d.Coordinate()
Coordinate606.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet604.coord = Coordinate606

Shape601.geometry = IndexedFaceSet604

HAnimSite599.children.append(Shape601)
Billboard607 = x3d.Billboard()
Billboard607.axisOfRotation = [0,0,0]
Shape608 = x3d.Shape()
Text609 = x3d.Text()
Text609.string = ["54"]
FontStyle610 = x3d.FontStyle()
FontStyle610.size = 0.035

Text609.fontStyle = FontStyle610

Shape608.geometry = Text609

Billboard607.children.append(Shape608)

HAnimSite599.children.append(Billboard607)

HAnimSegment598.children.append(HAnimSite599)
HAnimSite611 = x3d.HAnimSite(DEF="hanim_r_calcaneus_posterior_pt")
HAnimSite611.name = "r_calcaneus_posterior"
HAnimSite611.translation = [-0.09,0.03,-0.06]
TouchSensor612 = x3d.TouchSensor()
TouchSensor612.description = "HAnimSite 62 hanim_r_calcaneus_posterior_pt"

HAnimSite611.children.append(TouchSensor612)
Shape613 = x3d.Shape()
Appearance614 = x3d.Appearance()
Material615 = x3d.Material()
Material615.diffuseColor = [1,1,1]

Appearance614.material = Material615

Shape613.appearance = Appearance614
IndexedFaceSet616 = x3d.IndexedFaceSet()
IndexedFaceSet616.solid = False
IndexedFaceSet616.creaseAngle = 0.5
IndexedFaceSet616.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA617 = x3d.ColorRGBA()
ColorRGBA617.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet616.color = ColorRGBA617
Coordinate618 = x3d.Coordinate()
Coordinate618.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet616.coord = Coordinate618

Shape613.geometry = IndexedFaceSet616

HAnimSite611.children.append(Shape613)
Billboard619 = x3d.Billboard()
Billboard619.axisOfRotation = [0,0,0]
Shape620 = x3d.Shape()
Text621 = x3d.Text()
Text621.string = ["62"]
FontStyle622 = x3d.FontStyle()
FontStyle622.size = 0.035

Text621.fontStyle = FontStyle622

Shape620.geometry = Text621

Billboard619.children.append(Shape620)

HAnimSite611.children.append(Billboard619)

HAnimSegment598.children.append(HAnimSite611)
Shape623 = x3d.Shape()
LineSet624 = x3d.LineSet()
LineSet624.vertexCount = [2]
ColorRGBA625 = x3d.ColorRGBA()
ColorRGBA625.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet624.color = ColorRGBA625
Coordinate626 = x3d.Coordinate()
Coordinate626.point = [(-0.08845, 0.09544, -0.01045),(-0.0926, 0.408825, -0.01944)]

LineSet624.coord = Coordinate626

Shape623.geometry = LineSet624

HAnimSegment598.children.append(Shape623)

HAnimJoint597.children.append(HAnimSegment598)
HAnimJoint627 = x3d.HAnimJoint(DEF="hanim_r_talocalcaneonavicular")
HAnimJoint627.name = "r_talocalcaneonavicular"
HAnimJoint627.center = [-0.07794,0.0369,0.00486]
HAnimSegment628 = x3d.HAnimSegment(DEF="hanim_r_navicular")
HAnimSegment628.name = "r_navicular"
Shape629 = x3d.Shape()
LineSet630 = x3d.LineSet()
LineSet630.vertexCount = [2]
ColorRGBA631 = x3d.ColorRGBA()
ColorRGBA631.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet630.color = ColorRGBA631
Coordinate632 = x3d.Coordinate()
Coordinate632.point = [(-0.07794, 0.0369, 0.00486),(-0.08845, 0.09544, -0.01045)]

LineSet630.coord = Coordinate632

Shape629.geometry = LineSet630

HAnimSegment628.children.append(Shape629)

HAnimJoint627.children.append(HAnimSegment628)
HAnimJoint633 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_1")
HAnimJoint633.name = "r_cuneonavicular_1"
HAnimJoint633.center = [-0.06698,0.032107,0.01839]
HAnimSegment634 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_1")
HAnimSegment634.name = "r_cuneiform_1"
Shape635 = x3d.Shape()
LineSet636 = x3d.LineSet()
LineSet636.vertexCount = [2]
ColorRGBA637 = x3d.ColorRGBA()
ColorRGBA637.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet636.color = ColorRGBA637
Coordinate638 = x3d.Coordinate()
Coordinate638.point = [(-0.06698, 0.032107, 0.01839),(-0.07794, 0.0369, 0.00486)]

LineSet636.coord = Coordinate638

Shape635.geometry = LineSet636

HAnimSegment634.children.append(Shape635)

HAnimJoint633.children.append(HAnimSegment634)
HAnimJoint639 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_1")
HAnimJoint639.name = "r_tarsometatarsal_1"
HAnimJoint639.center = [-0.064,0.02324,0.04419]
HAnimSegment640 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_1")
HAnimSegment640.name = "r_metatarsal_1"
Shape641 = x3d.Shape()
LineSet642 = x3d.LineSet()
LineSet642.vertexCount = [2]
ColorRGBA643 = x3d.ColorRGBA()
ColorRGBA643.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet642.color = ColorRGBA643
Coordinate644 = x3d.Coordinate()
Coordinate644.point = [(-0.064, 0.02324, 0.04419),(-0.06698, 0.032107, 0.01839)]

LineSet642.coord = Coordinate644

Shape641.geometry = LineSet642

HAnimSegment640.children.append(Shape641)

HAnimJoint639.children.append(HAnimSegment640)
HAnimJoint645 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_1")
HAnimJoint645.name = "r_metatarsophalangeal_1"
HAnimJoint645.center = [-0.06176,0.014425,0.09362]
HAnimSegment646 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_1")
HAnimSegment646.name = "r_tarsal_proximal_phalanx_1"
HAnimSite647 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_1_pt")
HAnimSite647.name = "r_metatarsal_phalanx_1"
HAnimSite647.translation = [-0.062,0.012,0.1]
TouchSensor648 = x3d.TouchSensor()
TouchSensor648.description = "HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt"

HAnimSite647.children.append(TouchSensor648)
Shape649 = x3d.Shape()
Appearance650 = x3d.Appearance()
Material651 = x3d.Material()
Material651.diffuseColor = [1,1,1]

Appearance650.material = Material651

Shape649.appearance = Appearance650
IndexedFaceSet652 = x3d.IndexedFaceSet()
IndexedFaceSet652.solid = False
IndexedFaceSet652.creaseAngle = 0.5
IndexedFaceSet652.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA653 = x3d.ColorRGBA()
ColorRGBA653.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet652.color = ColorRGBA653
Coordinate654 = x3d.Coordinate()
Coordinate654.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet652.coord = Coordinate654

Shape649.geometry = IndexedFaceSet652

HAnimSite647.children.append(Shape649)
Billboard655 = x3d.Billboard()
Billboard655.axisOfRotation = [0,0,0]
Shape656 = x3d.Shape()
Text657 = x3d.Text()
Text657.string = ["59"]
FontStyle658 = x3d.FontStyle()
FontStyle658.size = 0.035

Text657.fontStyle = FontStyle658

Shape656.geometry = Text657

Billboard655.children.append(Shape656)

HAnimSite647.children.append(Billboard655)

HAnimSegment646.children.append(HAnimSite647)
Shape659 = x3d.Shape()
LineSet660 = x3d.LineSet()
LineSet660.vertexCount = [2]
ColorRGBA661 = x3d.ColorRGBA()
ColorRGBA661.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet660.color = ColorRGBA661
Coordinate662 = x3d.Coordinate()
Coordinate662.point = [(-0.06176, 0.014425, 0.09362),(-0.064, 0.02324, 0.04419)]

LineSet660.coord = Coordinate662

Shape659.geometry = LineSet660

HAnimSegment646.children.append(Shape659)

HAnimJoint645.children.append(HAnimSegment646)
HAnimJoint663 = x3d.HAnimJoint(DEF="hanim_r_tarsal_interphalangeal_1")
HAnimJoint663.name = "r_tarsal_interphalangeal_1"
HAnimJoint663.center = [-0.06174,0.0121,0.1153]
HAnimSegment664 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_1")
HAnimSegment664.name = "r_tarsal_distal_phalanx_1"
HAnimSite665 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_1_tip")
HAnimSite665.name = "r_tarsal_distal_phalanx_1"
HAnimSite665.translation = [-0.06,0.012,0.14]
TouchSensor666 = x3d.TouchSensor()
TouchSensor666.description = "HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip"

HAnimSite665.children.append(TouchSensor666)
Shape667 = x3d.Shape()
Appearance668 = x3d.Appearance()
Material669 = x3d.Material()
Material669.diffuseColor = [1,1,1]

Appearance668.material = Material669

Shape667.appearance = Appearance668
IndexedFaceSet670 = x3d.IndexedFaceSet()
IndexedFaceSet670.solid = False
IndexedFaceSet670.creaseAngle = 0.5
IndexedFaceSet670.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA671 = x3d.ColorRGBA()
ColorRGBA671.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet670.color = ColorRGBA671
Coordinate672 = x3d.Coordinate()
Coordinate672.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet670.coord = Coordinate672

Shape667.geometry = IndexedFaceSet670

HAnimSite665.children.append(Shape667)
Billboard673 = x3d.Billboard()
Billboard673.axisOfRotation = [0,0,0]
Shape674 = x3d.Shape()
Text675 = x3d.Text()
Text675.string = ["116"]
FontStyle676 = x3d.FontStyle()
FontStyle676.size = 0.035

Text675.fontStyle = FontStyle676

Shape674.geometry = Text675

Billboard673.children.append(Shape674)

HAnimSite665.children.append(Billboard673)

HAnimSegment664.children.append(HAnimSite665)
Shape677 = x3d.Shape()
LineSet678 = x3d.LineSet()
LineSet678.vertexCount = [2]
ColorRGBA679 = x3d.ColorRGBA()
ColorRGBA679.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet678.color = ColorRGBA679
Coordinate680 = x3d.Coordinate()
Coordinate680.point = [(-0.06174, 0.0121, 0.1153),(-0.06176, 0.014425, 0.09362)]

LineSet678.coord = Coordinate680

Shape677.geometry = LineSet678

HAnimSegment664.children.append(Shape677)

HAnimJoint663.children.append(HAnimSegment664)

HAnimJoint645.children.append(HAnimJoint663)

HAnimJoint639.children.append(HAnimJoint645)

HAnimJoint633.children.append(HAnimJoint639)

HAnimJoint627.children.append(HAnimJoint633)
HAnimJoint681 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_2")
HAnimJoint681.name = "r_cuneonavicular_2"
HAnimJoint681.center = [-0.081,0.0335,0.02142]
HAnimSegment682 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_2")
HAnimSegment682.name = "r_cuneiform_2"
Shape683 = x3d.Shape()
LineSet684 = x3d.LineSet()
LineSet684.vertexCount = [2]
ColorRGBA685 = x3d.ColorRGBA()
ColorRGBA685.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet684.color = ColorRGBA685
Coordinate686 = x3d.Coordinate()
Coordinate686.point = [(-0.081, 0.0335, 0.02142),(-0.07794, 0.0369, 0.00486)]

LineSet684.coord = Coordinate686

Shape683.geometry = LineSet684

HAnimSegment682.children.append(Shape683)

HAnimJoint681.children.append(HAnimSegment682)
HAnimJoint687 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_2")
HAnimJoint687.name = "r_tarsometatarsal_2"
HAnimJoint687.center = [-0.07983,0.0261,0.04106]
HAnimSegment688 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_2")
HAnimSegment688.name = "r_metatarsal_2"
Shape689 = x3d.Shape()
LineSet690 = x3d.LineSet()
LineSet690.vertexCount = [2]
ColorRGBA691 = x3d.ColorRGBA()
ColorRGBA691.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet690.color = ColorRGBA691
Coordinate692 = x3d.Coordinate()
Coordinate692.point = [(-0.07983, 0.0261, 0.04106),(-0.081, 0.0335, 0.02142)]

LineSet690.coord = Coordinate692

Shape689.geometry = LineSet690

HAnimSegment688.children.append(Shape689)

HAnimJoint687.children.append(HAnimSegment688)
HAnimJoint693 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint693.name = "r_metatarsophalangeal_2"
HAnimJoint693.center = [-0.0821,0.01497,0.09783]
HAnimSegment694 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_2")
HAnimSegment694.name = "r_tarsal_proximal_phalanx_2"
Shape695 = x3d.Shape()
LineSet696 = x3d.LineSet()
LineSet696.vertexCount = [2]
ColorRGBA697 = x3d.ColorRGBA()
ColorRGBA697.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet696.color = ColorRGBA697
Coordinate698 = x3d.Coordinate()
Coordinate698.point = [(-0.0821, 0.01497, 0.09783),(-0.07983, 0.0261, 0.04106)]

LineSet696.coord = Coordinate698

Shape695.geometry = LineSet696

HAnimSegment694.children.append(Shape695)

HAnimJoint693.children.append(HAnimSegment694)
HAnimJoint699 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint699.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint699.center = [-0.0839,0.012647,0.114]
HAnimSegment700 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_2")
HAnimSegment700.name = "r_tarsal_middle_phalanx_2"
Shape701 = x3d.Shape()
LineSet702 = x3d.LineSet()
LineSet702.vertexCount = [2]
ColorRGBA703 = x3d.ColorRGBA()
ColorRGBA703.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet702.color = ColorRGBA703
Coordinate704 = x3d.Coordinate()
Coordinate704.point = [(-0.0839, 0.012647, 0.114),(-0.0821, 0.01497, 0.09783)]

LineSet702.coord = Coordinate704

Shape701.geometry = LineSet702

HAnimSegment700.children.append(Shape701)

HAnimJoint699.children.append(HAnimSegment700)
HAnimJoint705 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint705.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint705.center = [-0.0839,0.009825,0.123435]
HAnimSegment706 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_2")
HAnimSegment706.name = "r_tarsal_distal_phalanx_2"
HAnimSite707 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite707.name = "r_tarsal_distal_phalanx_2"
HAnimSite707.translation = [-0.08,0.016,0.14]
TouchSensor708 = x3d.TouchSensor()
TouchSensor708.description = "HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip"

HAnimSite707.children.append(TouchSensor708)
Shape709 = x3d.Shape()
Appearance710 = x3d.Appearance()
Material711 = x3d.Material()
Material711.diffuseColor = [1,1,1]

Appearance710.material = Material711

Shape709.appearance = Appearance710
IndexedFaceSet712 = x3d.IndexedFaceSet()
IndexedFaceSet712.solid = False
IndexedFaceSet712.creaseAngle = 0.5
IndexedFaceSet712.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA713 = x3d.ColorRGBA()
ColorRGBA713.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet712.color = ColorRGBA713
Coordinate714 = x3d.Coordinate()
Coordinate714.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet712.coord = Coordinate714

Shape709.geometry = IndexedFaceSet712

HAnimSite707.children.append(Shape709)
Billboard715 = x3d.Billboard()
Billboard715.axisOfRotation = [0,0,0]
Shape716 = x3d.Shape()
Text717 = x3d.Text()
Text717.string = ["117"]
FontStyle718 = x3d.FontStyle()
FontStyle718.size = 0.035

Text717.fontStyle = FontStyle718

Shape716.geometry = Text717

Billboard715.children.append(Shape716)

HAnimSite707.children.append(Billboard715)

HAnimSegment706.children.append(HAnimSite707)
Shape719 = x3d.Shape()
LineSet720 = x3d.LineSet()
LineSet720.vertexCount = [2]
ColorRGBA721 = x3d.ColorRGBA()
ColorRGBA721.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet720.color = ColorRGBA721
Coordinate722 = x3d.Coordinate()
Coordinate722.point = [(-0.0839, 0.009825, 0.123435),(-0.0839, 0.012647, 0.114)]

LineSet720.coord = Coordinate722

Shape719.geometry = LineSet720

HAnimSegment706.children.append(Shape719)

HAnimJoint705.children.append(HAnimSegment706)

HAnimJoint699.children.append(HAnimJoint705)

HAnimJoint693.children.append(HAnimJoint699)

HAnimJoint687.children.append(HAnimJoint693)

HAnimJoint681.children.append(HAnimJoint687)

HAnimJoint627.children.append(HAnimJoint681)
HAnimJoint723 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_3")
HAnimJoint723.name = "r_cuneonavicular_3"
HAnimJoint723.center = [-0.09261,0.03339,0.01982]
HAnimSegment724 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_3")
HAnimSegment724.name = "r_cuneiform_3"
Shape725 = x3d.Shape()
LineSet726 = x3d.LineSet()
LineSet726.vertexCount = [2]
ColorRGBA727 = x3d.ColorRGBA()
ColorRGBA727.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet726.color = ColorRGBA727
Coordinate728 = x3d.Coordinate()
Coordinate728.point = [(-0.09261, 0.03339, 0.01982),(-0.07794, 0.0369, 0.00486)]

LineSet726.coord = Coordinate728

Shape725.geometry = LineSet726

HAnimSegment724.children.append(Shape725)

HAnimJoint723.children.append(HAnimSegment724)
HAnimJoint729 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_3")
HAnimJoint729.name = "r_tarsometatarsal_3"
HAnimJoint729.center = [-0.09423,0.0261,0.0394]
HAnimSegment730 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_3")
HAnimSegment730.name = "r_metatarsal_3"
Shape731 = x3d.Shape()
LineSet732 = x3d.LineSet()
LineSet732.vertexCount = [2]
ColorRGBA733 = x3d.ColorRGBA()
ColorRGBA733.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet732.color = ColorRGBA733
Coordinate734 = x3d.Coordinate()
Coordinate734.point = [(-0.09423, 0.0261, 0.0394),(-0.09261, 0.03339, 0.01982)]

LineSet732.coord = Coordinate734

Shape731.geometry = LineSet732

HAnimSegment730.children.append(Shape731)

HAnimJoint729.children.append(HAnimSegment730)
HAnimJoint735 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_3")
HAnimJoint735.name = "r_metatarsophalangeal_3"
HAnimJoint735.center = [-0.0961,0.01505,0.09542]
HAnimSegment736 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_3")
HAnimSegment736.name = "r_tarsal_proximal_phalanx_3"
Shape737 = x3d.Shape()
LineSet738 = x3d.LineSet()
LineSet738.vertexCount = [2]
ColorRGBA739 = x3d.ColorRGBA()
ColorRGBA739.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet738.color = ColorRGBA739
Coordinate740 = x3d.Coordinate()
Coordinate740.point = [(-0.0961, 0.01505, 0.09542),(-0.09423, 0.0261, 0.0394)]

LineSet738.coord = Coordinate740

Shape737.geometry = LineSet738

HAnimSegment736.children.append(Shape737)

HAnimJoint735.children.append(HAnimSegment736)
HAnimJoint741 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint741.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint741.center = [-0.0985,0.01192,0.11047]
HAnimSegment742 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_3")
HAnimSegment742.name = "r_tarsal_middle_phalanx_3"
Shape743 = x3d.Shape()
LineSet744 = x3d.LineSet()
LineSet744.vertexCount = [2]
ColorRGBA745 = x3d.ColorRGBA()
ColorRGBA745.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet744.color = ColorRGBA745
Coordinate746 = x3d.Coordinate()
Coordinate746.point = [(-0.0985, 0.01192, 0.11047),(-0.0961, 0.01505, 0.09542)]

LineSet744.coord = Coordinate746

Shape743.geometry = LineSet744

HAnimSegment742.children.append(Shape743)

HAnimJoint741.children.append(HAnimSegment742)
HAnimJoint747 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint747.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint747.center = [-0.100035,0.00982,0.1197]
HAnimSegment748 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_3")
HAnimSegment748.name = "r_tarsal_distal_phalanx_3"
HAnimSite749 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_3_tip")
HAnimSite749.name = "r_tarsal_distal_phalanx_3"
HAnimSite749.translation = [-0.1,0.016,0.14]
TouchSensor750 = x3d.TouchSensor()
TouchSensor750.description = "HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip"

HAnimSite749.children.append(TouchSensor750)
Shape751 = x3d.Shape()
Appearance752 = x3d.Appearance()
Material753 = x3d.Material()
Material753.diffuseColor = [1,1,1]

Appearance752.material = Material753

Shape751.appearance = Appearance752
IndexedFaceSet754 = x3d.IndexedFaceSet()
IndexedFaceSet754.solid = False
IndexedFaceSet754.creaseAngle = 0.5
IndexedFaceSet754.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA755 = x3d.ColorRGBA()
ColorRGBA755.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet754.color = ColorRGBA755
Coordinate756 = x3d.Coordinate()
Coordinate756.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet754.coord = Coordinate756

Shape751.geometry = IndexedFaceSet754

HAnimSite749.children.append(Shape751)
Billboard757 = x3d.Billboard()
Billboard757.axisOfRotation = [0,0,0]
Shape758 = x3d.Shape()
Text759 = x3d.Text()
Text759.string = ["118"]
FontStyle760 = x3d.FontStyle()
FontStyle760.size = 0.035

Text759.fontStyle = FontStyle760

Shape758.geometry = Text759

Billboard757.children.append(Shape758)

HAnimSite749.children.append(Billboard757)

HAnimSegment748.children.append(HAnimSite749)
Shape761 = x3d.Shape()
LineSet762 = x3d.LineSet()
LineSet762.vertexCount = [2]
ColorRGBA763 = x3d.ColorRGBA()
ColorRGBA763.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet762.color = ColorRGBA763
Coordinate764 = x3d.Coordinate()
Coordinate764.point = [(-0.100035, 0.00982, 0.1197),(-0.0985, 0.01192, 0.11047)]

LineSet762.coord = Coordinate764

Shape761.geometry = LineSet762

HAnimSegment748.children.append(Shape761)

HAnimJoint747.children.append(HAnimSegment748)

HAnimJoint741.children.append(HAnimJoint747)

HAnimJoint735.children.append(HAnimJoint741)

HAnimJoint729.children.append(HAnimJoint735)

HAnimJoint723.children.append(HAnimJoint729)

HAnimJoint627.children.append(HAnimJoint723)

HAnimJoint597.children.append(HAnimJoint627)
HAnimJoint765 = x3d.HAnimJoint(DEF="hanim_r_calcaneocuboid")
HAnimJoint765.name = "r_calcaneocuboid"
HAnimJoint765.center = [-0.088717,0.05798,-0.025965]
HAnimSegment766 = x3d.HAnimSegment(DEF="hanim_r_calcaneus")
HAnimSegment766.name = "r_calcaneus"
Shape767 = x3d.Shape()
LineSet768 = x3d.LineSet()
LineSet768.vertexCount = [2]
ColorRGBA769 = x3d.ColorRGBA()
ColorRGBA769.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet768.color = ColorRGBA769
Coordinate770 = x3d.Coordinate()
Coordinate770.point = [(-0.088717, 0.05798, -0.025965),(-0.08845, 0.09544, -0.01045)]

LineSet768.coord = Coordinate770

Shape767.geometry = LineSet768

HAnimSegment766.children.append(Shape767)

HAnimJoint765.children.append(HAnimSegment766)
HAnimJoint771 = x3d.HAnimJoint(DEF="hanim_r_transversetarsal")
HAnimJoint771.name = "r_transversetarsal"
HAnimJoint771.center = [-0.11027,0.03528,0.0021]
HAnimSegment772 = x3d.HAnimSegment(DEF="hanim_r_cuboid")
HAnimSegment772.name = "r_cuboid"
Shape773 = x3d.Shape()
LineSet774 = x3d.LineSet()
LineSet774.vertexCount = [2]
ColorRGBA775 = x3d.ColorRGBA()
ColorRGBA775.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet774.color = ColorRGBA775
Coordinate776 = x3d.Coordinate()
Coordinate776.point = [(-0.11027, 0.03528, 0.0021),(-0.088717, 0.05798, -0.025965)]

LineSet774.coord = Coordinate776

Shape773.geometry = LineSet774

HAnimSegment772.children.append(Shape773)

HAnimJoint771.children.append(HAnimSegment772)
HAnimJoint777 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_4")
HAnimJoint777.name = "r_tarsometatarsal_4"
HAnimJoint777.center = [-0.10613,0.02454,0.03843]
HAnimSegment778 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_4")
HAnimSegment778.name = "r_metatarsal_4"
Shape779 = x3d.Shape()
LineSet780 = x3d.LineSet()
LineSet780.vertexCount = [2]
ColorRGBA781 = x3d.ColorRGBA()
ColorRGBA781.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet780.color = ColorRGBA781
Coordinate782 = x3d.Coordinate()
Coordinate782.point = [(-0.10613, 0.02454, 0.03843),(-0.11027, 0.03528, 0.0021)]

LineSet780.coord = Coordinate782

Shape779.geometry = LineSet780

HAnimSegment778.children.append(Shape779)

HAnimJoint777.children.append(HAnimSegment778)
HAnimJoint783 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_4")
HAnimJoint783.name = "r_metatarsophalangeal_4"
HAnimJoint783.center = [-0.1095,0.01435,0.09117]
HAnimSegment784 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_4")
HAnimSegment784.name = "r_tarsal_proximal_phalanx_4"
Shape785 = x3d.Shape()
LineSet786 = x3d.LineSet()
LineSet786.vertexCount = [2]
ColorRGBA787 = x3d.ColorRGBA()
ColorRGBA787.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet786.color = ColorRGBA787
Coordinate788 = x3d.Coordinate()
Coordinate788.point = [(-0.1095, 0.01435, 0.09117),(-0.10613, 0.02454, 0.03843)]

LineSet786.coord = Coordinate788

Shape785.geometry = LineSet786

HAnimSegment784.children.append(Shape785)

HAnimJoint783.children.append(HAnimSegment784)
HAnimJoint789 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint789.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint789.center = [-0.11378,0.01224,0.1063]
HAnimSegment790 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_4")
HAnimSegment790.name = "r_tarsal_middle_phalanx_4"
Shape791 = x3d.Shape()
LineSet792 = x3d.LineSet()
LineSet792.vertexCount = [2]
ColorRGBA793 = x3d.ColorRGBA()
ColorRGBA793.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet792.color = ColorRGBA793
Coordinate794 = x3d.Coordinate()
Coordinate794.point = [(-0.11378, 0.01224, 0.1063),(-0.1095, 0.01435, 0.09117)]

LineSet792.coord = Coordinate794

Shape791.geometry = LineSet792

HAnimSegment790.children.append(Shape791)

HAnimJoint789.children.append(HAnimSegment790)
HAnimJoint795 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint795.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint795.center = [-0.1153,0.00937,0.11369]
HAnimSegment796 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_4")
HAnimSegment796.name = "r_tarsal_distal_phalanx_4"
HAnimSite797 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_4_tip")
HAnimSite797.name = "r_tarsal_distal_phalanx_4"
HAnimSite797.translation = [-0.115,0.016,0.13]
TouchSensor798 = x3d.TouchSensor()
TouchSensor798.description = "HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip"

HAnimSite797.children.append(TouchSensor798)
Shape799 = x3d.Shape()
Appearance800 = x3d.Appearance()
Material801 = x3d.Material()
Material801.diffuseColor = [1,1,1]

Appearance800.material = Material801

Shape799.appearance = Appearance800
IndexedFaceSet802 = x3d.IndexedFaceSet()
IndexedFaceSet802.solid = False
IndexedFaceSet802.creaseAngle = 0.5
IndexedFaceSet802.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA803 = x3d.ColorRGBA()
ColorRGBA803.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet802.color = ColorRGBA803
Coordinate804 = x3d.Coordinate()
Coordinate804.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet802.coord = Coordinate804

Shape799.geometry = IndexedFaceSet802

HAnimSite797.children.append(Shape799)
Billboard805 = x3d.Billboard()
Billboard805.axisOfRotation = [0,0,0]
Shape806 = x3d.Shape()
Text807 = x3d.Text()
Text807.string = ["119"]
FontStyle808 = x3d.FontStyle()
FontStyle808.size = 0.035

Text807.fontStyle = FontStyle808

Shape806.geometry = Text807

Billboard805.children.append(Shape806)

HAnimSite797.children.append(Billboard805)

HAnimSegment796.children.append(HAnimSite797)
Shape809 = x3d.Shape()
LineSet810 = x3d.LineSet()
LineSet810.vertexCount = [2]
ColorRGBA811 = x3d.ColorRGBA()
ColorRGBA811.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet810.color = ColorRGBA811
Coordinate812 = x3d.Coordinate()
Coordinate812.point = [(-0.1153, 0.00937, 0.11369),(-0.11378, 0.01224, 0.1063)]

LineSet810.coord = Coordinate812

Shape809.geometry = LineSet810

HAnimSegment796.children.append(Shape809)

HAnimJoint795.children.append(HAnimSegment796)

HAnimJoint789.children.append(HAnimJoint795)

HAnimJoint783.children.append(HAnimJoint789)

HAnimJoint777.children.append(HAnimJoint783)

HAnimJoint771.children.append(HAnimJoint777)
HAnimJoint813 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_5")
HAnimJoint813.name = "r_tarsometatarsal_5"
HAnimJoint813.center = [-0.12044,0.020945,0.03474]
HAnimSegment814 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_5")
HAnimSegment814.name = "r_metatarsal_5"
Shape815 = x3d.Shape()
LineSet816 = x3d.LineSet()
LineSet816.vertexCount = [2]
ColorRGBA817 = x3d.ColorRGBA()
ColorRGBA817.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet816.color = ColorRGBA817
Coordinate818 = x3d.Coordinate()
Coordinate818.point = [(-0.12044, 0.020945, 0.03474),(-0.11027, 0.03528, 0.0021)]

LineSet816.coord = Coordinate818

Shape815.geometry = LineSet816

HAnimSegment814.children.append(Shape815)

HAnimJoint813.children.append(HAnimSegment814)
HAnimJoint819 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_5")
HAnimJoint819.name = "r_metatarsophalangeal_5"
HAnimJoint819.center = [-0.12368,0.01367,0.08656]
HAnimSegment820 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_5")
HAnimSegment820.name = "r_tarsal_proximal_phalanx_5"
Shape821 = x3d.Shape()
LineSet822 = x3d.LineSet()
LineSet822.vertexCount = [2]
ColorRGBA823 = x3d.ColorRGBA()
ColorRGBA823.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet822.color = ColorRGBA823
Coordinate824 = x3d.Coordinate()
Coordinate824.point = [(-0.12368, 0.01367, 0.08656),(-0.12044, 0.020945, 0.03474)]

LineSet822.coord = Coordinate824

Shape821.geometry = LineSet822

HAnimSegment820.children.append(Shape821)

HAnimJoint819.children.append(HAnimSegment820)
HAnimJoint825 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint825.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint825.center = [-0.126,0.01086,0.09414]
HAnimSegment826 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_5")
HAnimSegment826.name = "r_tarsal_middle_phalanx_5"
HAnimSite827 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_5_pt")
HAnimSite827.name = "r_metatarsal_phalanx_5"
HAnimSite827.translation = [-0.12,0.02,0.04]
TouchSensor828 = x3d.TouchSensor()
TouchSensor828.description = "HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt"

HAnimSite827.children.append(TouchSensor828)
Shape829 = x3d.Shape()
Appearance830 = x3d.Appearance()
Material831 = x3d.Material()
Material831.diffuseColor = [1,1,1]

Appearance830.material = Material831

Shape829.appearance = Appearance830
IndexedFaceSet832 = x3d.IndexedFaceSet()
IndexedFaceSet832.solid = False
IndexedFaceSet832.creaseAngle = 0.5
IndexedFaceSet832.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA833 = x3d.ColorRGBA()
ColorRGBA833.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet832.color = ColorRGBA833
Coordinate834 = x3d.Coordinate()
Coordinate834.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet832.coord = Coordinate834

Shape829.geometry = IndexedFaceSet832

HAnimSite827.children.append(Shape829)
Billboard835 = x3d.Billboard()
Billboard835.axisOfRotation = [0,0,0]
Shape836 = x3d.Shape()
Text837 = x3d.Text()
Text837.string = ["60"]
FontStyle838 = x3d.FontStyle()
FontStyle838.size = 0.035

Text837.fontStyle = FontStyle838

Shape836.geometry = Text837

Billboard835.children.append(Shape836)

HAnimSite827.children.append(Billboard835)

HAnimSegment826.children.append(HAnimSite827)
Shape839 = x3d.Shape()
LineSet840 = x3d.LineSet()
LineSet840.vertexCount = [2]
ColorRGBA841 = x3d.ColorRGBA()
ColorRGBA841.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet840.color = ColorRGBA841
Coordinate842 = x3d.Coordinate()
Coordinate842.point = [(-0.126, 0.01086, 0.09414),(-0.12368, 0.01367, 0.08656)]

LineSet840.coord = Coordinate842

Shape839.geometry = LineSet840

HAnimSegment826.children.append(Shape839)

HAnimJoint825.children.append(HAnimSegment826)
HAnimJoint843 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint843.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint843.center = [-0.1269,0.00856,0.10188]
HAnimSegment844 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_5")
HAnimSegment844.name = "r_tarsal_distal_phalanx_5"
HAnimSite845 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_5_tip")
HAnimSite845.name = "r_tarsal_distal_phalanx_5"
HAnimSite845.translation = [-0.125,0.016,0.115]
TouchSensor846 = x3d.TouchSensor()
TouchSensor846.description = "HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip"

HAnimSite845.children.append(TouchSensor846)
Shape847 = x3d.Shape()
Appearance848 = x3d.Appearance()
Material849 = x3d.Material()
Material849.diffuseColor = [1,1,1]

Appearance848.material = Material849

Shape847.appearance = Appearance848
IndexedFaceSet850 = x3d.IndexedFaceSet()
IndexedFaceSet850.solid = False
IndexedFaceSet850.creaseAngle = 0.5
IndexedFaceSet850.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA851 = x3d.ColorRGBA()
ColorRGBA851.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet850.color = ColorRGBA851
Coordinate852 = x3d.Coordinate()
Coordinate852.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet850.coord = Coordinate852

Shape847.geometry = IndexedFaceSet850

HAnimSite845.children.append(Shape847)
Billboard853 = x3d.Billboard()
Billboard853.axisOfRotation = [0,0,0]
Shape854 = x3d.Shape()
Text855 = x3d.Text()
Text855.string = ["120"]
FontStyle856 = x3d.FontStyle()
FontStyle856.size = 0.035

Text855.fontStyle = FontStyle856

Shape854.geometry = Text855

Billboard853.children.append(Shape854)

HAnimSite845.children.append(Billboard853)

HAnimSegment844.children.append(HAnimSite845)
Shape857 = x3d.Shape()
LineSet858 = x3d.LineSet()
LineSet858.vertexCount = [2]
ColorRGBA859 = x3d.ColorRGBA()
ColorRGBA859.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet858.color = ColorRGBA859
Coordinate860 = x3d.Coordinate()
Coordinate860.point = [(-0.1269, 0.00856, 0.10188),(-0.126, 0.01086, 0.09414)]

LineSet858.coord = Coordinate860

Shape857.geometry = LineSet858

HAnimSegment844.children.append(Shape857)

HAnimJoint843.children.append(HAnimSegment844)

HAnimJoint825.children.append(HAnimJoint843)

HAnimJoint819.children.append(HAnimJoint825)

HAnimJoint813.children.append(HAnimJoint819)

HAnimJoint771.children.append(HAnimJoint813)

HAnimJoint765.children.append(HAnimJoint771)

HAnimJoint597.children.append(HAnimJoint765)

HAnimJoint555.children.append(HAnimJoint597)

HAnimJoint501.children.append(HAnimJoint555)

HAnimJoint15.children.append(HAnimJoint501)

HAnimJoint11.children.append(HAnimJoint15)
HAnimJoint861 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint861.name = "vl5"
HAnimJoint861.center = [0,0.9254,-0.01376]
HAnimSegment862 = x3d.HAnimSegment(DEF="hanim_l5")
HAnimSegment862.name = "l5"
HAnimSite863 = x3d.HAnimSite(DEF="hanim_spine_1_middle_back_pt")
HAnimSite863.name = "spine_1_middle_back"
HAnimSite863.translation = [0,1,-0.1]
TouchSensor864 = x3d.TouchSensor()
TouchSensor864.description = "HAnimSite 24 hanim_spine_1_middle_back_pt"

HAnimSite863.children.append(TouchSensor864)
Shape865 = x3d.Shape()
Appearance866 = x3d.Appearance()
Material867 = x3d.Material()
Material867.diffuseColor = [1,1,1]

Appearance866.material = Material867

Shape865.appearance = Appearance866
IndexedFaceSet868 = x3d.IndexedFaceSet()
IndexedFaceSet868.solid = False
IndexedFaceSet868.creaseAngle = 0.5
IndexedFaceSet868.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA869 = x3d.ColorRGBA()
ColorRGBA869.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet868.color = ColorRGBA869
Coordinate870 = x3d.Coordinate()
Coordinate870.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet868.coord = Coordinate870

Shape865.geometry = IndexedFaceSet868

HAnimSite863.children.append(Shape865)
Billboard871 = x3d.Billboard()
Billboard871.axisOfRotation = [0,0,0]
Shape872 = x3d.Shape()
Text873 = x3d.Text()
Text873.string = ["24"]
FontStyle874 = x3d.FontStyle()
FontStyle874.size = 0.035

Text873.fontStyle = FontStyle874

Shape872.geometry = Text873

Billboard871.children.append(Shape872)

HAnimSite863.children.append(Billboard871)

HAnimSegment862.children.append(HAnimSite863)
HAnimSite875 = x3d.HAnimSite(DEF="hanim_spine_2_lower_back_pt")
HAnimSite875.name = "spine_2_lower_back"
HAnimSite875.translation = [0,0.95,-0.1]
TouchSensor876 = x3d.TouchSensor()
TouchSensor876.description = "HAnimSite 25 hanim_spine_2_lower_back_pt"

HAnimSite875.children.append(TouchSensor876)
Shape877 = x3d.Shape()
Appearance878 = x3d.Appearance()
Material879 = x3d.Material()
Material879.diffuseColor = [1,1,1]

Appearance878.material = Material879

Shape877.appearance = Appearance878
IndexedFaceSet880 = x3d.IndexedFaceSet()
IndexedFaceSet880.solid = False
IndexedFaceSet880.creaseAngle = 0.5
IndexedFaceSet880.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA881 = x3d.ColorRGBA()
ColorRGBA881.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet880.color = ColorRGBA881
Coordinate882 = x3d.Coordinate()
Coordinate882.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet880.coord = Coordinate882

Shape877.geometry = IndexedFaceSet880

HAnimSite875.children.append(Shape877)
Billboard883 = x3d.Billboard()
Billboard883.axisOfRotation = [0,0,0]
Shape884 = x3d.Shape()
Text885 = x3d.Text()
Text885.string = ["25"]
FontStyle886 = x3d.FontStyle()
FontStyle886.size = 0.035

Text885.fontStyle = FontStyle886

Shape884.geometry = Text885

Billboard883.children.append(Shape884)

HAnimSite875.children.append(Billboard883)

HAnimSegment862.children.append(HAnimSite875)
HAnimSite887 = x3d.HAnimSite(DEF="hanim_waist_preferred_anterior_pt")
HAnimSite887.name = "waist_preferred_anterior"
HAnimSite887.translation = [0,0.9,0.1]
TouchSensor888 = x3d.TouchSensor()
TouchSensor888.description = "HAnimSite 26 hanim_waist_preferred_anterior_pt"

HAnimSite887.children.append(TouchSensor888)
Shape889 = x3d.Shape()
Appearance890 = x3d.Appearance()
Material891 = x3d.Material()
Material891.diffuseColor = [1,1,1]

Appearance890.material = Material891

Shape889.appearance = Appearance890
IndexedFaceSet892 = x3d.IndexedFaceSet()
IndexedFaceSet892.solid = False
IndexedFaceSet892.creaseAngle = 0.5
IndexedFaceSet892.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA893 = x3d.ColorRGBA()
ColorRGBA893.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet892.color = ColorRGBA893
Coordinate894 = x3d.Coordinate()
Coordinate894.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet892.coord = Coordinate894

Shape889.geometry = IndexedFaceSet892

HAnimSite887.children.append(Shape889)
Billboard895 = x3d.Billboard()
Billboard895.axisOfRotation = [0,0,0]
Shape896 = x3d.Shape()
Text897 = x3d.Text()
Text897.string = ["26"]
FontStyle898 = x3d.FontStyle()
FontStyle898.size = 0.035

Text897.fontStyle = FontStyle898

Shape896.geometry = Text897

Billboard895.children.append(Shape896)

HAnimSite887.children.append(Billboard895)

HAnimSegment862.children.append(HAnimSite887)
HAnimSite899 = x3d.HAnimSite(DEF="hanim_waist_preferred_posterior_pt")
HAnimSite899.name = "waist_preferred_posterior"
HAnimSite899.translation = [0,0.9,-0.1]
TouchSensor900 = x3d.TouchSensor()
TouchSensor900.description = "HAnimSite 27 hanim_waist_preferred_posterior_pt"

HAnimSite899.children.append(TouchSensor900)
Shape901 = x3d.Shape()
Appearance902 = x3d.Appearance()
Material903 = x3d.Material()
Material903.diffuseColor = [1,1,1]

Appearance902.material = Material903

Shape901.appearance = Appearance902
IndexedFaceSet904 = x3d.IndexedFaceSet()
IndexedFaceSet904.solid = False
IndexedFaceSet904.creaseAngle = 0.5
IndexedFaceSet904.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA905 = x3d.ColorRGBA()
ColorRGBA905.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet904.color = ColorRGBA905
Coordinate906 = x3d.Coordinate()
Coordinate906.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet904.coord = Coordinate906

Shape901.geometry = IndexedFaceSet904

HAnimSite899.children.append(Shape901)
Billboard907 = x3d.Billboard()
Billboard907.axisOfRotation = [0,0,0]
Shape908 = x3d.Shape()
Text909 = x3d.Text()
Text909.string = ["27"]
FontStyle910 = x3d.FontStyle()
FontStyle910.size = 0.035

Text909.fontStyle = FontStyle910

Shape908.geometry = Text909

Billboard907.children.append(Shape908)

HAnimSite899.children.append(Billboard907)

HAnimSegment862.children.append(HAnimSite899)
HAnimSite911 = x3d.HAnimSite(DEF="hanim_navel_pt")
HAnimSite911.name = "navel"
HAnimSite911.translation = [0,0.9,-0.1]
TouchSensor912 = x3d.TouchSensor()
TouchSensor912.description = "HAnimSite 84 hanim_navel_pt"

HAnimSite911.children.append(TouchSensor912)
Shape913 = x3d.Shape()
Appearance914 = x3d.Appearance()
Material915 = x3d.Material()
Material915.diffuseColor = [1,1,1]

Appearance914.material = Material915

Shape913.appearance = Appearance914
IndexedFaceSet916 = x3d.IndexedFaceSet()
IndexedFaceSet916.solid = False
IndexedFaceSet916.creaseAngle = 0.5
IndexedFaceSet916.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA917 = x3d.ColorRGBA()
ColorRGBA917.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet916.color = ColorRGBA917
Coordinate918 = x3d.Coordinate()
Coordinate918.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet916.coord = Coordinate918

Shape913.geometry = IndexedFaceSet916

HAnimSite911.children.append(Shape913)
Billboard919 = x3d.Billboard()
Billboard919.axisOfRotation = [0,0,0]
Shape920 = x3d.Shape()
Text921 = x3d.Text()
Text921.string = ["84"]
FontStyle922 = x3d.FontStyle()
FontStyle922.size = 0.035

Text921.fontStyle = FontStyle922

Shape920.geometry = Text921

Billboard919.children.append(Shape920)

HAnimSite911.children.append(Billboard919)

HAnimSegment862.children.append(HAnimSite911)
Shape923 = x3d.Shape()
LineSet924 = x3d.LineSet()
LineSet924.vertexCount = [2]
ColorRGBA925 = x3d.ColorRGBA()
ColorRGBA925.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet924.color = ColorRGBA925
Coordinate926 = x3d.Coordinate()
Coordinate926.point = [(0, 0.9254, -0.01376),(0, 0.77, 0)]

LineSet924.coord = Coordinate926

Shape923.geometry = LineSet924

HAnimSegment862.children.append(Shape923)

HAnimJoint861.children.append(HAnimSegment862)
HAnimJoint927 = x3d.HAnimJoint(DEF="hanim_vl4")
HAnimJoint927.name = "vl4"
HAnimJoint927.center = [0,0.9497,-0.01376]
HAnimSegment928 = x3d.HAnimSegment(DEF="hanim_l4")
HAnimSegment928.name = "l4"
Shape929 = x3d.Shape()
LineSet930 = x3d.LineSet()
LineSet930.vertexCount = [2]
ColorRGBA931 = x3d.ColorRGBA()
ColorRGBA931.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet930.color = ColorRGBA931
Coordinate932 = x3d.Coordinate()
Coordinate932.point = [(0, 0.9497, -0.01376),(0, 0.9254, -0.01376)]

LineSet930.coord = Coordinate932

Shape929.geometry = LineSet930

HAnimSegment928.children.append(Shape929)

HAnimJoint927.children.append(HAnimSegment928)
HAnimJoint933 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint933.name = "vl3"
HAnimJoint933.center = [0,0.9659,-0.01376]
HAnimSegment934 = x3d.HAnimSegment(DEF="hanim_l3")
HAnimSegment934.name = "l3"
Shape935 = x3d.Shape()
LineSet936 = x3d.LineSet()
LineSet936.vertexCount = [2]
ColorRGBA937 = x3d.ColorRGBA()
ColorRGBA937.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet936.color = ColorRGBA937
Coordinate938 = x3d.Coordinate()
Coordinate938.point = [(0, 0.9659, -0.01376),(0, 0.9497, -0.01376)]

LineSet936.coord = Coordinate938

Shape935.geometry = LineSet936

HAnimSegment934.children.append(Shape935)

HAnimJoint933.children.append(HAnimSegment934)
HAnimJoint939 = x3d.HAnimJoint(DEF="hanim_vl2")
HAnimJoint939.name = "vl2"
HAnimJoint939.center = [0,0.98235,-0.01376]
HAnimSegment940 = x3d.HAnimSegment(DEF="hanim_l2")
HAnimSegment940.name = "l2"
HAnimSite941 = x3d.HAnimSite(DEF="hanim_l_rib10_pt")
HAnimSite941.name = "l_rib10"
HAnimSite941.translation = [0.09,1,0.04]
TouchSensor942 = x3d.TouchSensor()
TouchSensor942.description = "HAnimSite 28 hanim_l_rib10_pt"

HAnimSite941.children.append(TouchSensor942)
Shape943 = x3d.Shape()
Appearance944 = x3d.Appearance()
Material945 = x3d.Material()
Material945.diffuseColor = [1,1,1]

Appearance944.material = Material945

Shape943.appearance = Appearance944
IndexedFaceSet946 = x3d.IndexedFaceSet()
IndexedFaceSet946.solid = False
IndexedFaceSet946.creaseAngle = 0.5
IndexedFaceSet946.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA947 = x3d.ColorRGBA()
ColorRGBA947.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet946.color = ColorRGBA947
Coordinate948 = x3d.Coordinate()
Coordinate948.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet946.coord = Coordinate948

Shape943.geometry = IndexedFaceSet946

HAnimSite941.children.append(Shape943)
Billboard949 = x3d.Billboard()
Billboard949.axisOfRotation = [0,0,0]
Shape950 = x3d.Shape()
Text951 = x3d.Text()
Text951.string = ["28"]
FontStyle952 = x3d.FontStyle()
FontStyle952.size = 0.035

Text951.fontStyle = FontStyle952

Shape950.geometry = Text951

Billboard949.children.append(Shape950)

HAnimSite941.children.append(Billboard949)

HAnimSegment940.children.append(HAnimSite941)
HAnimSite953 = x3d.HAnimSite(DEF="hanim_r_rib10_pt")
HAnimSite953.name = "r_rib10"
HAnimSite953.translation = [-0.09,1,0.04]
TouchSensor954 = x3d.TouchSensor()
TouchSensor954.description = "HAnimSite 30 hanim_r_rib10_pt"

HAnimSite953.children.append(TouchSensor954)
Shape955 = x3d.Shape()
Appearance956 = x3d.Appearance()
Material957 = x3d.Material()
Material957.diffuseColor = [1,1,1]

Appearance956.material = Material957

Shape955.appearance = Appearance956
IndexedFaceSet958 = x3d.IndexedFaceSet()
IndexedFaceSet958.solid = False
IndexedFaceSet958.creaseAngle = 0.5
IndexedFaceSet958.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA959 = x3d.ColorRGBA()
ColorRGBA959.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet958.color = ColorRGBA959
Coordinate960 = x3d.Coordinate()
Coordinate960.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet958.coord = Coordinate960

Shape955.geometry = IndexedFaceSet958

HAnimSite953.children.append(Shape955)
Billboard961 = x3d.Billboard()
Billboard961.axisOfRotation = [0,0,0]
Shape962 = x3d.Shape()
Text963 = x3d.Text()
Text963.string = ["30"]
FontStyle964 = x3d.FontStyle()
FontStyle964.size = 0.035

Text963.fontStyle = FontStyle964

Shape962.geometry = Text963

Billboard961.children.append(Shape962)

HAnimSite953.children.append(Billboard961)

HAnimSegment940.children.append(HAnimSite953)
Shape965 = x3d.Shape()
LineSet966 = x3d.LineSet()
LineSet966.vertexCount = [2]
ColorRGBA967 = x3d.ColorRGBA()
ColorRGBA967.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet966.color = ColorRGBA967
Coordinate968 = x3d.Coordinate()
Coordinate968.point = [(0, 0.98235, -0.01376),(0, 0.9659, -0.01376)]

LineSet966.coord = Coordinate968

Shape965.geometry = LineSet966

HAnimSegment940.children.append(Shape965)

HAnimJoint939.children.append(HAnimSegment940)
HAnimJoint969 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint969.name = "vl1"
HAnimJoint969.center = [0,0.99967,-0.01376]
HAnimSegment970 = x3d.HAnimSegment(DEF="hanim_l1")
HAnimSegment970.name = "l1"
Shape971 = x3d.Shape()
LineSet972 = x3d.LineSet()
LineSet972.vertexCount = [2]
ColorRGBA973 = x3d.ColorRGBA()
ColorRGBA973.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet972.color = ColorRGBA973
Coordinate974 = x3d.Coordinate()
Coordinate974.point = [(0, 0.99967, -0.01376),(0, 0.98235, -0.01376)]

LineSet972.coord = Coordinate974

Shape971.geometry = LineSet972

HAnimSegment970.children.append(Shape971)

HAnimJoint969.children.append(HAnimSegment970)
HAnimJoint975 = x3d.HAnimJoint(DEF="hanim_vt12")
HAnimJoint975.name = "vt12"
HAnimJoint975.center = [0,1.0231,-0.01376]
HAnimSegment976 = x3d.HAnimSegment(DEF="hanim_t12")
HAnimSegment976.name = "t12"
Shape977 = x3d.Shape()
LineSet978 = x3d.LineSet()
LineSet978.vertexCount = [2]
ColorRGBA979 = x3d.ColorRGBA()
ColorRGBA979.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet978.color = ColorRGBA979
Coordinate980 = x3d.Coordinate()
Coordinate980.point = [(0, 1.0231, -0.01376),(0, 0.99967, -0.01376)]

LineSet978.coord = Coordinate980

Shape977.geometry = LineSet978

HAnimSegment976.children.append(Shape977)

HAnimJoint975.children.append(HAnimSegment976)
HAnimJoint981 = x3d.HAnimJoint(DEF="hanim_vt11")
HAnimJoint981.name = "vt11"
HAnimJoint981.center = [0,1.0467,-0.01376]
HAnimSegment982 = x3d.HAnimSegment(DEF="hanim_t11")
HAnimSegment982.name = "t11"
Shape983 = x3d.Shape()
LineSet984 = x3d.LineSet()
LineSet984.vertexCount = [2]
ColorRGBA985 = x3d.ColorRGBA()
ColorRGBA985.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet984.color = ColorRGBA985
Coordinate986 = x3d.Coordinate()
Coordinate986.point = [(0, 1.0467, -0.01376),(0, 1.0231, -0.01376)]

LineSet984.coord = Coordinate986

Shape983.geometry = LineSet984

HAnimSegment982.children.append(Shape983)

HAnimJoint981.children.append(HAnimSegment982)
HAnimJoint987 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint987.name = "vt10"
HAnimJoint987.center = [0,1.0638,-0.01378]
HAnimSegment988 = x3d.HAnimSegment(DEF="hanim_t10")
HAnimSegment988.name = "t10"
HAnimSite989 = x3d.HAnimSite(DEF="hanim_substernale_pt")
HAnimSite989.name = "substernale"
HAnimSite989.translation = [0,1.08,0.076]
TouchSensor990 = x3d.TouchSensor()
TouchSensor990.description = "HAnimSite 13 hanim_substernale_pt"

HAnimSite989.children.append(TouchSensor990)
Shape991 = x3d.Shape()
Appearance992 = x3d.Appearance()
Material993 = x3d.Material()
Material993.diffuseColor = [1,1,1]

Appearance992.material = Material993

Shape991.appearance = Appearance992
IndexedFaceSet994 = x3d.IndexedFaceSet()
IndexedFaceSet994.solid = False
IndexedFaceSet994.creaseAngle = 0.5
IndexedFaceSet994.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA995 = x3d.ColorRGBA()
ColorRGBA995.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet994.color = ColorRGBA995
Coordinate996 = x3d.Coordinate()
Coordinate996.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet994.coord = Coordinate996

Shape991.geometry = IndexedFaceSet994

HAnimSite989.children.append(Shape991)
Billboard997 = x3d.Billboard()
Billboard997.axisOfRotation = [0,0,0]
Shape998 = x3d.Shape()
Text999 = x3d.Text()
Text999.string = ["13"]
FontStyle1000 = x3d.FontStyle()
FontStyle1000.size = 0.035

Text999.fontStyle = FontStyle1000

Shape998.geometry = Text999

Billboard997.children.append(Shape998)

HAnimSite989.children.append(Billboard997)

HAnimSegment988.children.append(HAnimSite989)
HAnimSite1001 = x3d.HAnimSite(DEF="hanim_mesosternale_pt")
HAnimSite1001.name = "mesosternale"
HAnimSite1001.translation = [0,1.15,0.076]
TouchSensor1002 = x3d.TouchSensor()
TouchSensor1002.description = "HAnimSite 88 hanim_mesosternale_pt"

HAnimSite1001.children.append(TouchSensor1002)
Shape1003 = x3d.Shape()
Appearance1004 = x3d.Appearance()
Material1005 = x3d.Material()
Material1005.diffuseColor = [1,1,1]

Appearance1004.material = Material1005

Shape1003.appearance = Appearance1004
IndexedFaceSet1006 = x3d.IndexedFaceSet()
IndexedFaceSet1006.solid = False
IndexedFaceSet1006.creaseAngle = 0.5
IndexedFaceSet1006.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1007 = x3d.ColorRGBA()
ColorRGBA1007.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1006.color = ColorRGBA1007
Coordinate1008 = x3d.Coordinate()
Coordinate1008.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1006.coord = Coordinate1008

Shape1003.geometry = IndexedFaceSet1006

HAnimSite1001.children.append(Shape1003)
Billboard1009 = x3d.Billboard()
Billboard1009.axisOfRotation = [0,0,0]
Shape1010 = x3d.Shape()
Text1011 = x3d.Text()
Text1011.string = ["88"]
FontStyle1012 = x3d.FontStyle()
FontStyle1012.size = 0.035

Text1011.fontStyle = FontStyle1012

Shape1010.geometry = Text1011

Billboard1009.children.append(Shape1010)

HAnimSite1001.children.append(Billboard1009)

HAnimSegment988.children.append(HAnimSite1001)
Shape1013 = x3d.Shape()
LineSet1014 = x3d.LineSet()
LineSet1014.vertexCount = [2]
ColorRGBA1015 = x3d.ColorRGBA()
ColorRGBA1015.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1014.color = ColorRGBA1015
Coordinate1016 = x3d.Coordinate()
Coordinate1016.point = [(0, 1.0638, -0.01378),(0, 1.0467, -0.01376)]

LineSet1014.coord = Coordinate1016

Shape1013.geometry = LineSet1014

HAnimSegment988.children.append(Shape1013)

HAnimJoint987.children.append(HAnimSegment988)
HAnimJoint1017 = x3d.HAnimJoint(DEF="hanim_vt9")
HAnimJoint1017.name = "vt9"
HAnimJoint1017.center = [0,1.0784,-0.01376]
HAnimSegment1018 = x3d.HAnimSegment(DEF="hanim_t9")
HAnimSegment1018.name = "t9"
HAnimSite1019 = x3d.HAnimSite(DEF="hanim_l_thelion_pt")
HAnimSite1019.name = "l_thelion"
HAnimSite1019.translation = [0.07,1.12,0.09]
TouchSensor1020 = x3d.TouchSensor()
TouchSensor1020.description = "HAnimSite 29 hanim_l_thelion_pt"

HAnimSite1019.children.append(TouchSensor1020)
Shape1021 = x3d.Shape()
Appearance1022 = x3d.Appearance()
Material1023 = x3d.Material()
Material1023.diffuseColor = [1,1,1]

Appearance1022.material = Material1023

Shape1021.appearance = Appearance1022
IndexedFaceSet1024 = x3d.IndexedFaceSet()
IndexedFaceSet1024.solid = False
IndexedFaceSet1024.creaseAngle = 0.5
IndexedFaceSet1024.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1025 = x3d.ColorRGBA()
ColorRGBA1025.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1024.color = ColorRGBA1025
Coordinate1026 = x3d.Coordinate()
Coordinate1026.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1024.coord = Coordinate1026

Shape1021.geometry = IndexedFaceSet1024

HAnimSite1019.children.append(Shape1021)
Billboard1027 = x3d.Billboard()
Billboard1027.axisOfRotation = [0,0,0]
Shape1028 = x3d.Shape()
Text1029 = x3d.Text()
Text1029.string = ["29"]
FontStyle1030 = x3d.FontStyle()
FontStyle1030.size = 0.035

Text1029.fontStyle = FontStyle1030

Shape1028.geometry = Text1029

Billboard1027.children.append(Shape1028)

HAnimSite1019.children.append(Billboard1027)

HAnimSegment1018.children.append(HAnimSite1019)
HAnimSite1031 = x3d.HAnimSite(DEF="hanim_r_thelion_pt")
HAnimSite1031.name = "r_thelion"
HAnimSite1031.translation = [-0.07,1.12,0.09]
TouchSensor1032 = x3d.TouchSensor()
TouchSensor1032.description = "HAnimSite 31 hanim_r_thelion_pt"

HAnimSite1031.children.append(TouchSensor1032)
Shape1033 = x3d.Shape()
Appearance1034 = x3d.Appearance()
Material1035 = x3d.Material()
Material1035.diffuseColor = [1,1,1]

Appearance1034.material = Material1035

Shape1033.appearance = Appearance1034
IndexedFaceSet1036 = x3d.IndexedFaceSet()
IndexedFaceSet1036.solid = False
IndexedFaceSet1036.creaseAngle = 0.5
IndexedFaceSet1036.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1037 = x3d.ColorRGBA()
ColorRGBA1037.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1036.color = ColorRGBA1037
Coordinate1038 = x3d.Coordinate()
Coordinate1038.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1036.coord = Coordinate1038

Shape1033.geometry = IndexedFaceSet1036

HAnimSite1031.children.append(Shape1033)
Billboard1039 = x3d.Billboard()
Billboard1039.axisOfRotation = [0,0,0]
Shape1040 = x3d.Shape()
Text1041 = x3d.Text()
Text1041.string = ["31"]
FontStyle1042 = x3d.FontStyle()
FontStyle1042.size = 0.035

Text1041.fontStyle = FontStyle1042

Shape1040.geometry = Text1041

Billboard1039.children.append(Shape1040)

HAnimSite1031.children.append(Billboard1039)

HAnimSegment1018.children.append(HAnimSite1031)
HAnimSite1043 = x3d.HAnimSite(DEF="hanim_rear_center_midsagittal_plane_pt")
HAnimSite1043.name = "rear_center_midsagittal_plane"
HAnimSite1043.translation = [0,1.1,-0.1]
TouchSensor1044 = x3d.TouchSensor()
TouchSensor1044.description = "HAnimSite 92 hanim_rear_center_midsagittal_plane_pt"

HAnimSite1043.children.append(TouchSensor1044)
Shape1045 = x3d.Shape()
Appearance1046 = x3d.Appearance()
Material1047 = x3d.Material()
Material1047.diffuseColor = [1,1,1]

Appearance1046.material = Material1047

Shape1045.appearance = Appearance1046
IndexedFaceSet1048 = x3d.IndexedFaceSet()
IndexedFaceSet1048.solid = False
IndexedFaceSet1048.creaseAngle = 0.5
IndexedFaceSet1048.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1049 = x3d.ColorRGBA()
ColorRGBA1049.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1048.color = ColorRGBA1049
Coordinate1050 = x3d.Coordinate()
Coordinate1050.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1048.coord = Coordinate1050

Shape1045.geometry = IndexedFaceSet1048

HAnimSite1043.children.append(Shape1045)
Billboard1051 = x3d.Billboard()
Billboard1051.axisOfRotation = [0,0,0]
Shape1052 = x3d.Shape()
Text1053 = x3d.Text()
Text1053.string = ["92"]
FontStyle1054 = x3d.FontStyle()
FontStyle1054.size = 0.035

Text1053.fontStyle = FontStyle1054

Shape1052.geometry = Text1053

Billboard1051.children.append(Shape1052)

HAnimSite1043.children.append(Billboard1051)

HAnimSegment1018.children.append(HAnimSite1043)
HAnimSite1055 = x3d.HAnimSite(DEF="hanim_l_chest_midsagittal_plane_pt")
HAnimSite1055.name = "l_chest_midsagittal_plane"
HAnimSite1055.translation = [0.13,1.12,0]
TouchSensor1056 = x3d.TouchSensor()
TouchSensor1056.description = "HAnimSite 94 hanim_l_chest_midsagittal_plane_pt"

HAnimSite1055.children.append(TouchSensor1056)
Shape1057 = x3d.Shape()
Appearance1058 = x3d.Appearance()
Material1059 = x3d.Material()
Material1059.diffuseColor = [1,1,1]

Appearance1058.material = Material1059

Shape1057.appearance = Appearance1058
IndexedFaceSet1060 = x3d.IndexedFaceSet()
IndexedFaceSet1060.solid = False
IndexedFaceSet1060.creaseAngle = 0.5
IndexedFaceSet1060.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1061 = x3d.ColorRGBA()
ColorRGBA1061.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1060.color = ColorRGBA1061
Coordinate1062 = x3d.Coordinate()
Coordinate1062.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1060.coord = Coordinate1062

Shape1057.geometry = IndexedFaceSet1060

HAnimSite1055.children.append(Shape1057)
Billboard1063 = x3d.Billboard()
Billboard1063.axisOfRotation = [0,0,0]
Shape1064 = x3d.Shape()
Text1065 = x3d.Text()
Text1065.string = ["94"]
FontStyle1066 = x3d.FontStyle()
FontStyle1066.size = 0.035

Text1065.fontStyle = FontStyle1066

Shape1064.geometry = Text1065

Billboard1063.children.append(Shape1064)

HAnimSite1055.children.append(Billboard1063)

HAnimSegment1018.children.append(HAnimSite1055)
HAnimSite1067 = x3d.HAnimSite(DEF="hanim_r_chest_midsagittal_plane_pt")
HAnimSite1067.name = "r_chest_midsagittal_plane"
HAnimSite1067.translation = [-0.13,1.12,0]
TouchSensor1068 = x3d.TouchSensor()
TouchSensor1068.description = "HAnimSite 95 hanim_r_chest_midsagittal_plane_pt"

HAnimSite1067.children.append(TouchSensor1068)
Shape1069 = x3d.Shape()
Appearance1070 = x3d.Appearance()
Material1071 = x3d.Material()
Material1071.diffuseColor = [1,1,1]

Appearance1070.material = Material1071

Shape1069.appearance = Appearance1070
IndexedFaceSet1072 = x3d.IndexedFaceSet()
IndexedFaceSet1072.solid = False
IndexedFaceSet1072.creaseAngle = 0.5
IndexedFaceSet1072.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1073 = x3d.ColorRGBA()
ColorRGBA1073.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1072.color = ColorRGBA1073
Coordinate1074 = x3d.Coordinate()
Coordinate1074.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1072.coord = Coordinate1074

Shape1069.geometry = IndexedFaceSet1072

HAnimSite1067.children.append(Shape1069)
Billboard1075 = x3d.Billboard()
Billboard1075.axisOfRotation = [0,0,0]
Shape1076 = x3d.Shape()
Text1077 = x3d.Text()
Text1077.string = ["95"]
FontStyle1078 = x3d.FontStyle()
FontStyle1078.size = 0.035

Text1077.fontStyle = FontStyle1078

Shape1076.geometry = Text1077

Billboard1075.children.append(Shape1076)

HAnimSite1067.children.append(Billboard1075)

HAnimSegment1018.children.append(HAnimSite1067)
Shape1079 = x3d.Shape()
LineSet1080 = x3d.LineSet()
LineSet1080.vertexCount = [2]
ColorRGBA1081 = x3d.ColorRGBA()
ColorRGBA1081.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1080.color = ColorRGBA1081
Coordinate1082 = x3d.Coordinate()
Coordinate1082.point = [(0, 1.0784, -0.01376),(0, 1.0638, -0.01378)]

LineSet1080.coord = Coordinate1082

Shape1079.geometry = LineSet1080

HAnimSegment1018.children.append(Shape1079)

HAnimJoint1017.children.append(HAnimSegment1018)
HAnimJoint1083 = x3d.HAnimJoint(DEF="hanim_vt8")
HAnimJoint1083.name = "vt8"
HAnimJoint1083.center = [0,1.093,-0.01376]
HAnimSegment1084 = x3d.HAnimSegment(DEF="hanim_t8")
HAnimSegment1084.name = "t8"
Shape1085 = x3d.Shape()
LineSet1086 = x3d.LineSet()
LineSet1086.vertexCount = [2]
ColorRGBA1087 = x3d.ColorRGBA()
ColorRGBA1087.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1086.color = ColorRGBA1087
Coordinate1088 = x3d.Coordinate()
Coordinate1088.point = [(0, 1.093, -0.01376),(0, 1.0784, -0.01376)]

LineSet1086.coord = Coordinate1088

Shape1085.geometry = LineSet1086

HAnimSegment1084.children.append(Shape1085)

HAnimJoint1083.children.append(HAnimSegment1084)
HAnimJoint1089 = x3d.HAnimJoint(DEF="hanim_vt7")
HAnimJoint1089.name = "vt7"
HAnimJoint1089.center = [0,1.1088,-0.01376]
HAnimSegment1090 = x3d.HAnimSegment(DEF="hanim_t7")
HAnimSegment1090.name = "t7"
Shape1091 = x3d.Shape()
LineSet1092 = x3d.LineSet()
LineSet1092.vertexCount = [2]
ColorRGBA1093 = x3d.ColorRGBA()
ColorRGBA1093.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1092.color = ColorRGBA1093
Coordinate1094 = x3d.Coordinate()
Coordinate1094.point = [(0, 1.1088, -0.01376),(0, 1.093, -0.01376)]

LineSet1092.coord = Coordinate1094

Shape1091.geometry = LineSet1092

HAnimSegment1090.children.append(Shape1091)

HAnimJoint1089.children.append(HAnimSegment1090)
HAnimJoint1095 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint1095.name = "vt6"
HAnimJoint1095.center = [0,1.1216,-0.01376]
HAnimSegment1096 = x3d.HAnimSegment(DEF="hanim_t6")
HAnimSegment1096.name = "t6"
Shape1097 = x3d.Shape()
LineSet1098 = x3d.LineSet()
LineSet1098.vertexCount = [2]
ColorRGBA1099 = x3d.ColorRGBA()
ColorRGBA1099.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1098.color = ColorRGBA1099
Coordinate1100 = x3d.Coordinate()
Coordinate1100.point = [(0, 1.1216, -0.01376),(0, 1.1088, -0.01376)]

LineSet1098.coord = Coordinate1100

Shape1097.geometry = LineSet1098

HAnimSegment1096.children.append(Shape1097)

HAnimJoint1095.children.append(HAnimSegment1096)
HAnimJoint1101 = x3d.HAnimJoint(DEF="hanim_vt5")
HAnimJoint1101.name = "vt5"
HAnimJoint1101.center = [0,1.137,-0.01376]
HAnimSegment1102 = x3d.HAnimSegment(DEF="hanim_t5")
HAnimSegment1102.name = "t5"
Shape1103 = x3d.Shape()
LineSet1104 = x3d.LineSet()
LineSet1104.vertexCount = [2]
ColorRGBA1105 = x3d.ColorRGBA()
ColorRGBA1105.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1104.color = ColorRGBA1105
Coordinate1106 = x3d.Coordinate()
Coordinate1106.point = [(0, 1.137, -0.01376),(0, 1.1216, -0.01376)]

LineSet1104.coord = Coordinate1106

Shape1103.geometry = LineSet1104

HAnimSegment1102.children.append(Shape1103)

HAnimJoint1101.children.append(HAnimSegment1102)
HAnimJoint1107 = x3d.HAnimJoint(DEF="hanim_vt4")
HAnimJoint1107.name = "vt4"
HAnimJoint1107.center = [0,1.1524,-0.01376]
HAnimSegment1108 = x3d.HAnimSegment(DEF="hanim_t4")
HAnimSegment1108.name = "t4"
Shape1109 = x3d.Shape()
LineSet1110 = x3d.LineSet()
LineSet1110.vertexCount = [2]
ColorRGBA1111 = x3d.ColorRGBA()
ColorRGBA1111.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1110.color = ColorRGBA1111
Coordinate1112 = x3d.Coordinate()
Coordinate1112.point = [(0, 1.1524, -0.01376),(0, 1.137, -0.01376)]

LineSet1110.coord = Coordinate1112

Shape1109.geometry = LineSet1110

HAnimSegment1108.children.append(Shape1109)

HAnimJoint1107.children.append(HAnimSegment1108)
HAnimJoint1113 = x3d.HAnimJoint(DEF="hanim_vt3")
HAnimJoint1113.name = "vt3"
HAnimJoint1113.center = [0,1.1709,-0.01376]
HAnimSegment1114 = x3d.HAnimSegment(DEF="hanim_t3")
HAnimSegment1114.name = "t3"
Shape1115 = x3d.Shape()
LineSet1116 = x3d.LineSet()
LineSet1116.vertexCount = [2]
ColorRGBA1117 = x3d.ColorRGBA()
ColorRGBA1117.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1116.color = ColorRGBA1117
Coordinate1118 = x3d.Coordinate()
Coordinate1118.point = [(0, 1.1709, -0.01376),(0, 1.1524, -0.01376)]

LineSet1116.coord = Coordinate1118

Shape1115.geometry = LineSet1116

HAnimSegment1114.children.append(Shape1115)

HAnimJoint1113.children.append(HAnimSegment1114)
HAnimJoint1119 = x3d.HAnimJoint(DEF="hanim_vt2")
HAnimJoint1119.name = "vt2"
HAnimJoint1119.center = [0,1.1956,-0.01378]
HAnimSegment1120 = x3d.HAnimSegment(DEF="hanim_t2")
HAnimSegment1120.name = "t2"
Shape1121 = x3d.Shape()
LineSet1122 = x3d.LineSet()
LineSet1122.vertexCount = [2]
ColorRGBA1123 = x3d.ColorRGBA()
ColorRGBA1123.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1122.color = ColorRGBA1123
Coordinate1124 = x3d.Coordinate()
Coordinate1124.point = [(0, 1.1956, -0.01378),(0, 1.1709, -0.01376)]

LineSet1122.coord = Coordinate1124

Shape1121.geometry = LineSet1122

HAnimSegment1120.children.append(Shape1121)

HAnimJoint1119.children.append(HAnimSegment1120)
HAnimJoint1125 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint1125.name = "vt1"
HAnimJoint1125.center = [0,1.22,-0.0138]
HAnimSegment1126 = x3d.HAnimSegment(DEF="hanim_t1")
HAnimSegment1126.name = "t1"
HAnimSite1127 = x3d.HAnimSite(DEF="hanim_suprasternale_pt")
HAnimSite1127.name = "suprasternale"
HAnimSite1127.translation = [0,1.22,0.08]
TouchSensor1128 = x3d.TouchSensor()
TouchSensor1128.description = "HAnimSite 12 hanim_suprasternale_pt"

HAnimSite1127.children.append(TouchSensor1128)
Shape1129 = x3d.Shape()
Appearance1130 = x3d.Appearance()
Material1131 = x3d.Material()
Material1131.diffuseColor = [1,1,1]

Appearance1130.material = Material1131

Shape1129.appearance = Appearance1130
IndexedFaceSet1132 = x3d.IndexedFaceSet()
IndexedFaceSet1132.solid = False
IndexedFaceSet1132.creaseAngle = 0.5
IndexedFaceSet1132.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1133 = x3d.ColorRGBA()
ColorRGBA1133.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1132.color = ColorRGBA1133
Coordinate1134 = x3d.Coordinate()
Coordinate1134.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1132.coord = Coordinate1134

Shape1129.geometry = IndexedFaceSet1132

HAnimSite1127.children.append(Shape1129)
Billboard1135 = x3d.Billboard()
Billboard1135.axisOfRotation = [0,0,0]
Shape1136 = x3d.Shape()
Text1137 = x3d.Text()
Text1137.string = ["12"]
FontStyle1138 = x3d.FontStyle()
FontStyle1138.size = 0.035

Text1137.fontStyle = FontStyle1138

Shape1136.geometry = Text1137

Billboard1135.children.append(Shape1136)

HAnimSite1127.children.append(Billboard1135)

HAnimSegment1126.children.append(HAnimSite1127)
HAnimSite1139 = x3d.HAnimSite(DEF="hanim_cervicale_pt")
HAnimSite1139.name = "cervicale"
HAnimSite1139.translation = [0,1.22,-0.08]
TouchSensor1140 = x3d.TouchSensor()
TouchSensor1140.description = "HAnimSite 10 hanim_cervicale_pt"

HAnimSite1139.children.append(TouchSensor1140)
Shape1141 = x3d.Shape()
Appearance1142 = x3d.Appearance()
Material1143 = x3d.Material()
Material1143.diffuseColor = [1,1,1]

Appearance1142.material = Material1143

Shape1141.appearance = Appearance1142
IndexedFaceSet1144 = x3d.IndexedFaceSet()
IndexedFaceSet1144.solid = False
IndexedFaceSet1144.creaseAngle = 0.5
IndexedFaceSet1144.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1145 = x3d.ColorRGBA()
ColorRGBA1145.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1144.color = ColorRGBA1145
Coordinate1146 = x3d.Coordinate()
Coordinate1146.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1144.coord = Coordinate1146

Shape1141.geometry = IndexedFaceSet1144

HAnimSite1139.children.append(Shape1141)
Billboard1147 = x3d.Billboard()
Billboard1147.axisOfRotation = [0,0,0]
Shape1148 = x3d.Shape()
Text1149 = x3d.Text()
Text1149.string = ["10"]
FontStyle1150 = x3d.FontStyle()
FontStyle1150.size = 0.035

Text1149.fontStyle = FontStyle1150

Shape1148.geometry = Text1149

Billboard1147.children.append(Shape1148)

HAnimSite1139.children.append(Billboard1147)

HAnimSegment1126.children.append(HAnimSite1139)
Shape1151 = x3d.Shape()
LineSet1152 = x3d.LineSet()
LineSet1152.vertexCount = [2]
ColorRGBA1153 = x3d.ColorRGBA()
ColorRGBA1153.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1152.color = ColorRGBA1153
Coordinate1154 = x3d.Coordinate()
Coordinate1154.point = [(0, 1.22, -0.0138),(0, 1.1956, -0.01378)]

LineSet1152.coord = Coordinate1154

Shape1151.geometry = LineSet1152

HAnimSegment1126.children.append(Shape1151)

HAnimJoint1125.children.append(HAnimSegment1126)
HAnimJoint1155 = x3d.HAnimJoint(DEF="hanim_vc7")
HAnimJoint1155.name = "vc7"
HAnimJoint1155.center = [0,1.2453,-0.01506]
HAnimSegment1156 = x3d.HAnimSegment(DEF="hanim_c7")
HAnimSegment1156.name = "c7"
HAnimSite1157 = x3d.HAnimSite(DEF="hanim_l_neck_base_pt")
HAnimSite1157.name = "l_neck_base"
HAnimSite1157.translation = [0.06,1.26,0]
TouchSensor1158 = x3d.TouchSensor()
TouchSensor1158.description = "HAnimSite 82 hanim_l_neck_base_pt"

HAnimSite1157.children.append(TouchSensor1158)
Shape1159 = x3d.Shape()
Appearance1160 = x3d.Appearance()
Material1161 = x3d.Material()
Material1161.diffuseColor = [1,1,1]

Appearance1160.material = Material1161

Shape1159.appearance = Appearance1160
IndexedFaceSet1162 = x3d.IndexedFaceSet()
IndexedFaceSet1162.solid = False
IndexedFaceSet1162.creaseAngle = 0.5
IndexedFaceSet1162.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1163 = x3d.ColorRGBA()
ColorRGBA1163.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1162.color = ColorRGBA1163
Coordinate1164 = x3d.Coordinate()
Coordinate1164.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1162.coord = Coordinate1164

Shape1159.geometry = IndexedFaceSet1162

HAnimSite1157.children.append(Shape1159)
Billboard1165 = x3d.Billboard()
Billboard1165.axisOfRotation = [0,0,0]
Shape1166 = x3d.Shape()
Text1167 = x3d.Text()
Text1167.string = ["82"]
FontStyle1168 = x3d.FontStyle()
FontStyle1168.size = 0.035

Text1167.fontStyle = FontStyle1168

Shape1166.geometry = Text1167

Billboard1165.children.append(Shape1166)

HAnimSite1157.children.append(Billboard1165)

HAnimSegment1156.children.append(HAnimSite1157)
HAnimSite1169 = x3d.HAnimSite(DEF="hanim_r_neck_base_pt")
HAnimSite1169.name = "r_neck_base"
HAnimSite1169.translation = [-0.06,1.26,0]
TouchSensor1170 = x3d.TouchSensor()
TouchSensor1170.description = "HAnimSite 83 hanim_r_neck_base_pt"

HAnimSite1169.children.append(TouchSensor1170)
Shape1171 = x3d.Shape()
Appearance1172 = x3d.Appearance()
Material1173 = x3d.Material()
Material1173.diffuseColor = [1,1,1]

Appearance1172.material = Material1173

Shape1171.appearance = Appearance1172
IndexedFaceSet1174 = x3d.IndexedFaceSet()
IndexedFaceSet1174.solid = False
IndexedFaceSet1174.creaseAngle = 0.5
IndexedFaceSet1174.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1175 = x3d.ColorRGBA()
ColorRGBA1175.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1174.color = ColorRGBA1175
Coordinate1176 = x3d.Coordinate()
Coordinate1176.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1174.coord = Coordinate1176

Shape1171.geometry = IndexedFaceSet1174

HAnimSite1169.children.append(Shape1171)
Billboard1177 = x3d.Billboard()
Billboard1177.axisOfRotation = [0,0,0]
Shape1178 = x3d.Shape()
Text1179 = x3d.Text()
Text1179.string = ["83"]
FontStyle1180 = x3d.FontStyle()
FontStyle1180.size = 0.035

Text1179.fontStyle = FontStyle1180

Shape1178.geometry = Text1179

Billboard1177.children.append(Shape1178)

HAnimSite1169.children.append(Billboard1177)

HAnimSegment1156.children.append(HAnimSite1169)
Shape1181 = x3d.Shape()
LineSet1182 = x3d.LineSet()
LineSet1182.vertexCount = [2]
ColorRGBA1183 = x3d.ColorRGBA()
ColorRGBA1183.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1182.color = ColorRGBA1183
Coordinate1184 = x3d.Coordinate()
Coordinate1184.point = [(0, 1.2453, -0.01506),(0, 1.22, -0.0138)]

LineSet1182.coord = Coordinate1184

Shape1181.geometry = LineSet1182

HAnimSegment1156.children.append(Shape1181)

HAnimJoint1155.children.append(HAnimSegment1156)
HAnimJoint1185 = x3d.HAnimJoint(DEF="hanim_vc6")
HAnimJoint1185.name = "vc6"
HAnimJoint1185.center = [0,1.2575,-0.01506]
HAnimSegment1186 = x3d.HAnimSegment(DEF="hanim_c6")
HAnimSegment1186.name = "c6"
Shape1187 = x3d.Shape()
LineSet1188 = x3d.LineSet()
LineSet1188.vertexCount = [2]
ColorRGBA1189 = x3d.ColorRGBA()
ColorRGBA1189.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1188.color = ColorRGBA1189
Coordinate1190 = x3d.Coordinate()
Coordinate1190.point = [(0, 1.2575, -0.01506),(0, 1.2453, -0.01506)]

LineSet1188.coord = Coordinate1190

Shape1187.geometry = LineSet1188

HAnimSegment1186.children.append(Shape1187)

HAnimJoint1185.children.append(HAnimSegment1186)
HAnimJoint1191 = x3d.HAnimJoint(DEF="hanim_vc5")
HAnimJoint1191.name = "vc5"
HAnimJoint1191.center = [0,1.2699,-0.01506]
HAnimSegment1192 = x3d.HAnimSegment(DEF="hanim_c5")
HAnimSegment1192.name = "c5"
Shape1193 = x3d.Shape()
LineSet1194 = x3d.LineSet()
LineSet1194.vertexCount = [2]
ColorRGBA1195 = x3d.ColorRGBA()
ColorRGBA1195.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1194.color = ColorRGBA1195
Coordinate1196 = x3d.Coordinate()
Coordinate1196.point = [(0, 1.2699, -0.01506),(0, 1.2575, -0.01506)]

LineSet1194.coord = Coordinate1196

Shape1193.geometry = LineSet1194

HAnimSegment1192.children.append(Shape1193)

HAnimJoint1191.children.append(HAnimSegment1192)
HAnimJoint1197 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint1197.name = "vc4"
HAnimJoint1197.center = [0,1.28227,-0.01506]
HAnimSegment1198 = x3d.HAnimSegment(DEF="hanim_c4")
HAnimSegment1198.name = "c4"
Shape1199 = x3d.Shape()
LineSet1200 = x3d.LineSet()
LineSet1200.vertexCount = [2]
ColorRGBA1201 = x3d.ColorRGBA()
ColorRGBA1201.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1200.color = ColorRGBA1201
Coordinate1202 = x3d.Coordinate()
Coordinate1202.point = [(0, 1.28227, -0.01506),(0, 1.2699, -0.01506)]

LineSet1200.coord = Coordinate1202

Shape1199.geometry = LineSet1200

HAnimSegment1198.children.append(Shape1199)

HAnimJoint1197.children.append(HAnimSegment1198)
HAnimJoint1203 = x3d.HAnimJoint(DEF="hanim_vc3")
HAnimJoint1203.name = "vc3"
HAnimJoint1203.center = [0,1.2951,-0.01506]
HAnimSegment1204 = x3d.HAnimSegment(DEF="hanim_c3")
HAnimSegment1204.name = "c3"
Shape1205 = x3d.Shape()
LineSet1206 = x3d.LineSet()
LineSet1206.vertexCount = [2]
ColorRGBA1207 = x3d.ColorRGBA()
ColorRGBA1207.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1206.color = ColorRGBA1207
Coordinate1208 = x3d.Coordinate()
Coordinate1208.point = [(0, 1.2951, -0.01506),(0, 1.28227, -0.01506)]

LineSet1206.coord = Coordinate1208

Shape1205.geometry = LineSet1206

HAnimSegment1204.children.append(Shape1205)

HAnimJoint1203.children.append(HAnimSegment1204)
HAnimJoint1209 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint1209.name = "vc2"
HAnimJoint1209.center = [0,1.307,-0.015]
HAnimSegment1210 = x3d.HAnimSegment(DEF="hanim_c2")
HAnimSegment1210.name = "c2"
HAnimSite1211 = x3d.HAnimSite(DEF="hanim_adams_apple_pt")
HAnimSite1211.name = "adams_apple"
HAnimSite1211.translation = [0,1.29,0.04]
TouchSensor1212 = x3d.TouchSensor()
TouchSensor1212.description = "HAnimSite 11 hanim_adams_apple_pt"

HAnimSite1211.children.append(TouchSensor1212)
Shape1213 = x3d.Shape()
Appearance1214 = x3d.Appearance()
Material1215 = x3d.Material()
Material1215.diffuseColor = [1,1,1]

Appearance1214.material = Material1215

Shape1213.appearance = Appearance1214
IndexedFaceSet1216 = x3d.IndexedFaceSet()
IndexedFaceSet1216.solid = False
IndexedFaceSet1216.creaseAngle = 0.5
IndexedFaceSet1216.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1217 = x3d.ColorRGBA()
ColorRGBA1217.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1216.color = ColorRGBA1217
Coordinate1218 = x3d.Coordinate()
Coordinate1218.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1216.coord = Coordinate1218

Shape1213.geometry = IndexedFaceSet1216

HAnimSite1211.children.append(Shape1213)
Billboard1219 = x3d.Billboard()
Billboard1219.axisOfRotation = [0,0,0]
Shape1220 = x3d.Shape()
Text1221 = x3d.Text()
Text1221.string = ["11"]
FontStyle1222 = x3d.FontStyle()
FontStyle1222.size = 0.035

Text1221.fontStyle = FontStyle1222

Shape1220.geometry = Text1221

Billboard1219.children.append(Shape1220)

HAnimSite1211.children.append(Billboard1219)

HAnimSegment1210.children.append(HAnimSite1211)
Shape1223 = x3d.Shape()
LineSet1224 = x3d.LineSet()
LineSet1224.vertexCount = [2]
ColorRGBA1225 = x3d.ColorRGBA()
ColorRGBA1225.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1224.color = ColorRGBA1225
Coordinate1226 = x3d.Coordinate()
Coordinate1226.point = [(0, 1.307, -0.015),(0, 1.2951, -0.01506)]

LineSet1224.coord = Coordinate1226

Shape1223.geometry = LineSet1224

HAnimSegment1210.children.append(Shape1223)

HAnimJoint1209.children.append(HAnimSegment1210)
HAnimJoint1227 = x3d.HAnimJoint(DEF="hanim_vc1")
HAnimJoint1227.name = "vc1"
HAnimJoint1227.center = [0,1.3185,-0.0151]
HAnimSegment1228 = x3d.HAnimSegment(DEF="hanim_c1")
HAnimSegment1228.name = "c1"
Shape1229 = x3d.Shape()
LineSet1230 = x3d.LineSet()
LineSet1230.vertexCount = [2]
ColorRGBA1231 = x3d.ColorRGBA()
ColorRGBA1231.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1230.color = ColorRGBA1231
Coordinate1232 = x3d.Coordinate()
Coordinate1232.point = [(0, 1.3185, -0.0151),(0, 1.307, -0.015)]

LineSet1230.coord = Coordinate1232

Shape1229.geometry = LineSet1230

HAnimSegment1228.children.append(Shape1229)

HAnimJoint1227.children.append(HAnimSegment1228)
HAnimJoint1233 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint1233.name = "skullbase"
HAnimJoint1233.center = [0,1.3126,-0.0154]
HAnimSegment1234 = x3d.HAnimSegment(DEF="hanim_skull")
HAnimSegment1234.name = "skull"
HAnimSite1235 = x3d.HAnimSite(DEF="hanim_skull_vertex_pt")
HAnimSite1235.name = "skull_vertex"
HAnimSite1235.translation = [0,1.612,-0.03]
TouchSensor1236 = x3d.TouchSensor()
TouchSensor1236.description = "HAnimSite 0 hanim_skull_vertex_pt"

HAnimSite1235.children.append(TouchSensor1236)
Shape1237 = x3d.Shape()
Appearance1238 = x3d.Appearance()
Material1239 = x3d.Material()
Material1239.diffuseColor = [1,1,1]

Appearance1238.material = Material1239

Shape1237.appearance = Appearance1238
IndexedFaceSet1240 = x3d.IndexedFaceSet()
IndexedFaceSet1240.solid = False
IndexedFaceSet1240.creaseAngle = 0.5
IndexedFaceSet1240.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1241 = x3d.ColorRGBA()
ColorRGBA1241.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1240.color = ColorRGBA1241
Coordinate1242 = x3d.Coordinate()
Coordinate1242.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1240.coord = Coordinate1242

Shape1237.geometry = IndexedFaceSet1240

HAnimSite1235.children.append(Shape1237)
Billboard1243 = x3d.Billboard()
Billboard1243.axisOfRotation = [0,0,0]
Shape1244 = x3d.Shape()
Text1245 = x3d.Text()
Text1245.string = ["0"]
FontStyle1246 = x3d.FontStyle()
FontStyle1246.size = 0.035

Text1245.fontStyle = FontStyle1246

Shape1244.geometry = Text1245

Billboard1243.children.append(Shape1244)

HAnimSite1235.children.append(Billboard1243)

HAnimSegment1234.children.append(HAnimSite1235)
HAnimSite1247 = x3d.HAnimSite(DEF="hanim_glabella_pt")
HAnimSite1247.name = "glabella"
HAnimSite1247.translation = [0,1.454,0.128]
TouchSensor1248 = x3d.TouchSensor()
TouchSensor1248.description = "HAnimSite 1 hanim_glabella_pt"

HAnimSite1247.children.append(TouchSensor1248)
Shape1249 = x3d.Shape()
Appearance1250 = x3d.Appearance()
Material1251 = x3d.Material()
Material1251.diffuseColor = [1,1,1]

Appearance1250.material = Material1251

Shape1249.appearance = Appearance1250
IndexedFaceSet1252 = x3d.IndexedFaceSet()
IndexedFaceSet1252.solid = False
IndexedFaceSet1252.creaseAngle = 0.5
IndexedFaceSet1252.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1253 = x3d.ColorRGBA()
ColorRGBA1253.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1252.color = ColorRGBA1253
Coordinate1254 = x3d.Coordinate()
Coordinate1254.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1252.coord = Coordinate1254

Shape1249.geometry = IndexedFaceSet1252

HAnimSite1247.children.append(Shape1249)
Billboard1255 = x3d.Billboard()
Billboard1255.axisOfRotation = [0,0,0]
Shape1256 = x3d.Shape()
Text1257 = x3d.Text()
Text1257.string = ["1"]
FontStyle1258 = x3d.FontStyle()
FontStyle1258.size = 0.035

Text1257.fontStyle = FontStyle1258

Shape1256.geometry = Text1257

Billboard1255.children.append(Shape1256)

HAnimSite1247.children.append(Billboard1255)

HAnimSegment1234.children.append(HAnimSite1247)
HAnimSite1259 = x3d.HAnimSite(DEF="hanim_sellion_pt")
HAnimSite1259.name = "sellion"
HAnimSite1259.translation = [0,1.4,0.12]
TouchSensor1260 = x3d.TouchSensor()
TouchSensor1260.description = "HAnimSite 2 hanim_sellion_pt"

HAnimSite1259.children.append(TouchSensor1260)
Shape1261 = x3d.Shape()
Appearance1262 = x3d.Appearance()
Material1263 = x3d.Material()
Material1263.diffuseColor = [1,1,1]

Appearance1262.material = Material1263

Shape1261.appearance = Appearance1262
IndexedFaceSet1264 = x3d.IndexedFaceSet()
IndexedFaceSet1264.solid = False
IndexedFaceSet1264.creaseAngle = 0.5
IndexedFaceSet1264.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1265 = x3d.ColorRGBA()
ColorRGBA1265.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1264.color = ColorRGBA1265
Coordinate1266 = x3d.Coordinate()
Coordinate1266.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1264.coord = Coordinate1266

Shape1261.geometry = IndexedFaceSet1264

HAnimSite1259.children.append(Shape1261)
Billboard1267 = x3d.Billboard()
Billboard1267.axisOfRotation = [0,0,0]
Shape1268 = x3d.Shape()
Text1269 = x3d.Text()
Text1269.string = ["2"]
FontStyle1270 = x3d.FontStyle()
FontStyle1270.size = 0.035

Text1269.fontStyle = FontStyle1270

Shape1268.geometry = Text1269

Billboard1267.children.append(Shape1268)

HAnimSite1259.children.append(Billboard1267)

HAnimSegment1234.children.append(HAnimSite1259)
HAnimSite1271 = x3d.HAnimSite(DEF="hanim_l_infraorbitale_pt")
HAnimSite1271.name = "l_infraorbitale"
HAnimSite1271.translation = [0.039,1.38,0.09]
TouchSensor1272 = x3d.TouchSensor()
TouchSensor1272.description = "HAnimSite 3 hanim_l_infraorbitale_pt"

HAnimSite1271.children.append(TouchSensor1272)
Shape1273 = x3d.Shape()
Appearance1274 = x3d.Appearance()
Material1275 = x3d.Material()
Material1275.diffuseColor = [1,1,1]

Appearance1274.material = Material1275

Shape1273.appearance = Appearance1274
IndexedFaceSet1276 = x3d.IndexedFaceSet()
IndexedFaceSet1276.solid = False
IndexedFaceSet1276.creaseAngle = 0.5
IndexedFaceSet1276.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1277 = x3d.ColorRGBA()
ColorRGBA1277.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1276.color = ColorRGBA1277
Coordinate1278 = x3d.Coordinate()
Coordinate1278.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1276.coord = Coordinate1278

Shape1273.geometry = IndexedFaceSet1276

HAnimSite1271.children.append(Shape1273)
Billboard1279 = x3d.Billboard()
Billboard1279.axisOfRotation = [0,0,0]
Shape1280 = x3d.Shape()
Text1281 = x3d.Text()
Text1281.string = ["3"]
FontStyle1282 = x3d.FontStyle()
FontStyle1282.size = 0.035

Text1281.fontStyle = FontStyle1282

Shape1280.geometry = Text1281

Billboard1279.children.append(Shape1280)

HAnimSite1271.children.append(Billboard1279)

HAnimSegment1234.children.append(HAnimSite1271)
HAnimSite1283 = x3d.HAnimSite(DEF="hanim_l_tragion_pt")
HAnimSite1283.name = "l_tragion"
HAnimSite1283.translation = [0.1,1.38,0.0282]
TouchSensor1284 = x3d.TouchSensor()
TouchSensor1284.description = "HAnimSite 4 hanim_l_tragion_pt"

HAnimSite1283.children.append(TouchSensor1284)
Shape1285 = x3d.Shape()
Appearance1286 = x3d.Appearance()
Material1287 = x3d.Material()
Material1287.diffuseColor = [1,1,1]

Appearance1286.material = Material1287

Shape1285.appearance = Appearance1286
IndexedFaceSet1288 = x3d.IndexedFaceSet()
IndexedFaceSet1288.solid = False
IndexedFaceSet1288.creaseAngle = 0.5
IndexedFaceSet1288.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1289 = x3d.ColorRGBA()
ColorRGBA1289.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1288.color = ColorRGBA1289
Coordinate1290 = x3d.Coordinate()
Coordinate1290.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1288.coord = Coordinate1290

Shape1285.geometry = IndexedFaceSet1288

HAnimSite1283.children.append(Shape1285)
Billboard1291 = x3d.Billboard()
Billboard1291.axisOfRotation = [0,0,0]
Shape1292 = x3d.Shape()
Text1293 = x3d.Text()
Text1293.string = ["4"]
FontStyle1294 = x3d.FontStyle()
FontStyle1294.size = 0.035

Text1293.fontStyle = FontStyle1294

Shape1292.geometry = Text1293

Billboard1291.children.append(Shape1292)

HAnimSite1283.children.append(Billboard1291)

HAnimSegment1234.children.append(HAnimSite1283)
HAnimSite1295 = x3d.HAnimSite(DEF="hanim_r_infraorbitale_pt")
HAnimSite1295.name = "r_infraorbitale"
HAnimSite1295.translation = [-0.039,1.38,0.09]
TouchSensor1296 = x3d.TouchSensor()
TouchSensor1296.description = "HAnimSite 6 hanim_r_infraorbitale_pt"

HAnimSite1295.children.append(TouchSensor1296)
Shape1297 = x3d.Shape()
Appearance1298 = x3d.Appearance()
Material1299 = x3d.Material()
Material1299.diffuseColor = [1,1,1]

Appearance1298.material = Material1299

Shape1297.appearance = Appearance1298
IndexedFaceSet1300 = x3d.IndexedFaceSet()
IndexedFaceSet1300.solid = False
IndexedFaceSet1300.creaseAngle = 0.5
IndexedFaceSet1300.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1301 = x3d.ColorRGBA()
ColorRGBA1301.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1300.color = ColorRGBA1301
Coordinate1302 = x3d.Coordinate()
Coordinate1302.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1300.coord = Coordinate1302

Shape1297.geometry = IndexedFaceSet1300

HAnimSite1295.children.append(Shape1297)
Billboard1303 = x3d.Billboard()
Billboard1303.axisOfRotation = [0,0,0]
Shape1304 = x3d.Shape()
Text1305 = x3d.Text()
Text1305.string = ["6"]
FontStyle1306 = x3d.FontStyle()
FontStyle1306.size = 0.035

Text1305.fontStyle = FontStyle1306

Shape1304.geometry = Text1305

Billboard1303.children.append(Shape1304)

HAnimSite1295.children.append(Billboard1303)

HAnimSegment1234.children.append(HAnimSite1295)
HAnimSite1307 = x3d.HAnimSite(DEF="hanim_r_tragion_pt")
HAnimSite1307.name = "r_tragion"
HAnimSite1307.translation = [-0.1,1.38,0.0282]
TouchSensor1308 = x3d.TouchSensor()
TouchSensor1308.description = "HAnimSite 7 hanim_r_tragion_pt"

HAnimSite1307.children.append(TouchSensor1308)
Shape1309 = x3d.Shape()
Appearance1310 = x3d.Appearance()
Material1311 = x3d.Material()
Material1311.diffuseColor = [1,1,1]

Appearance1310.material = Material1311

Shape1309.appearance = Appearance1310
IndexedFaceSet1312 = x3d.IndexedFaceSet()
IndexedFaceSet1312.solid = False
IndexedFaceSet1312.creaseAngle = 0.5
IndexedFaceSet1312.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1313 = x3d.ColorRGBA()
ColorRGBA1313.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1312.color = ColorRGBA1313
Coordinate1314 = x3d.Coordinate()
Coordinate1314.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1312.coord = Coordinate1314

Shape1309.geometry = IndexedFaceSet1312

HAnimSite1307.children.append(Shape1309)
Billboard1315 = x3d.Billboard()
Billboard1315.axisOfRotation = [0,0,0]
Shape1316 = x3d.Shape()
Text1317 = x3d.Text()
Text1317.string = ["7"]
FontStyle1318 = x3d.FontStyle()
FontStyle1318.size = 0.035

Text1317.fontStyle = FontStyle1318

Shape1316.geometry = Text1317

Billboard1315.children.append(Shape1316)

HAnimSite1307.children.append(Billboard1315)

HAnimSegment1234.children.append(HAnimSite1307)
HAnimSite1319 = x3d.HAnimSite(DEF="hanim_nuchale_pt")
HAnimSite1319.name = "nuchale"
HAnimSite1319.translation = [0.0039,1.35,-0.16]
TouchSensor1320 = x3d.TouchSensor()
TouchSensor1320.description = "HAnimSite 81 hanim_nuchale_pt"

HAnimSite1319.children.append(TouchSensor1320)
Shape1321 = x3d.Shape()
Appearance1322 = x3d.Appearance()
Material1323 = x3d.Material()
Material1323.diffuseColor = [1,1,1]

Appearance1322.material = Material1323

Shape1321.appearance = Appearance1322
IndexedFaceSet1324 = x3d.IndexedFaceSet()
IndexedFaceSet1324.solid = False
IndexedFaceSet1324.creaseAngle = 0.5
IndexedFaceSet1324.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1325 = x3d.ColorRGBA()
ColorRGBA1325.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1324.color = ColorRGBA1325
Coordinate1326 = x3d.Coordinate()
Coordinate1326.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1324.coord = Coordinate1326

Shape1321.geometry = IndexedFaceSet1324

HAnimSite1319.children.append(Shape1321)
Billboard1327 = x3d.Billboard()
Billboard1327.axisOfRotation = [0,0,0]
Shape1328 = x3d.Shape()
Text1329 = x3d.Text()
Text1329.string = ["81"]
FontStyle1330 = x3d.FontStyle()
FontStyle1330.size = 0.035

Text1329.fontStyle = FontStyle1330

Shape1328.geometry = Text1329

Billboard1327.children.append(Shape1328)

HAnimSite1319.children.append(Billboard1327)

HAnimSegment1234.children.append(HAnimSite1319)
HAnimSite1331 = x3d.HAnimSite(DEF="hanim_opisthocranion_pt")
HAnimSite1331.name = "opisthocranion"
HAnimSite1331.translation = [0.0039,1.4588,-0.18]
TouchSensor1332 = x3d.TouchSensor()
TouchSensor1332.description = "HAnimSite 89 hanim_opisthocranion_pt"

HAnimSite1331.children.append(TouchSensor1332)
Shape1333 = x3d.Shape()
Appearance1334 = x3d.Appearance()
Material1335 = x3d.Material()
Material1335.diffuseColor = [1,1,1]

Appearance1334.material = Material1335

Shape1333.appearance = Appearance1334
IndexedFaceSet1336 = x3d.IndexedFaceSet()
IndexedFaceSet1336.solid = False
IndexedFaceSet1336.creaseAngle = 0.5
IndexedFaceSet1336.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1337 = x3d.ColorRGBA()
ColorRGBA1337.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1336.color = ColorRGBA1337
Coordinate1338 = x3d.Coordinate()
Coordinate1338.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1336.coord = Coordinate1338

Shape1333.geometry = IndexedFaceSet1336

HAnimSite1331.children.append(Shape1333)
Billboard1339 = x3d.Billboard()
Billboard1339.axisOfRotation = [0,0,0]
Shape1340 = x3d.Shape()
Text1341 = x3d.Text()
Text1341.string = ["89"]
FontStyle1342 = x3d.FontStyle()
FontStyle1342.size = 0.035

Text1341.fontStyle = FontStyle1342

Shape1340.geometry = Text1341

Billboard1339.children.append(Shape1340)

HAnimSite1331.children.append(Billboard1339)

HAnimSegment1234.children.append(HAnimSite1331)
HAnimSite1343 = x3d.HAnimSite(DEF="hanim_l_ectocanthus_pt")
HAnimSite1343.name = "l_ectocanthus"
HAnimSite1343.translation = [0.086,1.399,0.074]
TouchSensor1344 = x3d.TouchSensor()
TouchSensor1344.description = "HAnimSite 85 hanim_l_ectocanthus_pt"

HAnimSite1343.children.append(TouchSensor1344)
Shape1345 = x3d.Shape()
Appearance1346 = x3d.Appearance()
Material1347 = x3d.Material()
Material1347.diffuseColor = [1,1,1]

Appearance1346.material = Material1347

Shape1345.appearance = Appearance1346
IndexedFaceSet1348 = x3d.IndexedFaceSet()
IndexedFaceSet1348.solid = False
IndexedFaceSet1348.creaseAngle = 0.5
IndexedFaceSet1348.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1349 = x3d.ColorRGBA()
ColorRGBA1349.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1348.color = ColorRGBA1349
Coordinate1350 = x3d.Coordinate()
Coordinate1350.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1348.coord = Coordinate1350

Shape1345.geometry = IndexedFaceSet1348

HAnimSite1343.children.append(Shape1345)
Billboard1351 = x3d.Billboard()
Billboard1351.axisOfRotation = [0,0,0]
Shape1352 = x3d.Shape()
Text1353 = x3d.Text()
Text1353.string = ["85"]
FontStyle1354 = x3d.FontStyle()
FontStyle1354.size = 0.035

Text1353.fontStyle = FontStyle1354

Shape1352.geometry = Text1353

Billboard1351.children.append(Shape1352)

HAnimSite1343.children.append(Billboard1351)

HAnimSegment1234.children.append(HAnimSite1343)
HAnimSite1355 = x3d.HAnimSite(DEF="hanim_r_ectocanthus_pt")
HAnimSite1355.name = "r_ectocanthus"
HAnimSite1355.translation = [-0.086,1.399,0.074]
TouchSensor1356 = x3d.TouchSensor()
TouchSensor1356.description = "HAnimSite 86 hanim_r_ectocanthus_pt"

HAnimSite1355.children.append(TouchSensor1356)
Shape1357 = x3d.Shape()
Appearance1358 = x3d.Appearance()
Material1359 = x3d.Material()
Material1359.diffuseColor = [1,1,1]

Appearance1358.material = Material1359

Shape1357.appearance = Appearance1358
IndexedFaceSet1360 = x3d.IndexedFaceSet()
IndexedFaceSet1360.solid = False
IndexedFaceSet1360.creaseAngle = 0.5
IndexedFaceSet1360.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1361 = x3d.ColorRGBA()
ColorRGBA1361.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1360.color = ColorRGBA1361
Coordinate1362 = x3d.Coordinate()
Coordinate1362.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1360.coord = Coordinate1362

Shape1357.geometry = IndexedFaceSet1360

HAnimSite1355.children.append(Shape1357)
Billboard1363 = x3d.Billboard()
Billboard1363.axisOfRotation = [0,0,0]
Shape1364 = x3d.Shape()
Text1365 = x3d.Text()
Text1365.string = ["86"]
FontStyle1366 = x3d.FontStyle()
FontStyle1366.size = 0.035

Text1365.fontStyle = FontStyle1366

Shape1364.geometry = Text1365

Billboard1363.children.append(Shape1364)

HAnimSite1355.children.append(Billboard1363)

HAnimSegment1234.children.append(HAnimSite1355)
Shape1367 = x3d.Shape()
LineSet1368 = x3d.LineSet()
LineSet1368.vertexCount = [2]
ColorRGBA1369 = x3d.ColorRGBA()
ColorRGBA1369.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1368.color = ColorRGBA1369
Coordinate1370 = x3d.Coordinate()
Coordinate1370.point = [(0, 1.3126, -0.0154),(0, 1.3185, -0.0151)]

LineSet1368.coord = Coordinate1370

Shape1367.geometry = LineSet1368

HAnimSegment1234.children.append(Shape1367)

HAnimJoint1233.children.append(HAnimSegment1234)
HAnimJoint1371 = x3d.HAnimJoint(DEF="hanim_l_eyelid_joint")
HAnimJoint1371.name = "l_eyelid_joint"
HAnimJoint1371.center = [0.0505,1.42425,0.03294]
HAnimSegment1372 = x3d.HAnimSegment(DEF="hanim_l_eyelid")
HAnimSegment1372.name = "l_eyelid"
HAnimSite1373 = x3d.HAnimSite(DEF="hanim_l_eyelid_tip")
HAnimSite1373.name = "l_eyelid_tip"
HAnimSite1373.translation = [0,2.64,0]
TouchSensor1374 = x3d.TouchSensor()
TouchSensor1374.description = "HAnimSite l_eyelid_tip hanim_l_eyelid_tip"

HAnimSite1373.children.append(TouchSensor1374)
Shape1375 = x3d.Shape()
Appearance1376 = x3d.Appearance()
Material1377 = x3d.Material()
Material1377.diffuseColor = [1,1,1]

Appearance1376.material = Material1377

Shape1375.appearance = Appearance1376
IndexedFaceSet1378 = x3d.IndexedFaceSet()
IndexedFaceSet1378.solid = False
IndexedFaceSet1378.creaseAngle = 0.5
IndexedFaceSet1378.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1379 = x3d.ColorRGBA()
ColorRGBA1379.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1378.color = ColorRGBA1379
Coordinate1380 = x3d.Coordinate()
Coordinate1380.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1378.coord = Coordinate1380

Shape1375.geometry = IndexedFaceSet1378

HAnimSite1373.children.append(Shape1375)
Billboard1381 = x3d.Billboard()
Billboard1381.axisOfRotation = [0,0,0]
Shape1382 = x3d.Shape()
Text1383 = x3d.Text()
Text1383.string = ["l_eyelid_tip"]
FontStyle1384 = x3d.FontStyle()
FontStyle1384.size = 0.035

Text1383.fontStyle = FontStyle1384

Shape1382.geometry = Text1383

Billboard1381.children.append(Shape1382)

HAnimSite1373.children.append(Billboard1381)

HAnimSegment1372.children.append(HAnimSite1373)
Shape1385 = x3d.Shape()
LineSet1386 = x3d.LineSet()
LineSet1386.vertexCount = [2]
ColorRGBA1387 = x3d.ColorRGBA()
ColorRGBA1387.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1386.color = ColorRGBA1387
Coordinate1388 = x3d.Coordinate()
Coordinate1388.point = [(0.0505, 1.42425, 0.03294),(0, 1.3126, -0.0154)]

LineSet1386.coord = Coordinate1388

Shape1385.geometry = LineSet1386

HAnimSegment1372.children.append(Shape1385)

HAnimJoint1371.children.append(HAnimSegment1372)

HAnimJoint1233.children.append(HAnimJoint1371)
HAnimJoint1389 = x3d.HAnimJoint(DEF="hanim_r_eyelid_joint")
HAnimJoint1389.name = "r_eyelid_joint"
HAnimJoint1389.center = [-0.0505,1.42425,0.03294]
HAnimSegment1390 = x3d.HAnimSegment(DEF="hanim_r_eyelid")
HAnimSegment1390.name = "r_eyelid"
HAnimSite1391 = x3d.HAnimSite(DEF="hanim_r_eyelid_tip")
HAnimSite1391.name = "r_eyelid_tip"
HAnimSite1391.translation = [0,2.68,0]
TouchSensor1392 = x3d.TouchSensor()
TouchSensor1392.description = "HAnimSite r_eyelid_tip hanim_r_eyelid_tip"

HAnimSite1391.children.append(TouchSensor1392)
Shape1393 = x3d.Shape()
Appearance1394 = x3d.Appearance()
Material1395 = x3d.Material()
Material1395.diffuseColor = [1,1,1]

Appearance1394.material = Material1395

Shape1393.appearance = Appearance1394
IndexedFaceSet1396 = x3d.IndexedFaceSet()
IndexedFaceSet1396.solid = False
IndexedFaceSet1396.creaseAngle = 0.5
IndexedFaceSet1396.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1397 = x3d.ColorRGBA()
ColorRGBA1397.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1396.color = ColorRGBA1397
Coordinate1398 = x3d.Coordinate()
Coordinate1398.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1396.coord = Coordinate1398

Shape1393.geometry = IndexedFaceSet1396

HAnimSite1391.children.append(Shape1393)
Billboard1399 = x3d.Billboard()
Billboard1399.axisOfRotation = [0,0,0]
Shape1400 = x3d.Shape()
Text1401 = x3d.Text()
Text1401.string = ["r_eyelid_tip"]
FontStyle1402 = x3d.FontStyle()
FontStyle1402.size = 0.035

Text1401.fontStyle = FontStyle1402

Shape1400.geometry = Text1401

Billboard1399.children.append(Shape1400)

HAnimSite1391.children.append(Billboard1399)

HAnimSegment1390.children.append(HAnimSite1391)
Shape1403 = x3d.Shape()
LineSet1404 = x3d.LineSet()
LineSet1404.vertexCount = [2]
ColorRGBA1405 = x3d.ColorRGBA()
ColorRGBA1405.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1404.color = ColorRGBA1405
Coordinate1406 = x3d.Coordinate()
Coordinate1406.point = [(-0.0505, 1.42425, 0.03294),(0, 1.3126, -0.0154)]

LineSet1404.coord = Coordinate1406

Shape1403.geometry = LineSet1404

HAnimSegment1390.children.append(Shape1403)

HAnimJoint1389.children.append(HAnimSegment1390)

HAnimJoint1233.children.append(HAnimJoint1389)
HAnimJoint1407 = x3d.HAnimJoint(DEF="hanim_l_eyeball_joint")
HAnimJoint1407.name = "l_eyeball_joint"
HAnimJoint1407.center = [0.048127,1.4049,0.08305]
HAnimSegment1408 = x3d.HAnimSegment(DEF="hanim_l_eyeball")
HAnimSegment1408.name = "l_eyeball"
HAnimSite1409 = x3d.HAnimSite(DEF="hanim_l_eyeball_tip")
HAnimSite1409.name = "l_eyeball_tip"
HAnimSite1409.translation = [0,2.72,0]
TouchSensor1410 = x3d.TouchSensor()
TouchSensor1410.description = "HAnimSite l_eyeball_tip hanim_l_eyeball_tip"

HAnimSite1409.children.append(TouchSensor1410)
Shape1411 = x3d.Shape()
Appearance1412 = x3d.Appearance()
Material1413 = x3d.Material()
Material1413.diffuseColor = [1,1,1]

Appearance1412.material = Material1413

Shape1411.appearance = Appearance1412
IndexedFaceSet1414 = x3d.IndexedFaceSet()
IndexedFaceSet1414.solid = False
IndexedFaceSet1414.creaseAngle = 0.5
IndexedFaceSet1414.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1415 = x3d.ColorRGBA()
ColorRGBA1415.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1414.color = ColorRGBA1415
Coordinate1416 = x3d.Coordinate()
Coordinate1416.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1414.coord = Coordinate1416

Shape1411.geometry = IndexedFaceSet1414

HAnimSite1409.children.append(Shape1411)
Billboard1417 = x3d.Billboard()
Billboard1417.axisOfRotation = [0,0,0]
Shape1418 = x3d.Shape()
Text1419 = x3d.Text()
Text1419.string = ["l_eyeball_tip"]
FontStyle1420 = x3d.FontStyle()
FontStyle1420.size = 0.035

Text1419.fontStyle = FontStyle1420

Shape1418.geometry = Text1419

Billboard1417.children.append(Shape1418)

HAnimSite1409.children.append(Billboard1417)

HAnimSegment1408.children.append(HAnimSite1409)
Shape1421 = x3d.Shape()
LineSet1422 = x3d.LineSet()
LineSet1422.vertexCount = [2]
ColorRGBA1423 = x3d.ColorRGBA()
ColorRGBA1423.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1422.color = ColorRGBA1423
Coordinate1424 = x3d.Coordinate()
Coordinate1424.point = [(0.048127, 1.4049, 0.08305),(0, 1.3126, -0.0154)]

LineSet1422.coord = Coordinate1424

Shape1421.geometry = LineSet1422

HAnimSegment1408.children.append(Shape1421)

HAnimJoint1407.children.append(HAnimSegment1408)

HAnimJoint1233.children.append(HAnimJoint1407)
HAnimJoint1425 = x3d.HAnimJoint(DEF="hanim_r_eyeball_joint")
HAnimJoint1425.name = "r_eyeball_joint"
HAnimJoint1425.center = [-0.04813,1.4049,0.08305]
HAnimSegment1426 = x3d.HAnimSegment(DEF="hanim_r_eyeball")
HAnimSegment1426.name = "r_eyeball"
HAnimSite1427 = x3d.HAnimSite(DEF="hanim_r_eyeball_tip")
HAnimSite1427.name = "r_eyeball_tip"
HAnimSite1427.translation = [0,2.76,0]
TouchSensor1428 = x3d.TouchSensor()
TouchSensor1428.description = "HAnimSite r_eyeball_tip hanim_r_eyeball_tip"

HAnimSite1427.children.append(TouchSensor1428)
Shape1429 = x3d.Shape()
Appearance1430 = x3d.Appearance()
Material1431 = x3d.Material()
Material1431.diffuseColor = [1,1,1]

Appearance1430.material = Material1431

Shape1429.appearance = Appearance1430
IndexedFaceSet1432 = x3d.IndexedFaceSet()
IndexedFaceSet1432.solid = False
IndexedFaceSet1432.creaseAngle = 0.5
IndexedFaceSet1432.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1433 = x3d.ColorRGBA()
ColorRGBA1433.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1432.color = ColorRGBA1433
Coordinate1434 = x3d.Coordinate()
Coordinate1434.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1432.coord = Coordinate1434

Shape1429.geometry = IndexedFaceSet1432

HAnimSite1427.children.append(Shape1429)
Billboard1435 = x3d.Billboard()
Billboard1435.axisOfRotation = [0,0,0]
Shape1436 = x3d.Shape()
Text1437 = x3d.Text()
Text1437.string = ["r_eyeball_tip"]
FontStyle1438 = x3d.FontStyle()
FontStyle1438.size = 0.035

Text1437.fontStyle = FontStyle1438

Shape1436.geometry = Text1437

Billboard1435.children.append(Shape1436)

HAnimSite1427.children.append(Billboard1435)

HAnimSegment1426.children.append(HAnimSite1427)
Shape1439 = x3d.Shape()
LineSet1440 = x3d.LineSet()
LineSet1440.vertexCount = [2]
ColorRGBA1441 = x3d.ColorRGBA()
ColorRGBA1441.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1440.color = ColorRGBA1441
Coordinate1442 = x3d.Coordinate()
Coordinate1442.point = [(-0.04813, 1.4049, 0.08305),(0, 1.3126, -0.0154)]

LineSet1440.coord = Coordinate1442

Shape1439.geometry = LineSet1440

HAnimSegment1426.children.append(Shape1439)

HAnimJoint1425.children.append(HAnimSegment1426)

HAnimJoint1233.children.append(HAnimJoint1425)
HAnimJoint1443 = x3d.HAnimJoint(DEF="hanim_l_eyebrow_joint")
HAnimJoint1443.name = "l_eyebrow_joint"
HAnimJoint1443.center = [0.02175,1.4139,0.1069]
HAnimSegment1444 = x3d.HAnimSegment(DEF="hanim_l_eyebrow")
HAnimSegment1444.name = "l_eyebrow"
HAnimSite1445 = x3d.HAnimSite(DEF="hanim_l_eyebrow_tip")
HAnimSite1445.name = "l_eyebrow_tip"
HAnimSite1445.translation = [0,2.8,0]
TouchSensor1446 = x3d.TouchSensor()
TouchSensor1446.description = "HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip"

HAnimSite1445.children.append(TouchSensor1446)
Shape1447 = x3d.Shape()
Appearance1448 = x3d.Appearance()
Material1449 = x3d.Material()
Material1449.diffuseColor = [1,1,1]

Appearance1448.material = Material1449

Shape1447.appearance = Appearance1448
IndexedFaceSet1450 = x3d.IndexedFaceSet()
IndexedFaceSet1450.solid = False
IndexedFaceSet1450.creaseAngle = 0.5
IndexedFaceSet1450.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1451 = x3d.ColorRGBA()
ColorRGBA1451.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1450.color = ColorRGBA1451
Coordinate1452 = x3d.Coordinate()
Coordinate1452.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1450.coord = Coordinate1452

Shape1447.geometry = IndexedFaceSet1450

HAnimSite1445.children.append(Shape1447)
Billboard1453 = x3d.Billboard()
Billboard1453.axisOfRotation = [0,0,0]
Shape1454 = x3d.Shape()
Text1455 = x3d.Text()
Text1455.string = ["l_eyebrow_tip"]
FontStyle1456 = x3d.FontStyle()
FontStyle1456.size = 0.035

Text1455.fontStyle = FontStyle1456

Shape1454.geometry = Text1455

Billboard1453.children.append(Shape1454)

HAnimSite1445.children.append(Billboard1453)

HAnimSegment1444.children.append(HAnimSite1445)
Shape1457 = x3d.Shape()
LineSet1458 = x3d.LineSet()
LineSet1458.vertexCount = [2]
ColorRGBA1459 = x3d.ColorRGBA()
ColorRGBA1459.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1458.color = ColorRGBA1459
Coordinate1460 = x3d.Coordinate()
Coordinate1460.point = [(0.02175, 1.4139, 0.1069),(0, 1.3126, -0.0154)]

LineSet1458.coord = Coordinate1460

Shape1457.geometry = LineSet1458

HAnimSegment1444.children.append(Shape1457)

HAnimJoint1443.children.append(HAnimSegment1444)

HAnimJoint1233.children.append(HAnimJoint1443)
HAnimJoint1461 = x3d.HAnimJoint(DEF="hanim_r_eyebrow_joint")
HAnimJoint1461.name = "r_eyebrow_joint"
HAnimJoint1461.center = [-0.02175,1.4139,0.10694]
HAnimSegment1462 = x3d.HAnimSegment(DEF="hanim_r_eyebrow")
HAnimSegment1462.name = "r_eyebrow"
HAnimSite1463 = x3d.HAnimSite(DEF="hanim_r_eyebrow_tip")
HAnimSite1463.name = "r_eyebrow_tip"
HAnimSite1463.translation = [0,2.84,0]
TouchSensor1464 = x3d.TouchSensor()
TouchSensor1464.description = "HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip"

HAnimSite1463.children.append(TouchSensor1464)
Shape1465 = x3d.Shape()
Appearance1466 = x3d.Appearance()
Material1467 = x3d.Material()
Material1467.diffuseColor = [1,1,1]

Appearance1466.material = Material1467

Shape1465.appearance = Appearance1466
IndexedFaceSet1468 = x3d.IndexedFaceSet()
IndexedFaceSet1468.solid = False
IndexedFaceSet1468.creaseAngle = 0.5
IndexedFaceSet1468.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1469 = x3d.ColorRGBA()
ColorRGBA1469.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1468.color = ColorRGBA1469
Coordinate1470 = x3d.Coordinate()
Coordinate1470.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1468.coord = Coordinate1470

Shape1465.geometry = IndexedFaceSet1468

HAnimSite1463.children.append(Shape1465)
Billboard1471 = x3d.Billboard()
Billboard1471.axisOfRotation = [0,0,0]
Shape1472 = x3d.Shape()
Text1473 = x3d.Text()
Text1473.string = ["r_eyebrow_tip"]
FontStyle1474 = x3d.FontStyle()
FontStyle1474.size = 0.035

Text1473.fontStyle = FontStyle1474

Shape1472.geometry = Text1473

Billboard1471.children.append(Shape1472)

HAnimSite1463.children.append(Billboard1471)

HAnimSegment1462.children.append(HAnimSite1463)
Shape1475 = x3d.Shape()
LineSet1476 = x3d.LineSet()
LineSet1476.vertexCount = [2]
ColorRGBA1477 = x3d.ColorRGBA()
ColorRGBA1477.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1476.color = ColorRGBA1477
Coordinate1478 = x3d.Coordinate()
Coordinate1478.point = [(-0.02175, 1.4139, 0.10694),(0, 1.3126, -0.0154)]

LineSet1476.coord = Coordinate1478

Shape1475.geometry = LineSet1476

HAnimSegment1462.children.append(Shape1475)

HAnimJoint1461.children.append(HAnimSegment1462)

HAnimJoint1233.children.append(HAnimJoint1461)
HAnimJoint1479 = x3d.HAnimJoint(DEF="hanim_temporomandibular")
HAnimJoint1479.name = "temporomandibular"
HAnimJoint1479.center = [0,1.3128,0.01538]
HAnimSegment1480 = x3d.HAnimSegment(DEF="hanim_jaw")
HAnimSegment1480.name = "jaw"
HAnimSite1481 = x3d.HAnimSite(DEF="hanim_l_gonion_pt")
HAnimSite1481.name = "l_gonion"
HAnimSite1481.translation = [0.068,1.346,0.033]
TouchSensor1482 = x3d.TouchSensor()
TouchSensor1482.description = "HAnimSite 5 hanim_l_gonion_pt"

HAnimSite1481.children.append(TouchSensor1482)
Shape1483 = x3d.Shape()
Appearance1484 = x3d.Appearance()
Material1485 = x3d.Material()
Material1485.diffuseColor = [1,1,1]

Appearance1484.material = Material1485

Shape1483.appearance = Appearance1484
IndexedFaceSet1486 = x3d.IndexedFaceSet()
IndexedFaceSet1486.solid = False
IndexedFaceSet1486.creaseAngle = 0.5
IndexedFaceSet1486.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1487 = x3d.ColorRGBA()
ColorRGBA1487.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1486.color = ColorRGBA1487
Coordinate1488 = x3d.Coordinate()
Coordinate1488.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1486.coord = Coordinate1488

Shape1483.geometry = IndexedFaceSet1486

HAnimSite1481.children.append(Shape1483)
Billboard1489 = x3d.Billboard()
Billboard1489.axisOfRotation = [0,0,0]
Shape1490 = x3d.Shape()
Text1491 = x3d.Text()
Text1491.string = ["5"]
FontStyle1492 = x3d.FontStyle()
FontStyle1492.size = 0.035

Text1491.fontStyle = FontStyle1492

Shape1490.geometry = Text1491

Billboard1489.children.append(Shape1490)

HAnimSite1481.children.append(Billboard1489)

HAnimSegment1480.children.append(HAnimSite1481)
HAnimSite1493 = x3d.HAnimSite(DEF="hanim_r_gonion_pt")
HAnimSite1493.name = "r_gonion"
HAnimSite1493.translation = [-0.068,1.346,0.033]
TouchSensor1494 = x3d.TouchSensor()
TouchSensor1494.description = "HAnimSite 8 hanim_r_gonion_pt"

HAnimSite1493.children.append(TouchSensor1494)
Shape1495 = x3d.Shape()
Appearance1496 = x3d.Appearance()
Material1497 = x3d.Material()
Material1497.diffuseColor = [1,1,1]

Appearance1496.material = Material1497

Shape1495.appearance = Appearance1496
IndexedFaceSet1498 = x3d.IndexedFaceSet()
IndexedFaceSet1498.solid = False
IndexedFaceSet1498.creaseAngle = 0.5
IndexedFaceSet1498.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1499 = x3d.ColorRGBA()
ColorRGBA1499.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1498.color = ColorRGBA1499
Coordinate1500 = x3d.Coordinate()
Coordinate1500.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1498.coord = Coordinate1500

Shape1495.geometry = IndexedFaceSet1498

HAnimSite1493.children.append(Shape1495)
Billboard1501 = x3d.Billboard()
Billboard1501.axisOfRotation = [0,0,0]
Shape1502 = x3d.Shape()
Text1503 = x3d.Text()
Text1503.string = ["8"]
FontStyle1504 = x3d.FontStyle()
FontStyle1504.size = 0.035

Text1503.fontStyle = FontStyle1504

Shape1502.geometry = Text1503

Billboard1501.children.append(Shape1502)

HAnimSite1493.children.append(Billboard1501)

HAnimSegment1480.children.append(HAnimSite1493)
HAnimSite1505 = x3d.HAnimSite(DEF="hanim_supramenton_pt")
HAnimSite1505.name = "supramenton"
HAnimSite1505.translation = [0,1.32,0.086]
TouchSensor1506 = x3d.TouchSensor()
TouchSensor1506.description = "HAnimSite 9 hanim_supramenton_pt"

HAnimSite1505.children.append(TouchSensor1506)
Shape1507 = x3d.Shape()
Appearance1508 = x3d.Appearance()
Material1509 = x3d.Material()
Material1509.diffuseColor = [1,1,1]

Appearance1508.material = Material1509

Shape1507.appearance = Appearance1508
IndexedFaceSet1510 = x3d.IndexedFaceSet()
IndexedFaceSet1510.solid = False
IndexedFaceSet1510.creaseAngle = 0.5
IndexedFaceSet1510.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1511 = x3d.ColorRGBA()
ColorRGBA1511.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1510.color = ColorRGBA1511
Coordinate1512 = x3d.Coordinate()
Coordinate1512.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1510.coord = Coordinate1512

Shape1507.geometry = IndexedFaceSet1510

HAnimSite1505.children.append(Shape1507)
Billboard1513 = x3d.Billboard()
Billboard1513.axisOfRotation = [0,0,0]
Shape1514 = x3d.Shape()
Text1515 = x3d.Text()
Text1515.string = ["9"]
FontStyle1516 = x3d.FontStyle()
FontStyle1516.size = 0.035

Text1515.fontStyle = FontStyle1516

Shape1514.geometry = Text1515

Billboard1513.children.append(Shape1514)

HAnimSite1505.children.append(Billboard1513)

HAnimSegment1480.children.append(HAnimSite1505)
HAnimSite1517 = x3d.HAnimSite(DEF="hanim_menton_pt")
HAnimSite1517.name = "menton"
HAnimSite1517.translation = [0,1.3,0.08]
TouchSensor1518 = x3d.TouchSensor()
TouchSensor1518.description = "HAnimSite 87 hanim_menton_pt"

HAnimSite1517.children.append(TouchSensor1518)
Shape1519 = x3d.Shape()
Appearance1520 = x3d.Appearance()
Material1521 = x3d.Material()
Material1521.diffuseColor = [1,1,1]

Appearance1520.material = Material1521

Shape1519.appearance = Appearance1520
IndexedFaceSet1522 = x3d.IndexedFaceSet()
IndexedFaceSet1522.solid = False
IndexedFaceSet1522.creaseAngle = 0.5
IndexedFaceSet1522.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1523 = x3d.ColorRGBA()
ColorRGBA1523.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1522.color = ColorRGBA1523
Coordinate1524 = x3d.Coordinate()
Coordinate1524.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1522.coord = Coordinate1524

Shape1519.geometry = IndexedFaceSet1522

HAnimSite1517.children.append(Shape1519)
Billboard1525 = x3d.Billboard()
Billboard1525.axisOfRotation = [0,0,0]
Shape1526 = x3d.Shape()
Text1527 = x3d.Text()
Text1527.string = ["87"]
FontStyle1528 = x3d.FontStyle()
FontStyle1528.size = 0.035

Text1527.fontStyle = FontStyle1528

Shape1526.geometry = Text1527

Billboard1525.children.append(Shape1526)

HAnimSite1517.children.append(Billboard1525)

HAnimSegment1480.children.append(HAnimSite1517)
Shape1529 = x3d.Shape()
LineSet1530 = x3d.LineSet()
LineSet1530.vertexCount = [2]
ColorRGBA1531 = x3d.ColorRGBA()
ColorRGBA1531.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1530.color = ColorRGBA1531
Coordinate1532 = x3d.Coordinate()
Coordinate1532.point = [(0, 1.3128, 0.01538),(0, 1.3126, -0.0154)]

LineSet1530.coord = Coordinate1532

Shape1529.geometry = LineSet1530

HAnimSegment1480.children.append(Shape1529)

HAnimJoint1479.children.append(HAnimSegment1480)

HAnimJoint1233.children.append(HAnimJoint1479)

HAnimJoint1227.children.append(HAnimJoint1233)

HAnimJoint1209.children.append(HAnimJoint1227)

HAnimJoint1203.children.append(HAnimJoint1209)

HAnimJoint1197.children.append(HAnimJoint1203)

HAnimJoint1191.children.append(HAnimJoint1197)

HAnimJoint1185.children.append(HAnimJoint1191)

HAnimJoint1155.children.append(HAnimJoint1185)

HAnimJoint1125.children.append(HAnimJoint1155)
HAnimJoint1533 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint1533.name = "l_sternoclavicular"
HAnimJoint1533.center = [0.03847,1.2087,-0.01378]
HAnimSegment1534 = x3d.HAnimSegment(DEF="hanim_l_clavicle")
HAnimSegment1534.name = "l_clavicle"
HAnimSite1535 = x3d.HAnimSite(DEF="hanim_l_clavicale_pt")
HAnimSite1535.name = "l_clavicale"
HAnimSite1535.translation = [0.03,1.2,0.04]
TouchSensor1536 = x3d.TouchSensor()
TouchSensor1536.description = "HAnimSite l_clavicale hanim_l_clavicale_pt"

HAnimSite1535.children.append(TouchSensor1536)
Shape1537 = x3d.Shape()
Appearance1538 = x3d.Appearance()
Material1539 = x3d.Material()
Material1539.diffuseColor = [1,1,1]

Appearance1538.material = Material1539

Shape1537.appearance = Appearance1538
IndexedFaceSet1540 = x3d.IndexedFaceSet()
IndexedFaceSet1540.solid = False
IndexedFaceSet1540.creaseAngle = 0.5
IndexedFaceSet1540.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1541 = x3d.ColorRGBA()
ColorRGBA1541.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1540.color = ColorRGBA1541
Coordinate1542 = x3d.Coordinate()
Coordinate1542.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1540.coord = Coordinate1542

Shape1537.geometry = IndexedFaceSet1540

HAnimSite1535.children.append(Shape1537)
Billboard1543 = x3d.Billboard()
Billboard1543.axisOfRotation = [0,0,0]
Shape1544 = x3d.Shape()
Text1545 = x3d.Text()
Text1545.string = ["l_clavicale"]
FontStyle1546 = x3d.FontStyle()
FontStyle1546.size = 0.035

Text1545.fontStyle = FontStyle1546

Shape1544.geometry = Text1545

Billboard1543.children.append(Shape1544)

HAnimSite1535.children.append(Billboard1543)

HAnimSegment1534.children.append(HAnimSite1535)
Shape1547 = x3d.Shape()
LineSet1548 = x3d.LineSet()
LineSet1548.vertexCount = [2]
ColorRGBA1549 = x3d.ColorRGBA()
ColorRGBA1549.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1548.color = ColorRGBA1549
Coordinate1550 = x3d.Coordinate()
Coordinate1550.point = [(0.03847, 1.2087, -0.01378),(0, 1.22, -0.0138)]

LineSet1548.coord = Coordinate1550

Shape1547.geometry = LineSet1548

HAnimSegment1534.children.append(Shape1547)

HAnimJoint1533.children.append(HAnimSegment1534)
HAnimJoint1551 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint1551.name = "l_acromioclavicular"
HAnimJoint1551.center = [0.12294,1.191825,-0.0129]
HAnimSegment1552 = x3d.HAnimSegment(DEF="hanim_l_scapula")
HAnimSegment1552.name = "l_scapula"
HAnimSite1553 = x3d.HAnimSite(DEF="hanim_l_acromion_pt")
HAnimSite1553.name = "l_acromion"
HAnimSite1553.translation = [0.15,1.222,-0.02]
TouchSensor1554 = x3d.TouchSensor()
TouchSensor1554.description = "HAnimSite 15 hanim_l_acromion_pt"

HAnimSite1553.children.append(TouchSensor1554)
Shape1555 = x3d.Shape()
Appearance1556 = x3d.Appearance()
Material1557 = x3d.Material()
Material1557.diffuseColor = [1,1,1]

Appearance1556.material = Material1557

Shape1555.appearance = Appearance1556
IndexedFaceSet1558 = x3d.IndexedFaceSet()
IndexedFaceSet1558.solid = False
IndexedFaceSet1558.creaseAngle = 0.5
IndexedFaceSet1558.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1559 = x3d.ColorRGBA()
ColorRGBA1559.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1558.color = ColorRGBA1559
Coordinate1560 = x3d.Coordinate()
Coordinate1560.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1558.coord = Coordinate1560

Shape1555.geometry = IndexedFaceSet1558

HAnimSite1553.children.append(Shape1555)
Billboard1561 = x3d.Billboard()
Billboard1561.axisOfRotation = [0,0,0]
Shape1562 = x3d.Shape()
Text1563 = x3d.Text()
Text1563.string = ["15"]
FontStyle1564 = x3d.FontStyle()
FontStyle1564.size = 0.035

Text1563.fontStyle = FontStyle1564

Shape1562.geometry = Text1563

Billboard1561.children.append(Shape1562)

HAnimSite1553.children.append(Billboard1561)

HAnimSegment1552.children.append(HAnimSite1553)
HAnimSite1565 = x3d.HAnimSite(DEF="hanim_l_axilla_proximal_pt")
HAnimSite1565.name = "l_axilla_proximal"
HAnimSite1565.translation = [0.15,1.16,0.04]
TouchSensor1566 = x3d.TouchSensor()
TouchSensor1566.description = "HAnimSite 16 hanim_l_axilla_proximal_pt"

HAnimSite1565.children.append(TouchSensor1566)
Shape1567 = x3d.Shape()
Appearance1568 = x3d.Appearance()
Material1569 = x3d.Material()
Material1569.diffuseColor = [1,1,1]

Appearance1568.material = Material1569

Shape1567.appearance = Appearance1568
IndexedFaceSet1570 = x3d.IndexedFaceSet()
IndexedFaceSet1570.solid = False
IndexedFaceSet1570.creaseAngle = 0.5
IndexedFaceSet1570.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1571 = x3d.ColorRGBA()
ColorRGBA1571.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1570.color = ColorRGBA1571
Coordinate1572 = x3d.Coordinate()
Coordinate1572.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1570.coord = Coordinate1572

Shape1567.geometry = IndexedFaceSet1570

HAnimSite1565.children.append(Shape1567)
Billboard1573 = x3d.Billboard()
Billboard1573.axisOfRotation = [0,0,0]
Shape1574 = x3d.Shape()
Text1575 = x3d.Text()
Text1575.string = ["16"]
FontStyle1576 = x3d.FontStyle()
FontStyle1576.size = 0.035

Text1575.fontStyle = FontStyle1576

Shape1574.geometry = Text1575

Billboard1573.children.append(Shape1574)

HAnimSite1565.children.append(Billboard1573)

HAnimSegment1552.children.append(HAnimSite1565)
HAnimSite1577 = x3d.HAnimSite(DEF="hanim_l_axilla_distal_pt")
HAnimSite1577.name = "l_axilla_distal"
HAnimSite1577.translation = [0.17,1.14,0]
TouchSensor1578 = x3d.TouchSensor()
TouchSensor1578.description = "HAnimSite 17 hanim_l_axilla_distal_pt"

HAnimSite1577.children.append(TouchSensor1578)
Shape1579 = x3d.Shape()
Appearance1580 = x3d.Appearance()
Material1581 = x3d.Material()
Material1581.diffuseColor = [1,1,1]

Appearance1580.material = Material1581

Shape1579.appearance = Appearance1580
IndexedFaceSet1582 = x3d.IndexedFaceSet()
IndexedFaceSet1582.solid = False
IndexedFaceSet1582.creaseAngle = 0.5
IndexedFaceSet1582.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1583 = x3d.ColorRGBA()
ColorRGBA1583.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1582.color = ColorRGBA1583
Coordinate1584 = x3d.Coordinate()
Coordinate1584.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1582.coord = Coordinate1584

Shape1579.geometry = IndexedFaceSet1582

HAnimSite1577.children.append(Shape1579)
Billboard1585 = x3d.Billboard()
Billboard1585.axisOfRotation = [0,0,0]
Shape1586 = x3d.Shape()
Text1587 = x3d.Text()
Text1587.string = ["17"]
FontStyle1588 = x3d.FontStyle()
FontStyle1588.size = 0.035

Text1587.fontStyle = FontStyle1588

Shape1586.geometry = Text1587

Billboard1585.children.append(Shape1586)

HAnimSite1577.children.append(Billboard1585)

HAnimSegment1552.children.append(HAnimSite1577)
HAnimSite1589 = x3d.HAnimSite(DEF="hanim_l_axilla_posterior_folds_pt")
HAnimSite1589.name = "l_axilla_posterior_folds"
HAnimSite1589.translation = [0.15,1.145,-0.04]
TouchSensor1590 = x3d.TouchSensor()
TouchSensor1590.description = "HAnimSite 18 hanim_l_axilla_posterior_folds_pt"

HAnimSite1589.children.append(TouchSensor1590)
Shape1591 = x3d.Shape()
Appearance1592 = x3d.Appearance()
Material1593 = x3d.Material()
Material1593.diffuseColor = [1,1,1]

Appearance1592.material = Material1593

Shape1591.appearance = Appearance1592
IndexedFaceSet1594 = x3d.IndexedFaceSet()
IndexedFaceSet1594.solid = False
IndexedFaceSet1594.creaseAngle = 0.5
IndexedFaceSet1594.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1595 = x3d.ColorRGBA()
ColorRGBA1595.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1594.color = ColorRGBA1595
Coordinate1596 = x3d.Coordinate()
Coordinate1596.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1594.coord = Coordinate1596

Shape1591.geometry = IndexedFaceSet1594

HAnimSite1589.children.append(Shape1591)
Billboard1597 = x3d.Billboard()
Billboard1597.axisOfRotation = [0,0,0]
Shape1598 = x3d.Shape()
Text1599 = x3d.Text()
Text1599.string = ["18"]
FontStyle1600 = x3d.FontStyle()
FontStyle1600.size = 0.035

Text1599.fontStyle = FontStyle1600

Shape1598.geometry = Text1599

Billboard1597.children.append(Shape1598)

HAnimSite1589.children.append(Billboard1597)

HAnimSegment1552.children.append(HAnimSite1589)
Shape1601 = x3d.Shape()
LineSet1602 = x3d.LineSet()
LineSet1602.vertexCount = [2]
ColorRGBA1603 = x3d.ColorRGBA()
ColorRGBA1603.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1602.color = ColorRGBA1603
Coordinate1604 = x3d.Coordinate()
Coordinate1604.point = [(0.12294, 1.191825, -0.0129),(0.03847, 1.2087, -0.01378)]

LineSet1602.coord = Coordinate1604

Shape1601.geometry = LineSet1602

HAnimSegment1552.children.append(Shape1601)

HAnimJoint1551.children.append(HAnimSegment1552)
HAnimJoint1605 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint1605.name = "l_shoulder"
HAnimJoint1605.center = [0.16506,1.17855,-0.00327]
HAnimSegment1606 = x3d.HAnimSegment(DEF="hanim_l_upperarm")
HAnimSegment1606.name = "l_upperarm"
HAnimSite1607 = x3d.HAnimSite(DEF="hanim_l_humeral_lateral_epicondyle_pt")
HAnimSite1607.name = "l_humeral_lateral_epicondyle"
HAnimSite1607.translation = [0.2,0.95,-0.03]
TouchSensor1608 = x3d.TouchSensor()
TouchSensor1608.description = "HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt"

HAnimSite1607.children.append(TouchSensor1608)
Shape1609 = x3d.Shape()
Appearance1610 = x3d.Appearance()
Material1611 = x3d.Material()
Material1611.diffuseColor = [1,1,1]

Appearance1610.material = Material1611

Shape1609.appearance = Appearance1610
IndexedFaceSet1612 = x3d.IndexedFaceSet()
IndexedFaceSet1612.solid = False
IndexedFaceSet1612.creaseAngle = 0.5
IndexedFaceSet1612.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1613 = x3d.ColorRGBA()
ColorRGBA1613.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1612.color = ColorRGBA1613
Coordinate1614 = x3d.Coordinate()
Coordinate1614.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1612.coord = Coordinate1614

Shape1609.geometry = IndexedFaceSet1612

HAnimSite1607.children.append(Shape1609)
Billboard1615 = x3d.Billboard()
Billboard1615.axisOfRotation = [0,0,0]
Shape1616 = x3d.Shape()
Text1617 = x3d.Text()
Text1617.string = ["63"]
FontStyle1618 = x3d.FontStyle()
FontStyle1618.size = 0.035

Text1617.fontStyle = FontStyle1618

Shape1616.geometry = Text1617

Billboard1615.children.append(Shape1616)

HAnimSite1607.children.append(Billboard1615)

HAnimSegment1606.children.append(HAnimSite1607)
HAnimSite1619 = x3d.HAnimSite(DEF="hanim_l_humeral_medial_epicondyle_pt")
HAnimSite1619.name = "l_humeral_medial_epicondyle"
HAnimSite1619.translation = [0.18,0.93,-0.03]
TouchSensor1620 = x3d.TouchSensor()
TouchSensor1620.description = "HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt"

HAnimSite1619.children.append(TouchSensor1620)
Shape1621 = x3d.Shape()
Appearance1622 = x3d.Appearance()
Material1623 = x3d.Material()
Material1623.diffuseColor = [1,1,1]

Appearance1622.material = Material1623

Shape1621.appearance = Appearance1622
IndexedFaceSet1624 = x3d.IndexedFaceSet()
IndexedFaceSet1624.solid = False
IndexedFaceSet1624.creaseAngle = 0.5
IndexedFaceSet1624.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1625 = x3d.ColorRGBA()
ColorRGBA1625.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1624.color = ColorRGBA1625
Coordinate1626 = x3d.Coordinate()
Coordinate1626.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1624.coord = Coordinate1626

Shape1621.geometry = IndexedFaceSet1624

HAnimSite1619.children.append(Shape1621)
Billboard1627 = x3d.Billboard()
Billboard1627.axisOfRotation = [0,0,0]
Shape1628 = x3d.Shape()
Text1629 = x3d.Text()
Text1629.string = ["64"]
FontStyle1630 = x3d.FontStyle()
FontStyle1630.size = 0.035

Text1629.fontStyle = FontStyle1630

Shape1628.geometry = Text1629

Billboard1627.children.append(Shape1628)

HAnimSite1619.children.append(Billboard1627)

HAnimSegment1606.children.append(HAnimSite1619)
HAnimSite1631 = x3d.HAnimSite(DEF="hanim_l_radiale_pt")
HAnimSite1631.name = "l_radiale"
HAnimSite1631.translation = [0.2,0.91,-0.03]
TouchSensor1632 = x3d.TouchSensor()
TouchSensor1632.description = "HAnimSite 69 hanim_l_radiale_pt"

HAnimSite1631.children.append(TouchSensor1632)
Shape1633 = x3d.Shape()
Appearance1634 = x3d.Appearance()
Material1635 = x3d.Material()
Material1635.diffuseColor = [1,1,1]

Appearance1634.material = Material1635

Shape1633.appearance = Appearance1634
IndexedFaceSet1636 = x3d.IndexedFaceSet()
IndexedFaceSet1636.solid = False
IndexedFaceSet1636.creaseAngle = 0.5
IndexedFaceSet1636.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1637 = x3d.ColorRGBA()
ColorRGBA1637.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1636.color = ColorRGBA1637
Coordinate1638 = x3d.Coordinate()
Coordinate1638.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1636.coord = Coordinate1638

Shape1633.geometry = IndexedFaceSet1636

HAnimSite1631.children.append(Shape1633)
Billboard1639 = x3d.Billboard()
Billboard1639.axisOfRotation = [0,0,0]
Shape1640 = x3d.Shape()
Text1641 = x3d.Text()
Text1641.string = ["69"]
FontStyle1642 = x3d.FontStyle()
FontStyle1642.size = 0.035

Text1641.fontStyle = FontStyle1642

Shape1640.geometry = Text1641

Billboard1639.children.append(Shape1640)

HAnimSite1631.children.append(Billboard1639)

HAnimSegment1606.children.append(HAnimSite1631)
HAnimSite1643 = x3d.HAnimSite(DEF="hanim_l_bideltoid_pt")
HAnimSite1643.name = "l_bideltoid"
HAnimSite1643.translation = [0.225,1.185,0]
TouchSensor1644 = x3d.TouchSensor()
TouchSensor1644.description = "HAnimSite 96 hanim_l_bideltoid_pt"

HAnimSite1643.children.append(TouchSensor1644)
Shape1645 = x3d.Shape()
Appearance1646 = x3d.Appearance()
Material1647 = x3d.Material()
Material1647.diffuseColor = [1,1,1]

Appearance1646.material = Material1647

Shape1645.appearance = Appearance1646
IndexedFaceSet1648 = x3d.IndexedFaceSet()
IndexedFaceSet1648.solid = False
IndexedFaceSet1648.creaseAngle = 0.5
IndexedFaceSet1648.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1649 = x3d.ColorRGBA()
ColorRGBA1649.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1648.color = ColorRGBA1649
Coordinate1650 = x3d.Coordinate()
Coordinate1650.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1648.coord = Coordinate1650

Shape1645.geometry = IndexedFaceSet1648

HAnimSite1643.children.append(Shape1645)
Billboard1651 = x3d.Billboard()
Billboard1651.axisOfRotation = [0,0,0]
Shape1652 = x3d.Shape()
Text1653 = x3d.Text()
Text1653.string = ["96"]
FontStyle1654 = x3d.FontStyle()
FontStyle1654.size = 0.035

Text1653.fontStyle = FontStyle1654

Shape1652.geometry = Text1653

Billboard1651.children.append(Shape1652)

HAnimSite1643.children.append(Billboard1651)

HAnimSegment1606.children.append(HAnimSite1643)
Shape1655 = x3d.Shape()
LineSet1656 = x3d.LineSet()
LineSet1656.vertexCount = [2]
ColorRGBA1657 = x3d.ColorRGBA()
ColorRGBA1657.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1656.color = ColorRGBA1657
Coordinate1658 = x3d.Coordinate()
Coordinate1658.point = [(0.16506, 1.17855, -0.00327),(0.12294, 1.191825, -0.0129)]

LineSet1656.coord = Coordinate1658

Shape1655.geometry = LineSet1656

HAnimSegment1606.children.append(Shape1655)

HAnimJoint1605.children.append(HAnimSegment1606)
HAnimJoint1659 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint1659.name = "l_elbow"
HAnimJoint1659.center = [0.18209,0.9288,-0.00563]
HAnimSegment1660 = x3d.HAnimSegment(DEF="hanim_l_forearm")
HAnimSegment1660.name = "l_forearm"
HAnimSite1661 = x3d.HAnimSite(DEF="hanim_l_radial_styloid_pt")
HAnimSite1661.name = "l_radial_styloid"
HAnimSite1661.translation = [0.18,0.725,0.025]
TouchSensor1662 = x3d.TouchSensor()
TouchSensor1662.description = "HAnimSite 71 hanim_l_radial_styloid_pt"

HAnimSite1661.children.append(TouchSensor1662)
Shape1663 = x3d.Shape()
Appearance1664 = x3d.Appearance()
Material1665 = x3d.Material()
Material1665.diffuseColor = [1,1,1]

Appearance1664.material = Material1665

Shape1663.appearance = Appearance1664
IndexedFaceSet1666 = x3d.IndexedFaceSet()
IndexedFaceSet1666.solid = False
IndexedFaceSet1666.creaseAngle = 0.5
IndexedFaceSet1666.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1667 = x3d.ColorRGBA()
ColorRGBA1667.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1666.color = ColorRGBA1667
Coordinate1668 = x3d.Coordinate()
Coordinate1668.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1666.coord = Coordinate1668

Shape1663.geometry = IndexedFaceSet1666

HAnimSite1661.children.append(Shape1663)
Billboard1669 = x3d.Billboard()
Billboard1669.axisOfRotation = [0,0,0]
Shape1670 = x3d.Shape()
Text1671 = x3d.Text()
Text1671.string = ["71"]
FontStyle1672 = x3d.FontStyle()
FontStyle1672.size = 0.035

Text1671.fontStyle = FontStyle1672

Shape1670.geometry = Text1671

Billboard1669.children.append(Shape1670)

HAnimSite1661.children.append(Billboard1669)

HAnimSegment1660.children.append(HAnimSite1661)
HAnimSite1673 = x3d.HAnimSite(DEF="hanim_l_olecranon_pt")
HAnimSite1673.name = "l_olecranon"
HAnimSite1673.translation = [0.2,0.92,-0.03]
TouchSensor1674 = x3d.TouchSensor()
TouchSensor1674.description = "HAnimSite 65 hanim_l_olecranon_pt"

HAnimSite1673.children.append(TouchSensor1674)
Shape1675 = x3d.Shape()
Appearance1676 = x3d.Appearance()
Material1677 = x3d.Material()
Material1677.diffuseColor = [1,1,1]

Appearance1676.material = Material1677

Shape1675.appearance = Appearance1676
IndexedFaceSet1678 = x3d.IndexedFaceSet()
IndexedFaceSet1678.solid = False
IndexedFaceSet1678.creaseAngle = 0.5
IndexedFaceSet1678.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1679 = x3d.ColorRGBA()
ColorRGBA1679.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1678.color = ColorRGBA1679
Coordinate1680 = x3d.Coordinate()
Coordinate1680.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1678.coord = Coordinate1680

Shape1675.geometry = IndexedFaceSet1678

HAnimSite1673.children.append(Shape1675)
Billboard1681 = x3d.Billboard()
Billboard1681.axisOfRotation = [0,0,0]
Shape1682 = x3d.Shape()
Text1683 = x3d.Text()
Text1683.string = ["65"]
FontStyle1684 = x3d.FontStyle()
FontStyle1684.size = 0.035

Text1683.fontStyle = FontStyle1684

Shape1682.geometry = Text1683

Billboard1681.children.append(Shape1682)

HAnimSite1673.children.append(Billboard1681)

HAnimSegment1660.children.append(HAnimSite1673)
Shape1685 = x3d.Shape()
LineSet1686 = x3d.LineSet()
LineSet1686.vertexCount = [2]
ColorRGBA1687 = x3d.ColorRGBA()
ColorRGBA1687.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1686.color = ColorRGBA1687
Coordinate1688 = x3d.Coordinate()
Coordinate1688.point = [(0.18209, 0.9288, -0.00563),(0.16506, 1.17855, -0.00327)]

LineSet1686.coord = Coordinate1688

Shape1685.geometry = LineSet1686

HAnimSegment1660.children.append(Shape1685)

HAnimJoint1659.children.append(HAnimSegment1660)
HAnimJoint1689 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint1689.name = "l_radiocarpal"
HAnimJoint1689.center = [0.1819,0.72427,-0.005]
HAnimSegment1690 = x3d.HAnimSegment(DEF="hanim_l_carpal")
HAnimSegment1690.name = "l_carpal"
HAnimSite1691 = x3d.HAnimSite(DEF="hanim_l_ulnar_styloid_pt")
HAnimSite1691.name = "l_ulnar_styloid"
HAnimSite1691.translation = [0.2,0.725,0]
TouchSensor1692 = x3d.TouchSensor()
TouchSensor1692.description = "HAnimSite 70 hanim_l_ulnar_styloid_pt"

HAnimSite1691.children.append(TouchSensor1692)
Shape1693 = x3d.Shape()
Appearance1694 = x3d.Appearance()
Material1695 = x3d.Material()
Material1695.diffuseColor = [1,1,1]

Appearance1694.material = Material1695

Shape1693.appearance = Appearance1694
IndexedFaceSet1696 = x3d.IndexedFaceSet()
IndexedFaceSet1696.solid = False
IndexedFaceSet1696.creaseAngle = 0.5
IndexedFaceSet1696.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1697 = x3d.ColorRGBA()
ColorRGBA1697.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1696.color = ColorRGBA1697
Coordinate1698 = x3d.Coordinate()
Coordinate1698.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1696.coord = Coordinate1698

Shape1693.geometry = IndexedFaceSet1696

HAnimSite1691.children.append(Shape1693)
Billboard1699 = x3d.Billboard()
Billboard1699.axisOfRotation = [0,0,0]
Shape1700 = x3d.Shape()
Text1701 = x3d.Text()
Text1701.string = ["70"]
FontStyle1702 = x3d.FontStyle()
FontStyle1702.size = 0.035

Text1701.fontStyle = FontStyle1702

Shape1700.geometry = Text1701

Billboard1699.children.append(Shape1700)

HAnimSite1691.children.append(Billboard1699)

HAnimSegment1690.children.append(HAnimSite1691)
Shape1703 = x3d.Shape()
LineSet1704 = x3d.LineSet()
LineSet1704.vertexCount = [2]
ColorRGBA1705 = x3d.ColorRGBA()
ColorRGBA1705.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1704.color = ColorRGBA1705
Coordinate1706 = x3d.Coordinate()
Coordinate1706.point = [(0.1819, 0.72427, -0.005),(0.18209, 0.9288, -0.00563)]

LineSet1704.coord = Coordinate1706

Shape1703.geometry = LineSet1704

HAnimSegment1690.children.append(Shape1703)

HAnimJoint1689.children.append(HAnimSegment1690)
HAnimJoint1707 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_1")
HAnimJoint1707.name = "l_midcarpal_1"
HAnimJoint1707.center = [0.1813,0.706,0.0193]
HAnimSegment1708 = x3d.HAnimSegment(DEF="hanim_l_trapezium")
HAnimSegment1708.name = "l_trapezium"
Shape1709 = x3d.Shape()
LineSet1710 = x3d.LineSet()
LineSet1710.vertexCount = [2]
ColorRGBA1711 = x3d.ColorRGBA()
ColorRGBA1711.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1710.color = ColorRGBA1711
Coordinate1712 = x3d.Coordinate()
Coordinate1712.point = [(0.1813, 0.706, 0.0193),(0.1819, 0.72427, -0.005)]

LineSet1710.coord = Coordinate1712

Shape1709.geometry = LineSet1710

HAnimSegment1708.children.append(Shape1709)

HAnimJoint1707.children.append(HAnimSegment1708)
HAnimJoint1713 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint1713.name = "l_carpometacarpal_1"
HAnimJoint1713.center = [0.1805,0.69255,0.026]
HAnimSegment1714 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_1")
HAnimSegment1714.name = "l_metacarpal_1"
HAnimSite1715 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_2_pt")
HAnimSite1715.name = "l_metacarpal_phalanx_2"
HAnimSite1715.translation = [0.2,0.665,0.012]
TouchSensor1716 = x3d.TouchSensor()
TouchSensor1716.description = "HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt"

HAnimSite1715.children.append(TouchSensor1716)
Shape1717 = x3d.Shape()
Appearance1718 = x3d.Appearance()
Material1719 = x3d.Material()
Material1719.diffuseColor = [1,1,1]

Appearance1718.material = Material1719

Shape1717.appearance = Appearance1718
IndexedFaceSet1720 = x3d.IndexedFaceSet()
IndexedFaceSet1720.solid = False
IndexedFaceSet1720.creaseAngle = 0.5
IndexedFaceSet1720.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1721 = x3d.ColorRGBA()
ColorRGBA1721.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1720.color = ColorRGBA1721
Coordinate1722 = x3d.Coordinate()
Coordinate1722.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1720.coord = Coordinate1722

Shape1717.geometry = IndexedFaceSet1720

HAnimSite1715.children.append(Shape1717)
Billboard1723 = x3d.Billboard()
Billboard1723.axisOfRotation = [0,0,0]
Shape1724 = x3d.Shape()
Text1725 = x3d.Text()
Text1725.string = ["75"]
FontStyle1726 = x3d.FontStyle()
FontStyle1726.size = 0.035

Text1725.fontStyle = FontStyle1726

Shape1724.geometry = Text1725

Billboard1723.children.append(Shape1724)

HAnimSite1715.children.append(Billboard1723)

HAnimSegment1714.children.append(HAnimSite1715)
Shape1727 = x3d.Shape()
LineSet1728 = x3d.LineSet()
LineSet1728.vertexCount = [2]
ColorRGBA1729 = x3d.ColorRGBA()
ColorRGBA1729.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1728.color = ColorRGBA1729
Coordinate1730 = x3d.Coordinate()
Coordinate1730.point = [(0.1805, 0.69255, 0.026),(0.1813, 0.706, 0.0193)]

LineSet1728.coord = Coordinate1730

Shape1727.geometry = LineSet1728

HAnimSegment1714.children.append(Shape1727)

HAnimJoint1713.children.append(HAnimSegment1714)
HAnimJoint1731 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint1731.name = "l_metacarpophalangeal_1"
HAnimJoint1731.center = [0.181,0.6727,0.03577]
HAnimSegment1732 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimSegment1732.name = "l_carpal_proximal_phalanx_1"
Shape1733 = x3d.Shape()
LineSet1734 = x3d.LineSet()
LineSet1734.vertexCount = [2]
ColorRGBA1735 = x3d.ColorRGBA()
ColorRGBA1735.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1734.color = ColorRGBA1735
Coordinate1736 = x3d.Coordinate()
Coordinate1736.point = [(0.181, 0.6727, 0.03577),(0.1805, 0.69255, 0.026)]

LineSet1734.coord = Coordinate1736

Shape1733.geometry = LineSet1734

HAnimSegment1732.children.append(Shape1733)

HAnimJoint1731.children.append(HAnimSegment1732)
HAnimJoint1737 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint1737.name = "l_carpal_interphalangeal_1"
HAnimJoint1737.center = [0.1826,0.654,0.04966]
HAnimSegment1738 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_1")
HAnimSegment1738.name = "l_carpal_distal_phalanx_1"
HAnimSite1739 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_1_tip")
HAnimSite1739.name = "l_carpal_distal_phalanx_1"
HAnimSite1739.translation = [0.18,0.64,0.06]
TouchSensor1740 = x3d.TouchSensor()
TouchSensor1740.description = "HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip"

HAnimSite1739.children.append(TouchSensor1740)
Shape1741 = x3d.Shape()
Appearance1742 = x3d.Appearance()
Material1743 = x3d.Material()
Material1743.diffuseColor = [1,1,1]

Appearance1742.material = Material1743

Shape1741.appearance = Appearance1742
IndexedFaceSet1744 = x3d.IndexedFaceSet()
IndexedFaceSet1744.solid = False
IndexedFaceSet1744.creaseAngle = 0.5
IndexedFaceSet1744.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1745 = x3d.ColorRGBA()
ColorRGBA1745.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1744.color = ColorRGBA1745
Coordinate1746 = x3d.Coordinate()
Coordinate1746.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1744.coord = Coordinate1746

Shape1741.geometry = IndexedFaceSet1744

HAnimSite1739.children.append(Shape1741)
Billboard1747 = x3d.Billboard()
Billboard1747.axisOfRotation = [0,0,0]
Shape1748 = x3d.Shape()
Text1749 = x3d.Text()
Text1749.string = ["101"]
FontStyle1750 = x3d.FontStyle()
FontStyle1750.size = 0.035

Text1749.fontStyle = FontStyle1750

Shape1748.geometry = Text1749

Billboard1747.children.append(Shape1748)

HAnimSite1739.children.append(Billboard1747)

HAnimSegment1738.children.append(HAnimSite1739)
Shape1751 = x3d.Shape()
LineSet1752 = x3d.LineSet()
LineSet1752.vertexCount = [2]
ColorRGBA1753 = x3d.ColorRGBA()
ColorRGBA1753.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1752.color = ColorRGBA1753
Coordinate1754 = x3d.Coordinate()
Coordinate1754.point = [(0.1826, 0.654, 0.04966),(0.181, 0.6727, 0.03577)]

LineSet1752.coord = Coordinate1754

Shape1751.geometry = LineSet1752

HAnimSegment1738.children.append(Shape1751)

HAnimJoint1737.children.append(HAnimSegment1738)

HAnimJoint1731.children.append(HAnimJoint1737)

HAnimJoint1713.children.append(HAnimJoint1731)

HAnimJoint1707.children.append(HAnimJoint1713)

HAnimJoint1689.children.append(HAnimJoint1707)
HAnimJoint1755 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_2")
HAnimJoint1755.name = "l_midcarpal_2"
HAnimJoint1755.center = [0.18128,0.70695,0.00842]
HAnimSegment1756 = x3d.HAnimSegment(DEF="hanim_l_trapezoid")
HAnimSegment1756.name = "l_trapezoid"
Shape1757 = x3d.Shape()
LineSet1758 = x3d.LineSet()
LineSet1758.vertexCount = [2]
ColorRGBA1759 = x3d.ColorRGBA()
ColorRGBA1759.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1758.color = ColorRGBA1759
Coordinate1760 = x3d.Coordinate()
Coordinate1760.point = [(0.18128, 0.70695, 0.00842),(0.1819, 0.72427, -0.005)]

LineSet1758.coord = Coordinate1760

Shape1757.geometry = LineSet1758

HAnimSegment1756.children.append(Shape1757)

HAnimJoint1755.children.append(HAnimSegment1756)
HAnimJoint1761 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint1761.name = "l_carpometacarpal_2"
HAnimJoint1761.center = [0.18128,0.6876,0.0098]
HAnimSegment1762 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_2")
HAnimSegment1762.name = "l_metacarpal_2"
Shape1763 = x3d.Shape()
LineSet1764 = x3d.LineSet()
LineSet1764.vertexCount = [2]
ColorRGBA1765 = x3d.ColorRGBA()
ColorRGBA1765.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1764.color = ColorRGBA1765
Coordinate1766 = x3d.Coordinate()
Coordinate1766.point = [(0.18128, 0.6876, 0.0098),(0.18128, 0.70695, 0.00842)]

LineSet1764.coord = Coordinate1766

Shape1763.geometry = LineSet1764

HAnimSegment1762.children.append(Shape1763)

HAnimJoint1761.children.append(HAnimSegment1762)
HAnimJoint1767 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint1767.name = "l_metacarpophalangeal_2"
HAnimJoint1767.center = [0.1837,0.6372,0.01507]
HAnimSegment1768 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_2")
HAnimSegment1768.name = "l_carpal_proximal_phalanx_2"
Shape1769 = x3d.Shape()
LineSet1770 = x3d.LineSet()
LineSet1770.vertexCount = [2]
ColorRGBA1771 = x3d.ColorRGBA()
ColorRGBA1771.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1770.color = ColorRGBA1771
Coordinate1772 = x3d.Coordinate()
Coordinate1772.point = [(0.1837, 0.6372, 0.01507),(0.18128, 0.6876, 0.0098)]

LineSet1770.coord = Coordinate1772

Shape1769.geometry = LineSet1770

HAnimSegment1768.children.append(Shape1769)

HAnimJoint1767.children.append(HAnimSegment1768)
HAnimJoint1773 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1773.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1773.center = [0.18171,0.6068,0.01418]
HAnimSegment1774 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimSegment1774.name = "l_carpal_middle_phalanx_2"
Shape1775 = x3d.Shape()
LineSet1776 = x3d.LineSet()
LineSet1776.vertexCount = [2]
ColorRGBA1777 = x3d.ColorRGBA()
ColorRGBA1777.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1776.color = ColorRGBA1777
Coordinate1778 = x3d.Coordinate()
Coordinate1778.point = [(0.18171, 0.6068, 0.01418),(0.1837, 0.6372, 0.01507)]

LineSet1776.coord = Coordinate1778

Shape1775.geometry = LineSet1776

HAnimSegment1774.children.append(Shape1775)

HAnimJoint1773.children.append(HAnimSegment1774)
HAnimJoint1779 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1779.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1779.center = [0.18067,0.5816,0.01338]
HAnimSegment1780 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_2")
HAnimSegment1780.name = "l_carpal_distal_phalanx_2"
HAnimSite1781 = x3d.HAnimSite(DEF="hanim_l_dactylion_pt")
HAnimSite1781.name = "l_dactylion"
HAnimSite1781.translation = [0.17,0.558,0.017]
TouchSensor1782 = x3d.TouchSensor()
TouchSensor1782.description = "HAnimSite 57 hanim_l_dactylion_pt"

HAnimSite1781.children.append(TouchSensor1782)
Shape1783 = x3d.Shape()
Appearance1784 = x3d.Appearance()
Material1785 = x3d.Material()
Material1785.diffuseColor = [1,1,1]

Appearance1784.material = Material1785

Shape1783.appearance = Appearance1784
IndexedFaceSet1786 = x3d.IndexedFaceSet()
IndexedFaceSet1786.solid = False
IndexedFaceSet1786.creaseAngle = 0.5
IndexedFaceSet1786.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1787 = x3d.ColorRGBA()
ColorRGBA1787.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1786.color = ColorRGBA1787
Coordinate1788 = x3d.Coordinate()
Coordinate1788.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1786.coord = Coordinate1788

Shape1783.geometry = IndexedFaceSet1786

HAnimSite1781.children.append(Shape1783)
Billboard1789 = x3d.Billboard()
Billboard1789.axisOfRotation = [0,0,0]
Shape1790 = x3d.Shape()
Text1791 = x3d.Text()
Text1791.string = ["57"]
FontStyle1792 = x3d.FontStyle()
FontStyle1792.size = 0.035

Text1791.fontStyle = FontStyle1792

Shape1790.geometry = Text1791

Billboard1789.children.append(Shape1790)

HAnimSite1781.children.append(Billboard1789)

HAnimSegment1780.children.append(HAnimSite1781)
HAnimSite1793 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_2_tip")
HAnimSite1793.name = "l_carpal_distal_phalanx_2"
HAnimSite1793.translation = [0.172,0.558,0.017]
TouchSensor1794 = x3d.TouchSensor()
TouchSensor1794.description = "HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip"

HAnimSite1793.children.append(TouchSensor1794)
Shape1795 = x3d.Shape()
Appearance1796 = x3d.Appearance()
Material1797 = x3d.Material()
Material1797.diffuseColor = [1,1,1]

Appearance1796.material = Material1797

Shape1795.appearance = Appearance1796
IndexedFaceSet1798 = x3d.IndexedFaceSet()
IndexedFaceSet1798.solid = False
IndexedFaceSet1798.creaseAngle = 0.5
IndexedFaceSet1798.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1799 = x3d.ColorRGBA()
ColorRGBA1799.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1798.color = ColorRGBA1799
Coordinate1800 = x3d.Coordinate()
Coordinate1800.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1798.coord = Coordinate1800

Shape1795.geometry = IndexedFaceSet1798

HAnimSite1793.children.append(Shape1795)
Billboard1801 = x3d.Billboard()
Billboard1801.axisOfRotation = [0,0,0]
Shape1802 = x3d.Shape()
Text1803 = x3d.Text()
Text1803.string = ["102"]
FontStyle1804 = x3d.FontStyle()
FontStyle1804.size = 0.035

Text1803.fontStyle = FontStyle1804

Shape1802.geometry = Text1803

Billboard1801.children.append(Shape1802)

HAnimSite1793.children.append(Billboard1801)

HAnimSegment1780.children.append(HAnimSite1793)
Shape1805 = x3d.Shape()
LineSet1806 = x3d.LineSet()
LineSet1806.vertexCount = [2]
ColorRGBA1807 = x3d.ColorRGBA()
ColorRGBA1807.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1806.color = ColorRGBA1807
Coordinate1808 = x3d.Coordinate()
Coordinate1808.point = [(0.18067, 0.5816, 0.01338),(0.18171, 0.6068, 0.01418)]

LineSet1806.coord = Coordinate1808

Shape1805.geometry = LineSet1806

HAnimSegment1780.children.append(Shape1805)

HAnimJoint1779.children.append(HAnimSegment1780)

HAnimJoint1773.children.append(HAnimJoint1779)

HAnimJoint1767.children.append(HAnimJoint1773)

HAnimJoint1761.children.append(HAnimJoint1767)

HAnimJoint1755.children.append(HAnimJoint1761)

HAnimJoint1689.children.append(HAnimJoint1755)
HAnimJoint1809 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_3")
HAnimJoint1809.name = "l_midcarpal_3"
HAnimJoint1809.center = [0.18108,0.708525,-0.0048]
HAnimSegment1810 = x3d.HAnimSegment(DEF="hanim_l_capitate")
HAnimSegment1810.name = "l_capitate"
Shape1811 = x3d.Shape()
LineSet1812 = x3d.LineSet()
LineSet1812.vertexCount = [2]
ColorRGBA1813 = x3d.ColorRGBA()
ColorRGBA1813.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1812.color = ColorRGBA1813
Coordinate1814 = x3d.Coordinate()
Coordinate1814.point = [(0.18108, 0.708525, -0.0048),(0.1819, 0.72427, -0.005)]

LineSet1812.coord = Coordinate1814

Shape1811.geometry = LineSet1812

HAnimSegment1810.children.append(Shape1811)

HAnimJoint1809.children.append(HAnimSegment1810)
HAnimJoint1815 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint1815.name = "l_carpometacarpal_3"
HAnimJoint1815.center = [0.18108,0.6858,-0.00625]
HAnimSegment1816 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_3")
HAnimSegment1816.name = "l_metacarpal_3"
HAnimSite1817 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_3_pt")
HAnimSite1817.name = "l_metacarpal_phalanx_3"
HAnimSite1817.translation = [0.2,0.665,-0.039]
TouchSensor1818 = x3d.TouchSensor()
TouchSensor1818.description = "HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt"

HAnimSite1817.children.append(TouchSensor1818)
Shape1819 = x3d.Shape()
Appearance1820 = x3d.Appearance()
Material1821 = x3d.Material()
Material1821.diffuseColor = [1,1,1]

Appearance1820.material = Material1821

Shape1819.appearance = Appearance1820
IndexedFaceSet1822 = x3d.IndexedFaceSet()
IndexedFaceSet1822.solid = False
IndexedFaceSet1822.creaseAngle = 0.5
IndexedFaceSet1822.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1823 = x3d.ColorRGBA()
ColorRGBA1823.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1822.color = ColorRGBA1823
Coordinate1824 = x3d.Coordinate()
Coordinate1824.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1822.coord = Coordinate1824

Shape1819.geometry = IndexedFaceSet1822

HAnimSite1817.children.append(Shape1819)
Billboard1825 = x3d.Billboard()
Billboard1825.axisOfRotation = [0,0,0]
Shape1826 = x3d.Shape()
Text1827 = x3d.Text()
Text1827.string = ["76"]
FontStyle1828 = x3d.FontStyle()
FontStyle1828.size = 0.035

Text1827.fontStyle = FontStyle1828

Shape1826.geometry = Text1827

Billboard1825.children.append(Shape1826)

HAnimSite1817.children.append(Billboard1825)

HAnimSegment1816.children.append(HAnimSite1817)
Shape1829 = x3d.Shape()
LineSet1830 = x3d.LineSet()
LineSet1830.vertexCount = [2]
ColorRGBA1831 = x3d.ColorRGBA()
ColorRGBA1831.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1830.color = ColorRGBA1831
Coordinate1832 = x3d.Coordinate()
Coordinate1832.point = [(0.18108, 0.6858, -0.00625),(0.18108, 0.708525, -0.0048)]

LineSet1830.coord = Coordinate1832

Shape1829.geometry = LineSet1830

HAnimSegment1816.children.append(Shape1829)

HAnimJoint1815.children.append(HAnimSegment1816)
HAnimJoint1833 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint1833.name = "l_metacarpophalangeal_3"
HAnimJoint1833.center = [0.18369,0.6349,-0.0039]
HAnimSegment1834 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimSegment1834.name = "l_carpal_proximal_phalanx_3"
Shape1835 = x3d.Shape()
LineSet1836 = x3d.LineSet()
LineSet1836.vertexCount = [2]
ColorRGBA1837 = x3d.ColorRGBA()
ColorRGBA1837.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1836.color = ColorRGBA1837
Coordinate1838 = x3d.Coordinate()
Coordinate1838.point = [(0.18369, 0.6349, -0.0039),(0.18108, 0.6858, -0.00625)]

LineSet1836.coord = Coordinate1838

Shape1835.geometry = LineSet1836

HAnimSegment1834.children.append(Shape1835)

HAnimJoint1833.children.append(HAnimSegment1834)
HAnimJoint1839 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1839.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1839.center = [0.18171,0.6032,-0.0035]
HAnimSegment1840 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimSegment1840.name = "l_carpal_middle_phalanx_3"
Shape1841 = x3d.Shape()
LineSet1842 = x3d.LineSet()
LineSet1842.vertexCount = [2]
ColorRGBA1843 = x3d.ColorRGBA()
ColorRGBA1843.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1842.color = ColorRGBA1843
Coordinate1844 = x3d.Coordinate()
Coordinate1844.point = [(0.18171, 0.6032, -0.0035),(0.18369, 0.6349, -0.0039)]

LineSet1842.coord = Coordinate1844

Shape1841.geometry = LineSet1842

HAnimSegment1840.children.append(Shape1841)

HAnimJoint1839.children.append(HAnimSegment1840)
HAnimJoint1845 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1845.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1845.center = [0.1807,0.5753,-0.0037]
HAnimSegment1846 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_3")
HAnimSegment1846.name = "l_carpal_distal_phalanx_3"
HAnimSite1847 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_3_tip")
HAnimSite1847.name = "l_carpal_distal_phalanx_3"
HAnimSite1847.translation = [0.172,0.555,-0.006]
TouchSensor1848 = x3d.TouchSensor()
TouchSensor1848.description = "HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip"

HAnimSite1847.children.append(TouchSensor1848)
Shape1849 = x3d.Shape()
Appearance1850 = x3d.Appearance()
Material1851 = x3d.Material()
Material1851.diffuseColor = [1,1,1]

Appearance1850.material = Material1851

Shape1849.appearance = Appearance1850
IndexedFaceSet1852 = x3d.IndexedFaceSet()
IndexedFaceSet1852.solid = False
IndexedFaceSet1852.creaseAngle = 0.5
IndexedFaceSet1852.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1853 = x3d.ColorRGBA()
ColorRGBA1853.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1852.color = ColorRGBA1853
Coordinate1854 = x3d.Coordinate()
Coordinate1854.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1852.coord = Coordinate1854

Shape1849.geometry = IndexedFaceSet1852

HAnimSite1847.children.append(Shape1849)
Billboard1855 = x3d.Billboard()
Billboard1855.axisOfRotation = [0,0,0]
Shape1856 = x3d.Shape()
Text1857 = x3d.Text()
Text1857.string = ["103"]
FontStyle1858 = x3d.FontStyle()
FontStyle1858.size = 0.035

Text1857.fontStyle = FontStyle1858

Shape1856.geometry = Text1857

Billboard1855.children.append(Shape1856)

HAnimSite1847.children.append(Billboard1855)

HAnimSegment1846.children.append(HAnimSite1847)
Shape1859 = x3d.Shape()
LineSet1860 = x3d.LineSet()
LineSet1860.vertexCount = [2]
ColorRGBA1861 = x3d.ColorRGBA()
ColorRGBA1861.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1860.color = ColorRGBA1861
Coordinate1862 = x3d.Coordinate()
Coordinate1862.point = [(0.1807, 0.5753, -0.0037),(0.18171, 0.6032, -0.0035)]

LineSet1860.coord = Coordinate1862

Shape1859.geometry = LineSet1860

HAnimSegment1846.children.append(Shape1859)

HAnimJoint1845.children.append(HAnimSegment1846)

HAnimJoint1839.children.append(HAnimJoint1845)

HAnimJoint1833.children.append(HAnimJoint1839)

HAnimJoint1815.children.append(HAnimJoint1833)

HAnimJoint1809.children.append(HAnimJoint1815)

HAnimJoint1689.children.append(HAnimJoint1809)
HAnimJoint1863 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_4_5")
HAnimJoint1863.name = "l_midcarpal_4_5"
HAnimJoint1863.center = [0.18108,0.70582,-0.02574]
HAnimSegment1864 = x3d.HAnimSegment(DEF="hanim_l_hamate")
HAnimSegment1864.name = "l_hamate"
Shape1865 = x3d.Shape()
LineSet1866 = x3d.LineSet()
LineSet1866.vertexCount = [2]
ColorRGBA1867 = x3d.ColorRGBA()
ColorRGBA1867.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1866.color = ColorRGBA1867
Coordinate1868 = x3d.Coordinate()
Coordinate1868.point = [(0.18108, 0.70582, -0.02574),(0.1819, 0.72427, -0.005)]

LineSet1866.coord = Coordinate1868

Shape1865.geometry = LineSet1866

HAnimSegment1864.children.append(Shape1865)

HAnimJoint1863.children.append(HAnimSegment1864)
HAnimJoint1869 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint1869.name = "l_carpometacarpal_4"
HAnimJoint1869.center = [0.1811,0.68625,-0.0199]
HAnimSegment1870 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_4")
HAnimSegment1870.name = "l_metacarpal_4"
Shape1871 = x3d.Shape()
LineSet1872 = x3d.LineSet()
LineSet1872.vertexCount = [2]
ColorRGBA1873 = x3d.ColorRGBA()
ColorRGBA1873.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1872.color = ColorRGBA1873
Coordinate1874 = x3d.Coordinate()
Coordinate1874.point = [(0.1811, 0.68625, -0.0199),(0.18108, 0.70582, -0.02574)]

LineSet1872.coord = Coordinate1874

Shape1871.geometry = LineSet1872

HAnimSegment1870.children.append(Shape1871)

HAnimJoint1869.children.append(HAnimSegment1870)
HAnimJoint1875 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint1875.name = "l_metacarpophalangeal_4"
HAnimJoint1875.center = [0.18369,0.63405,-0.02144]
HAnimSegment1876 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimSegment1876.name = "l_carpal_proximal_phalanx_4"
Shape1877 = x3d.Shape()
LineSet1878 = x3d.LineSet()
LineSet1878.vertexCount = [2]
ColorRGBA1879 = x3d.ColorRGBA()
ColorRGBA1879.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1878.color = ColorRGBA1879
Coordinate1880 = x3d.Coordinate()
Coordinate1880.point = [(0.18369, 0.63405, -0.02144),(0.1811, 0.68625, -0.0199)]

LineSet1878.coord = Coordinate1880

Shape1877.geometry = LineSet1878

HAnimSegment1876.children.append(Shape1877)

HAnimJoint1875.children.append(HAnimSegment1876)
HAnimJoint1881 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1881.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1881.center = [0.1817,0.6066,-0.02064]
HAnimSegment1882 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimSegment1882.name = "l_carpal_middle_phalanx_4"
Shape1883 = x3d.Shape()
LineSet1884 = x3d.LineSet()
LineSet1884.vertexCount = [2]
ColorRGBA1885 = x3d.ColorRGBA()
ColorRGBA1885.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1884.color = ColorRGBA1885
Coordinate1886 = x3d.Coordinate()
Coordinate1886.point = [(0.1817, 0.6066, -0.02064),(0.18369, 0.63405, -0.02144)]

LineSet1884.coord = Coordinate1886

Shape1883.geometry = LineSet1884

HAnimSegment1882.children.append(Shape1883)

HAnimJoint1881.children.append(HAnimSegment1882)
HAnimJoint1887 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1887.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1887.center = [0.18067,0.580725,-0.01977]
HAnimSegment1888 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_4")
HAnimSegment1888.name = "l_carpal_distal_phalanx_4"
HAnimSite1889 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_4_tip")
HAnimSite1889.name = "l_carpal_distal_phalanx_4"
HAnimSite1889.translation = [0.172,0.559,-0.024]
TouchSensor1890 = x3d.TouchSensor()
TouchSensor1890.description = "HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip"

HAnimSite1889.children.append(TouchSensor1890)
Shape1891 = x3d.Shape()
Appearance1892 = x3d.Appearance()
Material1893 = x3d.Material()
Material1893.diffuseColor = [1,1,1]

Appearance1892.material = Material1893

Shape1891.appearance = Appearance1892
IndexedFaceSet1894 = x3d.IndexedFaceSet()
IndexedFaceSet1894.solid = False
IndexedFaceSet1894.creaseAngle = 0.5
IndexedFaceSet1894.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1895 = x3d.ColorRGBA()
ColorRGBA1895.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1894.color = ColorRGBA1895
Coordinate1896 = x3d.Coordinate()
Coordinate1896.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1894.coord = Coordinate1896

Shape1891.geometry = IndexedFaceSet1894

HAnimSite1889.children.append(Shape1891)
Billboard1897 = x3d.Billboard()
Billboard1897.axisOfRotation = [0,0,0]
Shape1898 = x3d.Shape()
Text1899 = x3d.Text()
Text1899.string = ["104"]
FontStyle1900 = x3d.FontStyle()
FontStyle1900.size = 0.035

Text1899.fontStyle = FontStyle1900

Shape1898.geometry = Text1899

Billboard1897.children.append(Shape1898)

HAnimSite1889.children.append(Billboard1897)

HAnimSegment1888.children.append(HAnimSite1889)
Shape1901 = x3d.Shape()
LineSet1902 = x3d.LineSet()
LineSet1902.vertexCount = [2]
ColorRGBA1903 = x3d.ColorRGBA()
ColorRGBA1903.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1902.color = ColorRGBA1903
Coordinate1904 = x3d.Coordinate()
Coordinate1904.point = [(0.18067, 0.580725, -0.01977),(0.1817, 0.6066, -0.02064)]

LineSet1902.coord = Coordinate1904

Shape1901.geometry = LineSet1902

HAnimSegment1888.children.append(Shape1901)

HAnimJoint1887.children.append(HAnimSegment1888)

HAnimJoint1881.children.append(HAnimJoint1887)

HAnimJoint1875.children.append(HAnimJoint1881)

HAnimJoint1869.children.append(HAnimJoint1875)

HAnimJoint1863.children.append(HAnimJoint1869)

HAnimJoint1689.children.append(HAnimJoint1863)
HAnimJoint1905 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint1905.name = "l_carpometacarpal_5"
HAnimJoint1905.center = [0.18164,0.68827,-0.03278]
HAnimSegment1906 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_5")
HAnimSegment1906.name = "l_metacarpal_5"
HAnimSite1907 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_5_pt")
HAnimSite1907.name = "l_metacarpal_phalanx_5"
HAnimSite1907.translation = [0.2,0.665,-0.036]
TouchSensor1908 = x3d.TouchSensor()
TouchSensor1908.description = "HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt"

HAnimSite1907.children.append(TouchSensor1908)
Shape1909 = x3d.Shape()
Appearance1910 = x3d.Appearance()
Material1911 = x3d.Material()
Material1911.diffuseColor = [1,1,1]

Appearance1910.material = Material1911

Shape1909.appearance = Appearance1910
IndexedFaceSet1912 = x3d.IndexedFaceSet()
IndexedFaceSet1912.solid = False
IndexedFaceSet1912.creaseAngle = 0.5
IndexedFaceSet1912.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1913 = x3d.ColorRGBA()
ColorRGBA1913.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1912.color = ColorRGBA1913
Coordinate1914 = x3d.Coordinate()
Coordinate1914.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1912.coord = Coordinate1914

Shape1909.geometry = IndexedFaceSet1912

HAnimSite1907.children.append(Shape1909)
Billboard1915 = x3d.Billboard()
Billboard1915.axisOfRotation = [0,0,0]
Shape1916 = x3d.Shape()
Text1917 = x3d.Text()
Text1917.string = ["77"]
FontStyle1918 = x3d.FontStyle()
FontStyle1918.size = 0.035

Text1917.fontStyle = FontStyle1918

Shape1916.geometry = Text1917

Billboard1915.children.append(Shape1916)

HAnimSite1907.children.append(Billboard1915)

HAnimSegment1906.children.append(HAnimSite1907)
Shape1919 = x3d.Shape()
LineSet1920 = x3d.LineSet()
LineSet1920.vertexCount = [2]
ColorRGBA1921 = x3d.ColorRGBA()
ColorRGBA1921.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1920.color = ColorRGBA1921
Coordinate1922 = x3d.Coordinate()
Coordinate1922.point = [(0.18164, 0.68827, -0.03278),(0.1819, 0.72427, -0.005)]

LineSet1920.coord = Coordinate1922

Shape1919.geometry = LineSet1920

HAnimSegment1906.children.append(Shape1919)

HAnimJoint1905.children.append(HAnimSegment1906)
HAnimJoint1923 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint1923.name = "l_metacarpophalangeal_5"
HAnimJoint1923.center = [0.1833,0.6381,-0.037]
HAnimSegment1924 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimSegment1924.name = "l_carpal_proximal_phalanx_5"
Shape1925 = x3d.Shape()
LineSet1926 = x3d.LineSet()
LineSet1926.vertexCount = [2]
ColorRGBA1927 = x3d.ColorRGBA()
ColorRGBA1927.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1926.color = ColorRGBA1927
Coordinate1928 = x3d.Coordinate()
Coordinate1928.point = [(0.1833, 0.6381, -0.037),(0.18164, 0.68827, -0.03278)]

LineSet1926.coord = Coordinate1928

Shape1925.geometry = LineSet1926

HAnimSegment1924.children.append(Shape1925)

HAnimJoint1923.children.append(HAnimSegment1924)
HAnimJoint1929 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1929.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1929.center = [0.18166,0.621,-0.03715]
HAnimSegment1930 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimSegment1930.name = "l_carpal_middle_phalanx_5"
Shape1931 = x3d.Shape()
LineSet1932 = x3d.LineSet()
LineSet1932.vertexCount = [2]
ColorRGBA1933 = x3d.ColorRGBA()
ColorRGBA1933.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1932.color = ColorRGBA1933
Coordinate1934 = x3d.Coordinate()
Coordinate1934.point = [(0.18166, 0.621, -0.03715),(0.1833, 0.6381, -0.037)]

LineSet1932.coord = Coordinate1934

Shape1931.geometry = LineSet1932

HAnimSegment1930.children.append(Shape1931)

HAnimJoint1929.children.append(HAnimSegment1930)
HAnimJoint1935 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1935.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1935.center = [0.1808,0.6023,-0.0369]
HAnimSegment1936 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_5")
HAnimSegment1936.name = "l_carpal_distal_phalanx_5"
HAnimSite1937 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_5_tip")
HAnimSite1937.name = "l_carpal_distal_phalanx_5"
HAnimSite1937.translation = [0.172,0.58,-0.039]
TouchSensor1938 = x3d.TouchSensor()
TouchSensor1938.description = "HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip"

HAnimSite1937.children.append(TouchSensor1938)
Shape1939 = x3d.Shape()
Appearance1940 = x3d.Appearance()
Material1941 = x3d.Material()
Material1941.diffuseColor = [1,1,1]

Appearance1940.material = Material1941

Shape1939.appearance = Appearance1940
IndexedFaceSet1942 = x3d.IndexedFaceSet()
IndexedFaceSet1942.solid = False
IndexedFaceSet1942.creaseAngle = 0.5
IndexedFaceSet1942.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1943 = x3d.ColorRGBA()
ColorRGBA1943.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1942.color = ColorRGBA1943
Coordinate1944 = x3d.Coordinate()
Coordinate1944.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1942.coord = Coordinate1944

Shape1939.geometry = IndexedFaceSet1942

HAnimSite1937.children.append(Shape1939)
Billboard1945 = x3d.Billboard()
Billboard1945.axisOfRotation = [0,0,0]
Shape1946 = x3d.Shape()
Text1947 = x3d.Text()
Text1947.string = ["105"]
FontStyle1948 = x3d.FontStyle()
FontStyle1948.size = 0.035

Text1947.fontStyle = FontStyle1948

Shape1946.geometry = Text1947

Billboard1945.children.append(Shape1946)

HAnimSite1937.children.append(Billboard1945)

HAnimSegment1936.children.append(HAnimSite1937)
Shape1949 = x3d.Shape()
LineSet1950 = x3d.LineSet()
LineSet1950.vertexCount = [2]
ColorRGBA1951 = x3d.ColorRGBA()
ColorRGBA1951.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1950.color = ColorRGBA1951
Coordinate1952 = x3d.Coordinate()
Coordinate1952.point = [(0.1808, 0.6023, -0.0369),(0.18166, 0.621, -0.03715)]

LineSet1950.coord = Coordinate1952

Shape1949.geometry = LineSet1950

HAnimSegment1936.children.append(Shape1949)

HAnimJoint1935.children.append(HAnimSegment1936)

HAnimJoint1929.children.append(HAnimJoint1935)

HAnimJoint1923.children.append(HAnimJoint1929)

HAnimJoint1905.children.append(HAnimJoint1923)

HAnimJoint1689.children.append(HAnimJoint1905)

HAnimJoint1659.children.append(HAnimJoint1689)

HAnimJoint1605.children.append(HAnimJoint1659)

HAnimJoint1551.children.append(HAnimJoint1605)

HAnimJoint1533.children.append(HAnimJoint1551)

HAnimJoint1125.children.append(HAnimJoint1533)
HAnimJoint1953 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint1953.name = "r_sternoclavicular"
HAnimJoint1953.center = [-0.03847,1.2087,-0.0138]
HAnimSegment1954 = x3d.HAnimSegment(DEF="hanim_r_clavicle")
HAnimSegment1954.name = "r_clavicle"
HAnimSite1955 = x3d.HAnimSite(DEF="hanim_r_clavicale_pt")
HAnimSite1955.name = "r_clavicale"
HAnimSite1955.translation = [-0.03,1.2,0.04]
TouchSensor1956 = x3d.TouchSensor()
TouchSensor1956.description = "HAnimSite r_clavicale hanim_r_clavicale_pt"

HAnimSite1955.children.append(TouchSensor1956)
Shape1957 = x3d.Shape()
Appearance1958 = x3d.Appearance()
Material1959 = x3d.Material()
Material1959.diffuseColor = [1,1,1]

Appearance1958.material = Material1959

Shape1957.appearance = Appearance1958
IndexedFaceSet1960 = x3d.IndexedFaceSet()
IndexedFaceSet1960.solid = False
IndexedFaceSet1960.creaseAngle = 0.5
IndexedFaceSet1960.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1961 = x3d.ColorRGBA()
ColorRGBA1961.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1960.color = ColorRGBA1961
Coordinate1962 = x3d.Coordinate()
Coordinate1962.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1960.coord = Coordinate1962

Shape1957.geometry = IndexedFaceSet1960

HAnimSite1955.children.append(Shape1957)
Billboard1963 = x3d.Billboard()
Billboard1963.axisOfRotation = [0,0,0]
Shape1964 = x3d.Shape()
Text1965 = x3d.Text()
Text1965.string = ["r_clavicale"]
FontStyle1966 = x3d.FontStyle()
FontStyle1966.size = 0.035

Text1965.fontStyle = FontStyle1966

Shape1964.geometry = Text1965

Billboard1963.children.append(Shape1964)

HAnimSite1955.children.append(Billboard1963)

HAnimSegment1954.children.append(HAnimSite1955)
Shape1967 = x3d.Shape()
LineSet1968 = x3d.LineSet()
LineSet1968.vertexCount = [2]
ColorRGBA1969 = x3d.ColorRGBA()
ColorRGBA1969.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet1968.color = ColorRGBA1969
Coordinate1970 = x3d.Coordinate()
Coordinate1970.point = [(-0.03847, 1.2087, -0.0138),(0, 1.22, -0.0138)]

LineSet1968.coord = Coordinate1970

Shape1967.geometry = LineSet1968

HAnimSegment1954.children.append(Shape1967)

HAnimJoint1953.children.append(HAnimSegment1954)
HAnimJoint1971 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint1971.name = "r_acromioclavicular"
HAnimJoint1971.center = [-0.1229,1.19182,-0.0129]
HAnimSegment1972 = x3d.HAnimSegment(DEF="hanim_r_scapula")
HAnimSegment1972.name = "r_scapula"
HAnimSite1973 = x3d.HAnimSite(DEF="hanim_r_acromion_pt")
HAnimSite1973.name = "r_acromion"
HAnimSite1973.translation = [-0.15,1.222,-0.02]
TouchSensor1974 = x3d.TouchSensor()
TouchSensor1974.description = "HAnimSite 20 hanim_r_acromion_pt"

HAnimSite1973.children.append(TouchSensor1974)
Shape1975 = x3d.Shape()
Appearance1976 = x3d.Appearance()
Material1977 = x3d.Material()
Material1977.diffuseColor = [1,1,1]

Appearance1976.material = Material1977

Shape1975.appearance = Appearance1976
IndexedFaceSet1978 = x3d.IndexedFaceSet()
IndexedFaceSet1978.solid = False
IndexedFaceSet1978.creaseAngle = 0.5
IndexedFaceSet1978.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1979 = x3d.ColorRGBA()
ColorRGBA1979.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1978.color = ColorRGBA1979
Coordinate1980 = x3d.Coordinate()
Coordinate1980.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1978.coord = Coordinate1980

Shape1975.geometry = IndexedFaceSet1978

HAnimSite1973.children.append(Shape1975)
Billboard1981 = x3d.Billboard()
Billboard1981.axisOfRotation = [0,0,0]
Shape1982 = x3d.Shape()
Text1983 = x3d.Text()
Text1983.string = ["20"]
FontStyle1984 = x3d.FontStyle()
FontStyle1984.size = 0.035

Text1983.fontStyle = FontStyle1984

Shape1982.geometry = Text1983

Billboard1981.children.append(Shape1982)

HAnimSite1973.children.append(Billboard1981)

HAnimSegment1972.children.append(HAnimSite1973)
HAnimSite1985 = x3d.HAnimSite(DEF="hanim_r_axilla_proximal_pt")
HAnimSite1985.name = "r_axilla_proximal"
HAnimSite1985.translation = [-0.15,1.16,0.04]
TouchSensor1986 = x3d.TouchSensor()
TouchSensor1986.description = "HAnimSite 21 hanim_r_axilla_proximal_pt"

HAnimSite1985.children.append(TouchSensor1986)
Shape1987 = x3d.Shape()
Appearance1988 = x3d.Appearance()
Material1989 = x3d.Material()
Material1989.diffuseColor = [1,1,1]

Appearance1988.material = Material1989

Shape1987.appearance = Appearance1988
IndexedFaceSet1990 = x3d.IndexedFaceSet()
IndexedFaceSet1990.solid = False
IndexedFaceSet1990.creaseAngle = 0.5
IndexedFaceSet1990.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA1991 = x3d.ColorRGBA()
ColorRGBA1991.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet1990.color = ColorRGBA1991
Coordinate1992 = x3d.Coordinate()
Coordinate1992.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet1990.coord = Coordinate1992

Shape1987.geometry = IndexedFaceSet1990

HAnimSite1985.children.append(Shape1987)
Billboard1993 = x3d.Billboard()
Billboard1993.axisOfRotation = [0,0,0]
Shape1994 = x3d.Shape()
Text1995 = x3d.Text()
Text1995.string = ["21"]
FontStyle1996 = x3d.FontStyle()
FontStyle1996.size = 0.035

Text1995.fontStyle = FontStyle1996

Shape1994.geometry = Text1995

Billboard1993.children.append(Shape1994)

HAnimSite1985.children.append(Billboard1993)

HAnimSegment1972.children.append(HAnimSite1985)
HAnimSite1997 = x3d.HAnimSite(DEF="hanim_r_axilla_distal_pt")
HAnimSite1997.name = "r_axilla_distal"
HAnimSite1997.translation = [-0.17,1.14,0]
TouchSensor1998 = x3d.TouchSensor()
TouchSensor1998.description = "HAnimSite 22 hanim_r_axilla_distal_pt"

HAnimSite1997.children.append(TouchSensor1998)
Shape1999 = x3d.Shape()
Appearance2000 = x3d.Appearance()
Material2001 = x3d.Material()
Material2001.diffuseColor = [1,1,1]

Appearance2000.material = Material2001

Shape1999.appearance = Appearance2000
IndexedFaceSet2002 = x3d.IndexedFaceSet()
IndexedFaceSet2002.solid = False
IndexedFaceSet2002.creaseAngle = 0.5
IndexedFaceSet2002.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2003 = x3d.ColorRGBA()
ColorRGBA2003.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2002.color = ColorRGBA2003
Coordinate2004 = x3d.Coordinate()
Coordinate2004.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2002.coord = Coordinate2004

Shape1999.geometry = IndexedFaceSet2002

HAnimSite1997.children.append(Shape1999)
Billboard2005 = x3d.Billboard()
Billboard2005.axisOfRotation = [0,0,0]
Shape2006 = x3d.Shape()
Text2007 = x3d.Text()
Text2007.string = ["22"]
FontStyle2008 = x3d.FontStyle()
FontStyle2008.size = 0.035

Text2007.fontStyle = FontStyle2008

Shape2006.geometry = Text2007

Billboard2005.children.append(Shape2006)

HAnimSite1997.children.append(Billboard2005)

HAnimSegment1972.children.append(HAnimSite1997)
HAnimSite2009 = x3d.HAnimSite(DEF="hanim_r_axilla_posterior_folds_pt")
HAnimSite2009.name = "r_axilla_posterior_folds"
HAnimSite2009.translation = [-0.15,1.145,-0.04]
TouchSensor2010 = x3d.TouchSensor()
TouchSensor2010.description = "HAnimSite 23 hanim_r_axilla_posterior_folds_pt"

HAnimSite2009.children.append(TouchSensor2010)
Shape2011 = x3d.Shape()
Appearance2012 = x3d.Appearance()
Material2013 = x3d.Material()
Material2013.diffuseColor = [1,1,1]

Appearance2012.material = Material2013

Shape2011.appearance = Appearance2012
IndexedFaceSet2014 = x3d.IndexedFaceSet()
IndexedFaceSet2014.solid = False
IndexedFaceSet2014.creaseAngle = 0.5
IndexedFaceSet2014.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2015 = x3d.ColorRGBA()
ColorRGBA2015.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2014.color = ColorRGBA2015
Coordinate2016 = x3d.Coordinate()
Coordinate2016.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2014.coord = Coordinate2016

Shape2011.geometry = IndexedFaceSet2014

HAnimSite2009.children.append(Shape2011)
Billboard2017 = x3d.Billboard()
Billboard2017.axisOfRotation = [0,0,0]
Shape2018 = x3d.Shape()
Text2019 = x3d.Text()
Text2019.string = ["23"]
FontStyle2020 = x3d.FontStyle()
FontStyle2020.size = 0.035

Text2019.fontStyle = FontStyle2020

Shape2018.geometry = Text2019

Billboard2017.children.append(Shape2018)

HAnimSite2009.children.append(Billboard2017)

HAnimSegment1972.children.append(HAnimSite2009)
Shape2021 = x3d.Shape()
LineSet2022 = x3d.LineSet()
LineSet2022.vertexCount = [2]
ColorRGBA2023 = x3d.ColorRGBA()
ColorRGBA2023.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2022.color = ColorRGBA2023
Coordinate2024 = x3d.Coordinate()
Coordinate2024.point = [(-0.1229, 1.19182, -0.0129),(-0.03847, 1.2087, -0.0138)]

LineSet2022.coord = Coordinate2024

Shape2021.geometry = LineSet2022

HAnimSegment1972.children.append(Shape2021)

HAnimJoint1971.children.append(HAnimSegment1972)
HAnimJoint2025 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint2025.name = "r_shoulder"
HAnimJoint2025.center = [-0.1647,1.17855,-0.00327]
HAnimSegment2026 = x3d.HAnimSegment(DEF="hanim_r_upperarm")
HAnimSegment2026.name = "r_upperarm"
HAnimSite2027 = x3d.HAnimSite(DEF="hanim_r_humeral_lateral_epicondyle_pt")
HAnimSite2027.name = "r_humeral_lateral_epicondyle"
HAnimSite2027.translation = [-0.2,0.95,-0.03]
TouchSensor2028 = x3d.TouchSensor()
TouchSensor2028.description = "HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt"

HAnimSite2027.children.append(TouchSensor2028)
Shape2029 = x3d.Shape()
Appearance2030 = x3d.Appearance()
Material2031 = x3d.Material()
Material2031.diffuseColor = [1,1,1]

Appearance2030.material = Material2031

Shape2029.appearance = Appearance2030
IndexedFaceSet2032 = x3d.IndexedFaceSet()
IndexedFaceSet2032.solid = False
IndexedFaceSet2032.creaseAngle = 0.5
IndexedFaceSet2032.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2033 = x3d.ColorRGBA()
ColorRGBA2033.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2032.color = ColorRGBA2033
Coordinate2034 = x3d.Coordinate()
Coordinate2034.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2032.coord = Coordinate2034

Shape2029.geometry = IndexedFaceSet2032

HAnimSite2027.children.append(Shape2029)
Billboard2035 = x3d.Billboard()
Billboard2035.axisOfRotation = [0,0,0]
Shape2036 = x3d.Shape()
Text2037 = x3d.Text()
Text2037.string = ["66"]
FontStyle2038 = x3d.FontStyle()
FontStyle2038.size = 0.035

Text2037.fontStyle = FontStyle2038

Shape2036.geometry = Text2037

Billboard2035.children.append(Shape2036)

HAnimSite2027.children.append(Billboard2035)

HAnimSegment2026.children.append(HAnimSite2027)
HAnimSite2039 = x3d.HAnimSite(DEF="hanim_r_humeral_medial_epicondyle_pt")
HAnimSite2039.name = "r_humeral_medial_epicondyle"
HAnimSite2039.translation = [-0.18,0.93,-0.03]
TouchSensor2040 = x3d.TouchSensor()
TouchSensor2040.description = "HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt"

HAnimSite2039.children.append(TouchSensor2040)
Shape2041 = x3d.Shape()
Appearance2042 = x3d.Appearance()
Material2043 = x3d.Material()
Material2043.diffuseColor = [1,1,1]

Appearance2042.material = Material2043

Shape2041.appearance = Appearance2042
IndexedFaceSet2044 = x3d.IndexedFaceSet()
IndexedFaceSet2044.solid = False
IndexedFaceSet2044.creaseAngle = 0.5
IndexedFaceSet2044.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2045 = x3d.ColorRGBA()
ColorRGBA2045.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2044.color = ColorRGBA2045
Coordinate2046 = x3d.Coordinate()
Coordinate2046.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2044.coord = Coordinate2046

Shape2041.geometry = IndexedFaceSet2044

HAnimSite2039.children.append(Shape2041)
Billboard2047 = x3d.Billboard()
Billboard2047.axisOfRotation = [0,0,0]
Shape2048 = x3d.Shape()
Text2049 = x3d.Text()
Text2049.string = ["67"]
FontStyle2050 = x3d.FontStyle()
FontStyle2050.size = 0.035

Text2049.fontStyle = FontStyle2050

Shape2048.geometry = Text2049

Billboard2047.children.append(Shape2048)

HAnimSite2039.children.append(Billboard2047)

HAnimSegment2026.children.append(HAnimSite2039)
HAnimSite2051 = x3d.HAnimSite(DEF="hanim_r_radiale_pt")
HAnimSite2051.name = "r_radiale"
HAnimSite2051.translation = [-0.2,0.91,-0.03]
TouchSensor2052 = x3d.TouchSensor()
TouchSensor2052.description = "HAnimSite 72 hanim_r_radiale_pt"

HAnimSite2051.children.append(TouchSensor2052)
Shape2053 = x3d.Shape()
Appearance2054 = x3d.Appearance()
Material2055 = x3d.Material()
Material2055.diffuseColor = [1,1,1]

Appearance2054.material = Material2055

Shape2053.appearance = Appearance2054
IndexedFaceSet2056 = x3d.IndexedFaceSet()
IndexedFaceSet2056.solid = False
IndexedFaceSet2056.creaseAngle = 0.5
IndexedFaceSet2056.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2057 = x3d.ColorRGBA()
ColorRGBA2057.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2056.color = ColorRGBA2057
Coordinate2058 = x3d.Coordinate()
Coordinate2058.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2056.coord = Coordinate2058

Shape2053.geometry = IndexedFaceSet2056

HAnimSite2051.children.append(Shape2053)
Billboard2059 = x3d.Billboard()
Billboard2059.axisOfRotation = [0,0,0]
Shape2060 = x3d.Shape()
Text2061 = x3d.Text()
Text2061.string = ["72"]
FontStyle2062 = x3d.FontStyle()
FontStyle2062.size = 0.035

Text2061.fontStyle = FontStyle2062

Shape2060.geometry = Text2061

Billboard2059.children.append(Shape2060)

HAnimSite2051.children.append(Billboard2059)

HAnimSegment2026.children.append(HAnimSite2051)
HAnimSite2063 = x3d.HAnimSite(DEF="hanim_r_bideltoid_pt")
HAnimSite2063.name = "r_bideltoid"
HAnimSite2063.translation = [-0.225,1.185,0]
TouchSensor2064 = x3d.TouchSensor()
TouchSensor2064.description = "HAnimSite 97 hanim_r_bideltoid_pt"

HAnimSite2063.children.append(TouchSensor2064)
Shape2065 = x3d.Shape()
Appearance2066 = x3d.Appearance()
Material2067 = x3d.Material()
Material2067.diffuseColor = [1,1,1]

Appearance2066.material = Material2067

Shape2065.appearance = Appearance2066
IndexedFaceSet2068 = x3d.IndexedFaceSet()
IndexedFaceSet2068.solid = False
IndexedFaceSet2068.creaseAngle = 0.5
IndexedFaceSet2068.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2069 = x3d.ColorRGBA()
ColorRGBA2069.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2068.color = ColorRGBA2069
Coordinate2070 = x3d.Coordinate()
Coordinate2070.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2068.coord = Coordinate2070

Shape2065.geometry = IndexedFaceSet2068

HAnimSite2063.children.append(Shape2065)
Billboard2071 = x3d.Billboard()
Billboard2071.axisOfRotation = [0,0,0]
Shape2072 = x3d.Shape()
Text2073 = x3d.Text()
Text2073.string = ["97"]
FontStyle2074 = x3d.FontStyle()
FontStyle2074.size = 0.035

Text2073.fontStyle = FontStyle2074

Shape2072.geometry = Text2073

Billboard2071.children.append(Shape2072)

HAnimSite2063.children.append(Billboard2071)

HAnimSegment2026.children.append(HAnimSite2063)
Shape2075 = x3d.Shape()
LineSet2076 = x3d.LineSet()
LineSet2076.vertexCount = [2]
ColorRGBA2077 = x3d.ColorRGBA()
ColorRGBA2077.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2076.color = ColorRGBA2077
Coordinate2078 = x3d.Coordinate()
Coordinate2078.point = [(-0.1647, 1.17855, -0.00327),(-0.1229, 1.19182, -0.0129)]

LineSet2076.coord = Coordinate2078

Shape2075.geometry = LineSet2076

HAnimSegment2026.children.append(Shape2075)

HAnimJoint2025.children.append(HAnimSegment2026)
HAnimJoint2079 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint2079.name = "r_elbow"
HAnimJoint2079.center = [-0.1817,0.9288,-0.00564]
HAnimSegment2080 = x3d.HAnimSegment(DEF="hanim_r_forearm")
HAnimSegment2080.name = "r_forearm"
HAnimSite2081 = x3d.HAnimSite(DEF="hanim_r_radial_styloid_pt")
HAnimSite2081.name = "r_radial_styloid"
HAnimSite2081.translation = [-0.18,0.725,0.025]
TouchSensor2082 = x3d.TouchSensor()
TouchSensor2082.description = "HAnimSite 74 hanim_r_radial_styloid_pt"

HAnimSite2081.children.append(TouchSensor2082)
Shape2083 = x3d.Shape()
Appearance2084 = x3d.Appearance()
Material2085 = x3d.Material()
Material2085.diffuseColor = [1,1,1]

Appearance2084.material = Material2085

Shape2083.appearance = Appearance2084
IndexedFaceSet2086 = x3d.IndexedFaceSet()
IndexedFaceSet2086.solid = False
IndexedFaceSet2086.creaseAngle = 0.5
IndexedFaceSet2086.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2087 = x3d.ColorRGBA()
ColorRGBA2087.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2086.color = ColorRGBA2087
Coordinate2088 = x3d.Coordinate()
Coordinate2088.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2086.coord = Coordinate2088

Shape2083.geometry = IndexedFaceSet2086

HAnimSite2081.children.append(Shape2083)
Billboard2089 = x3d.Billboard()
Billboard2089.axisOfRotation = [0,0,0]
Shape2090 = x3d.Shape()
Text2091 = x3d.Text()
Text2091.string = ["74"]
FontStyle2092 = x3d.FontStyle()
FontStyle2092.size = 0.035

Text2091.fontStyle = FontStyle2092

Shape2090.geometry = Text2091

Billboard2089.children.append(Shape2090)

HAnimSite2081.children.append(Billboard2089)

HAnimSegment2080.children.append(HAnimSite2081)
HAnimSite2093 = x3d.HAnimSite(DEF="hanim_r_olecranon_pt")
HAnimSite2093.name = "r_olecranon"
HAnimSite2093.translation = [-0.2,0.92,-0.03]
TouchSensor2094 = x3d.TouchSensor()
TouchSensor2094.description = "HAnimSite 68 hanim_r_olecranon_pt"

HAnimSite2093.children.append(TouchSensor2094)
Shape2095 = x3d.Shape()
Appearance2096 = x3d.Appearance()
Material2097 = x3d.Material()
Material2097.diffuseColor = [1,1,1]

Appearance2096.material = Material2097

Shape2095.appearance = Appearance2096
IndexedFaceSet2098 = x3d.IndexedFaceSet()
IndexedFaceSet2098.solid = False
IndexedFaceSet2098.creaseAngle = 0.5
IndexedFaceSet2098.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2099 = x3d.ColorRGBA()
ColorRGBA2099.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2098.color = ColorRGBA2099
Coordinate2100 = x3d.Coordinate()
Coordinate2100.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2098.coord = Coordinate2100

Shape2095.geometry = IndexedFaceSet2098

HAnimSite2093.children.append(Shape2095)
Billboard2101 = x3d.Billboard()
Billboard2101.axisOfRotation = [0,0,0]
Shape2102 = x3d.Shape()
Text2103 = x3d.Text()
Text2103.string = ["68"]
FontStyle2104 = x3d.FontStyle()
FontStyle2104.size = 0.035

Text2103.fontStyle = FontStyle2104

Shape2102.geometry = Text2103

Billboard2101.children.append(Shape2102)

HAnimSite2093.children.append(Billboard2101)

HAnimSegment2080.children.append(HAnimSite2093)
Shape2105 = x3d.Shape()
LineSet2106 = x3d.LineSet()
LineSet2106.vertexCount = [2]
ColorRGBA2107 = x3d.ColorRGBA()
ColorRGBA2107.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2106.color = ColorRGBA2107
Coordinate2108 = x3d.Coordinate()
Coordinate2108.point = [(-0.1817, 0.9288, -0.00564),(-0.1647, 1.17855, -0.00327)]

LineSet2106.coord = Coordinate2108

Shape2105.geometry = LineSet2106

HAnimSegment2080.children.append(Shape2105)

HAnimJoint2079.children.append(HAnimSegment2080)
HAnimJoint2109 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint2109.name = "r_radiocarpal"
HAnimJoint2109.center = [-0.1816,0.7242,-0.005]
HAnimSegment2110 = x3d.HAnimSegment(DEF="hanim_r_carpal")
HAnimSegment2110.name = "r_carpal"
HAnimSite2111 = x3d.HAnimSite(DEF="hanim_r_ulnar_styloid_pt")
HAnimSite2111.name = "r_ulnar_styloid"
HAnimSite2111.translation = [-0.2,0.725,0]
TouchSensor2112 = x3d.TouchSensor()
TouchSensor2112.description = "HAnimSite 73 hanim_r_ulnar_styloid_pt"

HAnimSite2111.children.append(TouchSensor2112)
Shape2113 = x3d.Shape()
Appearance2114 = x3d.Appearance()
Material2115 = x3d.Material()
Material2115.diffuseColor = [1,1,1]

Appearance2114.material = Material2115

Shape2113.appearance = Appearance2114
IndexedFaceSet2116 = x3d.IndexedFaceSet()
IndexedFaceSet2116.solid = False
IndexedFaceSet2116.creaseAngle = 0.5
IndexedFaceSet2116.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2117 = x3d.ColorRGBA()
ColorRGBA2117.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2116.color = ColorRGBA2117
Coordinate2118 = x3d.Coordinate()
Coordinate2118.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2116.coord = Coordinate2118

Shape2113.geometry = IndexedFaceSet2116

HAnimSite2111.children.append(Shape2113)
Billboard2119 = x3d.Billboard()
Billboard2119.axisOfRotation = [0,0,0]
Shape2120 = x3d.Shape()
Text2121 = x3d.Text()
Text2121.string = ["73"]
FontStyle2122 = x3d.FontStyle()
FontStyle2122.size = 0.035

Text2121.fontStyle = FontStyle2122

Shape2120.geometry = Text2121

Billboard2119.children.append(Shape2120)

HAnimSite2111.children.append(Billboard2119)

HAnimSegment2110.children.append(HAnimSite2111)
Shape2123 = x3d.Shape()
LineSet2124 = x3d.LineSet()
LineSet2124.vertexCount = [2]
ColorRGBA2125 = x3d.ColorRGBA()
ColorRGBA2125.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2124.color = ColorRGBA2125
Coordinate2126 = x3d.Coordinate()
Coordinate2126.point = [(-0.1816, 0.7242, -0.005),(-0.1817, 0.9288, -0.00564)]

LineSet2124.coord = Coordinate2126

Shape2123.geometry = LineSet2124

HAnimSegment2110.children.append(Shape2123)

HAnimJoint2109.children.append(HAnimSegment2110)
HAnimJoint2127 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_1")
HAnimJoint2127.name = "r_midcarpal_1"
HAnimJoint2127.center = [-0.18097,0.70605,0.0193]
HAnimSegment2128 = x3d.HAnimSegment(DEF="hanim_r_trapezium")
HAnimSegment2128.name = "r_trapezium"
Shape2129 = x3d.Shape()
LineSet2130 = x3d.LineSet()
LineSet2130.vertexCount = [2]
ColorRGBA2131 = x3d.ColorRGBA()
ColorRGBA2131.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2130.color = ColorRGBA2131
Coordinate2132 = x3d.Coordinate()
Coordinate2132.point = [(-0.18097, 0.70605, 0.0193),(-0.1816, 0.7242, -0.005)]

LineSet2130.coord = Coordinate2132

Shape2129.geometry = LineSet2130

HAnimSegment2128.children.append(Shape2129)

HAnimJoint2127.children.append(HAnimSegment2128)
HAnimJoint2133 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint2133.name = "r_carpometacarpal_1"
HAnimJoint2133.center = [-0.18,0.69255,0.02598]
HAnimSegment2134 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_1")
HAnimSegment2134.name = "r_metacarpal_1"
HAnimSite2135 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_2_pt")
HAnimSite2135.name = "r_metacarpal_phalanx_2"
HAnimSite2135.translation = [-0.2,0.665,0.012]
TouchSensor2136 = x3d.TouchSensor()
TouchSensor2136.description = "HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt"

HAnimSite2135.children.append(TouchSensor2136)
Shape2137 = x3d.Shape()
Appearance2138 = x3d.Appearance()
Material2139 = x3d.Material()
Material2139.diffuseColor = [1,1,1]

Appearance2138.material = Material2139

Shape2137.appearance = Appearance2138
IndexedFaceSet2140 = x3d.IndexedFaceSet()
IndexedFaceSet2140.solid = False
IndexedFaceSet2140.creaseAngle = 0.5
IndexedFaceSet2140.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2141 = x3d.ColorRGBA()
ColorRGBA2141.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2140.color = ColorRGBA2141
Coordinate2142 = x3d.Coordinate()
Coordinate2142.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2140.coord = Coordinate2142

Shape2137.geometry = IndexedFaceSet2140

HAnimSite2135.children.append(Shape2137)
Billboard2143 = x3d.Billboard()
Billboard2143.axisOfRotation = [0,0,0]
Shape2144 = x3d.Shape()
Text2145 = x3d.Text()
Text2145.string = ["78"]
FontStyle2146 = x3d.FontStyle()
FontStyle2146.size = 0.035

Text2145.fontStyle = FontStyle2146

Shape2144.geometry = Text2145

Billboard2143.children.append(Shape2144)

HAnimSite2135.children.append(Billboard2143)

HAnimSegment2134.children.append(HAnimSite2135)
Shape2147 = x3d.Shape()
LineSet2148 = x3d.LineSet()
LineSet2148.vertexCount = [2]
ColorRGBA2149 = x3d.ColorRGBA()
ColorRGBA2149.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2148.color = ColorRGBA2149
Coordinate2150 = x3d.Coordinate()
Coordinate2150.point = [(-0.18, 0.69255, 0.02598),(-0.18097, 0.70605, 0.0193)]

LineSet2148.coord = Coordinate2150

Shape2147.geometry = LineSet2148

HAnimSegment2134.children.append(Shape2147)

HAnimJoint2133.children.append(HAnimSegment2134)
HAnimJoint2151 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint2151.name = "r_metacarpophalangeal_1"
HAnimJoint2151.center = [-0.18065,0.67275,0.03577]
HAnimSegment2152 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_1")
HAnimSegment2152.name = "r_carpal_proximal_phalanx_1"
Shape2153 = x3d.Shape()
LineSet2154 = x3d.LineSet()
LineSet2154.vertexCount = [2]
ColorRGBA2155 = x3d.ColorRGBA()
ColorRGBA2155.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2154.color = ColorRGBA2155
Coordinate2156 = x3d.Coordinate()
Coordinate2156.point = [(-0.18065, 0.67275, 0.03577),(-0.18, 0.69255, 0.02598)]

LineSet2154.coord = Coordinate2156

Shape2153.geometry = LineSet2154

HAnimSegment2152.children.append(Shape2153)

HAnimJoint2151.children.append(HAnimSegment2152)
HAnimJoint2157 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint2157.name = "r_carpal_interphalangeal_1"
HAnimJoint2157.center = [-0.18227,0.654,0.0496]
HAnimSegment2158 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_1")
HAnimSegment2158.name = "r_carpal_distal_phalanx_1"
HAnimSite2159 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_1_tip")
HAnimSite2159.name = "r_carpal_distal_phalanx_1"
HAnimSite2159.translation = [-0.18,0.64,0.06]
TouchSensor2160 = x3d.TouchSensor()
TouchSensor2160.description = "HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip"

HAnimSite2159.children.append(TouchSensor2160)
Shape2161 = x3d.Shape()
Appearance2162 = x3d.Appearance()
Material2163 = x3d.Material()
Material2163.diffuseColor = [1,1,1]

Appearance2162.material = Material2163

Shape2161.appearance = Appearance2162
IndexedFaceSet2164 = x3d.IndexedFaceSet()
IndexedFaceSet2164.solid = False
IndexedFaceSet2164.creaseAngle = 0.5
IndexedFaceSet2164.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2165 = x3d.ColorRGBA()
ColorRGBA2165.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2164.color = ColorRGBA2165
Coordinate2166 = x3d.Coordinate()
Coordinate2166.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2164.coord = Coordinate2166

Shape2161.geometry = IndexedFaceSet2164

HAnimSite2159.children.append(Shape2161)
Billboard2167 = x3d.Billboard()
Billboard2167.axisOfRotation = [0,0,0]
Shape2168 = x3d.Shape()
Text2169 = x3d.Text()
Text2169.string = ["106"]
FontStyle2170 = x3d.FontStyle()
FontStyle2170.size = 0.035

Text2169.fontStyle = FontStyle2170

Shape2168.geometry = Text2169

Billboard2167.children.append(Shape2168)

HAnimSite2159.children.append(Billboard2167)

HAnimSegment2158.children.append(HAnimSite2159)
Shape2171 = x3d.Shape()
LineSet2172 = x3d.LineSet()
LineSet2172.vertexCount = [2]
ColorRGBA2173 = x3d.ColorRGBA()
ColorRGBA2173.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2172.color = ColorRGBA2173
Coordinate2174 = x3d.Coordinate()
Coordinate2174.point = [(-0.18227, 0.654, 0.0496),(-0.18065, 0.67275, 0.03577)]

LineSet2172.coord = Coordinate2174

Shape2171.geometry = LineSet2172

HAnimSegment2158.children.append(Shape2171)

HAnimJoint2157.children.append(HAnimSegment2158)

HAnimJoint2151.children.append(HAnimJoint2157)

HAnimJoint2133.children.append(HAnimJoint2151)

HAnimJoint2127.children.append(HAnimJoint2133)

HAnimJoint2109.children.append(HAnimJoint2127)
HAnimJoint2175 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_2")
HAnimJoint2175.name = "r_midcarpal_2"
HAnimJoint2175.center = [-0.18097,0.70695,0.0084]
HAnimSegment2176 = x3d.HAnimSegment(DEF="hanim_r_trapezoid")
HAnimSegment2176.name = "r_trapezoid"
Shape2177 = x3d.Shape()
LineSet2178 = x3d.LineSet()
LineSet2178.vertexCount = [2]
ColorRGBA2179 = x3d.ColorRGBA()
ColorRGBA2179.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2178.color = ColorRGBA2179
Coordinate2180 = x3d.Coordinate()
Coordinate2180.point = [(-0.18097, 0.70695, 0.0084),(-0.1816, 0.7242, -0.005)]

LineSet2178.coord = Coordinate2180

Shape2177.geometry = LineSet2178

HAnimSegment2176.children.append(Shape2177)

HAnimJoint2175.children.append(HAnimSegment2176)
HAnimJoint2181 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint2181.name = "r_carpometacarpal_2"
HAnimJoint2181.center = [-0.1809,0.6876,0.0097]
HAnimSegment2182 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_2")
HAnimSegment2182.name = "r_metacarpal_2"
Shape2183 = x3d.Shape()
LineSet2184 = x3d.LineSet()
LineSet2184.vertexCount = [2]
ColorRGBA2185 = x3d.ColorRGBA()
ColorRGBA2185.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2184.color = ColorRGBA2185
Coordinate2186 = x3d.Coordinate()
Coordinate2186.point = [(-0.1809, 0.6876, 0.0097),(-0.18097, 0.70695, 0.0084)]

LineSet2184.coord = Coordinate2186

Shape2183.geometry = LineSet2184

HAnimSegment2182.children.append(Shape2183)

HAnimJoint2181.children.append(HAnimSegment2182)
HAnimJoint2187 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint2187.name = "r_metacarpophalangeal_2"
HAnimJoint2187.center = [-0.18335,0.6372,0.01507]
HAnimSegment2188 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_2")
HAnimSegment2188.name = "r_carpal_proximal_phalanx_2"
Shape2189 = x3d.Shape()
LineSet2190 = x3d.LineSet()
LineSet2190.vertexCount = [2]
ColorRGBA2191 = x3d.ColorRGBA()
ColorRGBA2191.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2190.color = ColorRGBA2191
Coordinate2192 = x3d.Coordinate()
Coordinate2192.point = [(-0.18335, 0.6372, 0.01507),(-0.1809, 0.6876, 0.0097)]

LineSet2190.coord = Coordinate2192

Shape2189.geometry = LineSet2190

HAnimSegment2188.children.append(Shape2189)

HAnimJoint2187.children.append(HAnimSegment2188)
HAnimJoint2193 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint2193.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint2193.center = [-0.1813,0.6068,0.01418]
HAnimSegment2194 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_2")
HAnimSegment2194.name = "r_carpal_middle_phalanx_2"
Shape2195 = x3d.Shape()
LineSet2196 = x3d.LineSet()
LineSet2196.vertexCount = [2]
ColorRGBA2197 = x3d.ColorRGBA()
ColorRGBA2197.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2196.color = ColorRGBA2197
Coordinate2198 = x3d.Coordinate()
Coordinate2198.point = [(-0.1813, 0.6068, 0.01418),(-0.18335, 0.6372, 0.01507)]

LineSet2196.coord = Coordinate2198

Shape2195.geometry = LineSet2196

HAnimSegment2194.children.append(Shape2195)

HAnimJoint2193.children.append(HAnimSegment2194)
HAnimJoint2199 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint2199.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint2199.center = [-0.1803,0.5816,0.01338]
HAnimSegment2200 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_2")
HAnimSegment2200.name = "r_carpal_distal_phalanx_2"
HAnimSite2201 = x3d.HAnimSite(DEF="hanim_r_dactylion_pt")
HAnimSite2201.name = "r_dactylion"
HAnimSite2201.translation = [-0.17,0.558,0.017]
TouchSensor2202 = x3d.TouchSensor()
TouchSensor2202.description = "HAnimSite 61 hanim_r_dactylion_pt"

HAnimSite2201.children.append(TouchSensor2202)
Shape2203 = x3d.Shape()
Appearance2204 = x3d.Appearance()
Material2205 = x3d.Material()
Material2205.diffuseColor = [1,1,1]

Appearance2204.material = Material2205

Shape2203.appearance = Appearance2204
IndexedFaceSet2206 = x3d.IndexedFaceSet()
IndexedFaceSet2206.solid = False
IndexedFaceSet2206.creaseAngle = 0.5
IndexedFaceSet2206.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2207 = x3d.ColorRGBA()
ColorRGBA2207.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2206.color = ColorRGBA2207
Coordinate2208 = x3d.Coordinate()
Coordinate2208.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2206.coord = Coordinate2208

Shape2203.geometry = IndexedFaceSet2206

HAnimSite2201.children.append(Shape2203)
Billboard2209 = x3d.Billboard()
Billboard2209.axisOfRotation = [0,0,0]
Shape2210 = x3d.Shape()
Text2211 = x3d.Text()
Text2211.string = ["61"]
FontStyle2212 = x3d.FontStyle()
FontStyle2212.size = 0.035

Text2211.fontStyle = FontStyle2212

Shape2210.geometry = Text2211

Billboard2209.children.append(Shape2210)

HAnimSite2201.children.append(Billboard2209)

HAnimSegment2200.children.append(HAnimSite2201)
HAnimSite2213 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_2_tip")
HAnimSite2213.name = "r_carpal_distal_phalanx_2"
HAnimSite2213.translation = [-0.172,0.558,0.017]
TouchSensor2214 = x3d.TouchSensor()
TouchSensor2214.description = "HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip"

HAnimSite2213.children.append(TouchSensor2214)
Shape2215 = x3d.Shape()
Appearance2216 = x3d.Appearance()
Material2217 = x3d.Material()
Material2217.diffuseColor = [1,1,1]

Appearance2216.material = Material2217

Shape2215.appearance = Appearance2216
IndexedFaceSet2218 = x3d.IndexedFaceSet()
IndexedFaceSet2218.solid = False
IndexedFaceSet2218.creaseAngle = 0.5
IndexedFaceSet2218.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2219 = x3d.ColorRGBA()
ColorRGBA2219.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2218.color = ColorRGBA2219
Coordinate2220 = x3d.Coordinate()
Coordinate2220.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2218.coord = Coordinate2220

Shape2215.geometry = IndexedFaceSet2218

HAnimSite2213.children.append(Shape2215)
Billboard2221 = x3d.Billboard()
Billboard2221.axisOfRotation = [0,0,0]
Shape2222 = x3d.Shape()
Text2223 = x3d.Text()
Text2223.string = ["107"]
FontStyle2224 = x3d.FontStyle()
FontStyle2224.size = 0.035

Text2223.fontStyle = FontStyle2224

Shape2222.geometry = Text2223

Billboard2221.children.append(Shape2222)

HAnimSite2213.children.append(Billboard2221)

HAnimSegment2200.children.append(HAnimSite2213)
Shape2225 = x3d.Shape()
LineSet2226 = x3d.LineSet()
LineSet2226.vertexCount = [2]
ColorRGBA2227 = x3d.ColorRGBA()
ColorRGBA2227.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2226.color = ColorRGBA2227
Coordinate2228 = x3d.Coordinate()
Coordinate2228.point = [(-0.1803, 0.5816, 0.01338),(-0.1813, 0.6068, 0.01418)]

LineSet2226.coord = Coordinate2228

Shape2225.geometry = LineSet2226

HAnimSegment2200.children.append(Shape2225)

HAnimJoint2199.children.append(HAnimSegment2200)

HAnimJoint2193.children.append(HAnimJoint2199)

HAnimJoint2187.children.append(HAnimJoint2193)

HAnimJoint2181.children.append(HAnimJoint2187)

HAnimJoint2175.children.append(HAnimJoint2181)

HAnimJoint2109.children.append(HAnimJoint2175)
HAnimJoint2229 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_3")
HAnimJoint2229.name = "r_midcarpal_3"
HAnimJoint2229.center = [-0.18072,0.708525,-0.004797]
HAnimSegment2230 = x3d.HAnimSegment(DEF="hanim_r_capitate")
HAnimSegment2230.name = "r_capitate"
Shape2231 = x3d.Shape()
LineSet2232 = x3d.LineSet()
LineSet2232.vertexCount = [2]
ColorRGBA2233 = x3d.ColorRGBA()
ColorRGBA2233.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2232.color = ColorRGBA2233
Coordinate2234 = x3d.Coordinate()
Coordinate2234.point = [(-0.18072, 0.708525, -0.004797),(-0.1816, 0.7242, -0.005)]

LineSet2232.coord = Coordinate2234

Shape2231.geometry = LineSet2232

HAnimSegment2230.children.append(Shape2231)

HAnimJoint2229.children.append(HAnimSegment2230)
HAnimJoint2235 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint2235.name = "r_carpometacarpal_3"
HAnimJoint2235.center = [-0.18072,0.6858,-0.00625]
HAnimSegment2236 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_3")
HAnimSegment2236.name = "r_metacarpal_3"
HAnimSite2237 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_3_pt")
HAnimSite2237.name = "r_metacarpal_phalanx_3"
HAnimSite2237.translation = [-0.2,0.665,0.016]
TouchSensor2238 = x3d.TouchSensor()
TouchSensor2238.description = "HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt"

HAnimSite2237.children.append(TouchSensor2238)
Shape2239 = x3d.Shape()
Appearance2240 = x3d.Appearance()
Material2241 = x3d.Material()
Material2241.diffuseColor = [1,1,1]

Appearance2240.material = Material2241

Shape2239.appearance = Appearance2240
IndexedFaceSet2242 = x3d.IndexedFaceSet()
IndexedFaceSet2242.solid = False
IndexedFaceSet2242.creaseAngle = 0.5
IndexedFaceSet2242.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2243 = x3d.ColorRGBA()
ColorRGBA2243.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2242.color = ColorRGBA2243
Coordinate2244 = x3d.Coordinate()
Coordinate2244.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2242.coord = Coordinate2244

Shape2239.geometry = IndexedFaceSet2242

HAnimSite2237.children.append(Shape2239)
Billboard2245 = x3d.Billboard()
Billboard2245.axisOfRotation = [0,0,0]
Shape2246 = x3d.Shape()
Text2247 = x3d.Text()
Text2247.string = ["79"]
FontStyle2248 = x3d.FontStyle()
FontStyle2248.size = 0.035

Text2247.fontStyle = FontStyle2248

Shape2246.geometry = Text2247

Billboard2245.children.append(Shape2246)

HAnimSite2237.children.append(Billboard2245)

HAnimSegment2236.children.append(HAnimSite2237)
Shape2249 = x3d.Shape()
LineSet2250 = x3d.LineSet()
LineSet2250.vertexCount = [2]
ColorRGBA2251 = x3d.ColorRGBA()
ColorRGBA2251.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2250.color = ColorRGBA2251
Coordinate2252 = x3d.Coordinate()
Coordinate2252.point = [(-0.18072, 0.6858, -0.00625),(-0.18072, 0.708525, -0.004797)]

LineSet2250.coord = Coordinate2252

Shape2249.geometry = LineSet2250

HAnimSegment2236.children.append(Shape2249)

HAnimJoint2235.children.append(HAnimSegment2236)
HAnimJoint2253 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint2253.name = "r_metacarpophalangeal_3"
HAnimJoint2253.center = [-0.1833,0.63495,-0.0039]
HAnimSegment2254 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_3")
HAnimSegment2254.name = "r_carpal_proximal_phalanx_3"
Shape2255 = x3d.Shape()
LineSet2256 = x3d.LineSet()
LineSet2256.vertexCount = [2]
ColorRGBA2257 = x3d.ColorRGBA()
ColorRGBA2257.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2256.color = ColorRGBA2257
Coordinate2258 = x3d.Coordinate()
Coordinate2258.point = [(-0.1833, 0.63495, -0.0039),(-0.18072, 0.6858, -0.00625)]

LineSet2256.coord = Coordinate2258

Shape2255.geometry = LineSet2256

HAnimSegment2254.children.append(Shape2255)

HAnimJoint2253.children.append(HAnimSegment2254)
HAnimJoint2259 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint2259.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint2259.center = [-0.1813,0.6032,-0.0035]
HAnimSegment2260 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_3")
HAnimSegment2260.name = "r_carpal_middle_phalanx_3"
Shape2261 = x3d.Shape()
LineSet2262 = x3d.LineSet()
LineSet2262.vertexCount = [2]
ColorRGBA2263 = x3d.ColorRGBA()
ColorRGBA2263.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2262.color = ColorRGBA2263
Coordinate2264 = x3d.Coordinate()
Coordinate2264.point = [(-0.1813, 0.6032, -0.0035),(-0.1833, 0.63495, -0.0039)]

LineSet2262.coord = Coordinate2264

Shape2261.geometry = LineSet2262

HAnimSegment2260.children.append(Shape2261)

HAnimJoint2259.children.append(HAnimSegment2260)
HAnimJoint2265 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint2265.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint2265.center = [-0.18029,0.5753,-0.00375]
HAnimSegment2266 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_3")
HAnimSegment2266.name = "r_carpal_distal_phalanx_3"
HAnimSite2267 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_3_tip")
HAnimSite2267.name = "r_carpal_distal_phalanx_3"
HAnimSite2267.translation = [-0.17,0.555,-0.006]
TouchSensor2268 = x3d.TouchSensor()
TouchSensor2268.description = "HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip"

HAnimSite2267.children.append(TouchSensor2268)
Shape2269 = x3d.Shape()
Appearance2270 = x3d.Appearance()
Material2271 = x3d.Material()
Material2271.diffuseColor = [1,1,1]

Appearance2270.material = Material2271

Shape2269.appearance = Appearance2270
IndexedFaceSet2272 = x3d.IndexedFaceSet()
IndexedFaceSet2272.solid = False
IndexedFaceSet2272.creaseAngle = 0.5
IndexedFaceSet2272.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2273 = x3d.ColorRGBA()
ColorRGBA2273.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2272.color = ColorRGBA2273
Coordinate2274 = x3d.Coordinate()
Coordinate2274.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2272.coord = Coordinate2274

Shape2269.geometry = IndexedFaceSet2272

HAnimSite2267.children.append(Shape2269)
Billboard2275 = x3d.Billboard()
Billboard2275.axisOfRotation = [0,0,0]
Shape2276 = x3d.Shape()
Text2277 = x3d.Text()
Text2277.string = ["108"]
FontStyle2278 = x3d.FontStyle()
FontStyle2278.size = 0.035

Text2277.fontStyle = FontStyle2278

Shape2276.geometry = Text2277

Billboard2275.children.append(Shape2276)

HAnimSite2267.children.append(Billboard2275)

HAnimSegment2266.children.append(HAnimSite2267)
Shape2279 = x3d.Shape()
LineSet2280 = x3d.LineSet()
LineSet2280.vertexCount = [2]
ColorRGBA2281 = x3d.ColorRGBA()
ColorRGBA2281.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2280.color = ColorRGBA2281
Coordinate2282 = x3d.Coordinate()
Coordinate2282.point = [(-0.18029, 0.5753, -0.00375),(-0.1813, 0.6032, -0.0035)]

LineSet2280.coord = Coordinate2282

Shape2279.geometry = LineSet2280

HAnimSegment2266.children.append(Shape2279)

HAnimJoint2265.children.append(HAnimSegment2266)

HAnimJoint2259.children.append(HAnimJoint2265)

HAnimJoint2253.children.append(HAnimJoint2259)

HAnimJoint2235.children.append(HAnimJoint2253)

HAnimJoint2229.children.append(HAnimJoint2235)

HAnimJoint2109.children.append(HAnimJoint2229)
HAnimJoint2283 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_4_5")
HAnimJoint2283.name = "r_midcarpal_4_5"
HAnimJoint2283.center = [-0.18072,0.70583,-0.02574]
HAnimSegment2284 = x3d.HAnimSegment(DEF="hanim_r_hamate")
HAnimSegment2284.name = "r_hamate"
Shape2285 = x3d.Shape()
LineSet2286 = x3d.LineSet()
LineSet2286.vertexCount = [2]
ColorRGBA2287 = x3d.ColorRGBA()
ColorRGBA2287.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2286.color = ColorRGBA2287
Coordinate2288 = x3d.Coordinate()
Coordinate2288.point = [(-0.18072, 0.70583, -0.02574),(-0.1816, 0.7242, -0.005)]

LineSet2286.coord = Coordinate2288

Shape2285.geometry = LineSet2286

HAnimSegment2284.children.append(Shape2285)

HAnimJoint2283.children.append(HAnimSegment2284)
HAnimJoint2289 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint2289.name = "r_carpometacarpal_4"
HAnimJoint2289.center = [-0.18072,0.68625,-0.01992]
HAnimSegment2290 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_4")
HAnimSegment2290.name = "r_metacarpal_4"
Shape2291 = x3d.Shape()
LineSet2292 = x3d.LineSet()
LineSet2292.vertexCount = [2]
ColorRGBA2293 = x3d.ColorRGBA()
ColorRGBA2293.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2292.color = ColorRGBA2293
Coordinate2294 = x3d.Coordinate()
Coordinate2294.point = [(-0.18072, 0.68625, -0.01992),(-0.18072, 0.70583, -0.02574)]

LineSet2292.coord = Coordinate2294

Shape2291.geometry = LineSet2292

HAnimSegment2290.children.append(Shape2291)

HAnimJoint2289.children.append(HAnimSegment2290)
HAnimJoint2295 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint2295.name = "r_metacarpophalangeal_4"
HAnimJoint2295.center = [-0.1833,0.63405,-0.02144]
HAnimSegment2296 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_4")
HAnimSegment2296.name = "r_carpal_proximal_phalanx_4"
Shape2297 = x3d.Shape()
LineSet2298 = x3d.LineSet()
LineSet2298.vertexCount = [2]
ColorRGBA2299 = x3d.ColorRGBA()
ColorRGBA2299.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2298.color = ColorRGBA2299
Coordinate2300 = x3d.Coordinate()
Coordinate2300.point = [(-0.1833, 0.63405, -0.02144),(-0.18072, 0.68625, -0.01992)]

LineSet2298.coord = Coordinate2300

Shape2297.geometry = LineSet2298

HAnimSegment2296.children.append(Shape2297)

HAnimJoint2295.children.append(HAnimSegment2296)
HAnimJoint2301 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint2301.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint2301.center = [-0.1813,0.6066,-0.02064]
HAnimSegment2302 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_4")
HAnimSegment2302.name = "r_carpal_middle_phalanx_4"
Shape2303 = x3d.Shape()
LineSet2304 = x3d.LineSet()
LineSet2304.vertexCount = [2]
ColorRGBA2305 = x3d.ColorRGBA()
ColorRGBA2305.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2304.color = ColorRGBA2305
Coordinate2306 = x3d.Coordinate()
Coordinate2306.point = [(-0.1813, 0.6066, -0.02064),(-0.1833, 0.63405, -0.02144)]

LineSet2304.coord = Coordinate2306

Shape2303.geometry = LineSet2304

HAnimSegment2302.children.append(Shape2303)

HAnimJoint2301.children.append(HAnimSegment2302)
HAnimJoint2307 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint2307.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint2307.center = [-0.18029,0.5807,-0.01978]
HAnimSegment2308 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_4")
HAnimSegment2308.name = "r_carpal_distal_phalanx_4"
HAnimSite2309 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_4_tip")
HAnimSite2309.name = "r_carpal_distal_phalanx_4"
HAnimSite2309.translation = [-0.172,0.559,-0.024]
TouchSensor2310 = x3d.TouchSensor()
TouchSensor2310.description = "HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip"

HAnimSite2309.children.append(TouchSensor2310)
Shape2311 = x3d.Shape()
Appearance2312 = x3d.Appearance()
Material2313 = x3d.Material()
Material2313.diffuseColor = [1,1,1]

Appearance2312.material = Material2313

Shape2311.appearance = Appearance2312
IndexedFaceSet2314 = x3d.IndexedFaceSet()
IndexedFaceSet2314.solid = False
IndexedFaceSet2314.creaseAngle = 0.5
IndexedFaceSet2314.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2315 = x3d.ColorRGBA()
ColorRGBA2315.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2314.color = ColorRGBA2315
Coordinate2316 = x3d.Coordinate()
Coordinate2316.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2314.coord = Coordinate2316

Shape2311.geometry = IndexedFaceSet2314

HAnimSite2309.children.append(Shape2311)
Billboard2317 = x3d.Billboard()
Billboard2317.axisOfRotation = [0,0,0]
Shape2318 = x3d.Shape()
Text2319 = x3d.Text()
Text2319.string = ["109"]
FontStyle2320 = x3d.FontStyle()
FontStyle2320.size = 0.035

Text2319.fontStyle = FontStyle2320

Shape2318.geometry = Text2319

Billboard2317.children.append(Shape2318)

HAnimSite2309.children.append(Billboard2317)

HAnimSegment2308.children.append(HAnimSite2309)
Shape2321 = x3d.Shape()
LineSet2322 = x3d.LineSet()
LineSet2322.vertexCount = [2]
ColorRGBA2323 = x3d.ColorRGBA()
ColorRGBA2323.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2322.color = ColorRGBA2323
Coordinate2324 = x3d.Coordinate()
Coordinate2324.point = [(-0.18029, 0.5807, -0.01978),(-0.1813, 0.6066, -0.02064)]

LineSet2322.coord = Coordinate2324

Shape2321.geometry = LineSet2322

HAnimSegment2308.children.append(Shape2321)

HAnimJoint2307.children.append(HAnimSegment2308)

HAnimJoint2301.children.append(HAnimJoint2307)

HAnimJoint2295.children.append(HAnimJoint2301)

HAnimJoint2289.children.append(HAnimJoint2295)

HAnimJoint2283.children.append(HAnimJoint2289)

HAnimJoint2109.children.append(HAnimJoint2283)
HAnimJoint2325 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint2325.name = "r_carpometacarpal_5"
HAnimJoint2325.center = [-0.18126,0.68827,-0.03278]
HAnimSegment2326 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_5")
HAnimSegment2326.name = "r_metacarpal_5"
HAnimSite2327 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_5_pt")
HAnimSite2327.name = "r_metacarpal_phalanx_5"
HAnimSite2327.translation = [-0.2,0.665,-0.036]
TouchSensor2328 = x3d.TouchSensor()
TouchSensor2328.description = "HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt"

HAnimSite2327.children.append(TouchSensor2328)
Shape2329 = x3d.Shape()
Appearance2330 = x3d.Appearance()
Material2331 = x3d.Material()
Material2331.diffuseColor = [1,1,1]

Appearance2330.material = Material2331

Shape2329.appearance = Appearance2330
IndexedFaceSet2332 = x3d.IndexedFaceSet()
IndexedFaceSet2332.solid = False
IndexedFaceSet2332.creaseAngle = 0.5
IndexedFaceSet2332.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2333 = x3d.ColorRGBA()
ColorRGBA2333.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2332.color = ColorRGBA2333
Coordinate2334 = x3d.Coordinate()
Coordinate2334.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2332.coord = Coordinate2334

Shape2329.geometry = IndexedFaceSet2332

HAnimSite2327.children.append(Shape2329)
Billboard2335 = x3d.Billboard()
Billboard2335.axisOfRotation = [0,0,0]
Shape2336 = x3d.Shape()
Text2337 = x3d.Text()
Text2337.string = ["80"]
FontStyle2338 = x3d.FontStyle()
FontStyle2338.size = 0.035

Text2337.fontStyle = FontStyle2338

Shape2336.geometry = Text2337

Billboard2335.children.append(Shape2336)

HAnimSite2327.children.append(Billboard2335)

HAnimSegment2326.children.append(HAnimSite2327)
Shape2339 = x3d.Shape()
LineSet2340 = x3d.LineSet()
LineSet2340.vertexCount = [2]
ColorRGBA2341 = x3d.ColorRGBA()
ColorRGBA2341.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2340.color = ColorRGBA2341
Coordinate2342 = x3d.Coordinate()
Coordinate2342.point = [(-0.18126, 0.68827, -0.03278),(-0.1816, 0.7242, -0.005)]

LineSet2340.coord = Coordinate2342

Shape2339.geometry = LineSet2340

HAnimSegment2326.children.append(Shape2339)

HAnimJoint2325.children.append(HAnimSegment2326)
HAnimJoint2343 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint2343.name = "r_metacarpophalangeal_5"
HAnimJoint2343.center = [-0.18297,0.6381,-0.0371]
HAnimSegment2344 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_5")
HAnimSegment2344.name = "r_carpal_proximal_phalanx_5"
Shape2345 = x3d.Shape()
LineSet2346 = x3d.LineSet()
LineSet2346.vertexCount = [2]
ColorRGBA2347 = x3d.ColorRGBA()
ColorRGBA2347.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2346.color = ColorRGBA2347
Coordinate2348 = x3d.Coordinate()
Coordinate2348.point = [(-0.18297, 0.6381, -0.0371),(-0.18126, 0.68827, -0.03278)]

LineSet2346.coord = Coordinate2348

Shape2345.geometry = LineSet2346

HAnimSegment2344.children.append(Shape2345)

HAnimJoint2343.children.append(HAnimSegment2344)
HAnimJoint2349 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint2349.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint2349.center = [-0.1813,0.621,-0.03715]
HAnimSegment2350 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_5")
HAnimSegment2350.name = "r_carpal_middle_phalanx_5"
Shape2351 = x3d.Shape()
LineSet2352 = x3d.LineSet()
LineSet2352.vertexCount = [2]
ColorRGBA2353 = x3d.ColorRGBA()
ColorRGBA2353.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2352.color = ColorRGBA2353
Coordinate2354 = x3d.Coordinate()
Coordinate2354.point = [(-0.1813, 0.621, -0.03715),(-0.18297, 0.6381, -0.0371)]

LineSet2352.coord = Coordinate2354

Shape2351.geometry = LineSet2352

HAnimSegment2350.children.append(Shape2351)

HAnimJoint2349.children.append(HAnimSegment2350)
HAnimJoint2355 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint2355.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint2355.center = [-0.18045,0.602325,-0.03697]
HAnimSegment2356 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_5")
HAnimSegment2356.name = "r_carpal_distal_phalanx_5"
HAnimSite2357 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_5_tip")
HAnimSite2357.name = "r_carpal_distal_phalanx_5"
HAnimSite2357.translation = [-0.172,0.58,-0.039]
TouchSensor2358 = x3d.TouchSensor()
TouchSensor2358.description = "HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip"

HAnimSite2357.children.append(TouchSensor2358)
Shape2359 = x3d.Shape()
Appearance2360 = x3d.Appearance()
Material2361 = x3d.Material()
Material2361.diffuseColor = [1,1,1]

Appearance2360.material = Material2361

Shape2359.appearance = Appearance2360
IndexedFaceSet2362 = x3d.IndexedFaceSet()
IndexedFaceSet2362.solid = False
IndexedFaceSet2362.creaseAngle = 0.5
IndexedFaceSet2362.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA2363 = x3d.ColorRGBA()
ColorRGBA2363.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet2362.color = ColorRGBA2363
Coordinate2364 = x3d.Coordinate()
Coordinate2364.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet2362.coord = Coordinate2364

Shape2359.geometry = IndexedFaceSet2362

HAnimSite2357.children.append(Shape2359)
Billboard2365 = x3d.Billboard()
Billboard2365.axisOfRotation = [0,0,0]
Shape2366 = x3d.Shape()
Text2367 = x3d.Text()
Text2367.string = ["110"]
FontStyle2368 = x3d.FontStyle()
FontStyle2368.size = 0.035

Text2367.fontStyle = FontStyle2368

Shape2366.geometry = Text2367

Billboard2365.children.append(Shape2366)

HAnimSite2357.children.append(Billboard2365)

HAnimSegment2356.children.append(HAnimSite2357)
Shape2369 = x3d.Shape()
LineSet2370 = x3d.LineSet()
LineSet2370.vertexCount = [2]
ColorRGBA2371 = x3d.ColorRGBA()
ColorRGBA2371.color = [(1, 1, 0, 1),(1, 1, 0, 1)]

LineSet2370.color = ColorRGBA2371
Coordinate2372 = x3d.Coordinate()
Coordinate2372.point = [(-0.18045, 0.602325, -0.03697),(-0.1813, 0.621, -0.03715)]

LineSet2370.coord = Coordinate2372

Shape2369.geometry = LineSet2370

HAnimSegment2356.children.append(Shape2369)

HAnimJoint2355.children.append(HAnimSegment2356)

HAnimJoint2349.children.append(HAnimJoint2355)

HAnimJoint2343.children.append(HAnimJoint2349)

HAnimJoint2325.children.append(HAnimJoint2343)

HAnimJoint2109.children.append(HAnimJoint2325)

HAnimJoint2079.children.append(HAnimJoint2109)

HAnimJoint2025.children.append(HAnimJoint2079)

HAnimJoint1971.children.append(HAnimJoint2025)

HAnimJoint1953.children.append(HAnimJoint1971)

HAnimJoint1125.children.append(HAnimJoint1953)

HAnimJoint1119.children.append(HAnimJoint1125)

HAnimJoint1113.children.append(HAnimJoint1119)

HAnimJoint1107.children.append(HAnimJoint1113)

HAnimJoint1101.children.append(HAnimJoint1107)

HAnimJoint1095.children.append(HAnimJoint1101)

HAnimJoint1089.children.append(HAnimJoint1095)

HAnimJoint1083.children.append(HAnimJoint1089)

HAnimJoint1017.children.append(HAnimJoint1083)

HAnimJoint987.children.append(HAnimJoint1017)

HAnimJoint981.children.append(HAnimJoint987)

HAnimJoint975.children.append(HAnimJoint981)

HAnimJoint969.children.append(HAnimJoint975)

HAnimJoint939.children.append(HAnimJoint969)

HAnimJoint933.children.append(HAnimJoint939)

HAnimJoint927.children.append(HAnimJoint933)

HAnimJoint861.children.append(HAnimJoint927)

HAnimJoint11.children.append(HAnimJoint861)

HAnimHumanoid10.skeleton.append(HAnimJoint11)

Scene3.children.append(HAnimHumanoid10)
NavigationInfo2373 = x3d.NavigationInfo()
NavigationInfo2373.headlight = False

Scene3.children.append(NavigationInfo2373)
Background2374 = x3d.Background(DEF="Background1")
Background2374.skyColor = [(0.4, 0.4, 0.4)]
Background2374.groundColor = [(0.5, 0.5, 0.5)]

Scene3.children.append(Background2374)
DirectionalLight2375 = x3d.DirectionalLight()
DirectionalLight2375.global_ = True

Scene3.children.append(DirectionalLight2375)
Viewpoint2376 = x3d.Viewpoint()
Viewpoint2376.description = "JinLOA4"
Viewpoint2376.position = [0,1,3]
Viewpoint2376.centerOfRotation = [0,1,0]

Scene3.children.append(Viewpoint2376)
Transform2377 = x3d.Transform(DEF="Landmark000")
Shape2378 = x3d.Shape(DEF="HAnim000Landmark")
Appearance2379 = x3d.Appearance()
Material2380 = x3d.Material()
Material2380.diffuseColor = [0,1,0]
Material2380.emissiveColor = [0,1,0]

Appearance2379.material = Material2380

Shape2378.appearance = Appearance2379
Sphere2381 = x3d.Sphere()
Sphere2381.radius = 0.01

Shape2378.geometry = Sphere2381

Transform2377.children.append(Shape2378)

Scene3.children.append(Transform2377)

X3D0.Scene = Scene3
f = open("../data/Jin20fSegmented.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Jin20fSegmented.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Jin20fSegmented.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
