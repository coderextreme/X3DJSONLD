print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "WinterAndSpringHumanoidTimings.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Example animation timings, manually translated from tool outputs and export."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "reference"
meta4.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "info"
meta5.content = "reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Katy Schildmeyer"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "Carol McDonald"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "translator"
meta8.content = "Joe Williams"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "translator"
meta9.content = "Don Brutzman"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "created"
meta10.content = "2 July 2023"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "translated"
meta11.content = "9 July 2023"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "modified"
meta12.content = "Mon, 15 Sep 2025 05:21:02 GMT"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "hint"
meta13.content = "MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous."

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "Cinema 4D https://www.maxon.net/en/cinema-4d"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
WorldInfo17 = x3d.WorldInfo()
WorldInfo17.title = "WinterAndSpringHumanoidTimings.x3d"

Scene16.children.append(WorldInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.DEF = "EntryView1"
Viewpoint18.description = "Hello characters 1"
Viewpoint18.position = [0,2,40]

Scene16.children.append(Viewpoint18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.DEF = "EntryView2"
Viewpoint19.description = "Hello characters 2"
Viewpoint19.position = [-15,10,30]
Viewpoint19.orientation = [0,1,0,-0.643501]
Viewpoint19.centerOfRotation = [0,10,10]

Scene16.children.append(Viewpoint19)
Transform20 = x3d.Transform()
Transform20.DEF = "TextRoot"
Transform20.translation = [9.8557,0.95,3.5]
Shape21 = x3d.Shape()
Shape21.DEF = "ModelDescriptionText"
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.diffuseColor = [0.960784,0.894118,0]

Appearance22.material = Material23

Shape21.appearance = Appearance22
Text24 = x3d.Text()
Text24.string = ["This scene tests","","experimental approaches","","for human animation"]
FontStyle25 = x3d.FontStyle()
FontStyle25.family = ["SANS"]
FontStyle25.style = "BOLD"
FontStyle25.size = 0.8
FontStyle25.justify = ["MIDDLE","MIDDLE"]

Text24.fontStyle = FontStyle25

Shape21.geometry = Text24

Transform20.children.append(Shape21)

Scene16.children.append(Transform20)
Transform26 = x3d.Transform()
Transform26.DEF = "Root4"
Transform26.translation = [11.3657,0.475,3.377131]

Scene16.children.append(Transform26)
Transform27 = x3d.Transform()
Transform27.DEF = "Root5"
Transform27.translation = [10.55646,0.475,3.391616]

Scene16.children.append(Transform27)
Transform28 = x3d.Transform()
Transform28.DEF = "Root6"
Transform28.translation = [9.167682,0.475,3.332752]

Scene16.children.append(Transform28)
PositionInterpolator29 = x3d.PositionInterpolator()
PositionInterpolator29.DEF = "Gramps_HumanoidRoot_TranslationInterpolator"
PositionInterpolator29.key = [0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]
PositionInterpolator29.keyValue = [(6.8557, 0.95, 0.5),(6.8557, 0.95, 0.5),(6.8557, 0.95, 0.5),(9.8557, 0.95, 3.5),(9.8557, 0.95, 3.5),(9.8557, 0.95, 3.5),(14.3558, 0.95, 8),(16.8558, 0.95, 15),(21.3557, 0.95, 24.5),(21.3557, 0.95, 24.5),(21.3557, 0.95, 24.5)]
MetadataString30 = x3d.MetadataString()
MetadataString30.name = "poses"
MetadataString30.value = ["Gramps_Stand01","Gramps_Stand01","Gramps_Walk01","Gramps_Stand02","Gramps_Turn01","Gramps_Walk01","Gramps_Walk02","Gramps_Skip01","Gramps_Stand03","Gramps_Stand03","Gramps_Stand03"]

PositionInterpolator29.metadata = MetadataString30

Scene16.children.append(PositionInterpolator29)
PositionInterpolator31 = x3d.PositionInterpolator()
PositionInterpolator31.DEF = "Leif_HumanoidRoot_TranslationInterpolator"
PositionInterpolator31.key = [0,0.09,0.11,0.223,0.043,0.55,0.63,0.73,0.85,0.86,1]
PositionInterpolator31.keyValue = [(-7.9962, 0.4, 3),(-7.9962, 0.4, 3),(-7.9962, 0.4, 3),(-7.9962, 0.4, 3),(9.004, 0.475, 3.4999),(11.5048, 0.475, 3.3699),(16.0038, 0.475, 7.8699),(18.5038, 0.475, 14.8699),(23.0038, 0.475, 24.3699),(23.0038, 0.475, 24.3699),(23.0038, 0.475, 24.3699)]
MetadataString32 = x3d.MetadataString()
MetadataString32.name = "poses"
MetadataString32.value = ["Leif_Stand01","Leif_Stand01","Leif_Stand01","Leif_Run01","Leif_Turn01","Leif_Walk01","Leif_Walk01","Leif_Skip01","Leif_Stand01","Leif_Stand01","Leif_Stand01"]

PositionInterpolator31.metadata = MetadataString32

Scene16.children.append(PositionInterpolator31)
PositionInterpolator33 = x3d.PositionInterpolator()
PositionInterpolator33.DEF = "Lily_HumanoidRoot_TranslationInterpolator"
PositionInterpolator33.key = [0,0.09,0.11,0.225,0.043,0.55,0.63,0.73,0.85,0.86,1]
PositionInterpolator33.keyValue = [(-8.0962, 0.4, 5.6),(-8.0962, 0.4, 5.6),(-8.0962, 0.4, 5.6),(-8.0962, 0.4, 5.6),(8.9038, 0.475, 4.0999),(10.6538, 0.475, 3.3499),(15.1538, 0.475, 7.8499),(17.6538, 0.475, 14.8499),(22.1538, 0.475, 24.3499),(22.1538, 0.475, 24.3499),(22.1538, 0.475, 24.3499)]
MetadataString34 = x3d.MetadataString()
MetadataString34.name = "poses"
MetadataString34.value = ["Lily_Stand01","Lily_Stand01","Lily_Stand01","Leif_Run01","Lily_Turn01","Lily_Walk01","Lily_Walk01","Lily_Skip01","Lily_Stand01","Lily_Stand01","Lily_Stand01"]

PositionInterpolator33.metadata = MetadataString34

Scene16.children.append(PositionInterpolator33)
PositionInterpolator35 = x3d.PositionInterpolator()
PositionInterpolator35.DEF = "Tufani_HumanoidRoot_TranslationInterpolator"
PositionInterpolator35.key = [0,0.09,0.11,0.227,0.043,0.55,0.63,0.73,0.85,0.86,1]
PositionInterpolator35.keyValue = [(-8.0962, 0.4, 6.4),(-8.0962, 0.4, 6.4),(-8.0962, 0.4, 6.4),(-8.0962, 0.4, 6.4),(9.40338, 0.475, 4.3999),(9.1538, 0.475, 3.2699),(13.6538, 0.475, 7.7699),(16.1538, 0.475, 14.7699),(20.6538, 0.475, 24.2699),(20.6538, 0.475, 24.2699),(20.6538, 0.475, 24.2699)]
MetadataString36 = x3d.MetadataString()
MetadataString36.name = "poses"
MetadataString36.value = ["Tufani_Stand01","Tufani_Stand01","Tufani_Stand01","Tufani_Run01","Tufani_Turn01","Tufani_Walk01","Tufani_Walk01","Tufani_Skip01","Tufani_Stand01","Tufani_Stand01","Tufani_Stand01"]

PositionInterpolator35.metadata = MetadataString36

Scene16.children.append(PositionInterpolator35)
Background37 = x3d.Background()
Background37.DEF = "Background3Black"

Scene16.children.append(Background37)
Background38 = x3d.Background()
Background38.DEF = "Background4SkyBlueGreenGrass"
Background38.skyColor = [(0, 0.71, 0.886)]
Background38.groundAngle = [1.57]
Background38.groundColor = [(0.356863, 0.639216, 0),(0.721569, 1, 0.501961)]

Scene16.children.append(Background38)
Background39 = x3d.Background()
Background39.DEF = "Background5LightGrey"
Background39.skyColor = [(0.827, 0.827, 0.827)]

Scene16.children.append(Background39)
Background40 = x3d.Background()
Background40.DEF = "Background6DarkGrey"
Background40.skyColor = [(0.6, 0.2, 0.2)]

Scene16.children.append(Background40)
TimeSensor41 = x3d.TimeSensor()
TimeSensor41.DEF = "Clock10Seconds"
TimeSensor41.cycleInterval = 5
TimeSensor41.loop = True

Scene16.children.append(TimeSensor41)
TimeSensor42 = x3d.TimeSensor()
TimeSensor42.DEF = "Clock100Seconds"
TimeSensor42.enabled = False
TimeSensor42.cycleInterval = 100

Scene16.children.append(TimeSensor42)
BooleanSequencer43 = x3d.BooleanSequencer()
BooleanSequencer43.DEF = "Background3Sequencer"
BooleanSequencer43.key = [0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]
BooleanSequencer43.keyValue = [True,True,True,False,False,False,False,False,False,False,False]

Scene16.children.append(BooleanSequencer43)
BooleanSequencer44 = x3d.BooleanSequencer()
BooleanSequencer44.DEF = "Background4Sequencer"
BooleanSequencer44.key = [0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]
BooleanSequencer44.keyValue = [False,False,False,True,True,False,False,False,False,False,False]

Scene16.children.append(BooleanSequencer44)
BooleanSequencer45 = x3d.BooleanSequencer()
BooleanSequencer45.DEF = "Background5Sequencer"
BooleanSequencer45.key = [0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]
BooleanSequencer45.keyValue = [False,False,False,False,False,True,True,True,False,False,False]

Scene16.children.append(BooleanSequencer45)
BooleanSequencer46 = x3d.BooleanSequencer()
BooleanSequencer46.DEF = "Background6Sequencer"
BooleanSequencer46.key = [0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]
BooleanSequencer46.keyValue = [False,False,False,False,False,False,False,False,True,True,True]

Scene16.children.append(BooleanSequencer46)
ROUTE47 = x3d.ROUTE()
ROUTE47.fromNode = "Background3Sequencer"
ROUTE47.fromField = "value_changed"
ROUTE47.toNode = "Background3Black"
ROUTE47.toField = "set_bind"

Scene16.children.append(ROUTE47)
ROUTE48 = x3d.ROUTE()
ROUTE48.fromNode = "Background4Sequencer"
ROUTE48.fromField = "value_changed"
ROUTE48.toNode = "Background4SkyBlueGreenGrass"
ROUTE48.toField = "set_bind"

Scene16.children.append(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.fromNode = "Background5Sequencer"
ROUTE49.fromField = "value_changed"
ROUTE49.toNode = "Background5LightGrey"
ROUTE49.toField = "set_bind"

Scene16.children.append(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.fromNode = "Background6Sequencer"
ROUTE50.fromField = "value_changed"
ROUTE50.toNode = "Background6DarkGrey"
ROUTE50.toField = "set_bind"

Scene16.children.append(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.fromNode = "Clock10Seconds"
ROUTE51.fromField = "fraction_changed"
ROUTE51.toNode = "Background3Sequencer"
ROUTE51.toField = "set_fraction"

Scene16.children.append(ROUTE51)
ROUTE52 = x3d.ROUTE()
ROUTE52.fromNode = "Clock10Seconds"
ROUTE52.fromField = "fraction_changed"
ROUTE52.toNode = "Background4Sequencer"
ROUTE52.toField = "set_fraction"

Scene16.children.append(ROUTE52)
ROUTE53 = x3d.ROUTE()
ROUTE53.fromNode = "Clock10Seconds"
ROUTE53.fromField = "fraction_changed"
ROUTE53.toNode = "Background5Sequencer"
ROUTE53.toField = "set_fraction"

Scene16.children.append(ROUTE53)
ROUTE54 = x3d.ROUTE()
ROUTE54.fromNode = "Clock10Seconds"
ROUTE54.fromField = "fraction_changed"
ROUTE54.toNode = "Background6Sequencer"
ROUTE54.toField = "set_fraction"

Scene16.children.append(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "Clock100Seconds"
ROUTE55.fromField = "fraction_changed"
ROUTE55.toNode = "Background3Sequencer"
ROUTE55.toField = "set_fraction"

Scene16.children.append(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "Clock100Seconds"
ROUTE56.fromField = "fraction_changed"
ROUTE56.toNode = "Background4Sequencer"
ROUTE56.toField = "set_fraction"

Scene16.children.append(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "Clock100Seconds"
ROUTE57.fromField = "fraction_changed"
ROUTE57.toNode = "Background5Sequencer"
ROUTE57.toField = "set_fraction"

Scene16.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "Clock100Seconds"
ROUTE58.fromField = "fraction_changed"
ROUTE58.toNode = "Background6Sequencer"
ROUTE58.toField = "set_fraction"

Scene16.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "Clock10Seconds"
ROUTE59.fromField = "fraction_changed"
ROUTE59.toNode = "Gramps_HumanoidRoot_TranslationInterpolator"
ROUTE59.toField = "set_fraction"

Scene16.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Clock10Seconds"
ROUTE60.fromField = "fraction_changed"
ROUTE60.toNode = "Leif_HumanoidRoot_TranslationInterpolator"
ROUTE60.toField = "set_fraction"

Scene16.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "Clock10Seconds"
ROUTE61.fromField = "fraction_changed"
ROUTE61.toNode = "Lily_HumanoidRoot_TranslationInterpolator"
ROUTE61.toField = "set_fraction"

Scene16.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "Clock10Seconds"
ROUTE62.fromField = "fraction_changed"
ROUTE62.toNode = "Tufani_HumanoidRoot_TranslationInterpolator"
ROUTE62.toField = "set_fraction"

Scene16.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "Clock100Seconds"
ROUTE63.fromField = "fraction_changed"
ROUTE63.toNode = "Gramps_HumanoidRoot_TranslationInterpolator"
ROUTE63.toField = "set_fraction"

Scene16.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "Clock100Seconds"
ROUTE64.fromField = "fraction_changed"
ROUTE64.toNode = "Leif_HumanoidRoot_TranslationInterpolator"
ROUTE64.toField = "set_fraction"

Scene16.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "Clock100Seconds"
ROUTE65.fromField = "fraction_changed"
ROUTE65.toNode = "Lily_HumanoidRoot_TranslationInterpolator"
ROUTE65.toField = "set_fraction"

Scene16.children.append(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "Clock100Seconds"
ROUTE66.fromField = "fraction_changed"
ROUTE66.toNode = "Tufani_HumanoidRoot_TranslationInterpolator"
ROUTE66.toField = "set_fraction"

Scene16.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "Gramps_HumanoidRoot_TranslationInterpolator"
ROUTE67.fromField = "value_changed"
ROUTE67.toNode = "TextRoot"
ROUTE67.toField = "set_translation"

Scene16.children.append(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "Leif_HumanoidRoot_TranslationInterpolator"
ROUTE68.fromField = "value_changed"
ROUTE68.toNode = "Root4"
ROUTE68.toField = "set_translation"

Scene16.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "Lily_HumanoidRoot_TranslationInterpolator"
ROUTE69.fromField = "value_changed"
ROUTE69.toNode = "Root5"
ROUTE69.toField = "set_translation"

Scene16.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "Tufani_HumanoidRoot_TranslationInterpolator"
ROUTE70.fromField = "value_changed"
ROUTE70.toNode = "Root6"
ROUTE70.toField = "set_translation"

Scene16.children.append(ROUTE70)

X3D0.Scene = Scene16
f = open("../data/WinterAndSpringHumanoidTimings.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/WinterAndSpringHumanoidTimings.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/WinterAndSpringHumanoidTimings.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
