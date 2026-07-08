print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "Bubbles.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Bubble animation used by Nancy Diving example."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Etsuko Lippi"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "24 January 2001"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "23 May 2020"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "license"
meta9.content = "../license.html"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "Bubbles.x3d"

Scene10.children.append(WorldInfo11)
Transform12 = x3d.Transform(DEF="Bubbles")
Group13 = x3d.Group(DEF="Bubble")
TimeSensor14 = x3d.TimeSensor(DEF="BubbleClock")
TimeSensor14.cycleInterval = 6
TimeSensor14.loop = True

Group13.children.append(TimeSensor14)
PositionInterpolator15 = x3d.PositionInterpolator(DEF="BubblePath1")
PositionInterpolator15.key = [0,0.5,0.8,0.9,1]
PositionInterpolator15.keyValue = [(0, 0, 0),(0.75, 0.75, 0.75),(0.86, 0.86, 0.86),(0.99, 0.998, 0.9876),(1.272, 1.9044, 0.9509)]

Group13.children.append(PositionInterpolator15)
PositionInterpolator16 = x3d.PositionInterpolator(DEF="BubblePath2")
PositionInterpolator16.key = [0,0.3,0.64,0.85,1]
PositionInterpolator16.keyValue = [(0.1, 0.1, 0.1),(0.2, 0.4, 0.25),(0.3, 0.5, 0.46),(0.75, 0.5, 0.575),(0.038483478, 1.989, 1.098373)]

Group13.children.append(PositionInterpolator16)
PositionInterpolator17 = x3d.PositionInterpolator(DEF="BubblePath3")
PositionInterpolator17.key = [0,0.1,0.45,0.7,1]
PositionInterpolator17.keyValue = [(0.01, 0.01, 0.01),(0.25, 0.35, 0.0045),(0.55, 0.6, 0.0055),(0.66, 0.665, 0.00655),(1.555, 1.09043, 0.005734)]

Group13.children.append(PositionInterpolator17)
PositionInterpolator18 = x3d.PositionInterpolator(DEF="BubblePath4")
PositionInterpolator18.key = [0,0.5,0.6,0.8,1]
PositionInterpolator18.keyValue = [(0, 0, 0),(0.5, 0.5, 0.005),(0.6, 0.6, 0.006),(0.75, 0.75, 0.0075),(1.948594, 1.3983, 0.009009349)]

Group13.children.append(PositionInterpolator18)
PositionInterpolator19 = x3d.PositionInterpolator(DEF="BubblePath5")
PositionInterpolator19.key = [0,0.25,0.35,0.65,1]
PositionInterpolator19.keyValue = [(0, 0, 0),(0.5, 0.5, 0.005),(0.6, 0.6, 0.006),(0.75, 0.75, 0.0075),(1.84444, 1.22222, 0.1)]

Group13.children.append(PositionInterpolator19)
PositionInterpolator20 = x3d.PositionInterpolator(DEF="BubblePath6")
PositionInterpolator20.key = [0,0.15,0.22235,0.55565,1]
PositionInterpolator20.keyValue = [(0, 0, 0),(0.235, 0.3455, 0.0055),(0.356, 0.676, 0.00456),(0.5675, 0.75, 0.0074565),(1.098, 1.0343, 0.14)]

Group13.children.append(PositionInterpolator20)
PositionInterpolator21 = x3d.PositionInterpolator(DEF="BubblePath7")
PositionInterpolator21.key = [0,0.2425,0.4535,0.6775,1]
PositionInterpolator21.keyValue = [(0, 0, 0),(0.12345, 0.2225, 0.00335),(0.786, 0.456, 0.00666),(0.74555, 0.7335, 0.00234575),(0.08787, 1.022, 0.12)]

Group13.children.append(PositionInterpolator21)
PositionInterpolator22 = x3d.PositionInterpolator(DEF="BubblePath8")
PositionInterpolator22.key = [0,0.1125,0.5535,0.97865,1]
PositionInterpolator22.keyValue = [(0, 0, 0),(0.1235, 0.05, 0.00125),(0.5666, 0.4346, 0.005556),(0.8975, 0.34575, 0.0098775),(1.8787, 1.686, 0.86)]

Group13.children.append(PositionInterpolator22)
PositionInterpolator23 = x3d.PositionInterpolator(DEF="BubblePath9")
PositionInterpolator23.key = [0,0.0025,0.035,0.65,1]
PositionInterpolator23.keyValue = [(0, 0, 0),(0.522, 0.5445, 0.0057),(0.6543, 0.226, 0.0055),(0.45575, 0.4375, 0.0067),(1.8787, 2, 0.1545)]

Group13.children.append(PositionInterpolator23)
PositionInterpolator24 = x3d.PositionInterpolator(DEF="BubblePath10")
PositionInterpolator24.key = [0,0.00025,0.035,0.6895,1]
PositionInterpolator24.keyValue = [(0, 0, 0),(0.8765, 0.445, 0.00335),(0.3336, 0.4446, 0.005556),(0.765, 0.75, 0.0075),(1, 1, 0.1)]

Group13.children.append(PositionInterpolator24)
Transform25 = x3d.Transform()
Transform26 = x3d.Transform(DEF="bubble1")
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
Material29 = x3d.Material()
Material29.diffuseColor = [1,1,1]
Material29.transparency = 0.8

Appearance28.material = Material29

Shape27.appearance = Appearance28
Sphere30 = x3d.Sphere()
Sphere30.radius = 0.025

Shape27.geometry = Sphere30

Transform26.children.append(Shape27)

Transform25.children.append(Transform26)
Transform31 = x3d.Transform(DEF="bubble2")
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.diffuseColor = [1,1,1]
Material34.transparency = 0.8

Appearance33.material = Material34

Shape32.appearance = Appearance33
Sphere35 = x3d.Sphere()
Sphere35.radius = 0.055

Shape32.geometry = Sphere35

Transform31.children.append(Shape32)

Transform25.children.append(Transform31)
Transform36 = x3d.Transform(DEF="bubble3")
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.diffuseColor = [1,1,1]
Material39.transparency = 0.8

Appearance38.material = Material39

Shape37.appearance = Appearance38
Sphere40 = x3d.Sphere()
Sphere40.radius = 0.065

Shape37.geometry = Sphere40

Transform36.children.append(Shape37)

Transform25.children.append(Transform36)
Transform41 = x3d.Transform(DEF="bubble4")
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.diffuseColor = [1,1,1]
Material44.transparency = 0.8

Appearance43.material = Material44

Shape42.appearance = Appearance43
Sphere45 = x3d.Sphere()
Sphere45.radius = 0.015

Shape42.geometry = Sphere45

Transform41.children.append(Shape42)

Transform25.children.append(Transform41)
Transform46 = x3d.Transform(DEF="bubble5")
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.diffuseColor = [1,1,1]
Material49.transparency = 0.8

Appearance48.material = Material49

Shape47.appearance = Appearance48
Sphere50 = x3d.Sphere()
Sphere50.radius = 0.075

Shape47.geometry = Sphere50

Transform46.children.append(Shape47)

Transform25.children.append(Transform46)
Transform51 = x3d.Transform(DEF="bubble6")
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.diffuseColor = [1,1,1]
Material54.transparency = 0.8

Appearance53.material = Material54

Shape52.appearance = Appearance53
Sphere55 = x3d.Sphere()
Sphere55.radius = 0.005

Shape52.geometry = Sphere55

Transform51.children.append(Shape52)

Transform25.children.append(Transform51)
Transform56 = x3d.Transform(DEF="bubble7")
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.diffuseColor = [1,1,1]
Material59.transparency = 0.8

Appearance58.material = Material59

Shape57.appearance = Appearance58
Sphere60 = x3d.Sphere()
Sphere60.radius = 0.035

Shape57.geometry = Sphere60

Transform56.children.append(Shape57)

Transform25.children.append(Transform56)
Transform61 = x3d.Transform(DEF="bubble8")
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.diffuseColor = [1,1,1]
Material64.transparency = 0.8

Appearance63.material = Material64

Shape62.appearance = Appearance63
Sphere65 = x3d.Sphere()
Sphere65.radius = 0.05

Shape62.geometry = Sphere65

Transform61.children.append(Shape62)

Transform25.children.append(Transform61)
Transform66 = x3d.Transform(DEF="bubble9")
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.diffuseColor = [1,1,1]
Material69.transparency = 0.8

Appearance68.material = Material69

Shape67.appearance = Appearance68
Sphere70 = x3d.Sphere()
Sphere70.radius = 0.045

Shape67.geometry = Sphere70

Transform66.children.append(Shape67)

Transform25.children.append(Transform66)
Transform71 = x3d.Transform(DEF="bubble10")
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.diffuseColor = [1,1,1]
Material74.transparency = 0.8

Appearance73.material = Material74

Shape72.appearance = Appearance73
Sphere75 = x3d.Sphere()
Sphere75.radius = 0.035

Shape72.geometry = Sphere75

Transform71.children.append(Shape72)

Transform25.children.append(Transform71)
ROUTE76 = x3d.ROUTE()
ROUTE76.fromField = "fraction_changed"
ROUTE76.fromNode = "BubbleClock"
ROUTE76.toField = "set_fraction"
ROUTE76.toNode = "BubblePath1"

Transform25.children.append(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromField = "fraction_changed"
ROUTE77.fromNode = "BubbleClock"
ROUTE77.toField = "set_fraction"
ROUTE77.toNode = "BubblePath2"

Transform25.children.append(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.fromField = "fraction_changed"
ROUTE78.fromNode = "BubbleClock"
ROUTE78.toField = "set_fraction"
ROUTE78.toNode = "BubblePath3"

Transform25.children.append(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.fromField = "fraction_changed"
ROUTE79.fromNode = "BubbleClock"
ROUTE79.toField = "set_fraction"
ROUTE79.toNode = "BubblePath4"

Transform25.children.append(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromField = "fraction_changed"
ROUTE80.fromNode = "BubbleClock"
ROUTE80.toField = "set_fraction"
ROUTE80.toNode = "BubblePath5"

Transform25.children.append(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.fromField = "fraction_changed"
ROUTE81.fromNode = "BubbleClock"
ROUTE81.toField = "set_fraction"
ROUTE81.toNode = "BubblePath6"

Transform25.children.append(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromField = "fraction_changed"
ROUTE82.fromNode = "BubbleClock"
ROUTE82.toField = "set_fraction"
ROUTE82.toNode = "BubblePath7"

Transform25.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromField = "fraction_changed"
ROUTE83.fromNode = "BubbleClock"
ROUTE83.toField = "set_fraction"
ROUTE83.toNode = "BubblePath8"

Transform25.children.append(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.fromField = "fraction_changed"
ROUTE84.fromNode = "BubbleClock"
ROUTE84.toField = "set_fraction"
ROUTE84.toNode = "BubblePath9"

Transform25.children.append(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.fromField = "fraction_changed"
ROUTE85.fromNode = "BubbleClock"
ROUTE85.toField = "set_fraction"
ROUTE85.toNode = "BubblePath10"

Transform25.children.append(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.fromField = "value_changed"
ROUTE86.fromNode = "BubblePath1"
ROUTE86.toField = "set_translation"
ROUTE86.toNode = "bubble1"

Transform25.children.append(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.fromField = "value_changed"
ROUTE87.fromNode = "BubblePath2"
ROUTE87.toField = "set_translation"
ROUTE87.toNode = "bubble2"

Transform25.children.append(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.fromField = "value_changed"
ROUTE88.fromNode = "BubblePath3"
ROUTE88.toField = "set_translation"
ROUTE88.toNode = "bubble3"

Transform25.children.append(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.fromField = "value_changed"
ROUTE89.fromNode = "BubblePath4"
ROUTE89.toField = "set_translation"
ROUTE89.toNode = "bubble4"

Transform25.children.append(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.fromField = "value_changed"
ROUTE90.fromNode = "BubblePath5"
ROUTE90.toField = "set_translation"
ROUTE90.toNode = "bubble5"

Transform25.children.append(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.fromField = "value_changed"
ROUTE91.fromNode = "BubblePath6"
ROUTE91.toField = "set_translation"
ROUTE91.toNode = "bubble6"

Transform25.children.append(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.fromField = "value_changed"
ROUTE92.fromNode = "BubblePath7"
ROUTE92.toField = "set_translation"
ROUTE92.toNode = "bubble7"

Transform25.children.append(ROUTE92)
ROUTE93 = x3d.ROUTE()
ROUTE93.fromField = "value_changed"
ROUTE93.fromNode = "BubblePath8"
ROUTE93.toField = "set_translation"
ROUTE93.toNode = "bubble8"

Transform25.children.append(ROUTE93)
ROUTE94 = x3d.ROUTE()
ROUTE94.fromField = "value_changed"
ROUTE94.fromNode = "BubblePath9"
ROUTE94.toField = "set_translation"
ROUTE94.toNode = "bubble9"

Transform25.children.append(ROUTE94)
ROUTE95 = x3d.ROUTE()
ROUTE95.fromField = "value_changed"
ROUTE95.fromNode = "BubblePath10"
ROUTE95.toField = "set_translation"
ROUTE95.toNode = "bubble10"

Transform25.children.append(ROUTE95)

Group13.children.append(Transform25)

Transform12.children.append(Group13)

Scene10.children.append(Transform12)
Background96 = x3d.Background()
Background96.skyColor = [(0, 0, 0.6)]

Scene10.children.append(Background96)

X3D0.Scene = Scene10
f = open("../data/Bubbles.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Bubbles.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Bubbles.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
