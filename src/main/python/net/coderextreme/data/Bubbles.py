import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("Bubbles.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Bubble animation used by Nancy Diving example.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Etsuko Lippi")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("24 January 2001")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("23 May 2020")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("identifier")
meta7.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("generator")
meta8.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("license")
meta9.setContent("../license.html")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.setTitle("Bubbles.x3d")

Scene10.addChildren(WorldInfo11)
Transform12 = x3d.Transform()
Transform12.setDEF("Bubbles")
Group13 = x3d.Group()
Group13.setDEF("Bubble")
TimeSensor14 = x3d.TimeSensor()
TimeSensor14.setDEF("BubbleClock")
TimeSensor14.setCycleInterval(6)
TimeSensor14.setLoop(True)

Group13.addChildren(TimeSensor14)
PositionInterpolator15 = x3d.PositionInterpolator()
PositionInterpolator15.setDEF("BubblePath1")
PositionInterpolator15.setKey(x3d.doubleToFloat([0,0.5,0.8,0.9,1]))
PositionInterpolator15.setKeyValue(x3d.doubleToFloat([0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509]))

Group13.addChildren(PositionInterpolator15)
PositionInterpolator16 = x3d.PositionInterpolator()
PositionInterpolator16.setDEF("BubblePath2")
PositionInterpolator16.setKey(x3d.doubleToFloat([0,0.3,0.64,0.85,1]))
PositionInterpolator16.setKeyValue(x3d.doubleToFloat([0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373]))

Group13.addChildren(PositionInterpolator16)
PositionInterpolator17 = x3d.PositionInterpolator()
PositionInterpolator17.setDEF("BubblePath3")
PositionInterpolator17.setKey(x3d.doubleToFloat([0,0.1,0.45,0.7,1]))
PositionInterpolator17.setKeyValue(x3d.doubleToFloat([0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734]))

Group13.addChildren(PositionInterpolator17)
PositionInterpolator18 = x3d.PositionInterpolator()
PositionInterpolator18.setDEF("BubblePath4")
PositionInterpolator18.setKey(x3d.doubleToFloat([0,0.5,0.6,0.8,1]))
PositionInterpolator18.setKeyValue(x3d.doubleToFloat([0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349]))

Group13.addChildren(PositionInterpolator18)
PositionInterpolator19 = x3d.PositionInterpolator()
PositionInterpolator19.setDEF("BubblePath5")
PositionInterpolator19.setKey(x3d.doubleToFloat([0,0.25,0.35,0.65,1]))
PositionInterpolator19.setKeyValue(x3d.doubleToFloat([0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1]))

Group13.addChildren(PositionInterpolator19)
PositionInterpolator20 = x3d.PositionInterpolator()
PositionInterpolator20.setDEF("BubblePath6")
PositionInterpolator20.setKey(x3d.doubleToFloat([0,0.15,0.22235,0.55565,1]))
PositionInterpolator20.setKeyValue(x3d.doubleToFloat([0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14]))

Group13.addChildren(PositionInterpolator20)
PositionInterpolator21 = x3d.PositionInterpolator()
PositionInterpolator21.setDEF("BubblePath7")
PositionInterpolator21.setKey(x3d.doubleToFloat([0,0.2425,0.4535,0.6775,1]))
PositionInterpolator21.setKeyValue(x3d.doubleToFloat([0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12]))

Group13.addChildren(PositionInterpolator21)
PositionInterpolator22 = x3d.PositionInterpolator()
PositionInterpolator22.setDEF("BubblePath8")
PositionInterpolator22.setKey(x3d.doubleToFloat([0,0.1125,0.5535,0.97865,1]))
PositionInterpolator22.setKeyValue(x3d.doubleToFloat([0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86]))

Group13.addChildren(PositionInterpolator22)
PositionInterpolator23 = x3d.PositionInterpolator()
PositionInterpolator23.setDEF("BubblePath9")
PositionInterpolator23.setKey(x3d.doubleToFloat([0,0.0025,0.035,0.65,1]))
PositionInterpolator23.setKeyValue(x3d.doubleToFloat([0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545]))

Group13.addChildren(PositionInterpolator23)
PositionInterpolator24 = x3d.PositionInterpolator()
PositionInterpolator24.setDEF("BubblePath10")
PositionInterpolator24.setKey(x3d.doubleToFloat([0,0.00025,0.035,0.6895,1]))
PositionInterpolator24.setKeyValue(x3d.doubleToFloat([0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1]))

Group13.addChildren(PositionInterpolator24)
Transform25 = x3d.Transform()
Transform26 = x3d.Transform()
Transform26.setDEF("bubble1")
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
Material29 = x3d.Material()
Material29.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material29.setTransparency(0.8)

Appearance28.setMaterial(Material29)

Shape27.setAppearance(Appearance28)
Sphere30 = x3d.Sphere()
Sphere30.setRadius(0.025)

Shape27.setGeometry(Sphere30)

Transform26.addChild(Shape27)

Transform25.addChildren(Transform26)
Transform31 = x3d.Transform()
Transform31.setDEF("bubble2")
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material34.setTransparency(0.8)

Appearance33.setMaterial(Material34)

Shape32.setAppearance(Appearance33)
Sphere35 = x3d.Sphere()
Sphere35.setRadius(0.055)

Shape32.setGeometry(Sphere35)

Transform31.addChild(Shape32)

Transform25.addChildren(Transform31)
Transform36 = x3d.Transform()
Transform36.setDEF("bubble3")
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material39.setTransparency(0.8)

Appearance38.setMaterial(Material39)

Shape37.setAppearance(Appearance38)
Sphere40 = x3d.Sphere()
Sphere40.setRadius(0.065)

Shape37.setGeometry(Sphere40)

Transform36.addChild(Shape37)

Transform25.addChildren(Transform36)
Transform41 = x3d.Transform()
Transform41.setDEF("bubble4")
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material44.setTransparency(0.8)

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
Sphere45 = x3d.Sphere()
Sphere45.setRadius(0.015)

Shape42.setGeometry(Sphere45)

Transform41.addChild(Shape42)

Transform25.addChildren(Transform41)
Transform46 = x3d.Transform()
Transform46.setDEF("bubble5")
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material49.setTransparency(0.8)

Appearance48.setMaterial(Material49)

Shape47.setAppearance(Appearance48)
Sphere50 = x3d.Sphere()
Sphere50.setRadius(0.075)

Shape47.setGeometry(Sphere50)

Transform46.addChild(Shape47)

Transform25.addChildren(Transform46)
Transform51 = x3d.Transform()
Transform51.setDEF("bubble6")
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material54.setTransparency(0.8)

Appearance53.setMaterial(Material54)

Shape52.setAppearance(Appearance53)
Sphere55 = x3d.Sphere()
Sphere55.setRadius(0.005)

Shape52.setGeometry(Sphere55)

Transform51.addChild(Shape52)

Transform25.addChildren(Transform51)
Transform56 = x3d.Transform()
Transform56.setDEF("bubble7")
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material59.setTransparency(0.8)

Appearance58.setMaterial(Material59)

Shape57.setAppearance(Appearance58)
Sphere60 = x3d.Sphere()
Sphere60.setRadius(0.035)

Shape57.setGeometry(Sphere60)

Transform56.addChild(Shape57)

Transform25.addChildren(Transform56)
Transform61 = x3d.Transform()
Transform61.setDEF("bubble8")
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material64.setTransparency(0.8)

Appearance63.setMaterial(Material64)

Shape62.setAppearance(Appearance63)
Sphere65 = x3d.Sphere()
Sphere65.setRadius(0.05)

Shape62.setGeometry(Sphere65)

Transform61.addChild(Shape62)

Transform25.addChildren(Transform61)
Transform66 = x3d.Transform()
Transform66.setDEF("bubble9")
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material69.setTransparency(0.8)

Appearance68.setMaterial(Material69)

Shape67.setAppearance(Appearance68)
Sphere70 = x3d.Sphere()
Sphere70.setRadius(0.045)

Shape67.setGeometry(Sphere70)

Transform66.addChild(Shape67)

Transform25.addChildren(Transform66)
Transform71 = x3d.Transform()
Transform71.setDEF("bubble10")
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material74.setTransparency(0.8)

Appearance73.setMaterial(Material74)

Shape72.setAppearance(Appearance73)
Sphere75 = x3d.Sphere()
Sphere75.setRadius(0.035)

Shape72.setGeometry(Sphere75)

Transform71.addChild(Shape72)

Transform25.addChildren(Transform71)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromField("fraction_changed")
ROUTE76.setFromNode("BubbleClock")
ROUTE76.setToField("set_fraction")
ROUTE76.setToNode("BubblePath1")

Transform25.addChildren(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromField("fraction_changed")
ROUTE77.setFromNode("BubbleClock")
ROUTE77.setToField("set_fraction")
ROUTE77.setToNode("BubblePath2")

Transform25.addChildren(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromField("fraction_changed")
ROUTE78.setFromNode("BubbleClock")
ROUTE78.setToField("set_fraction")
ROUTE78.setToNode("BubblePath3")

Transform25.addChildren(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromField("fraction_changed")
ROUTE79.setFromNode("BubbleClock")
ROUTE79.setToField("set_fraction")
ROUTE79.setToNode("BubblePath4")

Transform25.addChildren(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromField("fraction_changed")
ROUTE80.setFromNode("BubbleClock")
ROUTE80.setToField("set_fraction")
ROUTE80.setToNode("BubblePath5")

Transform25.addChildren(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromField("fraction_changed")
ROUTE81.setFromNode("BubbleClock")
ROUTE81.setToField("set_fraction")
ROUTE81.setToNode("BubblePath6")

Transform25.addChildren(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromField("fraction_changed")
ROUTE82.setFromNode("BubbleClock")
ROUTE82.setToField("set_fraction")
ROUTE82.setToNode("BubblePath7")

Transform25.addChildren(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromField("fraction_changed")
ROUTE83.setFromNode("BubbleClock")
ROUTE83.setToField("set_fraction")
ROUTE83.setToNode("BubblePath8")

Transform25.addChildren(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.setFromField("fraction_changed")
ROUTE84.setFromNode("BubbleClock")
ROUTE84.setToField("set_fraction")
ROUTE84.setToNode("BubblePath9")

Transform25.addChildren(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.setFromField("fraction_changed")
ROUTE85.setFromNode("BubbleClock")
ROUTE85.setToField("set_fraction")
ROUTE85.setToNode("BubblePath10")

Transform25.addChildren(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.setFromField("value_changed")
ROUTE86.setFromNode("BubblePath1")
ROUTE86.setToField("set_translation")
ROUTE86.setToNode("bubble1")

Transform25.addChildren(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.setFromField("value_changed")
ROUTE87.setFromNode("BubblePath2")
ROUTE87.setToField("set_translation")
ROUTE87.setToNode("bubble2")

Transform25.addChildren(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.setFromField("value_changed")
ROUTE88.setFromNode("BubblePath3")
ROUTE88.setToField("set_translation")
ROUTE88.setToNode("bubble3")

Transform25.addChildren(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.setFromField("value_changed")
ROUTE89.setFromNode("BubblePath4")
ROUTE89.setToField("set_translation")
ROUTE89.setToNode("bubble4")

Transform25.addChildren(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.setFromField("value_changed")
ROUTE90.setFromNode("BubblePath5")
ROUTE90.setToField("set_translation")
ROUTE90.setToNode("bubble5")

Transform25.addChildren(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.setFromField("value_changed")
ROUTE91.setFromNode("BubblePath6")
ROUTE91.setToField("set_translation")
ROUTE91.setToNode("bubble6")

Transform25.addChildren(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.setFromField("value_changed")
ROUTE92.setFromNode("BubblePath7")
ROUTE92.setToField("set_translation")
ROUTE92.setToNode("bubble7")

Transform25.addChildren(ROUTE92)
ROUTE93 = x3d.ROUTE()
ROUTE93.setFromField("value_changed")
ROUTE93.setFromNode("BubblePath8")
ROUTE93.setToField("set_translation")
ROUTE93.setToNode("bubble8")

Transform25.addChildren(ROUTE93)
ROUTE94 = x3d.ROUTE()
ROUTE94.setFromField("value_changed")
ROUTE94.setFromNode("BubblePath9")
ROUTE94.setToField("set_translation")
ROUTE94.setToNode("bubble9")

Transform25.addChildren(ROUTE94)
ROUTE95 = x3d.ROUTE()
ROUTE95.setFromField("value_changed")
ROUTE95.setFromNode("BubblePath10")
ROUTE95.setToField("set_translation")
ROUTE95.setToNode("bubble10")

Transform25.addChildren(ROUTE95)

Group13.addChildren(Transform25)

Transform12.addChildren(Group13)

Scene10.addChildren(Transform12)
Background96 = x3d.Background()
Background96.setSkyColor(x3d.doubleToFloat([0,0,0.6]))

Scene10.addChildren(Background96)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/Bubbles.new.python.x3d")
X3D0.toFileJSON("../data/Bubbles.new.python.json")
