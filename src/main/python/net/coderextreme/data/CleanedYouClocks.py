print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 3

head1.children.append(component2)
component3 = x3d.component()
component3.name = "Core"
component3.level = 1

head1.children.append(component3)
component4 = x3d.component()
component4.name = "Grouping"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "Layering"
component5.level = 1

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Text"
component6.level = 1

head1.children.append(component6)
meta7 = x3d.meta()
meta7.name = "title"
meta7.content = "ManyClocks.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "identifier"
meta8.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ManyClocks.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "description"
meta9.content = "X3D scene with multiple facial animations controlled by a multi-selection menu"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "created"
meta10.content = "12 December 2024"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "modified"
meta11.content = "13 December 2024"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "creator"
meta12.content = "John Carlson, Joe Williams, Gyu Ri Cho, Hyun Ho Chu, Min Joo Lee, Yujin Jung"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
LayerSet14 = x3d.LayerSet()
LayerSet14.activeLayer = 1
LayerSet14.order = [1,2]
Layer15 = x3d.Layer(DEF="Model")
Layer15.pickable = True
Layer15.objectType = ["ALL"]
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.description = "Initial View"
Viewpoint16.position = [0,20,110]

Layer15.children.append(Viewpoint16)
TimeSensor17 = x3d.TimeSensor(DEF="Reset_Clock")
TimeSensor17.cycleInterval = 0.01

Layer15.children.append(TimeSensor17)
TimeSensor18 = x3d.TimeSensor(DEF="Contempt_Clock")
TimeSensor18.cycleInterval = 0.99
TimeSensor18.loop = True
TimeSensor18.enabled = False

Layer15.children.append(TimeSensor18)
TimeSensor19 = x3d.TimeSensor(DEF="Disgust_Clock")
TimeSensor19.cycleInterval = 0.99
TimeSensor19.loop = True
TimeSensor19.enabled = False

Layer15.children.append(TimeSensor19)
TimeSensor20 = x3d.TimeSensor(DEF="Anger_Clock")
TimeSensor20.cycleInterval = 0.99
TimeSensor20.loop = True
TimeSensor20.enabled = False

Layer15.children.append(TimeSensor20)
TimeSensor21 = x3d.TimeSensor(DEF="Fear_Clock")
TimeSensor21.cycleInterval = 0.99
TimeSensor21.loop = True
TimeSensor21.enabled = False

Layer15.children.append(TimeSensor21)
TimeSensor22 = x3d.TimeSensor(DEF="Surprise_Clock")
TimeSensor22.cycleInterval = 0.99
TimeSensor22.loop = True
TimeSensor22.enabled = False

Layer15.children.append(TimeSensor22)
TimeSensor23 = x3d.TimeSensor(DEF="Sadness_Clock")
TimeSensor23.cycleInterval = 0.99
TimeSensor23.loop = True
TimeSensor23.enabled = False

Layer15.children.append(TimeSensor23)
TimeSensor24 = x3d.TimeSensor(DEF="HappinessJoy_Clock")
TimeSensor24.cycleInterval = 0.99
TimeSensor24.loop = True
TimeSensor24.enabled = False

Layer15.children.append(TimeSensor24)
TimeSensor25 = x3d.TimeSensor(DEF="JinWink_Clock")
TimeSensor25.cycleInterval = 0.99
TimeSensor25.enabled = False
TimeSensor25.loop = True

Layer15.children.append(TimeSensor25)
TimeSensor26 = x3d.TimeSensor(DEF="JinUpperLipRaiser_Clock")
TimeSensor26.cycleInterval = 0.99
TimeSensor26.enabled = False
TimeSensor26.loop = True

Layer15.children.append(TimeSensor26)
TimeSensor27 = x3d.TimeSensor(DEF="JinUpperLidRaiser_Clock")
TimeSensor27.cycleInterval = 0.99
TimeSensor27.enabled = False
TimeSensor27.loop = True

Layer15.children.append(TimeSensor27)
TimeSensor28 = x3d.TimeSensor(DEF="JinSquint_Clock")
TimeSensor28.cycleInterval = 0.99
TimeSensor28.enabled = False
TimeSensor28.loop = True

Layer15.children.append(TimeSensor28)
TimeSensor29 = x3d.TimeSensor(DEF="JinSlit_Clock")
TimeSensor29.cycleInterval = 0.99
TimeSensor29.enabled = False
TimeSensor29.loop = True

Layer15.children.append(TimeSensor29)
TimeSensor30 = x3d.TimeSensor(DEF="JinOuterBrowRaiser_Clock")
TimeSensor30.cycleInterval = 0.99
TimeSensor30.enabled = False
TimeSensor30.loop = True

Layer15.children.append(TimeSensor30)
TimeSensor31 = x3d.TimeSensor(DEF="JinNoseWrinkler_Clock")
TimeSensor31.cycleInterval = 0.99
TimeSensor31.enabled = False
TimeSensor31.loop = True

Layer15.children.append(TimeSensor31)
TimeSensor32 = x3d.TimeSensor(DEF="JinNasolabialDeepener_Clock")
TimeSensor32.cycleInterval = 0.99
TimeSensor32.enabled = False
TimeSensor32.loop = True

Layer15.children.append(TimeSensor32)
TimeSensor33 = x3d.TimeSensor(DEF="JinMouthStretch_Clock")
TimeSensor33.cycleInterval = 0.99
TimeSensor33.enabled = False
TimeSensor33.loop = True

Layer15.children.append(TimeSensor33)
TimeSensor34 = x3d.TimeSensor(DEF="JinLowerLipDepressor_Clock")
TimeSensor34.cycleInterval = 0.99
TimeSensor34.enabled = False
TimeSensor34.loop = True

Layer15.children.append(TimeSensor34)
TimeSensor35 = x3d.TimeSensor(DEF="JinLipTightener_Clock")
TimeSensor35.cycleInterval = 0.99
TimeSensor35.enabled = False
TimeSensor35.loop = True

Layer15.children.append(TimeSensor35)
TimeSensor36 = x3d.TimeSensor(DEF="JinLipSuck_Clock")
TimeSensor36.cycleInterval = 0.99
TimeSensor36.enabled = False
TimeSensor36.loop = True

Layer15.children.append(TimeSensor36)
TimeSensor37 = x3d.TimeSensor(DEF="JinLipStretcher_Clock")
TimeSensor37.cycleInterval = 0.99
TimeSensor37.enabled = False
TimeSensor37.loop = True

Layer15.children.append(TimeSensor37)
TimeSensor38 = x3d.TimeSensor(DEF="JinLipsPart_Clock")
TimeSensor38.cycleInterval = 0.99
TimeSensor38.enabled = False
TimeSensor38.loop = True

Layer15.children.append(TimeSensor38)
TimeSensor39 = x3d.TimeSensor(DEF="JinLipPuckerer_Clock")
TimeSensor39.cycleInterval = 0.99
TimeSensor39.enabled = False
TimeSensor39.loop = True

Layer15.children.append(TimeSensor39)
TimeSensor40 = x3d.TimeSensor(DEF="JinLipPressor_Clock")
TimeSensor40.cycleInterval = 0.99
TimeSensor40.enabled = False
TimeSensor40.loop = True

Layer15.children.append(TimeSensor40)
TimeSensor41 = x3d.TimeSensor(DEF="JinLipFunneler_Clock")
TimeSensor41.cycleInterval = 0.99
TimeSensor41.enabled = False
TimeSensor41.loop = True

Layer15.children.append(TimeSensor41)
TimeSensor42 = x3d.TimeSensor(DEF="JinLipCornerPuller_Clock")
TimeSensor42.cycleInterval = 0.99
TimeSensor42.enabled = False
TimeSensor42.loop = True

Layer15.children.append(TimeSensor42)
TimeSensor43 = x3d.TimeSensor(DEF="JinLipCornerDepressor_Clock")
TimeSensor43.cycleInterval = 0.99
TimeSensor43.enabled = False
TimeSensor43.loop = True

Layer15.children.append(TimeSensor43)
TimeSensor44 = x3d.TimeSensor(DEF="JinLidTightener_Clock")
TimeSensor44.cycleInterval = 0.99
TimeSensor44.enabled = False
TimeSensor44.loop = True

Layer15.children.append(TimeSensor44)
TimeSensor45 = x3d.TimeSensor(DEF="JinLidDroop_Clock")
TimeSensor45.cycleInterval = 0.99
TimeSensor45.enabled = False
TimeSensor45.loop = True

Layer15.children.append(TimeSensor45)
TimeSensor46 = x3d.TimeSensor(DEF="JinJawDrop_Clock")
TimeSensor46.cycleInterval = 0.99
TimeSensor46.enabled = False
TimeSensor46.loop = True

Layer15.children.append(TimeSensor46)
TimeSensor47 = x3d.TimeSensor(DEF="JinInnerBrowRaiser_Clock")
TimeSensor47.cycleInterval = 0.99
TimeSensor47.enabled = False
TimeSensor47.loop = True

Layer15.children.append(TimeSensor47)
TimeSensor48 = x3d.TimeSensor(DEF="JinEyesClosed_Clock")
TimeSensor48.cycleInterval = 0.99
TimeSensor48.enabled = False
TimeSensor48.loop = True

Layer15.children.append(TimeSensor48)
TimeSensor49 = x3d.TimeSensor(DEF="JinDimpler_Clock")
TimeSensor49.cycleInterval = 0.99
TimeSensor49.enabled = False
TimeSensor49.loop = True

Layer15.children.append(TimeSensor49)
TimeSensor50 = x3d.TimeSensor(DEF="JinChinRaiser_Clock")
TimeSensor50.cycleInterval = 0.99
TimeSensor50.enabled = False
TimeSensor50.loop = True

Layer15.children.append(TimeSensor50)
TimeSensor51 = x3d.TimeSensor(DEF="JinCheekRaiser_Clock")
TimeSensor51.cycleInterval = 0.99
TimeSensor51.enabled = False
TimeSensor51.loop = True

Layer15.children.append(TimeSensor51)
TimeSensor52 = x3d.TimeSensor(DEF="JinCheekPuffer_Clock")
TimeSensor52.cycleInterval = 0.99
TimeSensor52.enabled = False
TimeSensor52.loop = True

Layer15.children.append(TimeSensor52)
TimeSensor53 = x3d.TimeSensor(DEF="JinBrowLowerer_Clock")
TimeSensor53.cycleInterval = 0.99
TimeSensor53.enabled = False
TimeSensor53.loop = True

Layer15.children.append(TimeSensor53)
TimeSensor54 = x3d.TimeSensor(DEF="JinBlink_Clock")
TimeSensor54.cycleInterval = 0.99
TimeSensor54.enabled = False
TimeSensor54.loop = True

Layer15.children.append(TimeSensor54)
ScalarInterpolator55 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinBlink")
ScalarInterpolator55.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator55.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator55)
ScalarInterpolator56 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinBrowLowerer")
ScalarInterpolator56.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator56.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator56)
ScalarInterpolator57 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinCheekPuffer")
ScalarInterpolator57.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator57.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator57)
ScalarInterpolator58 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinCheekRaiser")
ScalarInterpolator58.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator58.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator58)
ScalarInterpolator59 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinChinRaiser")
ScalarInterpolator59.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator59.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator59)
ScalarInterpolator60 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinDimpler")
ScalarInterpolator60.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator60.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator60)
ScalarInterpolator61 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinEyesClosed")
ScalarInterpolator61.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator61.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator61)
ScalarInterpolator62 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinInnerBrowRaiser")
ScalarInterpolator62.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator62.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator62)
ScalarInterpolator63 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinJawDrop")
ScalarInterpolator63.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator63.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator63)
ScalarInterpolator64 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLidDroop")
ScalarInterpolator64.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator64.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator64)
ScalarInterpolator65 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLidTightener")
ScalarInterpolator65.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator65.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator65)
ScalarInterpolator66 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipCornerDepressor")
ScalarInterpolator66.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator66.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator66)
ScalarInterpolator67 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipCornerPuller")
ScalarInterpolator67.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator67.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator67)
ScalarInterpolator68 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipFunneler")
ScalarInterpolator68.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator68.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator68)
ScalarInterpolator69 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipPressor")
ScalarInterpolator69.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator69.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator69)
ScalarInterpolator70 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipPuckerer")
ScalarInterpolator70.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator70.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator70)
ScalarInterpolator71 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipsPart")
ScalarInterpolator71.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator71.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator71)
ScalarInterpolator72 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipStretcher")
ScalarInterpolator72.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator72.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator72)
ScalarInterpolator73 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipSuck")
ScalarInterpolator73.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator73.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator73)
ScalarInterpolator74 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipTightener")
ScalarInterpolator74.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator74.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator74)
ScalarInterpolator75 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLowerLipDepressor")
ScalarInterpolator75.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator75.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator75)
ScalarInterpolator76 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinMouthStretch")
ScalarInterpolator76.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator76.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator76)
ScalarInterpolator77 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinNasolabialDeepener")
ScalarInterpolator77.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator77.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator77)
ScalarInterpolator78 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinNoseWrinkler")
ScalarInterpolator78.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator78.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator78)
ScalarInterpolator79 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinOuterBrowRaiser")
ScalarInterpolator79.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator79.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator79)
ScalarInterpolator80 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinSlit")
ScalarInterpolator80.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator80.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator80)
ScalarInterpolator81 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinSquint")
ScalarInterpolator81.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator81.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator81)
ScalarInterpolator82 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinUpperLidRaiser")
ScalarInterpolator82.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator82.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator82)
ScalarInterpolator83 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinUpperLipRaiser")
ScalarInterpolator83.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator83.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator83)
ScalarInterpolator84 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinWink")
ScalarInterpolator84.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator84.keyValue = [0,0.5,1,0.5,0]

Layer15.children.append(ScalarInterpolator84)
Transform85 = x3d.Transform()
Transform85.translation = [-37,-20,0]
Transform85.scale = [2,2,2]
HAnimHumanoid86 = x3d.HAnimHumanoid(DEF="hanim0_humanoid")
HAnimHumanoid86.name = "humanoid"
HAnimHumanoid86.version = "2.0"
HAnimJoint87 = x3d.HAnimJoint(DEF="hanim0_humanoid_root")
HAnimJoint87.name = "humanoid_root"
HAnimJoint87.ulimit = [0,0,0]
HAnimJoint87.llimit = [0,0,0]
HAnimSegment88 = x3d.HAnimSegment(DEF="hanim0_sacrum")
HAnimSegment88.name = "sacrum"

HAnimJoint87.children.append(HAnimSegment88)
HAnimJoint89 = x3d.HAnimJoint(DEF="hanim0_skullbase")
HAnimJoint89.name = "skullbase"
HAnimJoint89.ulimit = [0,0,0]
HAnimJoint89.llimit = [0,0,0]
HAnimSegment90 = x3d.HAnimSegment(DEF="hanim_sacrum")
HAnimSegment90.name = "sacrum"
WorldInfo91 = x3d.WorldInfo()
WorldInfo91.title = "CleanedYouClocks.x3d"

HAnimSegment90.children.append(WorldInfo91)
Background92 = x3d.Background()
Background92.skyColor = [(0.8, 0.9, 1)]

HAnimSegment90.children.append(Background92)
NavigationInfo93 = x3d.NavigationInfo()
NavigationInfo93.type = ["EXAMINE"]

HAnimSegment90.children.append(NavigationInfo93)

HAnimJoint89.children.append(HAnimSegment90)
HAnimSegment94 = x3d.HAnimSegment(DEF="hanim_Lower_teeth")
HAnimSegment94.name = "lower_teeth"
Transform95 = x3d.Transform(DEF="Lower_teeth_JinBlink")
Transform95.translation = [0,8.43,11.43]
Shape96 = x3d.Shape()
Appearance97 = x3d.Appearance(DEF="BaseAppearance_JinBlink")
Material98 = x3d.Material(DEF="BaseMaterial_JinBlink")
Material98.ambientIntensity = 1
Material98.diffuseColor = [0.588,0.588,0.588]
Material98.shininess = 0.145

Appearance97.material = Material98
ImageTexture99 = x3d.ImageTexture(DEF="JinImageAtlas_JinBlink")
ImageTexture99.url = ["../data/JinImageAtlas.jpg","JinImageAtlas.jpg","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/FacialAnimation/JinImageAtlas.jpg"]

Appearance97.texture = ImageTexture99

Shape96.appearance = Appearance97
IndexedFaceSet100 = x3d.IndexedFaceSet(DEF="Lower_teeth-FACES_JinBlink")
IndexedFaceSet100.coordIndex = [0,521,265,-1,265,524,0,-1,1,525,265,-1,265,521,1,-1,4,523,265,-1,265,525,4,-1,3,524,265,-1,265,523,3,-1,2,522,266,-1,266,526,2,-1,23,558,266,-1,266,522,23,-1,24,551,266,-1,266,558,24,-1,5,526,266,-1,266,551,5,-1,3,523,267,-1,267,528,3,-1,4,529,267,-1,267,523,4,-1,7,527,267,-1,267,529,7,-1,6,528,267,-1,267,527,6,-1,5,551,268,-1,268,530,5,-1,24,559,268,-1,268,551,24,-1,25,552,268,-1,268,559,25,-1,8,530,268,-1,268,552,8,-1,6,527,269,-1,269,532,6,-1,7,533,269,-1,269,527,7,-1,10,531,269,-1,269,533,10,-1,9,532,269,-1,269,531,9,-1,8,552,270,-1,270,534,8,-1,25,560,270,-1,270,552,25,-1,26,553,270,-1,270,560,26,-1,11,534,270,-1,270,553,11,-1,9,531,271,-1,271,536,9,-1,10,537,271,-1,271,531,10,-1,13,535,271,-1,271,537,13,-1,12,536,271,-1,271,535,12,-1,11,553,272,-1,272,538,11,-1,26,561,272,-1,272,553,26,-1,27,554,272,-1,272,561,27,-1,14,538,272,-1,272,554,14,-1,12,535,273,-1,273,540,12,-1,13,541,273,-1,273,535,13,-1,16,539,273,-1,273,541,16,-1,15,540,273,-1,273,539,15,-1,14,554,274,-1,274,542,14,-1,27,562,274,-1,274,554,27,-1,28,555,274,-1,274,562,28,-1,17,542,274,-1,274,555,17,-1,15,539,275,-1,275,544,15,-1,16,545,275,-1,275,539,16,-1,19,543,275,-1,275,545,19,-1,18,544,275,-1,275,543,18,-1,17,555,276,-1,276,546,17,-1,28,563,276,-1,276,555,28,-1,29,556,276,-1,276,563,29,-1,20,546,276,-1,276,556,20,-1,18,543,277,-1,277,548,18,-1,19,549,277,-1,277,543,19,-1,21,547,277,-1,277,549,21,-1,160,548,277,-1,277,547,160,-1,20,556,278,-1,278,550,20,-1,29,564,278,-1,278,556,29,-1,30,557,278,-1,278,564,30,-1,22,550,278,-1,278,557,22,-1,2,526,279,-1,279,580,2,-1,5,581,279,-1,279,526,5,-1,33,565,279,-1,279,581,33,-1,32,580,279,-1,279,565,32,-1,5,530,280,-1,280,581,5,-1,8,582,280,-1,280,530,8,-1,34,566,280,-1,280,582,34,-1,33,581,280,-1,280,566,33,-1,8,534,281,-1,281,582,8,-1,11,583,281,-1,281,534,11,-1,35,567,281,-1,281,583,35,-1,34,582,281,-1,281,567,34,-1,11,538,282,-1,282,583,11,-1,14,584,282,-1,282,538,14,-1,36,568,282,-1,282,584,36,-1,35,583,282,-1,282,568,35,-1,14,542,283,-1,283,584,14,-1,17,585,283,-1,283,542,17,-1,37,569,283,-1,283,585,37,-1,36,584,283,-1,283,569,36,-1,17,546,284,-1,284,585,17,-1,20,586,284,-1,284,546,20,-1,38,570,284,-1,284,586,38,-1,37,585,284,-1,284,570,37,-1,20,550,285,-1,285,586,20,-1,22,587,285,-1,285,550,22,-1,168,571,285,-1,285,587,168,-1,38,586,285,-1,285,571,38,-1,21,549,286,-1,286,839,21,-1,19,588,286,-1,286,549,19,-1,39,572,286,-1,286,588,39,-1,170,839,286,-1,286,572,170,-1,19,545,287,-1,287,588,19,-1,16,589,287,-1,287,545,16,-1,40,573,287,-1,287,589,40,-1,39,588,287,-1,287,573,39,-1,16,541,288,-1,288,589,16,-1,13,590,288,-1,288,541,13,-1,41,574,288,-1,288,590,41,-1,40,589,288,-1,288,574,40,-1,13,537,289,-1,289,590,13,-1,10,591,289,-1,289,537,10,-1,42,575,289,-1,289,591,42,-1,41,590,289,-1,289,575,41,-1,10,533,290,-1,290,591,10,-1,7,592,290,-1,290,533,7,-1,43,576,290,-1,290,592,43,-1,42,591,290,-1,290,576,42,-1,7,529,291,-1,291,592,7,-1,4,593,291,-1,291,529,4,-1,44,577,291,-1,291,593,44,-1,43,592,291,-1,291,577,43,-1,4,525,292,-1,292,593,4,-1,1,579,292,-1,292,525,1,-1,31,578,292,-1,292,579,31,-1,44,593,292,-1,292,578,44,-1,24,558,293,-1,293,595,24,-1,23,594,293,-1,293,558,23,-1,45,595,293,-1,293,594,45,-1,25,559,294,-1,294,596,25,-1,24,595,294,-1,294,559,24,-1,45,596,294,-1,294,595,45,-1,26,560,295,-1,295,597,26,-1,25,596,295,-1,295,560,25,-1,45,597,295,-1,295,596,45,-1,27,561,296,-1,296,598,27,-1,26,597,296,-1,296,561,26,-1,45,598,296,-1,296,597,45,-1,28,562,297,-1,297,599,28,-1,27,598,297,-1,297,562,27,-1,45,599,297,-1,297,598,45,-1,29,563,298,-1,298,600,29,-1,28,599,298,-1,298,563,28,-1,45,600,298,-1,298,599,45,-1,30,564,299,-1,299,601,30,-1,29,600,299,-1,299,564,29,-1,45,601,299,-1,299,600,45,-1,75,667,300,-1,300,670,75,-1,76,668,300,-1,300,667,76,-1,77,669,300,-1,300,668,77,-1,78,670,300,-1,300,669,78,-1,79,675,301,-1,301,678,79,-1,80,676,301,-1,301,675,80,-1,81,677,301,-1,301,676,81,-1,82,678,301,-1,301,677,82,-1,83,683,302,-1,302,686,83,-1,84,684,302,-1,302,683,84,-1,85,685,302,-1,302,684,85,-1,86,686,302,-1,302,685,86,-1,87,691,303,-1,303,694,87,-1,88,692,303,-1,303,691,88,-1,89,693,303,-1,303,692,89,-1,90,694,303,-1,303,693,90,-1,91,699,304,-1,304,702,91,-1,92,700,304,-1,304,699,92,-1,93,701,304,-1,304,700,93,-1,94,702,304,-1,304,701,94,-1,95,707,305,-1,305,710,95,-1,96,708,305,-1,305,707,96,-1,97,709,305,-1,305,708,97,-1,98,710,305,-1,305,709,98,-1,99,715,306,-1,306,718,99,-1,100,716,306,-1,306,715,100,-1,101,717,306,-1,306,716,101,-1,102,718,306,-1,306,717,102,-1,32,565,307,-1,307,609,32,-1,33,610,307,-1,307,565,33,-1,104,752,307,-1,307,610,104,-1,103,609,307,-1,307,752,103,-1,33,603,308,-1,308,610,33,-1,44,611,308,-1,308,603,44,-1,105,753,308,-1,308,611,105,-1,104,610,308,-1,308,753,104,-1,44,578,309,-1,309,611,44,-1,31,612,309,-1,309,578,31,-1,106,754,309,-1,309,612,106,-1,105,611,309,-1,309,754,105,-1,31,602,310,-1,310,612,31,-1,32,609,310,-1,310,602,32,-1,103,755,310,-1,310,609,103,-1,106,612,310,-1,310,755,106,-1,38,571,311,-1,311,617,38,-1,168,618,311,-1,311,571,168,-1,108,756,311,-1,311,618,108,-1,107,617,311,-1,311,756,107,-1,168,900,312,-1,312,618,168,-1,170,619,312,-1,312,900,170,-1,109,757,312,-1,312,619,109,-1,108,618,312,-1,312,757,108,-1,170,572,313,-1,313,619,170,-1,39,620,313,-1,313,572,39,-1,110,758,313,-1,313,620,110,-1,109,619,313,-1,313,758,109,-1,39,604,314,-1,314,620,39,-1,38,617,314,-1,314,604,38,-1,107,759,314,-1,314,617,107,-1,110,620,314,-1,314,759,110,-1,39,573,315,-1,315,625,39,-1,40,626,315,-1,315,573,40,-1,112,760,315,-1,315,626,112,-1,111,625,315,-1,315,760,111,-1,40,605,316,-1,316,626,40,-1,37,627,316,-1,316,605,37,-1,113,761,316,-1,316,627,113,-1,112,626,316,-1,316,761,112,-1,37,570,317,-1,317,627,37,-1,38,628,317,-1,317,570,38,-1,114,762,317,-1,317,628,114,-1,113,627,317,-1,317,762,113,-1,38,604,318,-1,318,628,38,-1,39,625,318,-1,318,604,39,-1,111,763,318,-1,318,625,111,-1,114,628,318,-1,318,763,114,-1,40,574,319,-1,319,633,40,-1,41,634,319,-1,319,574,41,-1,116,764,319,-1,319,634,116,-1,115,633,319,-1,319,764,115,-1,41,606,320,-1,320,634,41,-1,36,635,320,-1,320,606,36,-1,117,765,320,-1,320,635,117,-1,116,634,320,-1,320,765,116,-1,36,569,321,-1,321,635,36,-1,37,636,321,-1,321,569,37,-1,118,766,321,-1,321,636,118,-1,117,635,321,-1,321,766,117,-1,37,605,322,-1,322,636,37,-1,40,633,322,-1,322,605,40,-1,115,767,322,-1,322,633,115,-1,118,636,322,-1,322,767,118,-1,41,575,323,-1,323,641,41,-1,42,642,323,-1,323,575,42,-1,120,768,323,-1,323,642,120,-1,119,641,323,-1,323,768,119,-1,42,607,324,-1,324,642,42,-1,35,643,324,-1,324,607,35,-1,121,769,324,-1,324,643,121,-1,120,642,324,-1,324,769,120,-1,35,568,325,-1,325,643,35,-1,36,644,325,-1,325,568,36,-1,122,770,325,-1,325,644,122,-1,121,643,325,-1,325,770,121,-1,36,606,326,-1,326,644,36,-1,41,641,326,-1,326,606,41,-1,119,771,326,-1,326,641,119,-1,122,644,326,-1,326,771,122,-1,42,576,327,-1,327,649,42,-1,43,650,327,-1,327,576,43,-1,124,772,327,-1,327,650,124,-1,123,649,327,-1,327,772,123,-1,43,608,328,-1,328,650,43,-1,34,651,328,-1,328,608,34,-1,125,773,328,-1,328,651,125,-1,124,650,328,-1,328,773,124,-1,34,567,329,-1,329,651,34,-1,35,652,329,-1,329,567,35,-1,126,774,329,-1,329,652,126,-1,125,651,329,-1,329,774,125,-1,35,607,330,-1,330,652,35,-1,42,649,330,-1,330,607,42,-1,123,775,330,-1,330,649,123,-1,126,652,330,-1,330,775,126,-1,43,577,331,-1,331,657,43,-1,44,658,331,-1,331,577,44,-1,128,776,331,-1,331,658,128,-1,127,657,331,-1,331,776,127,-1,44,603,332,-1,332,658,44,-1,33,659,332,-1,332,603,33,-1,129,777,332,-1,332,659,129,-1,128,658,332,-1,332,777,128,-1,33,566,333,-1,333,659,33,-1,34,660,333,-1,333,566,34,-1,130,778,333,-1,333,660,130,-1,129,659,333,-1,333,778,129,-1,34,608,334,-1,334,660,34,-1,43,657,334,-1,334,608,43,-1,127,779,334,-1,334,657,127,-1,130,660,334,-1,334,779,130,-1,45,594,335,-1,335,953,45,-1,23,666,335,-1,335,594,23,-1,131,780,335,-1,335,666,131,-1,234,953,335,-1,335,780,234,-1,46,613,336,-1,336,671,46,-1,47,672,336,-1,336,613,47,-1,76,667,336,-1,336,672,76,-1,75,671,336,-1,336,667,75,-1,47,614,337,-1,337,672,47,-1,48,673,337,-1,337,614,48,-1,77,668,337,-1,337,673,77,-1,76,672,337,-1,337,668,76,-1,48,615,338,-1,338,673,48,-1,49,674,338,-1,338,615,49,-1,78,669,338,-1,338,674,78,-1,77,673,338,-1,338,669,77,-1,49,616,339,-1,339,674,49,-1,46,671,339,-1,339,616,46,-1,75,670,339,-1,339,671,75,-1,78,674,339,-1,339,670,78,-1,50,621,340,-1,340,679,50,-1,51,680,340,-1,340,621,51,-1,80,675,340,-1,340,680,80,-1,79,679,340,-1,340,675,79,-1,51,622,341,-1,341,680,51,-1,52,681,341,-1,341,622,52,-1,81,676,341,-1,341,681,81,-1,80,680,341,-1,341,676,80,-1,52,623,342,-1,342,681,52,-1,53,682,342,-1,342,623,53,-1,82,677,342,-1,342,682,82,-1,81,681,342,-1,342,677,81,-1,53,624,343,-1,343,682,53,-1,50,679,343,-1,343,624,50,-1,79,678,343,-1,343,679,79,-1,82,682,343,-1,343,678,82,-1,54,629,344,-1,344,687,54,-1,55,688,344,-1,344,629,55,-1,84,683,344,-1,344,688,84,-1,83,687,344,-1,344,683,83,-1,55,630,345,-1,345,688,55,-1,56,689,345,-1,345,630,56,-1,85,684,345,-1,345,689,85,-1,84,688,345,-1,345,684,84,-1,56,631,346,-1,346,689,56,-1,57,690,346,-1,346,631,57,-1,86,685,346,-1,346,690,86,-1,85,689,346,-1,346,685,85,-1,57,632,347,-1,347,690,57,-1,54,687,347,-1,347,632,54,-1,83,686,347,-1,347,687,83,-1,86,690,347,-1,347,686,86,-1,58,637,348,-1,348,695,58,-1,59,696,348,-1,348,637,59,-1,88,691,348,-1,348,696,88,-1,87,695,348,-1,348,691,87,-1,59,638,349,-1,349,696,59,-1,60,697,349,-1,349,638,60,-1,89,692,349,-1,349,697,89,-1,88,696,349,-1,349,692,88,-1,60,639,350,-1,350,697,60,-1,61,698,350,-1,350,639,61,-1,90,693,350,-1,350,698,90,-1,89,697,350,-1,350,693,89,-1,61,640,351,-1,351,698,61,-1,58,695,351,-1,351,640,58,-1,87,694,351,-1,351,695,87,-1,90,698,351,-1,351,694,90,-1,62,645,352,-1,352,703,62,-1,63,704,352,-1,352,645,63,-1,92,699,352,-1,352,704,92,-1,91,703,352,-1,352,699,91,-1,63,646,353,-1,353,704,63,-1,64,705,353,-1,353,646,64,-1,93,700,353,-1,353,705,93,-1,92,704,353,-1,353,700,92,-1,64,647,354,-1,354,705,64,-1,65,706,354,-1,354,647,65,-1,94,701,354,-1,354,706,94,-1,93,705,354,-1,354,701,93,-1,65,648,355,-1,355,706,65,-1,62,703,355,-1,355,648,62,-1,91,702,355,-1,355,703,91,-1,94,706,355,-1,355,702,94,-1,66,653,356,-1,356,711,66,-1,67,712,356,-1,356,653,67,-1,96,707,356,-1,356,712,96,-1,95,711,356,-1,356,707,95,-1,67,654,357,-1,357,712,67,-1,68,713,357,-1,357,654,68,-1,97,708,357,-1,357,713,97,-1,96,712,357,-1,357,708,96,-1,68,655,358,-1,358,713,68,-1,69,714,358,-1,358,655,69,-1,98,709,358,-1,358,714,98,-1,97,713,358,-1,358,709,97,-1,69,656,359,-1,359,714,69,-1,66,711,359,-1,359,656,66,-1,95,710,359,-1,359,711,95,-1,98,714,359,-1,359,710,98,-1,70,661,360,-1,360,719,70,-1,71,720,360,-1,360,661,71,-1,100,715,360,-1,360,720,100,-1,99,719,360,-1,360,715,99,-1,71,662,361,-1,361,720,71,-1,72,721,361,-1,361,662,72,-1,101,716,361,-1,361,721,101,-1,100,720,361,-1,361,716,100,-1,72,663,362,-1,362,721,72,-1,73,722,362,-1,362,663,73,-1,102,717,362,-1,362,722,102,-1,101,721,362,-1,362,717,101,-1,73,664,363,-1,363,722,73,-1,70,719,363,-1,363,664,70,-1,99,718,363,-1,363,719,99,-1,102,722,363,-1,363,718,102,-1,104,724,364,-1,364,752,104,-1,47,613,364,-1,364,724,47,-1,46,723,364,-1,364,613,46,-1,103,752,364,-1,364,723,103,-1,105,725,365,-1,365,753,105,-1,48,614,365,-1,365,725,48,-1,47,724,365,-1,365,614,47,-1,104,753,365,-1,365,724,104,-1,106,726,366,-1,366,754,106,-1,49,615,366,-1,366,726,49,-1,48,725,366,-1,366,615,48,-1,105,754,366,-1,366,725,105,-1,103,723,367,-1,367,755,103,-1,46,616,367,-1,367,723,46,-1,49,726,367,-1,367,616,49,-1,106,755,367,-1,367,726,106,-1,108,728,368,-1,368,756,108,-1,51,621,368,-1,368,728,51,-1,50,727,368,-1,368,621,50,-1,107,756,368,-1,368,727,107,-1,109,729,369,-1,369,757,109,-1,52,622,369,-1,369,729,52,-1,51,728,369,-1,369,622,51,-1,108,757,369,-1,369,728,108,-1,110,730,370,-1,370,758,110,-1,53,623,370,-1,370,730,53,-1,52,729,370,-1,370,623,52,-1,109,758,370,-1,370,729,109,-1,107,727,371,-1,371,759,107,-1,50,624,371,-1,371,727,50,-1,53,730,371,-1,371,624,53,-1,110,759,371,-1,371,730,110,-1,112,732,372,-1,372,760,112,-1,55,629,372,-1,372,732,55,-1,54,731,372,-1,372,629,54,-1,111,760,372,-1,372,731,111,-1,113,733,373,-1,373,761,113,-1,56,630,373,-1,373,733,56,-1,55,732,373,-1,373,630,55,-1,112,761,373,-1,373,732,112,-1,114,734,374,-1,374,762,114,-1,57,631,374,-1,374,734,57,-1,56,733,374,-1,374,631,56,-1,113,762,374,-1,374,733,113,-1,111,731,375,-1,375,763,111,-1,54,632,375,-1,375,731,54,-1,57,734,375,-1,375,632,57,-1,114,763,375,-1,375,734,114,-1,116,736,376,-1,376,764,116,-1,59,637,376,-1,376,736,59,-1,58,735,376,-1,376,637,58,-1,115,764,376,-1,376,735,115,-1,117,737,377,-1,377,765,117,-1,60,638,377,-1,377,737,60,-1,59,736,377,-1,377,638,59,-1,116,765,377,-1,377,736,116,-1,118,738,378,-1,378,766,118,-1,61,639,378,-1,378,738,61,-1,60,737,378,-1,378,639,60,-1,117,766,378,-1,378,737,117,-1,115,735,379,-1,379,767,115,-1,58,640,379,-1,379,735,58,-1,61,738,379,-1,379,640,61,-1,118,767,379,-1,379,738,118,-1,120,740,380,-1,380,768,120,-1,63,645,380,-1,380,740,63,-1,62,739,380,-1,380,645,62,-1,119,768,380,-1,380,739,119,-1,121,741,381,-1,381,769,121,-1,64,646,381,-1,381,741,64,-1,63,740,381,-1,381,646,63,-1,120,769,381,-1,381,740,120,-1,122,742,382,-1,382,770,122,-1,65,647,382,-1,382,742,65,-1,64,741,382,-1,382,647,64,-1,121,770,382,-1,382,741,121,-1,119,739,383,-1,383,771,119,-1,62,648,383,-1,383,739,62,-1,65,742,383,-1,383,648,65,-1,122,771,383,-1,383,742,122,-1,124,744,384,-1,384,772,124,-1,67,653,384,-1,384,744,67,-1,66,743,384,-1,384,653,66,-1,123,772,384,-1,384,743,123,-1,125,745,385,-1,385,773,125,-1,68,654,385,-1,385,745,68,-1,67,744,385,-1,385,654,67,-1,124,773,385,-1,385,744,124,-1,126,746,386,-1,386,774,126,-1,69,655,386,-1,386,746,69,-1,68,745,386,-1,386,655,68,-1,125,774,386,-1,386,745,125,-1,123,743,387,-1,387,775,123,-1,66,656,387,-1,387,743,66,-1,69,746,387,-1,387,656,69,-1,126,775,387,-1,387,746,126,-1,128,748,388,-1,388,776,128,-1,71,661,388,-1,388,748,71,-1,70,747,388,-1,388,661,70,-1,127,776,388,-1,388,747,127,-1,129,749,389,-1,389,777,129,-1,72,662,389,-1,389,749,72,-1,71,748,389,-1,389,662,71,-1,128,777,389,-1,389,748,128,-1,130,750,390,-1,390,778,130,-1,73,663,390,-1,390,750,73,-1,72,749,390,-1,390,663,72,-1,129,778,390,-1,390,749,129,-1,127,747,391,-1,391,779,127,-1,70,664,391,-1,391,747,70,-1,73,750,391,-1,391,664,73,-1,130,779,391,-1,391,750,130,-1,131,751,392,-1,392,780,131,-1,74,665,392,-1,392,751,74,-1,264,1040,392,-1,392,665,264,-1,234,780,392,-1,392,1040,234,-1,132,784,393,-1,393,781,132,-1,135,783,393,-1,393,784,135,-1,134,782,393,-1,393,783,134,-1,133,781,393,-1,393,782,133,-1,136,788,394,-1,394,785,136,-1,139,787,394,-1,394,788,139,-1,138,786,394,-1,394,787,138,-1,137,785,394,-1,394,786,137,-1,135,791,395,-1,395,783,135,-1,141,790,395,-1,395,791,141,-1,140,789,395,-1,395,790,140,-1,134,783,395,-1,395,789,134,-1,139,794,396,-1,396,787,139,-1,143,793,396,-1,396,794,143,-1,142,792,396,-1,396,793,142,-1,138,787,396,-1,396,792,138,-1,141,797,397,-1,397,790,141,-1,145,796,397,-1,397,797,145,-1,144,795,397,-1,397,796,144,-1,140,790,397,-1,397,795,140,-1,143,800,398,-1,398,793,143,-1,147,799,398,-1,398,800,147,-1,146,798,398,-1,398,799,146,-1,142,793,398,-1,398,798,142,-1,145,803,399,-1,399,796,145,-1,149,802,399,-1,399,803,149,-1,148,801,399,-1,399,802,148,-1,144,796,399,-1,399,801,144,-1,147,806,400,-1,400,799,147,-1,151,805,400,-1,400,806,151,-1,150,804,400,-1,400,805,150,-1,146,799,400,-1,400,804,146,-1,149,809,401,-1,401,802,149,-1,153,808,401,-1,401,809,153,-1,152,807,401,-1,401,808,152,-1,148,802,401,-1,401,807,148,-1,151,812,402,-1,402,805,151,-1,155,811,402,-1,402,812,155,-1,154,810,402,-1,402,811,154,-1,150,805,402,-1,402,810,150,-1,153,815,403,-1,403,808,153,-1,157,814,403,-1,403,815,157,-1,156,813,403,-1,403,814,156,-1,152,808,403,-1,403,813,152,-1,155,818,404,-1,404,811,155,-1,159,817,404,-1,404,818,159,-1,158,816,404,-1,404,817,158,-1,154,811,404,-1,404,816,154,-1,157,820,405,-1,405,814,157,-1,160,547,405,-1,405,820,160,-1,21,819,405,-1,405,547,21,-1,156,814,405,-1,405,819,156,-1,159,822,406,-1,406,817,159,-1,22,557,406,-1,406,822,22,-1,30,821,406,-1,406,557,30,-1,158,817,406,-1,406,821,158,-1,136,825,407,-1,407,788,136,-1,162,824,407,-1,407,825,162,-1,161,823,407,-1,407,824,161,-1,139,788,407,-1,407,823,139,-1,139,823,408,-1,408,794,139,-1,161,827,408,-1,408,823,161,-1,163,826,408,-1,408,827,163,-1,143,794,408,-1,408,826,143,-1,143,826,409,-1,409,800,143,-1,163,829,409,-1,409,826,163,-1,164,828,409,-1,409,829,164,-1,147,800,409,-1,409,828,147,-1,147,828,410,-1,410,806,147,-1,164,831,410,-1,410,828,164,-1,165,830,410,-1,410,831,165,-1,151,806,410,-1,410,830,151,-1,151,830,411,-1,411,812,151,-1,165,833,411,-1,411,830,165,-1,166,832,411,-1,411,833,166,-1,155,812,411,-1,411,832,155,-1,155,832,412,-1,412,818,155,-1,166,835,412,-1,412,832,166,-1,167,834,412,-1,412,835,167,-1,159,818,412,-1,412,834,159,-1,159,834,413,-1,413,822,159,-1,167,836,413,-1,413,834,167,-1,168,587,413,-1,413,836,168,-1,22,822,413,-1,413,587,22,-1,21,839,414,-1,414,819,21,-1,170,838,414,-1,414,839,170,-1,169,837,414,-1,414,838,169,-1,156,819,414,-1,414,837,156,-1,156,837,415,-1,415,813,156,-1,169,841,415,-1,415,837,169,-1,171,840,415,-1,415,841,171,-1,152,813,415,-1,415,840,152,-1,152,840,416,-1,416,807,152,-1,171,843,416,-1,416,840,171,-1,172,842,416,-1,416,843,172,-1,148,807,416,-1,416,842,148,-1,148,842,417,-1,417,801,148,-1,172,845,417,-1,417,842,172,-1,173,844,417,-1,417,845,173,-1,144,801,417,-1,417,844,144,-1,144,844,418,-1,418,795,144,-1,173,847,418,-1,418,844,173,-1,174,846,418,-1,418,847,174,-1,140,795,418,-1,418,846,140,-1,140,846,419,-1,419,789,140,-1,174,849,419,-1,419,846,174,-1,175,848,419,-1,419,849,175,-1,134,789,419,-1,419,848,134,-1,134,848,420,-1,420,782,134,-1,175,851,420,-1,420,848,175,-1,176,850,420,-1,420,851,176,-1,133,782,420,-1,420,850,133,-1,138,853,421,-1,421,786,138,-1,45,852,421,-1,421,853,45,-1,137,786,421,-1,421,852,137,-1,142,854,422,-1,422,792,142,-1,45,853,422,-1,422,854,45,-1,138,792,422,-1,422,853,138,-1,146,855,423,-1,423,798,146,-1,45,854,423,-1,423,855,45,-1,142,798,423,-1,423,854,142,-1,150,856,424,-1,424,804,150,-1,45,855,424,-1,424,856,45,-1,146,804,424,-1,424,855,146,-1,154,857,425,-1,425,810,154,-1,45,856,425,-1,425,857,45,-1,150,810,425,-1,425,856,150,-1,158,858,426,-1,426,816,158,-1,45,857,426,-1,426,858,45,-1,154,816,426,-1,426,857,154,-1,30,601,427,-1,427,821,30,-1,45,858,427,-1,427,601,45,-1,158,821,427,-1,427,858,158,-1,177,862,428,-1,428,859,177,-1,180,861,428,-1,428,862,180,-1,179,860,428,-1,428,861,179,-1,178,859,428,-1,428,860,178,-1,181,866,429,-1,429,863,181,-1,184,865,429,-1,429,866,184,-1,183,864,429,-1,429,865,183,-1,182,863,429,-1,429,864,182,-1,185,870,430,-1,430,867,185,-1,188,869,430,-1,430,870,188,-1,187,868,430,-1,430,869,187,-1,186,867,430,-1,430,868,186,-1,189,874,431,-1,431,871,189,-1,192,873,431,-1,431,874,192,-1,191,872,431,-1,431,873,191,-1,190,871,431,-1,431,872,190,-1,193,878,432,-1,432,875,193,-1,196,877,432,-1,432,878,196,-1,195,876,432,-1,432,877,195,-1,194,875,432,-1,432,876,194,-1,197,882,433,-1,433,879,197,-1,200,881,433,-1,433,882,200,-1,199,880,433,-1,433,881,199,-1,198,879,433,-1,433,880,198,-1,201,886,434,-1,434,883,201,-1,204,885,434,-1,434,886,204,-1,203,884,434,-1,434,885,203,-1,202,883,434,-1,434,884,202,-1,162,889,435,-1,435,824,162,-1,206,888,435,-1,435,889,206,-1,205,887,435,-1,435,888,205,-1,161,824,435,-1,435,887,161,-1,161,887,436,-1,436,890,161,-1,205,892,436,-1,436,887,205,-1,207,891,436,-1,436,892,207,-1,175,890,436,-1,436,891,175,-1,175,891,437,-1,437,851,175,-1,207,894,437,-1,437,891,207,-1,208,893,437,-1,437,894,208,-1,176,851,437,-1,437,893,176,-1,176,893,438,-1,438,895,176,-1,208,896,438,-1,438,893,208,-1,206,889,438,-1,438,896,206,-1,162,895,438,-1,438,889,162,-1,167,899,439,-1,439,836,167,-1,210,898,439,-1,439,899,210,-1,209,897,439,-1,439,898,209,-1,168,836,439,-1,439,897,168,-1,168,897,440,-1,440,900,168,-1,209,902,440,-1,440,897,209,-1,211,901,440,-1,440,902,211,-1,170,900,440,-1,440,901,170,-1,170,901,441,-1,441,838,170,-1,211,904,441,-1,441,901,211,-1,212,903,441,-1,441,904,212,-1,169,838,441,-1,441,903,169,-1,169,903,442,-1,442,905,169,-1,212,906,442,-1,442,903,212,-1,210,899,442,-1,442,906,210,-1,167,905,442,-1,442,899,167,-1,169,909,443,-1,443,841,169,-1,214,908,443,-1,443,909,214,-1,213,907,443,-1,443,908,213,-1,171,841,443,-1,443,907,171,-1,171,907,444,-1,444,910,171,-1,213,912,444,-1,444,907,213,-1,215,911,444,-1,444,912,215,-1,166,910,444,-1,444,911,166,-1,166,911,445,-1,445,835,166,-1,215,914,445,-1,445,911,215,-1,216,913,445,-1,445,914,216,-1,167,835,445,-1,445,913,167,-1,167,913,446,-1,446,905,167,-1,216,915,446,-1,446,913,216,-1,214,909,446,-1,446,915,214,-1,169,905,446,-1,446,909,169,-1,171,918,447,-1,447,843,171,-1,218,917,447,-1,447,918,218,-1,217,916,447,-1,447,917,217,-1,172,843,447,-1,447,916,172,-1,172,916,448,-1,448,919,172,-1,217,921,448,-1,448,916,217,-1,219,920,448,-1,448,921,219,-1,165,919,448,-1,448,920,165,-1,165,920,449,-1,449,833,165,-1,219,923,449,-1,449,920,219,-1,220,922,449,-1,449,923,220,-1,166,833,449,-1,449,922,166,-1,166,922,450,-1,450,910,166,-1,220,924,450,-1,450,922,220,-1,218,918,450,-1,450,924,218,-1,171,910,450,-1,450,918,171,-1,172,927,451,-1,451,845,172,-1,222,926,451,-1,451,927,222,-1,221,925,451,-1,451,926,221,-1,173,845,451,-1,451,925,173,-1,173,925,452,-1,452,928,173,-1,221,930,452,-1,452,925,221,-1,223,929,452,-1,452,930,223,-1,164,928,452,-1,452,929,164,-1,164,929,453,-1,453,831,164,-1,223,932,453,-1,453,929,223,-1,224,931,453,-1,453,932,224,-1,165,831,453,-1,453,931,165,-1,165,931,454,-1,454,919,165,-1,224,933,454,-1,454,931,224,-1,222,927,454,-1,454,933,222,-1,172,919,454,-1,454,927,172,-1,173,936,455,-1,455,847,173,-1,226,935,455,-1,455,936,226,-1,225,934,455,-1,455,935,225,-1,174,847,455,-1,455,934,174,-1,174,934,456,-1,456,937,174,-1,225,939,456,-1,456,934,225,-1,227,938,456,-1,456,939,227,-1,163,937,456,-1,456,938,163,-1,163,938,457,-1,457,829,163,-1,227,941,457,-1,457,938,227,-1,228,940,457,-1,457,941,228,-1,164,829,457,-1,457,940,164,-1,164,940,458,-1,458,928,164,-1,228,942,458,-1,458,940,228,-1,226,936,458,-1,458,942,226,-1,173,928,458,-1,458,936,173,-1,174,945,459,-1,459,849,174,-1,230,944,459,-1,459,945,230,-1,229,943,459,-1,459,944,229,-1,175,849,459,-1,459,943,175,-1,175,943,460,-1,460,890,175,-1,229,947,460,-1,460,943,229,-1,231,946,460,-1,460,947,231,-1,161,890,460,-1,460,946,161,-1,161,946,461,-1,461,827,161,-1,231,949,461,-1,461,946,231,-1,232,948,461,-1,461,949,232,-1,163,827,461,-1,461,948,163,-1,163,948,462,-1,462,937,163,-1,232,950,462,-1,462,948,232,-1,230,945,462,-1,462,950,230,-1,174,937,462,-1,462,945,174,-1,45,953,463,-1,463,852,45,-1,234,952,463,-1,463,953,234,-1,233,951,463,-1,463,952,233,-1,137,852,463,-1,463,951,137,-1,235,956,464,-1,464,954,235,-1,177,859,464,-1,464,956,177,-1,178,955,464,-1,464,859,178,-1,236,954,464,-1,464,955,236,-1,236,955,465,-1,465,957,236,-1,178,860,465,-1,465,955,178,-1,179,958,465,-1,465,860,179,-1,237,957,465,-1,465,958,237,-1,237,958,466,-1,466,959,237,-1,179,861,466,-1,466,958,179,-1,180,960,466,-1,466,861,180,-1,238,959,466,-1,466,960,238,-1,238,960,467,-1,467,961,238,-1,180,862,467,-1,467,960,180,-1,177,956,467,-1,467,862,177,-1,235,961,467,-1,467,956,235,-1,239,964,468,-1,468,962,239,-1,181,863,468,-1,468,964,181,-1,182,963,468,-1,468,863,182,-1,240,962,468,-1,468,963,240,-1,240,963,469,-1,469,965,240,-1,182,864,469,-1,469,963,182,-1,183,966,469,-1,469,864,183,-1,241,965,469,-1,469,966,241,-1,241,966,470,-1,470,967,241,-1,183,865,470,-1,470,966,183,-1,184,968,470,-1,470,865,184,-1,242,967,470,-1,470,968,242,-1,242,968,471,-1,471,969,242,-1,184,866,471,-1,471,968,184,-1,181,964,471,-1,471,866,181,-1,239,969,471,-1,471,964,239,-1,243,972,472,-1,472,970,243,-1,185,867,472,-1,472,972,185,-1,186,971,472,-1,472,867,186,-1,244,970,472,-1,472,971,244,-1,244,971,473,-1,473,973,244,-1,186,868,473,-1,473,971,186,-1,187,974,473,-1,473,868,187,-1,245,973,473,-1,473,974,245,-1,245,974,474,-1,474,975,245,-1,187,869,474,-1,474,974,187,-1,188,976,474,-1,474,869,188,-1,246,975,474,-1,474,976,246,-1,246,976,475,-1,475,977,246,-1,188,870,475,-1,475,976,188,-1,185,972,475,-1,475,870,185,-1,243,977,475,-1,475,972,243,-1,247,980,476,-1,476,978,247,-1,189,871,476,-1,476,980,189,-1,190,979,476,-1,476,871,190,-1,248,978,476,-1,476,979,248,-1,248,979,477,-1,477,981,248,-1,190,872,477,-1,477,979,190,-1,191,982,477,-1,477,872,191,-1,249,981,477,-1,477,982,249,-1,249,982,478,-1,478,983,249,-1,191,873,478,-1,478,982,191,-1,192,984,478,-1,478,873,192,-1,250,983,478,-1,478,984,250,-1,250,984,479,-1,479,985,250,-1,192,874,479,-1,479,984,192,-1,189,980,479,-1,479,874,189,-1,247,985,479,-1,479,980,247,-1,251,988,480,-1,480,986,251,-1,193,875,480,-1,480,988,193,-1,194,987,480,-1,480,875,194,-1,252,986,480,-1,480,987,252,-1,252,987,481,-1,481,989,252,-1,194,876,481,-1,481,987,194,-1,195,990,481,-1,481,876,195,-1,253,989,481,-1,481,990,253,-1,253,990,482,-1,482,991,253,-1,195,877,482,-1,482,990,195,-1,196,992,482,-1,482,877,196,-1,254,991,482,-1,482,992,254,-1,254,992,483,-1,483,993,254,-1,196,878,483,-1,483,992,196,-1,193,988,483,-1,483,878,193,-1,251,993,483,-1,483,988,251,-1,255,996,484,-1,484,994,255,-1,197,879,484,-1,484,996,197,-1,198,995,484,-1,484,879,198,-1,256,994,484,-1,484,995,256,-1,256,995,485,-1,485,997,256,-1,198,880,485,-1,485,995,198,-1,199,998,485,-1,485,880,199,-1,257,997,485,-1,485,998,257,-1,257,998,486,-1,486,999,257,-1,199,881,486,-1,486,998,199,-1,200,1000,486,-1,486,881,200,-1,258,999,486,-1,486,1000,258,-1,258,1000,487,-1,487,1001,258,-1,200,882,487,-1,487,1000,200,-1,197,996,487,-1,487,882,197,-1,255,1001,487,-1,487,996,255,-1,259,1004,488,-1,488,1002,259,-1,201,883,488,-1,488,1004,201,-1,202,1003,488,-1,488,883,202,-1,260,1002,488,-1,488,1003,260,-1,260,1003,489,-1,489,1005,260,-1,202,884,489,-1,489,1003,202,-1,203,1006,489,-1,489,884,203,-1,261,1005,489,-1,489,1006,261,-1,261,1006,490,-1,490,1007,261,-1,203,885,490,-1,490,1006,203,-1,204,1008,490,-1,490,885,204,-1,262,1007,490,-1,490,1008,262,-1,262,1008,491,-1,491,1009,262,-1,204,886,491,-1,491,1008,204,-1,201,1004,491,-1,491,886,201,-1,259,1009,491,-1,491,1004,259,-1,205,888,492,-1,492,1010,205,-1,206,1011,492,-1,492,888,206,-1,235,954,492,-1,492,1011,235,-1,236,1010,492,-1,492,954,236,-1,207,892,493,-1,493,1012,207,-1,205,1010,493,-1,493,892,205,-1,236,957,493,-1,493,1010,236,-1,237,1012,493,-1,493,957,237,-1,208,894,494,-1,494,1013,208,-1,207,1012,494,-1,494,894,207,-1,237,959,494,-1,494,1012,237,-1,238,1013,494,-1,494,959,238,-1,206,896,495,-1,495,1011,206,-1,208,1013,495,-1,495,896,208,-1,238,961,495,-1,495,1013,238,-1,235,1011,495,-1,495,961,235,-1,209,898,496,-1,496,1014,209,-1,210,1015,496,-1,496,898,210,-1,239,962,496,-1,496,1015,239,-1,240,1014,496,-1,496,962,240,-1,211,902,497,-1,497,1016,211,-1,209,1014,497,-1,497,902,209,-1,240,965,497,-1,497,1014,240,-1,241,1016,497,-1,497,965,241,-1,212,904,498,-1,498,1017,212,-1,211,1016,498,-1,498,904,211,-1,241,967,498,-1,498,1016,241,-1,242,1017,498,-1,498,967,242,-1,210,906,499,-1,499,1015,210,-1,212,1017,499,-1,499,906,212,-1,242,969,499,-1,499,1017,242,-1,239,1015,499,-1,499,969,239,-1,213,908,500,-1,500,1018,213,-1,214,1019,500,-1,500,908,214,-1,243,970,500,-1,500,1019,243,-1,244,1018,500,-1,500,970,244,-1,215,912,501,-1,501,1020,215,-1,213,1018,501,-1,501,912,213,-1,244,973,501,-1,501,1018,244,-1,245,1020,501,-1,501,973,245,-1,216,914,502,-1,502,1021,216,-1,215,1020,502,-1,502,914,215,-1,245,975,502,-1,502,1020,245,-1,246,1021,502,-1,502,975,246,-1,214,915,503,-1,503,1019,214,-1,216,1021,503,-1,503,915,216,-1,246,977,503,-1,503,1021,246,-1,243,1019,503,-1,503,977,243,-1,217,917,504,-1,504,1022,217,-1,218,1023,504,-1,504,917,218,-1,247,978,504,-1,504,1023,247,-1,248,1022,504,-1,504,978,248,-1,219,921,505,-1,505,1024,219,-1,217,1022,505,-1,505,921,217,-1,248,981,505,-1,505,1022,248,-1,249,1024,505,-1,505,981,249,-1,220,923,506,-1,506,1025,220,-1,219,1024,506,-1,506,923,219,-1,249,983,506,-1,506,1024,249,-1,250,1025,506,-1,506,983,250,-1,218,924,507,-1,507,1023,218,-1,220,1025,507,-1,507,924,220,-1,250,985,507,-1,507,1025,250,-1,247,1023,507,-1,507,985,247,-1,221,926,508,-1,508,1026,221,-1,222,1027,508,-1,508,926,222,-1,251,986,508,-1,508,1027,251,-1,252,1026,508,-1,508,986,252,-1,223,930,509,-1,509,1028,223,-1,221,1026,509,-1,509,930,221,-1,252,989,509,-1,509,1026,252,-1,253,1028,509,-1,509,989,253,-1,224,932,510,-1,510,1029,224,-1,223,1028,510,-1,510,932,223,-1,253,991,510,-1,510,1028,253,-1,254,1029,510,-1,510,991,254,-1,222,933,511,-1,511,1027,222,-1,224,1029,511,-1,511,933,224,-1,254,993,511,-1,511,1029,254,-1,251,1027,511,-1,511,993,251,-1,225,935,512,-1,512,1030,225,-1,226,1031,512,-1,512,935,226,-1,255,994,512,-1,512,1031,255,-1,256,1030,512,-1,512,994,256,-1,227,939,513,-1,513,1032,227,-1,225,1030,513,-1,513,939,225,-1,256,997,513,-1,513,1030,256,-1,257,1032,513,-1,513,997,257,-1,228,941,514,-1,514,1033,228,-1,227,1032,514,-1,514,941,227,-1,257,999,514,-1,514,1032,257,-1,258,1033,514,-1,514,999,258,-1,226,942,515,-1,515,1031,226,-1,228,1033,515,-1,515,942,228,-1,258,1001,515,-1,515,1033,258,-1,255,1031,515,-1,515,1001,255,-1,229,944,516,-1,516,1034,229,-1,230,1035,516,-1,516,944,230,-1,259,1002,516,-1,516,1035,259,-1,260,1034,516,-1,516,1002,260,-1,231,947,517,-1,517,1036,231,-1,229,1034,517,-1,517,947,229,-1,260,1005,517,-1,517,1034,260,-1,261,1036,517,-1,517,1005,261,-1,232,949,518,-1,518,1037,232,-1,231,1036,518,-1,518,949,231,-1,261,1007,518,-1,518,1036,261,-1,262,1037,518,-1,518,1007,262,-1,230,950,519,-1,519,1035,230,-1,232,1037,519,-1,519,950,232,-1,262,1009,519,-1,519,1037,262,-1,259,1035,519,-1,519,1009,259,-1,233,952,520,-1,520,1038,233,-1,234,1040,520,-1,520,952,234,-1,264,1039,520,-1,520,1040,264,-1,263,1038,520,-1,520,1039,263,-1]
IndexedFaceSet100.creaseAngle = 3.14159
IndexedFaceSet100.solid = False
IndexedFaceSet100.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,2,-1,2,5,6,-1,8,3,2,-1,2,7,8,-1,9,10,11,-1,11,12,9,-1,13,14,11,-1,11,10,13,-1,15,16,11,-1,11,14,15,-1,17,12,11,-1,11,16,17,-1,8,7,18,-1,18,19,8,-1,6,20,18,-1,18,7,6,-1,21,22,18,-1,18,20,21,-1,23,19,18,-1,18,22,23,-1,17,16,24,-1,24,25,17,-1,15,26,24,-1,24,16,15,-1,27,28,24,-1,24,26,27,-1,29,25,24,-1,24,28,29,-1,23,22,30,-1,30,31,23,-1,21,32,30,-1,30,22,21,-1,33,34,30,-1,30,32,33,-1,35,31,30,-1,30,34,35,-1,29,28,36,-1,36,37,29,-1,27,38,36,-1,36,28,27,-1,39,40,36,-1,36,38,39,-1,41,37,36,-1,36,40,41,-1,35,34,42,-1,42,43,35,-1,33,44,42,-1,42,34,33,-1,45,46,42,-1,42,44,45,-1,47,43,42,-1,42,46,47,-1,41,40,48,-1,48,87,41,-1,39,88,48,-1,48,40,39,-1,145,146,48,-1,48,88,145,-1,147,87,48,-1,48,146,147,-1,47,46,148,-1,148,149,47,-1,45,150,148,-1,148,46,45,-1,151,152,148,-1,148,150,151,-1,153,149,148,-1,148,152,153,-1,147,146,154,-1,154,155,147,-1,145,156,154,-1,154,146,145,-1,157,158,154,-1,154,156,157,-1,159,155,154,-1,154,158,159,-1,153,152,160,-1,160,161,153,-1,151,162,160,-1,160,152,151,-1,163,164,160,-1,160,162,163,-1,165,161,160,-1,160,164,165,-1,159,158,166,-1,166,167,159,-1,157,168,166,-1,166,158,157,-1,169,170,166,-1,166,168,169,-1,171,167,166,-1,166,170,171,-1,165,164,172,-1,172,173,165,-1,163,174,172,-1,172,164,163,-1,175,176,172,-1,172,174,175,-1,177,173,172,-1,172,176,177,-1,171,170,178,-1,178,179,171,-1,169,180,178,-1,178,170,169,-1,181,182,178,-1,178,180,181,-1,183,179,178,-1,178,182,183,-1,9,12,184,-1,184,185,9,-1,17,186,184,-1,184,12,17,-1,187,188,184,-1,184,186,187,-1,189,185,184,-1,184,188,189,-1,17,25,190,-1,190,186,17,-1,29,191,190,-1,190,25,29,-1,192,193,190,-1,190,191,192,-1,187,186,190,-1,190,193,187,-1,29,37,194,-1,194,191,29,-1,41,195,194,-1,194,37,41,-1,262,263,194,-1,194,195,262,-1,192,191,194,-1,194,263,192,-1,41,87,292,-1,292,195,41,-1,147,293,292,-1,292,87,147,-1,294,295,292,-1,292,293,294,-1,262,195,292,-1,292,295,262,-1,147,155,296,-1,296,293,147,-1,159,297,296,-1,296,155,159,-1,298,299,296,-1,296,297,298,-1,294,293,296,-1,296,299,294,-1,159,167,300,-1,300,297,159,-1,171,301,300,-1,300,167,171,-1,302,303,300,-1,300,301,302,-1,298,297,300,-1,300,303,298,-1,171,179,304,-1,304,301,171,-1,183,305,304,-1,304,179,183,-1,306,307,304,-1,304,305,306,-1,302,301,304,-1,304,307,302,-1,175,174,308,-1,308,309,175,-1,163,310,308,-1,308,174,163,-1,311,312,308,-1,308,310,311,-1,313,309,308,-1,308,312,313,-1,163,162,314,-1,314,310,163,-1,151,315,314,-1,314,162,151,-1,316,317,314,-1,314,315,316,-1,311,310,314,-1,314,317,311,-1,151,150,318,-1,318,315,151,-1,45,319,318,-1,318,150,45,-1,320,321,318,-1,318,319,320,-1,316,315,318,-1,318,321,316,-1,45,44,322,-1,322,319,45,-1,33,323,322,-1,322,44,33,-1,324,325,322,-1,322,323,324,-1,320,319,322,-1,322,325,320,-1,33,32,326,-1,326,323,33,-1,21,327,326,-1,326,32,21,-1,328,364,326,-1,326,327,328,-1,324,323,326,-1,326,364,324,-1,21,20,421,-1,421,327,21,-1,6,422,421,-1,421,20,6,-1,423,424,421,-1,421,422,423,-1,328,327,421,-1,421,424,328,-1,6,5,425,-1,425,422,6,-1,4,426,425,-1,425,5,4,-1,427,428,425,-1,425,426,427,-1,423,422,425,-1,425,428,423,-1,15,14,429,-1,429,430,15,-1,13,431,429,-1,429,14,13,-1,432,430,429,-1,429,431,432,-1,27,26,433,-1,433,434,27,-1,15,430,433,-1,433,26,15,-1,432,434,433,-1,433,430,432,-1,39,38,435,-1,435,436,39,-1,27,434,435,-1,435,38,27,-1,432,436,435,-1,435,434,432,-1,145,88,437,-1,437,438,145,-1,39,436,437,-1,437,88,39,-1,432,438,437,-1,437,436,432,-1,157,156,439,-1,439,440,157,-1,145,438,439,-1,439,156,145,-1,432,440,439,-1,439,438,432,-1,169,168,441,-1,441,442,169,-1,157,440,441,-1,441,168,157,-1,432,442,441,-1,441,440,432,-1,181,180,443,-1,443,444,181,-1,169,442,443,-1,443,180,169,-1,432,444,443,-1,443,442,432,-1,49,50,51,-1,51,52,49,-1,53,54,51,-1,51,50,53,-1,55,56,51,-1,51,54,55,-1,57,52,51,-1,51,56,57,-1,58,59,60,-1,60,61,58,-1,62,63,60,-1,60,59,62,-1,64,65,60,-1,60,63,64,-1,66,61,60,-1,60,65,66,-1,67,68,69,-1,69,70,67,-1,71,72,69,-1,69,68,71,-1,73,74,69,-1,69,72,73,-1,75,70,69,-1,69,74,75,-1,76,77,78,-1,78,79,76,-1,80,81,78,-1,78,77,80,-1,82,83,78,-1,78,81,82,-1,84,79,78,-1,78,83,84,-1,85,86,89,-1,89,90,85,-1,91,92,89,-1,89,86,91,-1,93,94,89,-1,89,92,93,-1,95,90,89,-1,89,94,95,-1,96,97,98,-1,98,99,96,-1,100,101,98,-1,98,97,100,-1,102,103,98,-1,98,101,102,-1,104,99,98,-1,98,103,104,-1,105,106,107,-1,107,108,105,-1,109,110,107,-1,107,106,109,-1,111,112,107,-1,107,110,111,-1,113,108,107,-1,107,112,113,-1,114,115,116,-1,116,117,114,-1,118,119,116,-1,116,115,118,-1,120,121,116,-1,116,119,120,-1,122,117,116,-1,116,121,122,-1,118,123,124,-1,124,119,118,-1,125,126,124,-1,124,123,125,-1,127,128,124,-1,124,126,127,-1,120,119,124,-1,124,128,120,-1,125,129,130,-1,130,126,125,-1,131,132,130,-1,130,129,131,-1,133,134,130,-1,130,132,133,-1,127,126,130,-1,130,134,127,-1,131,135,136,-1,136,132,131,-1,114,117,136,-1,136,135,114,-1,122,137,136,-1,136,117,122,-1,133,132,136,-1,136,137,133,-1,138,139,140,-1,140,141,138,-1,142,143,140,-1,140,139,142,-1,144,196,140,-1,140,143,144,-1,197,141,140,-1,140,196,197,-1,142,198,199,-1,199,143,142,-1,200,201,199,-1,199,198,200,-1,202,203,199,-1,199,201,202,-1,144,143,199,-1,199,203,144,-1,200,204,205,-1,205,201,200,-1,206,207,205,-1,205,204,206,-1,208,209,205,-1,205,207,208,-1,202,201,205,-1,205,209,202,-1,206,210,211,-1,211,207,206,-1,138,141,211,-1,211,210,138,-1,197,212,211,-1,211,141,197,-1,208,207,211,-1,211,212,208,-1,206,213,214,-1,214,215,206,-1,216,217,214,-1,214,213,216,-1,218,219,214,-1,214,217,218,-1,220,215,214,-1,214,219,220,-1,216,221,222,-1,222,217,216,-1,223,224,222,-1,222,221,223,-1,225,226,222,-1,222,224,225,-1,218,217,222,-1,222,226,218,-1,223,227,228,-1,228,224,223,-1,138,229,228,-1,228,227,138,-1,230,231,228,-1,228,229,230,-1,225,224,228,-1,228,231,225,-1,138,210,232,-1,232,229,138,-1,206,215,232,-1,232,210,206,-1,220,233,232,-1,232,215,220,-1,230,229,232,-1,232,233,230,-1,216,234,235,-1,235,236,216,-1,237,238,235,-1,235,234,237,-1,239,240,235,-1,235,238,239,-1,241,236,235,-1,235,240,241,-1,237,242,243,-1,243,238,237,-1,244,245,243,-1,243,242,244,-1,246,247,243,-1,243,245,246,-1,239,238,243,-1,243,247,239,-1,244,248,249,-1,249,245,244,-1,223,250,249,-1,249,248,223,-1,251,252,249,-1,249,250,251,-1,246,245,249,-1,249,252,246,-1,223,221,253,-1,253,250,223,-1,216,236,253,-1,253,221,216,-1,241,254,253,-1,253,236,241,-1,251,250,253,-1,253,254,251,-1,237,255,256,-1,256,257,237,-1,258,259,256,-1,256,255,258,-1,260,261,256,-1,256,259,260,-1,264,257,256,-1,256,261,264,-1,258,265,266,-1,266,259,258,-1,267,268,266,-1,266,265,267,-1,269,270,266,-1,266,268,269,-1,260,259,266,-1,266,270,260,-1,267,271,272,-1,272,268,267,-1,244,273,272,-1,272,271,244,-1,274,275,272,-1,272,273,274,-1,269,268,272,-1,272,275,269,-1,244,242,276,-1,276,273,244,-1,237,257,276,-1,276,242,237,-1,264,277,276,-1,276,257,264,-1,274,273,276,-1,276,277,274,-1,258,278,279,-1,279,280,258,-1,281,282,279,-1,279,278,281,-1,283,284,279,-1,279,282,283,-1,285,280,279,-1,279,284,285,-1,281,286,287,-1,287,282,281,-1,288,289,287,-1,287,286,288,-1,290,291,287,-1,287,289,290,-1,283,282,287,-1,287,291,283,-1,288,329,330,-1,330,289,288,-1,267,331,330,-1,330,329,267,-1,332,333,330,-1,330,331,332,-1,290,289,330,-1,330,333,290,-1,267,265,334,-1,334,331,267,-1,258,280,334,-1,334,265,258,-1,285,335,334,-1,334,280,285,-1,332,331,334,-1,334,335,332,-1,281,336,337,-1,337,338,281,-1,125,339,337,-1,337,336,125,-1,340,341,337,-1,337,339,340,-1,342,338,337,-1,337,341,342,-1,125,123,343,-1,343,339,125,-1,118,344,343,-1,343,123,118,-1,345,346,343,-1,343,344,345,-1,340,339,343,-1,343,346,340,-1,118,347,348,-1,348,344,118,-1,288,349,348,-1,348,347,288,-1,350,351,348,-1,348,349,350,-1,345,344,348,-1,348,351,345,-1,288,286,352,-1,352,349,288,-1,281,338,352,-1,352,286,281,-1,342,353,352,-1,352,338,342,-1,350,349,352,-1,352,353,350,-1,432,431,445,-1,445,446,432,-1,13,447,445,-1,445,431,13,-1,448,449,445,-1,445,447,448,-1,450,446,445,-1,445,449,450,-1,354,355,356,-1,356,357,354,-1,358,359,356,-1,356,355,358,-1,53,50,356,-1,356,359,53,-1,49,357,356,-1,356,50,49,-1,358,360,361,-1,361,359,358,-1,362,363,361,-1,361,360,362,-1,55,54,361,-1,361,363,55,-1,53,359,361,-1,361,54,53,-1,362,365,366,-1,366,363,362,-1,367,368,366,-1,366,365,367,-1,57,56,366,-1,366,368,57,-1,55,363,366,-1,366,56,55,-1,367,369,370,-1,370,368,367,-1,354,357,370,-1,370,369,354,-1,49,52,370,-1,370,357,49,-1,57,368,370,-1,370,52,57,-1,371,372,373,-1,373,374,371,-1,375,376,373,-1,373,372,375,-1,62,59,373,-1,373,376,62,-1,58,374,373,-1,373,59,58,-1,375,377,378,-1,378,376,375,-1,379,380,378,-1,378,377,379,-1,64,63,378,-1,378,380,64,-1,62,376,378,-1,378,63,62,-1,379,381,382,-1,382,380,379,-1,383,384,382,-1,382,381,383,-1,66,65,382,-1,382,384,66,-1,64,380,382,-1,382,65,64,-1,383,385,386,-1,386,384,383,-1,371,374,386,-1,386,385,371,-1,58,61,386,-1,386,374,58,-1,66,384,386,-1,386,61,66,-1,387,388,389,-1,389,390,387,-1,391,392,389,-1,389,388,391,-1,71,68,389,-1,389,392,71,-1,67,390,389,-1,389,68,67,-1,391,393,394,-1,394,392,391,-1,395,396,394,-1,394,393,395,-1,73,72,394,-1,394,396,73,-1,71,392,394,-1,394,72,71,-1,395,397,398,-1,398,396,395,-1,399,400,398,-1,398,397,399,-1,75,74,398,-1,398,400,75,-1,73,396,398,-1,398,74,73,-1,399,401,402,-1,402,400,399,-1,387,390,402,-1,402,401,387,-1,67,70,402,-1,402,390,67,-1,75,400,402,-1,402,70,75,-1,403,404,405,-1,405,406,403,-1,407,408,405,-1,405,404,407,-1,80,77,405,-1,405,408,80,-1,76,406,405,-1,405,77,76,-1,407,409,410,-1,410,408,407,-1,411,412,410,-1,410,409,411,-1,82,81,410,-1,410,412,82,-1,80,408,410,-1,410,81,80,-1,411,413,414,-1,414,412,411,-1,415,416,414,-1,414,413,415,-1,84,83,414,-1,414,416,84,-1,82,412,414,-1,414,83,82,-1,415,417,418,-1,418,416,415,-1,403,406,418,-1,418,417,403,-1,76,79,418,-1,418,406,76,-1,84,416,418,-1,418,79,84,-1,419,420,457,-1,457,458,419,-1,459,460,457,-1,457,420,459,-1,91,86,457,-1,457,460,91,-1,85,458,457,-1,457,86,85,-1,459,461,462,-1,462,460,459,-1,463,464,462,-1,462,461,463,-1,93,92,462,-1,462,464,93,-1,91,460,462,-1,462,92,91,-1,463,465,466,-1,466,464,463,-1,467,468,466,-1,466,465,467,-1,95,94,466,-1,466,468,95,-1,93,464,466,-1,466,94,93,-1,467,469,470,-1,470,468,467,-1,419,458,470,-1,470,469,419,-1,85,90,470,-1,470,458,85,-1,95,468,470,-1,470,90,95,-1,471,472,473,-1,473,474,471,-1,475,476,473,-1,473,472,475,-1,100,97,473,-1,473,476,100,-1,96,474,473,-1,473,97,96,-1,475,477,478,-1,478,476,475,-1,479,480,478,-1,478,477,479,-1,102,101,478,-1,478,480,102,-1,100,476,478,-1,478,101,100,-1,479,481,482,-1,482,480,479,-1,483,484,482,-1,482,481,483,-1,104,103,482,-1,482,484,104,-1,102,480,482,-1,482,103,102,-1,483,485,486,-1,486,484,483,-1,471,474,486,-1,486,485,471,-1,96,99,486,-1,486,474,96,-1,104,484,486,-1,486,99,104,-1,487,488,489,-1,489,490,487,-1,491,493,489,-1,489,488,491,-1,109,106,489,-1,489,493,109,-1,105,490,489,-1,489,106,105,-1,491,494,495,-1,495,493,491,-1,496,497,495,-1,495,494,496,-1,111,110,495,-1,495,497,111,-1,109,493,495,-1,495,110,109,-1,496,498,499,-1,499,497,496,-1,500,501,499,-1,499,498,500,-1,113,112,499,-1,499,501,113,-1,111,497,499,-1,499,112,111,-1,500,502,503,-1,503,501,500,-1,487,490,503,-1,503,502,487,-1,105,108,503,-1,503,490,105,-1,113,501,503,-1,503,108,113,-1,120,504,505,-1,505,121,120,-1,358,355,505,-1,505,504,358,-1,354,506,505,-1,505,355,354,-1,122,121,505,-1,505,506,122,-1,127,507,508,-1,508,128,127,-1,362,360,508,-1,508,507,362,-1,358,504,508,-1,508,360,358,-1,120,128,508,-1,508,504,120,-1,133,509,510,-1,510,134,133,-1,367,365,510,-1,510,509,367,-1,362,507,510,-1,510,365,362,-1,127,134,510,-1,510,507,127,-1,122,506,511,-1,511,137,122,-1,354,369,511,-1,511,506,354,-1,367,509,511,-1,511,369,367,-1,133,137,511,-1,511,509,133,-1,144,512,513,-1,513,196,144,-1,375,372,513,-1,513,512,375,-1,371,514,513,-1,513,372,371,-1,197,196,513,-1,513,514,197,-1,202,515,516,-1,516,203,202,-1,379,377,516,-1,516,515,379,-1,375,512,516,-1,516,377,375,-1,144,203,516,-1,516,512,144,-1,208,517,518,-1,518,209,208,-1,383,381,518,-1,518,517,383,-1,379,515,518,-1,518,381,379,-1,202,209,518,-1,518,515,202,-1,197,514,519,-1,519,212,197,-1,371,385,519,-1,519,514,371,-1,383,517,519,-1,519,385,383,-1,208,212,519,-1,519,517,208,-1,218,520,521,-1,521,219,218,-1,391,388,521,-1,521,520,391,-1,387,522,521,-1,521,388,387,-1,220,219,521,-1,521,522,220,-1,225,523,524,-1,524,226,225,-1,395,393,524,-1,524,523,395,-1,391,520,524,-1,524,393,391,-1,218,226,524,-1,524,520,218,-1,230,525,526,-1,526,231,230,-1,399,397,526,-1,526,525,399,-1,395,523,526,-1,526,397,395,-1,225,231,526,-1,526,523,225,-1,220,522,527,-1,527,233,220,-1,387,401,527,-1,527,522,387,-1,399,525,527,-1,527,401,399,-1,230,233,527,-1,527,525,230,-1,239,528,529,-1,529,240,239,-1,407,404,529,-1,529,528,407,-1,403,530,529,-1,529,404,403,-1,241,240,529,-1,529,530,241,-1,246,531,532,-1,532,247,246,-1,411,409,532,-1,532,531,411,-1,407,528,532,-1,532,409,407,-1,239,247,532,-1,532,528,239,-1,251,533,534,-1,534,252,251,-1,415,413,534,-1,534,533,415,-1,411,531,534,-1,534,413,411,-1,246,252,534,-1,534,531,246,-1,241,530,535,-1,535,254,241,-1,403,417,535,-1,535,530,403,-1,415,533,535,-1,535,417,415,-1,251,254,535,-1,535,533,251,-1,260,536,537,-1,537,261,260,-1,459,420,537,-1,537,536,459,-1,419,538,537,-1,537,420,419,-1,264,261,537,-1,537,538,264,-1,269,539,540,-1,540,270,269,-1,463,461,540,-1,540,539,463,-1,459,536,540,-1,540,461,459,-1,260,270,540,-1,540,536,260,-1,274,541,542,-1,542,275,274,-1,467,465,542,-1,542,541,467,-1,463,539,542,-1,542,465,463,-1,269,275,542,-1,542,539,269,-1,264,538,543,-1,543,277,264,-1,419,469,543,-1,543,538,419,-1,467,541,543,-1,543,469,467,-1,274,277,543,-1,543,541,274,-1,283,544,545,-1,545,284,283,-1,475,472,545,-1,545,544,475,-1,471,546,545,-1,545,472,471,-1,285,284,545,-1,545,546,285,-1,290,547,548,-1,548,291,290,-1,479,477,548,-1,548,547,479,-1,475,544,548,-1,548,477,475,-1,283,291,548,-1,548,544,283,-1,332,598,600,-1,600,333,332,-1,483,481,600,-1,600,598,483,-1,479,547,600,-1,600,481,479,-1,290,333,600,-1,600,547,290,-1,285,546,602,-1,602,335,285,-1,471,485,602,-1,602,546,471,-1,483,598,602,-1,602,485,483,-1,332,335,602,-1,602,598,332,-1,340,604,606,-1,606,341,340,-1,491,488,606,-1,606,604,491,-1,487,609,606,-1,606,488,487,-1,342,341,606,-1,606,609,342,-1,345,616,642,-1,642,346,345,-1,496,494,642,-1,642,616,496,-1,491,604,642,-1,642,494,491,-1,340,346,642,-1,642,604,340,-1,350,643,644,-1,644,351,350,-1,500,498,644,-1,644,643,500,-1,496,616,644,-1,644,498,496,-1,345,351,644,-1,644,616,345,-1,342,609,645,-1,645,353,342,-1,487,502,645,-1,645,609,487,-1,500,643,645,-1,645,502,500,-1,350,353,645,-1,645,643,350,-1,448,451,452,-1,452,449,448,-1,453,454,452,-1,452,451,453,-1,455,456,452,-1,452,454,455,-1,450,449,452,-1,452,456,450,-1,492,549,550,-1,550,551,492,-1,552,553,550,-1,550,549,552,-1,554,555,550,-1,550,553,554,-1,556,551,550,-1,550,555,556,-1,557,558,559,-1,559,560,557,-1,561,562,559,-1,559,558,561,-1,563,564,559,-1,559,562,563,-1,565,560,559,-1,559,564,565,-1,552,566,567,-1,567,553,552,-1,568,569,567,-1,567,566,568,-1,570,571,567,-1,567,569,570,-1,554,553,567,-1,567,571,554,-1,561,572,573,-1,573,562,561,-1,574,575,573,-1,573,572,574,-1,576,577,573,-1,573,575,576,-1,563,562,573,-1,573,577,563,-1,568,578,579,-1,579,569,568,-1,580,581,579,-1,579,578,580,-1,582,583,579,-1,579,581,582,-1,570,569,579,-1,579,583,570,-1,574,584,585,-1,585,575,574,-1,586,587,585,-1,585,584,586,-1,588,589,585,-1,585,587,588,-1,576,575,585,-1,585,589,576,-1,580,590,591,-1,591,581,580,-1,592,593,591,-1,591,590,592,-1,594,595,591,-1,591,593,594,-1,582,581,591,-1,591,595,582,-1,586,596,597,-1,597,587,586,-1,599,601,597,-1,597,596,599,-1,603,605,597,-1,597,601,603,-1,588,587,597,-1,597,605,588,-1,592,607,608,-1,608,593,592,-1,610,611,608,-1,608,607,610,-1,612,613,608,-1,608,611,612,-1,594,593,608,-1,608,613,594,-1,599,614,615,-1,615,601,599,-1,617,618,615,-1,615,614,617,-1,619,620,615,-1,615,618,619,-1,603,601,615,-1,615,620,603,-1,610,621,622,-1,622,611,610,-1,623,624,622,-1,622,621,623,-1,625,626,622,-1,622,624,625,-1,612,611,622,-1,622,626,612,-1,617,627,628,-1,628,618,617,-1,629,630,628,-1,628,627,629,-1,631,632,628,-1,628,630,631,-1,619,618,628,-1,628,632,619,-1,623,633,634,-1,634,624,623,-1,177,176,634,-1,634,633,177,-1,175,635,634,-1,634,176,175,-1,625,624,634,-1,634,635,625,-1,629,636,637,-1,637,630,629,-1,183,182,637,-1,637,636,183,-1,181,638,637,-1,637,182,181,-1,631,630,637,-1,637,638,631,-1,557,639,640,-1,640,558,557,-1,641,707,640,-1,640,639,641,-1,708,793,640,-1,640,707,708,-1,561,558,640,-1,640,793,561,-1,561,793,822,-1,822,572,561,-1,708,823,822,-1,822,793,708,-1,824,825,822,-1,822,823,824,-1,574,572,822,-1,822,825,574,-1,574,825,826,-1,826,584,574,-1,824,827,826,-1,826,825,824,-1,828,829,826,-1,826,827,828,-1,586,584,826,-1,826,829,586,-1,586,829,830,-1,830,596,586,-1,828,831,830,-1,830,829,828,-1,832,833,830,-1,830,831,832,-1,599,596,830,-1,830,833,599,-1,599,833,834,-1,834,614,599,-1,832,835,834,-1,834,833,832,-1,836,837,834,-1,834,835,836,-1,617,614,834,-1,834,837,617,-1,617,837,838,-1,838,627,617,-1,836,839,838,-1,838,837,836,-1,840,841,838,-1,838,839,840,-1,629,627,838,-1,838,841,629,-1,629,841,842,-1,842,636,629,-1,840,843,842,-1,842,841,840,-1,306,305,842,-1,842,843,306,-1,183,636,842,-1,842,305,183,-1,175,309,844,-1,844,635,175,-1,313,845,844,-1,844,309,313,-1,846,847,844,-1,844,845,846,-1,625,635,844,-1,844,847,625,-1,625,847,848,-1,848,626,625,-1,846,849,848,-1,848,847,846,-1,850,851,848,-1,848,849,850,-1,612,626,848,-1,848,851,612,-1,612,851,852,-1,852,613,612,-1,850,853,852,-1,852,851,850,-1,854,855,852,-1,852,853,854,-1,594,613,852,-1,852,855,594,-1,594,855,856,-1,856,595,594,-1,854,857,856,-1,856,855,854,-1,858,859,856,-1,856,857,858,-1,582,595,856,-1,856,859,582,-1,582,859,860,-1,860,583,582,-1,858,861,860,-1,860,859,858,-1,862,863,860,-1,860,861,862,-1,570,583,860,-1,860,863,570,-1,570,863,864,-1,864,571,570,-1,862,865,864,-1,864,863,862,-1,866,867,864,-1,864,865,866,-1,554,571,864,-1,864,867,554,-1,554,867,868,-1,868,555,554,-1,866,869,868,-1,868,867,866,-1,871,872,868,-1,868,869,871,-1,556,555,868,-1,868,872,556,-1,563,874,875,-1,875,564,563,-1,432,877,875,-1,875,874,432,-1,565,564,875,-1,875,877,565,-1,576,878,880,-1,880,577,576,-1,432,874,880,-1,880,878,432,-1,563,577,880,-1,880,874,563,-1,588,881,883,-1,883,589,588,-1,432,878,883,-1,883,881,432,-1,576,589,883,-1,883,878,576,-1,603,884,885,-1,885,605,603,-1,432,881,885,-1,885,884,432,-1,588,605,885,-1,885,881,588,-1,619,887,888,-1,888,620,619,-1,432,884,888,-1,888,887,432,-1,603,620,888,-1,888,884,603,-1,631,889,890,-1,890,632,631,-1,432,887,890,-1,890,889,432,-1,619,632,890,-1,890,887,619,-1,181,444,891,-1,891,638,181,-1,432,889,891,-1,891,444,432,-1,631,638,891,-1,891,889,631,-1,646,647,648,-1,648,649,646,-1,650,651,648,-1,648,647,650,-1,652,653,648,-1,648,651,652,-1,654,649,648,-1,648,653,654,-1,655,656,657,-1,657,658,655,-1,659,660,657,-1,657,656,659,-1,661,662,657,-1,657,660,661,-1,663,658,657,-1,657,662,663,-1,664,665,666,-1,666,667,664,-1,668,669,666,-1,666,665,668,-1,670,671,666,-1,666,669,670,-1,672,667,666,-1,666,671,672,-1,673,674,675,-1,675,676,673,-1,677,678,675,-1,675,674,677,-1,679,680,675,-1,675,678,679,-1,681,676,675,-1,675,680,681,-1,682,683,684,-1,684,685,682,-1,686,687,684,-1,684,683,686,-1,688,689,684,-1,684,687,688,-1,690,685,684,-1,684,689,690,-1,691,692,693,-1,693,694,691,-1,695,696,693,-1,693,692,695,-1,697,698,693,-1,693,696,697,-1,699,694,693,-1,693,698,699,-1,700,701,702,-1,702,703,700,-1,704,705,702,-1,702,701,704,-1,706,709,702,-1,702,705,706,-1,710,703,702,-1,702,709,710,-1,711,712,713,-1,713,714,711,-1,715,716,713,-1,713,712,715,-1,717,718,713,-1,713,716,717,-1,719,714,713,-1,713,718,719,-1,719,718,720,-1,720,721,719,-1,717,722,720,-1,720,718,717,-1,723,724,720,-1,720,722,723,-1,725,721,720,-1,720,724,725,-1,725,724,726,-1,726,727,725,-1,723,728,726,-1,726,724,723,-1,729,730,726,-1,726,728,729,-1,731,727,726,-1,726,730,731,-1,731,730,732,-1,732,733,731,-1,729,734,732,-1,732,730,729,-1,715,712,732,-1,732,734,715,-1,711,733,732,-1,732,712,711,-1,735,736,737,-1,737,738,735,-1,739,740,737,-1,737,736,739,-1,741,742,737,-1,737,740,741,-1,142,738,737,-1,737,742,142,-1,142,742,743,-1,743,198,142,-1,741,744,743,-1,743,742,741,-1,745,746,743,-1,743,744,745,-1,200,198,743,-1,743,746,200,-1,200,746,747,-1,747,748,200,-1,745,749,747,-1,747,746,745,-1,750,751,747,-1,747,749,750,-1,752,748,747,-1,747,751,752,-1,752,751,753,-1,753,754,752,-1,750,755,753,-1,753,751,750,-1,739,736,753,-1,753,755,739,-1,735,754,753,-1,753,736,735,-1,752,756,757,-1,757,758,752,-1,759,760,757,-1,757,756,759,-1,761,762,757,-1,757,760,761,-1,763,758,757,-1,757,762,763,-1,763,762,764,-1,764,765,763,-1,761,766,764,-1,764,762,761,-1,767,768,764,-1,764,766,767,-1,769,765,764,-1,764,768,769,-1,769,768,770,-1,770,771,769,-1,767,772,770,-1,770,768,767,-1,773,774,770,-1,770,772,773,-1,735,771,770,-1,770,774,735,-1,735,774,775,-1,775,754,735,-1,773,776,775,-1,775,774,773,-1,759,756,775,-1,775,776,759,-1,752,754,775,-1,775,756,752,-1,763,777,778,-1,778,779,763,-1,780,781,778,-1,778,777,780,-1,782,783,778,-1,778,781,782,-1,784,779,778,-1,778,783,784,-1,784,783,785,-1,785,786,784,-1,782,787,785,-1,785,783,782,-1,788,789,785,-1,785,787,788,-1,790,786,785,-1,785,789,790,-1,790,789,791,-1,791,792,790,-1,788,794,791,-1,791,789,788,-1,795,796,791,-1,791,794,795,-1,769,792,791,-1,791,796,769,-1,769,796,797,-1,797,765,769,-1,795,798,797,-1,797,796,795,-1,780,777,797,-1,797,798,780,-1,763,765,797,-1,797,777,763,-1,784,799,800,-1,800,801,784,-1,802,803,800,-1,800,799,802,-1,804,805,800,-1,800,803,804,-1,806,801,800,-1,800,805,806,-1,806,805,807,-1,807,808,806,-1,804,809,807,-1,807,805,804,-1,810,811,807,-1,807,809,810,-1,812,808,807,-1,807,811,812,-1,812,811,813,-1,813,814,812,-1,810,815,813,-1,813,811,810,-1,816,817,813,-1,813,815,816,-1,790,814,813,-1,813,817,790,-1,790,817,818,-1,818,786,790,-1,816,819,818,-1,818,817,816,-1,802,799,818,-1,818,819,802,-1,784,786,818,-1,818,799,784,-1,806,820,821,-1,821,870,806,-1,873,876,821,-1,821,820,873,-1,879,882,821,-1,821,876,879,-1,886,870,821,-1,821,882,886,-1,886,882,900,-1,900,901,886,-1,879,902,900,-1,900,882,879,-1,903,904,900,-1,900,902,903,-1,905,901,900,-1,900,904,905,-1,905,904,906,-1,906,907,905,-1,903,908,906,-1,906,904,903,-1,909,910,906,-1,906,908,909,-1,812,907,906,-1,906,910,812,-1,812,910,911,-1,911,808,812,-1,909,912,911,-1,911,910,909,-1,873,820,911,-1,911,912,873,-1,806,808,911,-1,911,820,806,-1,886,913,914,-1,914,915,886,-1,916,917,914,-1,914,913,916,-1,918,919,914,-1,914,917,918,-1,725,915,914,-1,914,919,725,-1,725,919,920,-1,920,721,725,-1,918,921,920,-1,920,919,918,-1,922,923,920,-1,920,921,922,-1,719,721,920,-1,920,923,719,-1,719,923,924,-1,924,925,719,-1,922,926,924,-1,924,923,922,-1,927,928,924,-1,924,926,927,-1,905,925,924,-1,924,928,905,-1,905,928,929,-1,929,901,905,-1,927,930,929,-1,929,928,927,-1,916,913,929,-1,929,930,916,-1,886,901,929,-1,929,913,886,-1,432,446,892,-1,892,877,432,-1,450,893,892,-1,892,446,450,-1,894,895,892,-1,892,893,894,-1,565,877,892,-1,892,895,565,-1,931,932,933,-1,933,934,931,-1,646,649,933,-1,933,932,646,-1,654,935,933,-1,933,649,654,-1,936,934,933,-1,933,935,936,-1,936,935,937,-1,937,938,936,-1,654,653,937,-1,937,935,654,-1,652,939,937,-1,937,653,652,-1,940,938,937,-1,937,939,940,-1,940,939,941,-1,941,942,940,-1,652,651,941,-1,941,939,652,-1,650,943,941,-1,941,651,650,-1,944,942,941,-1,941,943,944,-1,944,943,945,-1,945,946,944,-1,650,647,945,-1,945,943,650,-1,646,932,945,-1,945,647,646,-1,931,946,945,-1,945,932,931,-1,947,948,949,-1,949,950,947,-1,655,658,949,-1,949,948,655,-1,663,951,949,-1,949,658,663,-1,952,950,949,-1,949,951,952,-1,952,951,953,-1,953,954,952,-1,663,662,953,-1,953,951,663,-1,661,955,953,-1,953,662,661,-1,956,954,953,-1,953,955,956,-1,956,955,957,-1,957,958,956,-1,661,660,957,-1,957,955,661,-1,659,959,957,-1,957,660,659,-1,960,958,957,-1,957,959,960,-1,960,959,961,-1,961,962,960,-1,659,656,961,-1,961,959,659,-1,655,948,961,-1,961,656,655,-1,947,962,961,-1,961,948,947,-1,963,964,965,-1,965,966,963,-1,664,667,965,-1,965,964,664,-1,672,967,965,-1,965,667,672,-1,968,966,965,-1,965,967,968,-1,968,967,969,-1,969,970,968,-1,672,671,969,-1,969,967,672,-1,670,971,969,-1,969,671,670,-1,972,970,969,-1,969,971,972,-1,972,971,973,-1,973,974,972,-1,670,669,973,-1,973,971,670,-1,668,975,973,-1,973,669,668,-1,976,974,973,-1,973,975,976,-1,976,975,977,-1,977,978,976,-1,668,665,977,-1,977,975,668,-1,664,964,977,-1,977,665,664,-1,963,978,977,-1,977,964,963,-1,979,980,981,-1,981,982,979,-1,673,676,981,-1,981,980,673,-1,681,983,981,-1,981,676,681,-1,984,982,981,-1,981,983,984,-1,984,983,985,-1,985,986,984,-1,681,680,985,-1,985,983,681,-1,679,987,985,-1,985,680,679,-1,988,986,985,-1,985,987,988,-1,988,987,989,-1,989,990,988,-1,679,678,989,-1,989,987,679,-1,677,991,989,-1,989,678,677,-1,992,990,989,-1,989,991,992,-1,992,991,993,-1,993,994,992,-1,677,674,993,-1,993,991,677,-1,673,980,993,-1,993,674,673,-1,979,994,993,-1,993,980,979,-1,995,996,997,-1,997,998,995,-1,682,685,997,-1,997,996,682,-1,690,999,997,-1,997,685,690,-1,1000,998,997,-1,997,999,1000,-1,1000,999,1001,-1,1001,1002,1000,-1,690,689,1001,-1,1001,999,690,-1,688,1003,1001,-1,1001,689,688,-1,1004,1002,1001,-1,1001,1003,1004,-1,1004,1003,1005,-1,1005,1006,1004,-1,688,687,1005,-1,1005,1003,688,-1,686,1007,1005,-1,1005,687,686,-1,1008,1006,1005,-1,1005,1007,1008,-1,1008,1007,1009,-1,1009,1010,1008,-1,686,683,1009,-1,1009,1007,686,-1,682,996,1009,-1,1009,683,682,-1,995,1010,1009,-1,1009,996,995,-1,1011,1012,1013,-1,1013,1014,1011,-1,691,694,1013,-1,1013,1012,691,-1,699,1015,1013,-1,1013,694,699,-1,1016,1014,1013,-1,1013,1015,1016,-1,1016,1015,1017,-1,1017,1018,1016,-1,699,698,1017,-1,1017,1015,699,-1,697,1019,1017,-1,1017,698,697,-1,1020,1018,1017,-1,1017,1019,1020,-1,1020,1019,1021,-1,1021,1022,1020,-1,697,696,1021,-1,1021,1019,697,-1,695,1023,1021,-1,1021,696,695,-1,1024,1022,1021,-1,1021,1023,1024,-1,1024,1023,1025,-1,1025,1026,1024,-1,695,692,1025,-1,1025,1023,695,-1,691,1012,1025,-1,1025,692,691,-1,1011,1026,1025,-1,1025,1012,1011,-1,1027,1028,1029,-1,1029,1030,1027,-1,700,703,1029,-1,1029,1028,700,-1,710,1031,1029,-1,1029,703,710,-1,1032,1030,1029,-1,1029,1031,1032,-1,1032,1031,1033,-1,1033,1034,1032,-1,710,709,1033,-1,1033,1031,710,-1,706,1035,1033,-1,1033,709,706,-1,1036,1034,1033,-1,1033,1035,1036,-1,1036,1035,1037,-1,1037,1038,1036,-1,706,705,1037,-1,1037,1035,706,-1,704,1039,1037,-1,1037,705,704,-1,1040,1038,1037,-1,1037,1039,1040,-1,1040,1039,1041,-1,1041,1042,1040,-1,704,701,1041,-1,1041,1039,704,-1,700,1028,1041,-1,1041,701,700,-1,1027,1042,1041,-1,1041,1028,1027,-1,717,716,1043,-1,1043,1044,717,-1,715,1045,1043,-1,1043,716,715,-1,931,934,1043,-1,1043,1045,931,-1,936,1044,1043,-1,1043,934,936,-1,723,722,1046,-1,1046,1047,723,-1,717,1044,1046,-1,1046,722,717,-1,936,938,1046,-1,1046,1044,936,-1,940,1047,1046,-1,1046,938,940,-1,729,728,1048,-1,1048,1049,729,-1,723,1047,1048,-1,1048,728,723,-1,940,942,1048,-1,1048,1047,940,-1,944,1049,1048,-1,1048,942,944,-1,715,734,1050,-1,1050,1045,715,-1,729,1049,1050,-1,1050,734,729,-1,944,946,1050,-1,1050,1049,944,-1,931,1045,1050,-1,1050,946,931,-1,741,740,1051,-1,1051,1052,741,-1,739,1053,1051,-1,1051,740,739,-1,947,950,1051,-1,1051,1053,947,-1,952,1052,1051,-1,1051,950,952,-1,745,744,1054,-1,1054,1055,745,-1,741,1052,1054,-1,1054,744,741,-1,952,954,1054,-1,1054,1052,952,-1,956,1055,1054,-1,1054,954,956,-1,750,749,1056,-1,1056,1057,750,-1,745,1055,1056,-1,1056,749,745,-1,956,958,1056,-1,1056,1055,956,-1,960,1057,1056,-1,1056,958,960,-1,739,755,1058,-1,1058,1053,739,-1,750,1057,1058,-1,1058,755,750,-1,960,962,1058,-1,1058,1057,960,-1,947,1053,1058,-1,1058,962,947,-1,761,760,1059,-1,1059,1060,761,-1,759,1061,1059,-1,1059,760,759,-1,963,966,1059,-1,1059,1061,963,-1,968,1060,1059,-1,1059,966,968,-1,767,766,1062,-1,1062,1063,767,-1,761,1060,1062,-1,1062,766,761,-1,968,970,1062,-1,1062,1060,968,-1,972,1063,1062,-1,1062,970,972,-1,773,772,1064,-1,1064,1065,773,-1,767,1063,1064,-1,1064,772,767,-1,972,974,1064,-1,1064,1063,972,-1,976,1065,1064,-1,1064,974,976,-1,759,776,1066,-1,1066,1061,759,-1,773,1065,1066,-1,1066,776,773,-1,976,978,1066,-1,1066,1065,976,-1,963,1061,1066,-1,1066,978,963,-1,782,781,1067,-1,1067,1068,782,-1,780,1069,1067,-1,1067,781,780,-1,979,982,1067,-1,1067,1069,979,-1,984,1068,1067,-1,1067,982,984,-1,788,787,1070,-1,1070,1071,788,-1,782,1068,1070,-1,1070,787,782,-1,984,986,1070,-1,1070,1068,984,-1,988,1071,1070,-1,1070,986,988,-1,795,794,1072,-1,1072,1073,795,-1,788,1071,1072,-1,1072,794,788,-1,988,990,1072,-1,1072,1071,988,-1,992,1073,1072,-1,1072,990,992,-1,780,798,1074,-1,1074,1069,780,-1,795,1073,1074,-1,1074,798,795,-1,992,994,1074,-1,1074,1073,992,-1,979,1069,1074,-1,1074,994,979,-1,804,803,1075,-1,1075,1076,804,-1,802,1077,1075,-1,1075,803,802,-1,995,998,1075,-1,1075,1077,995,-1,1000,1076,1075,-1,1075,998,1000,-1,810,809,1078,-1,1078,1079,810,-1,804,1076,1078,-1,1078,809,804,-1,1000,1002,1078,-1,1078,1076,1000,-1,1004,1079,1078,-1,1078,1002,1004,-1,816,815,1080,-1,1080,1081,816,-1,810,1079,1080,-1,1080,815,810,-1,1004,1006,1080,-1,1080,1079,1004,-1,1008,1081,1080,-1,1080,1006,1008,-1,802,819,1082,-1,1082,1077,802,-1,816,1081,1082,-1,1082,819,816,-1,1008,1010,1082,-1,1082,1081,1008,-1,995,1077,1082,-1,1082,1010,995,-1,879,876,1083,-1,1083,1084,879,-1,873,1085,1083,-1,1083,876,873,-1,1011,1014,1083,-1,1083,1085,1011,-1,1016,1084,1083,-1,1083,1014,1016,-1,903,902,1086,-1,1086,1087,903,-1,879,1084,1086,-1,1086,902,879,-1,1016,1018,1086,-1,1086,1084,1016,-1,1020,1087,1086,-1,1086,1018,1020,-1,909,908,1088,-1,1088,1089,909,-1,903,1087,1088,-1,1088,908,903,-1,1020,1022,1088,-1,1088,1087,1020,-1,1024,1089,1088,-1,1088,1022,1024,-1,873,912,1090,-1,1090,1085,873,-1,909,1089,1090,-1,1090,912,909,-1,1024,1026,1090,-1,1090,1089,1024,-1,1011,1085,1090,-1,1090,1026,1011,-1,918,917,1091,-1,1091,1092,918,-1,916,1093,1091,-1,1091,917,916,-1,1027,1030,1091,-1,1091,1093,1027,-1,1032,1092,1091,-1,1091,1030,1032,-1,922,921,1094,-1,1094,1095,922,-1,918,1092,1094,-1,1094,921,918,-1,1032,1034,1094,-1,1094,1092,1032,-1,1036,1095,1094,-1,1094,1034,1036,-1,927,926,1096,-1,1096,1097,927,-1,922,1095,1096,-1,1096,926,922,-1,1036,1038,1096,-1,1096,1095,1036,-1,1040,1097,1096,-1,1096,1038,1040,-1,916,930,1098,-1,1098,1093,916,-1,927,1097,1098,-1,1098,930,927,-1,1040,1042,1098,-1,1098,1097,1040,-1,1027,1093,1098,-1,1098,1042,1027,-1,894,893,896,-1,896,897,894,-1,450,456,896,-1,896,893,450,-1,455,898,896,-1,896,456,455,-1,899,897,896,-1,896,898,899,-1]
TextureCoordinate101 = x3d.TextureCoordinate(DEF="Lower_teeth-TEXCOORD_JinBlink")
TextureCoordinate101.point = [(0.8538, 0.2675),(0.8565, 0.2503),(0.8695, 0.2562),(0.8668, 0.2734),(0.8588, 0.2367),(0.8717, 0.2426),(0.8844, 0.2483),(0.8823, 0.262),(0.8795, 0.2792),(0.8612, 0.228),(0.861, 0.2289),(0.8725, 0.2388),(0.8732, 0.2346),(0.8609, 0.2296),(0.8708, 0.2419),(0.8804, 0.2515),(0.8838, 0.2475),(0.8849, 0.2408),(0.8946, 0.2676),(0.8919, 0.2848),(0.8968, 0.254),(0.9087, 0.2594),(0.9065, 0.273),(0.9038, 0.2902),(0.8949, 0.2538),(0.8961, 0.2462),(0.891, 0.2586),(0.9, 0.2623),(0.9058, 0.2587),(0.907, 0.2511),(0.9179, 0.2782),(0.9152, 0.2954),(0.9201, 0.2645),(0.9312, 0.2696),(0.9291, 0.2832),(0.9264, 0.3004),(0.9164, 0.2635),(0.9176, 0.2559),(0.9106, 0.2675),(0.9189, 0.2709),(0.9269, 0.2683),(0.9281, 0.2607),(0.9402, 0.2883),(0.9375, 0.3055),(0.9423, 0.2746),(0.9521, 0.2791),(0.95, 0.2928),(0.9473, 0.3099),(0.9377, 0.2732),(0.8588, 0.145),(0.8655, 0.1406),(0.8654, 0.1406),(0.8563, 0.1466),(0.8722, 0.1362),(0.8746, 0.1346),(0.8723, 0.1362),(0.8654, 0.1407),(0.8585, 0.1452),(0.9628, 0.0768),(0.9627, 0.07687),(0.9643, 0.07584),(0.9639, 0.0761),(0.9633, 0.07644),(0.9646, 0.07558),(0.9658, 0.07486),(0.9658, 0.07481),(0.9651, 0.07527),(0.9636, 0.07627),(0.9625, 0.077),(0.961, 0.07797),(0.963, 0.07668),(0.9607, 0.0782),(0.9591, 0.07925),(0.9585, 0.07964),(0.9595, 0.07893),(0.9614, 0.07775),(0.9566, 0.08085),(0.9537, 0.08276),(0.9524, 0.08361),(0.9567, 0.08081),(0.9502, 0.08508),(0.9481, 0.08642),(0.9483, 0.08632),(0.9511, 0.08447),(0.9546, 0.0822),(0.9423, 0.09027),(0.9364, 0.0941),(0.939, 0.2656),(0.9302, 0.2764),(0.9351, 0.09494),(0.9434, 0.08949),(0.9299, 0.09835),(0.9268, 0.1004),(0.928, 0.09963),(0.9339, 0.09577),(0.9404, 0.0915),(0.9197, 0.1051),(0.9139, 0.1089),(0.9127, 0.1096),(0.9208, 0.1043),(0.9076, 0.113),(0.9047, 0.1149),(0.906, 0.1141),(0.9116, 0.1104),(0.9178, 0.1063),(0.8968, 0.1201),(0.8904, 0.1243),(0.8898, 0.1247),(0.8985, 0.119),(0.8837, 0.1287),(0.8812, 0.1303),(0.8831, 0.1291),(0.8892, 0.125),(0.8957, 0.1208),(0.8485, 0.1053),(0.8608, 0.09748),(0.8609, 0.09813),(0.8517, 0.1042),(0.8729, 0.08952),(0.87, 0.09212),(0.8707, 0.098),(0.8615, 0.104),(0.8523, 0.11),(0.8733, 0.08954),(0.8733, 0.08999),(0.8734, 0.08866),(0.8703, 0.09196),(0.8709, 0.09783),(0.8739, 0.09587),(0.8605, 0.09651),(0.8607, 0.09825),(0.8476, 0.1047),(0.8512, 0.1045),(0.8518, 0.1104),(0.8613, 0.1041),(0.8482, 0.1055),(0.8483, 0.1064),(0.8489, 0.1122),(0.9565, 0.03469),(0.9569, 0.03447),(0.9571, 0.03505),(0.9573, 0.03487),(0.9576, 0.03398),(0.9581, 0.0344),(0.9588, 0.04024),(0.9372, 0.2791),(0.9473, 0.2775),(0.9485, 0.27),(0.9574, 0.2961),(0.9547, 0.3133),(0.9595, 0.2824),(0.9647, 0.2848),(0.9626, 0.2985),(0.9599, 0.3157),(0.9541, 0.2806),(0.9554, 0.2731),(0.9452, 0.2832),(0.9475, 0.2838),(0.9588, 0.2828),(0.9601, 0.2752),(0.9662, 0.3001),(0.9635, 0.3173),(0.9682, 0.2864),(0.9704, 0.2874),(0.9684, 0.3011),(0.9657, 0.3183),(0.9621, 0.2842),(0.9633, 0.2767),(0.9525, 0.2865),(0.9522, 0.286),(0.9641, 0.2852),(0.9654, 0.2776),(0.9695, 0.3016),(0.9668, 0.3188),(0.9716, 0.2879),(0.9719, 0.2881),(0.9698, 0.3017),(0.9671, 0.3189),(0.9651, 0.2856),(0.9663, 0.2781),(0.9553, 0.2877),(0.9533, 0.2865),(0.9653, 0.2857),(0.9666, 0.2782),(0.8735, 0.2332),(0.8615, 0.2278),(0.8853, 0.2386),(0.8855, 0.2385),(0.8737, 0.2331),(0.8617, 0.2279),(0.8966, 0.2437),(0.9074, 0.2486),(0.9077, 0.2486),(0.8966, 0.2436),(0.918, 0.2534),(0.9286, 0.2582),(0.9578, 0.04088),(0.958, 0.04071),(0.9601, 0.03258),(0.9601, 0.03303),(0.9623, 0.03036),(0.962, 0.03185),(0.9626, 0.03775),(0.9608, 0.0389),(0.9621, 0.02986),(0.9621, 0.03172),(0.961, 0.03123),(0.9611, 0.03243),(0.9617, 0.03833),(0.9627, 0.03763),(0.959, 0.03329),(0.9591, 0.03374),(0.9597, 0.03961),(0.9587, 0.03209),(0.9588, 0.03395),(0.9602, 0.03299),(0.9553, 0.03494),(0.9561, 0.03568),(0.9567, 0.04158),(0.9593, 0.03985),(0.9608, 0.03889),(0.9536, 0.03683),(0.9537, 0.03728),(0.9511, 0.03821),(0.9526, 0.03799),(0.9533, 0.04383),(0.9543, 0.04315),(0.9538, 0.03649),(0.954, 0.03708),(0.9566, 0.03538),(0.9572, 0.04122),(0.9547, 0.04291),(0.9591, 0.03374),(0.9597, 0.03962),(0.9498, 0.03795),(0.9498, 0.0398),(0.9539, 0.03715),(0.9428, 0.04312),(0.9448, 0.04312),(0.9454, 0.049),(0.9504, 0.04569),(0.9545, 0.04305),(0.9418, 0.04459),(0.9418, 0.04503),(0.9394, 0.04587),(0.9419, 0.04501),(0.9426, 0.05085),(0.9425, 0.05089),(0.9455, 0.04192),(0.9457, 0.04253),(0.9505, 0.03936),(0.9512, 0.04521),(0.9464, 0.04837),(0.9537, 0.03729),(0.9543, 0.04317),(0.9323, 0.04942),(0.9324, 0.05124),(0.9404, 0.04599),(0.9208, 0.05759),(0.9234, 0.05711),(0.9241, 0.06299),(0.933, 0.05713),(0.9288, 0.2582),(0.9181, 0.2533),(0.941, 0.05188),(0.9191, 0.05948),(0.9191, 0.05992),(0.9174, 0.06032),(0.9205, 0.05901),(0.9212, 0.06486),(0.9198, 0.06578),(0.9285, 0.05309),(0.9286, 0.05372),(0.9376, 0.04782),(0.9383, 0.05368),(0.9293, 0.05958),(0.9418, 0.04505),(0.9425, 0.05092),(0.9096, 0.06429),(0.9097, 0.06609),(0.9178, 0.06084),(0.898, 0.07251),(0.9009, 0.07189),(0.9015, 0.07775),(0.9104, 0.07197),(0.9184, 0.06672),(0.897, 0.07396),(0.8971, 0.0744),(0.8957, 0.07454),(0.8988, 0.07329),(0.8994, 0.07915),(0.8977, 0.08026),(0.9395, 0.2632),(0.9491, 0.2676),(0.9503, 0.268),(0.9396, 0.2631),(0.956, 0.2707),(0.9607, 0.2728),(0.9617, 0.2731),(0.9562, 0.2706),(0.964, 0.2743),(0.966, 0.2752),(0.9669, 0.2755),(0.9643, 0.2743),(0.967, 0.2757),(0.9672, 0.2758),(0.968, 0.276),(0.9673, 0.2757),(0.9723, 0.2813),(0.9726, 0.2814),(0.9712, 0.2808),(0.9713, 0.2778),(0.9724, 0.2788),(0.9726, 0.2784),(0.969, 0.2798),(0.9655, 0.2782),(0.9658, 0.2753),(0.9691, 0.2773),(0.9603, 0.2758),(0.953, 0.2725),(0.9536, 0.2698),(0.9604, 0.2733),(0.9431, 0.268),(0.9321, 0.263),(0.9321, 0.2601),(0.9433, 0.2656),(0.921, 0.258),(0.9096, 0.2528),(0.91, 0.25),(0.9064, 0.06758),(0.9065, 0.06824),(0.915, 0.06265),(0.9156, 0.06852),(0.9071, 0.0741),(0.9191, 0.05993),(0.9198, 0.06581),(0.8858, 0.07988),(0.886, 0.08166),(0.8949, 0.07579),(0.8766, 0.0878),(0.8773, 0.09366),(0.8866, 0.08753),(0.8956, 0.08167),(0.8733, 0.08998),(0.8759, 0.08826),(0.8766, 0.09412),(0.874, 0.09584),(0.8843, 0.08206),(0.8844, 0.08273),(0.8932, 0.07693),(0.8938, 0.08281),(0.885, 0.0886),(0.897, 0.07442),(0.8977, 0.0803),(0.8558, 0.1414),(0.865, 0.1354),(0.8655, 0.1406),(0.8565, 0.1465),(0.8741, 0.1294),(0.8745, 0.1347),(0.8773, 0.1273),(0.8777, 0.1326),(0.8743, 0.1293),(0.8748, 0.1345),(0.9212, 0.2555),(0.8648, 0.1355),(0.8653, 0.1407),(0.8553, 0.1417),(0.856, 0.1469),(0.8524, 0.1436),(0.8531, 0.1487),(0.9616, 0.07203),(0.9614, 0.07218),(0.9621, 0.07728),(0.9622, 0.07716),(0.9623, 0.07156),(0.963, 0.07669),(0.9642, 0.0703),(0.9648, 0.0755),(0.9659, 0.06921),(0.9663, 0.07448),(0.966, 0.06912),(0.9665, 0.0744),(0.965, 0.06979),(0.9655, 0.07505),(0.9632, 0.071),(0.9637, 0.07619),(0.9641, 0.07036),(0.9626, 0.07134),(0.9631, 0.07662),(0.9646, 0.07564),(0.9601, 0.07303),(0.9606, 0.07827),(0.9578, 0.07453),(0.9584, 0.0797),(0.9568, 0.07515),(0.9575, 0.08026),(0.9583, 0.07421),(0.959, 0.07932),(0.9608, 0.07255),(0.9614, 0.0777),(0.9631, 0.07102),(0.9637, 0.07623),(0.9578, 0.07453),(0.9538, 0.07716),(0.9542, 0.08242),(0.9582, 0.07982),(0.9488, 0.08042),(0.9493, 0.08562),(0.946, 0.08225),(0.9466, 0.0874),(0.9461, 0.08217),(0.9468, 0.08728),(0.9499, 0.07968),(0.9506, 0.08481),(0.9547, 0.07656),(0.9553, 0.08173),(0.9577, 0.07459),(0.9582, 0.07983),(0.9444, 0.08332),(0.9364, 0.08856),(0.8978, 0.2474),(0.8855, 0.2418),(0.886, 0.2391),(0.8981, 0.245),(0.8729, 0.2361),(0.8601, 0.2303),(0.8608, 0.2283),(0.8734, 0.2338),(0.8678, 0.2399),(0.8732, 0.2455),(0.8624, 0.2325),(0.8665, 0.2349),(0.8823, 0.2528),(0.8859, 0.2529),(0.8966, 0.2592),(0.8982, 0.2585),(0.9109, 0.2657),(0.91, 0.2638),(0.9218, 0.2707),(0.9168, 0.2669),(0.9271, 0.2731),(0.9199, 0.2683),(0.9291, 0.274),(0.9206, 0.2686),(0.8607, 0.2295),(0.8606, 0.2296),(0.8609, 0.2293),(0.8616, 0.2252),(0.8614, 0.2253),(0.8613, 0.2253),(0.8633, 0.2144),(0.8631, 0.2144),(0.8655, 0.2002),(0.8653, 0.2001),(0.8653, 0.2001),(0.863, 0.2144),(0.9369, 0.09379),(0.9448, 0.0886),(0.9275, 0.09438),(0.9281, 0.09955),(0.9233, 0.09714),(0.924, 0.1023),(0.9247, 0.0962),(0.9254, 0.1013),(0.9328, 0.09093),(0.9334, 0.09609),(0.9417, 0.08506),(0.9422, 0.09028),(0.9459, 0.08234),(0.9463, 0.08761),(0.9217, 0.09816),(0.9138, 0.1034),(0.9143, 0.1086),(0.9222, 0.1034),(0.905, 0.1091),(0.9057, 0.1143),(0.9012, 0.1116),(0.9019, 0.1167),(0.9029, 0.1105),(0.9036, 0.1156),(0.9106, 0.1055),(0.9112, 0.1107),(0.919, 0.09993),(0.9195, 0.1052),(0.9231, 0.09725),(0.9236, 0.1025),(0.899, 0.1131),(0.8901, 0.1189),(0.8906, 0.1241),(0.8994, 0.1184),(0.8808, 0.125),(0.8538, 0.2675),(0.8814, 0.1302),(0.8775, 0.1272),(0.8782, 0.1323),(0.8801, 0.1255),(0.8807, 0.1306),(0.8885, 0.12),(0.889, 0.1252),(0.8972, 0.1142),(0.8977, 0.1195),(0.901, 0.1117),(0.9015, 0.117),(0.8724, 0.1138),(0.8633, 0.1198),(0.8541, 0.1258),(0.8726, 0.1136),(0.8756, 0.1117),(0.8535, 0.1262),(0.8631, 0.1199),(0.8507, 0.128),(0.9605, 0.05602),(0.9596, 0.05665),(0.9598, 0.05649),(0.9642, 0.05358),(0.9625, 0.05471),(0.9634, 0.05417),(0.9644, 0.05348),(0.9614, 0.05542),(0.9584, 0.05741),(0.961, 0.0557),(0.9625, 0.05473),(0.9551, 0.05961),(0.9561, 0.05895),(0.959, 0.05701),(0.9565, 0.05868),(0.9614, 0.05543),(0.9471, 0.06482),(0.9521, 0.06153),(0.9561, 0.05889),(0.9443, 0.06663),(0.9442, 0.06669),(0.9529, 0.061),(0.9481, 0.06414),(0.956, 0.05898),(0.9258, 0.0788),(0.9347, 0.07295),(0.9427, 0.0677),(0.923, 0.08066),(0.9215, 0.08158),(0.94, 0.06948),(0.931, 0.07537),(0.9442, 0.06673),(0.9033, 0.09355),(0.9121, 0.08778),(0.9201, 0.08254),(0.9012, 0.09495),(0.8995, 0.09606),(0.8668, 0.2734),(0.8695, 0.2562),(0.8565, 0.2503),(0.8795, 0.2792),(0.8823, 0.262),(0.8844, 0.2483),(0.8717, 0.2426),(0.8588, 0.2367),(0.8612, 0.228),(0.8732, 0.2346),(0.8725, 0.2388),(0.861, 0.2289),(0.8849, 0.2408),(0.8838, 0.2475),(0.8804, 0.2515),(0.8708, 0.2419),(0.8609, 0.2296),(0.8919, 0.2848),(0.8946, 0.2676),(0.9038, 0.2902),(0.9065, 0.273),(0.9087, 0.2594),(0.8968, 0.254),(0.8961, 0.2462),(0.8949, 0.2538),(0.907, 0.2511),(0.9058, 0.2587),(0.9, 0.2623),(0.891, 0.2586),(0.9152, 0.2954),(0.9179, 0.2782),(0.9264, 0.3004),(0.9291, 0.2832),(0.9312, 0.2696),(0.9201, 0.2645),(0.9176, 0.2559),(0.9164, 0.2635),(0.9281, 0.2607),(0.9269, 0.2683),(0.9189, 0.2709),(0.9106, 0.2675),(0.9375, 0.3055),(0.9402, 0.2883),(0.9473, 0.3099),(0.95, 0.2928),(0.9521, 0.2791),(0.9423, 0.2746),(0.939, 0.2656),(0.9377, 0.2732),(0.9174, 0.08433),(0.9485, 0.27),(0.9089, 0.0899),(0.9473, 0.2775),(0.9215, 0.08163),(0.9372, 0.2791),(0.879, 0.1095),(0.9302, 0.2764),(0.8884, 0.1033),(0.9547, 0.3133),(0.9574, 0.2961),(0.8973, 0.09749),(0.9599, 0.3157),(0.9626, 0.2985),(0.9647, 0.2848),(0.9595, 0.2824),(0.9554, 0.2731),(0.9541, 0.2806),(0.8783, 0.1099),(0.9601, 0.2752),(0.9588, 0.2828),(0.9475, 0.2838),(0.9452, 0.2832),(0.9635, 0.3173),(0.9662, 0.3001),(0.9657, 0.3183),(0.9684, 0.3011),(0.9704, 0.2874),(0.9682, 0.2864),(0.9633, 0.2767),(0.9621, 0.2842),(0.9654, 0.2776),(0.9641, 0.2852),(0.9522, 0.286),(0.9525, 0.2865),(0.9668, 0.3188),(0.9695, 0.3016),(0.9716, 0.2879),(0.9663, 0.2781),(0.9651, 0.2856),(0.9553, 0.2877),(0.8615, 0.2278),(0.8735, 0.2332),(0.8617, 0.2279),(0.8757, 0.1116),(0.8956, 0.09862),(0.8867, 0.1044),(0.8994, 0.09611),(0.8588, 0.145),(0.8563, 0.1466),(0.8654, 0.1406),(0.8655, 0.1406),(0.8585, 0.1452),(0.8654, 0.1407),(0.8723, 0.1362),(0.8746, 0.1346),(0.8722, 0.1362),(0.9628, 0.0768),(0.9639, 0.0761),(0.9643, 0.07584),(0.9627, 0.07687),(0.9651, 0.07527),(0.9658, 0.07481),(0.9658, 0.07486),(0.9646, 0.07558),(0.9633, 0.07644),(0.9636, 0.07627),(0.963, 0.07668),(0.961, 0.07797),(0.9625, 0.077),(0.9614, 0.07775),(0.9595, 0.07893),(0.9585, 0.07964),(0.9591, 0.07925),(0.9607, 0.0782),(0.9566, 0.08085),(0.9567, 0.08081),(0.9524, 0.08361),(0.9537, 0.08276),(0.9546, 0.0822),(0.9511, 0.08447),(0.9483, 0.08632),(0.9481, 0.08642),(0.9502, 0.08508),(0.9423, 0.09027),(0.9434, 0.08949),(0.9351, 0.09494),(0.9364, 0.0941),(0.9404, 0.0915),(0.9339, 0.09577),(0.928, 0.09963),(0.9268, 0.1004),(0.9299, 0.09835),(0.9197, 0.1051),(0.9208, 0.1043),(0.9127, 0.1096),(0.9139, 0.1089),(0.9178, 0.1063),(0.9116, 0.1104),(0.906, 0.1141),(0.9047, 0.1149),(0.9076, 0.113),(0.8968, 0.1201),(0.8985, 0.119),(0.8898, 0.1247),(0.8904, 0.1243),(0.8957, 0.1208),(0.8892, 0.125),(0.8831, 0.1291),(0.8737, 0.2331),(0.8855, 0.2385),(0.8812, 0.1303),(0.8837, 0.1287),(0.8485, 0.1053),(0.8517, 0.1042),(0.8609, 0.09813),(0.8608, 0.09748),(0.8523, 0.11),(0.8615, 0.104),(0.8707, 0.098),(0.87, 0.09212),(0.8729, 0.08952),(0.8733, 0.08999),(0.8733, 0.08954),(0.8739, 0.09587),(0.8709, 0.09783),(0.8703, 0.09196),(0.8734, 0.08866),(0.8607, 0.09825),(0.8605, 0.09651),(0.8613, 0.1041),(0.8518, 0.1104),(0.8512, 0.1045),(0.8476, 0.1047),(0.8483, 0.1064),(0.8482, 0.1055),(0.8489, 0.1122),(0.9565, 0.03469),(0.9573, 0.03487),(0.9571, 0.03505),(0.9569, 0.03447),(0.958, 0.04071),(0.9578, 0.04088),(0.9588, 0.04024),(0.9581, 0.0344),(0.9601, 0.03303),(0.9608, 0.0389),(0.9626, 0.03775),(0.962, 0.03185),(0.9621, 0.03172),(0.9621, 0.02986),(0.9627, 0.03763),(0.9617, 0.03833),(0.9611, 0.03243),(0.961, 0.03123),(0.9591, 0.03374),(0.959, 0.03329),(0.9597, 0.03961),(0.9602, 0.03299),(0.9588, 0.03395),(0.9587, 0.03209),(0.9608, 0.03889),(0.9593, 0.03985),(0.9567, 0.04158),(0.9561, 0.03568),(0.9553, 0.03494),(0.9537, 0.03728),(0.9536, 0.03683),(0.9543, 0.04315),(0.9533, 0.04383),(0.9526, 0.03799),(0.9511, 0.03821),(0.954, 0.03708),(0.9538, 0.03649),(0.9547, 0.04291),(0.9572, 0.04122),(0.9566, 0.03538),(0.9591, 0.03374),(0.9597, 0.03962),(0.9539, 0.03715),(0.9498, 0.0398),(0.9498, 0.03795),(0.9545, 0.04305),(0.9504, 0.04569),(0.9454, 0.049),(0.9448, 0.04312),(0.9428, 0.04312),(0.9418, 0.04503),(0.9418, 0.04459),(0.9425, 0.05089),(0.9426, 0.05085),(0.9419, 0.04501),(0.9394, 0.04587),(0.9457, 0.04253),(0.9455, 0.04192),(0.8853, 0.2386),(0.9464, 0.04837),(0.9512, 0.04521),(0.9505, 0.03936),(0.9537, 0.03729),(0.9543, 0.04317),(0.9404, 0.04599),(0.9324, 0.05124),(0.9323, 0.04942),(0.941, 0.05188),(0.933, 0.05713),(0.9241, 0.06299),(0.9234, 0.05711),(0.9208, 0.05759),(0.9191, 0.05992),(0.9191, 0.05948),(0.9198, 0.06578),(0.9212, 0.06486),(0.9205, 0.05901),(0.9174, 0.06032),(0.9286, 0.05372),(0.9285, 0.05309),(0.9293, 0.05958),(0.9383, 0.05368),(0.9376, 0.04782),(0.9418, 0.04505),(0.9425, 0.05092),(0.9178, 0.06084),(0.9097, 0.06609),(0.8966, 0.2437),(0.8966, 0.2436),(0.9077, 0.2486),(0.9074, 0.2486),(0.918, 0.2534),(0.9181, 0.2533),(0.9288, 0.2582),(0.9286, 0.2582),(0.9395, 0.2632),(0.9396, 0.2631),(0.9503, 0.268),(0.9491, 0.2676),(0.956, 0.2707),(0.9562, 0.2706),(0.9617, 0.2731),(0.9607, 0.2728),(0.964, 0.2743),(0.9643, 0.2743),(0.9669, 0.2755),(0.966, 0.2752),(0.967, 0.2757),(0.9673, 0.2757),(0.9723, 0.2813),(0.9724, 0.2788),(0.9713, 0.2778),(0.9712, 0.2808),(0.969, 0.2798),(0.9691, 0.2773),(0.9658, 0.2753),(0.9655, 0.2782),(0.9603, 0.2758),(0.9604, 0.2733),(0.9536, 0.2698),(0.953, 0.2725),(0.9431, 0.268),(0.9433, 0.2656),(0.9321, 0.2601),(0.9321, 0.263),(0.921, 0.258),(0.9212, 0.2555),(0.91, 0.25),(0.9096, 0.2528),(0.8978, 0.2474),(0.8981, 0.245),(0.886, 0.2391),(0.8855, 0.2418),(0.8729, 0.2361),(0.8734, 0.2338),(0.9096, 0.06429),(0.8608, 0.2283),(0.8601, 0.2303),(0.9184, 0.06672),(0.8732, 0.2455),(0.8678, 0.2399),(0.9104, 0.07197),(0.8624, 0.2325),(0.8859, 0.2529),(0.9015, 0.07775),(0.8823, 0.2528),(0.8982, 0.2585),(0.9009, 0.07189),(0.8966, 0.2592),(0.91, 0.2638),(0.9109, 0.2657),(0.898, 0.07251),(0.9168, 0.2669),(0.9218, 0.2707),(0.9199, 0.2683),(0.9271, 0.2731),(0.9291, 0.274),(0.8607, 0.2295),(0.8614, 0.2253),(0.8616, 0.2252),(0.8609, 0.2293),(0.8631, 0.2144),(0.8633, 0.2144),(0.8653, 0.2001),(0.8655, 0.2002),(0.8971, 0.0744),(0.897, 0.07396),(0.8977, 0.08026),(0.8994, 0.07915),(0.8988, 0.07329),(0.8957, 0.07454),(0.9065, 0.06824),(0.9064, 0.06758),(0.9071, 0.0741),(0.9156, 0.06852),(0.915, 0.06265),(0.9191, 0.05993),(0.9198, 0.06581),(0.8949, 0.07579),(0.886, 0.08166),(0.8858, 0.07988),(0.8956, 0.08167),(0.8866, 0.08753),(0.8773, 0.09366),(0.8766, 0.0878),(0.8733, 0.08998),(0.874, 0.09584),(0.8766, 0.09412),(0.8759, 0.08826),(0.8844, 0.08273),(0.8843, 0.08206),(0.885, 0.0886),(0.8938, 0.08281),(0.8932, 0.07693),(0.897, 0.07442),(0.8977, 0.0803),(0.8558, 0.1414),(0.8565, 0.1465),(0.8655, 0.1406),(0.865, 0.1354),(0.8745, 0.1347),(0.8741, 0.1294),(0.8777, 0.1326),(0.8773, 0.1273),(0.8748, 0.1345),(0.8743, 0.1293),(0.8653, 0.1407),(0.8648, 0.1355),(0.856, 0.1469),(0.8553, 0.1417),(0.8531, 0.1487),(0.8524, 0.1436),(0.9616, 0.07203),(0.9622, 0.07716),(0.9621, 0.07728),(0.9614, 0.07218),(0.963, 0.07669),(0.9623, 0.07156),(0.9648, 0.0755),(0.9642, 0.0703),(0.9663, 0.07448),(0.9659, 0.06921),(0.9665, 0.0744),(0.966, 0.06912),(0.9655, 0.07505),(0.965, 0.06979),(0.9637, 0.07619),(0.9632, 0.071),(0.9641, 0.07036),(0.9646, 0.07564),(0.9631, 0.07662),(0.9626, 0.07134),(0.9606, 0.07827),(0.9601, 0.07303),(0.9584, 0.0797),(0.9578, 0.07453),(0.9575, 0.08026),(0.9568, 0.07515),(0.959, 0.07932),(0.9583, 0.07421),(0.9614, 0.0777),(0.9608, 0.07255),(0.9637, 0.07623),(0.9631, 0.07102),(0.9578, 0.07453),(0.9582, 0.07982),(0.9542, 0.08242),(0.9538, 0.07716),(0.9493, 0.08562),(0.9488, 0.08042),(0.9466, 0.0874),(0.946, 0.08225),(0.9468, 0.08728),(0.9461, 0.08217),(0.9506, 0.08481),(0.9499, 0.07968),(0.9553, 0.08173),(0.9547, 0.07656),(0.9582, 0.07983),(0.9577, 0.07459),(0.9444, 0.08332),(0.9448, 0.0886),(0.9369, 0.09379),(0.9364, 0.08856),(0.9281, 0.09955),(0.9275, 0.09438),(0.924, 0.1023),(0.9233, 0.09714),(0.9254, 0.1013),(0.9247, 0.0962),(0.9334, 0.09609),(0.9328, 0.09093),(0.9422, 0.09028),(0.9417, 0.08506),(0.9463, 0.08761),(0.9459, 0.08234),(0.9217, 0.09816),(0.9222, 0.1034),(0.9143, 0.1086),(0.9138, 0.1034),(0.9057, 0.1143),(0.905, 0.1091),(0.9019, 0.1167),(0.9012, 0.1116),(0.9036, 0.1156),(0.9029, 0.1105),(0.9112, 0.1107),(0.9106, 0.1055),(0.9195, 0.1052),(0.919, 0.09993),(0.9236, 0.1025),(0.9231, 0.09725),(0.899, 0.1131),(0.8994, 0.1184),(0.8906, 0.1241),(0.8901, 0.1189),(0.8814, 0.1302),(0.8808, 0.125),(0.8782, 0.1323),(0.8775, 0.1272),(0.8807, 0.1306),(0.8801, 0.1255),(0.889, 0.1252),(0.8885, 0.12),(0.8977, 0.1195),(0.8972, 0.1142),(0.9015, 0.117),(0.901, 0.1117),(0.8633, 0.1198),(0.8724, 0.1138),(0.8541, 0.1258),(0.8756, 0.1117),(0.8726, 0.1136),(0.8631, 0.1199),(0.8535, 0.1262),(0.8507, 0.128),(0.9596, 0.05665),(0.9605, 0.05602),(0.9598, 0.05649),(0.9625, 0.05471),(0.9642, 0.05358),(0.9644, 0.05348),(0.9634, 0.05417),(0.9614, 0.05542),(0.961, 0.0557),(0.9584, 0.05741),(0.9625, 0.05473),(0.9561, 0.05895),(0.9551, 0.05961),(0.9565, 0.05868),(0.959, 0.05701),(0.9614, 0.05543),(0.9521, 0.06153),(0.9471, 0.06482),(0.9561, 0.05889),(0.9442, 0.06669),(0.9443, 0.06663),(0.9481, 0.06414),(0.9529, 0.061),(0.956, 0.05898),(0.9347, 0.07295),(0.9258, 0.0788),(0.9427, 0.0677),(0.9215, 0.08158),(0.923, 0.08066),(0.931, 0.07537),(0.94, 0.06948),(0.9442, 0.06673),(0.9121, 0.08778),(0.9033, 0.09356),(0.9201, 0.08254),(0.8995, 0.09606),(0.9012, 0.09495),(0.9089, 0.0899),(0.9174, 0.08433),(0.9215, 0.08163),(0.8884, 0.1033),(0.879, 0.1095),(0.8973, 0.09749),(0.8757, 0.1116),(0.8783, 0.1099),(0.8867, 0.1044),(0.8956, 0.09862),(0.8994, 0.09611)]

IndexedFaceSet100.texCoord = TextureCoordinate101
Coordinate102 = x3d.Coordinate(DEF="Lower_teeth_COORD_JinBlink")
Coordinate102.point = [(2.49, -0.346, -1.665),(2.488, 0.1468, -1.593),(1.904, 0.2897, -1.545),(2.499, -0.444, -0.9669),(2.786, 0.06917, -0.9244),(2.157, 0.2012, -0.9269),(2.398, -0.5365, -0.3089),(2.674, -0.03385, -0.1909),(2.131, 0.1021, -0.2568),(2.124, -0.6222, 0.3018),(2.368, -0.1295, 0.4901),(2.006, 0.01241, 0.3815),(1.712, -0.7021, 0.7777),(1.909, -0.2185, 1.124),(1.713, -0.0744, 0.9995),(1.197, -0.75, 1.101),(1.335, -0.2719, 1.504),(1.253, -0.1234, 1.348),(0.6088, -0.7719, 1.344),(0.679, -0.2963, 1.678),(0.6546, -0.1459, 1.508),(0, -0.3025, 1.722),(0, -0.151, 1.545),(1.901, 0.2634, -1.551),(1.93, 0.0002013, -1.034),(1.906, -0.1155, -0.4374),(1.794, -0.1957, 0.1341),(1.533, -0.2733, 0.6859),(1.121, -0.3171, 0.9981),(0.5859, -0.3372, 1.141),(0, -0.3419, 1.174),(2.405, 0.2839, -1.554),(1.988, 0.293, -1.533),(2.213, 0.2428, -0.9146),(2.185, 0.1482, -0.2411),(2.054, 0.05845, 0.3977),(1.749, -0.03285, 1.048),(1.275, -0.08119, 1.392),(0.6617, -0.1034, 1.55),(0.6764, -0.1281, 1.683),(1.33, -0.1046, 1.516),(1.895, -0.05298, 1.148),(2.345, 0.03838, 0.4979),(2.642, 0.1326, -0.1729),(2.743, 0.2346, -0.899),(0, 0.2369, -1.479),(2.23, 0.7878, -1.476),(2.257, 0.7123, -0.9376),(2.702, 0.7112, -0.9303),(2.682, 0.79, -1.491),(0.5807, 0.3499, 1.642),(0.08538, 0.3469, 1.663),(0.08698, 0.3321, 1.769),(0.5887, 0.3357, 1.743),(0.7603, 0.3393, 1.717),(1.244, 0.3562, 1.597),(1.21, 0.3696, 1.502),(0.7458, 0.3532, 1.619),(1.402, 0.3657, 1.53),(1.811, 0.4028, 1.265),(1.714, 0.4139, 1.186),(1.351, 0.3785, 1.438),(1.943, 0.4212, 1.134),(2.266, 0.491, 0.6374),(2.054, 0.5025, 0.5555),(1.813, 0.4322, 1.056),(2.365, 0.5149, 0.4677),(2.572, 0.5841, -0.02519),(2.216, 0.5928, -0.08726),(2.106, 0.526, 0.3881),(2.626, 0.6092, -0.204),(2.692, 0.6845, -0.7402),(2.26, 0.6874, -0.7606),(2.233, 0.6163, -0.2546),(1.901, 0.7339, -1.485),(2.295, 0.8405, -1.396),(2.314, 0.7849, -1),(2.638, 0.7846, -0.9984),(2.623, 0.8416, -1.404),(0.5147, 0.4098, 1.67),(0.153, 0.4075, 1.686),(0.1549, 0.3975, 1.757),(0.5193, 0.4001, 1.739),(0.8237, 0.4065, 1.694),(1.172, 0.4186, 1.607),(1.152, 0.4277, 1.542),(0.8114, 0.4157, 1.627),(1.449, 0.4354, 1.488),(1.739, 0.4621, 1.298),(1.679, 0.4699, 1.242),(1.409, 0.4439, 1.427),(1.968, 0.4948, 1.064),(2.192, 0.5458, 0.7013),(2.053, 0.5539, 0.6439),(1.864, 0.5026, 1.009),(2.357, 0.5884, 0.3984),(2.494, 0.6385, 0.0419),(2.251, 0.6451, -0.005292),(2.157, 0.5961, 0.3436),(2.581, 0.683, -0.275),(2.623, 0.7373, -0.6614),(2.316, 0.74, -0.6806),(2.291, 0.6875, -0.3073),(2.228, 0.4099, -1.53),(2.256, 0.334, -0.9894),(2.704, 0.3329, -0.9821),(2.683, 0.4121, -1.546),(0.582, -0.02776, 1.586),(0.08377, -0.03077, 1.607),(0.08547, -0.04648, 1.719),(0.5905, -0.04281, 1.693),(0.7592, -0.03927, 1.668),(1.246, -0.02229, 1.547),(1.21, -0.00807, 1.445),(0.7438, -0.02453, 1.563),(1.402, -0.01297, 1.48),(1.815, 0.02459, 1.213),(1.713, 0.03626, 1.13),(1.348, 0.0006513, 1.383),(1.945, 0.04273, 1.084),(2.27, 0.1129, 0.5843),(2.052, 0.1247, 0.5001),(1.81, 0.05413, 1.003),(2.367, 0.1364, 0.4167),(2.575, 0.2061, -0.07931),(2.214, 0.215, -0.1423),(2.104, 0.1478, 0.3357),(2.628, 0.2309, -0.2555),(2.694, 0.3066, -0.7946),(2.258, 0.3095, -0.8152),(2.231, 0.238, -0.3065),(1.901, 0.3337, -1.541),(-2.49, -0.346, -1.665),(-2.488, 0.1468, -1.593),(-2.786, 0.06917, -0.9244),(-2.499, -0.444, -0.9669),(-1.904, 0.2897, -1.545),(-1.901, 0.2634, -1.551),(-1.93, 0.0002014, -1.034),(-2.157, 0.2012, -0.9269),(-2.674, -0.03385, -0.1909),(-2.398, -0.5365, -0.3089),(-1.906, -0.1155, -0.4374),(-2.131, 0.1021, -0.2568),(-2.368, -0.1295, 0.4901),(-2.124, -0.6222, 0.3018),(-1.794, -0.1957, 0.1341),(-2.006, 0.01241, 0.3815),(-1.909, -0.2185, 1.124),(-1.712, -0.7021, 0.7777),(-1.533, -0.2733, 0.6859),(-1.713, -0.0744, 0.9995),(-1.335, -0.2719, 1.504),(-1.197, -0.75, 1.101),(-1.121, -0.3171, 0.9981),(-1.253, -0.1234, 1.348),(-0.679, -0.2963, 1.678),(-0.6088, -0.7719, 1.344),(-0.5859, -0.3372, 1.141),(-0.6546, -0.1459, 1.508),(0, -0.7775, 1.407),(-2.213, 0.2428, -0.9146),(-1.988, 0.293, -1.533),(-2.185, 0.1482, -0.2411),(-2.054, 0.05845, 0.3977),(-1.749, -0.03285, 1.048),(-1.275, -0.08119, 1.392),(-0.6617, -0.1034, 1.55),(0, -0.1079, 1.582),(-0.6764, -0.1281, 1.683),(0, -0.1336, 1.722),(-1.33, -0.1046, 1.516),(-1.895, -0.05298, 1.148),(-2.345, 0.03838, 0.4979),(-2.642, 0.1326, -0.1729),(-2.743, 0.2346, -0.899),(-2.405, 0.2839, -1.554),(-2.295, 0.8405, -1.396),(-2.314, 0.7849, -1),(-2.638, 0.7846, -0.9984),(-2.623, 0.8416, -1.404),(-0.5147, 0.4098, 1.67),(-0.153, 0.4075, 1.686),(-0.1549, 0.3975, 1.757),(-0.5193, 0.4001, 1.739),(-0.8237, 0.4065, 1.694),(-1.172, 0.4186, 1.607),(-1.152, 0.4277, 1.542),(-0.8114, 0.4157, 1.627),(-1.449, 0.4354, 1.488),(-1.739, 0.4621, 1.298),(-1.679, 0.4699, 1.242),(-1.409, 0.4439, 1.427),(-1.968, 0.4948, 1.064),(-2.192, 0.5458, 0.7013),(-2.053, 0.5539, 0.6439),(-1.864, 0.5026, 1.009),(-2.357, 0.5884, 0.3984),(-2.494, 0.6385, 0.0419),(-2.251, 0.6451, -0.005292),(-2.157, 0.5961, 0.3436),(-2.581, 0.683, -0.275),(-2.623, 0.7373, -0.6614),(-2.316, 0.74, -0.6806),(-2.291, 0.6875, -0.3073),(-2.256, 0.334, -0.9894),(-2.228, 0.4099, -1.53),(-2.704, 0.3329, -0.9821),(-2.683, 0.4121, -1.546),(-0.08377, -0.03077, 1.607),(-0.582, -0.02776, 1.586),(-0.08547, -0.04648, 1.719),(-0.5905, -0.04281, 1.693),(-1.246, -0.02229, 1.547),(-0.7592, -0.03927, 1.668),(-1.21, -0.00807, 1.445),(-0.7438, -0.02453, 1.563),(-1.815, 0.02459, 1.213),(-1.402, -0.01297, 1.48),(-1.713, 0.03626, 1.13),(-1.348, 0.0006513, 1.383),(-2.27, 0.1129, 0.5843),(-1.945, 0.04273, 1.084),(-2.052, 0.1247, 0.5001),(-1.81, 0.05413, 1.003),(-2.575, 0.2061, -0.07931),(-2.367, 0.1364, 0.4167),(-2.214, 0.215, -0.1423),(-2.104, 0.1478, 0.3357),(-2.694, 0.3066, -0.7946),(-2.628, 0.2309, -0.2555),(-2.258, 0.3095, -0.8152),(-2.231, 0.238, -0.3065),(-1.901, 0.3337, -1.541),(0, 0.3834, -1.651),(-2.23, 0.7878, -1.476),(-2.257, 0.7123, -0.9376),(-2.702, 0.7112, -0.9303),(-2.682, 0.79, -1.491),(-0.5807, 0.3499, 1.642),(-0.08538, 0.3469, 1.663),(-0.08698, 0.3321, 1.769),(-0.5887, 0.3357, 1.743),(-0.7603, 0.3393, 1.717),(-1.244, 0.3562, 1.597),(-1.21, 0.3696, 1.502),(-0.7458, 0.3532, 1.619),(-1.402, 0.3657, 1.53),(-1.811, 0.4028, 1.265),(-1.714, 0.4139, 1.186),(-1.351, 0.3785, 1.438),(-1.943, 0.4212, 1.134),(-2.266, 0.491, 0.6374),(-2.054, 0.5025, 0.5555),(-1.813, 0.4322, 1.056),(-2.365, 0.5149, 0.4677),(-2.572, 0.5841, -0.02519),(-2.216, 0.5928, -0.08726),(-2.106, 0.526, 0.3881),(-2.626, 0.6092, -0.204),(-2.692, 0.6845, -0.7402),(-2.26, 0.6874, -0.7606),(-2.233, 0.6163, -0.2546),(-1.901, 0.7339, -1.485),(0, 0.7348, -1.492),(2.792, -0.12, -1.345),(2.142, 0.1908, -1.295),(2.754, -0.2268, -0.5846),(2.151, 0.01335, -0.6048),(2.546, -0.3259, 0.1205),(2.083, -0.07765, 0.04301),(2.157, -0.4204, 0.7935),(1.879, -0.1684, 0.689),(1.636, -0.4934, 1.191),(1.501, -0.238, 1.185),(1.014, -0.5308, 1.507),(0.9654, -0.2718, 1.425),(0.3407, -0.5451, 1.681),(0.3302, -0.2846, 1.516),(2.154, 0.2911, -1.276),(2.162, 0.1932, -0.579),(2.094, 0.102, 0.07051),(1.889, 0.01079, 0.7195),(1.508, -0.05933, 1.219),(0.9686, -0.09341, 1.461),(0.3311, -0.1062, 1.552),(0.3399, -0.1836, 1.72),(1.011, -0.1695, 1.62),(1.63, -0.1323, 1.355),(2.148, -0.05961, 0.8372),(2.536, 0.03458, 0.1667),(2.743, 0.1333, -0.5359),(2.781, 0.2391, -1.289),(1.428, 0.1563, -1.429),(1.434, -0.01467, -0.9757),(1.388, -0.07533, -0.5439),(1.253, -0.1358, -0.1132),(1.001, -0.1822, 0.2172),(0.6436, -0.2048, 0.3777),(0.2202, -0.2133, 0.4382),(2.468, 0.8129, -1.2),(0.3355, 0.4037, 1.713),(0.9899, 0.4171, 1.618),(1.569, 0.4528, 1.364),(2.019, 0.5243, 0.8547),(2.315, 0.617, 0.1947),(2.453, 0.7119, -0.4811),(2.166, 0.3011, -1.269),(2.484, 0.2498, -0.9033),(2.769, 0.3019, -1.274),(2.452, 0.3533, -1.64),(0.332, -0.09714, 1.566),(0.0005066, -0.1099, 1.657),(0.3389, -0.1181, 1.716),(0.6704, -0.1054, 1.625),(1.007, -0.1041, 1.616),(1.308, -0.08306, 1.466),(0.9723, -0.08433, 1.475),(0.6714, -0.1054, 1.625),(1.622, -0.06717, 1.353),(1.829, -0.03411, 1.118),(1.516, -0.04993, 1.23),(1.309, -0.08299, 1.466),(2.138, 0.005099, 0.8386),(2.208, 0.05989, 0.4486),(1.9, 0.02077, 0.727),(1.83, -0.03402, 1.117),(2.524, 0.09887, 0.171),(2.422, 0.1513, -0.2023),(2.106, 0.1124, 0.07454),(2.209, 0.05998, 0.4479),(2.731, 0.1972, -0.5289),(2.484, 0.2497, -0.9026),(2.174, 0.2039, -0.5768),(2.422, 0.1514, -0.2032),(1.061, 0.3095, -1.659),(2.173, 0.8125, -1.197),(2.483, 0.762, -0.8372),(2.763, 0.8133, -1.203),(2.452, 0.8638, -1.563),(0.3324, 0.4128, 1.648),(0.006795, 0.4015, 1.729),(0.3385, 0.3946, 1.778),(0.6641, 0.4059, 1.697),(1.005, 0.4086, 1.678),(1.302, 0.4281, 1.54),(0.9747, 0.4257, 1.557),(0.6778, 0.4062, 1.695),(1.616, 0.4453, 1.417),(1.823, 0.4767, 1.194),(1.522, 0.4603, 1.31),(1.315, 0.4289, 1.534),(2.13, 0.517, 0.9063),(2.205, 0.5706, 0.5253),(1.908, 0.5315, 0.8031),(1.833, 0.478, 1.184),(2.516, 0.6105, 0.241),(2.419, 0.6619, -0.1246),(2.114, 0.6235, 0.1483),(2.211, 0.5722, 0.5139),(2.724, 0.7087, -0.4577),(2.483, 0.7602, -0.8248),(2.181, 0.7152, -0.5044),(2.422, 0.6636, -0.1373),(2.167, 0.5622, -1.232),(2.484, 0.511, -0.8673),(2.768, 0.563, -1.238),(2.452, 0.6143, -1.603),(0.3321, 0.1635, 1.607),(0.00152, 0.1512, 1.694),(0.3388, 0.1434, 1.749),(0.6694, 0.1557, 1.662),(1.007, 0.1575, 1.649),(1.307, 0.178, 1.503),(0.9732, 0.1763, 1.515),(0.6725, 0.1557, 1.662),(1.62, 0.1943, 1.387),(1.828, 0.2269, 1.155),(1.518, 0.2108, 1.27),(1.311, 0.1782, 1.502),(2.135, 0.2664, 0.8739),(2.208, 0.3209, 0.4857),(1.903, 0.2817, 0.7651),(1.83, 0.2271, 1.153),(2.522, 0.36, 0.2072),(2.421, 0.4123, -0.1648),(2.108, 0.3734, 0.1118),(2.209, 0.3212, 0.4837),(2.729, 0.4583, -0.4924),(2.484, 0.5107, -0.8651),(2.176, 0.465, -0.54),(2.422, 0.4127, -0.1673),(1.061, 0.5794, -1.621),(-2.792, -0.12, -1.345),(-2.142, 0.1908, -1.295),(-2.754, -0.2268, -0.5846),(-2.151, 0.01335, -0.6048),(-2.546, -0.3259, 0.1205),(-2.083, -0.07765, 0.04301),(-2.157, -0.4204, 0.7935),(-1.879, -0.1684, 0.689),(-1.636, -0.4934, 1.191),(-1.501, -0.238, 1.185),(-1.014, -0.5308, 1.507),(-0.9654, -0.2718, 1.425),(-0.3407, -0.5451, 1.681),(-0.3302, -0.2846, 1.516),(-2.154, 0.2911, -1.276),(-2.162, 0.1932, -0.579),(-2.094, 0.102, 0.07051),(-1.889, 0.01079, 0.7195),(-1.508, -0.05933, 1.219),(-0.9686, -0.09341, 1.461),(-0.3311, -0.1062, 1.552),(-0.3399, -0.1836, 1.72),(-1.011, -0.1695, 1.62),(-1.63, -0.1323, 1.355),(-2.148, -0.05961, 0.8372),(-2.536, 0.03458, 0.1667),(-2.743, 0.1333, -0.5359),(-2.781, 0.2391, -1.289),(-1.428, 0.1563, -1.429),(-1.434, -0.01467, -0.9757),(-1.388, -0.07533, -0.5439),(-1.253, -0.1358, -0.1132),(-1.001, -0.1822, 0.2172),(-0.6436, -0.2048, 0.3777),(-0.2202, -0.2133, 0.4382),(-2.468, 0.8129, -1.2),(-0.3355, 0.4037, 1.713),(-0.9899, 0.4171, 1.618),(-1.569, 0.4528, 1.364),(-2.019, 0.5243, 0.8547),(-2.315, 0.617, 0.1947),(-2.453, 0.7119, -0.4811),(-2.166, 0.3011, -1.269),(-2.484, 0.2498, -0.9033),(-2.769, 0.3019, -1.274),(-2.452, 0.3533, -1.64),(-0.332, -0.09714, 1.566),(-0.0005066, -0.1099, 1.657),(-0.3389, -0.1181, 1.716),(-0.6704, -0.1054, 1.625),(-1.007, -0.1041, 1.616),(-1.308, -0.08306, 1.466),(-0.9723, -0.08433, 1.475),(-0.6714, -0.1054, 1.625),(-1.622, -0.06717, 1.353),(-1.829, -0.03411, 1.118),(-1.516, -0.04993, 1.23),(-1.309, -0.08299, 1.466),(-2.138, 0.005099, 0.8386),(-2.208, 0.05989, 0.4486),(-1.9, 0.02077, 0.727),(-1.83, -0.03402, 1.117),(-2.524, 0.09887, 0.171),(-2.422, 0.1513, -0.2023),(-2.106, 0.1124, 0.07454),(-2.209, 0.05998, 0.4479),(-2.731, 0.1972, -0.5289),(-2.484, 0.2497, -0.9026),(-2.174, 0.2039, -0.5768),(-2.422, 0.1514, -0.2032),(-1.061, 0.3095, -1.659),(-2.173, 0.8125, -1.197),(-2.483, 0.762, -0.8372),(-2.763, 0.8133, -1.203),(-2.452, 0.8638, -1.563),(-0.3324, 0.4128, 1.648),(-0.006795, 0.4015, 1.729),(-0.3385, 0.3946, 1.778),(-0.6641, 0.4059, 1.697),(-1.005, 0.4086, 1.678),(-1.302, 0.4281, 1.54),(-0.9747, 0.4257, 1.557),(-0.6778, 0.4062, 1.695),(-1.616, 0.4453, 1.417),(-1.823, 0.4767, 1.194),(-1.522, 0.4603, 1.31),(-1.315, 0.4289, 1.534),(-2.13, 0.517, 0.9063),(-2.205, 0.5706, 0.5253),(-1.908, 0.5315, 0.8031),(-1.833, 0.478, 1.184),(-2.516, 0.6105, 0.241),(-2.419, 0.6619, -0.1246),(-2.114, 0.6235, 0.1483),(-2.211, 0.5722, 0.5139),(-2.724, 0.7087, -0.4577),(-2.483, 0.7602, -0.8248),(-2.181, 0.7152, -0.5044),(-2.422, 0.6636, -0.1373),(-2.167, 0.5622, -1.232),(-2.484, 0.511, -0.8673),(-2.768, 0.563, -1.238),(-2.452, 0.6143, -1.603),(-0.3321, 0.1635, 1.607),(-0.00152, 0.1512, 1.694),(-0.3388, 0.1434, 1.749),(-0.6694, 0.1557, 1.662),(-1.007, 0.1575, 1.649),(-1.307, 0.178, 1.503),(-0.9732, 0.1763, 1.515),(-0.6725, 0.1557, 1.662),(-1.62, 0.1943, 1.387),(-1.828, 0.2269, 1.155),(-1.518, 0.2108, 1.27),(-1.311, 0.1782, 1.502),(-2.135, 0.2664, 0.8739),(-2.208, 0.3209, 0.4857),(-1.903, 0.2817, 0.7651),(-1.83, 0.2271, 1.153),(-2.522, 0.36, 0.2072),(-2.421, 0.4123, -0.1648),(-2.108, 0.3734, 0.1118),(-2.209, 0.3212, 0.4837),(-2.729, 0.4583, -0.4924),(-2.484, 0.5107, -0.8651),(-2.176, 0.465, -0.54),(-2.422, 0.4127, -0.1673),(-1.061, 0.5794, -1.621),(2.49, -0.07094, -1.626),(1.901, 0.2752, -1.55),(2.789, -0.1743, -0.9587),(2.502, -0.3954, -1.313),(2.79, 0.1233, -1.309),(2.145, 0.2664, -1.283),(2.677, -0.2774, -0.2243),(2.468, -0.4911, -0.6317),(2.751, 0.01671, -0.5509),(2.154, 0.1483, -0.5857),(2.371, -0.3732, 0.4573),(2.281, -0.5799, 0.00001332),(2.544, -0.08225, 0.1536),(2.085, 0.05721, 0.06252),(1.911, -0.4622, 0.9992),(1.933, -0.6646, 0.603),(2.155, -0.1767, 0.826),(1.881, -0.03364, 0.7093),(1.336, -0.5157, 1.362),(1.466, -0.73, 0.946),(1.634, -0.2497, 1.345),(1.503, -0.1034, 1.206),(0.6794, -0.5402, 1.623),(0.9086, -0.7635, 1.235),(1.013, -0.287, 1.611),(0.9662, -0.1373, 1.447),(0, -0.5464, 1.691),(0.3053, -0.7763, 1.398),(0.3405, -0.3012, 1.712),(0.3304, -0.15, 1.538),(2.154, 0.08114, -0.9441),(2.128, -0.03282, -0.2761),(2.003, -0.1224, 0.3617),(1.711, -0.2091, 0.9787),(1.252, -0.258, 1.327),(0.6541, -0.2804, 1.486),(0, -0.2855, 1.523),(1.963, 0.1317, -1.336),(1.972, -0.08361, -0.7101),(1.909, -0.167, -0.1163),(1.722, -0.2502, 0.4758),(1.376, -0.314, 0.9301),(0.8849, -0.345, 1.151),(0.3027, -0.3567, 1.234),(2.162, 0.2932, -1.271),(2.171, 0.1958, -0.5782),(2.102, 0.1044, 0.07263),(1.897, 0.01291, 0.7241),(1.514, -0.05759, 1.226),(0.9712, -0.0919, 1.47),(0.3317, -0.1047, 1.561),(0.3392, -0.14, 1.717),(1.009, -0.126, 1.617),(1.625, -0.08896, 1.353),(2.141, -0.01654, 0.8378),(2.528, 0.07737, 0.1693),(2.734, 0.1758, -0.5314),(2.773, 0.2808, -1.279),(2.481, 0.25, -1.57),(1.912, 0.2936, -1.537),(2.166, 0.2411, -0.9202),(2.14, 0.1469, -0.2495),(2.014, 0.05701, 0.3904),(1.72, -0.03018, 1.011),(1.257, -0.07947, 1.362),(0.656, -0.102, 1.523),(0, -0.1072, 1.559),(0.6776, -0.1788, 1.686),(1.331, -0.1545, 1.512),(1.903, -0.1013, 1.134),(2.361, -0.01256, 0.5023),(2.666, 0.08285, -0.1769),(2.778, 0.1855, -0.9075),(1.153, 0.2636, -1.602),(1.256, 0.07775, -1.259),(1.241, -0.003568, -0.8708),(1.167, -0.05593, -0.498),(0.9965, -0.106, -0.1419),(0.7287, -0.1347, 0.06276),(0.3811, -0.1479, 0.1564),(0, -0.151, 0.1785),(2.197, 0.294, -1.54),(2.484, 0.2443, -0.9037),(0.6709, -0.1108, 1.624),(1.309, -0.08845, 1.465),(1.83, -0.03947, 1.117),(2.209, 0.05452, 0.4475),(2.422, 0.146, -0.2035),(2.227, 0.3392, -1.54),(2.255, 0.2632, -0.9991),(2.704, 0.2622, -0.9918),(2.684, 0.3414, -1.556),(2.169, 0.75, -1.206),(2.484, 0.6989, -0.8424),(2.766, 0.7507, -1.211),(2.452, 0.8018, -1.575),(0.5823, -0.09826, 1.574),(0.08337, -0.1013, 1.596),(0.08511, -0.1174, 1.71),(0.591, -0.1137, 1.684),(0.3323, 0.3508, 1.635),(0.003092, 0.3389, 1.72),(0.3387, 0.3315, 1.773),(0.6678, 0.3434, 1.688),(0.7589, -0.1101, 1.659),(1.247, -0.09314, 1.538),(1.21, -0.07857, 1.434),(0.7432, -0.09504, 1.552),(1.006, 0.3455, 1.673),(1.306, 0.3656, 1.53),(0.9738, 0.3637, 1.544),(0.6741, 0.3435, 1.688),(1.402, -0.08385, 1.472),(1.816, -0.04618, 1.204),(1.712, -0.03426, 1.119),(1.347, -0.06991, 1.373),(1.618, 0.3823, 1.412),(1.826, 0.4144, 1.183),(1.52, 0.3982, 1.298),(1.312, 0.366, 1.527),(1.946, -0.02806, 1.075),(2.271, 0.04218, 0.5746),(2.051, 0.05412, 0.4896),(1.809, -0.0165, 0.9923),(2.133, 0.4542, 0.8992),(2.207, 0.5084, 0.5133),(1.905, 0.4692, 0.7925),(1.831, 0.415, 1.178),(2.368, 0.06568, 0.4073),(2.576, 0.1355, -0.08942),(2.214, 0.1443, -0.1527),(2.103, 0.07712, 0.3259),(2.52, 0.5478, 0.2331),(2.421, 0.5998, -0.1369),(2.11, 0.5611, 0.1386),(2.209, 0.5091, 0.5086),(2.628, 0.1601, -0.265),(2.695, 0.236, -0.8048),(2.257, 0.2389, -0.8255),(2.231, 0.1673, -0.3162),(2.728, 0.646, -0.4662),(2.483, 0.6982, -0.8372),(2.178, 0.6527, -0.5135),(2.422, 0.6006, -0.1425),(0.9505, 0.7345, -1.49),(1.901, 0.2678, -1.551),(2.249, 0.8126, -1.198),(2.479, 0.775, -0.9302),(2.687, 0.8132, -1.202),(2.456, 0.8508, -1.47),(2.233, 0.85, -1.464),(2.26, 0.7752, -0.9315),(2.699, 0.7742, -0.9243),(2.679, 0.8522, -1.48),(0.3333, 0.4102, 1.667),(0.09134, 0.4021, 1.725),(0.3376, 0.3972, 1.759),(0.5796, 0.4054, 1.701),(0.5782, 0.412, 1.654),(0.08821, 0.4091, 1.675),(0.08971, 0.3951, 1.774),(0.5857, 0.3987, 1.749),(1.001, 0.4111, 1.661),(1.222, 0.4253, 1.56),(0.9791, 0.4232, 1.574),(0.7581, 0.409, 1.675),(0.7626, 0.4024, 1.722),(1.24, 0.4191, 1.604),(1.208, 0.4316, 1.514),(0.749, 0.4154, 1.63),(1.602, 0.4474, 1.402),(1.757, 0.4705, 1.238),(1.536, 0.4582, 1.325),(1.381, 0.4351, 1.49),(1.402, 0.4288, 1.534),(1.806, 0.4655, 1.274),(1.713, 0.476, 1.199),(1.355, 0.4409, 1.448),(2.1, 0.519, 0.8923),(2.158, 0.5587, 0.6097),(1.938, 0.5296, 0.8171),(1.881, 0.4899, 1.1),(1.942, 0.4843, 1.139),(2.262, 0.5534, 0.6474),(2.056, 0.5646, 0.5678),(1.816, 0.4949, 1.064),(2.464, 0.6122, 0.2289),(2.393, 0.6503, -0.04252),(2.166, 0.6218, 0.1605),(2.237, 0.5837, 0.4319),(2.364, 0.5779, 0.4731),(2.568, 0.6464, -0.01431),(2.218, 0.6549, -0.07527),(2.11, 0.5889, 0.3951),(2.654, 0.7095, -0.4638),(2.475, 0.7478, -0.7365),(2.252, 0.7144, -0.4984),(2.43, 0.676, -0.2256),(2.624, 0.6722, -0.1983),(2.689, 0.7467, -0.7288),(2.262, 0.7496, -0.7489),(2.236, 0.6792, -0.2482),(2.228, 0.6003, -1.503),(2.256, 0.5244, -0.9629),(2.703, 0.5234, -0.9556),(2.683, 0.6025, -1.519),(0.5817, 0.1625, 1.614),(0.08417, 0.1595, 1.635),(0.08583, 0.1441, 1.744),(0.5901, 0.1478, 1.718),(0.7594, 0.1513, 1.693),(1.246, 0.1683, 1.572),(1.21, 0.1822, 1.474),(0.7444, 0.1657, 1.591),(1.401, 0.1776, 1.506),(1.813, 0.2151, 1.239),(1.713, 0.2265, 1.158),(1.349, 0.1909, 1.411),(1.944, 0.2332, 1.11),(2.268, 0.3033, 0.6108),(2.053, 0.315, 0.5275),(1.811, 0.2445, 1.03),(2.366, 0.3269, 0.4429),(2.574, 0.3965, -0.05237),(2.215, 0.4053, -0.115),(2.104, 0.3382, 0.3624),(2.627, 0.4213, -0.2291),(2.693, 0.497, -0.7676),(2.258, 0.4999, -0.7881),(2.232, 0.4285, -0.28),(1.901, 0.507, -1.517),(2.167, 0.3718, -1.259),(2.484, 0.3205, -0.8937),(2.769, 0.3726, -1.265),(2.452, 0.4239, -1.63),(0.332, -0.0267, 1.578),(0.001013, -0.03918, 1.667),(0.3389, -0.04721, 1.724),(0.6699, -0.03473, 1.635),(1.007, -0.03319, 1.624),(1.308, -0.01239, 1.476),(0.9727, -0.01389, 1.487),(0.672, -0.03468, 1.635),(1.621, 0.003701, 1.362),(1.829, 0.03652, 1.128),(1.517, 0.02057, 1.242),(1.31, -0.01226, 1.475),(2.137, 0.07588, 0.8478),(2.208, 0.1305, 0.4587),(1.901, 0.09136, 0.7376),(1.83, 0.0367, 1.127),(2.523, 0.1696, 0.1807),(2.421, 0.2219, -0.192),(2.107, 0.1831, 0.08474),(2.209, 0.1307, 0.4574),(2.73, 0.2679, -0.5191),(2.484, 0.3203, -0.8922),(2.175, 0.2746, -0.5668),(2.422, 0.2222, -0.1937),(1.061, 0.3846, -1.648),(-2.49, -0.07094, -1.626),(-2.79, 0.1233, -1.309),(-2.789, -0.1743, -0.9587),(-2.502, -0.3954, -1.313),(-1.901, 0.2752, -1.55),(-1.963, 0.1317, -1.336),(-2.154, 0.08114, -0.9441),(-2.145, 0.2664, -1.283),(-2.751, 0.01671, -0.5509),(-2.677, -0.2774, -0.2243),(-2.468, -0.4911, -0.6317),(-1.972, -0.08361, -0.7101),(-2.128, -0.03282, -0.2761),(-2.154, 0.1483, -0.5857),(-2.544, -0.08225, 0.1536),(-2.371, -0.3732, 0.4573),(-2.281, -0.5799, 0.00001332),(-1.909, -0.167, -0.1163),(-2.003, -0.1224, 0.3617),(-2.085, 0.05721, 0.06252),(-2.155, -0.1767, 0.826),(-1.911, -0.4622, 0.9992),(-1.933, -0.6646, 0.603),(-1.722, -0.2502, 0.4758),(-1.711, -0.2091, 0.9787),(-1.881, -0.03364, 0.7093),(-1.634, -0.2497, 1.345),(-1.336, -0.5157, 1.362),(-1.466, -0.73, 0.946),(-1.376, -0.314, 0.9301),(-1.252, -0.258, 1.327),(-1.503, -0.1034, 1.206),(-1.013, -0.287, 1.611),(-0.6794, -0.5402, 1.623),(-0.9086, -0.7635, 1.235),(-0.8849, -0.345, 1.151),(-0.6541, -0.2804, 1.486),(-0.9662, -0.1373, 1.447),(-0.3405, -0.3012, 1.712),(-0.3053, -0.7763, 1.398),(-0.3027, -0.3567, 1.234),(-0.3304, -0.15, 1.538),(-2.166, 0.2411, -0.9202),(-2.162, 0.2932, -1.271),(-1.912, 0.2936, -1.537),(-2.14, 0.1469, -0.2495),(-2.171, 0.1958, -0.5782),(-2.014, 0.05701, 0.3904),(-2.102, 0.1044, 0.07263),(-1.72, -0.03018, 1.011),(-1.897, 0.01291, 0.7241),(-1.257, -0.07947, 1.362),(-1.514, -0.05759, 1.226),(-0.656, -0.102, 1.523),(-0.9712, -0.0919, 1.47),(-0.3317, -0.1047, 1.561),(-0.6776, -0.1788, 1.686),(-0.3392, -0.14, 1.717),(0, -0.185, 1.73),(-1.331, -0.1545, 1.512),(-1.009, -0.126, 1.617),(-1.903, -0.1013, 1.134),(-1.625, -0.08896, 1.353),(-2.361, -0.01256, 0.5023),(-2.141, -0.01654, 0.8378),(-2.666, 0.08285, -0.1769),(-2.528, 0.07737, 0.1693),(-2.778, 0.1855, -0.9075),(-2.734, 0.1758, -0.5314),(-2.481, 0.25, -1.57),(-2.773, 0.2808, -1.279),(-1.153, 0.2636, -1.602),(-1.256, 0.07775, -1.259),(-1.241, -0.003568, -0.8708),(-1.167, -0.05593, -0.498),(-0.9965, -0.106, -0.1419),(-0.7287, -0.1347, 0.06276),(-0.3811, -0.1479, 0.1564),(-2.249, 0.8126, -1.198),(-2.479, 0.775, -0.9302),(-2.687, 0.8132, -1.202),(-2.456, 0.8508, -1.47),(-0.3333, 0.4102, 1.667),(-0.09134, 0.4021, 1.725),(-0.3376, 0.3972, 1.759),(-0.5796, 0.4054, 1.701),(-1.001, 0.4111, 1.661),(-1.222, 0.4253, 1.56),(-0.9791, 0.4232, 1.574),(-0.7581, 0.409, 1.675),(-1.602, 0.4474, 1.402),(-1.757, 0.4705, 1.238),(-1.536, 0.4582, 1.325),(-1.381, 0.4351, 1.49),(-2.1, 0.519, 0.8923),(-2.158, 0.5587, 0.6097),(-1.938, 0.5296, 0.8171),(-1.881, 0.4899, 1.1),(-2.464, 0.6122, 0.2289),(-2.393, 0.6503, -0.04252),(-2.166, 0.6218, 0.1605),(-2.237, 0.5837, 0.4319),(-2.654, 0.7095, -0.4638),(-2.475, 0.7478, -0.7365),(-2.252, 0.7144, -0.4984),(-2.43, 0.676, -0.2256),(-2.255, 0.2632, -0.9991),(-2.167, 0.3718, -1.259),(-2.227, 0.3392, -1.54),(-2.484, 0.2443, -0.9037),(-2.704, 0.2622, -0.9918),(-2.484, 0.3205, -0.8937),(-2.684, 0.3414, -1.556),(-2.769, 0.3726, -1.265),(-2.197, 0.294, -1.54),(-2.452, 0.4239, -1.63),(-0.08337, -0.1013, 1.596),(-0.332, -0.0267, 1.578),(-0.5823, -0.09826, 1.574),(0, -0.1153, 1.656),(-0.08511, -0.1174, 1.71),(-0.001013, -0.03918, 1.667),(-0.591, -0.1137, 1.684),(-0.3389, -0.04721, 1.724),(-0.6709, -0.1108, 1.624),(-0.6699, -0.03473, 1.635),(-1.247, -0.09314, 1.538),(-1.007, -0.03319, 1.624),(-0.7589, -0.1101, 1.659),(-1.309, -0.08845, 1.465),(-1.21, -0.07857, 1.434),(-1.308, -0.01239, 1.476),(-0.7432, -0.09504, 1.552),(-0.9727, -0.01389, 1.487),(-0.672, -0.03468, 1.635),(-1.816, -0.04618, 1.204),(-1.621, 0.003701, 1.362),(-1.402, -0.08385, 1.472),(-1.83, -0.03947, 1.117),(-1.712, -0.03426, 1.119),(-1.829, 0.03652, 1.128),(-1.347, -0.06991, 1.373),(-1.517, 0.02057, 1.242),(-1.31, -0.01226, 1.475),(-2.271, 0.04218, 0.5746),(-2.137, 0.07588, 0.8478),(-1.946, -0.02806, 1.075),(-2.209, 0.05452, 0.4475),(-2.051, 0.05412, 0.4896),(-2.208, 0.1305, 0.4587),(-1.809, -0.0165, 0.9923),(-1.901, 0.09136, 0.7376),(-1.83, 0.0367, 1.127),(-2.576, 0.1355, -0.08942),(-2.523, 0.1696, 0.1807),(-2.368, 0.06568, 0.4073),(-2.422, 0.146, -0.2035),(-2.214, 0.1443, -0.1527),(-2.421, 0.2219, -0.192),(-2.103, 0.07712, 0.3259),(-2.107, 0.1831, 0.08474),(-2.209, 0.1307, 0.4574),(-2.695, 0.236, -0.8048),(-2.73, 0.2679, -0.5191),(-2.628, 0.1601, -0.265),(-2.257, 0.2389, -0.8255),(-2.484, 0.3203, -0.8922),(-2.231, 0.1673, -0.3162),(-2.175, 0.2746, -0.5668),(-2.422, 0.2222, -0.1937),(-1.901, 0.2678, -1.551),(-1.061, 0.3846, -1.648),(0, 0.3076, -1.662),(-2.169, 0.75, -1.206),(-2.26, 0.7752, -0.9315),(-2.233, 0.85, -1.464),(-2.484, 0.6989, -0.8424),(-2.699, 0.7742, -0.9243),(-2.766, 0.7507, -1.211),(-2.679, 0.8522, -1.48),(-2.452, 0.8018, -1.575),(-0.3323, 0.3508, 1.635),(-0.08821, 0.4091, 1.675),(-0.5782, 0.412, 1.654),(-0.003092, 0.3389, 1.72),(-0.08971, 0.3951, 1.774),(-0.3387, 0.3315, 1.773),(-0.5857, 0.3987, 1.749),(-0.6678, 0.3434, 1.688),(-1.006, 0.3455, 1.673),(-1.24, 0.4191, 1.604),(-0.7626, 0.4024, 1.722),(-1.306, 0.3656, 1.53),(-1.208, 0.4316, 1.514),(-0.9738, 0.3637, 1.544),(-0.749, 0.4154, 1.63),(-0.6741, 0.3435, 1.688),(-1.618, 0.3823, 1.412),(-1.806, 0.4655, 1.274),(-1.402, 0.4288, 1.534),(-1.826, 0.4144, 1.183),(-1.713, 0.476, 1.199),(-1.52, 0.3982, 1.298),(-1.355, 0.4409, 1.448),(-1.312, 0.366, 1.527),(-2.133, 0.4542, 0.8992),(-2.262, 0.5534, 0.6474),(-1.942, 0.4843, 1.139),(-2.207, 0.5084, 0.5133),(-2.056, 0.5646, 0.5678),(-1.905, 0.4692, 0.7925),(-1.816, 0.4949, 1.064),(-1.831, 0.415, 1.178),(-2.52, 0.5478, 0.2331),(-2.568, 0.6464, -0.01431),(-2.364, 0.5779, 0.4731),(-2.421, 0.5998, -0.1369),(-2.218, 0.6549, -0.07527),(-2.11, 0.5611, 0.1386),(-2.11, 0.5889, 0.3951),(-2.209, 0.5091, 0.5086),(-2.728, 0.646, -0.4662),(-2.689, 0.7467, -0.7288),(-2.624, 0.6722, -0.1983),(-2.483, 0.6982, -0.8372),(-2.262, 0.7496, -0.7489),(-2.178, 0.6527, -0.5135),(-2.236, 0.6792, -0.2482),(-2.422, 0.6006, -0.1425),(-2.256, 0.5244, -0.9629),(-2.228, 0.6003, -1.503),(-2.703, 0.5234, -0.9556),(-2.683, 0.6025, -1.519),(-0.08417, 0.1595, 1.635),(-0.5817, 0.1625, 1.614),(-0.08583, 0.1441, 1.744),(-0.5901, 0.1478, 1.718),(-1.246, 0.1683, 1.572),(-0.7594, 0.1513, 1.693),(-1.21, 0.1822, 1.474),(-0.7444, 0.1657, 1.591),(-1.813, 0.2151, 1.239),(-1.401, 0.1776, 1.506),(-1.713, 0.2265, 1.158),(-1.349, 0.1909, 1.411),(-2.268, 0.3033, 0.6108),(-1.944, 0.2332, 1.11),(-2.053, 0.315, 0.5275),(-1.811, 0.2445, 1.03),(-2.574, 0.3965, -0.05237),(-2.366, 0.3269, 0.4429),(-2.215, 0.4053, -0.115),(-2.104, 0.3382, 0.3624),(-2.693, 0.497, -0.7676),(-2.627, 0.4213, -0.2291),(-2.258, 0.4999, -0.7881),(-2.232, 0.4285, -0.28),(-1.901, 0.507, -1.517),(-0.9505, 0.7345, -1.49),(0, 0.579, -1.624)]

IndexedFaceSet100.coord = Coordinate102

Shape96.geometry = IndexedFaceSet100

Transform95.children.append(Shape96)

HAnimSegment94.children.append(Transform95)
Coordinate103 = x3d.Coordinate(USE="Lower_teeth_COORD_JinBlink")

HAnimSegment94.coord = Coordinate103
HAnimDisplacer104 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinChinRaiser")
HAnimDisplacer104.name = "lower_teeth_morphinterpolator"
HAnimDisplacer104.coordIndex = [15,16,17,18,19,20,21,22,28,29,30,37,38,39,40,45,50,51,52,53,54,55,56,57,79,80,81,82,83,84,85,86,107,108,109,110,111,112,113,114,152,153,154,155,156,157,158,159,160,166,167,168,169,170,171,181,182,183,184,185,186,187,188,209,210,211,212,213,214,215,216,220,234,239,240,241,242,243,244,245,246,250,264,275,276,277,278,284,285,286,287,296,297,298,299,301,302,311,312,313,314,315,316,317,318,322,335,340,341,342,343,344,345,346,347,351,368,369,370,371,372,373,374,375,379,392,403,404,405,406,412,413,414,415,423,424,425,426,427,429,430,439,440,441,442,443,444,445,446,450,463,468,469,470,471,472,473,474,475,479,496,497,498,499,500,501,502,503,507,520,539,543,544,545,546,547,548,549,550,555,556,557,563,564,570,571,572,573,585,586,587,588,589,594,595,596,597,598,599,600,601,604,605,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,640,665,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,727,728,729,730,731,732,733,734,756,757,758,759,760,761,762,763,767,780,808,810,811,813,814,815,816,817,818,819,820,821,822,832,834,835,836,837,838,839,840,841,852,853,854,855,856,857,858,863,864,865,866,867,868,869,870,874,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,922,924,952,953,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,984,985,1014,1015,1016,1017,1018,1019,1020,1021,1025,1039,1040]
HAnimDisplacer104.displacements = [(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.6103, 0.364),(0, 0.4491, 0.199),(0, 0.4097, 0.2),(0, 0.449, 0.199),(0, 0.4246, 0.199),(0, 0.0381, 0),(0, 0.4491, 0.2),(0, 0.4838, 0.2),(0, 0.0381, 0),(0, 0.4096, 0.2),(0, 0.4097, 0.199),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1268, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1267, 0),(0, 0.1864, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.3661, 0.199),(0, 0.3661, 0.2),(0, 0.3661, 0.199),(0, 0.366, 0.199),(0, 0.3661, 0.199),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.366, 0.199),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4491, 0.199),(0, 0.6103, 0.364),(0, 0.4491, 0.2),(0, 0.4097, 0.2),(0, 0.6103, 0.364),(0, 0.0381, 0),(0, 0.4096, 0.2),(0, 0.4097, 0.199),(0, 0.4097, 0.199),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.1864, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.3661, 0.2),(0, 0.3661, 0.199),(0, 0.3661, 0.199),(0, 0.366, 0.199),(0, 0.0381, 0),(0, 0.3661, 0.199),(0, 0.0381, 0),(0, 0.366, 0.199),(0, 0.0381, 0),(0, 0.1458, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.6497, 0.364),(0, 0.4491, 0.2),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.449, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4491, 0.1995),(0, 0.4491, 0.1995),(0, 0.1865, 0),(0, 0.0382, 0),(0, 0.366, 0.2),(0, 0.4097, 0.2),(0, 0.4096, 0.199),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.2207, 0),(0, 0.1865, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.25, 0.117),(0, 0.2501, 0.117),(0, 0.2501, 0.118),(0, 0.25, 0.118),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.2501, 0.117),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.6497, 0.364),(0, 0.4491, 0.2),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.449, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4491, 0.1995),(0, 0.4491, 0.1995),(0, 0.1865, 0),(0, 0.0382, 0),(0, 0.366, 0.2),(0, 0.4097, 0.2),(0, 0.4096, 0.199),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.2207, 0),(0, 0.1865, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.25, 0.117),(0, 0.2501, 0.117),(0, 0.2501, 0.118),(0, 0.25, 0.118),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.2501, 0.117),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.6497, 0.364),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.6843, 0.364),(0, 0.6103, 0.364),(0, 0.449, 0.2),(0, 0.4245, 0.199),(0, 0.0382, 0),(0, 0.4491, 0.2),(0, 0.449, 0.2),(0, 0.1977, 0.082),(0, 0.4491, 0.199),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.4096, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4097, 0.199),(0, 0.4097, 0.2),(0, 0.4246, 0.199),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.4097, 0.1994),(0, 0.4097, 0.1995),(0, 0.4246, 0.1995),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.3661, 0.2),(0, 0.4097, 0.199),(0, 0.4097, 0.2),(0, 0.4097, 0.2),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.4096, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.366, 0.199),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1869, 0),(0, 0.187, 0),(0, 0.1864, 0),(0, 0.1865, 0),(0, 0.187, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1267, 0),(0, 0.1268, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1268, 0),(0, 0.25, 0.117),(0, 0.25, 0.118),(0, 0.2501, 0.118),(0, 0.25, 0.118),(0, 0.2501, 0.118),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.2501, 0.117),(0, 0.3661, 0.2),(0, 0.3661, 0.199),(0, 0.366, 0.2),(0, 0.366, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.3661, 0.199),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.6497, 0.364),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4491, 0.2),(0, 0.0382, 0),(0, 0.449, 0.2),(0, 0.6103, 0.364),(0, 0.4491, 0.199),(0, 0.4245, 0.199),(0, 0.0381, 0),(0, 0.4097, 0.199),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.4246, 0.199),(0, 0.4096, 0.2),(0, 0.4491, 0.199),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.4097, 0.1994),(0, 0.4097, 0.1995),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1864, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.4097, 0.199),(0, 0.3661, 0.2),(0, 0.3661, 0.2),(0, 0.4097, 0.2),(0, 0.4097, 0.2),(0, 0.3661, 0.199),(0, 0.4097, 0.2),(0, 0.366, 0.2),(0, 0.4097, 0.2),(0, 0.366, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.2036, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.211, 0.199),(0, 0.0381, 0),(0, 0.3661, 0.199),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1864, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.25, 0.118),(0, 0.25, 0.117),(0, 0.2501, 0.118),(0, 0.25, 0.118),(0, 0.0381, 0),(0, 0.2501, 0.118),(0, 0.0381, 0),(0, 0.2501, 0.117),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1457, 0)]

HAnimSegment94.displacers.append(HAnimDisplacer104)
HAnimDisplacer105 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinJawDrop")
HAnimDisplacer105.name = "lower_teeth_morphinterpolator"
HAnimDisplacer105.coordIndex = [157]
HAnimDisplacer105.displacements = [(0, -0.2991, 0)]

HAnimSegment94.displacers.append(HAnimDisplacer105)
HAnimDisplacer106 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer106.name = "lower_teeth_morphinterpolator"
HAnimDisplacer106.coordIndex = [1,18,29,30,42,123,157,158,160,207,208,229,264,277,328,334,376,405,456,462,494,504,506,516,543,547,548,564,608,631,649,665,773,779,814,820,821,894,937,944,1012,1013,1034,1039]
HAnimDisplacer106.displacements = [(-0.791, 0, 0),(0, -0.2501, 0),(0, -0.2497, 0.093),(0, -0.2496, 0.093),(-0.745, 0, 0),(-0.751, 0, 0),(0, -0.2501, 0),(0, -0.2497, 0.2),(0, -0.2495, 0),(0.477, 0, 0.3911),(0.473, 0, 0.392),(0.475, 0, 0.3911),(0, 0, 0.322),(0, -0.2496, 0.092),(-0.77, 0, 0),(-0.77, 0, 0),(0.46, 0, 0.126),(0, -0.2496, 0.092),(0.817, 0, 0),(0.817, 0, 0),(0.49, 0, 0.3913),(-0.454, 0, 0.069),(0, 0, 0.068),(0.482, 0, 0.3911),(0, -0.2496, 0.093),(0, -0.2497, 0.799),(0, -0.2497, 0),(0, -0.2497, 0.092),(-0.77, 0, 0),(-0.1539, 0, 0.362),(-0.752, 0, 0),(-0.0413, 0, 0.436),(-0.769, 0, 0),(-0.77, 0, 0),(0, -0.2496, 0.093),(0, -0.2497, 0),(0, -0.2497, 0.092),(0.49, 0, 0.3916),(0.817, 0, 0),(0.482, 0, 0.3911),(0.477, 0, 0.3911),(0.473, 0, 0.392),(0.475, 0, 0.3911),(0, 0, 0.322)]

HAnimSegment94.displacers.append(HAnimDisplacer106)
HAnimDisplacer107 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinLipStretcher")
HAnimDisplacer107.name = "lower_teeth_morphinterpolator"
HAnimDisplacer107.coordIndex = [4,7,43,44,67,105,106,124,127,128,134,175,265,267,269,290,291,292,309,331,356,366,388,419,420,437,459,516,523,525,527,529,533,577,578,592,593,611,612,650,657,658,725,726,744,747,748,754,776,782,789,848,849,851,894,944]
HAnimDisplacer107.displacements = [(0.83, -0.0298, -0.5726),(0.794, -0.0618, -0.3448),(0.784, -0.01, -0.3392),(0.817, 0.0217, -0.565),(0.763, 0.1305, -0.2932),(0.804, 0.0523, -0.5909),(0.798, 0.0769, -0.766),(0.764, 0.0129, -0.31),(0.78, 0.0205, -0.3648),(0.801, 0.0441, -0.5324),(-0.905, -0.0298, -0.5726),(-0.892, 0.0217, -0.565),(0.832, -0.0886, -0.704),(0.82, -0.1219, -0.4674),(0.755, -0.1527, -0.2479),(0.752, -0.0405, -0.2335),(0.816, -0.0099, -0.4522),(0.828, 0.023, -0.686),(0.825, 0.0427, -0.682),(0.812, 0.0101, -0.45),(0.746, 0.1387, -0.2104),(0.824, 0.1239, -0.67),(0.812, 0.0913, -0.4386),(-0.891, -0.0099, -0.4522),(-0.903, 0.023, -0.686),(-0.9, 0.0427, -0.682),(-0.888, 0.0101, -0.45),(-0.887, 0.0913, -0.4386),(0.831, -0.1055, -0.5833),(0.83, -0.013, -0.693),(0.795, -0.1377, -0.3552),(0.819, -0.0461, -0.4571),(0.754, -0.077, -0.2375),(0.814, 0.0034, -0.4507),(0.825, 0.0361, -0.683),(0.792, -0.0255, -0.3404),(0.827, 0.0064, -0.5675),(0.804, 0.0303, -0.5942),(0.798, 0.055, -0.769),(0.765, -0.0092, -0.3132),(0.781, -0.0015, -0.3679),(0.801, 0.0221, -0.5362),(0.804, 0.1116, -0.5824),(0.797, 0.1361, -0.758),(0.764, 0.0721, -0.3016),(0.78, 0.0798, -0.3567),(0.801, 0.1033, -0.5244),(0.824, 0.0647, -0.678),(0.812, 0.0321, -0.4469),(-0.905, -0.013, -0.693),(-0.894, -0.0461, -0.4571),(-0.902, 0.0064, -0.5675),(-0.889, 0.0034, -0.4507),(-0.9, 0.0361, -0.683),(-0.899, 0.0647, -0.678),(-0.887, 0.0321, -0.4469)]

HAnimSegment94.displacers.append(HAnimDisplacer107)
HAnimDisplacer108 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer108.name = "lower_teeth_morphinterpolator"
HAnimDisplacer108.coordIndex = [18,157]
HAnimDisplacer108.displacements = [(0, -0.2691, 0),(0, -0.2691, 0)]

HAnimSegment94.displacers.append(HAnimDisplacer108)
HAnimDisplacer109 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinMouthStretch")
HAnimDisplacer109.name = "lower_teeth_morphinterpolator"
HAnimDisplacer109.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,163,164,165,166,167,168,169,170,171,172,173,174,175,177,178,179,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,207,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,234,236,237,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,439,440,441,442,443,444,445,446,447,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,464,465,466,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,576,577,578,579,580,581,582,583,584,585,586,587,588,589,590,591,592,593,594,595,596,597,598,599,600,601,602,603,604,605,606,607,608,609,610,611,612,613,614,615,616,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,633,634,635,636,637,638,639,640,641,642,643,644,645,646,647,648,649,650,651,652,653,654,655,656,657,658,659,660,661,662,663,664,665,666,667,668,669,670,671,672,673,674,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,691,692,693,694,695,696,697,698,699,700,701,702,703,704,705,706,707,708,709,710,711,712,713,714,715,716,717,718,719,720,721,722,723,724,725,726,727,728,729,730,731,732,733,734,735,736,737,738,739,740,741,742,743,744,745,746,747,748,749,750,751,752,753,754,755,756,757,758,759,760,761,762,763,764,765,766,767,768,769,770,771,772,773,774,775,776,777,778,779,780,781,782,783,784,786,787,788,789,790,791,792,793,794,795,796,797,798,799,800,801,802,803,804,805,806,807,808,809,810,811,812,813,814,815,816,817,818,819,820,821,822,823,824,826,827,828,829,830,831,832,833,834,835,836,837,838,839,840,841,842,843,844,845,846,847,848,849,851,852,853,854,855,856,857,858,859,860,861,863,864,865,866,867,868,869,870,871,872,873,874,875,876,877,878,879,880,881,882,883,884,885,886,887,888,890,891,892,894,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,916,917,918,919,920,921,922,923,924,925,926,927,928,929,930,931,932,933,934,935,936,937,938,939,940,941,942,943,944,945,946,947,948,949,950,953,954,955,957,958,959,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,978,979,980,981,982,983,984,985,986,987,988,989,990,991,992,993,994,995,996,997,998,999,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1012,1014,1015,1016,1017,1018,1019,1020,1021,1022,1023,1024,1025,1026,1027,1028,1029,1030,1031,1032,1033,1034,1035,1036,1037,1039,1040]
HAnimDisplacer109.displacements = [(0, -0.1065, -0.186),(0, -0.0545, -0.087),(0, -0.0583, -0.078),(0, -0.704, -0.3611),(0, -0.7206, -0.2676),(0, -0.7339, -0.2231),(0, -0.9615, -0.6048),(0, -1.0512, -0.4836),(0, -1.0466, -0.4324),(0, -1.1908, -0.8444),(0, -1.3165, -0.7061),(0, -1.2484, -0.6481),(0, -1.3539, -1.0388),(0, -1.5825, -0.848),(0, -1.5406, -0.7622),(0, -1.505, -1.1029),(0, -1.7601, -0.9216),(0, -1.7036, -0.8295),(0, -1.6201, -1.1436),(0, -1.8417, -0.9553),(0, -1.7781, -0.8606),(0, -1.8625, -0.9637),(0, -1.795, -0.8681),(0, -0.0577, -0.08),(0, -0.5348, -0.232),(0, -0.9055, -0.4015),(0, -1.1743, -0.6248),(0, -1.3637, -0.8192),(0, -1.5099, -0.8797),(0, -1.5768, -0.9072),(0, -1.5921, -0.9136),(0, -0.0576, -0.078),(0, -0.0591, -0.078),(0, -0.7415, -0.2084),(0, -1.055, -0.4173),(0, -1.2974, -0.642),(0, -1.5692, -0.7484),(0, -1.7298, -0.815),(0, -1.8046, -0.8452),(0, -1.8659, -0.874),(0, -1.7874, -0.8416),(0, -1.615, -0.7701),(0, -1.3274, -0.6534),(0, -1.0777, -0.427),(0, -0.7467, -0.213),(0, -0.1553, 0.015),(0, -0.0644, -0.042),(0, -0.7664, -0.033),(0, -0.7689, -0.0339),(0, -0.0634, -0.042),(0, -1.9059, -0.637),(0, -1.9159, -0.641),(0, -1.9651, -0.662),(0, -1.9527, -0.657),(0, -1.9403, -0.651),(0, -1.8842, -0.6281),(0, -1.8406, -0.6099),(0, -1.8942, -0.6329),(0, -1.8527, -0.6155),(0, -1.7298, -0.5639),(0, -1.6929, -0.5485),(0, -1.8105, -0.5972),(0, -1.6682, -0.5383),(0, -1.3949, -0.5177),(0, -1.355, -0.4956),(0, -1.6322, -0.5233),(0, -1.321, -0.4833),(0, -1.1574, -0.279),(0, -1.1363, -0.2721),(0, -1.318, -0.4939),(0, -1.0967, -0.2592),(0, -0.8375, -0.0573),(0, -0.8302, -0.0548),(0, -1.0795, -0.2535),(0, -0.0637, -0.046),(0, -0.0703, -0.039),(0, -0.7482, -0.002),(0, -0.7489, -0.0016),(0, -0.0697, -0.039),(0, -1.9268, -0.611),(0, -1.9345, -0.614),(0, -1.9675, -0.628),(0, -1.9591, -0.625),(0, -1.9375, -0.616),(0, -1.8976, -0.599),(0, -1.8667, -0.5866),(0, -1.9067, -0.603),(0, -1.8414, -0.5763),(0, -1.7521, -0.5397),(0, -1.7269, -0.5285),(0, -1.8129, -0.5641),(0, -1.6438, -0.4937),(0, -1.4178, -0.5037),(0, -1.4002, -0.4982),(0, -1.6176, -0.4833),(0, -1.3245, -0.4748),(0, -1.1841, -0.2643),(0, -1.1681, -0.2591),(0, -1.3076, -0.4695),(0, -1.0766, -0.229),(0, -0.8763, -0.0746),(0, -0.8694, -0.0722),(0, -1.0656, -0.2254),(0, -0.0596, -0.069),(0, -0.7203, -0.1696),(0, -0.7228, -0.1699),(0, -0.0585, -0.068),(0, -1.8312, -0.8135),(0, -1.8412, -0.8172),(0, -1.8935, -0.839),(0, -1.8812, -0.8341),(0, -1.8687, -0.8294),(0, -1.8127, -0.8059),(0, -1.7649, -0.7855),(0, -1.8205, -0.809),(0, -1.782, -0.7924),(0, -1.6566, -0.7409),(0, -1.6173, -0.725),(0, -1.7367, -0.7736),(0, -1.5957, -0.7161),(0, -1.3589, -0.6344),(0, -1.3327, -0.6263),(0, -1.5581, -0.7005),(0, -1.3074, -0.6184),(0, -1.1149, -0.4072),(0, -1.0935, -0.4002),(0, -1.2408, -0.603),(0, -1.0551, -0.3876),(0, -0.7904, -0.1935),(0, -0.783, -0.1908),(0, -1.0471, -0.3314),(0, -0.0586, -0.075),(0, -0.1083, -0.177),(0, 0, -0.066),(0, -0.7206, -0.2676),(0, -0.704, -0.3611),(0, -0.5348, -0.232),(0, -0.7339, -0.2231),(0, -1.0512, -0.4836),(0, -0.9615, -0.6048),(0, -0.9055, -0.4015),(0, -1.0466, -0.4324),(0, -1.3165, -0.7061),(0, -1.1908, -0.8444),(0, -1.1743, -0.6248),(0, -1.2484, -0.6481),(0, -1.5825, -0.848),(0, -1.3539, -1.0388),(0, -1.3637, -0.8192),(0, -1.5406, -0.7622),(0, -1.7601, -0.9216),(0, -1.505, -1.1029),(0, -1.5099, -0.8797),(0, -1.7036, -0.8295),(0, -1.8417, -0.9553),(0, -1.6201, -1.1436),(0, -1.5768, -0.9072),(0, -1.7781, -0.8606),(0, -1.6495, -1.1546),(0, -0.7415, -0.2084),(0, -1.055, -0.4173),(0, -1.2974, -0.642),(0, -1.5692, -0.7484),(0, -1.7298, -0.815),(0, -1.8046, -0.8452),(0, -1.8191, -0.8516),(0, -1.8659, -0.874),(0, -1.8834, -0.8815),(0, -1.7874, -0.8416),(0, -1.615, -0.7701),(0, -1.3274, -0.6534),(0, -1.0777, -0.427),(0, -0.7467, -0.213),(0, 0.0049, -0.039),(0, -0.7482, -0.002),(0, -0.7489, -0.0016),(0, -1.9268, -0.611),(0, -1.9345, -0.614),(0, -1.9675, -0.628),(0, -1.9591, -0.625),(0, -1.9375, -0.616),(0, -1.8976, -0.599),(0, -1.8667, -0.5866),(0, -1.9067, -0.603),(0, -1.8414, -0.5763),(0, -1.7521, -0.5397),(0, -1.7269, -0.5285),(0, -1.8129, -0.5641),(0, -1.6438, -0.4937),(0, -1.4178, -0.5037),(0, -1.4002, -0.4982),(0, -1.6176, -0.4833),(0, -1.3245, -0.4748),(0, -1.1841, -0.2643),(0, -1.1681, -0.2591),(0, -1.3076, -0.4695),(0, -1.0766, -0.229),(0, -0.9004, -0.0791),(0, -0.8935, -0.0766),(0, -1.0656, -0.2254),(0, -0.7203, -0.1696),(0, -0.7228, -0.1699),(0, -1.8412, -0.8172),(0, -1.8312, -0.8135),(0, -1.8935, -0.839),(0, -1.8812, -0.8341),(0, -1.8127, -0.8059),(0, -1.8687, -0.8294),(0, -1.7649, -0.7855),(0, -1.8205, -0.809),(0, -1.6566, -0.7409),(0, -1.782, -0.7924),(0, -1.6173, -0.725),(0, -1.7367, -0.7736),(0, -1.3589, -0.6344),(0, -1.5957, -0.7161),(0, -1.3327, -0.6263),(0, -1.5581, -0.7005),(0, -1.1149, -0.4072),(0, -1.3074, -0.6184),(0, -1.0935, -0.4002),(0, -1.2408, -0.603),(0, -0.7904, -0.1935),(0, -1.0551, -0.3876),(0, -0.783, -0.1908),(0, -1.0471, -0.3314),(0, -0.1433, 0.025),(0, -0.7664, -0.033),(0, -0.7689, -0.0339),(0, -1.9059, -0.637),(0, -1.9159, -0.641),(0, -1.9651, -0.662),(0, -1.9527, -0.657),(0, -1.9403, -0.651),(0, -1.8842, -0.6281),(0, -1.8406, -0.6099),(0, -1.8942, -0.6329),(0, -1.8527, -0.6155),(0, -1.7298, -0.5639),(0, -1.6929, -0.5485),(0, -1.8105, -0.5972),(0, -1.6682, -0.5383),(0, -1.3949, -0.5177),(0, -1.355, -0.4956),(0, -1.6322, -0.5233),(0, -1.321, -0.4833),(0, -1.1574, -0.279),(0, -1.1363, -0.2721),(0, -1.318, -0.4939),(0, -1.0967, -0.2592),(0, -0.8616, -0.0618),(0, -0.8542, -0.0593),(0, -1.0795, -0.2535),(0, -0.1561, 0.05),(0, -0.1556, 0.05),(0, -0.4869, -0.267),(0, -0.494, -0.212),(0, -0.8772, -0.4194),(0, -0.8773, -0.3752),(0, -1.1631, -0.6652),(0, -1.1733, -0.4664),(0, -1.3976, -0.9042),(0, -1.3776, -0.7285),(0, -1.5806, -0.9898),(0, -1.61, -0.8652),(0, -1.7302, -1.047),(0, -1.7222, -0.9111),(0, -1.8119, -1.076),(0, -1.7644, -0.9289),(0, -0.4938, -0.17),(0, -0.8728, -0.3493),(0, -1.148, -0.5188),(0, -1.3968, -0.6735),(0, -1.6487, -0.7827),(0, -1.7626, -0.829),(0, -1.8048, -0.8467),(0, -1.8764, -0.9055),(0, -1.8295, -0.8866),(0, -1.7057, -0.8351),(0, -1.4634, -0.7346),(0, -1.1956, -0.5538),(0, -0.9296, -0.3747),(0, -0.5003, -0.194),(0, -0.0662, -0.087),(0, -0.7097, -0.2823),(0, -0.887, -0.3924),(0, -1.0702, -0.5197),(0, -1.2008, -0.6248),(0, -1.2362, -0.7165),(0, -1.2957, -0.7299),(0, -0.5636, -0.023),(0, -1.9467, -0.62),(0, -1.9021, -0.602),(0, -1.7838, -0.5524),(0, -1.5453, -0.4535),(0, -1.2347, -0.3714),(0, -0.9698, -0.1732),(0, -0.4961, -0.167),(0, -0.7461, -0.2067),(0, -0.4946, -0.167),(0, -0.0517, -0.073),(0, -1.8129, -0.8439),(0, -1.8551, -0.8619),(0, -1.8829, -0.8734),(0, -1.8406, -0.8555),(0, -1.8359, -0.8539),(0, -1.7659, -0.8248),(0, -1.7697, -0.8265),(0, -1.8406, -0.8556),(0, -1.7128, -0.803),(0, -1.6029, -0.7577),(0, -1.6561, -0.7789),(0, -1.766, -0.8252),(0, -1.4721, -0.7034),(0, -1.3129, -0.6442),(0, -1.3988, -0.6707),(0, -1.603, -0.7573),(0, -1.2009, -0.5337),(0, -1.0686, -0.4187),(0, -1.1504, -0.5154),(0, -1.313, -0.6441),(0, -0.9394, -0.3468),(0, -0.7464, -0.2064),(0, -0.8729, -0.3486),(0, -1.0683, -0.4185),(0, -0.1426, 0.02),(0, -0.5403, -0.019),(0, -0.8071, -0.0218),(0, -0.5629, -0.023),(0, -0.0584, -0.036),(0, -1.9168, -0.607),(0, -1.9545, -0.623),(0, -1.9766, -0.633),(0, -1.9399, -0.616),(0, -1.9306, -0.613),(0, -1.8661, -0.5866),(0, -1.8737, -0.5897),(0, -1.9382, -0.616),(0, -1.8083, -0.5621),(0, -1.7037, -0.5196),(0, -1.7583, -0.5417),(0, -1.8629, -0.5853),(0, -1.57, -0.4635),(0, -1.3486, -0.4658),(0, -1.5213, -0.4435),(0, -1.699, -0.5172),(0, -1.2489, -0.3758),(0, -1.1276, -0.2458),(0, -1.2203, -0.3669),(0, -1.3442, -0.4642),(0, -0.9778, -0.1758),(0, -0.8115, -0.0233),(0, -0.962, -0.1706),(0, -1.1232, -0.2444),(0, -0.5187, -0.092),(0, -0.7781, -0.1126),(0, -0.5171, -0.091),(0, -0.055, -0.054),(0, -1.8655, -0.7234),(0, -1.9052, -0.7402),(0, -1.9314, -0.7505),(0, -1.8907, -0.7337),(0, -1.8855, -0.7309),(0, -1.817, -0.7028),(0, -1.8223, -0.705),(0, -1.8907, -0.7341),(0, -1.7623, -0.6803),(0, -1.6539, -0.6353),(0, -1.7078, -0.658),(0, -1.8162, -0.703),(0, -1.5224, -0.581),(0, -1.3379, -0.5637),(0, -1.4247, -0.5904),(0, -1.6531, -0.6349),(0, -1.2254, -0.4532),(0, -1.098, -0.3301),(0, -1.2082, -0.3781),(0, -1.3382, -0.5635),(0, -0.9503, -0.26),(0, -0.7789, -0.1129),(0, -1.0301, -0.2431),(0, -1.0972, -0.3299),(0, -0.146, 0.039),(0, -0.5, -0.247),(0, -0.482, -0.154),(0, -0.8772, -0.4194),(0, -0.8773, -0.3752),(0, -1.1631, -0.6652),(0, -1.1733, -0.4664),(0, -1.3976, -0.9042),(0, -1.3776, -0.7285),(0, -1.5806, -0.9898),(0, -1.61, -0.8652),(0, -1.7302, -1.047),(0, -1.7222, -0.9111),(0, -1.8119, -1.076),(0, -1.7644, -0.9289),(0, -0.4756, -0.057),(0, -0.8728, -0.3493),(0, -1.148, -0.5188),(0, -1.3968, -0.6735),(0, -1.6487, -0.7827),(0, -1.7626, -0.829),(0, -1.8048, -0.8467),(0, -1.8764, -0.9055),(0, -1.8295, -0.8866),(0, -1.7057, -0.8351),(0, -1.4634, -0.7346),(0, -1.1956, -0.5538),(0, -0.9296, -0.3747),(0, -0.4859, -0.074),(0, -0.2957, -0.074),(0, -0.7097, -0.2823),(0, -0.887, -0.3924),(0, -1.0702, -0.5197),(0, -1.2008, -0.6248),(0, -1.2362, -0.7165),(0, -1.2957, -0.7299),(0, -0.4989, 0.039),(0, -1.9467, -0.62),(0, -1.9021, -0.602),(0, -1.7838, -0.5524),(0, -1.5453, -0.4535),(0, -1.2347, -0.3714),(0, -0.9698, -0.1732),(0, -0.4769, -0.056),(0, -0.7461, -0.2067),(0, -0.4759, -0.056),(0, -1.8129, -0.8439),(0, -1.8551, -0.8619),(0, -1.8829, -0.8734),(0, -1.8406, -0.8555),(0, -1.8359, -0.8539),(0, -1.7659, -0.8248),(0, -1.7697, -0.8265),(0, -1.8406, -0.8556),(0, -1.7128, -0.803),(0, -1.6029, -0.7577),(0, -1.6561, -0.7789),(0, -1.766, -0.8252),(0, -1.4721, -0.7034),(0, -1.3129, -0.6442),(0, -1.3988, -0.6707),(0, -1.603, -0.7573),(0, -1.2009, -0.5337),(0, -1.0686, -0.4187),(0, -1.1504, -0.5154),(0, -1.313, -0.6441),(0, -0.9394, -0.3468),(0, -0.7464, -0.2064),(0, -0.8729, -0.3486),(0, -1.0683, -0.4185),(0, -0.4994, 0.039),(0, -0.8071, -0.0218),(0, -0.4985, 0.04),(0, -1.9168, -0.607),(0, -1.9545, -0.623),(0, -1.9766, -0.633),(0, -1.9399, -0.616),(0, -1.9306, -0.613),(0, -1.8661, -0.5866),(0, -1.8737, -0.5897),(0, -1.9382, -0.616),(0, -1.8083, -0.5621),(0, -1.7037, -0.5196),(0, -1.7583, -0.5417),(0, -1.8629, -0.5853),(0, -1.57, -0.4635),(0, -1.3486, -0.4658),(0, -1.5213, -0.4435),(0, -1.699, -0.5172),(0, -1.2489, -0.3758),(0, -1.1276, -0.2458),(0, -1.2203, -0.3669),(0, -1.3442, -0.4642),(0, -0.9778, -0.1758),(0, -0.8115, -0.0233),(0, -0.962, -0.1706),(0, -1.1232, -0.2444),(0, -0.4884, -0.008),(0, -0.7781, -0.1126),(0, -0.4874, -0.007),(0, -1.8655, -0.7234),(0, -1.9052, -0.7402),(0, -1.9314, -0.7505),(0, -1.8907, -0.7337),(0, -1.8855, -0.7309),(0, -1.817, -0.7028),(0, -1.8223, -0.705),(0, -1.8907, -0.7341),(0, -1.7623, -0.6803),(0, -1.6539, -0.6353),(0, -1.7078, -0.658),(0, -1.8162, -0.703),(0, -1.5224, -0.581),(0, -1.3379, -0.5637),(0, -1.4247, -0.5904),(0, -1.6531, -0.6349),(0, -1.2254, -0.4532),(0, -1.098, -0.3301),(0, -1.2082, -0.3781),(0, -1.3382, -0.5635),(0, -0.9503, -0.26),(0, -0.7789, -0.1129),(0, -1.0301, -0.2431),(0, -1.0972, -0.3299),(0, -0.146, 0.039),(0, -0.1182, -0.136),(0, -0.0579, -0.078),(0, -0.7102, -0.3113),(0, -0.4881, -0.318),(0, -0.4975, -0.223),(0, -0.5047, -0.184),(0, -1.0276, -0.5587),(0, -0.8639, -0.4673),(0, -0.8872, -0.3755),(0, -0.8831, -0.3509),(0, -1.2938, -0.7813),(0, -1.0861, -0.7078),(0, -1.1858, -0.59),(0, -1.1422, -0.5339),(0, -1.4918, -0.9503),(0, -1.2744, -0.9987),(0, -1.4433, -0.79),(0, -1.3904, -0.6871),(0, -1.6613, -1.022),(0, -1.432, -1.0735),(0, -1.6863, -0.8903),(0, -1.6366, -0.8024),(0, -1.7848, -1.0661),(0, -1.5685, -1.126),(0, -1.811, -0.9418),(0, -1.7497, -0.8489),(0, -1.8166, -1.0783),(0, -1.6457, -1.1525),(0, -1.8578, -0.9613),(0, -1.792, -0.8667),(0, -0.7171, -0.2649),(0, -1.0242, -0.4788),(0, -1.2356, -0.6897),(0, -1.5139, -0.8249),(0, -1.676, -0.8926),(0, -1.7506, -0.9228),(0, -1.7685, -0.9303),(0, -0.4929, -0.221),(0, -0.7897, -0.3909),(0, -1.068, -0.5294),(0, -1.3198, -0.6671),(0, -1.477, -0.8697),(0, -1.58, -0.9127),(0, -1.6193, -0.9286),(0, -0.4951, -0.17),(0, -0.8728, -0.3491),(0, -1.1494, -0.5181),(0, -1.3979, -0.6731),(0, -1.6524, -0.7825),(0, -1.7671, -0.8296),(0, -1.8093, -0.8471),(0, -1.881, -0.884),(0, -1.834, -0.8647),(0, -1.71, -0.8133),(0, -1.4695, -0.7138),(0, -1.1994, -0.5404),(0, -0.9361, -0.3561),(0, -0.4923, -0.173),(0, -0.0564, -0.081),(0, -0.0588, -0.078),(0, -0.7392, -0.2088),(0, -1.0519, -0.4172),(0, -1.295, -0.6421),(0, -1.5518, -0.742),(0, -1.7155, -0.8101),(0, -1.791, -0.8416),(0, -1.8078, -0.8482),(0, -1.8602, -0.8993),(0, -1.7795, -0.865),(0, -1.6027, -0.7922),(0, -1.3264, -0.6698),(0, -1.0732, -0.4441),(0, -0.74, -0.2305),(0, -0.1465, -0.05),(0, -0.506, -0.232),(0, -0.7291, -0.2822),(0, -0.8957, -0.3897),(0, -1.063, -0.5088),(0, -1.1763, -0.4855),(0, -1.1831, -0.6108),(0, -1.19, -0.613),(0, -0.0585, -0.078),(0, -0.7456, -0.2093),(0, -1.8392, -0.8578),(0, -1.7646, -0.8272),(0, -1.6015, -0.7603),(0, -1.3125, -0.6458),(0, -1.0679, -0.4204),(0, -0.0587, -0.074),(0, -0.7116, -0.1949),(0, -0.7142, -0.1962),(0, -0.0576, -0.074),(0, -0.535, -0.037),(0, -0.8007, -0.0447),(0, -0.5574, -0.042),(0, -0.0574, -0.041),(0, -1.8167, -0.8455),(0, -1.8267, -0.8502),(0, -1.8796, -0.8719),(0, -1.8673, -0.867),(0, -1.9028, -0.6353),(0, -1.9419, -0.652),(0, -1.9665, -0.662),(0, -1.9274, -0.646),(0, -1.8559, -0.8623),(0, -1.7999, -0.8389),(0, -1.7514, -0.8186),(0, -1.806, -0.842),(0, -1.9205, -0.643),(0, -1.8536, -0.6154),(0, -1.8597, -0.6179),(0, -1.9265, -0.646),(0, -1.7682, -0.8262),(0, -1.6428, -0.7745),(0, -1.6037, -0.7579),(0, -1.7221, -0.8072),(0, -1.7983, -0.5927),(0, -1.6904, -0.5484),(0, -1.7452, -0.5703),(0, -1.852, -0.6146),(0, -1.5829, -0.7495),(0, -1.3522, -0.6562),(0, -1.3261, -0.6481),(0, -1.5445, -0.7331),(0, -1.5582, -0.493),(0, -1.3386, -0.4897),(0, -1.5082, -0.4724),(0, -1.689, -0.5467),(0, -1.3007, -0.6402),(0, -1.107, -0.4312),(0, -1.0854, -0.4241),(0, -1.2341, -0.6248),(0, -1.2432, -0.3952),(0, -1.1195, -0.2666),(0, -1.2141, -0.3862),(0, -1.3368, -0.489),(0, -1.0473, -0.4117),(0, -0.7817, -0.2192),(0, -0.7742, -0.2165),(0, -1.1332, -0.4157),(0, -0.9709, -0.1968),(0, -0.8026, -0.0454),(0, -0.955, -0.1917),(0, -1.1176, -0.266),(0, -0.1558, 0.05),(0, -0.0578, -0.079),(0, -0.5642, -0.023),(0, -0.7735, -0.0103),(0, -0.5631, -0.023),(0, -0.0651, -0.037),(0, -0.0654, -0.038),(0, -0.7731, -0.0101),(0, -0.7757, -0.011),(0, -0.0644, -0.037),(0, -1.9252, -0.611),(0, -1.9521, -0.622),(0, -1.9682, -0.628),(0, -1.9414, -0.617),(0, -1.919, -0.608),(0, -1.9291, -0.612),(0, -1.9751, -0.631),(0, -1.9637, -0.627),(0, -1.9221, -0.61),(0, -1.8753, -0.5904),(0, -1.8822, -0.5927),(0, -1.929, -0.612),(0, -1.9514, -0.621),(0, -1.8961, -0.599),(0, -1.8536, -0.581),(0, -1.9074, -0.604),(0, -1.8014, -0.5594),(0, -1.7245, -0.5282),(0, -1.7652, -0.5444),(0, -1.8421, -0.5766),(0, -1.8628, -0.5848),(0, -1.7415, -0.5351),(0, -1.706, -0.5205),(0, -1.8229, -0.5683),(0, -1.563, -0.4608),(0, -1.3896, -0.495),(0, -1.5279, -0.4463),(0, -1.6599, -0.5013),(0, -1.6783, -0.5083),(0, -1.4013, -0.4985),(0, -1.3651, -0.4717),(0, -1.6439, -0.4939),(0, -1.2452, -0.3747),(0, -1.1554, -0.2549),(0, -1.2241, -0.3682),(0, -1.3124, -0.4528),(0, -1.3284, -0.4585),(0, -1.1651, -0.2581),(0, -1.1443, -0.2512),(0, -1.3235, -0.4745),(0, -0.9757, -0.1751),(0, -0.8434, -0.0342),(0, -0.9641, -0.1713),(0, -1.0933, -0.2345),(0, -1.1026, -0.2376),(0, -0.8461, -0.0351),(0, -0.8389, -0.0327),(0, -1.0857, -0.232),(0, -0.0621, -0.056),(0, -0.7436, -0.1011),(0, -0.7463, -0.1014),(0, -0.061, -0.055),(0, -1.8685, -0.7246),(0, -1.8785, -0.7284),(0, -1.9291, -0.7493),(0, -1.9168, -0.7444),(0, -1.9053, -0.7398),(0, -1.8493, -0.716),(0, -1.8032, -0.6976),(0, -1.8577, -0.7203),(0, -1.8176, -0.7037),(0, -1.6931, -0.6516),(0, -1.6555, -0.6362),(0, -1.7739, -0.6851),(0, -1.6322, -0.6269),(0, -1.3773, -0.5756),(0, -1.351, -0.5677),(0, -1.5955, -0.6114),(0, -1.3251, -0.5596),(0, -1.1362, -0.3426),(0, -1.1149, -0.3357),(0, -1.3003, -0.5519),(0, -1.0762, -0.323),(0, -0.814, -0.1249),(0, -0.8066, -0.1224),(0, -1.0589, -0.3173),(0, -0.0608, -0.062),(0, -0.5022, -0.147),(0, -0.7547, -0.1813),(0, -0.5007, -0.146),(0, -0.1449, 0.028),(0, -1.8273, -0.8116),(0, -1.8688, -0.8289),(0, -1.8958, -0.8398),(0, -1.8543, -0.8225),(0, -1.8488, -0.8203),(0, -1.7796, -0.7917),(0, -1.7851, -0.7941),(0, -1.8543, -0.8227),(0, -1.7257, -0.7701),(0, -1.6165, -0.7244),(0, -1.6696, -0.7469),(0, -1.7787, -0.7915),(0, -1.4859, -0.6701),(0, -1.3205, -0.6224),(0, -1.4064, -0.649),(0, -1.6167, -0.7245),(0, -1.2076, -0.5119),(0, -1.0766, -0.3946),(0, -1.1583, -0.4914),(0, -1.3197, -0.6223),(0, -0.9294, -0.3241),(0, -0.7552, -0.1818),(0, -0.9511, -0.3416),(0, -1.0761, -0.3945),(0, -0.1436, 0.025),(0, -0.0856, -0.139),(0, -0.488, -0.157),(0, -0.7102, -0.3113),(0, -0.4771, -0.317),(0, -0.4861, -0.156),(0, -0.7171, -0.2649),(0, -0.4886, -0.067),(0, -0.8872, -0.3755),(0, -1.0276, -0.5587),(0, -0.8639, -0.4673),(0, -0.7897, -0.3909),(0, -1.0242, -0.4788),(0, -0.8831, -0.3509),(0, -1.1858, -0.59),(0, -1.2938, -0.7813),(0, -1.0861, -0.7078),(0, -1.068, -0.5294),(0, -1.2356, -0.6897),(0, -1.1422, -0.5339),(0, -1.4433, -0.79),(0, -1.4918, -0.9503),(0, -1.2744, -0.9987),(0, -1.3198, -0.6671),(0, -1.5139, -0.8249),(0, -1.3904, -0.6871),(0, -1.6863, -0.8903),(0, -1.6613, -1.022),(0, -1.432, -1.0735),(0, -1.477, -0.8697),(0, -1.676, -0.8926),(0, -1.6366, -0.8024),(0, -1.811, -0.9418),(0, -1.7848, -1.0661),(0, -1.5685, -1.126),(0, -1.58, -0.9127),(0, -1.7506, -0.9228),(0, -1.7497, -0.8489),(0, -1.8578, -0.9613),(0, -1.6457, -1.1525),(0, -1.6193, -0.9286),(0, -1.792, -0.8667),(0, -0.7392, -0.2088),(0, -0.4764, -0.057),(0, -1.0519, -0.4172),(0, -0.8728, -0.3491),(0, -1.295, -0.6421),(0, -1.1494, -0.5181),(0, -1.5518, -0.742),(0, -1.3979, -0.6731),(0, -1.7155, -0.8101),(0, -1.6524, -0.7825),(0, -1.791, -0.8416),(0, -1.7671, -0.8296),(0, -1.8093, -0.8471),(0, -1.8602, -0.8993),(0, -1.881, -0.884),(0, -1.881, -0.9079),(0, -1.7795, -0.865),(0, -1.834, -0.8647),(0, -1.6027, -0.7922),(0, -1.71, -0.8133),(0, -1.3264, -0.6698),(0, -1.4695, -0.7138),(0, -1.0732, -0.4441),(0, -1.1994, -0.5404),(0, -0.74, -0.2305),(0, -0.9361, -0.3561),(0, -0.4748, -0.059),(0, -0.1465, -0.05),(0, -0.4914, -0.16),(0, -0.7291, -0.2822),(0, -0.8957, -0.3897),(0, -1.063, -0.5088),(0, -1.1763, -0.4855),(0, -1.1831, -0.6108),(0, -0.4993, 0.039),(0, -0.7735, -0.0103),(0, -0.4986, 0.039),(0, -1.9252, -0.611),(0, -1.9521, -0.622),(0, -1.9682, -0.628),(0, -1.9414, -0.617),(0, -1.9221, -0.61),(0, -1.8753, -0.5904),(0, -1.8822, -0.5927),(0, -1.929, -0.612),(0, -1.8014, -0.5594),(0, -1.7245, -0.5282),(0, -1.7652, -0.5444),(0, -1.8421, -0.5766),(0, -1.563, -0.4608),(0, -1.3896, -0.495),(0, -1.5279, -0.4463),(0, -1.6599, -0.5013),(0, -1.2452, -0.3747),(0, -1.1554, -0.2549),(0, -1.2241, -0.3682),(0, -1.3124, -0.4528),(0, -0.9757, -0.1751),(0, -0.8674, -0.0387),(0, -0.9641, -0.1713),(0, -1.0933, -0.2345),(0, -0.7116, -0.1949),(0, -0.48, -0.043),(0, -0.7456, -0.2093),(0, -0.7142, -0.1962),(0, -0.7547, -0.1813),(0, -0.4791, -0.042),(0, -1.8267, -0.8502),(0, -1.8273, -0.8116),(0, -1.8167, -0.8455),(0, -1.8537, -0.8641),(0, -1.8796, -0.8719),(0, -1.8688, -0.8289),(0, -1.8673, -0.867),(0, -1.8958, -0.8398),(0, -1.8392, -0.8578),(0, -1.8543, -0.8225),(0, -1.7999, -0.8389),(0, -1.8488, -0.8203),(0, -1.8559, -0.8623),(0, -1.7646, -0.8272),(0, -1.7514, -0.8186),(0, -1.7796, -0.7917),(0, -1.806, -0.842),(0, -1.7851, -0.7941),(0, -1.8543, -0.8227),(0, -1.6428, -0.7745),(0, -1.7257, -0.7701),(0, -1.7682, -0.8262),(0, -1.6015, -0.7603),(0, -1.6037, -0.7579),(0, -1.6165, -0.7244),(0, -1.7221, -0.8072),(0, -1.6696, -0.7469),(0, -1.7787, -0.7915),(0, -1.3522, -0.6562),(0, -1.4859, -0.6701),(0, -1.5829, -0.7495),(0, -1.3125, -0.6458),(0, -1.3261, -0.6481),(0, -1.3205, -0.6224),(0, -1.5445, -0.7331),(0, -1.4064, -0.649),(0, -1.6167, -0.7245),(0, -1.107, -0.4312),(0, -1.2076, -0.5119),(0, -1.3007, -0.6402),(0, -1.0679, -0.4204),(0, -1.0854, -0.4241),(0, -1.0766, -0.3946),(0, -1.2341, -0.6248),(0, -1.1583, -0.4914),(0, -1.3197, -0.6223),(0, -0.7817, -0.2192),(0, -0.9294, -0.3241),(0, -1.0473, -0.4117),(0, -0.7742, -0.2165),(0, -0.7552, -0.1818),(0, -1.1332, -0.4157),(0, -0.9511, -0.3416),(0, -1.0761, -0.3945),(0, -0.1423, 0.02),(0, -0.4967, 0.027),(0, -0.7731, -0.0101),(0, -0.8007, -0.0447),(0, -0.7757, -0.011),(0, -0.4957, 0.027),(0, -1.9028, -0.6353),(0, -1.9291, -0.612),(0, -1.919, -0.608),(0, -1.9419, -0.652),(0, -1.9751, -0.631),(0, -1.9665, -0.662),(0, -1.9637, -0.627),(0, -1.9274, -0.646),(0, -1.9205, -0.643),(0, -1.8961, -0.599),(0, -1.9514, -0.621),(0, -1.8536, -0.6154),(0, -1.8536, -0.581),(0, -1.8597, -0.6179),(0, -1.9074, -0.604),(0, -1.9265, -0.646),(0, -1.7983, -0.5927),(0, -1.7415, -0.5351),(0, -1.8628, -0.5848),(0, -1.6904, -0.5484),(0, -1.706, -0.5205),(0, -1.7452, -0.5703),(0, -1.8229, -0.5683),(0, -1.852, -0.6146),(0, -1.5582, -0.493),(0, -1.4013, -0.4985),(0, -1.6783, -0.5083),(0, -1.3386, -0.4897),(0, -1.3651, -0.4717),(0, -1.5082, -0.4724),(0, -1.6439, -0.4939),(0, -1.689, -0.5467),(0, -1.2432, -0.3952),(0, -1.1651, -0.2581),(0, -1.3284, -0.4585),(0, -1.1195, -0.2666),(0, -1.1443, -0.2512),(0, -1.2141, -0.3862),(0, -1.3235, -0.4745),(0, -1.3368, -0.489),(0, -0.9709, -0.1968),(0, -0.8702, -0.0396),(0, -1.1026, -0.2376),(0, -0.8026, -0.0454),(0, -0.863, -0.0372),(0, -0.955, -0.1917),(0, -1.0857, -0.232),(0, -1.1176, -0.266),(0, -0.7436, -0.1011),(0, -0.7463, -0.1014),(0, -1.8785, -0.7284),(0, -1.8685, -0.7246),(0, -1.9291, -0.7493),(0, -1.9168, -0.7444),(0, -1.8493, -0.716),(0, -1.9053, -0.7398),(0, -1.8032, -0.6976),(0, -1.8577, -0.7203),(0, -1.6931, -0.6516),(0, -1.8176, -0.7037),(0, -1.6555, -0.6362),(0, -1.7739, -0.6851),(0, -1.3773, -0.5756),(0, -1.6322, -0.6269),(0, -1.351, -0.5677),(0, -1.5955, -0.6114),(0, -1.1362, -0.3426),(0, -1.3251, -0.5596),(0, -1.1149, -0.3357),(0, -1.3003, -0.5519),(0, -0.814, -0.1249),(0, -1.0762, -0.323),(0, -0.8066, -0.1224),(0, -1.0589, -0.3173),(0, -0.1558, 0.05),(0, -0.1458, 0.039)]

HAnimSegment94.displacers.append(HAnimDisplacer109)

HAnimJoint89.children.append(HAnimSegment94)
HAnimSegment110 = x3d.HAnimSegment(DEF="hanim_Hair")
HAnimSegment110.name = "hair"

HAnimJoint89.children.append(HAnimSegment110)
HAnimSegment111 = x3d.HAnimSegment(DEF="hanim___0")
HAnimSegment111.name = "__0"

HAnimJoint89.children.append(HAnimSegment111)
HAnimSegment112 = x3d.HAnimSegment(DEF="hanim___2")
HAnimSegment112.name = "__2"

HAnimJoint89.children.append(HAnimSegment112)
HAnimSegment113 = x3d.HAnimSegment(DEF="hanim___4")
HAnimSegment113.name = "__4"
HAnimDisplacer114 = x3d.HAnimDisplacer(DEF="__4_MorphInterpolator_JinLipsPart")
HAnimDisplacer114.name = "__4_morphinterpolator"
HAnimDisplacer114.coordIndex = [0,2]
HAnimDisplacer114.displacements = [(0, -0.4319, 0.0434),(0, -0.4133, -0.0174)]

HAnimSegment113.displacers.append(HAnimDisplacer114)

HAnimJoint89.children.append(HAnimSegment113)
HAnimSegment115 = x3d.HAnimSegment(DEF="hanim_Center_lower_vermillion_lip")
HAnimSegment115.name = "center_lower_vermillion_lip"
Transform116 = x3d.Transform(DEF="Center_lower_vermillion_lip_JinBlink")
Transform116.translation = [0,8.315,13.52]
Shape117 = x3d.Shape()
Appearance118 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape117.appearance = Appearance118
IndexedFaceSet119 = x3d.IndexedFaceSet(DEF="Center_lower_vermillion_lip-FACES_JinBlink")
IndexedFaceSet119.coordIndex = [1,0,4,-1,0,1,2,-1,1,4,3,-1,3,5,1,-1]
IndexedFaceSet119.creaseAngle = 3.14159
IndexedFaceSet119.solid = False
IndexedFaceSet119.texCoordIndex = [2,1,0,-1,1,2,3,-1,4,6,5,-1,5,7,4,-1]
TextureCoordinate120 = x3d.TextureCoordinate(DEF="Center_lower_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate120.point = [(0.2441, 0.6554),(0.2548, 0.6554),(0.2557, 0.6351),(0.2652, 0.6384),(0.2557, 0.6351),(0.2548, 0.6554),(0.2441, 0.6554),(0.2652, 0.6384)]

IndexedFaceSet119.texCoord = TextureCoordinate120
Coordinate121 = x3d.Coordinate(DEF="Center_lower_vermillion_lip_COORD_JinBlink")
Coordinate121.point = [(0.5699, 0.5402, 0.1151),(0, -0.5402, 0.1287),(0.6344, -0.3611, -0.1287),(-0.5699, 0.5402, 0.1151),(0, 0.5402, 0.1151),(-0.6344, -0.3611, -0.1287)]

IndexedFaceSet119.coord = Coordinate121

Shape117.geometry = IndexedFaceSet119

Transform116.children.append(Shape117)

HAnimSegment115.children.append(Transform116)
Coordinate122 = x3d.Coordinate(USE="Center_lower_vermillion_lip_COORD_JinBlink")

HAnimSegment115.coord = Coordinate122
HAnimDisplacer123 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer123.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer123.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer123.displacements = [(0, 0.382, 0.435),(0, 0.9368, 0.4659),(0, 0.7896, 0.4659),(0, 0.382, 0.435),(0, 0.382, 0.435),(0, 0.7896, 0.4659)]

HAnimSegment115.displacers.append(HAnimDisplacer123)
HAnimDisplacer124 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer124.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer124.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer124.displacements = [(0, 0.1869, 0),(0, 0.7516, 0.364),(0, 0.6497, 0.364),(0, 0.1869, 0),(0, 0.2206, 0),(0, 0.6497, 0.364)]

HAnimSegment115.displacers.append(HAnimDisplacer124)
HAnimDisplacer125 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer125.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer125.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer125.displacements = [(0, -0.0896, 0.5331),(0, 0.756, 0.8803),(0, 0.6333, 0.8802),(0, -0.0896, 0.5331),(0, -0.0896, 0.5331),(0, 0.6333, 0.8802)]

HAnimSegment115.displacers.append(HAnimDisplacer125)
HAnimDisplacer126 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinJawDrop")
HAnimDisplacer126.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer126.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer126.displacements = [(0, -0.6157, 0),(0, -0.6158, 0),(0, -0.6156, 0),(0, -0.6157, 0),(0, -0.6157, 0),(0, -0.6156, 0)]

HAnimSegment115.displacers.append(HAnimDisplacer126)
HAnimDisplacer127 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer127.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer127.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer127.displacements = [(0, -0.0368, 0.8373),(0, 0.6483, 1.2483),(0, 0.5214, 1.2487),(0, -0.0368, 0.8373),(0, -0.0368, 0.8373),(0, 0.5214, 1.2487)]

HAnimSegment115.displacers.append(HAnimDisplacer127)
HAnimDisplacer128 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer128.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer128.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer128.displacements = [(0.2644, -0.7179, 0.8231),(0, -0.5998, 0.7017),(-0.1012, -0.5994, 0.7017),(-0.2644, -0.7179, 0.8231),(0, -0.7931, 1.0829),(0.1012, -0.5994, 0.7017)]

HAnimSegment115.displacers.append(HAnimDisplacer128)
HAnimDisplacer129 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipPressor")
HAnimDisplacer129.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer129.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer129.displacements = [(0, -0.3795, 0.1337),(0, -0.21, 0),(0, -0.21, 0),(0, -0.3795, 0.1337),(0, -0.3795, 0.1337),(0, -0.21, 0)]

HAnimSegment115.displacers.append(HAnimDisplacer129)
HAnimDisplacer130 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer130.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer130.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer130.displacements = [(0, -0.3959, 0.8591),(0, -0.2496, 0.9753),(0, -0.2496, 0.9749),(0, -0.3959, 0.8591),(0, -0.3959, 0.8591),(0, -0.2496, 0.9749)]

HAnimSegment115.displacers.append(HAnimDisplacer130)
HAnimDisplacer131 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipsPart")
HAnimDisplacer131.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer131.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer131.displacements = [(0, -0.432, 0.0434),(0, -0.4303, -0.0301),(0, -0.4133, -0.0173),(0, -0.432, 0.0434),(0, -0.432, 0.0434),(0, -0.4133, -0.0173)]

HAnimSegment115.displacers.append(HAnimDisplacer131)
HAnimDisplacer132 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer132.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer132.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer132.displacements = [(0, -0.0595, 0.1828),(0, 0.7882, 0.1993),(0, 0.633, 0.3625),(0, -0.0595, 0.1828),(0, -0.0595, 0.1828),(0, 0.633, 0.3625)]

HAnimSegment115.displacers.append(HAnimDisplacer132)
HAnimDisplacer133 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer133.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer133.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer133.displacements = [(-0.0415, -0.0581, 1.0819),(0, 0.0357, 0.8616),(0.1609, 0.0642, 0.9154),(0.0415, -0.0581, 1.0819),(0, -0.0581, 1.0819),(-0.1609, 0.0642, 0.9154)]

HAnimSegment115.displacers.append(HAnimDisplacer133)
HAnimDisplacer134 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer134.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer134.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer134.displacements = [(0, -0.5686, 0),(0, -0.5688, 0),(0, -0.5685, 0),(0, -0.5686, 0),(0, -0.5686, 0),(0, -0.5685, 0)]

HAnimSegment115.displacers.append(HAnimDisplacer134)
HAnimDisplacer135 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer135.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer135.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer135.displacements = [(0.176, -2.4732, 0.049),(0, -2.4728, -0.0078),(0.196, -2.4589, 0.002),(-0.176, -2.4732, 0.049),(0, -2.4732, 0.049),(-0.196, -2.4589, 0.002)]

HAnimSegment115.displacers.append(HAnimDisplacer135)

HAnimJoint89.children.append(HAnimSegment115)
HAnimSegment136 = x3d.HAnimSegment(DEF="hanim_Chin")
HAnimSegment136.name = "chin"
Transform137 = x3d.Transform(DEF="Chin_JinBlink")
Transform137.translation = [0,6.337,7.3]
Shape138 = x3d.Shape()
Appearance139 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape138.appearance = Appearance139
IndexedFaceSet140 = x3d.IndexedFaceSet(DEF="Chin-FACES_JinBlink")
IndexedFaceSet140.coordIndex = [0,2,3,-1,0,3,12,-1,5,8,15,-1,2,0,16,-1,16,4,2,-1,7,9,12,-1,7,12,3,-1,5,15,1,-1,4,16,15,-1,15,8,4,-1,9,6,12,-1,0,11,10,-1,0,12,11,-1,13,15,14,-1,10,17,16,-1,16,0,10,-1,18,12,19,-1,18,11,12,-1,13,1,15,-1,17,14,15,-1,15,16,17,-1,19,12,6,-1]
IndexedFaceSet140.creaseAngle = 3.14159
IndexedFaceSet140.solid = False
IndexedFaceSet140.texCoordIndex = [0,7,8,-1,0,8,1,-1,2,3,4,-1,9,10,5,-1,5,6,9,-1,12,14,1,-1,12,1,8,-1,2,4,13,-1,6,5,4,-1,4,3,6,-1,14,11,1,-1,15,17,16,-1,15,18,17,-1,19,4,20,-1,21,22,5,-1,5,10,21,-1,23,18,24,-1,23,17,18,-1,19,13,4,-1,22,20,4,-1,4,5,22,-1,24,18,25,-1]
TextureCoordinate141 = x3d.TextureCoordinate(DEF="Chin-TEXCOORD_JinBlink")
TextureCoordinate141.point = [(0.258, 0.6076),(0.2606, 0.6259),(0.4255, 0.614),(0.4413, 0.6101),(0.4398, 0.6078),(0.4653, 0.601),(0.4571, 0.6062),(0.3118, 0.6205),(0.3041, 0.631),(0.467, 0.6086),(0.4742, 0.6003),(0.2557, 0.6351),(0.3007, 0.651),(0.4253, 0.6099),(0.2652, 0.6384),(0.258, 0.6076),(0.3118, 0.6205),(0.3041, 0.631),(0.2606, 0.6259),(0.4255, 0.614),(0.4413, 0.6101),(0.467, 0.6086),(0.4571, 0.6062),(0.3007, 0.651),(0.2652, 0.6384),(0.2557, 0.6351)]

IndexedFaceSet140.texCoord = TextureCoordinate141
Coordinate142 = x3d.Coordinate(DEF="Chin_COORD_JinBlink")
Coordinate142.point = [(0, -2.287, 3.579),(0, -0.1353, -6.353),(3.657, -0.4253, 2.123),(3.345, 0.9926, 4.159),(3.653, -0.9673, 0.1176),(5.33, 0.7945, -6.311),(0, 1.438, 6.353),(3.006, 2.287, 5.134),(4.492, -0.08641, -3.097),(0.6344, 1.617, 6.096),(-3.657, -0.4253, 2.123),(-3.345, 0.9926, 4.159),(0, 0.481, 5.272),(-5.33, 0.7945, -6.311),(-4.492, -0.08641, -3.097),(0, -0.5988, -3.408),(0, -2.111, 1.781),(-3.653, -0.9673, 0.1176),(-3.006, 2.287, 5.134),(-0.6344, 1.617, 6.096)]

IndexedFaceSet140.coord = Coordinate142

Shape138.geometry = IndexedFaceSet140

Transform137.children.append(Shape138)

HAnimSegment136.children.append(Transform137)
Coordinate143 = x3d.Coordinate(USE="Chin_COORD_JinBlink")

HAnimSegment136.coord = Coordinate143
HAnimDisplacer144 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer144.name = "chin_morphinterpolator"
HAnimDisplacer144.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer144.displacements = [(0, 0.937, 0.466),(0.63, 1.322, 0.106),(0, 0.79, 0.466),(0.0193, 1.486, 1.377),(-0.591, 1.322, 0.106),(0, 0.79, 0.466)]

HAnimSegment136.displacers.append(HAnimDisplacer144)
HAnimDisplacer145 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinChinRaiser")
HAnimDisplacer145.name = "chin_morphinterpolator"
HAnimDisplacer145.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer145.displacements = [(0, 0.751, 0.364),(0, -0.138, 0),(0, 0.65, 0.364),(0, 0.1317, 0),(0, -0.138, 0),(0, 0.65, 0.364)]

HAnimSegment136.displacers.append(HAnimDisplacer145)
HAnimDisplacer146 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinDimpler")
HAnimDisplacer146.name = "chin_morphinterpolator"
HAnimDisplacer146.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer146.displacements = [(0, 0.756, 0.88),(0.378, 0.396, 0.152),(0, 0.633, 0.88),(0, 1.094, 1.766),(-0.379, 0.396, 0.152),(0, 0.633, 0.88)]

HAnimSegment136.displacers.append(HAnimDisplacer146)
HAnimDisplacer147 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinJawDrop")
HAnimDisplacer147.name = "chin_morphinterpolator"
HAnimDisplacer147.coordIndex = [0,2,3,4,6,9,10,11,12,16,17,19]
HAnimDisplacer147.displacements = [(0, -0.615, 0),(0, -0.6157, 0),(0, -0.6157, 0),(0, -0.6157, 0),(0, -0.6159, 0),(0, -0.616, 0),(0, -0.6157, 0),(0, -0.6157, 0),(0, -0.6156, 0),(0, -0.616, 0),(0, -0.6157, 0),(0, -0.616, 0)]

HAnimSegment136.displacers.append(HAnimDisplacer147)
HAnimDisplacer148 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer148.name = "chin_morphinterpolator"
HAnimDisplacer148.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer148.displacements = [(0, 0.648, 1.249),(0.21, -0.702, 0.077),(0, 0.521, 1.248),(0, 0.993, 2.287),(-0.197, -0.702, 0.077),(0, 0.521, 1.248)]

HAnimSegment136.displacers.append(HAnimDisplacer148)
HAnimDisplacer149 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer149.name = "chin_morphinterpolator"
HAnimDisplacer149.coordIndex = [16,17]
HAnimDisplacer149.displacements = [(1.176, 0.13, -0.375),(-1.176, 0.13, -0.375)]

HAnimSegment136.displacers.append(HAnimDisplacer149)
HAnimDisplacer150 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipFunneler")
HAnimDisplacer150.name = "chin_morphinterpolator"
HAnimDisplacer150.coordIndex = [3,6,7,9,11,12,13,18,19]
HAnimDisplacer150.displacements = [(0, 0, 0.084),(0, -0.5997, 0.702),(-0.835, 0, 1.063),(-0.1012, -0.6, 0.702),(0, 0, 0.235),(0, 0.1001, 0.333),(0, 0, 0.152),(0.835, 0, 1.063),(0.1012, -0.6, 0.702)]

HAnimSegment136.displacers.append(HAnimDisplacer150)
HAnimDisplacer151 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipPressor")
HAnimDisplacer151.name = "chin_morphinterpolator"
HAnimDisplacer151.coordIndex = [6,9,19]
HAnimDisplacer151.displacements = [(0, -0.21, 0),(0, -0.21, 0),(0, -0.21, 0)]

HAnimSegment136.displacers.append(HAnimDisplacer151)
HAnimDisplacer152 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer152.name = "chin_morphinterpolator"
HAnimDisplacer152.coordIndex = [3,6,7,9,11,12,18,19]
HAnimDisplacer152.displacements = [(0, 0, 0.164),(0, -0.25, 0.975),(-0.935, 0, 0.516),(0, -0.25, 0.975),(0, 0, 0.164),(0, 0, 0.884),(0.91, 0, 0.459),(0, -0.25, 0.975)]

HAnimSegment136.displacers.append(HAnimDisplacer152)
HAnimDisplacer153 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipsPart")
HAnimDisplacer153.name = "chin_morphinterpolator"
HAnimDisplacer153.coordIndex = [3,6,9,11,12,19]
HAnimDisplacer153.displacements = [(0, -0.0829, -0.001),(0, -0.431, -0.03),(0, -0.413, -0.017),(0, -0.0829, -0.001),(0, -0.2735, -0.056),(0, -0.413, -0.017)]

HAnimSegment136.displacers.append(HAnimDisplacer153)
HAnimDisplacer154 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipStretcher")
HAnimDisplacer154.name = "chin_morphinterpolator"
HAnimDisplacer154.coordIndex = [7,18]
HAnimDisplacer154.displacements = [(0.898, 0.009, 0.025),(-0.974, 0.009, 0.025)]

HAnimSegment136.displacers.append(HAnimDisplacer154)
HAnimDisplacer155 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipSuck")
HAnimDisplacer155.name = "chin_morphinterpolator"
HAnimDisplacer155.coordIndex = [6,7,9,18,19]
HAnimDisplacer155.displacements = [(0, 0.788, 0.2),(0.125, 0, 0),(0, 0.633, 0.362),(-0.125, 0, 0),(0, 0.633, 0.362)]

HAnimSegment136.displacers.append(HAnimDisplacer155)
HAnimDisplacer156 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipTightener")
HAnimDisplacer156.name = "chin_morphinterpolator"
HAnimDisplacer156.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer156.displacements = [(0, 0.036, 0.862),(-0.521, 0.17, 1.038),(0.1609, 0.064, 0.915),(0, 0.1109, 0.288),(0.521, 0.17, 1.038),(-0.1609, 0.064, 0.915)]

HAnimSegment136.displacers.append(HAnimDisplacer156)
HAnimDisplacer157 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer157.name = "chin_morphinterpolator"
HAnimDisplacer157.coordIndex = [6,9,12,19]
HAnimDisplacer157.displacements = [(0, -0.5688, 0),(0, -0.569, 0),(0, -0.5685, 0),(0, -0.569, 0)]

HAnimSegment136.displacers.append(HAnimDisplacer157)
HAnimDisplacer158 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinMouthStretch")
HAnimDisplacer158.name = "chin_morphinterpolator"
HAnimDisplacer158.coordIndex = [0,2,3,4,6,7,8,9,10,11,12,14,15,16,17,18,19]
HAnimDisplacer158.displacements = [(0, -1.616, -0.19),(0, -2.0337, -0.088),(0, -2.0116, -0.01),(0, -1.9277, -0.1141),(0, -2.473, -0.007),(0, -0.737, 0),(0, -1.0116, -0.024),(0.196, -2.4593, 0.002),(0, -2.0337, -0.088),(0, -2.0116, -0.01),(0, -2.066, -0.039),(0, -0.8165, 0),(0, -1.2392, -0.041),(0, -2.228, -0.187),(0, -1.5747, -0.1141),(0, -0.737, 0),(-0.196, -2.4593, 0.002)]

HAnimSegment136.displacers.append(HAnimDisplacer158)

HAnimJoint89.children.append(HAnimSegment136)
HAnimSegment159 = x3d.HAnimSegment(DEF="hanim_Glabella")
HAnimSegment159.name = "glabella"
Transform160 = x3d.Transform(DEF="Glabella_JinBlink")
Transform160.translation = [0,18.93,15.66]
Shape161 = x3d.Shape()
Appearance162 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape161.appearance = Appearance162
IndexedFaceSet163 = x3d.IndexedFaceSet(DEF="Glabella-FACES_JinBlink")
IndexedFaceSet163.coordIndex = [0,2,1,-1,1,5,0,-1,5,1,3,-1,3,7,5,-1,0,5,4,-1,4,6,0,-1,5,7,8,-1,8,4,5,-1]
IndexedFaceSet163.creaseAngle = 3.14159
IndexedFaceSet163.solid = False
IndexedFaceSet163.texCoordIndex = [2,4,3,-1,3,0,2,-1,0,3,5,-1,5,1,0,-1,8,7,6,-1,6,9,8,-1,7,10,11,-1,11,6,7,-1]
TextureCoordinate164 = x3d.TextureCoordinate(DEF="Glabella-TEXCOORD_JinBlink")
TextureCoordinate164.point = [(0.2441, 0.8403),(0.2442, 0.8727),(0.2441, 0.816),(0.274, 0.8322),(0.2534, 0.8152),(0.2728, 0.8741),(0.274, 0.8322),(0.2441, 0.8403),(0.2441, 0.816),(0.2534, 0.8152),(0.2442, 0.8727),(0.2728, 0.8741)]

IndexedFaceSet163.texCoord = TextureCoordinate164
Coordinate165 = x3d.Coordinate(DEF="Glabella_COORD_JinBlink")
Coordinate165.point = [(0, -1.552, -0.8705),(1.587, -0.693, 0.1291),(0.4273, -1.569, -0.9219),(1.516, 1.569, 0.2705),(-1.587, -0.693, 0.1291),(0, -0.2611, 0.9219),(-0.4273, -1.569, -0.9219),(0, 1.499, 0.9062),(-1.516, 1.569, 0.2705)]

IndexedFaceSet163.coord = Coordinate165

Shape161.geometry = IndexedFaceSet163

Transform160.children.append(Shape161)

HAnimSegment159.children.append(Transform160)
Coordinate166 = x3d.Coordinate(USE="Glabella_COORD_JinBlink")

HAnimSegment159.coord = Coordinate166
HAnimDisplacer167 = x3d.HAnimDisplacer(DEF="Glabella_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer167.name = "glabella_morphinterpolator"
HAnimDisplacer167.coordIndex = [1,4]
HAnimDisplacer167.displacements = [(-0.332, -0.414, 0),(0.303, -0.395, 0)]

HAnimSegment159.displacers.append(HAnimDisplacer167)
HAnimDisplacer168 = x3d.HAnimDisplacer(DEF="Glabella_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer168.name = "glabella_morphinterpolator"
HAnimDisplacer168.coordIndex = [1,4]
HAnimDisplacer168.displacements = [(0, 0.3656, 0),(0, 0.3842, 0)]

HAnimSegment159.displacers.append(HAnimDisplacer168)

HAnimJoint89.children.append(HAnimSegment159)
HAnimSegment169 = x3d.HAnimSegment(DEF="hanim_Left_bulbar_conjunctiva")
HAnimSegment169.name = "left_bulbar_conjunctiva"
Transform170 = x3d.Transform(DEF="Left_bulbar_conjunctiva_JinBlink")
Transform170.translation = [5.794,17.61,11.15]
Shape171 = x3d.Shape()
Appearance172 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape171.appearance = Appearance172
IndexedFaceSet173 = x3d.IndexedFaceSet(DEF="Left_bulbar_conjunctiva-FACES_JinBlink")
IndexedFaceSet173.coordIndex = [6,7,1,-1,1,3,6,-1,0,10,26,-1,26,2,0,-1,10,0,8,-1,11,5,23,-1,7,12,24,-1,8,0,2,-1,8,2,23,-1,4,9,19,-1,19,14,4,-1,3,4,14,-1,14,13,3,-1,25,12,22,-1,11,25,22,-1,11,22,21,-1,5,11,21,-1,21,15,5,-1,6,3,13,-1,13,16,6,-1,12,7,17,-1,17,22,12,-1,8,5,15,-1,15,18,8,-1,7,6,16,-1,16,17,7,-1,10,20,19,-1,19,26,10,-1,10,8,18,-1,18,20,10,-1,23,5,8,-1,24,1,7,-1,24,12,25,-1,19,9,26,-1,26,9,2,-1]
IndexedFaceSet173.creaseAngle = 3.14159
IndexedFaceSet173.solid = False
IndexedFaceSet173.texCoordIndex = [7,8,0,-1,0,27,7,-1,2,11,29,-1,29,1,2,-1,11,2,9,-1,12,5,25,-1,8,13,26,-1,9,2,1,-1,9,1,25,-1,4,10,14,-1,14,15,4,-1,3,4,15,-1,15,16,3,-1,28,13,17,-1,12,28,17,-1,12,17,18,-1,5,12,18,-1,18,19,5,-1,6,3,16,-1,16,20,6,-1,13,8,21,-1,21,17,13,-1,9,5,19,-1,19,22,9,-1,8,7,23,-1,23,21,8,-1,11,24,14,-1,14,29,11,-1,11,9,22,-1,22,24,11,-1,25,5,9,-1,26,0,8,-1,26,13,28,-1,14,10,29,-1,29,10,1,-1]
TextureCoordinate174 = x3d.TextureCoordinate(DEF="Left_bulbar_conjunctiva-TEXCOORD_JinBlink")
TextureCoordinate174.point = [(0.328, 0.824),(0.3871, 0.8321),(0.4052, 0.8221),(0.3258, 0.833),(0.3487, 0.8409),(0.3916, 0.7984),(0.2983, 0.8142),(0.2981, 0.8094),(0.309, 0.8013),(0.4011, 0.8053),(0.385, 0.8438),(0.4198, 0.8261),(0.3777, 0.7936),(0.3315, 0.7948),(0.3885, 0.8436),(0.3487, 0.8409),(0.3206, 0.8292),(0.3315, 0.7948),(0.372, 0.7925),(0.3869, 0.7967),(0.2983, 0.8142),(0.309, 0.8013),(0.3966, 0.8018),(0.2981, 0.8094),(0.4198, 0.8261),(0.3889, 0.8064),(0.3322, 0.8026),(0.3307, 0.8316),(0.3442, 0.7934),(0.3915, 0.8393)]

IndexedFaceSet173.texCoord = TextureCoordinate174
Coordinate175 = x3d.Coordinate(DEF="Left_bulbar_conjunctiva_COORD_JinBlink")
Coordinate175.point = [(2.76, 0.0973, -0.8547),(-1.347, 0.2034, 2.463),(1.784, 0.6812, 0.4382),(-1.252, 0.6995, 2.521),(-0.2686, 1.16, 2.287),(2.036, -1.163, -0.4716),(-2.858, -0.5459, 2.699),(-2.35, -1.007, 2.159),(2.632, -0.8129, -0.7113),(1.577, 1.203, 0.9703),(3.566, 0.2646, -1.27),(1.305, -1.43, 0.2687),(-1.132, -1.383, 1.574),(-2.475, 0.7643, 1.73),(-0.4787, 1.699, 1.381),(1.844, -1.377, -0.8846),(-4.008, -0.6268, 1.793),(-3.316, -1.256, 1.253),(2.512, -0.9908, -1.342),(2.026, 1.768, -0.3396),(4.008, 0.4783, -2.699),(1.039, -1.688, -0.4347),(-1.656, -1.768, 0.6681),(1.878, -0.7347, -0.1728),(-1.108, -0.9679, 1.714),(-0.4715, -1.396, 1.218),(1.925, 1.039, 0.5784)]

IndexedFaceSet173.coord = Coordinate175

Shape171.geometry = IndexedFaceSet173

Transform170.children.append(Shape171)

HAnimSegment169.children.append(Transform170)
Coordinate176 = x3d.Coordinate(USE="Left_bulbar_conjunctiva_COORD_JinBlink")

HAnimSegment169.coord = Coordinate176
HAnimDisplacer177 = x3d.HAnimDisplacer(DEF="Left_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer177.name = "left_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer177.coordIndex = [3,4,14]
HAnimDisplacer177.displacements = [(0, -0.0785, 0),(0, -0.078, 0),(-0.5075, -0.499, 0)]

HAnimSegment169.displacers.append(HAnimDisplacer177)
HAnimDisplacer178 = x3d.HAnimDisplacer(DEF="Left_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer178.name = "left_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer178.coordIndex = [14]
HAnimDisplacer178.displacements = [(0, 0.366, 0)]

HAnimSegment169.displacers.append(HAnimDisplacer178)
HAnimDisplacer179 = x3d.HAnimDisplacer(DEF="Left_bulbar_conjunctiva_MorphInterpolator_JinLidTightener")
HAnimDisplacer179.name = "left_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer179.coordIndex = [3,4,5,7,8,9,11,12,15,25,26]
HAnimDisplacer179.displacements = [(0, -0.354, 0),(0, -0.354, 0),(0, 0.3085, 0),(0, 0.096, 0),(-0.09, 0.209, 0),(0, -0.354, 0),(0, 0.309, 0),(0, 0.152, 0),(0, 0.151, 0),(0, 0.151, 0),(0, -0.3541, 0)]

HAnimSegment169.displacers.append(HAnimDisplacer179)
HAnimDisplacer180 = x3d.HAnimDisplacer(DEF="Left_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer180.name = "left_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer180.coordIndex = [3,4,6,9,26]
HAnimDisplacer180.displacements = [(0, 0.4975, 0),(0, 0.498, 0),(0, 0.4976, 0),(0, 0.498, 0),(0, 0.497, 0)]

HAnimSegment169.displacers.append(HAnimDisplacer180)

HAnimJoint89.children.append(HAnimSegment169)
HAnimSegment181 = x3d.HAnimSegment(DEF="hanim_Left_cheek")
HAnimSegment181.name = "left_cheek"
Transform182 = x3d.Transform(DEF="Left_cheek_JinBlink")
Transform182.translation = [6.927,11.97,7.646]
Shape183 = x3d.Shape()
Appearance184 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape183.appearance = Appearance184
IndexedFaceSet185 = x3d.IndexedFaceSet(DEF="Left_cheek-FACES_JinBlink")
IndexedFaceSet185.coordIndex = [1,17,19,-1,20,1,19,-1,14,19,13,-1,19,17,13,-1,13,2,14,-1,3,14,2,-1,34,18,4,-1,4,32,34,-1,31,32,4,-1,4,10,31,-1,15,14,3,-1,17,12,13,-1,12,10,4,-1,4,13,12,-1,2,5,3,-1,13,4,2,-1,24,26,25,-1,25,11,24,-1,24,11,7,-1,7,29,24,-1,6,8,12,-1,12,17,6,-1,10,9,30,-1,30,31,10,-1,12,8,9,-1,9,10,12,-1,18,34,5,-1,2,18,5,-1,4,18,2,-1,19,14,21,-1,14,22,16,-1,16,21,14,-1,0,19,21,-1,14,15,22,-1,6,17,28,-1,28,27,6,-1,28,17,1,-1,29,23,24,-1,7,11,31,-1,31,30,7,-1,11,25,33,-1,11,33,32,-1,31,11,32,-1,32,33,34,-1]
IndexedFaceSet185.creaseAngle = 3.14159
IndexedFaceSet185.solid = False
IndexedFaceSet185.texCoordIndex = [0,1,2,-1,3,0,2,-1,4,2,5,-1,2,1,5,-1,5,6,4,-1,7,4,6,-1,39,24,13,-1,13,37,39,-1,36,37,13,-1,13,15,36,-1,8,4,7,-1,18,17,16,-1,17,15,13,-1,13,16,17,-1,19,11,12,-1,16,13,19,-1,28,30,29,-1,29,14,28,-1,28,14,20,-1,20,34,28,-1,21,22,17,-1,17,18,21,-1,15,23,35,-1,35,36,15,-1,17,22,23,-1,23,15,17,-1,24,39,11,-1,19,24,11,-1,13,24,19,-1,2,4,9,-1,4,10,25,-1,25,9,4,-1,26,2,9,-1,4,8,10,-1,21,18,33,-1,33,31,21,-1,32,1,0,-1,34,27,28,-1,20,14,36,-1,36,35,20,-1,14,29,38,-1,14,38,37,-1,36,14,37,-1,37,38,39,-1]
TextureCoordinate186 = x3d.TextureCoordinate(DEF="Left_cheek-TEXCOORD_JinBlink")
TextureCoordinate186.point = [(0.44, 0.6625),(0.4517, 0.649),(0.4392, 0.6356),(0.4352, 0.6651),(0.4454, 0.6184),(0.4606, 0.6289),(0.464, 0.6174),(0.467, 0.6086),(0.4571, 0.6062),(0.4273, 0.6228),(0.4413, 0.6101),(0.3041, 0.631),(0.3118, 0.6205),(0.3484, 0.6888),(0.2881, 0.7397),(0.3623, 0.7239),(0.4088, 0.6855),(0.4123, 0.7323),(0.4518, 0.7703),(0.364, 0.6372),(0.301, 0.7815),(0.4279, 0.7939),(0.3993, 0.7753),(0.3692, 0.7714),(0.3226, 0.6487),(0.4255, 0.614),(0.4239, 0.6387),(0.2671, 0.7978),(0.268, 0.7555),(0.2727, 0.7092),(0.2641, 0.7133),(0.4335, 0.819),(0.4547, 0.661),(0.4572, 0.8171),(0.2845, 0.7889),(0.3287, 0.7742),(0.3232, 0.7322),(0.3144, 0.6917),(0.2788, 0.6949),(0.3007, 0.651)]

IndexedFaceSet185.texCoord = TextureCoordinate186
Coordinate187 = x3d.Coordinate(DEF="Left_cheek_COORD_JinBlink")
Coordinate187.point = [(5.868, 0.6861, -6.977),(5.046, 6.009, -3.719),(-0.5602, -4.076, 1.16),(-3.27, -6.054, 1.778),(-1.388, -1.337, 4.299),(-3.582, -4.636, 3.814),(2.834, 4.241, 1.178),(-3.857, 3.618, 5.665),(1.296, 3.319, 2.709),(-0.2365, 3.054, 3.875),(-0.6487, 0.5238, 4.348),(-4.592, 1.365, 6.024),(2.001, 0.9701, 1.578),(1.819, -1.515, 0.4861),(0.1831, -3.863, -2.615),(-3.274, -6.596, -0.2282),(-1.597, -4.834, -6.657),(4.101, 2.99, -1.336),(-2.758, -3.467, 4.304),(3.42, -0.01057, -3.863),(5.261, 6.596, -4.686),(1.153, -2.865, -6.293),(-2.435, -5.715, -3.442),(-5.749, 4.473, 6.621),(-5.809, 2.217, 6.673),(-5.409, -0.2562, 6.321),(-5.868, -0.0462, 6.977),(3.128, 5.574, 1.136),(4.273, 5.681, -0.7129),(-4.763, 4.022, 6.147),(-2.394, 3.215, 4.911),(-2.727, 0.9674, 5.231),(-3.19, -1.179, 5.185),(-5.082, -1.013, 6.115),(-3.921, -3.342, 4.788)]

IndexedFaceSet185.coord = Coordinate187

Shape183.geometry = IndexedFaceSet185

Transform182.children.append(Shape183)

HAnimSegment181.children.append(Transform182)
Coordinate188 = x3d.Coordinate(USE="Left_cheek_COORD_JinBlink")

HAnimSegment181.coord = Coordinate188
HAnimDisplacer189 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer189.name = "left_cheek_morphinterpolator"
HAnimDisplacer189.coordIndex = [4,10,11,25,26,31,32,33,34]
HAnimDisplacer189.displacements = [(0, 0.8378, 0),(0, 0.8382, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.8376, 0),(0, 0.8381, 0),(0, 0.8383, 0),(0.63, 1.322, 0.107)]

HAnimSegment181.displacers.append(HAnimDisplacer189)
HAnimDisplacer190 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer190.name = "left_cheek_morphinterpolator"
HAnimDisplacer190.coordIndex = [4,6,7,8,9,10,11,12,13,17,19,24,29,30,31,32]
HAnimDisplacer190.displacements = [(0.6734, 0.6214, 0.174),(0, 0.1, 0.079),(0, 0.134, -0.107),(0.299, 0.38, -0.184),(0, 0.268, 0.099),(0.0294, 1.7512, 0.523),(0.255, 1.233, 0.181),(-0.032, 1.5769, 1.007),(0.588, 1.4349, 0.0324),(0, 0.462, 0.3972),(0, 0.6417, 0),(0, 0.754, 0),(0, 0.067, -0.082),(0, 0.268, 0),(0.001, 1.3996, 0.448),(0, 0.2915, 0.183)]

HAnimSegment181.displacers.append(HAnimDisplacer190)
HAnimDisplacer191 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinChinRaiser")
HAnimDisplacer191.name = "left_cheek_morphinterpolator"
HAnimDisplacer191.coordIndex = [34]
HAnimDisplacer191.displacements = [(0, -0.137, 0)]

HAnimSegment181.displacers.append(HAnimDisplacer191)
HAnimDisplacer192 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinDimpler")
HAnimDisplacer192.name = "left_cheek_morphinterpolator"
HAnimDisplacer192.coordIndex = [18,34]
HAnimDisplacer192.displacements = [(-0.407, 0.417, 0.179),(0.378, 0.396, 0.153)]

HAnimSegment181.displacers.append(HAnimDisplacer192)
HAnimDisplacer193 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinJawDrop")
HAnimDisplacer193.name = "left_cheek_morphinterpolator"
HAnimDisplacer193.coordIndex = [3,5,15]
HAnimDisplacer193.displacements = [(0, -0.616, 0),(0, -0.616, 0),(0, -0.616, 0)]

HAnimSegment181.displacers.append(HAnimDisplacer193)
HAnimDisplacer194 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer194.name = "left_cheek_morphinterpolator"
HAnimDisplacer194.coordIndex = [34]
HAnimDisplacer194.displacements = [(0.211, -0.702, 0.078)]

HAnimSegment181.displacers.append(HAnimDisplacer194)
HAnimDisplacer195 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer195.name = "left_cheek_morphinterpolator"
HAnimDisplacer195.coordIndex = [1,8,12,34]
HAnimDisplacer195.displacements = [(0.473, -0.03, -0.642),(1.14, 0, -1.022),(0.583, -0.05, -0.383),(1.176, 0.13, -0.375)]

HAnimSegment181.displacers.append(HAnimDisplacer195)
HAnimDisplacer196 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipFunneler")
HAnimDisplacer196.name = "left_cheek_morphinterpolator"
HAnimDisplacer196.coordIndex = [5,18,32,33,34]
HAnimDisplacer196.displacements = [(0, 0, 0.083),(0, 0, 0.084),(0, 0, 0.414),(0, 0, 0.109),(-0.835, 0, 1.064)]

HAnimSegment181.displacers.append(HAnimDisplacer196)
HAnimDisplacer197 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer197.name = "left_cheek_morphinterpolator"
HAnimDisplacer197.coordIndex = [5,34]
HAnimDisplacer197.displacements = [(0, 0, 0.163),(-0.935, 0, 0.517)]

HAnimSegment181.displacers.append(HAnimDisplacer197)
HAnimDisplacer198 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipsPart")
HAnimDisplacer198.name = "left_cheek_morphinterpolator"
HAnimDisplacer198.coordIndex = [5]
HAnimDisplacer198.displacements = [(0, -0.083, -0.001)]

HAnimSegment181.displacers.append(HAnimDisplacer198)
HAnimDisplacer199 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipStretcher")
HAnimDisplacer199.name = "left_cheek_morphinterpolator"
HAnimDisplacer199.coordIndex = [18,34]
HAnimDisplacer199.displacements = [(1.26, -0.029, -0.124),(0.898, 0.009, 0.026)]

HAnimSegment181.displacers.append(HAnimDisplacer199)
HAnimDisplacer200 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipSuck")
HAnimDisplacer200.name = "left_cheek_morphinterpolator"
HAnimDisplacer200.coordIndex = [34]
HAnimDisplacer200.displacements = [(0.125, 0, 0)]

HAnimSegment181.displacers.append(HAnimDisplacer200)
HAnimDisplacer201 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipTightener")
HAnimDisplacer201.name = "left_cheek_morphinterpolator"
HAnimDisplacer201.coordIndex = [34]
HAnimDisplacer201.displacements = [(-0.521, 0.17, 1.038)]

HAnimSegment181.displacers.append(HAnimDisplacer201)
HAnimDisplacer202 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinMouthStretch")
HAnimDisplacer202.name = "left_cheek_morphinterpolator"
HAnimDisplacer202.coordIndex = [2,3,5,14,15,18,22,34]
HAnimDisplacer202.displacements = [(0, -0.909, 0.074),(0, -2.034, -0.089),(0, -2.011, -0.01),(0, -0.929, 0.079),(0, -1.927, -0.1141),(0, -1.34, 0.088),(0, -1.011, -0.024),(0, -0.736, 0)]

HAnimSegment181.displacers.append(HAnimDisplacer202)
HAnimDisplacer203 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer203.name = "left_cheek_morphinterpolator"
HAnimDisplacer203.coordIndex = [25,26,32,33]
HAnimDisplacer203.displacements = [(-0.078, 0.5523, 0),(0, 0.376, 0),(-0.146, 0.2645, 0),(0, 0.4707, 0)]

HAnimSegment181.displacers.append(HAnimDisplacer203)
HAnimDisplacer204 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer204.name = "left_cheek_morphinterpolator"
HAnimDisplacer204.coordIndex = [25,26,33]
HAnimDisplacer204.displacements = [(0, 0.2937, 0),(0, 0.2937, 0),(0, 0.5019, 0)]

HAnimSegment181.displacers.append(HAnimDisplacer204)

HAnimJoint89.children.append(HAnimSegment181)
HAnimSegment205 = x3d.HAnimSegment(DEF="hanim_Left_dorsum")
HAnimSegment205.name = "left_dorsum"
Transform206 = x3d.Transform(DEF="Left_dorsum_JinBlink")
Transform206.translation = [0.7065,14.64,14.87]
Shape207 = x3d.Shape()
Appearance208 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape207.appearance = Appearance208
IndexedFaceSet209 = x3d.IndexedFaceSet(DEF="Left_dorsum-FACES_JinBlink")
IndexedFaceSet209.coordIndex = [3,0,1,-1,1,4,3,-1,5,4,1,-1,1,2,5,-1]
IndexedFaceSet209.creaseAngle = 3.14159
IndexedFaceSet209.solid = False
IndexedFaceSet209.texCoordIndex = [3,0,1,-1,1,4,3,-1,5,4,1,-1,1,2,5,-1]
TextureCoordinate210 = x3d.TextureCoordinate(DEF="Left_dorsum-TEXCOORD_JinBlink")
TextureCoordinate210.point = [(0.2534, 0.8152),(0.2534, 0.767),(0.2528, 0.7186),(0.2671, 0.7978),(0.268, 0.7555),(0.2641, 0.7133)]

IndexedFaceSet209.texCoord = TextureCoordinate210
Coordinate211 = x3d.Coordinate(DEF="Left_dorsum_COORD_JinBlink")
Coordinate211.point = [(-0.2793, 2.722, -0.1346),(-0.471, 0.1584, -0.08532),(-0.25, -2.447, 0.6076),(0.471, 1.797, -0.6076),(0.4116, -0.459, -0.556),(0.352, -2.722, -0.252)]

IndexedFaceSet209.coord = Coordinate211

Shape207.geometry = IndexedFaceSet209

Transform206.children.append(Shape207)

HAnimSegment205.children.append(Transform206)
Coordinate212 = x3d.Coordinate(USE="Left_dorsum_COORD_JinBlink")

HAnimSegment205.coord = Coordinate212
HAnimDisplacer213 = x3d.HAnimDisplacer(DEF="Left_dorsum_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer213.name = "left_dorsum_morphinterpolator"
HAnimDisplacer213.coordIndex = [5]
HAnimDisplacer213.displacements = [(0, 0.838, 0)]

HAnimSegment205.displacers.append(HAnimDisplacer213)
HAnimDisplacer214 = x3d.HAnimDisplacer(DEF="Left_dorsum_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer214.name = "left_dorsum_morphinterpolator"
HAnimDisplacer214.coordIndex = [4]
HAnimDisplacer214.displacements = [(0, 0.7543, 0)]

HAnimSegment205.displacers.append(HAnimDisplacer214)
HAnimDisplacer215 = x3d.HAnimDisplacer(DEF="Left_dorsum_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer215.name = "left_dorsum_morphinterpolator"
HAnimDisplacer215.coordIndex = [5]
HAnimDisplacer215.displacements = [(0, 0.376, 0)]

HAnimSegment205.displacers.append(HAnimDisplacer215)
HAnimDisplacer216 = x3d.HAnimDisplacer(DEF="Left_dorsum_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer216.name = "left_dorsum_morphinterpolator"
HAnimDisplacer216.coordIndex = [5]
HAnimDisplacer216.displacements = [(0, 0.293, 0)]

HAnimSegment205.displacers.append(HAnimDisplacer216)

HAnimJoint89.children.append(HAnimSegment205)
HAnimSegment217 = x3d.HAnimSegment(DEF="hanim_Left_ear")
HAnimSegment217.name = "left_ear"
Transform218 = x3d.Transform(DEF="Left_ear_JinBlink")
Transform218.translation = [12.49,15.99,1.017]
Shape219 = x3d.Shape()
Appearance220 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape219.appearance = Appearance220
IndexedFaceSet221 = x3d.IndexedFaceSet(DEF="Left_ear-FACES_JinBlink")
IndexedFaceSet221.coordIndex = [6,2,0,-1,5,4,1,-1,1,2,5,-1,2,1,0,-1,0,3,7,-1,7,6,0,-1,4,3,0,-1,0,1,4,-1]
IndexedFaceSet221.creaseAngle = 3.14159
IndexedFaceSet221.solid = False
IndexedFaceSet221.texCoordIndex = [0,1,2,-1,4,5,3,-1,3,1,4,-1,1,3,2,-1,2,7,6,-1,6,0,2,-1,5,7,2,-1,2,3,5,-1]
TextureCoordinate222 = x3d.TextureCoordinate(DEF="Left_ear-TEXCOORD_JinBlink")
TextureCoordinate222.point = [(0.4392, 0.6356),(0.4239, 0.6387),(0.4239, 0.6408),(0.412, 0.6504),(0.4239, 0.6648),(0.4123, 0.664),(0.4352, 0.6651),(0.4267, 0.6717)]

IndexedFaceSet221.texCoord = TextureCoordinate222
Coordinate223 = x3d.Coordinate(DEF="Left_ear_COORD_JinBlink")
Coordinate223.point = [(1.104, -2.879, -0.3646),(1.92, -0.7197, -2.765),(0.3083, -3.342, -0.3477),(1.674, 4.039, 0.222),(2.14, 2.313, -2.716),(0.349, 2.504, -0.3477),(-2.14, -4.039, 2.765),(-0.2989, 2.568, 1.943)]

IndexedFaceSet221.coord = Coordinate223

Shape219.geometry = IndexedFaceSet221

Transform218.children.append(Shape219)

HAnimSegment217.children.append(Transform218)
Coordinate224 = x3d.Coordinate(USE="Left_ear_COORD_JinBlink")

HAnimSegment217.coord = Coordinate224

HAnimJoint89.children.append(HAnimSegment217)
HAnimSegment225 = x3d.HAnimSegment(DEF="hanim_Left_eyebrow")
HAnimSegment225.name = "left_eyebrow"
Transform226 = x3d.Transform(DEF="Left_eyebrow_JinBlink")
Transform226.translation = [5.691,19.58,13.13]
Shape227 = x3d.Shape()
Appearance228 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape227.appearance = Appearance228
IndexedFaceSet229 = x3d.IndexedFaceSet(DEF="Left_eyebrow-FACES_JinBlink")
IndexedFaceSet229.coordIndex = [5,1,7,-1,7,8,5,-1,6,0,4,-1,7,1,0,-1,0,6,7,-1,2,4,0,-1,0,3,2,-1,3,0,1,-1]
IndexedFaceSet229.creaseAngle = 3.14159
IndexedFaceSet229.solid = False
IndexedFaceSet229.texCoordIndex = [5,1,7,-1,7,8,5,-1,6,0,4,-1,7,1,0,-1,0,6,7,-1,2,4,0,-1,0,3,2,-1,3,0,1,-1]
TextureCoordinate230 = x3d.TextureCoordinate(DEF="Left_eyebrow-TEXCOORD_JinBlink")
TextureCoordinate230.point = [(0.3395, 0.8606),(0.3992, 0.8783),(0.2728, 0.8741),(0.3391, 0.876),(0.274, 0.8322),(0.4299, 0.8825),(0.3402, 0.8534),(0.3979, 0.8641),(0.4266, 0.8643)]

IndexedFaceSet229.texCoord = TextureCoordinate230
Coordinate231 = x3d.Coordinate(DEF="Left_eyebrow_COORD_JinBlink")
Coordinate231.point = [(-0.6206, 0.2925, 1.523),(2.547, 1.129, -0.8682),(-4.175, 0.9255, 2.806),(-0.6464, 1.103, 1.5),(-4.104, -1.337, 2.665),(4.175, 1.337, -2.599),(-0.6118, -0.2218, 1.466),(2.366, 0.3082, -0.9723),(4.011, 0.3542, -2.806)]

IndexedFaceSet229.coord = Coordinate231

Shape227.geometry = IndexedFaceSet229

Transform226.children.append(Shape227)

HAnimSegment225.children.append(Transform226)
Coordinate232 = x3d.Coordinate(USE="Left_eyebrow_COORD_JinBlink")

HAnimSegment225.coord = Coordinate232
HAnimDisplacer233 = x3d.HAnimDisplacer(DEF="Left_eyebrow_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer233.name = "left_eyebrow_morphinterpolator"
HAnimDisplacer233.coordIndex = [0,1,3,4,5,6,7,8]
HAnimDisplacer233.displacements = [(-0.5074, -0.4985, 0),(0, -0.094, 0),(-0.5076, -0.4988, 0),(-0.332, -0.414, 0),(0, -0.094, 0),(-0.5072, -0.4985, 0),(0, -0.0941, 0),(0, -0.0942, 0)]

HAnimSegment225.displacers.append(HAnimDisplacer233)
HAnimDisplacer234 = x3d.HAnimDisplacer(DEF="Left_eyebrow_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer234.name = "left_eyebrow_morphinterpolator"
HAnimDisplacer234.coordIndex = [0,1,3,4,6,7]
HAnimDisplacer234.displacements = [(0, 0.3656, 0),(0, 0.095, 0),(0, 0.365, 0),(0, 0.3657, 0),(0, 0.3655, 0),(0, 0.0945, 0)]

HAnimSegment225.displacers.append(HAnimDisplacer234)
HAnimDisplacer235 = x3d.HAnimDisplacer(DEF="Left_eyebrow_MorphInterpolator_JinSquint")
HAnimDisplacer235.name = "left_eyebrow_morphinterpolator"
HAnimDisplacer235.coordIndex = [7,8]
HAnimDisplacer235.displacements = [(0, -0.4631, 0),(0, -0.4632, 0)]

HAnimSegment225.displacers.append(HAnimDisplacer235)
HAnimDisplacer236 = x3d.HAnimDisplacer(DEF="Left_eyebrow_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer236.name = "left_eyebrow_morphinterpolator"
HAnimDisplacer236.coordIndex = [6]
HAnimDisplacer236.displacements = [(0, 0.4975, 0)]

HAnimSegment225.displacers.append(HAnimDisplacer236)

HAnimJoint89.children.append(HAnimSegment225)
HAnimSegment237 = x3d.HAnimSegment(DEF="hanim_Left_forehead")
HAnimSegment237.name = "left_forehead"
Transform238 = x3d.Transform(DEF="Left_forehead_JinBlink")
Transform238.translation = [6.652,27.61,9.229]
Shape239 = x3d.Shape()
Appearance240 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape239.appearance = Appearance240
IndexedFaceSet241 = x3d.IndexedFaceSet(DEF="Left_forehead-FACES_JinBlink")
IndexedFaceSet241.coordIndex = [1,9,13,-1,13,4,1,-1,3,2,9,-1,3,0,15,-1,15,0,14,-1,0,16,14,-1,1,20,16,-1,16,0,1,-1,3,15,17,-1,17,6,3,-1,2,3,6,-1,6,5,2,-1,6,17,18,-1,18,8,6,-1,5,6,8,-1,8,7,5,-1,9,2,10,-1,10,13,9,-1,1,0,3,-1,3,9,1,-1,1,4,19,-1,19,20,1,-1,2,5,11,-1,11,10,2,-1,5,7,12,-1,12,11,5,-1]
IndexedFaceSet241.creaseAngle = 3.14159
IndexedFaceSet241.solid = False
IndexedFaceSet241.texCoordIndex = [1,9,13,-1,13,4,1,-1,3,0,9,-1,3,2,15,-1,15,2,14,-1,2,16,14,-1,1,20,16,-1,16,2,1,-1,3,15,17,-1,17,6,3,-1,0,3,6,-1,6,5,0,-1,6,17,18,-1,18,8,6,-1,5,6,8,-1,8,7,5,-1,9,0,10,-1,10,13,9,-1,1,2,3,-1,3,9,1,-1,1,4,19,-1,19,20,1,-1,0,5,11,-1,11,10,0,-1,5,7,12,-1,12,11,5,-1]
TextureCoordinate242 = x3d.TextureCoordinate(DEF="Left_forehead-TEXCOORD_JinBlink")
TextureCoordinate242.point = [(0.3563, 0.9819),(0.3371, 0.9436),(0.414, 0.9365),(0.428, 0.9618),(0.2706, 0.9459),(0.3807, 0.9869),(0.434, 0.9653),(0.3786, 0.9951),(0.4425, 0.9551),(0.3372, 0.9707),(0.3002, 0.9788),(0.3015, 0.9807),(0.3016, 0.9833),(0.2804, 0.9652),(0.4299, 0.8825),(0.4655, 0.9081),(0.3992, 0.8783),(0.4676, 0.8967),(0.465, 0.9097),(0.2728, 0.8741),(0.3391, 0.876)]

IndexedFaceSet241.texCoord = TextureCoordinate242
Coordinate243 = x3d.Coordinate(DEF="Left_forehead_COORD_JinBlink")
Coordinate243.point = [(2.366, -3.832, 2.607),(-1.721, -3.37, 5.298),(-0.9278, 3.698, 2.337),(2.798, 0.5048, 1.078),(-5.256, -3.235, 6.945),(0.1169, 5.415, -1.676),(3.513, 2.123, -2.845),(0.04584, 5.238, -6.945),(3.382, 0.4603, -6.945),(-1.306, 1.607, 4.614),(-4.278, 5.326, 2.844),(-4.148, 6.951, -0.7431),(-4.148, 7.108, -6.945),(-4.686, 2.054, 6.111),(3.214, -6.697, 1.298),(4.876, -4.833, -1.108),(1.586, -6.904, 3.028),(5.256, -4.053, -3.68),(4.869, -4.024, -6.945),(-5.136, -7.108, 6.703),(-1.607, -6.931, 5.397)]

IndexedFaceSet241.coord = Coordinate243

Shape239.geometry = IndexedFaceSet241

Transform238.children.append(Shape239)

HAnimSegment237.children.append(Transform238)
Coordinate244 = x3d.Coordinate(USE="Left_forehead_COORD_JinBlink")

HAnimSegment237.coord = Coordinate244
HAnimDisplacer245 = x3d.HAnimDisplacer(DEF="Left_forehead_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer245.name = "left_forehead_morphinterpolator"
HAnimDisplacer245.coordIndex = [14,16,20]
HAnimDisplacer245.displacements = [(0, -0.094, 0),(0, -0.094, 0),(-0.508, -0.498, 0)]

HAnimSegment237.displacers.append(HAnimDisplacer245)
HAnimDisplacer246 = x3d.HAnimDisplacer(DEF="Left_forehead_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer246.name = "left_forehead_morphinterpolator"
HAnimDisplacer246.coordIndex = [16,20]
HAnimDisplacer246.displacements = [(0, 0.094, 0),(0, 0.366, 0)]

HAnimSegment237.displacers.append(HAnimDisplacer246)

HAnimJoint89.children.append(HAnimSegment237)
HAnimSegment247 = x3d.HAnimSegment(DEF="hanim_Left_lower_eyelid")
HAnimSegment247.name = "left_lower_eyelid"
Transform248 = x3d.Transform(DEF="Left_lower_eyelid_JinBlink")
Transform248.translation = [6.11,16.45,11.32]
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape249.appearance = Appearance250
IndexedFaceSet251 = x3d.IndexedFaceSet(DEF="Left_lower_eyelid-FACES_JinBlink")
IndexedFaceSet251.coordIndex = [8,3,10,-1,10,9,8,-1,3,8,7,-1,7,0,3,-1,13,14,6,-1,6,1,13,-1,0,7,5,-1,5,2,0,-1,11,2,5,-1,5,12,11,-1,4,1,6,-1,6,9,4,-1,10,4,9,-1]
IndexedFaceSet251.creaseAngle = 3.14159
IndexedFaceSet251.solid = False
IndexedFaceSet251.texCoordIndex = [8,0,10,-1,10,9,8,-1,0,8,7,-1,7,2,0,-1,13,14,6,-1,6,3,13,-1,2,7,5,-1,5,4,2,-1,11,4,5,-1,5,12,11,-1,1,3,6,-1,6,9,1,-1,10,1,9,-1]
TextureCoordinate252 = x3d.TextureCoordinate(DEF="Left_lower_eyelid-TEXCOORD_JinBlink")
TextureCoordinate252.point = [(0.3777, 0.7936),(0.3315, 0.7948),(0.3916, 0.7984),(0.309, 0.8013),(0.4011, 0.8053),(0.4279, 0.7939),(0.301, 0.7815),(0.3993, 0.7753),(0.3692, 0.7714),(0.3287, 0.7742),(0.344, 0.7945),(0.4198, 0.8261),(0.4335, 0.819),(0.2981, 0.8094),(0.2845, 0.7889)]

IndexedFaceSet251.texCoord = TextureCoordinate252
Coordinate253 = x3d.Coordinate(DEF="Left_lower_eyelid_COORD_JinBlink")
Coordinate253.point = [(1.719, -0.0007944, -0.6346),(-2.666, 0.1549, 1.996),(2.315, 0.3494, -0.8744),(0.989, -0.2676, 0.1056),(-1.449, -0.2205, 1.411),(3.651, -0.24, -2.494),(-3.04, -0.8628, 1.994),(2.113, -1.162, -0.9625),(0.5806, -1.427, 0.2034),(-1.577, -1.266, 1.24),(-0.7878, -0.2335, 1.055),(3.25, 1.427, -1.433),(3.946, 1.094, -2.536),(-3.174, 0.6164, 2.536),(-3.946, -0.4586, 2.476)]

IndexedFaceSet251.coord = Coordinate253

Shape249.geometry = IndexedFaceSet251

Transform248.children.append(Shape249)

HAnimSegment247.children.append(Transform248)
Coordinate254 = x3d.Coordinate(USE="Left_lower_eyelid_COORD_JinBlink")

HAnimSegment247.coord = Coordinate254
HAnimDisplacer255 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinBlink")
HAnimDisplacer255.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer255.coordIndex = [0,1,2,4]
HAnimDisplacer255.displacements = [(0, 0.1171, 0.1997),(0, 0.2271, 0.251),(0, 0.1444, 0.0565),(-0.164, 0.1045, 0.25)]

HAnimSegment247.displacers.append(HAnimDisplacer255)
HAnimDisplacer256 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer256.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer256.coordIndex = [5,6,7,8,9,14]
HAnimDisplacer256.displacements = [(0, 0.1005, 0.079),(0, 0.1344, -0.107),(0.299, 0.3808, -0.1835),(0, 0.268, 0.0997),(0, 0.2684, 0),(0, 0.067, -0.082)]

HAnimSegment247.displacers.append(HAnimDisplacer256)
HAnimDisplacer257 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinEyesClosed")
HAnimDisplacer257.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer257.coordIndex = [0,1,2,4]
HAnimDisplacer257.displacements = [(0, 0.1171, 0.1997),(0, 0.2271, 0.251),(0, 0.1444, 0.0565),(-0.164, 0.1045, 0.25)]

HAnimSegment247.displacers.append(HAnimDisplacer257)
HAnimDisplacer258 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinLidDroop")
HAnimDisplacer258.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer258.coordIndex = [11]
HAnimDisplacer258.displacements = [(0, -0.349, 0)]

HAnimSegment247.displacers.append(HAnimDisplacer258)
HAnimDisplacer259 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinLidTightener")
HAnimDisplacer259.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer259.coordIndex = [0,1,2,3,4,10]
HAnimDisplacer259.displacements = [(0, 0.3086, 0),(0, 0.0964, 0),(-0.09, 0.209, 0),(0, 0.3085, 0),(0, 0.1513, 0),(0, 0.1512, 0)]

HAnimSegment247.displacers.append(HAnimDisplacer259)
HAnimDisplacer260 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinSquint")
HAnimDisplacer260.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer260.coordIndex = [0,1,2,3,4,10,11,12]
HAnimDisplacer260.displacements = [(0, 0.6387, 0.7019),(0, 0.3839, 0.263),(0, 0.499, 0.4721),(0, 0.7235, 0.3988),(0, 0.6387, 0.398),(0, 0.6386, 0.399),(0, -0.078, 0),(0, -0.078, 0)]

HAnimSegment247.displacers.append(HAnimDisplacer260)
HAnimDisplacer261 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer261.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer261.coordIndex = [13]
HAnimDisplacer261.displacements = [(0, 0.4976, 0)]

HAnimSegment247.displacers.append(HAnimDisplacer261)
HAnimDisplacer262 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinWink")
HAnimDisplacer262.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer262.coordIndex = [0,1,2,3,4,10,11]
HAnimDisplacer262.displacements = [(0.214, 1.0508, 0.5553),(0, 0.4269, 0.471),(0.093, 0.8476, 0.3331),(-0.3349, 1.0786, 0.7039),(0, 0.8357, 0.707),(0, 0.8975, 0.841),(0, 0, 0.034)]

HAnimSegment247.displacers.append(HAnimDisplacer262)

HAnimJoint89.children.append(HAnimSegment247)
HAnimSegment263 = x3d.HAnimSegment(DEF="hanim_Left_lower_vermillion_lip")
HAnimSegment263.name = "left_lower_vermillion_lip"
Transform264 = x3d.Transform(DEF="Left_lower_vermillion_lip_JinBlink")
Transform264.translation = [1.788,8.405,13.04]
Shape265 = x3d.Shape()
Appearance266 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape265.appearance = Appearance266
IndexedFaceSet267 = x3d.IndexedFaceSet(DEF="Left_lower_vermillion_lip-FACES_JinBlink")
IndexedFaceSet267.coordIndex = [2,1,0,-1]
IndexedFaceSet267.creaseAngle = 3.14159
IndexedFaceSet267.solid = False
IndexedFaceSet267.texCoordIndex = [2,1,0,-1]
TextureCoordinate268 = x3d.TextureCoordinate(DEF="Left_lower_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate268.point = [(0.2548, 0.6554),(0.3007, 0.651),(0.2652, 0.6384)]

IndexedFaceSet267.texCoord = TextureCoordinate268
Coordinate269 = x3d.Coordinate(DEF="Left_lower_vermillion_lip_COORD_JinBlink")
Coordinate269.point = [(-1.218, 0.4506, 0.603),(1.218, 0.219, -0.603),(-1.154, -0.4506, 0.3592)]

IndexedFaceSet267.coord = Coordinate269

Shape265.geometry = IndexedFaceSet267

Transform264.children.append(Shape265)

HAnimSegment263.children.append(Transform264)
Coordinate270 = x3d.Coordinate(USE="Left_lower_vermillion_lip_COORD_JinBlink")

HAnimSegment263.coord = Coordinate270
HAnimDisplacer271 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer271.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer271.coordIndex = [0,1,2]
HAnimDisplacer271.displacements = [(0, 0.3821, 0.435),(0.629, 1.323, 0.1066),(0, 0.7896, 0.4659)]

HAnimSegment263.displacers.append(HAnimDisplacer271)
HAnimDisplacer272 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer272.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer272.coordIndex = [0,1,2]
HAnimDisplacer272.displacements = [(0, 0.187, 0),(0, -0.1372, 0),(0, 0.6497, 0.364)]

HAnimSegment263.displacers.append(HAnimDisplacer272)
HAnimDisplacer273 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer273.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer273.coordIndex = [0,1,2]
HAnimDisplacer273.displacements = [(0, -0.0896, 0.533),(0.378, 0.396, 0.1527),(0, 0.6332, 0.8798)]

HAnimSegment263.displacers.append(HAnimDisplacer273)
HAnimDisplacer274 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinJawDrop")
HAnimDisplacer274.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer274.coordIndex = [0,2]
HAnimDisplacer274.displacements = [(0, -0.6156, 0),(0, -0.6154, 0)]

HAnimSegment263.displacers.append(HAnimDisplacer274)
HAnimDisplacer275 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer275.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer275.coordIndex = [0,1,2]
HAnimDisplacer275.displacements = [(0, -0.0368, 0.837),(0.21, -0.7014, 0.0777),(0, 0.5213, 1.2488)]

HAnimSegment263.displacers.append(HAnimDisplacer275)
HAnimDisplacer276 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer276.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer276.coordIndex = [2]
HAnimDisplacer276.displacements = [(1.176, 0.13, -0.375)]

HAnimSegment263.displacers.append(HAnimDisplacer276)
HAnimDisplacer277 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer277.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer277.coordIndex = [0,1,2]
HAnimDisplacer277.displacements = [(0.2642, -0.7179, 0.823),(-0.8355, 0, 1.0637),(-0.101, -0.5994, 0.7018)]

HAnimSegment263.displacers.append(HAnimDisplacer277)
HAnimDisplacer278 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipPressor")
HAnimDisplacer278.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer278.coordIndex = [0,2]
HAnimDisplacer278.displacements = [(0, -0.3795, 0.1337),(0, -0.21, 0)]

HAnimSegment263.displacers.append(HAnimDisplacer278)
HAnimDisplacer279 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer279.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer279.coordIndex = [0,1,2]
HAnimDisplacer279.displacements = [(0, -0.3959, 0.859),(-0.9348, 0, 0.5167),(0, -0.2497, 0.9748)]

HAnimSegment263.displacers.append(HAnimDisplacer279)
HAnimDisplacer280 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipsPart")
HAnimDisplacer280.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer280.coordIndex = [0,2]
HAnimDisplacer280.displacements = [(0, -0.4319, 0.0434),(0, -0.4133, -0.0174)]

HAnimSegment263.displacers.append(HAnimDisplacer280)
HAnimDisplacer281 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipStretcher")
HAnimDisplacer281.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer281.coordIndex = [1]
HAnimDisplacer281.displacements = [(0.898, 0.0092, 0.0257)]

HAnimSegment263.displacers.append(HAnimDisplacer281)
HAnimDisplacer282 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer282.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer282.coordIndex = [0,1,2]
HAnimDisplacer282.displacements = [(0, -0.0594, 0.1828),(0.125, 0, 0),(0, 0.633, 0.3625)]

HAnimSegment263.displacers.append(HAnimDisplacer282)
HAnimDisplacer283 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer283.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer283.coordIndex = [0,1,2]
HAnimDisplacer283.displacements = [(-0.042, -0.058, 1.082),(-0.5211, 0.1705, 1.038),(0.1612, 0.0641, 0.9158)]

HAnimSegment263.displacers.append(HAnimDisplacer283)
HAnimDisplacer284 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer284.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer284.coordIndex = [0,2]
HAnimDisplacer284.displacements = [(0, -0.5685, 0),(0, -0.5684, 0)]

HAnimSegment263.displacers.append(HAnimDisplacer284)
HAnimDisplacer285 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer285.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer285.coordIndex = [0,1,2]
HAnimDisplacer285.displacements = [(0.176, -2.4736, 0.049),(0, -0.7362, 0),(0.1963, -2.4594, 0.002)]

HAnimSegment263.displacers.append(HAnimDisplacer285)

HAnimJoint89.children.append(HAnimSegment263)
HAnimSegment286 = x3d.HAnimSegment(DEF="hanim_Left_nasolabial_cheek")
HAnimSegment286.name = "left_nasolabial_cheek"
Transform287 = x3d.Transform(DEF="Left_nasolabial_cheek_JinBlink")
Transform287.translation = [2.021,10.27,13.53]
Shape288 = x3d.Shape()
Appearance289 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape288.appearance = Appearance289
IndexedFaceSet290 = x3d.IndexedFaceSet(DEF="Left_nasolabial_cheek-FACES_JinBlink")
IndexedFaceSet290.coordIndex = [0,3,4,-1,3,0,5,-1,5,0,1,-1,1,2,5,-1]
IndexedFaceSet290.creaseAngle = 3.14159
IndexedFaceSet290.solid = False
IndexedFaceSet290.texCoordIndex = [0,3,4,-1,3,0,5,-1,5,0,1,-1,1,2,5,-1]
TextureCoordinate291 = x3d.TextureCoordinate(DEF="Left_nasolabial_cheek-TEXCOORD_JinBlink")
TextureCoordinate291.point = [(0.2661, 0.696),(0.2636, 0.664),(0.3007, 0.651),(0.2727, 0.7092),(0.2641, 0.7133),(0.2788, 0.6949)]

IndexedFaceSet290.texCoord = TextureCoordinate291
Coordinate292 = x3d.Coordinate(DEF="Left_nasolabial_cheek_COORD_JinBlink")
Coordinate292.point = [(-0.8548, 0.741, 0.5666),(-0.9852, -0.962, 1.035),(0.9852, -1.648, -1.094),(-0.5035, 1.438, 0.4388),(-0.9626, 1.648, 1.094),(-0.1761, 0.6814, 0.2329)]

IndexedFaceSet290.coord = Coordinate292

Shape288.geometry = IndexedFaceSet290

Transform287.children.append(Shape288)

HAnimSegment286.children.append(Transform287)
Coordinate293 = x3d.Coordinate(USE="Left_nasolabial_cheek_COORD_JinBlink")

HAnimSegment286.coord = Coordinate293
HAnimDisplacer294 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer294.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer294.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer294.displacements = [(0, 0.838, 0),(0, 0.5164, 0),(0.6288, 1.3226, 0.1063),(0, 0.838, 0),(0, 0.838, 0),(0, 0.8376, 0)]

HAnimSegment286.displacers.append(HAnimDisplacer294)
HAnimDisplacer295 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinChinRaiser")
HAnimDisplacer295.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer295.coordIndex = [1,2]
HAnimDisplacer295.displacements = [(0, 0.0967, 0),(0, -0.137, 0)]

HAnimSegment286.displacers.append(HAnimDisplacer295)
HAnimDisplacer296 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinDimpler")
HAnimDisplacer296.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer296.coordIndex = [1,2]
HAnimDisplacer296.displacements = [(0, -0.069, 0.044),(0.3778, 0.396, 0.1524)]

HAnimSegment286.displacers.append(HAnimDisplacer296)
HAnimDisplacer297 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer297.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer297.coordIndex = [1,2]
HAnimDisplacer297.displacements = [(0, -0.0221, 0.125),(0.2098, -0.701, 0.077)]

HAnimSegment286.displacers.append(HAnimDisplacer297)
HAnimDisplacer298 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer298.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer298.coordIndex = [5]
HAnimDisplacer298.displacements = [(1.176, 0.13, -0.375)]

HAnimSegment286.displacers.append(HAnimDisplacer298)
HAnimDisplacer299 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipFunneler")
HAnimDisplacer299.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer299.coordIndex = [1,2,5]
HAnimDisplacer299.displacements = [(-0.1338, 0.1022, 0.551),(-0.8357, 0, 1.0634),(0, 0, 0.1091)]

HAnimSegment286.displacers.append(HAnimDisplacer299)
HAnimDisplacer300 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer300.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer300.coordIndex = [1,2]
HAnimDisplacer300.displacements = [(-0.1438, 0, 0.566),(-0.935, 0, 0.5164)]

HAnimSegment286.displacers.append(HAnimDisplacer300)
HAnimDisplacer301 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipStretcher")
HAnimDisplacer301.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer301.coordIndex = [2]
HAnimDisplacer301.displacements = [(0.8978, 0.009, 0.025)]

HAnimSegment286.displacers.append(HAnimDisplacer301)
HAnimDisplacer302 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipSuck")
HAnimDisplacer302.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer302.coordIndex = [1,2]
HAnimDisplacer302.displacements = [(0, -0.52, -0.655),(0.1248, 0, 0)]

HAnimSegment286.displacers.append(HAnimDisplacer302)
HAnimDisplacer303 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipTightener")
HAnimDisplacer303.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer303.coordIndex = [1,2]
HAnimDisplacer303.displacements = [(-0.0758, -0.0332, 0.261),(-0.5214, 0.171, 1.0377)]

HAnimSegment286.displacers.append(HAnimDisplacer303)
HAnimDisplacer304 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinMouthStretch")
HAnimDisplacer304.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer304.coordIndex = [1,2]
HAnimDisplacer304.displacements = [(0, 0.2684, 0),(0, -0.736, 0)]

HAnimSegment286.displacers.append(HAnimDisplacer304)
HAnimDisplacer305 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer305.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer305.coordIndex = [0,3,4,5]
HAnimDisplacer305.displacements = [(0, 0.376, 0),(-0.0781, 0.552, 0),(0, 0.376, 0),(0, 0.4706, 0)]

HAnimSegment286.displacers.append(HAnimDisplacer305)
HAnimDisplacer306 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer306.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer306.coordIndex = [0,1,3,4,5]
HAnimDisplacer306.displacements = [(0, 0.502, 0),(0, 0.5016, 0),(0, 0.294, 0),(0, 0.294, 0),(0, 0.5016, 0)]

HAnimSegment286.displacers.append(HAnimDisplacer306)

HAnimJoint89.children.append(HAnimSegment286)
HAnimSegment307 = x3d.HAnimSegment(DEF="hanim_Left_nostril")
HAnimSegment307.name = "left_nostril"
Transform308 = x3d.Transform(DEF="Left_nostril_JinBlink")
Transform308.translation = [0.7684,11.22,15.04]
Shape309 = x3d.Shape()
Appearance310 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape309.appearance = Appearance310
IndexedFaceSet311 = x3d.IndexedFaceSet(DEF="Left_nostril-FACES_JinBlink")
IndexedFaceSet311.coordIndex = [0,2,3,-1,1,2,0,-1,4,3,2,-1]
IndexedFaceSet311.creaseAngle = 3.14159
IndexedFaceSet311.solid = False
IndexedFaceSet311.texCoordIndex = [0,2,3,-1,1,2,0,-1,4,3,2,-1]
TextureCoordinate312 = x3d.TextureCoordinate(DEF="Left_nostril-TEXCOORD_JinBlink")
TextureCoordinate312.point = [(0.2538, 0.7051),(0.2511, 0.6816),(0.2661, 0.696),(0.2528, 0.7186),(0.2641, 0.7133)]

IndexedFaceSet311.texCoord = TextureCoordinate312
Coordinate313 = x3d.Coordinate(DEF="Left_nostril_COORD_JinBlink")
Coordinate313.point = [(-0.2923, 0.2585, 0.9483),(-0.398, -0.9732, 0.1131),(0.398, -0.209, -0.9483),(-0.3119, 0.9732, 0.439),(0.2902, 0.6978, -0.4206)]

IndexedFaceSet311.coord = Coordinate313

Shape309.geometry = IndexedFaceSet311

Transform308.children.append(Shape309)

HAnimSegment307.children.append(Transform308)
Coordinate314 = x3d.Coordinate(USE="Left_nostril_COORD_JinBlink")

HAnimSegment307.coord = Coordinate314
HAnimDisplacer315 = x3d.HAnimDisplacer(DEF="Left_nostril_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer315.name = "left_nostril_morphinterpolator"
HAnimDisplacer315.coordIndex = [2,4]
HAnimDisplacer315.displacements = [(0, 0.838, 0),(0, 0.8382, 0)]

HAnimSegment307.displacers.append(HAnimDisplacer315)
HAnimDisplacer316 = x3d.HAnimDisplacer(DEF="Left_nostril_MorphInterpolator_JinNasolabialDeepener")
HAnimDisplacer316.name = "left_nostril_morphinterpolator"
HAnimDisplacer316.coordIndex = [0]
HAnimDisplacer316.displacements = [(0.3849, 0, 0)]

HAnimSegment307.displacers.append(HAnimDisplacer316)
HAnimDisplacer317 = x3d.HAnimDisplacer(DEF="Left_nostril_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer317.name = "left_nostril_morphinterpolator"
HAnimDisplacer317.coordIndex = [2,4]
HAnimDisplacer317.displacements = [(0, 0.3759, 0),(0, 0.3762, 0)]

HAnimSegment307.displacers.append(HAnimDisplacer317)
HAnimDisplacer318 = x3d.HAnimDisplacer(DEF="Left_nostril_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer318.name = "left_nostril_morphinterpolator"
HAnimDisplacer318.coordIndex = [2,4]
HAnimDisplacer318.displacements = [(0, 0.5016, 0),(0, 0.2937, 0)]

HAnimSegment307.displacers.append(HAnimDisplacer318)

HAnimJoint89.children.append(HAnimSegment307)
HAnimSegment319 = x3d.HAnimSegment(DEF="hanim_Left_pupil")
HAnimSegment319.name = "left_pupil"
Transform320 = x3d.Transform(DEF="Left_pupil_JinBlink")
Transform320.translation = [6.059,17.5,12.33]
Shape321 = x3d.Shape()
Appearance322 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape321.appearance = Appearance322
IndexedFaceSet323 = x3d.IndexedFaceSet(DEF="Left_pupil-FACES_JinBlink")
IndexedFaceSet323.coordIndex = [4,0,7,-1,7,6,4,-1,7,0,3,-1,3,8,7,-1,12,9,1,-1,1,2,12,-1,10,1,9,-1,5,3,1,-1,1,10,5,-1,0,4,11,-1,11,2,0,-1,2,11,12,-1,3,5,8,-1,0,2,1,-1,1,3,0,-1]
IndexedFaceSet323.creaseAngle = 3.14159
IndexedFaceSet323.solid = False
IndexedFaceSet323.texCoordIndex = [4,0,7,-1,7,6,4,-1,7,0,3,-1,3,8,7,-1,12,9,1,-1,1,2,12,-1,10,1,9,-1,5,3,1,-1,1,10,5,-1,0,4,11,-1,11,2,0,-1,2,11,12,-1,3,5,8,-1,0,2,1,-1,1,3,0,-1]
TextureCoordinate324 = x3d.TextureCoordinate(DEF="Left_pupil-TEXCOORD_JinBlink")
TextureCoordinate324.point = [(0.3496, 0.8297),(0.3746, 0.8042),(0.3491, 0.8029),(0.3744, 0.8314),(0.328, 0.824),(0.3871, 0.8321),(0.3258, 0.833),(0.3487, 0.8409),(0.385, 0.8438),(0.3777, 0.7936),(0.3889, 0.8064),(0.3322, 0.8026),(0.3442, 0.7934)]

IndexedFaceSet323.texCoord = TextureCoordinate324
Coordinate325 = x3d.Coordinate(DEF="Left_pupil_COORD_JinBlink")
Coordinate325.point = [(-0.4761, 0.63, 0.6933),(0.8417, -0.7176, -0.6485),(-0.4665, -0.8077, 0.1079),(0.8447, 0.7457, -0.2465),(-1.612, 0.3169, 1.289),(1.518, 0.7946, -0.736),(-1.517, 0.8129, 1.347),(-0.5339, 1.273, 1.112),(1.311, 1.316, -0.204),(1.04, -1.316, -0.9056),(1.612, -0.6212, -1.347),(-1.373, -0.8544, 0.5399),(-0.7368, -1.282, 0.04415)]

IndexedFaceSet323.coord = Coordinate325

Shape321.geometry = IndexedFaceSet323

Transform320.children.append(Shape321)

HAnimSegment319.children.append(Transform320)
Coordinate326 = x3d.Coordinate(USE="Left_pupil_COORD_JinBlink")

HAnimSegment319.coord = Coordinate326
HAnimDisplacer327 = x3d.HAnimDisplacer(DEF="Left_pupil_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer327.name = "left_pupil_morphinterpolator"
HAnimDisplacer327.coordIndex = [6,7]
HAnimDisplacer327.displacements = [(0, -0.0784, 0),(0, -0.078, 0)]

HAnimSegment319.displacers.append(HAnimDisplacer327)
HAnimDisplacer328 = x3d.HAnimDisplacer(DEF="Left_pupil_MorphInterpolator_JinLidTightener")
HAnimDisplacer328.name = "left_pupil_morphinterpolator"
HAnimDisplacer328.coordIndex = [6,7,8,9,12]
HAnimDisplacer328.displacements = [(0, -0.354, 0),(0, -0.3535, 0),(0, -0.3535, 0),(0, 0.308, 0),(0, 0.151, 0)]

HAnimSegment319.displacers.append(HAnimDisplacer328)
HAnimDisplacer329 = x3d.HAnimDisplacer(DEF="Left_pupil_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer329.name = "left_pupil_morphinterpolator"
HAnimDisplacer329.coordIndex = [6,7,8]
HAnimDisplacer329.displacements = [(0, 0.4971, 0),(0, 0.498, 0),(0, 0.498, 0)]

HAnimSegment319.displacers.append(HAnimDisplacer329)

HAnimJoint89.children.append(HAnimSegment319)
HAnimSegment330 = x3d.HAnimSegment(DEF="hanim_Left_temple")
HAnimSegment330.name = "left_temple"
Transform331 = x3d.Transform(DEF="Left_temple_JinBlink")
Transform331.translation = [10.95,20.56,6.406]
Shape332 = x3d.Shape()
Appearance333 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape332.appearance = Appearance333
IndexedFaceSet334 = x3d.IndexedFaceSet(DEF="Left_temple-FACES_JinBlink")
IndexedFaceSet334.coordIndex = [9,7,5,-1,5,12,9,-1,0,11,12,-1,12,5,0,-1,0,2,1,-1,1,8,0,-1,2,0,5,-1,10,6,7,-1,7,9,10,-1,7,3,2,-1,2,5,7,-1,4,3,7,-1,7,6,4,-1]
IndexedFaceSet334.creaseAngle = 3.14159
IndexedFaceSet334.solid = False
IndexedFaceSet334.texCoordIndex = [0,4,5,-1,5,6,0,-1,1,13,15,-1,15,7,1,-1,1,3,2,-1,2,10,1,-1,3,1,7,-1,8,9,4,-1,4,0,8,-1,4,11,12,-1,12,5,4,-1,14,11,4,-1,4,9,14,-1]
TextureCoordinate335 = x3d.TextureCoordinate(DEF="Left_temple-TEXCOORD_JinBlink")
TextureCoordinate335.point = [(0.44, 0.6625),(0.4455, 0.863),(0.4299, 0.8825),(0.4655, 0.9081),(0.4428, 0.6714),(0.4573, 0.671),(0.4547, 0.661),(0.462, 0.8557),(0.4352, 0.6651),(0.4342, 0.6719),(0.4266, 0.8643),(0.4479, 0.6875),(0.4606, 0.684),(0.4335, 0.819),(0.4319, 0.6876),(0.4572, 0.8171)]

IndexedFaceSet334.texCoord = TextureCoordinate335
Coordinate336 = x3d.Coordinate(DEF="Left_temple_COORD_JinBlink")
Coordinate336.point = [(-0.312, -0.6258, 2.224),(-1.079, 0.3506, 4.121),(0.5824, 2.214, 1.716),(0.9631, 2.994, -0.8569),(0.5756, 3.023, -4.121),(0.3971, -0.687, 1.044),(1.042, -0.4888, -3.649),(1.005, -0.6065, -1.903),(-1.243, -0.6321, 3.914),(1.028, -2.588, -2.479),(1.243, -2.002, -3.446),(-0.8897, -3.023, 2.376),(0.2546, -2.916, 0.5272)]

IndexedFaceSet334.coord = Coordinate336

Shape332.geometry = IndexedFaceSet334

Transform331.children.append(Shape332)

HAnimSegment330.children.append(Transform331)
Coordinate337 = x3d.Coordinate(USE="Left_temple_COORD_JinBlink")

HAnimSegment330.coord = Coordinate337
HAnimDisplacer338 = x3d.HAnimDisplacer(DEF="Left_temple_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer338.name = "left_temple_morphinterpolator"
HAnimDisplacer338.coordIndex = [1,8]
HAnimDisplacer338.displacements = [(0, -0.0942, 0),(0, -0.0941, 0)]

HAnimSegment330.displacers.append(HAnimDisplacer338)
HAnimDisplacer339 = x3d.HAnimDisplacer(DEF="Left_temple_MorphInterpolator_JinSquint")
HAnimDisplacer339.name = "left_temple_morphinterpolator"
HAnimDisplacer339.coordIndex = [8,11]
HAnimDisplacer339.displacements = [(0, -0.4529, 0),(0, -0.077, 0)]

HAnimSegment330.displacers.append(HAnimDisplacer339)

HAnimJoint89.children.append(HAnimSegment330)
HAnimSegment340 = x3d.HAnimSegment(DEF="hanim_Left_upper_cutaneous_lip")
HAnimSegment340.name = "left_upper_cutaneous_lip"
Transform341 = x3d.Transform(DEF="Left_upper_cutaneous_lip_JinBlink")
Transform341.translation = [0.7684,10.16,14.63]
Shape342 = x3d.Shape()
Appearance343 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape342.appearance = Appearance343
IndexedFaceSet344 = x3d.IndexedFaceSet(DEF="Left_upper_cutaneous_lip-FACES_JinBlink")
IndexedFaceSet344.coordIndex = [2,3,1,-1,1,0,2,-1]
IndexedFaceSet344.creaseAngle = 3.14159
IndexedFaceSet344.solid = False
IndexedFaceSet344.texCoordIndex = [2,3,1,-1,1,0,2,-1]
TextureCoordinate345 = x3d.TextureCoordinate(DEF="Left_upper_cutaneous_lip-TEXCOORD_JinBlink")
TextureCoordinate345.point = [(0.2661, 0.696),(0.2636, 0.664),(0.2511, 0.6816),(0.2548, 0.6653)]

IndexedFaceSet344.texCoord = TextureCoordinate345
Coordinate346 = x3d.Coordinate(DEF="Left_upper_cutaneous_lip_COORD_JinBlink")
Coordinate346.point = [(0.398, 0.8515, -0.5307),(0.2676, -0.8515, -0.06256),(-0.398, 0.08738, 0.5307),(-0.1985, -0.7812, 0.2164)]

IndexedFaceSet344.coord = Coordinate346

Shape342.geometry = IndexedFaceSet344

Transform341.children.append(Shape342)

HAnimSegment340.children.append(Transform341)
Coordinate347 = x3d.Coordinate(USE="Left_upper_cutaneous_lip_COORD_JinBlink")

HAnimSegment340.coord = Coordinate347
HAnimDisplacer348 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer348.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer348.coordIndex = [0,1,3]
HAnimDisplacer348.displacements = [(0, 0.8385, 0),(0, 0.5164, 0),(0, 0.4847, 0)]

HAnimSegment340.displacers.append(HAnimDisplacer348)
HAnimDisplacer349 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer349.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer349.coordIndex = [1,3]
HAnimDisplacer349.displacements = [(0, 0.0967, 0),(0, 0.1405, 0)]

HAnimSegment340.displacers.append(HAnimDisplacer349)
HAnimDisplacer350 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer350.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer350.coordIndex = [1,3]
HAnimDisplacer350.displacements = [(0, -0.0689, 0.0447),(0, -0.0689, 0.0448)]

HAnimSegment340.displacers.append(HAnimDisplacer350)
HAnimDisplacer351 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer351.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer351.coordIndex = [1,3]
HAnimDisplacer351.displacements = [(0, -0.0221, 0.1251),(0, -0.022, 0.1251)]

HAnimSegment340.displacers.append(HAnimDisplacer351)
HAnimDisplacer352 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer352.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer352.coordIndex = [1,3]
HAnimDisplacer352.displacements = [(-0.1339, 0.1022, 0.5512),(-0.0736, 0.1634, 0.5282)]

HAnimSegment340.displacers.append(HAnimDisplacer352)
HAnimDisplacer353 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer353.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer353.coordIndex = [1,3]
HAnimDisplacer353.displacements = [(-0.1441, 0, 0.5662),(-0.0977, 0, 0.5662)]

HAnimSegment340.displacers.append(HAnimDisplacer353)
HAnimDisplacer354 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer354.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer354.coordIndex = [1,3]
HAnimDisplacer354.displacements = [(0, -0.5205, -0.6547),(0, -0.5208, -0.6547)]

HAnimSegment340.displacers.append(HAnimDisplacer354)
HAnimDisplacer355 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer355.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer355.coordIndex = [1,3]
HAnimDisplacer355.displacements = [(-0.0754, -0.0332, 0.2613),(-0.0415, -0.0383, 0.241)]

HAnimSegment340.displacers.append(HAnimDisplacer355)
HAnimDisplacer356 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer356.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer356.coordIndex = [1,3]
HAnimDisplacer356.displacements = [(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment340.displacers.append(HAnimDisplacer356)
HAnimDisplacer357 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer357.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer357.coordIndex = [0]
HAnimDisplacer357.displacements = [(0, 0.3765, 0)]

HAnimSegment340.displacers.append(HAnimDisplacer357)
HAnimDisplacer358 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer358.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer358.coordIndex = [0,1,3]
HAnimDisplacer358.displacements = [(0, 0.5015, 0),(0, 0.5016, 0),(0, 0.5016, 0)]

HAnimSegment340.displacers.append(HAnimDisplacer358)

HAnimJoint89.children.append(HAnimSegment340)
HAnimSegment359 = x3d.HAnimSegment(DEF="hanim_Left_upper_eyelid")
HAnimSegment359.name = "left_upper_eyelid"
Transform360 = x3d.Transform(DEF="Left_upper_eyelid_JinBlink")
Transform360.translation = [5.53,17.96,12.21]
Shape361 = x3d.Shape()
Appearance362 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape361.appearance = Appearance362
IndexedFaceSet363 = x3d.IndexedFaceSet(DEF="Left_upper_eyelid-FACES_JinBlink")
IndexedFaceSet363.coordIndex = [1,2,0,-1,6,2,3,-1,3,4,6,-1,3,2,1,-1,1,0,13,-1,13,0,7,-1,8,10,5,-1,5,12,8,-1,4,5,10,-1,10,6,4,-1,0,9,7,-1,7,9,11,-1,13,7,11,-1,11,14,13,-1]
IndexedFaceSet363.creaseAngle = 3.14159
IndexedFaceSet363.solid = False
IndexedFaceSet363.texCoordIndex = [2,1,0,-1,4,1,5,-1,5,3,4,-1,5,1,2,-1,2,0,6,-1,6,0,9,-1,11,13,8,-1,8,15,11,-1,3,8,13,-1,13,4,3,-1,0,12,9,-1,10,12,14,-1,7,10,14,-1,14,16,7,-1]
TextureCoordinate364 = x3d.TextureCoordinate(DEF="Left_upper_eyelid-TEXCOORD_JinBlink")
TextureCoordinate364.point = [(0.274, 0.8322),(0.3402, 0.8534),(0.3285, 0.8323),(0.3831, 0.8437),(0.3979, 0.8641),(0.3487, 0.8409),(0.2983, 0.8142),(0.2981, 0.8094),(0.4198, 0.8261),(0.2678, 0.8154),(0.2677, 0.8134),(0.4455, 0.863),(0.2534, 0.8152),(0.4266, 0.8643),(0.2671, 0.7978),(0.4335, 0.819),(0.2845, 0.7889)]

IndexedFaceSet363.texCoord = TextureCoordinate364
Coordinate365 = x3d.Coordinate(DEF="Left_upper_eyelid_COORD_JinBlink")
Coordinate365.point = [(-3.944, 0.2777, 3.581),(-0.9888, 0.3455, 1.465),(-0.4509, 1.393, 2.381),(-0.005327, 0.806, 1.231),(1.84, 0.849, -0.08585),(3.829, -0.08937, -2.326),(2.527, 1.923, -0.05675),(-4.303, -0.6947, 2.247),(5.103, 1.975, -3.581),(-5.103, -0.5987, 2.53),(4.172, 1.969, -1.891),(-4.353, -1.523, 2.057),(4.525, -0.4223, -3.429),(-2.594, -0.8999, 1.643),(-3.366, -1.975, 1.583)]

IndexedFaceSet363.coord = Coordinate365

Shape361.geometry = IndexedFaceSet363

Transform360.children.append(Shape361)

HAnimSegment359.children.append(Transform360)
Coordinate366 = x3d.Coordinate(USE="Left_upper_eyelid_COORD_JinBlink")

HAnimSegment359.coord = Coordinate366
HAnimDisplacer367 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinBlink")
HAnimDisplacer367.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer367.coordIndex = [1,3,4]
HAnimDisplacer367.displacements = [(0.2496, -2.0425, -0.987),(1.6453, -2.567, -1.8279),(0.478, -2.36, -1.1421)]

HAnimSegment359.displacers.append(HAnimDisplacer367)
HAnimDisplacer368 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer368.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer368.coordIndex = [0,1,2,3,6,10]
HAnimDisplacer368.displacements = [(-0.331, -0.4142, 0),(0, -0.0785, 0),(-0.5075, -0.4988, 0),(0, -0.0785, 0),(0, -0.094, 0),(0, -0.094, 0)]

HAnimSegment359.displacers.append(HAnimDisplacer368)
HAnimDisplacer369 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer369.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer369.coordIndex = [14]
HAnimDisplacer369.displacements = [(0, 0.067, -0.082)]

HAnimSegment359.displacers.append(HAnimDisplacer369)
HAnimDisplacer370 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinEyesClosed")
HAnimDisplacer370.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer370.coordIndex = [1,3,4]
HAnimDisplacer370.displacements = [(0.2496, -2.0425, -0.987),(1.6453, -2.567, -1.8279),(0.478, -2.36, -1.1421)]

HAnimSegment359.displacers.append(HAnimDisplacer370)
HAnimDisplacer371 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer371.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer371.coordIndex = [0,2,6]
HAnimDisplacer371.displacements = [(0, 0.3655, 0),(0, 0.365, 0),(0, 0.094, 0)]

HAnimSegment359.displacers.append(HAnimDisplacer371)
HAnimDisplacer372 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinJawDrop")
HAnimDisplacer372.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer372.coordIndex = [14]
HAnimDisplacer372.displacements = [(0, -0.316, 0)]

HAnimSegment359.displacers.append(HAnimDisplacer372)
HAnimDisplacer373 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinLidDroop")
HAnimDisplacer373.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer373.coordIndex = [1,3,4,5]
HAnimDisplacer373.displacements = [(0, -0.7517, 0),(0, -1.0484, 0),(0, -1.0134, 0),(0, -0.3486, 0)]

HAnimSegment359.displacers.append(HAnimDisplacer373)
HAnimDisplacer374 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinLidTightener")
HAnimDisplacer374.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer374.coordIndex = [1,3,4]
HAnimDisplacer374.displacements = [(0, -0.354, 0),(0, -0.354, 0),(0, -0.354, 0)]

HAnimSegment359.displacers.append(HAnimDisplacer374)
HAnimDisplacer375 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer375.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer375.coordIndex = [14]
HAnimDisplacer375.displacements = [(0, -0.535, 0.842)]

HAnimSegment359.displacers.append(HAnimDisplacer375)
HAnimDisplacer376 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinSlit")
HAnimDisplacer376.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer376.coordIndex = [1,3,4]
HAnimDisplacer376.displacements = [(0, -1.0868, 0),(0, -1.4762, 0),(0, -1.3055, 0)]

HAnimSegment359.displacers.append(HAnimDisplacer376)
HAnimDisplacer377 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinSquint")
HAnimDisplacer377.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer377.coordIndex = [1,3,4,5,6,10,12]
HAnimDisplacer377.displacements = [(0, -0.5962, 0),(0, -0.7726, -0.115),(0, -0.7324, 0),(0, -0.0775, 0),(0, -0.463, 0),(0, -0.464, 0),(0, -0.0776, 0)]

HAnimSegment359.displacers.append(HAnimDisplacer377)
HAnimDisplacer378 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer378.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer378.coordIndex = [1,2,3,4,13]
HAnimDisplacer378.displacements = [(0, 0.4975, 0),(0, 0.497, 0),(0, 0.498, 0),(0, 0.498, 0),(0, 0.4975, 0)]

HAnimSegment359.displacers.append(HAnimDisplacer378)
HAnimDisplacer379 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinWink")
HAnimDisplacer379.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer379.coordIndex = [1,3,4,5]
HAnimDisplacer379.displacements = [(0, -1.2176, -0.113),(0, -1.6397, -0.189),(0, -1.4464, -0.1133),(0, 0, 0.033)]

HAnimSegment359.displacers.append(HAnimDisplacer379)

HAnimJoint89.children.append(HAnimSegment359)
HAnimSegment380 = x3d.HAnimSegment(DEF="hanim_Left_upper_vermillion_lip")
HAnimSegment380.name = "left_upper_vermillion_lip"
Transform381 = x3d.Transform(DEF="Left_upper_vermillion_lip_JinBlink")
Transform381.translation = [1.788,9.002,13.64]
Shape382 = x3d.Shape()
Appearance383 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape382.appearance = Appearance383
IndexedFaceSet384 = x3d.IndexedFaceSet(DEF="Left_upper_vermillion_lip-FACES_JinBlink")
IndexedFaceSet384.coordIndex = [0,1,3,-1,1,2,3,-1]
IndexedFaceSet384.creaseAngle = 3.14159
IndexedFaceSet384.solid = False
IndexedFaceSet384.texCoordIndex = [0,1,3,-1,1,2,3,-1]
TextureCoordinate385 = x3d.TextureCoordinate(DEF="Left_upper_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate385.point = [(0.3007, 0.651),(0.2636, 0.664),(0.2548, 0.6653),(0.2548, 0.6553)]

IndexedFaceSet384.texCoord = TextureCoordinate385
Coordinate386 = x3d.Coordinate(DEF="Left_upper_vermillion_lip_COORD_JinBlink")
Coordinate386.point = [(1.218, -0.3781, -1.204),(-0.7521, 0.3078, 0.925),(-1.218, 0.3781, 1.204),(-1.218, -0.1506, 0.4455)]

IndexedFaceSet384.coord = Coordinate386

Shape382.geometry = IndexedFaceSet384

Transform381.children.append(Shape382)

HAnimSegment380.children.append(Transform381)
Coordinate387 = x3d.Coordinate(USE="Left_upper_vermillion_lip_COORD_JinBlink")

HAnimSegment380.coord = Coordinate387
HAnimDisplacer388 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer388.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer388.coordIndex = [0,1,2,3]
HAnimDisplacer388.displacements = [(0.629, 1.3225, 0.107),(0, 0.5164, 0),(0, 0.4847, 0),(0, 0.4847, 0)]

HAnimSegment380.displacers.append(HAnimDisplacer388)
HAnimDisplacer389 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer389.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer389.coordIndex = [0,1,2,3]
HAnimDisplacer389.displacements = [(0, -0.1372, 0),(0, 0.0967, 0),(0, 0.1405, 0),(0, 0.187, 0)]

HAnimSegment380.displacers.append(HAnimDisplacer389)
HAnimDisplacer390 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer390.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer390.coordIndex = [0,1,2,3]
HAnimDisplacer390.displacements = [(0.378, 0.3959, 0.153),(0, -0.0689, 0.0447),(0, -0.0688, 0.045),(0, -0.0435, 0.4553)]

HAnimSegment380.displacers.append(HAnimDisplacer390)
HAnimDisplacer391 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer391.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer391.coordIndex = [0,1,2,3]
HAnimDisplacer391.displacements = [(0.21, -0.7019, 0.078),(0, -0.0221, 0.125),(0, -0.022, 0.125),(0, 0.0541, 0.5975)]

HAnimSegment380.displacers.append(HAnimDisplacer391)
HAnimDisplacer392 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer392.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer392.coordIndex = [3]
HAnimDisplacer392.displacements = [(1.176, 0.13, -0.375)]

HAnimSegment380.displacers.append(HAnimDisplacer392)
HAnimDisplacer393 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer393.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer393.coordIndex = [0,1,2,3]
HAnimDisplacer393.displacements = [(-0.8355, 0, 1.0637),(-0.134, 0.1022, 0.551),(-0.074, 0.1634, 0.528),(0, 0.1236, 0.8775)]

HAnimSegment380.displacers.append(HAnimDisplacer393)
HAnimDisplacer394 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer394.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer394.coordIndex = [0,1,2,3]
HAnimDisplacer394.displacements = [(-0.9348, 0, 0.5167),(-0.1441, 0, 0.566),(-0.098, 0, 0.566),(-0.041, 0, 0.366)]

HAnimSegment380.displacers.append(HAnimDisplacer394)
HAnimDisplacer395 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipStretcher")
HAnimDisplacer395.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer395.coordIndex = [0]
HAnimDisplacer395.displacements = [(0.898, 0.0091, 0.026)]

HAnimSegment380.displacers.append(HAnimDisplacer395)
HAnimDisplacer396 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer396.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer396.coordIndex = [0,1,2,3]
HAnimDisplacer396.displacements = [(0.125, 0, 0),(0, -0.5204, -0.6548),(0, -0.5204, -0.6547),(0, -0.135, -0.2471)]

HAnimSegment380.displacers.append(HAnimDisplacer396)
HAnimDisplacer397 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer397.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer397.coordIndex = [0,1,2,3]
HAnimDisplacer397.displacements = [(-0.5211, 0.1704, 1.038),(-0.0755, -0.0332, 0.261),(-0.042, -0.0383, 0.241),(-0.042, -0.0353, 0.6945)]

HAnimSegment380.displacers.append(HAnimDisplacer397)
HAnimDisplacer398 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer398.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer398.coordIndex = [0,1,2,3]
HAnimDisplacer398.displacements = [(0, -0.7359, 0),(0, 0.2684, 0),(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment380.displacers.append(HAnimDisplacer398)
HAnimDisplacer399 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer399.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer399.coordIndex = [1,2,3]
HAnimDisplacer399.displacements = [(0, 0.5016, 0),(0, 0.5017, 0),(0, 0.5017, 0)]

HAnimSegment380.displacers.append(HAnimDisplacer399)

HAnimJoint89.children.append(HAnimSegment380)
HAnimSegment400 = x3d.HAnimSegment(DEF="hanim_Left_upper_vermillion_lip001")
HAnimSegment400.name = "left_upper_vermillion_lip001"
HAnimDisplacer401 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip001_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer401.name = "left_upper_vermillion_lip001_morphinterpolator"
HAnimDisplacer401.coordIndex = [3]
HAnimDisplacer401.displacements = [(-1.176, 0.13, -0.375)]

HAnimSegment400.displacers.append(HAnimDisplacer401)

HAnimJoint89.children.append(HAnimSegment400)
HAnimSegment402 = x3d.HAnimSegment(DEF="hanim_Mid_forehead")
HAnimSegment402.name = "mid_forehead"
Transform403 = x3d.Transform(DEF="Mid_forehead_JinBlink")
Transform403.translation = [0,27.83,9.426]
Shape404 = x3d.Shape()
Appearance405 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape404.appearance = Appearance405
IndexedFaceSet406 = x3d.IndexedFaceSet(DEF="Mid_forehead-FACES_JinBlink")
IndexedFaceSet406.coordIndex = [8,6,1,-1,1,7,8,-1,2,3,13,-1,13,0,2,-1,3,4,15,-1,15,13,3,-1,0,16,5,-1,5,2,0,-1,16,7,1,-1,1,5,16,-1,8,7,10,-1,10,9,8,-1,11,0,13,-1,13,12,11,-1,12,13,15,-1,15,14,12,-1,0,11,17,-1,17,16,0,-1,16,17,10,-1,10,7,16,-1]
IndexedFaceSet406.creaseAngle = 3.14159
IndexedFaceSet406.solid = False
IndexedFaceSet406.texCoordIndex = [10,11,5,-1,5,0,10,-1,6,7,2,-1,2,1,6,-1,7,8,3,-1,3,2,7,-1,1,4,9,-1,9,6,1,-1,4,0,5,-1,5,9,4,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,18,19,21,-1,21,20,18,-1,16,17,23,-1,23,22,16,-1,22,23,15,-1,15,12,22,-1]
TextureCoordinate407 = x3d.TextureCoordinate(DEF="Mid_forehead-TEXCOORD_JinBlink")
TextureCoordinate407.point = [(0.2445, 0.9452),(0.257, 0.9724),(0.2533, 0.9737),(0.2542, 0.9749),(0.2428, 0.959),(0.2706, 0.9459),(0.3002, 0.9788),(0.3015, 0.9807),(0.3016, 0.9833),(0.2804, 0.9652),(0.2442, 0.8727),(0.2728, 0.8741),(0.2445, 0.9452),(0.2442, 0.8727),(0.2728, 0.8741),(0.2706, 0.9459),(0.257, 0.9724),(0.3002, 0.9788),(0.3015, 0.9807),(0.2533, 0.9737),(0.3016, 0.9833),(0.2542, 0.9749),(0.2428, 0.959),(0.2804, 0.9652)]

IndexedFaceSet406.texCoord = TextureCoordinate407
Coordinate408 = x3d.Coordinate(DEF="Mid_forehead_COORD_JinBlink")
Coordinate408.point = [(0, 5.541, 2.824),(1.396, -3.453, 6.748),(2.374, 5.108, 2.647),(2.504, 6.733, -0.9399),(2.504, 6.89, -7.142),(1.966, 1.836, 5.915),(1.516, -7.326, 6.506),(0, -3.452, 7.111),(0, -7.396, 7.142),(-1.516, -7.326, 6.506),(-1.396, -3.453, 6.748),(-2.374, 5.108, 2.647),(-2.504, 6.733, -0.9399),(0, 7.175, -0.7764),(-2.504, 6.89, -7.142),(0, 7.396, -7.142),(0, 1.906, 6.344),(-1.966, 1.836, 5.915)]

IndexedFaceSet406.coord = Coordinate408

Shape404.geometry = IndexedFaceSet406

Transform403.children.append(Shape404)

HAnimSegment402.children.append(Transform403)
Coordinate409 = x3d.Coordinate(USE="Mid_forehead_COORD_JinBlink")

HAnimSegment402.coord = Coordinate409

HAnimJoint89.children.append(HAnimSegment402)
HAnimSegment410 = x3d.HAnimSegment(DEF="hanim_Mid_nasal_dorsum")
HAnimSegment410.name = "mid_nasal_dorsum"
Transform411 = x3d.Transform(DEF="Mid_nasal_dorsum_JinBlink")
Transform411.translation = [0,14.79,15.76]
Shape412 = x3d.Shape()
Appearance413 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape412.appearance = Appearance413
IndexedFaceSet414 = x3d.IndexedFaceSet(DEF="Mid_nasal_dorsum-FACES_JinBlink")
IndexedFaceSet414.coordIndex = [0,5,6,-1,0,6,2,-1,2,6,1,-1,1,3,2,-1,4,6,5,-1,4,7,6,-1,7,8,1,-1,1,6,7,-1]
IndexedFaceSet414.creaseAngle = 3.14159
IndexedFaceSet414.solid = False
IndexedFaceSet414.texCoordIndex = [3,2,1,-1,3,0,5,-1,5,0,4,-1,4,6,5,-1,7,9,8,-1,7,11,10,-1,11,13,12,-1,12,10,11,-1]
TextureCoordinate415 = x3d.TextureCoordinate(DEF="Mid_nasal_dorsum-TEXCOORD_JinBlink")
TextureCoordinate415.point = [(0.2496, 0.7705),(0.2441, 0.7705),(0.2441, 0.816),(0.2534, 0.8152),(0.2415, 0.7261),(0.2534, 0.767),(0.2528, 0.7186),(0.2534, 0.8152),(0.2441, 0.816),(0.2441, 0.7705),(0.2496, 0.7705),(0.2534, 0.767),(0.2415, 0.7261),(0.2528, 0.7186)]

IndexedFaceSet414.texCoord = TextureCoordinate415
Coordinate416 = x3d.Coordinate(DEF="Mid_nasal_dorsum_COORD_JinBlink")
Coordinate416.point = [(0.4273, 2.576, -1.018),(0, -2.334, 1.018),(0.2355, 0.01204, -0.9689),(0.4565, -2.593, -0.276),(-0.4273, 2.576, -1.018),(0, 2.593, -0.9668),(0, 0.1768, -0.8433),(-0.2355, 0.01204, -0.9689),(-0.4565, -2.593, -0.276)]

IndexedFaceSet414.coord = Coordinate416

Shape412.geometry = IndexedFaceSet414

Transform411.children.append(Shape412)

HAnimSegment410.children.append(Transform411)
Coordinate417 = x3d.Coordinate(USE="Mid_nasal_dorsum_COORD_JinBlink")

HAnimSegment410.coord = Coordinate417

HAnimJoint89.children.append(HAnimSegment410)
HAnimSegment418 = x3d.HAnimSegment(DEF="hanim_Mid_upper_vermillion_lip")
HAnimSegment418.name = "mid_upper_vermillion_lip"
Transform419 = x3d.Transform(DEF="Mid_upper_vermillion_lip_JinBlink")
Transform419.translation = [0,9.116,14.46]
Shape420 = x3d.Shape()
Appearance421 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape420.appearance = Appearance421
IndexedFaceSet422 = x3d.IndexedFaceSet(DEF="Mid_upper_vermillion_lip-FACES_JinBlink")
IndexedFaceSet422.coordIndex = [4,5,1,-1,1,0,4,-1,4,3,2,-1,2,5,4,-1]
IndexedFaceSet422.creaseAngle = 3.14159
IndexedFaceSet422.solid = False
IndexedFaceSet422.texCoordIndex = [1,3,2,-1,2,0,1,-1,6,5,4,-1,4,7,6,-1]
TextureCoordinate423 = x3d.TextureCoordinate(DEF="Mid_upper_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate423.point = [(0.2548, 0.6653),(0.2441, 0.6653),(0.2548, 0.6553),(0.2441, 0.6553),(0.2548, 0.6553),(0.2548, 0.6653),(0.2441, 0.6653),(0.2441, 0.6553)]

IndexedFaceSet422.texCoord = TextureCoordinate423
Coordinate424 = x3d.Coordinate(DEF="Mid_upper_vermillion_lip_COORD_JinBlink")
Coordinate424.point = [(0.5699, 0.2644, 0.3792),(0.5699, -0.2644, -0.3792),(-0.5699, -0.2644, -0.3792),(-0.5699, 0.2644, 0.3792),(0, 0.2644, 0.3792),(0, -0.2644, -0.3792)]

IndexedFaceSet422.coord = Coordinate424

Shape420.geometry = IndexedFaceSet422

Transform419.children.append(Shape420)

HAnimSegment418.children.append(Transform419)
Coordinate425 = x3d.Coordinate(USE="Mid_upper_vermillion_lip_COORD_JinBlink")

HAnimSegment418.coord = Coordinate425
HAnimDisplacer426 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer426.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer426.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer426.displacements = [(0, 0.4846, 0),(0, 0.4847, 0),(0, 0.4847, 0),(0, 0.4846, 0),(0, 0.4846, 0),(0, 0.4847, 0)]

HAnimSegment418.displacers.append(HAnimDisplacer426)
HAnimDisplacer427 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer427.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer427.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer427.displacements = [(0, 0.1404, 0),(0, 0.187, 0),(0, 0.187, 0),(0, 0.1404, 0),(0, 0.2285, 0),(0, 0.2207, 0)]

HAnimSegment418.displacers.append(HAnimDisplacer427)
HAnimDisplacer428 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer428.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer428.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer428.displacements = [(0, -0.0689, 0.0448),(0, -0.0435, 0.4552),(0, -0.0435, 0.4552),(0, -0.0689, 0.0448),(0, -0.0689, 0.0448),(0, -0.0435, 0.4552)]

HAnimSegment418.displacers.append(HAnimDisplacer428)
HAnimDisplacer429 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer429.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer429.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer429.displacements = [(0, -0.0221, 0.1251),(0, 0.0541, 0.5977),(0, 0.0541, 0.5977),(0, -0.0514, -0.0369),(0, -0.0514, -0.0369),(0, 0.0541, 0.5977)]

HAnimSegment418.displacers.append(HAnimDisplacer429)
HAnimDisplacer430 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer430.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer430.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer430.displacements = [(-0.0737, 0.1633, 0.5282),(0, 0.1237, 0.8777),(0, 0.1237, 0.8777),(0.0737, 0.1633, 0.5282),(0, 0.107, 0.5282),(0, 0.1237, 0.8777)]

HAnimSegment418.displacers.append(HAnimDisplacer430)
HAnimDisplacer431 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer431.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer431.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer431.displacements = [(-0.0978, 0, 0.5662),(-0.0413, 0, 0.3659),(-0.0413, 0, 0.3659),(0.0156, 0, 0.5662),(-0.0411, 0, 0.5662),(-0.0413, 0, 0.3659)]

HAnimSegment418.displacers.append(HAnimDisplacer431)
HAnimDisplacer432 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer432.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer432.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer432.displacements = [(0, -0.5204, -0.6547),(0, -0.135, -0.2472),(0, -0.135, -0.2472),(0, -0.5204, -0.6547),(0, -0.5204, -0.6547),(0, -0.135, -0.2472)]

HAnimSegment418.displacers.append(HAnimDisplacer432)
HAnimDisplacer433 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer433.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer433.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer433.displacements = [(-0.0415, -0.0383, 0.241),(-0.0415, -0.0352, 0.6946),(0.0415, -0.0352, 0.6946),(0.0415, -0.0383, 0.241),(0, -0.0383, 0.241),(0, -0.0352, 0.6946)]

HAnimSegment418.displacers.append(HAnimDisplacer433)
HAnimDisplacer434 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer434.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer434.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer434.displacements = [(0, 0.2683, 0),(0, 0.2684, 0),(0, 0.2684, 0),(0, 0.2683, 0),(0, 0.2683, 0),(0, 0.2684, 0)]

HAnimSegment418.displacers.append(HAnimDisplacer434)
HAnimDisplacer435 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer435.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer435.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer435.displacements = [(0, 0.5016, 0),(0, 0.5017, 0),(0, 0.5017, 0),(0, 0.5016, 0),(0, 0.5016, 0),(0, 0.5017, 0)]

HAnimSegment418.displacers.append(HAnimDisplacer435)

HAnimJoint89.children.append(HAnimSegment418)
HAnimSegment436 = x3d.HAnimSegment(DEF="hanim_Nasal_tip")
HAnimSegment436.name = "nasal_tip"
Transform437 = x3d.Transform(DEF="Nasal_tip_JinBlink")
Transform437.translation = [0,11.35,16.23]
Shape438 = x3d.Shape()
Appearance439 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape438.appearance = Appearance439
IndexedFaceSet440 = x3d.IndexedFaceSet(DEF="Nasal_tip-FACES_JinBlink")
IndexedFaceSet440.coordIndex = [4,0,1,-1,4,3,2,-1,2,7,4,-1,3,4,1,-1,4,5,0,-1,4,7,6,-1,6,8,4,-1,8,5,4,-1]
IndexedFaceSet440.creaseAngle = 3.14159
IndexedFaceSet440.solid = False
IndexedFaceSet440.texCoordIndex = [1,2,3,-1,1,5,4,-1,4,0,1,-1,5,1,3,-1,6,8,7,-1,6,10,9,-1,9,11,6,-1,11,8,6,-1]
TextureCoordinate441 = x3d.TextureCoordinate(DEF="Nasal_tip-TEXCOORD_JinBlink")
TextureCoordinate441.point = [(0.2415, 0.7261),(0.2441, 0.7109),(0.2441, 0.6816),(0.2511, 0.6816),(0.2528, 0.7186),(0.2538, 0.7051),(0.2441, 0.7109),(0.2441, 0.6816),(0.2511, 0.6816),(0.2528, 0.7186),(0.2415, 0.7261),(0.2538, 0.7051)]

IndexedFaceSet440.texCoord = TextureCoordinate441
Coordinate442 = x3d.Coordinate(DEF="Nasal_tip_COORD_JinBlink")
Coordinate442.point = [(0, -1.103, -1.068),(0.3704, -1.103, -1.072),(0.4565, 0.8434, -0.7458),(0.4761, 0.1288, -0.2364),(0, 0.4512, 1.072),(-0.3704, -1.103, -1.072),(-0.4565, 0.8434, -0.7458),(0, 1.103, 0.5484),(-0.4761, 0.1288, -0.2364)]

IndexedFaceSet440.coord = Coordinate442

Shape438.geometry = IndexedFaceSet440

Transform437.children.append(Shape438)

HAnimSegment436.children.append(Transform437)
Coordinate443 = x3d.Coordinate(USE="Nasal_tip_COORD_JinBlink")

HAnimSegment436.coord = Coordinate443
HAnimDisplacer444 = x3d.HAnimDisplacer(DEF="Nasal_tip_MorphInterpolator_JinNasolabialDeepener")
HAnimDisplacer444.name = "nasal_tip_morphinterpolator"
HAnimDisplacer444.coordIndex = [3,8]
HAnimDisplacer444.displacements = [(0.3849, 0, 0),(-0.3849, 0, 0)]

HAnimSegment436.displacers.append(HAnimDisplacer444)

HAnimJoint89.children.append(HAnimSegment436)
HAnimSegment445 = x3d.HAnimSegment(DEF="hanim_Neck")
HAnimSegment445.name = "neck"
Transform446 = x3d.Transform(DEF="Neck_JinBlink")
Transform446.translation = [0,4.213,0.4657]
Shape447 = x3d.Shape()
Appearance448 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape447.appearance = Appearance448
IndexedFaceSet449 = x3d.IndexedFaceSet(DEF="Neck-FACES_JinBlink")
IndexedFaceSet449.coordIndex = [1,0,12,-1,12,13,1,-1,0,2,14,-1,14,12,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,5,6,17,-1,17,18,5,-1,4,5,18,-1,18,16,4,-1,19,7,1,-1,1,13,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,17,6,11,-1,11,23,17,-1,23,11,10,-1,10,22,23,-1]
IndexedFaceSet449.creaseAngle = 3.14159
IndexedFaceSet449.solid = False
IndexedFaceSet449.texCoordIndex = [0,1,12,-1,12,13,0,-1,1,2,14,-1,14,12,1,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,5,6,17,-1,17,18,5,-1,4,5,18,-1,18,16,4,-1,19,7,0,-1,0,13,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,17,6,11,-1,11,23,17,-1,23,11,10,-1,10,22,23,-1]
TextureCoordinate450 = x3d.TextureCoordinate(DEF="Neck-TEXCOORD_JinBlink")
TextureCoordinate450.point = [(0.04371, 0.6512),(0.05004, 0.6512),(0.05713, 0.6512),(0.06211, 0.6512),(0.05807, 0.6512),(0.05084, 0.6529),(0.04371, 0.6456),(0.03739, 0.6512),(0.0303, 0.6512),(0.02531, 0.6512),(0.02935, 0.6512),(0.03659, 0.6529),(0.0501, 0.6113),(0.04371, 0.612),(0.05726, 0.6141),(0.0623, 0.6138),(0.05822, 0.6099),(0.04371, 0.6064),(0.05091, 0.6065),(0.03733, 0.6113),(0.03016, 0.6141),(0.02513, 0.6138),(0.02921, 0.6099),(0.03652, 0.6065)]

IndexedFaceSet449.texCoord = TextureCoordinate450
Coordinate451 = x3d.Coordinate(DEF="Neck_COORD_JinBlink")
Coordinate451.point = [(1.364, 4.193, -2.856),(0, 4.193, -3.036),(2.893, 4.193, -2.16),(3.969, 4.193, 0.1849),(3.097, 4.193, 1.816),(1.537, 4.525, 2.797),(0, 3.099, 3.036),(-1.364, 4.193, -2.856),(-2.893, 4.193, -2.16),(-3.969, 4.193, 0.1849),(-3.097, 4.193, 1.816),(-1.537, 4.525, 2.797),(1.378, -3.566, -2.884),(0, -3.437, -3.067),(2.923, -3.023, -2.182),(4.009, -3.081, 0.1871),(3.129, -3.839, 1.835),(0, -4.525, 3.067),(1.552, -4.502, 2.826),(-1.378, -3.566, -2.884),(-2.923, -3.023, -2.182),(-4.009, -3.081, 0.1871),(-3.129, -3.839, 1.835),(-1.552, -4.502, 2.826)]

IndexedFaceSet449.coord = Coordinate451

Shape447.geometry = IndexedFaceSet449

Transform446.children.append(Shape447)

HAnimSegment445.children.append(Transform446)
Coordinate452 = x3d.Coordinate(USE="Neck_COORD_JinBlink")

HAnimSegment445.coord = Coordinate452
HAnimDisplacer453 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer453.name = "neck_morphinterpolator"
HAnimDisplacer453.coordIndex = [0,1,2,6,8,10]
HAnimDisplacer453.displacements = [(0, 0.156, 0),(0, 0.373, 0),(0, 0.485, 0),(0.0193, 1.002, -0.758),(-0.261, 0.915, -1.261),(-0.281, 0.915, -0.875)]

HAnimSegment445.displacers.append(HAnimDisplacer453)
HAnimDisplacer454 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinChinRaiser")
HAnimDisplacer454.name = "neck_morphinterpolator"
HAnimDisplacer454.coordIndex = [1,4,7,8,10]
HAnimDisplacer454.displacements = [(0, 0.407, 0.199),(0, -0.009, 0),(0, 0.038, 0),(0, -0.076, 0),(0, -0.076, 0)]

HAnimSegment445.displacers.append(HAnimDisplacer454)
HAnimDisplacer455 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinDimpler")
HAnimDisplacer455.name = "neck_morphinterpolator"
HAnimDisplacer455.coordIndex = [2,4,8,10]
HAnimDisplacer455.displacements = [(0.363, 0.369, -1.625),(0.389, 0.369, -1.1236),(-0.364, -0.024, -1.625),(-0.39, -0.024, -1.1236)]

HAnimSegment445.displacers.append(HAnimDisplacer455)
HAnimDisplacer456 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer456.name = "neck_morphinterpolator"
HAnimDisplacer456.coordIndex = [4,8,10]
HAnimDisplacer456.displacements = [(0.217, -0.716, -0.609),(-0.19, -0.716, -0.879),(-0.203, -0.716, -0.609)]

HAnimSegment445.displacers.append(HAnimDisplacer456)
HAnimDisplacer457 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinLipStretcher")
HAnimDisplacer457.name = "neck_morphinterpolator"
HAnimDisplacer457.coordIndex = [2,3,4,8,9,10]
HAnimDisplacer457.displacements = [(0.863, -0.058, -4.372),(1.197, -0.058, -3.6409),(0.927, -0.058, -3.133),(-0.938, -0.058, -4.372),(-1.272, -0.058, -3.6409),(-1.002, -0.058, -3.133)]

HAnimSegment445.displacers.append(HAnimDisplacer457)
HAnimDisplacer458 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer458.name = "neck_morphinterpolator"
HAnimDisplacer458.coordIndex = [6]
HAnimDisplacer458.displacements = [(0, -0.299, 0)]

HAnimSegment445.displacers.append(HAnimDisplacer458)

HAnimJoint89.children.append(HAnimSegment445)
HAnimSegment459 = x3d.HAnimSegment(DEF="hanim_Occipital_scalp")
HAnimSegment459.name = "occipital_scalp"
Transform460 = x3d.Transform(DEF="Occipital_scalp_JinBlink")
Transform460.translation = [0,22.26,-9.81]
Shape461 = x3d.Shape()
Appearance462 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape461.appearance = Appearance462
IndexedFaceSet463 = x3d.IndexedFaceSet(DEF="Occipital_scalp-FACES_JinBlink")
IndexedFaceSet463.coordIndex = [16,6,9,-1,9,11,16,-1,11,18,17,-1,17,60,11,-1,15,10,9,-1,9,6,15,-1,12,65,17,-1,17,18,12,-1,36,33,16,-1,16,11,36,-1,35,36,11,-1,11,60,35,-1,37,140,156,-1,140,4,42,-1,140,37,4,-1,15,5,37,-1,37,8,15,-1,7,5,15,-1,15,6,7,-1,5,7,37,-1,10,15,8,-1,8,0,10,-1,12,18,0,-1,65,12,0,-1,0,74,65,-1,16,33,13,-1,13,33,34,-1,19,13,34,-1,37,7,13,-1,13,19,37,-1,13,7,6,-1,6,16,13,-1,19,34,14,-1,34,152,41,-1,41,14,34,-1,37,19,14,-1,14,4,37,-1,14,41,42,-1,42,4,14,-1,9,18,11,-1,10,0,9,-1,0,18,9,-1,0,20,74,-1,81,82,20,-1,0,22,20,-1,0,8,21,-1,21,23,0,-1,2,23,21,-1,0,23,22,-1,2,28,3,-1,3,28,24,-1,2,30,28,-1,1,27,28,-1,28,30,1,-1,2,26,30,-1,21,8,25,-1,30,26,25,-1,30,25,39,-1,74,20,82,-1,3,23,2,-1,20,3,81,-1,96,29,27,-1,44,29,96,-1,29,3,24,-1,44,81,29,-1,81,3,29,-1,24,27,29,-1,24,28,27,-1,22,3,20,-1,22,23,3,-1,26,2,21,-1,26,21,25,-1,37,40,39,-1,25,8,37,-1,25,37,39,-1,31,39,40,-1,1,31,40,-1,1,30,31,-1,30,39,31,-1,150,152,34,-1,34,32,150,-1,32,101,198,-1,198,150,32,-1,36,32,34,-1,34,33,36,-1,35,101,32,-1,32,36,35,-1,1,40,51,-1,96,51,48,-1,1,51,27,-1,27,51,96,-1,49,38,37,-1,106,96,48,-1,49,37,43,-1,54,51,49,-1,49,52,54,-1,50,47,45,-1,50,45,46,-1,53,51,54,-1,49,50,52,-1,48,51,53,-1,49,43,50,-1,53,55,106,-1,106,48,53,-1,58,57,56,-1,56,59,58,-1,57,60,17,-1,17,61,57,-1,62,59,56,-1,56,63,62,-1,64,61,17,-1,17,65,64,-1,66,57,58,-1,58,67,66,-1,35,60,57,-1,57,66,35,-1,68,199,190,-1,190,191,69,-1,190,69,68,-1,62,70,68,-1,68,71,62,-1,72,59,62,-1,62,71,72,-1,71,68,72,-1,63,73,70,-1,70,62,63,-1,64,73,61,-1,65,74,73,-1,73,64,65,-1,58,75,67,-1,75,76,67,-1,77,76,75,-1,68,77,75,-1,75,72,68,-1,75,58,59,-1,59,72,75,-1,77,78,76,-1,76,78,79,-1,79,192,76,-1,68,69,78,-1,78,77,68,-1,78,69,191,-1,191,79,78,-1,56,57,61,-1,63,56,73,-1,73,56,61,-1,73,74,80,-1,81,80,82,-1,73,80,83,-1,73,85,84,-1,84,70,73,-1,86,84,85,-1,73,83,85,-1,86,88,87,-1,88,89,87,-1,86,87,90,-1,91,90,87,-1,87,92,91,-1,86,90,93,-1,84,94,70,-1,90,94,93,-1,90,95,94,-1,74,82,80,-1,88,86,85,-1,80,81,88,-1,96,92,97,-1,44,96,97,-1,97,89,88,-1,44,97,81,-1,81,97,88,-1,89,97,92,-1,89,92,87,-1,83,80,88,-1,83,88,85,-1,93,84,86,-1,93,94,84,-1,68,95,98,-1,94,68,70,-1,94,95,68,-1,99,98,95,-1,91,98,99,-1,91,99,90,-1,90,99,95,-1,197,100,76,-1,76,192,197,-1,100,197,198,-1,198,101,100,-1,66,67,76,-1,76,100,66,-1,35,66,100,-1,100,101,35,-1,91,102,98,-1,96,103,102,-1,91,92,102,-1,92,96,102,-1,104,68,105,-1,106,103,96,-1,104,107,68,-1,109,108,104,-1,104,102,109,-1,110,112,111,-1,110,113,112,-1,114,109,102,-1,104,108,110,-1,103,114,102,-1,104,110,107,-1,114,103,106,-1,106,55,114,-1,117,159,121,-1,121,118,117,-1,151,161,117,-1,117,118,151,-1,119,143,134,-1,155,121,159,-1,121,146,122,-1,147,123,122,-1,154,115,146,-1,121,155,146,-1,154,146,155,-1,155,159,145,-1,154,155,145,-1,147,126,125,-1,125,123,147,-1,127,139,125,-1,124,116,139,-1,123,144,121,-1,121,122,123,-1,139,130,131,-1,131,124,139,-1,128,131,130,-1,128,129,131,-1,131,129,124,-1,134,132,119,-1,132,138,119,-1,129,135,124,-1,120,136,137,-1,137,129,120,-1,134,137,136,-1,120,133,136,-1,133,134,136,-1,134,135,137,-1,137,135,129,-1,115,122,146,-1,140,42,138,-1,152,143,41,-1,116,124,141,-1,119,138,143,-1,42,41,143,-1,138,42,143,-1,143,152,153,-1,141,153,116,-1,134,143,135,-1,135,143,141,-1,135,141,124,-1,153,151,142,-1,142,151,118,-1,144,142,118,-1,118,121,144,-1,153,144,116,-1,144,153,142,-1,116,144,125,-1,125,139,116,-1,123,125,144,-1,141,143,153,-1,151,153,149,-1,148,161,151,-1,151,149,148,-1,149,153,152,-1,152,150,149,-1,149,150,198,-1,198,148,149,-1,140,138,156,-1,117,158,157,-1,157,159,117,-1,160,158,117,-1,117,161,160,-1,162,164,163,-1,165,159,157,-1,157,167,166,-1,168,167,169,-1,170,166,171,-1,157,166,165,-1,170,165,166,-1,165,145,159,-1,170,145,165,-1,168,169,172,-1,172,173,168,-1,174,172,175,-1,176,175,177,-1,169,167,157,-1,157,178,169,-1,175,176,179,-1,179,180,175,-1,181,180,179,-1,181,179,182,-1,179,176,182,-1,164,162,183,-1,183,162,184,-1,182,176,185,-1,187,182,186,-1,186,188,187,-1,164,188,186,-1,187,188,189,-1,189,188,164,-1,164,186,185,-1,186,182,185,-1,171,166,167,-1,190,184,191,-1,192,79,163,-1,177,193,176,-1,162,163,184,-1,191,163,79,-1,184,163,191,-1,163,194,192,-1,193,177,194,-1,164,185,163,-1,185,193,163,-1,185,176,193,-1,194,195,160,-1,195,158,160,-1,178,157,158,-1,158,195,178,-1,194,177,178,-1,178,195,194,-1,177,175,172,-1,172,178,177,-1,169,178,172,-1,193,194,163,-1,160,196,194,-1,148,196,160,-1,160,161,148,-1,196,197,192,-1,192,194,196,-1,196,148,198,-1,198,197,196,-1,190,199,184,-1]
IndexedFaceSet463.creaseAngle = 3.14159
IndexedFaceSet463.solid = False
IndexedFaceSet463.texCoordIndex = [0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,79,87,-1,79,15,80,-1,79,14,15,-1,7,17,14,-1,14,16,7,-1,18,17,7,-1,7,19,18,-1,17,18,14,-1,8,7,16,-1,16,20,8,-1,9,6,20,-1,10,9,20,-1,20,21,10,-1,0,12,22,-1,22,12,23,-1,24,22,23,-1,14,18,22,-1,22,24,14,-1,22,18,19,-1,19,0,22,-1,24,23,25,-1,23,83,78,-1,78,25,23,-1,14,24,25,-1,25,15,14,-1,25,78,80,-1,80,15,25,-1,2,6,1,-1,8,20,2,-1,20,6,2,-1,28,27,26,-1,31,30,29,-1,28,32,27,-1,28,35,34,-1,34,33,28,-1,36,33,34,-1,28,33,32,-1,36,38,37,-1,37,38,39,-1,36,40,38,-1,41,44,43,-1,43,42,41,-1,46,45,42,-1,34,35,47,-1,42,45,48,-1,40,47,49,-1,26,27,50,-1,37,33,36,-1,27,37,51,-1,54,53,52,-1,57,56,55,-1,53,37,39,-1,58,51,53,-1,51,37,53,-1,59,44,56,-1,59,43,44,-1,61,60,29,-1,61,62,60,-1,63,36,34,-1,63,34,47,-1,65,76,64,-1,47,35,66,-1,47,66,49,-1,67,64,76,-1,68,67,76,-1,41,40,69,-1,40,49,69,-1,81,83,23,-1,23,70,81,-1,70,71,82,-1,82,81,70,-1,11,70,23,-1,23,12,11,-1,13,71,70,-1,70,11,13,-1,72,73,74,-1,75,74,77,-1,72,74,84,-1,84,74,75,-1,85,86,88,-1,89,75,77,-1,85,88,90,-1,92,74,85,-1,85,91,92,-1,93,94,95,-1,93,95,96,-1,97,74,92,-1,85,93,91,-1,77,74,97,-1,85,90,93,-1,97,98,89,-1,89,77,97,-1,104,103,102,-1,102,105,104,-1,103,107,106,-1,106,108,103,-1,109,105,102,-1,102,110,109,-1,111,108,106,-1,106,112,111,-1,113,103,104,-1,104,114,113,-1,115,107,103,-1,103,113,115,-1,116,118,117,-1,117,120,119,-1,117,119,116,-1,109,121,116,-1,116,122,109,-1,124,123,109,-1,109,122,124,-1,122,116,124,-1,110,125,121,-1,121,109,110,-1,111,125,108,-1,112,126,125,-1,125,111,112,-1,104,127,114,-1,127,128,114,-1,129,128,127,-1,116,129,127,-1,127,124,116,-1,127,104,123,-1,123,124,127,-1,129,130,128,-1,128,130,131,-1,131,132,128,-1,116,119,130,-1,130,129,116,-1,130,119,120,-1,120,131,130,-1,102,103,108,-1,110,102,125,-1,125,102,108,-1,133,135,134,-1,136,138,137,-1,133,134,139,-1,133,141,140,-1,140,142,133,-1,143,140,141,-1,133,139,141,-1,143,145,144,-1,145,146,144,-1,143,144,147,-1,150,149,148,-1,148,151,150,-1,152,149,153,-1,140,154,142,-1,149,155,153,-1,147,156,154,-1,135,157,134,-1,145,143,141,-1,134,158,145,-1,159,161,160,-1,162,164,163,-1,160,146,145,-1,165,160,158,-1,158,160,145,-1,166,163,151,-1,166,151,148,-1,167,138,168,-1,167,168,169,-1,170,140,143,-1,170,154,140,-1,171,173,172,-1,154,174,142,-1,154,156,174,-1,175,172,173,-1,176,172,175,-1,150,177,147,-1,147,177,156,-1,179,178,128,-1,128,132,179,-1,178,179,180,-1,180,181,178,-1,113,114,128,-1,128,178,113,-1,115,113,178,-1,178,181,115,-1,99,100,101,-1,75,182,100,-1,99,183,100,-1,183,75,100,-1,184,185,186,-1,89,182,75,-1,184,187,185,-1,189,188,184,-1,184,100,189,-1,190,191,192,-1,190,193,191,-1,194,189,100,-1,184,188,190,-1,182,194,100,-1,184,190,187,-1,194,182,89,-1,89,98,194,-1,195,198,197,-1,197,196,195,-1,199,200,195,-1,195,196,199,-1,203,202,201,-1,204,197,198,-1,197,206,205,-1,208,207,205,-1,210,209,206,-1,197,204,206,-1,210,206,204,-1,212,198,211,-1,213,212,211,-1,208,215,214,-1,214,207,208,-1,217,216,214,-1,219,218,216,-1,207,220,197,-1,197,205,207,-1,216,222,221,-1,221,219,216,-1,223,221,222,-1,223,224,221,-1,221,224,219,-1,201,225,203,-1,225,226,203,-1,224,227,219,-1,228,230,229,-1,229,224,228,-1,201,229,230,-1,228,231,230,-1,231,201,230,-1,201,227,229,-1,229,227,224,-1,209,205,206,-1,232,233,226,-1,235,202,234,-1,218,219,236,-1,203,226,202,-1,233,234,202,-1,226,233,202,-1,202,235,237,-1,236,237,218,-1,201,202,227,-1,227,202,236,-1,227,236,219,-1,237,199,238,-1,238,199,196,-1,220,238,196,-1,196,197,220,-1,237,239,218,-1,239,237,238,-1,218,239,214,-1,214,216,218,-1,207,214,239,-1,236,202,237,-1,199,237,240,-1,241,200,199,-1,199,240,241,-1,240,237,235,-1,235,242,240,-1,240,242,243,-1,243,241,240,-1,232,226,244,-1,247,246,245,-1,245,248,247,-1,249,246,247,-1,247,250,249,-1,251,253,252,-1,254,248,245,-1,245,256,255,-1,257,256,258,-1,259,255,260,-1,245,255,254,-1,259,254,255,-1,261,262,248,-1,263,262,261,-1,257,258,264,-1,264,265,257,-1,266,264,267,-1,268,267,269,-1,258,256,245,-1,245,270,258,-1,267,268,271,-1,271,272,267,-1,273,272,271,-1,273,271,274,-1,271,268,274,-1,253,251,275,-1,275,251,276,-1,274,268,277,-1,279,274,278,-1,278,280,279,-1,253,280,278,-1,279,280,281,-1,281,280,253,-1,253,278,277,-1,278,274,277,-1,260,255,256,-1,282,276,283,-1,284,285,252,-1,269,286,268,-1,251,252,276,-1,283,252,285,-1,276,252,283,-1,252,287,284,-1,286,269,287,-1,253,277,252,-1,277,286,252,-1,277,268,286,-1,287,288,249,-1,288,246,249,-1,270,245,246,-1,246,288,270,-1,287,269,289,-1,289,288,287,-1,269,267,264,-1,264,289,269,-1,258,289,264,-1,286,287,252,-1,249,290,287,-1,291,290,249,-1,249,250,291,-1,290,292,284,-1,284,287,290,-1,290,291,293,-1,293,292,290,-1,282,294,276,-1]
TextureCoordinate464 = x3d.TextureCoordinate(DEF="Occipital_scalp-TEXCOORD_JinBlink")
TextureCoordinate464.point = [(0.9175, 0.8974),(0.9509, 0.8981),(0.9421, 0.8701),(0.924, 0.8702),(0.9824, 0.8971),(0.9824, 0.8682),(0.9541, 0.8718),(0.9147, 0.8129),(0.9437, 0.8153),(0.9638, 0.8095),(0.9824, 0.809),(0.9461, 0.923),(0.9071, 0.9135),(0.9824, 0.9287),(0.8767, 0.8622),(0.8669, 0.8674),(0.9208, 0.8549),(0.8792, 0.7991),(0.8835, 0.8633),(0.9139, 0.8636),(0.9513, 0.84),(0.9824, 0.8358),(0.8845, 0.9021),(0.888, 0.931),(0.8761, 0.9036),(0.8705, 0.9018),(0.7338, 0.8385),(0.7279, 0.8339),(0.7208, 0.8401),(0.7397, 0.7767),(0.7338, 0.7681),(0.7338, 0.7727),(0.7192, 0.8201),(0.7171, 0.8352),(0.7139, 0.8364),(0.7127, 0.8419),(0.7175, 0.832),(0.7247, 0.8312),(0.7224, 0.8292),(0.7239, 0.8169),(0.7146, 0.8334),(0.7152, 0.8309),(0.753, 0.7762),(0.7452, 0.772),(0.7409, 0.7703),(0.756, 0.7661),(0.7502, 0.7748),(0.7102, 0.837),(0.7574, 0.7798),(0.7054, 0.8378),(0.7338, 0.8253),(0.7338, 0.8299),(0.7267, 0.8275),(0.7291, 0.8283),(0.7338, 0.8254),(0.7338, 0.7682),(0.7385, 0.7711),(0.7338, 0.7628),(0.7338, 0.82),(0.7437, 0.7597),(0.7429, 0.774),(0.7484, 0.7629),(0.7505, 0.778),(0.7116, 0.8233),(0.7622, 0.7806),(0.763, 0.7872),(0.7046, 0.8444),(0.7572, 0.7769),(0.7524, 0.7737),(0.7104, 0.8341),(0.9158, 0.9539),(0.9824, 0.9663),(0.392, 0.6289),(0.4147, 0.6411),(0.4093, 0.6273),(0.3758, 0.6166),(0.7576, 0.779),(0.4093, 0.6139),(0.8544, 0.902),(0.8589, 0.7975),(0.8568, 0.8668),(0.8497, 0.9637),(0.7343, 0.9872),(0.8538, 0.9345),(0.3771, 0.6213),(0.4147, 0.6411),(0.392, 0.6289),(0.8605, 0.8638),(0.3927, 0.6595),(0.4093, 0.6122),(0.4111, 0.6626),(0.4239, 0.6387),(0.4273, 0.6228),(0.4239, 0.6648),(0.4352, 0.6651),(0.4267, 0.6717),(0.4123, 0.664),(0.4255, 0.614),(0.4253, 0.6099),(0.392, 0.6289),(0.4093, 0.6273),(0.4147, 0.6411),(0.9421, 0.8701),(0.9509, 0.8981),(0.9175, 0.8974),(0.924, 0.8702),(0.9824, 0.8682),(0.9824, 0.8971),(0.9541, 0.8718),(0.9147, 0.8129),(0.9437, 0.8153),(0.9638, 0.8095),(0.9824, 0.809),(0.9461, 0.923),(0.9071, 0.9135),(0.9824, 0.9287),(0.8767, 0.8622),(0.8589, 0.7975),(0.8605, 0.8638),(0.8669, 0.8674),(0.8568, 0.8668),(0.9208, 0.8549),(0.8792, 0.7991),(0.9139, 0.8636),(0.8835, 0.8633),(0.9513, 0.84),(0.9824, 0.8358),(0.8845, 0.9021),(0.888, 0.931),(0.8761, 0.9036),(0.8705, 0.9018),(0.8544, 0.902),(0.8538, 0.9345),(0.7208, 0.8401),(0.7279, 0.8339),(0.7338, 0.8385),(0.7338, 0.7727),(0.7338, 0.7681),(0.7397, 0.7767),(0.7192, 0.8201),(0.7139, 0.8364),(0.7171, 0.8352),(0.7127, 0.8419),(0.7175, 0.832),(0.7224, 0.8292),(0.7247, 0.8312),(0.7239, 0.8169),(0.7146, 0.8334),(0.7452, 0.772),(0.753, 0.7762),(0.7152, 0.8309),(0.7409, 0.7703),(0.7502, 0.7748),(0.756, 0.7661),(0.7102, 0.837),(0.7574, 0.7798),(0.7054, 0.8378),(0.7338, 0.8253),(0.7338, 0.8299),(0.7338, 0.8254),(0.7291, 0.8283),(0.7267, 0.8275),(0.7338, 0.7628),(0.7385, 0.7711),(0.7338, 0.7682),(0.7338, 0.82),(0.7437, 0.7597),(0.7484, 0.7629),(0.7429, 0.774),(0.7505, 0.778),(0.7116, 0.8233),(0.763, 0.7872),(0.7576, 0.779),(0.7622, 0.7806),(0.7046, 0.8444),(0.7572, 0.7769),(0.7524, 0.7737),(0.7104, 0.8341),(0.9158, 0.9539),(0.8497, 0.9637),(0.7343, 0.9872),(0.9824, 0.9663),(0.4093, 0.6139),(0.3771, 0.6213),(0.4147, 0.6411),(0.3927, 0.6595),(0.392, 0.6289),(0.4111, 0.6626),(0.4239, 0.6387),(0.4273, 0.6228),(0.4239, 0.6648),(0.4267, 0.6717),(0.4352, 0.6651),(0.4123, 0.664),(0.4255, 0.614),(0.7343, 0.9169),(0.7616, 0.9147),(0.7553, 0.8982),(0.7343, 0.8968),(0.7739, 0.9327),(0.7343, 0.9365),(0.8187, 0.8433),(0.8348, 0.9045),(0.8324, 0.8647),(0.74, 0.8745),(0.761, 0.8768),(0.7497, 0.8755),(0.777, 0.8787),(0.7647, 0.8593),(0.7596, 0.8565),(0.7438, 0.8546),(0.7343, 0.8756),(0.7372, 0.8736),(0.7405, 0.8536),(0.7808, 0.8802),(0.7786, 0.8666),(0.7875, 0.8787),(0.7821, 0.8667),(0.7952, 0.9076),(0.8011, 0.8823),(0.7745, 0.9003),(0.7939, 0.8518),(0.7845, 0.8549),(0.7731, 0.8049),(0.7979, 0.8609),(0.8185, 0.8054),(0.8439, 0.8655),(0.8131, 0.8741),(0.786, 0.7876),(0.8107, 0.8538),(0.8058, 0.8252),(0.8096, 0.8166),(0.8589, 0.7975),(0.8568, 0.8668),(0.8544, 0.902),(0.8538, 0.9345),(0.8173, 0.9068),(0.8156, 0.9257),(0.7753, 0.9186),(0.7832, 0.9041),(0.7881, 0.9479),(0.7343, 0.9577),(0.8497, 0.9637),(0.7343, 0.9872),(0.8605, 0.8638),(0.7553, 0.8982),(0.7616, 0.9147),(0.7343, 0.9169),(0.7343, 0.8968),(0.7739, 0.9327),(0.7343, 0.9365),(0.8324, 0.8647),(0.8348, 0.9045),(0.8187, 0.8433),(0.74, 0.8745),(0.7497, 0.8755),(0.761, 0.8768),(0.7647, 0.8593),(0.777, 0.8787),(0.7438, 0.8546),(0.7596, 0.8565),(0.7372, 0.8736),(0.7343, 0.8756),(0.7405, 0.8536),(0.7808, 0.8802),(0.7786, 0.8666),(0.7821, 0.8667),(0.7875, 0.8787),(0.8011, 0.8823),(0.7952, 0.9076),(0.7745, 0.9003),(0.7939, 0.8518),(0.7845, 0.8549),(0.7731, 0.8049),(0.7979, 0.8609),(0.8185, 0.8054),(0.8439, 0.8655),(0.8131, 0.8741),(0.8107, 0.8538),(0.786, 0.7876),(0.8058, 0.8252),(0.8096, 0.8166),(0.8589, 0.7975),(0.8568, 0.8668),(0.8538, 0.9345),(0.8544, 0.902),(0.8173, 0.9068),(0.8156, 0.9257),(0.7753, 0.9186),(0.7832, 0.9041),(0.7881, 0.9479),(0.7343, 0.9577),(0.8497, 0.9637),(0.7343, 0.9872),(0.8605, 0.8638)]

IndexedFaceSet463.texCoord = TextureCoordinate464
Coordinate465 = x3d.Coordinate(DEF="Occipital_scalp_COORD_JinBlink")
Coordinate465.point = [(6.595, -7.151, -8.257),(9.429, -11.8, 3.993),(8.282, -11.22, -0.9892),(4.624, -11.64, -3.306),(16.07, -2.995, 5.873),(15.82, -12.8, 1.071),(12.64, -1.285, -4.598),(16.07, -3.083, 2.316),(10.71, -6.207, -3.224),(8.946, -0.132, -8.392),(8.698, -10.19, -8.675),(6.297, 5.219, -7.352),(4.896, -9.878, -12.77),(14.18, 4.623, 2.748),(14.87, 4.604, 5.309),(13.01, -7.209, -3.663),(11.99, 5.219, -3.545),(0, -0.8915, -10.42),(6.297, -0.1284, -9.196),(14.21, 4.47, 4.372),(2.98, -10.26, -5.72),(10.1, -9.009, -1.975),(7.409, -17.27, -8.757),(8.44, -9.628, -3.832),(4.999, -18.87, -2.922),(11.97, -8.702, 0.9778),(11.23, -15.65, -1.56),(3.584, -13.5, 0.961),(5.778, -12.67, 0.2527),(2.389, -13.11, -1.714),(9.699, -10.52, 1.837),(11.85, -10.17, 6.164),(6.297, 16.77, 2.005),(12.13, 8.819, -0.9951),(11.81, 12.89, 2.963),(0, 12.79, -5.593),(6.297, 11.97, -5.107),(14.78, -4.967, 4.122),(9.429, -11.8, 3.993),(14.37, -8.308, 4.774),(12.02, -9.081, 8.596),(15.26, 5.042, 8.379),(16.68, -2.579, 7.954),(13.63, -4.256, 7.877),(0, -17.31, -6.802),(14.16, -2.229, 11.05),(14.63, -3.955, 8.111),(12.19, -3.7, 12.77),(5.31, -15.15, 7.498),(12.02, -9.081, 8.596),(12.84, -3.763, 10.48),(9.046, -12.17, 7.498),(12.8, -9.61, 10.48),(5.33, -15.13, 10.8),(8.079, -13.16, 11.16),(0, -16.06, 10.76),(-8.946, -0.132, -8.392),(-6.297, 5.219, -7.352),(-11.99, 5.219, -3.545),(-12.64, -1.285, -4.598),(0, 5.219, -8.851),(-6.297, -0.1284, -9.196),(-13.01, -7.209, -3.663),(-8.698, -10.19, -8.675),(-4.896, -9.878, -12.77),(0, -5.378, -11.66),(-6.297, 11.97, -5.107),(-12.13, 8.819, -0.9951),(-14.78, -4.967, 4.122),(-16.07, -2.995, 5.873),(-10.71, -6.207, -3.224),(-15.82, -12.8, 1.071),(-16.07, -3.083, 2.316),(-6.595, -7.151, -8.257),(0, -7.956, -9.37),(-14.18, 4.623, 2.748),(-11.81, 12.89, 2.963),(-14.21, 4.47, 4.372),(-14.87, 4.604, 5.309),(-15.26, 5.042, 8.379),(-2.98, -10.26, -5.72),(0, -12.28, -5.509),(0, -14.6, -11.22),(-7.409, -17.27, -8.757),(-10.1, -9.009, -1.975),(-8.44, -9.628, -3.832),(-8.282, -11.22, -0.9892),(-5.778, -12.67, 0.2527),(-4.624, -11.64, -3.306),(-4.999, -18.87, -2.922),(-9.699, -10.52, 1.837),(-9.429, -11.8, 3.993),(-3.584, -13.5, 0.961),(-11.23, -15.65, -1.56),(-11.97, -8.702, 0.9778),(-14.37, -8.308, 4.774),(0, -14.56, 0.6872),(-2.389, -13.11, -1.714),(-12.02, -9.081, 8.596),(-11.85, -10.17, 6.164),(-6.297, 16.77, 2.005),(0, 17.52, 2.005),(-9.046, -12.17, 7.498),(-5.31, -15.15, 7.498),(-12.02, -9.081, 8.596),(-9.429, -11.8, 3.993),(0, -15.55, 7.498),(-13.63, -4.256, 7.877),(-12.8, -9.61, 10.48),(-8.079, -13.16, 11.16),(-12.84, -3.763, 10.48),(-12.19, -3.7, 12.77),(-14.16, -2.229, 11.05),(-14.63, -3.955, 8.111),(-5.33, -15.13, 10.8),(6.083, -2.338, 25.93),(11.2, 8.465, 19.14),(0, 13.66, 24.16),(5.65, 12.75, 23.28),(15.14, -3.7, 12.77),(10.26, -12.78, 18.76),(5.008, 9.476, 25.96),(6.444, 2.872, 25.97),(9.382, 1.978, 23.24),(12.3, 0.8072, 18.53),(9.871, 1.835, 22.39),(9.351, -1.718, 22.51),(9.717, -2.207, 21.66),(8.342, -8.633, 21.21),(11.54, -4.435, 18.7),(9.802, -5.103, 20.89),(11.62, -5.278, 19.98),(12.87, -11.91, 12.98),(12.35, -10.52, 15.83),(13.35, -8.064, 14.95),(14.1, -0.8582, 16.7),(13.11, -9.742, 16.72),(13.82, -5.06, 17.14),(15.52, -3.763, 10.48),(10.32, -0.006923, 20.53),(17.83, -10.69, 7.498),(13.16, 6.618, 15.16),(7.716, 12.49, 21.1),(14.39, 5.565, 12.03),(9.288, 8.426, 22.41),(0, 4.262, 28.62),(3.961, 3.545, 27.61),(7.09, -2.106, 25.09),(0, 17.84, 15.38),(6.297, 17.09, 15.38),(6.297, 18.12, 8.31),(6.297, 15.07, 19.12),(12.03, 13.36, 8.31),(11.64, 11.99, 14.62),(1.971, -2.435, 27.29),(1.137, 3.737, 28.51),(15.15, -4.372, 7.498),(-5.008, 9.476, 25.96),(-5.65, 12.75, 23.28),(0, 9.83, 27.23),(-6.297, 15.07, 19.12),(0, 16.06, 20.15),(-15.14, -3.7, 12.77),(-14.39, 5.565, 12.03),(-13.35, -8.064, 14.95),(-1.137, 3.737, 28.51),(-3.961, 3.545, 27.61),(-6.444, 2.872, 25.97),(-7.09, -2.106, 25.09),(-9.382, 1.978, 23.24),(-1.971, -2.435, 27.29),(-6.083, -2.338, 25.93),(-9.871, 1.835, 22.39),(-9.351, -1.718, 22.51),(-9.717, -2.207, 21.66),(-10.32, -0.006923, 20.53),(-12.3, 0.8072, 18.53),(-11.2, 8.465, 19.14),(-9.288, 8.426, 22.41),(-11.62, -5.278, 19.98),(-9.802, -5.103, 20.89),(-8.342, -8.633, 21.21),(-11.54, -4.435, 18.7),(-12.87, -11.91, 12.98),(-15.52, -3.763, 10.48),(-14.1, -0.8582, 16.7),(-13.82, -5.06, 17.14),(-10.26, -12.78, 18.76),(-13.11, -9.742, 16.72),(-12.35, -10.52, 15.83),(-17.83, -10.69, 7.498),(-16.68, -2.579, 7.954),(-12.03, 13.36, 8.31),(-13.16, 6.618, 15.16),(-11.64, 11.99, 14.62),(-7.716, 12.49, 21.1),(-6.297, 17.09, 15.38),(-6.297, 18.12, 8.31),(0, 18.87, 8.31),(-15.15, -4.372, 7.498)]

IndexedFaceSet463.coord = Coordinate465

Shape461.geometry = IndexedFaceSet463

Transform460.children.append(Shape461)

HAnimSegment459.children.append(Transform460)
Coordinate466 = x3d.Coordinate(USE="Occipital_scalp_COORD_JinBlink")

HAnimSegment459.coord = Coordinate466
HAnimDisplacer467 = x3d.HAnimDisplacer(DEF="Occipital_scalp_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer467.name = "occipital_scalp_morphinterpolator"
HAnimDisplacer467.coordIndex = [3,12,64,82,88,96]
HAnimDisplacer467.displacements = [(0, 0.84, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.16, 0),(0, 0.84, 0),(0, 0.15, 0)]

HAnimSegment459.displacers.append(HAnimDisplacer467)
HAnimDisplacer468 = x3d.HAnimDisplacer(DEF="Occipital_scalp_MorphInterpolator_JinChinRaiser")
HAnimDisplacer468.name = "occipital_scalp_morphinterpolator"
HAnimDisplacer468.coordIndex = [82,96,106]
HAnimDisplacer468.displacements = [(0, 0.7, 0.36),(0, 0.75, 0.3638),(0, 0.11, 0)]

HAnimSegment459.displacers.append(HAnimDisplacer468)
HAnimDisplacer469 = x3d.HAnimDisplacer(DEF="Occipital_scalp_MorphInterpolator_JinDimpler")
HAnimDisplacer469.name = "occipital_scalp_morphinterpolator"
HAnimDisplacer469.coordIndex = [27]
HAnimDisplacer469.displacements = [(-0.001, 0.39, 0)]

HAnimSegment459.displacers.append(HAnimDisplacer469)
HAnimDisplacer470 = x3d.HAnimDisplacer(DEF="Occipital_scalp_MorphInterpolator_JinJawDrop")
HAnimDisplacer470.name = "occipital_scalp_morphinterpolator"
HAnimDisplacer470.coordIndex = [106]
HAnimDisplacer470.displacements = [(0, -0.31, 0)]

HAnimSegment459.displacers.append(HAnimDisplacer470)

HAnimJoint89.children.append(HAnimSegment459)
HAnimSegment471 = x3d.HAnimSegment(DEF="hanim_Philtrum")
HAnimSegment471.name = "philtrum"
Transform472 = x3d.Transform(DEF="Philtrum_JinBlink")
Transform472.translation = [0,9.815,15]
Shape473 = x3d.Shape()
Appearance474 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape473.appearance = Appearance474
IndexedFaceSet475 = x3d.IndexedFaceSet(DEF="Philtrum-FACES_JinBlink")
IndexedFaceSet475.coordIndex = [0,5,1,-1,1,2,0,-1,4,3,1,-1,1,5,4,-1]
IndexedFaceSet475.creaseAngle = 3.14159
IndexedFaceSet475.solid = False
IndexedFaceSet475.texCoordIndex = [0,1,2,-1,2,3,0,-1,6,5,4,-1,4,7,6,-1]
TextureCoordinate476 = x3d.TextureCoordinate(DEF="Philtrum-TEXCOORD_JinBlink")
TextureCoordinate476.point = [(0.2511, 0.6816),(0.2441, 0.6816),(0.2441, 0.6653),(0.2548, 0.6653),(0.2441, 0.6653),(0.2548, 0.6653),(0.2511, 0.6816),(0.2441, 0.6816)]

IndexedFaceSet475.texCoord = TextureCoordinate476
Coordinate477 = x3d.Coordinate(DEF="Philtrum_COORD_JinBlink")
Coordinate477.point = [(0.3704, 0.4343, 0.1553),(0, -0.4343, -0.1589),(0.5699, -0.4343, -0.1589),(-0.5699, -0.4343, -0.1589),(-0.3704, 0.4343, 0.1553),(0, 0.4343, 0.1589)]

IndexedFaceSet475.coord = Coordinate477

Shape473.geometry = IndexedFaceSet475

Transform472.children.append(Shape473)

HAnimSegment471.children.append(Transform472)
Coordinate478 = x3d.Coordinate(USE="Philtrum_COORD_JinBlink")

HAnimSegment471.coord = Coordinate478
HAnimDisplacer479 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer479.name = "philtrum_morphinterpolator"
HAnimDisplacer479.coordIndex = [1,2,3]
HAnimDisplacer479.displacements = [(0, 0.4847, 0),(0, 0.4847, 0),(0, 0.4847, 0)]

HAnimSegment471.displacers.append(HAnimDisplacer479)
HAnimDisplacer480 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinChinRaiser")
HAnimDisplacer480.name = "philtrum_morphinterpolator"
HAnimDisplacer480.coordIndex = [1,2,3]
HAnimDisplacer480.displacements = [(0, 0.2286, 0),(0, 0.1405, 0),(0, 0.1405, 0)]

HAnimSegment471.displacers.append(HAnimDisplacer480)
HAnimDisplacer481 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinDimpler")
HAnimDisplacer481.name = "philtrum_morphinterpolator"
HAnimDisplacer481.coordIndex = [1,2,3]
HAnimDisplacer481.displacements = [(0, -0.0689, 0.0447),(0, -0.0689, 0.0447),(0, -0.0689, 0.0447)]

HAnimSegment471.displacers.append(HAnimDisplacer481)
HAnimDisplacer482 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer482.name = "philtrum_morphinterpolator"
HAnimDisplacer482.coordIndex = [1,2,3]
HAnimDisplacer482.displacements = [(0, -0.0514, -0.037),(0, -0.0514, -0.037),(0, -0.0514, -0.037)]

HAnimSegment471.displacers.append(HAnimDisplacer482)
HAnimDisplacer483 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipFunneler")
HAnimDisplacer483.name = "philtrum_morphinterpolator"
HAnimDisplacer483.coordIndex = [1,2,3]
HAnimDisplacer483.displacements = [(0, 0.1071, 0.5281),(-0.0737, 0.1634, 0.5281),(0.0737, 0.1634, 0.5281)]

HAnimSegment471.displacers.append(HAnimDisplacer483)
HAnimDisplacer484 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer484.name = "philtrum_morphinterpolator"
HAnimDisplacer484.coordIndex = [1,2,3]
HAnimDisplacer484.displacements = [(-0.0411, 0, 0.5662),(-0.0978, 0, 0.5662),(0.0156, 0, 0.5662)]

HAnimSegment471.displacers.append(HAnimDisplacer484)
HAnimDisplacer485 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipSuck")
HAnimDisplacer485.name = "philtrum_morphinterpolator"
HAnimDisplacer485.coordIndex = [1,2,3]
HAnimDisplacer485.displacements = [(0, -0.5204, -0.6548),(0, -0.5204, -0.6548),(0, -0.5204, -0.6548)]

HAnimSegment471.displacers.append(HAnimDisplacer485)
HAnimDisplacer486 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipTightener")
HAnimDisplacer486.name = "philtrum_morphinterpolator"
HAnimDisplacer486.coordIndex = [1,2,3]
HAnimDisplacer486.displacements = [(0, -0.0383, 0.2409),(-0.0415, -0.0383, 0.2409),(0.0415, -0.0383, 0.2409)]

HAnimSegment471.displacers.append(HAnimDisplacer486)
HAnimDisplacer487 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinMouthStretch")
HAnimDisplacer487.name = "philtrum_morphinterpolator"
HAnimDisplacer487.coordIndex = [1,2,3]
HAnimDisplacer487.displacements = [(0, 0.2684, 0),(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment471.displacers.append(HAnimDisplacer487)
HAnimDisplacer488 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer488.name = "philtrum_morphinterpolator"
HAnimDisplacer488.coordIndex = [1,2,3]
HAnimDisplacer488.displacements = [(0, 0.5016, 0),(0, 0.5016, 0),(0, 0.5016, 0)]

HAnimSegment471.displacers.append(HAnimDisplacer488)

HAnimJoint89.children.append(HAnimSegment471)
HAnimSegment489 = x3d.HAnimSegment(DEF="hanim_Right_bulbar_conjunctiva")
HAnimSegment489.name = "right_bulbar_conjunctiva"
Transform490 = x3d.Transform(DEF="Right_bulbar_conjunctiva_JinBlink")
Transform490.translation = [-5.794,17.61,11.15]
Shape491 = x3d.Shape()
Appearance492 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape491.appearance = Appearance492
IndexedFaceSet493 = x3d.IndexedFaceSet(DEF="Right_bulbar_conjunctiva-FACES_JinBlink")
IndexedFaceSet493.coordIndex = [6,3,1,-1,1,7,6,-1,0,2,26,-1,26,10,0,-1,10,8,0,-1,11,23,5,-1,7,24,12,-1,8,2,0,-1,8,23,2,-1,4,14,19,-1,19,9,4,-1,3,13,14,-1,14,4,3,-1,11,21,22,-1,22,12,25,-1,11,22,25,-1,5,15,21,-1,21,11,5,-1,6,16,13,-1,13,3,6,-1,12,22,17,-1,17,7,12,-1,8,18,15,-1,15,5,8,-1,7,17,16,-1,16,6,7,-1,10,26,19,-1,19,20,10,-1,10,20,18,-1,18,8,10,-1,23,8,5,-1,24,7,1,-1,24,25,12,-1,19,26,9,-1,26,2,9,-1]
IndexedFaceSet493.creaseAngle = 3.14159
IndexedFaceSet493.solid = False
IndexedFaceSet493.texCoordIndex = [7,27,0,-1,0,8,7,-1,2,1,29,-1,29,11,2,-1,11,9,2,-1,12,25,5,-1,8,26,13,-1,9,1,2,-1,9,25,1,-1,4,15,14,-1,14,10,4,-1,3,16,15,-1,15,4,3,-1,12,18,17,-1,17,13,28,-1,12,17,28,-1,5,19,18,-1,18,12,5,-1,6,20,16,-1,16,3,6,-1,13,17,21,-1,21,8,13,-1,9,22,19,-1,19,5,9,-1,8,21,23,-1,23,7,8,-1,11,29,14,-1,14,24,11,-1,11,24,22,-1,22,9,11,-1,25,9,5,-1,26,8,0,-1,26,28,13,-1,14,29,10,-1,29,1,10,-1]
TextureCoordinate494 = x3d.TextureCoordinate(DEF="Right_bulbar_conjunctiva-TEXCOORD_JinBlink")
TextureCoordinate494.point = [(0.328, 0.824),(0.3871, 0.8321),(0.4052, 0.8221),(0.3258, 0.833),(0.3487, 0.8409),(0.3916, 0.7984),(0.2983, 0.8142),(0.2981, 0.8094),(0.309, 0.8013),(0.4011, 0.8053),(0.385, 0.8438),(0.4198, 0.8261),(0.3777, 0.7936),(0.3315, 0.7948),(0.3885, 0.8436),(0.3487, 0.8409),(0.3206, 0.8292),(0.3315, 0.7948),(0.372, 0.7925),(0.3869, 0.7967),(0.2983, 0.8142),(0.309, 0.8013),(0.3966, 0.8018),(0.2981, 0.8094),(0.4198, 0.8261),(0.3889, 0.8064),(0.3322, 0.8026),(0.3307, 0.8316),(0.3442, 0.7934),(0.3915, 0.8393)]

IndexedFaceSet493.texCoord = TextureCoordinate494
Coordinate495 = x3d.Coordinate(DEF="Right_bulbar_conjunctiva_COORD_JinBlink")
Coordinate495.point = [(-2.76, 0.0973, -0.8547),(1.347, 0.2034, 2.463),(-1.784, 0.6812, 0.4382),(1.252, 0.6995, 2.521),(0.2686, 1.16, 2.287),(-2.036, -1.163, -0.4716),(2.858, -0.5459, 2.699),(2.35, -1.007, 2.159),(-2.632, -0.8129, -0.7113),(-1.577, 1.203, 0.9703),(-3.566, 0.2646, -1.27),(-1.305, -1.43, 0.2687),(1.132, -1.383, 1.574),(2.475, 0.7643, 1.73),(0.4787, 1.699, 1.381),(-1.844, -1.377, -0.8846),(4.008, -0.6268, 1.793),(3.316, -1.256, 1.253),(-2.512, -0.9908, -1.342),(-2.026, 1.768, -0.3396),(-4.008, 0.4783, -2.699),(-1.039, -1.688, -0.4347),(1.656, -1.768, 0.6681),(-1.878, -0.7347, -0.1728),(1.108, -0.9679, 1.714),(0.4715, -1.396, 1.218),(-1.925, 1.039, 0.5784)]

IndexedFaceSet493.coord = Coordinate495

Shape491.geometry = IndexedFaceSet493

Transform490.children.append(Shape491)

HAnimSegment489.children.append(Transform490)
Coordinate496 = x3d.Coordinate(USE="Right_bulbar_conjunctiva_COORD_JinBlink")

HAnimSegment489.coord = Coordinate496
HAnimDisplacer497 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer497.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer497.coordIndex = [3,4,14]
HAnimDisplacer497.displacements = [(0, -0.0591, 0),(0, -0.059, 0),(0.5563, -0.507, 0)]

HAnimSegment489.displacers.append(HAnimDisplacer497)
HAnimDisplacer498 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer498.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer498.coordIndex = [14]
HAnimDisplacer498.displacements = [(0, 0.384, 0)]

HAnimSegment489.displacers.append(HAnimDisplacer498)
HAnimDisplacer499 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinLidTightener")
HAnimDisplacer499.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer499.coordIndex = [3,4,5,7,8,9,11,12,15,21,25,26]
HAnimDisplacer499.displacements = [(0, -0.3349, 0),(0, -0.3349, 0),(0, 0.3017, 0),(0, 0.1097, 0),(0.123, 0.2263, 0),(0, -0.3349, 0),(0, 0.302, 0),(0, 0.151, 0),(0, 0.151, 0),(0, 0.151, 0),(0, 0.151, 0),(0, -0.335, 0)]

HAnimSegment489.displacers.append(HAnimDisplacer499)
HAnimDisplacer500 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer500.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer500.coordIndex = [19]
HAnimDisplacer500.displacements = [(0, 0.135, 0)]

HAnimSegment489.displacers.append(HAnimDisplacer500)
HAnimDisplacer501 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer501.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer501.coordIndex = [3,4,6,9,26]
HAnimDisplacer501.displacements = [(0, 0.4975, 0),(0, 0.498, 0),(0, 0.4976, 0),(0, 0.498, 0),(0, 0.497, 0)]

HAnimSegment489.displacers.append(HAnimDisplacer501)

HAnimJoint89.children.append(HAnimSegment489)
HAnimSegment502 = x3d.HAnimSegment(DEF="hanim_Right_cheek")
HAnimSegment502.name = "right_cheek"
Transform503 = x3d.Transform(DEF="Right_cheek_JinBlink")
Transform503.translation = [-6.927,11.97,7.646]
Shape504 = x3d.Shape()
Appearance505 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape504.appearance = Appearance505
IndexedFaceSet506 = x3d.IndexedFaceSet(DEF="Right_cheek-FACES_JinBlink")
IndexedFaceSet506.coordIndex = [1,19,17,-1,20,19,1,-1,14,13,19,-1,19,13,17,-1,13,14,2,-1,3,2,14,-1,34,32,4,-1,4,18,34,-1,31,10,4,-1,4,32,31,-1,15,3,14,-1,17,13,12,-1,12,13,4,-1,4,10,12,-1,2,3,5,-1,13,2,4,-1,24,11,25,-1,25,26,24,-1,24,29,7,-1,7,11,24,-1,6,17,12,-1,12,8,6,-1,10,31,30,-1,30,9,10,-1,12,10,9,-1,9,8,12,-1,18,5,34,-1,2,5,18,-1,4,2,18,-1,19,21,14,-1,14,21,16,-1,16,22,14,-1,0,21,19,-1,14,22,15,-1,6,27,28,-1,28,17,6,-1,28,1,17,-1,29,24,23,-1,7,30,31,-1,31,11,7,-1,33,25,11,-1,32,33,11,-1,31,32,11,-1,32,34,33,-1]
IndexedFaceSet506.creaseAngle = 3.14159
IndexedFaceSet506.solid = False
IndexedFaceSet506.texCoordIndex = [0,1,2,-1,3,1,0,-1,4,5,1,-1,1,5,2,-1,5,4,6,-1,7,6,4,-1,39,37,13,-1,13,24,39,-1,36,15,13,-1,13,37,36,-1,8,7,4,-1,18,16,17,-1,17,16,13,-1,13,15,17,-1,19,12,11,-1,16,19,13,-1,28,14,29,-1,29,30,28,-1,28,34,20,-1,20,14,28,-1,21,18,17,-1,17,22,21,-1,15,36,35,-1,35,23,15,-1,17,15,23,-1,23,22,17,-1,24,11,39,-1,19,11,24,-1,13,19,24,-1,1,9,4,-1,4,9,10,-1,10,25,4,-1,26,9,1,-1,4,25,8,-1,21,31,33,-1,33,18,21,-1,32,0,2,-1,34,28,27,-1,20,35,36,-1,36,14,20,-1,38,29,14,-1,37,38,14,-1,36,37,14,-1,37,39,38,-1]
TextureCoordinate507 = x3d.TextureCoordinate(DEF="Right_cheek-TEXCOORD_JinBlink")
TextureCoordinate507.point = [(0.44, 0.6625),(0.4392, 0.6356),(0.4517, 0.649),(0.4352, 0.6651),(0.4454, 0.6184),(0.4606, 0.6289),(0.464, 0.6174),(0.467, 0.6086),(0.4571, 0.6062),(0.4273, 0.6228),(0.4255, 0.614),(0.3041, 0.631),(0.3118, 0.6205),(0.3484, 0.6888),(0.2881, 0.7397),(0.3623, 0.7239),(0.4088, 0.6855),(0.4123, 0.7323),(0.4518, 0.7703),(0.364, 0.6372),(0.301, 0.7815),(0.4279, 0.7939),(0.3993, 0.7753),(0.3692, 0.7714),(0.3226, 0.6487),(0.4413, 0.6101),(0.4239, 0.6387),(0.2671, 0.7978),(0.268, 0.7555),(0.2727, 0.7092),(0.2641, 0.7133),(0.4335, 0.819),(0.4547, 0.661),(0.4572, 0.8171),(0.2845, 0.7889),(0.3287, 0.7742),(0.3232, 0.7322),(0.3144, 0.6917),(0.2788, 0.6949),(0.3007, 0.651)]

IndexedFaceSet506.texCoord = TextureCoordinate507
Coordinate508 = x3d.Coordinate(DEF="Right_cheek_COORD_JinBlink")
Coordinate508.point = [(-5.868, 0.6861, -6.977),(-5.046, 6.009, -3.719),(0.5602, -4.076, 1.16),(3.27, -6.054, 1.778),(1.388, -1.337, 4.299),(3.582, -4.636, 3.814),(-2.834, 4.241, 1.178),(3.857, 3.618, 5.665),(-1.296, 3.319, 2.709),(0.2365, 3.054, 3.875),(0.6487, 0.5238, 4.348),(4.592, 1.365, 6.024),(-2.001, 0.9701, 1.578),(-1.819, -1.515, 0.4861),(-0.1831, -3.863, -2.615),(3.274, -6.596, -0.2282),(1.597, -4.834, -6.657),(-4.101, 2.99, -1.336),(2.758, -3.467, 4.304),(-3.42, -0.01058, -3.863),(-5.261, 6.596, -4.686),(-1.153, -2.865, -6.293),(2.435, -5.715, -3.442),(5.749, 4.473, 6.621),(5.809, 2.217, 6.673),(5.409, -0.2562, 6.321),(5.868, -0.0462, 6.977),(-3.128, 5.574, 1.136),(-4.273, 5.681, -0.7129),(4.763, 4.022, 6.147),(2.394, 3.215, 4.911),(2.727, 0.9674, 5.231),(3.19, -1.179, 5.185),(5.082, -1.013, 6.115),(3.921, -3.342, 4.788)]

IndexedFaceSet506.coord = Coordinate508

Shape504.geometry = IndexedFaceSet506

Transform503.children.append(Shape504)

HAnimSegment502.children.append(Transform503)
Coordinate509 = x3d.Coordinate(USE="Right_cheek_COORD_JinBlink")

HAnimSegment502.coord = Coordinate509
HAnimDisplacer510 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer510.name = "right_cheek_morphinterpolator"
HAnimDisplacer510.coordIndex = [4,10,11,25,26,31,32,33,34]
HAnimDisplacer510.displacements = [(0, 0.8378, 0),(0, 0.8382, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.8376, 0),(0, 0.8381, 0),(0, 0.8383, 0),(-0.591, 1.322, 0.107)]

HAnimSegment502.displacers.append(HAnimDisplacer510)
HAnimDisplacer511 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer511.name = "right_cheek_morphinterpolator"
HAnimDisplacer511.coordIndex = [4,6,7,8,9,10,11,12,13,17,19,24,29,30,31,32]
HAnimDisplacer511.displacements = [(-0.6734, 0.6214, 0.174),(0, 0.1, 0.079),(0, 0.134, -0.107),(-0.299, 0.38, -0.184),(0, 0.268, 0.099),(0.0317, 1.7512, 0.87),(-0.255, 1.233, 0.181),(-0.029, 1.5769, 1.5),(-0.588, 1.4349, 0.0324),(0, 0.462, 0.3972),(0, 0.6417, 0),(0, 0.754, 0),(0, 0.067, -0.082),(0, 0.268, 0),(-0.001, 1.3996, 0.448),(0, 0.2915, 0.183)]

HAnimSegment502.displacers.append(HAnimDisplacer511)
HAnimDisplacer512 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinChinRaiser")
HAnimDisplacer512.name = "right_cheek_morphinterpolator"
HAnimDisplacer512.coordIndex = [34]
HAnimDisplacer512.displacements = [(0, -0.137, 0)]

HAnimSegment502.displacers.append(HAnimDisplacer512)
HAnimDisplacer513 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinDimpler")
HAnimDisplacer513.name = "right_cheek_morphinterpolator"
HAnimDisplacer513.coordIndex = [18,34]
HAnimDisplacer513.displacements = [(0.407, 0.417, 0.179),(-0.379, 0.396, 0.153)]

HAnimSegment502.displacers.append(HAnimDisplacer513)
HAnimDisplacer514 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinJawDrop")
HAnimDisplacer514.name = "right_cheek_morphinterpolator"
HAnimDisplacer514.coordIndex = [3,5,15]
HAnimDisplacer514.displacements = [(0, -0.616, 0),(0, -0.616, 0),(0, -0.616, 0)]

HAnimSegment502.displacers.append(HAnimDisplacer514)
HAnimDisplacer515 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer515.name = "right_cheek_morphinterpolator"
HAnimDisplacer515.coordIndex = [34]
HAnimDisplacer515.displacements = [(-0.197, -0.702, 0.078)]

HAnimSegment502.displacers.append(HAnimDisplacer515)
HAnimDisplacer516 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer516.name = "right_cheek_morphinterpolator"
HAnimDisplacer516.coordIndex = [1,8,12,34]
HAnimDisplacer516.displacements = [(-0.473, -0.03, -0.642),(-1.14, 0, -1.022),(-0.583, -0.05, -0.383),(-1.176, 0.13, -0.375)]

HAnimSegment502.displacers.append(HAnimDisplacer516)
HAnimDisplacer517 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipFunneler")
HAnimDisplacer517.name = "right_cheek_morphinterpolator"
HAnimDisplacer517.coordIndex = [5,16,18,32,33,34]
HAnimDisplacer517.displacements = [(0, 0, 0.234),(0, 0, 0.152),(0, 0, 0.084),(0, 0, 0.414),(0, 0, 0.109),(0.835, 0, 1.064)]

HAnimSegment502.displacers.append(HAnimDisplacer517)
HAnimDisplacer518 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer518.name = "right_cheek_morphinterpolator"
HAnimDisplacer518.coordIndex = [5,34]
HAnimDisplacer518.displacements = [(0, 0, 0.163),(0.909, 0, 0.46)]

HAnimSegment502.displacers.append(HAnimDisplacer518)
HAnimDisplacer519 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipsPart")
HAnimDisplacer519.name = "right_cheek_morphinterpolator"
HAnimDisplacer519.coordIndex = [5]
HAnimDisplacer519.displacements = [(0, -0.083, -0.001)]

HAnimSegment502.displacers.append(HAnimDisplacer519)
HAnimDisplacer520 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipStretcher")
HAnimDisplacer520.name = "right_cheek_morphinterpolator"
HAnimDisplacer520.coordIndex = [18,34]
HAnimDisplacer520.displacements = [(-1.335, -0.029, -0.124),(-0.974, 0.009, 0.026)]

HAnimSegment502.displacers.append(HAnimDisplacer520)
HAnimDisplacer521 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipSuck")
HAnimDisplacer521.name = "right_cheek_morphinterpolator"
HAnimDisplacer521.coordIndex = [34]
HAnimDisplacer521.displacements = [(-0.125, 0, 0)]

HAnimSegment502.displacers.append(HAnimDisplacer521)
HAnimDisplacer522 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipTightener")
HAnimDisplacer522.name = "right_cheek_morphinterpolator"
HAnimDisplacer522.coordIndex = [34]
HAnimDisplacer522.displacements = [(0.521, 0.17, 1.038)]

HAnimSegment502.displacers.append(HAnimDisplacer522)
HAnimDisplacer523 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinMouthStretch")
HAnimDisplacer523.name = "right_cheek_morphinterpolator"
HAnimDisplacer523.coordIndex = [2,3,5,14,15,18,22,34]
HAnimDisplacer523.displacements = [(0, -0.909, 0.074),(0, -2.034, -0.089),(0, -2.011, -0.01),(0, -0.688, 0),(0, -1.574, -0.1141),(0, -1.34, 0.088),(0, -0.817, 0),(0, -0.736, 0)]

HAnimSegment502.displacers.append(HAnimDisplacer523)
HAnimDisplacer524 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer524.name = "right_cheek_morphinterpolator"
HAnimDisplacer524.coordIndex = [25,26,32,33]
HAnimDisplacer524.displacements = [(0.078, 0.5523, 0),(0, 0.376, 0),(0.146, 0.2645, 0),(0, 0.4707, 0)]

HAnimSegment502.displacers.append(HAnimDisplacer524)
HAnimDisplacer525 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer525.name = "right_cheek_morphinterpolator"
HAnimDisplacer525.coordIndex = [25,26,33]
HAnimDisplacer525.displacements = [(0, 0.2937, 0),(0, 0.2937, 0),(0, 0.5019, 0)]

HAnimSegment502.displacers.append(HAnimDisplacer525)

HAnimJoint89.children.append(HAnimSegment502)
HAnimSegment526 = x3d.HAnimSegment(DEF="hanim_Right_dorsum")
HAnimSegment526.name = "right_dorsum"
Transform527 = x3d.Transform(DEF="Right_dorsum_JinBlink")
Transform527.translation = [-0.7065,14.64,14.87]
Shape528 = x3d.Shape()
Appearance529 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape528.appearance = Appearance529
IndexedFaceSet530 = x3d.IndexedFaceSet(DEF="Right_dorsum-FACES_JinBlink")
IndexedFaceSet530.coordIndex = [3,4,1,-1,1,0,3,-1,5,2,1,-1,1,4,5,-1]
IndexedFaceSet530.creaseAngle = 3.14159
IndexedFaceSet530.solid = False
IndexedFaceSet530.texCoordIndex = [3,4,1,-1,1,0,3,-1,5,2,1,-1,1,4,5,-1]
TextureCoordinate531 = x3d.TextureCoordinate(DEF="Right_dorsum-TEXCOORD_JinBlink")
TextureCoordinate531.point = [(0.2534, 0.8152),(0.2534, 0.767),(0.2528, 0.7186),(0.2671, 0.7978),(0.268, 0.7555),(0.2641, 0.7133)]

IndexedFaceSet530.texCoord = TextureCoordinate531
Coordinate532 = x3d.Coordinate(DEF="Right_dorsum_COORD_JinBlink")
Coordinate532.point = [(0.2793, 2.722, -0.1346),(0.471, 0.1584, -0.08532),(0.25, -2.447, 0.6076),(-0.471, 1.797, -0.6076),(-0.4116, -0.459, -0.556),(-0.352, -2.722, -0.252)]

IndexedFaceSet530.coord = Coordinate532

Shape528.geometry = IndexedFaceSet530

Transform527.children.append(Shape528)

HAnimSegment526.children.append(Transform527)
Coordinate533 = x3d.Coordinate(USE="Right_dorsum_COORD_JinBlink")

HAnimSegment526.coord = Coordinate533
HAnimDisplacer534 = x3d.HAnimDisplacer(DEF="Right_dorsum_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer534.name = "right_dorsum_morphinterpolator"
HAnimDisplacer534.coordIndex = [5]
HAnimDisplacer534.displacements = [(0, 0.838, 0)]

HAnimSegment526.displacers.append(HAnimDisplacer534)
HAnimDisplacer535 = x3d.HAnimDisplacer(DEF="Right_dorsum_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer535.name = "right_dorsum_morphinterpolator"
HAnimDisplacer535.coordIndex = [4]
HAnimDisplacer535.displacements = [(0, 0.7543, 0)]

HAnimSegment526.displacers.append(HAnimDisplacer535)
HAnimDisplacer536 = x3d.HAnimDisplacer(DEF="Right_dorsum_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer536.name = "right_dorsum_morphinterpolator"
HAnimDisplacer536.coordIndex = [5]
HAnimDisplacer536.displacements = [(0, 0.376, 0)]

HAnimSegment526.displacers.append(HAnimDisplacer536)
HAnimDisplacer537 = x3d.HAnimDisplacer(DEF="Right_dorsum_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer537.name = "right_dorsum_morphinterpolator"
HAnimDisplacer537.coordIndex = [5]
HAnimDisplacer537.displacements = [(0, 0.293, 0)]

HAnimSegment526.displacers.append(HAnimDisplacer537)

HAnimJoint89.children.append(HAnimSegment526)
HAnimSegment538 = x3d.HAnimSegment(DEF="hanim_Right_ear")
HAnimSegment538.name = "right_ear"
Transform539 = x3d.Transform(DEF="Right_ear_JinBlink")
Transform539.translation = [-12.49,15.99,1.017]
Shape540 = x3d.Shape()
Appearance541 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape540.appearance = Appearance541
IndexedFaceSet542 = x3d.IndexedFaceSet(DEF="Right_ear-FACES_JinBlink")
IndexedFaceSet542.coordIndex = [6,0,2,-1,5,2,1,-1,1,4,5,-1,2,0,1,-1,0,6,7,-1,7,3,0,-1,4,1,0,-1,0,3,4,-1]
IndexedFaceSet542.creaseAngle = 3.14159
IndexedFaceSet542.solid = False
IndexedFaceSet542.texCoordIndex = [0,1,2,-1,5,2,3,-1,3,4,5,-1,2,1,3,-1,1,0,6,-1,6,7,1,-1,4,3,1,-1,1,7,4,-1]
TextureCoordinate543 = x3d.TextureCoordinate(DEF="Right_ear-TEXCOORD_JinBlink")
TextureCoordinate543.point = [(0.4392, 0.6356),(0.4239, 0.6408),(0.4239, 0.6387),(0.412, 0.6504),(0.4123, 0.664),(0.4239, 0.6648),(0.4352, 0.6651),(0.4267, 0.6717)]

IndexedFaceSet542.texCoord = TextureCoordinate543
Coordinate544 = x3d.Coordinate(DEF="Right_ear_COORD_JinBlink")
Coordinate544.point = [(-1.104, -2.879, -0.3646),(-1.92, -0.7197, -2.765),(-0.3083, -3.342, -0.3477),(-1.674, 4.039, 0.222),(-2.14, 2.313, -2.716),(-0.349, 2.504, -0.3477),(2.14, -4.039, 2.765),(0.2989, 2.568, 1.943)]

IndexedFaceSet542.coord = Coordinate544

Shape540.geometry = IndexedFaceSet542

Transform539.children.append(Shape540)

HAnimSegment538.children.append(Transform539)
Coordinate545 = x3d.Coordinate(USE="Right_ear_COORD_JinBlink")

HAnimSegment538.coord = Coordinate545

HAnimJoint89.children.append(HAnimSegment538)
HAnimSegment546 = x3d.HAnimSegment(DEF="hanim_Right_eyebrow")
HAnimSegment546.name = "right_eyebrow"
Transform547 = x3d.Transform(DEF="Right_eyebrow_JinBlink")
Transform547.translation = [-5.691,19.58,13.13]
Shape548 = x3d.Shape()
Appearance549 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape548.appearance = Appearance549
IndexedFaceSet550 = x3d.IndexedFaceSet(DEF="Right_eyebrow-FACES_JinBlink")
IndexedFaceSet550.coordIndex = [5,8,7,-1,7,1,5,-1,6,4,0,-1,7,6,0,-1,0,1,7,-1,2,3,0,-1,0,4,2,-1,3,1,0,-1]
IndexedFaceSet550.creaseAngle = 3.14159
IndexedFaceSet550.solid = False
IndexedFaceSet550.texCoordIndex = [5,8,7,-1,7,1,5,-1,6,4,0,-1,7,6,0,-1,0,1,7,-1,2,3,0,-1,0,4,2,-1,3,1,0,-1]
TextureCoordinate551 = x3d.TextureCoordinate(DEF="Right_eyebrow-TEXCOORD_JinBlink")
TextureCoordinate551.point = [(0.3395, 0.8606),(0.3992, 0.8783),(0.2728, 0.8741),(0.3391, 0.876),(0.274, 0.8322),(0.4299, 0.8825),(0.3402, 0.8534),(0.3979, 0.8641),(0.4266, 0.8643)]

IndexedFaceSet550.texCoord = TextureCoordinate551
Coordinate552 = x3d.Coordinate(DEF="Right_eyebrow_COORD_JinBlink")
Coordinate552.point = [(0.6206, 0.2925, 1.523),(-2.547, 1.129, -0.8682),(4.175, 0.9255, 2.806),(0.6464, 1.103, 1.5),(4.104, -1.337, 2.665),(-4.175, 1.337, -2.599),(0.6118, -0.2218, 1.466),(-2.366, 0.3082, -0.9723),(-4.011, 0.3542, -2.806)]

IndexedFaceSet550.coord = Coordinate552

Shape548.geometry = IndexedFaceSet550

Transform547.children.append(Shape548)

HAnimSegment546.children.append(Transform547)
Coordinate553 = x3d.Coordinate(USE="Right_eyebrow_COORD_JinBlink")

HAnimSegment546.coord = Coordinate553
HAnimDisplacer554 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer554.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer554.coordIndex = [0,1,3,4,5,6,7,8]
HAnimDisplacer554.displacements = [(0.5564, -0.5065, 0),(0, -0.094, 0),(0.5566, -0.5069, 0),(0.303, -0.395, 0),(0, -0.094, 0),(0.5562, -0.5066, 0),(0, -0.0941, 0),(0, -0.0942, 0)]

HAnimSegment546.displacers.append(HAnimDisplacer554)
HAnimDisplacer555 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer555.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer555.coordIndex = [0,1,3,4,6,7]
HAnimDisplacer555.displacements = [(0, 0.3842, 0),(0, 0.136, 0),(0, 0.384, 0),(0, 0.3843, 0),(0, 0.3842, 0),(0, 0.1354, 0)]

HAnimSegment546.displacers.append(HAnimDisplacer555)
HAnimDisplacer556 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer556.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer556.coordIndex = [1,5,7,8]
HAnimDisplacer556.displacements = [(0, 0.655, 0),(0, 0.268, 0),(0, 0.6547, 0),(0, 0.2686, 0)]

HAnimSegment546.displacers.append(HAnimDisplacer556)
HAnimDisplacer557 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinSquint")
HAnimDisplacer557.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer557.coordIndex = [7,8]
HAnimDisplacer557.displacements = [(0, -0.4631, 0),(0, -0.4632, 0)]

HAnimSegment546.displacers.append(HAnimDisplacer557)
HAnimDisplacer558 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer558.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer558.coordIndex = [6]
HAnimDisplacer558.displacements = [(0, 0.4975, 0)]

HAnimSegment546.displacers.append(HAnimDisplacer558)

HAnimJoint89.children.append(HAnimSegment546)
HAnimSegment559 = x3d.HAnimSegment(DEF="hanim_Right_forehead")
HAnimSegment559.name = "right_forehead"
Transform560 = x3d.Transform(DEF="Right_forehead_JinBlink")
Transform560.translation = [-6.652,27.61,9.229]
Shape561 = x3d.Shape()
Appearance562 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape561.appearance = Appearance562
IndexedFaceSet563 = x3d.IndexedFaceSet(DEF="Right_forehead-FACES_JinBlink")
IndexedFaceSet563.coordIndex = [1,4,13,-1,13,9,1,-1,3,9,2,-1,3,15,0,-1,15,14,0,-1,0,14,16,-1,1,0,16,-1,16,20,1,-1,3,6,17,-1,17,15,3,-1,2,5,6,-1,6,3,2,-1,6,8,18,-1,18,17,6,-1,5,7,8,-1,8,6,5,-1,9,13,10,-1,10,2,9,-1,1,9,3,-1,3,0,1,-1,1,20,19,-1,19,4,1,-1,2,10,11,-1,11,5,2,-1,5,11,12,-1,12,7,5,-1]
IndexedFaceSet563.creaseAngle = 3.14159
IndexedFaceSet563.solid = False
IndexedFaceSet563.texCoordIndex = [1,4,13,-1,13,9,1,-1,3,9,0,-1,3,15,2,-1,15,14,2,-1,2,14,16,-1,1,2,16,-1,16,20,1,-1,3,6,17,-1,17,15,3,-1,0,5,6,-1,6,3,0,-1,6,8,18,-1,18,17,6,-1,5,7,8,-1,8,6,5,-1,9,13,10,-1,10,0,9,-1,1,9,3,-1,3,2,1,-1,1,20,19,-1,19,4,1,-1,0,10,11,-1,11,5,0,-1,5,11,12,-1,12,7,5,-1]
TextureCoordinate564 = x3d.TextureCoordinate(DEF="Right_forehead-TEXCOORD_JinBlink")
TextureCoordinate564.point = [(0.3563, 0.9819),(0.3371, 0.9436),(0.414, 0.9365),(0.428, 0.9618),(0.2706, 0.9459),(0.3807, 0.9869),(0.434, 0.9653),(0.3786, 0.9951),(0.4425, 0.9551),(0.3372, 0.9707),(0.3002, 0.9788),(0.3015, 0.9807),(0.3016, 0.9833),(0.2804, 0.9652),(0.4299, 0.8825),(0.4655, 0.9081),(0.3992, 0.8783),(0.4676, 0.8967),(0.465, 0.9097),(0.2728, 0.8741),(0.3391, 0.876)]

IndexedFaceSet563.texCoord = TextureCoordinate564
Coordinate565 = x3d.Coordinate(DEF="Right_forehead_COORD_JinBlink")
Coordinate565.point = [(-2.366, -3.832, 2.607),(1.721, -3.37, 5.298),(0.9278, 3.698, 2.337),(-2.798, 0.5048, 1.078),(5.256, -3.235, 6.945),(-0.1169, 5.415, -1.676),(-3.513, 2.123, -2.845),(-0.04584, 5.238, -6.945),(-3.382, 0.4603, -6.945),(1.306, 1.607, 4.614),(4.278, 5.326, 2.844),(4.148, 6.951, -0.7431),(4.148, 7.108, -6.945),(4.686, 2.054, 6.111),(-3.214, -6.697, 1.298),(-4.876, -4.833, -1.108),(-1.586, -6.904, 3.028),(-5.256, -4.053, -3.68),(-4.869, -4.024, -6.945),(5.136, -7.108, 6.703),(1.607, -6.931, 5.397)]

IndexedFaceSet563.coord = Coordinate565

Shape561.geometry = IndexedFaceSet563

Transform560.children.append(Shape561)

HAnimSegment559.children.append(Transform560)
Coordinate566 = x3d.Coordinate(USE="Right_forehead_COORD_JinBlink")

HAnimSegment559.coord = Coordinate566
HAnimDisplacer567 = x3d.HAnimDisplacer(DEF="Right_forehead_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer567.name = "right_forehead_morphinterpolator"
HAnimDisplacer567.coordIndex = [14,16,20]
HAnimDisplacer567.displacements = [(0, -0.094, 0),(0, -0.094, 0),(0.557, -0.506, 0)]

HAnimSegment559.displacers.append(HAnimDisplacer567)
HAnimDisplacer568 = x3d.HAnimDisplacer(DEF="Right_forehead_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer568.name = "right_forehead_morphinterpolator"
HAnimDisplacer568.coordIndex = [16,20]
HAnimDisplacer568.displacements = [(0, 0.135, 0),(0, 0.384, 0)]

HAnimSegment559.displacers.append(HAnimDisplacer568)
HAnimDisplacer569 = x3d.HAnimDisplacer(DEF="Right_forehead_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer569.name = "right_forehead_morphinterpolator"
HAnimDisplacer569.coordIndex = [14,16]
HAnimDisplacer569.displacements = [(0, 0.269, 0),(0, 0.654, 0)]

HAnimSegment559.displacers.append(HAnimDisplacer569)

HAnimJoint89.children.append(HAnimSegment559)
HAnimSegment570 = x3d.HAnimSegment(DEF="hanim_Right_lower_eyelid")
HAnimSegment570.name = "right_lower_eyelid"
Transform571 = x3d.Transform(DEF="Right_lower_eyelid_JinBlink")
Transform571.translation = [-6.11,16.45,11.32]
Shape572 = x3d.Shape()
Appearance573 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape572.appearance = Appearance573
IndexedFaceSet574 = x3d.IndexedFaceSet(DEF="Right_lower_eyelid-FACES_JinBlink")
IndexedFaceSet574.coordIndex = [8,9,10,-1,10,3,8,-1,3,0,7,-1,7,8,3,-1,13,1,6,-1,6,14,13,-1,0,2,5,-1,5,7,0,-1,11,12,5,-1,5,2,11,-1,4,9,6,-1,6,1,4,-1,10,9,4,-1]
IndexedFaceSet574.creaseAngle = 3.14159
IndexedFaceSet574.solid = False
IndexedFaceSet574.texCoordIndex = [8,9,10,-1,10,0,8,-1,0,2,7,-1,7,8,0,-1,13,3,6,-1,6,14,13,-1,2,4,5,-1,5,7,2,-1,11,12,5,-1,5,4,11,-1,1,9,6,-1,6,3,1,-1,10,9,1,-1]
TextureCoordinate575 = x3d.TextureCoordinate(DEF="Right_lower_eyelid-TEXCOORD_JinBlink")
TextureCoordinate575.point = [(0.3777, 0.7936),(0.3315, 0.7948),(0.3916, 0.7984),(0.309, 0.8013),(0.4011, 0.8053),(0.4279, 0.7939),(0.301, 0.7815),(0.3993, 0.7753),(0.3692, 0.7714),(0.3287, 0.7742),(0.344, 0.7945),(0.4198, 0.8261),(0.4335, 0.819),(0.2981, 0.8094),(0.2845, 0.7889)]

IndexedFaceSet574.texCoord = TextureCoordinate575
Coordinate576 = x3d.Coordinate(DEF="Right_lower_eyelid_COORD_JinBlink")
Coordinate576.point = [(-1.719, -0.0007954, -0.6346),(2.666, 0.1549, 1.996),(-2.315, 0.3494, -0.8744),(-0.989, -0.2676, 0.1056),(1.449, -0.2205, 1.411),(-3.651, -0.24, -2.494),(3.04, -0.8628, 1.994),(-2.113, -1.162, -0.9625),(-0.5806, -1.427, 0.2034),(1.577, -1.266, 1.24),(0.7878, -0.2335, 1.055),(-3.25, 1.427, -1.433),(-3.946, 1.094, -2.536),(3.174, 0.6164, 2.536),(3.946, -0.4586, 2.476)]

IndexedFaceSet574.coord = Coordinate576

Shape572.geometry = IndexedFaceSet574

Transform571.children.append(Shape572)

HAnimSegment570.children.append(Transform571)
Coordinate577 = x3d.Coordinate(USE="Right_lower_eyelid_COORD_JinBlink")

HAnimSegment570.coord = Coordinate577
HAnimDisplacer578 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinBlink")
HAnimDisplacer578.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer578.coordIndex = [0,1,2,4]
HAnimDisplacer578.displacements = [(0, 0.1171, 0.1997),(0, 0.2271, 0.251),(0, 0.2126, 0.0762),(-0.165, 0.1045, 0)]

HAnimSegment570.displacers.append(HAnimDisplacer578)
HAnimDisplacer579 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer579.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer579.coordIndex = [5,6,7,8,9,14]
HAnimDisplacer579.displacements = [(0, 0.1005, 0.079),(0, 0.1344, -0.107),(-0.299, 0.3808, -0.1835),(0, 0.268, 0.0997),(0, 0.2684, 0),(0, 0.067, -0.082)]

HAnimSegment570.displacers.append(HAnimDisplacer579)
HAnimDisplacer580 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinEyesClosed")
HAnimDisplacer580.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer580.coordIndex = [0,1,2,4]
HAnimDisplacer580.displacements = [(0, 0.1171, 0.1997),(0, 0.2271, 0.251),(0, 0.2126, 0.0762),(-0.165, 0.1045, 0)]

HAnimSegment570.displacers.append(HAnimDisplacer580)
HAnimDisplacer581 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinLidDroop")
HAnimDisplacer581.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer581.coordIndex = [11]
HAnimDisplacer581.displacements = [(0, -0.349, 0)]

HAnimSegment570.displacers.append(HAnimDisplacer581)
HAnimDisplacer582 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinLidTightener")
HAnimDisplacer582.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer582.coordIndex = [0,1,2,3,4,10]
HAnimDisplacer582.displacements = [(0, 0.3018, 0),(0, 0.1101, 0),(0.123, 0.2262, 0),(0, 0.3018, 0),(0, 0.1513, 0),(0, 0.1512, 0)]

HAnimSegment570.displacers.append(HAnimDisplacer582)
HAnimDisplacer583 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinSquint")
HAnimDisplacer583.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer583.coordIndex = [0,1,2,3,4,10,11,12]
HAnimDisplacer583.displacements = [(0, 0.6387, 0.7019),(0, 0.3839, 0.263),(0, 0.499, 0.4721),(0, 0.7235, 0.3988),(0, 0.6387, 0.398),(0, 0.6386, 0.399),(0, -0.078, 0),(0, -0.078, 0)]

HAnimSegment570.displacers.append(HAnimDisplacer583)
HAnimDisplacer584 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer584.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer584.coordIndex = [13]
HAnimDisplacer584.displacements = [(0, 0.4976, 0)]

HAnimSegment570.displacers.append(HAnimDisplacer584)

HAnimJoint89.children.append(HAnimSegment570)
HAnimSegment585 = x3d.HAnimSegment(DEF="hanim_Right_lower_vermillion_lip")
HAnimSegment585.name = "right_lower_vermillion_lip"
Transform586 = x3d.Transform(DEF="Right_lower_vermillion_lip_JinBlink")
Transform586.translation = [-1.788,8.405,13.04]
Shape587 = x3d.Shape()
Appearance588 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape587.appearance = Appearance588
IndexedFaceSet589 = x3d.IndexedFaceSet(DEF="Right_lower_vermillion_lip-FACES_JinBlink")
IndexedFaceSet589.coordIndex = [2,0,1,-1]
IndexedFaceSet589.creaseAngle = 3.14159
IndexedFaceSet589.solid = False
IndexedFaceSet589.texCoordIndex = [2,0,1,-1]
TextureCoordinate590 = x3d.TextureCoordinate(DEF="Right_lower_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate590.point = [(0.2548, 0.6554),(0.3007, 0.651),(0.2652, 0.6384)]

IndexedFaceSet589.texCoord = TextureCoordinate590
Coordinate591 = x3d.Coordinate(DEF="Right_lower_vermillion_lip_COORD_JinBlink")
Coordinate591.point = [(1.218, 0.4506, 0.603),(-1.218, 0.219, -0.603),(1.154, -0.4506, 0.3592)]

IndexedFaceSet589.coord = Coordinate591

Shape587.geometry = IndexedFaceSet589

Transform586.children.append(Shape587)

HAnimSegment585.children.append(Transform586)
Coordinate592 = x3d.Coordinate(USE="Right_lower_vermillion_lip_COORD_JinBlink")

HAnimSegment585.coord = Coordinate592
HAnimDisplacer593 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer593.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer593.coordIndex = [0,1,2]
HAnimDisplacer593.displacements = [(0, 0.3821, 0.435),(-0.591, 1.323, 0.1066),(0, 0.7896, 0.4659)]

HAnimSegment585.displacers.append(HAnimDisplacer593)
HAnimDisplacer594 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer594.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer594.coordIndex = [0,1,2]
HAnimDisplacer594.displacements = [(0, 0.187, 0),(0, -0.1372, 0),(0, 0.6497, 0.364)]

HAnimSegment585.displacers.append(HAnimDisplacer594)
HAnimDisplacer595 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer595.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer595.coordIndex = [0,1,2]
HAnimDisplacer595.displacements = [(0, -0.0896, 0.533),(-0.379, 0.396, 0.1527),(0, 0.6332, 0.8798)]

HAnimSegment585.displacers.append(HAnimDisplacer595)
HAnimDisplacer596 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinJawDrop")
HAnimDisplacer596.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer596.coordIndex = [0,2]
HAnimDisplacer596.displacements = [(0, -0.6156, 0),(0, -0.6154, 0)]

HAnimSegment585.displacers.append(HAnimDisplacer596)
HAnimDisplacer597 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer597.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer597.coordIndex = [0,1,2]
HAnimDisplacer597.displacements = [(0, -0.0368, 0.837),(-0.197, -0.7014, 0.0777),(0, 0.5213, 1.2488)]

HAnimSegment585.displacers.append(HAnimDisplacer597)
HAnimDisplacer598 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer598.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer598.coordIndex = [2]
HAnimDisplacer598.displacements = [(-1.176, 0.13, -0.375)]

HAnimSegment585.displacers.append(HAnimDisplacer598)
HAnimDisplacer599 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer599.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer599.coordIndex = [0,1,2]
HAnimDisplacer599.displacements = [(-0.2642, -0.7179, 0.823),(0.8355, 0, 1.0637),(0.101, -0.5994, 0.7018)]

HAnimSegment585.displacers.append(HAnimDisplacer599)
HAnimDisplacer600 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipPressor")
HAnimDisplacer600.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer600.coordIndex = [0,2]
HAnimDisplacer600.displacements = [(0, -0.3795, 0.1337),(0, -0.21, 0)]

HAnimSegment585.displacers.append(HAnimDisplacer600)
HAnimDisplacer601 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer601.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer601.coordIndex = [0,1,2]
HAnimDisplacer601.displacements = [(0, -0.3959, 0.859),(0.9097, 0, 0.4597),(0, -0.2497, 0.9748)]

HAnimSegment585.displacers.append(HAnimDisplacer601)
HAnimDisplacer602 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipStretcher")
HAnimDisplacer602.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer602.coordIndex = [1]
HAnimDisplacer602.displacements = [(-0.973, 0.0092, 0.0257)]

HAnimSegment585.displacers.append(HAnimDisplacer602)
HAnimDisplacer603 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer603.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer603.coordIndex = [0,1,2]
HAnimDisplacer603.displacements = [(0, -0.0594, 0.1828),(-0.125, 0, 0),(0, 0.633, 0.3625)]

HAnimSegment585.displacers.append(HAnimDisplacer603)
HAnimDisplacer604 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer604.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer604.coordIndex = [0,1,2]
HAnimDisplacer604.displacements = [(0.042, -0.058, 1.082),(0.5211, 0.1705, 1.038),(-0.1612, 0.0641, 0.9158)]

HAnimSegment585.displacers.append(HAnimDisplacer604)
HAnimDisplacer605 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer605.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer605.coordIndex = [0,2]
HAnimDisplacer605.displacements = [(0, -0.5685, 0),(0, -0.5684, 0)]

HAnimSegment585.displacers.append(HAnimDisplacer605)
HAnimDisplacer606 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer606.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer606.coordIndex = [0,1,2]
HAnimDisplacer606.displacements = [(-0.176, -2.4736, 0.049),(0, -0.7362, 0),(-0.1963, -2.4594, 0.002)]

HAnimSegment585.displacers.append(HAnimDisplacer606)

HAnimJoint89.children.append(HAnimSegment585)
HAnimSegment607 = x3d.HAnimSegment(DEF="hanim_Right_nasolabial_cheek")
HAnimSegment607.name = "right_nasolabial_cheek"
Transform608 = x3d.Transform(DEF="Right_nasolabial_cheek_JinBlink")
Transform608.translation = [-2.021,10.27,13.53]
Shape609 = x3d.Shape()
Appearance610 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape609.appearance = Appearance610
IndexedFaceSet611 = x3d.IndexedFaceSet(DEF="Right_nasolabial_cheek-FACES_JinBlink")
IndexedFaceSet611.coordIndex = [0,4,3,-1,3,5,0,-1,5,2,1,-1,1,0,5,-1]
IndexedFaceSet611.creaseAngle = 3.14159
IndexedFaceSet611.solid = False
IndexedFaceSet611.texCoordIndex = [0,4,3,-1,3,5,0,-1,5,2,1,-1,1,0,5,-1]
TextureCoordinate612 = x3d.TextureCoordinate(DEF="Right_nasolabial_cheek-TEXCOORD_JinBlink")
TextureCoordinate612.point = [(0.2661, 0.696),(0.2636, 0.664),(0.3007, 0.651),(0.2727, 0.7092),(0.2641, 0.7133),(0.2788, 0.6949)]

IndexedFaceSet611.texCoord = TextureCoordinate612
Coordinate613 = x3d.Coordinate(DEF="Right_nasolabial_cheek_COORD_JinBlink")
Coordinate613.point = [(0.8548, 0.741, 0.5666),(0.9852, -0.962, 1.035),(-0.9852, -1.648, -1.094),(0.5035, 1.438, 0.4388),(0.9626, 1.648, 1.094),(0.1761, 0.6814, 0.2329)]

IndexedFaceSet611.coord = Coordinate613

Shape609.geometry = IndexedFaceSet611

Transform608.children.append(Shape609)

HAnimSegment607.children.append(Transform608)
Coordinate614 = x3d.Coordinate(USE="Right_nasolabial_cheek_COORD_JinBlink")

HAnimSegment607.coord = Coordinate614
HAnimDisplacer615 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer615.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer615.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer615.displacements = [(0, 0.838, 0),(0, 0.5164, 0),(-0.5908, 1.3226, 0.1063),(0, 0.838, 0),(0, 0.838, 0),(0, 0.8376, 0)]

HAnimSegment607.displacers.append(HAnimDisplacer615)
HAnimDisplacer616 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinChinRaiser")
HAnimDisplacer616.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer616.coordIndex = [1,2]
HAnimDisplacer616.displacements = [(0, 0.0967, 0),(0, -0.137, 0)]

HAnimSegment607.displacers.append(HAnimDisplacer616)
HAnimDisplacer617 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinDimpler")
HAnimDisplacer617.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer617.coordIndex = [1,2]
HAnimDisplacer617.displacements = [(0, -0.069, 0.044),(-0.3788, 0.396, 0.1524)]

HAnimSegment607.displacers.append(HAnimDisplacer617)
HAnimDisplacer618 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer618.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer618.coordIndex = [1,2]
HAnimDisplacer618.displacements = [(0, -0.0221, 0.125),(-0.1968, -0.701, 0.077)]

HAnimSegment607.displacers.append(HAnimDisplacer618)
HAnimDisplacer619 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer619.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer619.coordIndex = [5]
HAnimDisplacer619.displacements = [(-1.176, 0.13, -0.375)]

HAnimSegment607.displacers.append(HAnimDisplacer619)
HAnimDisplacer620 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipFunneler")
HAnimDisplacer620.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer620.coordIndex = [1,2,5]
HAnimDisplacer620.displacements = [(0.1338, 0.1022, 0.551),(0.8357, 0, 1.0634),(0, 0, 0.1091)]

HAnimSegment607.displacers.append(HAnimDisplacer620)
HAnimDisplacer621 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer621.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer621.coordIndex = [1,2]
HAnimDisplacer621.displacements = [(0.0618, 0, 0.566),(0.9099, 0, 0.4594)]

HAnimSegment607.displacers.append(HAnimDisplacer621)
HAnimDisplacer622 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipStretcher")
HAnimDisplacer622.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer622.coordIndex = [2]
HAnimDisplacer622.displacements = [(-0.9728, 0.009, 0.025)]

HAnimSegment607.displacers.append(HAnimDisplacer622)
HAnimDisplacer623 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipSuck")
HAnimDisplacer623.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer623.coordIndex = [1,2]
HAnimDisplacer623.displacements = [(0, -0.52, -0.655),(-0.1248, 0, 0)]

HAnimSegment607.displacers.append(HAnimDisplacer623)
HAnimDisplacer624 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipTightener")
HAnimDisplacer624.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer624.coordIndex = [1,2]
HAnimDisplacer624.displacements = [(0.0758, -0.0332, 0.261),(0.5214, 0.171, 1.0377)]

HAnimSegment607.displacers.append(HAnimDisplacer624)
HAnimDisplacer625 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinMouthStretch")
HAnimDisplacer625.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer625.coordIndex = [1,2]
HAnimDisplacer625.displacements = [(0, 0.2684, 0),(0, -0.736, 0)]

HAnimSegment607.displacers.append(HAnimDisplacer625)
HAnimDisplacer626 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer626.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer626.coordIndex = [0,3,4,5]
HAnimDisplacer626.displacements = [(0, 0.376, 0),(0.0781, 0.552, 0),(0, 0.376, 0),(0, 0.4706, 0)]

HAnimSegment607.displacers.append(HAnimDisplacer626)
HAnimDisplacer627 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer627.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer627.coordIndex = [0,1,3,4,5]
HAnimDisplacer627.displacements = [(0, 0.502, 0),(0, 0.5016, 0),(0, 0.294, 0),(0, 0.294, 0),(0, 0.5016, 0)]

HAnimSegment607.displacers.append(HAnimDisplacer627)

HAnimJoint89.children.append(HAnimSegment607)
HAnimSegment628 = x3d.HAnimSegment(DEF="hanim_Right_nostril")
HAnimSegment628.name = "right_nostril"
Transform629 = x3d.Transform(DEF="Right_nostril_JinBlink")
Transform629.translation = [-0.7684,11.22,15.04]
Shape630 = x3d.Shape()
Appearance631 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape630.appearance = Appearance631
IndexedFaceSet632 = x3d.IndexedFaceSet(DEF="Right_nostril-FACES_JinBlink")
IndexedFaceSet632.coordIndex = [0,3,2,-1,1,0,2,-1,4,2,3,-1]
IndexedFaceSet632.creaseAngle = 3.14159
IndexedFaceSet632.solid = False
IndexedFaceSet632.texCoordIndex = [0,3,2,-1,1,0,2,-1,4,2,3,-1]
TextureCoordinate633 = x3d.TextureCoordinate(DEF="Right_nostril-TEXCOORD_JinBlink")
TextureCoordinate633.point = [(0.2538, 0.7051),(0.2511, 0.6816),(0.2661, 0.696),(0.2528, 0.7186),(0.2641, 0.7133)]

IndexedFaceSet632.texCoord = TextureCoordinate633
Coordinate634 = x3d.Coordinate(DEF="Right_nostril_COORD_JinBlink")
Coordinate634.point = [(0.2923, 0.2585, 0.9483),(0.398, -0.9732, 0.1131),(-0.398, -0.209, -0.9483),(0.3119, 0.9732, 0.439),(-0.2902, 0.6978, -0.4206)]

IndexedFaceSet632.coord = Coordinate634

Shape630.geometry = IndexedFaceSet632

Transform629.children.append(Shape630)

HAnimSegment628.children.append(Transform629)
Coordinate635 = x3d.Coordinate(USE="Right_nostril_COORD_JinBlink")

HAnimSegment628.coord = Coordinate635
HAnimDisplacer636 = x3d.HAnimDisplacer(DEF="Right_nostril_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer636.name = "right_nostril_morphinterpolator"
HAnimDisplacer636.coordIndex = [2,4]
HAnimDisplacer636.displacements = [(0, 0.838, 0),(0, 0.8382, 0)]

HAnimSegment628.displacers.append(HAnimDisplacer636)
HAnimDisplacer637 = x3d.HAnimDisplacer(DEF="Right_nostril_MorphInterpolator_JinNasolabialDeepener")
HAnimDisplacer637.name = "right_nostril_morphinterpolator"
HAnimDisplacer637.coordIndex = [0]
HAnimDisplacer637.displacements = [(-0.3849, 0, 0)]

HAnimSegment628.displacers.append(HAnimDisplacer637)
HAnimDisplacer638 = x3d.HAnimDisplacer(DEF="Right_nostril_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer638.name = "right_nostril_morphinterpolator"
HAnimDisplacer638.coordIndex = [2,4]
HAnimDisplacer638.displacements = [(0, 0.3759, 0),(0, 0.3762, 0)]

HAnimSegment628.displacers.append(HAnimDisplacer638)
HAnimDisplacer639 = x3d.HAnimDisplacer(DEF="Right_nostril_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer639.name = "right_nostril_morphinterpolator"
HAnimDisplacer639.coordIndex = [2,4]
HAnimDisplacer639.displacements = [(0, 0.5016, 0),(0, 0.2937, 0)]

HAnimSegment628.displacers.append(HAnimDisplacer639)

HAnimJoint89.children.append(HAnimSegment628)
HAnimSegment640 = x3d.HAnimSegment(DEF="hanim_Right_pupil")
HAnimSegment640.name = "right_pupil"
Transform641 = x3d.Transform(DEF="Right_pupil_JinBlink")
Transform641.translation = [-6.059,17.5,12.33]
Shape642 = x3d.Shape()
Appearance643 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape642.appearance = Appearance643
IndexedFaceSet644 = x3d.IndexedFaceSet(DEF="Right_pupil-FACES_JinBlink")
IndexedFaceSet644.coordIndex = [4,6,7,-1,7,0,4,-1,7,8,3,-1,3,0,7,-1,12,2,1,-1,1,9,12,-1,10,9,1,-1,5,10,1,-1,1,3,5,-1,0,2,11,-1,11,4,0,-1,2,12,11,-1,3,8,5,-1,0,3,1,-1,1,2,0,-1]
IndexedFaceSet644.creaseAngle = 3.14159
IndexedFaceSet644.solid = False
IndexedFaceSet644.texCoordIndex = [4,6,7,-1,7,0,4,-1,7,8,3,-1,3,0,7,-1,12,2,1,-1,1,9,12,-1,10,9,1,-1,5,10,1,-1,1,3,5,-1,0,2,11,-1,11,4,0,-1,2,12,11,-1,3,8,5,-1,0,3,1,-1,1,2,0,-1]
TextureCoordinate645 = x3d.TextureCoordinate(DEF="Right_pupil-TEXCOORD_JinBlink")
TextureCoordinate645.point = [(0.3496, 0.8297),(0.3746, 0.8042),(0.3491, 0.8029),(0.3744, 0.8314),(0.328, 0.824),(0.3871, 0.8321),(0.3258, 0.833),(0.3487, 0.8409),(0.385, 0.8438),(0.3777, 0.7936),(0.3889, 0.8064),(0.3322, 0.8026),(0.3442, 0.7934)]

IndexedFaceSet644.texCoord = TextureCoordinate645
Coordinate646 = x3d.Coordinate(DEF="Right_pupil_COORD_JinBlink")
Coordinate646.point = [(0.4761, 0.63, 0.6933),(-0.8417, -0.7176, -0.6485),(0.4665, -0.8077, 0.1079),(-0.8447, 0.7457, -0.2465),(1.612, 0.3169, 1.289),(-1.518, 0.7946, -0.736),(1.517, 0.8129, 1.347),(0.5339, 1.273, 1.112),(-1.311, 1.316, -0.204),(-1.04, -1.316, -0.9056),(-1.612, -0.6212, -1.347),(1.373, -0.8544, 0.5399),(0.7368, -1.282, 0.04415)]

IndexedFaceSet644.coord = Coordinate646

Shape642.geometry = IndexedFaceSet644

Transform641.children.append(Shape642)

HAnimSegment640.children.append(Transform641)
Coordinate647 = x3d.Coordinate(USE="Right_pupil_COORD_JinBlink")

HAnimSegment640.coord = Coordinate647
HAnimDisplacer648 = x3d.HAnimDisplacer(DEF="Right_pupil_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer648.name = "right_pupil_morphinterpolator"
HAnimDisplacer648.coordIndex = [6,7]
HAnimDisplacer648.displacements = [(0, -0.0591, 0),(0, -0.059, 0)]

HAnimSegment640.displacers.append(HAnimDisplacer648)
HAnimDisplacer649 = x3d.HAnimDisplacer(DEF="Right_pupil_MorphInterpolator_JinLidTightener")
HAnimDisplacer649.name = "right_pupil_morphinterpolator"
HAnimDisplacer649.coordIndex = [6,7,8,9,12]
HAnimDisplacer649.displacements = [(0, -0.3349, 0),(0, -0.3344, 0),(0, -0.3345, 0),(0, 0.301, 0),(0, 0.151, 0)]

HAnimSegment640.displacers.append(HAnimDisplacer649)
HAnimDisplacer650 = x3d.HAnimDisplacer(DEF="Right_pupil_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer650.name = "right_pupil_morphinterpolator"
HAnimDisplacer650.coordIndex = [6,7,8]
HAnimDisplacer650.displacements = [(0, 0.4971, 0),(0, 0.498, 0),(0, 0.498, 0)]

HAnimSegment640.displacers.append(HAnimDisplacer650)

HAnimJoint89.children.append(HAnimSegment640)
HAnimSegment651 = x3d.HAnimSegment(DEF="hanim_Right_temple")
HAnimSegment651.name = "right_temple"
Transform652 = x3d.Transform(DEF="Right_temple_JinBlink")
Transform652.translation = [-10.95,20.56,6.406]
Shape653 = x3d.Shape()
Appearance654 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape653.appearance = Appearance654
IndexedFaceSet655 = x3d.IndexedFaceSet(DEF="Right_temple-FACES_JinBlink")
IndexedFaceSet655.coordIndex = [9,12,5,-1,5,7,9,-1,0,5,12,-1,12,11,0,-1,0,8,1,-1,1,2,0,-1,2,5,0,-1,10,9,7,-1,7,6,10,-1,7,5,2,-1,2,3,7,-1,4,6,7,-1,7,3,4,-1]
IndexedFaceSet655.creaseAngle = 3.14159
IndexedFaceSet655.solid = False
IndexedFaceSet655.texCoordIndex = [0,4,5,-1,5,6,0,-1,1,7,15,-1,15,13,1,-1,1,10,2,-1,2,3,1,-1,3,7,1,-1,8,0,6,-1,6,9,8,-1,6,5,11,-1,11,12,6,-1,14,9,6,-1,6,12,14,-1]
TextureCoordinate656 = x3d.TextureCoordinate(DEF="Right_temple-TEXCOORD_JinBlink")
TextureCoordinate656.point = [(0.44, 0.6625),(0.4455, 0.863),(0.4299, 0.8825),(0.4655, 0.9081),(0.4547, 0.661),(0.4573, 0.671),(0.4428, 0.6714),(0.462, 0.8557),(0.4352, 0.6651),(0.4342, 0.6719),(0.4266, 0.8643),(0.4606, 0.684),(0.4479, 0.6875),(0.4335, 0.819),(0.4319, 0.6876),(0.4572, 0.8171)]

IndexedFaceSet655.texCoord = TextureCoordinate656
Coordinate657 = x3d.Coordinate(DEF="Right_temple_COORD_JinBlink")
Coordinate657.point = [(0.312, -0.6258, 2.224),(1.079, 0.3506, 4.121),(-0.5824, 2.214, 1.716),(-0.9631, 2.994, -0.8569),(-0.5756, 3.023, -4.121),(-0.3971, -0.687, 1.044),(-1.042, -0.4888, -3.649),(-1.005, -0.6065, -1.903),(1.243, -0.6321, 3.914),(-1.028, -2.588, -2.479),(-1.243, -2.002, -3.446),(0.8897, -3.023, 2.376),(-0.2546, -2.916, 0.5272)]

IndexedFaceSet655.coord = Coordinate657

Shape653.geometry = IndexedFaceSet655

Transform652.children.append(Shape653)

HAnimSegment651.children.append(Transform652)
Coordinate658 = x3d.Coordinate(USE="Right_temple_COORD_JinBlink")

HAnimSegment651.coord = Coordinate658
HAnimDisplacer659 = x3d.HAnimDisplacer(DEF="Right_temple_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer659.name = "right_temple_morphinterpolator"
HAnimDisplacer659.coordIndex = [1,8]
HAnimDisplacer659.displacements = [(0, -0.0942, 0),(0, -0.0941, 0)]

HAnimSegment651.displacers.append(HAnimDisplacer659)
HAnimDisplacer660 = x3d.HAnimDisplacer(DEF="Right_temple_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer660.name = "right_temple_morphinterpolator"
HAnimDisplacer660.coordIndex = [1,8]
HAnimDisplacer660.displacements = [(0, 0.2686, 0),(0, 0.2687, 0)]

HAnimSegment651.displacers.append(HAnimDisplacer660)
HAnimDisplacer661 = x3d.HAnimDisplacer(DEF="Right_temple_MorphInterpolator_JinSquint")
HAnimDisplacer661.name = "right_temple_morphinterpolator"
HAnimDisplacer661.coordIndex = [8,11]
HAnimDisplacer661.displacements = [(-0.003, -0.4639, 0.004),(0, -0.075, 0)]

HAnimSegment651.displacers.append(HAnimDisplacer661)

HAnimJoint89.children.append(HAnimSegment651)
HAnimSegment662 = x3d.HAnimSegment(DEF="hanim_Right_upper_cutaneous_lip")
HAnimSegment662.name = "right_upper_cutaneous_lip"
Transform663 = x3d.Transform(DEF="Right_upper_cutaneous_lip_JinBlink")
Transform663.translation = [-0.7684,10.16,14.63]
Shape664 = x3d.Shape()
Appearance665 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape664.appearance = Appearance665
IndexedFaceSet666 = x3d.IndexedFaceSet(DEF="Right_upper_cutaneous_lip-FACES_JinBlink")
IndexedFaceSet666.coordIndex = [2,0,1,-1,1,3,2,-1]
IndexedFaceSet666.creaseAngle = 3.14159
IndexedFaceSet666.solid = False
IndexedFaceSet666.texCoordIndex = [2,0,1,-1,1,3,2,-1]
TextureCoordinate667 = x3d.TextureCoordinate(DEF="Right_upper_cutaneous_lip-TEXCOORD_JinBlink")
TextureCoordinate667.point = [(0.2661, 0.696),(0.2636, 0.664),(0.2511, 0.6816),(0.2548, 0.6653)]

IndexedFaceSet666.texCoord = TextureCoordinate667
Coordinate668 = x3d.Coordinate(DEF="Right_upper_cutaneous_lip_COORD_JinBlink")
Coordinate668.point = [(-0.398, 0.8515, -0.5307),(-0.2676, -0.8515, -0.06256),(0.398, 0.08738, 0.5307),(0.1985, -0.7812, 0.2164)]

IndexedFaceSet666.coord = Coordinate668

Shape664.geometry = IndexedFaceSet666

Transform663.children.append(Shape664)

HAnimSegment662.children.append(Transform663)
Coordinate669 = x3d.Coordinate(USE="Right_upper_cutaneous_lip_COORD_JinBlink")

HAnimSegment662.coord = Coordinate669
HAnimDisplacer670 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer670.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer670.coordIndex = [0,1,3]
HAnimDisplacer670.displacements = [(0, 0.8385, 0),(0, 0.5164, 0),(0, 0.4847, 0)]

HAnimSegment662.displacers.append(HAnimDisplacer670)
HAnimDisplacer671 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer671.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer671.coordIndex = [1,3]
HAnimDisplacer671.displacements = [(0, 0.0967, 0),(0, 0.1405, 0)]

HAnimSegment662.displacers.append(HAnimDisplacer671)
HAnimDisplacer672 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer672.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer672.coordIndex = [1,3]
HAnimDisplacer672.displacements = [(0, -0.0689, 0.0447),(0, -0.0689, 0.0448)]

HAnimSegment662.displacers.append(HAnimDisplacer672)
HAnimDisplacer673 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer673.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer673.coordIndex = [1,3]
HAnimDisplacer673.displacements = [(0, -0.0221, 0.1251),(0, -0.0514, -0.0369)]

HAnimSegment662.displacers.append(HAnimDisplacer673)
HAnimDisplacer674 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer674.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer674.coordIndex = [1,3]
HAnimDisplacer674.displacements = [(0.1339, 0.1022, 0.5512),(0.0736, 0.1634, 0.5282)]

HAnimSegment662.displacers.append(HAnimDisplacer674)
HAnimDisplacer675 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer675.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer675.coordIndex = [1,3]
HAnimDisplacer675.displacements = [(0.0619, 0, 0.5662),(0.0155, 0, 0.5662)]

HAnimSegment662.displacers.append(HAnimDisplacer675)
HAnimDisplacer676 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer676.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer676.coordIndex = [1,3]
HAnimDisplacer676.displacements = [(0, -0.5205, -0.6547),(0, -0.5208, -0.6547)]

HAnimSegment662.displacers.append(HAnimDisplacer676)
HAnimDisplacer677 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer677.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer677.coordIndex = [1,3]
HAnimDisplacer677.displacements = [(0.0754, -0.0332, 0.2613),(0.0415, -0.0383, 0.241)]

HAnimSegment662.displacers.append(HAnimDisplacer677)
HAnimDisplacer678 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer678.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer678.coordIndex = [1,3]
HAnimDisplacer678.displacements = [(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment662.displacers.append(HAnimDisplacer678)
HAnimDisplacer679 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer679.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer679.coordIndex = [0]
HAnimDisplacer679.displacements = [(0, 0.3765, 0)]

HAnimSegment662.displacers.append(HAnimDisplacer679)
HAnimDisplacer680 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer680.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer680.coordIndex = [0,1,3]
HAnimDisplacer680.displacements = [(0, 0.5015, 0),(0, 0.5016, 0),(0, 0.5016, 0)]

HAnimSegment662.displacers.append(HAnimDisplacer680)

HAnimJoint89.children.append(HAnimSegment662)
HAnimSegment681 = x3d.HAnimSegment(DEF="hanim_Right_upper_eyelid")
HAnimSegment681.name = "right_upper_eyelid"
Transform682 = x3d.Transform(DEF="Right_upper_eyelid_JinBlink")
Transform682.translation = [-5.53,17.96,12.21]
Shape683 = x3d.Shape()
Appearance684 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape683.appearance = Appearance684
IndexedFaceSet685 = x3d.IndexedFaceSet(DEF="Right_upper_eyelid-FACES_JinBlink")
IndexedFaceSet685.coordIndex = [1,0,2,-1,6,4,3,-1,3,2,6,-1,3,1,2,-1,1,13,0,-1,13,7,0,-1,8,12,5,-1,5,10,8,-1,4,6,10,-1,10,5,4,-1,0,7,9,-1,7,11,9,-1,13,14,11,-1,11,7,13,-1]
IndexedFaceSet685.creaseAngle = 3.14159
IndexedFaceSet685.solid = False
IndexedFaceSet685.texCoordIndex = [2,0,1,-1,4,3,5,-1,5,1,4,-1,5,2,1,-1,2,6,0,-1,6,9,0,-1,11,15,8,-1,8,13,11,-1,3,4,13,-1,13,8,3,-1,0,9,12,-1,10,14,12,-1,7,16,14,-1,14,10,7,-1]
TextureCoordinate686 = x3d.TextureCoordinate(DEF="Right_upper_eyelid-TEXCOORD_JinBlink")
TextureCoordinate686.point = [(0.274, 0.8322),(0.3402, 0.8534),(0.3285, 0.8323),(0.3831, 0.8437),(0.3979, 0.8641),(0.3487, 0.8409),(0.2983, 0.8142),(0.2981, 0.8094),(0.4198, 0.8261),(0.2678, 0.8154),(0.2677, 0.8134),(0.4455, 0.863),(0.2534, 0.8152),(0.4266, 0.8643),(0.2671, 0.7978),(0.4335, 0.819),(0.2845, 0.7889)]

IndexedFaceSet685.texCoord = TextureCoordinate686
Coordinate687 = x3d.Coordinate(DEF="Right_upper_eyelid_COORD_JinBlink")
Coordinate687.point = [(3.944, 0.2777, 3.581),(0.9888, 0.3455, 1.465),(0.4509, 1.393, 2.381),(0.005327, 0.806, 1.231),(-1.84, 0.849, -0.08585),(-3.829, -0.08937, -2.326),(-2.527, 1.923, -0.05675),(4.303, -0.6947, 2.247),(-5.103, 1.975, -3.581),(5.103, -0.5987, 2.53),(-4.172, 1.969, -1.891),(4.353, -1.523, 2.057),(-4.525, -0.4223, -3.429),(2.594, -0.8999, 1.643),(3.366, -1.975, 1.583)]

IndexedFaceSet685.coord = Coordinate687

Shape683.geometry = IndexedFaceSet685

Transform682.children.append(Shape683)

HAnimSegment681.children.append(Transform682)
Coordinate688 = x3d.Coordinate(USE="Right_upper_eyelid_COORD_JinBlink")

HAnimSegment681.coord = Coordinate688
HAnimDisplacer689 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinBlink")
HAnimDisplacer689.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer689.coordIndex = [1,3,4]
HAnimDisplacer689.displacements = [(-0.2496, -2.0425, -0.987),(-1.6453, -2.567, -1.8279),(-0.478, -2.36, -1.1421)]

HAnimSegment681.displacers.append(HAnimDisplacer689)
HAnimDisplacer690 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer690.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer690.coordIndex = [0,1,2,3,6,10]
HAnimDisplacer690.displacements = [(0.303, -0.3949, 0),(0, -0.0592, 0),(0.5561, -0.5069, 0),(0, -0.0591, 0),(0, -0.094, 0),(0, -0.094, 0)]

HAnimSegment681.displacers.append(HAnimDisplacer690)
HAnimDisplacer691 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer691.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer691.coordIndex = [14]
HAnimDisplacer691.displacements = [(0, 0.067, -0.082)]

HAnimSegment681.displacers.append(HAnimDisplacer691)
HAnimDisplacer692 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinEyesClosed")
HAnimDisplacer692.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer692.coordIndex = [1,3,4]
HAnimDisplacer692.displacements = [(-0.2496, -2.0425, -0.987),(-1.6453, -2.567, -1.8279),(-0.478, -2.36, -1.1421)]

HAnimSegment681.displacers.append(HAnimDisplacer692)
HAnimDisplacer693 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer693.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer693.coordIndex = [0,2,6]
HAnimDisplacer693.displacements = [(0, 0.3842, 0),(0, 0.384, 0),(0, 0.135, 0)]

HAnimSegment681.displacers.append(HAnimDisplacer693)
HAnimDisplacer694 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinLidDroop")
HAnimDisplacer694.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer694.coordIndex = [1,3,4,5]
HAnimDisplacer694.displacements = [(0, -0.7517, 0),(0, -1.0484, 0),(0, -1.0134, 0),(0, -0.3486, 0)]

HAnimSegment681.displacers.append(HAnimDisplacer694)
HAnimDisplacer695 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinLidTightener")
HAnimDisplacer695.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer695.coordIndex = [1,3,4]
HAnimDisplacer695.displacements = [(0, -0.3349, 0),(0, -0.3349, 0),(0, -0.3349, 0)]

HAnimSegment681.displacers.append(HAnimDisplacer695)
HAnimDisplacer696 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer696.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer696.coordIndex = [6,10]
HAnimDisplacer696.displacements = [(0, 0.654, 0),(0, 0.268, 0)]

HAnimSegment681.displacers.append(HAnimDisplacer696)
HAnimDisplacer697 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinSlit")
HAnimDisplacer697.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer697.coordIndex = [1,3,4]
HAnimDisplacer697.displacements = [(0, -1.0868, 0),(0, -1.4762, 0),(0, -1.3055, 0)]

HAnimSegment681.displacers.append(HAnimDisplacer697)
HAnimDisplacer698 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinSquint")
HAnimDisplacer698.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer698.coordIndex = [1,3,4,5,6,10,12]
HAnimDisplacer698.displacements = [(0, -0.5962, 0),(0, -0.7726, -0.115),(0, -0.7324, 0),(0, -0.0775, 0),(0, -0.463, 0),(0.002, -0.464, 0),(0, -0.0776, 0)]

HAnimSegment681.displacers.append(HAnimDisplacer698)
HAnimDisplacer699 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer699.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer699.coordIndex = [1,2,3,4,13]
HAnimDisplacer699.displacements = [(0, 0.4975, 0),(0, 0.497, 0),(0, 0.498, 0),(0, 0.498, 0),(0, 0.4975, 0)]

HAnimSegment681.displacers.append(HAnimDisplacer699)

HAnimJoint89.children.append(HAnimSegment681)
HAnimSegment700 = x3d.HAnimSegment(DEF="hanim_Right_upper_vermillion_lip")
HAnimSegment700.name = "right_upper_vermillion_lip"
Transform701 = x3d.Transform(DEF="Right_upper_vermillion_lip_JinBlink")
Transform701.translation = [-1.788,9.002,13.64]
Shape702 = x3d.Shape()
Appearance703 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape702.appearance = Appearance703
IndexedFaceSet704 = x3d.IndexedFaceSet(DEF="Right_upper_vermillion_lip-FACES_JinBlink")
IndexedFaceSet704.coordIndex = [3,2,1,-1,1,0,3,-1]
IndexedFaceSet704.creaseAngle = 3.14159
IndexedFaceSet704.solid = False
IndexedFaceSet704.texCoordIndex = [3,2,1,-1,1,0,3,-1]
TextureCoordinate705 = x3d.TextureCoordinate(DEF="Right_upper_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate705.point = [(0.3007, 0.651),(0.2636, 0.664),(0.2548, 0.6653),(0.2548, 0.6553)]

IndexedFaceSet704.texCoord = TextureCoordinate705
Coordinate706 = x3d.Coordinate(DEF="Right_upper_vermillion_lip_COORD_JinBlink")
Coordinate706.point = [(-1.218, -0.3781, -1.204),(0.7521, 0.3078, 0.925),(1.218, 0.3781, 1.204),(1.218, -0.1506, 0.4455)]

IndexedFaceSet704.coord = Coordinate706

Shape702.geometry = IndexedFaceSet704

Transform701.children.append(Shape702)

HAnimSegment700.children.append(Transform701)
Coordinate707 = x3d.Coordinate(USE="Right_upper_vermillion_lip_COORD_JinBlink")

HAnimSegment700.coord = Coordinate707
HAnimDisplacer708 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer708.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer708.coordIndex = [0,1,2,3]
HAnimDisplacer708.displacements = [(-0.591, 1.3225, 0.107),(0, 0.5164, 0),(0, 0.4847, 0),(0, 0.4847, 0)]

HAnimSegment700.displacers.append(HAnimDisplacer708)
HAnimDisplacer709 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer709.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer709.coordIndex = [0,1,2,3]
HAnimDisplacer709.displacements = [(0, -0.1372, 0),(0, 0.0967, 0),(0, 0.1405, 0),(0, 0.187, 0)]

HAnimSegment700.displacers.append(HAnimDisplacer709)
HAnimDisplacer710 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer710.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer710.coordIndex = [0,1,2,3]
HAnimDisplacer710.displacements = [(-0.379, 0.3959, 0.153),(0, -0.0689, 0.0447),(0, -0.0688, 0.045),(0, -0.0435, 0.4553)]

HAnimSegment700.displacers.append(HAnimDisplacer710)
HAnimDisplacer711 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer711.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer711.coordIndex = [0,1,2,3]
HAnimDisplacer711.displacements = [(-0.197, -0.7019, 0.078),(0, -0.0221, 0.125),(0, -0.0513, -0.037),(0, 0.0541, 0.5975)]

HAnimSegment700.displacers.append(HAnimDisplacer711)
HAnimDisplacer712 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer712.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer712.coordIndex = [0,1,2,3]
HAnimDisplacer712.displacements = [(0.8355, 0, 1.0637),(0.134, 0.1022, 0.551),(0.074, 0.1634, 0.528),(0, 0.1237, 0.8775)]

HAnimSegment700.displacers.append(HAnimDisplacer712)
HAnimDisplacer713 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer713.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer713.coordIndex = [0,1,2,3]
HAnimDisplacer713.displacements = [(0.9097, 0, 0.4597),(0.0619, 0, 0.566),(0.016, 0, 0.566),(-0.041, 0, 0.366)]

HAnimSegment700.displacers.append(HAnimDisplacer713)
HAnimDisplacer714 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipStretcher")
HAnimDisplacer714.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer714.coordIndex = [0]
HAnimDisplacer714.displacements = [(-0.973, 0.0091, 0.026)]

HAnimSegment700.displacers.append(HAnimDisplacer714)
HAnimDisplacer715 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer715.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer715.coordIndex = [0,1,2,3]
HAnimDisplacer715.displacements = [(-0.125, 0, 0),(0, -0.5204, -0.6548),(0, -0.5204, -0.6547),(0, -0.135, -0.2471)]

HAnimSegment700.displacers.append(HAnimDisplacer715)
HAnimDisplacer716 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer716.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer716.coordIndex = [0,1,2,3]
HAnimDisplacer716.displacements = [(0.5211, 0.1704, 1.038),(0.0755, -0.0332, 0.261),(0.042, -0.0383, 0.241),(0.042, -0.0353, 0.6945)]

HAnimSegment700.displacers.append(HAnimDisplacer716)
HAnimDisplacer717 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer717.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer717.coordIndex = [0,1,2,3]
HAnimDisplacer717.displacements = [(0, -0.7359, 0),(0, 0.2684, 0),(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment700.displacers.append(HAnimDisplacer717)
HAnimDisplacer718 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer718.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer718.coordIndex = [1,2,3]
HAnimDisplacer718.displacements = [(0, 0.5016, 0),(0, 0.5017, 0),(0, 0.5017, 0)]

HAnimSegment700.displacers.append(HAnimDisplacer718)

HAnimJoint89.children.append(HAnimSegment700)
HAnimSegment719 = x3d.HAnimSegment(DEF="hanim_Tongue")
HAnimSegment719.name = "tongue"
Transform720 = x3d.Transform(DEF="Tongue_JinBlink")
Transform720.translation = [0,8.886,11.1]
Shape721 = x3d.Shape()
Appearance722 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape721.appearance = Appearance722
IndexedFaceSet723 = x3d.IndexedFaceSet(DEF="Tongue-FACES_JinBlink")
IndexedFaceSet723.coordIndex = [0,59,32,-1,32,62,0,-1,8,75,32,-1,32,59,8,-1,20,95,32,-1,32,75,20,-1,17,62,32,-1,32,95,17,-1,4,89,33,-1,33,74,4,-1,18,96,33,-1,33,89,18,-1,29,92,33,-1,33,96,29,-1,11,74,33,-1,33,92,11,-1,12,79,34,-1,34,82,12,-1,22,97,34,-1,34,79,22,-1,31,94,34,-1,34,97,31,-1,15,82,34,-1,34,94,15,-1,1,72,35,-1,35,67,1,-1,9,77,35,-1,35,72,9,-1,10,64,35,-1,35,77,10,-1,5,67,35,-1,35,64,5,-1,2,71,36,-1,36,70,2,-1,8,78,36,-1,36,71,8,-1,11,66,36,-1,36,78,11,-1,6,70,36,-1,36,66,6,-1,8,71,37,-1,37,75,8,-1,2,60,37,-1,37,71,2,-1,24,98,37,-1,37,60,24,-1,20,75,37,-1,37,98,20,-1,10,73,38,-1,38,76,10,-1,7,65,38,-1,38,73,7,-1,27,99,38,-1,38,65,27,-1,21,76,38,-1,38,99,21,-1,9,61,39,-1,39,77,9,-1,3,69,39,-1,39,61,3,-1,7,73,39,-1,39,69,7,-1,10,77,39,-1,39,73,10,-1,8,59,40,-1,40,78,8,-1,0,68,40,-1,40,59,0,-1,4,74,40,-1,40,68,4,-1,11,78,40,-1,40,74,11,-1,0,62,41,-1,41,83,0,-1,17,100,41,-1,41,62,17,-1,22,79,41,-1,41,100,22,-1,12,83,41,-1,41,79,12,-1,1,67,42,-1,42,84,1,-1,5,85,42,-1,42,67,5,-1,14,80,42,-1,42,85,14,-1,13,84,42,-1,42,80,13,-1,5,63,43,-1,43,85,5,-1,26,101,43,-1,43,63,26,-1,23,81,43,-1,43,101,23,-1,14,85,43,-1,43,81,14,-1,4,68,44,-1,44,86,4,-1,0,83,44,-1,44,68,0,-1,12,82,44,-1,44,83,12,-1,15,86,44,-1,44,82,15,-1,28,91,45,-1,45,110,28,-1,9,72,45,-1,45,91,9,-1,1,88,45,-1,45,72,1,-1,25,110,45,-1,45,88,25,-1,26,63,46,-1,46,111,26,-1,5,64,46,-1,46,63,5,-1,10,76,46,-1,46,64,10,-1,21,111,46,-1,46,76,21,-1,30,93,47,-1,47,112,30,-1,13,80,47,-1,47,93,13,-1,14,81,47,-1,47,80,14,-1,23,112,47,-1,47,81,23,-1,16,87,48,-1,48,113,16,-1,3,61,48,-1,48,87,3,-1,9,91,48,-1,48,61,9,-1,28,113,48,-1,48,91,28,-1,19,90,49,-1,49,114,19,-1,6,66,49,-1,49,90,6,-1,11,92,49,-1,49,66,11,-1,29,114,49,-1,49,92,29,-1,25,88,50,-1,50,115,25,-1,1,84,50,-1,50,88,1,-1,13,93,50,-1,50,84,13,-1,30,115,50,-1,50,93,30,-1,18,89,51,-1,51,116,18,-1,4,86,51,-1,51,89,4,-1,15,94,51,-1,51,86,15,-1,31,116,51,-1,51,94,31,-1,20,106,52,-1,52,95,20,-1,28,110,52,-1,52,106,28,-1,25,103,52,-1,52,110,25,-1,17,95,52,-1,52,103,17,-1,18,104,53,-1,53,96,18,-1,26,111,53,-1,53,104,26,-1,21,107,53,-1,53,111,21,-1,29,96,53,-1,53,107,29,-1,22,108,54,-1,54,97,22,-1,30,112,54,-1,54,108,30,-1,23,109,54,-1,54,112,23,-1,31,97,54,-1,54,109,31,-1,24,102,55,-1,55,98,24,-1,16,113,55,-1,55,102,16,-1,28,106,55,-1,55,113,28,-1,20,98,55,-1,55,106,20,-1,27,105,56,-1,56,99,27,-1,19,114,56,-1,56,105,19,-1,29,107,56,-1,56,114,29,-1,21,99,56,-1,56,107,21,-1,17,103,57,-1,57,100,17,-1,25,115,57,-1,57,103,25,-1,30,108,57,-1,57,115,30,-1,22,100,57,-1,57,108,22,-1,26,104,58,-1,58,101,26,-1,18,116,58,-1,58,104,18,-1,31,109,58,-1,58,116,31,-1,23,101,58,-1,58,109,23,-1]
IndexedFaceSet723.creaseAngle = 3.14159
IndexedFaceSet723.solid = False
IndexedFaceSet723.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,2,-1,2,5,6,-1,8,3,2,-1,2,7,8,-1,9,10,11,-1,11,12,9,-1,13,14,11,-1,11,10,13,-1,15,16,11,-1,11,14,15,-1,17,12,11,-1,11,16,17,-1,18,19,20,-1,20,21,18,-1,22,23,20,-1,20,19,22,-1,24,25,20,-1,20,23,24,-1,26,21,20,-1,20,25,26,-1,27,28,29,-1,29,30,27,-1,31,32,29,-1,29,28,31,-1,33,34,29,-1,29,32,33,-1,35,30,29,-1,29,34,35,-1,36,37,38,-1,38,39,36,-1,4,40,38,-1,38,37,4,-1,17,41,38,-1,38,40,17,-1,42,39,38,-1,38,41,42,-1,4,37,43,-1,43,5,4,-1,36,44,43,-1,43,37,36,-1,45,46,43,-1,43,44,45,-1,6,5,43,-1,43,46,6,-1,33,47,48,-1,48,49,33,-1,50,51,48,-1,48,47,50,-1,52,53,48,-1,48,51,52,-1,54,49,48,-1,48,53,54,-1,31,55,56,-1,56,32,31,-1,57,58,56,-1,56,55,57,-1,50,47,56,-1,56,58,50,-1,33,32,56,-1,56,47,33,-1,4,1,59,-1,59,40,4,-1,0,60,59,-1,59,1,0,-1,9,12,59,-1,59,60,9,-1,17,40,59,-1,59,12,17,-1,0,3,61,-1,61,62,0,-1,8,63,61,-1,61,3,8,-1,22,19,61,-1,61,63,22,-1,18,62,61,-1,61,19,18,-1,27,30,64,-1,64,65,27,-1,35,66,64,-1,64,30,35,-1,67,68,64,-1,64,66,67,-1,69,65,64,-1,64,68,69,-1,35,70,71,-1,71,66,35,-1,72,73,71,-1,71,70,72,-1,74,75,71,-1,71,73,74,-1,67,66,71,-1,71,75,67,-1,9,60,76,-1,76,77,9,-1,0,62,76,-1,76,60,0,-1,18,21,76,-1,76,62,18,-1,26,77,76,-1,76,21,26,-1,78,79,80,-1,80,81,78,-1,31,28,80,-1,80,79,31,-1,27,82,80,-1,80,28,27,-1,83,81,80,-1,80,82,83,-1,72,70,84,-1,84,85,72,-1,35,34,84,-1,84,70,35,-1,33,49,84,-1,84,34,33,-1,54,85,84,-1,84,49,54,-1,86,87,88,-1,88,89,86,-1,69,68,88,-1,88,87,69,-1,67,75,88,-1,88,68,67,-1,74,89,88,-1,88,75,74,-1,90,91,92,-1,92,93,90,-1,57,55,92,-1,92,91,57,-1,31,79,92,-1,92,55,31,-1,78,93,92,-1,92,79,78,-1,94,95,96,-1,96,97,94,-1,42,41,96,-1,96,95,42,-1,17,16,96,-1,96,41,17,-1,15,97,96,-1,96,16,15,-1,83,82,98,-1,98,99,83,-1,27,65,98,-1,98,82,27,-1,69,87,98,-1,98,65,69,-1,86,99,98,-1,98,87,86,-1,13,10,100,-1,100,101,13,-1,9,77,100,-1,100,10,9,-1,26,25,100,-1,100,77,26,-1,24,101,100,-1,100,25,24,-1,6,102,103,-1,103,7,6,-1,78,81,103,-1,103,102,78,-1,83,104,103,-1,103,81,83,-1,8,7,103,-1,103,104,8,-1,13,105,106,-1,106,14,13,-1,72,85,106,-1,106,105,72,-1,54,107,106,-1,106,85,54,-1,15,14,106,-1,106,107,15,-1,22,108,109,-1,109,23,22,-1,86,89,109,-1,109,108,86,-1,74,110,109,-1,109,89,74,-1,24,23,109,-1,109,110,24,-1,45,111,112,-1,112,46,45,-1,90,93,112,-1,112,111,90,-1,78,102,112,-1,112,93,78,-1,6,46,112,-1,112,102,6,-1,52,113,114,-1,114,53,52,-1,94,97,114,-1,114,113,94,-1,15,107,114,-1,114,97,15,-1,54,53,114,-1,114,107,54,-1,8,104,115,-1,115,63,8,-1,83,99,115,-1,115,104,83,-1,86,108,115,-1,115,99,86,-1,22,63,115,-1,115,108,22,-1,72,105,116,-1,116,73,72,-1,13,101,116,-1,116,105,13,-1,24,110,116,-1,116,101,24,-1,74,73,116,-1,116,110,74,-1]
TextureCoordinate724 = x3d.TextureCoordinate(DEF="Tongue-TEXCOORD_JinBlink")
TextureCoordinate724.point = [(0.6665, 0.04796),(0.6621, 0.05829),(0.6755, 0.05429),(0.678, 0.04407),(0.6594, 0.0736),(0.6739, 0.06941),(0.6934, 0.06941),(0.6938, 0.05429),(0.6944, 0.04387),(0.6665, 0.07002),(0.678, 0.07332),(0.6755, 0.08631),(0.6621, 0.08231),(0.6944, 0.07293),(0.6938, 0.08631),(0.6934, 0.103),(0.6739, 0.103),(0.6594, 0.09877),(0.6775, 0.03908),(0.6841, 0.03457),(0.685, 0.04057),(0.677, 0.04467),(0.6959, 0.03299),(0.6961, 0.03821),(0.6959, 0.0483),(0.6841, 0.05084),(0.6775, 0.0521),(0.7593, 0.04796),(0.7636, 0.05829),(0.7681, 0.0703),(0.7631, 0.05909),(0.7664, 0.0736),(0.7713, 0.08619),(0.7664, 0.09877),(0.7636, 0.08231),(0.7593, 0.07002),(0.6584, 0.1215),(0.6584, 0.09583),(0.6535, 0.1086),(0.6535, 0.1343),(0.6545, 0.08619),(0.6584, 0.1214),(0.6584, 0.1471),(0.6734, 0.09157),(0.6734, 0.1172),(0.6932, 0.1172),(0.6932, 0.09157),(0.7673, 0.1214),(0.7524, 0.1256),(0.7519, 0.103),(0.7673, 0.1471),(0.7524, 0.1513),(0.7326, 0.1513),(0.7326, 0.1256),(0.7324, 0.103),(0.7673, 0.09583),(0.7723, 0.1086),(0.7673, 0.1215),(0.7723, 0.1343),(0.6577, 0.0703),(0.6627, 0.05909),(0.6813, 0.03662),(0.6723, 0.04066),(0.6952, 0.03583),(0.7565, 0.05069),(0.7535, 0.04066),(0.7535, 0.05994),(0.7482, 0.0521),(0.7488, 0.04467),(0.7482, 0.03908),(0.7478, 0.07332),(0.7445, 0.06163),(0.7314, 0.07293),(0.7306, 0.06006),(0.7299, 0.0483),(0.7417, 0.05084),(0.6693, 0.05069),(0.6723, 0.05994),(0.7324, 0.06941),(0.7519, 0.06941),(0.7503, 0.05429),(0.732, 0.05429),(0.7478, 0.04407),(0.7314, 0.04387),(0.7503, 0.08631),(0.732, 0.08631),(0.7299, 0.03299),(0.7417, 0.03457),(0.7408, 0.04057),(0.7296, 0.03821),(0.7326, 0.1172),(0.7524, 0.1172),(0.7524, 0.09157),(0.7326, 0.09157),(0.6932, 0.1513),(0.6734, 0.1513),(0.6734, 0.1256),(0.6932, 0.1256),(0.7445, 0.03662),(0.7306, 0.03583),(0.6813, 0.06163),(0.6952, 0.06006),(0.7129, 0.06941),(0.7129, 0.05429),(0.7129, 0.04381),(0.7129, 0.0728),(0.7129, 0.08631),(0.7129, 0.103),(0.7129, 0.03246),(0.7129, 0.03742),(0.7129, 0.04745),(0.7129, 0.1172),(0.7129, 0.09157),(0.7129, 0.1513),(0.7129, 0.1256),(0.7129, 0.03556),(0.7129, 0.05954)]

IndexedFaceSet723.texCoord = TextureCoordinate724
Coordinate725 = x3d.Coordinate(DEF="Tongue_COORD_JinBlink")
Coordinate725.point = [(-1.331, -0.2299, 0.7138),(1.331, -0.2299, 0.7138),(-1.563, 0.07305, -1.268),(1.563, 0.07305, -1.268),(-1.331, -0.07451, 0.7385),(1.331, -0.07451, 0.7385),(-1.563, 0.2531, -1.239),(1.563, 0.2531, -1.239),(-1.536, -0.127, -0.00304),(1.536, -0.127, -0.00304),(1.536, 0.05032, 0.0252),(-1.536, 0.05032, 0.0252),(-1.015, -0.2542, 1.071),(1.015, -0.2542, 1.071),(1.015, -0.1625, 1.086),(-1.015, -0.1625, 1.086),(0.5645, 0.04305, -1.272),(-0.5313, -0.257, 0.7253),(-0.5313, -0.05236, 0.7579),(-0.5645, 0.2831, -1.234),(-0.5607, -0.1565, -0.007746),(0.5607, 0.07987, 0.02991),(-0.4876, -0.283, 1.2),(0.4876, -0.1751, 1.217),(-0.5645, 0.04305, -1.272),(0.5313, -0.257, 0.7253),(0.5313, -0.05236, 0.7579),(0.5645, 0.2831, -1.234),(0.5607, -0.1565, -0.007746),(-0.5607, 0.07987, 0.02991),(0.4876, -0.283, 1.2),(-0.4876, -0.1751, 1.217),(-1.073, -0.2176, 0.4108),(-1.073, 0.007936, 0.4467),(-0.7997, -0.2294, 1.21),(1.585, -0.1049, 0.4287),(-1.706, 0.05553, -0.5782),(-1.134, -0.06447, -0.5973),(1.134, 0.1755, -0.559),(1.706, 0.05553, -0.5782),(-1.585, -0.1049, 0.4287),(-0.9063, -0.2816, 0.9715),(1.251, -0.187, 0.9442),(0.9063, -0.1054, 0.9996),(-1.251, -0.187, 0.9442),(1.073, -0.2176, 0.4108),(1.073, 0.007936, 0.4467),(0.7997, -0.2294, 1.21),(1.134, -0.06447, -0.5973),(-1.134, 0.1755, -0.559),(0.9063, -0.2816, 0.9715),(-0.9063, -0.1054, 0.9996),(0, -0.2176, 0.4108),(0, 0.007936, 0.4467),(0, -0.2425, 1.293),(0, -0.06447, -0.5973),(0, 0.1755, -0.559),(0, -0.2846, 1.013),(0, -0.1157, 1.04),(-1.457, -0.1894, 0.4153),(-1.134, 0.04305, -1.272),(1.563, -0.03447, -0.5925),(-1.001, -0.2565, 0.7175),(1.001, -0.05045, 0.7503),(1.457, -0.02026, 0.4422),(1.134, 0.2831, -1.234),(-1.563, 0.1455, -0.5638),(1.441, -0.1518, 0.7236),(-1.441, -0.1518, 0.7236),(1.706, 0.1631, -1.253),(-1.706, 0.1631, -1.253),(-1.563, -0.03447, -0.5925),(1.457, -0.1894, 0.4153),(1.563, 0.1455, -0.5638),(-1.457, -0.02026, 0.4422),(-1.119, -0.1565, -0.007746),(1.119, 0.07987, 0.02991),(1.676, -0.03833, 0.01108),(-1.676, -0.03833, 0.01108),(-0.8264, -0.2777, 1.145),(1.031, -0.2122, 1.103),(0.8264, -0.1631, 1.163),(-1.031, -0.2122, 1.103),(-1.165, -0.2565, 0.9437),(1.165, -0.2565, 0.9437),(1.165, -0.1207, 0.9654),(-1.165, -0.1207, 0.9654),(1.134, 0.04305, -1.272),(1.001, -0.2565, 0.7175),(-1.001, -0.05045, 0.7503),(-1.134, 0.2831, -1.234),(1.119, -0.1565, -0.007746),(-1.119, 0.07987, 0.02991),(0.8264, -0.2777, 1.145),(-0.8264, -0.1631, 1.163),(-0.5493, -0.2176, 0.4108),(-0.5493, 0.007936, 0.4467),(-0.4809, -0.2392, 1.272),(-0.5645, -0.06447, -0.5973),(0.5645, 0.1755, -0.559),(-0.5076, -0.2838, 1.003),(0.5076, -0.1131, 1.03),(0, 0.04305, -1.272),(0, -0.2572, 0.7279),(0, -0.053, 0.7605),(0, 0.2831, -1.234),(0, -0.1565, -0.007746),(0, 0.07987, 0.02991),(0, -0.2847, 1.218),(0, -0.1791, 1.235),(0.5493, -0.2176, 0.4108),(0.5493, 0.007936, 0.4467),(0.4809, -0.2392, 1.272),(0.5645, -0.06447, -0.5973),(-0.5645, 0.1755, -0.559),(0.5076, -0.2838, 1.003),(-0.5076, -0.1131, 1.03)]

IndexedFaceSet723.coord = Coordinate725

Shape721.geometry = IndexedFaceSet723

Transform720.children.append(Shape721)

HAnimSegment719.children.append(Transform720)
Coordinate726 = x3d.Coordinate(USE="Tongue_COORD_JinBlink")

HAnimSegment719.coord = Coordinate726
HAnimDisplacer727 = x3d.HAnimDisplacer(DEF="Tongue_MorphInterpolator_JinChinRaiser")
HAnimDisplacer727.name = "tongue_morphinterpolator"
HAnimDisplacer727.coordIndex = [0,1,4,5,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,37,38,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,60,62,63,65,75,76,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116]
HAnimDisplacer727.displacements = [(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.112, 0),(0, 0.25, 0.1177),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.2501, 0.118),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.25, 0.1177),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.2501, 0.118),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1615, 0.118),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1614, 0.1175),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1799, 0),(0, 0.1267, 0),(0, 0.1457, 0),(0, 0.0572, 0),(0, 0.2501, 0.118),(0, 0.1865, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1404, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1614, 0.118),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1615, 0.118),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0572, 0),(0, 0.25, 0.118),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.25, 0.1177),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.25, 0.118),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1121, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0572, 0),(0, 0.25, 0.118),(0, 0.1865, 0)]

HAnimSegment719.displacers.append(HAnimDisplacer727)
HAnimDisplacer728 = x3d.HAnimDisplacer(DEF="Tongue_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer728.name = "tongue_morphinterpolator"
HAnimDisplacer728.coordIndex = [19,20,27,44,62,65,83,86,90,105]
HAnimDisplacer728.displacements = [(0, 0, 0.322),(0, 0, 0.0686),(-0.0413, 0, 0.436),(0, 0, 0.0688),(0, 0, 0.0686),(0, 0, 0.322),(0, 0, 0.0683),(0, 0, 0.0686),(0, 0, 0.322),(0, 0, 0.322)]

HAnimSegment719.displacers.append(HAnimDisplacer728)
HAnimDisplacer729 = x3d.HAnimDisplacer(DEF="Tongue_MorphInterpolator_JinMouthStretch")
HAnimDisplacer729.name = "tongue_morphinterpolator"
HAnimDisplacer729.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116]
HAnimDisplacer729.displacements = [(0, -1.3011, -0.5882),(0, -1.3011, -0.5882),(0, -0.1823, 0.11),(0, -0.1474, 0.036),(0, -1.3165, -0.5403),(0, -1.3165, -0.5403),(0, -0.1823, 0.11),(0, -0.1499, 0.048),(0, -1.154, -0.3156),(0, -1.154, -0.3156),(0, -1.0543, -0.2883),(0, -1.0543, -0.2883),(0, -1.4118, -0.614),(0, -1.4118, -0.614),(0, -1.4215, -0.5862),(0, -1.4215, -0.5862),(0, -0.1469, 0.033),(0, -1.303, -0.5972),(0, -1.3236, -0.5343),(0, -0.1504, 0.05),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.508, -0.6254),(0, -1.5299, -0.5751),(0, -0.1469, 0.033),(0, -1.303, -0.5972),(0, -1.3236, -0.5343),(0, -0.1504, 0.05),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.508, -0.6254),(0, -1.5299, -0.5751),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5196, -0.6002),(0, -1.2771, -0.4418),(0, -0.7623, -0.1091),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -0.7623, -0.1091),(0, -1.2771, -0.4418),(0, -1.3794, -0.6176),(0, -1.376, -0.5863),(0, -1.3976, -0.5635),(0, -1.376, -0.5863),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5196, -0.6002),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -1.3794, -0.6176),(0, -1.3976, -0.5635),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5585, -0.6173),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -1.3924, -0.6203),(0, -1.4093, -0.5685),(0, -1.1636, -0.4622),(0, -0.1469, 0.033),(0, -0.7506, -0.1415),(0, -1.3005, -0.5967),(0, -1.3216, -0.5334),(0, -1.2107, -0.3581),(0, -0.1504, 0.05),(0, -0.774, -0.0768),(0, -1.3082, -0.564),(0, -1.3082, -0.564),(0, -0.1487, 0.042),(0, -0.1823, 0.109),(0, -0.7506, -0.1415),(0, -1.1636, -0.4622),(0, -0.774, -0.0768),(0, -1.2107, -0.3581),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.0047, -0.2827),(0, -1.0047, -0.2827),(0, -1.4823, -0.6158),(0, -1.4248, -0.6028),(0, -1.5049, -0.5622),(0, -1.4248, -0.6028),(0, -1.3715, -0.6082),(0, -1.3715, -0.6082),(0, -1.3853, -0.5666),(0, -1.3853, -0.5666),(0, -0.1469, 0.033),(0, -1.3005, -0.5967),(0, -1.3216, -0.5334),(0, -0.1504, 0.05),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.4823, -0.6158),(0, -1.5049, -0.5622),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5488, -0.6128),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -1.3892, -0.62),(0, -1.4069, -0.5673),(0, -0.1469, 0.033),(0, -1.3038, -0.5974),(0, -1.325, -0.5347),(0, -0.1504, 0.05),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.5163, -0.6283),(0, -1.5379, -0.5794),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5488, -0.6128),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -1.3892, -0.62),(0, -1.4069, -0.5673)]

HAnimSegment719.displacers.append(HAnimDisplacer729)

HAnimJoint89.children.append(HAnimSegment719)
HAnimSegment730 = x3d.HAnimSegment(DEF="hanim_Upper_teeth")
HAnimSegment730.name = "upper_teeth"
Transform731 = x3d.Transform(DEF="Upper_teeth_JinBlink")
Transform731.translation = [0,9.723,11.67]
Shape732 = x3d.Shape()
Appearance733 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape732.appearance = Appearance733
IndexedFaceSet734 = x3d.IndexedFaceSet(DEF="Upper_teeth-FACES_JinBlink")
IndexedFaceSet734.coordIndex = [0,521,265,-1,265,524,0,-1,1,525,265,-1,265,521,1,-1,4,523,265,-1,265,525,4,-1,3,524,265,-1,265,523,3,-1,2,522,266,-1,266,526,2,-1,23,558,266,-1,266,522,23,-1,24,551,266,-1,266,558,24,-1,5,526,266,-1,266,551,5,-1,3,523,267,-1,267,528,3,-1,4,529,267,-1,267,523,4,-1,7,527,267,-1,267,529,7,-1,6,528,267,-1,267,527,6,-1,5,551,268,-1,268,530,5,-1,24,559,268,-1,268,551,24,-1,25,552,268,-1,268,559,25,-1,8,530,268,-1,268,552,8,-1,6,527,269,-1,269,532,6,-1,7,533,269,-1,269,527,7,-1,10,531,269,-1,269,533,10,-1,9,532,269,-1,269,531,9,-1,8,552,270,-1,270,534,8,-1,25,560,270,-1,270,552,25,-1,26,553,270,-1,270,560,26,-1,11,534,270,-1,270,553,11,-1,9,531,271,-1,271,536,9,-1,10,537,271,-1,271,531,10,-1,13,535,271,-1,271,537,13,-1,12,536,271,-1,271,535,12,-1,11,553,272,-1,272,538,11,-1,26,561,272,-1,272,553,26,-1,27,554,272,-1,272,561,27,-1,14,538,272,-1,272,554,14,-1,12,535,273,-1,273,540,12,-1,13,541,273,-1,273,535,13,-1,16,539,273,-1,273,541,16,-1,15,540,273,-1,273,539,15,-1,14,554,274,-1,274,542,14,-1,27,562,274,-1,274,554,27,-1,28,555,274,-1,274,562,28,-1,17,542,274,-1,274,555,17,-1,15,539,275,-1,275,544,15,-1,16,545,275,-1,275,539,16,-1,19,543,275,-1,275,545,19,-1,18,544,275,-1,275,543,18,-1,17,555,276,-1,276,546,17,-1,28,563,276,-1,276,555,28,-1,29,556,276,-1,276,563,29,-1,20,546,276,-1,276,556,20,-1,18,543,277,-1,277,548,18,-1,19,549,277,-1,277,543,19,-1,21,547,277,-1,277,549,21,-1,160,548,277,-1,277,547,160,-1,20,556,278,-1,278,550,20,-1,29,564,278,-1,278,556,29,-1,30,557,278,-1,278,564,30,-1,22,550,278,-1,278,557,22,-1,2,526,279,-1,279,580,2,-1,5,581,279,-1,279,526,5,-1,33,565,279,-1,279,581,33,-1,32,580,279,-1,279,565,32,-1,5,530,280,-1,280,581,5,-1,8,582,280,-1,280,530,8,-1,34,566,280,-1,280,582,34,-1,33,581,280,-1,280,566,33,-1,8,534,281,-1,281,582,8,-1,11,583,281,-1,281,534,11,-1,35,567,281,-1,281,583,35,-1,34,582,281,-1,281,567,34,-1,11,538,282,-1,282,583,11,-1,14,584,282,-1,282,538,14,-1,36,568,282,-1,282,584,36,-1,35,583,282,-1,282,568,35,-1,14,542,283,-1,283,584,14,-1,17,585,283,-1,283,542,17,-1,37,569,283,-1,283,585,37,-1,36,584,283,-1,283,569,36,-1,17,546,284,-1,284,585,17,-1,20,586,284,-1,284,546,20,-1,38,570,284,-1,284,586,38,-1,37,585,284,-1,284,570,37,-1,20,550,285,-1,285,586,20,-1,22,587,285,-1,285,550,22,-1,168,571,285,-1,285,587,168,-1,38,586,285,-1,285,571,38,-1,21,549,286,-1,286,839,21,-1,19,588,286,-1,286,549,19,-1,39,572,286,-1,286,588,39,-1,170,839,286,-1,286,572,170,-1,19,545,287,-1,287,588,19,-1,16,589,287,-1,287,545,16,-1,40,573,287,-1,287,589,40,-1,39,588,287,-1,287,573,39,-1,16,541,288,-1,288,589,16,-1,13,590,288,-1,288,541,13,-1,41,574,288,-1,288,590,41,-1,40,589,288,-1,288,574,40,-1,13,537,289,-1,289,590,13,-1,10,591,289,-1,289,537,10,-1,42,575,289,-1,289,591,42,-1,41,590,289,-1,289,575,41,-1,10,533,290,-1,290,591,10,-1,7,592,290,-1,290,533,7,-1,43,576,290,-1,290,592,43,-1,42,591,290,-1,290,576,42,-1,7,529,291,-1,291,592,7,-1,4,593,291,-1,291,529,4,-1,44,577,291,-1,291,593,44,-1,43,592,291,-1,291,577,43,-1,4,525,292,-1,292,593,4,-1,1,579,292,-1,292,525,1,-1,31,578,292,-1,292,579,31,-1,44,593,292,-1,292,578,44,-1,24,558,293,-1,293,595,24,-1,23,594,293,-1,293,558,23,-1,45,595,293,-1,293,594,45,-1,25,559,294,-1,294,596,25,-1,24,595,294,-1,294,559,24,-1,45,596,294,-1,294,595,45,-1,26,560,295,-1,295,597,26,-1,25,596,295,-1,295,560,25,-1,45,597,295,-1,295,596,45,-1,27,561,296,-1,296,598,27,-1,26,597,296,-1,296,561,26,-1,45,598,296,-1,296,597,45,-1,28,562,297,-1,297,599,28,-1,27,598,297,-1,297,562,27,-1,45,599,297,-1,297,598,45,-1,29,563,298,-1,298,600,29,-1,28,599,298,-1,298,563,28,-1,45,600,298,-1,298,599,45,-1,30,564,299,-1,299,601,30,-1,29,600,299,-1,299,564,29,-1,45,601,299,-1,299,600,45,-1,75,667,300,-1,300,670,75,-1,76,668,300,-1,300,667,76,-1,77,669,300,-1,300,668,77,-1,78,670,300,-1,300,669,78,-1,79,675,301,-1,301,678,79,-1,80,676,301,-1,301,675,80,-1,81,677,301,-1,301,676,81,-1,82,678,301,-1,301,677,82,-1,83,683,302,-1,302,686,83,-1,84,684,302,-1,302,683,84,-1,85,685,302,-1,302,684,85,-1,86,686,302,-1,302,685,86,-1,87,691,303,-1,303,694,87,-1,88,692,303,-1,303,691,88,-1,89,693,303,-1,303,692,89,-1,90,694,303,-1,303,693,90,-1,91,699,304,-1,304,702,91,-1,92,700,304,-1,304,699,92,-1,93,701,304,-1,304,700,93,-1,94,702,304,-1,304,701,94,-1,95,707,305,-1,305,710,95,-1,96,708,305,-1,305,707,96,-1,97,709,305,-1,305,708,97,-1,98,710,305,-1,305,709,98,-1,99,715,306,-1,306,718,99,-1,100,716,306,-1,306,715,100,-1,101,717,306,-1,306,716,101,-1,102,718,306,-1,306,717,102,-1,32,565,307,-1,307,609,32,-1,33,610,307,-1,307,565,33,-1,104,752,307,-1,307,610,104,-1,103,609,307,-1,307,752,103,-1,33,603,308,-1,308,610,33,-1,44,611,308,-1,308,603,44,-1,105,753,308,-1,308,611,105,-1,104,610,308,-1,308,753,104,-1,44,578,309,-1,309,611,44,-1,31,612,309,-1,309,578,31,-1,106,754,309,-1,309,612,106,-1,105,611,309,-1,309,754,105,-1,31,602,310,-1,310,612,31,-1,32,609,310,-1,310,602,32,-1,103,755,310,-1,310,609,103,-1,106,612,310,-1,310,755,106,-1,38,571,311,-1,311,617,38,-1,168,618,311,-1,311,571,168,-1,108,756,311,-1,311,618,108,-1,107,617,311,-1,311,756,107,-1,168,900,312,-1,312,618,168,-1,170,619,312,-1,312,900,170,-1,109,757,312,-1,312,619,109,-1,108,618,312,-1,312,757,108,-1,170,572,313,-1,313,619,170,-1,39,620,313,-1,313,572,39,-1,110,758,313,-1,313,620,110,-1,109,619,313,-1,313,758,109,-1,39,604,314,-1,314,620,39,-1,38,617,314,-1,314,604,38,-1,107,759,314,-1,314,617,107,-1,110,620,314,-1,314,759,110,-1,39,573,315,-1,315,625,39,-1,40,626,315,-1,315,573,40,-1,112,760,315,-1,315,626,112,-1,111,625,315,-1,315,760,111,-1,40,605,316,-1,316,626,40,-1,37,627,316,-1,316,605,37,-1,113,761,316,-1,316,627,113,-1,112,626,316,-1,316,761,112,-1,37,570,317,-1,317,627,37,-1,38,628,317,-1,317,570,38,-1,114,762,317,-1,317,628,114,-1,113,627,317,-1,317,762,113,-1,38,604,318,-1,318,628,38,-1,39,625,318,-1,318,604,39,-1,111,763,318,-1,318,625,111,-1,114,628,318,-1,318,763,114,-1,40,574,319,-1,319,633,40,-1,41,634,319,-1,319,574,41,-1,116,764,319,-1,319,634,116,-1,115,633,319,-1,319,764,115,-1,41,606,320,-1,320,634,41,-1,36,635,320,-1,320,606,36,-1,117,765,320,-1,320,635,117,-1,116,634,320,-1,320,765,116,-1,36,569,321,-1,321,635,36,-1,37,636,321,-1,321,569,37,-1,118,766,321,-1,321,636,118,-1,117,635,321,-1,321,766,117,-1,37,605,322,-1,322,636,37,-1,40,633,322,-1,322,605,40,-1,115,767,322,-1,322,633,115,-1,118,636,322,-1,322,767,118,-1,41,575,323,-1,323,641,41,-1,42,642,323,-1,323,575,42,-1,120,768,323,-1,323,642,120,-1,119,641,323,-1,323,768,119,-1,42,607,324,-1,324,642,42,-1,35,643,324,-1,324,607,35,-1,121,769,324,-1,324,643,121,-1,120,642,324,-1,324,769,120,-1,35,568,325,-1,325,643,35,-1,36,644,325,-1,325,568,36,-1,122,770,325,-1,325,644,122,-1,121,643,325,-1,325,770,121,-1,36,606,326,-1,326,644,36,-1,41,641,326,-1,326,606,41,-1,119,771,326,-1,326,641,119,-1,122,644,326,-1,326,771,122,-1,42,576,327,-1,327,649,42,-1,43,650,327,-1,327,576,43,-1,124,772,327,-1,327,650,124,-1,123,649,327,-1,327,772,123,-1,43,608,328,-1,328,650,43,-1,34,651,328,-1,328,608,34,-1,125,773,328,-1,328,651,125,-1,124,650,328,-1,328,773,124,-1,34,567,329,-1,329,651,34,-1,35,652,329,-1,329,567,35,-1,126,774,329,-1,329,652,126,-1,125,651,329,-1,329,774,125,-1,35,607,330,-1,330,652,35,-1,42,649,330,-1,330,607,42,-1,123,775,330,-1,330,649,123,-1,126,652,330,-1,330,775,126,-1,43,577,331,-1,331,657,43,-1,44,658,331,-1,331,577,44,-1,128,776,331,-1,331,658,128,-1,127,657,331,-1,331,776,127,-1,44,603,332,-1,332,658,44,-1,33,659,332,-1,332,603,33,-1,129,777,332,-1,332,659,129,-1,128,658,332,-1,332,777,128,-1,33,566,333,-1,333,659,33,-1,34,660,333,-1,333,566,34,-1,130,778,333,-1,333,660,130,-1,129,659,333,-1,333,778,129,-1,34,608,334,-1,334,660,34,-1,43,657,334,-1,334,608,43,-1,127,779,334,-1,334,657,127,-1,130,660,334,-1,334,779,130,-1,45,594,335,-1,335,953,45,-1,23,666,335,-1,335,594,23,-1,131,780,335,-1,335,666,131,-1,234,953,335,-1,335,780,234,-1,46,613,336,-1,336,671,46,-1,47,672,336,-1,336,613,47,-1,76,667,336,-1,336,672,76,-1,75,671,336,-1,336,667,75,-1,47,614,337,-1,337,672,47,-1,48,673,337,-1,337,614,48,-1,77,668,337,-1,337,673,77,-1,76,672,337,-1,337,668,76,-1,48,615,338,-1,338,673,48,-1,49,674,338,-1,338,615,49,-1,78,669,338,-1,338,674,78,-1,77,673,338,-1,338,669,77,-1,49,616,339,-1,339,674,49,-1,46,671,339,-1,339,616,46,-1,75,670,339,-1,339,671,75,-1,78,674,339,-1,339,670,78,-1,50,621,340,-1,340,679,50,-1,51,680,340,-1,340,621,51,-1,80,675,340,-1,340,680,80,-1,79,679,340,-1,340,675,79,-1,51,622,341,-1,341,680,51,-1,52,681,341,-1,341,622,52,-1,81,676,341,-1,341,681,81,-1,80,680,341,-1,341,676,80,-1,52,623,342,-1,342,681,52,-1,53,682,342,-1,342,623,53,-1,82,677,342,-1,342,682,82,-1,81,681,342,-1,342,677,81,-1,53,624,343,-1,343,682,53,-1,50,679,343,-1,343,624,50,-1,79,678,343,-1,343,679,79,-1,82,682,343,-1,343,678,82,-1,54,629,344,-1,344,687,54,-1,55,688,344,-1,344,629,55,-1,84,683,344,-1,344,688,84,-1,83,687,344,-1,344,683,83,-1,55,630,345,-1,345,688,55,-1,56,689,345,-1,345,630,56,-1,85,684,345,-1,345,689,85,-1,84,688,345,-1,345,684,84,-1,56,631,346,-1,346,689,56,-1,57,690,346,-1,346,631,57,-1,86,685,346,-1,346,690,86,-1,85,689,346,-1,346,685,85,-1,57,632,347,-1,347,690,57,-1,54,687,347,-1,347,632,54,-1,83,686,347,-1,347,687,83,-1,86,690,347,-1,347,686,86,-1,58,637,348,-1,348,695,58,-1,59,696,348,-1,348,637,59,-1,88,691,348,-1,348,696,88,-1,87,695,348,-1,348,691,87,-1,59,638,349,-1,349,696,59,-1,60,697,349,-1,349,638,60,-1,89,692,349,-1,349,697,89,-1,88,696,349,-1,349,692,88,-1,60,639,350,-1,350,697,60,-1,61,698,350,-1,350,639,61,-1,90,693,350,-1,350,698,90,-1,89,697,350,-1,350,693,89,-1,61,640,351,-1,351,698,61,-1,58,695,351,-1,351,640,58,-1,87,694,351,-1,351,695,87,-1,90,698,351,-1,351,694,90,-1,62,645,352,-1,352,703,62,-1,63,704,352,-1,352,645,63,-1,92,699,352,-1,352,704,92,-1,91,703,352,-1,352,699,91,-1,63,646,353,-1,353,704,63,-1,64,705,353,-1,353,646,64,-1,93,700,353,-1,353,705,93,-1,92,704,353,-1,353,700,92,-1,64,647,354,-1,354,705,64,-1,65,706,354,-1,354,647,65,-1,94,701,354,-1,354,706,94,-1,93,705,354,-1,354,701,93,-1,65,648,355,-1,355,706,65,-1,62,703,355,-1,355,648,62,-1,91,702,355,-1,355,703,91,-1,94,706,355,-1,355,702,94,-1,66,653,356,-1,356,711,66,-1,67,712,356,-1,356,653,67,-1,96,707,356,-1,356,712,96,-1,95,711,356,-1,356,707,95,-1,67,654,357,-1,357,712,67,-1,68,713,357,-1,357,654,68,-1,97,708,357,-1,357,713,97,-1,96,712,357,-1,357,708,96,-1,68,655,358,-1,358,713,68,-1,69,714,358,-1,358,655,69,-1,98,709,358,-1,358,714,98,-1,97,713,358,-1,358,709,97,-1,69,656,359,-1,359,714,69,-1,66,711,359,-1,359,656,66,-1,95,710,359,-1,359,711,95,-1,98,714,359,-1,359,710,98,-1,70,661,360,-1,360,719,70,-1,71,720,360,-1,360,661,71,-1,100,715,360,-1,360,720,100,-1,99,719,360,-1,360,715,99,-1,71,662,361,-1,361,720,71,-1,72,721,361,-1,361,662,72,-1,101,716,361,-1,361,721,101,-1,100,720,361,-1,361,716,100,-1,72,663,362,-1,362,721,72,-1,73,722,362,-1,362,663,73,-1,102,717,362,-1,362,722,102,-1,101,721,362,-1,362,717,101,-1,73,664,363,-1,363,722,73,-1,70,719,363,-1,363,664,70,-1,99,718,363,-1,363,719,99,-1,102,722,363,-1,363,718,102,-1,104,724,364,-1,364,752,104,-1,47,613,364,-1,364,724,47,-1,46,723,364,-1,364,613,46,-1,103,752,364,-1,364,723,103,-1,105,725,365,-1,365,753,105,-1,48,614,365,-1,365,725,48,-1,47,724,365,-1,365,614,47,-1,104,753,365,-1,365,724,104,-1,106,726,366,-1,366,754,106,-1,49,615,366,-1,366,726,49,-1,48,725,366,-1,366,615,48,-1,105,754,366,-1,366,725,105,-1,103,723,367,-1,367,755,103,-1,46,616,367,-1,367,723,46,-1,49,726,367,-1,367,616,49,-1,106,755,367,-1,367,726,106,-1,108,728,368,-1,368,756,108,-1,51,621,368,-1,368,728,51,-1,50,727,368,-1,368,621,50,-1,107,756,368,-1,368,727,107,-1,109,729,369,-1,369,757,109,-1,52,622,369,-1,369,729,52,-1,51,728,369,-1,369,622,51,-1,108,757,369,-1,369,728,108,-1,110,730,370,-1,370,758,110,-1,53,623,370,-1,370,730,53,-1,52,729,370,-1,370,623,52,-1,109,758,370,-1,370,729,109,-1,107,727,371,-1,371,759,107,-1,50,624,371,-1,371,727,50,-1,53,730,371,-1,371,624,53,-1,110,759,371,-1,371,730,110,-1,112,732,372,-1,372,760,112,-1,55,629,372,-1,372,732,55,-1,54,731,372,-1,372,629,54,-1,111,760,372,-1,372,731,111,-1,113,733,373,-1,373,761,113,-1,56,630,373,-1,373,733,56,-1,55,732,373,-1,373,630,55,-1,112,761,373,-1,373,732,112,-1,114,734,374,-1,374,762,114,-1,57,631,374,-1,374,734,57,-1,56,733,374,-1,374,631,56,-1,113,762,374,-1,374,733,113,-1,111,731,375,-1,375,763,111,-1,54,632,375,-1,375,731,54,-1,57,734,375,-1,375,632,57,-1,114,763,375,-1,375,734,114,-1,116,736,376,-1,376,764,116,-1,59,637,376,-1,376,736,59,-1,58,735,376,-1,376,637,58,-1,115,764,376,-1,376,735,115,-1,117,737,377,-1,377,765,117,-1,60,638,377,-1,377,737,60,-1,59,736,377,-1,377,638,59,-1,116,765,377,-1,377,736,116,-1,118,738,378,-1,378,766,118,-1,61,639,378,-1,378,738,61,-1,60,737,378,-1,378,639,60,-1,117,766,378,-1,378,737,117,-1,115,735,379,-1,379,767,115,-1,58,640,379,-1,379,735,58,-1,61,738,379,-1,379,640,61,-1,118,767,379,-1,379,738,118,-1,120,740,380,-1,380,768,120,-1,63,645,380,-1,380,740,63,-1,62,739,380,-1,380,645,62,-1,119,768,380,-1,380,739,119,-1,121,741,381,-1,381,769,121,-1,64,646,381,-1,381,741,64,-1,63,740,381,-1,381,646,63,-1,120,769,381,-1,381,740,120,-1,122,742,382,-1,382,770,122,-1,65,647,382,-1,382,742,65,-1,64,741,382,-1,382,647,64,-1,121,770,382,-1,382,741,121,-1,119,739,383,-1,383,771,119,-1,62,648,383,-1,383,739,62,-1,65,742,383,-1,383,648,65,-1,122,771,383,-1,383,742,122,-1,124,744,384,-1,384,772,124,-1,67,653,384,-1,384,744,67,-1,66,743,384,-1,384,653,66,-1,123,772,384,-1,384,743,123,-1,125,745,385,-1,385,773,125,-1,68,654,385,-1,385,745,68,-1,67,744,385,-1,385,654,67,-1,124,773,385,-1,385,744,124,-1,126,746,386,-1,386,774,126,-1,69,655,386,-1,386,746,69,-1,68,745,386,-1,386,655,68,-1,125,774,386,-1,386,745,125,-1,123,743,387,-1,387,775,123,-1,66,656,387,-1,387,743,66,-1,69,746,387,-1,387,656,69,-1,126,775,387,-1,387,746,126,-1,128,748,388,-1,388,776,128,-1,71,661,388,-1,388,748,71,-1,70,747,388,-1,388,661,70,-1,127,776,388,-1,388,747,127,-1,129,749,389,-1,389,777,129,-1,72,662,389,-1,389,749,72,-1,71,748,389,-1,389,662,71,-1,128,777,389,-1,389,748,128,-1,130,750,390,-1,390,778,130,-1,73,663,390,-1,390,750,73,-1,72,749,390,-1,390,663,72,-1,129,778,390,-1,390,749,129,-1,127,747,391,-1,391,779,127,-1,70,664,391,-1,391,747,70,-1,73,750,391,-1,391,664,73,-1,130,779,391,-1,391,750,130,-1,131,751,392,-1,392,780,131,-1,74,665,392,-1,392,751,74,-1,264,1040,392,-1,392,665,264,-1,234,780,392,-1,392,1040,234,-1,132,784,393,-1,393,781,132,-1,135,783,393,-1,393,784,135,-1,134,782,393,-1,393,783,134,-1,133,781,393,-1,393,782,133,-1,136,788,394,-1,394,785,136,-1,139,787,394,-1,394,788,139,-1,138,786,394,-1,394,787,138,-1,137,785,394,-1,394,786,137,-1,135,791,395,-1,395,783,135,-1,141,790,395,-1,395,791,141,-1,140,789,395,-1,395,790,140,-1,134,783,395,-1,395,789,134,-1,139,794,396,-1,396,787,139,-1,143,793,396,-1,396,794,143,-1,142,792,396,-1,396,793,142,-1,138,787,396,-1,396,792,138,-1,141,797,397,-1,397,790,141,-1,145,796,397,-1,397,797,145,-1,144,795,397,-1,397,796,144,-1,140,790,397,-1,397,795,140,-1,143,800,398,-1,398,793,143,-1,147,799,398,-1,398,800,147,-1,146,798,398,-1,398,799,146,-1,142,793,398,-1,398,798,142,-1,145,803,399,-1,399,796,145,-1,149,802,399,-1,399,803,149,-1,148,801,399,-1,399,802,148,-1,144,796,399,-1,399,801,144,-1,147,806,400,-1,400,799,147,-1,151,805,400,-1,400,806,151,-1,150,804,400,-1,400,805,150,-1,146,799,400,-1,400,804,146,-1,149,809,401,-1,401,802,149,-1,153,808,401,-1,401,809,153,-1,152,807,401,-1,401,808,152,-1,148,802,401,-1,401,807,148,-1,151,812,402,-1,402,805,151,-1,155,811,402,-1,402,812,155,-1,154,810,402,-1,402,811,154,-1,150,805,402,-1,402,810,150,-1,153,815,403,-1,403,808,153,-1,157,814,403,-1,403,815,157,-1,156,813,403,-1,403,814,156,-1,152,808,403,-1,403,813,152,-1,155,818,404,-1,404,811,155,-1,159,817,404,-1,404,818,159,-1,158,816,404,-1,404,817,158,-1,154,811,404,-1,404,816,154,-1,157,820,405,-1,405,814,157,-1,160,547,405,-1,405,820,160,-1,21,819,405,-1,405,547,21,-1,156,814,405,-1,405,819,156,-1,159,822,406,-1,406,817,159,-1,22,557,406,-1,406,822,22,-1,30,821,406,-1,406,557,30,-1,158,817,406,-1,406,821,158,-1,136,825,407,-1,407,788,136,-1,162,824,407,-1,407,825,162,-1,161,823,407,-1,407,824,161,-1,139,788,407,-1,407,823,139,-1,139,823,408,-1,408,794,139,-1,161,827,408,-1,408,823,161,-1,163,826,408,-1,408,827,163,-1,143,794,408,-1,408,826,143,-1,143,826,409,-1,409,800,143,-1,163,829,409,-1,409,826,163,-1,164,828,409,-1,409,829,164,-1,147,800,409,-1,409,828,147,-1,147,828,410,-1,410,806,147,-1,164,831,410,-1,410,828,164,-1,165,830,410,-1,410,831,165,-1,151,806,410,-1,410,830,151,-1,151,830,411,-1,411,812,151,-1,165,833,411,-1,411,830,165,-1,166,832,411,-1,411,833,166,-1,155,812,411,-1,411,832,155,-1,155,832,412,-1,412,818,155,-1,166,835,412,-1,412,832,166,-1,167,834,412,-1,412,835,167,-1,159,818,412,-1,412,834,159,-1,159,834,413,-1,413,822,159,-1,167,836,413,-1,413,834,167,-1,168,587,413,-1,413,836,168,-1,22,822,413,-1,413,587,22,-1,21,839,414,-1,414,819,21,-1,170,838,414,-1,414,839,170,-1,169,837,414,-1,414,838,169,-1,156,819,414,-1,414,837,156,-1,156,837,415,-1,415,813,156,-1,169,841,415,-1,415,837,169,-1,171,840,415,-1,415,841,171,-1,152,813,415,-1,415,840,152,-1,152,840,416,-1,416,807,152,-1,171,843,416,-1,416,840,171,-1,172,842,416,-1,416,843,172,-1,148,807,416,-1,416,842,148,-1,148,842,417,-1,417,801,148,-1,172,845,417,-1,417,842,172,-1,173,844,417,-1,417,845,173,-1,144,801,417,-1,417,844,144,-1,144,844,418,-1,418,795,144,-1,173,847,418,-1,418,844,173,-1,174,846,418,-1,418,847,174,-1,140,795,418,-1,418,846,140,-1,140,846,419,-1,419,789,140,-1,174,849,419,-1,419,846,174,-1,175,848,419,-1,419,849,175,-1,134,789,419,-1,419,848,134,-1,134,848,420,-1,420,782,134,-1,175,851,420,-1,420,848,175,-1,176,850,420,-1,420,851,176,-1,133,782,420,-1,420,850,133,-1,138,853,421,-1,421,786,138,-1,45,852,421,-1,421,853,45,-1,137,786,421,-1,421,852,137,-1,142,854,422,-1,422,792,142,-1,45,853,422,-1,422,854,45,-1,138,792,422,-1,422,853,138,-1,146,855,423,-1,423,798,146,-1,45,854,423,-1,423,855,45,-1,142,798,423,-1,423,854,142,-1,150,856,424,-1,424,804,150,-1,45,855,424,-1,424,856,45,-1,146,804,424,-1,424,855,146,-1,154,857,425,-1,425,810,154,-1,45,856,425,-1,425,857,45,-1,150,810,425,-1,425,856,150,-1,158,858,426,-1,426,816,158,-1,45,857,426,-1,426,858,45,-1,154,816,426,-1,426,857,154,-1,30,601,427,-1,427,821,30,-1,45,858,427,-1,427,601,45,-1,158,821,427,-1,427,858,158,-1,177,862,428,-1,428,859,177,-1,180,861,428,-1,428,862,180,-1,179,860,428,-1,428,861,179,-1,178,859,428,-1,428,860,178,-1,181,866,429,-1,429,863,181,-1,184,865,429,-1,429,866,184,-1,183,864,429,-1,429,865,183,-1,182,863,429,-1,429,864,182,-1,185,870,430,-1,430,867,185,-1,188,869,430,-1,430,870,188,-1,187,868,430,-1,430,869,187,-1,186,867,430,-1,430,868,186,-1,189,874,431,-1,431,871,189,-1,192,873,431,-1,431,874,192,-1,191,872,431,-1,431,873,191,-1,190,871,431,-1,431,872,190,-1,193,878,432,-1,432,875,193,-1,196,877,432,-1,432,878,196,-1,195,876,432,-1,432,877,195,-1,194,875,432,-1,432,876,194,-1,197,882,433,-1,433,879,197,-1,200,881,433,-1,433,882,200,-1,199,880,433,-1,433,881,199,-1,198,879,433,-1,433,880,198,-1,201,886,434,-1,434,883,201,-1,204,885,434,-1,434,886,204,-1,203,884,434,-1,434,885,203,-1,202,883,434,-1,434,884,202,-1,162,889,435,-1,435,824,162,-1,206,888,435,-1,435,889,206,-1,205,887,435,-1,435,888,205,-1,161,824,435,-1,435,887,161,-1,161,887,436,-1,436,890,161,-1,205,892,436,-1,436,887,205,-1,207,891,436,-1,436,892,207,-1,175,890,436,-1,436,891,175,-1,175,891,437,-1,437,851,175,-1,207,894,437,-1,437,891,207,-1,208,893,437,-1,437,894,208,-1,176,851,437,-1,437,893,176,-1,176,893,438,-1,438,895,176,-1,208,896,438,-1,438,893,208,-1,206,889,438,-1,438,896,206,-1,162,895,438,-1,438,889,162,-1,167,899,439,-1,439,836,167,-1,210,898,439,-1,439,899,210,-1,209,897,439,-1,439,898,209,-1,168,836,439,-1,439,897,168,-1,168,897,440,-1,440,900,168,-1,209,902,440,-1,440,897,209,-1,211,901,440,-1,440,902,211,-1,170,900,440,-1,440,901,170,-1,170,901,441,-1,441,838,170,-1,211,904,441,-1,441,901,211,-1,212,903,441,-1,441,904,212,-1,169,838,441,-1,441,903,169,-1,169,903,442,-1,442,905,169,-1,212,906,442,-1,442,903,212,-1,210,899,442,-1,442,906,210,-1,167,905,442,-1,442,899,167,-1,169,909,443,-1,443,841,169,-1,214,908,443,-1,443,909,214,-1,213,907,443,-1,443,908,213,-1,171,841,443,-1,443,907,171,-1,171,907,444,-1,444,910,171,-1,213,912,444,-1,444,907,213,-1,215,911,444,-1,444,912,215,-1,166,910,444,-1,444,911,166,-1,166,911,445,-1,445,835,166,-1,215,914,445,-1,445,911,215,-1,216,913,445,-1,445,914,216,-1,167,835,445,-1,445,913,167,-1,167,913,446,-1,446,905,167,-1,216,915,446,-1,446,913,216,-1,214,909,446,-1,446,915,214,-1,169,905,446,-1,446,909,169,-1,171,918,447,-1,447,843,171,-1,218,917,447,-1,447,918,218,-1,217,916,447,-1,447,917,217,-1,172,843,447,-1,447,916,172,-1,172,916,448,-1,448,919,172,-1,217,921,448,-1,448,916,217,-1,219,920,448,-1,448,921,219,-1,165,919,448,-1,448,920,165,-1,165,920,449,-1,449,833,165,-1,219,923,449,-1,449,920,219,-1,220,922,449,-1,449,923,220,-1,166,833,449,-1,449,922,166,-1,166,922,450,-1,450,910,166,-1,220,924,450,-1,450,922,220,-1,218,918,450,-1,450,924,218,-1,171,910,450,-1,450,918,171,-1,172,927,451,-1,451,845,172,-1,222,926,451,-1,451,927,222,-1,221,925,451,-1,451,926,221,-1,173,845,451,-1,451,925,173,-1,173,925,452,-1,452,928,173,-1,221,930,452,-1,452,925,221,-1,223,929,452,-1,452,930,223,-1,164,928,452,-1,452,929,164,-1,164,929,453,-1,453,831,164,-1,223,932,453,-1,453,929,223,-1,224,931,453,-1,453,932,224,-1,165,831,453,-1,453,931,165,-1,165,931,454,-1,454,919,165,-1,224,933,454,-1,454,931,224,-1,222,927,454,-1,454,933,222,-1,172,919,454,-1,454,927,172,-1,173,936,455,-1,455,847,173,-1,226,935,455,-1,455,936,226,-1,225,934,455,-1,455,935,225,-1,174,847,455,-1,455,934,174,-1,174,934,456,-1,456,937,174,-1,225,939,456,-1,456,934,225,-1,227,938,456,-1,456,939,227,-1,163,937,456,-1,456,938,163,-1,163,938,457,-1,457,829,163,-1,227,941,457,-1,457,938,227,-1,228,940,457,-1,457,941,228,-1,164,829,457,-1,457,940,164,-1,164,940,458,-1,458,928,164,-1,228,942,458,-1,458,940,228,-1,226,936,458,-1,458,942,226,-1,173,928,458,-1,458,936,173,-1,174,945,459,-1,459,849,174,-1,230,944,459,-1,459,945,230,-1,229,943,459,-1,459,944,229,-1,175,849,459,-1,459,943,175,-1,175,943,460,-1,460,890,175,-1,229,947,460,-1,460,943,229,-1,231,946,460,-1,460,947,231,-1,161,890,460,-1,460,946,161,-1,161,946,461,-1,461,827,161,-1,231,949,461,-1,461,946,231,-1,232,948,461,-1,461,949,232,-1,163,827,461,-1,461,948,163,-1,163,948,462,-1,462,937,163,-1,232,950,462,-1,462,948,232,-1,230,945,462,-1,462,950,230,-1,174,937,462,-1,462,945,174,-1,45,953,463,-1,463,852,45,-1,234,952,463,-1,463,953,234,-1,233,951,463,-1,463,952,233,-1,137,852,463,-1,463,951,137,-1,235,956,464,-1,464,954,235,-1,177,859,464,-1,464,956,177,-1,178,955,464,-1,464,859,178,-1,236,954,464,-1,464,955,236,-1,236,955,465,-1,465,957,236,-1,178,860,465,-1,465,955,178,-1,179,958,465,-1,465,860,179,-1,237,957,465,-1,465,958,237,-1,237,958,466,-1,466,959,237,-1,179,861,466,-1,466,958,179,-1,180,960,466,-1,466,861,180,-1,238,959,466,-1,466,960,238,-1,238,960,467,-1,467,961,238,-1,180,862,467,-1,467,960,180,-1,177,956,467,-1,467,862,177,-1,235,961,467,-1,467,956,235,-1,239,964,468,-1,468,962,239,-1,181,863,468,-1,468,964,181,-1,182,963,468,-1,468,863,182,-1,240,962,468,-1,468,963,240,-1,240,963,469,-1,469,965,240,-1,182,864,469,-1,469,963,182,-1,183,966,469,-1,469,864,183,-1,241,965,469,-1,469,966,241,-1,241,966,470,-1,470,967,241,-1,183,865,470,-1,470,966,183,-1,184,968,470,-1,470,865,184,-1,242,967,470,-1,470,968,242,-1,242,968,471,-1,471,969,242,-1,184,866,471,-1,471,968,184,-1,181,964,471,-1,471,866,181,-1,239,969,471,-1,471,964,239,-1,243,972,472,-1,472,970,243,-1,185,867,472,-1,472,972,185,-1,186,971,472,-1,472,867,186,-1,244,970,472,-1,472,971,244,-1,244,971,473,-1,473,973,244,-1,186,868,473,-1,473,971,186,-1,187,974,473,-1,473,868,187,-1,245,973,473,-1,473,974,245,-1,245,974,474,-1,474,975,245,-1,187,869,474,-1,474,974,187,-1,188,976,474,-1,474,869,188,-1,246,975,474,-1,474,976,246,-1,246,976,475,-1,475,977,246,-1,188,870,475,-1,475,976,188,-1,185,972,475,-1,475,870,185,-1,243,977,475,-1,475,972,243,-1,247,980,476,-1,476,978,247,-1,189,871,476,-1,476,980,189,-1,190,979,476,-1,476,871,190,-1,248,978,476,-1,476,979,248,-1,248,979,477,-1,477,981,248,-1,190,872,477,-1,477,979,190,-1,191,982,477,-1,477,872,191,-1,249,981,477,-1,477,982,249,-1,249,982,478,-1,478,983,249,-1,191,873,478,-1,478,982,191,-1,192,984,478,-1,478,873,192,-1,250,983,478,-1,478,984,250,-1,250,984,479,-1,479,985,250,-1,192,874,479,-1,479,984,192,-1,189,980,479,-1,479,874,189,-1,247,985,479,-1,479,980,247,-1,251,988,480,-1,480,986,251,-1,193,875,480,-1,480,988,193,-1,194,987,480,-1,480,875,194,-1,252,986,480,-1,480,987,252,-1,252,987,481,-1,481,989,252,-1,194,876,481,-1,481,987,194,-1,195,990,481,-1,481,876,195,-1,253,989,481,-1,481,990,253,-1,253,990,482,-1,482,991,253,-1,195,877,482,-1,482,990,195,-1,196,992,482,-1,482,877,196,-1,254,991,482,-1,482,992,254,-1,254,992,483,-1,483,993,254,-1,196,878,483,-1,483,992,196,-1,193,988,483,-1,483,878,193,-1,251,993,483,-1,483,988,251,-1,255,996,484,-1,484,994,255,-1,197,879,484,-1,484,996,197,-1,198,995,484,-1,484,879,198,-1,256,994,484,-1,484,995,256,-1,256,995,485,-1,485,997,256,-1,198,880,485,-1,485,995,198,-1,199,998,485,-1,485,880,199,-1,257,997,485,-1,485,998,257,-1,257,998,486,-1,486,999,257,-1,199,881,486,-1,486,998,199,-1,200,1000,486,-1,486,881,200,-1,258,999,486,-1,486,1000,258,-1,258,1000,487,-1,487,1001,258,-1,200,882,487,-1,487,1000,200,-1,197,996,487,-1,487,882,197,-1,255,1001,487,-1,487,996,255,-1,259,1004,488,-1,488,1002,259,-1,201,883,488,-1,488,1004,201,-1,202,1003,488,-1,488,883,202,-1,260,1002,488,-1,488,1003,260,-1,260,1003,489,-1,489,1005,260,-1,202,884,489,-1,489,1003,202,-1,203,1006,489,-1,489,884,203,-1,261,1005,489,-1,489,1006,261,-1,261,1006,490,-1,490,1007,261,-1,203,885,490,-1,490,1006,203,-1,204,1008,490,-1,490,885,204,-1,262,1007,490,-1,490,1008,262,-1,262,1008,491,-1,491,1009,262,-1,204,886,491,-1,491,1008,204,-1,201,1004,491,-1,491,886,201,-1,259,1009,491,-1,491,1004,259,-1,205,888,492,-1,492,1010,205,-1,206,1011,492,-1,492,888,206,-1,235,954,492,-1,492,1011,235,-1,236,1010,492,-1,492,954,236,-1,207,892,493,-1,493,1012,207,-1,205,1010,493,-1,493,892,205,-1,236,957,493,-1,493,1010,236,-1,237,1012,493,-1,493,957,237,-1,208,894,494,-1,494,1013,208,-1,207,1012,494,-1,494,894,207,-1,237,959,494,-1,494,1012,237,-1,238,1013,494,-1,494,959,238,-1,206,896,495,-1,495,1011,206,-1,208,1013,495,-1,495,896,208,-1,238,961,495,-1,495,1013,238,-1,235,1011,495,-1,495,961,235,-1,209,898,496,-1,496,1014,209,-1,210,1015,496,-1,496,898,210,-1,239,962,496,-1,496,1015,239,-1,240,1014,496,-1,496,962,240,-1,211,902,497,-1,497,1016,211,-1,209,1014,497,-1,497,902,209,-1,240,965,497,-1,497,1014,240,-1,241,1016,497,-1,497,965,241,-1,212,904,498,-1,498,1017,212,-1,211,1016,498,-1,498,904,211,-1,241,967,498,-1,498,1016,241,-1,242,1017,498,-1,498,967,242,-1,210,906,499,-1,499,1015,210,-1,212,1017,499,-1,499,906,212,-1,242,969,499,-1,499,1017,242,-1,239,1015,499,-1,499,969,239,-1,213,908,500,-1,500,1018,213,-1,214,1019,500,-1,500,908,214,-1,243,970,500,-1,500,1019,243,-1,244,1018,500,-1,500,970,244,-1,215,912,501,-1,501,1020,215,-1,213,1018,501,-1,501,912,213,-1,244,973,501,-1,501,1018,244,-1,245,1020,501,-1,501,973,245,-1,216,914,502,-1,502,1021,216,-1,215,1020,502,-1,502,914,215,-1,245,975,502,-1,502,1020,245,-1,246,1021,502,-1,502,975,246,-1,214,915,503,-1,503,1019,214,-1,216,1021,503,-1,503,915,216,-1,246,977,503,-1,503,1021,246,-1,243,1019,503,-1,503,977,243,-1,217,917,504,-1,504,1022,217,-1,218,1023,504,-1,504,917,218,-1,247,978,504,-1,504,1023,247,-1,248,1022,504,-1,504,978,248,-1,219,921,505,-1,505,1024,219,-1,217,1022,505,-1,505,921,217,-1,248,981,505,-1,505,1022,248,-1,249,1024,505,-1,505,981,249,-1,220,923,506,-1,506,1025,220,-1,219,1024,506,-1,506,923,219,-1,249,983,506,-1,506,1024,249,-1,250,1025,506,-1,506,983,250,-1,218,924,507,-1,507,1023,218,-1,220,1025,507,-1,507,924,220,-1,250,985,507,-1,507,1025,250,-1,247,1023,507,-1,507,985,247,-1,221,926,508,-1,508,1026,221,-1,222,1027,508,-1,508,926,222,-1,251,986,508,-1,508,1027,251,-1,252,1026,508,-1,508,986,252,-1,223,930,509,-1,509,1028,223,-1,221,1026,509,-1,509,930,221,-1,252,989,509,-1,509,1026,252,-1,253,1028,509,-1,509,989,253,-1,224,932,510,-1,510,1029,224,-1,223,1028,510,-1,510,932,223,-1,253,991,510,-1,510,1028,253,-1,254,1029,510,-1,510,991,254,-1,222,933,511,-1,511,1027,222,-1,224,1029,511,-1,511,933,224,-1,254,993,511,-1,511,1029,254,-1,251,1027,511,-1,511,993,251,-1,225,935,512,-1,512,1030,225,-1,226,1031,512,-1,512,935,226,-1,255,994,512,-1,512,1031,255,-1,256,1030,512,-1,512,994,256,-1,227,939,513,-1,513,1032,227,-1,225,1030,513,-1,513,939,225,-1,256,997,513,-1,513,1030,256,-1,257,1032,513,-1,513,997,257,-1,228,941,514,-1,514,1033,228,-1,227,1032,514,-1,514,941,227,-1,257,999,514,-1,514,1032,257,-1,258,1033,514,-1,514,999,258,-1,226,942,515,-1,515,1031,226,-1,228,1033,515,-1,515,942,228,-1,258,1001,515,-1,515,1033,258,-1,255,1031,515,-1,515,1001,255,-1,229,944,516,-1,516,1034,229,-1,230,1035,516,-1,516,944,230,-1,259,1002,516,-1,516,1035,259,-1,260,1034,516,-1,516,1002,260,-1,231,947,517,-1,517,1036,231,-1,229,1034,517,-1,517,947,229,-1,260,1005,517,-1,517,1034,260,-1,261,1036,517,-1,517,1005,261,-1,232,949,518,-1,518,1037,232,-1,231,1036,518,-1,518,949,231,-1,261,1007,518,-1,518,1036,261,-1,262,1037,518,-1,518,1007,262,-1,230,950,519,-1,519,1035,230,-1,232,1037,519,-1,519,950,232,-1,262,1009,519,-1,519,1037,262,-1,259,1035,519,-1,519,1009,259,-1,233,952,520,-1,520,1038,233,-1,234,1040,520,-1,520,952,234,-1,264,1039,520,-1,520,1040,264,-1,263,1038,520,-1,520,1039,263,-1]
IndexedFaceSet734.creaseAngle = 3.14159
IndexedFaceSet734.solid = False
IndexedFaceSet734.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,5,2,-1,2,3,4,-1,6,7,2,-1,2,5,6,-1,8,1,2,-1,2,7,8,-1,9,12,11,-1,11,10,9,-1,13,14,11,-1,11,12,13,-1,15,16,11,-1,11,14,15,-1,17,10,11,-1,11,16,17,-1,8,7,19,-1,19,18,8,-1,6,20,19,-1,19,7,6,-1,21,22,19,-1,19,20,21,-1,23,18,19,-1,19,22,23,-1,17,16,25,-1,25,24,17,-1,15,26,25,-1,25,16,15,-1,27,28,25,-1,25,26,27,-1,29,24,25,-1,25,28,29,-1,23,22,31,-1,31,30,23,-1,21,32,31,-1,31,22,21,-1,33,34,31,-1,31,32,33,-1,35,30,31,-1,31,34,35,-1,29,28,37,-1,37,36,29,-1,27,38,37,-1,37,28,27,-1,39,40,37,-1,37,38,39,-1,41,36,37,-1,37,40,41,-1,35,34,43,-1,43,42,35,-1,33,44,43,-1,43,34,33,-1,45,46,43,-1,43,44,45,-1,47,42,43,-1,43,46,47,-1,41,40,87,-1,87,48,41,-1,39,88,87,-1,87,40,39,-1,145,146,87,-1,87,88,145,-1,147,48,87,-1,87,146,147,-1,47,46,149,-1,149,148,47,-1,45,150,149,-1,149,46,45,-1,151,152,149,-1,149,150,151,-1,153,148,149,-1,149,152,153,-1,147,146,155,-1,155,154,147,-1,145,156,155,-1,155,146,145,-1,157,158,155,-1,155,156,157,-1,159,154,155,-1,155,158,159,-1,153,152,161,-1,161,160,153,-1,151,162,161,-1,161,152,151,-1,163,164,161,-1,161,162,163,-1,165,160,161,-1,161,164,165,-1,159,158,167,-1,167,166,159,-1,157,168,167,-1,167,158,157,-1,169,170,167,-1,167,168,169,-1,171,166,167,-1,167,170,171,-1,165,164,173,-1,173,172,165,-1,163,174,173,-1,173,164,163,-1,175,176,173,-1,173,174,175,-1,177,172,173,-1,173,176,177,-1,171,170,179,-1,179,178,171,-1,169,180,179,-1,179,170,169,-1,181,182,179,-1,179,180,181,-1,183,178,179,-1,179,182,183,-1,9,10,185,-1,185,184,9,-1,17,186,185,-1,185,10,17,-1,187,188,185,-1,185,186,187,-1,189,184,185,-1,185,188,189,-1,17,24,190,-1,190,186,17,-1,29,191,190,-1,190,24,29,-1,192,193,190,-1,190,191,192,-1,187,186,190,-1,190,193,187,-1,29,36,194,-1,194,191,29,-1,41,195,194,-1,194,36,41,-1,262,263,194,-1,194,195,262,-1,192,191,194,-1,194,263,192,-1,41,48,292,-1,292,195,41,-1,147,293,292,-1,292,48,147,-1,294,295,292,-1,292,293,294,-1,262,195,292,-1,292,295,262,-1,147,154,296,-1,296,293,147,-1,159,297,296,-1,296,154,159,-1,298,299,296,-1,296,297,298,-1,294,293,296,-1,296,299,294,-1,159,166,300,-1,300,297,159,-1,171,301,300,-1,300,166,171,-1,302,303,300,-1,300,301,302,-1,298,297,300,-1,300,303,298,-1,171,178,304,-1,304,301,171,-1,183,305,304,-1,304,178,183,-1,306,307,304,-1,304,305,306,-1,302,301,304,-1,304,307,302,-1,175,174,309,-1,309,308,175,-1,163,310,309,-1,309,174,163,-1,311,312,309,-1,309,310,311,-1,313,308,309,-1,309,312,313,-1,163,162,314,-1,314,310,163,-1,151,315,314,-1,314,162,151,-1,316,317,314,-1,314,315,316,-1,311,310,314,-1,314,317,311,-1,151,150,318,-1,318,315,151,-1,45,319,318,-1,318,150,45,-1,320,321,318,-1,318,319,320,-1,316,315,318,-1,318,321,316,-1,45,44,322,-1,322,319,45,-1,33,323,322,-1,322,44,33,-1,324,325,322,-1,322,323,324,-1,320,319,322,-1,322,325,320,-1,33,32,326,-1,326,323,33,-1,21,327,326,-1,326,32,21,-1,328,364,326,-1,326,327,328,-1,324,323,326,-1,326,364,324,-1,21,20,421,-1,421,327,21,-1,6,422,421,-1,421,20,6,-1,423,424,421,-1,421,422,423,-1,328,327,421,-1,421,424,328,-1,6,5,425,-1,425,422,6,-1,4,426,425,-1,425,5,4,-1,427,428,425,-1,425,426,427,-1,423,422,425,-1,425,428,423,-1,15,14,430,-1,430,429,15,-1,13,431,430,-1,430,14,13,-1,432,429,430,-1,430,431,432,-1,27,26,434,-1,434,433,27,-1,15,429,434,-1,434,26,15,-1,432,433,434,-1,434,429,432,-1,39,38,436,-1,436,435,39,-1,27,433,436,-1,436,38,27,-1,432,435,436,-1,436,433,432,-1,145,88,438,-1,438,437,145,-1,39,435,438,-1,438,88,39,-1,432,437,438,-1,438,435,432,-1,157,156,440,-1,440,439,157,-1,145,437,440,-1,440,156,145,-1,432,439,440,-1,440,437,432,-1,169,168,442,-1,442,441,169,-1,157,439,442,-1,442,168,157,-1,432,441,442,-1,442,439,432,-1,181,180,444,-1,444,443,181,-1,169,441,444,-1,444,180,169,-1,432,443,444,-1,444,441,432,-1,49,52,51,-1,51,50,49,-1,53,54,51,-1,51,52,53,-1,55,56,51,-1,51,54,55,-1,57,50,51,-1,51,56,57,-1,58,61,60,-1,60,59,58,-1,62,63,60,-1,60,61,62,-1,64,65,60,-1,60,63,64,-1,66,59,60,-1,60,65,66,-1,67,70,69,-1,69,68,67,-1,71,72,69,-1,69,70,71,-1,73,74,69,-1,69,72,73,-1,75,68,69,-1,69,74,75,-1,76,79,78,-1,78,77,76,-1,80,81,78,-1,78,79,80,-1,82,83,78,-1,78,81,82,-1,84,77,78,-1,78,83,84,-1,85,90,89,-1,89,86,85,-1,91,92,89,-1,89,90,91,-1,93,94,89,-1,89,92,93,-1,95,86,89,-1,89,94,95,-1,96,99,98,-1,98,97,96,-1,100,101,98,-1,98,99,100,-1,102,103,98,-1,98,101,102,-1,104,97,98,-1,98,103,104,-1,105,108,107,-1,107,106,105,-1,109,110,107,-1,107,108,109,-1,111,112,107,-1,107,110,111,-1,113,106,107,-1,107,112,113,-1,114,117,116,-1,116,115,114,-1,118,119,116,-1,116,117,118,-1,120,121,116,-1,116,119,120,-1,122,115,116,-1,116,121,122,-1,118,124,123,-1,123,119,118,-1,125,126,123,-1,123,124,125,-1,127,128,123,-1,123,126,127,-1,120,119,123,-1,123,128,120,-1,125,130,129,-1,129,126,125,-1,131,132,129,-1,129,130,131,-1,133,134,129,-1,129,132,133,-1,127,126,129,-1,129,134,127,-1,131,136,135,-1,135,132,131,-1,114,115,135,-1,135,136,114,-1,122,137,135,-1,135,115,122,-1,133,132,135,-1,135,137,133,-1,138,141,140,-1,140,139,138,-1,142,143,140,-1,140,141,142,-1,144,196,140,-1,140,143,144,-1,197,139,140,-1,140,196,197,-1,142,199,198,-1,198,143,142,-1,200,201,198,-1,198,199,200,-1,202,203,198,-1,198,201,202,-1,144,143,198,-1,198,203,144,-1,200,205,204,-1,204,201,200,-1,206,207,204,-1,204,205,206,-1,208,209,204,-1,204,207,208,-1,202,201,204,-1,204,209,202,-1,206,211,210,-1,210,207,206,-1,138,139,210,-1,210,211,138,-1,197,212,210,-1,210,139,197,-1,208,207,210,-1,210,212,208,-1,206,215,214,-1,214,213,206,-1,216,217,214,-1,214,215,216,-1,218,219,214,-1,214,217,218,-1,220,213,214,-1,214,219,220,-1,216,222,221,-1,221,217,216,-1,223,224,221,-1,221,222,223,-1,225,226,221,-1,221,224,225,-1,218,217,221,-1,221,226,218,-1,223,228,227,-1,227,224,223,-1,138,229,227,-1,227,228,138,-1,230,231,227,-1,227,229,230,-1,225,224,227,-1,227,231,225,-1,138,211,232,-1,232,229,138,-1,206,213,232,-1,232,211,206,-1,220,233,232,-1,232,213,220,-1,230,229,232,-1,232,233,230,-1,216,236,235,-1,235,234,216,-1,237,238,235,-1,235,236,237,-1,239,240,235,-1,235,238,239,-1,241,234,235,-1,235,240,241,-1,237,243,242,-1,242,238,237,-1,244,245,242,-1,242,243,244,-1,246,247,242,-1,242,245,246,-1,239,238,242,-1,242,247,239,-1,244,249,248,-1,248,245,244,-1,223,250,248,-1,248,249,223,-1,251,252,248,-1,248,250,251,-1,246,245,248,-1,248,252,246,-1,223,222,253,-1,253,250,223,-1,216,234,253,-1,253,222,216,-1,241,254,253,-1,253,234,241,-1,251,250,253,-1,253,254,251,-1,237,257,256,-1,256,255,237,-1,258,259,256,-1,256,257,258,-1,260,261,256,-1,256,259,260,-1,264,255,256,-1,256,261,264,-1,258,266,265,-1,265,259,258,-1,267,268,265,-1,265,266,267,-1,269,270,265,-1,265,268,269,-1,260,259,265,-1,265,270,260,-1,267,272,271,-1,271,268,267,-1,244,273,271,-1,271,272,244,-1,274,275,271,-1,271,273,274,-1,269,268,271,-1,271,275,269,-1,244,243,276,-1,276,273,244,-1,237,255,276,-1,276,243,237,-1,264,277,276,-1,276,255,264,-1,274,273,276,-1,276,277,274,-1,258,280,279,-1,279,278,258,-1,281,282,279,-1,279,280,281,-1,283,284,279,-1,279,282,283,-1,285,278,279,-1,279,284,285,-1,281,287,286,-1,286,282,281,-1,288,289,286,-1,286,287,288,-1,290,291,286,-1,286,289,290,-1,283,282,286,-1,286,291,283,-1,288,330,329,-1,329,289,288,-1,267,331,329,-1,329,330,267,-1,332,333,329,-1,329,331,332,-1,290,289,329,-1,329,333,290,-1,267,266,334,-1,334,331,267,-1,258,278,334,-1,334,266,258,-1,285,335,334,-1,334,278,285,-1,332,331,334,-1,334,335,332,-1,281,338,337,-1,337,336,281,-1,125,339,337,-1,337,338,125,-1,340,341,337,-1,337,339,340,-1,342,336,337,-1,337,341,342,-1,125,124,343,-1,343,339,125,-1,118,344,343,-1,343,124,118,-1,345,346,343,-1,343,344,345,-1,340,339,343,-1,343,346,340,-1,118,348,347,-1,347,344,118,-1,288,349,347,-1,347,348,288,-1,350,351,347,-1,347,349,350,-1,345,344,347,-1,347,351,345,-1,288,287,352,-1,352,349,288,-1,281,336,352,-1,352,287,281,-1,342,353,352,-1,352,336,342,-1,350,349,352,-1,352,353,350,-1,432,431,446,-1,446,445,432,-1,13,447,446,-1,446,431,13,-1,448,449,446,-1,446,447,448,-1,450,445,446,-1,446,449,450,-1,354,357,356,-1,356,355,354,-1,358,359,356,-1,356,357,358,-1,53,52,356,-1,356,359,53,-1,49,355,356,-1,356,52,49,-1,358,361,360,-1,360,359,358,-1,362,363,360,-1,360,361,362,-1,55,54,360,-1,360,363,55,-1,53,359,360,-1,360,54,53,-1,362,366,365,-1,365,363,362,-1,367,368,365,-1,365,366,367,-1,57,56,365,-1,365,368,57,-1,55,363,365,-1,365,56,55,-1,367,370,369,-1,369,368,367,-1,354,355,369,-1,369,370,354,-1,49,50,369,-1,369,355,49,-1,57,368,369,-1,369,50,57,-1,371,374,373,-1,373,372,371,-1,375,376,373,-1,373,374,375,-1,62,61,373,-1,373,376,62,-1,58,372,373,-1,373,61,58,-1,375,378,377,-1,377,376,375,-1,379,380,377,-1,377,378,379,-1,64,63,377,-1,377,380,64,-1,62,376,377,-1,377,63,62,-1,379,382,381,-1,381,380,379,-1,383,384,381,-1,381,382,383,-1,66,65,381,-1,381,384,66,-1,64,380,381,-1,381,65,64,-1,383,386,385,-1,385,384,383,-1,371,372,385,-1,385,386,371,-1,58,59,385,-1,385,372,58,-1,66,384,385,-1,385,59,66,-1,387,390,389,-1,389,388,387,-1,391,392,389,-1,389,390,391,-1,71,70,389,-1,389,392,71,-1,67,388,389,-1,389,70,67,-1,391,394,393,-1,393,392,391,-1,395,396,393,-1,393,394,395,-1,73,72,393,-1,393,396,73,-1,71,392,393,-1,393,72,71,-1,395,398,397,-1,397,396,395,-1,399,400,397,-1,397,398,399,-1,75,74,397,-1,397,400,75,-1,73,396,397,-1,397,74,73,-1,399,402,401,-1,401,400,399,-1,387,388,401,-1,401,402,387,-1,67,68,401,-1,401,388,67,-1,75,400,401,-1,401,68,75,-1,403,406,405,-1,405,404,403,-1,407,408,405,-1,405,406,407,-1,80,79,405,-1,405,408,80,-1,76,404,405,-1,405,79,76,-1,407,410,409,-1,409,408,407,-1,411,412,409,-1,409,410,411,-1,82,81,409,-1,409,412,82,-1,80,408,409,-1,409,81,80,-1,411,414,413,-1,413,412,411,-1,415,416,413,-1,413,414,415,-1,84,83,413,-1,413,416,84,-1,82,412,413,-1,413,83,82,-1,415,418,417,-1,417,416,415,-1,403,404,417,-1,417,418,403,-1,76,77,417,-1,417,404,76,-1,84,416,417,-1,417,77,84,-1,419,458,457,-1,457,420,419,-1,459,460,457,-1,457,458,459,-1,91,90,457,-1,457,460,91,-1,85,420,457,-1,457,90,85,-1,459,462,461,-1,461,460,459,-1,463,464,461,-1,461,462,463,-1,93,92,461,-1,461,464,93,-1,91,460,461,-1,461,92,91,-1,463,466,465,-1,465,464,463,-1,467,468,465,-1,465,466,467,-1,95,94,465,-1,465,468,95,-1,93,464,465,-1,465,94,93,-1,467,470,469,-1,469,468,467,-1,419,420,469,-1,469,470,419,-1,85,86,469,-1,469,420,85,-1,95,468,469,-1,469,86,95,-1,471,474,473,-1,473,472,471,-1,475,476,473,-1,473,474,475,-1,100,99,473,-1,473,476,100,-1,96,472,473,-1,473,99,96,-1,475,478,477,-1,477,476,475,-1,479,480,477,-1,477,478,479,-1,102,101,477,-1,477,480,102,-1,100,476,477,-1,477,101,100,-1,479,482,481,-1,481,480,479,-1,483,484,481,-1,481,482,483,-1,104,103,481,-1,481,484,104,-1,102,480,481,-1,481,103,102,-1,483,486,485,-1,485,484,483,-1,471,472,485,-1,485,486,471,-1,96,97,485,-1,485,472,96,-1,104,484,485,-1,485,97,104,-1,487,490,489,-1,489,488,487,-1,491,493,489,-1,489,490,491,-1,109,108,489,-1,489,493,109,-1,105,488,489,-1,489,108,105,-1,491,495,494,-1,494,493,491,-1,496,497,494,-1,494,495,496,-1,111,110,494,-1,494,497,111,-1,109,493,494,-1,494,110,109,-1,496,499,498,-1,498,497,496,-1,500,501,498,-1,498,499,500,-1,113,112,498,-1,498,501,113,-1,111,497,498,-1,498,112,111,-1,500,503,502,-1,502,501,500,-1,487,488,502,-1,502,503,487,-1,105,106,502,-1,502,488,105,-1,113,501,502,-1,502,106,113,-1,120,505,504,-1,504,121,120,-1,358,357,504,-1,504,505,358,-1,354,506,504,-1,504,357,354,-1,122,121,504,-1,504,506,122,-1,127,508,507,-1,507,128,127,-1,362,361,507,-1,507,508,362,-1,358,505,507,-1,507,361,358,-1,120,128,507,-1,507,505,120,-1,133,510,509,-1,509,134,133,-1,367,366,509,-1,509,510,367,-1,362,508,509,-1,509,366,362,-1,127,134,509,-1,509,508,127,-1,122,506,511,-1,511,137,122,-1,354,370,511,-1,511,506,354,-1,367,510,511,-1,511,370,367,-1,133,137,511,-1,511,510,133,-1,144,513,512,-1,512,196,144,-1,375,374,512,-1,512,513,375,-1,371,514,512,-1,512,374,371,-1,197,196,512,-1,512,514,197,-1,202,516,515,-1,515,203,202,-1,379,378,515,-1,515,516,379,-1,375,513,515,-1,515,378,375,-1,144,203,515,-1,515,513,144,-1,208,518,517,-1,517,209,208,-1,383,382,517,-1,517,518,383,-1,379,516,517,-1,517,382,379,-1,202,209,517,-1,517,516,202,-1,197,514,519,-1,519,212,197,-1,371,386,519,-1,519,514,371,-1,383,518,519,-1,519,386,383,-1,208,212,519,-1,519,518,208,-1,218,521,520,-1,520,219,218,-1,391,390,520,-1,520,521,391,-1,387,522,520,-1,520,390,387,-1,220,219,520,-1,520,522,220,-1,225,524,523,-1,523,226,225,-1,395,394,523,-1,523,524,395,-1,391,521,523,-1,523,394,391,-1,218,226,523,-1,523,521,218,-1,230,526,525,-1,525,231,230,-1,399,398,525,-1,525,526,399,-1,395,524,525,-1,525,398,395,-1,225,231,525,-1,525,524,225,-1,220,522,527,-1,527,233,220,-1,387,402,527,-1,527,522,387,-1,399,526,527,-1,527,402,399,-1,230,233,527,-1,527,526,230,-1,239,529,528,-1,528,240,239,-1,407,406,528,-1,528,529,407,-1,403,530,528,-1,528,406,403,-1,241,240,528,-1,528,530,241,-1,246,532,531,-1,531,247,246,-1,411,410,531,-1,531,532,411,-1,407,529,531,-1,531,410,407,-1,239,247,531,-1,531,529,239,-1,251,534,533,-1,533,252,251,-1,415,414,533,-1,533,534,415,-1,411,532,533,-1,533,414,411,-1,246,252,533,-1,533,532,246,-1,241,530,535,-1,535,254,241,-1,403,418,535,-1,535,530,403,-1,415,534,535,-1,535,418,415,-1,251,254,535,-1,535,534,251,-1,260,537,536,-1,536,261,260,-1,459,458,536,-1,536,537,459,-1,419,538,536,-1,536,458,419,-1,264,261,536,-1,536,538,264,-1,269,540,539,-1,539,270,269,-1,463,462,539,-1,539,540,463,-1,459,537,539,-1,539,462,459,-1,260,270,539,-1,539,537,260,-1,274,542,541,-1,541,275,274,-1,467,466,541,-1,541,542,467,-1,463,540,541,-1,541,466,463,-1,269,275,541,-1,541,540,269,-1,264,538,543,-1,543,277,264,-1,419,470,543,-1,543,538,419,-1,467,542,543,-1,543,470,467,-1,274,277,543,-1,543,542,274,-1,283,545,544,-1,544,284,283,-1,475,474,544,-1,544,545,475,-1,471,546,544,-1,544,474,471,-1,285,284,544,-1,544,546,285,-1,290,548,547,-1,547,291,290,-1,479,478,547,-1,547,548,479,-1,475,545,547,-1,547,478,475,-1,283,291,547,-1,547,545,283,-1,332,600,598,-1,598,333,332,-1,483,482,598,-1,598,600,483,-1,479,548,598,-1,598,482,479,-1,290,333,598,-1,598,548,290,-1,285,546,602,-1,602,335,285,-1,471,486,602,-1,602,546,471,-1,483,600,602,-1,602,486,483,-1,332,335,602,-1,602,600,332,-1,340,606,604,-1,604,341,340,-1,491,490,604,-1,604,606,491,-1,487,609,604,-1,604,490,487,-1,342,341,604,-1,604,609,342,-1,345,642,616,-1,616,346,345,-1,496,495,616,-1,616,642,496,-1,491,606,616,-1,616,495,491,-1,340,346,616,-1,616,606,340,-1,350,644,643,-1,643,351,350,-1,500,499,643,-1,643,644,500,-1,496,642,643,-1,643,499,496,-1,345,351,643,-1,643,642,345,-1,342,609,645,-1,645,353,342,-1,487,503,645,-1,645,609,487,-1,500,644,645,-1,645,503,500,-1,350,353,645,-1,645,644,350,-1,448,452,451,-1,451,449,448,-1,453,454,451,-1,451,452,453,-1,455,456,451,-1,451,454,455,-1,450,449,451,-1,451,456,450,-1,492,551,550,-1,550,549,492,-1,552,553,550,-1,550,551,552,-1,554,555,550,-1,550,553,554,-1,556,549,550,-1,550,555,556,-1,557,560,559,-1,559,558,557,-1,561,562,559,-1,559,560,561,-1,563,564,559,-1,559,562,563,-1,565,558,559,-1,559,564,565,-1,552,567,566,-1,566,553,552,-1,568,569,566,-1,566,567,568,-1,570,571,566,-1,566,569,570,-1,554,553,566,-1,566,571,554,-1,561,573,572,-1,572,562,561,-1,574,575,572,-1,572,573,574,-1,576,577,572,-1,572,575,576,-1,563,562,572,-1,572,577,563,-1,568,579,578,-1,578,569,568,-1,580,581,578,-1,578,579,580,-1,582,583,578,-1,578,581,582,-1,570,569,578,-1,578,583,570,-1,574,585,584,-1,584,575,574,-1,586,587,584,-1,584,585,586,-1,588,589,584,-1,584,587,588,-1,576,575,584,-1,584,589,576,-1,580,591,590,-1,590,581,580,-1,592,593,590,-1,590,591,592,-1,594,595,590,-1,590,593,594,-1,582,581,590,-1,590,595,582,-1,586,597,596,-1,596,587,586,-1,599,601,596,-1,596,597,599,-1,603,605,596,-1,596,601,603,-1,588,587,596,-1,596,605,588,-1,592,608,607,-1,607,593,592,-1,610,611,607,-1,607,608,610,-1,612,613,607,-1,607,611,612,-1,594,593,607,-1,607,613,594,-1,599,615,614,-1,614,601,599,-1,617,618,614,-1,614,615,617,-1,619,620,614,-1,614,618,619,-1,603,601,614,-1,614,620,603,-1,610,622,621,-1,621,611,610,-1,623,624,621,-1,621,622,623,-1,625,626,621,-1,621,624,625,-1,612,611,621,-1,621,626,612,-1,617,628,627,-1,627,618,617,-1,629,630,627,-1,627,628,629,-1,631,632,627,-1,627,630,631,-1,619,618,627,-1,627,632,619,-1,623,634,633,-1,633,624,623,-1,177,176,633,-1,633,634,177,-1,175,635,633,-1,633,176,175,-1,625,624,633,-1,633,635,625,-1,629,637,636,-1,636,630,629,-1,183,182,636,-1,636,637,183,-1,181,638,636,-1,636,182,181,-1,631,630,636,-1,636,638,631,-1,557,640,639,-1,639,560,557,-1,641,707,639,-1,639,640,641,-1,708,793,639,-1,639,707,708,-1,561,560,639,-1,639,793,561,-1,561,793,822,-1,822,573,561,-1,708,823,822,-1,822,793,708,-1,824,825,822,-1,822,823,824,-1,574,573,822,-1,822,825,574,-1,574,825,826,-1,826,585,574,-1,824,827,826,-1,826,825,824,-1,828,829,826,-1,826,827,828,-1,586,585,826,-1,826,829,586,-1,586,829,830,-1,830,597,586,-1,828,831,830,-1,830,829,828,-1,832,833,830,-1,830,831,832,-1,599,597,830,-1,830,833,599,-1,599,833,834,-1,834,615,599,-1,832,835,834,-1,834,833,832,-1,836,837,834,-1,834,835,836,-1,617,615,834,-1,834,837,617,-1,617,837,838,-1,838,628,617,-1,836,839,838,-1,838,837,836,-1,840,841,838,-1,838,839,840,-1,629,628,838,-1,838,841,629,-1,629,841,842,-1,842,637,629,-1,840,843,842,-1,842,841,840,-1,306,305,842,-1,842,843,306,-1,183,637,842,-1,842,305,183,-1,175,308,844,-1,844,635,175,-1,313,845,844,-1,844,308,313,-1,846,847,844,-1,844,845,846,-1,625,635,844,-1,844,847,625,-1,625,847,848,-1,848,626,625,-1,846,849,848,-1,848,847,846,-1,850,851,848,-1,848,849,850,-1,612,626,848,-1,848,851,612,-1,612,851,852,-1,852,613,612,-1,850,853,852,-1,852,851,850,-1,854,855,852,-1,852,853,854,-1,594,613,852,-1,852,855,594,-1,594,855,856,-1,856,595,594,-1,854,857,856,-1,856,855,854,-1,858,859,856,-1,856,857,858,-1,582,595,856,-1,856,859,582,-1,582,859,860,-1,860,583,582,-1,858,861,860,-1,860,859,858,-1,862,863,860,-1,860,861,862,-1,570,583,860,-1,860,863,570,-1,570,863,864,-1,864,571,570,-1,862,865,864,-1,864,863,862,-1,866,867,864,-1,864,865,866,-1,554,571,864,-1,864,867,554,-1,554,867,868,-1,868,555,554,-1,866,869,868,-1,868,867,866,-1,871,872,868,-1,868,869,871,-1,556,555,868,-1,868,872,556,-1,563,875,874,-1,874,564,563,-1,432,877,874,-1,874,875,432,-1,565,564,874,-1,874,877,565,-1,576,880,878,-1,878,577,576,-1,432,875,878,-1,878,880,432,-1,563,577,878,-1,878,875,563,-1,588,883,881,-1,881,589,588,-1,432,880,881,-1,881,883,432,-1,576,589,881,-1,881,880,576,-1,603,885,884,-1,884,605,603,-1,432,883,884,-1,884,885,432,-1,588,605,884,-1,884,883,588,-1,619,888,887,-1,887,620,619,-1,432,885,887,-1,887,888,432,-1,603,620,887,-1,887,885,603,-1,631,890,889,-1,889,632,631,-1,432,888,889,-1,889,890,432,-1,619,632,889,-1,889,888,619,-1,181,443,891,-1,891,638,181,-1,432,890,891,-1,891,443,432,-1,631,638,891,-1,891,890,631,-1,646,649,648,-1,648,647,646,-1,650,651,648,-1,648,649,650,-1,652,653,648,-1,648,651,652,-1,654,647,648,-1,648,653,654,-1,655,658,657,-1,657,656,655,-1,659,660,657,-1,657,658,659,-1,661,662,657,-1,657,660,661,-1,663,656,657,-1,657,662,663,-1,664,667,666,-1,666,665,664,-1,668,669,666,-1,666,667,668,-1,670,671,666,-1,666,669,670,-1,672,665,666,-1,666,671,672,-1,673,676,675,-1,675,674,673,-1,677,678,675,-1,675,676,677,-1,679,680,675,-1,675,678,679,-1,681,674,675,-1,675,680,681,-1,682,685,684,-1,684,683,682,-1,686,687,684,-1,684,685,686,-1,688,689,684,-1,684,687,688,-1,690,683,684,-1,684,689,690,-1,691,694,693,-1,693,692,691,-1,695,696,693,-1,693,694,695,-1,697,698,693,-1,693,696,697,-1,699,692,693,-1,693,698,699,-1,700,703,702,-1,702,701,700,-1,704,705,702,-1,702,703,704,-1,706,709,702,-1,702,705,706,-1,710,701,702,-1,702,709,710,-1,711,714,713,-1,713,712,711,-1,715,716,713,-1,713,714,715,-1,717,718,713,-1,713,716,717,-1,719,712,713,-1,713,718,719,-1,719,718,721,-1,721,720,719,-1,717,722,721,-1,721,718,717,-1,723,724,721,-1,721,722,723,-1,725,720,721,-1,721,724,725,-1,725,724,727,-1,727,726,725,-1,723,728,727,-1,727,724,723,-1,729,730,727,-1,727,728,729,-1,731,726,727,-1,727,730,731,-1,731,730,733,-1,733,732,731,-1,729,734,733,-1,733,730,729,-1,715,714,733,-1,733,734,715,-1,711,732,733,-1,733,714,711,-1,735,738,737,-1,737,736,735,-1,739,740,737,-1,737,738,739,-1,741,742,737,-1,737,740,741,-1,142,736,737,-1,737,742,142,-1,142,742,743,-1,743,199,142,-1,741,744,743,-1,743,742,741,-1,745,746,743,-1,743,744,745,-1,200,199,743,-1,743,746,200,-1,200,746,748,-1,748,747,200,-1,745,749,748,-1,748,746,745,-1,750,751,748,-1,748,749,750,-1,752,747,748,-1,748,751,752,-1,752,751,754,-1,754,753,752,-1,750,755,754,-1,754,751,750,-1,739,738,754,-1,754,755,739,-1,735,753,754,-1,754,738,735,-1,752,758,757,-1,757,756,752,-1,759,760,757,-1,757,758,759,-1,761,762,757,-1,757,760,761,-1,763,756,757,-1,757,762,763,-1,763,762,765,-1,765,764,763,-1,761,766,765,-1,765,762,761,-1,767,768,765,-1,765,766,767,-1,769,764,765,-1,765,768,769,-1,769,768,771,-1,771,770,769,-1,767,772,771,-1,771,768,767,-1,773,774,771,-1,771,772,773,-1,735,770,771,-1,771,774,735,-1,735,774,775,-1,775,753,735,-1,773,776,775,-1,775,774,773,-1,759,758,775,-1,775,776,759,-1,752,753,775,-1,775,758,752,-1,763,779,778,-1,778,777,763,-1,780,781,778,-1,778,779,780,-1,782,783,778,-1,778,781,782,-1,784,777,778,-1,778,783,784,-1,784,783,786,-1,786,785,784,-1,782,787,786,-1,786,783,782,-1,788,789,786,-1,786,787,788,-1,790,785,786,-1,786,789,790,-1,790,789,792,-1,792,791,790,-1,788,794,792,-1,792,789,788,-1,795,796,792,-1,792,794,795,-1,769,791,792,-1,792,796,769,-1,769,796,797,-1,797,764,769,-1,795,798,797,-1,797,796,795,-1,780,779,797,-1,797,798,780,-1,763,764,797,-1,797,779,763,-1,784,801,800,-1,800,799,784,-1,802,803,800,-1,800,801,802,-1,804,805,800,-1,800,803,804,-1,806,799,800,-1,800,805,806,-1,806,805,808,-1,808,807,806,-1,804,809,808,-1,808,805,804,-1,810,811,808,-1,808,809,810,-1,812,807,808,-1,808,811,812,-1,812,811,814,-1,814,813,812,-1,810,815,814,-1,814,811,810,-1,816,817,814,-1,814,815,816,-1,790,813,814,-1,814,817,790,-1,790,817,818,-1,818,785,790,-1,816,819,818,-1,818,817,816,-1,802,801,818,-1,818,819,802,-1,784,785,818,-1,818,801,784,-1,806,870,821,-1,821,820,806,-1,873,876,821,-1,821,870,873,-1,879,882,821,-1,821,876,879,-1,886,820,821,-1,821,882,886,-1,886,882,901,-1,901,896,886,-1,879,902,901,-1,901,882,879,-1,903,904,901,-1,901,902,903,-1,905,896,901,-1,901,904,905,-1,905,904,907,-1,907,906,905,-1,903,908,907,-1,907,904,903,-1,909,910,907,-1,907,908,909,-1,812,906,907,-1,907,910,812,-1,812,910,911,-1,911,807,812,-1,909,912,911,-1,911,910,909,-1,873,870,911,-1,911,912,873,-1,806,807,911,-1,911,870,806,-1,886,915,914,-1,914,913,886,-1,916,917,914,-1,914,915,916,-1,918,919,914,-1,914,917,918,-1,725,913,914,-1,914,919,725,-1,725,919,920,-1,920,720,725,-1,918,921,920,-1,920,919,918,-1,922,923,920,-1,920,921,922,-1,719,720,920,-1,920,923,719,-1,719,923,925,-1,925,924,719,-1,922,926,925,-1,925,923,922,-1,927,928,925,-1,925,926,927,-1,905,924,925,-1,925,928,905,-1,905,928,929,-1,929,896,905,-1,927,930,929,-1,929,928,927,-1,916,915,929,-1,929,930,916,-1,886,896,929,-1,929,915,886,-1,432,445,892,-1,892,877,432,-1,450,893,892,-1,892,445,450,-1,894,895,892,-1,892,893,894,-1,565,877,892,-1,892,895,565,-1,931,934,933,-1,933,932,931,-1,646,647,933,-1,933,934,646,-1,654,935,933,-1,933,647,654,-1,936,932,933,-1,933,935,936,-1,936,935,938,-1,938,937,936,-1,654,653,938,-1,938,935,654,-1,652,939,938,-1,938,653,652,-1,940,937,938,-1,938,939,940,-1,940,939,942,-1,942,941,940,-1,652,651,942,-1,942,939,652,-1,650,943,942,-1,942,651,650,-1,944,941,942,-1,942,943,944,-1,944,943,946,-1,946,945,944,-1,650,649,946,-1,946,943,650,-1,646,934,946,-1,946,649,646,-1,931,945,946,-1,946,934,931,-1,947,950,949,-1,949,948,947,-1,655,656,949,-1,949,950,655,-1,663,951,949,-1,949,656,663,-1,952,948,949,-1,949,951,952,-1,952,951,954,-1,954,953,952,-1,663,662,954,-1,954,951,663,-1,661,955,954,-1,954,662,661,-1,956,953,954,-1,954,955,956,-1,956,955,958,-1,958,957,956,-1,661,660,958,-1,958,955,661,-1,659,959,958,-1,958,660,659,-1,960,957,958,-1,958,959,960,-1,960,959,962,-1,962,961,960,-1,659,658,962,-1,962,959,659,-1,655,950,962,-1,962,658,655,-1,947,961,962,-1,962,950,947,-1,963,966,965,-1,965,964,963,-1,664,665,965,-1,965,966,664,-1,672,967,965,-1,965,665,672,-1,968,964,965,-1,965,967,968,-1,968,967,970,-1,970,969,968,-1,672,671,970,-1,970,967,672,-1,670,971,970,-1,970,671,670,-1,972,969,970,-1,970,971,972,-1,972,971,974,-1,974,973,972,-1,670,669,974,-1,974,971,670,-1,668,975,974,-1,974,669,668,-1,976,973,974,-1,974,975,976,-1,976,975,978,-1,978,977,976,-1,668,667,978,-1,978,975,668,-1,664,966,978,-1,978,667,664,-1,963,977,978,-1,978,966,963,-1,979,982,981,-1,981,980,979,-1,673,674,981,-1,981,982,673,-1,681,983,981,-1,981,674,681,-1,984,980,981,-1,981,983,984,-1,984,983,986,-1,986,985,984,-1,681,680,986,-1,986,983,681,-1,679,987,986,-1,986,680,679,-1,988,985,986,-1,986,987,988,-1,988,987,990,-1,990,989,988,-1,679,678,990,-1,990,987,679,-1,677,991,990,-1,990,678,677,-1,992,989,990,-1,990,991,992,-1,992,991,994,-1,994,993,992,-1,677,676,994,-1,994,991,677,-1,673,982,994,-1,994,676,673,-1,979,993,994,-1,994,982,979,-1,995,998,997,-1,997,996,995,-1,682,683,997,-1,997,998,682,-1,690,999,997,-1,997,683,690,-1,1000,996,997,-1,997,999,1000,-1,1000,999,1002,-1,1002,1001,1000,-1,690,689,1002,-1,1002,999,690,-1,688,1003,1002,-1,1002,689,688,-1,1004,1001,1002,-1,1002,1003,1004,-1,1004,1003,1006,-1,1006,1005,1004,-1,688,687,1006,-1,1006,1003,688,-1,686,1007,1006,-1,1006,687,686,-1,1008,1005,1006,-1,1006,1007,1008,-1,1008,1007,1010,-1,1010,1009,1008,-1,686,685,1010,-1,1010,1007,686,-1,682,998,1010,-1,1010,685,682,-1,995,1009,1010,-1,1010,998,995,-1,1011,1014,1013,-1,1013,1012,1011,-1,691,692,1013,-1,1013,1014,691,-1,699,1015,1013,-1,1013,692,699,-1,1016,1012,1013,-1,1013,1015,1016,-1,1016,1015,1018,-1,1018,1017,1016,-1,699,698,1018,-1,1018,1015,699,-1,697,1019,1018,-1,1018,698,697,-1,1020,1017,1018,-1,1018,1019,1020,-1,1020,1019,1022,-1,1022,1021,1020,-1,697,696,1022,-1,1022,1019,697,-1,695,1023,1022,-1,1022,696,695,-1,1024,1021,1022,-1,1022,1023,1024,-1,1024,1023,1026,-1,1026,1025,1024,-1,695,694,1026,-1,1026,1023,695,-1,691,1014,1026,-1,1026,694,691,-1,1011,1025,1026,-1,1026,1014,1011,-1,1027,1030,1029,-1,1029,1028,1027,-1,700,701,1029,-1,1029,1030,700,-1,710,1031,1029,-1,1029,701,710,-1,1032,1028,1029,-1,1029,1031,1032,-1,1032,1031,1034,-1,1034,1033,1032,-1,710,709,1034,-1,1034,1031,710,-1,706,1035,1034,-1,1034,709,706,-1,1036,1033,1034,-1,1034,1035,1036,-1,1036,1035,1038,-1,1038,1037,1036,-1,706,705,1038,-1,1038,1035,706,-1,704,1039,1038,-1,1038,705,704,-1,1040,1037,1038,-1,1038,1039,1040,-1,1040,1039,1042,-1,1042,1041,1040,-1,704,703,1042,-1,1042,1039,704,-1,700,1030,1042,-1,1042,703,700,-1,1027,1041,1042,-1,1042,1030,1027,-1,717,716,1044,-1,1044,1043,717,-1,715,1045,1044,-1,1044,716,715,-1,931,932,1044,-1,1044,1045,931,-1,936,1043,1044,-1,1044,932,936,-1,723,722,1047,-1,1047,1046,723,-1,717,1043,1047,-1,1047,722,717,-1,936,937,1047,-1,1047,1043,936,-1,940,1046,1047,-1,1047,937,940,-1,729,728,1049,-1,1049,1048,729,-1,723,1046,1049,-1,1049,728,723,-1,940,941,1049,-1,1049,1046,940,-1,944,1048,1049,-1,1049,941,944,-1,715,734,1050,-1,1050,1045,715,-1,729,1048,1050,-1,1050,734,729,-1,944,945,1050,-1,1050,1048,944,-1,931,1045,1050,-1,1050,945,931,-1,741,740,1052,-1,1052,1051,741,-1,739,1053,1052,-1,1052,740,739,-1,947,948,1052,-1,1052,1053,947,-1,952,1051,1052,-1,1052,948,952,-1,745,744,1055,-1,1055,1054,745,-1,741,1051,1055,-1,1055,744,741,-1,952,953,1055,-1,1055,1051,952,-1,956,1054,1055,-1,1055,953,956,-1,750,749,1057,-1,1057,1056,750,-1,745,1054,1057,-1,1057,749,745,-1,956,957,1057,-1,1057,1054,956,-1,960,1056,1057,-1,1057,957,960,-1,739,755,1058,-1,1058,1053,739,-1,750,1056,1058,-1,1058,755,750,-1,960,961,1058,-1,1058,1056,960,-1,947,1053,1058,-1,1058,961,947,-1,761,760,1060,-1,1060,1059,761,-1,759,1061,1060,-1,1060,760,759,-1,963,964,1060,-1,1060,1061,963,-1,968,1059,1060,-1,1060,964,968,-1,767,766,1063,-1,1063,1062,767,-1,761,1059,1063,-1,1063,766,761,-1,968,969,1063,-1,1063,1059,968,-1,972,1062,1063,-1,1063,969,972,-1,773,772,1065,-1,1065,1064,773,-1,767,1062,1065,-1,1065,772,767,-1,972,973,1065,-1,1065,1062,972,-1,976,1064,1065,-1,1065,973,976,-1,759,776,1066,-1,1066,1061,759,-1,773,1064,1066,-1,1066,776,773,-1,976,977,1066,-1,1066,1064,976,-1,963,1061,1066,-1,1066,977,963,-1,782,781,1068,-1,1068,1067,782,-1,780,1069,1068,-1,1068,781,780,-1,979,980,1068,-1,1068,1069,979,-1,984,1067,1068,-1,1068,980,984,-1,788,787,1071,-1,1071,1070,788,-1,782,1067,1071,-1,1071,787,782,-1,984,985,1071,-1,1071,1067,984,-1,988,1070,1071,-1,1071,985,988,-1,795,794,1073,-1,1073,1072,795,-1,788,1070,1073,-1,1073,794,788,-1,988,989,1073,-1,1073,1070,988,-1,992,1072,1073,-1,1073,989,992,-1,780,798,1074,-1,1074,1069,780,-1,795,1072,1074,-1,1074,798,795,-1,992,993,1074,-1,1074,1072,992,-1,979,1069,1074,-1,1074,993,979,-1,804,803,1076,-1,1076,1075,804,-1,802,1077,1076,-1,1076,803,802,-1,995,996,1076,-1,1076,1077,995,-1,1000,1075,1076,-1,1076,996,1000,-1,810,809,1079,-1,1079,1078,810,-1,804,1075,1079,-1,1079,809,804,-1,1000,1001,1079,-1,1079,1075,1000,-1,1004,1078,1079,-1,1079,1001,1004,-1,816,815,1081,-1,1081,1080,816,-1,810,1078,1081,-1,1081,815,810,-1,1004,1005,1081,-1,1081,1078,1004,-1,1008,1080,1081,-1,1081,1005,1008,-1,802,819,1082,-1,1082,1077,802,-1,816,1080,1082,-1,1082,819,816,-1,1008,1009,1082,-1,1082,1080,1008,-1,995,1077,1082,-1,1082,1009,995,-1,879,876,1084,-1,1084,1083,879,-1,873,1085,1084,-1,1084,876,873,-1,1011,1012,1084,-1,1084,1085,1011,-1,1016,1083,1084,-1,1084,1012,1016,-1,903,902,1087,-1,1087,1086,903,-1,879,1083,1087,-1,1087,902,879,-1,1016,1017,1087,-1,1087,1083,1016,-1,1020,1086,1087,-1,1087,1017,1020,-1,909,908,1089,-1,1089,1088,909,-1,903,1086,1089,-1,1089,908,903,-1,1020,1021,1089,-1,1089,1086,1020,-1,1024,1088,1089,-1,1089,1021,1024,-1,873,912,1090,-1,1090,1085,873,-1,909,1088,1090,-1,1090,912,909,-1,1024,1025,1090,-1,1090,1088,1024,-1,1011,1085,1090,-1,1090,1025,1011,-1,918,917,1092,-1,1092,1091,918,-1,916,1093,1092,-1,1092,917,916,-1,1027,1028,1092,-1,1092,1093,1027,-1,1032,1091,1092,-1,1092,1028,1032,-1,922,921,1095,-1,1095,1094,922,-1,918,1091,1095,-1,1095,921,918,-1,1032,1033,1095,-1,1095,1091,1032,-1,1036,1094,1095,-1,1095,1033,1036,-1,927,926,1097,-1,1097,1096,927,-1,922,1094,1097,-1,1097,926,922,-1,1036,1037,1097,-1,1097,1094,1036,-1,1040,1096,1097,-1,1097,1037,1040,-1,916,930,1098,-1,1098,1093,916,-1,927,1096,1098,-1,1098,930,927,-1,1040,1041,1098,-1,1098,1096,1040,-1,1027,1093,1098,-1,1098,1041,1027,-1,894,893,898,-1,898,897,894,-1,450,456,898,-1,898,893,450,-1,455,899,898,-1,898,456,455,-1,900,897,898,-1,898,899,900,-1]
TextureCoordinate735 = x3d.TextureCoordinate(DEF="Upper_teeth-TEXCOORD_JinBlink")
TextureCoordinate735.point = [(0.8647, 0.3354),(0.8772, 0.3277),(0.8746, 0.3053),(0.8621, 0.313),(0.8601, 0.2951),(0.8726, 0.2875),(0.8849, 0.2799),(0.8869, 0.2977),(0.8896, 0.3201),(0.8597, 0.2826),(0.8715, 0.2769),(0.8722, 0.2824),(0.8598, 0.2838),(0.8599, 0.2848),(0.8717, 0.2877),(0.8824, 0.2879),(0.8841, 0.2797),(0.8831, 0.2709),(0.9015, 0.3128),(0.8989, 0.2904),(0.8968, 0.2726),(0.9082, 0.2656),(0.9103, 0.2834),(0.913, 0.3058),(0.894, 0.2646),(0.8952, 0.2745),(0.8933, 0.2842),(0.9019, 0.2784),(0.9057, 0.268),(0.9045, 0.2582),(0.9239, 0.299),(0.9213, 0.2766),(0.9192, 0.2589),(0.9299, 0.2523),(0.9321, 0.27),(0.9347, 0.2924),(0.9147, 0.2519),(0.9158, 0.2618),(0.9122, 0.2726),(0.9201, 0.2673),(0.926, 0.2555),(0.9249, 0.2457),(0.9454, 0.2859),(0.9428, 0.2634),(0.9406, 0.2457),(0.9501, 0.2399),(0.9523, 0.2576),(0.9549, 0.28),(0.9353, 0.2393),(0.8544, 0.1),(0.8519, 0.1017),(0.8611, 0.09569),(0.8611, 0.09564),(0.8678, 0.09126),(0.8702, 0.08971),(0.8679, 0.09122),(0.861, 0.09573),(0.8541, 0.1002),(0.9585, 0.03203),(0.9596, 0.03133),(0.96, 0.03107),(0.9584, 0.0321),(0.9591, 0.03167),(0.9604, 0.03082),(0.9615, 0.0301),(0.9616, 0.03005),(0.9609, 0.0305),(0.9593, 0.03151),(0.9587, 0.03191),(0.9568, 0.03319),(0.9582, 0.03223),(0.9564, 0.03343),(0.9548, 0.03448),(0.9542, 0.03487),(0.9553, 0.03415),(0.9571, 0.03297),(0.9524, 0.03607),(0.9524, 0.03602),(0.9481, 0.03882),(0.9494, 0.03797),(0.9459, 0.04029),(0.9439, 0.04162),(0.944, 0.04152),(0.9468, 0.03967),(0.9503, 0.03741),(0.938, 0.04546),(0.9392, 0.04468),(0.9364, 0.2491),(0.931, 0.261),(0.9309, 0.05011),(0.9321, 0.04928),(0.9256, 0.05352),(0.9225, 0.05555),(0.9237, 0.05479),(0.9296, 0.05095),(0.9361, 0.04669),(0.9154, 0.06023),(0.9165, 0.05949),(0.9084, 0.06475),(0.9096, 0.064),(0.9032, 0.06814),(0.9004, 0.07001),(0.9016, 0.06919),(0.9073, 0.06551),(0.9135, 0.06145),(0.8925, 0.07517),(0.8942, 0.07408),(0.8855, 0.07974),(0.8861, 0.07936),(0.8794, 0.08374),(0.8768, 0.08541),(0.8787, 0.08417),(0.8849, 0.08013),(0.8914, 0.07589),(0.8536, 0.1469),(0.8566, 0.144),(0.8658, 0.138),(0.8659, 0.1387),(0.878, 0.1308),(0.875, 0.132),(0.8743, 0.1261),(0.8652, 0.1321),(0.856, 0.1381),(0.8782, 0.1298),(0.8783, 0.1303),(0.8786, 0.1309),(0.8752, 0.1318),(0.8746, 0.126),(0.8776, 0.124),(0.8656, 0.1381),(0.8658, 0.1399),(0.853, 0.1485),(0.8561, 0.1443),(0.8554, 0.1385),(0.865, 0.1322),(0.8532, 0.1462),(0.8533, 0.1471),(0.8526, 0.1403),(0.9617, 0.0761),(0.9624, 0.07489),(0.9621, 0.07506),(0.9621, 0.07583),(0.9628, 0.07539),(0.9631, 0.07441),(0.9625, 0.06853),(0.9377, 0.2565),(0.9456, 0.2435),(0.9446, 0.2336),(0.962, 0.2757),(0.9593, 0.2533),(0.9572, 0.2355),(0.9622, 0.2324),(0.9644, 0.2502),(0.967, 0.2726),(0.9511, 0.2295),(0.9522, 0.2394),(0.9455, 0.2521),(0.9476, 0.2503),(0.9567, 0.2367),(0.9557, 0.2268),(0.9705, 0.2705),(0.9678, 0.2481),(0.9657, 0.2303),(0.9678, 0.229),(0.97, 0.2468),(0.9726, 0.2692),(0.9588, 0.2248),(0.9599, 0.2347),(0.9526, 0.2478),(0.9522, 0.2475),(0.9618, 0.2335),(0.9608, 0.2236),(0.9737, 0.2685),(0.9711, 0.2461),(0.9689, 0.2284),(0.9692, 0.2282),(0.9714, 0.2459),(0.974, 0.2683),(0.9617, 0.2231),(0.9628, 0.233),(0.9552, 0.2462),(0.9532, 0.2469),(0.963, 0.2328),(0.9619, 0.2229),(0.8599, 0.282),(0.8715, 0.2749),(0.8828, 0.268),(0.8829, 0.2677),(0.8716, 0.2747),(0.86, 0.2819),(0.8937, 0.2613),(0.9042, 0.2549),(0.9044, 0.2545),(0.8937, 0.2611),(0.9144, 0.2486),(0.9246, 0.2423),(0.9615, 0.06917),(0.9618, 0.06901),(0.9652, 0.07305),(0.9652, 0.0735),(0.9676, 0.07275),(0.967, 0.07187),(0.9663, 0.06605),(0.9646, 0.0672),(0.9672, 0.07175),(0.9675, 0.07342),(0.9663, 0.07362),(0.9661, 0.07245),(0.9654, 0.06663),(0.9665, 0.06594),(0.9641, 0.07376),(0.9642, 0.07421),(0.9635, 0.06791),(0.9653, 0.07301),(0.9638, 0.07396),(0.9641, 0.07564),(0.9606, 0.07732),(0.9612, 0.0757),(0.9605, 0.06987),(0.9631, 0.06815),(0.9646, 0.06719),(0.9587, 0.07729),(0.9588, 0.07774),(0.9563, 0.07961),(0.9576, 0.078),(0.957, 0.07212),(0.9581, 0.07143),(0.959, 0.07709),(0.959, 0.07785),(0.9616, 0.0754),(0.961, 0.06952),(0.9584, 0.0712),(0.9641, 0.07376),(0.9635, 0.06791),(0.9589, 0.07716),(0.9549, 0.0798),(0.9552, 0.08149),(0.9481, 0.08548),(0.9498, 0.08311),(0.9491, 0.07727),(0.9542, 0.07397),(0.9582, 0.07134),(0.9469, 0.08502),(0.9469, 0.08547),(0.9446, 0.08724),(0.9469, 0.08499),(0.9463, 0.07912),(0.9463, 0.07916),(0.9507, 0.08252),(0.9507, 0.08326),(0.9555, 0.07936),(0.9549, 0.07349),(0.9501, 0.07664),(0.9587, 0.0773),(0.958, 0.07146),(0.9454, 0.08597),(0.9374, 0.09121),(0.9377, 0.09292),(0.926, 0.0999),(0.9284, 0.09706),(0.9278, 0.09122),(0.9367, 0.08537),(0.9248, 0.242),(0.9144, 0.2484),(0.9447, 0.08014),(0.9242, 0.09986),(0.9242, 0.1003),(0.9225, 0.1017),(0.9255, 0.09895),(0.9249, 0.09308),(0.9235, 0.094),(0.9336, 0.09368),(0.9336, 0.0944),(0.9426, 0.0878),(0.942, 0.08194),(0.933, 0.08782),(0.9469, 0.08503),(0.9462, 0.07919),(0.9228, 0.1008),(0.9147, 0.106),(0.915, 0.1078),(0.9032, 0.1148),(0.9059, 0.1118),(0.9052, 0.1059),(0.9141, 0.1002),(0.9221, 0.09494),(0.902, 0.1143),(0.9021, 0.1148),(0.9008, 0.1158),(0.9037, 0.1132),(0.9031, 0.1073),(0.9014, 0.1084),(0.935, 0.2359),(0.9443, 0.2302),(0.9455, 0.2293),(0.9352, 0.2356),(0.951, 0.2261),(0.9555, 0.2233),(0.9564, 0.2226),(0.9512, 0.2258),(0.9587, 0.2214),(0.9606, 0.2202),(0.9615, 0.2195),(0.9589, 0.221),(0.9616, 0.2196),(0.9618, 0.2195),(0.9625, 0.2189),(0.9618, 0.2192),(0.9679, 0.2199),(0.9676, 0.22),(0.9665, 0.2207),(0.9658, 0.2173),(0.967, 0.2171),(0.967, 0.2165),(0.9644, 0.222),(0.961, 0.2241),(0.9605, 0.2206),(0.9638, 0.2191),(0.956, 0.2272),(0.9489, 0.2315),(0.9488, 0.2278),(0.9554, 0.2242),(0.9395, 0.2373),(0.9288, 0.2439),(0.928, 0.2405),(0.939, 0.2343),(0.9181, 0.2504),(0.9072, 0.2572),(0.9066, 0.2536),(0.9115, 0.1082),(0.9115, 0.1088),(0.92, 0.1026),(0.9193, 0.09673),(0.9108, 0.1023),(0.9241, 0.09988),(0.9235, 0.09403),(0.8999, 0.1157),(0.891, 0.1215),(0.8912, 0.1233),(0.8816, 0.1277),(0.881, 0.1218),(0.8903, 0.1157),(0.8993, 0.1098),(0.8783, 0.1298),(0.8809, 0.1281),(0.8803, 0.1223),(0.8776, 0.124),(0.8893, 0.1226),(0.8894, 0.1233),(0.8982, 0.1168),(0.8975, 0.111),(0.8887, 0.1168),(0.902, 0.1143),(0.9014, 0.1085),(0.8526, 0.1068),(0.8521, 0.1016),(0.8612, 0.09563),(0.8617, 0.1008),(0.8709, 0.09485),(0.8702, 0.08973),(0.8734, 0.08764),(0.8741, 0.09274),(0.8711, 0.09469),(0.8704, 0.08957),(0.9176, 0.2474),(0.861, 0.09575),(0.8616, 0.1009),(0.8521, 0.1071),(0.8516, 0.1019),(0.8488, 0.1037),(0.8492, 0.109),(0.9585, 0.03763),(0.958, 0.03239),(0.9578, 0.03251),(0.9582, 0.03778),(0.9592, 0.03716),(0.9587, 0.03192),(0.9605, 0.03073),(0.9611, 0.0359),(0.9628, 0.03482),(0.9621, 0.02971),(0.9622, 0.02964),(0.9629, 0.03473),(0.9619, 0.0354),(0.9612, 0.03028),(0.9595, 0.03142),(0.96, 0.0366),(0.961, 0.03597),(0.9603, 0.03087),(0.9588, 0.03185),(0.9595, 0.03694),(0.9569, 0.03863),(0.9563, 0.0335),(0.9541, 0.03492),(0.9547, 0.04012),(0.9537, 0.04074),(0.9533, 0.03548),(0.9547, 0.03454),(0.9551, 0.03981),(0.9577, 0.03816),(0.9572, 0.03292),(0.9594, 0.03147),(0.96, 0.03662),(0.9546, 0.04012),(0.9539, 0.03504),(0.95, 0.03763),(0.9506, 0.04274),(0.9457, 0.04599),(0.9451, 0.04082),(0.9424, 0.0426),(0.9429, 0.04783),(0.943, 0.04774),(0.9425, 0.04248),(0.9463, 0.04001),(0.9468, 0.04526),(0.9515, 0.04215),(0.951, 0.03695),(0.9539, 0.03505),(0.9546, 0.04018),(0.9412, 0.04889),(0.9405, 0.0438),(0.8957, 0.2642),(0.8839, 0.2714),(0.8835, 0.2678),(0.8953, 0.2611),(0.8717, 0.2789),(0.8594, 0.2865),(0.8595, 0.2833),(0.8715, 0.2757),(0.8747, 0.2891),(0.8686, 0.2887),(0.862, 0.2864),(0.866, 0.2846),(0.8874, 0.2834),(0.8844, 0.2872),(0.8993, 0.2761),(0.8981, 0.2788),(0.9106, 0.2691),(0.9119, 0.2704),(0.9172, 0.2651),(0.9224, 0.2639),(0.9201, 0.2633),(0.9275, 0.2608),(0.9208, 0.2629),(0.9294, 0.2596),(0.8596, 0.2851),(0.8597, 0.2849),(0.8598, 0.2845),(0.8592, 0.2791),(0.8591, 0.2794),(0.859, 0.2795),(0.8574, 0.2652),(0.8575, 0.265),(0.8554, 0.2465),(0.8552, 0.2466),(0.8551, 0.2466),(0.8573, 0.2653),(0.9326, 0.04897),(0.9332, 0.05411),(0.9243, 0.05992),(0.9238, 0.05471),(0.9197, 0.05742),(0.9201, 0.06267),(0.9216, 0.06174),(0.9211, 0.05648),(0.9291, 0.05126),(0.9296, 0.05648),(0.9386, 0.05063),(0.938, 0.04547),(0.942, 0.04281),(0.9427, 0.04792),(0.9186, 0.06368),(0.9179, 0.05858),(0.91, 0.06373),(0.9106, 0.06889),(0.9018, 0.07461),(0.9013, 0.06939),(0.8976, 0.07184),(0.898, 0.07709),(0.8997, 0.07599),(0.8993, 0.07074),(0.9069, 0.06578),(0.9074, 0.07098),(0.9159, 0.06545),(0.9152, 0.06031),(0.9193, 0.05767),(0.92, 0.06277),(0.8958, 0.07858),(0.8951, 0.07347),(0.8863, 0.07922),(0.8869, 0.0844),(0.8776, 0.09047),(0.8647, 0.3354),(0.8771, 0.08524),(0.8738, 0.08737),(0.8743, 0.09263),(0.8769, 0.09093),(0.8764, 0.08568),(0.8847, 0.08026),(0.8853, 0.08545),(0.894, 0.0797),(0.8934, 0.07458),(0.8972, 0.07212),(0.8979, 0.07722),(0.8634, 0.1163),(0.8726, 0.1104),(0.8542, 0.1223),(0.8758, 0.1082),(0.8728, 0.1102),(0.8633, 0.1165),(0.8537, 0.1227),(0.8509, 0.1246),(0.9599, 0.05337),(0.9608, 0.05274),(0.9601, 0.05322),(0.9628, 0.05144),(0.9645, 0.05032),(0.9647, 0.05021),(0.9637, 0.0509),(0.9617, 0.05214),(0.9613, 0.05242),(0.9587, 0.05413),(0.9628, 0.05146),(0.9563, 0.05567),(0.9553, 0.05632),(0.9568, 0.0554),(0.9593, 0.05373),(0.9617, 0.05215),(0.9524, 0.05824),(0.9474, 0.06152),(0.9564, 0.05561),(0.9445, 0.06339),(0.9446, 0.06333),(0.9484, 0.06085),(0.9532, 0.05771),(0.9563, 0.0557),(0.935, 0.06962),(0.926, 0.07546),(0.943, 0.06439),(0.9218, 0.07824),(0.9232, 0.07731),(0.9313, 0.07204),(0.9403, 0.06617),(0.9445, 0.06343),(0.9123, 0.08441),(0.9035, 0.09017),(0.9203, 0.07919),(0.8997, 0.09266),(0.9014, 0.09156),(0.8621, 0.313),(0.8746, 0.3053),(0.8772, 0.3277),(0.8896, 0.3201),(0.8869, 0.2977),(0.8849, 0.2799),(0.8726, 0.2875),(0.8601, 0.2951),(0.8597, 0.2826),(0.8598, 0.2838),(0.8722, 0.2824),(0.8715, 0.2769),(0.8831, 0.2709),(0.8841, 0.2797),(0.8824, 0.2879),(0.8717, 0.2877),(0.8599, 0.2848),(0.8989, 0.2904),(0.9015, 0.3128),(0.913, 0.3058),(0.9103, 0.2834),(0.9082, 0.2656),(0.8968, 0.2726),(0.8952, 0.2745),(0.894, 0.2646),(0.9045, 0.2582),(0.9057, 0.268),(0.9019, 0.2784),(0.8933, 0.2842),(0.9213, 0.2766),(0.9239, 0.299),(0.9347, 0.2924),(0.9321, 0.27),(0.9299, 0.2523),(0.9192, 0.2589),(0.9158, 0.2618),(0.9147, 0.2519),(0.9249, 0.2457),(0.926, 0.2555),(0.9201, 0.2673),(0.9122, 0.2726),(0.9428, 0.2634),(0.9454, 0.2859),(0.9549, 0.28),(0.9523, 0.2576),(0.9501, 0.2399),(0.9406, 0.2457),(0.9364, 0.2491),(0.9353, 0.2393),(0.9091, 0.08653),(0.9446, 0.2336),(0.9176, 0.08097),(0.9456, 0.2435),(0.9217, 0.07828),(0.9377, 0.2565),(0.8886, 0.09993),(0.931, 0.261),(0.8792, 0.106),(0.9593, 0.2533),(0.962, 0.2757),(0.8975, 0.09409),(0.967, 0.2726),(0.9644, 0.2502),(0.9622, 0.2324),(0.9572, 0.2355),(0.9522, 0.2394),(0.9511, 0.2295),(0.8759, 0.1082),(0.9557, 0.2268),(0.9567, 0.2367),(0.9476, 0.2503),(0.9455, 0.2521),(0.9678, 0.2481),(0.9705, 0.2705),(0.9726, 0.2692),(0.97, 0.2468),(0.9678, 0.229),(0.9657, 0.2303),(0.9599, 0.2347),(0.9588, 0.2248),(0.9608, 0.2236),(0.9618, 0.2335),(0.9522, 0.2475),(0.9526, 0.2478),(0.9711, 0.2461),(0.9737, 0.2685),(0.9689, 0.2284),(0.9628, 0.233),(0.9617, 0.2231),(0.9552, 0.2462),(0.8715, 0.2749),(0.8599, 0.282),(0.86, 0.2819),(0.8785, 0.1065),(0.887, 0.101),(0.8958, 0.09522),(0.8996, 0.09272),(0.8544, 0.1),(0.8611, 0.09564),(0.8611, 0.09569),(0.8519, 0.1017),(0.8541, 0.1002),(0.861, 0.09573),(0.8679, 0.09122),(0.8702, 0.08971),(0.8678, 0.09126),(0.9585, 0.03203),(0.9584, 0.0321),(0.96, 0.03107),(0.9596, 0.03133),(0.9609, 0.0305),(0.9616, 0.03005),(0.9615, 0.0301),(0.9604, 0.03082),(0.9591, 0.03167),(0.9593, 0.03151),(0.9582, 0.03223),(0.9568, 0.03319),(0.9587, 0.03191),(0.9571, 0.03297),(0.9553, 0.03415),(0.9542, 0.03487),(0.9548, 0.03448),(0.9564, 0.03343),(0.9524, 0.03607),(0.9494, 0.03797),(0.9481, 0.03882),(0.9524, 0.03602),(0.9503, 0.03741),(0.9468, 0.03967),(0.944, 0.04152),(0.9439, 0.04162),(0.9459, 0.04029),(0.938, 0.04546),(0.9321, 0.04928),(0.9309, 0.05011),(0.9392, 0.04468),(0.9361, 0.04669),(0.9296, 0.05095),(0.9237, 0.05479),(0.9225, 0.05555),(0.9256, 0.05352),(0.9154, 0.06023),(0.9096, 0.064),(0.9084, 0.06475),(0.9165, 0.05949),(0.9135, 0.06145),(0.9073, 0.06551),(0.9016, 0.06919),(0.9004, 0.07001),(0.9032, 0.06814),(0.8925, 0.07517),(0.8861, 0.07936),(0.8855, 0.07974),(0.8942, 0.07408),(0.8914, 0.07589),(0.8849, 0.08013),(0.8787, 0.08417),(0.8716, 0.2747),(0.8829, 0.2677),(0.8768, 0.08541),(0.8794, 0.08374),(0.8536, 0.1469),(0.8659, 0.1387),(0.8658, 0.138),(0.8566, 0.144),(0.856, 0.1381),(0.8652, 0.1321),(0.8743, 0.1261),(0.875, 0.132),(0.878, 0.1308),(0.8783, 0.1303),(0.8782, 0.1298),(0.8776, 0.124),(0.8746, 0.126),(0.8752, 0.1318),(0.8786, 0.1309),(0.8658, 0.1399),(0.8656, 0.1381),(0.865, 0.1322),(0.8554, 0.1385),(0.8561, 0.1443),(0.853, 0.1485),(0.8533, 0.1471),(0.8532, 0.1462),(0.8526, 0.1403),(0.9617, 0.0761),(0.9621, 0.07583),(0.9621, 0.07506),(0.9624, 0.07489),(0.9618, 0.06901),(0.9615, 0.06917),(0.9625, 0.06853),(0.9631, 0.07441),(0.9652, 0.07305),(0.9646, 0.0672),(0.9663, 0.06605),(0.967, 0.07187),(0.9675, 0.07342),(0.9672, 0.07175),(0.9665, 0.06594),(0.9654, 0.06663),(0.9661, 0.07245),(0.9663, 0.07362),(0.9642, 0.07421),(0.9641, 0.07376),(0.9635, 0.06791),(0.9641, 0.07564),(0.9638, 0.07396),(0.9653, 0.07301),(0.9646, 0.06719),(0.9631, 0.06815),(0.9605, 0.06987),(0.9612, 0.0757),(0.9606, 0.07732),(0.9588, 0.07774),(0.9587, 0.07729),(0.9581, 0.07143),(0.957, 0.07212),(0.9576, 0.078),(0.9563, 0.07961),(0.959, 0.07785),(0.959, 0.07709),(0.9584, 0.0712),(0.961, 0.06952),(0.9616, 0.0754),(0.9641, 0.07376),(0.9635, 0.06791),(0.9552, 0.08149),(0.9549, 0.0798),(0.9589, 0.07716),(0.9582, 0.07134),(0.9542, 0.07397),(0.9491, 0.07727),(0.9498, 0.08311),(0.9481, 0.08548),(0.9469, 0.08547),(0.9469, 0.08502),(0.9463, 0.07916),(0.9463, 0.07912),(0.9469, 0.08499),(0.9446, 0.08724),(0.9507, 0.08326),(0.9507, 0.08252),(0.8828, 0.268),(0.9501, 0.07664),(0.9549, 0.07349),(0.9555, 0.07936),(0.9587, 0.0773),(0.958, 0.07146),(0.9377, 0.09292),(0.9374, 0.09121),(0.9454, 0.08597),(0.9447, 0.08014),(0.9367, 0.08537),(0.9278, 0.09122),(0.9284, 0.09706),(0.926, 0.0999),(0.9242, 0.1003),(0.9242, 0.09986),(0.9235, 0.094),(0.9249, 0.09309),(0.9255, 0.09895),(0.9225, 0.1017),(0.9336, 0.0944),(0.9336, 0.09368),(0.933, 0.08782),(0.942, 0.08194),(0.9426, 0.0878),(0.9469, 0.08503),(0.9462, 0.07919),(0.915, 0.1078),(0.9147, 0.106),(0.8937, 0.2613),(0.8937, 0.2611),(0.9044, 0.2545),(0.9042, 0.2549),(0.9144, 0.2486),(0.9144, 0.2484),(0.9248, 0.242),(0.9246, 0.2423),(0.935, 0.2359),(0.9352, 0.2356),(0.9455, 0.2293),(0.9443, 0.2302),(0.951, 0.2261),(0.9512, 0.2258),(0.9564, 0.2226),(0.9555, 0.2233),(0.9587, 0.2214),(0.9589, 0.221),(0.9615, 0.2195),(0.9606, 0.2202),(0.9616, 0.2196),(0.9618, 0.2192),(0.9676, 0.22),(0.967, 0.2171),(0.9658, 0.2173),(0.9665, 0.2207),(0.9644, 0.222),(0.9638, 0.2191),(0.9605, 0.2206),(0.961, 0.2241),(0.956, 0.2272),(0.9554, 0.2242),(0.9488, 0.2278),(0.9489, 0.2315),(0.9395, 0.2373),(0.939, 0.2343),(0.928, 0.2405),(0.9288, 0.2439),(0.9181, 0.2504),(0.9176, 0.2474),(0.9066, 0.2536),(0.9072, 0.2572),(0.8957, 0.2642),(0.8953, 0.2611),(0.8835, 0.2678),(0.8839, 0.2714),(0.8717, 0.2789),(0.8715, 0.2757),(0.9228, 0.1008),(0.8595, 0.2833),(0.8594, 0.2865),(0.9221, 0.09494),(0.8686, 0.2887),(0.8747, 0.2891),(0.9141, 0.1002),(0.862, 0.2864),(0.8844, 0.2872),(0.9052, 0.1059),(0.8874, 0.2834),(0.8981, 0.2788),(0.9059, 0.1118),(0.8993, 0.2761),(0.9119, 0.2704),(0.9106, 0.2691),(0.9032, 0.1148),(0.9224, 0.2639),(0.9172, 0.2651),(0.9275, 0.2608),(0.9201, 0.2633),(0.9294, 0.2596),(0.8597, 0.2849),(0.8591, 0.2794),(0.8592, 0.2791),(0.8598, 0.2845),(0.9021, 0.1148),(0.8575, 0.265),(0.8574, 0.2652),(0.8552, 0.2466),(0.8554, 0.2465),(0.902, 0.1143),(0.9014, 0.1084),(0.9031, 0.1073),(0.9037, 0.1132),(0.9008, 0.1158),(0.9115, 0.1088),(0.9115, 0.1082),(0.9108, 0.1023),(0.9193, 0.09673),(0.92, 0.1026),(0.9241, 0.09988),(0.9235, 0.09403),(0.8912, 0.1233),(0.891, 0.1215),(0.8999, 0.1157),(0.8993, 0.1098),(0.8903, 0.1157),(0.881, 0.1218),(0.8816, 0.1277),(0.8783, 0.1298),(0.8776, 0.124),(0.8803, 0.1223),(0.8809, 0.1281),(0.8894, 0.1233),(0.8893, 0.1226),(0.8887, 0.1168),(0.8975, 0.111),(0.8982, 0.1168),(0.902, 0.1143),(0.9014, 0.1085),(0.8526, 0.1068),(0.8617, 0.1008),(0.8612, 0.09563),(0.8521, 0.1016),(0.8702, 0.08973),(0.8709, 0.09485),(0.8741, 0.09274),(0.8734, 0.08764),(0.8704, 0.08957),(0.8711, 0.09469),(0.8616, 0.1009),(0.861, 0.09575),(0.8516, 0.1019),(0.8521, 0.1071),(0.8492, 0.109),(0.8488, 0.1037),(0.9585, 0.03763),(0.9582, 0.03778),(0.9578, 0.03251),(0.958, 0.03239),(0.9587, 0.03192),(0.9592, 0.03716),(0.9611, 0.0359),(0.9605, 0.03073),(0.9621, 0.02971),(0.9628, 0.03482),(0.9629, 0.03473),(0.9622, 0.02964),(0.9612, 0.03028),(0.9619, 0.0354),(0.96, 0.0366),(0.9595, 0.03142),(0.961, 0.03597),(0.9595, 0.03694),(0.9588, 0.03185),(0.9603, 0.03087),(0.9563, 0.0335),(0.9569, 0.03863),(0.9547, 0.04012),(0.9541, 0.03492),(0.9533, 0.03548),(0.9537, 0.04074),(0.9551, 0.03981),(0.9547, 0.03454),(0.9572, 0.03292),(0.9577, 0.03816),(0.96, 0.03662),(0.9594, 0.03147),(0.9546, 0.04012),(0.9506, 0.04274),(0.95, 0.03763),(0.9539, 0.03504),(0.9451, 0.04082),(0.9457, 0.04599),(0.9429, 0.04783),(0.9424, 0.0426),(0.9425, 0.04248),(0.943, 0.04774),(0.9468, 0.04526),(0.9463, 0.04001),(0.951, 0.03695),(0.9515, 0.04215),(0.9546, 0.04018),(0.9539, 0.03505),(0.9412, 0.04889),(0.9332, 0.05411),(0.9326, 0.04897),(0.9405, 0.0438),(0.9238, 0.05471),(0.9243, 0.05992),(0.9201, 0.06267),(0.9197, 0.05742),(0.9211, 0.05648),(0.9216, 0.06174),(0.9296, 0.05648),(0.9291, 0.05126),(0.938, 0.04547),(0.9386, 0.05063),(0.9427, 0.04792),(0.942, 0.04281),(0.9186, 0.06368),(0.9106, 0.06889),(0.91, 0.06373),(0.9179, 0.05858),(0.9013, 0.06939),(0.9018, 0.07461),(0.898, 0.07709),(0.8976, 0.07184),(0.8993, 0.07074),(0.8997, 0.07599),(0.9074, 0.07098),(0.9069, 0.06578),(0.9152, 0.06031),(0.9159, 0.06545),(0.92, 0.06277),(0.9193, 0.05767),(0.8958, 0.07858),(0.8869, 0.0844),(0.8863, 0.07922),(0.8951, 0.07347),(0.8771, 0.08524),(0.8776, 0.09047),(0.8743, 0.09263),(0.8738, 0.08737),(0.8764, 0.08568),(0.8769, 0.09093),(0.8853, 0.08545),(0.8847, 0.08026),(0.8934, 0.07458),(0.894, 0.0797),(0.8979, 0.07722),(0.8972, 0.07212),(0.8726, 0.1104),(0.8634, 0.1163),(0.8542, 0.1223),(0.8728, 0.1102),(0.8758, 0.1082),(0.8537, 0.1227),(0.8633, 0.1165),(0.8509, 0.1246),(0.9608, 0.05274),(0.9599, 0.05337),(0.9601, 0.05322),(0.9645, 0.05032),(0.9628, 0.05144),(0.9637, 0.0509),(0.9647, 0.05021),(0.9617, 0.05214),(0.9587, 0.05413),(0.9613, 0.05242),(0.9628, 0.05146),(0.9553, 0.05632),(0.9563, 0.05567),(0.9593, 0.05373),(0.9568, 0.0554),(0.9617, 0.05215),(0.9474, 0.06152),(0.9524, 0.05824),(0.9564, 0.05561),(0.9446, 0.06333),(0.9445, 0.06339),(0.9532, 0.05771),(0.9484, 0.06085),(0.9563, 0.0557),(0.926, 0.07546),(0.935, 0.06962),(0.943, 0.06439),(0.9232, 0.07731),(0.9218, 0.07824),(0.9403, 0.06617),(0.9313, 0.07204),(0.9445, 0.06343),(0.9035, 0.09017),(0.9123, 0.08441),(0.9203, 0.07919),(0.9014, 0.09156),(0.8997, 0.09266),(0.9176, 0.08097),(0.9091, 0.08653),(0.9217, 0.07828),(0.8792, 0.106),(0.8886, 0.09993),(0.8975, 0.09409),(0.8785, 0.1065),(0.8759, 0.1082),(0.8958, 0.09522),(0.887, 0.101),(0.8996, 0.09272)]

IndexedFaceSet734.texCoord = TextureCoordinate735
Coordinate736 = x3d.Coordinate(DEF="Upper_teeth_COORD_JinBlink")
Coordinate736.point = [(-2.78, 0.8496, -1.608),(-2.777, 0.2987, -1.683),(-2.125, 0.1308, -1.676),(-2.789, 0.7394, -0.8298),(-2.786, 0.189, -0.9075),(-2.157, 0.06281, -0.9464),(-2.677, 0.6356, -0.09551),(-2.674, 0.08531, -0.1741),(-2.131, -0.02711, -0.275),(-2.371, 0.5392, 0.586),(-2.368, -0.01099, 0.5068),(-2.006, -0.1174, 0.3632),(-1.911, 0.4495, 1.22),(-1.909, -0.1006, 1.14),(-1.713, -0.2048, 0.9811),(-1.336, 0.3957, 1.601),(-1.335, -0.1543, 1.52),(-1.253, -0.2541, 1.33),(-0.6794, 0.3711, 1.775),(-0.679, -0.1789, 1.694),(-0.6546, -0.2767, 1.49),(0, -0.1852, 1.738),(0, -0.2819, 1.526),(-2.122, 0.1608, -1.675),(-1.93, 0.2856, -0.9938),(-1.906, 0.2319, -0.3884),(-1.794, 0.1511, 0.183),(-1.533, 0.07302, 0.7347),(-1.121, 0.02888, 1.047),(-0.5859, 0.00863, 1.19),(0, 0.003966, 1.223),(-2.684, 0.1398, -1.684),(-2.219, 0.1235, -1.665),(-2.213, 0.01946, -0.946),(-2.185, -0.07577, -0.2727),(-2.054, -0.1661, 0.366),(-1.749, -0.258, 1.016),(-1.275, -0.3067, 1.36),(-0.6617, -0.3291, 1.518),(-0.6764, -0.3421, 1.653),(-1.33, -0.3185, 1.486),(-1.895, -0.2665, 1.118),(-2.345, -0.1745, 0.4679),(-2.642, -0.07965, -0.2028),(-2.743, 0.02301, -0.9288),(0, 0.1811, -1.486),(-2.23, -0.3493, -1.636),(-2.257, -0.4254, -1.098),(-2.702, -0.4264, -1.091),(-2.682, -0.3471, -1.651),(-0.5807, -0.7901, 1.481),(-0.08538, -0.7931, 1.503),(-0.08698, -0.8081, 1.608),(-0.5887, -0.8044, 1.582),(-0.7603, -0.8007, 1.556),(-1.244, -0.7838, 1.437),(-1.21, -0.7703, 1.341),(-0.7458, -0.7868, 1.458),(-1.402, -0.7742, 1.369),(-1.811, -0.7368, 1.104),(-1.714, -0.7257, 1.026),(-1.351, -0.7613, 1.278),(-1.943, -0.7183, 0.9738),(-2.266, -0.6481, 0.4769),(-2.054, -0.6365, 0.3949),(-1.813, -0.7073, 0.8956),(-2.365, -0.6241, 0.3072),(-2.572, -0.5544, -0.1856),(-2.216, -0.5456, -0.2477),(-2.106, -0.6128, 0.2276),(-2.626, -0.5291, -0.3645),(-2.692, -0.4533, -0.9005),(-2.26, -0.4504, -0.921),(-2.233, -0.5219, -0.415),(-2.122, -0.3642, -1.749),(-2.295, -0.4218, -1.574),(-2.314, -0.4778, -1.178),(-2.638, -0.4781, -1.176),(-2.623, -0.4207, -1.582),(-0.5147, -0.8554, 1.492),(-0.153, -0.8577, 1.508),(-0.1549, -0.8677, 1.579),(-0.5193, -0.8651, 1.561),(-0.8237, -0.8587, 1.515),(-1.172, -0.8465, 1.429),(-1.152, -0.8373, 1.364),(-0.8114, -0.8494, 1.449),(-1.449, -0.8296, 1.31),(-1.739, -0.8027, 1.119),(-1.679, -0.7949, 1.064),(-1.409, -0.8211, 1.249),(-1.968, -0.7698, 0.8862),(-2.192, -0.7184, 0.5231),(-2.053, -0.7103, 0.4657),(-1.864, -0.7619, 0.8308),(-2.357, -0.6756, 0.2203),(-2.494, -0.6252, -0.1362),(-2.251, -0.6185, -0.1834),(-2.157, -0.6678, 0.1655),(-2.581, -0.5804, -0.453),(-2.623, -0.5257, -0.8394),(-2.316, -0.523, -0.8586),(-2.291, -0.5758, -0.4854),(-2.228, 0.02897, -1.584),(-2.256, -0.04748, -1.043),(-2.704, -0.04851, -1.036),(-2.683, 0.03117, -1.599),(-0.582, -0.4116, 1.532),(-0.08377, -0.4146, 1.553),(-0.08547, -0.4304, 1.665),(-0.5905, -0.4267, 1.639),(-0.7592, -0.4232, 1.613),(-1.246, -0.4061, 1.493),(-1.21, -0.3918, 1.391),(-0.7438, -0.4083, 1.509),(-1.402, -0.3967, 1.426),(-1.815, -0.3589, 1.159),(-1.713, -0.3471, 1.076),(-1.348, -0.383, 1.329),(-1.945, -0.3406, 1.03),(-2.27, -0.27, 0.5304),(-2.052, -0.2581, 0.4462),(-1.81, -0.3292, 0.9487),(-2.367, -0.2463, 0.3627),(-2.575, -0.1762, -0.1332),(-2.214, -0.1673, -0.1961),(-2.104, -0.2349, 0.2818),(-2.628, -0.1513, -0.3093),(-2.694, -0.07502, -0.8484),(-2.258, -0.07211, -0.869),(-2.231, -0.144, -0.3604),(-2.122, 0.08236, -1.686),(2.78, 0.8496, -1.608),(2.777, 0.2987, -1.683),(2.786, 0.189, -0.9075),(2.789, 0.7394, -0.8298),(2.125, 0.1308, -1.676),(2.122, 0.1608, -1.675),(1.93, 0.2856, -0.9938),(2.157, 0.06281, -0.9464),(2.674, 0.08531, -0.1741),(2.677, 0.6356, -0.09551),(1.906, 0.2319, -0.3884),(2.131, -0.02711, -0.275),(2.368, -0.01099, 0.5068),(2.371, 0.5392, 0.586),(1.794, 0.1511, 0.183),(2.006, -0.1174, 0.3632),(1.909, -0.1006, 1.14),(1.911, 0.4495, 1.22),(1.533, 0.07302, 0.7347),(1.713, -0.2048, 0.9811),(1.335, -0.1543, 1.52),(1.336, 0.3957, 1.601),(1.121, 0.02888, 1.047),(1.253, -0.2541, 1.33),(0.679, -0.1789, 1.694),(0.6794, 0.3711, 1.775),(0.5859, 0.00863, 1.19),(0.6546, -0.2767, 1.49),(0, 0.3648, 1.819),(2.213, 0.01946, -0.946),(2.219, 0.1235, -1.665),(2.185, -0.07577, -0.2727),(2.054, -0.1661, 0.366),(1.749, -0.258, 1.016),(1.275, -0.3067, 1.36),(0.6617, -0.3291, 1.518),(0, -0.3335, 1.55),(0.6764, -0.3421, 1.653),(0, -0.3476, 1.692),(1.33, -0.3185, 1.486),(1.895, -0.2665, 1.118),(2.345, -0.1745, 0.4679),(2.642, -0.07966, -0.2028),(2.743, 0.02301, -0.9288),(2.684, 0.1398, -1.684),(2.295, -0.4218, -1.574),(2.314, -0.4778, -1.178),(2.638, -0.4781, -1.176),(2.623, -0.4207, -1.582),(0.5147, -0.8554, 1.492),(0.153, -0.8577, 1.508),(0.1549, -0.8677, 1.579),(0.5193, -0.8651, 1.561),(0.8237, -0.8587, 1.515),(1.172, -0.8465, 1.429),(1.152, -0.8373, 1.364),(0.8114, -0.8494, 1.449),(1.449, -0.8296, 1.31),(1.739, -0.8027, 1.119),(1.679, -0.7949, 1.064),(1.409, -0.8211, 1.249),(1.968, -0.7698, 0.8862),(2.192, -0.7184, 0.5231),(2.053, -0.7103, 0.4657),(1.864, -0.7619, 0.8308),(2.357, -0.6756, 0.2203),(2.494, -0.6252, -0.1362),(2.251, -0.6185, -0.1834),(2.157, -0.6678, 0.1655),(2.581, -0.5804, -0.453),(2.623, -0.5257, -0.8394),(2.316, -0.523, -0.8586),(2.291, -0.5758, -0.4854),(2.256, -0.04748, -1.043),(2.228, 0.02897, -1.584),(2.704, -0.04851, -1.036),(2.683, 0.03117, -1.599),(0.08377, -0.4146, 1.553),(0.582, -0.4116, 1.532),(0.08547, -0.4304, 1.665),(0.5905, -0.4267, 1.639),(1.246, -0.4061, 1.493),(0.7592, -0.4232, 1.613),(1.21, -0.3918, 1.391),(0.7438, -0.4083, 1.509),(1.815, -0.3589, 1.159),(1.402, -0.3967, 1.426),(1.713, -0.3471, 1.076),(1.348, -0.383, 1.329),(2.27, -0.27, 0.5304),(1.945, -0.3406, 1.03),(2.052, -0.2581, 0.4462),(1.81, -0.3292, 0.9487),(2.575, -0.1762, -0.1332),(2.367, -0.2463, 0.3627),(2.214, -0.1673, -0.1961),(2.104, -0.2349, 0.2818),(2.694, -0.07502, -0.8484),(2.628, -0.1513, -0.3093),(2.258, -0.07211, -0.869),(2.231, -0.144, -0.3604),(2.122, 0.08236, -1.686),(0, 0.08788, -1.693),(2.23, -0.3493, -1.636),(2.257, -0.4254, -1.098),(2.702, -0.4264, -1.091),(2.682, -0.3471, -1.651),(0.5807, -0.7901, 1.481),(0.08538, -0.7931, 1.503),(0.08698, -0.8081, 1.608),(0.5887, -0.8044, 1.582),(0.7603, -0.8007, 1.556),(1.244, -0.7838, 1.437),(1.21, -0.7703, 1.341),(0.7458, -0.7868, 1.458),(1.402, -0.7742, 1.369),(1.811, -0.7368, 1.104),(1.714, -0.7257, 1.026),(1.351, -0.7613, 1.278),(1.943, -0.7183, 0.9738),(2.266, -0.6481, 0.4769),(2.054, -0.6365, 0.3949),(1.813, -0.7073, 0.8956),(2.365, -0.6241, 0.3072),(2.572, -0.5544, -0.1856),(2.216, -0.5456, -0.2477),(2.106, -0.6128, 0.2276),(2.626, -0.5291, -0.3645),(2.692, -0.4533, -0.9005),(2.26, -0.4504, -0.921),(2.233, -0.5219, -0.415),(2.122, -0.3642, -1.749),(0, -0.363, -1.757),(-2.792, 0.4871, -1.259),(-2.142, 0.1746, -1.297),(-2.754, 0.3796, -0.4991),(-2.151, 0.1543, -0.5849),(-2.546, 0.2799, 0.2059),(-2.083, 0.06273, 0.0628),(-2.157, 0.1847, 0.8788),(-1.879, -0.02861, 0.7087),(-1.636, 0.1112, 1.399),(-1.501, -0.09869, 1.204),(-1.014, 0.07351, 1.665),(-0.9654, -0.1327, 1.445),(-0.3407, 0.05918, 1.766),(-0.3302, -0.1456, 1.536),(-2.154, 0.07289, -1.306),(-2.162, -0.02563, -0.6098),(-2.094, -0.1175, 0.03959),(-1.889, -0.2092, 0.6885),(-1.508, -0.2798, 1.188),(-0.9686, -0.3141, 1.43),(-0.3311, -0.327, 1.521),(-0.3399, -0.299, 1.704),(-1.011, -0.2848, 1.603),(-1.63, -0.2473, 1.339),(-2.148, -0.1741, 0.821),(-2.536, -0.0793, 0.1506),(-2.743, 0.02005, -0.5519),(-2.781, 0.1265, -1.305),(-1.428, 0.2447, -1.416),(-1.434, 0.2838, -0.9337),(-1.388, 0.2227, -0.5019),(-1.253, 0.1618, -0.07126),(-1.001, 0.1151, 0.2591),(-0.6436, 0.09241, 0.4196),(-0.2202, 0.08385, 0.4801),(-2.468, -0.4496, -1.378),(-0.3355, -0.8615, 1.535),(-0.9899, -0.848, 1.439),(-1.569, -0.8121, 1.185),(-2.019, -0.7401, 0.6765),(-2.315, -0.6468, 0.01655),(-2.453, -0.5512, -0.6591),(-2.166, 0.06133, -1.303),(-2.484, 0.009624, -0.9372),(-2.769, 0.0621, -1.308),(-2.452, 0.1138, -1.674),(-0.332, -0.3396, 1.532),(-0.0005068, -0.3524, 1.623),(-0.3389, -0.3607, 1.682),(-0.6704, -0.3479, 1.591),(-1.007, -0.3466, 1.582),(-1.308, -0.3254, 1.432),(-0.9723, -0.3267, 1.441),(-0.6714, -0.3479, 1.591),(-1.622, -0.3094, 1.319),(-1.829, -0.2762, 1.084),(-1.516, -0.2921, 1.196),(-1.309, -0.3254, 1.432),(-2.138, -0.2367, 0.8045),(-2.208, -0.1815, 0.4145),(-1.9, -0.2209, 0.693),(-1.83, -0.2761, 1.083),(-2.524, -0.1423, 0.137),(-2.422, -0.0895, -0.2363),(-2.106, -0.1286, 0.04056),(-2.209, -0.1814, 0.4139),(-2.731, -0.04331, -0.5628),(-2.484, 0.00952, -0.9364),(-2.174, -0.03654, -0.6107),(-2.422, -0.08937, -0.2371),(-1.061, 0.1611, -1.68),(-2.173, -0.45, -1.375),(-2.483, -0.5009, -1.015),(-2.763, -0.4492, -1.381),(-2.452, -0.3983, -1.74),(-0.3324, -0.8523, 1.47),(-0.006795, -0.8637, 1.55),(-0.3385, -0.8706, 1.6),(-0.6641, -0.8593, 1.519),(-1.005, -0.8566, 1.5),(-1.302, -0.837, 1.361),(-0.9747, -0.8394, 1.378),(-0.6778, -0.859, 1.517),(-1.616, -0.8197, 1.239),(-1.823, -0.788, 1.015),(-1.522, -0.8045, 1.132),(-1.315, -0.8361, 1.355),(-2.13, -0.7474, 0.7281),(-2.205, -0.6935, 0.3471),(-1.908, -0.7328, 0.6249),(-1.833, -0.7867, 1.006),(-2.516, -0.6533, 0.06285),(-2.419, -0.6016, -0.3027),(-2.114, -0.6402, -0.02979),(-2.211, -0.6919, 0.3357),(-2.724, -0.5545, -0.6358),(-2.483, -0.5026, -1.003),(-2.181, -0.5479, -0.6824),(-2.422, -0.5998, -0.3154),(-2.167, -0.1997, -1.34),(-2.484, -0.2513, -0.9747),(-2.768, -0.199, -1.345),(-2.452, -0.1473, -1.71),(-0.3321, -0.6012, 1.499),(-0.00152, -0.6135, 1.586),(-0.3388, -0.6213, 1.641),(-0.6694, -0.609, 1.554),(-1.007, -0.6072, 1.542),(-1.307, -0.5865, 1.395),(-0.9732, -0.5883, 1.408),(-0.6725, -0.6089, 1.554),(-1.62, -0.5701, 1.279),(-1.828, -0.5373, 1.047),(-1.518, -0.5535, 1.162),(-1.311, -0.5863, 1.394),(-2.135, -0.4976, 0.7662),(-2.208, -0.4427, 0.3781),(-1.903, -0.4822, 0.6574),(-1.83, -0.5371, 1.046),(-2.522, -0.4033, 0.09959),(-2.421, -0.3507, -0.2723),(-2.108, -0.3898, 0.004185),(-2.209, -0.4424, 0.3761),(-2.729, -0.3044, -0.5999),(-2.484, -0.2517, -0.9725),(-2.176, -0.2976, -0.6475),(-2.422, -0.3503, -0.2749),(-1.061, -0.1087, -1.718),(2.792, 0.4871, -1.259),(2.142, 0.1746, -1.297),(2.754, 0.3796, -0.4991),(2.151, 0.1543, -0.5849),(2.546, 0.2799, 0.2059),(2.083, 0.06273, 0.0628),(2.157, 0.1847, 0.8788),(1.879, -0.02861, 0.7087),(1.636, 0.1112, 1.399),(1.501, -0.09869, 1.204),(1.014, 0.07351, 1.665),(0.9654, -0.1327, 1.445),(0.3407, 0.05918, 1.766),(0.3302, -0.1456, 1.536),(2.154, 0.07289, -1.306),(2.162, -0.02563, -0.6098),(2.094, -0.1175, 0.03959),(1.889, -0.2092, 0.6885),(1.508, -0.2798, 1.188),(0.9686, -0.3141, 1.43),(0.3311, -0.327, 1.521),(0.3399, -0.299, 1.704),(1.011, -0.2848, 1.603),(1.63, -0.2473, 1.339),(2.148, -0.1741, 0.821),(2.536, -0.0793, 0.1506),(2.743, 0.02005, -0.5519),(2.781, 0.1265, -1.305),(1.428, 0.2447, -1.416),(1.434, 0.2838, -0.9336),(1.388, 0.2227, -0.5019),(1.253, 0.1618, -0.07126),(1.001, 0.1151, 0.2591),(0.6436, 0.09241, 0.4196),(0.2202, 0.08385, 0.4801),(2.468, -0.4496, -1.378),(0.3355, -0.8615, 1.535),(0.9899, -0.848, 1.439),(1.569, -0.8121, 1.185),(2.019, -0.7401, 0.6765),(2.315, -0.6468, 0.01655),(2.453, -0.5512, -0.6591),(2.166, 0.06133, -1.303),(2.484, 0.009624, -0.9372),(2.769, 0.0621, -1.308),(2.452, 0.1138, -1.674),(0.332, -0.3396, 1.532),(0.0005065, -0.3524, 1.623),(0.3389, -0.3607, 1.682),(0.6704, -0.3479, 1.591),(1.007, -0.3466, 1.582),(1.308, -0.3254, 1.432),(0.9723, -0.3267, 1.441),(0.6714, -0.3479, 1.591),(1.622, -0.3094, 1.319),(1.829, -0.2762, 1.084),(1.516, -0.2921, 1.196),(1.309, -0.3254, 1.432),(2.138, -0.2367, 0.8045),(2.208, -0.1815, 0.4145),(1.9, -0.2209, 0.693),(1.83, -0.2761, 1.083),(2.524, -0.1423, 0.137),(2.422, -0.0895, -0.2363),(2.106, -0.1286, 0.04056),(2.209, -0.1814, 0.4139),(2.731, -0.04332, -0.5628),(2.484, 0.009519, -0.9364),(2.174, -0.03654, -0.6107),(2.422, -0.08938, -0.2371),(1.061, 0.1611, -1.68),(2.173, -0.45, -1.375),(2.483, -0.5009, -1.015),(2.763, -0.4492, -1.381),(2.452, -0.3983, -1.74),(0.3324, -0.8523, 1.47),(0.006795, -0.8637, 1.55),(0.3385, -0.8706, 1.6),(0.6641, -0.8593, 1.519),(1.005, -0.8566, 1.5),(1.302, -0.837, 1.361),(0.9747, -0.8394, 1.378),(0.6778, -0.859, 1.517),(1.616, -0.8197, 1.239),(1.823, -0.788, 1.015),(1.522, -0.8045, 1.132),(1.315, -0.8361, 1.355),(2.13, -0.7474, 0.7281),(2.205, -0.6935, 0.3471),(1.908, -0.7328, 0.6249),(1.833, -0.7867, 1.006),(2.516, -0.6533, 0.06285),(2.419, -0.6016, -0.3027),(2.114, -0.6402, -0.02979),(2.211, -0.6919, 0.3357),(2.724, -0.5545, -0.6358),(2.483, -0.5026, -1.003),(2.181, -0.5479, -0.6824),(2.422, -0.5998, -0.3154),(2.167, -0.1997, -1.34),(2.484, -0.2513, -0.9747),(2.768, -0.199, -1.345),(2.452, -0.1473, -1.71),(0.3321, -0.6012, 1.499),(0.00152, -0.6135, 1.586),(0.3388, -0.6213, 1.641),(0.6694, -0.609, 1.554),(1.007, -0.6072, 1.542),(1.307, -0.5865, 1.395),(0.9732, -0.5883, 1.408),(0.6725, -0.6089, 1.554),(1.62, -0.5701, 1.279),(1.828, -0.5373, 1.047),(1.518, -0.5535, 1.162),(1.311, -0.5863, 1.394),(2.135, -0.4976, 0.7662),(2.208, -0.4427, 0.3781),(1.903, -0.4822, 0.6574),(1.83, -0.5371, 1.046),(2.522, -0.4033, 0.09959),(2.421, -0.3507, -0.2723),(2.108, -0.3898, 0.004185),(2.209, -0.4424, 0.3761),(2.729, -0.3044, -0.5999),(2.484, -0.2517, -0.9725),(2.176, -0.2976, -0.6475),(2.422, -0.3503, -0.2749),(1.061, -0.1087, -1.718),(-2.78, 0.5426, -1.652),(-2.122, 0.1477, -1.677),(-2.789, 0.4325, -0.8732),(-2.792, 0.7941, -1.216),(-2.79, 0.2435, -1.293),(-2.145, 0.09869, -1.307),(-2.677, 0.3286, -0.1389),(-2.754, 0.6865, -0.4557),(-2.751, 0.1362, -0.534),(-2.154, 0.0194, -0.6038),(-2.371, 0.2322, 0.5426),(-2.546, 0.5868, 0.2493),(-2.544, 0.03659, 0.1703),(-2.085, -0.07226, 0.04428),(-1.911, 0.1426, 1.177),(-2.157, 0.4917, 0.9222),(-2.155, -0.05849, 0.8426),(-1.881, -0.1637, 0.6909),(-1.336, 0.08874, 1.557),(-1.636, 0.4181, 1.442),(-1.634, -0.1319, 1.362),(-1.503, -0.2339, 1.187),(-0.6794, 0.06411, 1.731),(-1.014, 0.3805, 1.708),(-1.013, -0.1695, 1.628),(-0.9662, -0.268, 1.429),(0, 0.05784, 1.776),(-0.3407, 0.3661, 1.81),(-0.3405, -0.1838, 1.729),(-0.3304, -0.2809, 1.519),(-2.154, 0.183, -0.9298),(-2.128, 0.1079, -0.2563),(-2.003, 0.01768, 0.3814),(-1.711, -0.06958, 0.9984),(-1.252, -0.1188, 1.346),(-0.6541, -0.1414, 1.506),(0, -0.1466, 1.543),(-1.963, 0.2426, -1.32),(-1.972, 0.2766, -0.6594),(-1.909, 0.1927, -0.06564),(-1.722, 0.1089, 0.5264),(-1.376, 0.0447, 0.9807),(-0.8849, 0.0135, 1.201),(-0.3027, 0.001732, 1.285),(-2.162, 0.06963, -1.303),(-2.171, -0.0284, -0.6098),(-2.102, -0.1204, 0.04094),(-1.897, -0.2125, 0.6923),(-1.514, -0.2835, 1.194),(-0.9712, -0.318, 1.438),(-0.3317, -0.3309, 1.529),(-0.3392, -0.34, 1.689),(-1.009, -0.3259, 1.589),(-1.625, -0.2886, 1.325),(-2.141, -0.2157, 0.8097),(-2.528, -0.1212, 0.1413),(-2.734, -0.02207, -0.5593),(-2.773, 0.08362, -1.307),(-2.769, 0.1812, -1.691),(-2.134, 0.1242, -1.669),(-2.166, 0.02262, -0.951),(-2.14, -0.07222, -0.2804),(-2.014, -0.1627, 0.3595),(-1.72, -0.2505, 0.9801),(-1.257, -0.3001, 1.331),(-0.656, -0.3228, 1.492),(0, -0.328, 1.528),(-0.6776, -0.2941, 1.669),(-1.331, -0.2696, 1.496),(-1.903, -0.2161, 1.118),(-2.361, -0.1268, 0.4862),(-2.666, -0.03071, -0.1929),(-2.778, 0.0726, -0.9234),(-1.153, 0.1896, -1.613),(-1.256, 0.2732, -1.231),(-1.241, 0.2441, -0.8359),(-1.167, 0.1914, -0.4632),(-0.9965, 0.1411, -0.1071),(-0.7287, 0.1121, 0.09755),(-0.3811, 0.09886, 0.1912),(0, 0.09574, 0.2133),(-2.452, 0.1247, -1.673),(-2.484, 0.01499, -0.9361),(-0.6709, -0.3425, 1.592),(-1.309, -0.32, 1.433),(-1.83, -0.2707, 1.084),(-2.209, -0.1761, 0.415),(-2.422, -0.08402, -0.236),(-2.227, 0.09968, -1.574),(-2.255, 0.02316, -1.033),(-2.704, 0.02213, -1.026),(-2.684, 0.1019, -1.59),(-2.169, -0.3874, -1.366),(-2.484, -0.4388, -1.003),(-2.766, -0.3866, -1.372),(-2.452, -0.3352, -1.735),(-0.5823, -0.3407, 1.54),(-0.08337, -0.3438, 1.562),(-0.08511, -0.36, 1.676),(-0.591, -0.3563, 1.65),(-0.3323, -0.7892, 1.475),(-0.003092, -0.8011, 1.559),(-0.3387, -0.8086, 1.612),(-0.6678, -0.7967, 1.528),(-0.7589, -0.3527, 1.625),(-1.247, -0.3356, 1.504),(-1.21, -0.3209, 1.4),(-0.7432, -0.3375, 1.517),(-1.006, -0.7945, 1.513),(-1.306, -0.7743, 1.369),(-0.9738, -0.7763, 1.383),(-0.6741, -0.7966, 1.527),(-1.402, -0.3262, 1.438),(-1.816, -0.2883, 1.17),(-1.712, -0.2763, 1.085),(-1.347, -0.3122, 1.338),(-1.618, -0.7575, 1.251),(-1.826, -0.7252, 1.022),(-1.52, -0.7415, 1.137),(-1.312, -0.7739, 1.366),(-1.946, -0.2701, 1.041),(-2.271, -0.1994, 0.5406),(-2.051, -0.1873, 0.4556),(-1.809, -0.2584, 0.9582),(-2.133, -0.6851, 0.7387),(-2.207, -0.6305, 0.3528),(-1.905, -0.67, 0.6319),(-1.831, -0.7246, 1.018),(-2.368, -0.1757, 0.3733),(-2.576, -0.1055, -0.1234),(-2.214, -0.09652, -0.1866),(-2.103, -0.1642, 0.2919),(-2.52, -0.5909, 0.07258),(-2.421, -0.5386, -0.2974),(-2.11, -0.5775, -0.02187),(-2.209, -0.6299, 0.3481),(-2.628, -0.08063, -0.299),(-2.695, -0.004303, -0.8387),(-2.257, -0.001381, -0.8594),(-2.231, -0.07339, -0.3502),(-2.728, -0.492, -0.6266),(-2.483, -0.4395, -0.9976),(-2.178, -0.4853, -0.6739),(-2.422, -0.5378, -0.3029),(-1.061, -0.3634, -1.754),(-2.122, 0.156, -1.675),(-2.249, -0.4499, -1.376),(-2.479, -0.4877, -1.108),(-2.687, -0.4493, -1.38),(-2.456, -0.4115, -1.647),(-2.233, -0.4122, -1.642),(-2.26, -0.4875, -1.109),(-2.699, -0.4886, -1.102),(-2.679, -0.41, -1.657),(-0.3333, -0.8549, 1.488),(-0.09134, -0.8631, 1.546),(-0.3376, -0.868, 1.581),(-0.5796, -0.8598, 1.523),(-0.5782, -0.8531, 1.476),(-0.08821, -0.8561, 1.497),(-0.08971, -0.8702, 1.596),(-0.5857, -0.8665, 1.57),(-1.001, -0.8541, 1.482),(-1.222, -0.8398, 1.381),(-0.9791, -0.8419, 1.396),(-0.7581, -0.8562, 1.497),(-0.7626, -0.8628, 1.544),(-1.24, -0.846, 1.426),(-1.208, -0.8334, 1.336),(-0.749, -0.8497, 1.451),(-1.602, -0.8175, 1.224),(-1.757, -0.7942, 1.059),(-1.536, -0.8067, 1.147),(-1.381, -0.8299, 1.312),(-1.402, -0.8362, 1.356),(-1.806, -0.7993, 1.095),(-1.713, -0.7887, 1.02),(-1.355, -0.824, 1.27),(-2.1, -0.7454, 0.7141),(-2.158, -0.7055, 0.4315),(-1.938, -0.7348, 0.6388),(-1.881, -0.7747, 0.9214),(-1.942, -0.7804, 0.9611),(-2.262, -0.7108, 0.4692),(-2.056, -0.6995, 0.3896),(-1.816, -0.7697, 0.8859),(-2.464, -0.6516, 0.05072),(-2.393, -0.6132, -0.2206),(-2.166, -0.6419, -0.01764),(-2.237, -0.6803, 0.2537),(-2.364, -0.6862, 0.2949),(-2.568, -0.6172, -0.1924),(-2.218, -0.6086, -0.2534),(-2.11, -0.6751, 0.2169),(-2.654, -0.5537, -0.6418),(-2.475, -0.5151, -0.9145),(-2.252, -0.5488, -0.6764),(-2.43, -0.5873, -0.4037),(-2.624, -0.5912, -0.3764),(-2.689, -0.5162, -0.9068),(-2.262, -0.5133, -0.9269),(-2.236, -0.5842, -0.4263),(-2.228, -0.1614, -1.61),(-2.256, -0.2378, -1.07),(-2.703, -0.2389, -1.063),(-2.683, -0.1593, -1.626),(-0.5818, -0.6022, 1.506),(-0.08417, -0.6052, 1.527),(-0.08583, -0.6206, 1.637),(-0.5901, -0.617, 1.61),(-0.7594, -0.6134, 1.585),(-1.246, -0.5963, 1.465),(-1.21, -0.5824, 1.366),(-0.7444, -0.5989, 1.483),(-1.401, -0.5869, 1.398),(-1.813, -0.5492, 1.131),(-1.713, -0.5377, 1.05),(-1.349, -0.5735, 1.303),(-1.944, -0.5309, 1.002),(-2.268, -0.4604, 0.5032),(-2.053, -0.4486, 0.4199),(-1.811, -0.5196, 0.9222),(-2.366, -0.4366, 0.3353),(-2.574, -0.3666, -0.1599),(-2.215, -0.3577, -0.2226),(-2.104, -0.4252, 0.2548),(-2.627, -0.3416, -0.3366),(-2.693, -0.2654, -0.875),(-2.258, -0.2625, -0.8956),(-2.232, -0.3344, -0.3875),(-2.122, -0.111, -1.713),(-2.167, -0.009349, -1.313),(-2.484, -0.06101, -0.9475),(-2.769, -0.008573, -1.318),(-2.452, 0.04308, -1.684),(-0.332, -0.4105, 1.524),(-0.001013, -0.4231, 1.613),(-0.3389, -0.4312, 1.67),(-0.6699, -0.4186, 1.581),(-1.007, -0.4171, 1.57),(-1.308, -0.3961, 1.422),(-0.9727, -0.3976, 1.433),(-0.672, -0.4186, 1.581),(-1.621, -0.3799, 1.308),(-1.829, -0.3469, 1.074),(-1.517, -0.363, 1.188),(-1.31, -0.396, 1.421),(-2.137, -0.3073, 0.7938),(-2.208, -0.2522, 0.4048),(-1.901, -0.2917, 0.6837),(-1.83, -0.3467, 1.073),(-2.523, -0.2129, 0.1268),(-2.421, -0.1602, -0.2458),(-2.107, -0.1994, 0.03084),(-2.209, -0.2521, 0.4034),(-2.73, -0.114, -0.5729),(-2.484, -0.06121, -0.946),(-2.175, -0.1072, -0.6207),(-2.422, -0.16, -0.2476),(-1.061, 0.08604, -1.691),(2.78, 0.5426, -1.652),(2.79, 0.2435, -1.293),(2.789, 0.4325, -0.8732),(2.792, 0.7941, -1.216),(2.122, 0.1477, -1.677),(1.963, 0.2426, -1.32),(2.154, 0.183, -0.9298),(2.145, 0.09869, -1.307),(2.751, 0.1362, -0.534),(2.677, 0.3286, -0.1389),(2.754, 0.6865, -0.4557),(1.972, 0.2766, -0.6594),(2.128, 0.1079, -0.2563),(2.154, 0.0194, -0.6038),(2.544, 0.03659, 0.1703),(2.371, 0.2322, 0.5426),(2.546, 0.5868, 0.2493),(1.909, 0.1927, -0.06564),(2.003, 0.01768, 0.3814),(2.085, -0.07226, 0.04428),(2.155, -0.05849, 0.8426),(1.911, 0.1426, 1.177),(2.157, 0.4917, 0.9222),(1.722, 0.1089, 0.5264),(1.711, -0.06958, 0.9984),(1.881, -0.1637, 0.6909),(1.634, -0.1319, 1.362),(1.336, 0.08874, 1.557),(1.636, 0.4181, 1.442),(1.376, 0.0447, 0.9807),(1.252, -0.1188, 1.346),(1.503, -0.2339, 1.187),(1.013, -0.1695, 1.628),(0.6794, 0.06411, 1.731),(1.014, 0.3805, 1.708),(0.8849, 0.0135, 1.201),(0.6541, -0.1414, 1.506),(0.9662, -0.268, 1.429),(0.3405, -0.1838, 1.729),(0.3407, 0.3661, 1.81),(0.3027, 0.001732, 1.285),(0.3304, -0.2809, 1.519),(2.166, 0.02262, -0.951),(2.162, 0.06963, -1.303),(2.134, 0.1242, -1.669),(2.14, -0.07222, -0.2804),(2.171, -0.0284, -0.6098),(2.014, -0.1627, 0.3595),(2.102, -0.1204, 0.04094),(1.72, -0.2505, 0.9801),(1.897, -0.2125, 0.6923),(1.257, -0.3001, 1.331),(1.514, -0.2835, 1.194),(0.656, -0.3228, 1.492),(0.9712, -0.318, 1.438),(0.3317, -0.3309, 1.529),(0.6776, -0.2941, 1.669),(0.3392, -0.34, 1.689),(0, -0.3003, 1.713),(1.331, -0.2696, 1.496),(1.009, -0.3259, 1.589),(1.903, -0.2161, 1.118),(1.625, -0.2886, 1.325),(2.361, -0.1268, 0.4862),(2.141, -0.2157, 0.8097),(2.666, -0.03072, -0.1929),(2.528, -0.1212, 0.1413),(2.778, 0.07259, -0.9234),(2.734, -0.02207, -0.5593),(2.769, 0.1812, -1.691),(2.773, 0.08362, -1.307),(1.153, 0.1896, -1.613),(1.256, 0.2732, -1.231),(1.241, 0.2441, -0.8359),(1.167, 0.1914, -0.4632),(0.9965, 0.1411, -0.1071),(0.7287, 0.1121, 0.09755),(0.3811, 0.09886, 0.1912),(2.249, -0.4499, -1.376),(2.479, -0.4877, -1.108),(2.687, -0.4493, -1.38),(2.456, -0.4115, -1.647),(0.3333, -0.8549, 1.488),(0.09134, -0.8631, 1.546),(0.3376, -0.868, 1.581),(0.5796, -0.8598, 1.523),(1.001, -0.8541, 1.482),(1.222, -0.8398, 1.381),(0.9791, -0.8419, 1.396),(0.7581, -0.8562, 1.497),(1.602, -0.8175, 1.224),(1.757, -0.7942, 1.059),(1.536, -0.8067, 1.147),(1.381, -0.8299, 1.312),(2.1, -0.7454, 0.7141),(2.158, -0.7055, 0.4315),(1.938, -0.7348, 0.6388),(1.881, -0.7748, 0.9214),(2.464, -0.6516, 0.05072),(2.393, -0.6132, -0.2206),(2.166, -0.6419, -0.01764),(2.237, -0.6803, 0.2537),(2.654, -0.5537, -0.6418),(2.475, -0.5151, -0.9145),(2.252, -0.5488, -0.6764),(2.43, -0.5873, -0.4037),(2.255, 0.02316, -1.033),(2.167, -0.009349, -1.313),(2.227, 0.09968, -1.574),(2.484, 0.01499, -0.9361),(2.704, 0.02213, -1.026),(2.484, -0.06101, -0.9475),(2.684, 0.1019, -1.59),(2.769, -0.008573, -1.318),(2.452, 0.1247, -1.673),(2.452, 0.04308, -1.684),(0.08337, -0.3438, 1.562),(0.332, -0.4105, 1.524),(0.5823, -0.3407, 1.54),(0, -0.347, 1.624),(0.08511, -0.36, 1.676),(0.001013, -0.4231, 1.613),(0.591, -0.3563, 1.65),(0.3389, -0.4312, 1.67),(0.6709, -0.3425, 1.592),(0.6699, -0.4186, 1.581),(1.247, -0.3356, 1.504),(1.007, -0.4171, 1.57),(0.7589, -0.3527, 1.625),(1.309, -0.32, 1.433),(1.21, -0.3209, 1.4),(1.308, -0.3961, 1.422),(0.7432, -0.3375, 1.517),(0.9727, -0.3976, 1.433),(0.672, -0.4186, 1.581),(1.816, -0.2883, 1.17),(1.621, -0.3799, 1.308),(1.402, -0.3262, 1.438),(1.83, -0.2707, 1.084),(1.712, -0.2763, 1.085),(1.829, -0.3469, 1.074),(1.347, -0.3122, 1.338),(1.517, -0.363, 1.188),(1.31, -0.396, 1.421),(2.271, -0.1994, 0.5406),(2.137, -0.3073, 0.7938),(1.946, -0.2701, 1.041),(2.209, -0.1761, 0.415),(2.051, -0.1873, 0.4556),(2.208, -0.2522, 0.4048),(1.809, -0.2584, 0.9582),(1.901, -0.2917, 0.6837),(1.83, -0.3467, 1.073),(2.576, -0.1055, -0.1234),(2.523, -0.2129, 0.1268),(2.368, -0.1757, 0.3733),(2.422, -0.08402, -0.236),(2.214, -0.09652, -0.1866),(2.421, -0.1602, -0.2458),(2.103, -0.1642, 0.2919),(2.107, -0.1994, 0.03084),(2.209, -0.2521, 0.4034),(2.695, -0.004304, -0.8387),(2.73, -0.114, -0.5729),(2.628, -0.08063, -0.299),(2.257, -0.001381, -0.8594),(2.484, -0.06122, -0.946),(2.231, -0.07339, -0.3501),(2.175, -0.1072, -0.6207),(2.422, -0.16, -0.2476),(2.122, 0.156, -1.675),(1.061, 0.08604, -1.691),(0, 0.1637, -1.682),(2.169, -0.3874, -1.366),(2.26, -0.4875, -1.109),(2.233, -0.4122, -1.642),(2.484, -0.4388, -1.003),(2.699, -0.4886, -1.102),(2.766, -0.3866, -1.372),(2.679, -0.41, -1.657),(2.452, -0.3352, -1.735),(0.3322, -0.7892, 1.475),(0.08821, -0.8561, 1.497),(0.5782, -0.8531, 1.476),(0.003092, -0.8011, 1.559),(0.08971, -0.8702, 1.596),(0.3387, -0.8086, 1.612),(0.5857, -0.8665, 1.57),(0.6678, -0.7967, 1.528),(1.006, -0.7945, 1.513),(1.24, -0.846, 1.426),(0.7626, -0.8628, 1.544),(1.306, -0.7743, 1.369),(1.208, -0.8334, 1.336),(0.9738, -0.7763, 1.383),(0.749, -0.8497, 1.451),(0.6741, -0.7966, 1.527),(1.618, -0.7575, 1.251),(1.806, -0.7993, 1.095),(1.402, -0.8362, 1.356),(1.826, -0.7252, 1.022),(1.713, -0.7887, 1.02),(1.52, -0.7415, 1.137),(1.355, -0.824, 1.27),(1.312, -0.7739, 1.366),(2.133, -0.6851, 0.7387),(2.262, -0.7108, 0.4692),(1.942, -0.7804, 0.9611),(2.207, -0.6305, 0.3528),(2.056, -0.6995, 0.3896),(1.905, -0.67, 0.6319),(1.816, -0.7697, 0.8859),(1.831, -0.7246, 1.018),(2.52, -0.5909, 0.07258),(2.568, -0.6172, -0.1924),(2.364, -0.6862, 0.2949),(2.421, -0.5386, -0.2974),(2.218, -0.6086, -0.2534),(2.11, -0.5775, -0.02187),(2.11, -0.6751, 0.2169),(2.209, -0.6299, 0.3481),(2.728, -0.492, -0.6266),(2.689, -0.5162, -0.9068),(2.624, -0.5912, -0.3764),(2.483, -0.4395, -0.9976),(2.262, -0.5133, -0.9269),(2.178, -0.4853, -0.6739),(2.236, -0.5842, -0.4263),(2.422, -0.5378, -0.3029),(2.256, -0.2378, -1.07),(2.228, -0.1614, -1.61),(2.703, -0.2389, -1.063),(2.683, -0.1593, -1.626),(0.08417, -0.6052, 1.527),(0.5817, -0.6022, 1.506),(0.08583, -0.6206, 1.637),(0.5901, -0.617, 1.61),(1.246, -0.5963, 1.465),(0.7594, -0.6134, 1.585),(1.21, -0.5824, 1.366),(0.7444, -0.5989, 1.483),(1.813, -0.5492, 1.131),(1.401, -0.5869, 1.398),(1.713, -0.5377, 1.05),(1.349, -0.5735, 1.303),(2.268, -0.4604, 0.5032),(1.944, -0.5309, 1.002),(2.053, -0.4486, 0.4199),(1.811, -0.5196, 0.9222),(2.574, -0.3666, -0.1599),(2.366, -0.4366, 0.3353),(2.215, -0.3577, -0.2226),(2.104, -0.4252, 0.2548),(2.693, -0.2654, -0.875),(2.627, -0.3416, -0.3366),(2.258, -0.2625, -0.8956),(2.232, -0.3344, -0.3875),(2.122, -0.111, -1.713),(1.061, -0.3634, -1.754),(0, -0.1076, -1.721)]

IndexedFaceSet734.coord = Coordinate736

Shape732.geometry = IndexedFaceSet734

Transform731.children.append(Shape732)

HAnimSegment730.children.append(Transform731)
Coordinate737 = x3d.Coordinate(USE="Upper_teeth_COORD_JinBlink")

HAnimSegment730.coord = Coordinate737
HAnimDisplacer738 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinBlink")
HAnimDisplacer738.name = "upper_teeth_morphinterpolator"
HAnimDisplacer738.coordIndex = [14,576,886]
HAnimDisplacer738.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer738)
HAnimDisplacer739 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer739.name = "upper_teeth_morphinterpolator"
HAnimDisplacer739.coordIndex = [14,132,576,726,886]
HAnimDisplacer739.displacements = [(0, 0.0001, 0),(0, -0.0001, 0),(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer739)
HAnimDisplacer740 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinChinRaiser")
HAnimDisplacer740.name = "upper_teeth_morphinterpolator"
HAnimDisplacer740.coordIndex = [16,17,19,20,21,22,28,29,30,37,38,39,40,50,51,52,53,54,55,56,57,61,79,80,81,82,83,84,85,86,107,108,109,110,111,112,113,114,118,152,154,155,156,158,159,166,167,168,169,170,171,181,182,183,184,185,186,187,188,209,210,211,212,213,214,215,216,234,239,240,241,242,243,244,245,246,264,275,276,277,278,284,285,286,287,297,298,299,301,302,311,312,313,314,315,316,317,318,322,340,341,342,343,344,345,346,347,351,368,369,370,371,372,373,374,375,379,392,403,404,405,406,412,413,414,415,425,426,427,429,430,439,440,441,442,443,444,445,446,450,468,469,470,471,472,473,474,475,479,496,497,498,499,500,501,502,503,507,520,539,543,545,546,547,549,550,555,556,557,562,563,564,570,571,572,573,585,586,587,588,589,599,600,601,604,605,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,636,640,665,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,694,698,727,728,729,730,731,732,733,734,738,756,757,758,759,760,761,762,763,767,780,808,811,813,814,816,817,818,819,821,822,832,834,835,836,837,838,839,840,841,857,858,863,864,865,866,867,868,869,870,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,924,952,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,985,1014,1015,1016,1017,1018,1019,1020,1021,1039,1040]
HAnimDisplacer740.displacements = [(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0787, 0),(0, 0.2286, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.1799, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1799, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.188, 0),(0, 0.188, 0),(0, 0.0999, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.2285, 0),(0, 0.1, 0),(0, 0.2286, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0999, 0),(0, 0.1405, 0),(0, 0.0999, 0),(0, 0.1404, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0999, 0),(0, 0.0381, 0),(0, 0.1121, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1121, 0),(0, 0.1267, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1267, 0),(0, 0.2286, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0786, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.2285, 0),(0, 0.0999, 0),(0, 0.0999, 0),(0, 0.0349, 0),(0, 0.0381, 0),(0, 0.0349, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1864, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, -0.0056, 0),(0, 0.1, 0),(0, 0.1, 0),(0, -0.0055, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.2285, 0),(0, 0.0999, 0),(0, 0.0999, 0),(0, 0.0349, 0),(0, 0.0381, 0),(0, 0.0349, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1864, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0787, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0786, 0),(0, 0.0999, 0),(0, 0.1, 0),(0, 0.0349, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.2286, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.1404, 0),(0, 0.1881, 0),(0, 0.1881, 0),(0, 0.1405, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0968, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0999, 0),(0, 0.2286, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.0968, 0),(0, 0.0381, 0),(0, 0.0967, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, -0.0056, 0),(0, 0.0999, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.2286, 0),(0, 0.0381, 0),(0, 0.0349, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1462, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1268, 0),(0, 0.1, 0),(0, 0.0999, 0),(0, 0.1404, 0),(0, 0.2286, 0),(0, 0.1, 0),(0, 0.2286, 0),(0, 0.1405, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.0968, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0967, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0.0001, 0.1457, 0),(0, 0.1457, 0),(0, 0.1462, 0),(0, 0.1457, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.1462, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1267, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.1267, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0349, 0),(0, 0.0381, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer740)
HAnimDisplacer741 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinEyesClosed")
HAnimDisplacer741.name = "upper_teeth_morphinterpolator"
HAnimDisplacer741.coordIndex = [14,576,886]
HAnimDisplacer741.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer741)
HAnimDisplacer742 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLidDroop")
HAnimDisplacer742.name = "upper_teeth_morphinterpolator"
HAnimDisplacer742.coordIndex = [14,576,886]
HAnimDisplacer742.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer742)
HAnimDisplacer743 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer743.name = "upper_teeth_morphinterpolator"
HAnimDisplacer743.coordIndex = [1,219,711,1006]
HAnimDisplacer743.displacements = [(0, 0.0001, 0),(0, -0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer743)
HAnimDisplacer744 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipFunneler")
HAnimDisplacer744.name = "upper_teeth_morphinterpolator"
HAnimDisplacer744.coordIndex = [14,576,886]
HAnimDisplacer744.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer744)
HAnimDisplacer745 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer745.name = "upper_teeth_morphinterpolator"
HAnimDisplacer745.coordIndex = [15,17,18,19,20,21,22,37,38,39,107,108,109,110,111,112,113,114,156,157,159,160,167,168,169,170,209,210,211,212,214,216,264,275,277,284,285,286,287,311,312,313,314,315,317,318,368,369,371,372,374,375,403,405,412,413,414,415,439,440,441,442,443,445,446,496,497,499,500,502,503,539,543,544,546,547,548,549,550,570,571,572,573,585,586,587,588,604,617,618,619,620,625,626,627,628,665,727,728,731,732,733,734,756,757,758,759,760,762,763,814,815,818,819,820,822,834,835,836,837,838,839,841,897,898,899,900,901,902,903,904,905,906,908,909,913,914,915,1014,1015,1019,1021,1039]
HAnimDisplacer745.displacements = [(0, 0, 0.092),(0, 0, 0.322),(0, 0, 0.092),(0, 0, 0.322),(-0.0413, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.0246, 0, 0.436),(0.0261, 0, 0.436),(0.0167, 0, 0.436),(-0.0327, 0, 0.436),(0.0045, 0, 0.322),(0.0176, 0, 0.436),(0.0716, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.07, 0, 0.322),(0, 0, 0.322),(0, 0, 0.092),(-0.0413, 0, 0.436),(0, 0, 0.092),(-0.1069, 0, 0.436),(-0.0411, 0, 0.436),(-0.1084, 0, 0.436),(-0.0411, 0, 0.436),(-0.0123, 0, 0.322),(-0.0989, 0, 0.436),(-0.0124, 0, 0.322),(-0.0998, 0, 0.436),(-0.1166, 0, 0.436),(-0.1151, 0, 0.436),(-0.0411, 0, 0.436),(0, 0, 0.092),(0, 0, 0.093),(0.0923, 0, 0.322),(0.029, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.0291, 0, 0.322),(-0.0411, 0, 0.436),(0.0297, 0, 0.322),(0.0256, 0, 0.436),(0.0586, 0, 0.436),(0.0927, 0, 0.322),(0.0256, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.092),(0, 0, 0.093),(-0.1374, 0, 0.436),(-0.0369, 0, 0.322),(0, 0, 0.322),(-0.0412, 0, 0.436),(-0.037, 0, 0.322),(-0.0412, 0, 0.436),(-0.0376, 0, 0.322),(-0.1078, 0, 0.436),(-0.1408, 0, 0.436),(-0.1378, 0, 0.436),(-0.1078, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(-0.0413, 0, 0.436),(0, 0, 0.322),(0, 0, 0.093),(0, 0, 0.093),(0, 0, 0.093),(0, 0, 0.322),(0, 0, 0.092),(0, 0, 0.092),(0, 0, 0.322),(0, 0, 0.322),(0.0926, 0, 0.322),(0.029, 0, 0.322),(0.0298, 0, 0.322),(0.0968, 0, 0.322),(0, 0, 0.322),(0.0241, 0, 0.436),(-0.0411, 0, 0.436),(-0.0413, 0, 0.436),(0.0256, 0, 0.436),(0.0168, 0, 0.436),(-0.0328, 0, 0.436),(-0.0327, 0, 0.436),(0.0176, 0, 0.436),(0.0715, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.07, 0, 0.322),(0.0645, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.029, 0, 0.322),(-0.041, 0, 0.436),(0.0298, 0, 0.322),(0.0255, 0, 0.436),(0.059, 0, 0.436),(0.0556, 0, 0.436),(0.0257, 0, 0.436),(0, 0, 0.093),(0, 0, 0.093),(-0.0413, 0, 0.436),(0, 0, 0.322),(0, 0, 0.092),(0, 0, 0.322),(-0.1063, 0, 0.436),(-0.1377, 0, 0.436),(-0.0369, 0, 0.322),(-0.0413, 0, 0.436),(-0.0377, 0, 0.322),(-0.0413, 0, 0.436),(-0.1418, 0, 0.436),(-0.0122, 0, 0.322),(-0.0369, 0, 0.322),(-0.099, 0, 0.436),(-0.0411, 0, 0.436),(-0.0124, 0, 0.322),(-0.0412, 0, 0.436),(-0.0999, 0, 0.436),(-0.0377, 0, 0.322),(-0.1078, 0, 0.436),(-0.1077, 0, 0.436),(-0.1412, 0, 0.436),(-0.1165, 0, 0.436),(-0.115, 0, 0.436),(-0.1378, 0, 0.436),(-0.1079, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(-0.0413, 0, 0.436),(-0.1467, 0, 0.436)]

HAnimSegment730.displacers.append(HAnimDisplacer745)
HAnimDisplacer746 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipsPart")
HAnimDisplacer746.name = "upper_teeth_morphinterpolator"
HAnimDisplacer746.coordIndex = [14,132,576,726,886]
HAnimDisplacer746.displacements = [(0, -0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0),(0, -0.0001, 0),(0, 0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer746)
HAnimDisplacer747 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipSuck")
HAnimDisplacer747.name = "upper_teeth_morphinterpolator"
HAnimDisplacer747.coordIndex = [14,576,886]
HAnimDisplacer747.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer747)
HAnimDisplacer748 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipTightener")
HAnimDisplacer748.name = "upper_teeth_morphinterpolator"
HAnimDisplacer748.coordIndex = [14,576,886]
HAnimDisplacer748.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer748)
HAnimDisplacer749 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinMouthStretch")
HAnimDisplacer749.name = "upper_teeth_morphinterpolator"
HAnimDisplacer749.coordIndex = [14,576,886]
HAnimDisplacer749.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer749)
HAnimDisplacer750 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer750.name = "upper_teeth_morphinterpolator"
HAnimDisplacer750.coordIndex = [14,576,886]
HAnimDisplacer750.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer750)
HAnimDisplacer751 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinSlit")
HAnimDisplacer751.name = "upper_teeth_morphinterpolator"
HAnimDisplacer751.coordIndex = [14,576,886]
HAnimDisplacer751.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment730.displacers.append(HAnimDisplacer751)

HAnimJoint89.children.append(HAnimSegment730)

HAnimJoint87.children.append(HAnimJoint89)

HAnimHumanoid86.skeleton.append(HAnimJoint87)
HAnimJoint752 = x3d.HAnimJoint(USE="hanim0_humanoid_root")

HAnimHumanoid86.joints.append(HAnimJoint752)
HAnimJoint753 = x3d.HAnimJoint(USE="hanim0_skullbase")

HAnimHumanoid86.joints.append(HAnimJoint753)

Transform85.children.append(HAnimHumanoid86)

Layer15.children.append(Transform85)
ROUTE754 = x3d.ROUTE()
ROUTE754.fromField = "value_changed"
ROUTE754.fromNode = "AnimationAdapter_JinBlink"
ROUTE754.toField = "weight"
ROUTE754.toNode = "Upper_teeth_MorphInterpolator_JinBlink"

Layer15.children.append(ROUTE754)
ROUTE755 = x3d.ROUTE()
ROUTE755.fromField = "value_changed"
ROUTE755.fromNode = "AnimationAdapter_JinBlink"
ROUTE755.toField = "weight"
ROUTE755.toNode = "Left_upper_eyelid_MorphInterpolator_JinBlink"

Layer15.children.append(ROUTE755)
ROUTE756 = x3d.ROUTE()
ROUTE756.fromField = "value_changed"
ROUTE756.fromNode = "AnimationAdapter_JinBlink"
ROUTE756.toField = "weight"
ROUTE756.toNode = "Left_lower_eyelid_MorphInterpolator_JinBlink"

Layer15.children.append(ROUTE756)
ROUTE757 = x3d.ROUTE()
ROUTE757.fromField = "value_changed"
ROUTE757.fromNode = "AnimationAdapter_JinBlink"
ROUTE757.toField = "weight"
ROUTE757.toNode = "Right_lower_eyelid_MorphInterpolator_JinBlink"

Layer15.children.append(ROUTE757)
ROUTE758 = x3d.ROUTE()
ROUTE758.fromField = "value_changed"
ROUTE758.fromNode = "AnimationAdapter_JinBlink"
ROUTE758.toField = "weight"
ROUTE758.toNode = "Right_upper_eyelid_MorphInterpolator_JinBlink"

Layer15.children.append(ROUTE758)
ROUTE759 = x3d.ROUTE()
ROUTE759.fromNode = "JinBlink_Clock"
ROUTE759.fromField = "fraction_changed"
ROUTE759.toNode = "AnimationAdapter_JinBlink"
ROUTE759.toField = "set_fraction"

Layer15.children.append(ROUTE759)
ROUTE760 = x3d.ROUTE()
ROUTE760.fromField = "value_changed"
ROUTE760.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE760.toField = "weight"
ROUTE760.toNode = "Left_forehead_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE760)
ROUTE761 = x3d.ROUTE()
ROUTE761.fromField = "value_changed"
ROUTE761.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE761.toField = "weight"
ROUTE761.toNode = "Glabella_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE761)
ROUTE762 = x3d.ROUTE()
ROUTE762.fromField = "value_changed"
ROUTE762.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE762.toField = "weight"
ROUTE762.toNode = "Left_eyebrow_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE762)
ROUTE763 = x3d.ROUTE()
ROUTE763.fromField = "value_changed"
ROUTE763.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE763.toField = "weight"
ROUTE763.toNode = "Left_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE763)
ROUTE764 = x3d.ROUTE()
ROUTE764.fromField = "value_changed"
ROUTE764.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE764.toField = "weight"
ROUTE764.toNode = "Left_temple_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE764)
ROUTE765 = x3d.ROUTE()
ROUTE765.fromField = "value_changed"
ROUTE765.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE765.toField = "weight"
ROUTE765.toNode = "Right_forehead_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE765)
ROUTE766 = x3d.ROUTE()
ROUTE766.fromField = "value_changed"
ROUTE766.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE766.toField = "weight"
ROUTE766.toNode = "Right_eyebrow_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE766)
ROUTE767 = x3d.ROUTE()
ROUTE767.fromField = "value_changed"
ROUTE767.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE767.toField = "weight"
ROUTE767.toNode = "Left_upper_eyelid_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE767)
ROUTE768 = x3d.ROUTE()
ROUTE768.fromField = "value_changed"
ROUTE768.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE768.toField = "weight"
ROUTE768.toNode = "Left_pupil_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE768)
ROUTE769 = x3d.ROUTE()
ROUTE769.fromField = "value_changed"
ROUTE769.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE769.toField = "weight"
ROUTE769.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE769)
ROUTE770 = x3d.ROUTE()
ROUTE770.fromField = "value_changed"
ROUTE770.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE770.toField = "weight"
ROUTE770.toNode = "Right_pupil_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE770)
ROUTE771 = x3d.ROUTE()
ROUTE771.fromField = "value_changed"
ROUTE771.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE771.toField = "weight"
ROUTE771.toNode = "Right_temple_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE771)
ROUTE772 = x3d.ROUTE()
ROUTE772.fromField = "value_changed"
ROUTE772.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE772.toField = "weight"
ROUTE772.toNode = "Right_upper_eyelid_MorphInterpolator_JinBrowLowerer"

Layer15.children.append(ROUTE772)
ROUTE773 = x3d.ROUTE()
ROUTE773.fromNode = "JinBrowLowerer_Clock"
ROUTE773.fromField = "fraction_changed"
ROUTE773.toNode = "AnimationAdapter_JinBrowLowerer"
ROUTE773.toField = "set_fraction"

Layer15.children.append(ROUTE773)
ROUTE774 = x3d.ROUTE()
ROUTE774.fromField = "value_changed"
ROUTE774.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE774.toField = "weight"
ROUTE774.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE774)
ROUTE775 = x3d.ROUTE()
ROUTE775.fromField = "value_changed"
ROUTE775.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE775.toField = "weight"
ROUTE775.toNode = "Neck_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE775)
ROUTE776 = x3d.ROUTE()
ROUTE776.fromField = "value_changed"
ROUTE776.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE776.toField = "weight"
ROUTE776.toNode = "Occipital_scalp_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE776)
ROUTE777 = x3d.ROUTE()
ROUTE777.fromField = "value_changed"
ROUTE777.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE777.toField = "weight"
ROUTE777.toNode = "Chin_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE777)
ROUTE778 = x3d.ROUTE()
ROUTE778.fromField = "value_changed"
ROUTE778.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE778.toField = "weight"
ROUTE778.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE778)
ROUTE779 = x3d.ROUTE()
ROUTE779.fromField = "value_changed"
ROUTE779.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE779.toField = "weight"
ROUTE779.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE779)
ROUTE780 = x3d.ROUTE()
ROUTE780.fromField = "value_changed"
ROUTE780.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE780.toField = "weight"
ROUTE780.toNode = "Left_nostril_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE780)
ROUTE781 = x3d.ROUTE()
ROUTE781.fromField = "value_changed"
ROUTE781.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE781.toField = "weight"
ROUTE781.toNode = "Left_dorsum_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE781)
ROUTE782 = x3d.ROUTE()
ROUTE782.fromField = "value_changed"
ROUTE782.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE782.toField = "weight"
ROUTE782.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE782)
ROUTE783 = x3d.ROUTE()
ROUTE783.fromField = "value_changed"
ROUTE783.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE783.toField = "weight"
ROUTE783.toNode = "Left_cheek_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE783)
ROUTE784 = x3d.ROUTE()
ROUTE784.fromField = "value_changed"
ROUTE784.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE784.toField = "weight"
ROUTE784.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE784)
ROUTE785 = x3d.ROUTE()
ROUTE785.fromField = "value_changed"
ROUTE785.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE785.toField = "weight"
ROUTE785.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE785)
ROUTE786 = x3d.ROUTE()
ROUTE786.fromField = "value_changed"
ROUTE786.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE786.toField = "weight"
ROUTE786.toNode = "Philtrum_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE786)
ROUTE787 = x3d.ROUTE()
ROUTE787.fromField = "value_changed"
ROUTE787.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE787.toField = "weight"
ROUTE787.toNode = "Right_cheek_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE787)
ROUTE788 = x3d.ROUTE()
ROUTE788.fromField = "value_changed"
ROUTE788.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE788.toField = "weight"
ROUTE788.toNode = "Right_dorsum_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE788)
ROUTE789 = x3d.ROUTE()
ROUTE789.fromField = "value_changed"
ROUTE789.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE789.toField = "weight"
ROUTE789.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE789)
ROUTE790 = x3d.ROUTE()
ROUTE790.fromField = "value_changed"
ROUTE790.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE790.toField = "weight"
ROUTE790.toNode = "Right_nostril_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE790)
ROUTE791 = x3d.ROUTE()
ROUTE791.fromField = "value_changed"
ROUTE791.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE791.toField = "weight"
ROUTE791.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE791)
ROUTE792 = x3d.ROUTE()
ROUTE792.fromField = "value_changed"
ROUTE792.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE792.toField = "weight"
ROUTE792.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE792)
ROUTE793 = x3d.ROUTE()
ROUTE793.fromField = "value_changed"
ROUTE793.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE793.toField = "weight"
ROUTE793.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"

Layer15.children.append(ROUTE793)
ROUTE794 = x3d.ROUTE()
ROUTE794.fromNode = "JinCheekPuffer_Clock"
ROUTE794.fromField = "fraction_changed"
ROUTE794.toNode = "AnimationAdapter_JinCheekPuffer"
ROUTE794.toField = "set_fraction"

Layer15.children.append(ROUTE794)
ROUTE795 = x3d.ROUTE()
ROUTE795.fromField = "value_changed"
ROUTE795.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE795.toField = "weight"
ROUTE795.toNode = "Upper_teeth_MorphInterpolator_JinCheekRaiser"

Layer15.children.append(ROUTE795)
ROUTE796 = x3d.ROUTE()
ROUTE796.fromField = "value_changed"
ROUTE796.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE796.toField = "weight"
ROUTE796.toNode = "Left_dorsum_MorphInterpolator_JinCheekRaiser"

Layer15.children.append(ROUTE796)
ROUTE797 = x3d.ROUTE()
ROUTE797.fromField = "value_changed"
ROUTE797.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE797.toField = "weight"
ROUTE797.toNode = "Left_cheek_MorphInterpolator_JinCheekRaiser"

Layer15.children.append(ROUTE797)
ROUTE798 = x3d.ROUTE()
ROUTE798.fromField = "value_changed"
ROUTE798.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE798.toField = "weight"
ROUTE798.toNode = "Left_upper_eyelid_MorphInterpolator_JinCheekRaiser"

Layer15.children.append(ROUTE798)
ROUTE799 = x3d.ROUTE()
ROUTE799.fromField = "value_changed"
ROUTE799.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE799.toField = "weight"
ROUTE799.toNode = "Left_lower_eyelid_MorphInterpolator_JinCheekRaiser"

Layer15.children.append(ROUTE799)
ROUTE800 = x3d.ROUTE()
ROUTE800.fromField = "value_changed"
ROUTE800.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE800.toField = "weight"
ROUTE800.toNode = "Right_cheek_MorphInterpolator_JinCheekRaiser"

Layer15.children.append(ROUTE800)
ROUTE801 = x3d.ROUTE()
ROUTE801.fromField = "value_changed"
ROUTE801.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE801.toField = "weight"
ROUTE801.toNode = "Right_dorsum_MorphInterpolator_JinCheekRaiser"

Layer15.children.append(ROUTE801)
ROUTE802 = x3d.ROUTE()
ROUTE802.fromField = "value_changed"
ROUTE802.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE802.toField = "weight"
ROUTE802.toNode = "Right_lower_eyelid_MorphInterpolator_JinCheekRaiser"

Layer15.children.append(ROUTE802)
ROUTE803 = x3d.ROUTE()
ROUTE803.fromField = "value_changed"
ROUTE803.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE803.toField = "weight"
ROUTE803.toNode = "Right_upper_eyelid_MorphInterpolator_JinCheekRaiser"

Layer15.children.append(ROUTE803)
ROUTE804 = x3d.ROUTE()
ROUTE804.fromNode = "JinCheekRaiser_Clock"
ROUTE804.fromField = "fraction_changed"
ROUTE804.toNode = "AnimationAdapter_JinCheekRaiser"
ROUTE804.toField = "set_fraction"

Layer15.children.append(ROUTE804)
ROUTE805 = x3d.ROUTE()
ROUTE805.fromField = "value_changed"
ROUTE805.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE805.toField = "weight"
ROUTE805.toNode = "Lower_teeth_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE805)
ROUTE806 = x3d.ROUTE()
ROUTE806.fromField = "value_changed"
ROUTE806.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE806.toField = "weight"
ROUTE806.toNode = "Tongue_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE806)
ROUTE807 = x3d.ROUTE()
ROUTE807.fromField = "value_changed"
ROUTE807.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE807.toField = "weight"
ROUTE807.toNode = "Upper_teeth_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE807)
ROUTE808 = x3d.ROUTE()
ROUTE808.fromField = "value_changed"
ROUTE808.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE808.toField = "weight"
ROUTE808.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE808)
ROUTE809 = x3d.ROUTE()
ROUTE809.fromField = "value_changed"
ROUTE809.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE809.toField = "weight"
ROUTE809.toNode = "Neck_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE809)
ROUTE810 = x3d.ROUTE()
ROUTE810.fromField = "value_changed"
ROUTE810.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE810.toField = "weight"
ROUTE810.toNode = "Occipital_scalp_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE810)
ROUTE811 = x3d.ROUTE()
ROUTE811.fromField = "value_changed"
ROUTE811.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE811.toField = "weight"
ROUTE811.toNode = "Chin_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE811)
ROUTE812 = x3d.ROUTE()
ROUTE812.fromField = "value_changed"
ROUTE812.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE812.toField = "weight"
ROUTE812.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE812)
ROUTE813 = x3d.ROUTE()
ROUTE813.fromField = "value_changed"
ROUTE813.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE813.toField = "weight"
ROUTE813.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE813)
ROUTE814 = x3d.ROUTE()
ROUTE814.fromField = "value_changed"
ROUTE814.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE814.toField = "weight"
ROUTE814.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE814)
ROUTE815 = x3d.ROUTE()
ROUTE815.fromField = "value_changed"
ROUTE815.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE815.toField = "weight"
ROUTE815.toNode = "Left_cheek_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE815)
ROUTE816 = x3d.ROUTE()
ROUTE816.fromField = "value_changed"
ROUTE816.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE816.toField = "weight"
ROUTE816.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE816)
ROUTE817 = x3d.ROUTE()
ROUTE817.fromField = "value_changed"
ROUTE817.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE817.toField = "weight"
ROUTE817.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE817)
ROUTE818 = x3d.ROUTE()
ROUTE818.fromField = "value_changed"
ROUTE818.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE818.toField = "weight"
ROUTE818.toNode = "Philtrum_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE818)
ROUTE819 = x3d.ROUTE()
ROUTE819.fromField = "value_changed"
ROUTE819.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE819.toField = "weight"
ROUTE819.toNode = "Right_cheek_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE819)
ROUTE820 = x3d.ROUTE()
ROUTE820.fromField = "value_changed"
ROUTE820.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE820.toField = "weight"
ROUTE820.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE820)
ROUTE821 = x3d.ROUTE()
ROUTE821.fromField = "value_changed"
ROUTE821.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE821.toField = "weight"
ROUTE821.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE821)
ROUTE822 = x3d.ROUTE()
ROUTE822.fromField = "value_changed"
ROUTE822.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE822.toField = "weight"
ROUTE822.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE822)
ROUTE823 = x3d.ROUTE()
ROUTE823.fromField = "value_changed"
ROUTE823.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE823.toField = "weight"
ROUTE823.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"

Layer15.children.append(ROUTE823)
ROUTE824 = x3d.ROUTE()
ROUTE824.fromNode = "JinChinRaiser_Clock"
ROUTE824.fromField = "fraction_changed"
ROUTE824.toNode = "AnimationAdapter_JinChinRaiser"
ROUTE824.toField = "set_fraction"

Layer15.children.append(ROUTE824)
ROUTE825 = x3d.ROUTE()
ROUTE825.fromField = "value_changed"
ROUTE825.fromNode = "AnimationAdapter_JinDimpler"
ROUTE825.toField = "weight"
ROUTE825.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE825)
ROUTE826 = x3d.ROUTE()
ROUTE826.fromField = "value_changed"
ROUTE826.fromNode = "AnimationAdapter_JinDimpler"
ROUTE826.toField = "weight"
ROUTE826.toNode = "Neck_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE826)
ROUTE827 = x3d.ROUTE()
ROUTE827.fromField = "value_changed"
ROUTE827.fromNode = "AnimationAdapter_JinDimpler"
ROUTE827.toField = "weight"
ROUTE827.toNode = "Occipital_scalp_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE827)
ROUTE828 = x3d.ROUTE()
ROUTE828.fromField = "value_changed"
ROUTE828.fromNode = "AnimationAdapter_JinDimpler"
ROUTE828.toField = "weight"
ROUTE828.toNode = "Chin_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE828)
ROUTE829 = x3d.ROUTE()
ROUTE829.fromField = "value_changed"
ROUTE829.fromNode = "AnimationAdapter_JinDimpler"
ROUTE829.toField = "weight"
ROUTE829.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE829)
ROUTE830 = x3d.ROUTE()
ROUTE830.fromField = "value_changed"
ROUTE830.fromNode = "AnimationAdapter_JinDimpler"
ROUTE830.toField = "weight"
ROUTE830.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE830)
ROUTE831 = x3d.ROUTE()
ROUTE831.fromField = "value_changed"
ROUTE831.fromNode = "AnimationAdapter_JinDimpler"
ROUTE831.toField = "weight"
ROUTE831.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE831)
ROUTE832 = x3d.ROUTE()
ROUTE832.fromField = "value_changed"
ROUTE832.fromNode = "AnimationAdapter_JinDimpler"
ROUTE832.toField = "weight"
ROUTE832.toNode = "Left_cheek_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE832)
ROUTE833 = x3d.ROUTE()
ROUTE833.fromField = "value_changed"
ROUTE833.fromNode = "AnimationAdapter_JinDimpler"
ROUTE833.toField = "weight"
ROUTE833.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE833)
ROUTE834 = x3d.ROUTE()
ROUTE834.fromField = "value_changed"
ROUTE834.fromNode = "AnimationAdapter_JinDimpler"
ROUTE834.toField = "weight"
ROUTE834.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE834)
ROUTE835 = x3d.ROUTE()
ROUTE835.fromField = "value_changed"
ROUTE835.fromNode = "AnimationAdapter_JinDimpler"
ROUTE835.toField = "weight"
ROUTE835.toNode = "Philtrum_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE835)
ROUTE836 = x3d.ROUTE()
ROUTE836.fromField = "value_changed"
ROUTE836.fromNode = "AnimationAdapter_JinDimpler"
ROUTE836.toField = "weight"
ROUTE836.toNode = "Right_cheek_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE836)
ROUTE837 = x3d.ROUTE()
ROUTE837.fromField = "value_changed"
ROUTE837.fromNode = "AnimationAdapter_JinDimpler"
ROUTE837.toField = "weight"
ROUTE837.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE837)
ROUTE838 = x3d.ROUTE()
ROUTE838.fromField = "value_changed"
ROUTE838.fromNode = "AnimationAdapter_JinDimpler"
ROUTE838.toField = "weight"
ROUTE838.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE838)
ROUTE839 = x3d.ROUTE()
ROUTE839.fromField = "value_changed"
ROUTE839.fromNode = "AnimationAdapter_JinDimpler"
ROUTE839.toField = "weight"
ROUTE839.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE839)
ROUTE840 = x3d.ROUTE()
ROUTE840.fromField = "value_changed"
ROUTE840.fromNode = "AnimationAdapter_JinDimpler"
ROUTE840.toField = "weight"
ROUTE840.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinDimpler"

Layer15.children.append(ROUTE840)
ROUTE841 = x3d.ROUTE()
ROUTE841.fromNode = "JinDimpler_Clock"
ROUTE841.fromField = "fraction_changed"
ROUTE841.toNode = "AnimationAdapter_JinDimpler"
ROUTE841.toField = "set_fraction"

Layer15.children.append(ROUTE841)
ROUTE842 = x3d.ROUTE()
ROUTE842.fromField = "value_changed"
ROUTE842.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE842.toField = "weight"
ROUTE842.toNode = "Upper_teeth_MorphInterpolator_JinEyesClosed"

Layer15.children.append(ROUTE842)
ROUTE843 = x3d.ROUTE()
ROUTE843.fromField = "value_changed"
ROUTE843.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE843.toField = "weight"
ROUTE843.toNode = "Left_upper_eyelid_MorphInterpolator_JinEyesClosed"

Layer15.children.append(ROUTE843)
ROUTE844 = x3d.ROUTE()
ROUTE844.fromField = "value_changed"
ROUTE844.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE844.toField = "weight"
ROUTE844.toNode = "Left_lower_eyelid_MorphInterpolator_JinEyesClosed"

Layer15.children.append(ROUTE844)
ROUTE845 = x3d.ROUTE()
ROUTE845.fromField = "value_changed"
ROUTE845.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE845.toField = "weight"
ROUTE845.toNode = "Right_lower_eyelid_MorphInterpolator_JinEyesClosed"

Layer15.children.append(ROUTE845)
ROUTE846 = x3d.ROUTE()
ROUTE846.fromField = "value_changed"
ROUTE846.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE846.toField = "weight"
ROUTE846.toNode = "Right_upper_eyelid_MorphInterpolator_JinEyesClosed"

Layer15.children.append(ROUTE846)
ROUTE847 = x3d.ROUTE()
ROUTE847.fromNode = "JinEyesClosed_Clock"
ROUTE847.fromField = "fraction_changed"
ROUTE847.toNode = "AnimationAdapter_JinEyesClosed"
ROUTE847.toField = "set_fraction"

Layer15.children.append(ROUTE847)
ROUTE848 = x3d.ROUTE()
ROUTE848.fromField = "value_changed"
ROUTE848.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE848.toField = "weight"
ROUTE848.toNode = "Left_forehead_MorphInterpolator_JinInnerBrowRaiser"

Layer15.children.append(ROUTE848)
ROUTE849 = x3d.ROUTE()
ROUTE849.fromField = "value_changed"
ROUTE849.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE849.toField = "weight"
ROUTE849.toNode = "Glabella_MorphInterpolator_JinInnerBrowRaiser"

Layer15.children.append(ROUTE849)
ROUTE850 = x3d.ROUTE()
ROUTE850.fromField = "value_changed"
ROUTE850.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE850.toField = "weight"
ROUTE850.toNode = "Left_eyebrow_MorphInterpolator_JinInnerBrowRaiser"

Layer15.children.append(ROUTE850)
ROUTE851 = x3d.ROUTE()
ROUTE851.fromField = "value_changed"
ROUTE851.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE851.toField = "weight"
ROUTE851.toNode = "Left_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser"

Layer15.children.append(ROUTE851)
ROUTE852 = x3d.ROUTE()
ROUTE852.fromField = "value_changed"
ROUTE852.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE852.toField = "weight"
ROUTE852.toNode = "Right_forehead_MorphInterpolator_JinInnerBrowRaiser"

Layer15.children.append(ROUTE852)
ROUTE853 = x3d.ROUTE()
ROUTE853.fromField = "value_changed"
ROUTE853.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE853.toField = "weight"
ROUTE853.toNode = "Right_eyebrow_MorphInterpolator_JinInnerBrowRaiser"

Layer15.children.append(ROUTE853)
ROUTE854 = x3d.ROUTE()
ROUTE854.fromField = "value_changed"
ROUTE854.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE854.toField = "weight"
ROUTE854.toNode = "Left_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser"

Layer15.children.append(ROUTE854)
ROUTE855 = x3d.ROUTE()
ROUTE855.fromField = "value_changed"
ROUTE855.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE855.toField = "weight"
ROUTE855.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser"

Layer15.children.append(ROUTE855)
ROUTE856 = x3d.ROUTE()
ROUTE856.fromField = "value_changed"
ROUTE856.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE856.toField = "weight"
ROUTE856.toNode = "Right_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser"

Layer15.children.append(ROUTE856)
ROUTE857 = x3d.ROUTE()
ROUTE857.fromNode = "JinInnerBrowRaiser_Clock"
ROUTE857.fromField = "fraction_changed"
ROUTE857.toNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE857.toField = "set_fraction"

Layer15.children.append(ROUTE857)
ROUTE858 = x3d.ROUTE()
ROUTE858.fromField = "value_changed"
ROUTE858.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE858.toField = "weight"
ROUTE858.toNode = "Lower_teeth_MorphInterpolator_JinJawDrop"

Layer15.children.append(ROUTE858)
ROUTE859 = x3d.ROUTE()
ROUTE859.fromField = "value_changed"
ROUTE859.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE859.toField = "weight"
ROUTE859.toNode = "Occipital_scalp_MorphInterpolator_JinJawDrop"

Layer15.children.append(ROUTE859)
ROUTE860 = x3d.ROUTE()
ROUTE860.fromField = "value_changed"
ROUTE860.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE860.toField = "weight"
ROUTE860.toNode = "Chin_MorphInterpolator_JinJawDrop"

Layer15.children.append(ROUTE860)
ROUTE861 = x3d.ROUTE()
ROUTE861.fromField = "value_changed"
ROUTE861.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE861.toField = "weight"
ROUTE861.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinJawDrop"

Layer15.children.append(ROUTE861)
ROUTE862 = x3d.ROUTE()
ROUTE862.fromField = "value_changed"
ROUTE862.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE862.toField = "weight"
ROUTE862.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinJawDrop"

Layer15.children.append(ROUTE862)
ROUTE863 = x3d.ROUTE()
ROUTE863.fromField = "value_changed"
ROUTE863.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE863.toField = "weight"
ROUTE863.toNode = "Left_cheek_MorphInterpolator_JinJawDrop"

Layer15.children.append(ROUTE863)
ROUTE864 = x3d.ROUTE()
ROUTE864.fromField = "value_changed"
ROUTE864.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE864.toField = "weight"
ROUTE864.toNode = "Left_upper_eyelid_MorphInterpolator_JinJawDrop"

Layer15.children.append(ROUTE864)
ROUTE865 = x3d.ROUTE()
ROUTE865.fromField = "value_changed"
ROUTE865.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE865.toField = "weight"
ROUTE865.toNode = "Right_cheek_MorphInterpolator_JinJawDrop"

Layer15.children.append(ROUTE865)
ROUTE866 = x3d.ROUTE()
ROUTE866.fromField = "value_changed"
ROUTE866.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE866.toField = "weight"
ROUTE866.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinJawDrop"

Layer15.children.append(ROUTE866)
ROUTE867 = x3d.ROUTE()
ROUTE867.fromNode = "JinJawDrop_Clock"
ROUTE867.fromField = "fraction_changed"
ROUTE867.toNode = "AnimationAdapter_JinJawDrop"
ROUTE867.toField = "set_fraction"

Layer15.children.append(ROUTE867)
ROUTE868 = x3d.ROUTE()
ROUTE868.fromField = "value_changed"
ROUTE868.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE868.toField = "weight"
ROUTE868.toNode = "Upper_teeth_MorphInterpolator_JinLidDroop"

Layer15.children.append(ROUTE868)
ROUTE869 = x3d.ROUTE()
ROUTE869.fromField = "value_changed"
ROUTE869.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE869.toField = "weight"
ROUTE869.toNode = "Left_upper_eyelid_MorphInterpolator_JinLidDroop"

Layer15.children.append(ROUTE869)
ROUTE870 = x3d.ROUTE()
ROUTE870.fromField = "value_changed"
ROUTE870.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE870.toField = "weight"
ROUTE870.toNode = "Left_lower_eyelid_MorphInterpolator_JinLidDroop"

Layer15.children.append(ROUTE870)
ROUTE871 = x3d.ROUTE()
ROUTE871.fromField = "value_changed"
ROUTE871.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE871.toField = "weight"
ROUTE871.toNode = "Right_lower_eyelid_MorphInterpolator_JinLidDroop"

Layer15.children.append(ROUTE871)
ROUTE872 = x3d.ROUTE()
ROUTE872.fromField = "value_changed"
ROUTE872.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE872.toField = "weight"
ROUTE872.toNode = "Right_upper_eyelid_MorphInterpolator_JinLidDroop"

Layer15.children.append(ROUTE872)
ROUTE873 = x3d.ROUTE()
ROUTE873.fromNode = "JinLidDroop_Clock"
ROUTE873.fromField = "fraction_changed"
ROUTE873.toNode = "AnimationAdapter_JinLidDroop"
ROUTE873.toField = "set_fraction"

Layer15.children.append(ROUTE873)
ROUTE874 = x3d.ROUTE()
ROUTE874.fromField = "value_changed"
ROUTE874.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE874.toField = "weight"
ROUTE874.toNode = "Left_bulbar_conjunctiva_MorphInterpolator_JinLidTightener"

Layer15.children.append(ROUTE874)
ROUTE875 = x3d.ROUTE()
ROUTE875.fromField = "value_changed"
ROUTE875.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE875.toField = "weight"
ROUTE875.toNode = "Left_upper_eyelid_MorphInterpolator_JinLidTightener"

Layer15.children.append(ROUTE875)
ROUTE876 = x3d.ROUTE()
ROUTE876.fromField = "value_changed"
ROUTE876.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE876.toField = "weight"
ROUTE876.toNode = "Left_lower_eyelid_MorphInterpolator_JinLidTightener"

Layer15.children.append(ROUTE876)
ROUTE877 = x3d.ROUTE()
ROUTE877.fromField = "value_changed"
ROUTE877.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE877.toField = "weight"
ROUTE877.toNode = "Left_pupil_MorphInterpolator_JinLidTightener"

Layer15.children.append(ROUTE877)
ROUTE878 = x3d.ROUTE()
ROUTE878.fromField = "value_changed"
ROUTE878.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE878.toField = "weight"
ROUTE878.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinLidTightener"

Layer15.children.append(ROUTE878)
ROUTE879 = x3d.ROUTE()
ROUTE879.fromField = "value_changed"
ROUTE879.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE879.toField = "weight"
ROUTE879.toNode = "Right_lower_eyelid_MorphInterpolator_JinLidTightener"

Layer15.children.append(ROUTE879)
ROUTE880 = x3d.ROUTE()
ROUTE880.fromField = "value_changed"
ROUTE880.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE880.toField = "weight"
ROUTE880.toNode = "Right_pupil_MorphInterpolator_JinLidTightener"

Layer15.children.append(ROUTE880)
ROUTE881 = x3d.ROUTE()
ROUTE881.fromField = "value_changed"
ROUTE881.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE881.toField = "weight"
ROUTE881.toNode = "Right_upper_eyelid_MorphInterpolator_JinLidTightener"

Layer15.children.append(ROUTE881)
ROUTE882 = x3d.ROUTE()
ROUTE882.fromNode = "JinLidTightener_Clock"
ROUTE882.fromField = "fraction_changed"
ROUTE882.toNode = "AnimationAdapter_JinLidTightener"
ROUTE882.toField = "set_fraction"

Layer15.children.append(ROUTE882)
ROUTE883 = x3d.ROUTE()
ROUTE883.fromField = "value_changed"
ROUTE883.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE883.toField = "weight"
ROUTE883.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE883)
ROUTE884 = x3d.ROUTE()
ROUTE884.fromField = "value_changed"
ROUTE884.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE884.toField = "weight"
ROUTE884.toNode = "Neck_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE884)
ROUTE885 = x3d.ROUTE()
ROUTE885.fromField = "value_changed"
ROUTE885.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE885.toField = "weight"
ROUTE885.toNode = "Chin_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE885)
ROUTE886 = x3d.ROUTE()
ROUTE886.fromField = "value_changed"
ROUTE886.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE886.toField = "weight"
ROUTE886.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE886)
ROUTE887 = x3d.ROUTE()
ROUTE887.fromField = "value_changed"
ROUTE887.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE887.toField = "weight"
ROUTE887.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE887)
ROUTE888 = x3d.ROUTE()
ROUTE888.fromField = "value_changed"
ROUTE888.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE888.toField = "weight"
ROUTE888.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE888)
ROUTE889 = x3d.ROUTE()
ROUTE889.fromField = "value_changed"
ROUTE889.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE889.toField = "weight"
ROUTE889.toNode = "Left_cheek_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE889)
ROUTE890 = x3d.ROUTE()
ROUTE890.fromField = "value_changed"
ROUTE890.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE890.toField = "weight"
ROUTE890.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE890)
ROUTE891 = x3d.ROUTE()
ROUTE891.fromField = "value_changed"
ROUTE891.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE891.toField = "weight"
ROUTE891.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE891)
ROUTE892 = x3d.ROUTE()
ROUTE892.fromField = "value_changed"
ROUTE892.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE892.toField = "weight"
ROUTE892.toNode = "Philtrum_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE892)
ROUTE893 = x3d.ROUTE()
ROUTE893.fromField = "value_changed"
ROUTE893.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE893.toField = "weight"
ROUTE893.toNode = "Left_upper_eyelid_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE893)
ROUTE894 = x3d.ROUTE()
ROUTE894.fromField = "value_changed"
ROUTE894.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE894.toField = "weight"
ROUTE894.toNode = "Right_cheek_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE894)
ROUTE895 = x3d.ROUTE()
ROUTE895.fromField = "value_changed"
ROUTE895.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE895.toField = "weight"
ROUTE895.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE895)
ROUTE896 = x3d.ROUTE()
ROUTE896.fromField = "value_changed"
ROUTE896.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE896.toField = "weight"
ROUTE896.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE896)
ROUTE897 = x3d.ROUTE()
ROUTE897.fromField = "value_changed"
ROUTE897.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE897.toField = "weight"
ROUTE897.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE897)
ROUTE898 = x3d.ROUTE()
ROUTE898.fromField = "value_changed"
ROUTE898.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE898.toField = "weight"
ROUTE898.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"

Layer15.children.append(ROUTE898)
ROUTE899 = x3d.ROUTE()
ROUTE899.fromNode = "JinLipCornerDepressor_Clock"
ROUTE899.fromField = "fraction_changed"
ROUTE899.toNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE899.toField = "set_fraction"

Layer15.children.append(ROUTE899)
ROUTE900 = x3d.ROUTE()
ROUTE900.fromField = "value_changed"
ROUTE900.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE900.toField = "weight"
ROUTE900.toNode = "Upper_teeth_MorphInterpolator_JinLipCornerPuller"

Layer15.children.append(ROUTE900)
ROUTE901 = x3d.ROUTE()
ROUTE901.fromField = "value_changed"
ROUTE901.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE901.toField = "weight"
ROUTE901.toNode = "Left_cheek_MorphInterpolator_JinLipCornerPuller"

Layer15.children.append(ROUTE901)
ROUTE902 = x3d.ROUTE()
ROUTE902.fromField = "value_changed"
ROUTE902.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE902.toField = "weight"
ROUTE902.toNode = "Right_cheek_MorphInterpolator_JinLipCornerPuller"

Layer15.children.append(ROUTE902)
ROUTE903 = x3d.ROUTE()
ROUTE903.fromField = "value_changed"
ROUTE903.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE903.toField = "weight"
ROUTE903.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller"

Layer15.children.append(ROUTE903)
ROUTE904 = x3d.ROUTE()
ROUTE904.fromField = "value_changed"
ROUTE904.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE904.toField = "weight"
ROUTE904.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller"

Layer15.children.append(ROUTE904)
ROUTE905 = x3d.ROUTE()
ROUTE905.fromField = "value_changed"
ROUTE905.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE905.toField = "weight"
ROUTE905.toNode = "Chin_MorphInterpolator_JinLipCornerPuller"

Layer15.children.append(ROUTE905)
ROUTE906 = x3d.ROUTE()
ROUTE906.fromField = "value_changed"
ROUTE906.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE906.toField = "weight"
ROUTE906.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller"

Layer15.children.append(ROUTE906)
ROUTE907 = x3d.ROUTE()
ROUTE907.fromField = "value_changed"
ROUTE907.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE907.toField = "weight"
ROUTE907.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller"

Layer15.children.append(ROUTE907)
ROUTE908 = x3d.ROUTE()
ROUTE908.fromField = "value_changed"
ROUTE908.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE908.toField = "weight"
ROUTE908.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerPuller"

Layer15.children.append(ROUTE908)
ROUTE909 = x3d.ROUTE()
ROUTE909.fromNode = "JinLipCornerPuller_Clock"
ROUTE909.fromField = "fraction_changed"
ROUTE909.toNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE909.toField = "set_fraction"

Layer15.children.append(ROUTE909)
ROUTE910 = x3d.ROUTE()
ROUTE910.fromField = "value_changed"
ROUTE910.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE910.toField = "weight"
ROUTE910.toNode = "Upper_teeth_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE910)
ROUTE911 = x3d.ROUTE()
ROUTE911.fromField = "value_changed"
ROUTE911.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE911.toField = "weight"
ROUTE911.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE911)
ROUTE912 = x3d.ROUTE()
ROUTE912.fromField = "value_changed"
ROUTE912.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE912.toField = "weight"
ROUTE912.toNode = "Chin_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE912)
ROUTE913 = x3d.ROUTE()
ROUTE913.fromField = "value_changed"
ROUTE913.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE913.toField = "weight"
ROUTE913.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE913)
ROUTE914 = x3d.ROUTE()
ROUTE914.fromField = "value_changed"
ROUTE914.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE914.toField = "weight"
ROUTE914.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE914)
ROUTE915 = x3d.ROUTE()
ROUTE915.fromField = "value_changed"
ROUTE915.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE915.toField = "weight"
ROUTE915.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE915)
ROUTE916 = x3d.ROUTE()
ROUTE916.fromField = "value_changed"
ROUTE916.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE916.toField = "weight"
ROUTE916.toNode = "Left_cheek_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE916)
ROUTE917 = x3d.ROUTE()
ROUTE917.fromField = "value_changed"
ROUTE917.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE917.toField = "weight"
ROUTE917.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE917)
ROUTE918 = x3d.ROUTE()
ROUTE918.fromField = "value_changed"
ROUTE918.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE918.toField = "weight"
ROUTE918.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE918)
ROUTE919 = x3d.ROUTE()
ROUTE919.fromField = "value_changed"
ROUTE919.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE919.toField = "weight"
ROUTE919.toNode = "Philtrum_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE919)
ROUTE920 = x3d.ROUTE()
ROUTE920.fromField = "value_changed"
ROUTE920.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE920.toField = "weight"
ROUTE920.toNode = "Right_cheek_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE920)
ROUTE921 = x3d.ROUTE()
ROUTE921.fromField = "value_changed"
ROUTE921.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE921.toField = "weight"
ROUTE921.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE921)
ROUTE922 = x3d.ROUTE()
ROUTE922.fromField = "value_changed"
ROUTE922.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE922.toField = "weight"
ROUTE922.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE922)
ROUTE923 = x3d.ROUTE()
ROUTE923.fromField = "value_changed"
ROUTE923.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE923.toField = "weight"
ROUTE923.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE923)
ROUTE924 = x3d.ROUTE()
ROUTE924.fromField = "value_changed"
ROUTE924.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE924.toField = "weight"
ROUTE924.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"

Layer15.children.append(ROUTE924)
ROUTE925 = x3d.ROUTE()
ROUTE925.fromNode = "JinLipFunneler_Clock"
ROUTE925.fromField = "fraction_changed"
ROUTE925.toNode = "AnimationAdapter_JinLipFunneler"
ROUTE925.toField = "set_fraction"

Layer15.children.append(ROUTE925)
ROUTE926 = x3d.ROUTE()
ROUTE926.fromField = "value_changed"
ROUTE926.fromNode = "AnimationAdapter_JinLipPressor"
ROUTE926.toField = "weight"
ROUTE926.toNode = "Chin_MorphInterpolator_JinLipPressor"

Layer15.children.append(ROUTE926)
ROUTE927 = x3d.ROUTE()
ROUTE927.fromField = "value_changed"
ROUTE927.fromNode = "AnimationAdapter_JinLipPressor"
ROUTE927.toField = "weight"
ROUTE927.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipPressor"

Layer15.children.append(ROUTE927)
ROUTE928 = x3d.ROUTE()
ROUTE928.fromField = "value_changed"
ROUTE928.fromNode = "AnimationAdapter_JinLipPressor"
ROUTE928.toField = "weight"
ROUTE928.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipPressor"

Layer15.children.append(ROUTE928)
ROUTE929 = x3d.ROUTE()
ROUTE929.fromField = "value_changed"
ROUTE929.fromNode = "AnimationAdapter_JinLipPressor"
ROUTE929.toField = "weight"
ROUTE929.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipPressor"

Layer15.children.append(ROUTE929)
ROUTE930 = x3d.ROUTE()
ROUTE930.fromNode = "JinLipPressor_Clock"
ROUTE930.fromField = "fraction_changed"
ROUTE930.toNode = "AnimationAdapter_JinLipPressor"
ROUTE930.toField = "set_fraction"

Layer15.children.append(ROUTE930)
ROUTE931 = x3d.ROUTE()
ROUTE931.fromField = "value_changed"
ROUTE931.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE931.toField = "weight"
ROUTE931.toNode = "Lower_teeth_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE931)
ROUTE932 = x3d.ROUTE()
ROUTE932.fromField = "value_changed"
ROUTE932.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE932.toField = "weight"
ROUTE932.toNode = "Tongue_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE932)
ROUTE933 = x3d.ROUTE()
ROUTE933.fromField = "value_changed"
ROUTE933.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE933.toField = "weight"
ROUTE933.toNode = "Upper_teeth_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE933)
ROUTE934 = x3d.ROUTE()
ROUTE934.fromField = "value_changed"
ROUTE934.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE934.toField = "weight"
ROUTE934.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE934)
ROUTE935 = x3d.ROUTE()
ROUTE935.fromField = "value_changed"
ROUTE935.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE935.toField = "weight"
ROUTE935.toNode = "Chin_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE935)
ROUTE936 = x3d.ROUTE()
ROUTE936.fromField = "value_changed"
ROUTE936.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE936.toField = "weight"
ROUTE936.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE936)
ROUTE937 = x3d.ROUTE()
ROUTE937.fromField = "value_changed"
ROUTE937.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE937.toField = "weight"
ROUTE937.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE937)
ROUTE938 = x3d.ROUTE()
ROUTE938.fromField = "value_changed"
ROUTE938.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE938.toField = "weight"
ROUTE938.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE938)
ROUTE939 = x3d.ROUTE()
ROUTE939.fromField = "value_changed"
ROUTE939.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE939.toField = "weight"
ROUTE939.toNode = "Left_cheek_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE939)
ROUTE940 = x3d.ROUTE()
ROUTE940.fromField = "value_changed"
ROUTE940.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE940.toField = "weight"
ROUTE940.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE940)
ROUTE941 = x3d.ROUTE()
ROUTE941.fromField = "value_changed"
ROUTE941.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE941.toField = "weight"
ROUTE941.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE941)
ROUTE942 = x3d.ROUTE()
ROUTE942.fromField = "value_changed"
ROUTE942.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE942.toField = "weight"
ROUTE942.toNode = "Philtrum_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE942)
ROUTE943 = x3d.ROUTE()
ROUTE943.fromField = "value_changed"
ROUTE943.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE943.toField = "weight"
ROUTE943.toNode = "Right_cheek_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE943)
ROUTE944 = x3d.ROUTE()
ROUTE944.fromField = "value_changed"
ROUTE944.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE944.toField = "weight"
ROUTE944.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE944)
ROUTE945 = x3d.ROUTE()
ROUTE945.fromField = "value_changed"
ROUTE945.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE945.toField = "weight"
ROUTE945.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE945)
ROUTE946 = x3d.ROUTE()
ROUTE946.fromField = "value_changed"
ROUTE946.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE946.toField = "weight"
ROUTE946.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE946)
ROUTE947 = x3d.ROUTE()
ROUTE947.fromField = "value_changed"
ROUTE947.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE947.toField = "weight"
ROUTE947.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"

Layer15.children.append(ROUTE947)
ROUTE948 = x3d.ROUTE()
ROUTE948.fromNode = "JinLipPuckerer_Clock"
ROUTE948.fromField = "fraction_changed"
ROUTE948.toNode = "AnimationAdapter_JinLipPuckerer"
ROUTE948.toField = "set_fraction"

Layer15.children.append(ROUTE948)
ROUTE949 = x3d.ROUTE()
ROUTE949.fromField = "value_changed"
ROUTE949.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE949.toField = "weight"
ROUTE949.toNode = "Upper_teeth_MorphInterpolator_JinLipsPart"

Layer15.children.append(ROUTE949)
ROUTE950 = x3d.ROUTE()
ROUTE950.fromField = "value_changed"
ROUTE950.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE950.toField = "weight"
ROUTE950.toNode = "Chin_MorphInterpolator_JinLipsPart"

Layer15.children.append(ROUTE950)
ROUTE951 = x3d.ROUTE()
ROUTE951.fromField = "value_changed"
ROUTE951.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE951.toField = "weight"
ROUTE951.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipsPart"

Layer15.children.append(ROUTE951)
ROUTE952 = x3d.ROUTE()
ROUTE952.fromField = "value_changed"
ROUTE952.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE952.toField = "weight"
ROUTE952.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipsPart"

Layer15.children.append(ROUTE952)
ROUTE953 = x3d.ROUTE()
ROUTE953.fromField = "value_changed"
ROUTE953.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE953.toField = "weight"
ROUTE953.toNode = "Left_cheek_MorphInterpolator_JinLipsPart"

Layer15.children.append(ROUTE953)
ROUTE954 = x3d.ROUTE()
ROUTE954.fromField = "value_changed"
ROUTE954.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE954.toField = "weight"
ROUTE954.toNode = "Right_cheek_MorphInterpolator_JinLipsPart"

Layer15.children.append(ROUTE954)
ROUTE955 = x3d.ROUTE()
ROUTE955.fromField = "value_changed"
ROUTE955.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE955.toField = "weight"
ROUTE955.toNode = "__4_MorphInterpolator_JinLipsPart"

Layer15.children.append(ROUTE955)
ROUTE956 = x3d.ROUTE()
ROUTE956.fromNode = "JinLipsPart_Clock"
ROUTE956.fromField = "fraction_changed"
ROUTE956.toNode = "AnimationAdapter_JinLipsPart"
ROUTE956.toField = "set_fraction"

Layer15.children.append(ROUTE956)
ROUTE957 = x3d.ROUTE()
ROUTE957.fromField = "value_changed"
ROUTE957.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE957.toField = "weight"
ROUTE957.toNode = "Lower_teeth_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE957)
ROUTE958 = x3d.ROUTE()
ROUTE958.fromField = "value_changed"
ROUTE958.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE958.toField = "weight"
ROUTE958.toNode = "Neck_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE958)
ROUTE959 = x3d.ROUTE()
ROUTE959.fromField = "value_changed"
ROUTE959.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE959.toField = "weight"
ROUTE959.toNode = "Chin_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE959)
ROUTE960 = x3d.ROUTE()
ROUTE960.fromField = "value_changed"
ROUTE960.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE960.toField = "weight"
ROUTE960.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE960)
ROUTE961 = x3d.ROUTE()
ROUTE961.fromField = "value_changed"
ROUTE961.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE961.toField = "weight"
ROUTE961.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE961)
ROUTE962 = x3d.ROUTE()
ROUTE962.fromField = "value_changed"
ROUTE962.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE962.toField = "weight"
ROUTE962.toNode = "Left_cheek_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE962)
ROUTE963 = x3d.ROUTE()
ROUTE963.fromField = "value_changed"
ROUTE963.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE963.toField = "weight"
ROUTE963.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE963)
ROUTE964 = x3d.ROUTE()
ROUTE964.fromField = "value_changed"
ROUTE964.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE964.toField = "weight"
ROUTE964.toNode = "Right_cheek_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE964)
ROUTE965 = x3d.ROUTE()
ROUTE965.fromField = "value_changed"
ROUTE965.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE965.toField = "weight"
ROUTE965.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE965)
ROUTE966 = x3d.ROUTE()
ROUTE966.fromField = "value_changed"
ROUTE966.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE966.toField = "weight"
ROUTE966.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE966)
ROUTE967 = x3d.ROUTE()
ROUTE967.fromField = "value_changed"
ROUTE967.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE967.toField = "weight"
ROUTE967.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipStretcher"

Layer15.children.append(ROUTE967)
ROUTE968 = x3d.ROUTE()
ROUTE968.fromNode = "JinLipStretcher_Clock"
ROUTE968.fromField = "fraction_changed"
ROUTE968.toNode = "AnimationAdapter_JinLipStretcher"
ROUTE968.toField = "set_fraction"

Layer15.children.append(ROUTE968)
ROUTE969 = x3d.ROUTE()
ROUTE969.fromField = "value_changed"
ROUTE969.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE969.toField = "weight"
ROUTE969.toNode = "Upper_teeth_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE969)
ROUTE970 = x3d.ROUTE()
ROUTE970.fromField = "value_changed"
ROUTE970.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE970.toField = "weight"
ROUTE970.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE970)
ROUTE971 = x3d.ROUTE()
ROUTE971.fromField = "value_changed"
ROUTE971.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE971.toField = "weight"
ROUTE971.toNode = "Chin_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE971)
ROUTE972 = x3d.ROUTE()
ROUTE972.fromField = "value_changed"
ROUTE972.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE972.toField = "weight"
ROUTE972.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE972)
ROUTE973 = x3d.ROUTE()
ROUTE973.fromField = "value_changed"
ROUTE973.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE973.toField = "weight"
ROUTE973.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE973)
ROUTE974 = x3d.ROUTE()
ROUTE974.fromField = "value_changed"
ROUTE974.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE974.toField = "weight"
ROUTE974.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE974)
ROUTE975 = x3d.ROUTE()
ROUTE975.fromField = "value_changed"
ROUTE975.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE975.toField = "weight"
ROUTE975.toNode = "Left_cheek_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE975)
ROUTE976 = x3d.ROUTE()
ROUTE976.fromField = "value_changed"
ROUTE976.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE976.toField = "weight"
ROUTE976.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE976)
ROUTE977 = x3d.ROUTE()
ROUTE977.fromField = "value_changed"
ROUTE977.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE977.toField = "weight"
ROUTE977.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE977)
ROUTE978 = x3d.ROUTE()
ROUTE978.fromField = "value_changed"
ROUTE978.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE978.toField = "weight"
ROUTE978.toNode = "Philtrum_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE978)
ROUTE979 = x3d.ROUTE()
ROUTE979.fromField = "value_changed"
ROUTE979.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE979.toField = "weight"
ROUTE979.toNode = "Right_cheek_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE979)
ROUTE980 = x3d.ROUTE()
ROUTE980.fromField = "value_changed"
ROUTE980.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE980.toField = "weight"
ROUTE980.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE980)
ROUTE981 = x3d.ROUTE()
ROUTE981.fromField = "value_changed"
ROUTE981.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE981.toField = "weight"
ROUTE981.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE981)
ROUTE982 = x3d.ROUTE()
ROUTE982.fromField = "value_changed"
ROUTE982.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE982.toField = "weight"
ROUTE982.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE982)
ROUTE983 = x3d.ROUTE()
ROUTE983.fromField = "value_changed"
ROUTE983.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE983.toField = "weight"
ROUTE983.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipSuck"

Layer15.children.append(ROUTE983)
ROUTE984 = x3d.ROUTE()
ROUTE984.fromNode = "JinLipSuck_Clock"
ROUTE984.fromField = "fraction_changed"
ROUTE984.toNode = "AnimationAdapter_JinLipSuck"
ROUTE984.toField = "set_fraction"

Layer15.children.append(ROUTE984)
ROUTE985 = x3d.ROUTE()
ROUTE985.fromField = "value_changed"
ROUTE985.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE985.toField = "weight"
ROUTE985.toNode = "Upper_teeth_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE985)
ROUTE986 = x3d.ROUTE()
ROUTE986.fromField = "value_changed"
ROUTE986.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE986.toField = "weight"
ROUTE986.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE986)
ROUTE987 = x3d.ROUTE()
ROUTE987.fromField = "value_changed"
ROUTE987.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE987.toField = "weight"
ROUTE987.toNode = "Chin_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE987)
ROUTE988 = x3d.ROUTE()
ROUTE988.fromField = "value_changed"
ROUTE988.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE988.toField = "weight"
ROUTE988.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE988)
ROUTE989 = x3d.ROUTE()
ROUTE989.fromField = "value_changed"
ROUTE989.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE989.toField = "weight"
ROUTE989.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE989)
ROUTE990 = x3d.ROUTE()
ROUTE990.fromField = "value_changed"
ROUTE990.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE990.toField = "weight"
ROUTE990.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE990)
ROUTE991 = x3d.ROUTE()
ROUTE991.fromField = "value_changed"
ROUTE991.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE991.toField = "weight"
ROUTE991.toNode = "Left_cheek_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE991)
ROUTE992 = x3d.ROUTE()
ROUTE992.fromField = "value_changed"
ROUTE992.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE992.toField = "weight"
ROUTE992.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE992)
ROUTE993 = x3d.ROUTE()
ROUTE993.fromField = "value_changed"
ROUTE993.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE993.toField = "weight"
ROUTE993.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE993)
ROUTE994 = x3d.ROUTE()
ROUTE994.fromField = "value_changed"
ROUTE994.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE994.toField = "weight"
ROUTE994.toNode = "Philtrum_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE994)
ROUTE995 = x3d.ROUTE()
ROUTE995.fromField = "value_changed"
ROUTE995.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE995.toField = "weight"
ROUTE995.toNode = "Right_cheek_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE995)
ROUTE996 = x3d.ROUTE()
ROUTE996.fromField = "value_changed"
ROUTE996.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE996.toField = "weight"
ROUTE996.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE996)
ROUTE997 = x3d.ROUTE()
ROUTE997.fromField = "value_changed"
ROUTE997.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE997.toField = "weight"
ROUTE997.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE997)
ROUTE998 = x3d.ROUTE()
ROUTE998.fromField = "value_changed"
ROUTE998.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE998.toField = "weight"
ROUTE998.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE998)
ROUTE999 = x3d.ROUTE()
ROUTE999.fromField = "value_changed"
ROUTE999.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE999.toField = "weight"
ROUTE999.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipTightener"

Layer15.children.append(ROUTE999)
ROUTE1000 = x3d.ROUTE()
ROUTE1000.fromNode = "JinLipTightener_Clock"
ROUTE1000.fromField = "fraction_changed"
ROUTE1000.toNode = "AnimationAdapter_JinLipTightener"
ROUTE1000.toField = "set_fraction"

Layer15.children.append(ROUTE1000)
ROUTE1001 = x3d.ROUTE()
ROUTE1001.fromField = "value_changed"
ROUTE1001.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1001.toField = "weight"
ROUTE1001.toNode = "Lower_teeth_MorphInterpolator_JinLowerLipDepressor"

Layer15.children.append(ROUTE1001)
ROUTE1002 = x3d.ROUTE()
ROUTE1002.fromField = "value_changed"
ROUTE1002.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1002.toField = "weight"
ROUTE1002.toNode = "Neck_MorphInterpolator_JinLowerLipDepressor"

Layer15.children.append(ROUTE1002)
ROUTE1003 = x3d.ROUTE()
ROUTE1003.fromField = "value_changed"
ROUTE1003.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1003.toField = "weight"
ROUTE1003.toNode = "Chin_MorphInterpolator_JinLowerLipDepressor"

Layer15.children.append(ROUTE1003)
ROUTE1004 = x3d.ROUTE()
ROUTE1004.fromField = "value_changed"
ROUTE1004.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1004.toField = "weight"
ROUTE1004.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"

Layer15.children.append(ROUTE1004)
ROUTE1005 = x3d.ROUTE()
ROUTE1005.fromField = "value_changed"
ROUTE1005.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1005.toField = "weight"
ROUTE1005.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"

Layer15.children.append(ROUTE1005)
ROUTE1006 = x3d.ROUTE()
ROUTE1006.fromField = "value_changed"
ROUTE1006.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1006.toField = "weight"
ROUTE1006.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"

Layer15.children.append(ROUTE1006)
ROUTE1007 = x3d.ROUTE()
ROUTE1007.fromNode = "JinLowerLipDepressor_Clock"
ROUTE1007.fromField = "fraction_changed"
ROUTE1007.toNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1007.toField = "set_fraction"

Layer15.children.append(ROUTE1007)
ROUTE1008 = x3d.ROUTE()
ROUTE1008.fromField = "value_changed"
ROUTE1008.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1008.toField = "weight"
ROUTE1008.toNode = "Lower_teeth_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1008)
ROUTE1009 = x3d.ROUTE()
ROUTE1009.fromField = "value_changed"
ROUTE1009.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1009.toField = "weight"
ROUTE1009.toNode = "Tongue_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1009)
ROUTE1010 = x3d.ROUTE()
ROUTE1010.fromField = "value_changed"
ROUTE1010.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1010.toField = "weight"
ROUTE1010.toNode = "Upper_teeth_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1010)
ROUTE1011 = x3d.ROUTE()
ROUTE1011.fromField = "value_changed"
ROUTE1011.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1011.toField = "weight"
ROUTE1011.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1011)
ROUTE1012 = x3d.ROUTE()
ROUTE1012.fromField = "value_changed"
ROUTE1012.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1012.toField = "weight"
ROUTE1012.toNode = "Chin_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1012)
ROUTE1013 = x3d.ROUTE()
ROUTE1013.fromField = "value_changed"
ROUTE1013.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1013.toField = "weight"
ROUTE1013.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1013)
ROUTE1014 = x3d.ROUTE()
ROUTE1014.fromField = "value_changed"
ROUTE1014.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1014.toField = "weight"
ROUTE1014.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1014)
ROUTE1015 = x3d.ROUTE()
ROUTE1015.fromField = "value_changed"
ROUTE1015.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1015.toField = "weight"
ROUTE1015.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1015)
ROUTE1016 = x3d.ROUTE()
ROUTE1016.fromField = "value_changed"
ROUTE1016.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1016.toField = "weight"
ROUTE1016.toNode = "Left_cheek_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1016)
ROUTE1017 = x3d.ROUTE()
ROUTE1017.fromField = "value_changed"
ROUTE1017.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1017.toField = "weight"
ROUTE1017.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1017)
ROUTE1018 = x3d.ROUTE()
ROUTE1018.fromField = "value_changed"
ROUTE1018.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1018.toField = "weight"
ROUTE1018.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1018)
ROUTE1019 = x3d.ROUTE()
ROUTE1019.fromField = "value_changed"
ROUTE1019.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1019.toField = "weight"
ROUTE1019.toNode = "Philtrum_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1019)
ROUTE1020 = x3d.ROUTE()
ROUTE1020.fromField = "value_changed"
ROUTE1020.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1020.toField = "weight"
ROUTE1020.toNode = "Right_cheek_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1020)
ROUTE1021 = x3d.ROUTE()
ROUTE1021.fromField = "value_changed"
ROUTE1021.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1021.toField = "weight"
ROUTE1021.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1021)
ROUTE1022 = x3d.ROUTE()
ROUTE1022.fromField = "value_changed"
ROUTE1022.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1022.toField = "weight"
ROUTE1022.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1022)
ROUTE1023 = x3d.ROUTE()
ROUTE1023.fromField = "value_changed"
ROUTE1023.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1023.toField = "weight"
ROUTE1023.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1023)
ROUTE1024 = x3d.ROUTE()
ROUTE1024.fromField = "value_changed"
ROUTE1024.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1024.toField = "weight"
ROUTE1024.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"

Layer15.children.append(ROUTE1024)
ROUTE1025 = x3d.ROUTE()
ROUTE1025.fromNode = "JinMouthStretch_Clock"
ROUTE1025.fromField = "fraction_changed"
ROUTE1025.toNode = "AnimationAdapter_JinMouthStretch"
ROUTE1025.toField = "set_fraction"

Layer15.children.append(ROUTE1025)
ROUTE1026 = x3d.ROUTE()
ROUTE1026.fromField = "value_changed"
ROUTE1026.fromNode = "AnimationAdapter_JinNasolabialDeepener"
ROUTE1026.toField = "weight"
ROUTE1026.toNode = "Nasal_tip_MorphInterpolator_JinNasolabialDeepener"

Layer15.children.append(ROUTE1026)
ROUTE1027 = x3d.ROUTE()
ROUTE1027.fromField = "value_changed"
ROUTE1027.fromNode = "AnimationAdapter_JinNasolabialDeepener"
ROUTE1027.toField = "weight"
ROUTE1027.toNode = "Left_nostril_MorphInterpolator_JinNasolabialDeepener"

Layer15.children.append(ROUTE1027)
ROUTE1028 = x3d.ROUTE()
ROUTE1028.fromField = "value_changed"
ROUTE1028.fromNode = "AnimationAdapter_JinNasolabialDeepener"
ROUTE1028.toField = "weight"
ROUTE1028.toNode = "Right_nostril_MorphInterpolator_JinNasolabialDeepener"

Layer15.children.append(ROUTE1028)
ROUTE1029 = x3d.ROUTE()
ROUTE1029.fromNode = "JinNasolabialDeepener_Clock"
ROUTE1029.fromField = "fraction_changed"
ROUTE1029.toNode = "AnimationAdapter_JinNasolabialDeepener"
ROUTE1029.toField = "set_fraction"

Layer15.children.append(ROUTE1029)
ROUTE1030 = x3d.ROUTE()
ROUTE1030.fromField = "value_changed"
ROUTE1030.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1030.toField = "weight"
ROUTE1030.toNode = "Upper_teeth_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1030)
ROUTE1031 = x3d.ROUTE()
ROUTE1031.fromField = "value_changed"
ROUTE1031.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1031.toField = "weight"
ROUTE1031.toNode = "Left_nostril_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1031)
ROUTE1032 = x3d.ROUTE()
ROUTE1032.fromField = "value_changed"
ROUTE1032.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1032.toField = "weight"
ROUTE1032.toNode = "Left_dorsum_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1032)
ROUTE1033 = x3d.ROUTE()
ROUTE1033.fromField = "value_changed"
ROUTE1033.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1033.toField = "weight"
ROUTE1033.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1033)
ROUTE1034 = x3d.ROUTE()
ROUTE1034.fromField = "value_changed"
ROUTE1034.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1034.toField = "weight"
ROUTE1034.toNode = "Left_cheek_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1034)
ROUTE1035 = x3d.ROUTE()
ROUTE1035.fromField = "value_changed"
ROUTE1035.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1035.toField = "weight"
ROUTE1035.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1035)
ROUTE1036 = x3d.ROUTE()
ROUTE1036.fromField = "value_changed"
ROUTE1036.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1036.toField = "weight"
ROUTE1036.toNode = "Right_cheek_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1036)
ROUTE1037 = x3d.ROUTE()
ROUTE1037.fromField = "value_changed"
ROUTE1037.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1037.toField = "weight"
ROUTE1037.toNode = "Right_dorsum_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1037)
ROUTE1038 = x3d.ROUTE()
ROUTE1038.fromField = "value_changed"
ROUTE1038.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1038.toField = "weight"
ROUTE1038.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1038)
ROUTE1039 = x3d.ROUTE()
ROUTE1039.fromField = "value_changed"
ROUTE1039.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1039.toField = "weight"
ROUTE1039.toNode = "Right_nostril_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1039)
ROUTE1040 = x3d.ROUTE()
ROUTE1040.fromField = "value_changed"
ROUTE1040.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1040.toField = "weight"
ROUTE1040.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler"

Layer15.children.append(ROUTE1040)
ROUTE1041 = x3d.ROUTE()
ROUTE1041.fromNode = "JinNoseWrinkler_Clock"
ROUTE1041.fromField = "fraction_changed"
ROUTE1041.toNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1041.toField = "set_fraction"

Layer15.children.append(ROUTE1041)
ROUTE1042 = x3d.ROUTE()
ROUTE1042.fromField = "value_changed"
ROUTE1042.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1042.toField = "weight"
ROUTE1042.toNode = "Right_forehead_MorphInterpolator_JinOuterBrowRaiser"

Layer15.children.append(ROUTE1042)
ROUTE1043 = x3d.ROUTE()
ROUTE1043.fromField = "value_changed"
ROUTE1043.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1043.toField = "weight"
ROUTE1043.toNode = "Right_eyebrow_MorphInterpolator_JinOuterBrowRaiser"

Layer15.children.append(ROUTE1043)
ROUTE1044 = x3d.ROUTE()
ROUTE1044.fromField = "value_changed"
ROUTE1044.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1044.toField = "weight"
ROUTE1044.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinOuterBrowRaiser"

Layer15.children.append(ROUTE1044)
ROUTE1045 = x3d.ROUTE()
ROUTE1045.fromField = "value_changed"
ROUTE1045.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1045.toField = "weight"
ROUTE1045.toNode = "Right_temple_MorphInterpolator_JinOuterBrowRaiser"

Layer15.children.append(ROUTE1045)
ROUTE1046 = x3d.ROUTE()
ROUTE1046.fromField = "value_changed"
ROUTE1046.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1046.toField = "weight"
ROUTE1046.toNode = "Right_upper_eyelid_MorphInterpolator_JinOuterBrowRaiser"

Layer15.children.append(ROUTE1046)
ROUTE1047 = x3d.ROUTE()
ROUTE1047.fromNode = "JinOuterBrowRaiser_Clock"
ROUTE1047.fromField = "fraction_changed"
ROUTE1047.toNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1047.toField = "set_fraction"

Layer15.children.append(ROUTE1047)
ROUTE1048 = x3d.ROUTE()
ROUTE1048.fromField = "value_changed"
ROUTE1048.fromNode = "AnimationAdapter_JinSlit"
ROUTE1048.toField = "weight"
ROUTE1048.toNode = "Upper_teeth_MorphInterpolator_JinSlit"

Layer15.children.append(ROUTE1048)
ROUTE1049 = x3d.ROUTE()
ROUTE1049.fromField = "value_changed"
ROUTE1049.fromNode = "AnimationAdapter_JinSlit"
ROUTE1049.toField = "weight"
ROUTE1049.toNode = "Left_upper_eyelid_MorphInterpolator_JinSlit"

Layer15.children.append(ROUTE1049)
ROUTE1050 = x3d.ROUTE()
ROUTE1050.fromField = "value_changed"
ROUTE1050.fromNode = "AnimationAdapter_JinSlit"
ROUTE1050.toField = "weight"
ROUTE1050.toNode = "Right_upper_eyelid_MorphInterpolator_JinSlit"

Layer15.children.append(ROUTE1050)
ROUTE1051 = x3d.ROUTE()
ROUTE1051.fromNode = "JinSlit_Clock"
ROUTE1051.fromField = "fraction_changed"
ROUTE1051.toNode = "AnimationAdapter_JinSlit"
ROUTE1051.toField = "set_fraction"

Layer15.children.append(ROUTE1051)
ROUTE1052 = x3d.ROUTE()
ROUTE1052.fromField = "value_changed"
ROUTE1052.fromNode = "AnimationAdapter_JinSquint"
ROUTE1052.toField = "weight"
ROUTE1052.toNode = "Left_eyebrow_MorphInterpolator_JinSquint"

Layer15.children.append(ROUTE1052)
ROUTE1053 = x3d.ROUTE()
ROUTE1053.fromField = "value_changed"
ROUTE1053.fromNode = "AnimationAdapter_JinSquint"
ROUTE1053.toField = "weight"
ROUTE1053.toNode = "Left_temple_MorphInterpolator_JinSquint"

Layer15.children.append(ROUTE1053)
ROUTE1054 = x3d.ROUTE()
ROUTE1054.fromField = "value_changed"
ROUTE1054.fromNode = "AnimationAdapter_JinSquint"
ROUTE1054.toField = "weight"
ROUTE1054.toNode = "Right_eyebrow_MorphInterpolator_JinSquint"

Layer15.children.append(ROUTE1054)
ROUTE1055 = x3d.ROUTE()
ROUTE1055.fromField = "value_changed"
ROUTE1055.fromNode = "AnimationAdapter_JinSquint"
ROUTE1055.toField = "weight"
ROUTE1055.toNode = "Left_upper_eyelid_MorphInterpolator_JinSquint"

Layer15.children.append(ROUTE1055)
ROUTE1056 = x3d.ROUTE()
ROUTE1056.fromField = "value_changed"
ROUTE1056.fromNode = "AnimationAdapter_JinSquint"
ROUTE1056.toField = "weight"
ROUTE1056.toNode = "Left_lower_eyelid_MorphInterpolator_JinSquint"

Layer15.children.append(ROUTE1056)
ROUTE1057 = x3d.ROUTE()
ROUTE1057.fromField = "value_changed"
ROUTE1057.fromNode = "AnimationAdapter_JinSquint"
ROUTE1057.toField = "weight"
ROUTE1057.toNode = "Right_lower_eyelid_MorphInterpolator_JinSquint"

Layer15.children.append(ROUTE1057)
ROUTE1058 = x3d.ROUTE()
ROUTE1058.fromField = "value_changed"
ROUTE1058.fromNode = "AnimationAdapter_JinSquint"
ROUTE1058.toField = "weight"
ROUTE1058.toNode = "Right_temple_MorphInterpolator_JinSquint"

Layer15.children.append(ROUTE1058)
ROUTE1059 = x3d.ROUTE()
ROUTE1059.fromField = "value_changed"
ROUTE1059.fromNode = "AnimationAdapter_JinSquint"
ROUTE1059.toField = "weight"
ROUTE1059.toNode = "Right_upper_eyelid_MorphInterpolator_JinSquint"

Layer15.children.append(ROUTE1059)
ROUTE1060 = x3d.ROUTE()
ROUTE1060.fromNode = "JinSquint_Clock"
ROUTE1060.fromField = "fraction_changed"
ROUTE1060.toNode = "AnimationAdapter_JinSquint"
ROUTE1060.toField = "set_fraction"

Layer15.children.append(ROUTE1060)
ROUTE1061 = x3d.ROUTE()
ROUTE1061.fromField = "value_changed"
ROUTE1061.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1061.toField = "weight"
ROUTE1061.toNode = "Left_eyebrow_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1061)
ROUTE1062 = x3d.ROUTE()
ROUTE1062.fromField = "value_changed"
ROUTE1062.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1062.toField = "weight"
ROUTE1062.toNode = "Left_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1062)
ROUTE1063 = x3d.ROUTE()
ROUTE1063.fromField = "value_changed"
ROUTE1063.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1063.toField = "weight"
ROUTE1063.toNode = "Right_eyebrow_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1063)
ROUTE1064 = x3d.ROUTE()
ROUTE1064.fromField = "value_changed"
ROUTE1064.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1064.toField = "weight"
ROUTE1064.toNode = "Left_upper_eyelid_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1064)
ROUTE1065 = x3d.ROUTE()
ROUTE1065.fromField = "value_changed"
ROUTE1065.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1065.toField = "weight"
ROUTE1065.toNode = "Left_lower_eyelid_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1065)
ROUTE1066 = x3d.ROUTE()
ROUTE1066.fromField = "value_changed"
ROUTE1066.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1066.toField = "weight"
ROUTE1066.toNode = "Left_pupil_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1066)
ROUTE1067 = x3d.ROUTE()
ROUTE1067.fromField = "value_changed"
ROUTE1067.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1067.toField = "weight"
ROUTE1067.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1067)
ROUTE1068 = x3d.ROUTE()
ROUTE1068.fromField = "value_changed"
ROUTE1068.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1068.toField = "weight"
ROUTE1068.toNode = "Right_lower_eyelid_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1068)
ROUTE1069 = x3d.ROUTE()
ROUTE1069.fromField = "value_changed"
ROUTE1069.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1069.toField = "weight"
ROUTE1069.toNode = "Right_pupil_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1069)
ROUTE1070 = x3d.ROUTE()
ROUTE1070.fromField = "value_changed"
ROUTE1070.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1070.toField = "weight"
ROUTE1070.toNode = "Right_upper_eyelid_MorphInterpolator_JinUpperLidRaiser"

Layer15.children.append(ROUTE1070)
ROUTE1071 = x3d.ROUTE()
ROUTE1071.fromNode = "JinUpperLidRaiser_Clock"
ROUTE1071.fromField = "fraction_changed"
ROUTE1071.toNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1071.toField = "set_fraction"

Layer15.children.append(ROUTE1071)
ROUTE1072 = x3d.ROUTE()
ROUTE1072.fromField = "value_changed"
ROUTE1072.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1072.toField = "weight"
ROUTE1072.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1072)
ROUTE1073 = x3d.ROUTE()
ROUTE1073.fromField = "value_changed"
ROUTE1073.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1073.toField = "weight"
ROUTE1073.toNode = "Left_nostril_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1073)
ROUTE1074 = x3d.ROUTE()
ROUTE1074.fromField = "value_changed"
ROUTE1074.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1074.toField = "weight"
ROUTE1074.toNode = "Left_dorsum_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1074)
ROUTE1075 = x3d.ROUTE()
ROUTE1075.fromField = "value_changed"
ROUTE1075.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1075.toField = "weight"
ROUTE1075.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1075)
ROUTE1076 = x3d.ROUTE()
ROUTE1076.fromField = "value_changed"
ROUTE1076.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1076.toField = "weight"
ROUTE1076.toNode = "Left_cheek_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1076)
ROUTE1077 = x3d.ROUTE()
ROUTE1077.fromField = "value_changed"
ROUTE1077.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1077.toField = "weight"
ROUTE1077.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1077)
ROUTE1078 = x3d.ROUTE()
ROUTE1078.fromField = "value_changed"
ROUTE1078.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1078.toField = "weight"
ROUTE1078.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1078)
ROUTE1079 = x3d.ROUTE()
ROUTE1079.fromField = "value_changed"
ROUTE1079.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1079.toField = "weight"
ROUTE1079.toNode = "Philtrum_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1079)
ROUTE1080 = x3d.ROUTE()
ROUTE1080.fromField = "value_changed"
ROUTE1080.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1080.toField = "weight"
ROUTE1080.toNode = "Right_cheek_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1080)
ROUTE1081 = x3d.ROUTE()
ROUTE1081.fromField = "value_changed"
ROUTE1081.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1081.toField = "weight"
ROUTE1081.toNode = "Right_dorsum_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1081)
ROUTE1082 = x3d.ROUTE()
ROUTE1082.fromField = "value_changed"
ROUTE1082.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1082.toField = "weight"
ROUTE1082.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1082)
ROUTE1083 = x3d.ROUTE()
ROUTE1083.fromField = "value_changed"
ROUTE1083.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1083.toField = "weight"
ROUTE1083.toNode = "Right_nostril_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1083)
ROUTE1084 = x3d.ROUTE()
ROUTE1084.fromField = "value_changed"
ROUTE1084.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1084.toField = "weight"
ROUTE1084.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1084)
ROUTE1085 = x3d.ROUTE()
ROUTE1085.fromField = "value_changed"
ROUTE1085.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1085.toField = "weight"
ROUTE1085.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"

Layer15.children.append(ROUTE1085)
ROUTE1086 = x3d.ROUTE()
ROUTE1086.fromNode = "JinUpperLipRaiser_Clock"
ROUTE1086.fromField = "fraction_changed"
ROUTE1086.toNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1086.toField = "set_fraction"

Layer15.children.append(ROUTE1086)
ROUTE1087 = x3d.ROUTE()
ROUTE1087.fromField = "value_changed"
ROUTE1087.fromNode = "AnimationAdapter_JinWink"
ROUTE1087.toField = "weight"
ROUTE1087.toNode = "Left_upper_eyelid_MorphInterpolator_JinWink"

Layer15.children.append(ROUTE1087)
ROUTE1088 = x3d.ROUTE()
ROUTE1088.fromField = "value_changed"
ROUTE1088.fromNode = "AnimationAdapter_JinWink"
ROUTE1088.toField = "weight"
ROUTE1088.toNode = "Left_lower_eyelid_MorphInterpolator_JinWink"

Layer15.children.append(ROUTE1088)
ROUTE1089 = x3d.ROUTE()
ROUTE1089.fromNode = "JinWink_Clock"
ROUTE1089.fromField = "fraction_changed"
ROUTE1089.toNode = "AnimationAdapter_JinWink"
ROUTE1089.toField = "set_fraction"

Layer15.children.append(ROUTE1089)
WorldInfo1090 = x3d.WorldInfo()
WorldInfo1090.title = "CleanedYouClocks.x3d"

Layer15.children.append(WorldInfo1090)

LayerSet14.layers.append(Layer15)
Layer1091 = x3d.Layer(DEF="Menu")
Layer1091.pickable = True
Layer1091.objectType = ["ALL"]
Viewpoint1092 = x3d.Viewpoint()
Viewpoint1092.position = [0,20,110]

Layer1091.children.append(Viewpoint1092)
ProtoDeclare1093 = x3d.ProtoDeclare()
ProtoDeclare1093.name = "MenuItem"
ProtoInterface1094 = x3d.ProtoInterface()
field1095 = x3d.field()
field1095.name = "translation"
field1095.accessType = "inputOutput"
field1095.type = "SFVec3f"

ProtoInterface1094.field.append(field1095)
field1096 = x3d.field()
field1096.name = "textTranslation"
field1096.accessType = "inputOutput"
field1096.type = "SFVec3f"

ProtoInterface1094.field.append(field1096)
field1097 = x3d.field()
field1097.name = "description"
field1097.accessType = "inputOutput"
field1097.type = "SFString"

ProtoInterface1094.field.append(field1097)
field1098 = x3d.field()
field1098.name = "menuItemString"
field1098.accessType = "inputOutput"
field1098.type = "MFString"

ProtoInterface1094.field.append(field1098)
field1099 = x3d.field()
field1099.name = "startTime"
field1099.accessType = "outputOnly"
field1099.type = "SFTime"
field1099.value = -1

ProtoInterface1094.field.append(field1099)
field1100 = x3d.field()
field1100.name = "stopTime"
field1100.accessType = "outputOnly"
field1100.type = "SFTime"
field1100.value = -1

ProtoInterface1094.field.append(field1100)
field1101 = x3d.field()
field1101.name = "enabled"
field1101.accessType = "outputOnly"
field1101.type = "SFBool"
field1101.value = False

ProtoInterface1094.field.append(field1101)
field1102 = x3d.field()
field1102.name = "untoggle"
field1102.accessType = "inputOnly"
field1102.type = "SFBool"
field1102.value = False

ProtoInterface1094.field.append(field1102)
field1103 = x3d.field()
field1103.name = "size"
field1103.accessType = "initializeOnly"
field1103.type = "SFVec2f"
field1103.value = [40,3]

ProtoInterface1094.field.append(field1103)
field1104 = x3d.field()
field1104.name = "fontSize"
field1104.accessType = "inputOutput"
field1104.type = "SFFloat"
field1104.value = 2.4

ProtoInterface1094.field.append(field1104)
field1105 = x3d.field()
field1105.name = "spacing"
field1105.accessType = "initializeOnly"
field1105.type = "SFFloat"
field1105.value = 1.2

ProtoInterface1094.field.append(field1105)

ProtoDeclare1093.ProtoInterface = ProtoInterface1094
ProtoBody1106 = x3d.ProtoBody()
Group1107 = x3d.Group()
Transform1108 = x3d.Transform()
IS1109 = x3d.IS()
connect1110 = x3d.connect()
connect1110.nodeField = "translation"
connect1110.protoField = "translation"

IS1109.connect.append(connect1110)

Transform1108.IS = IS1109
TouchSensor1111 = x3d.TouchSensor(DEF="StartStopAnimationUnit_Sensor")
IS1112 = x3d.IS()
connect1113 = x3d.connect()
connect1113.nodeField = "description"
connect1113.protoField = "description"

IS1112.connect.append(connect1113)

TouchSensor1111.IS = IS1112

Transform1108.children.append(TouchSensor1111)
Transform1114 = x3d.Transform()
IS1115 = x3d.IS()
connect1116 = x3d.connect()
connect1116.nodeField = "translation"
connect1116.protoField = "textTranslation"

IS1115.connect.append(connect1116)

Transform1114.IS = IS1115
Shape1117 = x3d.Shape()
Appearance1118 = x3d.Appearance()
Material1119 = x3d.Material()
Material1119.diffuseColor = [1,1,1]

Appearance1118.material = Material1119

Shape1117.appearance = Appearance1118
Text1120 = x3d.Text()
IS1121 = x3d.IS()
connect1122 = x3d.connect()
connect1122.nodeField = "string"
connect1122.protoField = "menuItemString"

IS1121.connect.append(connect1122)

Text1120.IS = IS1121
FontStyle1123 = x3d.FontStyle()
FontStyle1123.justify = ["MIDDLE","MIDDLE"]
IS1124 = x3d.IS()
connect1125 = x3d.connect()
connect1125.nodeField = "size"
connect1125.protoField = "fontSize"

IS1124.connect.append(connect1125)
connect1126 = x3d.connect()
connect1126.nodeField = "spacing"
connect1126.protoField = "spacing"

IS1124.connect.append(connect1126)

FontStyle1123.IS = IS1124

Text1120.fontStyle = FontStyle1123

Shape1117.geometry = Text1120

Transform1114.children.append(Shape1117)

Transform1108.children.append(Transform1114)
Transform1127 = x3d.Transform()
Transform1127.translation = [0,0,-0.01]
Switch1128 = x3d.Switch(DEF="itemMaterial")
Switch1128.whichChoice = 0
Shape1129 = x3d.Shape()
Appearance1130 = x3d.Appearance()
Material1131 = x3d.Material()
Material1131.diffuseColor = [0,0,1]

Appearance1130.material = Material1131

Shape1129.appearance = Appearance1130
Rectangle2D1132 = x3d.Rectangle2D()
Rectangle2D1132.size = [40,3]
IS1133 = x3d.IS()
connect1134 = x3d.connect()
connect1134.nodeField = "size"
connect1134.protoField = "size"

IS1133.connect.append(connect1134)

Rectangle2D1132.IS = IS1133

Shape1129.geometry = Rectangle2D1132

Switch1128.children.append(Shape1129)
Shape1135 = x3d.Shape()
Appearance1136 = x3d.Appearance()
Material1137 = x3d.Material()
Material1137.diffuseColor = [0,1,0]

Appearance1136.material = Material1137

Shape1135.appearance = Appearance1136
Rectangle2D1138 = x3d.Rectangle2D()
Rectangle2D1138.size = [40,3]
IS1139 = x3d.IS()
connect1140 = x3d.connect()
connect1140.nodeField = "size"
connect1140.protoField = "size"

IS1139.connect.append(connect1140)

Rectangle2D1138.IS = IS1139

Shape1135.geometry = Rectangle2D1138

Switch1128.children.append(Shape1135)

Transform1127.children.append(Switch1128)

Transform1108.children.append(Transform1127)

Group1107.children.append(Transform1108)
TimeTrigger1141 = x3d.TimeTrigger(DEF="startTime")
IS1142 = x3d.IS()
connect1143 = x3d.connect()
connect1143.nodeField = "triggerTime"
connect1143.protoField = "startTime"

IS1142.connect.append(connect1143)

TimeTrigger1141.IS = IS1142

Group1107.children.append(TimeTrigger1141)
TimeTrigger1144 = x3d.TimeTrigger(DEF="stopTime")
IS1145 = x3d.IS()
connect1146 = x3d.connect()
connect1146.nodeField = "triggerTime"
connect1146.protoField = "stopTime"

IS1145.connect.append(connect1146)

TimeTrigger1144.IS = IS1145

Group1107.children.append(TimeTrigger1144)
BooleanFilter1147 = x3d.BooleanFilter(DEF="veryTrue")
IS1148 = x3d.IS()
connect1149 = x3d.connect()
connect1149.nodeField = "inputTrue"
connect1149.protoField = "enabled"

IS1148.connect.append(connect1149)

BooleanFilter1147.IS = IS1148

Group1107.children.append(BooleanFilter1147)
BooleanFilter1150 = x3d.BooleanFilter(DEF="veryFalse")

Group1107.children.append(BooleanFilter1150)
BooleanSequencer1151 = x3d.BooleanSequencer(DEF="clickBetweenStates")
BooleanSequencer1151.key = [0,1]
BooleanSequencer1151.keyValue = [True,False]

Group1107.children.append(BooleanSequencer1151)
IntegerSequencer1152 = x3d.IntegerSequencer(DEF="toggler")
IntegerSequencer1152.key = [0,1]
IntegerSequencer1152.keyValue = [1,0]

Group1107.children.append(IntegerSequencer1152)
IntegerSequencer1153 = x3d.IntegerSequencer(DEF="untoggler")
IntegerSequencer1153.key = [0,1]
IntegerSequencer1153.keyValue = [0,0]
IS1154 = x3d.IS()
connect1155 = x3d.connect()
connect1155.nodeField = "next"
connect1155.protoField = "untoggle"

IS1154.connect.append(connect1155)

IntegerSequencer1153.IS = IS1154

Group1107.children.append(IntegerSequencer1153)
ROUTE1156 = x3d.ROUTE()
ROUTE1156.fromNode = "clickBetweenStates"
ROUTE1156.fromField = "value_changed"
ROUTE1156.toNode = "veryTrue"
ROUTE1156.toField = "set_boolean"

Group1107.children.append(ROUTE1156)
ROUTE1157 = x3d.ROUTE()
ROUTE1157.fromNode = "veryTrue"
ROUTE1157.fromField = "inputTrue"
ROUTE1157.toNode = "startTime"
ROUTE1157.toField = "set_boolean"

Group1107.children.append(ROUTE1157)
ROUTE1158 = x3d.ROUTE()
ROUTE1158.fromNode = "clickBetweenStates"
ROUTE1158.fromField = "value_changed"
ROUTE1158.toNode = "veryFalse"
ROUTE1158.toField = "set_boolean"

Group1107.children.append(ROUTE1158)
ROUTE1159 = x3d.ROUTE()
ROUTE1159.fromNode = "veryFalse"
ROUTE1159.fromField = "inputFalse"
ROUTE1159.toNode = "stopTime"
ROUTE1159.toField = "set_boolean"

Group1107.children.append(ROUTE1159)
ROUTE1160 = x3d.ROUTE()
ROUTE1160.fromNode = "StartStopAnimationUnit_Sensor"
ROUTE1160.fromField = "isActive"
ROUTE1160.toNode = "toggler"
ROUTE1160.toField = "next"

Group1107.children.append(ROUTE1160)
ROUTE1161 = x3d.ROUTE()
ROUTE1161.fromNode = "toggler"
ROUTE1161.fromField = "value_changed"
ROUTE1161.toNode = "itemMaterial"
ROUTE1161.toField = "whichChoice"

Group1107.children.append(ROUTE1161)
ROUTE1162 = x3d.ROUTE()
ROUTE1162.fromNode = "untoggler"
ROUTE1162.fromField = "value_changed"
ROUTE1162.toNode = "itemMaterial"
ROUTE1162.toField = "whichChoice"

Group1107.children.append(ROUTE1162)
ROUTE1163 = x3d.ROUTE()
ROUTE1163.fromNode = "StartStopAnimationUnit_Sensor"
ROUTE1163.fromField = "isActive"
ROUTE1163.toNode = "clickBetweenStates"
ROUTE1163.toField = "next"

Group1107.children.append(ROUTE1163)

ProtoBody1106.children.append(Group1107)

ProtoDeclare1093.ProtoBody = ProtoBody1106

Layer1091.children.append(ProtoDeclare1093)
ProximitySensor1164 = x3d.ProximitySensor(DEF="HudProx")
ProximitySensor1164.size = [50,50,50]

Layer1091.children.append(ProximitySensor1164)
ProtoInstance1165 = x3d.ProtoInstance(DEF="AUJinBlink")
ProtoInstance1165.name = "MenuItem"
fieldValue1166 = x3d.fieldValue()
fieldValue1166.name = "translation"
fieldValue1166.value = "65 63.4 0"

ProtoInstance1165.fieldValue.append(fieldValue1166)
fieldValue1167 = x3d.fieldValue()
fieldValue1167.name = "textTranslation"
fieldValue1167.value = "0 0 0"

ProtoInstance1165.fieldValue.append(fieldValue1167)
fieldValue1168 = x3d.fieldValue()
fieldValue1168.name = "description"
fieldValue1168.value = "Jin Blink"

ProtoInstance1165.fieldValue.append(fieldValue1168)
fieldValue1169 = x3d.fieldValue()
fieldValue1169.name = "menuItemString"
fieldValue1169.value = "\"JinBlink\""

ProtoInstance1165.fieldValue.append(fieldValue1169)
fieldValue1170 = x3d.fieldValue()
fieldValue1170.name = "size"
fieldValue1170.value = "40 3"

ProtoInstance1165.fieldValue.append(fieldValue1170)
fieldValue1171 = x3d.fieldValue()
fieldValue1171.name = "fontSize"
fieldValue1171.value = "2.4"

ProtoInstance1165.fieldValue.append(fieldValue1171)
fieldValue1172 = x3d.fieldValue()
fieldValue1172.name = "spacing"
fieldValue1172.value = "1.2"

ProtoInstance1165.fieldValue.append(fieldValue1172)

Layer1091.children.append(ProtoInstance1165)
ROUTE1173 = x3d.ROUTE()
ROUTE1173.fromNode = "JinBlink_Clock"
ROUTE1173.fromField = "fraction_changed"
ROUTE1173.toNode = "AnimationAdapter_JinBlink"
ROUTE1173.toField = "set_fraction"

Layer1091.children.append(ROUTE1173)
ROUTE1174 = x3d.ROUTE()
ROUTE1174.fromNode = "AUJinBlink"
ROUTE1174.fromField = "startTime"
ROUTE1174.toNode = "JinBlink_Clock"
ROUTE1174.toField = "startTime"

Layer1091.children.append(ROUTE1174)
ROUTE1175 = x3d.ROUTE()
ROUTE1175.fromNode = "AUJinBlink"
ROUTE1175.fromField = "stopTime"
ROUTE1175.toNode = "JinBlink_Clock"
ROUTE1175.toField = "stopTime"

Layer1091.children.append(ROUTE1175)
ROUTE1176 = x3d.ROUTE()
ROUTE1176.fromNode = "AUJinBlink"
ROUTE1176.fromField = "enabled"
ROUTE1176.toNode = "JinBlink_Clock"
ROUTE1176.toField = "enabled"

Layer1091.children.append(ROUTE1176)
ProtoInstance1177 = x3d.ProtoInstance(DEF="AUJinBrowLowerer")
ProtoInstance1177.name = "MenuItem"
fieldValue1178 = x3d.fieldValue()
fieldValue1178.name = "translation"
fieldValue1178.value = "65 60.4 0"

ProtoInstance1177.fieldValue.append(fieldValue1178)
fieldValue1179 = x3d.fieldValue()
fieldValue1179.name = "textTranslation"
fieldValue1179.value = "0 0 0"

ProtoInstance1177.fieldValue.append(fieldValue1179)
fieldValue1180 = x3d.fieldValue()
fieldValue1180.name = "description"
fieldValue1180.value = "Jin Brow Lowerer"

ProtoInstance1177.fieldValue.append(fieldValue1180)
fieldValue1181 = x3d.fieldValue()
fieldValue1181.name = "menuItemString"
fieldValue1181.value = "\"JinBrowLowerer\""

ProtoInstance1177.fieldValue.append(fieldValue1181)
fieldValue1182 = x3d.fieldValue()
fieldValue1182.name = "size"
fieldValue1182.value = "40 3"

ProtoInstance1177.fieldValue.append(fieldValue1182)
fieldValue1183 = x3d.fieldValue()
fieldValue1183.name = "fontSize"
fieldValue1183.value = "2.4"

ProtoInstance1177.fieldValue.append(fieldValue1183)
fieldValue1184 = x3d.fieldValue()
fieldValue1184.name = "spacing"
fieldValue1184.value = "1.2"

ProtoInstance1177.fieldValue.append(fieldValue1184)

Layer1091.children.append(ProtoInstance1177)
ROUTE1185 = x3d.ROUTE()
ROUTE1185.fromNode = "JinBrowLowerer_Clock"
ROUTE1185.fromField = "fraction_changed"
ROUTE1185.toNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1185.toField = "set_fraction"

Layer1091.children.append(ROUTE1185)
ROUTE1186 = x3d.ROUTE()
ROUTE1186.fromNode = "AUJinBrowLowerer"
ROUTE1186.fromField = "startTime"
ROUTE1186.toNode = "JinBrowLowerer_Clock"
ROUTE1186.toField = "startTime"

Layer1091.children.append(ROUTE1186)
ROUTE1187 = x3d.ROUTE()
ROUTE1187.fromNode = "AUJinBrowLowerer"
ROUTE1187.fromField = "stopTime"
ROUTE1187.toNode = "JinBrowLowerer_Clock"
ROUTE1187.toField = "stopTime"

Layer1091.children.append(ROUTE1187)
ROUTE1188 = x3d.ROUTE()
ROUTE1188.fromNode = "AUJinBrowLowerer"
ROUTE1188.fromField = "enabled"
ROUTE1188.toNode = "JinBrowLowerer_Clock"
ROUTE1188.toField = "enabled"

Layer1091.children.append(ROUTE1188)
ProtoInstance1189 = x3d.ProtoInstance(DEF="AUJinCheekPuffer")
ProtoInstance1189.name = "MenuItem"
fieldValue1190 = x3d.fieldValue()
fieldValue1190.name = "translation"
fieldValue1190.value = "65 57.39999999999999 0"

ProtoInstance1189.fieldValue.append(fieldValue1190)
fieldValue1191 = x3d.fieldValue()
fieldValue1191.name = "textTranslation"
fieldValue1191.value = "0 0 0"

ProtoInstance1189.fieldValue.append(fieldValue1191)
fieldValue1192 = x3d.fieldValue()
fieldValue1192.name = "description"
fieldValue1192.value = "Jin Cheek Puffer"

ProtoInstance1189.fieldValue.append(fieldValue1192)
fieldValue1193 = x3d.fieldValue()
fieldValue1193.name = "menuItemString"
fieldValue1193.value = "\"JinCheekPuffer\""

ProtoInstance1189.fieldValue.append(fieldValue1193)
fieldValue1194 = x3d.fieldValue()
fieldValue1194.name = "size"
fieldValue1194.value = "40 3"

ProtoInstance1189.fieldValue.append(fieldValue1194)
fieldValue1195 = x3d.fieldValue()
fieldValue1195.name = "fontSize"
fieldValue1195.value = "2.4"

ProtoInstance1189.fieldValue.append(fieldValue1195)
fieldValue1196 = x3d.fieldValue()
fieldValue1196.name = "spacing"
fieldValue1196.value = "1.2"

ProtoInstance1189.fieldValue.append(fieldValue1196)

Layer1091.children.append(ProtoInstance1189)
ROUTE1197 = x3d.ROUTE()
ROUTE1197.fromNode = "JinCheekPuffer_Clock"
ROUTE1197.fromField = "fraction_changed"
ROUTE1197.toNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1197.toField = "set_fraction"

Layer1091.children.append(ROUTE1197)
ROUTE1198 = x3d.ROUTE()
ROUTE1198.fromNode = "AUJinCheekPuffer"
ROUTE1198.fromField = "startTime"
ROUTE1198.toNode = "JinCheekPuffer_Clock"
ROUTE1198.toField = "startTime"

Layer1091.children.append(ROUTE1198)
ROUTE1199 = x3d.ROUTE()
ROUTE1199.fromNode = "AUJinCheekPuffer"
ROUTE1199.fromField = "stopTime"
ROUTE1199.toNode = "JinCheekPuffer_Clock"
ROUTE1199.toField = "stopTime"

Layer1091.children.append(ROUTE1199)
ROUTE1200 = x3d.ROUTE()
ROUTE1200.fromNode = "AUJinCheekPuffer"
ROUTE1200.fromField = "enabled"
ROUTE1200.toNode = "JinCheekPuffer_Clock"
ROUTE1200.toField = "enabled"

Layer1091.children.append(ROUTE1200)
ProtoInstance1201 = x3d.ProtoInstance(DEF="AUJinCheekRaiser")
ProtoInstance1201.name = "MenuItem"
fieldValue1202 = x3d.fieldValue()
fieldValue1202.name = "translation"
fieldValue1202.value = "65 54.39999999999999 0"

ProtoInstance1201.fieldValue.append(fieldValue1202)
fieldValue1203 = x3d.fieldValue()
fieldValue1203.name = "textTranslation"
fieldValue1203.value = "0 0 0"

ProtoInstance1201.fieldValue.append(fieldValue1203)
fieldValue1204 = x3d.fieldValue()
fieldValue1204.name = "description"
fieldValue1204.value = "Jin Cheek Raiser"

ProtoInstance1201.fieldValue.append(fieldValue1204)
fieldValue1205 = x3d.fieldValue()
fieldValue1205.name = "menuItemString"
fieldValue1205.value = "\"JinCheekRaiser\""

ProtoInstance1201.fieldValue.append(fieldValue1205)
fieldValue1206 = x3d.fieldValue()
fieldValue1206.name = "size"
fieldValue1206.value = "40 3"

ProtoInstance1201.fieldValue.append(fieldValue1206)
fieldValue1207 = x3d.fieldValue()
fieldValue1207.name = "fontSize"
fieldValue1207.value = "2.4"

ProtoInstance1201.fieldValue.append(fieldValue1207)
fieldValue1208 = x3d.fieldValue()
fieldValue1208.name = "spacing"
fieldValue1208.value = "1.2"

ProtoInstance1201.fieldValue.append(fieldValue1208)

Layer1091.children.append(ProtoInstance1201)
ROUTE1209 = x3d.ROUTE()
ROUTE1209.fromNode = "JinCheekRaiser_Clock"
ROUTE1209.fromField = "fraction_changed"
ROUTE1209.toNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1209.toField = "set_fraction"

Layer1091.children.append(ROUTE1209)
ROUTE1210 = x3d.ROUTE()
ROUTE1210.fromNode = "AUJinCheekRaiser"
ROUTE1210.fromField = "startTime"
ROUTE1210.toNode = "JinCheekRaiser_Clock"
ROUTE1210.toField = "startTime"

Layer1091.children.append(ROUTE1210)
ROUTE1211 = x3d.ROUTE()
ROUTE1211.fromNode = "AUJinCheekRaiser"
ROUTE1211.fromField = "stopTime"
ROUTE1211.toNode = "JinCheekRaiser_Clock"
ROUTE1211.toField = "stopTime"

Layer1091.children.append(ROUTE1211)
ROUTE1212 = x3d.ROUTE()
ROUTE1212.fromNode = "AUJinCheekRaiser"
ROUTE1212.fromField = "enabled"
ROUTE1212.toNode = "JinCheekRaiser_Clock"
ROUTE1212.toField = "enabled"

Layer1091.children.append(ROUTE1212)
ProtoInstance1213 = x3d.ProtoInstance(DEF="AUJinChinRaiser")
ProtoInstance1213.name = "MenuItem"
fieldValue1214 = x3d.fieldValue()
fieldValue1214.name = "translation"
fieldValue1214.value = "65 51.39999999999999 0"

ProtoInstance1213.fieldValue.append(fieldValue1214)
fieldValue1215 = x3d.fieldValue()
fieldValue1215.name = "textTranslation"
fieldValue1215.value = "0 0 0"

ProtoInstance1213.fieldValue.append(fieldValue1215)
fieldValue1216 = x3d.fieldValue()
fieldValue1216.name = "description"
fieldValue1216.value = "Jin Chin Raiser"

ProtoInstance1213.fieldValue.append(fieldValue1216)
fieldValue1217 = x3d.fieldValue()
fieldValue1217.name = "menuItemString"
fieldValue1217.value = "\"JinChinRaiser\""

ProtoInstance1213.fieldValue.append(fieldValue1217)
fieldValue1218 = x3d.fieldValue()
fieldValue1218.name = "size"
fieldValue1218.value = "40 3"

ProtoInstance1213.fieldValue.append(fieldValue1218)
fieldValue1219 = x3d.fieldValue()
fieldValue1219.name = "fontSize"
fieldValue1219.value = "2.4"

ProtoInstance1213.fieldValue.append(fieldValue1219)
fieldValue1220 = x3d.fieldValue()
fieldValue1220.name = "spacing"
fieldValue1220.value = "1.2"

ProtoInstance1213.fieldValue.append(fieldValue1220)

Layer1091.children.append(ProtoInstance1213)
ROUTE1221 = x3d.ROUTE()
ROUTE1221.fromNode = "JinChinRaiser_Clock"
ROUTE1221.fromField = "fraction_changed"
ROUTE1221.toNode = "AnimationAdapter_JinChinRaiser"
ROUTE1221.toField = "set_fraction"

Layer1091.children.append(ROUTE1221)
ROUTE1222 = x3d.ROUTE()
ROUTE1222.fromNode = "AUJinChinRaiser"
ROUTE1222.fromField = "startTime"
ROUTE1222.toNode = "JinChinRaiser_Clock"
ROUTE1222.toField = "startTime"

Layer1091.children.append(ROUTE1222)
ROUTE1223 = x3d.ROUTE()
ROUTE1223.fromNode = "AUJinChinRaiser"
ROUTE1223.fromField = "stopTime"
ROUTE1223.toNode = "JinChinRaiser_Clock"
ROUTE1223.toField = "stopTime"

Layer1091.children.append(ROUTE1223)
ROUTE1224 = x3d.ROUTE()
ROUTE1224.fromNode = "AUJinChinRaiser"
ROUTE1224.fromField = "enabled"
ROUTE1224.toNode = "JinChinRaiser_Clock"
ROUTE1224.toField = "enabled"

Layer1091.children.append(ROUTE1224)
ProtoInstance1225 = x3d.ProtoInstance(DEF="AUJinDimpler")
ProtoInstance1225.name = "MenuItem"
fieldValue1226 = x3d.fieldValue()
fieldValue1226.name = "translation"
fieldValue1226.value = "65 48.39999999999999 0"

ProtoInstance1225.fieldValue.append(fieldValue1226)
fieldValue1227 = x3d.fieldValue()
fieldValue1227.name = "textTranslation"
fieldValue1227.value = "0 0 0"

ProtoInstance1225.fieldValue.append(fieldValue1227)
fieldValue1228 = x3d.fieldValue()
fieldValue1228.name = "description"
fieldValue1228.value = "Jin Dimpler"

ProtoInstance1225.fieldValue.append(fieldValue1228)
fieldValue1229 = x3d.fieldValue()
fieldValue1229.name = "menuItemString"
fieldValue1229.value = "\"JinDimpler\""

ProtoInstance1225.fieldValue.append(fieldValue1229)
fieldValue1230 = x3d.fieldValue()
fieldValue1230.name = "size"
fieldValue1230.value = "40 3"

ProtoInstance1225.fieldValue.append(fieldValue1230)
fieldValue1231 = x3d.fieldValue()
fieldValue1231.name = "fontSize"
fieldValue1231.value = "2.4"

ProtoInstance1225.fieldValue.append(fieldValue1231)
fieldValue1232 = x3d.fieldValue()
fieldValue1232.name = "spacing"
fieldValue1232.value = "1.2"

ProtoInstance1225.fieldValue.append(fieldValue1232)

Layer1091.children.append(ProtoInstance1225)
ROUTE1233 = x3d.ROUTE()
ROUTE1233.fromNode = "JinDimpler_Clock"
ROUTE1233.fromField = "fraction_changed"
ROUTE1233.toNode = "AnimationAdapter_JinDimpler"
ROUTE1233.toField = "set_fraction"

Layer1091.children.append(ROUTE1233)
ROUTE1234 = x3d.ROUTE()
ROUTE1234.fromNode = "AUJinDimpler"
ROUTE1234.fromField = "startTime"
ROUTE1234.toNode = "JinDimpler_Clock"
ROUTE1234.toField = "startTime"

Layer1091.children.append(ROUTE1234)
ROUTE1235 = x3d.ROUTE()
ROUTE1235.fromNode = "AUJinDimpler"
ROUTE1235.fromField = "stopTime"
ROUTE1235.toNode = "JinDimpler_Clock"
ROUTE1235.toField = "stopTime"

Layer1091.children.append(ROUTE1235)
ROUTE1236 = x3d.ROUTE()
ROUTE1236.fromNode = "AUJinDimpler"
ROUTE1236.fromField = "enabled"
ROUTE1236.toNode = "JinDimpler_Clock"
ROUTE1236.toField = "enabled"

Layer1091.children.append(ROUTE1236)
ProtoInstance1237 = x3d.ProtoInstance(DEF="AUJinEyesClosed")
ProtoInstance1237.name = "MenuItem"
fieldValue1238 = x3d.fieldValue()
fieldValue1238.name = "translation"
fieldValue1238.value = "65 45.39999999999999 0"

ProtoInstance1237.fieldValue.append(fieldValue1238)
fieldValue1239 = x3d.fieldValue()
fieldValue1239.name = "textTranslation"
fieldValue1239.value = "0 0 0"

ProtoInstance1237.fieldValue.append(fieldValue1239)
fieldValue1240 = x3d.fieldValue()
fieldValue1240.name = "description"
fieldValue1240.value = "Jin Eyes Closed"

ProtoInstance1237.fieldValue.append(fieldValue1240)
fieldValue1241 = x3d.fieldValue()
fieldValue1241.name = "menuItemString"
fieldValue1241.value = "\"JinEyesClosed\""

ProtoInstance1237.fieldValue.append(fieldValue1241)
fieldValue1242 = x3d.fieldValue()
fieldValue1242.name = "size"
fieldValue1242.value = "40 3"

ProtoInstance1237.fieldValue.append(fieldValue1242)
fieldValue1243 = x3d.fieldValue()
fieldValue1243.name = "fontSize"
fieldValue1243.value = "2.4"

ProtoInstance1237.fieldValue.append(fieldValue1243)
fieldValue1244 = x3d.fieldValue()
fieldValue1244.name = "spacing"
fieldValue1244.value = "1.2"

ProtoInstance1237.fieldValue.append(fieldValue1244)

Layer1091.children.append(ProtoInstance1237)
ROUTE1245 = x3d.ROUTE()
ROUTE1245.fromNode = "JinEyesClosed_Clock"
ROUTE1245.fromField = "fraction_changed"
ROUTE1245.toNode = "AnimationAdapter_JinEyesClosed"
ROUTE1245.toField = "set_fraction"

Layer1091.children.append(ROUTE1245)
ROUTE1246 = x3d.ROUTE()
ROUTE1246.fromNode = "AUJinEyesClosed"
ROUTE1246.fromField = "startTime"
ROUTE1246.toNode = "JinEyesClosed_Clock"
ROUTE1246.toField = "startTime"

Layer1091.children.append(ROUTE1246)
ROUTE1247 = x3d.ROUTE()
ROUTE1247.fromNode = "AUJinEyesClosed"
ROUTE1247.fromField = "stopTime"
ROUTE1247.toNode = "JinEyesClosed_Clock"
ROUTE1247.toField = "stopTime"

Layer1091.children.append(ROUTE1247)
ROUTE1248 = x3d.ROUTE()
ROUTE1248.fromNode = "AUJinEyesClosed"
ROUTE1248.fromField = "enabled"
ROUTE1248.toNode = "JinEyesClosed_Clock"
ROUTE1248.toField = "enabled"

Layer1091.children.append(ROUTE1248)
ProtoInstance1249 = x3d.ProtoInstance(DEF="AUJinInnerBrowRaiser")
ProtoInstance1249.name = "MenuItem"
fieldValue1250 = x3d.fieldValue()
fieldValue1250.name = "translation"
fieldValue1250.value = "65 42.39999999999999 0"

ProtoInstance1249.fieldValue.append(fieldValue1250)
fieldValue1251 = x3d.fieldValue()
fieldValue1251.name = "textTranslation"
fieldValue1251.value = "0 0 0"

ProtoInstance1249.fieldValue.append(fieldValue1251)
fieldValue1252 = x3d.fieldValue()
fieldValue1252.name = "description"
fieldValue1252.value = "Jin Inner Brow Raiser"

ProtoInstance1249.fieldValue.append(fieldValue1252)
fieldValue1253 = x3d.fieldValue()
fieldValue1253.name = "menuItemString"
fieldValue1253.value = "\"JinInnerBrowRaiser\""

ProtoInstance1249.fieldValue.append(fieldValue1253)
fieldValue1254 = x3d.fieldValue()
fieldValue1254.name = "size"
fieldValue1254.value = "40 3"

ProtoInstance1249.fieldValue.append(fieldValue1254)
fieldValue1255 = x3d.fieldValue()
fieldValue1255.name = "fontSize"
fieldValue1255.value = "2.4"

ProtoInstance1249.fieldValue.append(fieldValue1255)
fieldValue1256 = x3d.fieldValue()
fieldValue1256.name = "spacing"
fieldValue1256.value = "1.2"

ProtoInstance1249.fieldValue.append(fieldValue1256)

Layer1091.children.append(ProtoInstance1249)
ROUTE1257 = x3d.ROUTE()
ROUTE1257.fromNode = "JinInnerBrowRaiser_Clock"
ROUTE1257.fromField = "fraction_changed"
ROUTE1257.toNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1257.toField = "set_fraction"

Layer1091.children.append(ROUTE1257)
ROUTE1258 = x3d.ROUTE()
ROUTE1258.fromNode = "AUJinInnerBrowRaiser"
ROUTE1258.fromField = "startTime"
ROUTE1258.toNode = "JinInnerBrowRaiser_Clock"
ROUTE1258.toField = "startTime"

Layer1091.children.append(ROUTE1258)
ROUTE1259 = x3d.ROUTE()
ROUTE1259.fromNode = "AUJinInnerBrowRaiser"
ROUTE1259.fromField = "stopTime"
ROUTE1259.toNode = "JinInnerBrowRaiser_Clock"
ROUTE1259.toField = "stopTime"

Layer1091.children.append(ROUTE1259)
ROUTE1260 = x3d.ROUTE()
ROUTE1260.fromNode = "AUJinInnerBrowRaiser"
ROUTE1260.fromField = "enabled"
ROUTE1260.toNode = "JinInnerBrowRaiser_Clock"
ROUTE1260.toField = "enabled"

Layer1091.children.append(ROUTE1260)
ProtoInstance1261 = x3d.ProtoInstance(DEF="AUJinJawDrop")
ProtoInstance1261.name = "MenuItem"
fieldValue1262 = x3d.fieldValue()
fieldValue1262.name = "translation"
fieldValue1262.value = "65 39.39999999999999 0"

ProtoInstance1261.fieldValue.append(fieldValue1262)
fieldValue1263 = x3d.fieldValue()
fieldValue1263.name = "textTranslation"
fieldValue1263.value = "0 0 0"

ProtoInstance1261.fieldValue.append(fieldValue1263)
fieldValue1264 = x3d.fieldValue()
fieldValue1264.name = "description"
fieldValue1264.value = "Jin Jaw Drop"

ProtoInstance1261.fieldValue.append(fieldValue1264)
fieldValue1265 = x3d.fieldValue()
fieldValue1265.name = "menuItemString"
fieldValue1265.value = "\"JinJawDrop\""

ProtoInstance1261.fieldValue.append(fieldValue1265)
fieldValue1266 = x3d.fieldValue()
fieldValue1266.name = "size"
fieldValue1266.value = "40 3"

ProtoInstance1261.fieldValue.append(fieldValue1266)
fieldValue1267 = x3d.fieldValue()
fieldValue1267.name = "fontSize"
fieldValue1267.value = "2.4"

ProtoInstance1261.fieldValue.append(fieldValue1267)
fieldValue1268 = x3d.fieldValue()
fieldValue1268.name = "spacing"
fieldValue1268.value = "1.2"

ProtoInstance1261.fieldValue.append(fieldValue1268)

Layer1091.children.append(ProtoInstance1261)
ROUTE1269 = x3d.ROUTE()
ROUTE1269.fromNode = "JinJawDrop_Clock"
ROUTE1269.fromField = "fraction_changed"
ROUTE1269.toNode = "AnimationAdapter_JinJawDrop"
ROUTE1269.toField = "set_fraction"

Layer1091.children.append(ROUTE1269)
ROUTE1270 = x3d.ROUTE()
ROUTE1270.fromNode = "AUJinJawDrop"
ROUTE1270.fromField = "startTime"
ROUTE1270.toNode = "JinJawDrop_Clock"
ROUTE1270.toField = "startTime"

Layer1091.children.append(ROUTE1270)
ROUTE1271 = x3d.ROUTE()
ROUTE1271.fromNode = "AUJinJawDrop"
ROUTE1271.fromField = "stopTime"
ROUTE1271.toNode = "JinJawDrop_Clock"
ROUTE1271.toField = "stopTime"

Layer1091.children.append(ROUTE1271)
ROUTE1272 = x3d.ROUTE()
ROUTE1272.fromNode = "AUJinJawDrop"
ROUTE1272.fromField = "enabled"
ROUTE1272.toNode = "JinJawDrop_Clock"
ROUTE1272.toField = "enabled"

Layer1091.children.append(ROUTE1272)
ProtoInstance1273 = x3d.ProtoInstance(DEF="AUJinLidDroop")
ProtoInstance1273.name = "MenuItem"
fieldValue1274 = x3d.fieldValue()
fieldValue1274.name = "translation"
fieldValue1274.value = "65 36.39999999999999 0"

ProtoInstance1273.fieldValue.append(fieldValue1274)
fieldValue1275 = x3d.fieldValue()
fieldValue1275.name = "textTranslation"
fieldValue1275.value = "0 0 0"

ProtoInstance1273.fieldValue.append(fieldValue1275)
fieldValue1276 = x3d.fieldValue()
fieldValue1276.name = "description"
fieldValue1276.value = "Jin Lid Droop"

ProtoInstance1273.fieldValue.append(fieldValue1276)
fieldValue1277 = x3d.fieldValue()
fieldValue1277.name = "menuItemString"
fieldValue1277.value = "\"JinLidDroop\""

ProtoInstance1273.fieldValue.append(fieldValue1277)
fieldValue1278 = x3d.fieldValue()
fieldValue1278.name = "size"
fieldValue1278.value = "40 3"

ProtoInstance1273.fieldValue.append(fieldValue1278)
fieldValue1279 = x3d.fieldValue()
fieldValue1279.name = "fontSize"
fieldValue1279.value = "2.4"

ProtoInstance1273.fieldValue.append(fieldValue1279)
fieldValue1280 = x3d.fieldValue()
fieldValue1280.name = "spacing"
fieldValue1280.value = "1.2"

ProtoInstance1273.fieldValue.append(fieldValue1280)

Layer1091.children.append(ProtoInstance1273)
ROUTE1281 = x3d.ROUTE()
ROUTE1281.fromNode = "JinLidDroop_Clock"
ROUTE1281.fromField = "fraction_changed"
ROUTE1281.toNode = "AnimationAdapter_JinLidDroop"
ROUTE1281.toField = "set_fraction"

Layer1091.children.append(ROUTE1281)
ROUTE1282 = x3d.ROUTE()
ROUTE1282.fromNode = "AUJinLidDroop"
ROUTE1282.fromField = "startTime"
ROUTE1282.toNode = "JinLidDroop_Clock"
ROUTE1282.toField = "startTime"

Layer1091.children.append(ROUTE1282)
ROUTE1283 = x3d.ROUTE()
ROUTE1283.fromNode = "AUJinLidDroop"
ROUTE1283.fromField = "stopTime"
ROUTE1283.toNode = "JinLidDroop_Clock"
ROUTE1283.toField = "stopTime"

Layer1091.children.append(ROUTE1283)
ROUTE1284 = x3d.ROUTE()
ROUTE1284.fromNode = "AUJinLidDroop"
ROUTE1284.fromField = "enabled"
ROUTE1284.toNode = "JinLidDroop_Clock"
ROUTE1284.toField = "enabled"

Layer1091.children.append(ROUTE1284)
ProtoInstance1285 = x3d.ProtoInstance(DEF="AUJinLidTightener")
ProtoInstance1285.name = "MenuItem"
fieldValue1286 = x3d.fieldValue()
fieldValue1286.name = "translation"
fieldValue1286.value = "65 33.39999999999999 0"

ProtoInstance1285.fieldValue.append(fieldValue1286)
fieldValue1287 = x3d.fieldValue()
fieldValue1287.name = "textTranslation"
fieldValue1287.value = "0 0 0"

ProtoInstance1285.fieldValue.append(fieldValue1287)
fieldValue1288 = x3d.fieldValue()
fieldValue1288.name = "description"
fieldValue1288.value = "Jin Lid Tightener"

ProtoInstance1285.fieldValue.append(fieldValue1288)
fieldValue1289 = x3d.fieldValue()
fieldValue1289.name = "menuItemString"
fieldValue1289.value = "\"JinLidTightener\""

ProtoInstance1285.fieldValue.append(fieldValue1289)
fieldValue1290 = x3d.fieldValue()
fieldValue1290.name = "size"
fieldValue1290.value = "40 3"

ProtoInstance1285.fieldValue.append(fieldValue1290)
fieldValue1291 = x3d.fieldValue()
fieldValue1291.name = "fontSize"
fieldValue1291.value = "2.4"

ProtoInstance1285.fieldValue.append(fieldValue1291)
fieldValue1292 = x3d.fieldValue()
fieldValue1292.name = "spacing"
fieldValue1292.value = "1.2"

ProtoInstance1285.fieldValue.append(fieldValue1292)

Layer1091.children.append(ProtoInstance1285)
ROUTE1293 = x3d.ROUTE()
ROUTE1293.fromNode = "JinLidTightener_Clock"
ROUTE1293.fromField = "fraction_changed"
ROUTE1293.toNode = "AnimationAdapter_JinLidTightener"
ROUTE1293.toField = "set_fraction"

Layer1091.children.append(ROUTE1293)
ROUTE1294 = x3d.ROUTE()
ROUTE1294.fromNode = "AUJinLidTightener"
ROUTE1294.fromField = "startTime"
ROUTE1294.toNode = "JinLidTightener_Clock"
ROUTE1294.toField = "startTime"

Layer1091.children.append(ROUTE1294)
ROUTE1295 = x3d.ROUTE()
ROUTE1295.fromNode = "AUJinLidTightener"
ROUTE1295.fromField = "stopTime"
ROUTE1295.toNode = "JinLidTightener_Clock"
ROUTE1295.toField = "stopTime"

Layer1091.children.append(ROUTE1295)
ROUTE1296 = x3d.ROUTE()
ROUTE1296.fromNode = "AUJinLidTightener"
ROUTE1296.fromField = "enabled"
ROUTE1296.toNode = "JinLidTightener_Clock"
ROUTE1296.toField = "enabled"

Layer1091.children.append(ROUTE1296)
ProtoInstance1297 = x3d.ProtoInstance(DEF="AUJinLipCornerDepressor")
ProtoInstance1297.name = "MenuItem"
fieldValue1298 = x3d.fieldValue()
fieldValue1298.name = "translation"
fieldValue1298.value = "65 30.399999999999995 0"

ProtoInstance1297.fieldValue.append(fieldValue1298)
fieldValue1299 = x3d.fieldValue()
fieldValue1299.name = "textTranslation"
fieldValue1299.value = "0 0 0"

ProtoInstance1297.fieldValue.append(fieldValue1299)
fieldValue1300 = x3d.fieldValue()
fieldValue1300.name = "description"
fieldValue1300.value = "Jin Lip Corner Depressor"

ProtoInstance1297.fieldValue.append(fieldValue1300)
fieldValue1301 = x3d.fieldValue()
fieldValue1301.name = "menuItemString"
fieldValue1301.value = "\"JinLipCornerDepressor\""

ProtoInstance1297.fieldValue.append(fieldValue1301)
fieldValue1302 = x3d.fieldValue()
fieldValue1302.name = "size"
fieldValue1302.value = "40 3"

ProtoInstance1297.fieldValue.append(fieldValue1302)
fieldValue1303 = x3d.fieldValue()
fieldValue1303.name = "fontSize"
fieldValue1303.value = "2.4"

ProtoInstance1297.fieldValue.append(fieldValue1303)
fieldValue1304 = x3d.fieldValue()
fieldValue1304.name = "spacing"
fieldValue1304.value = "1.2"

ProtoInstance1297.fieldValue.append(fieldValue1304)

Layer1091.children.append(ProtoInstance1297)
ROUTE1305 = x3d.ROUTE()
ROUTE1305.fromNode = "JinLipCornerDepressor_Clock"
ROUTE1305.fromField = "fraction_changed"
ROUTE1305.toNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1305.toField = "set_fraction"

Layer1091.children.append(ROUTE1305)
ROUTE1306 = x3d.ROUTE()
ROUTE1306.fromNode = "AUJinLipCornerDepressor"
ROUTE1306.fromField = "startTime"
ROUTE1306.toNode = "JinLipCornerDepressor_Clock"
ROUTE1306.toField = "startTime"

Layer1091.children.append(ROUTE1306)
ROUTE1307 = x3d.ROUTE()
ROUTE1307.fromNode = "AUJinLipCornerDepressor"
ROUTE1307.fromField = "stopTime"
ROUTE1307.toNode = "JinLipCornerDepressor_Clock"
ROUTE1307.toField = "stopTime"

Layer1091.children.append(ROUTE1307)
ROUTE1308 = x3d.ROUTE()
ROUTE1308.fromNode = "AUJinLipCornerDepressor"
ROUTE1308.fromField = "enabled"
ROUTE1308.toNode = "JinLipCornerDepressor_Clock"
ROUTE1308.toField = "enabled"

Layer1091.children.append(ROUTE1308)
ProtoInstance1309 = x3d.ProtoInstance(DEF="AUJinLipCornerPuller")
ProtoInstance1309.name = "MenuItem"
fieldValue1310 = x3d.fieldValue()
fieldValue1310.name = "translation"
fieldValue1310.value = "65 27.399999999999995 0"

ProtoInstance1309.fieldValue.append(fieldValue1310)
fieldValue1311 = x3d.fieldValue()
fieldValue1311.name = "textTranslation"
fieldValue1311.value = "0 0 0"

ProtoInstance1309.fieldValue.append(fieldValue1311)
fieldValue1312 = x3d.fieldValue()
fieldValue1312.name = "description"
fieldValue1312.value = "Jin Lip Corner Puller"

ProtoInstance1309.fieldValue.append(fieldValue1312)
fieldValue1313 = x3d.fieldValue()
fieldValue1313.name = "menuItemString"
fieldValue1313.value = "\"JinLipCornerPuller\""

ProtoInstance1309.fieldValue.append(fieldValue1313)
fieldValue1314 = x3d.fieldValue()
fieldValue1314.name = "size"
fieldValue1314.value = "40 3"

ProtoInstance1309.fieldValue.append(fieldValue1314)
fieldValue1315 = x3d.fieldValue()
fieldValue1315.name = "fontSize"
fieldValue1315.value = "2.4"

ProtoInstance1309.fieldValue.append(fieldValue1315)
fieldValue1316 = x3d.fieldValue()
fieldValue1316.name = "spacing"
fieldValue1316.value = "1.2"

ProtoInstance1309.fieldValue.append(fieldValue1316)

Layer1091.children.append(ProtoInstance1309)
ROUTE1317 = x3d.ROUTE()
ROUTE1317.fromNode = "JinLipCornerPuller_Clock"
ROUTE1317.fromField = "fraction_changed"
ROUTE1317.toNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1317.toField = "set_fraction"

Layer1091.children.append(ROUTE1317)
ROUTE1318 = x3d.ROUTE()
ROUTE1318.fromNode = "AUJinLipCornerPuller"
ROUTE1318.fromField = "startTime"
ROUTE1318.toNode = "JinLipCornerPuller_Clock"
ROUTE1318.toField = "startTime"

Layer1091.children.append(ROUTE1318)
ROUTE1319 = x3d.ROUTE()
ROUTE1319.fromNode = "AUJinLipCornerPuller"
ROUTE1319.fromField = "stopTime"
ROUTE1319.toNode = "JinLipCornerPuller_Clock"
ROUTE1319.toField = "stopTime"

Layer1091.children.append(ROUTE1319)
ROUTE1320 = x3d.ROUTE()
ROUTE1320.fromNode = "AUJinLipCornerPuller"
ROUTE1320.fromField = "enabled"
ROUTE1320.toNode = "JinLipCornerPuller_Clock"
ROUTE1320.toField = "enabled"

Layer1091.children.append(ROUTE1320)
ProtoInstance1321 = x3d.ProtoInstance(DEF="AUJinLipFunneler")
ProtoInstance1321.name = "MenuItem"
fieldValue1322 = x3d.fieldValue()
fieldValue1322.name = "translation"
fieldValue1322.value = "65 24.399999999999995 0"

ProtoInstance1321.fieldValue.append(fieldValue1322)
fieldValue1323 = x3d.fieldValue()
fieldValue1323.name = "textTranslation"
fieldValue1323.value = "0 0 0"

ProtoInstance1321.fieldValue.append(fieldValue1323)
fieldValue1324 = x3d.fieldValue()
fieldValue1324.name = "description"
fieldValue1324.value = "Jin Lip Funneler"

ProtoInstance1321.fieldValue.append(fieldValue1324)
fieldValue1325 = x3d.fieldValue()
fieldValue1325.name = "menuItemString"
fieldValue1325.value = "\"JinLipFunneler\""

ProtoInstance1321.fieldValue.append(fieldValue1325)
fieldValue1326 = x3d.fieldValue()
fieldValue1326.name = "size"
fieldValue1326.value = "40 3"

ProtoInstance1321.fieldValue.append(fieldValue1326)
fieldValue1327 = x3d.fieldValue()
fieldValue1327.name = "fontSize"
fieldValue1327.value = "2.4"

ProtoInstance1321.fieldValue.append(fieldValue1327)
fieldValue1328 = x3d.fieldValue()
fieldValue1328.name = "spacing"
fieldValue1328.value = "1.2"

ProtoInstance1321.fieldValue.append(fieldValue1328)

Layer1091.children.append(ProtoInstance1321)
ROUTE1329 = x3d.ROUTE()
ROUTE1329.fromNode = "JinLipFunneler_Clock"
ROUTE1329.fromField = "fraction_changed"
ROUTE1329.toNode = "AnimationAdapter_JinLipFunneler"
ROUTE1329.toField = "set_fraction"

Layer1091.children.append(ROUTE1329)
ROUTE1330 = x3d.ROUTE()
ROUTE1330.fromNode = "AUJinLipFunneler"
ROUTE1330.fromField = "startTime"
ROUTE1330.toNode = "JinLipFunneler_Clock"
ROUTE1330.toField = "startTime"

Layer1091.children.append(ROUTE1330)
ROUTE1331 = x3d.ROUTE()
ROUTE1331.fromNode = "AUJinLipFunneler"
ROUTE1331.fromField = "stopTime"
ROUTE1331.toNode = "JinLipFunneler_Clock"
ROUTE1331.toField = "stopTime"

Layer1091.children.append(ROUTE1331)
ROUTE1332 = x3d.ROUTE()
ROUTE1332.fromNode = "AUJinLipFunneler"
ROUTE1332.fromField = "enabled"
ROUTE1332.toNode = "JinLipFunneler_Clock"
ROUTE1332.toField = "enabled"

Layer1091.children.append(ROUTE1332)
ProtoInstance1333 = x3d.ProtoInstance(DEF="AUJinLipPressor")
ProtoInstance1333.name = "MenuItem"
fieldValue1334 = x3d.fieldValue()
fieldValue1334.name = "translation"
fieldValue1334.value = "65 21.399999999999995 0"

ProtoInstance1333.fieldValue.append(fieldValue1334)
fieldValue1335 = x3d.fieldValue()
fieldValue1335.name = "textTranslation"
fieldValue1335.value = "0 0 0"

ProtoInstance1333.fieldValue.append(fieldValue1335)
fieldValue1336 = x3d.fieldValue()
fieldValue1336.name = "description"
fieldValue1336.value = "Jin Lip Pressor"

ProtoInstance1333.fieldValue.append(fieldValue1336)
fieldValue1337 = x3d.fieldValue()
fieldValue1337.name = "menuItemString"
fieldValue1337.value = "\"JinLipPressor\""

ProtoInstance1333.fieldValue.append(fieldValue1337)
fieldValue1338 = x3d.fieldValue()
fieldValue1338.name = "size"
fieldValue1338.value = "40 3"

ProtoInstance1333.fieldValue.append(fieldValue1338)
fieldValue1339 = x3d.fieldValue()
fieldValue1339.name = "fontSize"
fieldValue1339.value = "2.4"

ProtoInstance1333.fieldValue.append(fieldValue1339)
fieldValue1340 = x3d.fieldValue()
fieldValue1340.name = "spacing"
fieldValue1340.value = "1.2"

ProtoInstance1333.fieldValue.append(fieldValue1340)

Layer1091.children.append(ProtoInstance1333)
ROUTE1341 = x3d.ROUTE()
ROUTE1341.fromNode = "JinLipPressor_Clock"
ROUTE1341.fromField = "fraction_changed"
ROUTE1341.toNode = "AnimationAdapter_JinLipPressor"
ROUTE1341.toField = "set_fraction"

Layer1091.children.append(ROUTE1341)
ROUTE1342 = x3d.ROUTE()
ROUTE1342.fromNode = "AUJinLipPressor"
ROUTE1342.fromField = "startTime"
ROUTE1342.toNode = "JinLipPressor_Clock"
ROUTE1342.toField = "startTime"

Layer1091.children.append(ROUTE1342)
ROUTE1343 = x3d.ROUTE()
ROUTE1343.fromNode = "AUJinLipPressor"
ROUTE1343.fromField = "stopTime"
ROUTE1343.toNode = "JinLipPressor_Clock"
ROUTE1343.toField = "stopTime"

Layer1091.children.append(ROUTE1343)
ROUTE1344 = x3d.ROUTE()
ROUTE1344.fromNode = "AUJinLipPressor"
ROUTE1344.fromField = "enabled"
ROUTE1344.toNode = "JinLipPressor_Clock"
ROUTE1344.toField = "enabled"

Layer1091.children.append(ROUTE1344)
ProtoInstance1345 = x3d.ProtoInstance(DEF="AUJinLipPuckerer")
ProtoInstance1345.name = "MenuItem"
fieldValue1346 = x3d.fieldValue()
fieldValue1346.name = "translation"
fieldValue1346.value = "65 18.4 0"

ProtoInstance1345.fieldValue.append(fieldValue1346)
fieldValue1347 = x3d.fieldValue()
fieldValue1347.name = "textTranslation"
fieldValue1347.value = "0 0 0"

ProtoInstance1345.fieldValue.append(fieldValue1347)
fieldValue1348 = x3d.fieldValue()
fieldValue1348.name = "description"
fieldValue1348.value = "Jin Lip Puckerer"

ProtoInstance1345.fieldValue.append(fieldValue1348)
fieldValue1349 = x3d.fieldValue()
fieldValue1349.name = "menuItemString"
fieldValue1349.value = "\"JinLipPuckerer\""

ProtoInstance1345.fieldValue.append(fieldValue1349)
fieldValue1350 = x3d.fieldValue()
fieldValue1350.name = "size"
fieldValue1350.value = "40 3"

ProtoInstance1345.fieldValue.append(fieldValue1350)
fieldValue1351 = x3d.fieldValue()
fieldValue1351.name = "fontSize"
fieldValue1351.value = "2.4"

ProtoInstance1345.fieldValue.append(fieldValue1351)
fieldValue1352 = x3d.fieldValue()
fieldValue1352.name = "spacing"
fieldValue1352.value = "1.2"

ProtoInstance1345.fieldValue.append(fieldValue1352)

Layer1091.children.append(ProtoInstance1345)
ROUTE1353 = x3d.ROUTE()
ROUTE1353.fromNode = "JinLipPuckerer_Clock"
ROUTE1353.fromField = "fraction_changed"
ROUTE1353.toNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1353.toField = "set_fraction"

Layer1091.children.append(ROUTE1353)
ROUTE1354 = x3d.ROUTE()
ROUTE1354.fromNode = "AUJinLipPuckerer"
ROUTE1354.fromField = "startTime"
ROUTE1354.toNode = "JinLipPuckerer_Clock"
ROUTE1354.toField = "startTime"

Layer1091.children.append(ROUTE1354)
ROUTE1355 = x3d.ROUTE()
ROUTE1355.fromNode = "AUJinLipPuckerer"
ROUTE1355.fromField = "stopTime"
ROUTE1355.toNode = "JinLipPuckerer_Clock"
ROUTE1355.toField = "stopTime"

Layer1091.children.append(ROUTE1355)
ROUTE1356 = x3d.ROUTE()
ROUTE1356.fromNode = "AUJinLipPuckerer"
ROUTE1356.fromField = "enabled"
ROUTE1356.toNode = "JinLipPuckerer_Clock"
ROUTE1356.toField = "enabled"

Layer1091.children.append(ROUTE1356)
ProtoInstance1357 = x3d.ProtoInstance(DEF="AUJinLipsPart")
ProtoInstance1357.name = "MenuItem"
fieldValue1358 = x3d.fieldValue()
fieldValue1358.name = "translation"
fieldValue1358.value = "65 15.399999999999997 0"

ProtoInstance1357.fieldValue.append(fieldValue1358)
fieldValue1359 = x3d.fieldValue()
fieldValue1359.name = "textTranslation"
fieldValue1359.value = "0 0 0"

ProtoInstance1357.fieldValue.append(fieldValue1359)
fieldValue1360 = x3d.fieldValue()
fieldValue1360.name = "description"
fieldValue1360.value = "Jin Lips Part"

ProtoInstance1357.fieldValue.append(fieldValue1360)
fieldValue1361 = x3d.fieldValue()
fieldValue1361.name = "menuItemString"
fieldValue1361.value = "\"JinLipsPart\""

ProtoInstance1357.fieldValue.append(fieldValue1361)
fieldValue1362 = x3d.fieldValue()
fieldValue1362.name = "size"
fieldValue1362.value = "40 3"

ProtoInstance1357.fieldValue.append(fieldValue1362)
fieldValue1363 = x3d.fieldValue()
fieldValue1363.name = "fontSize"
fieldValue1363.value = "2.4"

ProtoInstance1357.fieldValue.append(fieldValue1363)
fieldValue1364 = x3d.fieldValue()
fieldValue1364.name = "spacing"
fieldValue1364.value = "1.2"

ProtoInstance1357.fieldValue.append(fieldValue1364)

Layer1091.children.append(ProtoInstance1357)
ROUTE1365 = x3d.ROUTE()
ROUTE1365.fromNode = "JinLipsPart_Clock"
ROUTE1365.fromField = "fraction_changed"
ROUTE1365.toNode = "AnimationAdapter_JinLipsPart"
ROUTE1365.toField = "set_fraction"

Layer1091.children.append(ROUTE1365)
ROUTE1366 = x3d.ROUTE()
ROUTE1366.fromNode = "AUJinLipsPart"
ROUTE1366.fromField = "startTime"
ROUTE1366.toNode = "JinLipsPart_Clock"
ROUTE1366.toField = "startTime"

Layer1091.children.append(ROUTE1366)
ROUTE1367 = x3d.ROUTE()
ROUTE1367.fromNode = "AUJinLipsPart"
ROUTE1367.fromField = "stopTime"
ROUTE1367.toNode = "JinLipsPart_Clock"
ROUTE1367.toField = "stopTime"

Layer1091.children.append(ROUTE1367)
ROUTE1368 = x3d.ROUTE()
ROUTE1368.fromNode = "AUJinLipsPart"
ROUTE1368.fromField = "enabled"
ROUTE1368.toNode = "JinLipsPart_Clock"
ROUTE1368.toField = "enabled"

Layer1091.children.append(ROUTE1368)
ProtoInstance1369 = x3d.ProtoInstance(DEF="AUJinLipStretcher")
ProtoInstance1369.name = "MenuItem"
fieldValue1370 = x3d.fieldValue()
fieldValue1370.name = "translation"
fieldValue1370.value = "65 12.399999999999999 0"

ProtoInstance1369.fieldValue.append(fieldValue1370)
fieldValue1371 = x3d.fieldValue()
fieldValue1371.name = "textTranslation"
fieldValue1371.value = "0 0 0"

ProtoInstance1369.fieldValue.append(fieldValue1371)
fieldValue1372 = x3d.fieldValue()
fieldValue1372.name = "description"
fieldValue1372.value = "Jin Lip Stretcher"

ProtoInstance1369.fieldValue.append(fieldValue1372)
fieldValue1373 = x3d.fieldValue()
fieldValue1373.name = "menuItemString"
fieldValue1373.value = "\"JinLipStretcher\""

ProtoInstance1369.fieldValue.append(fieldValue1373)
fieldValue1374 = x3d.fieldValue()
fieldValue1374.name = "size"
fieldValue1374.value = "40 3"

ProtoInstance1369.fieldValue.append(fieldValue1374)
fieldValue1375 = x3d.fieldValue()
fieldValue1375.name = "fontSize"
fieldValue1375.value = "2.4"

ProtoInstance1369.fieldValue.append(fieldValue1375)
fieldValue1376 = x3d.fieldValue()
fieldValue1376.name = "spacing"
fieldValue1376.value = "1.2"

ProtoInstance1369.fieldValue.append(fieldValue1376)

Layer1091.children.append(ProtoInstance1369)
ROUTE1377 = x3d.ROUTE()
ROUTE1377.fromNode = "JinLipStretcher_Clock"
ROUTE1377.fromField = "fraction_changed"
ROUTE1377.toNode = "AnimationAdapter_JinLipStretcher"
ROUTE1377.toField = "set_fraction"

Layer1091.children.append(ROUTE1377)
ROUTE1378 = x3d.ROUTE()
ROUTE1378.fromNode = "AUJinLipStretcher"
ROUTE1378.fromField = "startTime"
ROUTE1378.toNode = "JinLipStretcher_Clock"
ROUTE1378.toField = "startTime"

Layer1091.children.append(ROUTE1378)
ROUTE1379 = x3d.ROUTE()
ROUTE1379.fromNode = "AUJinLipStretcher"
ROUTE1379.fromField = "stopTime"
ROUTE1379.toNode = "JinLipStretcher_Clock"
ROUTE1379.toField = "stopTime"

Layer1091.children.append(ROUTE1379)
ROUTE1380 = x3d.ROUTE()
ROUTE1380.fromNode = "AUJinLipStretcher"
ROUTE1380.fromField = "enabled"
ROUTE1380.toNode = "JinLipStretcher_Clock"
ROUTE1380.toField = "enabled"

Layer1091.children.append(ROUTE1380)
ProtoInstance1381 = x3d.ProtoInstance(DEF="AUJinLipSuck")
ProtoInstance1381.name = "MenuItem"
fieldValue1382 = x3d.fieldValue()
fieldValue1382.name = "translation"
fieldValue1382.value = "65 9.399999999999999 0"

ProtoInstance1381.fieldValue.append(fieldValue1382)
fieldValue1383 = x3d.fieldValue()
fieldValue1383.name = "textTranslation"
fieldValue1383.value = "0 0 0"

ProtoInstance1381.fieldValue.append(fieldValue1383)
fieldValue1384 = x3d.fieldValue()
fieldValue1384.name = "description"
fieldValue1384.value = "Jin Lip Suck"

ProtoInstance1381.fieldValue.append(fieldValue1384)
fieldValue1385 = x3d.fieldValue()
fieldValue1385.name = "menuItemString"
fieldValue1385.value = "\"JinLipSuck\""

ProtoInstance1381.fieldValue.append(fieldValue1385)
fieldValue1386 = x3d.fieldValue()
fieldValue1386.name = "size"
fieldValue1386.value = "40 3"

ProtoInstance1381.fieldValue.append(fieldValue1386)
fieldValue1387 = x3d.fieldValue()
fieldValue1387.name = "fontSize"
fieldValue1387.value = "2.4"

ProtoInstance1381.fieldValue.append(fieldValue1387)
fieldValue1388 = x3d.fieldValue()
fieldValue1388.name = "spacing"
fieldValue1388.value = "1.2"

ProtoInstance1381.fieldValue.append(fieldValue1388)

Layer1091.children.append(ProtoInstance1381)
ROUTE1389 = x3d.ROUTE()
ROUTE1389.fromNode = "JinLipSuck_Clock"
ROUTE1389.fromField = "fraction_changed"
ROUTE1389.toNode = "AnimationAdapter_JinLipSuck"
ROUTE1389.toField = "set_fraction"

Layer1091.children.append(ROUTE1389)
ROUTE1390 = x3d.ROUTE()
ROUTE1390.fromNode = "AUJinLipSuck"
ROUTE1390.fromField = "startTime"
ROUTE1390.toNode = "JinLipSuck_Clock"
ROUTE1390.toField = "startTime"

Layer1091.children.append(ROUTE1390)
ROUTE1391 = x3d.ROUTE()
ROUTE1391.fromNode = "AUJinLipSuck"
ROUTE1391.fromField = "stopTime"
ROUTE1391.toNode = "JinLipSuck_Clock"
ROUTE1391.toField = "stopTime"

Layer1091.children.append(ROUTE1391)
ROUTE1392 = x3d.ROUTE()
ROUTE1392.fromNode = "AUJinLipSuck"
ROUTE1392.fromField = "enabled"
ROUTE1392.toNode = "JinLipSuck_Clock"
ROUTE1392.toField = "enabled"

Layer1091.children.append(ROUTE1392)
ProtoInstance1393 = x3d.ProtoInstance(DEF="AUJinLipTightener")
ProtoInstance1393.name = "MenuItem"
fieldValue1394 = x3d.fieldValue()
fieldValue1394.name = "translation"
fieldValue1394.value = "65 6.399999999999999 0"

ProtoInstance1393.fieldValue.append(fieldValue1394)
fieldValue1395 = x3d.fieldValue()
fieldValue1395.name = "textTranslation"
fieldValue1395.value = "0 0 0"

ProtoInstance1393.fieldValue.append(fieldValue1395)
fieldValue1396 = x3d.fieldValue()
fieldValue1396.name = "description"
fieldValue1396.value = "Jin Lip Tightener"

ProtoInstance1393.fieldValue.append(fieldValue1396)
fieldValue1397 = x3d.fieldValue()
fieldValue1397.name = "menuItemString"
fieldValue1397.value = "\"JinLipTightener\""

ProtoInstance1393.fieldValue.append(fieldValue1397)
fieldValue1398 = x3d.fieldValue()
fieldValue1398.name = "size"
fieldValue1398.value = "40 3"

ProtoInstance1393.fieldValue.append(fieldValue1398)
fieldValue1399 = x3d.fieldValue()
fieldValue1399.name = "fontSize"
fieldValue1399.value = "2.4"

ProtoInstance1393.fieldValue.append(fieldValue1399)
fieldValue1400 = x3d.fieldValue()
fieldValue1400.name = "spacing"
fieldValue1400.value = "1.2"

ProtoInstance1393.fieldValue.append(fieldValue1400)

Layer1091.children.append(ProtoInstance1393)
ROUTE1401 = x3d.ROUTE()
ROUTE1401.fromNode = "JinLipTightener_Clock"
ROUTE1401.fromField = "fraction_changed"
ROUTE1401.toNode = "AnimationAdapter_JinLipTightener"
ROUTE1401.toField = "set_fraction"

Layer1091.children.append(ROUTE1401)
ROUTE1402 = x3d.ROUTE()
ROUTE1402.fromNode = "AUJinLipTightener"
ROUTE1402.fromField = "startTime"
ROUTE1402.toNode = "JinLipTightener_Clock"
ROUTE1402.toField = "startTime"

Layer1091.children.append(ROUTE1402)
ROUTE1403 = x3d.ROUTE()
ROUTE1403.fromNode = "AUJinLipTightener"
ROUTE1403.fromField = "stopTime"
ROUTE1403.toNode = "JinLipTightener_Clock"
ROUTE1403.toField = "stopTime"

Layer1091.children.append(ROUTE1403)
ROUTE1404 = x3d.ROUTE()
ROUTE1404.fromNode = "AUJinLipTightener"
ROUTE1404.fromField = "enabled"
ROUTE1404.toNode = "JinLipTightener_Clock"
ROUTE1404.toField = "enabled"

Layer1091.children.append(ROUTE1404)
ProtoInstance1405 = x3d.ProtoInstance(DEF="AUJinLowerLipDepressor")
ProtoInstance1405.name = "MenuItem"
fieldValue1406 = x3d.fieldValue()
fieldValue1406.name = "translation"
fieldValue1406.value = "65 3.399999999999995 0"

ProtoInstance1405.fieldValue.append(fieldValue1406)
fieldValue1407 = x3d.fieldValue()
fieldValue1407.name = "textTranslation"
fieldValue1407.value = "0 0 0"

ProtoInstance1405.fieldValue.append(fieldValue1407)
fieldValue1408 = x3d.fieldValue()
fieldValue1408.name = "description"
fieldValue1408.value = "Jin Lower Lip Depressor"

ProtoInstance1405.fieldValue.append(fieldValue1408)
fieldValue1409 = x3d.fieldValue()
fieldValue1409.name = "menuItemString"
fieldValue1409.value = "\"JinLowerLipDepressor\""

ProtoInstance1405.fieldValue.append(fieldValue1409)
fieldValue1410 = x3d.fieldValue()
fieldValue1410.name = "size"
fieldValue1410.value = "40 3"

ProtoInstance1405.fieldValue.append(fieldValue1410)
fieldValue1411 = x3d.fieldValue()
fieldValue1411.name = "fontSize"
fieldValue1411.value = "2.4"

ProtoInstance1405.fieldValue.append(fieldValue1411)
fieldValue1412 = x3d.fieldValue()
fieldValue1412.name = "spacing"
fieldValue1412.value = "1.2"

ProtoInstance1405.fieldValue.append(fieldValue1412)

Layer1091.children.append(ProtoInstance1405)
ROUTE1413 = x3d.ROUTE()
ROUTE1413.fromNode = "JinLowerLipDepressor_Clock"
ROUTE1413.fromField = "fraction_changed"
ROUTE1413.toNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1413.toField = "set_fraction"

Layer1091.children.append(ROUTE1413)
ROUTE1414 = x3d.ROUTE()
ROUTE1414.fromNode = "AUJinLowerLipDepressor"
ROUTE1414.fromField = "startTime"
ROUTE1414.toNode = "JinLowerLipDepressor_Clock"
ROUTE1414.toField = "startTime"

Layer1091.children.append(ROUTE1414)
ROUTE1415 = x3d.ROUTE()
ROUTE1415.fromNode = "AUJinLowerLipDepressor"
ROUTE1415.fromField = "stopTime"
ROUTE1415.toNode = "JinLowerLipDepressor_Clock"
ROUTE1415.toField = "stopTime"

Layer1091.children.append(ROUTE1415)
ROUTE1416 = x3d.ROUTE()
ROUTE1416.fromNode = "AUJinLowerLipDepressor"
ROUTE1416.fromField = "enabled"
ROUTE1416.toNode = "JinLowerLipDepressor_Clock"
ROUTE1416.toField = "enabled"

Layer1091.children.append(ROUTE1416)
ProtoInstance1417 = x3d.ProtoInstance(DEF="AUJinMouthStretch")
ProtoInstance1417.name = "MenuItem"
fieldValue1418 = x3d.fieldValue()
fieldValue1418.name = "translation"
fieldValue1418.value = "65 0.399999999999995 0"

ProtoInstance1417.fieldValue.append(fieldValue1418)
fieldValue1419 = x3d.fieldValue()
fieldValue1419.name = "textTranslation"
fieldValue1419.value = "0 0 0"

ProtoInstance1417.fieldValue.append(fieldValue1419)
fieldValue1420 = x3d.fieldValue()
fieldValue1420.name = "description"
fieldValue1420.value = "Jin Mouth Stretch"

ProtoInstance1417.fieldValue.append(fieldValue1420)
fieldValue1421 = x3d.fieldValue()
fieldValue1421.name = "menuItemString"
fieldValue1421.value = "\"JinMouthStretch\""

ProtoInstance1417.fieldValue.append(fieldValue1421)
fieldValue1422 = x3d.fieldValue()
fieldValue1422.name = "size"
fieldValue1422.value = "40 3"

ProtoInstance1417.fieldValue.append(fieldValue1422)
fieldValue1423 = x3d.fieldValue()
fieldValue1423.name = "fontSize"
fieldValue1423.value = "2.4"

ProtoInstance1417.fieldValue.append(fieldValue1423)
fieldValue1424 = x3d.fieldValue()
fieldValue1424.name = "spacing"
fieldValue1424.value = "1.2"

ProtoInstance1417.fieldValue.append(fieldValue1424)

Layer1091.children.append(ProtoInstance1417)
ROUTE1425 = x3d.ROUTE()
ROUTE1425.fromNode = "JinMouthStretch_Clock"
ROUTE1425.fromField = "fraction_changed"
ROUTE1425.toNode = "AnimationAdapter_JinMouthStretch"
ROUTE1425.toField = "set_fraction"

Layer1091.children.append(ROUTE1425)
ROUTE1426 = x3d.ROUTE()
ROUTE1426.fromNode = "AUJinMouthStretch"
ROUTE1426.fromField = "startTime"
ROUTE1426.toNode = "JinMouthStretch_Clock"
ROUTE1426.toField = "startTime"

Layer1091.children.append(ROUTE1426)
ROUTE1427 = x3d.ROUTE()
ROUTE1427.fromNode = "AUJinMouthStretch"
ROUTE1427.fromField = "stopTime"
ROUTE1427.toNode = "JinMouthStretch_Clock"
ROUTE1427.toField = "stopTime"

Layer1091.children.append(ROUTE1427)
ROUTE1428 = x3d.ROUTE()
ROUTE1428.fromNode = "AUJinMouthStretch"
ROUTE1428.fromField = "enabled"
ROUTE1428.toNode = "JinMouthStretch_Clock"
ROUTE1428.toField = "enabled"

Layer1091.children.append(ROUTE1428)
ProtoInstance1429 = x3d.ProtoInstance(DEF="AUJinNasolabialDeepener")
ProtoInstance1429.name = "MenuItem"
fieldValue1430 = x3d.fieldValue()
fieldValue1430.name = "translation"
fieldValue1430.value = "65 -2.6000000000000085 0"

ProtoInstance1429.fieldValue.append(fieldValue1430)
fieldValue1431 = x3d.fieldValue()
fieldValue1431.name = "textTranslation"
fieldValue1431.value = "0 0 0"

ProtoInstance1429.fieldValue.append(fieldValue1431)
fieldValue1432 = x3d.fieldValue()
fieldValue1432.name = "description"
fieldValue1432.value = "Jin Nasolabial Deepener"

ProtoInstance1429.fieldValue.append(fieldValue1432)
fieldValue1433 = x3d.fieldValue()
fieldValue1433.name = "menuItemString"
fieldValue1433.value = "\"JinNasolabialDeepener\""

ProtoInstance1429.fieldValue.append(fieldValue1433)
fieldValue1434 = x3d.fieldValue()
fieldValue1434.name = "size"
fieldValue1434.value = "40 3"

ProtoInstance1429.fieldValue.append(fieldValue1434)
fieldValue1435 = x3d.fieldValue()
fieldValue1435.name = "fontSize"
fieldValue1435.value = "2.4"

ProtoInstance1429.fieldValue.append(fieldValue1435)
fieldValue1436 = x3d.fieldValue()
fieldValue1436.name = "spacing"
fieldValue1436.value = "1.2"

ProtoInstance1429.fieldValue.append(fieldValue1436)

Layer1091.children.append(ProtoInstance1429)
ROUTE1437 = x3d.ROUTE()
ROUTE1437.fromNode = "JinNasolabialDeepener_Clock"
ROUTE1437.fromField = "fraction_changed"
ROUTE1437.toNode = "AnimationAdapter_JinNasolabialDeepener"
ROUTE1437.toField = "set_fraction"

Layer1091.children.append(ROUTE1437)
ROUTE1438 = x3d.ROUTE()
ROUTE1438.fromNode = "AUJinNasolabialDeepener"
ROUTE1438.fromField = "startTime"
ROUTE1438.toNode = "JinNasolabialDeepener_Clock"
ROUTE1438.toField = "startTime"

Layer1091.children.append(ROUTE1438)
ROUTE1439 = x3d.ROUTE()
ROUTE1439.fromNode = "AUJinNasolabialDeepener"
ROUTE1439.fromField = "stopTime"
ROUTE1439.toNode = "JinNasolabialDeepener_Clock"
ROUTE1439.toField = "stopTime"

Layer1091.children.append(ROUTE1439)
ROUTE1440 = x3d.ROUTE()
ROUTE1440.fromNode = "AUJinNasolabialDeepener"
ROUTE1440.fromField = "enabled"
ROUTE1440.toNode = "JinNasolabialDeepener_Clock"
ROUTE1440.toField = "enabled"

Layer1091.children.append(ROUTE1440)
ProtoInstance1441 = x3d.ProtoInstance(DEF="AUJinNoseWrinkler")
ProtoInstance1441.name = "MenuItem"
fieldValue1442 = x3d.fieldValue()
fieldValue1442.name = "translation"
fieldValue1442.value = "65 -5.6000000000000085 0"

ProtoInstance1441.fieldValue.append(fieldValue1442)
fieldValue1443 = x3d.fieldValue()
fieldValue1443.name = "textTranslation"
fieldValue1443.value = "0 0 0"

ProtoInstance1441.fieldValue.append(fieldValue1443)
fieldValue1444 = x3d.fieldValue()
fieldValue1444.name = "description"
fieldValue1444.value = "Jin Nose Wrinkler"

ProtoInstance1441.fieldValue.append(fieldValue1444)
fieldValue1445 = x3d.fieldValue()
fieldValue1445.name = "menuItemString"
fieldValue1445.value = "\"JinNoseWrinkler\""

ProtoInstance1441.fieldValue.append(fieldValue1445)
fieldValue1446 = x3d.fieldValue()
fieldValue1446.name = "size"
fieldValue1446.value = "40 3"

ProtoInstance1441.fieldValue.append(fieldValue1446)
fieldValue1447 = x3d.fieldValue()
fieldValue1447.name = "fontSize"
fieldValue1447.value = "2.4"

ProtoInstance1441.fieldValue.append(fieldValue1447)
fieldValue1448 = x3d.fieldValue()
fieldValue1448.name = "spacing"
fieldValue1448.value = "1.2"

ProtoInstance1441.fieldValue.append(fieldValue1448)

Layer1091.children.append(ProtoInstance1441)
ROUTE1449 = x3d.ROUTE()
ROUTE1449.fromNode = "JinNoseWrinkler_Clock"
ROUTE1449.fromField = "fraction_changed"
ROUTE1449.toNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1449.toField = "set_fraction"

Layer1091.children.append(ROUTE1449)
ROUTE1450 = x3d.ROUTE()
ROUTE1450.fromNode = "AUJinNoseWrinkler"
ROUTE1450.fromField = "startTime"
ROUTE1450.toNode = "JinNoseWrinkler_Clock"
ROUTE1450.toField = "startTime"

Layer1091.children.append(ROUTE1450)
ROUTE1451 = x3d.ROUTE()
ROUTE1451.fromNode = "AUJinNoseWrinkler"
ROUTE1451.fromField = "stopTime"
ROUTE1451.toNode = "JinNoseWrinkler_Clock"
ROUTE1451.toField = "stopTime"

Layer1091.children.append(ROUTE1451)
ROUTE1452 = x3d.ROUTE()
ROUTE1452.fromNode = "AUJinNoseWrinkler"
ROUTE1452.fromField = "enabled"
ROUTE1452.toNode = "JinNoseWrinkler_Clock"
ROUTE1452.toField = "enabled"

Layer1091.children.append(ROUTE1452)
ProtoInstance1453 = x3d.ProtoInstance(DEF="AUJinOuterBrowRaiser")
ProtoInstance1453.name = "MenuItem"
fieldValue1454 = x3d.fieldValue()
fieldValue1454.name = "translation"
fieldValue1454.value = "65 -8.600000000000009 0"

ProtoInstance1453.fieldValue.append(fieldValue1454)
fieldValue1455 = x3d.fieldValue()
fieldValue1455.name = "textTranslation"
fieldValue1455.value = "0 0 0"

ProtoInstance1453.fieldValue.append(fieldValue1455)
fieldValue1456 = x3d.fieldValue()
fieldValue1456.name = "description"
fieldValue1456.value = "Jin Outer Brow Raiser"

ProtoInstance1453.fieldValue.append(fieldValue1456)
fieldValue1457 = x3d.fieldValue()
fieldValue1457.name = "menuItemString"
fieldValue1457.value = "\"JinOuterBrowRaiser\""

ProtoInstance1453.fieldValue.append(fieldValue1457)
fieldValue1458 = x3d.fieldValue()
fieldValue1458.name = "size"
fieldValue1458.value = "40 3"

ProtoInstance1453.fieldValue.append(fieldValue1458)
fieldValue1459 = x3d.fieldValue()
fieldValue1459.name = "fontSize"
fieldValue1459.value = "2.4"

ProtoInstance1453.fieldValue.append(fieldValue1459)
fieldValue1460 = x3d.fieldValue()
fieldValue1460.name = "spacing"
fieldValue1460.value = "1.2"

ProtoInstance1453.fieldValue.append(fieldValue1460)

Layer1091.children.append(ProtoInstance1453)
ROUTE1461 = x3d.ROUTE()
ROUTE1461.fromNode = "JinOuterBrowRaiser_Clock"
ROUTE1461.fromField = "fraction_changed"
ROUTE1461.toNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1461.toField = "set_fraction"

Layer1091.children.append(ROUTE1461)
ROUTE1462 = x3d.ROUTE()
ROUTE1462.fromNode = "AUJinOuterBrowRaiser"
ROUTE1462.fromField = "startTime"
ROUTE1462.toNode = "JinOuterBrowRaiser_Clock"
ROUTE1462.toField = "startTime"

Layer1091.children.append(ROUTE1462)
ROUTE1463 = x3d.ROUTE()
ROUTE1463.fromNode = "AUJinOuterBrowRaiser"
ROUTE1463.fromField = "stopTime"
ROUTE1463.toNode = "JinOuterBrowRaiser_Clock"
ROUTE1463.toField = "stopTime"

Layer1091.children.append(ROUTE1463)
ROUTE1464 = x3d.ROUTE()
ROUTE1464.fromNode = "AUJinOuterBrowRaiser"
ROUTE1464.fromField = "enabled"
ROUTE1464.toNode = "JinOuterBrowRaiser_Clock"
ROUTE1464.toField = "enabled"

Layer1091.children.append(ROUTE1464)
ProtoInstance1465 = x3d.ProtoInstance(DEF="AUJinSlit")
ProtoInstance1465.name = "MenuItem"
fieldValue1466 = x3d.fieldValue()
fieldValue1466.name = "translation"
fieldValue1466.value = "65 -11.600000000000009 0"

ProtoInstance1465.fieldValue.append(fieldValue1466)
fieldValue1467 = x3d.fieldValue()
fieldValue1467.name = "textTranslation"
fieldValue1467.value = "0 0 0"

ProtoInstance1465.fieldValue.append(fieldValue1467)
fieldValue1468 = x3d.fieldValue()
fieldValue1468.name = "description"
fieldValue1468.value = "Jin Slit"

ProtoInstance1465.fieldValue.append(fieldValue1468)
fieldValue1469 = x3d.fieldValue()
fieldValue1469.name = "menuItemString"
fieldValue1469.value = "\"JinSlit\""

ProtoInstance1465.fieldValue.append(fieldValue1469)
fieldValue1470 = x3d.fieldValue()
fieldValue1470.name = "size"
fieldValue1470.value = "40 3"

ProtoInstance1465.fieldValue.append(fieldValue1470)
fieldValue1471 = x3d.fieldValue()
fieldValue1471.name = "fontSize"
fieldValue1471.value = "2.4"

ProtoInstance1465.fieldValue.append(fieldValue1471)
fieldValue1472 = x3d.fieldValue()
fieldValue1472.name = "spacing"
fieldValue1472.value = "1.2"

ProtoInstance1465.fieldValue.append(fieldValue1472)

Layer1091.children.append(ProtoInstance1465)
ROUTE1473 = x3d.ROUTE()
ROUTE1473.fromNode = "JinSlit_Clock"
ROUTE1473.fromField = "fraction_changed"
ROUTE1473.toNode = "AnimationAdapter_JinSlit"
ROUTE1473.toField = "set_fraction"

Layer1091.children.append(ROUTE1473)
ROUTE1474 = x3d.ROUTE()
ROUTE1474.fromNode = "AUJinSlit"
ROUTE1474.fromField = "startTime"
ROUTE1474.toNode = "JinSlit_Clock"
ROUTE1474.toField = "startTime"

Layer1091.children.append(ROUTE1474)
ROUTE1475 = x3d.ROUTE()
ROUTE1475.fromNode = "AUJinSlit"
ROUTE1475.fromField = "stopTime"
ROUTE1475.toNode = "JinSlit_Clock"
ROUTE1475.toField = "stopTime"

Layer1091.children.append(ROUTE1475)
ROUTE1476 = x3d.ROUTE()
ROUTE1476.fromNode = "AUJinSlit"
ROUTE1476.fromField = "enabled"
ROUTE1476.toNode = "JinSlit_Clock"
ROUTE1476.toField = "enabled"

Layer1091.children.append(ROUTE1476)
ProtoInstance1477 = x3d.ProtoInstance(DEF="AUJinSquint")
ProtoInstance1477.name = "MenuItem"
fieldValue1478 = x3d.fieldValue()
fieldValue1478.name = "translation"
fieldValue1478.value = "65 -14.600000000000001 0"

ProtoInstance1477.fieldValue.append(fieldValue1478)
fieldValue1479 = x3d.fieldValue()
fieldValue1479.name = "textTranslation"
fieldValue1479.value = "0 0 0"

ProtoInstance1477.fieldValue.append(fieldValue1479)
fieldValue1480 = x3d.fieldValue()
fieldValue1480.name = "description"
fieldValue1480.value = "Jin Squint"

ProtoInstance1477.fieldValue.append(fieldValue1480)
fieldValue1481 = x3d.fieldValue()
fieldValue1481.name = "menuItemString"
fieldValue1481.value = "\"JinSquint\""

ProtoInstance1477.fieldValue.append(fieldValue1481)
fieldValue1482 = x3d.fieldValue()
fieldValue1482.name = "size"
fieldValue1482.value = "40 3"

ProtoInstance1477.fieldValue.append(fieldValue1482)
fieldValue1483 = x3d.fieldValue()
fieldValue1483.name = "fontSize"
fieldValue1483.value = "2.4"

ProtoInstance1477.fieldValue.append(fieldValue1483)
fieldValue1484 = x3d.fieldValue()
fieldValue1484.name = "spacing"
fieldValue1484.value = "1.2"

ProtoInstance1477.fieldValue.append(fieldValue1484)

Layer1091.children.append(ProtoInstance1477)
ROUTE1485 = x3d.ROUTE()
ROUTE1485.fromNode = "JinSquint_Clock"
ROUTE1485.fromField = "fraction_changed"
ROUTE1485.toNode = "AnimationAdapter_JinSquint"
ROUTE1485.toField = "set_fraction"

Layer1091.children.append(ROUTE1485)
ROUTE1486 = x3d.ROUTE()
ROUTE1486.fromNode = "AUJinSquint"
ROUTE1486.fromField = "startTime"
ROUTE1486.toNode = "JinSquint_Clock"
ROUTE1486.toField = "startTime"

Layer1091.children.append(ROUTE1486)
ROUTE1487 = x3d.ROUTE()
ROUTE1487.fromNode = "AUJinSquint"
ROUTE1487.fromField = "stopTime"
ROUTE1487.toNode = "JinSquint_Clock"
ROUTE1487.toField = "stopTime"

Layer1091.children.append(ROUTE1487)
ROUTE1488 = x3d.ROUTE()
ROUTE1488.fromNode = "AUJinSquint"
ROUTE1488.fromField = "enabled"
ROUTE1488.toNode = "JinSquint_Clock"
ROUTE1488.toField = "enabled"

Layer1091.children.append(ROUTE1488)
ProtoInstance1489 = x3d.ProtoInstance(DEF="AUJinUpperLidRaiser")
ProtoInstance1489.name = "MenuItem"
fieldValue1490 = x3d.fieldValue()
fieldValue1490.name = "translation"
fieldValue1490.value = "65 -17.6 0"

ProtoInstance1489.fieldValue.append(fieldValue1490)
fieldValue1491 = x3d.fieldValue()
fieldValue1491.name = "textTranslation"
fieldValue1491.value = "0 0 0"

ProtoInstance1489.fieldValue.append(fieldValue1491)
fieldValue1492 = x3d.fieldValue()
fieldValue1492.name = "description"
fieldValue1492.value = "Jin Upper Lid Raiser"

ProtoInstance1489.fieldValue.append(fieldValue1492)
fieldValue1493 = x3d.fieldValue()
fieldValue1493.name = "menuItemString"
fieldValue1493.value = "\"JinUpperLidRaiser\""

ProtoInstance1489.fieldValue.append(fieldValue1493)
fieldValue1494 = x3d.fieldValue()
fieldValue1494.name = "size"
fieldValue1494.value = "40 3"

ProtoInstance1489.fieldValue.append(fieldValue1494)
fieldValue1495 = x3d.fieldValue()
fieldValue1495.name = "fontSize"
fieldValue1495.value = "2.4"

ProtoInstance1489.fieldValue.append(fieldValue1495)
fieldValue1496 = x3d.fieldValue()
fieldValue1496.name = "spacing"
fieldValue1496.value = "1.2"

ProtoInstance1489.fieldValue.append(fieldValue1496)

Layer1091.children.append(ProtoInstance1489)
ROUTE1497 = x3d.ROUTE()
ROUTE1497.fromNode = "JinUpperLidRaiser_Clock"
ROUTE1497.fromField = "fraction_changed"
ROUTE1497.toNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1497.toField = "set_fraction"

Layer1091.children.append(ROUTE1497)
ROUTE1498 = x3d.ROUTE()
ROUTE1498.fromNode = "AUJinUpperLidRaiser"
ROUTE1498.fromField = "startTime"
ROUTE1498.toNode = "JinUpperLidRaiser_Clock"
ROUTE1498.toField = "startTime"

Layer1091.children.append(ROUTE1498)
ROUTE1499 = x3d.ROUTE()
ROUTE1499.fromNode = "AUJinUpperLidRaiser"
ROUTE1499.fromField = "stopTime"
ROUTE1499.toNode = "JinUpperLidRaiser_Clock"
ROUTE1499.toField = "stopTime"

Layer1091.children.append(ROUTE1499)
ROUTE1500 = x3d.ROUTE()
ROUTE1500.fromNode = "AUJinUpperLidRaiser"
ROUTE1500.fromField = "enabled"
ROUTE1500.toNode = "JinUpperLidRaiser_Clock"
ROUTE1500.toField = "enabled"

Layer1091.children.append(ROUTE1500)
ProtoInstance1501 = x3d.ProtoInstance(DEF="AUJinUpperLipRaiser")
ProtoInstance1501.name = "MenuItem"
fieldValue1502 = x3d.fieldValue()
fieldValue1502.name = "translation"
fieldValue1502.value = "65 -20.6 0"

ProtoInstance1501.fieldValue.append(fieldValue1502)
fieldValue1503 = x3d.fieldValue()
fieldValue1503.name = "textTranslation"
fieldValue1503.value = "0 0 0"

ProtoInstance1501.fieldValue.append(fieldValue1503)
fieldValue1504 = x3d.fieldValue()
fieldValue1504.name = "description"
fieldValue1504.value = "Jin Upper Lip Raiser"

ProtoInstance1501.fieldValue.append(fieldValue1504)
fieldValue1505 = x3d.fieldValue()
fieldValue1505.name = "menuItemString"
fieldValue1505.value = "\"JinUpperLipRaiser\""

ProtoInstance1501.fieldValue.append(fieldValue1505)
fieldValue1506 = x3d.fieldValue()
fieldValue1506.name = "size"
fieldValue1506.value = "40 3"

ProtoInstance1501.fieldValue.append(fieldValue1506)
fieldValue1507 = x3d.fieldValue()
fieldValue1507.name = "fontSize"
fieldValue1507.value = "2.4"

ProtoInstance1501.fieldValue.append(fieldValue1507)
fieldValue1508 = x3d.fieldValue()
fieldValue1508.name = "spacing"
fieldValue1508.value = "1.2"

ProtoInstance1501.fieldValue.append(fieldValue1508)

Layer1091.children.append(ProtoInstance1501)
ROUTE1509 = x3d.ROUTE()
ROUTE1509.fromNode = "JinUpperLipRaiser_Clock"
ROUTE1509.fromField = "fraction_changed"
ROUTE1509.toNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1509.toField = "set_fraction"

Layer1091.children.append(ROUTE1509)
ROUTE1510 = x3d.ROUTE()
ROUTE1510.fromNode = "AUJinUpperLipRaiser"
ROUTE1510.fromField = "startTime"
ROUTE1510.toNode = "JinUpperLipRaiser_Clock"
ROUTE1510.toField = "startTime"

Layer1091.children.append(ROUTE1510)
ROUTE1511 = x3d.ROUTE()
ROUTE1511.fromNode = "AUJinUpperLipRaiser"
ROUTE1511.fromField = "stopTime"
ROUTE1511.toNode = "JinUpperLipRaiser_Clock"
ROUTE1511.toField = "stopTime"

Layer1091.children.append(ROUTE1511)
ROUTE1512 = x3d.ROUTE()
ROUTE1512.fromNode = "AUJinUpperLipRaiser"
ROUTE1512.fromField = "enabled"
ROUTE1512.toNode = "JinUpperLipRaiser_Clock"
ROUTE1512.toField = "enabled"

Layer1091.children.append(ROUTE1512)
ProtoInstance1513 = x3d.ProtoInstance(DEF="AUJinWink")
ProtoInstance1513.name = "MenuItem"
fieldValue1514 = x3d.fieldValue()
fieldValue1514.name = "translation"
fieldValue1514.value = "65 -23.599999999999994 0"

ProtoInstance1513.fieldValue.append(fieldValue1514)
fieldValue1515 = x3d.fieldValue()
fieldValue1515.name = "textTranslation"
fieldValue1515.value = "0 0 0"

ProtoInstance1513.fieldValue.append(fieldValue1515)
fieldValue1516 = x3d.fieldValue()
fieldValue1516.name = "description"
fieldValue1516.value = "Jin Wink"

ProtoInstance1513.fieldValue.append(fieldValue1516)
fieldValue1517 = x3d.fieldValue()
fieldValue1517.name = "menuItemString"
fieldValue1517.value = "\"JinWink\""

ProtoInstance1513.fieldValue.append(fieldValue1517)
fieldValue1518 = x3d.fieldValue()
fieldValue1518.name = "size"
fieldValue1518.value = "40 3"

ProtoInstance1513.fieldValue.append(fieldValue1518)
fieldValue1519 = x3d.fieldValue()
fieldValue1519.name = "fontSize"
fieldValue1519.value = "2.4"

ProtoInstance1513.fieldValue.append(fieldValue1519)
fieldValue1520 = x3d.fieldValue()
fieldValue1520.name = "spacing"
fieldValue1520.value = "1.2"

ProtoInstance1513.fieldValue.append(fieldValue1520)

Layer1091.children.append(ProtoInstance1513)
ROUTE1521 = x3d.ROUTE()
ROUTE1521.fromNode = "JinWink_Clock"
ROUTE1521.fromField = "fraction_changed"
ROUTE1521.toNode = "AnimationAdapter_JinWink"
ROUTE1521.toField = "set_fraction"

Layer1091.children.append(ROUTE1521)
ROUTE1522 = x3d.ROUTE()
ROUTE1522.fromNode = "AUJinWink"
ROUTE1522.fromField = "startTime"
ROUTE1522.toNode = "JinWink_Clock"
ROUTE1522.toField = "startTime"

Layer1091.children.append(ROUTE1522)
ROUTE1523 = x3d.ROUTE()
ROUTE1523.fromNode = "AUJinWink"
ROUTE1523.fromField = "stopTime"
ROUTE1523.toNode = "JinWink_Clock"
ROUTE1523.toField = "stopTime"

Layer1091.children.append(ROUTE1523)
ROUTE1524 = x3d.ROUTE()
ROUTE1524.fromNode = "AUJinWink"
ROUTE1524.fromField = "enabled"
ROUTE1524.toNode = "JinWink_Clock"
ROUTE1524.toField = "enabled"

Layer1091.children.append(ROUTE1524)
ProtoInstance1525 = x3d.ProtoInstance(DEF="HappinessJoy")
ProtoInstance1525.name = "MenuItem"
fieldValue1526 = x3d.fieldValue()
fieldValue1526.name = "translation"
fieldValue1526.value = "24 63.4 0"

ProtoInstance1525.fieldValue.append(fieldValue1526)
fieldValue1527 = x3d.fieldValue()
fieldValue1527.name = "textTranslation"
fieldValue1527.value = "0 0 0"

ProtoInstance1525.fieldValue.append(fieldValue1527)
fieldValue1528 = x3d.fieldValue()
fieldValue1528.name = "description"
fieldValue1528.value = "HappinessJoy"

ProtoInstance1525.fieldValue.append(fieldValue1528)
fieldValue1529 = x3d.fieldValue()
fieldValue1529.name = "menuItemString"
fieldValue1529.value = "\"HappinessJoy\""

ProtoInstance1525.fieldValue.append(fieldValue1529)
fieldValue1530 = x3d.fieldValue()
fieldValue1530.name = "size"
fieldValue1530.value = "40 3"

ProtoInstance1525.fieldValue.append(fieldValue1530)
fieldValue1531 = x3d.fieldValue()
fieldValue1531.name = "fontSize"
fieldValue1531.value = "2.4"

ProtoInstance1525.fieldValue.append(fieldValue1531)
fieldValue1532 = x3d.fieldValue()
fieldValue1532.name = "spacing"
fieldValue1532.value = "1.2"

ProtoInstance1525.fieldValue.append(fieldValue1532)

Layer1091.children.append(ProtoInstance1525)
ROUTE1533 = x3d.ROUTE()
ROUTE1533.fromNode = "HappinessJoy_Clock"
ROUTE1533.fromField = "fraction_changed"
ROUTE1533.toNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1533.toField = "set_fraction"

Layer1091.children.append(ROUTE1533)
ROUTE1534 = x3d.ROUTE()
ROUTE1534.fromNode = "HappinessJoy_Clock"
ROUTE1534.fromField = "fraction_changed"
ROUTE1534.toNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1534.toField = "set_fraction"

Layer1091.children.append(ROUTE1534)
ROUTE1535 = x3d.ROUTE()
ROUTE1535.fromNode = "HappinessJoy"
ROUTE1535.fromField = "startTime"
ROUTE1535.toNode = "HappinessJoy_Clock"
ROUTE1535.toField = "startTime"

Layer1091.children.append(ROUTE1535)
ROUTE1536 = x3d.ROUTE()
ROUTE1536.fromNode = "HappinessJoy"
ROUTE1536.fromField = "stopTime"
ROUTE1536.toNode = "HappinessJoy_Clock"
ROUTE1536.toField = "stopTime"

Layer1091.children.append(ROUTE1536)
ROUTE1537 = x3d.ROUTE()
ROUTE1537.fromNode = "HappinessJoy"
ROUTE1537.fromField = "enabled"
ROUTE1537.toNode = "HappinessJoy_Clock"
ROUTE1537.toField = "enabled"

Layer1091.children.append(ROUTE1537)
ProtoInstance1538 = x3d.ProtoInstance(DEF="Sadness")
ProtoInstance1538.name = "MenuItem"
fieldValue1539 = x3d.fieldValue()
fieldValue1539.name = "translation"
fieldValue1539.value = "24 60.61666666666666 0"

ProtoInstance1538.fieldValue.append(fieldValue1539)
fieldValue1540 = x3d.fieldValue()
fieldValue1540.name = "textTranslation"
fieldValue1540.value = "0 0 0"

ProtoInstance1538.fieldValue.append(fieldValue1540)
fieldValue1541 = x3d.fieldValue()
fieldValue1541.name = "description"
fieldValue1541.value = "Sadness"

ProtoInstance1538.fieldValue.append(fieldValue1541)
fieldValue1542 = x3d.fieldValue()
fieldValue1542.name = "menuItemString"
fieldValue1542.value = "\"Sadness\""

ProtoInstance1538.fieldValue.append(fieldValue1542)
fieldValue1543 = x3d.fieldValue()
fieldValue1543.name = "size"
fieldValue1543.value = "40 3"

ProtoInstance1538.fieldValue.append(fieldValue1543)
fieldValue1544 = x3d.fieldValue()
fieldValue1544.name = "fontSize"
fieldValue1544.value = "2.4"

ProtoInstance1538.fieldValue.append(fieldValue1544)
fieldValue1545 = x3d.fieldValue()
fieldValue1545.name = "spacing"
fieldValue1545.value = "1.2"

ProtoInstance1538.fieldValue.append(fieldValue1545)

Layer1091.children.append(ProtoInstance1538)
ROUTE1546 = x3d.ROUTE()
ROUTE1546.fromNode = "Sadness_Clock"
ROUTE1546.fromField = "fraction_changed"
ROUTE1546.toNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1546.toField = "set_fraction"

Layer1091.children.append(ROUTE1546)
ROUTE1547 = x3d.ROUTE()
ROUTE1547.fromNode = "Sadness_Clock"
ROUTE1547.fromField = "fraction_changed"
ROUTE1547.toNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1547.toField = "set_fraction"

Layer1091.children.append(ROUTE1547)
ROUTE1548 = x3d.ROUTE()
ROUTE1548.fromNode = "Sadness_Clock"
ROUTE1548.fromField = "fraction_changed"
ROUTE1548.toNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1548.toField = "set_fraction"

Layer1091.children.append(ROUTE1548)
ROUTE1549 = x3d.ROUTE()
ROUTE1549.fromNode = "Sadness"
ROUTE1549.fromField = "startTime"
ROUTE1549.toNode = "Sadness_Clock"
ROUTE1549.toField = "startTime"

Layer1091.children.append(ROUTE1549)
ROUTE1550 = x3d.ROUTE()
ROUTE1550.fromNode = "Sadness"
ROUTE1550.fromField = "stopTime"
ROUTE1550.toNode = "Sadness_Clock"
ROUTE1550.toField = "stopTime"

Layer1091.children.append(ROUTE1550)
ROUTE1551 = x3d.ROUTE()
ROUTE1551.fromNode = "Sadness"
ROUTE1551.fromField = "enabled"
ROUTE1551.toNode = "Sadness_Clock"
ROUTE1551.toField = "enabled"

Layer1091.children.append(ROUTE1551)
ProtoInstance1552 = x3d.ProtoInstance(DEF="Surprise")
ProtoInstance1552.name = "MenuItem"
fieldValue1553 = x3d.fieldValue()
fieldValue1553.name = "translation"
fieldValue1553.value = "24 57.83333333333333 0"

ProtoInstance1552.fieldValue.append(fieldValue1553)
fieldValue1554 = x3d.fieldValue()
fieldValue1554.name = "textTranslation"
fieldValue1554.value = "0 0 0"

ProtoInstance1552.fieldValue.append(fieldValue1554)
fieldValue1555 = x3d.fieldValue()
fieldValue1555.name = "description"
fieldValue1555.value = "Surprise"

ProtoInstance1552.fieldValue.append(fieldValue1555)
fieldValue1556 = x3d.fieldValue()
fieldValue1556.name = "menuItemString"
fieldValue1556.value = "\"Surprise\""

ProtoInstance1552.fieldValue.append(fieldValue1556)
fieldValue1557 = x3d.fieldValue()
fieldValue1557.name = "size"
fieldValue1557.value = "40 3"

ProtoInstance1552.fieldValue.append(fieldValue1557)
fieldValue1558 = x3d.fieldValue()
fieldValue1558.name = "fontSize"
fieldValue1558.value = "2.4"

ProtoInstance1552.fieldValue.append(fieldValue1558)
fieldValue1559 = x3d.fieldValue()
fieldValue1559.name = "spacing"
fieldValue1559.value = "1.2"

ProtoInstance1552.fieldValue.append(fieldValue1559)

Layer1091.children.append(ProtoInstance1552)
ROUTE1560 = x3d.ROUTE()
ROUTE1560.fromNode = "Surprise_Clock"
ROUTE1560.fromField = "fraction_changed"
ROUTE1560.toNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1560.toField = "set_fraction"

Layer1091.children.append(ROUTE1560)
ROUTE1561 = x3d.ROUTE()
ROUTE1561.fromNode = "Surprise_Clock"
ROUTE1561.fromField = "fraction_changed"
ROUTE1561.toNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1561.toField = "set_fraction"

Layer1091.children.append(ROUTE1561)
ROUTE1562 = x3d.ROUTE()
ROUTE1562.fromNode = "Surprise_Clock"
ROUTE1562.fromField = "fraction_changed"
ROUTE1562.toNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1562.toField = "set_fraction"

Layer1091.children.append(ROUTE1562)
ROUTE1563 = x3d.ROUTE()
ROUTE1563.fromNode = "Surprise_Clock"
ROUTE1563.fromField = "fraction_changed"
ROUTE1563.toNode = "AnimationAdapter_JinJawDrop"
ROUTE1563.toField = "set_fraction"

Layer1091.children.append(ROUTE1563)
ROUTE1564 = x3d.ROUTE()
ROUTE1564.fromNode = "Surprise"
ROUTE1564.fromField = "startTime"
ROUTE1564.toNode = "Surprise_Clock"
ROUTE1564.toField = "startTime"

Layer1091.children.append(ROUTE1564)
ROUTE1565 = x3d.ROUTE()
ROUTE1565.fromNode = "Surprise"
ROUTE1565.fromField = "stopTime"
ROUTE1565.toNode = "Surprise_Clock"
ROUTE1565.toField = "stopTime"

Layer1091.children.append(ROUTE1565)
ROUTE1566 = x3d.ROUTE()
ROUTE1566.fromNode = "Surprise"
ROUTE1566.fromField = "enabled"
ROUTE1566.toNode = "Surprise_Clock"
ROUTE1566.toField = "enabled"

Layer1091.children.append(ROUTE1566)
ProtoInstance1567 = x3d.ProtoInstance(DEF="Fear")
ProtoInstance1567.name = "MenuItem"
fieldValue1568 = x3d.fieldValue()
fieldValue1568.name = "translation"
fieldValue1568.value = "24 55.05 0"

ProtoInstance1567.fieldValue.append(fieldValue1568)
fieldValue1569 = x3d.fieldValue()
fieldValue1569.name = "textTranslation"
fieldValue1569.value = "0 0 0"

ProtoInstance1567.fieldValue.append(fieldValue1569)
fieldValue1570 = x3d.fieldValue()
fieldValue1570.name = "description"
fieldValue1570.value = "Fear"

ProtoInstance1567.fieldValue.append(fieldValue1570)
fieldValue1571 = x3d.fieldValue()
fieldValue1571.name = "menuItemString"
fieldValue1571.value = "\"Fear\""

ProtoInstance1567.fieldValue.append(fieldValue1571)
fieldValue1572 = x3d.fieldValue()
fieldValue1572.name = "size"
fieldValue1572.value = "40 3"

ProtoInstance1567.fieldValue.append(fieldValue1572)
fieldValue1573 = x3d.fieldValue()
fieldValue1573.name = "fontSize"
fieldValue1573.value = "2.4"

ProtoInstance1567.fieldValue.append(fieldValue1573)
fieldValue1574 = x3d.fieldValue()
fieldValue1574.name = "spacing"
fieldValue1574.value = "1.2"

ProtoInstance1567.fieldValue.append(fieldValue1574)

Layer1091.children.append(ProtoInstance1567)
ROUTE1575 = x3d.ROUTE()
ROUTE1575.fromNode = "Fear_Clock"
ROUTE1575.fromField = "fraction_changed"
ROUTE1575.toNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1575.toField = "set_fraction"

Layer1091.children.append(ROUTE1575)
ROUTE1576 = x3d.ROUTE()
ROUTE1576.fromNode = "Fear_Clock"
ROUTE1576.fromField = "fraction_changed"
ROUTE1576.toNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1576.toField = "set_fraction"

Layer1091.children.append(ROUTE1576)
ROUTE1577 = x3d.ROUTE()
ROUTE1577.fromNode = "Fear_Clock"
ROUTE1577.fromField = "fraction_changed"
ROUTE1577.toNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1577.toField = "set_fraction"

Layer1091.children.append(ROUTE1577)
ROUTE1578 = x3d.ROUTE()
ROUTE1578.fromNode = "Fear_Clock"
ROUTE1578.fromField = "fraction_changed"
ROUTE1578.toNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1578.toField = "set_fraction"

Layer1091.children.append(ROUTE1578)
ROUTE1579 = x3d.ROUTE()
ROUTE1579.fromNode = "Fear_Clock"
ROUTE1579.fromField = "fraction_changed"
ROUTE1579.toNode = "AnimationAdapter_JinLidTightener"
ROUTE1579.toField = "set_fraction"

Layer1091.children.append(ROUTE1579)
ROUTE1580 = x3d.ROUTE()
ROUTE1580.fromNode = "Fear_Clock"
ROUTE1580.fromField = "fraction_changed"
ROUTE1580.toNode = "AnimationAdapter_JinLipStretcher"
ROUTE1580.toField = "set_fraction"

Layer1091.children.append(ROUTE1580)
ROUTE1581 = x3d.ROUTE()
ROUTE1581.fromNode = "Fear_Clock"
ROUTE1581.fromField = "fraction_changed"
ROUTE1581.toNode = "AnimationAdapter_JinJawDrop"
ROUTE1581.toField = "set_fraction"

Layer1091.children.append(ROUTE1581)
ROUTE1582 = x3d.ROUTE()
ROUTE1582.fromNode = "Fear"
ROUTE1582.fromField = "startTime"
ROUTE1582.toNode = "Fear_Clock"
ROUTE1582.toField = "startTime"

Layer1091.children.append(ROUTE1582)
ROUTE1583 = x3d.ROUTE()
ROUTE1583.fromNode = "Fear"
ROUTE1583.fromField = "stopTime"
ROUTE1583.toNode = "Fear_Clock"
ROUTE1583.toField = "stopTime"

Layer1091.children.append(ROUTE1583)
ROUTE1584 = x3d.ROUTE()
ROUTE1584.fromNode = "Fear"
ROUTE1584.fromField = "enabled"
ROUTE1584.toNode = "Fear_Clock"
ROUTE1584.toField = "enabled"

Layer1091.children.append(ROUTE1584)
ProtoInstance1585 = x3d.ProtoInstance(DEF="Anger")
ProtoInstance1585.name = "MenuItem"
fieldValue1586 = x3d.fieldValue()
fieldValue1586.name = "translation"
fieldValue1586.value = "24 52.266666666666666 0"

ProtoInstance1585.fieldValue.append(fieldValue1586)
fieldValue1587 = x3d.fieldValue()
fieldValue1587.name = "textTranslation"
fieldValue1587.value = "0 0 0"

ProtoInstance1585.fieldValue.append(fieldValue1587)
fieldValue1588 = x3d.fieldValue()
fieldValue1588.name = "description"
fieldValue1588.value = "Anger"

ProtoInstance1585.fieldValue.append(fieldValue1588)
fieldValue1589 = x3d.fieldValue()
fieldValue1589.name = "menuItemString"
fieldValue1589.value = "\"Anger\""

ProtoInstance1585.fieldValue.append(fieldValue1589)
fieldValue1590 = x3d.fieldValue()
fieldValue1590.name = "size"
fieldValue1590.value = "40 3"

ProtoInstance1585.fieldValue.append(fieldValue1590)
fieldValue1591 = x3d.fieldValue()
fieldValue1591.name = "fontSize"
fieldValue1591.value = "2.4"

ProtoInstance1585.fieldValue.append(fieldValue1591)
fieldValue1592 = x3d.fieldValue()
fieldValue1592.name = "spacing"
fieldValue1592.value = "1.2"

ProtoInstance1585.fieldValue.append(fieldValue1592)

Layer1091.children.append(ProtoInstance1585)
ROUTE1593 = x3d.ROUTE()
ROUTE1593.fromNode = "Anger_Clock"
ROUTE1593.fromField = "fraction_changed"
ROUTE1593.toNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1593.toField = "set_fraction"

Layer1091.children.append(ROUTE1593)
ROUTE1594 = x3d.ROUTE()
ROUTE1594.fromNode = "Anger_Clock"
ROUTE1594.fromField = "fraction_changed"
ROUTE1594.toNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1594.toField = "set_fraction"

Layer1091.children.append(ROUTE1594)
ROUTE1595 = x3d.ROUTE()
ROUTE1595.fromNode = "Anger_Clock"
ROUTE1595.fromField = "fraction_changed"
ROUTE1595.toNode = "AnimationAdapter_JinLidTightener"
ROUTE1595.toField = "set_fraction"

Layer1091.children.append(ROUTE1595)
ROUTE1596 = x3d.ROUTE()
ROUTE1596.fromNode = "Anger_Clock"
ROUTE1596.fromField = "fraction_changed"
ROUTE1596.toNode = "AnimationAdapter_JinLipTightener"
ROUTE1596.toField = "set_fraction"

Layer1091.children.append(ROUTE1596)
ROUTE1597 = x3d.ROUTE()
ROUTE1597.fromNode = "Anger"
ROUTE1597.fromField = "startTime"
ROUTE1597.toNode = "Anger_Clock"
ROUTE1597.toField = "startTime"

Layer1091.children.append(ROUTE1597)
ROUTE1598 = x3d.ROUTE()
ROUTE1598.fromNode = "Anger"
ROUTE1598.fromField = "stopTime"
ROUTE1598.toNode = "Anger_Clock"
ROUTE1598.toField = "stopTime"

Layer1091.children.append(ROUTE1598)
ROUTE1599 = x3d.ROUTE()
ROUTE1599.fromNode = "Anger"
ROUTE1599.fromField = "enabled"
ROUTE1599.toNode = "Anger_Clock"
ROUTE1599.toField = "enabled"

Layer1091.children.append(ROUTE1599)
ProtoInstance1600 = x3d.ProtoInstance(DEF="Disgust")
ProtoInstance1600.name = "MenuItem"
fieldValue1601 = x3d.fieldValue()
fieldValue1601.name = "translation"
fieldValue1601.value = "24 49.48333333333333 0"

ProtoInstance1600.fieldValue.append(fieldValue1601)
fieldValue1602 = x3d.fieldValue()
fieldValue1602.name = "textTranslation"
fieldValue1602.value = "0 0 0"

ProtoInstance1600.fieldValue.append(fieldValue1602)
fieldValue1603 = x3d.fieldValue()
fieldValue1603.name = "description"
fieldValue1603.value = "Disgust"

ProtoInstance1600.fieldValue.append(fieldValue1603)
fieldValue1604 = x3d.fieldValue()
fieldValue1604.name = "menuItemString"
fieldValue1604.value = "\"Disgust\""

ProtoInstance1600.fieldValue.append(fieldValue1604)
fieldValue1605 = x3d.fieldValue()
fieldValue1605.name = "size"
fieldValue1605.value = "40 3"

ProtoInstance1600.fieldValue.append(fieldValue1605)
fieldValue1606 = x3d.fieldValue()
fieldValue1606.name = "fontSize"
fieldValue1606.value = "2.4"

ProtoInstance1600.fieldValue.append(fieldValue1606)
fieldValue1607 = x3d.fieldValue()
fieldValue1607.name = "spacing"
fieldValue1607.value = "1.2"

ProtoInstance1600.fieldValue.append(fieldValue1607)

Layer1091.children.append(ProtoInstance1600)
ROUTE1608 = x3d.ROUTE()
ROUTE1608.fromNode = "Disgust_Clock"
ROUTE1608.fromField = "fraction_changed"
ROUTE1608.toNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1608.toField = "set_fraction"

Layer1091.children.append(ROUTE1608)
ROUTE1609 = x3d.ROUTE()
ROUTE1609.fromNode = "Disgust_Clock"
ROUTE1609.fromField = "fraction_changed"
ROUTE1609.toNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1609.toField = "set_fraction"

Layer1091.children.append(ROUTE1609)
ROUTE1610 = x3d.ROUTE()
ROUTE1610.fromNode = "Disgust_Clock"
ROUTE1610.fromField = "fraction_changed"
ROUTE1610.toNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1610.toField = "set_fraction"

Layer1091.children.append(ROUTE1610)
ROUTE1611 = x3d.ROUTE()
ROUTE1611.fromNode = "Disgust"
ROUTE1611.fromField = "startTime"
ROUTE1611.toNode = "Disgust_Clock"
ROUTE1611.toField = "startTime"

Layer1091.children.append(ROUTE1611)
ROUTE1612 = x3d.ROUTE()
ROUTE1612.fromNode = "Disgust"
ROUTE1612.fromField = "stopTime"
ROUTE1612.toNode = "Disgust_Clock"
ROUTE1612.toField = "stopTime"

Layer1091.children.append(ROUTE1612)
ROUTE1613 = x3d.ROUTE()
ROUTE1613.fromNode = "Disgust"
ROUTE1613.fromField = "enabled"
ROUTE1613.toNode = "Disgust_Clock"
ROUTE1613.toField = "enabled"

Layer1091.children.append(ROUTE1613)
ProtoInstance1614 = x3d.ProtoInstance(DEF="Contempt")
ProtoInstance1614.name = "MenuItem"
fieldValue1615 = x3d.fieldValue()
fieldValue1615.name = "translation"
fieldValue1615.value = "24 46.69999999999999 0"

ProtoInstance1614.fieldValue.append(fieldValue1615)
fieldValue1616 = x3d.fieldValue()
fieldValue1616.name = "textTranslation"
fieldValue1616.value = "0 0 0"

ProtoInstance1614.fieldValue.append(fieldValue1616)
fieldValue1617 = x3d.fieldValue()
fieldValue1617.name = "description"
fieldValue1617.value = "Contempt"

ProtoInstance1614.fieldValue.append(fieldValue1617)
fieldValue1618 = x3d.fieldValue()
fieldValue1618.name = "menuItemString"
fieldValue1618.value = "\"Contempt\""

ProtoInstance1614.fieldValue.append(fieldValue1618)
fieldValue1619 = x3d.fieldValue()
fieldValue1619.name = "size"
fieldValue1619.value = "40 3"

ProtoInstance1614.fieldValue.append(fieldValue1619)
fieldValue1620 = x3d.fieldValue()
fieldValue1620.name = "fontSize"
fieldValue1620.value = "2.4"

ProtoInstance1614.fieldValue.append(fieldValue1620)
fieldValue1621 = x3d.fieldValue()
fieldValue1621.name = "spacing"
fieldValue1621.value = "1.2"

ProtoInstance1614.fieldValue.append(fieldValue1621)

Layer1091.children.append(ProtoInstance1614)
ROUTE1622 = x3d.ROUTE()
ROUTE1622.fromNode = "Contempt_Clock"
ROUTE1622.fromField = "fraction_changed"
ROUTE1622.toNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1622.toField = "set_fraction"

Layer1091.children.append(ROUTE1622)
ROUTE1623 = x3d.ROUTE()
ROUTE1623.fromNode = "Contempt_Clock"
ROUTE1623.fromField = "fraction_changed"
ROUTE1623.toNode = "AnimationAdapter_JinDimpler"
ROUTE1623.toField = "set_fraction"

Layer1091.children.append(ROUTE1623)
ROUTE1624 = x3d.ROUTE()
ROUTE1624.fromNode = "Contempt"
ROUTE1624.fromField = "startTime"
ROUTE1624.toNode = "Contempt_Clock"
ROUTE1624.toField = "startTime"

Layer1091.children.append(ROUTE1624)
ROUTE1625 = x3d.ROUTE()
ROUTE1625.fromNode = "Contempt"
ROUTE1625.fromField = "stopTime"
ROUTE1625.toNode = "Contempt_Clock"
ROUTE1625.toField = "stopTime"

Layer1091.children.append(ROUTE1625)
ROUTE1626 = x3d.ROUTE()
ROUTE1626.fromNode = "Contempt"
ROUTE1626.fromField = "enabled"
ROUTE1626.toNode = "Contempt_Clock"
ROUTE1626.toField = "enabled"

Layer1091.children.append(ROUTE1626)
ProtoInstance1627 = x3d.ProtoInstance(DEF="Reset")
ProtoInstance1627.name = "MenuItem"
fieldValue1628 = x3d.fieldValue()
fieldValue1628.name = "translation"
fieldValue1628.value = "24 41.133333333333326 0"

ProtoInstance1627.fieldValue.append(fieldValue1628)
fieldValue1629 = x3d.fieldValue()
fieldValue1629.name = "textTranslation"
fieldValue1629.value = "0 0 0"

ProtoInstance1627.fieldValue.append(fieldValue1629)
fieldValue1630 = x3d.fieldValue()
fieldValue1630.name = "description"
fieldValue1630.value = "Reset"

ProtoInstance1627.fieldValue.append(fieldValue1630)
fieldValue1631 = x3d.fieldValue()
fieldValue1631.name = "menuItemString"
fieldValue1631.value = "\"Reset\""

ProtoInstance1627.fieldValue.append(fieldValue1631)
fieldValue1632 = x3d.fieldValue()
fieldValue1632.name = "size"
fieldValue1632.value = "40 3"

ProtoInstance1627.fieldValue.append(fieldValue1632)
fieldValue1633 = x3d.fieldValue()
fieldValue1633.name = "fontSize"
fieldValue1633.value = "2.4"

ProtoInstance1627.fieldValue.append(fieldValue1633)
fieldValue1634 = x3d.fieldValue()
fieldValue1634.name = "spacing"
fieldValue1634.value = "1.2"

ProtoInstance1627.fieldValue.append(fieldValue1634)

Layer1091.children.append(ProtoInstance1627)
ROUTE1635 = x3d.ROUTE()
ROUTE1635.fromNode = "Reset_Clock"
ROUTE1635.fromField = "fraction_changed"
ROUTE1635.toNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1635.toField = "set_fraction"

Layer1091.children.append(ROUTE1635)
ROUTE1636 = x3d.ROUTE()
ROUTE1636.fromNode = "Reset_Clock"
ROUTE1636.fromField = "fraction_changed"
ROUTE1636.toNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1636.toField = "set_fraction"

Layer1091.children.append(ROUTE1636)
ROUTE1637 = x3d.ROUTE()
ROUTE1637.fromNode = "Reset"
ROUTE1637.fromField = "enabled"
ROUTE1637.toNode = "HappinessJoy"
ROUTE1637.toField = "untoggle"

Layer1091.children.append(ROUTE1637)
ROUTE1638 = x3d.ROUTE()
ROUTE1638.fromNode = "Reset_Clock"
ROUTE1638.fromField = "startTime"
ROUTE1638.toNode = "HappinessJoy_Clock"
ROUTE1638.toField = "stopTime"

Layer1091.children.append(ROUTE1638)
ROUTE1639 = x3d.ROUTE()
ROUTE1639.fromNode = "Reset_Clock"
ROUTE1639.fromField = "fraction_changed"
ROUTE1639.toNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1639.toField = "set_fraction"

Layer1091.children.append(ROUTE1639)
ROUTE1640 = x3d.ROUTE()
ROUTE1640.fromNode = "Reset_Clock"
ROUTE1640.fromField = "fraction_changed"
ROUTE1640.toNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1640.toField = "set_fraction"

Layer1091.children.append(ROUTE1640)
ROUTE1641 = x3d.ROUTE()
ROUTE1641.fromNode = "Reset_Clock"
ROUTE1641.fromField = "fraction_changed"
ROUTE1641.toNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1641.toField = "set_fraction"

Layer1091.children.append(ROUTE1641)
ROUTE1642 = x3d.ROUTE()
ROUTE1642.fromNode = "Reset"
ROUTE1642.fromField = "enabled"
ROUTE1642.toNode = "Sadness"
ROUTE1642.toField = "untoggle"

Layer1091.children.append(ROUTE1642)
ROUTE1643 = x3d.ROUTE()
ROUTE1643.fromNode = "Reset_Clock"
ROUTE1643.fromField = "startTime"
ROUTE1643.toNode = "Sadness_Clock"
ROUTE1643.toField = "stopTime"

Layer1091.children.append(ROUTE1643)
ROUTE1644 = x3d.ROUTE()
ROUTE1644.fromNode = "Reset_Clock"
ROUTE1644.fromField = "fraction_changed"
ROUTE1644.toNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1644.toField = "set_fraction"

Layer1091.children.append(ROUTE1644)
ROUTE1645 = x3d.ROUTE()
ROUTE1645.fromNode = "Reset_Clock"
ROUTE1645.fromField = "fraction_changed"
ROUTE1645.toNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1645.toField = "set_fraction"

Layer1091.children.append(ROUTE1645)
ROUTE1646 = x3d.ROUTE()
ROUTE1646.fromNode = "Reset_Clock"
ROUTE1646.fromField = "fraction_changed"
ROUTE1646.toNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1646.toField = "set_fraction"

Layer1091.children.append(ROUTE1646)
ROUTE1647 = x3d.ROUTE()
ROUTE1647.fromNode = "Reset_Clock"
ROUTE1647.fromField = "fraction_changed"
ROUTE1647.toNode = "AnimationAdapter_JinJawDrop"
ROUTE1647.toField = "set_fraction"

Layer1091.children.append(ROUTE1647)
ROUTE1648 = x3d.ROUTE()
ROUTE1648.fromNode = "Reset"
ROUTE1648.fromField = "enabled"
ROUTE1648.toNode = "Surprise"
ROUTE1648.toField = "untoggle"

Layer1091.children.append(ROUTE1648)
ROUTE1649 = x3d.ROUTE()
ROUTE1649.fromNode = "Reset_Clock"
ROUTE1649.fromField = "startTime"
ROUTE1649.toNode = "Surprise_Clock"
ROUTE1649.toField = "stopTime"

Layer1091.children.append(ROUTE1649)
ROUTE1650 = x3d.ROUTE()
ROUTE1650.fromNode = "Reset_Clock"
ROUTE1650.fromField = "fraction_changed"
ROUTE1650.toNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1650.toField = "set_fraction"

Layer1091.children.append(ROUTE1650)
ROUTE1651 = x3d.ROUTE()
ROUTE1651.fromNode = "Reset_Clock"
ROUTE1651.fromField = "fraction_changed"
ROUTE1651.toNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1651.toField = "set_fraction"

Layer1091.children.append(ROUTE1651)
ROUTE1652 = x3d.ROUTE()
ROUTE1652.fromNode = "Reset_Clock"
ROUTE1652.fromField = "fraction_changed"
ROUTE1652.toNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1652.toField = "set_fraction"

Layer1091.children.append(ROUTE1652)
ROUTE1653 = x3d.ROUTE()
ROUTE1653.fromNode = "Reset_Clock"
ROUTE1653.fromField = "fraction_changed"
ROUTE1653.toNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1653.toField = "set_fraction"

Layer1091.children.append(ROUTE1653)
ROUTE1654 = x3d.ROUTE()
ROUTE1654.fromNode = "Reset_Clock"
ROUTE1654.fromField = "fraction_changed"
ROUTE1654.toNode = "AnimationAdapter_JinLidTightener"
ROUTE1654.toField = "set_fraction"

Layer1091.children.append(ROUTE1654)
ROUTE1655 = x3d.ROUTE()
ROUTE1655.fromNode = "Reset_Clock"
ROUTE1655.fromField = "fraction_changed"
ROUTE1655.toNode = "AnimationAdapter_JinLipStretcher"
ROUTE1655.toField = "set_fraction"

Layer1091.children.append(ROUTE1655)
ROUTE1656 = x3d.ROUTE()
ROUTE1656.fromNode = "Reset_Clock"
ROUTE1656.fromField = "fraction_changed"
ROUTE1656.toNode = "AnimationAdapter_JinJawDrop"
ROUTE1656.toField = "set_fraction"

Layer1091.children.append(ROUTE1656)
ROUTE1657 = x3d.ROUTE()
ROUTE1657.fromNode = "Reset"
ROUTE1657.fromField = "enabled"
ROUTE1657.toNode = "Fear"
ROUTE1657.toField = "untoggle"

Layer1091.children.append(ROUTE1657)
ROUTE1658 = x3d.ROUTE()
ROUTE1658.fromNode = "Reset_Clock"
ROUTE1658.fromField = "startTime"
ROUTE1658.toNode = "Fear_Clock"
ROUTE1658.toField = "stopTime"

Layer1091.children.append(ROUTE1658)
ROUTE1659 = x3d.ROUTE()
ROUTE1659.fromNode = "Reset_Clock"
ROUTE1659.fromField = "fraction_changed"
ROUTE1659.toNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1659.toField = "set_fraction"

Layer1091.children.append(ROUTE1659)
ROUTE1660 = x3d.ROUTE()
ROUTE1660.fromNode = "Reset_Clock"
ROUTE1660.fromField = "fraction_changed"
ROUTE1660.toNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1660.toField = "set_fraction"

Layer1091.children.append(ROUTE1660)
ROUTE1661 = x3d.ROUTE()
ROUTE1661.fromNode = "Reset_Clock"
ROUTE1661.fromField = "fraction_changed"
ROUTE1661.toNode = "AnimationAdapter_JinLidTightener"
ROUTE1661.toField = "set_fraction"

Layer1091.children.append(ROUTE1661)
ROUTE1662 = x3d.ROUTE()
ROUTE1662.fromNode = "Reset_Clock"
ROUTE1662.fromField = "fraction_changed"
ROUTE1662.toNode = "AnimationAdapter_JinLipTightener"
ROUTE1662.toField = "set_fraction"

Layer1091.children.append(ROUTE1662)
ROUTE1663 = x3d.ROUTE()
ROUTE1663.fromNode = "Reset"
ROUTE1663.fromField = "enabled"
ROUTE1663.toNode = "Anger"
ROUTE1663.toField = "untoggle"

Layer1091.children.append(ROUTE1663)
ROUTE1664 = x3d.ROUTE()
ROUTE1664.fromNode = "Reset_Clock"
ROUTE1664.fromField = "startTime"
ROUTE1664.toNode = "Anger_Clock"
ROUTE1664.toField = "stopTime"

Layer1091.children.append(ROUTE1664)
ROUTE1665 = x3d.ROUTE()
ROUTE1665.fromNode = "Reset_Clock"
ROUTE1665.fromField = "fraction_changed"
ROUTE1665.toNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1665.toField = "set_fraction"

Layer1091.children.append(ROUTE1665)
ROUTE1666 = x3d.ROUTE()
ROUTE1666.fromNode = "Reset_Clock"
ROUTE1666.fromField = "fraction_changed"
ROUTE1666.toNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1666.toField = "set_fraction"

Layer1091.children.append(ROUTE1666)
ROUTE1667 = x3d.ROUTE()
ROUTE1667.fromNode = "Reset_Clock"
ROUTE1667.fromField = "fraction_changed"
ROUTE1667.toNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1667.toField = "set_fraction"

Layer1091.children.append(ROUTE1667)
ROUTE1668 = x3d.ROUTE()
ROUTE1668.fromNode = "Reset"
ROUTE1668.fromField = "enabled"
ROUTE1668.toNode = "Disgust"
ROUTE1668.toField = "untoggle"

Layer1091.children.append(ROUTE1668)
ROUTE1669 = x3d.ROUTE()
ROUTE1669.fromNode = "Reset_Clock"
ROUTE1669.fromField = "startTime"
ROUTE1669.toNode = "Disgust_Clock"
ROUTE1669.toField = "stopTime"

Layer1091.children.append(ROUTE1669)
ROUTE1670 = x3d.ROUTE()
ROUTE1670.fromNode = "Reset_Clock"
ROUTE1670.fromField = "fraction_changed"
ROUTE1670.toNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1670.toField = "set_fraction"

Layer1091.children.append(ROUTE1670)
ROUTE1671 = x3d.ROUTE()
ROUTE1671.fromNode = "Reset_Clock"
ROUTE1671.fromField = "fraction_changed"
ROUTE1671.toNode = "AnimationAdapter_JinDimpler"
ROUTE1671.toField = "set_fraction"

Layer1091.children.append(ROUTE1671)
ROUTE1672 = x3d.ROUTE()
ROUTE1672.fromNode = "Reset"
ROUTE1672.fromField = "enabled"
ROUTE1672.toNode = "Contempt"
ROUTE1672.toField = "untoggle"

Layer1091.children.append(ROUTE1672)
ROUTE1673 = x3d.ROUTE()
ROUTE1673.fromNode = "Reset_Clock"
ROUTE1673.fromField = "startTime"
ROUTE1673.toNode = "Contempt_Clock"
ROUTE1673.toField = "stopTime"

Layer1091.children.append(ROUTE1673)
ROUTE1674 = x3d.ROUTE()
ROUTE1674.fromNode = "Reset"
ROUTE1674.fromField = "startTime"
ROUTE1674.toNode = "Reset_Clock"
ROUTE1674.toField = "startTime"

Layer1091.children.append(ROUTE1674)
ROUTE1675 = x3d.ROUTE()
ROUTE1675.fromNode = "Reset"
ROUTE1675.fromField = "stopTime"
ROUTE1675.toNode = "Reset_Clock"
ROUTE1675.toField = "stopTime"

Layer1091.children.append(ROUTE1675)
ROUTE1676 = x3d.ROUTE()
ROUTE1676.fromNode = "Reset"
ROUTE1676.fromField = "enabled"
ROUTE1676.toNode = "Reset_Clock"
ROUTE1676.toField = "enabled"

Layer1091.children.append(ROUTE1676)
ROUTE1677 = x3d.ROUTE()
ROUTE1677.fromNode = "Reset_Clock"
ROUTE1677.fromField = "fraction_changed"
ROUTE1677.toNode = "AnimationAdapter_JinBlink"
ROUTE1677.toField = "set_fraction"

Layer1091.children.append(ROUTE1677)
ROUTE1678 = x3d.ROUTE()
ROUTE1678.fromNode = "Reset_Clock"
ROUTE1678.fromField = "startTime"
ROUTE1678.toNode = "JinBlink_Clock"
ROUTE1678.toField = "stopTime"

Layer1091.children.append(ROUTE1678)
ROUTE1679 = x3d.ROUTE()
ROUTE1679.fromNode = "Reset"
ROUTE1679.fromField = "enabled"
ROUTE1679.toNode = "AUJinBlink"
ROUTE1679.toField = "untoggle"

Layer1091.children.append(ROUTE1679)
ROUTE1680 = x3d.ROUTE()
ROUTE1680.fromNode = "Reset_Clock"
ROUTE1680.fromField = "fraction_changed"
ROUTE1680.toNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1680.toField = "set_fraction"

Layer1091.children.append(ROUTE1680)
ROUTE1681 = x3d.ROUTE()
ROUTE1681.fromNode = "Reset_Clock"
ROUTE1681.fromField = "startTime"
ROUTE1681.toNode = "JinBrowLowerer_Clock"
ROUTE1681.toField = "stopTime"

Layer1091.children.append(ROUTE1681)
ROUTE1682 = x3d.ROUTE()
ROUTE1682.fromNode = "Reset"
ROUTE1682.fromField = "enabled"
ROUTE1682.toNode = "AUJinBrowLowerer"
ROUTE1682.toField = "untoggle"

Layer1091.children.append(ROUTE1682)
ROUTE1683 = x3d.ROUTE()
ROUTE1683.fromNode = "Reset_Clock"
ROUTE1683.fromField = "fraction_changed"
ROUTE1683.toNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1683.toField = "set_fraction"

Layer1091.children.append(ROUTE1683)
ROUTE1684 = x3d.ROUTE()
ROUTE1684.fromNode = "Reset_Clock"
ROUTE1684.fromField = "startTime"
ROUTE1684.toNode = "JinCheekPuffer_Clock"
ROUTE1684.toField = "stopTime"

Layer1091.children.append(ROUTE1684)
ROUTE1685 = x3d.ROUTE()
ROUTE1685.fromNode = "Reset"
ROUTE1685.fromField = "enabled"
ROUTE1685.toNode = "AUJinCheekPuffer"
ROUTE1685.toField = "untoggle"

Layer1091.children.append(ROUTE1685)
ROUTE1686 = x3d.ROUTE()
ROUTE1686.fromNode = "Reset_Clock"
ROUTE1686.fromField = "fraction_changed"
ROUTE1686.toNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1686.toField = "set_fraction"

Layer1091.children.append(ROUTE1686)
ROUTE1687 = x3d.ROUTE()
ROUTE1687.fromNode = "Reset_Clock"
ROUTE1687.fromField = "startTime"
ROUTE1687.toNode = "JinCheekRaiser_Clock"
ROUTE1687.toField = "stopTime"

Layer1091.children.append(ROUTE1687)
ROUTE1688 = x3d.ROUTE()
ROUTE1688.fromNode = "Reset"
ROUTE1688.fromField = "enabled"
ROUTE1688.toNode = "AUJinCheekRaiser"
ROUTE1688.toField = "untoggle"

Layer1091.children.append(ROUTE1688)
ROUTE1689 = x3d.ROUTE()
ROUTE1689.fromNode = "Reset_Clock"
ROUTE1689.fromField = "fraction_changed"
ROUTE1689.toNode = "AnimationAdapter_JinChinRaiser"
ROUTE1689.toField = "set_fraction"

Layer1091.children.append(ROUTE1689)
ROUTE1690 = x3d.ROUTE()
ROUTE1690.fromNode = "Reset_Clock"
ROUTE1690.fromField = "startTime"
ROUTE1690.toNode = "JinChinRaiser_Clock"
ROUTE1690.toField = "stopTime"

Layer1091.children.append(ROUTE1690)
ROUTE1691 = x3d.ROUTE()
ROUTE1691.fromNode = "Reset"
ROUTE1691.fromField = "enabled"
ROUTE1691.toNode = "AUJinChinRaiser"
ROUTE1691.toField = "untoggle"

Layer1091.children.append(ROUTE1691)
ROUTE1692 = x3d.ROUTE()
ROUTE1692.fromNode = "Reset_Clock"
ROUTE1692.fromField = "fraction_changed"
ROUTE1692.toNode = "AnimationAdapter_JinDimpler"
ROUTE1692.toField = "set_fraction"

Layer1091.children.append(ROUTE1692)
ROUTE1693 = x3d.ROUTE()
ROUTE1693.fromNode = "Reset_Clock"
ROUTE1693.fromField = "startTime"
ROUTE1693.toNode = "JinDimpler_Clock"
ROUTE1693.toField = "stopTime"

Layer1091.children.append(ROUTE1693)
ROUTE1694 = x3d.ROUTE()
ROUTE1694.fromNode = "Reset"
ROUTE1694.fromField = "enabled"
ROUTE1694.toNode = "AUJinDimpler"
ROUTE1694.toField = "untoggle"

Layer1091.children.append(ROUTE1694)
ROUTE1695 = x3d.ROUTE()
ROUTE1695.fromNode = "Reset_Clock"
ROUTE1695.fromField = "fraction_changed"
ROUTE1695.toNode = "AnimationAdapter_JinEyesClosed"
ROUTE1695.toField = "set_fraction"

Layer1091.children.append(ROUTE1695)
ROUTE1696 = x3d.ROUTE()
ROUTE1696.fromNode = "Reset_Clock"
ROUTE1696.fromField = "startTime"
ROUTE1696.toNode = "JinEyesClosed_Clock"
ROUTE1696.toField = "stopTime"

Layer1091.children.append(ROUTE1696)
ROUTE1697 = x3d.ROUTE()
ROUTE1697.fromNode = "Reset"
ROUTE1697.fromField = "enabled"
ROUTE1697.toNode = "AUJinEyesClosed"
ROUTE1697.toField = "untoggle"

Layer1091.children.append(ROUTE1697)
ROUTE1698 = x3d.ROUTE()
ROUTE1698.fromNode = "Reset_Clock"
ROUTE1698.fromField = "fraction_changed"
ROUTE1698.toNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1698.toField = "set_fraction"

Layer1091.children.append(ROUTE1698)
ROUTE1699 = x3d.ROUTE()
ROUTE1699.fromNode = "Reset_Clock"
ROUTE1699.fromField = "startTime"
ROUTE1699.toNode = "JinInnerBrowRaiser_Clock"
ROUTE1699.toField = "stopTime"

Layer1091.children.append(ROUTE1699)
ROUTE1700 = x3d.ROUTE()
ROUTE1700.fromNode = "Reset"
ROUTE1700.fromField = "enabled"
ROUTE1700.toNode = "AUJinInnerBrowRaiser"
ROUTE1700.toField = "untoggle"

Layer1091.children.append(ROUTE1700)
ROUTE1701 = x3d.ROUTE()
ROUTE1701.fromNode = "Reset_Clock"
ROUTE1701.fromField = "fraction_changed"
ROUTE1701.toNode = "AnimationAdapter_JinJawDrop"
ROUTE1701.toField = "set_fraction"

Layer1091.children.append(ROUTE1701)
ROUTE1702 = x3d.ROUTE()
ROUTE1702.fromNode = "Reset_Clock"
ROUTE1702.fromField = "startTime"
ROUTE1702.toNode = "JinJawDrop_Clock"
ROUTE1702.toField = "stopTime"

Layer1091.children.append(ROUTE1702)
ROUTE1703 = x3d.ROUTE()
ROUTE1703.fromNode = "Reset"
ROUTE1703.fromField = "enabled"
ROUTE1703.toNode = "AUJinJawDrop"
ROUTE1703.toField = "untoggle"

Layer1091.children.append(ROUTE1703)
ROUTE1704 = x3d.ROUTE()
ROUTE1704.fromNode = "Reset_Clock"
ROUTE1704.fromField = "fraction_changed"
ROUTE1704.toNode = "AnimationAdapter_JinLidDroop"
ROUTE1704.toField = "set_fraction"

Layer1091.children.append(ROUTE1704)
ROUTE1705 = x3d.ROUTE()
ROUTE1705.fromNode = "Reset_Clock"
ROUTE1705.fromField = "startTime"
ROUTE1705.toNode = "JinLidDroop_Clock"
ROUTE1705.toField = "stopTime"

Layer1091.children.append(ROUTE1705)
ROUTE1706 = x3d.ROUTE()
ROUTE1706.fromNode = "Reset"
ROUTE1706.fromField = "enabled"
ROUTE1706.toNode = "AUJinLidDroop"
ROUTE1706.toField = "untoggle"

Layer1091.children.append(ROUTE1706)
ROUTE1707 = x3d.ROUTE()
ROUTE1707.fromNode = "Reset_Clock"
ROUTE1707.fromField = "fraction_changed"
ROUTE1707.toNode = "AnimationAdapter_JinLidTightener"
ROUTE1707.toField = "set_fraction"

Layer1091.children.append(ROUTE1707)
ROUTE1708 = x3d.ROUTE()
ROUTE1708.fromNode = "Reset_Clock"
ROUTE1708.fromField = "startTime"
ROUTE1708.toNode = "JinLidTightener_Clock"
ROUTE1708.toField = "stopTime"

Layer1091.children.append(ROUTE1708)
ROUTE1709 = x3d.ROUTE()
ROUTE1709.fromNode = "Reset"
ROUTE1709.fromField = "enabled"
ROUTE1709.toNode = "AUJinLidTightener"
ROUTE1709.toField = "untoggle"

Layer1091.children.append(ROUTE1709)
ROUTE1710 = x3d.ROUTE()
ROUTE1710.fromNode = "Reset_Clock"
ROUTE1710.fromField = "fraction_changed"
ROUTE1710.toNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1710.toField = "set_fraction"

Layer1091.children.append(ROUTE1710)
ROUTE1711 = x3d.ROUTE()
ROUTE1711.fromNode = "Reset_Clock"
ROUTE1711.fromField = "startTime"
ROUTE1711.toNode = "JinLipCornerDepressor_Clock"
ROUTE1711.toField = "stopTime"

Layer1091.children.append(ROUTE1711)
ROUTE1712 = x3d.ROUTE()
ROUTE1712.fromNode = "Reset"
ROUTE1712.fromField = "enabled"
ROUTE1712.toNode = "AUJinLipCornerDepressor"
ROUTE1712.toField = "untoggle"

Layer1091.children.append(ROUTE1712)
ROUTE1713 = x3d.ROUTE()
ROUTE1713.fromNode = "Reset_Clock"
ROUTE1713.fromField = "fraction_changed"
ROUTE1713.toNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1713.toField = "set_fraction"

Layer1091.children.append(ROUTE1713)
ROUTE1714 = x3d.ROUTE()
ROUTE1714.fromNode = "Reset_Clock"
ROUTE1714.fromField = "startTime"
ROUTE1714.toNode = "JinLipCornerPuller_Clock"
ROUTE1714.toField = "stopTime"

Layer1091.children.append(ROUTE1714)
ROUTE1715 = x3d.ROUTE()
ROUTE1715.fromNode = "Reset"
ROUTE1715.fromField = "enabled"
ROUTE1715.toNode = "AUJinLipCornerPuller"
ROUTE1715.toField = "untoggle"

Layer1091.children.append(ROUTE1715)
ROUTE1716 = x3d.ROUTE()
ROUTE1716.fromNode = "Reset_Clock"
ROUTE1716.fromField = "fraction_changed"
ROUTE1716.toNode = "AnimationAdapter_JinLipFunneler"
ROUTE1716.toField = "set_fraction"

Layer1091.children.append(ROUTE1716)
ROUTE1717 = x3d.ROUTE()
ROUTE1717.fromNode = "Reset_Clock"
ROUTE1717.fromField = "startTime"
ROUTE1717.toNode = "JinLipFunneler_Clock"
ROUTE1717.toField = "stopTime"

Layer1091.children.append(ROUTE1717)
ROUTE1718 = x3d.ROUTE()
ROUTE1718.fromNode = "Reset"
ROUTE1718.fromField = "enabled"
ROUTE1718.toNode = "AUJinLipFunneler"
ROUTE1718.toField = "untoggle"

Layer1091.children.append(ROUTE1718)
ROUTE1719 = x3d.ROUTE()
ROUTE1719.fromNode = "Reset_Clock"
ROUTE1719.fromField = "fraction_changed"
ROUTE1719.toNode = "AnimationAdapter_JinLipPressor"
ROUTE1719.toField = "set_fraction"

Layer1091.children.append(ROUTE1719)
ROUTE1720 = x3d.ROUTE()
ROUTE1720.fromNode = "Reset_Clock"
ROUTE1720.fromField = "startTime"
ROUTE1720.toNode = "JinLipPressor_Clock"
ROUTE1720.toField = "stopTime"

Layer1091.children.append(ROUTE1720)
ROUTE1721 = x3d.ROUTE()
ROUTE1721.fromNode = "Reset"
ROUTE1721.fromField = "enabled"
ROUTE1721.toNode = "AUJinLipPressor"
ROUTE1721.toField = "untoggle"

Layer1091.children.append(ROUTE1721)
ROUTE1722 = x3d.ROUTE()
ROUTE1722.fromNode = "Reset_Clock"
ROUTE1722.fromField = "fraction_changed"
ROUTE1722.toNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1722.toField = "set_fraction"

Layer1091.children.append(ROUTE1722)
ROUTE1723 = x3d.ROUTE()
ROUTE1723.fromNode = "Reset_Clock"
ROUTE1723.fromField = "startTime"
ROUTE1723.toNode = "JinLipPuckerer_Clock"
ROUTE1723.toField = "stopTime"

Layer1091.children.append(ROUTE1723)
ROUTE1724 = x3d.ROUTE()
ROUTE1724.fromNode = "Reset"
ROUTE1724.fromField = "enabled"
ROUTE1724.toNode = "AUJinLipPuckerer"
ROUTE1724.toField = "untoggle"

Layer1091.children.append(ROUTE1724)
ROUTE1725 = x3d.ROUTE()
ROUTE1725.fromNode = "Reset_Clock"
ROUTE1725.fromField = "fraction_changed"
ROUTE1725.toNode = "AnimationAdapter_JinLipsPart"
ROUTE1725.toField = "set_fraction"

Layer1091.children.append(ROUTE1725)
ROUTE1726 = x3d.ROUTE()
ROUTE1726.fromNode = "Reset_Clock"
ROUTE1726.fromField = "startTime"
ROUTE1726.toNode = "JinLipsPart_Clock"
ROUTE1726.toField = "stopTime"

Layer1091.children.append(ROUTE1726)
ROUTE1727 = x3d.ROUTE()
ROUTE1727.fromNode = "Reset"
ROUTE1727.fromField = "enabled"
ROUTE1727.toNode = "AUJinLipsPart"
ROUTE1727.toField = "untoggle"

Layer1091.children.append(ROUTE1727)
ROUTE1728 = x3d.ROUTE()
ROUTE1728.fromNode = "Reset_Clock"
ROUTE1728.fromField = "fraction_changed"
ROUTE1728.toNode = "AnimationAdapter_JinLipStretcher"
ROUTE1728.toField = "set_fraction"

Layer1091.children.append(ROUTE1728)
ROUTE1729 = x3d.ROUTE()
ROUTE1729.fromNode = "Reset_Clock"
ROUTE1729.fromField = "startTime"
ROUTE1729.toNode = "JinLipStretcher_Clock"
ROUTE1729.toField = "stopTime"

Layer1091.children.append(ROUTE1729)
ROUTE1730 = x3d.ROUTE()
ROUTE1730.fromNode = "Reset"
ROUTE1730.fromField = "enabled"
ROUTE1730.toNode = "AUJinLipStretcher"
ROUTE1730.toField = "untoggle"

Layer1091.children.append(ROUTE1730)
ROUTE1731 = x3d.ROUTE()
ROUTE1731.fromNode = "Reset_Clock"
ROUTE1731.fromField = "fraction_changed"
ROUTE1731.toNode = "AnimationAdapter_JinLipSuck"
ROUTE1731.toField = "set_fraction"

Layer1091.children.append(ROUTE1731)
ROUTE1732 = x3d.ROUTE()
ROUTE1732.fromNode = "Reset_Clock"
ROUTE1732.fromField = "startTime"
ROUTE1732.toNode = "JinLipSuck_Clock"
ROUTE1732.toField = "stopTime"

Layer1091.children.append(ROUTE1732)
ROUTE1733 = x3d.ROUTE()
ROUTE1733.fromNode = "Reset"
ROUTE1733.fromField = "enabled"
ROUTE1733.toNode = "AUJinLipSuck"
ROUTE1733.toField = "untoggle"

Layer1091.children.append(ROUTE1733)
ROUTE1734 = x3d.ROUTE()
ROUTE1734.fromNode = "Reset_Clock"
ROUTE1734.fromField = "fraction_changed"
ROUTE1734.toNode = "AnimationAdapter_JinLipTightener"
ROUTE1734.toField = "set_fraction"

Layer1091.children.append(ROUTE1734)
ROUTE1735 = x3d.ROUTE()
ROUTE1735.fromNode = "Reset_Clock"
ROUTE1735.fromField = "startTime"
ROUTE1735.toNode = "JinLipTightener_Clock"
ROUTE1735.toField = "stopTime"

Layer1091.children.append(ROUTE1735)
ROUTE1736 = x3d.ROUTE()
ROUTE1736.fromNode = "Reset"
ROUTE1736.fromField = "enabled"
ROUTE1736.toNode = "AUJinLipTightener"
ROUTE1736.toField = "untoggle"

Layer1091.children.append(ROUTE1736)
ROUTE1737 = x3d.ROUTE()
ROUTE1737.fromNode = "Reset_Clock"
ROUTE1737.fromField = "fraction_changed"
ROUTE1737.toNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1737.toField = "set_fraction"

Layer1091.children.append(ROUTE1737)
ROUTE1738 = x3d.ROUTE()
ROUTE1738.fromNode = "Reset_Clock"
ROUTE1738.fromField = "startTime"
ROUTE1738.toNode = "JinLowerLipDepressor_Clock"
ROUTE1738.toField = "stopTime"

Layer1091.children.append(ROUTE1738)
ROUTE1739 = x3d.ROUTE()
ROUTE1739.fromNode = "Reset"
ROUTE1739.fromField = "enabled"
ROUTE1739.toNode = "AUJinLowerLipDepressor"
ROUTE1739.toField = "untoggle"

Layer1091.children.append(ROUTE1739)
ROUTE1740 = x3d.ROUTE()
ROUTE1740.fromNode = "Reset_Clock"
ROUTE1740.fromField = "fraction_changed"
ROUTE1740.toNode = "AnimationAdapter_JinMouthStretch"
ROUTE1740.toField = "set_fraction"

Layer1091.children.append(ROUTE1740)
ROUTE1741 = x3d.ROUTE()
ROUTE1741.fromNode = "Reset_Clock"
ROUTE1741.fromField = "startTime"
ROUTE1741.toNode = "JinMouthStretch_Clock"
ROUTE1741.toField = "stopTime"

Layer1091.children.append(ROUTE1741)
ROUTE1742 = x3d.ROUTE()
ROUTE1742.fromNode = "Reset"
ROUTE1742.fromField = "enabled"
ROUTE1742.toNode = "AUJinMouthStretch"
ROUTE1742.toField = "untoggle"

Layer1091.children.append(ROUTE1742)
ROUTE1743 = x3d.ROUTE()
ROUTE1743.fromNode = "Reset_Clock"
ROUTE1743.fromField = "fraction_changed"
ROUTE1743.toNode = "AnimationAdapter_JinNasolabialDeepener"
ROUTE1743.toField = "set_fraction"

Layer1091.children.append(ROUTE1743)
ROUTE1744 = x3d.ROUTE()
ROUTE1744.fromNode = "Reset_Clock"
ROUTE1744.fromField = "startTime"
ROUTE1744.toNode = "JinNasolabialDeepener_Clock"
ROUTE1744.toField = "stopTime"

Layer1091.children.append(ROUTE1744)
ROUTE1745 = x3d.ROUTE()
ROUTE1745.fromNode = "Reset"
ROUTE1745.fromField = "enabled"
ROUTE1745.toNode = "AUJinNasolabialDeepener"
ROUTE1745.toField = "untoggle"

Layer1091.children.append(ROUTE1745)
ROUTE1746 = x3d.ROUTE()
ROUTE1746.fromNode = "Reset_Clock"
ROUTE1746.fromField = "fraction_changed"
ROUTE1746.toNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1746.toField = "set_fraction"

Layer1091.children.append(ROUTE1746)
ROUTE1747 = x3d.ROUTE()
ROUTE1747.fromNode = "Reset_Clock"
ROUTE1747.fromField = "startTime"
ROUTE1747.toNode = "JinNoseWrinkler_Clock"
ROUTE1747.toField = "stopTime"

Layer1091.children.append(ROUTE1747)
ROUTE1748 = x3d.ROUTE()
ROUTE1748.fromNode = "Reset"
ROUTE1748.fromField = "enabled"
ROUTE1748.toNode = "AUJinNoseWrinkler"
ROUTE1748.toField = "untoggle"

Layer1091.children.append(ROUTE1748)
ROUTE1749 = x3d.ROUTE()
ROUTE1749.fromNode = "Reset_Clock"
ROUTE1749.fromField = "fraction_changed"
ROUTE1749.toNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1749.toField = "set_fraction"

Layer1091.children.append(ROUTE1749)
ROUTE1750 = x3d.ROUTE()
ROUTE1750.fromNode = "Reset_Clock"
ROUTE1750.fromField = "startTime"
ROUTE1750.toNode = "JinOuterBrowRaiser_Clock"
ROUTE1750.toField = "stopTime"

Layer1091.children.append(ROUTE1750)
ROUTE1751 = x3d.ROUTE()
ROUTE1751.fromNode = "Reset"
ROUTE1751.fromField = "enabled"
ROUTE1751.toNode = "AUJinOuterBrowRaiser"
ROUTE1751.toField = "untoggle"

Layer1091.children.append(ROUTE1751)
ROUTE1752 = x3d.ROUTE()
ROUTE1752.fromNode = "Reset_Clock"
ROUTE1752.fromField = "fraction_changed"
ROUTE1752.toNode = "AnimationAdapter_JinSlit"
ROUTE1752.toField = "set_fraction"

Layer1091.children.append(ROUTE1752)
ROUTE1753 = x3d.ROUTE()
ROUTE1753.fromNode = "Reset_Clock"
ROUTE1753.fromField = "startTime"
ROUTE1753.toNode = "JinSlit_Clock"
ROUTE1753.toField = "stopTime"

Layer1091.children.append(ROUTE1753)
ROUTE1754 = x3d.ROUTE()
ROUTE1754.fromNode = "Reset"
ROUTE1754.fromField = "enabled"
ROUTE1754.toNode = "AUJinSlit"
ROUTE1754.toField = "untoggle"

Layer1091.children.append(ROUTE1754)
ROUTE1755 = x3d.ROUTE()
ROUTE1755.fromNode = "Reset_Clock"
ROUTE1755.fromField = "fraction_changed"
ROUTE1755.toNode = "AnimationAdapter_JinSquint"
ROUTE1755.toField = "set_fraction"

Layer1091.children.append(ROUTE1755)
ROUTE1756 = x3d.ROUTE()
ROUTE1756.fromNode = "Reset_Clock"
ROUTE1756.fromField = "startTime"
ROUTE1756.toNode = "JinSquint_Clock"
ROUTE1756.toField = "stopTime"

Layer1091.children.append(ROUTE1756)
ROUTE1757 = x3d.ROUTE()
ROUTE1757.fromNode = "Reset"
ROUTE1757.fromField = "enabled"
ROUTE1757.toNode = "AUJinSquint"
ROUTE1757.toField = "untoggle"

Layer1091.children.append(ROUTE1757)
ROUTE1758 = x3d.ROUTE()
ROUTE1758.fromNode = "Reset_Clock"
ROUTE1758.fromField = "fraction_changed"
ROUTE1758.toNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1758.toField = "set_fraction"

Layer1091.children.append(ROUTE1758)
ROUTE1759 = x3d.ROUTE()
ROUTE1759.fromNode = "Reset_Clock"
ROUTE1759.fromField = "startTime"
ROUTE1759.toNode = "JinUpperLidRaiser_Clock"
ROUTE1759.toField = "stopTime"

Layer1091.children.append(ROUTE1759)
ROUTE1760 = x3d.ROUTE()
ROUTE1760.fromNode = "Reset"
ROUTE1760.fromField = "enabled"
ROUTE1760.toNode = "AUJinUpperLidRaiser"
ROUTE1760.toField = "untoggle"

Layer1091.children.append(ROUTE1760)
ROUTE1761 = x3d.ROUTE()
ROUTE1761.fromNode = "Reset_Clock"
ROUTE1761.fromField = "fraction_changed"
ROUTE1761.toNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1761.toField = "set_fraction"

Layer1091.children.append(ROUTE1761)
ROUTE1762 = x3d.ROUTE()
ROUTE1762.fromNode = "Reset_Clock"
ROUTE1762.fromField = "startTime"
ROUTE1762.toNode = "JinUpperLipRaiser_Clock"
ROUTE1762.toField = "stopTime"

Layer1091.children.append(ROUTE1762)
ROUTE1763 = x3d.ROUTE()
ROUTE1763.fromNode = "Reset"
ROUTE1763.fromField = "enabled"
ROUTE1763.toNode = "AUJinUpperLipRaiser"
ROUTE1763.toField = "untoggle"

Layer1091.children.append(ROUTE1763)
ROUTE1764 = x3d.ROUTE()
ROUTE1764.fromNode = "Reset_Clock"
ROUTE1764.fromField = "fraction_changed"
ROUTE1764.toNode = "AnimationAdapter_JinWink"
ROUTE1764.toField = "set_fraction"

Layer1091.children.append(ROUTE1764)
ROUTE1765 = x3d.ROUTE()
ROUTE1765.fromNode = "Reset_Clock"
ROUTE1765.fromField = "startTime"
ROUTE1765.toNode = "JinWink_Clock"
ROUTE1765.toField = "stopTime"

Layer1091.children.append(ROUTE1765)
ROUTE1766 = x3d.ROUTE()
ROUTE1766.fromNode = "Reset"
ROUTE1766.fromField = "enabled"
ROUTE1766.toNode = "AUJinWink"
ROUTE1766.toField = "untoggle"

Layer1091.children.append(ROUTE1766)

LayerSet14.layers.append(Layer1091)

Scene13.layerSet = LayerSet14

X3D0.Scene = Scene13
f = open("../data/CleanedYouClocks.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/CleanedYouClocks.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/CleanedYouClocks.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
