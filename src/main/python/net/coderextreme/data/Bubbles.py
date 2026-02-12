print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.1"
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
meta6.content = "Mon, 09 Feb 2026 12:22:59 GMT"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
WorldInfo9 = x3d.WorldInfo()
WorldInfo9.title = "Bubbles.x3d"

Scene8.children.append(WorldInfo9)
Transform10 = x3d.Transform(DEF="Bubbles")
Group11 = x3d.Group(DEF="Bubble")
TimeSensor12 = x3d.TimeSensor(DEF="BubbleClock")
TimeSensor12.cycleInterval = 6
TimeSensor12.loop = True

Group11.children.append(TimeSensor12)
PositionInterpolator13 = x3d.PositionInterpolator(DEF="BubblePath1")
PositionInterpolator13.key = [0,0.5,0.8,0.9,1]
PositionInterpolator13.keyValue = [(0, 0, 0),(0.75, 0.75, 0.75),(0.86, 0.86, 0.86),(0.99, 0.998, 0.9876),(1.272, 1.9044, 0.9509)]

Group11.children.append(PositionInterpolator13)
PositionInterpolator14 = x3d.PositionInterpolator(DEF="BubblePath2")
PositionInterpolator14.key = [0,0.3,0.64,0.85,1]
PositionInterpolator14.keyValue = [(0.1, 0.1, 0.1),(0.2, 0.4, 0.25),(0.3, 0.5, 0.46),(0.75, 0.5, 0.575),(0.03848348, 1.989, 1.098373)]

Group11.children.append(PositionInterpolator14)
PositionInterpolator15 = x3d.PositionInterpolator(DEF="BubblePath3")
PositionInterpolator15.key = [0,0.1,0.45,0.7,1]
PositionInterpolator15.keyValue = [(0.01, 0.01, 0.01),(0.25, 0.35, 0.0045),(0.55, 0.6, 0.0055),(0.66, 0.665, 0.00655),(1.555, 1.09043, 0.005734)]

Group11.children.append(PositionInterpolator15)
PositionInterpolator16 = x3d.PositionInterpolator(DEF="BubblePath4")
PositionInterpolator16.key = [0,0.5,0.6,0.8,1]
PositionInterpolator16.keyValue = [(0, 0, 0),(0.5, 0.5, 0.005),(0.6, 0.6, 0.006),(0.75, 0.75, 0.0075),(1.948594, 1.3983, 0.009009349)]

Group11.children.append(PositionInterpolator16)
PositionInterpolator17 = x3d.PositionInterpolator(DEF="BubblePath5")
PositionInterpolator17.key = [0,0.25,0.35,0.65,1]
PositionInterpolator17.keyValue = [(0, 0, 0),(0.5, 0.5, 0.005),(0.6, 0.6, 0.006),(0.75, 0.75, 0.0075),(1.84444, 1.22222, 0.1)]

Group11.children.append(PositionInterpolator17)
PositionInterpolator18 = x3d.PositionInterpolator(DEF="BubblePath6")
PositionInterpolator18.key = [0,0.15,0.22235,0.55565,1]
PositionInterpolator18.keyValue = [(0, 0, 0),(0.235, 0.3455, 0.0055),(0.356, 0.676, 0.00456),(0.5675, 0.75, 0.0074565),(1.098, 1.0343, 0.14)]

Group11.children.append(PositionInterpolator18)
PositionInterpolator19 = x3d.PositionInterpolator(DEF="BubblePath7")
PositionInterpolator19.key = [0,0.2425,0.4535,0.6775,1]
PositionInterpolator19.keyValue = [(0, 0, 0),(0.12345, 0.2225, 0.00335),(0.786, 0.456, 0.00666),(0.74555, 0.7335, 0.00234575),(0.08787, 1.022, 0.12)]

Group11.children.append(PositionInterpolator19)
PositionInterpolator20 = x3d.PositionInterpolator(DEF="BubblePath8")
PositionInterpolator20.key = [0,0.1125,0.5535,0.97865,1]
PositionInterpolator20.keyValue = [(0, 0, 0),(0.1235, 0.05, 0.00125),(0.5666, 0.4346, 0.005556),(0.8975, 0.34575, 0.0098775),(1.8787, 1.686, 0.86)]

Group11.children.append(PositionInterpolator20)
PositionInterpolator21 = x3d.PositionInterpolator(DEF="BubblePath9")
PositionInterpolator21.key = [0,0.0025,0.035,0.65,1]
PositionInterpolator21.keyValue = [(0, 0, 0),(0.522, 0.5445, 0.0057),(0.6543, 0.226, 0.0055),(0.45575, 0.4375, 0.0067),(1.8787, 2, 0.1545)]

Group11.children.append(PositionInterpolator21)
PositionInterpolator22 = x3d.PositionInterpolator(DEF="BubblePath10")
PositionInterpolator22.key = [0,0.00025,0.035,0.6895,1]
PositionInterpolator22.keyValue = [(0, 0, 0),(0.8765, 0.445, 0.00335),(0.3336, 0.4446, 0.005556),(0.765, 0.75, 0.0075),(1, 1, 0.1)]

Group11.children.append(PositionInterpolator22)
Transform23 = x3d.Transform()
Transform24 = x3d.Transform(DEF="bubble1")
Transform24.translation = [0.9525167,0.95821,0.9508087]
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.diffuseColor = [1,1,1]
Material27.transparency = 0.8

Appearance26.material = Material27

Shape25.appearance = Appearance26
Sphere28 = x3d.Sphere()
Sphere28.radius = 0.025

Shape25.geometry = Sphere28

Transform24.children.append(Shape25)

Transform23.children.append(Transform24)
Transform29 = x3d.Transform(DEF="bubble2")
Transform29.translation = [0.6495973,0.710114,0.6488536]
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
Material32.diffuseColor = [1,1,1]
Material32.transparency = 0.8

Appearance31.material = Material32

Shape30.appearance = Appearance31
Sphere33 = x3d.Sphere()
Sphere33.radius = 0.055

Shape30.geometry = Sphere33

Transform29.children.append(Shape30)

Transform23.children.append(Transform29)
Transform34 = x3d.Transform(DEF="bubble3")
Transform34.translation = [1.170647,0.9077314,0.006084427]
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.diffuseColor = [1,1,1]
Material37.transparency = 0.8

Appearance36.material = Material37

Shape35.appearance = Appearance36
Sphere38 = x3d.Sphere()
Sphere38.radius = 0.065

Shape35.geometry = Sphere38

Transform34.children.append(Shape35)

Transform23.children.append(Transform34)
Transform39 = x3d.Transform(DEF="bubble4")
Transform39.translation = [1.1765,0.9806867,0.008037076]
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.diffuseColor = [1,1,1]
Material42.transparency = 0.8

Appearance41.material = Material42

Shape40.appearance = Appearance41
Sphere43 = x3d.Sphere()
Sphere43.radius = 0.015

Shape40.geometry = Sphere43

Transform39.children.append(Shape40)

Transform23.children.append(Transform39)
Transform44 = x3d.Transform(DEF="bubble5")
Transform44.translation = [1.441582,1.048398,0.06595119]
Shape45 = x3d.Shape()
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.diffuseColor = [1,1,1]
Material47.transparency = 0.8

Appearance46.material = Material47

Shape45.appearance = Appearance46
Sphere48 = x3d.Sphere()
Sphere48.radius = 0.075

Shape45.geometry = Sphere48

Transform44.children.append(Shape45)

Transform23.children.append(Transform44)
Transform49 = x3d.Transform(DEF="bubble6")
Transform49.translation = [0.9441886,0.951871,0.1015708]
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.diffuseColor = [1,1,1]
Material52.transparency = 0.8

Appearance51.material = Material52

Shape50.appearance = Appearance51
Sphere53 = x3d.Sphere()
Sphere53.radius = 0.005

Shape50.geometry = Sphere53

Transform49.children.append(Shape50)

Transform23.children.append(Transform49)
Transform54 = x3d.Transform(DEF="bubble7")
Transform54.translation = [0.3506022,0.906749,0.07299909]
Shape55 = x3d.Shape()
Appearance56 = x3d.Appearance()
Material57 = x3d.Material()
Material57.diffuseColor = [1,1,1]
Material57.transparency = 0.8

Appearance56.material = Material57

Shape55.appearance = Appearance56
Sphere58 = x3d.Sphere()
Sphere58.radius = 0.035

Shape55.geometry = Sphere58

Transform54.children.append(Shape55)

Transform23.children.append(Transform54)
Transform59 = x3d.Transform(DEF="bubble8")
Transform59.translation = [0.8138443,0.3682124,0.00878497]
Shape60 = x3d.Shape()
Appearance61 = x3d.Appearance()
Material62 = x3d.Material()
Material62.diffuseColor = [1,1,1]
Material62.transparency = 0.8

Appearance61.material = Material62

Shape60.appearance = Appearance61
Sphere63 = x3d.Sphere()
Sphere63.radius = 0.05

Shape60.geometry = Sphere63

Transform59.children.append(Shape60)

Transform23.children.append(Transform59)
Transform64 = x3d.Transform(DEF="bubble9")
Transform64.translation = [1.354919,1.424851,0.1000955]
Shape65 = x3d.Shape()
Appearance66 = x3d.Appearance()
Material67 = x3d.Material()
Material67.diffuseColor = [1,1,1]
Material67.transparency = 0.8

Appearance66.material = Material67

Shape65.appearance = Appearance66
Sphere68 = x3d.Sphere()
Sphere68.radius = 0.045

Shape65.geometry = Sphere68

Transform64.children.append(Shape65)

Transform23.children.append(Transform64)
Transform69 = x3d.Transform(DEF="bubble10")
Transform69.translation = [0.9024933,0.8962695,0.0616197]
Shape70 = x3d.Shape()
Appearance71 = x3d.Appearance()
Material72 = x3d.Material()
Material72.diffuseColor = [1,1,1]
Material72.transparency = 0.8

Appearance71.material = Material72

Shape70.appearance = Appearance71
Sphere73 = x3d.Sphere()
Sphere73.radius = 0.035

Shape70.geometry = Sphere73

Transform69.children.append(Shape70)

Transform23.children.append(Transform69)

Group11.children.append(Transform23)

Transform10.children.append(Group11)

Scene8.children.append(Transform10)
Background74 = x3d.Background()
Background74.skyColor = [(0, 0, 0.6)]

Scene8.children.append(Background74)
ROUTE75 = x3d.ROUTE()
ROUTE75.fromNode = "BubbleClock"
ROUTE75.fromField = "fraction_changed"
ROUTE75.toNode = "BubblePath1"
ROUTE75.toField = "set_fraction"

Scene8.children.append(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.fromNode = "BubbleClock"
ROUTE76.fromField = "fraction_changed"
ROUTE76.toNode = "BubblePath2"
ROUTE76.toField = "set_fraction"

Scene8.children.append(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromNode = "BubbleClock"
ROUTE77.fromField = "fraction_changed"
ROUTE77.toNode = "BubblePath3"
ROUTE77.toField = "set_fraction"

Scene8.children.append(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.fromNode = "BubbleClock"
ROUTE78.fromField = "fraction_changed"
ROUTE78.toNode = "BubblePath4"
ROUTE78.toField = "set_fraction"

Scene8.children.append(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.fromNode = "BubbleClock"
ROUTE79.fromField = "fraction_changed"
ROUTE79.toNode = "BubblePath5"
ROUTE79.toField = "set_fraction"

Scene8.children.append(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromNode = "BubbleClock"
ROUTE80.fromField = "fraction_changed"
ROUTE80.toNode = "BubblePath6"
ROUTE80.toField = "set_fraction"

Scene8.children.append(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.fromNode = "BubbleClock"
ROUTE81.fromField = "fraction_changed"
ROUTE81.toNode = "BubblePath7"
ROUTE81.toField = "set_fraction"

Scene8.children.append(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromNode = "BubbleClock"
ROUTE82.fromField = "fraction_changed"
ROUTE82.toNode = "BubblePath8"
ROUTE82.toField = "set_fraction"

Scene8.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromNode = "BubbleClock"
ROUTE83.fromField = "fraction_changed"
ROUTE83.toNode = "BubblePath9"
ROUTE83.toField = "set_fraction"

Scene8.children.append(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.fromNode = "BubbleClock"
ROUTE84.fromField = "fraction_changed"
ROUTE84.toNode = "BubblePath10"
ROUTE84.toField = "set_fraction"

Scene8.children.append(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.fromNode = "BubblePath1"
ROUTE85.fromField = "value_changed"
ROUTE85.toNode = "bubble1"
ROUTE85.toField = "set_translation"

Scene8.children.append(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.fromNode = "BubblePath2"
ROUTE86.fromField = "value_changed"
ROUTE86.toNode = "bubble2"
ROUTE86.toField = "set_translation"

Scene8.children.append(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.fromNode = "BubblePath3"
ROUTE87.fromField = "value_changed"
ROUTE87.toNode = "bubble3"
ROUTE87.toField = "set_translation"

Scene8.children.append(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.fromNode = "BubblePath4"
ROUTE88.fromField = "value_changed"
ROUTE88.toNode = "bubble4"
ROUTE88.toField = "set_translation"

Scene8.children.append(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.fromNode = "BubblePath5"
ROUTE89.fromField = "value_changed"
ROUTE89.toNode = "bubble5"
ROUTE89.toField = "set_translation"

Scene8.children.append(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.fromNode = "BubblePath6"
ROUTE90.fromField = "value_changed"
ROUTE90.toNode = "bubble6"
ROUTE90.toField = "set_translation"

Scene8.children.append(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.fromNode = "BubblePath7"
ROUTE91.fromField = "value_changed"
ROUTE91.toNode = "bubble7"
ROUTE91.toField = "set_translation"

Scene8.children.append(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.fromNode = "BubblePath8"
ROUTE92.fromField = "value_changed"
ROUTE92.toNode = "bubble8"
ROUTE92.toField = "set_translation"

Scene8.children.append(ROUTE92)
ROUTE93 = x3d.ROUTE()
ROUTE93.fromNode = "BubblePath9"
ROUTE93.fromField = "value_changed"
ROUTE93.toNode = "bubble9"
ROUTE93.toField = "set_translation"

Scene8.children.append(ROUTE93)
ROUTE94 = x3d.ROUTE()
ROUTE94.fromNode = "BubblePath10"
ROUTE94.fromField = "value_changed"
ROUTE94.toNode = "bubble10"
ROUTE94.toField = "set_translation"

Scene8.children.append(ROUTE94)

X3D0.Scene = Scene8
f = open("../data/Bubbles.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Bubbles.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Bubbles.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
