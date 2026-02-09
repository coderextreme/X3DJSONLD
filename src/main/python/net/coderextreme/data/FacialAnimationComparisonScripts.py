print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 3

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "MultiFacialAnimationMenu.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://coderextreme.net/X3DJSONLD/src/main/data/MultiFacialAnimationMenu.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "X3D scene with multiple facial animations controlled by a multi-selection menu"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "12 December 2024"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
ProtoDeclare8 = x3d.ProtoDeclare()
ProtoDeclare8.name = "MenuItem"
ProtoInterface9 = x3d.ProtoInterface()
field10 = x3d.field()
field10.accessType = "inputOutput"
field10.type = "SFVec3f"
field10.name = "translation"

ProtoInterface9.field.append(field10)
field11 = x3d.field()
field11.accessType = "inputOutput"
field11.type = "SFVec3f"
field11.name = "textTranslation"

ProtoInterface9.field.append(field11)
field12 = x3d.field()
field12.accessType = "inputOutput"
field12.type = "SFString"
field12.name = "description"

ProtoInterface9.field.append(field12)
field13 = x3d.field()
field13.accessType = "inputOutput"
field13.type = "MFString"
field13.name = "menuItemString"

ProtoInterface9.field.append(field13)
field14 = x3d.field()
field14.accessType = "inputOutput"
field14.type = "SFNode"
field14.name = "adapter"

ProtoInterface9.field.append(field14)
field15 = x3d.field()
field15.accessType = "initializeOnly"
field15.type = "SFVec2f"
field15.name = "size"
field15.value = [40,3]

ProtoInterface9.field.append(field15)
field16 = x3d.field()
field16.accessType = "inputOutput"
field16.type = "SFFloat"
field16.name = "fontSize"
field16.value = 2.4

ProtoInterface9.field.append(field16)
field17 = x3d.field()
field17.accessType = "initializeOnly"
field17.type = "SFFloat"
field17.name = "spacing"
field17.value = 1.2

ProtoInterface9.field.append(field17)

ProtoDeclare8.ProtoInterface = ProtoInterface9
ProtoBody18 = x3d.ProtoBody()
Group19 = x3d.Group()
TimeSensor20 = x3d.TimeSensor(DEF="Main_Clock")
TimeSensor20.cycleInterval = 0.99
TimeSensor20.loop = True

Group19.children.append(TimeSensor20)
Transform21 = x3d.Transform()
TouchSensor22 = x3d.TouchSensor(DEF="StartStopAnimationUnit_Sensor")
IS23 = x3d.IS()
connect24 = x3d.connect()
connect24.nodeField = "description"
connect24.protoField = "description"

IS23.connect.append(connect24)

TouchSensor22.IS = IS23

Transform21.children.append(TouchSensor22)
Transform25 = x3d.Transform()
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.diffuseColor = [1,1,1]

Appearance27.material = Material28

Shape26.appearance = Appearance27
Text29 = x3d.Text()
FontStyle30 = x3d.FontStyle()
FontStyle30.justify = ["MIDDLE","MIDDLE"]
IS31 = x3d.IS()
connect32 = x3d.connect()
connect32.nodeField = "size"
connect32.protoField = "fontSize"

IS31.connect.append(connect32)
connect33 = x3d.connect()
connect33.nodeField = "spacing"
connect33.protoField = "spacing"

IS31.connect.append(connect33)

FontStyle30.IS = IS31

Text29.fontStyle = FontStyle30
IS34 = x3d.IS()
connect35 = x3d.connect()
connect35.nodeField = "string"
connect35.protoField = "menuItemString"

IS34.connect.append(connect35)

Text29.IS = IS34

Shape26.geometry = Text29

Transform25.children.append(Shape26)
IS36 = x3d.IS()
connect37 = x3d.connect()
connect37.nodeField = "translation"
connect37.protoField = "textTranslation"

IS36.connect.append(connect37)

Transform25.IS = IS36

Transform21.children.append(Transform25)
Transform38 = x3d.Transform()
Transform38.translation = [0,0,-0.01]
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Material41 = x3d.Material(DEF="MenuBackground_Material")
Material41.diffuseColor = [0,0,1]

Appearance40.material = Material41

Shape39.appearance = Appearance40
Rectangle2D42 = x3d.Rectangle2D()
IS43 = x3d.IS()
connect44 = x3d.connect()
connect44.nodeField = "size"
connect44.protoField = "size"

IS43.connect.append(connect44)

Rectangle2D42.IS = IS43

Shape39.geometry = Rectangle2D42

Transform38.children.append(Shape39)

Transform21.children.append(Transform38)
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.nodeField = "translation"
connect46.protoField = "translation"

IS45.connect.append(connect46)

Transform21.IS = IS45

Group19.children.append(Transform21)
Script47 = x3d.Script(DEF="ScriptToggle")
field48 = x3d.field()
field48.accessType = "inputOnly"
field48.type = "SFTime"
field48.name = "inTime"

Script47.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOutput"
field49.type = "SFFloat"
field49.name = "fraction"

Script47.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOutput"
field50.type = "SFColor"
field50.name = "diffuseColor"
field50.value = [0,0,1]

Script47.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOutput"
field51.type = "SFBool"
field51.name = "checked"

Script47.field.append(field51)
field52 = x3d.field()
field52.accessType = "inputOutput"
field52.type = "SFNode"
field52.name = "adapter"

Script47.field.append(field52)

Script47.sourceCode = '''ecmascript:\n"+
"        function inTime(value) {\n"+
"            // Browser.print(\"in\", diffuseColor.g, diffuseColor.b);\n"+
"            if (value) {\n"+
"                checked = !checked;\n"+
"            }\n"+
"            scene = Browser.currentScene;\n"+
"            if (checked) {\n"+
"                Browser.addRoute(scene.getNamedNode(\"Main_Clock\"), 'fraction_changed', adapter, 'set_fraction');\n"+
"                diffuseColor.g = 1;\n"+
"                diffuseColor.b = 0;\n"+
"                adapter.set_fraction = 0;\n"+
"            } else {\n"+
"                Browser.deleteRoute(scene.getNamedNode(\"Main_Clock\"), 'fraction_changed', adapter, 'set_fraction');\n"+
"                diffuseColor.g = 0;\n"+
"                diffuseColor.b = 1;\n"+
"                adapter.set_fraction = 0;\n"+
"            }\n"+
"        }'''
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.nodeField = "adapter"
connect54.protoField = "adapter"

IS53.connect.append(connect54)

Script47.IS = IS53

Group19.children.append(Script47)

ProtoBody18.children.append(Group19)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "StartStopAnimationUnit_Sensor"
ROUTE55.fromField = "touchTime"
ROUTE55.toNode = "ScriptToggle"
ROUTE55.toField = "inTime"

ProtoBody18.children.append(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "MenuBackground_Material"
ROUTE56.fromField = "diffuseColor_changed"
ROUTE56.toNode = "ScriptToggle"
ROUTE56.toField = "set_diffuseColor"

ProtoBody18.children.append(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "ScriptToggle"
ROUTE57.fromField = "diffuseColor_changed"
ROUTE57.toNode = "MenuBackground_Material"
ROUTE57.toField = "set_diffuseColor"

ProtoBody18.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "StartStopAnimationUnit_Sensor"
ROUTE58.fromField = "touchTime"
ROUTE58.toNode = "Main_Clock"
ROUTE58.toField = "set_startTime"

ProtoBody18.children.append(ROUTE58)

ProtoDeclare8.ProtoBody = ProtoBody18

Scene7.children.append(ProtoDeclare8)
ScalarInterpolator59 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinBlink")
ScalarInterpolator59.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator59.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator59)
ScalarInterpolator60 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinBrowLowerer")
ScalarInterpolator60.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator60.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator60)
ScalarInterpolator61 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinCheekPuffer")
ScalarInterpolator61.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator61.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator61)
ScalarInterpolator62 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinCheekRaiser")
ScalarInterpolator62.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator62.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator62)
ScalarInterpolator63 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinChinRaiser")
ScalarInterpolator63.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator63.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator63)
ScalarInterpolator64 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinDimpler")
ScalarInterpolator64.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator64.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator64)
ScalarInterpolator65 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinEyesClosed")
ScalarInterpolator65.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator65.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator65)
ScalarInterpolator66 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinInnerBrowRaiser")
ScalarInterpolator66.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator66.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator66)
ScalarInterpolator67 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinJawDrop")
ScalarInterpolator67.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator67.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator67)
ScalarInterpolator68 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLidDroop")
ScalarInterpolator68.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator68.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator68)
ScalarInterpolator69 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLidTightener")
ScalarInterpolator69.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator69.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator69)
ScalarInterpolator70 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipCornerDepressor")
ScalarInterpolator70.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator70.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator70)
ScalarInterpolator71 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipCornerPuller")
ScalarInterpolator71.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator71.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator71)
ScalarInterpolator72 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipFunneler")
ScalarInterpolator72.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator72.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator72)
ScalarInterpolator73 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipPressor")
ScalarInterpolator73.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator73.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator73)
ScalarInterpolator74 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipPuckerer")
ScalarInterpolator74.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator74.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator74)
ScalarInterpolator75 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipsPart")
ScalarInterpolator75.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator75.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator75)
ScalarInterpolator76 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipStretcher")
ScalarInterpolator76.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator76.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator76)
ScalarInterpolator77 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipSuck")
ScalarInterpolator77.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator77.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator77)
ScalarInterpolator78 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLipTightener")
ScalarInterpolator78.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator78.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator78)
ScalarInterpolator79 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinLowerLipDepressor")
ScalarInterpolator79.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator79.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator79)
ScalarInterpolator80 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinMouthStretch")
ScalarInterpolator80.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator80.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator80)
ScalarInterpolator81 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinNasolabialDeepener")
ScalarInterpolator81.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator81.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator81)
ScalarInterpolator82 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinNoseWrinkler")
ScalarInterpolator82.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator82.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator82)
ScalarInterpolator83 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinOuterBrowRaiser")
ScalarInterpolator83.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator83.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator83)
ScalarInterpolator84 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinSlit")
ScalarInterpolator84.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator84.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator84)
ScalarInterpolator85 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinSquint")
ScalarInterpolator85.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator85.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator85)
ScalarInterpolator86 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinUpperLidRaiser")
ScalarInterpolator86.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator86.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator86)
ScalarInterpolator87 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinUpperLipRaiser")
ScalarInterpolator87.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator87.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator87)
ScalarInterpolator88 = x3d.ScalarInterpolator(DEF="AnimationAdapter_JinWink")
ScalarInterpolator88.key = [0,0.25,0.5,0.75,1]
ScalarInterpolator88.keyValue = [0,0.5,1,0.5,0]

Scene7.children.append(ScalarInterpolator88)
Transform89 = x3d.Transform()
Transform89.translation = [-37,-20,0]
Transform89.scale = [2,2,2]
HAnimHumanoid90 = x3d.HAnimHumanoid(DEF="hanim0_humanoid")
HAnimHumanoid90.name = "humanoid"
HAnimJoint91 = x3d.HAnimJoint(DEF="hanim0_humanoid_root")
HAnimJoint91.name = "humanoid_root"
HAnimSegment92 = x3d.HAnimSegment(DEF="hanim0_sacrum")
HAnimSegment92.name = "sacrum"

HAnimJoint91.children.append(HAnimSegment92)
HAnimJoint93 = x3d.HAnimJoint(DEF="hanim0_skullbase")
HAnimJoint93.name = "skullbase"
HAnimSegment94 = x3d.HAnimSegment(DEF="hanim_sacrum")
HAnimSegment94.name = "sacrum"
WorldInfo95 = x3d.WorldInfo()
WorldInfo95.title = "FacialAnimationComparisonScripts.x3d"

HAnimSegment94.children.append(WorldInfo95)
Background96 = x3d.Background()
Background96.skyColor = [(0.8, 0.9, 1)]

HAnimSegment94.children.append(Background96)
NavigationInfo97 = x3d.NavigationInfo()
NavigationInfo97.type = ["EXAMINE"]

HAnimSegment94.children.append(NavigationInfo97)

HAnimJoint93.children.append(HAnimSegment94)
HAnimSegment98 = x3d.HAnimSegment(DEF="hanim_Lower_teeth")
HAnimSegment98.name = "lower_teeth"
HAnimDisplacer99 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinChinRaiser")
HAnimDisplacer99.name = "lower_teeth_morphinterpolator"
HAnimDisplacer99.coordIndex = [15,16,17,18,19,20,21,22,28,29,30,37,38,39,40,45,50,51,52,53,54,55,56,57,79,80,81,82,83,84,85,86,107,108,109,110,111,112,113,114,152,153,154,155,156,157,158,159,160,166,167,168,169,170,171,181,182,183,184,185,186,187,188,209,210,211,212,213,214,215,216,220,234,239,240,241,242,243,244,245,246,250,264,275,276,277,278,284,285,286,287,296,297,298,299,301,302,311,312,313,314,315,316,317,318,322,335,340,341,342,343,344,345,346,347,351,368,369,370,371,372,373,374,375,379,392,403,404,405,406,412,413,414,415,423,424,425,426,427,429,430,439,440,441,442,443,444,445,446,450,463,468,469,470,471,472,473,474,475,479,496,497,498,499,500,501,502,503,507,520,539,543,544,545,546,547,548,549,550,555,556,557,563,564,570,571,572,573,585,586,587,588,589,594,595,596,597,598,599,600,601,604,605,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,640,665,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,727,728,729,730,731,732,733,734,756,757,758,759,760,761,762,763,767,780,808,810,811,813,814,815,816,817,818,819,820,821,822,832,834,835,836,837,838,839,840,841,852,853,854,855,856,857,858,863,864,865,866,867,868,869,870,874,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,922,924,952,953,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,984,985,1014,1015,1016,1017,1018,1019,1020,1021,1025,1039,1040]
HAnimDisplacer99.displacements = [(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.6103, 0.364),(0, 0.4491, 0.199),(0, 0.4097, 0.2),(0, 0.449, 0.199),(0, 0.4246, 0.199),(0, 0.0381, 0),(0, 0.4491, 0.2),(0, 0.4838, 0.2),(0, 0.0381, 0),(0, 0.4096, 0.2),(0, 0.4097, 0.199),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1268, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1267, 0),(0, 0.1864, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.3661, 0.199),(0, 0.3661, 0.2),(0, 0.3661, 0.199),(0, 0.366, 0.199),(0, 0.3661, 0.199),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.366, 0.199),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4491, 0.199),(0, 0.6103, 0.364),(0, 0.4491, 0.2),(0, 0.4097, 0.2),(0, 0.6103, 0.364),(0, 0.0381, 0),(0, 0.4096, 0.2),(0, 0.4097, 0.199),(0, 0.4097, 0.199),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.1864, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.3661, 0.2),(0, 0.3661, 0.199),(0, 0.3661, 0.199),(0, 0.366, 0.199),(0, 0.0381, 0),(0, 0.3661, 0.199),(0, 0.0381, 0),(0, 0.366, 0.199),(0, 0.0381, 0),(0, 0.1458, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.6497, 0.364),(0, 0.4491, 0.2),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.449, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4491, 0.1995),(0, 0.4491, 0.1995),(0, 0.1865, 0),(0, 0.0382, 0),(0, 0.366, 0.2),(0, 0.4097, 0.2),(0, 0.4096, 0.199),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.2207, 0),(0, 0.1865, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.25, 0.117),(0, 0.2501, 0.117),(0, 0.2501, 0.118),(0, 0.25, 0.118),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.2501, 0.117),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.6497, 0.364),(0, 0.4491, 0.2),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.449, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4491, 0.1995),(0, 0.4491, 0.1995),(0, 0.1865, 0),(0, 0.0382, 0),(0, 0.366, 0.2),(0, 0.4097, 0.2),(0, 0.4096, 0.199),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.2207, 0),(0, 0.1865, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.25, 0.117),(0, 0.2501, 0.117),(0, 0.2501, 0.118),(0, 0.25, 0.118),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.2501, 0.117),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.6497, 0.364),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.6843, 0.364),(0, 0.6103, 0.364),(0, 0.449, 0.2),(0, 0.4245, 0.199),(0, 0.0382, 0),(0, 0.4491, 0.2),(0, 0.449, 0.2),(0, 0.1977, 0.082),(0, 0.4491, 0.199),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.4096, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4097, 0.199),(0, 0.4097, 0.2),(0, 0.4246, 0.199),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.4097, 0.1994),(0, 0.4097, 0.1995),(0, 0.4246, 0.1995),(0, 0.4097, 0.2),(0, 0.0381, 0),(0, 0.3661, 0.2),(0, 0.4097, 0.199),(0, 0.4097, 0.2),(0, 0.4097, 0.2),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.4096, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.366, 0.199),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1869, 0),(0, 0.187, 0),(0, 0.1864, 0),(0, 0.1865, 0),(0, 0.187, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1267, 0),(0, 0.1268, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1268, 0),(0, 0.25, 0.117),(0, 0.25, 0.118),(0, 0.2501, 0.118),(0, 0.25, 0.118),(0, 0.2501, 0.118),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.2501, 0.117),(0, 0.3661, 0.2),(0, 0.3661, 0.199),(0, 0.366, 0.2),(0, 0.366, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.3661, 0.199),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.6497, 0.364),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.4491, 0.2),(0, 0.0382, 0),(0, 0.449, 0.2),(0, 0.6103, 0.364),(0, 0.4491, 0.199),(0, 0.4245, 0.199),(0, 0.0381, 0),(0, 0.4097, 0.199),(0, 0.0381, 0),(0, 0.4097, 0.2),(0, 0.4246, 0.199),(0, 0.4096, 0.2),(0, 0.4491, 0.199),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.4097, 0.1994),(0, 0.4097, 0.1995),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1864, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.4097, 0.199),(0, 0.3661, 0.2),(0, 0.3661, 0.2),(0, 0.4097, 0.2),(0, 0.4097, 0.2),(0, 0.3661, 0.199),(0, 0.4097, 0.2),(0, 0.366, 0.2),(0, 0.4097, 0.2),(0, 0.366, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.2036, 0.2),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.211, 0.199),(0, 0.0381, 0),(0, 0.3661, 0.199),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1864, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.25, 0.118),(0, 0.25, 0.117),(0, 0.2501, 0.118),(0, 0.25, 0.118),(0, 0.0381, 0),(0, 0.2501, 0.118),(0, 0.0381, 0),(0, 0.2501, 0.117),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1457, 0)]

HAnimSegment98.displacers.append(HAnimDisplacer99)
HAnimDisplacer100 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinJawDrop")
HAnimDisplacer100.name = "lower_teeth_morphinterpolator"
HAnimDisplacer100.coordIndex = [157]
HAnimDisplacer100.displacements = [(0, -0.2991, 0)]

HAnimSegment98.displacers.append(HAnimDisplacer100)
HAnimDisplacer101 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer101.name = "lower_teeth_morphinterpolator"
HAnimDisplacer101.coordIndex = [1,18,29,30,42,123,157,158,160,207,208,229,264,277,328,334,376,405,456,462,494,504,506,516,543,547,548,564,608,631,649,665,773,779,814,820,821,894,937,944,1012,1013,1034,1039]
HAnimDisplacer101.displacements = [(-0.791, 0, 0),(0, -0.2501, 0),(0, -0.2497, 0.093),(0, -0.2496, 0.093),(-0.745, 0, 0),(-0.751, 0, 0),(0, -0.2501, 0),(0, -0.2497, 0.2),(0, -0.2495, 0),(0.477, 0, 0.3911),(0.473, 0, 0.392),(0.475, 0, 0.3911),(0, 0, 0.322),(0, -0.2496, 0.092),(-0.77, 0, 0),(-0.77, 0, 0),(0.46, 0, 0.126),(0, -0.2496, 0.092),(0.817, 0, 0),(0.817, 0, 0),(0.49, 0, 0.3913),(-0.454, 0, 0.069),(0, 0, 0.068),(0.482, 0, 0.3911),(0, -0.2496, 0.093),(0, -0.2497, 0.799),(0, -0.2497, 0),(0, -0.2497, 0.092),(-0.77, 0, 0),(-0.1539, 0, 0.362),(-0.752, 0, 0),(-0.0413, 0, 0.436),(-0.769, 0, 0),(-0.77, 0, 0),(0, -0.2496, 0.093),(0, -0.2497, 0),(0, -0.2497, 0.092),(0.49, 0, 0.3916),(0.817, 0, 0),(0.482, 0, 0.3911),(0.477, 0, 0.3911),(0.473, 0, 0.392),(0.475, 0, 0.3911),(0, 0, 0.322)]

HAnimSegment98.displacers.append(HAnimDisplacer101)
HAnimDisplacer102 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinLipStretcher")
HAnimDisplacer102.name = "lower_teeth_morphinterpolator"
HAnimDisplacer102.coordIndex = [4,7,43,44,67,105,106,124,127,128,134,175,265,267,269,290,291,292,309,331,356,366,388,419,420,437,459,516,523,525,527,529,533,577,578,592,593,611,612,650,657,658,725,726,744,747,748,754,776,782,789,848,849,851,894,944]
HAnimDisplacer102.displacements = [(0.83, -0.0298, -0.5726),(0.794, -0.0618, -0.3448),(0.784, -0.01, -0.3392),(0.817, 0.0217, -0.565),(0.763, 0.1305, -0.2932),(0.804, 0.0523, -0.5909),(0.798, 0.0769, -0.766),(0.764, 0.0129, -0.31),(0.78, 0.0205, -0.3648),(0.801, 0.0441, -0.5324),(-0.905, -0.0298, -0.5726),(-0.892, 0.0217, -0.565),(0.832, -0.0886, -0.704),(0.82, -0.1219, -0.4674),(0.755, -0.1527, -0.2479),(0.752, -0.0405, -0.2335),(0.816, -0.0099, -0.4522),(0.828, 0.023, -0.686),(0.825, 0.0427, -0.682),(0.812, 0.0101, -0.45),(0.746, 0.1387, -0.2104),(0.824, 0.1239, -0.67),(0.812, 0.0913, -0.4386),(-0.891, -0.0099, -0.4522),(-0.903, 0.023, -0.686),(-0.9, 0.0427, -0.682),(-0.888, 0.0101, -0.45),(-0.887, 0.0913, -0.4386),(0.831, -0.1055, -0.5833),(0.83, -0.013, -0.693),(0.795, -0.1377, -0.3552),(0.819, -0.0461, -0.4571),(0.754, -0.077, -0.2375),(0.814, 0.0034, -0.4507),(0.825, 0.0361, -0.683),(0.792, -0.0255, -0.3404),(0.827, 0.0064, -0.5675),(0.804, 0.0303, -0.5942),(0.798, 0.055, -0.769),(0.765, -0.0092, -0.3132),(0.781, -0.0015, -0.3679),(0.801, 0.0221, -0.5362),(0.804, 0.1116, -0.5824),(0.797, 0.1361, -0.758),(0.764, 0.0721, -0.3016),(0.78, 0.0798, -0.3567),(0.801, 0.1033, -0.5244),(0.824, 0.0647, -0.678),(0.812, 0.0321, -0.4469),(-0.905, -0.013, -0.693),(-0.894, -0.0461, -0.4571),(-0.902, 0.0064, -0.5675),(-0.889, 0.0034, -0.4507),(-0.9, 0.0361, -0.683),(-0.899, 0.0647, -0.678),(-0.887, 0.0321, -0.4469)]

HAnimSegment98.displacers.append(HAnimDisplacer102)
HAnimDisplacer103 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer103.name = "lower_teeth_morphinterpolator"
HAnimDisplacer103.coordIndex = [18,157]
HAnimDisplacer103.displacements = [(0, -0.2691, 0),(0, -0.2691, 0)]

HAnimSegment98.displacers.append(HAnimDisplacer103)
HAnimDisplacer104 = x3d.HAnimDisplacer(DEF="Lower_teeth_MorphInterpolator_JinMouthStretch")
HAnimDisplacer104.name = "lower_teeth_morphinterpolator"
HAnimDisplacer104.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,163,164,165,166,167,168,169,170,171,172,173,174,175,177,178,179,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,207,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,234,236,237,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,439,440,441,442,443,444,445,446,447,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,464,465,466,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,576,577,578,579,580,581,582,583,584,585,586,587,588,589,590,591,592,593,594,595,596,597,598,599,600,601,602,603,604,605,606,607,608,609,610,611,612,613,614,615,616,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,633,634,635,636,637,638,639,640,641,642,643,644,645,646,647,648,649,650,651,652,653,654,655,656,657,658,659,660,661,662,663,664,665,666,667,668,669,670,671,672,673,674,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,691,692,693,694,695,696,697,698,699,700,701,702,703,704,705,706,707,708,709,710,711,712,713,714,715,716,717,718,719,720,721,722,723,724,725,726,727,728,729,730,731,732,733,734,735,736,737,738,739,740,741,742,743,744,745,746,747,748,749,750,751,752,753,754,755,756,757,758,759,760,761,762,763,764,765,766,767,768,769,770,771,772,773,774,775,776,777,778,779,780,781,782,783,784,786,787,788,789,790,791,792,793,794,795,796,797,798,799,800,801,802,803,804,805,806,807,808,809,810,811,812,813,814,815,816,817,818,819,820,821,822,823,824,826,827,828,829,830,831,832,833,834,835,836,837,838,839,840,841,842,843,844,845,846,847,848,849,851,852,853,854,855,856,857,858,859,860,861,863,864,865,866,867,868,869,870,871,872,873,874,875,876,877,878,879,880,881,882,883,884,885,886,887,888,890,891,892,894,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,916,917,918,919,920,921,922,923,924,925,926,927,928,929,930,931,932,933,934,935,936,937,938,939,940,941,942,943,944,945,946,947,948,949,950,953,954,955,957,958,959,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,978,979,980,981,982,983,984,985,986,987,988,989,990,991,992,993,994,995,996,997,998,999,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1012,1014,1015,1016,1017,1018,1019,1020,1021,1022,1023,1024,1025,1026,1027,1028,1029,1030,1031,1032,1033,1034,1035,1036,1037,1039,1040]
HAnimDisplacer104.displacements = [(0, -0.1065, -0.186),(0, -0.0545, -0.087),(0, -0.0583, -0.078),(0, -0.704, -0.3611),(0, -0.7206, -0.2676),(0, -0.7339, -0.2231),(0, -0.9615, -0.6048),(0, -1.0512, -0.4836),(0, -1.0466, -0.4324),(0, -1.1908, -0.8444),(0, -1.3165, -0.7061),(0, -1.2484, -0.6481),(0, -1.3539, -1.0388),(0, -1.5825, -0.848),(0, -1.5406, -0.7622),(0, -1.505, -1.1029),(0, -1.7601, -0.9216),(0, -1.7036, -0.8295),(0, -1.6201, -1.1436),(0, -1.8417, -0.9553),(0, -1.7781, -0.8606),(0, -1.8625, -0.9637),(0, -1.795, -0.8681),(0, -0.0577, -0.08),(0, -0.5348, -0.232),(0, -0.9055, -0.4015),(0, -1.1743, -0.6248),(0, -1.3637, -0.8192),(0, -1.5099, -0.8797),(0, -1.5768, -0.9072),(0, -1.5921, -0.9136),(0, -0.0576, -0.078),(0, -0.0591, -0.078),(0, -0.7415, -0.2084),(0, -1.055, -0.4173),(0, -1.2974, -0.642),(0, -1.5692, -0.7484),(0, -1.7298, -0.815),(0, -1.8046, -0.8452),(0, -1.8659, -0.874),(0, -1.7874, -0.8416),(0, -1.615, -0.7701),(0, -1.3274, -0.6534),(0, -1.0777, -0.427),(0, -0.7467, -0.213),(0, -0.1553, 0.015),(0, -0.0644, -0.042),(0, -0.7664, -0.033),(0, -0.7689, -0.0339),(0, -0.0634, -0.042),(0, -1.9059, -0.637),(0, -1.9159, -0.641),(0, -1.9651, -0.662),(0, -1.9527, -0.657),(0, -1.9403, -0.651),(0, -1.8842, -0.6281),(0, -1.8406, -0.6099),(0, -1.8942, -0.6329),(0, -1.8527, -0.6155),(0, -1.7298, -0.5639),(0, -1.6929, -0.5485),(0, -1.8105, -0.5972),(0, -1.6682, -0.5383),(0, -1.3949, -0.5177),(0, -1.355, -0.4956),(0, -1.6322, -0.5233),(0, -1.321, -0.4833),(0, -1.1574, -0.279),(0, -1.1363, -0.2721),(0, -1.318, -0.4939),(0, -1.0967, -0.2592),(0, -0.8375, -0.0573),(0, -0.8302, -0.0548),(0, -1.0795, -0.2535),(0, -0.0637, -0.046),(0, -0.0703, -0.039),(0, -0.7482, -0.002),(0, -0.7489, -0.0016),(0, -0.0697, -0.039),(0, -1.9268, -0.611),(0, -1.9345, -0.614),(0, -1.9675, -0.628),(0, -1.9591, -0.625),(0, -1.9375, -0.616),(0, -1.8976, -0.599),(0, -1.8667, -0.5866),(0, -1.9067, -0.603),(0, -1.8414, -0.5763),(0, -1.7521, -0.5397),(0, -1.7269, -0.5285),(0, -1.8129, -0.5641),(0, -1.6438, -0.4937),(0, -1.4178, -0.5037),(0, -1.4002, -0.4982),(0, -1.6176, -0.4833),(0, -1.3245, -0.4748),(0, -1.1841, -0.2643),(0, -1.1681, -0.2591),(0, -1.3076, -0.4695),(0, -1.0766, -0.229),(0, -0.8763, -0.0746),(0, -0.8694, -0.0722),(0, -1.0656, -0.2254),(0, -0.0596, -0.069),(0, -0.7203, -0.1696),(0, -0.7228, -0.1699),(0, -0.0585, -0.068),(0, -1.8312, -0.8135),(0, -1.8412, -0.8172),(0, -1.8935, -0.839),(0, -1.8812, -0.8341),(0, -1.8687, -0.8294),(0, -1.8127, -0.8059),(0, -1.7649, -0.7855),(0, -1.8205, -0.809),(0, -1.782, -0.7924),(0, -1.6566, -0.7409),(0, -1.6173, -0.725),(0, -1.7367, -0.7736),(0, -1.5957, -0.7161),(0, -1.3589, -0.6344),(0, -1.3327, -0.6263),(0, -1.5581, -0.7005),(0, -1.3074, -0.6184),(0, -1.1149, -0.4072),(0, -1.0935, -0.4002),(0, -1.2408, -0.603),(0, -1.0551, -0.3876),(0, -0.7904, -0.1935),(0, -0.783, -0.1908),(0, -1.0471, -0.3314),(0, -0.0586, -0.075),(0, -0.1083, -0.177),(0, 0, -0.066),(0, -0.7206, -0.2676),(0, -0.704, -0.3611),(0, -0.5348, -0.232),(0, -0.7339, -0.2231),(0, -1.0512, -0.4836),(0, -0.9615, -0.6048),(0, -0.9055, -0.4015),(0, -1.0466, -0.4324),(0, -1.3165, -0.7061),(0, -1.1908, -0.8444),(0, -1.1743, -0.6248),(0, -1.2484, -0.6481),(0, -1.5825, -0.848),(0, -1.3539, -1.0388),(0, -1.3637, -0.8192),(0, -1.5406, -0.7622),(0, -1.7601, -0.9216),(0, -1.505, -1.1029),(0, -1.5099, -0.8797),(0, -1.7036, -0.8295),(0, -1.8417, -0.9553),(0, -1.6201, -1.1436),(0, -1.5768, -0.9072),(0, -1.7781, -0.8606),(0, -1.6495, -1.1546),(0, -0.7415, -0.2084),(0, -1.055, -0.4173),(0, -1.2974, -0.642),(0, -1.5692, -0.7484),(0, -1.7298, -0.815),(0, -1.8046, -0.8452),(0, -1.8191, -0.8516),(0, -1.8659, -0.874),(0, -1.8834, -0.8815),(0, -1.7874, -0.8416),(0, -1.615, -0.7701),(0, -1.3274, -0.6534),(0, -1.0777, -0.427),(0, -0.7467, -0.213),(0, 0.0049, -0.039),(0, -0.7482, -0.002),(0, -0.7489, -0.0016),(0, -1.9268, -0.611),(0, -1.9345, -0.614),(0, -1.9675, -0.628),(0, -1.9591, -0.625),(0, -1.9375, -0.616),(0, -1.8976, -0.599),(0, -1.8667, -0.5866),(0, -1.9067, -0.603),(0, -1.8414, -0.5763),(0, -1.7521, -0.5397),(0, -1.7269, -0.5285),(0, -1.8129, -0.5641),(0, -1.6438, -0.4937),(0, -1.4178, -0.5037),(0, -1.4002, -0.4982),(0, -1.6176, -0.4833),(0, -1.3245, -0.4748),(0, -1.1841, -0.2643),(0, -1.1681, -0.2591),(0, -1.3076, -0.4695),(0, -1.0766, -0.229),(0, -0.9004, -0.0791),(0, -0.8935, -0.0766),(0, -1.0656, -0.2254),(0, -0.7203, -0.1696),(0, -0.7228, -0.1699),(0, -1.8412, -0.8172),(0, -1.8312, -0.8135),(0, -1.8935, -0.839),(0, -1.8812, -0.8341),(0, -1.8127, -0.8059),(0, -1.8687, -0.8294),(0, -1.7649, -0.7855),(0, -1.8205, -0.809),(0, -1.6566, -0.7409),(0, -1.782, -0.7924),(0, -1.6173, -0.725),(0, -1.7367, -0.7736),(0, -1.3589, -0.6344),(0, -1.5957, -0.7161),(0, -1.3327, -0.6263),(0, -1.5581, -0.7005),(0, -1.1149, -0.4072),(0, -1.3074, -0.6184),(0, -1.0935, -0.4002),(0, -1.2408, -0.603),(0, -0.7904, -0.1935),(0, -1.0551, -0.3876),(0, -0.783, -0.1908),(0, -1.0471, -0.3314),(0, -0.1433, 0.025),(0, -0.7664, -0.033),(0, -0.7689, -0.0339),(0, -1.9059, -0.637),(0, -1.9159, -0.641),(0, -1.9651, -0.662),(0, -1.9527, -0.657),(0, -1.9403, -0.651),(0, -1.8842, -0.6281),(0, -1.8406, -0.6099),(0, -1.8942, -0.6329),(0, -1.8527, -0.6155),(0, -1.7298, -0.5639),(0, -1.6929, -0.5485),(0, -1.8105, -0.5972),(0, -1.6682, -0.5383),(0, -1.3949, -0.5177),(0, -1.355, -0.4956),(0, -1.6322, -0.5233),(0, -1.321, -0.4833),(0, -1.1574, -0.279),(0, -1.1363, -0.2721),(0, -1.318, -0.4939),(0, -1.0967, -0.2592),(0, -0.8616, -0.0618),(0, -0.8542, -0.0593),(0, -1.0795, -0.2535),(0, -0.1561, 0.05),(0, -0.1556, 0.05),(0, -0.4869, -0.267),(0, -0.494, -0.212),(0, -0.8772, -0.4194),(0, -0.8773, -0.3752),(0, -1.1631, -0.6652),(0, -1.1733, -0.4664),(0, -1.3976, -0.9042),(0, -1.3776, -0.7285),(0, -1.5806, -0.9898),(0, -1.61, -0.8652),(0, -1.7302, -1.047),(0, -1.7222, -0.9111),(0, -1.8119, -1.076),(0, -1.7644, -0.9289),(0, -0.4938, -0.17),(0, -0.8728, -0.3493),(0, -1.148, -0.5188),(0, -1.3968, -0.6735),(0, -1.6487, -0.7827),(0, -1.7626, -0.829),(0, -1.8048, -0.8467),(0, -1.8764, -0.9055),(0, -1.8295, -0.8866),(0, -1.7057, -0.8351),(0, -1.4634, -0.7346),(0, -1.1956, -0.5538),(0, -0.9296, -0.3747),(0, -0.5003, -0.194),(0, -0.0662, -0.087),(0, -0.7097, -0.2823),(0, -0.887, -0.3924),(0, -1.0702, -0.5197),(0, -1.2008, -0.6248),(0, -1.2362, -0.7165),(0, -1.2957, -0.7299),(0, -0.5636, -0.023),(0, -1.9467, -0.62),(0, -1.9021, -0.602),(0, -1.7838, -0.5524),(0, -1.5453, -0.4535),(0, -1.2347, -0.3714),(0, -0.9698, -0.1732),(0, -0.4961, -0.167),(0, -0.7461, -0.2067),(0, -0.4946, -0.167),(0, -0.0517, -0.073),(0, -1.8129, -0.8439),(0, -1.8551, -0.8619),(0, -1.8829, -0.8734),(0, -1.8406, -0.8555),(0, -1.8359, -0.8539),(0, -1.7659, -0.8248),(0, -1.7697, -0.8265),(0, -1.8406, -0.8556),(0, -1.7128, -0.803),(0, -1.6029, -0.7577),(0, -1.6561, -0.7789),(0, -1.766, -0.8252),(0, -1.4721, -0.7034),(0, -1.3129, -0.6442),(0, -1.3988, -0.6707),(0, -1.603, -0.7573),(0, -1.2009, -0.5337),(0, -1.0686, -0.4187),(0, -1.1504, -0.5154),(0, -1.313, -0.6441),(0, -0.9394, -0.3468),(0, -0.7464, -0.2064),(0, -0.8729, -0.3486),(0, -1.0683, -0.4185),(0, -0.1426, 0.02),(0, -0.5403, -0.019),(0, -0.8071, -0.0218),(0, -0.5629, -0.023),(0, -0.0584, -0.036),(0, -1.9168, -0.607),(0, -1.9545, -0.623),(0, -1.9766, -0.633),(0, -1.9399, -0.616),(0, -1.9306, -0.613),(0, -1.8661, -0.5866),(0, -1.8737, -0.5897),(0, -1.9382, -0.616),(0, -1.8083, -0.5621),(0, -1.7037, -0.5196),(0, -1.7583, -0.5417),(0, -1.8629, -0.5853),(0, -1.57, -0.4635),(0, -1.3486, -0.4658),(0, -1.5213, -0.4435),(0, -1.699, -0.5172),(0, -1.2489, -0.3758),(0, -1.1276, -0.2458),(0, -1.2203, -0.3669),(0, -1.3442, -0.4642),(0, -0.9778, -0.1758),(0, -0.8115, -0.0233),(0, -0.962, -0.1706),(0, -1.1232, -0.2444),(0, -0.5187, -0.092),(0, -0.7781, -0.1126),(0, -0.5171, -0.091),(0, -0.055, -0.054),(0, -1.8655, -0.7234),(0, -1.9052, -0.7402),(0, -1.9314, -0.7505),(0, -1.8907, -0.7337),(0, -1.8855, -0.7309),(0, -1.817, -0.7028),(0, -1.8223, -0.705),(0, -1.8907, -0.7341),(0, -1.7623, -0.6803),(0, -1.6539, -0.6353),(0, -1.7078, -0.658),(0, -1.8162, -0.703),(0, -1.5224, -0.581),(0, -1.3379, -0.5637),(0, -1.4247, -0.5904),(0, -1.6531, -0.6349),(0, -1.2254, -0.4532),(0, -1.098, -0.3301),(0, -1.2082, -0.3781),(0, -1.3382, -0.5635),(0, -0.9503, -0.26),(0, -0.7789, -0.1129),(0, -1.0301, -0.2431),(0, -1.0972, -0.3299),(0, -0.146, 0.039),(0, -0.5, -0.247),(0, -0.482, -0.154),(0, -0.8772, -0.4194),(0, -0.8773, -0.3752),(0, -1.1631, -0.6652),(0, -1.1733, -0.4664),(0, -1.3976, -0.9042),(0, -1.3776, -0.7285),(0, -1.5806, -0.9898),(0, -1.61, -0.8652),(0, -1.7302, -1.047),(0, -1.7222, -0.9111),(0, -1.8119, -1.076),(0, -1.7644, -0.9289),(0, -0.4756, -0.057),(0, -0.8728, -0.3493),(0, -1.148, -0.5188),(0, -1.3968, -0.6735),(0, -1.6487, -0.7827),(0, -1.7626, -0.829),(0, -1.8048, -0.8467),(0, -1.8764, -0.9055),(0, -1.8295, -0.8866),(0, -1.7057, -0.8351),(0, -1.4634, -0.7346),(0, -1.1956, -0.5538),(0, -0.9296, -0.3747),(0, -0.4859, -0.074),(0, -0.2957, -0.074),(0, -0.7097, -0.2823),(0, -0.887, -0.3924),(0, -1.0702, -0.5197),(0, -1.2008, -0.6248),(0, -1.2362, -0.7165),(0, -1.2957, -0.7299),(0, -0.4989, 0.039),(0, -1.9467, -0.62),(0, -1.9021, -0.602),(0, -1.7838, -0.5524),(0, -1.5453, -0.4535),(0, -1.2347, -0.3714),(0, -0.9698, -0.1732),(0, -0.4769, -0.056),(0, -0.7461, -0.2067),(0, -0.4759, -0.056),(0, -1.8129, -0.8439),(0, -1.8551, -0.8619),(0, -1.8829, -0.8734),(0, -1.8406, -0.8555),(0, -1.8359, -0.8539),(0, -1.7659, -0.8248),(0, -1.7697, -0.8265),(0, -1.8406, -0.8556),(0, -1.7128, -0.803),(0, -1.6029, -0.7577),(0, -1.6561, -0.7789),(0, -1.766, -0.8252),(0, -1.4721, -0.7034),(0, -1.3129, -0.6442),(0, -1.3988, -0.6707),(0, -1.603, -0.7573),(0, -1.2009, -0.5337),(0, -1.0686, -0.4187),(0, -1.1504, -0.5154),(0, -1.313, -0.6441),(0, -0.9394, -0.3468),(0, -0.7464, -0.2064),(0, -0.8729, -0.3486),(0, -1.0683, -0.4185),(0, -0.4994, 0.039),(0, -0.8071, -0.0218),(0, -0.4985, 0.04),(0, -1.9168, -0.607),(0, -1.9545, -0.623),(0, -1.9766, -0.633),(0, -1.9399, -0.616),(0, -1.9306, -0.613),(0, -1.8661, -0.5866),(0, -1.8737, -0.5897),(0, -1.9382, -0.616),(0, -1.8083, -0.5621),(0, -1.7037, -0.5196),(0, -1.7583, -0.5417),(0, -1.8629, -0.5853),(0, -1.57, -0.4635),(0, -1.3486, -0.4658),(0, -1.5213, -0.4435),(0, -1.699, -0.5172),(0, -1.2489, -0.3758),(0, -1.1276, -0.2458),(0, -1.2203, -0.3669),(0, -1.3442, -0.4642),(0, -0.9778, -0.1758),(0, -0.8115, -0.0233),(0, -0.962, -0.1706),(0, -1.1232, -0.2444),(0, -0.4884, -0.008),(0, -0.7781, -0.1126),(0, -0.4874, -0.007),(0, -1.8655, -0.7234),(0, -1.9052, -0.7402),(0, -1.9314, -0.7505),(0, -1.8907, -0.7337),(0, -1.8855, -0.7309),(0, -1.817, -0.7028),(0, -1.8223, -0.705),(0, -1.8907, -0.7341),(0, -1.7623, -0.6803),(0, -1.6539, -0.6353),(0, -1.7078, -0.658),(0, -1.8162, -0.703),(0, -1.5224, -0.581),(0, -1.3379, -0.5637),(0, -1.4247, -0.5904),(0, -1.6531, -0.6349),(0, -1.2254, -0.4532),(0, -1.098, -0.3301),(0, -1.2082, -0.3781),(0, -1.3382, -0.5635),(0, -0.9503, -0.26),(0, -0.7789, -0.1129),(0, -1.0301, -0.2431),(0, -1.0972, -0.3299),(0, -0.146, 0.039),(0, -0.1182, -0.136),(0, -0.0579, -0.078),(0, -0.7102, -0.3113),(0, -0.4881, -0.318),(0, -0.4975, -0.223),(0, -0.5047, -0.184),(0, -1.0276, -0.5587),(0, -0.8639, -0.4673),(0, -0.8872, -0.3755),(0, -0.8831, -0.3509),(0, -1.2938, -0.7813),(0, -1.0861, -0.7078),(0, -1.1858, -0.59),(0, -1.1422, -0.5339),(0, -1.4918, -0.9503),(0, -1.2744, -0.9987),(0, -1.4433, -0.79),(0, -1.3904, -0.6871),(0, -1.6613, -1.022),(0, -1.432, -1.0735),(0, -1.6863, -0.8903),(0, -1.6366, -0.8024),(0, -1.7848, -1.0661),(0, -1.5685, -1.126),(0, -1.811, -0.9418),(0, -1.7497, -0.8489),(0, -1.8166, -1.0783),(0, -1.6457, -1.1525),(0, -1.8578, -0.9613),(0, -1.792, -0.8667),(0, -0.7171, -0.2649),(0, -1.0242, -0.4788),(0, -1.2356, -0.6897),(0, -1.5139, -0.8249),(0, -1.676, -0.8926),(0, -1.7506, -0.9228),(0, -1.7685, -0.9303),(0, -0.4929, -0.221),(0, -0.7897, -0.3909),(0, -1.068, -0.5294),(0, -1.3198, -0.6671),(0, -1.477, -0.8697),(0, -1.58, -0.9127),(0, -1.6193, -0.9286),(0, -0.4951, -0.17),(0, -0.8728, -0.3491),(0, -1.1494, -0.5181),(0, -1.3979, -0.6731),(0, -1.6524, -0.7825),(0, -1.7671, -0.8296),(0, -1.8093, -0.8471),(0, -1.881, -0.884),(0, -1.834, -0.8647),(0, -1.71, -0.8133),(0, -1.4695, -0.7138),(0, -1.1994, -0.5404),(0, -0.9361, -0.3561),(0, -0.4923, -0.173),(0, -0.0564, -0.081),(0, -0.0588, -0.078),(0, -0.7392, -0.2088),(0, -1.0519, -0.4172),(0, -1.295, -0.6421),(0, -1.5518, -0.742),(0, -1.7155, -0.8101),(0, -1.791, -0.8416),(0, -1.8078, -0.8482),(0, -1.8602, -0.8993),(0, -1.7795, -0.865),(0, -1.6027, -0.7922),(0, -1.3264, -0.6698),(0, -1.0732, -0.4441),(0, -0.74, -0.2305),(0, -0.1465, -0.05),(0, -0.506, -0.232),(0, -0.7291, -0.2822),(0, -0.8957, -0.3897),(0, -1.063, -0.5088),(0, -1.1763, -0.4855),(0, -1.1831, -0.6108),(0, -1.19, -0.613),(0, -0.0585, -0.078),(0, -0.7456, -0.2093),(0, -1.8392, -0.8578),(0, -1.7646, -0.8272),(0, -1.6015, -0.7603),(0, -1.3125, -0.6458),(0, -1.0679, -0.4204),(0, -0.0587, -0.074),(0, -0.7116, -0.1949),(0, -0.7142, -0.1962),(0, -0.0576, -0.074),(0, -0.535, -0.037),(0, -0.8007, -0.0447),(0, -0.5574, -0.042),(0, -0.0574, -0.041),(0, -1.8167, -0.8455),(0, -1.8267, -0.8502),(0, -1.8796, -0.8719),(0, -1.8673, -0.867),(0, -1.9028, -0.6353),(0, -1.9419, -0.652),(0, -1.9665, -0.662),(0, -1.9274, -0.646),(0, -1.8559, -0.8623),(0, -1.7999, -0.8389),(0, -1.7514, -0.8186),(0, -1.806, -0.842),(0, -1.9205, -0.643),(0, -1.8536, -0.6154),(0, -1.8597, -0.6179),(0, -1.9265, -0.646),(0, -1.7682, -0.8262),(0, -1.6428, -0.7745),(0, -1.6037, -0.7579),(0, -1.7221, -0.8072),(0, -1.7983, -0.5927),(0, -1.6904, -0.5484),(0, -1.7452, -0.5703),(0, -1.852, -0.6146),(0, -1.5829, -0.7495),(0, -1.3522, -0.6562),(0, -1.3261, -0.6481),(0, -1.5445, -0.7331),(0, -1.5582, -0.493),(0, -1.3386, -0.4897),(0, -1.5082, -0.4724),(0, -1.689, -0.5467),(0, -1.3007, -0.6402),(0, -1.107, -0.4312),(0, -1.0854, -0.4241),(0, -1.2341, -0.6248),(0, -1.2432, -0.3952),(0, -1.1195, -0.2666),(0, -1.2141, -0.3862),(0, -1.3368, -0.489),(0, -1.0473, -0.4117),(0, -0.7817, -0.2192),(0, -0.7742, -0.2165),(0, -1.1332, -0.4157),(0, -0.9709, -0.1968),(0, -0.8026, -0.0454),(0, -0.955, -0.1917),(0, -1.1176, -0.266),(0, -0.1558, 0.05),(0, -0.0578, -0.079),(0, -0.5642, -0.023),(0, -0.7735, -0.0103),(0, -0.5631, -0.023),(0, -0.0651, -0.037),(0, -0.0654, -0.038),(0, -0.7731, -0.0101),(0, -0.7757, -0.011),(0, -0.0644, -0.037),(0, -1.9252, -0.611),(0, -1.9521, -0.622),(0, -1.9682, -0.628),(0, -1.9414, -0.617),(0, -1.919, -0.608),(0, -1.9291, -0.612),(0, -1.9751, -0.631),(0, -1.9637, -0.627),(0, -1.9221, -0.61),(0, -1.8753, -0.5904),(0, -1.8822, -0.5927),(0, -1.929, -0.612),(0, -1.9514, -0.621),(0, -1.8961, -0.599),(0, -1.8536, -0.581),(0, -1.9074, -0.604),(0, -1.8014, -0.5594),(0, -1.7245, -0.5282),(0, -1.7652, -0.5444),(0, -1.8421, -0.5766),(0, -1.8628, -0.5848),(0, -1.7415, -0.5351),(0, -1.706, -0.5205),(0, -1.8229, -0.5683),(0, -1.563, -0.4608),(0, -1.3896, -0.495),(0, -1.5279, -0.4463),(0, -1.6599, -0.5013),(0, -1.6783, -0.5083),(0, -1.4013, -0.4985),(0, -1.3651, -0.4717),(0, -1.6439, -0.4939),(0, -1.2452, -0.3747),(0, -1.1554, -0.2549),(0, -1.2241, -0.3682),(0, -1.3124, -0.4528),(0, -1.3284, -0.4585),(0, -1.1651, -0.2581),(0, -1.1443, -0.2512),(0, -1.3235, -0.4745),(0, -0.9757, -0.1751),(0, -0.8434, -0.0342),(0, -0.9641, -0.1713),(0, -1.0933, -0.2345),(0, -1.1026, -0.2376),(0, -0.8461, -0.0351),(0, -0.8389, -0.0327),(0, -1.0857, -0.232),(0, -0.0621, -0.056),(0, -0.7436, -0.1011),(0, -0.7463, -0.1014),(0, -0.061, -0.055),(0, -1.8685, -0.7246),(0, -1.8785, -0.7284),(0, -1.9291, -0.7493),(0, -1.9168, -0.7444),(0, -1.9053, -0.7398),(0, -1.8493, -0.716),(0, -1.8032, -0.6976),(0, -1.8577, -0.7203),(0, -1.8176, -0.7037),(0, -1.6931, -0.6516),(0, -1.6555, -0.6362),(0, -1.7739, -0.6851),(0, -1.6322, -0.6269),(0, -1.3773, -0.5756),(0, -1.351, -0.5677),(0, -1.5955, -0.6114),(0, -1.3251, -0.5596),(0, -1.1362, -0.3426),(0, -1.1149, -0.3357),(0, -1.3003, -0.5519),(0, -1.0762, -0.323),(0, -0.814, -0.1249),(0, -0.8066, -0.1224),(0, -1.0589, -0.3173),(0, -0.0608, -0.062),(0, -0.5022, -0.147),(0, -0.7547, -0.1813),(0, -0.5007, -0.146),(0, -0.1449, 0.028),(0, -1.8273, -0.8116),(0, -1.8688, -0.8289),(0, -1.8958, -0.8398),(0, -1.8543, -0.8225),(0, -1.8488, -0.8203),(0, -1.7796, -0.7917),(0, -1.7851, -0.7941),(0, -1.8543, -0.8227),(0, -1.7257, -0.7701),(0, -1.6165, -0.7244),(0, -1.6696, -0.7469),(0, -1.7787, -0.7915),(0, -1.4859, -0.6701),(0, -1.3205, -0.6224),(0, -1.4064, -0.649),(0, -1.6167, -0.7245),(0, -1.2076, -0.5119),(0, -1.0766, -0.3946),(0, -1.1583, -0.4914),(0, -1.3197, -0.6223),(0, -0.9294, -0.3241),(0, -0.7552, -0.1818),(0, -0.9511, -0.3416),(0, -1.0761, -0.3945),(0, -0.1436, 0.025),(0, -0.0856, -0.139),(0, -0.488, -0.157),(0, -0.7102, -0.3113),(0, -0.4771, -0.317),(0, -0.4861, -0.156),(0, -0.7171, -0.2649),(0, -0.4886, -0.067),(0, -0.8872, -0.3755),(0, -1.0276, -0.5587),(0, -0.8639, -0.4673),(0, -0.7897, -0.3909),(0, -1.0242, -0.4788),(0, -0.8831, -0.3509),(0, -1.1858, -0.59),(0, -1.2938, -0.7813),(0, -1.0861, -0.7078),(0, -1.068, -0.5294),(0, -1.2356, -0.6897),(0, -1.1422, -0.5339),(0, -1.4433, -0.79),(0, -1.4918, -0.9503),(0, -1.2744, -0.9987),(0, -1.3198, -0.6671),(0, -1.5139, -0.8249),(0, -1.3904, -0.6871),(0, -1.6863, -0.8903),(0, -1.6613, -1.022),(0, -1.432, -1.0735),(0, -1.477, -0.8697),(0, -1.676, -0.8926),(0, -1.6366, -0.8024),(0, -1.811, -0.9418),(0, -1.7848, -1.0661),(0, -1.5685, -1.126),(0, -1.58, -0.9127),(0, -1.7506, -0.9228),(0, -1.7497, -0.8489),(0, -1.8578, -0.9613),(0, -1.6457, -1.1525),(0, -1.6193, -0.9286),(0, -1.792, -0.8667),(0, -0.7392, -0.2088),(0, -0.4764, -0.057),(0, -1.0519, -0.4172),(0, -0.8728, -0.3491),(0, -1.295, -0.6421),(0, -1.1494, -0.5181),(0, -1.5518, -0.742),(0, -1.3979, -0.6731),(0, -1.7155, -0.8101),(0, -1.6524, -0.7825),(0, -1.791, -0.8416),(0, -1.7671, -0.8296),(0, -1.8093, -0.8471),(0, -1.8602, -0.8993),(0, -1.881, -0.884),(0, -1.881, -0.9079),(0, -1.7795, -0.865),(0, -1.834, -0.8647),(0, -1.6027, -0.7922),(0, -1.71, -0.8133),(0, -1.3264, -0.6698),(0, -1.4695, -0.7138),(0, -1.0732, -0.4441),(0, -1.1994, -0.5404),(0, -0.74, -0.2305),(0, -0.9361, -0.3561),(0, -0.4748, -0.059),(0, -0.1465, -0.05),(0, -0.4914, -0.16),(0, -0.7291, -0.2822),(0, -0.8957, -0.3897),(0, -1.063, -0.5088),(0, -1.1763, -0.4855),(0, -1.1831, -0.6108),(0, -0.4993, 0.039),(0, -0.7735, -0.0103),(0, -0.4986, 0.039),(0, -1.9252, -0.611),(0, -1.9521, -0.622),(0, -1.9682, -0.628),(0, -1.9414, -0.617),(0, -1.9221, -0.61),(0, -1.8753, -0.5904),(0, -1.8822, -0.5927),(0, -1.929, -0.612),(0, -1.8014, -0.5594),(0, -1.7245, -0.5282),(0, -1.7652, -0.5444),(0, -1.8421, -0.5766),(0, -1.563, -0.4608),(0, -1.3896, -0.495),(0, -1.5279, -0.4463),(0, -1.6599, -0.5013),(0, -1.2452, -0.3747),(0, -1.1554, -0.2549),(0, -1.2241, -0.3682),(0, -1.3124, -0.4528),(0, -0.9757, -0.1751),(0, -0.8674, -0.0387),(0, -0.9641, -0.1713),(0, -1.0933, -0.2345),(0, -0.7116, -0.1949),(0, -0.48, -0.043),(0, -0.7456, -0.2093),(0, -0.7142, -0.1962),(0, -0.7547, -0.1813),(0, -0.4791, -0.042),(0, -1.8267, -0.8502),(0, -1.8273, -0.8116),(0, -1.8167, -0.8455),(0, -1.8537, -0.8641),(0, -1.8796, -0.8719),(0, -1.8688, -0.8289),(0, -1.8673, -0.867),(0, -1.8958, -0.8398),(0, -1.8392, -0.8578),(0, -1.8543, -0.8225),(0, -1.7999, -0.8389),(0, -1.8488, -0.8203),(0, -1.8559, -0.8623),(0, -1.7646, -0.8272),(0, -1.7514, -0.8186),(0, -1.7796, -0.7917),(0, -1.806, -0.842),(0, -1.7851, -0.7941),(0, -1.8543, -0.8227),(0, -1.6428, -0.7745),(0, -1.7257, -0.7701),(0, -1.7682, -0.8262),(0, -1.6015, -0.7603),(0, -1.6037, -0.7579),(0, -1.6165, -0.7244),(0, -1.7221, -0.8072),(0, -1.6696, -0.7469),(0, -1.7787, -0.7915),(0, -1.3522, -0.6562),(0, -1.4859, -0.6701),(0, -1.5829, -0.7495),(0, -1.3125, -0.6458),(0, -1.3261, -0.6481),(0, -1.3205, -0.6224),(0, -1.5445, -0.7331),(0, -1.4064, -0.649),(0, -1.6167, -0.7245),(0, -1.107, -0.4312),(0, -1.2076, -0.5119),(0, -1.3007, -0.6402),(0, -1.0679, -0.4204),(0, -1.0854, -0.4241),(0, -1.0766, -0.3946),(0, -1.2341, -0.6248),(0, -1.1583, -0.4914),(0, -1.3197, -0.6223),(0, -0.7817, -0.2192),(0, -0.9294, -0.3241),(0, -1.0473, -0.4117),(0, -0.7742, -0.2165),(0, -0.7552, -0.1818),(0, -1.1332, -0.4157),(0, -0.9511, -0.3416),(0, -1.0761, -0.3945),(0, -0.1423, 0.02),(0, -0.4967, 0.027),(0, -0.7731, -0.0101),(0, -0.8007, -0.0447),(0, -0.7757, -0.011),(0, -0.4957, 0.027),(0, -1.9028, -0.6353),(0, -1.9291, -0.612),(0, -1.919, -0.608),(0, -1.9419, -0.652),(0, -1.9751, -0.631),(0, -1.9665, -0.662),(0, -1.9637, -0.627),(0, -1.9274, -0.646),(0, -1.9205, -0.643),(0, -1.8961, -0.599),(0, -1.9514, -0.621),(0, -1.8536, -0.6154),(0, -1.8536, -0.581),(0, -1.8597, -0.6179),(0, -1.9074, -0.604),(0, -1.9265, -0.646),(0, -1.7983, -0.5927),(0, -1.7415, -0.5351),(0, -1.8628, -0.5848),(0, -1.6904, -0.5484),(0, -1.706, -0.5205),(0, -1.7452, -0.5703),(0, -1.8229, -0.5683),(0, -1.852, -0.6146),(0, -1.5582, -0.493),(0, -1.4013, -0.4985),(0, -1.6783, -0.5083),(0, -1.3386, -0.4897),(0, -1.3651, -0.4717),(0, -1.5082, -0.4724),(0, -1.6439, -0.4939),(0, -1.689, -0.5467),(0, -1.2432, -0.3952),(0, -1.1651, -0.2581),(0, -1.3284, -0.4585),(0, -1.1195, -0.2666),(0, -1.1443, -0.2512),(0, -1.2141, -0.3862),(0, -1.3235, -0.4745),(0, -1.3368, -0.489),(0, -0.9709, -0.1968),(0, -0.8702, -0.0396),(0, -1.1026, -0.2376),(0, -0.8026, -0.0454),(0, -0.863, -0.0372),(0, -0.955, -0.1917),(0, -1.0857, -0.232),(0, -1.1176, -0.266),(0, -0.7436, -0.1011),(0, -0.7463, -0.1014),(0, -1.8785, -0.7284),(0, -1.8685, -0.7246),(0, -1.9291, -0.7493),(0, -1.9168, -0.7444),(0, -1.8493, -0.716),(0, -1.9053, -0.7398),(0, -1.8032, -0.6976),(0, -1.8577, -0.7203),(0, -1.6931, -0.6516),(0, -1.8176, -0.7037),(0, -1.6555, -0.6362),(0, -1.7739, -0.6851),(0, -1.3773, -0.5756),(0, -1.6322, -0.6269),(0, -1.351, -0.5677),(0, -1.5955, -0.6114),(0, -1.1362, -0.3426),(0, -1.3251, -0.5596),(0, -1.1149, -0.3357),(0, -1.3003, -0.5519),(0, -0.814, -0.1249),(0, -1.0762, -0.323),(0, -0.8066, -0.1224),(0, -1.0589, -0.3173),(0, -0.1558, 0.05),(0, -0.1458, 0.039)]

HAnimSegment98.displacers.append(HAnimDisplacer104)
Coordinate105 = x3d.Coordinate(DEF="Lower_teeth_COORD_JinBlink")
Coordinate105.point = [(2.49, -0.346, -1.665),(2.488, 0.1468, -1.593),(1.904, 0.2897, -1.545),(2.499, -0.444, -0.9669),(2.786, 0.06917, -0.9244),(2.157, 0.2012, -0.9269),(2.398, -0.5365, -0.3089),(2.674, -0.03385, -0.1909),(2.131, 0.1021, -0.2568),(2.124, -0.6222, 0.3018),(2.368, -0.1295, 0.4901),(2.006, 0.01241, 0.3815),(1.712, -0.7021, 0.7777),(1.909, -0.2185, 1.124),(1.713, -0.0744, 0.9995),(1.197, -0.75, 1.101),(1.335, -0.2719, 1.504),(1.253, -0.1234, 1.348),(0.6088, -0.7719, 1.344),(0.679, -0.2963, 1.678),(0.6546, -0.1459, 1.508),(0, -0.3025, 1.722),(0, -0.151, 1.545),(1.901, 0.2634, -1.551),(1.93, 0.0002013, -1.034),(1.906, -0.1155, -0.4374),(1.794, -0.1957, 0.1341),(1.533, -0.2733, 0.6859),(1.121, -0.3171, 0.9981),(0.5859, -0.3372, 1.141),(0, -0.3419, 1.174),(2.405, 0.2839, -1.554),(1.988, 0.293, -1.533),(2.213, 0.2428, -0.9146),(2.185, 0.1482, -0.2411),(2.054, 0.05845, 0.3977),(1.749, -0.03285, 1.048),(1.275, -0.08119, 1.392),(0.6617, -0.1034, 1.55),(0.6764, -0.1281, 1.683),(1.33, -0.1046, 1.516),(1.895, -0.05298, 1.148),(2.345, 0.03838, 0.4979),(2.642, 0.1326, -0.1729),(2.743, 0.2346, -0.899),(0, 0.2369, -1.479),(2.23, 0.7878, -1.476),(2.257, 0.7123, -0.9376),(2.702, 0.7112, -0.9303),(2.682, 0.79, -1.491),(0.5807, 0.3499, 1.642),(0.08538, 0.3469, 1.663),(0.08698, 0.3321, 1.769),(0.5887, 0.3357, 1.743),(0.7603, 0.3393, 1.717),(1.244, 0.3562, 1.597),(1.21, 0.3696, 1.502),(0.7458, 0.3532, 1.619),(1.402, 0.3657, 1.53),(1.811, 0.4028, 1.265),(1.714, 0.4139, 1.186),(1.351, 0.3785, 1.438),(1.943, 0.4212, 1.134),(2.266, 0.491, 0.6374),(2.054, 0.5025, 0.5555),(1.813, 0.4322, 1.056),(2.365, 0.5149, 0.4677),(2.572, 0.5841, -0.02519),(2.216, 0.5928, -0.08726),(2.106, 0.526, 0.3881),(2.626, 0.6092, -0.204),(2.692, 0.6845, -0.7402),(2.26, 0.6874, -0.7606),(2.233, 0.6163, -0.2546),(1.901, 0.7339, -1.485),(2.295, 0.8405, -1.396),(2.314, 0.7849, -1),(2.638, 0.7846, -0.9984),(2.623, 0.8416, -1.404),(0.5147, 0.4098, 1.67),(0.153, 0.4075, 1.686),(0.1549, 0.3975, 1.757),(0.5193, 0.4001, 1.739),(0.8237, 0.4065, 1.694),(1.172, 0.4186, 1.607),(1.152, 0.4277, 1.542),(0.8114, 0.4157, 1.627),(1.449, 0.4354, 1.488),(1.739, 0.4621, 1.298),(1.679, 0.4699, 1.242),(1.409, 0.4439, 1.427),(1.968, 0.4948, 1.064),(2.192, 0.5458, 0.7013),(2.053, 0.5539, 0.6439),(1.864, 0.5026, 1.009),(2.357, 0.5884, 0.3984),(2.494, 0.6385, 0.0419),(2.251, 0.6451, -0.005292),(2.157, 0.5961, 0.3436),(2.581, 0.683, -0.275),(2.623, 0.7373, -0.6614),(2.316, 0.74, -0.6806),(2.291, 0.6875, -0.3073),(2.228, 0.4099, -1.53),(2.256, 0.334, -0.9894),(2.704, 0.3329, -0.9821),(2.683, 0.4121, -1.546),(0.582, -0.02776, 1.586),(0.08377, -0.03077, 1.607),(0.08547, -0.04648, 1.719),(0.5905, -0.04281, 1.693),(0.7592, -0.03927, 1.668),(1.246, -0.02229, 1.547),(1.21, -0.00807, 1.445),(0.7438, -0.02453, 1.563),(1.402, -0.01297, 1.48),(1.815, 0.02459, 1.213),(1.713, 0.03626, 1.13),(1.348, 0.0006513, 1.383),(1.945, 0.04273, 1.084),(2.27, 0.1129, 0.5843),(2.052, 0.1247, 0.5001),(1.81, 0.05413, 1.003),(2.367, 0.1364, 0.4167),(2.575, 0.2061, -0.07931),(2.214, 0.215, -0.1423),(2.104, 0.1478, 0.3357),(2.628, 0.2309, -0.2555),(2.694, 0.3066, -0.7946),(2.258, 0.3095, -0.8152),(2.231, 0.238, -0.3065),(1.901, 0.3337, -1.541),(-2.49, -0.346, -1.665),(-2.488, 0.1468, -1.593),(-2.786, 0.06917, -0.9244),(-2.499, -0.444, -0.9669),(-1.904, 0.2897, -1.545),(-1.901, 0.2634, -1.551),(-1.93, 0.0002014, -1.034),(-2.157, 0.2012, -0.9269),(-2.674, -0.03385, -0.1909),(-2.398, -0.5365, -0.3089),(-1.906, -0.1155, -0.4374),(-2.131, 0.1021, -0.2568),(-2.368, -0.1295, 0.4901),(-2.124, -0.6222, 0.3018),(-1.794, -0.1957, 0.1341),(-2.006, 0.01241, 0.3815),(-1.909, -0.2185, 1.124),(-1.712, -0.7021, 0.7777),(-1.533, -0.2733, 0.6859),(-1.713, -0.0744, 0.9995),(-1.335, -0.2719, 1.504),(-1.197, -0.75, 1.101),(-1.121, -0.3171, 0.9981),(-1.253, -0.1234, 1.348),(-0.679, -0.2963, 1.678),(-0.6088, -0.7719, 1.344),(-0.5859, -0.3372, 1.141),(-0.6546, -0.1459, 1.508),(0, -0.7775, 1.407),(-2.213, 0.2428, -0.9146),(-1.988, 0.293, -1.533),(-2.185, 0.1482, -0.2411),(-2.054, 0.05845, 0.3977),(-1.749, -0.03285, 1.048),(-1.275, -0.08119, 1.392),(-0.6617, -0.1034, 1.55),(0, -0.1079, 1.582),(-0.6764, -0.1281, 1.683),(0, -0.1336, 1.722),(-1.33, -0.1046, 1.516),(-1.895, -0.05298, 1.148),(-2.345, 0.03838, 0.4979),(-2.642, 0.1326, -0.1729),(-2.743, 0.2346, -0.899),(-2.405, 0.2839, -1.554),(-2.295, 0.8405, -1.396),(-2.314, 0.7849, -1),(-2.638, 0.7846, -0.9984),(-2.623, 0.8416, -1.404),(-0.5147, 0.4098, 1.67),(-0.153, 0.4075, 1.686),(-0.1549, 0.3975, 1.757),(-0.5193, 0.4001, 1.739),(-0.8237, 0.4065, 1.694),(-1.172, 0.4186, 1.607),(-1.152, 0.4277, 1.542),(-0.8114, 0.4157, 1.627),(-1.449, 0.4354, 1.488),(-1.739, 0.4621, 1.298),(-1.679, 0.4699, 1.242),(-1.409, 0.4439, 1.427),(-1.968, 0.4948, 1.064),(-2.192, 0.5458, 0.7013),(-2.053, 0.5539, 0.6439),(-1.864, 0.5026, 1.009),(-2.357, 0.5884, 0.3984),(-2.494, 0.6385, 0.0419),(-2.251, 0.6451, -0.005292),(-2.157, 0.5961, 0.3436),(-2.581, 0.683, -0.275),(-2.623, 0.7373, -0.6614),(-2.316, 0.74, -0.6806),(-2.291, 0.6875, -0.3073),(-2.256, 0.334, -0.9894),(-2.228, 0.4099, -1.53),(-2.704, 0.3329, -0.9821),(-2.683, 0.4121, -1.546),(-0.08377, -0.03077, 1.607),(-0.582, -0.02776, 1.586),(-0.08547, -0.04648, 1.719),(-0.5905, -0.04281, 1.693),(-1.246, -0.02229, 1.547),(-0.7592, -0.03927, 1.668),(-1.21, -0.00807, 1.445),(-0.7438, -0.02453, 1.563),(-1.815, 0.02459, 1.213),(-1.402, -0.01297, 1.48),(-1.713, 0.03626, 1.13),(-1.348, 0.0006513, 1.383),(-2.27, 0.1129, 0.5843),(-1.945, 0.04273, 1.084),(-2.052, 0.1247, 0.5001),(-1.81, 0.05413, 1.003),(-2.575, 0.2061, -0.07931),(-2.367, 0.1364, 0.4167),(-2.214, 0.215, -0.1423),(-2.104, 0.1478, 0.3357),(-2.694, 0.3066, -0.7946),(-2.628, 0.2309, -0.2555),(-2.258, 0.3095, -0.8152),(-2.231, 0.238, -0.3065),(-1.901, 0.3337, -1.541),(0, 0.3834, -1.651),(-2.23, 0.7878, -1.476),(-2.257, 0.7123, -0.9376),(-2.702, 0.7112, -0.9303),(-2.682, 0.79, -1.491),(-0.5807, 0.3499, 1.642),(-0.08538, 0.3469, 1.663),(-0.08698, 0.3321, 1.769),(-0.5887, 0.3357, 1.743),(-0.7603, 0.3393, 1.717),(-1.244, 0.3562, 1.597),(-1.21, 0.3696, 1.502),(-0.7458, 0.3532, 1.619),(-1.402, 0.3657, 1.53),(-1.811, 0.4028, 1.265),(-1.714, 0.4139, 1.186),(-1.351, 0.3785, 1.438),(-1.943, 0.4212, 1.134),(-2.266, 0.491, 0.6374),(-2.054, 0.5025, 0.5555),(-1.813, 0.4322, 1.056),(-2.365, 0.5149, 0.4677),(-2.572, 0.5841, -0.02519),(-2.216, 0.5928, -0.08726),(-2.106, 0.526, 0.3881),(-2.626, 0.6092, -0.204),(-2.692, 0.6845, -0.7402),(-2.26, 0.6874, -0.7606),(-2.233, 0.6163, -0.2546),(-1.901, 0.7339, -1.485),(0, 0.7348, -1.492),(2.792, -0.12, -1.345),(2.142, 0.1908, -1.295),(2.754, -0.2268, -0.5846),(2.151, 0.01335, -0.6048),(2.546, -0.3259, 0.1205),(2.083, -0.07765, 0.04301),(2.157, -0.4204, 0.7935),(1.879, -0.1684, 0.689),(1.636, -0.4934, 1.191),(1.501, -0.238, 1.185),(1.014, -0.5308, 1.507),(0.9654, -0.2718, 1.425),(0.3407, -0.5451, 1.681),(0.3302, -0.2846, 1.516),(2.154, 0.2911, -1.276),(2.162, 0.1932, -0.579),(2.094, 0.102, 0.07051),(1.889, 0.01079, 0.7195),(1.508, -0.05933, 1.219),(0.9686, -0.09341, 1.461),(0.3311, -0.1062, 1.552),(0.3399, -0.1836, 1.72),(1.011, -0.1695, 1.62),(1.63, -0.1323, 1.355),(2.148, -0.05961, 0.8372),(2.536, 0.03458, 0.1667),(2.743, 0.1333, -0.5359),(2.781, 0.2391, -1.289),(1.428, 0.1563, -1.429),(1.434, -0.01467, -0.9757),(1.388, -0.07533, -0.5439),(1.253, -0.1358, -0.1132),(1.001, -0.1822, 0.2172),(0.6436, -0.2048, 0.3777),(0.2202, -0.2133, 0.4382),(2.468, 0.8129, -1.2),(0.3355, 0.4037, 1.713),(0.9899, 0.4171, 1.618),(1.569, 0.4528, 1.364),(2.019, 0.5243, 0.8547),(2.315, 0.617, 0.1947),(2.453, 0.7119, -0.4811),(2.166, 0.3011, -1.269),(2.484, 0.2498, -0.9033),(2.769, 0.3019, -1.274),(2.452, 0.3533, -1.64),(0.332, -0.09714, 1.566),(0.0005066, -0.1099, 1.657),(0.3389, -0.1181, 1.716),(0.6704, -0.1054, 1.625),(1.007, -0.1041, 1.616),(1.308, -0.08306, 1.466),(0.9723, -0.08433, 1.475),(0.6714, -0.1054, 1.625),(1.622, -0.06717, 1.353),(1.829, -0.03411, 1.118),(1.516, -0.04993, 1.23),(1.309, -0.08299, 1.466),(2.138, 0.005099, 0.8386),(2.208, 0.05989, 0.4486),(1.9, 0.02077, 0.727),(1.83, -0.03402, 1.117),(2.524, 0.09887, 0.171),(2.422, 0.1513, -0.2023),(2.106, 0.1124, 0.07454),(2.209, 0.05998, 0.4479),(2.731, 0.1972, -0.5289),(2.484, 0.2497, -0.9026),(2.174, 0.2039, -0.5768),(2.422, 0.1514, -0.2032),(1.061, 0.3095, -1.659),(2.173, 0.8125, -1.197),(2.483, 0.762, -0.8372),(2.763, 0.8133, -1.203),(2.452, 0.8638, -1.563),(0.3324, 0.4128, 1.648),(0.006795, 0.4015, 1.729),(0.3385, 0.3946, 1.778),(0.6641, 0.4059, 1.697),(1.005, 0.4086, 1.678),(1.302, 0.4281, 1.54),(0.9747, 0.4257, 1.557),(0.6778, 0.4062, 1.695),(1.616, 0.4453, 1.417),(1.823, 0.4767, 1.194),(1.522, 0.4603, 1.31),(1.315, 0.4289, 1.534),(2.13, 0.517, 0.9063),(2.205, 0.5706, 0.5253),(1.908, 0.5315, 0.8031),(1.833, 0.478, 1.184),(2.516, 0.6105, 0.241),(2.419, 0.6619, -0.1246),(2.114, 0.6235, 0.1483),(2.211, 0.5722, 0.5139),(2.724, 0.7087, -0.4577),(2.483, 0.7602, -0.8248),(2.181, 0.7152, -0.5044),(2.422, 0.6636, -0.1373),(2.167, 0.5622, -1.232),(2.484, 0.511, -0.8673),(2.768, 0.563, -1.238),(2.452, 0.6143, -1.603),(0.3321, 0.1635, 1.607),(0.00152, 0.1512, 1.694),(0.3388, 0.1434, 1.749),(0.6694, 0.1557, 1.662),(1.007, 0.1575, 1.649),(1.307, 0.178, 1.503),(0.9732, 0.1763, 1.515),(0.6725, 0.1557, 1.662),(1.62, 0.1943, 1.387),(1.828, 0.2269, 1.155),(1.518, 0.2108, 1.27),(1.311, 0.1782, 1.502),(2.135, 0.2664, 0.8739),(2.208, 0.3209, 0.4857),(1.903, 0.2817, 0.7651),(1.83, 0.2271, 1.153),(2.522, 0.36, 0.2072),(2.421, 0.4123, -0.1648),(2.108, 0.3734, 0.1118),(2.209, 0.3212, 0.4837),(2.729, 0.4583, -0.4924),(2.484, 0.5107, -0.8651),(2.176, 0.465, -0.54),(2.422, 0.4127, -0.1673),(1.061, 0.5794, -1.621),(-2.792, -0.12, -1.345),(-2.142, 0.1908, -1.295),(-2.754, -0.2268, -0.5846),(-2.151, 0.01335, -0.6048),(-2.546, -0.3259, 0.1205),(-2.083, -0.07765, 0.04301),(-2.157, -0.4204, 0.7935),(-1.879, -0.1684, 0.689),(-1.636, -0.4934, 1.191),(-1.501, -0.238, 1.185),(-1.014, -0.5308, 1.507),(-0.9654, -0.2718, 1.425),(-0.3407, -0.5451, 1.681),(-0.3302, -0.2846, 1.516),(-2.154, 0.2911, -1.276),(-2.162, 0.1932, -0.579),(-2.094, 0.102, 0.07051),(-1.889, 0.01079, 0.7195),(-1.508, -0.05933, 1.219),(-0.9686, -0.09341, 1.461),(-0.3311, -0.1062, 1.552),(-0.3399, -0.1836, 1.72),(-1.011, -0.1695, 1.62),(-1.63, -0.1323, 1.355),(-2.148, -0.05961, 0.8372),(-2.536, 0.03458, 0.1667),(-2.743, 0.1333, -0.5359),(-2.781, 0.2391, -1.289),(-1.428, 0.1563, -1.429),(-1.434, -0.01467, -0.9757),(-1.388, -0.07533, -0.5439),(-1.253, -0.1358, -0.1132),(-1.001, -0.1822, 0.2172),(-0.6436, -0.2048, 0.3777),(-0.2202, -0.2133, 0.4382),(-2.468, 0.8129, -1.2),(-0.3355, 0.4037, 1.713),(-0.9899, 0.4171, 1.618),(-1.569, 0.4528, 1.364),(-2.019, 0.5243, 0.8547),(-2.315, 0.617, 0.1947),(-2.453, 0.7119, -0.4811),(-2.166, 0.3011, -1.269),(-2.484, 0.2498, -0.9033),(-2.769, 0.3019, -1.274),(-2.452, 0.3533, -1.64),(-0.332, -0.09714, 1.566),(-0.0005066, -0.1099, 1.657),(-0.3389, -0.1181, 1.716),(-0.6704, -0.1054, 1.625),(-1.007, -0.1041, 1.616),(-1.308, -0.08306, 1.466),(-0.9723, -0.08433, 1.475),(-0.6714, -0.1054, 1.625),(-1.622, -0.06717, 1.353),(-1.829, -0.03411, 1.118),(-1.516, -0.04993, 1.23),(-1.309, -0.08299, 1.466),(-2.138, 0.005099, 0.8386),(-2.208, 0.05989, 0.4486),(-1.9, 0.02077, 0.727),(-1.83, -0.03402, 1.117),(-2.524, 0.09887, 0.171),(-2.422, 0.1513, -0.2023),(-2.106, 0.1124, 0.07454),(-2.209, 0.05998, 0.4479),(-2.731, 0.1972, -0.5289),(-2.484, 0.2497, -0.9026),(-2.174, 0.2039, -0.5768),(-2.422, 0.1514, -0.2032),(-1.061, 0.3095, -1.659),(-2.173, 0.8125, -1.197),(-2.483, 0.762, -0.8372),(-2.763, 0.8133, -1.203),(-2.452, 0.8638, -1.563),(-0.3324, 0.4128, 1.648),(-0.006795, 0.4015, 1.729),(-0.3385, 0.3946, 1.778),(-0.6641, 0.4059, 1.697),(-1.005, 0.4086, 1.678),(-1.302, 0.4281, 1.54),(-0.9747, 0.4257, 1.557),(-0.6778, 0.4062, 1.695),(-1.616, 0.4453, 1.417),(-1.823, 0.4767, 1.194),(-1.522, 0.4603, 1.31),(-1.315, 0.4289, 1.534),(-2.13, 0.517, 0.9063),(-2.205, 0.5706, 0.5253),(-1.908, 0.5315, 0.8031),(-1.833, 0.478, 1.184),(-2.516, 0.6105, 0.241),(-2.419, 0.6619, -0.1246),(-2.114, 0.6235, 0.1483),(-2.211, 0.5722, 0.5139),(-2.724, 0.7087, -0.4577),(-2.483, 0.7602, -0.8248),(-2.181, 0.7152, -0.5044),(-2.422, 0.6636, -0.1373),(-2.167, 0.5622, -1.232),(-2.484, 0.511, -0.8673),(-2.768, 0.563, -1.238),(-2.452, 0.6143, -1.603),(-0.3321, 0.1635, 1.607),(-0.00152, 0.1512, 1.694),(-0.3388, 0.1434, 1.749),(-0.6694, 0.1557, 1.662),(-1.007, 0.1575, 1.649),(-1.307, 0.178, 1.503),(-0.9732, 0.1763, 1.515),(-0.6725, 0.1557, 1.662),(-1.62, 0.1943, 1.387),(-1.828, 0.2269, 1.155),(-1.518, 0.2108, 1.27),(-1.311, 0.1782, 1.502),(-2.135, 0.2664, 0.8739),(-2.208, 0.3209, 0.4857),(-1.903, 0.2817, 0.7651),(-1.83, 0.2271, 1.153),(-2.522, 0.36, 0.2072),(-2.421, 0.4123, -0.1648),(-2.108, 0.3734, 0.1118),(-2.209, 0.3212, 0.4837),(-2.729, 0.4583, -0.4924),(-2.484, 0.5107, -0.8651),(-2.176, 0.465, -0.54),(-2.422, 0.4127, -0.1673),(-1.061, 0.5794, -1.621),(2.49, -0.07094, -1.626),(1.901, 0.2752, -1.55),(2.789, -0.1743, -0.9587),(2.502, -0.3954, -1.313),(2.79, 0.1233, -1.309),(2.145, 0.2664, -1.283),(2.677, -0.2774, -0.2243),(2.468, -0.4911, -0.6317),(2.751, 0.01671, -0.5509),(2.154, 0.1483, -0.5857),(2.371, -0.3732, 0.4573),(2.281, -0.5799, 0.00001332),(2.544, -0.08225, 0.1536),(2.085, 0.05721, 0.06252),(1.911, -0.4622, 0.9992),(1.933, -0.6646, 0.603),(2.155, -0.1767, 0.826),(1.881, -0.03364, 0.7093),(1.336, -0.5157, 1.362),(1.466, -0.73, 0.946),(1.634, -0.2497, 1.345),(1.503, -0.1034, 1.206),(0.6794, -0.5402, 1.623),(0.9086, -0.7635, 1.235),(1.013, -0.287, 1.611),(0.9662, -0.1373, 1.447),(0, -0.5464, 1.691),(0.3053, -0.7763, 1.398),(0.3405, -0.3012, 1.712),(0.3304, -0.15, 1.538),(2.154, 0.08114, -0.9441),(2.128, -0.03282, -0.2761),(2.003, -0.1224, 0.3617),(1.711, -0.2091, 0.9787),(1.252, -0.258, 1.327),(0.6541, -0.2804, 1.486),(0, -0.2855, 1.523),(1.963, 0.1317, -1.336),(1.972, -0.08361, -0.7101),(1.909, -0.167, -0.1163),(1.722, -0.2502, 0.4758),(1.376, -0.314, 0.9301),(0.8849, -0.345, 1.151),(0.3027, -0.3567, 1.234),(2.162, 0.2932, -1.271),(2.171, 0.1958, -0.5782),(2.102, 0.1044, 0.07263),(1.897, 0.01291, 0.7241),(1.514, -0.05759, 1.226),(0.9712, -0.0919, 1.47),(0.3317, -0.1047, 1.561),(0.3392, -0.14, 1.717),(1.009, -0.126, 1.617),(1.625, -0.08896, 1.353),(2.141, -0.01654, 0.8378),(2.528, 0.07737, 0.1693),(2.734, 0.1758, -0.5314),(2.773, 0.2808, -1.279),(2.481, 0.25, -1.57),(1.912, 0.2936, -1.537),(2.166, 0.2411, -0.9202),(2.14, 0.1469, -0.2495),(2.014, 0.05701, 0.3904),(1.72, -0.03018, 1.011),(1.257, -0.07947, 1.362),(0.656, -0.102, 1.523),(0, -0.1072, 1.559),(0.6776, -0.1788, 1.686),(1.331, -0.1545, 1.512),(1.903, -0.1013, 1.134),(2.361, -0.01256, 0.5023),(2.666, 0.08285, -0.1769),(2.778, 0.1855, -0.9075),(1.153, 0.2636, -1.602),(1.256, 0.07775, -1.259),(1.241, -0.003568, -0.8708),(1.167, -0.05593, -0.498),(0.9965, -0.106, -0.1419),(0.7287, -0.1347, 0.06276),(0.3811, -0.1479, 0.1564),(0, -0.151, 0.1785),(2.197, 0.294, -1.54),(2.484, 0.2443, -0.9037),(0.6709, -0.1108, 1.624),(1.309, -0.08845, 1.465),(1.83, -0.03947, 1.117),(2.209, 0.05452, 0.4475),(2.422, 0.146, -0.2035),(2.227, 0.3392, -1.54),(2.255, 0.2632, -0.9991),(2.704, 0.2622, -0.9918),(2.684, 0.3414, -1.556),(2.169, 0.75, -1.206),(2.484, 0.6989, -0.8424),(2.766, 0.7507, -1.211),(2.452, 0.8018, -1.575),(0.5823, -0.09826, 1.574),(0.08337, -0.1013, 1.596),(0.08511, -0.1174, 1.71),(0.591, -0.1137, 1.684),(0.3323, 0.3508, 1.635),(0.003092, 0.3389, 1.72),(0.3387, 0.3315, 1.773),(0.6678, 0.3434, 1.688),(0.7589, -0.1101, 1.659),(1.247, -0.09314, 1.538),(1.21, -0.07857, 1.434),(0.7432, -0.09504, 1.552),(1.006, 0.3455, 1.673),(1.306, 0.3656, 1.53),(0.9738, 0.3637, 1.544),(0.6741, 0.3435, 1.688),(1.402, -0.08385, 1.472),(1.816, -0.04618, 1.204),(1.712, -0.03426, 1.119),(1.347, -0.06991, 1.373),(1.618, 0.3823, 1.412),(1.826, 0.4144, 1.183),(1.52, 0.3982, 1.298),(1.312, 0.366, 1.527),(1.946, -0.02806, 1.075),(2.271, 0.04218, 0.5746),(2.051, 0.05412, 0.4896),(1.809, -0.0165, 0.9923),(2.133, 0.4542, 0.8992),(2.207, 0.5084, 0.5133),(1.905, 0.4692, 0.7925),(1.831, 0.415, 1.178),(2.368, 0.06568, 0.4073),(2.576, 0.1355, -0.08942),(2.214, 0.1443, -0.1527),(2.103, 0.07712, 0.3259),(2.52, 0.5478, 0.2331),(2.421, 0.5998, -0.1369),(2.11, 0.5611, 0.1386),(2.209, 0.5091, 0.5086),(2.628, 0.1601, -0.265),(2.695, 0.236, -0.8048),(2.257, 0.2389, -0.8255),(2.231, 0.1673, -0.3162),(2.728, 0.646, -0.4662),(2.483, 0.6982, -0.8372),(2.178, 0.6527, -0.5135),(2.422, 0.6006, -0.1425),(0.9505, 0.7345, -1.49),(1.901, 0.2678, -1.551),(2.249, 0.8126, -1.198),(2.479, 0.775, -0.9302),(2.687, 0.8132, -1.202),(2.456, 0.8508, -1.47),(2.233, 0.85, -1.464),(2.26, 0.7752, -0.9315),(2.699, 0.7742, -0.9243),(2.679, 0.8522, -1.48),(0.3333, 0.4102, 1.667),(0.09134, 0.4021, 1.725),(0.3376, 0.3972, 1.759),(0.5796, 0.4054, 1.701),(0.5782, 0.412, 1.654),(0.08821, 0.4091, 1.675),(0.08971, 0.3951, 1.774),(0.5857, 0.3987, 1.749),(1.001, 0.4111, 1.661),(1.222, 0.4253, 1.56),(0.9791, 0.4232, 1.574),(0.7581, 0.409, 1.675),(0.7626, 0.4024, 1.722),(1.24, 0.4191, 1.604),(1.208, 0.4316, 1.514),(0.749, 0.4154, 1.63),(1.602, 0.4474, 1.402),(1.757, 0.4705, 1.238),(1.536, 0.4582, 1.325),(1.381, 0.4351, 1.49),(1.402, 0.4288, 1.534),(1.806, 0.4655, 1.274),(1.713, 0.476, 1.199),(1.355, 0.4409, 1.448),(2.1, 0.519, 0.8923),(2.158, 0.5587, 0.6097),(1.938, 0.5296, 0.8171),(1.881, 0.4899, 1.1),(1.942, 0.4843, 1.139),(2.262, 0.5534, 0.6474),(2.056, 0.5646, 0.5678),(1.816, 0.4949, 1.064),(2.464, 0.6122, 0.2289),(2.393, 0.6503, -0.04252),(2.166, 0.6218, 0.1605),(2.237, 0.5837, 0.4319),(2.364, 0.5779, 0.4731),(2.568, 0.6464, -0.01431),(2.218, 0.6549, -0.07527),(2.11, 0.5889, 0.3951),(2.654, 0.7095, -0.4638),(2.475, 0.7478, -0.7365),(2.252, 0.7144, -0.4984),(2.43, 0.676, -0.2256),(2.624, 0.6722, -0.1983),(2.689, 0.7467, -0.7288),(2.262, 0.7496, -0.7489),(2.236, 0.6792, -0.2482),(2.228, 0.6003, -1.503),(2.256, 0.5244, -0.9629),(2.703, 0.5234, -0.9556),(2.683, 0.6025, -1.519),(0.5817, 0.1625, 1.614),(0.08417, 0.1595, 1.635),(0.08583, 0.1441, 1.744),(0.5901, 0.1478, 1.718),(0.7594, 0.1513, 1.693),(1.246, 0.1683, 1.572),(1.21, 0.1822, 1.474),(0.7444, 0.1657, 1.591),(1.401, 0.1776, 1.506),(1.813, 0.2151, 1.239),(1.713, 0.2265, 1.158),(1.349, 0.1909, 1.411),(1.944, 0.2332, 1.11),(2.268, 0.3033, 0.6108),(2.053, 0.315, 0.5275),(1.811, 0.2445, 1.03),(2.366, 0.3269, 0.4429),(2.574, 0.3965, -0.05237),(2.215, 0.4053, -0.115),(2.104, 0.3382, 0.3624),(2.627, 0.4213, -0.2291),(2.693, 0.497, -0.7676),(2.258, 0.4999, -0.7881),(2.232, 0.4285, -0.28),(1.901, 0.507, -1.517),(2.167, 0.3718, -1.259),(2.484, 0.3205, -0.8937),(2.769, 0.3726, -1.265),(2.452, 0.4239, -1.63),(0.332, -0.0267, 1.578),(0.001013, -0.03918, 1.667),(0.3389, -0.04721, 1.724),(0.6699, -0.03473, 1.635),(1.007, -0.03319, 1.624),(1.308, -0.01239, 1.476),(0.9727, -0.01389, 1.487),(0.672, -0.03468, 1.635),(1.621, 0.003701, 1.362),(1.829, 0.03652, 1.128),(1.517, 0.02057, 1.242),(1.31, -0.01226, 1.475),(2.137, 0.07588, 0.8478),(2.208, 0.1305, 0.4587),(1.901, 0.09136, 0.7376),(1.83, 0.0367, 1.127),(2.523, 0.1696, 0.1807),(2.421, 0.2219, -0.192),(2.107, 0.1831, 0.08474),(2.209, 0.1307, 0.4574),(2.73, 0.2679, -0.5191),(2.484, 0.3203, -0.8922),(2.175, 0.2746, -0.5668),(2.422, 0.2222, -0.1937),(1.061, 0.3846, -1.648),(-2.49, -0.07094, -1.626),(-2.79, 0.1233, -1.309),(-2.789, -0.1743, -0.9587),(-2.502, -0.3954, -1.313),(-1.901, 0.2752, -1.55),(-1.963, 0.1317, -1.336),(-2.154, 0.08114, -0.9441),(-2.145, 0.2664, -1.283),(-2.751, 0.01671, -0.5509),(-2.677, -0.2774, -0.2243),(-2.468, -0.4911, -0.6317),(-1.972, -0.08361, -0.7101),(-2.128, -0.03282, -0.2761),(-2.154, 0.1483, -0.5857),(-2.544, -0.08225, 0.1536),(-2.371, -0.3732, 0.4573),(-2.281, -0.5799, 0.00001332),(-1.909, -0.167, -0.1163),(-2.003, -0.1224, 0.3617),(-2.085, 0.05721, 0.06252),(-2.155, -0.1767, 0.826),(-1.911, -0.4622, 0.9992),(-1.933, -0.6646, 0.603),(-1.722, -0.2502, 0.4758),(-1.711, -0.2091, 0.9787),(-1.881, -0.03364, 0.7093),(-1.634, -0.2497, 1.345),(-1.336, -0.5157, 1.362),(-1.466, -0.73, 0.946),(-1.376, -0.314, 0.9301),(-1.252, -0.258, 1.327),(-1.503, -0.1034, 1.206),(-1.013, -0.287, 1.611),(-0.6794, -0.5402, 1.623),(-0.9086, -0.7635, 1.235),(-0.8849, -0.345, 1.151),(-0.6541, -0.2804, 1.486),(-0.9662, -0.1373, 1.447),(-0.3405, -0.3012, 1.712),(-0.3053, -0.7763, 1.398),(-0.3027, -0.3567, 1.234),(-0.3304, -0.15, 1.538),(-2.166, 0.2411, -0.9202),(-2.162, 0.2932, -1.271),(-1.912, 0.2936, -1.537),(-2.14, 0.1469, -0.2495),(-2.171, 0.1958, -0.5782),(-2.014, 0.05701, 0.3904),(-2.102, 0.1044, 0.07263),(-1.72, -0.03018, 1.011),(-1.897, 0.01291, 0.7241),(-1.257, -0.07947, 1.362),(-1.514, -0.05759, 1.226),(-0.656, -0.102, 1.523),(-0.9712, -0.0919, 1.47),(-0.3317, -0.1047, 1.561),(-0.6776, -0.1788, 1.686),(-0.3392, -0.14, 1.717),(0, -0.185, 1.73),(-1.331, -0.1545, 1.512),(-1.009, -0.126, 1.617),(-1.903, -0.1013, 1.134),(-1.625, -0.08896, 1.353),(-2.361, -0.01256, 0.5023),(-2.141, -0.01654, 0.8378),(-2.666, 0.08285, -0.1769),(-2.528, 0.07737, 0.1693),(-2.778, 0.1855, -0.9075),(-2.734, 0.1758, -0.5314),(-2.481, 0.25, -1.57),(-2.773, 0.2808, -1.279),(-1.153, 0.2636, -1.602),(-1.256, 0.07775, -1.259),(-1.241, -0.003568, -0.8708),(-1.167, -0.05593, -0.498),(-0.9965, -0.106, -0.1419),(-0.7287, -0.1347, 0.06276),(-0.3811, -0.1479, 0.1564),(-2.249, 0.8126, -1.198),(-2.479, 0.775, -0.9302),(-2.687, 0.8132, -1.202),(-2.456, 0.8508, -1.47),(-0.3333, 0.4102, 1.667),(-0.09134, 0.4021, 1.725),(-0.3376, 0.3972, 1.759),(-0.5796, 0.4054, 1.701),(-1.001, 0.4111, 1.661),(-1.222, 0.4253, 1.56),(-0.9791, 0.4232, 1.574),(-0.7581, 0.409, 1.675),(-1.602, 0.4474, 1.402),(-1.757, 0.4705, 1.238),(-1.536, 0.4582, 1.325),(-1.381, 0.4351, 1.49),(-2.1, 0.519, 0.8923),(-2.158, 0.5587, 0.6097),(-1.938, 0.5296, 0.8171),(-1.881, 0.4899, 1.1),(-2.464, 0.6122, 0.2289),(-2.393, 0.6503, -0.04252),(-2.166, 0.6218, 0.1605),(-2.237, 0.5837, 0.4319),(-2.654, 0.7095, -0.4638),(-2.475, 0.7478, -0.7365),(-2.252, 0.7144, -0.4984),(-2.43, 0.676, -0.2256),(-2.255, 0.2632, -0.9991),(-2.167, 0.3718, -1.259),(-2.227, 0.3392, -1.54),(-2.484, 0.2443, -0.9037),(-2.704, 0.2622, -0.9918),(-2.484, 0.3205, -0.8937),(-2.684, 0.3414, -1.556),(-2.769, 0.3726, -1.265),(-2.197, 0.294, -1.54),(-2.452, 0.4239, -1.63),(-0.08337, -0.1013, 1.596),(-0.332, -0.0267, 1.578),(-0.5823, -0.09826, 1.574),(0, -0.1153, 1.656),(-0.08511, -0.1174, 1.71),(-0.001013, -0.03918, 1.667),(-0.591, -0.1137, 1.684),(-0.3389, -0.04721, 1.724),(-0.6709, -0.1108, 1.624),(-0.6699, -0.03473, 1.635),(-1.247, -0.09314, 1.538),(-1.007, -0.03319, 1.624),(-0.7589, -0.1101, 1.659),(-1.309, -0.08845, 1.465),(-1.21, -0.07857, 1.434),(-1.308, -0.01239, 1.476),(-0.7432, -0.09504, 1.552),(-0.9727, -0.01389, 1.487),(-0.672, -0.03468, 1.635),(-1.816, -0.04618, 1.204),(-1.621, 0.003701, 1.362),(-1.402, -0.08385, 1.472),(-1.83, -0.03947, 1.117),(-1.712, -0.03426, 1.119),(-1.829, 0.03652, 1.128),(-1.347, -0.06991, 1.373),(-1.517, 0.02057, 1.242),(-1.31, -0.01226, 1.475),(-2.271, 0.04218, 0.5746),(-2.137, 0.07588, 0.8478),(-1.946, -0.02806, 1.075),(-2.209, 0.05452, 0.4475),(-2.051, 0.05412, 0.4896),(-2.208, 0.1305, 0.4587),(-1.809, -0.0165, 0.9923),(-1.901, 0.09136, 0.7376),(-1.83, 0.0367, 1.127),(-2.576, 0.1355, -0.08942),(-2.523, 0.1696, 0.1807),(-2.368, 0.06568, 0.4073),(-2.422, 0.146, -0.2035),(-2.214, 0.1443, -0.1527),(-2.421, 0.2219, -0.192),(-2.103, 0.07712, 0.3259),(-2.107, 0.1831, 0.08474),(-2.209, 0.1307, 0.4574),(-2.695, 0.236, -0.8048),(-2.73, 0.2679, -0.5191),(-2.628, 0.1601, -0.265),(-2.257, 0.2389, -0.8255),(-2.484, 0.3203, -0.8922),(-2.231, 0.1673, -0.3162),(-2.175, 0.2746, -0.5668),(-2.422, 0.2222, -0.1937),(-1.901, 0.2678, -1.551),(-1.061, 0.3846, -1.648),(0, 0.3076, -1.662),(-2.169, 0.75, -1.206),(-2.26, 0.7752, -0.9315),(-2.233, 0.85, -1.464),(-2.484, 0.6989, -0.8424),(-2.699, 0.7742, -0.9243),(-2.766, 0.7507, -1.211),(-2.679, 0.8522, -1.48),(-2.452, 0.8018, -1.575),(-0.3323, 0.3508, 1.635),(-0.08821, 0.4091, 1.675),(-0.5782, 0.412, 1.654),(-0.003092, 0.3389, 1.72),(-0.08971, 0.3951, 1.774),(-0.3387, 0.3315, 1.773),(-0.5857, 0.3987, 1.749),(-0.6678, 0.3434, 1.688),(-1.006, 0.3455, 1.673),(-1.24, 0.4191, 1.604),(-0.7626, 0.4024, 1.722),(-1.306, 0.3656, 1.53),(-1.208, 0.4316, 1.514),(-0.9738, 0.3637, 1.544),(-0.749, 0.4154, 1.63),(-0.6741, 0.3435, 1.688),(-1.618, 0.3823, 1.412),(-1.806, 0.4655, 1.274),(-1.402, 0.4288, 1.534),(-1.826, 0.4144, 1.183),(-1.713, 0.476, 1.199),(-1.52, 0.3982, 1.298),(-1.355, 0.4409, 1.448),(-1.312, 0.366, 1.527),(-2.133, 0.4542, 0.8992),(-2.262, 0.5534, 0.6474),(-1.942, 0.4843, 1.139),(-2.207, 0.5084, 0.5133),(-2.056, 0.5646, 0.5678),(-1.905, 0.4692, 0.7925),(-1.816, 0.4949, 1.064),(-1.831, 0.415, 1.178),(-2.52, 0.5478, 0.2331),(-2.568, 0.6464, -0.01431),(-2.364, 0.5779, 0.4731),(-2.421, 0.5998, -0.1369),(-2.218, 0.6549, -0.07527),(-2.11, 0.5611, 0.1386),(-2.11, 0.5889, 0.3951),(-2.209, 0.5091, 0.5086),(-2.728, 0.646, -0.4662),(-2.689, 0.7467, -0.7288),(-2.624, 0.6722, -0.1983),(-2.483, 0.6982, -0.8372),(-2.262, 0.7496, -0.7489),(-2.178, 0.6527, -0.5135),(-2.236, 0.6792, -0.2482),(-2.422, 0.6006, -0.1425),(-2.256, 0.5244, -0.9629),(-2.228, 0.6003, -1.503),(-2.703, 0.5234, -0.9556),(-2.683, 0.6025, -1.519),(-0.08417, 0.1595, 1.635),(-0.5817, 0.1625, 1.614),(-0.08583, 0.1441, 1.744),(-0.5901, 0.1478, 1.718),(-1.246, 0.1683, 1.572),(-0.7594, 0.1513, 1.693),(-1.21, 0.1822, 1.474),(-0.7444, 0.1657, 1.591),(-1.813, 0.2151, 1.239),(-1.401, 0.1776, 1.506),(-1.713, 0.2265, 1.158),(-1.349, 0.1909, 1.411),(-2.268, 0.3033, 0.6108),(-1.944, 0.2332, 1.11),(-2.053, 0.315, 0.5275),(-1.811, 0.2445, 1.03),(-2.574, 0.3965, -0.05237),(-2.366, 0.3269, 0.4429),(-2.215, 0.4053, -0.115),(-2.104, 0.3382, 0.3624),(-2.693, 0.497, -0.7676),(-2.627, 0.4213, -0.2291),(-2.258, 0.4999, -0.7881),(-2.232, 0.4285, -0.28),(-1.901, 0.507, -1.517),(-0.9505, 0.7345, -1.49),(0, 0.579, -1.624)]

HAnimSegment98.coord = Coordinate105
Transform106 = x3d.Transform(DEF="Lower_teeth_JinBlink")
Transform106.translation = [0,8.43,11.43]
Shape107 = x3d.Shape()
Appearance108 = x3d.Appearance(DEF="BaseAppearance_JinBlink")
Material109 = x3d.Material(DEF="BaseMaterial_JinBlink")
Material109.ambientIntensity = 1
Material109.diffuseColor = [0.588,0.588,0.588]
Material109.shininess = 0.145

Appearance108.material = Material109
ImageTexture110 = x3d.ImageTexture(DEF="JinImageAtlas_JinBlink")
ImageTexture110.url = ["JinImageAtlas.jpg","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/FacialAnimation/JinImageAtlas.jpg"]

Appearance108.texture = ImageTexture110

Shape107.appearance = Appearance108
IndexedFaceSet111 = x3d.IndexedFaceSet(DEF="Lower_teeth-FACES_JinBlink")
IndexedFaceSet111.solid = False
IndexedFaceSet111.creaseAngle = 3.14159
IndexedFaceSet111.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,2,-1,2,5,6,-1,8,3,2,-1,2,7,8,-1,9,10,11,-1,11,12,9,-1,13,14,11,-1,11,10,13,-1,15,16,11,-1,11,14,15,-1,17,12,11,-1,11,16,17,-1,8,7,18,-1,18,19,8,-1,6,20,18,-1,18,7,6,-1,21,22,18,-1,18,20,21,-1,23,19,18,-1,18,22,23,-1,17,16,24,-1,24,25,17,-1,15,26,24,-1,24,16,15,-1,27,28,24,-1,24,26,27,-1,29,25,24,-1,24,28,29,-1,23,22,30,-1,30,31,23,-1,21,32,30,-1,30,22,21,-1,33,34,30,-1,30,32,33,-1,35,31,30,-1,30,34,35,-1,29,28,36,-1,36,37,29,-1,27,38,36,-1,36,28,27,-1,39,40,36,-1,36,38,39,-1,41,37,36,-1,36,40,41,-1,35,34,42,-1,42,43,35,-1,33,44,42,-1,42,34,33,-1,45,46,42,-1,42,44,45,-1,47,43,42,-1,42,46,47,-1,41,40,48,-1,48,87,41,-1,39,88,48,-1,48,40,39,-1,145,146,48,-1,48,88,145,-1,147,87,48,-1,48,146,147,-1,47,46,148,-1,148,149,47,-1,45,150,148,-1,148,46,45,-1,151,152,148,-1,148,150,151,-1,153,149,148,-1,148,152,153,-1,147,146,154,-1,154,155,147,-1,145,156,154,-1,154,146,145,-1,157,158,154,-1,154,156,157,-1,159,155,154,-1,154,158,159,-1,153,152,160,-1,160,161,153,-1,151,162,160,-1,160,152,151,-1,163,164,160,-1,160,162,163,-1,165,161,160,-1,160,164,165,-1,159,158,166,-1,166,167,159,-1,157,168,166,-1,166,158,157,-1,169,170,166,-1,166,168,169,-1,171,167,166,-1,166,170,171,-1,165,164,172,-1,172,173,165,-1,163,174,172,-1,172,164,163,-1,175,176,172,-1,172,174,175,-1,177,173,172,-1,172,176,177,-1,171,170,178,-1,178,179,171,-1,169,180,178,-1,178,170,169,-1,181,182,178,-1,178,180,181,-1,183,179,178,-1,178,182,183,-1,9,12,184,-1,184,185,9,-1,17,186,184,-1,184,12,17,-1,187,188,184,-1,184,186,187,-1,189,185,184,-1,184,188,189,-1,17,25,190,-1,190,186,17,-1,29,191,190,-1,190,25,29,-1,192,193,190,-1,190,191,192,-1,187,186,190,-1,190,193,187,-1,29,37,194,-1,194,191,29,-1,41,195,194,-1,194,37,41,-1,262,263,194,-1,194,195,262,-1,192,191,194,-1,194,263,192,-1,41,87,292,-1,292,195,41,-1,147,293,292,-1,292,87,147,-1,294,295,292,-1,292,293,294,-1,262,195,292,-1,292,295,262,-1,147,155,296,-1,296,293,147,-1,159,297,296,-1,296,155,159,-1,298,299,296,-1,296,297,298,-1,294,293,296,-1,296,299,294,-1,159,167,300,-1,300,297,159,-1,171,301,300,-1,300,167,171,-1,302,303,300,-1,300,301,302,-1,298,297,300,-1,300,303,298,-1,171,179,304,-1,304,301,171,-1,183,305,304,-1,304,179,183,-1,306,307,304,-1,304,305,306,-1,302,301,304,-1,304,307,302,-1,175,174,308,-1,308,309,175,-1,163,310,308,-1,308,174,163,-1,311,312,308,-1,308,310,311,-1,313,309,308,-1,308,312,313,-1,163,162,314,-1,314,310,163,-1,151,315,314,-1,314,162,151,-1,316,317,314,-1,314,315,316,-1,311,310,314,-1,314,317,311,-1,151,150,318,-1,318,315,151,-1,45,319,318,-1,318,150,45,-1,320,321,318,-1,318,319,320,-1,316,315,318,-1,318,321,316,-1,45,44,322,-1,322,319,45,-1,33,323,322,-1,322,44,33,-1,324,325,322,-1,322,323,324,-1,320,319,322,-1,322,325,320,-1,33,32,326,-1,326,323,33,-1,21,327,326,-1,326,32,21,-1,328,364,326,-1,326,327,328,-1,324,323,326,-1,326,364,324,-1,21,20,421,-1,421,327,21,-1,6,422,421,-1,421,20,6,-1,423,424,421,-1,421,422,423,-1,328,327,421,-1,421,424,328,-1,6,5,425,-1,425,422,6,-1,4,426,425,-1,425,5,4,-1,427,428,425,-1,425,426,427,-1,423,422,425,-1,425,428,423,-1,15,14,429,-1,429,430,15,-1,13,431,429,-1,429,14,13,-1,432,430,429,-1,429,431,432,-1,27,26,433,-1,433,434,27,-1,15,430,433,-1,433,26,15,-1,432,434,433,-1,433,430,432,-1,39,38,435,-1,435,436,39,-1,27,434,435,-1,435,38,27,-1,432,436,435,-1,435,434,432,-1,145,88,437,-1,437,438,145,-1,39,436,437,-1,437,88,39,-1,432,438,437,-1,437,436,432,-1,157,156,439,-1,439,440,157,-1,145,438,439,-1,439,156,145,-1,432,440,439,-1,439,438,432,-1,169,168,441,-1,441,442,169,-1,157,440,441,-1,441,168,157,-1,432,442,441,-1,441,440,432,-1,181,180,443,-1,443,444,181,-1,169,442,443,-1,443,180,169,-1,432,444,443,-1,443,442,432,-1,49,50,51,-1,51,52,49,-1,53,54,51,-1,51,50,53,-1,55,56,51,-1,51,54,55,-1,57,52,51,-1,51,56,57,-1,58,59,60,-1,60,61,58,-1,62,63,60,-1,60,59,62,-1,64,65,60,-1,60,63,64,-1,66,61,60,-1,60,65,66,-1,67,68,69,-1,69,70,67,-1,71,72,69,-1,69,68,71,-1,73,74,69,-1,69,72,73,-1,75,70,69,-1,69,74,75,-1,76,77,78,-1,78,79,76,-1,80,81,78,-1,78,77,80,-1,82,83,78,-1,78,81,82,-1,84,79,78,-1,78,83,84,-1,85,86,89,-1,89,90,85,-1,91,92,89,-1,89,86,91,-1,93,94,89,-1,89,92,93,-1,95,90,89,-1,89,94,95,-1,96,97,98,-1,98,99,96,-1,100,101,98,-1,98,97,100,-1,102,103,98,-1,98,101,102,-1,104,99,98,-1,98,103,104,-1,105,106,107,-1,107,108,105,-1,109,110,107,-1,107,106,109,-1,111,112,107,-1,107,110,111,-1,113,108,107,-1,107,112,113,-1,114,115,116,-1,116,117,114,-1,118,119,116,-1,116,115,118,-1,120,121,116,-1,116,119,120,-1,122,117,116,-1,116,121,122,-1,118,123,124,-1,124,119,118,-1,125,126,124,-1,124,123,125,-1,127,128,124,-1,124,126,127,-1,120,119,124,-1,124,128,120,-1,125,129,130,-1,130,126,125,-1,131,132,130,-1,130,129,131,-1,133,134,130,-1,130,132,133,-1,127,126,130,-1,130,134,127,-1,131,135,136,-1,136,132,131,-1,114,117,136,-1,136,135,114,-1,122,137,136,-1,136,117,122,-1,133,132,136,-1,136,137,133,-1,138,139,140,-1,140,141,138,-1,142,143,140,-1,140,139,142,-1,144,196,140,-1,140,143,144,-1,197,141,140,-1,140,196,197,-1,142,198,199,-1,199,143,142,-1,200,201,199,-1,199,198,200,-1,202,203,199,-1,199,201,202,-1,144,143,199,-1,199,203,144,-1,200,204,205,-1,205,201,200,-1,206,207,205,-1,205,204,206,-1,208,209,205,-1,205,207,208,-1,202,201,205,-1,205,209,202,-1,206,210,211,-1,211,207,206,-1,138,141,211,-1,211,210,138,-1,197,212,211,-1,211,141,197,-1,208,207,211,-1,211,212,208,-1,206,213,214,-1,214,215,206,-1,216,217,214,-1,214,213,216,-1,218,219,214,-1,214,217,218,-1,220,215,214,-1,214,219,220,-1,216,221,222,-1,222,217,216,-1,223,224,222,-1,222,221,223,-1,225,226,222,-1,222,224,225,-1,218,217,222,-1,222,226,218,-1,223,227,228,-1,228,224,223,-1,138,229,228,-1,228,227,138,-1,230,231,228,-1,228,229,230,-1,225,224,228,-1,228,231,225,-1,138,210,232,-1,232,229,138,-1,206,215,232,-1,232,210,206,-1,220,233,232,-1,232,215,220,-1,230,229,232,-1,232,233,230,-1,216,234,235,-1,235,236,216,-1,237,238,235,-1,235,234,237,-1,239,240,235,-1,235,238,239,-1,241,236,235,-1,235,240,241,-1,237,242,243,-1,243,238,237,-1,244,245,243,-1,243,242,244,-1,246,247,243,-1,243,245,246,-1,239,238,243,-1,243,247,239,-1,244,248,249,-1,249,245,244,-1,223,250,249,-1,249,248,223,-1,251,252,249,-1,249,250,251,-1,246,245,249,-1,249,252,246,-1,223,221,253,-1,253,250,223,-1,216,236,253,-1,253,221,216,-1,241,254,253,-1,253,236,241,-1,251,250,253,-1,253,254,251,-1,237,255,256,-1,256,257,237,-1,258,259,256,-1,256,255,258,-1,260,261,256,-1,256,259,260,-1,264,257,256,-1,256,261,264,-1,258,265,266,-1,266,259,258,-1,267,268,266,-1,266,265,267,-1,269,270,266,-1,266,268,269,-1,260,259,266,-1,266,270,260,-1,267,271,272,-1,272,268,267,-1,244,273,272,-1,272,271,244,-1,274,275,272,-1,272,273,274,-1,269,268,272,-1,272,275,269,-1,244,242,276,-1,276,273,244,-1,237,257,276,-1,276,242,237,-1,264,277,276,-1,276,257,264,-1,274,273,276,-1,276,277,274,-1,258,278,279,-1,279,280,258,-1,281,282,279,-1,279,278,281,-1,283,284,279,-1,279,282,283,-1,285,280,279,-1,279,284,285,-1,281,286,287,-1,287,282,281,-1,288,289,287,-1,287,286,288,-1,290,291,287,-1,287,289,290,-1,283,282,287,-1,287,291,283,-1,288,329,330,-1,330,289,288,-1,267,331,330,-1,330,329,267,-1,332,333,330,-1,330,331,332,-1,290,289,330,-1,330,333,290,-1,267,265,334,-1,334,331,267,-1,258,280,334,-1,334,265,258,-1,285,335,334,-1,334,280,285,-1,332,331,334,-1,334,335,332,-1,281,336,337,-1,337,338,281,-1,125,339,337,-1,337,336,125,-1,340,341,337,-1,337,339,340,-1,342,338,337,-1,337,341,342,-1,125,123,343,-1,343,339,125,-1,118,344,343,-1,343,123,118,-1,345,346,343,-1,343,344,345,-1,340,339,343,-1,343,346,340,-1,118,347,348,-1,348,344,118,-1,288,349,348,-1,348,347,288,-1,350,351,348,-1,348,349,350,-1,345,344,348,-1,348,351,345,-1,288,286,352,-1,352,349,288,-1,281,338,352,-1,352,286,281,-1,342,353,352,-1,352,338,342,-1,350,349,352,-1,352,353,350,-1,432,431,445,-1,445,446,432,-1,13,447,445,-1,445,431,13,-1,448,449,445,-1,445,447,448,-1,450,446,445,-1,445,449,450,-1,354,355,356,-1,356,357,354,-1,358,359,356,-1,356,355,358,-1,53,50,356,-1,356,359,53,-1,49,357,356,-1,356,50,49,-1,358,360,361,-1,361,359,358,-1,362,363,361,-1,361,360,362,-1,55,54,361,-1,361,363,55,-1,53,359,361,-1,361,54,53,-1,362,365,366,-1,366,363,362,-1,367,368,366,-1,366,365,367,-1,57,56,366,-1,366,368,57,-1,55,363,366,-1,366,56,55,-1,367,369,370,-1,370,368,367,-1,354,357,370,-1,370,369,354,-1,49,52,370,-1,370,357,49,-1,57,368,370,-1,370,52,57,-1,371,372,373,-1,373,374,371,-1,375,376,373,-1,373,372,375,-1,62,59,373,-1,373,376,62,-1,58,374,373,-1,373,59,58,-1,375,377,378,-1,378,376,375,-1,379,380,378,-1,378,377,379,-1,64,63,378,-1,378,380,64,-1,62,376,378,-1,378,63,62,-1,379,381,382,-1,382,380,379,-1,383,384,382,-1,382,381,383,-1,66,65,382,-1,382,384,66,-1,64,380,382,-1,382,65,64,-1,383,385,386,-1,386,384,383,-1,371,374,386,-1,386,385,371,-1,58,61,386,-1,386,374,58,-1,66,384,386,-1,386,61,66,-1,387,388,389,-1,389,390,387,-1,391,392,389,-1,389,388,391,-1,71,68,389,-1,389,392,71,-1,67,390,389,-1,389,68,67,-1,391,393,394,-1,394,392,391,-1,395,396,394,-1,394,393,395,-1,73,72,394,-1,394,396,73,-1,71,392,394,-1,394,72,71,-1,395,397,398,-1,398,396,395,-1,399,400,398,-1,398,397,399,-1,75,74,398,-1,398,400,75,-1,73,396,398,-1,398,74,73,-1,399,401,402,-1,402,400,399,-1,387,390,402,-1,402,401,387,-1,67,70,402,-1,402,390,67,-1,75,400,402,-1,402,70,75,-1,403,404,405,-1,405,406,403,-1,407,408,405,-1,405,404,407,-1,80,77,405,-1,405,408,80,-1,76,406,405,-1,405,77,76,-1,407,409,410,-1,410,408,407,-1,411,412,410,-1,410,409,411,-1,82,81,410,-1,410,412,82,-1,80,408,410,-1,410,81,80,-1,411,413,414,-1,414,412,411,-1,415,416,414,-1,414,413,415,-1,84,83,414,-1,414,416,84,-1,82,412,414,-1,414,83,82,-1,415,417,418,-1,418,416,415,-1,403,406,418,-1,418,417,403,-1,76,79,418,-1,418,406,76,-1,84,416,418,-1,418,79,84,-1,419,420,457,-1,457,458,419,-1,459,460,457,-1,457,420,459,-1,91,86,457,-1,457,460,91,-1,85,458,457,-1,457,86,85,-1,459,461,462,-1,462,460,459,-1,463,464,462,-1,462,461,463,-1,93,92,462,-1,462,464,93,-1,91,460,462,-1,462,92,91,-1,463,465,466,-1,466,464,463,-1,467,468,466,-1,466,465,467,-1,95,94,466,-1,466,468,95,-1,93,464,466,-1,466,94,93,-1,467,469,470,-1,470,468,467,-1,419,458,470,-1,470,469,419,-1,85,90,470,-1,470,458,85,-1,95,468,470,-1,470,90,95,-1,471,472,473,-1,473,474,471,-1,475,476,473,-1,473,472,475,-1,100,97,473,-1,473,476,100,-1,96,474,473,-1,473,97,96,-1,475,477,478,-1,478,476,475,-1,479,480,478,-1,478,477,479,-1,102,101,478,-1,478,480,102,-1,100,476,478,-1,478,101,100,-1,479,481,482,-1,482,480,479,-1,483,484,482,-1,482,481,483,-1,104,103,482,-1,482,484,104,-1,102,480,482,-1,482,103,102,-1,483,485,486,-1,486,484,483,-1,471,474,486,-1,486,485,471,-1,96,99,486,-1,486,474,96,-1,104,484,486,-1,486,99,104,-1,487,488,489,-1,489,490,487,-1,491,493,489,-1,489,488,491,-1,109,106,489,-1,489,493,109,-1,105,490,489,-1,489,106,105,-1,491,494,495,-1,495,493,491,-1,496,497,495,-1,495,494,496,-1,111,110,495,-1,495,497,111,-1,109,493,495,-1,495,110,109,-1,496,498,499,-1,499,497,496,-1,500,501,499,-1,499,498,500,-1,113,112,499,-1,499,501,113,-1,111,497,499,-1,499,112,111,-1,500,502,503,-1,503,501,500,-1,487,490,503,-1,503,502,487,-1,105,108,503,-1,503,490,105,-1,113,501,503,-1,503,108,113,-1,120,504,505,-1,505,121,120,-1,358,355,505,-1,505,504,358,-1,354,506,505,-1,505,355,354,-1,122,121,505,-1,505,506,122,-1,127,507,508,-1,508,128,127,-1,362,360,508,-1,508,507,362,-1,358,504,508,-1,508,360,358,-1,120,128,508,-1,508,504,120,-1,133,509,510,-1,510,134,133,-1,367,365,510,-1,510,509,367,-1,362,507,510,-1,510,365,362,-1,127,134,510,-1,510,507,127,-1,122,506,511,-1,511,137,122,-1,354,369,511,-1,511,506,354,-1,367,509,511,-1,511,369,367,-1,133,137,511,-1,511,509,133,-1,144,512,513,-1,513,196,144,-1,375,372,513,-1,513,512,375,-1,371,514,513,-1,513,372,371,-1,197,196,513,-1,513,514,197,-1,202,515,516,-1,516,203,202,-1,379,377,516,-1,516,515,379,-1,375,512,516,-1,516,377,375,-1,144,203,516,-1,516,512,144,-1,208,517,518,-1,518,209,208,-1,383,381,518,-1,518,517,383,-1,379,515,518,-1,518,381,379,-1,202,209,518,-1,518,515,202,-1,197,514,519,-1,519,212,197,-1,371,385,519,-1,519,514,371,-1,383,517,519,-1,519,385,383,-1,208,212,519,-1,519,517,208,-1,218,520,521,-1,521,219,218,-1,391,388,521,-1,521,520,391,-1,387,522,521,-1,521,388,387,-1,220,219,521,-1,521,522,220,-1,225,523,524,-1,524,226,225,-1,395,393,524,-1,524,523,395,-1,391,520,524,-1,524,393,391,-1,218,226,524,-1,524,520,218,-1,230,525,526,-1,526,231,230,-1,399,397,526,-1,526,525,399,-1,395,523,526,-1,526,397,395,-1,225,231,526,-1,526,523,225,-1,220,522,527,-1,527,233,220,-1,387,401,527,-1,527,522,387,-1,399,525,527,-1,527,401,399,-1,230,233,527,-1,527,525,230,-1,239,528,529,-1,529,240,239,-1,407,404,529,-1,529,528,407,-1,403,530,529,-1,529,404,403,-1,241,240,529,-1,529,530,241,-1,246,531,532,-1,532,247,246,-1,411,409,532,-1,532,531,411,-1,407,528,532,-1,532,409,407,-1,239,247,532,-1,532,528,239,-1,251,533,534,-1,534,252,251,-1,415,413,534,-1,534,533,415,-1,411,531,534,-1,534,413,411,-1,246,252,534,-1,534,531,246,-1,241,530,535,-1,535,254,241,-1,403,417,535,-1,535,530,403,-1,415,533,535,-1,535,417,415,-1,251,254,535,-1,535,533,251,-1,260,536,537,-1,537,261,260,-1,459,420,537,-1,537,536,459,-1,419,538,537,-1,537,420,419,-1,264,261,537,-1,537,538,264,-1,269,539,540,-1,540,270,269,-1,463,461,540,-1,540,539,463,-1,459,536,540,-1,540,461,459,-1,260,270,540,-1,540,536,260,-1,274,541,542,-1,542,275,274,-1,467,465,542,-1,542,541,467,-1,463,539,542,-1,542,465,463,-1,269,275,542,-1,542,539,269,-1,264,538,543,-1,543,277,264,-1,419,469,543,-1,543,538,419,-1,467,541,543,-1,543,469,467,-1,274,277,543,-1,543,541,274,-1,283,544,545,-1,545,284,283,-1,475,472,545,-1,545,544,475,-1,471,546,545,-1,545,472,471,-1,285,284,545,-1,545,546,285,-1,290,547,548,-1,548,291,290,-1,479,477,548,-1,548,547,479,-1,475,544,548,-1,548,477,475,-1,283,291,548,-1,548,544,283,-1,332,598,600,-1,600,333,332,-1,483,481,600,-1,600,598,483,-1,479,547,600,-1,600,481,479,-1,290,333,600,-1,600,547,290,-1,285,546,602,-1,602,335,285,-1,471,485,602,-1,602,546,471,-1,483,598,602,-1,602,485,483,-1,332,335,602,-1,602,598,332,-1,340,604,606,-1,606,341,340,-1,491,488,606,-1,606,604,491,-1,487,609,606,-1,606,488,487,-1,342,341,606,-1,606,609,342,-1,345,616,642,-1,642,346,345,-1,496,494,642,-1,642,616,496,-1,491,604,642,-1,642,494,491,-1,340,346,642,-1,642,604,340,-1,350,643,644,-1,644,351,350,-1,500,498,644,-1,644,643,500,-1,496,616,644,-1,644,498,496,-1,345,351,644,-1,644,616,345,-1,342,609,645,-1,645,353,342,-1,487,502,645,-1,645,609,487,-1,500,643,645,-1,645,502,500,-1,350,353,645,-1,645,643,350,-1,448,451,452,-1,452,449,448,-1,453,454,452,-1,452,451,453,-1,455,456,452,-1,452,454,455,-1,450,449,452,-1,452,456,450,-1,492,549,550,-1,550,551,492,-1,552,553,550,-1,550,549,552,-1,554,555,550,-1,550,553,554,-1,556,551,550,-1,550,555,556,-1,557,558,559,-1,559,560,557,-1,561,562,559,-1,559,558,561,-1,563,564,559,-1,559,562,563,-1,565,560,559,-1,559,564,565,-1,552,566,567,-1,567,553,552,-1,568,569,567,-1,567,566,568,-1,570,571,567,-1,567,569,570,-1,554,553,567,-1,567,571,554,-1,561,572,573,-1,573,562,561,-1,574,575,573,-1,573,572,574,-1,576,577,573,-1,573,575,576,-1,563,562,573,-1,573,577,563,-1,568,578,579,-1,579,569,568,-1,580,581,579,-1,579,578,580,-1,582,583,579,-1,579,581,582,-1,570,569,579,-1,579,583,570,-1,574,584,585,-1,585,575,574,-1,586,587,585,-1,585,584,586,-1,588,589,585,-1,585,587,588,-1,576,575,585,-1,585,589,576,-1,580,590,591,-1,591,581,580,-1,592,593,591,-1,591,590,592,-1,594,595,591,-1,591,593,594,-1,582,581,591,-1,591,595,582,-1,586,596,597,-1,597,587,586,-1,599,601,597,-1,597,596,599,-1,603,605,597,-1,597,601,603,-1,588,587,597,-1,597,605,588,-1,592,607,608,-1,608,593,592,-1,610,611,608,-1,608,607,610,-1,612,613,608,-1,608,611,612,-1,594,593,608,-1,608,613,594,-1,599,614,615,-1,615,601,599,-1,617,618,615,-1,615,614,617,-1,619,620,615,-1,615,618,619,-1,603,601,615,-1,615,620,603,-1,610,621,622,-1,622,611,610,-1,623,624,622,-1,622,621,623,-1,625,626,622,-1,622,624,625,-1,612,611,622,-1,622,626,612,-1,617,627,628,-1,628,618,617,-1,629,630,628,-1,628,627,629,-1,631,632,628,-1,628,630,631,-1,619,618,628,-1,628,632,619,-1,623,633,634,-1,634,624,623,-1,177,176,634,-1,634,633,177,-1,175,635,634,-1,634,176,175,-1,625,624,634,-1,634,635,625,-1,629,636,637,-1,637,630,629,-1,183,182,637,-1,637,636,183,-1,181,638,637,-1,637,182,181,-1,631,630,637,-1,637,638,631,-1,557,639,640,-1,640,558,557,-1,641,707,640,-1,640,639,641,-1,708,793,640,-1,640,707,708,-1,561,558,640,-1,640,793,561,-1,561,793,822,-1,822,572,561,-1,708,823,822,-1,822,793,708,-1,824,825,822,-1,822,823,824,-1,574,572,822,-1,822,825,574,-1,574,825,826,-1,826,584,574,-1,824,827,826,-1,826,825,824,-1,828,829,826,-1,826,827,828,-1,586,584,826,-1,826,829,586,-1,586,829,830,-1,830,596,586,-1,828,831,830,-1,830,829,828,-1,832,833,830,-1,830,831,832,-1,599,596,830,-1,830,833,599,-1,599,833,834,-1,834,614,599,-1,832,835,834,-1,834,833,832,-1,836,837,834,-1,834,835,836,-1,617,614,834,-1,834,837,617,-1,617,837,838,-1,838,627,617,-1,836,839,838,-1,838,837,836,-1,840,841,838,-1,838,839,840,-1,629,627,838,-1,838,841,629,-1,629,841,842,-1,842,636,629,-1,840,843,842,-1,842,841,840,-1,306,305,842,-1,842,843,306,-1,183,636,842,-1,842,305,183,-1,175,309,844,-1,844,635,175,-1,313,845,844,-1,844,309,313,-1,846,847,844,-1,844,845,846,-1,625,635,844,-1,844,847,625,-1,625,847,848,-1,848,626,625,-1,846,849,848,-1,848,847,846,-1,850,851,848,-1,848,849,850,-1,612,626,848,-1,848,851,612,-1,612,851,852,-1,852,613,612,-1,850,853,852,-1,852,851,850,-1,854,855,852,-1,852,853,854,-1,594,613,852,-1,852,855,594,-1,594,855,856,-1,856,595,594,-1,854,857,856,-1,856,855,854,-1,858,859,856,-1,856,857,858,-1,582,595,856,-1,856,859,582,-1,582,859,860,-1,860,583,582,-1,858,861,860,-1,860,859,858,-1,862,863,860,-1,860,861,862,-1,570,583,860,-1,860,863,570,-1,570,863,864,-1,864,571,570,-1,862,865,864,-1,864,863,862,-1,866,867,864,-1,864,865,866,-1,554,571,864,-1,864,867,554,-1,554,867,868,-1,868,555,554,-1,866,869,868,-1,868,867,866,-1,871,872,868,-1,868,869,871,-1,556,555,868,-1,868,872,556,-1,563,874,875,-1,875,564,563,-1,432,877,875,-1,875,874,432,-1,565,564,875,-1,875,877,565,-1,576,878,880,-1,880,577,576,-1,432,874,880,-1,880,878,432,-1,563,577,880,-1,880,874,563,-1,588,881,883,-1,883,589,588,-1,432,878,883,-1,883,881,432,-1,576,589,883,-1,883,878,576,-1,603,884,885,-1,885,605,603,-1,432,881,885,-1,885,884,432,-1,588,605,885,-1,885,881,588,-1,619,887,888,-1,888,620,619,-1,432,884,888,-1,888,887,432,-1,603,620,888,-1,888,884,603,-1,631,889,890,-1,890,632,631,-1,432,887,890,-1,890,889,432,-1,619,632,890,-1,890,887,619,-1,181,444,891,-1,891,638,181,-1,432,889,891,-1,891,444,432,-1,631,638,891,-1,891,889,631,-1,646,647,648,-1,648,649,646,-1,650,651,648,-1,648,647,650,-1,652,653,648,-1,648,651,652,-1,654,649,648,-1,648,653,654,-1,655,656,657,-1,657,658,655,-1,659,660,657,-1,657,656,659,-1,661,662,657,-1,657,660,661,-1,663,658,657,-1,657,662,663,-1,664,665,666,-1,666,667,664,-1,668,669,666,-1,666,665,668,-1,670,671,666,-1,666,669,670,-1,672,667,666,-1,666,671,672,-1,673,674,675,-1,675,676,673,-1,677,678,675,-1,675,674,677,-1,679,680,675,-1,675,678,679,-1,681,676,675,-1,675,680,681,-1,682,683,684,-1,684,685,682,-1,686,687,684,-1,684,683,686,-1,688,689,684,-1,684,687,688,-1,690,685,684,-1,684,689,690,-1,691,692,693,-1,693,694,691,-1,695,696,693,-1,693,692,695,-1,697,698,693,-1,693,696,697,-1,699,694,693,-1,693,698,699,-1,700,701,702,-1,702,703,700,-1,704,705,702,-1,702,701,704,-1,706,709,702,-1,702,705,706,-1,710,703,702,-1,702,709,710,-1,711,712,713,-1,713,714,711,-1,715,716,713,-1,713,712,715,-1,717,718,713,-1,713,716,717,-1,719,714,713,-1,713,718,719,-1,719,718,720,-1,720,721,719,-1,717,722,720,-1,720,718,717,-1,723,724,720,-1,720,722,723,-1,725,721,720,-1,720,724,725,-1,725,724,726,-1,726,727,725,-1,723,728,726,-1,726,724,723,-1,729,730,726,-1,726,728,729,-1,731,727,726,-1,726,730,731,-1,731,730,732,-1,732,733,731,-1,729,734,732,-1,732,730,729,-1,715,712,732,-1,732,734,715,-1,711,733,732,-1,732,712,711,-1,735,736,737,-1,737,738,735,-1,739,740,737,-1,737,736,739,-1,741,742,737,-1,737,740,741,-1,142,738,737,-1,737,742,142,-1,142,742,743,-1,743,198,142,-1,741,744,743,-1,743,742,741,-1,745,746,743,-1,743,744,745,-1,200,198,743,-1,743,746,200,-1,200,746,747,-1,747,748,200,-1,745,749,747,-1,747,746,745,-1,750,751,747,-1,747,749,750,-1,752,748,747,-1,747,751,752,-1,752,751,753,-1,753,754,752,-1,750,755,753,-1,753,751,750,-1,739,736,753,-1,753,755,739,-1,735,754,753,-1,753,736,735,-1,752,756,757,-1,757,758,752,-1,759,760,757,-1,757,756,759,-1,761,762,757,-1,757,760,761,-1,763,758,757,-1,757,762,763,-1,763,762,764,-1,764,765,763,-1,761,766,764,-1,764,762,761,-1,767,768,764,-1,764,766,767,-1,769,765,764,-1,764,768,769,-1,769,768,770,-1,770,771,769,-1,767,772,770,-1,770,768,767,-1,773,774,770,-1,770,772,773,-1,735,771,770,-1,770,774,735,-1,735,774,775,-1,775,754,735,-1,773,776,775,-1,775,774,773,-1,759,756,775,-1,775,776,759,-1,752,754,775,-1,775,756,752,-1,763,777,778,-1,778,779,763,-1,780,781,778,-1,778,777,780,-1,782,783,778,-1,778,781,782,-1,784,779,778,-1,778,783,784,-1,784,783,785,-1,785,786,784,-1,782,787,785,-1,785,783,782,-1,788,789,785,-1,785,787,788,-1,790,786,785,-1,785,789,790,-1,790,789,791,-1,791,792,790,-1,788,794,791,-1,791,789,788,-1,795,796,791,-1,791,794,795,-1,769,792,791,-1,791,796,769,-1,769,796,797,-1,797,765,769,-1,795,798,797,-1,797,796,795,-1,780,777,797,-1,797,798,780,-1,763,765,797,-1,797,777,763,-1,784,799,800,-1,800,801,784,-1,802,803,800,-1,800,799,802,-1,804,805,800,-1,800,803,804,-1,806,801,800,-1,800,805,806,-1,806,805,807,-1,807,808,806,-1,804,809,807,-1,807,805,804,-1,810,811,807,-1,807,809,810,-1,812,808,807,-1,807,811,812,-1,812,811,813,-1,813,814,812,-1,810,815,813,-1,813,811,810,-1,816,817,813,-1,813,815,816,-1,790,814,813,-1,813,817,790,-1,790,817,818,-1,818,786,790,-1,816,819,818,-1,818,817,816,-1,802,799,818,-1,818,819,802,-1,784,786,818,-1,818,799,784,-1,806,820,821,-1,821,870,806,-1,873,876,821,-1,821,820,873,-1,879,882,821,-1,821,876,879,-1,886,870,821,-1,821,882,886,-1,886,882,900,-1,900,901,886,-1,879,902,900,-1,900,882,879,-1,903,904,900,-1,900,902,903,-1,905,901,900,-1,900,904,905,-1,905,904,906,-1,906,907,905,-1,903,908,906,-1,906,904,903,-1,909,910,906,-1,906,908,909,-1,812,907,906,-1,906,910,812,-1,812,910,911,-1,911,808,812,-1,909,912,911,-1,911,910,909,-1,873,820,911,-1,911,912,873,-1,806,808,911,-1,911,820,806,-1,886,913,914,-1,914,915,886,-1,916,917,914,-1,914,913,916,-1,918,919,914,-1,914,917,918,-1,725,915,914,-1,914,919,725,-1,725,919,920,-1,920,721,725,-1,918,921,920,-1,920,919,918,-1,922,923,920,-1,920,921,922,-1,719,721,920,-1,920,923,719,-1,719,923,924,-1,924,925,719,-1,922,926,924,-1,924,923,922,-1,927,928,924,-1,924,926,927,-1,905,925,924,-1,924,928,905,-1,905,928,929,-1,929,901,905,-1,927,930,929,-1,929,928,927,-1,916,913,929,-1,929,930,916,-1,886,901,929,-1,929,913,886,-1,432,446,892,-1,892,877,432,-1,450,893,892,-1,892,446,450,-1,894,895,892,-1,892,893,894,-1,565,877,892,-1,892,895,565,-1,931,932,933,-1,933,934,931,-1,646,649,933,-1,933,932,646,-1,654,935,933,-1,933,649,654,-1,936,934,933,-1,933,935,936,-1,936,935,937,-1,937,938,936,-1,654,653,937,-1,937,935,654,-1,652,939,937,-1,937,653,652,-1,940,938,937,-1,937,939,940,-1,940,939,941,-1,941,942,940,-1,652,651,941,-1,941,939,652,-1,650,943,941,-1,941,651,650,-1,944,942,941,-1,941,943,944,-1,944,943,945,-1,945,946,944,-1,650,647,945,-1,945,943,650,-1,646,932,945,-1,945,647,646,-1,931,946,945,-1,945,932,931,-1,947,948,949,-1,949,950,947,-1,655,658,949,-1,949,948,655,-1,663,951,949,-1,949,658,663,-1,952,950,949,-1,949,951,952,-1,952,951,953,-1,953,954,952,-1,663,662,953,-1,953,951,663,-1,661,955,953,-1,953,662,661,-1,956,954,953,-1,953,955,956,-1,956,955,957,-1,957,958,956,-1,661,660,957,-1,957,955,661,-1,659,959,957,-1,957,660,659,-1,960,958,957,-1,957,959,960,-1,960,959,961,-1,961,962,960,-1,659,656,961,-1,961,959,659,-1,655,948,961,-1,961,656,655,-1,947,962,961,-1,961,948,947,-1,963,964,965,-1,965,966,963,-1,664,667,965,-1,965,964,664,-1,672,967,965,-1,965,667,672,-1,968,966,965,-1,965,967,968,-1,968,967,969,-1,969,970,968,-1,672,671,969,-1,969,967,672,-1,670,971,969,-1,969,671,670,-1,972,970,969,-1,969,971,972,-1,972,971,973,-1,973,974,972,-1,670,669,973,-1,973,971,670,-1,668,975,973,-1,973,669,668,-1,976,974,973,-1,973,975,976,-1,976,975,977,-1,977,978,976,-1,668,665,977,-1,977,975,668,-1,664,964,977,-1,977,665,664,-1,963,978,977,-1,977,964,963,-1,979,980,981,-1,981,982,979,-1,673,676,981,-1,981,980,673,-1,681,983,981,-1,981,676,681,-1,984,982,981,-1,981,983,984,-1,984,983,985,-1,985,986,984,-1,681,680,985,-1,985,983,681,-1,679,987,985,-1,985,680,679,-1,988,986,985,-1,985,987,988,-1,988,987,989,-1,989,990,988,-1,679,678,989,-1,989,987,679,-1,677,991,989,-1,989,678,677,-1,992,990,989,-1,989,991,992,-1,992,991,993,-1,993,994,992,-1,677,674,993,-1,993,991,677,-1,673,980,993,-1,993,674,673,-1,979,994,993,-1,993,980,979,-1,995,996,997,-1,997,998,995,-1,682,685,997,-1,997,996,682,-1,690,999,997,-1,997,685,690,-1,1000,998,997,-1,997,999,1000,-1,1000,999,1001,-1,1001,1002,1000,-1,690,689,1001,-1,1001,999,690,-1,688,1003,1001,-1,1001,689,688,-1,1004,1002,1001,-1,1001,1003,1004,-1,1004,1003,1005,-1,1005,1006,1004,-1,688,687,1005,-1,1005,1003,688,-1,686,1007,1005,-1,1005,687,686,-1,1008,1006,1005,-1,1005,1007,1008,-1,1008,1007,1009,-1,1009,1010,1008,-1,686,683,1009,-1,1009,1007,686,-1,682,996,1009,-1,1009,683,682,-1,995,1010,1009,-1,1009,996,995,-1,1011,1012,1013,-1,1013,1014,1011,-1,691,694,1013,-1,1013,1012,691,-1,699,1015,1013,-1,1013,694,699,-1,1016,1014,1013,-1,1013,1015,1016,-1,1016,1015,1017,-1,1017,1018,1016,-1,699,698,1017,-1,1017,1015,699,-1,697,1019,1017,-1,1017,698,697,-1,1020,1018,1017,-1,1017,1019,1020,-1,1020,1019,1021,-1,1021,1022,1020,-1,697,696,1021,-1,1021,1019,697,-1,695,1023,1021,-1,1021,696,695,-1,1024,1022,1021,-1,1021,1023,1024,-1,1024,1023,1025,-1,1025,1026,1024,-1,695,692,1025,-1,1025,1023,695,-1,691,1012,1025,-1,1025,692,691,-1,1011,1026,1025,-1,1025,1012,1011,-1,1027,1028,1029,-1,1029,1030,1027,-1,700,703,1029,-1,1029,1028,700,-1,710,1031,1029,-1,1029,703,710,-1,1032,1030,1029,-1,1029,1031,1032,-1,1032,1031,1033,-1,1033,1034,1032,-1,710,709,1033,-1,1033,1031,710,-1,706,1035,1033,-1,1033,709,706,-1,1036,1034,1033,-1,1033,1035,1036,-1,1036,1035,1037,-1,1037,1038,1036,-1,706,705,1037,-1,1037,1035,706,-1,704,1039,1037,-1,1037,705,704,-1,1040,1038,1037,-1,1037,1039,1040,-1,1040,1039,1041,-1,1041,1042,1040,-1,704,701,1041,-1,1041,1039,704,-1,700,1028,1041,-1,1041,701,700,-1,1027,1042,1041,-1,1041,1028,1027,-1,717,716,1043,-1,1043,1044,717,-1,715,1045,1043,-1,1043,716,715,-1,931,934,1043,-1,1043,1045,931,-1,936,1044,1043,-1,1043,934,936,-1,723,722,1046,-1,1046,1047,723,-1,717,1044,1046,-1,1046,722,717,-1,936,938,1046,-1,1046,1044,936,-1,940,1047,1046,-1,1046,938,940,-1,729,728,1048,-1,1048,1049,729,-1,723,1047,1048,-1,1048,728,723,-1,940,942,1048,-1,1048,1047,940,-1,944,1049,1048,-1,1048,942,944,-1,715,734,1050,-1,1050,1045,715,-1,729,1049,1050,-1,1050,734,729,-1,944,946,1050,-1,1050,1049,944,-1,931,1045,1050,-1,1050,946,931,-1,741,740,1051,-1,1051,1052,741,-1,739,1053,1051,-1,1051,740,739,-1,947,950,1051,-1,1051,1053,947,-1,952,1052,1051,-1,1051,950,952,-1,745,744,1054,-1,1054,1055,745,-1,741,1052,1054,-1,1054,744,741,-1,952,954,1054,-1,1054,1052,952,-1,956,1055,1054,-1,1054,954,956,-1,750,749,1056,-1,1056,1057,750,-1,745,1055,1056,-1,1056,749,745,-1,956,958,1056,-1,1056,1055,956,-1,960,1057,1056,-1,1056,958,960,-1,739,755,1058,-1,1058,1053,739,-1,750,1057,1058,-1,1058,755,750,-1,960,962,1058,-1,1058,1057,960,-1,947,1053,1058,-1,1058,962,947,-1,761,760,1059,-1,1059,1060,761,-1,759,1061,1059,-1,1059,760,759,-1,963,966,1059,-1,1059,1061,963,-1,968,1060,1059,-1,1059,966,968,-1,767,766,1062,-1,1062,1063,767,-1,761,1060,1062,-1,1062,766,761,-1,968,970,1062,-1,1062,1060,968,-1,972,1063,1062,-1,1062,970,972,-1,773,772,1064,-1,1064,1065,773,-1,767,1063,1064,-1,1064,772,767,-1,972,974,1064,-1,1064,1063,972,-1,976,1065,1064,-1,1064,974,976,-1,759,776,1066,-1,1066,1061,759,-1,773,1065,1066,-1,1066,776,773,-1,976,978,1066,-1,1066,1065,976,-1,963,1061,1066,-1,1066,978,963,-1,782,781,1067,-1,1067,1068,782,-1,780,1069,1067,-1,1067,781,780,-1,979,982,1067,-1,1067,1069,979,-1,984,1068,1067,-1,1067,982,984,-1,788,787,1070,-1,1070,1071,788,-1,782,1068,1070,-1,1070,787,782,-1,984,986,1070,-1,1070,1068,984,-1,988,1071,1070,-1,1070,986,988,-1,795,794,1072,-1,1072,1073,795,-1,788,1071,1072,-1,1072,794,788,-1,988,990,1072,-1,1072,1071,988,-1,992,1073,1072,-1,1072,990,992,-1,780,798,1074,-1,1074,1069,780,-1,795,1073,1074,-1,1074,798,795,-1,992,994,1074,-1,1074,1073,992,-1,979,1069,1074,-1,1074,994,979,-1,804,803,1075,-1,1075,1076,804,-1,802,1077,1075,-1,1075,803,802,-1,995,998,1075,-1,1075,1077,995,-1,1000,1076,1075,-1,1075,998,1000,-1,810,809,1078,-1,1078,1079,810,-1,804,1076,1078,-1,1078,809,804,-1,1000,1002,1078,-1,1078,1076,1000,-1,1004,1079,1078,-1,1078,1002,1004,-1,816,815,1080,-1,1080,1081,816,-1,810,1079,1080,-1,1080,815,810,-1,1004,1006,1080,-1,1080,1079,1004,-1,1008,1081,1080,-1,1080,1006,1008,-1,802,819,1082,-1,1082,1077,802,-1,816,1081,1082,-1,1082,819,816,-1,1008,1010,1082,-1,1082,1081,1008,-1,995,1077,1082,-1,1082,1010,995,-1,879,876,1083,-1,1083,1084,879,-1,873,1085,1083,-1,1083,876,873,-1,1011,1014,1083,-1,1083,1085,1011,-1,1016,1084,1083,-1,1083,1014,1016,-1,903,902,1086,-1,1086,1087,903,-1,879,1084,1086,-1,1086,902,879,-1,1016,1018,1086,-1,1086,1084,1016,-1,1020,1087,1086,-1,1086,1018,1020,-1,909,908,1088,-1,1088,1089,909,-1,903,1087,1088,-1,1088,908,903,-1,1020,1022,1088,-1,1088,1087,1020,-1,1024,1089,1088,-1,1088,1022,1024,-1,873,912,1090,-1,1090,1085,873,-1,909,1089,1090,-1,1090,912,909,-1,1024,1026,1090,-1,1090,1089,1024,-1,1011,1085,1090,-1,1090,1026,1011,-1,918,917,1091,-1,1091,1092,918,-1,916,1093,1091,-1,1091,917,916,-1,1027,1030,1091,-1,1091,1093,1027,-1,1032,1092,1091,-1,1091,1030,1032,-1,922,921,1094,-1,1094,1095,922,-1,918,1092,1094,-1,1094,921,918,-1,1032,1034,1094,-1,1094,1092,1032,-1,1036,1095,1094,-1,1094,1034,1036,-1,927,926,1096,-1,1096,1097,927,-1,922,1095,1096,-1,1096,926,922,-1,1036,1038,1096,-1,1096,1095,1036,-1,1040,1097,1096,-1,1096,1038,1040,-1,916,930,1098,-1,1098,1093,916,-1,927,1097,1098,-1,1098,930,927,-1,1040,1042,1098,-1,1098,1097,1040,-1,1027,1093,1098,-1,1098,1042,1027,-1,894,893,896,-1,896,897,894,-1,450,456,896,-1,896,893,450,-1,455,898,896,-1,896,456,455,-1,899,897,896,-1,896,898,899,-1]
IndexedFaceSet111.coordIndex = [0,521,265,-1,265,524,0,-1,1,525,265,-1,265,521,1,-1,4,523,265,-1,265,525,4,-1,3,524,265,-1,265,523,3,-1,2,522,266,-1,266,526,2,-1,23,558,266,-1,266,522,23,-1,24,551,266,-1,266,558,24,-1,5,526,266,-1,266,551,5,-1,3,523,267,-1,267,528,3,-1,4,529,267,-1,267,523,4,-1,7,527,267,-1,267,529,7,-1,6,528,267,-1,267,527,6,-1,5,551,268,-1,268,530,5,-1,24,559,268,-1,268,551,24,-1,25,552,268,-1,268,559,25,-1,8,530,268,-1,268,552,8,-1,6,527,269,-1,269,532,6,-1,7,533,269,-1,269,527,7,-1,10,531,269,-1,269,533,10,-1,9,532,269,-1,269,531,9,-1,8,552,270,-1,270,534,8,-1,25,560,270,-1,270,552,25,-1,26,553,270,-1,270,560,26,-1,11,534,270,-1,270,553,11,-1,9,531,271,-1,271,536,9,-1,10,537,271,-1,271,531,10,-1,13,535,271,-1,271,537,13,-1,12,536,271,-1,271,535,12,-1,11,553,272,-1,272,538,11,-1,26,561,272,-1,272,553,26,-1,27,554,272,-1,272,561,27,-1,14,538,272,-1,272,554,14,-1,12,535,273,-1,273,540,12,-1,13,541,273,-1,273,535,13,-1,16,539,273,-1,273,541,16,-1,15,540,273,-1,273,539,15,-1,14,554,274,-1,274,542,14,-1,27,562,274,-1,274,554,27,-1,28,555,274,-1,274,562,28,-1,17,542,274,-1,274,555,17,-1,15,539,275,-1,275,544,15,-1,16,545,275,-1,275,539,16,-1,19,543,275,-1,275,545,19,-1,18,544,275,-1,275,543,18,-1,17,555,276,-1,276,546,17,-1,28,563,276,-1,276,555,28,-1,29,556,276,-1,276,563,29,-1,20,546,276,-1,276,556,20,-1,18,543,277,-1,277,548,18,-1,19,549,277,-1,277,543,19,-1,21,547,277,-1,277,549,21,-1,160,548,277,-1,277,547,160,-1,20,556,278,-1,278,550,20,-1,29,564,278,-1,278,556,29,-1,30,557,278,-1,278,564,30,-1,22,550,278,-1,278,557,22,-1,2,526,279,-1,279,580,2,-1,5,581,279,-1,279,526,5,-1,33,565,279,-1,279,581,33,-1,32,580,279,-1,279,565,32,-1,5,530,280,-1,280,581,5,-1,8,582,280,-1,280,530,8,-1,34,566,280,-1,280,582,34,-1,33,581,280,-1,280,566,33,-1,8,534,281,-1,281,582,8,-1,11,583,281,-1,281,534,11,-1,35,567,281,-1,281,583,35,-1,34,582,281,-1,281,567,34,-1,11,538,282,-1,282,583,11,-1,14,584,282,-1,282,538,14,-1,36,568,282,-1,282,584,36,-1,35,583,282,-1,282,568,35,-1,14,542,283,-1,283,584,14,-1,17,585,283,-1,283,542,17,-1,37,569,283,-1,283,585,37,-1,36,584,283,-1,283,569,36,-1,17,546,284,-1,284,585,17,-1,20,586,284,-1,284,546,20,-1,38,570,284,-1,284,586,38,-1,37,585,284,-1,284,570,37,-1,20,550,285,-1,285,586,20,-1,22,587,285,-1,285,550,22,-1,168,571,285,-1,285,587,168,-1,38,586,285,-1,285,571,38,-1,21,549,286,-1,286,839,21,-1,19,588,286,-1,286,549,19,-1,39,572,286,-1,286,588,39,-1,170,839,286,-1,286,572,170,-1,19,545,287,-1,287,588,19,-1,16,589,287,-1,287,545,16,-1,40,573,287,-1,287,589,40,-1,39,588,287,-1,287,573,39,-1,16,541,288,-1,288,589,16,-1,13,590,288,-1,288,541,13,-1,41,574,288,-1,288,590,41,-1,40,589,288,-1,288,574,40,-1,13,537,289,-1,289,590,13,-1,10,591,289,-1,289,537,10,-1,42,575,289,-1,289,591,42,-1,41,590,289,-1,289,575,41,-1,10,533,290,-1,290,591,10,-1,7,592,290,-1,290,533,7,-1,43,576,290,-1,290,592,43,-1,42,591,290,-1,290,576,42,-1,7,529,291,-1,291,592,7,-1,4,593,291,-1,291,529,4,-1,44,577,291,-1,291,593,44,-1,43,592,291,-1,291,577,43,-1,4,525,292,-1,292,593,4,-1,1,579,292,-1,292,525,1,-1,31,578,292,-1,292,579,31,-1,44,593,292,-1,292,578,44,-1,24,558,293,-1,293,595,24,-1,23,594,293,-1,293,558,23,-1,45,595,293,-1,293,594,45,-1,25,559,294,-1,294,596,25,-1,24,595,294,-1,294,559,24,-1,45,596,294,-1,294,595,45,-1,26,560,295,-1,295,597,26,-1,25,596,295,-1,295,560,25,-1,45,597,295,-1,295,596,45,-1,27,561,296,-1,296,598,27,-1,26,597,296,-1,296,561,26,-1,45,598,296,-1,296,597,45,-1,28,562,297,-1,297,599,28,-1,27,598,297,-1,297,562,27,-1,45,599,297,-1,297,598,45,-1,29,563,298,-1,298,600,29,-1,28,599,298,-1,298,563,28,-1,45,600,298,-1,298,599,45,-1,30,564,299,-1,299,601,30,-1,29,600,299,-1,299,564,29,-1,45,601,299,-1,299,600,45,-1,75,667,300,-1,300,670,75,-1,76,668,300,-1,300,667,76,-1,77,669,300,-1,300,668,77,-1,78,670,300,-1,300,669,78,-1,79,675,301,-1,301,678,79,-1,80,676,301,-1,301,675,80,-1,81,677,301,-1,301,676,81,-1,82,678,301,-1,301,677,82,-1,83,683,302,-1,302,686,83,-1,84,684,302,-1,302,683,84,-1,85,685,302,-1,302,684,85,-1,86,686,302,-1,302,685,86,-1,87,691,303,-1,303,694,87,-1,88,692,303,-1,303,691,88,-1,89,693,303,-1,303,692,89,-1,90,694,303,-1,303,693,90,-1,91,699,304,-1,304,702,91,-1,92,700,304,-1,304,699,92,-1,93,701,304,-1,304,700,93,-1,94,702,304,-1,304,701,94,-1,95,707,305,-1,305,710,95,-1,96,708,305,-1,305,707,96,-1,97,709,305,-1,305,708,97,-1,98,710,305,-1,305,709,98,-1,99,715,306,-1,306,718,99,-1,100,716,306,-1,306,715,100,-1,101,717,306,-1,306,716,101,-1,102,718,306,-1,306,717,102,-1,32,565,307,-1,307,609,32,-1,33,610,307,-1,307,565,33,-1,104,752,307,-1,307,610,104,-1,103,609,307,-1,307,752,103,-1,33,603,308,-1,308,610,33,-1,44,611,308,-1,308,603,44,-1,105,753,308,-1,308,611,105,-1,104,610,308,-1,308,753,104,-1,44,578,309,-1,309,611,44,-1,31,612,309,-1,309,578,31,-1,106,754,309,-1,309,612,106,-1,105,611,309,-1,309,754,105,-1,31,602,310,-1,310,612,31,-1,32,609,310,-1,310,602,32,-1,103,755,310,-1,310,609,103,-1,106,612,310,-1,310,755,106,-1,38,571,311,-1,311,617,38,-1,168,618,311,-1,311,571,168,-1,108,756,311,-1,311,618,108,-1,107,617,311,-1,311,756,107,-1,168,900,312,-1,312,618,168,-1,170,619,312,-1,312,900,170,-1,109,757,312,-1,312,619,109,-1,108,618,312,-1,312,757,108,-1,170,572,313,-1,313,619,170,-1,39,620,313,-1,313,572,39,-1,110,758,313,-1,313,620,110,-1,109,619,313,-1,313,758,109,-1,39,604,314,-1,314,620,39,-1,38,617,314,-1,314,604,38,-1,107,759,314,-1,314,617,107,-1,110,620,314,-1,314,759,110,-1,39,573,315,-1,315,625,39,-1,40,626,315,-1,315,573,40,-1,112,760,315,-1,315,626,112,-1,111,625,315,-1,315,760,111,-1,40,605,316,-1,316,626,40,-1,37,627,316,-1,316,605,37,-1,113,761,316,-1,316,627,113,-1,112,626,316,-1,316,761,112,-1,37,570,317,-1,317,627,37,-1,38,628,317,-1,317,570,38,-1,114,762,317,-1,317,628,114,-1,113,627,317,-1,317,762,113,-1,38,604,318,-1,318,628,38,-1,39,625,318,-1,318,604,39,-1,111,763,318,-1,318,625,111,-1,114,628,318,-1,318,763,114,-1,40,574,319,-1,319,633,40,-1,41,634,319,-1,319,574,41,-1,116,764,319,-1,319,634,116,-1,115,633,319,-1,319,764,115,-1,41,606,320,-1,320,634,41,-1,36,635,320,-1,320,606,36,-1,117,765,320,-1,320,635,117,-1,116,634,320,-1,320,765,116,-1,36,569,321,-1,321,635,36,-1,37,636,321,-1,321,569,37,-1,118,766,321,-1,321,636,118,-1,117,635,321,-1,321,766,117,-1,37,605,322,-1,322,636,37,-1,40,633,322,-1,322,605,40,-1,115,767,322,-1,322,633,115,-1,118,636,322,-1,322,767,118,-1,41,575,323,-1,323,641,41,-1,42,642,323,-1,323,575,42,-1,120,768,323,-1,323,642,120,-1,119,641,323,-1,323,768,119,-1,42,607,324,-1,324,642,42,-1,35,643,324,-1,324,607,35,-1,121,769,324,-1,324,643,121,-1,120,642,324,-1,324,769,120,-1,35,568,325,-1,325,643,35,-1,36,644,325,-1,325,568,36,-1,122,770,325,-1,325,644,122,-1,121,643,325,-1,325,770,121,-1,36,606,326,-1,326,644,36,-1,41,641,326,-1,326,606,41,-1,119,771,326,-1,326,641,119,-1,122,644,326,-1,326,771,122,-1,42,576,327,-1,327,649,42,-1,43,650,327,-1,327,576,43,-1,124,772,327,-1,327,650,124,-1,123,649,327,-1,327,772,123,-1,43,608,328,-1,328,650,43,-1,34,651,328,-1,328,608,34,-1,125,773,328,-1,328,651,125,-1,124,650,328,-1,328,773,124,-1,34,567,329,-1,329,651,34,-1,35,652,329,-1,329,567,35,-1,126,774,329,-1,329,652,126,-1,125,651,329,-1,329,774,125,-1,35,607,330,-1,330,652,35,-1,42,649,330,-1,330,607,42,-1,123,775,330,-1,330,649,123,-1,126,652,330,-1,330,775,126,-1,43,577,331,-1,331,657,43,-1,44,658,331,-1,331,577,44,-1,128,776,331,-1,331,658,128,-1,127,657,331,-1,331,776,127,-1,44,603,332,-1,332,658,44,-1,33,659,332,-1,332,603,33,-1,129,777,332,-1,332,659,129,-1,128,658,332,-1,332,777,128,-1,33,566,333,-1,333,659,33,-1,34,660,333,-1,333,566,34,-1,130,778,333,-1,333,660,130,-1,129,659,333,-1,333,778,129,-1,34,608,334,-1,334,660,34,-1,43,657,334,-1,334,608,43,-1,127,779,334,-1,334,657,127,-1,130,660,334,-1,334,779,130,-1,45,594,335,-1,335,953,45,-1,23,666,335,-1,335,594,23,-1,131,780,335,-1,335,666,131,-1,234,953,335,-1,335,780,234,-1,46,613,336,-1,336,671,46,-1,47,672,336,-1,336,613,47,-1,76,667,336,-1,336,672,76,-1,75,671,336,-1,336,667,75,-1,47,614,337,-1,337,672,47,-1,48,673,337,-1,337,614,48,-1,77,668,337,-1,337,673,77,-1,76,672,337,-1,337,668,76,-1,48,615,338,-1,338,673,48,-1,49,674,338,-1,338,615,49,-1,78,669,338,-1,338,674,78,-1,77,673,338,-1,338,669,77,-1,49,616,339,-1,339,674,49,-1,46,671,339,-1,339,616,46,-1,75,670,339,-1,339,671,75,-1,78,674,339,-1,339,670,78,-1,50,621,340,-1,340,679,50,-1,51,680,340,-1,340,621,51,-1,80,675,340,-1,340,680,80,-1,79,679,340,-1,340,675,79,-1,51,622,341,-1,341,680,51,-1,52,681,341,-1,341,622,52,-1,81,676,341,-1,341,681,81,-1,80,680,341,-1,341,676,80,-1,52,623,342,-1,342,681,52,-1,53,682,342,-1,342,623,53,-1,82,677,342,-1,342,682,82,-1,81,681,342,-1,342,677,81,-1,53,624,343,-1,343,682,53,-1,50,679,343,-1,343,624,50,-1,79,678,343,-1,343,679,79,-1,82,682,343,-1,343,678,82,-1,54,629,344,-1,344,687,54,-1,55,688,344,-1,344,629,55,-1,84,683,344,-1,344,688,84,-1,83,687,344,-1,344,683,83,-1,55,630,345,-1,345,688,55,-1,56,689,345,-1,345,630,56,-1,85,684,345,-1,345,689,85,-1,84,688,345,-1,345,684,84,-1,56,631,346,-1,346,689,56,-1,57,690,346,-1,346,631,57,-1,86,685,346,-1,346,690,86,-1,85,689,346,-1,346,685,85,-1,57,632,347,-1,347,690,57,-1,54,687,347,-1,347,632,54,-1,83,686,347,-1,347,687,83,-1,86,690,347,-1,347,686,86,-1,58,637,348,-1,348,695,58,-1,59,696,348,-1,348,637,59,-1,88,691,348,-1,348,696,88,-1,87,695,348,-1,348,691,87,-1,59,638,349,-1,349,696,59,-1,60,697,349,-1,349,638,60,-1,89,692,349,-1,349,697,89,-1,88,696,349,-1,349,692,88,-1,60,639,350,-1,350,697,60,-1,61,698,350,-1,350,639,61,-1,90,693,350,-1,350,698,90,-1,89,697,350,-1,350,693,89,-1,61,640,351,-1,351,698,61,-1,58,695,351,-1,351,640,58,-1,87,694,351,-1,351,695,87,-1,90,698,351,-1,351,694,90,-1,62,645,352,-1,352,703,62,-1,63,704,352,-1,352,645,63,-1,92,699,352,-1,352,704,92,-1,91,703,352,-1,352,699,91,-1,63,646,353,-1,353,704,63,-1,64,705,353,-1,353,646,64,-1,93,700,353,-1,353,705,93,-1,92,704,353,-1,353,700,92,-1,64,647,354,-1,354,705,64,-1,65,706,354,-1,354,647,65,-1,94,701,354,-1,354,706,94,-1,93,705,354,-1,354,701,93,-1,65,648,355,-1,355,706,65,-1,62,703,355,-1,355,648,62,-1,91,702,355,-1,355,703,91,-1,94,706,355,-1,355,702,94,-1,66,653,356,-1,356,711,66,-1,67,712,356,-1,356,653,67,-1,96,707,356,-1,356,712,96,-1,95,711,356,-1,356,707,95,-1,67,654,357,-1,357,712,67,-1,68,713,357,-1,357,654,68,-1,97,708,357,-1,357,713,97,-1,96,712,357,-1,357,708,96,-1,68,655,358,-1,358,713,68,-1,69,714,358,-1,358,655,69,-1,98,709,358,-1,358,714,98,-1,97,713,358,-1,358,709,97,-1,69,656,359,-1,359,714,69,-1,66,711,359,-1,359,656,66,-1,95,710,359,-1,359,711,95,-1,98,714,359,-1,359,710,98,-1,70,661,360,-1,360,719,70,-1,71,720,360,-1,360,661,71,-1,100,715,360,-1,360,720,100,-1,99,719,360,-1,360,715,99,-1,71,662,361,-1,361,720,71,-1,72,721,361,-1,361,662,72,-1,101,716,361,-1,361,721,101,-1,100,720,361,-1,361,716,100,-1,72,663,362,-1,362,721,72,-1,73,722,362,-1,362,663,73,-1,102,717,362,-1,362,722,102,-1,101,721,362,-1,362,717,101,-1,73,664,363,-1,363,722,73,-1,70,719,363,-1,363,664,70,-1,99,718,363,-1,363,719,99,-1,102,722,363,-1,363,718,102,-1,104,724,364,-1,364,752,104,-1,47,613,364,-1,364,724,47,-1,46,723,364,-1,364,613,46,-1,103,752,364,-1,364,723,103,-1,105,725,365,-1,365,753,105,-1,48,614,365,-1,365,725,48,-1,47,724,365,-1,365,614,47,-1,104,753,365,-1,365,724,104,-1,106,726,366,-1,366,754,106,-1,49,615,366,-1,366,726,49,-1,48,725,366,-1,366,615,48,-1,105,754,366,-1,366,725,105,-1,103,723,367,-1,367,755,103,-1,46,616,367,-1,367,723,46,-1,49,726,367,-1,367,616,49,-1,106,755,367,-1,367,726,106,-1,108,728,368,-1,368,756,108,-1,51,621,368,-1,368,728,51,-1,50,727,368,-1,368,621,50,-1,107,756,368,-1,368,727,107,-1,109,729,369,-1,369,757,109,-1,52,622,369,-1,369,729,52,-1,51,728,369,-1,369,622,51,-1,108,757,369,-1,369,728,108,-1,110,730,370,-1,370,758,110,-1,53,623,370,-1,370,730,53,-1,52,729,370,-1,370,623,52,-1,109,758,370,-1,370,729,109,-1,107,727,371,-1,371,759,107,-1,50,624,371,-1,371,727,50,-1,53,730,371,-1,371,624,53,-1,110,759,371,-1,371,730,110,-1,112,732,372,-1,372,760,112,-1,55,629,372,-1,372,732,55,-1,54,731,372,-1,372,629,54,-1,111,760,372,-1,372,731,111,-1,113,733,373,-1,373,761,113,-1,56,630,373,-1,373,733,56,-1,55,732,373,-1,373,630,55,-1,112,761,373,-1,373,732,112,-1,114,734,374,-1,374,762,114,-1,57,631,374,-1,374,734,57,-1,56,733,374,-1,374,631,56,-1,113,762,374,-1,374,733,113,-1,111,731,375,-1,375,763,111,-1,54,632,375,-1,375,731,54,-1,57,734,375,-1,375,632,57,-1,114,763,375,-1,375,734,114,-1,116,736,376,-1,376,764,116,-1,59,637,376,-1,376,736,59,-1,58,735,376,-1,376,637,58,-1,115,764,376,-1,376,735,115,-1,117,737,377,-1,377,765,117,-1,60,638,377,-1,377,737,60,-1,59,736,377,-1,377,638,59,-1,116,765,377,-1,377,736,116,-1,118,738,378,-1,378,766,118,-1,61,639,378,-1,378,738,61,-1,60,737,378,-1,378,639,60,-1,117,766,378,-1,378,737,117,-1,115,735,379,-1,379,767,115,-1,58,640,379,-1,379,735,58,-1,61,738,379,-1,379,640,61,-1,118,767,379,-1,379,738,118,-1,120,740,380,-1,380,768,120,-1,63,645,380,-1,380,740,63,-1,62,739,380,-1,380,645,62,-1,119,768,380,-1,380,739,119,-1,121,741,381,-1,381,769,121,-1,64,646,381,-1,381,741,64,-1,63,740,381,-1,381,646,63,-1,120,769,381,-1,381,740,120,-1,122,742,382,-1,382,770,122,-1,65,647,382,-1,382,742,65,-1,64,741,382,-1,382,647,64,-1,121,770,382,-1,382,741,121,-1,119,739,383,-1,383,771,119,-1,62,648,383,-1,383,739,62,-1,65,742,383,-1,383,648,65,-1,122,771,383,-1,383,742,122,-1,124,744,384,-1,384,772,124,-1,67,653,384,-1,384,744,67,-1,66,743,384,-1,384,653,66,-1,123,772,384,-1,384,743,123,-1,125,745,385,-1,385,773,125,-1,68,654,385,-1,385,745,68,-1,67,744,385,-1,385,654,67,-1,124,773,385,-1,385,744,124,-1,126,746,386,-1,386,774,126,-1,69,655,386,-1,386,746,69,-1,68,745,386,-1,386,655,68,-1,125,774,386,-1,386,745,125,-1,123,743,387,-1,387,775,123,-1,66,656,387,-1,387,743,66,-1,69,746,387,-1,387,656,69,-1,126,775,387,-1,387,746,126,-1,128,748,388,-1,388,776,128,-1,71,661,388,-1,388,748,71,-1,70,747,388,-1,388,661,70,-1,127,776,388,-1,388,747,127,-1,129,749,389,-1,389,777,129,-1,72,662,389,-1,389,749,72,-1,71,748,389,-1,389,662,71,-1,128,777,389,-1,389,748,128,-1,130,750,390,-1,390,778,130,-1,73,663,390,-1,390,750,73,-1,72,749,390,-1,390,663,72,-1,129,778,390,-1,390,749,129,-1,127,747,391,-1,391,779,127,-1,70,664,391,-1,391,747,70,-1,73,750,391,-1,391,664,73,-1,130,779,391,-1,391,750,130,-1,131,751,392,-1,392,780,131,-1,74,665,392,-1,392,751,74,-1,264,1040,392,-1,392,665,264,-1,234,780,392,-1,392,1040,234,-1,132,784,393,-1,393,781,132,-1,135,783,393,-1,393,784,135,-1,134,782,393,-1,393,783,134,-1,133,781,393,-1,393,782,133,-1,136,788,394,-1,394,785,136,-1,139,787,394,-1,394,788,139,-1,138,786,394,-1,394,787,138,-1,137,785,394,-1,394,786,137,-1,135,791,395,-1,395,783,135,-1,141,790,395,-1,395,791,141,-1,140,789,395,-1,395,790,140,-1,134,783,395,-1,395,789,134,-1,139,794,396,-1,396,787,139,-1,143,793,396,-1,396,794,143,-1,142,792,396,-1,396,793,142,-1,138,787,396,-1,396,792,138,-1,141,797,397,-1,397,790,141,-1,145,796,397,-1,397,797,145,-1,144,795,397,-1,397,796,144,-1,140,790,397,-1,397,795,140,-1,143,800,398,-1,398,793,143,-1,147,799,398,-1,398,800,147,-1,146,798,398,-1,398,799,146,-1,142,793,398,-1,398,798,142,-1,145,803,399,-1,399,796,145,-1,149,802,399,-1,399,803,149,-1,148,801,399,-1,399,802,148,-1,144,796,399,-1,399,801,144,-1,147,806,400,-1,400,799,147,-1,151,805,400,-1,400,806,151,-1,150,804,400,-1,400,805,150,-1,146,799,400,-1,400,804,146,-1,149,809,401,-1,401,802,149,-1,153,808,401,-1,401,809,153,-1,152,807,401,-1,401,808,152,-1,148,802,401,-1,401,807,148,-1,151,812,402,-1,402,805,151,-1,155,811,402,-1,402,812,155,-1,154,810,402,-1,402,811,154,-1,150,805,402,-1,402,810,150,-1,153,815,403,-1,403,808,153,-1,157,814,403,-1,403,815,157,-1,156,813,403,-1,403,814,156,-1,152,808,403,-1,403,813,152,-1,155,818,404,-1,404,811,155,-1,159,817,404,-1,404,818,159,-1,158,816,404,-1,404,817,158,-1,154,811,404,-1,404,816,154,-1,157,820,405,-1,405,814,157,-1,160,547,405,-1,405,820,160,-1,21,819,405,-1,405,547,21,-1,156,814,405,-1,405,819,156,-1,159,822,406,-1,406,817,159,-1,22,557,406,-1,406,822,22,-1,30,821,406,-1,406,557,30,-1,158,817,406,-1,406,821,158,-1,136,825,407,-1,407,788,136,-1,162,824,407,-1,407,825,162,-1,161,823,407,-1,407,824,161,-1,139,788,407,-1,407,823,139,-1,139,823,408,-1,408,794,139,-1,161,827,408,-1,408,823,161,-1,163,826,408,-1,408,827,163,-1,143,794,408,-1,408,826,143,-1,143,826,409,-1,409,800,143,-1,163,829,409,-1,409,826,163,-1,164,828,409,-1,409,829,164,-1,147,800,409,-1,409,828,147,-1,147,828,410,-1,410,806,147,-1,164,831,410,-1,410,828,164,-1,165,830,410,-1,410,831,165,-1,151,806,410,-1,410,830,151,-1,151,830,411,-1,411,812,151,-1,165,833,411,-1,411,830,165,-1,166,832,411,-1,411,833,166,-1,155,812,411,-1,411,832,155,-1,155,832,412,-1,412,818,155,-1,166,835,412,-1,412,832,166,-1,167,834,412,-1,412,835,167,-1,159,818,412,-1,412,834,159,-1,159,834,413,-1,413,822,159,-1,167,836,413,-1,413,834,167,-1,168,587,413,-1,413,836,168,-1,22,822,413,-1,413,587,22,-1,21,839,414,-1,414,819,21,-1,170,838,414,-1,414,839,170,-1,169,837,414,-1,414,838,169,-1,156,819,414,-1,414,837,156,-1,156,837,415,-1,415,813,156,-1,169,841,415,-1,415,837,169,-1,171,840,415,-1,415,841,171,-1,152,813,415,-1,415,840,152,-1,152,840,416,-1,416,807,152,-1,171,843,416,-1,416,840,171,-1,172,842,416,-1,416,843,172,-1,148,807,416,-1,416,842,148,-1,148,842,417,-1,417,801,148,-1,172,845,417,-1,417,842,172,-1,173,844,417,-1,417,845,173,-1,144,801,417,-1,417,844,144,-1,144,844,418,-1,418,795,144,-1,173,847,418,-1,418,844,173,-1,174,846,418,-1,418,847,174,-1,140,795,418,-1,418,846,140,-1,140,846,419,-1,419,789,140,-1,174,849,419,-1,419,846,174,-1,175,848,419,-1,419,849,175,-1,134,789,419,-1,419,848,134,-1,134,848,420,-1,420,782,134,-1,175,851,420,-1,420,848,175,-1,176,850,420,-1,420,851,176,-1,133,782,420,-1,420,850,133,-1,138,853,421,-1,421,786,138,-1,45,852,421,-1,421,853,45,-1,137,786,421,-1,421,852,137,-1,142,854,422,-1,422,792,142,-1,45,853,422,-1,422,854,45,-1,138,792,422,-1,422,853,138,-1,146,855,423,-1,423,798,146,-1,45,854,423,-1,423,855,45,-1,142,798,423,-1,423,854,142,-1,150,856,424,-1,424,804,150,-1,45,855,424,-1,424,856,45,-1,146,804,424,-1,424,855,146,-1,154,857,425,-1,425,810,154,-1,45,856,425,-1,425,857,45,-1,150,810,425,-1,425,856,150,-1,158,858,426,-1,426,816,158,-1,45,857,426,-1,426,858,45,-1,154,816,426,-1,426,857,154,-1,30,601,427,-1,427,821,30,-1,45,858,427,-1,427,601,45,-1,158,821,427,-1,427,858,158,-1,177,862,428,-1,428,859,177,-1,180,861,428,-1,428,862,180,-1,179,860,428,-1,428,861,179,-1,178,859,428,-1,428,860,178,-1,181,866,429,-1,429,863,181,-1,184,865,429,-1,429,866,184,-1,183,864,429,-1,429,865,183,-1,182,863,429,-1,429,864,182,-1,185,870,430,-1,430,867,185,-1,188,869,430,-1,430,870,188,-1,187,868,430,-1,430,869,187,-1,186,867,430,-1,430,868,186,-1,189,874,431,-1,431,871,189,-1,192,873,431,-1,431,874,192,-1,191,872,431,-1,431,873,191,-1,190,871,431,-1,431,872,190,-1,193,878,432,-1,432,875,193,-1,196,877,432,-1,432,878,196,-1,195,876,432,-1,432,877,195,-1,194,875,432,-1,432,876,194,-1,197,882,433,-1,433,879,197,-1,200,881,433,-1,433,882,200,-1,199,880,433,-1,433,881,199,-1,198,879,433,-1,433,880,198,-1,201,886,434,-1,434,883,201,-1,204,885,434,-1,434,886,204,-1,203,884,434,-1,434,885,203,-1,202,883,434,-1,434,884,202,-1,162,889,435,-1,435,824,162,-1,206,888,435,-1,435,889,206,-1,205,887,435,-1,435,888,205,-1,161,824,435,-1,435,887,161,-1,161,887,436,-1,436,890,161,-1,205,892,436,-1,436,887,205,-1,207,891,436,-1,436,892,207,-1,175,890,436,-1,436,891,175,-1,175,891,437,-1,437,851,175,-1,207,894,437,-1,437,891,207,-1,208,893,437,-1,437,894,208,-1,176,851,437,-1,437,893,176,-1,176,893,438,-1,438,895,176,-1,208,896,438,-1,438,893,208,-1,206,889,438,-1,438,896,206,-1,162,895,438,-1,438,889,162,-1,167,899,439,-1,439,836,167,-1,210,898,439,-1,439,899,210,-1,209,897,439,-1,439,898,209,-1,168,836,439,-1,439,897,168,-1,168,897,440,-1,440,900,168,-1,209,902,440,-1,440,897,209,-1,211,901,440,-1,440,902,211,-1,170,900,440,-1,440,901,170,-1,170,901,441,-1,441,838,170,-1,211,904,441,-1,441,901,211,-1,212,903,441,-1,441,904,212,-1,169,838,441,-1,441,903,169,-1,169,903,442,-1,442,905,169,-1,212,906,442,-1,442,903,212,-1,210,899,442,-1,442,906,210,-1,167,905,442,-1,442,899,167,-1,169,909,443,-1,443,841,169,-1,214,908,443,-1,443,909,214,-1,213,907,443,-1,443,908,213,-1,171,841,443,-1,443,907,171,-1,171,907,444,-1,444,910,171,-1,213,912,444,-1,444,907,213,-1,215,911,444,-1,444,912,215,-1,166,910,444,-1,444,911,166,-1,166,911,445,-1,445,835,166,-1,215,914,445,-1,445,911,215,-1,216,913,445,-1,445,914,216,-1,167,835,445,-1,445,913,167,-1,167,913,446,-1,446,905,167,-1,216,915,446,-1,446,913,216,-1,214,909,446,-1,446,915,214,-1,169,905,446,-1,446,909,169,-1,171,918,447,-1,447,843,171,-1,218,917,447,-1,447,918,218,-1,217,916,447,-1,447,917,217,-1,172,843,447,-1,447,916,172,-1,172,916,448,-1,448,919,172,-1,217,921,448,-1,448,916,217,-1,219,920,448,-1,448,921,219,-1,165,919,448,-1,448,920,165,-1,165,920,449,-1,449,833,165,-1,219,923,449,-1,449,920,219,-1,220,922,449,-1,449,923,220,-1,166,833,449,-1,449,922,166,-1,166,922,450,-1,450,910,166,-1,220,924,450,-1,450,922,220,-1,218,918,450,-1,450,924,218,-1,171,910,450,-1,450,918,171,-1,172,927,451,-1,451,845,172,-1,222,926,451,-1,451,927,222,-1,221,925,451,-1,451,926,221,-1,173,845,451,-1,451,925,173,-1,173,925,452,-1,452,928,173,-1,221,930,452,-1,452,925,221,-1,223,929,452,-1,452,930,223,-1,164,928,452,-1,452,929,164,-1,164,929,453,-1,453,831,164,-1,223,932,453,-1,453,929,223,-1,224,931,453,-1,453,932,224,-1,165,831,453,-1,453,931,165,-1,165,931,454,-1,454,919,165,-1,224,933,454,-1,454,931,224,-1,222,927,454,-1,454,933,222,-1,172,919,454,-1,454,927,172,-1,173,936,455,-1,455,847,173,-1,226,935,455,-1,455,936,226,-1,225,934,455,-1,455,935,225,-1,174,847,455,-1,455,934,174,-1,174,934,456,-1,456,937,174,-1,225,939,456,-1,456,934,225,-1,227,938,456,-1,456,939,227,-1,163,937,456,-1,456,938,163,-1,163,938,457,-1,457,829,163,-1,227,941,457,-1,457,938,227,-1,228,940,457,-1,457,941,228,-1,164,829,457,-1,457,940,164,-1,164,940,458,-1,458,928,164,-1,228,942,458,-1,458,940,228,-1,226,936,458,-1,458,942,226,-1,173,928,458,-1,458,936,173,-1,174,945,459,-1,459,849,174,-1,230,944,459,-1,459,945,230,-1,229,943,459,-1,459,944,229,-1,175,849,459,-1,459,943,175,-1,175,943,460,-1,460,890,175,-1,229,947,460,-1,460,943,229,-1,231,946,460,-1,460,947,231,-1,161,890,460,-1,460,946,161,-1,161,946,461,-1,461,827,161,-1,231,949,461,-1,461,946,231,-1,232,948,461,-1,461,949,232,-1,163,827,461,-1,461,948,163,-1,163,948,462,-1,462,937,163,-1,232,950,462,-1,462,948,232,-1,230,945,462,-1,462,950,230,-1,174,937,462,-1,462,945,174,-1,45,953,463,-1,463,852,45,-1,234,952,463,-1,463,953,234,-1,233,951,463,-1,463,952,233,-1,137,852,463,-1,463,951,137,-1,235,956,464,-1,464,954,235,-1,177,859,464,-1,464,956,177,-1,178,955,464,-1,464,859,178,-1,236,954,464,-1,464,955,236,-1,236,955,465,-1,465,957,236,-1,178,860,465,-1,465,955,178,-1,179,958,465,-1,465,860,179,-1,237,957,465,-1,465,958,237,-1,237,958,466,-1,466,959,237,-1,179,861,466,-1,466,958,179,-1,180,960,466,-1,466,861,180,-1,238,959,466,-1,466,960,238,-1,238,960,467,-1,467,961,238,-1,180,862,467,-1,467,960,180,-1,177,956,467,-1,467,862,177,-1,235,961,467,-1,467,956,235,-1,239,964,468,-1,468,962,239,-1,181,863,468,-1,468,964,181,-1,182,963,468,-1,468,863,182,-1,240,962,468,-1,468,963,240,-1,240,963,469,-1,469,965,240,-1,182,864,469,-1,469,963,182,-1,183,966,469,-1,469,864,183,-1,241,965,469,-1,469,966,241,-1,241,966,470,-1,470,967,241,-1,183,865,470,-1,470,966,183,-1,184,968,470,-1,470,865,184,-1,242,967,470,-1,470,968,242,-1,242,968,471,-1,471,969,242,-1,184,866,471,-1,471,968,184,-1,181,964,471,-1,471,866,181,-1,239,969,471,-1,471,964,239,-1,243,972,472,-1,472,970,243,-1,185,867,472,-1,472,972,185,-1,186,971,472,-1,472,867,186,-1,244,970,472,-1,472,971,244,-1,244,971,473,-1,473,973,244,-1,186,868,473,-1,473,971,186,-1,187,974,473,-1,473,868,187,-1,245,973,473,-1,473,974,245,-1,245,974,474,-1,474,975,245,-1,187,869,474,-1,474,974,187,-1,188,976,474,-1,474,869,188,-1,246,975,474,-1,474,976,246,-1,246,976,475,-1,475,977,246,-1,188,870,475,-1,475,976,188,-1,185,972,475,-1,475,870,185,-1,243,977,475,-1,475,972,243,-1,247,980,476,-1,476,978,247,-1,189,871,476,-1,476,980,189,-1,190,979,476,-1,476,871,190,-1,248,978,476,-1,476,979,248,-1,248,979,477,-1,477,981,248,-1,190,872,477,-1,477,979,190,-1,191,982,477,-1,477,872,191,-1,249,981,477,-1,477,982,249,-1,249,982,478,-1,478,983,249,-1,191,873,478,-1,478,982,191,-1,192,984,478,-1,478,873,192,-1,250,983,478,-1,478,984,250,-1,250,984,479,-1,479,985,250,-1,192,874,479,-1,479,984,192,-1,189,980,479,-1,479,874,189,-1,247,985,479,-1,479,980,247,-1,251,988,480,-1,480,986,251,-1,193,875,480,-1,480,988,193,-1,194,987,480,-1,480,875,194,-1,252,986,480,-1,480,987,252,-1,252,987,481,-1,481,989,252,-1,194,876,481,-1,481,987,194,-1,195,990,481,-1,481,876,195,-1,253,989,481,-1,481,990,253,-1,253,990,482,-1,482,991,253,-1,195,877,482,-1,482,990,195,-1,196,992,482,-1,482,877,196,-1,254,991,482,-1,482,992,254,-1,254,992,483,-1,483,993,254,-1,196,878,483,-1,483,992,196,-1,193,988,483,-1,483,878,193,-1,251,993,483,-1,483,988,251,-1,255,996,484,-1,484,994,255,-1,197,879,484,-1,484,996,197,-1,198,995,484,-1,484,879,198,-1,256,994,484,-1,484,995,256,-1,256,995,485,-1,485,997,256,-1,198,880,485,-1,485,995,198,-1,199,998,485,-1,485,880,199,-1,257,997,485,-1,485,998,257,-1,257,998,486,-1,486,999,257,-1,199,881,486,-1,486,998,199,-1,200,1000,486,-1,486,881,200,-1,258,999,486,-1,486,1000,258,-1,258,1000,487,-1,487,1001,258,-1,200,882,487,-1,487,1000,200,-1,197,996,487,-1,487,882,197,-1,255,1001,487,-1,487,996,255,-1,259,1004,488,-1,488,1002,259,-1,201,883,488,-1,488,1004,201,-1,202,1003,488,-1,488,883,202,-1,260,1002,488,-1,488,1003,260,-1,260,1003,489,-1,489,1005,260,-1,202,884,489,-1,489,1003,202,-1,203,1006,489,-1,489,884,203,-1,261,1005,489,-1,489,1006,261,-1,261,1006,490,-1,490,1007,261,-1,203,885,490,-1,490,1006,203,-1,204,1008,490,-1,490,885,204,-1,262,1007,490,-1,490,1008,262,-1,262,1008,491,-1,491,1009,262,-1,204,886,491,-1,491,1008,204,-1,201,1004,491,-1,491,886,201,-1,259,1009,491,-1,491,1004,259,-1,205,888,492,-1,492,1010,205,-1,206,1011,492,-1,492,888,206,-1,235,954,492,-1,492,1011,235,-1,236,1010,492,-1,492,954,236,-1,207,892,493,-1,493,1012,207,-1,205,1010,493,-1,493,892,205,-1,236,957,493,-1,493,1010,236,-1,237,1012,493,-1,493,957,237,-1,208,894,494,-1,494,1013,208,-1,207,1012,494,-1,494,894,207,-1,237,959,494,-1,494,1012,237,-1,238,1013,494,-1,494,959,238,-1,206,896,495,-1,495,1011,206,-1,208,1013,495,-1,495,896,208,-1,238,961,495,-1,495,1013,238,-1,235,1011,495,-1,495,961,235,-1,209,898,496,-1,496,1014,209,-1,210,1015,496,-1,496,898,210,-1,239,962,496,-1,496,1015,239,-1,240,1014,496,-1,496,962,240,-1,211,902,497,-1,497,1016,211,-1,209,1014,497,-1,497,902,209,-1,240,965,497,-1,497,1014,240,-1,241,1016,497,-1,497,965,241,-1,212,904,498,-1,498,1017,212,-1,211,1016,498,-1,498,904,211,-1,241,967,498,-1,498,1016,241,-1,242,1017,498,-1,498,967,242,-1,210,906,499,-1,499,1015,210,-1,212,1017,499,-1,499,906,212,-1,242,969,499,-1,499,1017,242,-1,239,1015,499,-1,499,969,239,-1,213,908,500,-1,500,1018,213,-1,214,1019,500,-1,500,908,214,-1,243,970,500,-1,500,1019,243,-1,244,1018,500,-1,500,970,244,-1,215,912,501,-1,501,1020,215,-1,213,1018,501,-1,501,912,213,-1,244,973,501,-1,501,1018,244,-1,245,1020,501,-1,501,973,245,-1,216,914,502,-1,502,1021,216,-1,215,1020,502,-1,502,914,215,-1,245,975,502,-1,502,1020,245,-1,246,1021,502,-1,502,975,246,-1,214,915,503,-1,503,1019,214,-1,216,1021,503,-1,503,915,216,-1,246,977,503,-1,503,1021,246,-1,243,1019,503,-1,503,977,243,-1,217,917,504,-1,504,1022,217,-1,218,1023,504,-1,504,917,218,-1,247,978,504,-1,504,1023,247,-1,248,1022,504,-1,504,978,248,-1,219,921,505,-1,505,1024,219,-1,217,1022,505,-1,505,921,217,-1,248,981,505,-1,505,1022,248,-1,249,1024,505,-1,505,981,249,-1,220,923,506,-1,506,1025,220,-1,219,1024,506,-1,506,923,219,-1,249,983,506,-1,506,1024,249,-1,250,1025,506,-1,506,983,250,-1,218,924,507,-1,507,1023,218,-1,220,1025,507,-1,507,924,220,-1,250,985,507,-1,507,1025,250,-1,247,1023,507,-1,507,985,247,-1,221,926,508,-1,508,1026,221,-1,222,1027,508,-1,508,926,222,-1,251,986,508,-1,508,1027,251,-1,252,1026,508,-1,508,986,252,-1,223,930,509,-1,509,1028,223,-1,221,1026,509,-1,509,930,221,-1,252,989,509,-1,509,1026,252,-1,253,1028,509,-1,509,989,253,-1,224,932,510,-1,510,1029,224,-1,223,1028,510,-1,510,932,223,-1,253,991,510,-1,510,1028,253,-1,254,1029,510,-1,510,991,254,-1,222,933,511,-1,511,1027,222,-1,224,1029,511,-1,511,933,224,-1,254,993,511,-1,511,1029,254,-1,251,1027,511,-1,511,993,251,-1,225,935,512,-1,512,1030,225,-1,226,1031,512,-1,512,935,226,-1,255,994,512,-1,512,1031,255,-1,256,1030,512,-1,512,994,256,-1,227,939,513,-1,513,1032,227,-1,225,1030,513,-1,513,939,225,-1,256,997,513,-1,513,1030,256,-1,257,1032,513,-1,513,997,257,-1,228,941,514,-1,514,1033,228,-1,227,1032,514,-1,514,941,227,-1,257,999,514,-1,514,1032,257,-1,258,1033,514,-1,514,999,258,-1,226,942,515,-1,515,1031,226,-1,228,1033,515,-1,515,942,228,-1,258,1001,515,-1,515,1033,258,-1,255,1031,515,-1,515,1001,255,-1,229,944,516,-1,516,1034,229,-1,230,1035,516,-1,516,944,230,-1,259,1002,516,-1,516,1035,259,-1,260,1034,516,-1,516,1002,260,-1,231,947,517,-1,517,1036,231,-1,229,1034,517,-1,517,947,229,-1,260,1005,517,-1,517,1034,260,-1,261,1036,517,-1,517,1005,261,-1,232,949,518,-1,518,1037,232,-1,231,1036,518,-1,518,949,231,-1,261,1007,518,-1,518,1036,261,-1,262,1037,518,-1,518,1007,262,-1,230,950,519,-1,519,1035,230,-1,232,1037,519,-1,519,950,232,-1,262,1009,519,-1,519,1037,262,-1,259,1035,519,-1,519,1009,259,-1,233,952,520,-1,520,1038,233,-1,234,1040,520,-1,520,952,234,-1,264,1039,520,-1,520,1040,264,-1,263,1038,520,-1,520,1039,263,-1]
TextureCoordinate112 = x3d.TextureCoordinate(DEF="Lower_teeth-TEXCOORD_JinBlink")
TextureCoordinate112.point = [(0.8538, 0.2675),(0.8565, 0.2503),(0.8695, 0.2562),(0.8668, 0.2734),(0.8588, 0.2367),(0.8717, 0.2426),(0.8844, 0.2483),(0.8823, 0.262),(0.8795, 0.2792),(0.8612, 0.228),(0.861, 0.2289),(0.8725, 0.2388),(0.8732, 0.2346),(0.8609, 0.2296),(0.8708, 0.2419),(0.8804, 0.2515),(0.8838, 0.2475),(0.8849, 0.2408),(0.8946, 0.2676),(0.8919, 0.2848),(0.8968, 0.254),(0.9087, 0.2594),(0.9065, 0.273),(0.9038, 0.2902),(0.8949, 0.2538),(0.8961, 0.2462),(0.891, 0.2586),(0.9, 0.2623),(0.9058, 0.2587),(0.907, 0.2511),(0.9179, 0.2782),(0.9152, 0.2954),(0.9201, 0.2645),(0.9312, 0.2696),(0.9291, 0.2832),(0.9264, 0.3004),(0.9164, 0.2635),(0.9176, 0.2559),(0.9106, 0.2675),(0.9189, 0.2709),(0.9269, 0.2683),(0.9281, 0.2607),(0.9402, 0.2883),(0.9375, 0.3055),(0.9423, 0.2746),(0.9521, 0.2791),(0.95, 0.2928),(0.9473, 0.3099),(0.9377, 0.2732),(0.8588, 0.145),(0.8655, 0.1406),(0.8654, 0.1406),(0.8563, 0.1466),(0.8722, 0.1362),(0.8746, 0.1346),(0.8723, 0.1362),(0.8654, 0.1407),(0.8585, 0.1452),(0.9628, 0.0768),(0.9627, 0.07687),(0.9643, 0.07584),(0.9639, 0.0761),(0.9633, 0.07644),(0.9646, 0.07558),(0.9658, 0.07486),(0.9658, 0.07481),(0.9651, 0.07527),(0.9636, 0.07627),(0.9625, 0.077),(0.961, 0.07797),(0.963, 0.07668),(0.9607, 0.0782),(0.9591, 0.07925),(0.9585, 0.07964),(0.9595, 0.07893),(0.9614, 0.07775),(0.9566, 0.08085),(0.9537, 0.08276),(0.9524, 0.08361),(0.9567, 0.08081),(0.9502, 0.08508),(0.9481, 0.08642),(0.9483, 0.08632),(0.9511, 0.08447),(0.9546, 0.0822),(0.9423, 0.09027),(0.9364, 0.0941),(0.939, 0.2656),(0.9302, 0.2764),(0.9351, 0.09494),(0.9434, 0.08949),(0.9299, 0.09835),(0.9268, 0.1004),(0.928, 0.09963),(0.9339, 0.09577),(0.9404, 0.0915),(0.9197, 0.1051),(0.9139, 0.1089),(0.9127, 0.1096),(0.9208, 0.1043),(0.9076, 0.113),(0.9047, 0.1149),(0.906, 0.1141),(0.9116, 0.1104),(0.9178, 0.1063),(0.8968, 0.1201),(0.8904, 0.1243),(0.8898, 0.1247),(0.8985, 0.119),(0.8837, 0.1287),(0.8812, 0.1303),(0.8831, 0.1291),(0.8892, 0.125),(0.8957, 0.1208),(0.8485, 0.1053),(0.8608, 0.09748),(0.8609, 0.09813),(0.8517, 0.1042),(0.8729, 0.08952),(0.87, 0.09212),(0.8707, 0.098),(0.8615, 0.104),(0.8523, 0.11),(0.8733, 0.08954),(0.8733, 0.08999),(0.8734, 0.08866),(0.8703, 0.09196),(0.8709, 0.09783),(0.8739, 0.09587),(0.8605, 0.09651),(0.8607, 0.09825),(0.8476, 0.1047),(0.8512, 0.1045),(0.8518, 0.1104),(0.8613, 0.1041),(0.8482, 0.1055),(0.8483, 0.1064),(0.8489, 0.1122),(0.9565, 0.03469),(0.9569, 0.03447),(0.9571, 0.03505),(0.9573, 0.03487),(0.9576, 0.03398),(0.9581, 0.0344),(0.9588, 0.04024),(0.9372, 0.2791),(0.9473, 0.2775),(0.9485, 0.27),(0.9574, 0.2961),(0.9547, 0.3133),(0.9595, 0.2824),(0.9647, 0.2848),(0.9626, 0.2985),(0.9599, 0.3157),(0.9541, 0.2806),(0.9554, 0.2731),(0.9452, 0.2832),(0.9475, 0.2838),(0.9588, 0.2828),(0.9601, 0.2752),(0.9662, 0.3001),(0.9635, 0.3173),(0.9682, 0.2864),(0.9704, 0.2874),(0.9684, 0.3011),(0.9657, 0.3183),(0.9621, 0.2842),(0.9633, 0.2767),(0.9525, 0.2865),(0.9522, 0.286),(0.9641, 0.2852),(0.9654, 0.2776),(0.9695, 0.3016),(0.9668, 0.3188),(0.9716, 0.2879),(0.9719, 0.2881),(0.9698, 0.3017),(0.9671, 0.3189),(0.9651, 0.2856),(0.9663, 0.2781),(0.9553, 0.2877),(0.9533, 0.2865),(0.9653, 0.2857),(0.9666, 0.2782),(0.8735, 0.2332),(0.8615, 0.2278),(0.8853, 0.2386),(0.8855, 0.2385),(0.8737, 0.2331),(0.8617, 0.2279),(0.8966, 0.2437),(0.9074, 0.2486),(0.9077, 0.2486),(0.8966, 0.2436),(0.918, 0.2534),(0.9286, 0.2582),(0.9578, 0.04088),(0.958, 0.04071),(0.9601, 0.03258),(0.9601, 0.03303),(0.9623, 0.03036),(0.962, 0.03185),(0.9626, 0.03775),(0.9608, 0.0389),(0.9621, 0.02986),(0.9621, 0.03172),(0.961, 0.03123),(0.9611, 0.03243),(0.9617, 0.03833),(0.9627, 0.03763),(0.959, 0.03329),(0.9591, 0.03374),(0.9597, 0.03961),(0.9587, 0.03209),(0.9588, 0.03395),(0.9602, 0.03299),(0.9553, 0.03494),(0.9561, 0.03568),(0.9567, 0.04158),(0.9593, 0.03985),(0.9608, 0.03889),(0.9536, 0.03683),(0.9537, 0.03728),(0.9511, 0.03821),(0.9526, 0.03799),(0.9533, 0.04383),(0.9543, 0.04315),(0.9538, 0.03649),(0.954, 0.03708),(0.9566, 0.03538),(0.9572, 0.04122),(0.9547, 0.04291),(0.9591, 0.03374),(0.9597, 0.03962),(0.9498, 0.03795),(0.9498, 0.0398),(0.9539, 0.03715),(0.9428, 0.04312),(0.9448, 0.04312),(0.9454, 0.049),(0.9504, 0.04569),(0.9545, 0.04305),(0.9418, 0.04459),(0.9418, 0.04503),(0.9394, 0.04587),(0.9419, 0.04501),(0.9426, 0.05085),(0.9425, 0.05089),(0.9455, 0.04192),(0.9457, 0.04253),(0.9505, 0.03936),(0.9512, 0.04521),(0.9464, 0.04837),(0.9537, 0.03729),(0.9543, 0.04317),(0.9323, 0.04942),(0.9324, 0.05124),(0.9404, 0.04599),(0.9208, 0.05759),(0.9234, 0.05711),(0.9241, 0.06299),(0.933, 0.05713),(0.9288, 0.2582),(0.9181, 0.2533),(0.941, 0.05188),(0.9191, 0.05948),(0.9191, 0.05992),(0.9174, 0.06032),(0.9205, 0.05901),(0.9212, 0.06486),(0.9198, 0.06578),(0.9285, 0.05309),(0.9286, 0.05372),(0.9376, 0.04782),(0.9383, 0.05368),(0.9293, 0.05958),(0.9418, 0.04505),(0.9425, 0.05092),(0.9096, 0.06429),(0.9097, 0.06609),(0.9178, 0.06084),(0.898, 0.07251),(0.9009, 0.07189),(0.9015, 0.07775),(0.9104, 0.07197),(0.9184, 0.06672),(0.897, 0.07396),(0.8971, 0.0744),(0.8957, 0.07454),(0.8988, 0.07329),(0.8994, 0.07915),(0.8977, 0.08026),(0.9395, 0.2632),(0.9491, 0.2676),(0.9503, 0.268),(0.9396, 0.2631),(0.956, 0.2707),(0.9607, 0.2728),(0.9617, 0.2731),(0.9562, 0.2706),(0.964, 0.2743),(0.966, 0.2752),(0.9669, 0.2755),(0.9643, 0.2743),(0.967, 0.2757),(0.9672, 0.2758),(0.968, 0.276),(0.9673, 0.2757),(0.9723, 0.2813),(0.9726, 0.2814),(0.9712, 0.2808),(0.9713, 0.2778),(0.9724, 0.2788),(0.9726, 0.2784),(0.969, 0.2798),(0.9655, 0.2782),(0.9658, 0.2753),(0.9691, 0.2773),(0.9603, 0.2758),(0.953, 0.2725),(0.9536, 0.2698),(0.9604, 0.2733),(0.9431, 0.268),(0.9321, 0.263),(0.9321, 0.2601),(0.9433, 0.2656),(0.921, 0.258),(0.9096, 0.2528),(0.91, 0.25),(0.9064, 0.06758),(0.9065, 0.06824),(0.915, 0.06265),(0.9156, 0.06852),(0.9071, 0.0741),(0.9191, 0.05993),(0.9198, 0.06581),(0.8858, 0.07988),(0.886, 0.08166),(0.8949, 0.07579),(0.8766, 0.0878),(0.8773, 0.09366),(0.8866, 0.08753),(0.8956, 0.08167),(0.8733, 0.08998),(0.8759, 0.08826),(0.8766, 0.09412),(0.874, 0.09584),(0.8843, 0.08206),(0.8844, 0.08273),(0.8932, 0.07693),(0.8938, 0.08281),(0.885, 0.0886),(0.897, 0.07442),(0.8977, 0.0803),(0.8558, 0.1414),(0.865, 0.1354),(0.8655, 0.1406),(0.8565, 0.1465),(0.8741, 0.1294),(0.8745, 0.1347),(0.8773, 0.1273),(0.8777, 0.1326),(0.8743, 0.1293),(0.8748, 0.1345),(0.9212, 0.2555),(0.8648, 0.1355),(0.8653, 0.1407),(0.8553, 0.1417),(0.856, 0.1469),(0.8524, 0.1436),(0.8531, 0.1487),(0.9616, 0.07203),(0.9614, 0.07218),(0.9621, 0.07728),(0.9622, 0.07716),(0.9623, 0.07156),(0.963, 0.07669),(0.9642, 0.0703),(0.9648, 0.0755),(0.9659, 0.06921),(0.9663, 0.07448),(0.966, 0.06912),(0.9665, 0.0744),(0.965, 0.06979),(0.9655, 0.07505),(0.9632, 0.071),(0.9637, 0.07619),(0.9641, 0.07036),(0.9626, 0.07134),(0.9631, 0.07662),(0.9646, 0.07564),(0.9601, 0.07303),(0.9606, 0.07827),(0.9578, 0.07453),(0.9584, 0.0797),(0.9568, 0.07515),(0.9575, 0.08026),(0.9583, 0.07421),(0.959, 0.07932),(0.9608, 0.07255),(0.9614, 0.0777),(0.9631, 0.07102),(0.9637, 0.07623),(0.9578, 0.07453),(0.9538, 0.07716),(0.9542, 0.08242),(0.9582, 0.07982),(0.9488, 0.08042),(0.9493, 0.08562),(0.946, 0.08225),(0.9466, 0.0874),(0.9461, 0.08217),(0.9468, 0.08728),(0.9499, 0.07968),(0.9506, 0.08481),(0.9547, 0.07656),(0.9553, 0.08173),(0.9577, 0.07459),(0.9582, 0.07983),(0.9444, 0.08332),(0.9364, 0.08856),(0.8978, 0.2474),(0.8855, 0.2418),(0.886, 0.2391),(0.8981, 0.245),(0.8729, 0.2361),(0.8601, 0.2303),(0.8608, 0.2283),(0.8734, 0.2338),(0.8678, 0.2399),(0.8732, 0.2455),(0.8624, 0.2325),(0.8665, 0.2349),(0.8823, 0.2528),(0.8859, 0.2529),(0.8966, 0.2592),(0.8982, 0.2585),(0.9109, 0.2657),(0.91, 0.2638),(0.9218, 0.2707),(0.9168, 0.2669),(0.9271, 0.2731),(0.9199, 0.2683),(0.9291, 0.274),(0.9206, 0.2686),(0.8607, 0.2295),(0.8606, 0.2296),(0.8609, 0.2293),(0.8616, 0.2252),(0.8614, 0.2253),(0.8613, 0.2253),(0.8633, 0.2144),(0.8631, 0.2144),(0.8655, 0.2002),(0.8653, 0.2001),(0.8653, 0.2001),(0.863, 0.2144),(0.9369, 0.09379),(0.9448, 0.0886),(0.9275, 0.09438),(0.9281, 0.09955),(0.9233, 0.09714),(0.924, 0.1023),(0.9247, 0.0962),(0.9254, 0.1013),(0.9328, 0.09093),(0.9334, 0.09609),(0.9417, 0.08506),(0.9422, 0.09028),(0.9459, 0.08234),(0.9463, 0.08761),(0.9217, 0.09816),(0.9138, 0.1034),(0.9143, 0.1086),(0.9222, 0.1034),(0.905, 0.1091),(0.9057, 0.1143),(0.9012, 0.1116),(0.9019, 0.1167),(0.9029, 0.1105),(0.9036, 0.1156),(0.9106, 0.1055),(0.9112, 0.1107),(0.919, 0.09993),(0.9195, 0.1052),(0.9231, 0.09725),(0.9236, 0.1025),(0.899, 0.1131),(0.8901, 0.1189),(0.8906, 0.1241),(0.8994, 0.1184),(0.8808, 0.125),(0.8538, 0.2675),(0.8814, 0.1302),(0.8775, 0.1272),(0.8782, 0.1323),(0.8801, 0.1255),(0.8807, 0.1306),(0.8885, 0.12),(0.889, 0.1252),(0.8972, 0.1142),(0.8977, 0.1195),(0.901, 0.1117),(0.9015, 0.117),(0.8724, 0.1138),(0.8633, 0.1198),(0.8541, 0.1258),(0.8726, 0.1136),(0.8756, 0.1117),(0.8535, 0.1262),(0.8631, 0.1199),(0.8507, 0.128),(0.9605, 0.05602),(0.9596, 0.05665),(0.9598, 0.05649),(0.9642, 0.05358),(0.9625, 0.05471),(0.9634, 0.05417),(0.9644, 0.05348),(0.9614, 0.05542),(0.9584, 0.05741),(0.961, 0.0557),(0.9625, 0.05473),(0.9551, 0.05961),(0.9561, 0.05895),(0.959, 0.05701),(0.9565, 0.05868),(0.9614, 0.05543),(0.9471, 0.06482),(0.9521, 0.06153),(0.9561, 0.05889),(0.9443, 0.06663),(0.9442, 0.06669),(0.9529, 0.061),(0.9481, 0.06414),(0.956, 0.05898),(0.9258, 0.0788),(0.9347, 0.07295),(0.9427, 0.0677),(0.923, 0.08066),(0.9215, 0.08158),(0.94, 0.06948),(0.931, 0.07537),(0.9442, 0.06673),(0.9033, 0.09355),(0.9121, 0.08778),(0.9201, 0.08254),(0.9012, 0.09495),(0.8995, 0.09606),(0.8668, 0.2734),(0.8695, 0.2562),(0.8565, 0.2503),(0.8795, 0.2792),(0.8823, 0.262),(0.8844, 0.2483),(0.8717, 0.2426),(0.8588, 0.2367),(0.8612, 0.228),(0.8732, 0.2346),(0.8725, 0.2388),(0.861, 0.2289),(0.8849, 0.2408),(0.8838, 0.2475),(0.8804, 0.2515),(0.8708, 0.2419),(0.8609, 0.2296),(0.8919, 0.2848),(0.8946, 0.2676),(0.9038, 0.2902),(0.9065, 0.273),(0.9087, 0.2594),(0.8968, 0.254),(0.8961, 0.2462),(0.8949, 0.2538),(0.907, 0.2511),(0.9058, 0.2587),(0.9, 0.2623),(0.891, 0.2586),(0.9152, 0.2954),(0.9179, 0.2782),(0.9264, 0.3004),(0.9291, 0.2832),(0.9312, 0.2696),(0.9201, 0.2645),(0.9176, 0.2559),(0.9164, 0.2635),(0.9281, 0.2607),(0.9269, 0.2683),(0.9189, 0.2709),(0.9106, 0.2675),(0.9375, 0.3055),(0.9402, 0.2883),(0.9473, 0.3099),(0.95, 0.2928),(0.9521, 0.2791),(0.9423, 0.2746),(0.939, 0.2656),(0.9377, 0.2732),(0.9174, 0.08433),(0.9485, 0.27),(0.9089, 0.0899),(0.9473, 0.2775),(0.9215, 0.08163),(0.9372, 0.2791),(0.879, 0.1095),(0.9302, 0.2764),(0.8884, 0.1033),(0.9547, 0.3133),(0.9574, 0.2961),(0.8973, 0.09749),(0.9599, 0.3157),(0.9626, 0.2985),(0.9647, 0.2848),(0.9595, 0.2824),(0.9554, 0.2731),(0.9541, 0.2806),(0.8783, 0.1099),(0.9601, 0.2752),(0.9588, 0.2828),(0.9475, 0.2838),(0.9452, 0.2832),(0.9635, 0.3173),(0.9662, 0.3001),(0.9657, 0.3183),(0.9684, 0.3011),(0.9704, 0.2874),(0.9682, 0.2864),(0.9633, 0.2767),(0.9621, 0.2842),(0.9654, 0.2776),(0.9641, 0.2852),(0.9522, 0.286),(0.9525, 0.2865),(0.9668, 0.3188),(0.9695, 0.3016),(0.9716, 0.2879),(0.9663, 0.2781),(0.9651, 0.2856),(0.9553, 0.2877),(0.8615, 0.2278),(0.8735, 0.2332),(0.8617, 0.2279),(0.8757, 0.1116),(0.8956, 0.09862),(0.8867, 0.1044),(0.8994, 0.09611),(0.8588, 0.145),(0.8563, 0.1466),(0.8654, 0.1406),(0.8655, 0.1406),(0.8585, 0.1452),(0.8654, 0.1407),(0.8723, 0.1362),(0.8746, 0.1346),(0.8722, 0.1362),(0.9628, 0.0768),(0.9639, 0.0761),(0.9643, 0.07584),(0.9627, 0.07687),(0.9651, 0.07527),(0.9658, 0.07481),(0.9658, 0.07486),(0.9646, 0.07558),(0.9633, 0.07644),(0.9636, 0.07627),(0.963, 0.07668),(0.961, 0.07797),(0.9625, 0.077),(0.9614, 0.07775),(0.9595, 0.07893),(0.9585, 0.07964),(0.9591, 0.07925),(0.9607, 0.0782),(0.9566, 0.08085),(0.9567, 0.08081),(0.9524, 0.08361),(0.9537, 0.08276),(0.9546, 0.0822),(0.9511, 0.08447),(0.9483, 0.08632),(0.9481, 0.08642),(0.9502, 0.08508),(0.9423, 0.09027),(0.9434, 0.08949),(0.9351, 0.09494),(0.9364, 0.0941),(0.9404, 0.0915),(0.9339, 0.09577),(0.928, 0.09963),(0.9268, 0.1004),(0.9299, 0.09835),(0.9197, 0.1051),(0.9208, 0.1043),(0.9127, 0.1096),(0.9139, 0.1089),(0.9178, 0.1063),(0.9116, 0.1104),(0.906, 0.1141),(0.9047, 0.1149),(0.9076, 0.113),(0.8968, 0.1201),(0.8985, 0.119),(0.8898, 0.1247),(0.8904, 0.1243),(0.8957, 0.1208),(0.8892, 0.125),(0.8831, 0.1291),(0.8737, 0.2331),(0.8855, 0.2385),(0.8812, 0.1303),(0.8837, 0.1287),(0.8485, 0.1053),(0.8517, 0.1042),(0.8609, 0.09813),(0.8608, 0.09748),(0.8523, 0.11),(0.8615, 0.104),(0.8707, 0.098),(0.87, 0.09212),(0.8729, 0.08952),(0.8733, 0.08999),(0.8733, 0.08954),(0.8739, 0.09587),(0.8709, 0.09783),(0.8703, 0.09196),(0.8734, 0.08866),(0.8607, 0.09825),(0.8605, 0.09651),(0.8613, 0.1041),(0.8518, 0.1104),(0.8512, 0.1045),(0.8476, 0.1047),(0.8483, 0.1064),(0.8482, 0.1055),(0.8489, 0.1122),(0.9565, 0.03469),(0.9573, 0.03487),(0.9571, 0.03505),(0.9569, 0.03447),(0.958, 0.04071),(0.9578, 0.04088),(0.9588, 0.04024),(0.9581, 0.0344),(0.9601, 0.03303),(0.9608, 0.0389),(0.9626, 0.03775),(0.962, 0.03185),(0.9621, 0.03172),(0.9621, 0.02986),(0.9627, 0.03763),(0.9617, 0.03833),(0.9611, 0.03243),(0.961, 0.03123),(0.9591, 0.03374),(0.959, 0.03329),(0.9597, 0.03961),(0.9602, 0.03299),(0.9588, 0.03395),(0.9587, 0.03209),(0.9608, 0.03889),(0.9593, 0.03985),(0.9567, 0.04158),(0.9561, 0.03568),(0.9553, 0.03494),(0.9537, 0.03728),(0.9536, 0.03683),(0.9543, 0.04315),(0.9533, 0.04383),(0.9526, 0.03799),(0.9511, 0.03821),(0.954, 0.03708),(0.9538, 0.03649),(0.9547, 0.04291),(0.9572, 0.04122),(0.9566, 0.03538),(0.9591, 0.03374),(0.9597, 0.03962),(0.9539, 0.03715),(0.9498, 0.0398),(0.9498, 0.03795),(0.9545, 0.04305),(0.9504, 0.04569),(0.9454, 0.049),(0.9448, 0.04312),(0.9428, 0.04312),(0.9418, 0.04503),(0.9418, 0.04459),(0.9425, 0.05089),(0.9426, 0.05085),(0.9419, 0.04501),(0.9394, 0.04587),(0.9457, 0.04253),(0.9455, 0.04192),(0.8853, 0.2386),(0.9464, 0.04837),(0.9512, 0.04521),(0.9505, 0.03936),(0.9537, 0.03729),(0.9543, 0.04317),(0.9404, 0.04599),(0.9324, 0.05124),(0.9323, 0.04942),(0.941, 0.05188),(0.933, 0.05713),(0.9241, 0.06299),(0.9234, 0.05711),(0.9208, 0.05759),(0.9191, 0.05992),(0.9191, 0.05948),(0.9198, 0.06578),(0.9212, 0.06486),(0.9205, 0.05901),(0.9174, 0.06032),(0.9286, 0.05372),(0.9285, 0.05309),(0.9293, 0.05958),(0.9383, 0.05368),(0.9376, 0.04782),(0.9418, 0.04505),(0.9425, 0.05092),(0.9178, 0.06084),(0.9097, 0.06609),(0.8966, 0.2437),(0.8966, 0.2436),(0.9077, 0.2486),(0.9074, 0.2486),(0.918, 0.2534),(0.9181, 0.2533),(0.9288, 0.2582),(0.9286, 0.2582),(0.9395, 0.2632),(0.9396, 0.2631),(0.9503, 0.268),(0.9491, 0.2676),(0.956, 0.2707),(0.9562, 0.2706),(0.9617, 0.2731),(0.9607, 0.2728),(0.964, 0.2743),(0.9643, 0.2743),(0.9669, 0.2755),(0.966, 0.2752),(0.967, 0.2757),(0.9673, 0.2757),(0.9723, 0.2813),(0.9724, 0.2788),(0.9713, 0.2778),(0.9712, 0.2808),(0.969, 0.2798),(0.9691, 0.2773),(0.9658, 0.2753),(0.9655, 0.2782),(0.9603, 0.2758),(0.9604, 0.2733),(0.9536, 0.2698),(0.953, 0.2725),(0.9431, 0.268),(0.9433, 0.2656),(0.9321, 0.2601),(0.9321, 0.263),(0.921, 0.258),(0.9212, 0.2555),(0.91, 0.25),(0.9096, 0.2528),(0.8978, 0.2474),(0.8981, 0.245),(0.886, 0.2391),(0.8855, 0.2418),(0.8729, 0.2361),(0.8734, 0.2338),(0.9096, 0.06429),(0.8608, 0.2283),(0.8601, 0.2303),(0.9184, 0.06672),(0.8732, 0.2455),(0.8678, 0.2399),(0.9104, 0.07197),(0.8624, 0.2325),(0.8859, 0.2529),(0.9015, 0.07775),(0.8823, 0.2528),(0.8982, 0.2585),(0.9009, 0.07189),(0.8966, 0.2592),(0.91, 0.2638),(0.9109, 0.2657),(0.898, 0.07251),(0.9168, 0.2669),(0.9218, 0.2707),(0.9199, 0.2683),(0.9271, 0.2731),(0.9291, 0.274),(0.8607, 0.2295),(0.8614, 0.2253),(0.8616, 0.2252),(0.8609, 0.2293),(0.8631, 0.2144),(0.8633, 0.2144),(0.8653, 0.2001),(0.8655, 0.2002),(0.8971, 0.0744),(0.897, 0.07396),(0.8977, 0.08026),(0.8994, 0.07915),(0.8988, 0.07329),(0.8957, 0.07454),(0.9065, 0.06824),(0.9064, 0.06758),(0.9071, 0.0741),(0.9156, 0.06852),(0.915, 0.06265),(0.9191, 0.05993),(0.9198, 0.06581),(0.8949, 0.07579),(0.886, 0.08166),(0.8858, 0.07988),(0.8956, 0.08167),(0.8866, 0.08753),(0.8773, 0.09366),(0.8766, 0.0878),(0.8733, 0.08998),(0.874, 0.09584),(0.8766, 0.09412),(0.8759, 0.08826),(0.8844, 0.08273),(0.8843, 0.08206),(0.885, 0.0886),(0.8938, 0.08281),(0.8932, 0.07693),(0.897, 0.07442),(0.8977, 0.0803),(0.8558, 0.1414),(0.8565, 0.1465),(0.8655, 0.1406),(0.865, 0.1354),(0.8745, 0.1347),(0.8741, 0.1294),(0.8777, 0.1326),(0.8773, 0.1273),(0.8748, 0.1345),(0.8743, 0.1293),(0.8653, 0.1407),(0.8648, 0.1355),(0.856, 0.1469),(0.8553, 0.1417),(0.8531, 0.1487),(0.8524, 0.1436),(0.9616, 0.07203),(0.9622, 0.07716),(0.9621, 0.07728),(0.9614, 0.07218),(0.963, 0.07669),(0.9623, 0.07156),(0.9648, 0.0755),(0.9642, 0.0703),(0.9663, 0.07448),(0.9659, 0.06921),(0.9665, 0.0744),(0.966, 0.06912),(0.9655, 0.07505),(0.965, 0.06979),(0.9637, 0.07619),(0.9632, 0.071),(0.9641, 0.07036),(0.9646, 0.07564),(0.9631, 0.07662),(0.9626, 0.07134),(0.9606, 0.07827),(0.9601, 0.07303),(0.9584, 0.0797),(0.9578, 0.07453),(0.9575, 0.08026),(0.9568, 0.07515),(0.959, 0.07932),(0.9583, 0.07421),(0.9614, 0.0777),(0.9608, 0.07255),(0.9637, 0.07623),(0.9631, 0.07102),(0.9578, 0.07453),(0.9582, 0.07982),(0.9542, 0.08242),(0.9538, 0.07716),(0.9493, 0.08562),(0.9488, 0.08042),(0.9466, 0.0874),(0.946, 0.08225),(0.9468, 0.08728),(0.9461, 0.08217),(0.9506, 0.08481),(0.9499, 0.07968),(0.9553, 0.08173),(0.9547, 0.07656),(0.9582, 0.07983),(0.9577, 0.07459),(0.9444, 0.08332),(0.9448, 0.0886),(0.9369, 0.09379),(0.9364, 0.08856),(0.9281, 0.09955),(0.9275, 0.09438),(0.924, 0.1023),(0.9233, 0.09714),(0.9254, 0.1013),(0.9247, 0.0962),(0.9334, 0.09609),(0.9328, 0.09093),(0.9422, 0.09028),(0.9417, 0.08506),(0.9463, 0.08761),(0.9459, 0.08234),(0.9217, 0.09816),(0.9222, 0.1034),(0.9143, 0.1086),(0.9138, 0.1034),(0.9057, 0.1143),(0.905, 0.1091),(0.9019, 0.1167),(0.9012, 0.1116),(0.9036, 0.1156),(0.9029, 0.1105),(0.9112, 0.1107),(0.9106, 0.1055),(0.9195, 0.1052),(0.919, 0.09993),(0.9236, 0.1025),(0.9231, 0.09725),(0.899, 0.1131),(0.8994, 0.1184),(0.8906, 0.1241),(0.8901, 0.1189),(0.8814, 0.1302),(0.8808, 0.125),(0.8782, 0.1323),(0.8775, 0.1272),(0.8807, 0.1306),(0.8801, 0.1255),(0.889, 0.1252),(0.8885, 0.12),(0.8977, 0.1195),(0.8972, 0.1142),(0.9015, 0.117),(0.901, 0.1117),(0.8633, 0.1198),(0.8724, 0.1138),(0.8541, 0.1258),(0.8756, 0.1117),(0.8726, 0.1136),(0.8631, 0.1199),(0.8535, 0.1262),(0.8507, 0.128),(0.9596, 0.05665),(0.9605, 0.05602),(0.9598, 0.05649),(0.9625, 0.05471),(0.9642, 0.05358),(0.9644, 0.05348),(0.9634, 0.05417),(0.9614, 0.05542),(0.961, 0.0557),(0.9584, 0.05741),(0.9625, 0.05473),(0.9561, 0.05895),(0.9551, 0.05961),(0.9565, 0.05868),(0.959, 0.05701),(0.9614, 0.05543),(0.9521, 0.06153),(0.9471, 0.06482),(0.9561, 0.05889),(0.9442, 0.06669),(0.9443, 0.06663),(0.9481, 0.06414),(0.9529, 0.061),(0.956, 0.05898),(0.9347, 0.07295),(0.9258, 0.0788),(0.9427, 0.0677),(0.9215, 0.08158),(0.923, 0.08066),(0.931, 0.07537),(0.94, 0.06948),(0.9442, 0.06673),(0.9121, 0.08778),(0.9033, 0.09356),(0.9201, 0.08254),(0.8995, 0.09606),(0.9012, 0.09495),(0.9089, 0.0899),(0.9174, 0.08433),(0.9215, 0.08163),(0.8884, 0.1033),(0.879, 0.1095),(0.8973, 0.09749),(0.8757, 0.1116),(0.8783, 0.1099),(0.8867, 0.1044),(0.8956, 0.09862),(0.8994, 0.09611)]

IndexedFaceSet111.texCoord = TextureCoordinate112
Coordinate113 = x3d.Coordinate(USE="Lower_teeth_COORD_JinBlink")

IndexedFaceSet111.coord = Coordinate113

Shape107.geometry = IndexedFaceSet111

Transform106.children.append(Shape107)

HAnimSegment98.children.append(Transform106)

HAnimJoint93.children.append(HAnimSegment98)
HAnimSegment114 = x3d.HAnimSegment(DEF="hanim_Hair")
HAnimSegment114.name = "hair"

HAnimJoint93.children.append(HAnimSegment114)
HAnimSegment115 = x3d.HAnimSegment(DEF="hanim___0")
HAnimSegment115.name = "__0"

HAnimJoint93.children.append(HAnimSegment115)
HAnimSegment116 = x3d.HAnimSegment(DEF="hanim___2")
HAnimSegment116.name = "__2"

HAnimJoint93.children.append(HAnimSegment116)
HAnimSegment117 = x3d.HAnimSegment(DEF="hanim___4")
HAnimSegment117.name = "__4"
HAnimDisplacer118 = x3d.HAnimDisplacer(DEF="__4_MorphInterpolator_JinLipsPart")
HAnimDisplacer118.name = "__4_morphinterpolator"
HAnimDisplacer118.coordIndex = [0,2]
HAnimDisplacer118.displacements = [(0, -0.4319, 0.0434),(0, -0.4133, -0.0174)]

HAnimSegment117.displacers.append(HAnimDisplacer118)

HAnimJoint93.children.append(HAnimSegment117)
HAnimSegment119 = x3d.HAnimSegment(DEF="hanim_Center_lower_vermillion_lip")
HAnimSegment119.name = "center_lower_vermillion_lip"
HAnimDisplacer120 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer120.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer120.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer120.displacements = [(0, 0.382, 0.435),(0, 0.9368, 0.4659),(0, 0.7896, 0.4659),(0, 0.382, 0.435),(0, 0.382, 0.435),(0, 0.7896, 0.4659)]

HAnimSegment119.displacers.append(HAnimDisplacer120)
HAnimDisplacer121 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer121.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer121.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer121.displacements = [(0, 0.1869, 0),(0, 0.7516, 0.364),(0, 0.6497, 0.364),(0, 0.1869, 0),(0, 0.2206, 0),(0, 0.6497, 0.364)]

HAnimSegment119.displacers.append(HAnimDisplacer121)
HAnimDisplacer122 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer122.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer122.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer122.displacements = [(0, -0.0896, 0.5331),(0, 0.756, 0.8803),(0, 0.6333, 0.8802),(0, -0.0896, 0.5331),(0, -0.0896, 0.5331),(0, 0.6333, 0.8802)]

HAnimSegment119.displacers.append(HAnimDisplacer122)
HAnimDisplacer123 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinJawDrop")
HAnimDisplacer123.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer123.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer123.displacements = [(0, -0.6157, 0),(0, -0.6158, 0),(0, -0.6156, 0),(0, -0.6157, 0),(0, -0.6157, 0),(0, -0.6156, 0)]

HAnimSegment119.displacers.append(HAnimDisplacer123)
HAnimDisplacer124 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer124.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer124.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer124.displacements = [(0, -0.0368, 0.8373),(0, 0.6483, 1.2483),(0, 0.5214, 1.2487),(0, -0.0368, 0.8373),(0, -0.0368, 0.8373),(0, 0.5214, 1.2487)]

HAnimSegment119.displacers.append(HAnimDisplacer124)
HAnimDisplacer125 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer125.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer125.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer125.displacements = [(0.2644, -0.7179, 0.8231),(0, -0.5998, 0.7017),(-0.1012, -0.5994, 0.7017),(-0.2644, -0.7179, 0.8231),(0, -0.7931, 1.0829),(0.1012, -0.5994, 0.7017)]

HAnimSegment119.displacers.append(HAnimDisplacer125)
HAnimDisplacer126 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipPressor")
HAnimDisplacer126.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer126.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer126.displacements = [(0, -0.3795, 0.1337),(0, -0.21, 0),(0, -0.21, 0),(0, -0.3795, 0.1337),(0, -0.3795, 0.1337),(0, -0.21, 0)]

HAnimSegment119.displacers.append(HAnimDisplacer126)
HAnimDisplacer127 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer127.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer127.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer127.displacements = [(0, -0.3959, 0.8591),(0, -0.2496, 0.9753),(0, -0.2496, 0.9749),(0, -0.3959, 0.8591),(0, -0.3959, 0.8591),(0, -0.2496, 0.9749)]

HAnimSegment119.displacers.append(HAnimDisplacer127)
HAnimDisplacer128 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipsPart")
HAnimDisplacer128.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer128.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer128.displacements = [(0, -0.432, 0.0434),(0, -0.4303, -0.0301),(0, -0.4133, -0.0173),(0, -0.432, 0.0434),(0, -0.432, 0.0434),(0, -0.4133, -0.0173)]

HAnimSegment119.displacers.append(HAnimDisplacer128)
HAnimDisplacer129 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer129.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer129.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer129.displacements = [(0, -0.0595, 0.1828),(0, 0.7882, 0.1993),(0, 0.633, 0.3625),(0, -0.0595, 0.1828),(0, -0.0595, 0.1828),(0, 0.633, 0.3625)]

HAnimSegment119.displacers.append(HAnimDisplacer129)
HAnimDisplacer130 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer130.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer130.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer130.displacements = [(-0.0415, -0.0581, 1.0819),(0, 0.0357, 0.8616),(0.1609, 0.0642, 0.9154),(0.0415, -0.0581, 1.0819),(0, -0.0581, 1.0819),(-0.1609, 0.0642, 0.9154)]

HAnimSegment119.displacers.append(HAnimDisplacer130)
HAnimDisplacer131 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer131.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer131.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer131.displacements = [(0, -0.5686, 0),(0, -0.5688, 0),(0, -0.5685, 0),(0, -0.5686, 0),(0, -0.5686, 0),(0, -0.5685, 0)]

HAnimSegment119.displacers.append(HAnimDisplacer131)
HAnimDisplacer132 = x3d.HAnimDisplacer(DEF="Center_lower_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer132.name = "center_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer132.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer132.displacements = [(0.176, -2.4732, 0.049),(0, -2.4728, -0.0078),(0.196, -2.4589, 0.002),(-0.176, -2.4732, 0.049),(0, -2.4732, 0.049),(-0.196, -2.4589, 0.002)]

HAnimSegment119.displacers.append(HAnimDisplacer132)
Coordinate133 = x3d.Coordinate(DEF="Center_lower_vermillion_lip_COORD_JinBlink")
Coordinate133.point = [(0.5699, 0.5402, 0.1151),(0, -0.5402, 0.1287),(0.6344, -0.3611, -0.1287),(-0.5699, 0.5402, 0.1151),(0, 0.5402, 0.1151),(-0.6344, -0.3611, -0.1287)]

HAnimSegment119.coord = Coordinate133
Transform134 = x3d.Transform(DEF="Center_lower_vermillion_lip_JinBlink")
Transform134.translation = [0,8.315,13.52]
Shape135 = x3d.Shape()
Appearance136 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape135.appearance = Appearance136
IndexedFaceSet137 = x3d.IndexedFaceSet(DEF="Center_lower_vermillion_lip-FACES_JinBlink")
IndexedFaceSet137.solid = False
IndexedFaceSet137.creaseAngle = 3.14159
IndexedFaceSet137.texCoordIndex = [2,1,0,-1,1,2,3,-1,4,6,5,-1,5,7,4,-1]
IndexedFaceSet137.coordIndex = [1,0,4,-1,0,1,2,-1,1,4,3,-1,3,5,1,-1]
TextureCoordinate138 = x3d.TextureCoordinate(DEF="Center_lower_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate138.point = [(0.2441, 0.6554),(0.2548, 0.6554),(0.2557, 0.6351),(0.2652, 0.6384),(0.2557, 0.6351),(0.2548, 0.6554),(0.2441, 0.6554),(0.2652, 0.6384)]

IndexedFaceSet137.texCoord = TextureCoordinate138
Coordinate139 = x3d.Coordinate(USE="Center_lower_vermillion_lip_COORD_JinBlink")

IndexedFaceSet137.coord = Coordinate139

Shape135.geometry = IndexedFaceSet137

Transform134.children.append(Shape135)

HAnimSegment119.children.append(Transform134)

HAnimJoint93.children.append(HAnimSegment119)
HAnimSegment140 = x3d.HAnimSegment(DEF="hanim_Chin")
HAnimSegment140.name = "chin"
HAnimDisplacer141 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer141.name = "chin_morphinterpolator"
HAnimDisplacer141.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer141.displacements = [(0, 0.937, 0.466),(0.63, 1.322, 0.106),(0, 0.79, 0.466),(0.0193, 1.486, 1.377),(-0.591, 1.322, 0.106),(0, 0.79, 0.466)]

HAnimSegment140.displacers.append(HAnimDisplacer141)
HAnimDisplacer142 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinChinRaiser")
HAnimDisplacer142.name = "chin_morphinterpolator"
HAnimDisplacer142.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer142.displacements = [(0, 0.751, 0.364),(0, -0.138, 0),(0, 0.65, 0.364),(0, 0.1317, 0),(0, -0.138, 0),(0, 0.65, 0.364)]

HAnimSegment140.displacers.append(HAnimDisplacer142)
HAnimDisplacer143 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinDimpler")
HAnimDisplacer143.name = "chin_morphinterpolator"
HAnimDisplacer143.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer143.displacements = [(0, 0.756, 0.88),(0.378, 0.396, 0.152),(0, 0.633, 0.88),(0, 1.094, 1.766),(-0.379, 0.396, 0.152),(0, 0.633, 0.88)]

HAnimSegment140.displacers.append(HAnimDisplacer143)
HAnimDisplacer144 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinJawDrop")
HAnimDisplacer144.name = "chin_morphinterpolator"
HAnimDisplacer144.coordIndex = [0,2,3,4,6,9,10,11,12,16,17,19]
HAnimDisplacer144.displacements = [(0, -0.615, 0),(0, -0.6157, 0),(0, -0.6157, 0),(0, -0.6157, 0),(0, -0.6159, 0),(0, -0.616, 0),(0, -0.6157, 0),(0, -0.6157, 0),(0, -0.6156, 0),(0, -0.616, 0),(0, -0.6157, 0),(0, -0.616, 0)]

HAnimSegment140.displacers.append(HAnimDisplacer144)
HAnimDisplacer145 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer145.name = "chin_morphinterpolator"
HAnimDisplacer145.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer145.displacements = [(0, 0.648, 1.249),(0.21, -0.702, 0.077),(0, 0.521, 1.248),(0, 0.993, 2.287),(-0.197, -0.702, 0.077),(0, 0.521, 1.248)]

HAnimSegment140.displacers.append(HAnimDisplacer145)
HAnimDisplacer146 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer146.name = "chin_morphinterpolator"
HAnimDisplacer146.coordIndex = [16,17]
HAnimDisplacer146.displacements = [(1.176, 0.13, -0.375),(-1.176, 0.13, -0.375)]

HAnimSegment140.displacers.append(HAnimDisplacer146)
HAnimDisplacer147 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipFunneler")
HAnimDisplacer147.name = "chin_morphinterpolator"
HAnimDisplacer147.coordIndex = [3,6,7,9,11,12,13,18,19]
HAnimDisplacer147.displacements = [(0, 0, 0.084),(0, -0.5997, 0.702),(-0.835, 0, 1.063),(-0.1012, -0.6, 0.702),(0, 0, 0.235),(0, 0.1001, 0.333),(0, 0, 0.152),(0.835, 0, 1.063),(0.1012, -0.6, 0.702)]

HAnimSegment140.displacers.append(HAnimDisplacer147)
HAnimDisplacer148 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipPressor")
HAnimDisplacer148.name = "chin_morphinterpolator"
HAnimDisplacer148.coordIndex = [6,9,19]
HAnimDisplacer148.displacements = [(0, -0.21, 0),(0, -0.21, 0),(0, -0.21, 0)]

HAnimSegment140.displacers.append(HAnimDisplacer148)
HAnimDisplacer149 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer149.name = "chin_morphinterpolator"
HAnimDisplacer149.coordIndex = [3,6,7,9,11,12,18,19]
HAnimDisplacer149.displacements = [(0, 0, 0.164),(0, -0.25, 0.975),(-0.935, 0, 0.516),(0, -0.25, 0.975),(0, 0, 0.164),(0, 0, 0.884),(0.91, 0, 0.459),(0, -0.25, 0.975)]

HAnimSegment140.displacers.append(HAnimDisplacer149)
HAnimDisplacer150 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipsPart")
HAnimDisplacer150.name = "chin_morphinterpolator"
HAnimDisplacer150.coordIndex = [3,6,9,11,12,19]
HAnimDisplacer150.displacements = [(0, -0.0829, -0.001),(0, -0.431, -0.03),(0, -0.413, -0.017),(0, -0.0829, -0.001),(0, -0.2735, -0.056),(0, -0.413, -0.017)]

HAnimSegment140.displacers.append(HAnimDisplacer150)
HAnimDisplacer151 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipStretcher")
HAnimDisplacer151.name = "chin_morphinterpolator"
HAnimDisplacer151.coordIndex = [7,18]
HAnimDisplacer151.displacements = [(0.898, 0.009, 0.025),(-0.974, 0.009, 0.025)]

HAnimSegment140.displacers.append(HAnimDisplacer151)
HAnimDisplacer152 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipSuck")
HAnimDisplacer152.name = "chin_morphinterpolator"
HAnimDisplacer152.coordIndex = [6,7,9,18,19]
HAnimDisplacer152.displacements = [(0, 0.788, 0.2),(0.125, 0, 0),(0, 0.633, 0.362),(-0.125, 0, 0),(0, 0.633, 0.362)]

HAnimSegment140.displacers.append(HAnimDisplacer152)
HAnimDisplacer153 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLipTightener")
HAnimDisplacer153.name = "chin_morphinterpolator"
HAnimDisplacer153.coordIndex = [6,7,9,12,18,19]
HAnimDisplacer153.displacements = [(0, 0.036, 0.862),(-0.521, 0.17, 1.038),(0.1609, 0.064, 0.915),(0, 0.1109, 0.288),(0.521, 0.17, 1.038),(-0.1609, 0.064, 0.915)]

HAnimSegment140.displacers.append(HAnimDisplacer153)
HAnimDisplacer154 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer154.name = "chin_morphinterpolator"
HAnimDisplacer154.coordIndex = [6,9,12,19]
HAnimDisplacer154.displacements = [(0, -0.5688, 0),(0, -0.569, 0),(0, -0.5685, 0),(0, -0.569, 0)]

HAnimSegment140.displacers.append(HAnimDisplacer154)
HAnimDisplacer155 = x3d.HAnimDisplacer(DEF="Chin_MorphInterpolator_JinMouthStretch")
HAnimDisplacer155.name = "chin_morphinterpolator"
HAnimDisplacer155.coordIndex = [0,2,3,4,6,7,8,9,10,11,12,14,15,16,17,18,19]
HAnimDisplacer155.displacements = [(0, -1.616, -0.19),(0, -2.0337, -0.088),(0, -2.0116, -0.01),(0, -1.9277, -0.1141),(0, -2.473, -0.007),(0, -0.737, 0),(0, -1.0116, -0.024),(0.196, -2.4593, 0.002),(0, -2.0337, -0.088),(0, -2.0116, -0.01),(0, -2.066, -0.039),(0, -0.8165, 0),(0, -1.2392, -0.041),(0, -2.228, -0.187),(0, -1.5747, -0.1141),(0, -0.737, 0),(-0.196, -2.4593, 0.002)]

HAnimSegment140.displacers.append(HAnimDisplacer155)
Coordinate156 = x3d.Coordinate(DEF="Chin_COORD_JinBlink")
Coordinate156.point = [(0, -2.287, 3.579),(0, -0.1353, -6.353),(3.657, -0.4253, 2.123),(3.345, 0.9926, 4.159),(3.653, -0.9673, 0.1176),(5.33, 0.7945, -6.311),(0, 1.438, 6.353),(3.006, 2.287, 5.134),(4.492, -0.08641, -3.097),(0.6344, 1.617, 6.096),(-3.657, -0.4253, 2.123),(-3.345, 0.9926, 4.159),(0, 0.481, 5.272),(-5.33, 0.7945, -6.311),(-4.492, -0.08641, -3.097),(0, -0.5988, -3.408),(0, -2.111, 1.781),(-3.653, -0.9673, 0.1176),(-3.006, 2.287, 5.134),(-0.6344, 1.617, 6.096)]

HAnimSegment140.coord = Coordinate156
Transform157 = x3d.Transform(DEF="Chin_JinBlink")
Transform157.translation = [0,6.337,7.3]
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape158.appearance = Appearance159
IndexedFaceSet160 = x3d.IndexedFaceSet(DEF="Chin-FACES_JinBlink")
IndexedFaceSet160.solid = False
IndexedFaceSet160.creaseAngle = 3.14159
IndexedFaceSet160.texCoordIndex = [0,7,8,-1,0,8,1,-1,2,3,4,-1,9,10,5,-1,5,6,9,-1,12,14,1,-1,12,1,8,-1,2,4,13,-1,6,5,4,-1,4,3,6,-1,14,11,1,-1,15,17,16,-1,15,18,17,-1,19,4,20,-1,21,22,5,-1,5,10,21,-1,23,18,24,-1,23,17,18,-1,19,13,4,-1,22,20,4,-1,4,5,22,-1,24,18,25,-1]
IndexedFaceSet160.coordIndex = [0,2,3,-1,0,3,12,-1,5,8,15,-1,2,0,16,-1,16,4,2,-1,7,9,12,-1,7,12,3,-1,5,15,1,-1,4,16,15,-1,15,8,4,-1,9,6,12,-1,0,11,10,-1,0,12,11,-1,13,15,14,-1,10,17,16,-1,16,0,10,-1,18,12,19,-1,18,11,12,-1,13,1,15,-1,17,14,15,-1,15,16,17,-1,19,12,6,-1]
TextureCoordinate161 = x3d.TextureCoordinate(DEF="Chin-TEXCOORD_JinBlink")
TextureCoordinate161.point = [(0.258, 0.6076),(0.2606, 0.6259),(0.4255, 0.614),(0.4413, 0.6101),(0.4398, 0.6078),(0.4653, 0.601),(0.4571, 0.6062),(0.3118, 0.6205),(0.3041, 0.631),(0.467, 0.6086),(0.4742, 0.6003),(0.2557, 0.6351),(0.3007, 0.651),(0.4253, 0.6099),(0.2652, 0.6384),(0.258, 0.6076),(0.3118, 0.6205),(0.3041, 0.631),(0.2606, 0.6259),(0.4255, 0.614),(0.4413, 0.6101),(0.467, 0.6086),(0.4571, 0.6062),(0.3007, 0.651),(0.2652, 0.6384),(0.2557, 0.6351)]

IndexedFaceSet160.texCoord = TextureCoordinate161
Coordinate162 = x3d.Coordinate(USE="Chin_COORD_JinBlink")

IndexedFaceSet160.coord = Coordinate162

Shape158.geometry = IndexedFaceSet160

Transform157.children.append(Shape158)

HAnimSegment140.children.append(Transform157)

HAnimJoint93.children.append(HAnimSegment140)
HAnimSegment163 = x3d.HAnimSegment(DEF="hanim_Glabella")
HAnimSegment163.name = "glabella"
HAnimDisplacer164 = x3d.HAnimDisplacer(DEF="Glabella_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer164.name = "glabella_morphinterpolator"
HAnimDisplacer164.coordIndex = [1,4]
HAnimDisplacer164.displacements = [(-0.332, -0.414, 0),(0.303, -0.395, 0)]

HAnimSegment163.displacers.append(HAnimDisplacer164)
HAnimDisplacer165 = x3d.HAnimDisplacer(DEF="Glabella_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer165.name = "glabella_morphinterpolator"
HAnimDisplacer165.coordIndex = [1,4]
HAnimDisplacer165.displacements = [(0, 0.3656, 0),(0, 0.3842, 0)]

HAnimSegment163.displacers.append(HAnimDisplacer165)
Coordinate166 = x3d.Coordinate(DEF="Glabella_COORD_JinBlink")
Coordinate166.point = [(0, -1.552, -0.8705),(1.587, -0.693, 0.1291),(0.4273, -1.569, -0.9219),(1.516, 1.569, 0.2705),(-1.587, -0.693, 0.1291),(0, -0.2611, 0.9219),(-0.4273, -1.569, -0.9219),(0, 1.499, 0.9062),(-1.516, 1.569, 0.2705)]

HAnimSegment163.coord = Coordinate166
Transform167 = x3d.Transform(DEF="Glabella_JinBlink")
Transform167.translation = [0,18.93,15.66]
Shape168 = x3d.Shape()
Appearance169 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape168.appearance = Appearance169
IndexedFaceSet170 = x3d.IndexedFaceSet(DEF="Glabella-FACES_JinBlink")
IndexedFaceSet170.solid = False
IndexedFaceSet170.creaseAngle = 3.14159
IndexedFaceSet170.texCoordIndex = [2,4,3,-1,3,0,2,-1,0,3,5,-1,5,1,0,-1,8,7,6,-1,6,9,8,-1,7,10,11,-1,11,6,7,-1]
IndexedFaceSet170.coordIndex = [0,2,1,-1,1,5,0,-1,5,1,3,-1,3,7,5,-1,0,5,4,-1,4,6,0,-1,5,7,8,-1,8,4,5,-1]
TextureCoordinate171 = x3d.TextureCoordinate(DEF="Glabella-TEXCOORD_JinBlink")
TextureCoordinate171.point = [(0.2441, 0.8403),(0.2442, 0.8727),(0.2441, 0.816),(0.274, 0.8322),(0.2534, 0.8152),(0.2728, 0.8741),(0.274, 0.8322),(0.2441, 0.8403),(0.2441, 0.816),(0.2534, 0.8152),(0.2442, 0.8727),(0.2728, 0.8741)]

IndexedFaceSet170.texCoord = TextureCoordinate171
Coordinate172 = x3d.Coordinate(USE="Glabella_COORD_JinBlink")

IndexedFaceSet170.coord = Coordinate172

Shape168.geometry = IndexedFaceSet170

Transform167.children.append(Shape168)

HAnimSegment163.children.append(Transform167)

HAnimJoint93.children.append(HAnimSegment163)
HAnimSegment173 = x3d.HAnimSegment(DEF="hanim_Left_bulbar_conjunctiva")
HAnimSegment173.name = "left_bulbar_conjunctiva"
HAnimDisplacer174 = x3d.HAnimDisplacer(DEF="Left_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer174.name = "left_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer174.coordIndex = [3,4,14]
HAnimDisplacer174.displacements = [(0, -0.0785, 0),(0, -0.078, 0),(-0.5075, -0.499, 0)]

HAnimSegment173.displacers.append(HAnimDisplacer174)
HAnimDisplacer175 = x3d.HAnimDisplacer(DEF="Left_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer175.name = "left_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer175.coordIndex = [14]
HAnimDisplacer175.displacements = [(0, 0.366, 0)]

HAnimSegment173.displacers.append(HAnimDisplacer175)
HAnimDisplacer176 = x3d.HAnimDisplacer(DEF="Left_bulbar_conjunctiva_MorphInterpolator_JinLidTightener")
HAnimDisplacer176.name = "left_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer176.coordIndex = [3,4,5,7,8,9,11,12,15,25,26]
HAnimDisplacer176.displacements = [(0, -0.354, 0),(0, -0.354, 0),(0, 0.3085, 0),(0, 0.096, 0),(-0.09, 0.209, 0),(0, -0.354, 0),(0, 0.309, 0),(0, 0.152, 0),(0, 0.151, 0),(0, 0.151, 0),(0, -0.3541, 0)]

HAnimSegment173.displacers.append(HAnimDisplacer176)
HAnimDisplacer177 = x3d.HAnimDisplacer(DEF="Left_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer177.name = "left_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer177.coordIndex = [3,4,6,9,26]
HAnimDisplacer177.displacements = [(0, 0.4975, 0),(0, 0.498, 0),(0, 0.4976, 0),(0, 0.498, 0),(0, 0.497, 0)]

HAnimSegment173.displacers.append(HAnimDisplacer177)
Coordinate178 = x3d.Coordinate(DEF="Left_bulbar_conjunctiva_COORD_JinBlink")
Coordinate178.point = [(2.76, 0.0973, -0.8547),(-1.347, 0.2034, 2.463),(1.784, 0.6812, 0.4382),(-1.252, 0.6995, 2.521),(-0.2686, 1.16, 2.287),(2.036, -1.163, -0.4716),(-2.858, -0.5459, 2.699),(-2.35, -1.007, 2.159),(2.632, -0.8129, -0.7113),(1.577, 1.203, 0.9703),(3.566, 0.2646, -1.27),(1.305, -1.43, 0.2687),(-1.132, -1.383, 1.574),(-2.475, 0.7643, 1.73),(-0.4787, 1.699, 1.381),(1.844, -1.377, -0.8846),(-4.008, -0.6268, 1.793),(-3.316, -1.256, 1.253),(2.512, -0.9908, -1.342),(2.026, 1.768, -0.3396),(4.008, 0.4783, -2.699),(1.039, -1.688, -0.4347),(-1.656, -1.768, 0.6681),(1.878, -0.7347, -0.1728),(-1.108, -0.9679, 1.714),(-0.4715, -1.396, 1.218),(1.925, 1.039, 0.5784)]

HAnimSegment173.coord = Coordinate178
Transform179 = x3d.Transform(DEF="Left_bulbar_conjunctiva_JinBlink")
Transform179.translation = [5.794,17.61,11.15]
Shape180 = x3d.Shape()
Appearance181 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape180.appearance = Appearance181
IndexedFaceSet182 = x3d.IndexedFaceSet(DEF="Left_bulbar_conjunctiva-FACES_JinBlink")
IndexedFaceSet182.solid = False
IndexedFaceSet182.creaseAngle = 3.14159
IndexedFaceSet182.texCoordIndex = [7,8,0,-1,0,27,7,-1,2,11,29,-1,29,1,2,-1,11,2,9,-1,12,5,25,-1,8,13,26,-1,9,2,1,-1,9,1,25,-1,4,10,14,-1,14,15,4,-1,3,4,15,-1,15,16,3,-1,28,13,17,-1,12,28,17,-1,12,17,18,-1,5,12,18,-1,18,19,5,-1,6,3,16,-1,16,20,6,-1,13,8,21,-1,21,17,13,-1,9,5,19,-1,19,22,9,-1,8,7,23,-1,23,21,8,-1,11,24,14,-1,14,29,11,-1,11,9,22,-1,22,24,11,-1,25,5,9,-1,26,0,8,-1,26,13,28,-1,14,10,29,-1,29,10,1,-1]
IndexedFaceSet182.coordIndex = [6,7,1,-1,1,3,6,-1,0,10,26,-1,26,2,0,-1,10,0,8,-1,11,5,23,-1,7,12,24,-1,8,0,2,-1,8,2,23,-1,4,9,19,-1,19,14,4,-1,3,4,14,-1,14,13,3,-1,25,12,22,-1,11,25,22,-1,11,22,21,-1,5,11,21,-1,21,15,5,-1,6,3,13,-1,13,16,6,-1,12,7,17,-1,17,22,12,-1,8,5,15,-1,15,18,8,-1,7,6,16,-1,16,17,7,-1,10,20,19,-1,19,26,10,-1,10,8,18,-1,18,20,10,-1,23,5,8,-1,24,1,7,-1,24,12,25,-1,19,9,26,-1,26,9,2,-1]
TextureCoordinate183 = x3d.TextureCoordinate(DEF="Left_bulbar_conjunctiva-TEXCOORD_JinBlink")
TextureCoordinate183.point = [(0.328, 0.824),(0.3871, 0.8321),(0.4052, 0.8221),(0.3258, 0.833),(0.3487, 0.8409),(0.3916, 0.7984),(0.2983, 0.8142),(0.2981, 0.8094),(0.309, 0.8013),(0.4011, 0.8053),(0.385, 0.8438),(0.4198, 0.8261),(0.3777, 0.7936),(0.3315, 0.7948),(0.3885, 0.8436),(0.3487, 0.8409),(0.3206, 0.8292),(0.3315, 0.7948),(0.372, 0.7925),(0.3869, 0.7967),(0.2983, 0.8142),(0.309, 0.8013),(0.3966, 0.8018),(0.2981, 0.8094),(0.4198, 0.8261),(0.3889, 0.8064),(0.3322, 0.8026),(0.3307, 0.8316),(0.3442, 0.7934),(0.3915, 0.8393)]

IndexedFaceSet182.texCoord = TextureCoordinate183
Coordinate184 = x3d.Coordinate(USE="Left_bulbar_conjunctiva_COORD_JinBlink")

IndexedFaceSet182.coord = Coordinate184

Shape180.geometry = IndexedFaceSet182

Transform179.children.append(Shape180)

HAnimSegment173.children.append(Transform179)

HAnimJoint93.children.append(HAnimSegment173)
HAnimSegment185 = x3d.HAnimSegment(DEF="hanim_Left_cheek")
HAnimSegment185.name = "left_cheek"
HAnimDisplacer186 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer186.name = "left_cheek_morphinterpolator"
HAnimDisplacer186.coordIndex = [4,10,11,25,26,31,32,33,34]
HAnimDisplacer186.displacements = [(0, 0.8378, 0),(0, 0.8382, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.8376, 0),(0, 0.8381, 0),(0, 0.8383, 0),(0.63, 1.322, 0.107)]

HAnimSegment185.displacers.append(HAnimDisplacer186)
HAnimDisplacer187 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer187.name = "left_cheek_morphinterpolator"
HAnimDisplacer187.coordIndex = [4,6,7,8,9,10,11,12,13,17,19,24,29,30,31,32]
HAnimDisplacer187.displacements = [(0.6734, 0.6214, 0.174),(0, 0.1, 0.079),(0, 0.134, -0.107),(0.299, 0.38, -0.184),(0, 0.268, 0.099),(0.0294, 1.7512, 0.523),(0.255, 1.233, 0.181),(-0.032, 1.5769, 1.007),(0.588, 1.4349, 0.0324),(0, 0.462, 0.3972),(0, 0.6417, 0),(0, 0.754, 0),(0, 0.067, -0.082),(0, 0.268, 0),(0.001, 1.3996, 0.448),(0, 0.2915, 0.183)]

HAnimSegment185.displacers.append(HAnimDisplacer187)
HAnimDisplacer188 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinChinRaiser")
HAnimDisplacer188.name = "left_cheek_morphinterpolator"
HAnimDisplacer188.coordIndex = [34]
HAnimDisplacer188.displacements = [(0, -0.137, 0)]

HAnimSegment185.displacers.append(HAnimDisplacer188)
HAnimDisplacer189 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinDimpler")
HAnimDisplacer189.name = "left_cheek_morphinterpolator"
HAnimDisplacer189.coordIndex = [18,34]
HAnimDisplacer189.displacements = [(-0.407, 0.417, 0.179),(0.378, 0.396, 0.153)]

HAnimSegment185.displacers.append(HAnimDisplacer189)
HAnimDisplacer190 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinJawDrop")
HAnimDisplacer190.name = "left_cheek_morphinterpolator"
HAnimDisplacer190.coordIndex = [3,5,15]
HAnimDisplacer190.displacements = [(0, -0.616, 0),(0, -0.616, 0),(0, -0.616, 0)]

HAnimSegment185.displacers.append(HAnimDisplacer190)
HAnimDisplacer191 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer191.name = "left_cheek_morphinterpolator"
HAnimDisplacer191.coordIndex = [34]
HAnimDisplacer191.displacements = [(0.211, -0.702, 0.078)]

HAnimSegment185.displacers.append(HAnimDisplacer191)
HAnimDisplacer192 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer192.name = "left_cheek_morphinterpolator"
HAnimDisplacer192.coordIndex = [1,8,12,34]
HAnimDisplacer192.displacements = [(0.473, -0.03, -0.642),(1.14, 0, -1.022),(0.583, -0.05, -0.383),(1.176, 0.13, -0.375)]

HAnimSegment185.displacers.append(HAnimDisplacer192)
HAnimDisplacer193 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipFunneler")
HAnimDisplacer193.name = "left_cheek_morphinterpolator"
HAnimDisplacer193.coordIndex = [5,18,32,33,34]
HAnimDisplacer193.displacements = [(0, 0, 0.083),(0, 0, 0.084),(0, 0, 0.414),(0, 0, 0.109),(-0.835, 0, 1.064)]

HAnimSegment185.displacers.append(HAnimDisplacer193)
HAnimDisplacer194 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer194.name = "left_cheek_morphinterpolator"
HAnimDisplacer194.coordIndex = [5,34]
HAnimDisplacer194.displacements = [(0, 0, 0.163),(-0.935, 0, 0.517)]

HAnimSegment185.displacers.append(HAnimDisplacer194)
HAnimDisplacer195 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipsPart")
HAnimDisplacer195.name = "left_cheek_morphinterpolator"
HAnimDisplacer195.coordIndex = [5]
HAnimDisplacer195.displacements = [(0, -0.083, -0.001)]

HAnimSegment185.displacers.append(HAnimDisplacer195)
HAnimDisplacer196 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipStretcher")
HAnimDisplacer196.name = "left_cheek_morphinterpolator"
HAnimDisplacer196.coordIndex = [18,34]
HAnimDisplacer196.displacements = [(1.26, -0.029, -0.124),(0.898, 0.009, 0.026)]

HAnimSegment185.displacers.append(HAnimDisplacer196)
HAnimDisplacer197 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipSuck")
HAnimDisplacer197.name = "left_cheek_morphinterpolator"
HAnimDisplacer197.coordIndex = [34]
HAnimDisplacer197.displacements = [(0.125, 0, 0)]

HAnimSegment185.displacers.append(HAnimDisplacer197)
HAnimDisplacer198 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinLipTightener")
HAnimDisplacer198.name = "left_cheek_morphinterpolator"
HAnimDisplacer198.coordIndex = [34]
HAnimDisplacer198.displacements = [(-0.521, 0.17, 1.038)]

HAnimSegment185.displacers.append(HAnimDisplacer198)
HAnimDisplacer199 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinMouthStretch")
HAnimDisplacer199.name = "left_cheek_morphinterpolator"
HAnimDisplacer199.coordIndex = [2,3,5,14,15,18,22,34]
HAnimDisplacer199.displacements = [(0, -0.909, 0.074),(0, -2.034, -0.089),(0, -2.011, -0.01),(0, -0.929, 0.079),(0, -1.927, -0.1141),(0, -1.34, 0.088),(0, -1.011, -0.024),(0, -0.736, 0)]

HAnimSegment185.displacers.append(HAnimDisplacer199)
HAnimDisplacer200 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer200.name = "left_cheek_morphinterpolator"
HAnimDisplacer200.coordIndex = [25,26,32,33]
HAnimDisplacer200.displacements = [(-0.078, 0.5523, 0),(0, 0.376, 0),(-0.146, 0.2645, 0),(0, 0.4707, 0)]

HAnimSegment185.displacers.append(HAnimDisplacer200)
HAnimDisplacer201 = x3d.HAnimDisplacer(DEF="Left_cheek_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer201.name = "left_cheek_morphinterpolator"
HAnimDisplacer201.coordIndex = [25,26,33]
HAnimDisplacer201.displacements = [(0, 0.2937, 0),(0, 0.2937, 0),(0, 0.5019, 0)]

HAnimSegment185.displacers.append(HAnimDisplacer201)
Coordinate202 = x3d.Coordinate(DEF="Left_cheek_COORD_JinBlink")
Coordinate202.point = [(5.868, 0.6861, -6.977),(5.046, 6.009, -3.719),(-0.5602, -4.076, 1.16),(-3.27, -6.054, 1.778),(-1.388, -1.337, 4.299),(-3.582, -4.636, 3.814),(2.834, 4.241, 1.178),(-3.857, 3.618, 5.665),(1.296, 3.319, 2.709),(-0.2365, 3.054, 3.875),(-0.6487, 0.5238, 4.348),(-4.592, 1.365, 6.024),(2.001, 0.9701, 1.578),(1.819, -1.515, 0.4861),(0.1831, -3.863, -2.615),(-3.274, -6.596, -0.2282),(-1.597, -4.834, -6.657),(4.101, 2.99, -1.336),(-2.758, -3.467, 4.304),(3.42, -0.01057, -3.863),(5.261, 6.596, -4.686),(1.153, -2.865, -6.293),(-2.435, -5.715, -3.442),(-5.749, 4.473, 6.621),(-5.809, 2.217, 6.673),(-5.409, -0.2562, 6.321),(-5.868, -0.0462, 6.977),(3.128, 5.574, 1.136),(4.273, 5.681, -0.7129),(-4.763, 4.022, 6.147),(-2.394, 3.215, 4.911),(-2.727, 0.9674, 5.231),(-3.19, -1.179, 5.185),(-5.082, -1.013, 6.115),(-3.921, -3.342, 4.788)]

HAnimSegment185.coord = Coordinate202
Transform203 = x3d.Transform(DEF="Left_cheek_JinBlink")
Transform203.translation = [6.927,11.97,7.646]
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape204.appearance = Appearance205
IndexedFaceSet206 = x3d.IndexedFaceSet(DEF="Left_cheek-FACES_JinBlink")
IndexedFaceSet206.solid = False
IndexedFaceSet206.creaseAngle = 3.14159
IndexedFaceSet206.texCoordIndex = [0,1,2,-1,3,0,2,-1,4,2,5,-1,2,1,5,-1,5,6,4,-1,7,4,6,-1,39,24,13,-1,13,37,39,-1,36,37,13,-1,13,15,36,-1,8,4,7,-1,18,17,16,-1,17,15,13,-1,13,16,17,-1,19,11,12,-1,16,13,19,-1,28,30,29,-1,29,14,28,-1,28,14,20,-1,20,34,28,-1,21,22,17,-1,17,18,21,-1,15,23,35,-1,35,36,15,-1,17,22,23,-1,23,15,17,-1,24,39,11,-1,19,24,11,-1,13,24,19,-1,2,4,9,-1,4,10,25,-1,25,9,4,-1,26,2,9,-1,4,8,10,-1,21,18,33,-1,33,31,21,-1,32,1,0,-1,34,27,28,-1,20,14,36,-1,36,35,20,-1,14,29,38,-1,14,38,37,-1,36,14,37,-1,37,38,39,-1]
IndexedFaceSet206.coordIndex = [1,17,19,-1,20,1,19,-1,14,19,13,-1,19,17,13,-1,13,2,14,-1,3,14,2,-1,34,18,4,-1,4,32,34,-1,31,32,4,-1,4,10,31,-1,15,14,3,-1,17,12,13,-1,12,10,4,-1,4,13,12,-1,2,5,3,-1,13,4,2,-1,24,26,25,-1,25,11,24,-1,24,11,7,-1,7,29,24,-1,6,8,12,-1,12,17,6,-1,10,9,30,-1,30,31,10,-1,12,8,9,-1,9,10,12,-1,18,34,5,-1,2,18,5,-1,4,18,2,-1,19,14,21,-1,14,22,16,-1,16,21,14,-1,0,19,21,-1,14,15,22,-1,6,17,28,-1,28,27,6,-1,28,17,1,-1,29,23,24,-1,7,11,31,-1,31,30,7,-1,11,25,33,-1,11,33,32,-1,31,11,32,-1,32,33,34,-1]
TextureCoordinate207 = x3d.TextureCoordinate(DEF="Left_cheek-TEXCOORD_JinBlink")
TextureCoordinate207.point = [(0.44, 0.6625),(0.4517, 0.649),(0.4392, 0.6356),(0.4352, 0.6651),(0.4454, 0.6184),(0.4606, 0.6289),(0.464, 0.6174),(0.467, 0.6086),(0.4571, 0.6062),(0.4273, 0.6228),(0.4413, 0.6101),(0.3041, 0.631),(0.3118, 0.6205),(0.3484, 0.6888),(0.2881, 0.7397),(0.3623, 0.7239),(0.4088, 0.6855),(0.4123, 0.7323),(0.4518, 0.7703),(0.364, 0.6372),(0.301, 0.7815),(0.4279, 0.7939),(0.3993, 0.7753),(0.3692, 0.7714),(0.3226, 0.6487),(0.4255, 0.614),(0.4239, 0.6387),(0.2671, 0.7978),(0.268, 0.7555),(0.2727, 0.7092),(0.2641, 0.7133),(0.4335, 0.819),(0.4547, 0.661),(0.4572, 0.8171),(0.2845, 0.7889),(0.3287, 0.7742),(0.3232, 0.7322),(0.3144, 0.6917),(0.2788, 0.6949),(0.3007, 0.651)]

IndexedFaceSet206.texCoord = TextureCoordinate207
Coordinate208 = x3d.Coordinate(USE="Left_cheek_COORD_JinBlink")

IndexedFaceSet206.coord = Coordinate208

Shape204.geometry = IndexedFaceSet206

Transform203.children.append(Shape204)

HAnimSegment185.children.append(Transform203)

HAnimJoint93.children.append(HAnimSegment185)
HAnimSegment209 = x3d.HAnimSegment(DEF="hanim_Left_dorsum")
HAnimSegment209.name = "left_dorsum"
HAnimDisplacer210 = x3d.HAnimDisplacer(DEF="Left_dorsum_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer210.name = "left_dorsum_morphinterpolator"
HAnimDisplacer210.coordIndex = [5]
HAnimDisplacer210.displacements = [(0, 0.838, 0)]

HAnimSegment209.displacers.append(HAnimDisplacer210)
HAnimDisplacer211 = x3d.HAnimDisplacer(DEF="Left_dorsum_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer211.name = "left_dorsum_morphinterpolator"
HAnimDisplacer211.coordIndex = [4]
HAnimDisplacer211.displacements = [(0, 0.7543, 0)]

HAnimSegment209.displacers.append(HAnimDisplacer211)
HAnimDisplacer212 = x3d.HAnimDisplacer(DEF="Left_dorsum_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer212.name = "left_dorsum_morphinterpolator"
HAnimDisplacer212.coordIndex = [5]
HAnimDisplacer212.displacements = [(0, 0.376, 0)]

HAnimSegment209.displacers.append(HAnimDisplacer212)
HAnimDisplacer213 = x3d.HAnimDisplacer(DEF="Left_dorsum_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer213.name = "left_dorsum_morphinterpolator"
HAnimDisplacer213.coordIndex = [5]
HAnimDisplacer213.displacements = [(0, 0.293, 0)]

HAnimSegment209.displacers.append(HAnimDisplacer213)
Coordinate214 = x3d.Coordinate(DEF="Left_dorsum_COORD_JinBlink")
Coordinate214.point = [(-0.2793, 2.722, -0.1346),(-0.471, 0.1584, -0.08532),(-0.25, -2.447, 0.6076),(0.471, 1.797, -0.6076),(0.4116, -0.459, -0.556),(0.352, -2.722, -0.252)]

HAnimSegment209.coord = Coordinate214
Transform215 = x3d.Transform(DEF="Left_dorsum_JinBlink")
Transform215.translation = [0.7065,14.64,14.87]
Shape216 = x3d.Shape()
Appearance217 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape216.appearance = Appearance217
IndexedFaceSet218 = x3d.IndexedFaceSet(DEF="Left_dorsum-FACES_JinBlink")
IndexedFaceSet218.solid = False
IndexedFaceSet218.creaseAngle = 3.14159
IndexedFaceSet218.texCoordIndex = [3,0,1,-1,1,4,3,-1,5,4,1,-1,1,2,5,-1]
IndexedFaceSet218.coordIndex = [3,0,1,-1,1,4,3,-1,5,4,1,-1,1,2,5,-1]
TextureCoordinate219 = x3d.TextureCoordinate(DEF="Left_dorsum-TEXCOORD_JinBlink")
TextureCoordinate219.point = [(0.2534, 0.8152),(0.2534, 0.767),(0.2528, 0.7186),(0.2671, 0.7978),(0.268, 0.7555),(0.2641, 0.7133)]

IndexedFaceSet218.texCoord = TextureCoordinate219
Coordinate220 = x3d.Coordinate(USE="Left_dorsum_COORD_JinBlink")

IndexedFaceSet218.coord = Coordinate220

Shape216.geometry = IndexedFaceSet218

Transform215.children.append(Shape216)

HAnimSegment209.children.append(Transform215)

HAnimJoint93.children.append(HAnimSegment209)
HAnimSegment221 = x3d.HAnimSegment(DEF="hanim_Left_ear")
HAnimSegment221.name = "left_ear"
Coordinate222 = x3d.Coordinate(DEF="Left_ear_COORD_JinBlink")
Coordinate222.point = [(1.104, -2.879, -0.3646),(1.92, -0.7197, -2.765),(0.3083, -3.342, -0.3477),(1.674, 4.039, 0.222),(2.14, 2.313, -2.716),(0.349, 2.504, -0.3477),(-2.14, -4.039, 2.765),(-0.2989, 2.568, 1.943)]

HAnimSegment221.coord = Coordinate222
Transform223 = x3d.Transform(DEF="Left_ear_JinBlink")
Transform223.translation = [12.49,15.99,1.017]
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape224.appearance = Appearance225
IndexedFaceSet226 = x3d.IndexedFaceSet(DEF="Left_ear-FACES_JinBlink")
IndexedFaceSet226.solid = False
IndexedFaceSet226.creaseAngle = 3.14159
IndexedFaceSet226.texCoordIndex = [0,1,2,-1,4,5,3,-1,3,1,4,-1,1,3,2,-1,2,7,6,-1,6,0,2,-1,5,7,2,-1,2,3,5,-1]
IndexedFaceSet226.coordIndex = [6,2,0,-1,5,4,1,-1,1,2,5,-1,2,1,0,-1,0,3,7,-1,7,6,0,-1,4,3,0,-1,0,1,4,-1]
TextureCoordinate227 = x3d.TextureCoordinate(DEF="Left_ear-TEXCOORD_JinBlink")
TextureCoordinate227.point = [(0.4392, 0.6356),(0.4239, 0.6387),(0.4239, 0.6408),(0.412, 0.6504),(0.4239, 0.6648),(0.4123, 0.664),(0.4352, 0.6651),(0.4267, 0.6717)]

IndexedFaceSet226.texCoord = TextureCoordinate227
Coordinate228 = x3d.Coordinate(USE="Left_ear_COORD_JinBlink")

IndexedFaceSet226.coord = Coordinate228

Shape224.geometry = IndexedFaceSet226

Transform223.children.append(Shape224)

HAnimSegment221.children.append(Transform223)

HAnimJoint93.children.append(HAnimSegment221)
HAnimSegment229 = x3d.HAnimSegment(DEF="hanim_Left_eyebrow")
HAnimSegment229.name = "left_eyebrow"
HAnimDisplacer230 = x3d.HAnimDisplacer(DEF="Left_eyebrow_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer230.name = "left_eyebrow_morphinterpolator"
HAnimDisplacer230.coordIndex = [0,1,3,4,5,6,7,8]
HAnimDisplacer230.displacements = [(-0.5074, -0.4985, 0),(0, -0.094, 0),(-0.5076, -0.4988, 0),(-0.332, -0.414, 0),(0, -0.094, 0),(-0.5072, -0.4985, 0),(0, -0.0941, 0),(0, -0.0942, 0)]

HAnimSegment229.displacers.append(HAnimDisplacer230)
HAnimDisplacer231 = x3d.HAnimDisplacer(DEF="Left_eyebrow_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer231.name = "left_eyebrow_morphinterpolator"
HAnimDisplacer231.coordIndex = [0,1,3,4,6,7]
HAnimDisplacer231.displacements = [(0, 0.3656, 0),(0, 0.095, 0),(0, 0.365, 0),(0, 0.3657, 0),(0, 0.3655, 0),(0, 0.0945, 0)]

HAnimSegment229.displacers.append(HAnimDisplacer231)
HAnimDisplacer232 = x3d.HAnimDisplacer(DEF="Left_eyebrow_MorphInterpolator_JinSquint")
HAnimDisplacer232.name = "left_eyebrow_morphinterpolator"
HAnimDisplacer232.coordIndex = [7,8]
HAnimDisplacer232.displacements = [(0, -0.4631, 0),(0, -0.4632, 0)]

HAnimSegment229.displacers.append(HAnimDisplacer232)
HAnimDisplacer233 = x3d.HAnimDisplacer(DEF="Left_eyebrow_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer233.name = "left_eyebrow_morphinterpolator"
HAnimDisplacer233.coordIndex = [6]
HAnimDisplacer233.displacements = [(0, 0.4975, 0)]

HAnimSegment229.displacers.append(HAnimDisplacer233)
Coordinate234 = x3d.Coordinate(DEF="Left_eyebrow_COORD_JinBlink")
Coordinate234.point = [(-0.6206, 0.2925, 1.523),(2.547, 1.129, -0.8682),(-4.175, 0.9255, 2.806),(-0.6464, 1.103, 1.5),(-4.104, -1.337, 2.665),(4.175, 1.337, -2.599),(-0.6118, -0.2218, 1.466),(2.366, 0.3082, -0.9723),(4.011, 0.3542, -2.806)]

HAnimSegment229.coord = Coordinate234
Transform235 = x3d.Transform(DEF="Left_eyebrow_JinBlink")
Transform235.translation = [5.691,19.58,13.13]
Shape236 = x3d.Shape()
Appearance237 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape236.appearance = Appearance237
IndexedFaceSet238 = x3d.IndexedFaceSet(DEF="Left_eyebrow-FACES_JinBlink")
IndexedFaceSet238.solid = False
IndexedFaceSet238.creaseAngle = 3.14159
IndexedFaceSet238.texCoordIndex = [5,1,7,-1,7,8,5,-1,6,0,4,-1,7,1,0,-1,0,6,7,-1,2,4,0,-1,0,3,2,-1,3,0,1,-1]
IndexedFaceSet238.coordIndex = [5,1,7,-1,7,8,5,-1,6,0,4,-1,7,1,0,-1,0,6,7,-1,2,4,0,-1,0,3,2,-1,3,0,1,-1]
TextureCoordinate239 = x3d.TextureCoordinate(DEF="Left_eyebrow-TEXCOORD_JinBlink")
TextureCoordinate239.point = [(0.3395, 0.8606),(0.3992, 0.8783),(0.2728, 0.8741),(0.3391, 0.876),(0.274, 0.8322),(0.4299, 0.8825),(0.3402, 0.8534),(0.3979, 0.8641),(0.4266, 0.8643)]

IndexedFaceSet238.texCoord = TextureCoordinate239
Coordinate240 = x3d.Coordinate(USE="Left_eyebrow_COORD_JinBlink")

IndexedFaceSet238.coord = Coordinate240

Shape236.geometry = IndexedFaceSet238

Transform235.children.append(Shape236)

HAnimSegment229.children.append(Transform235)

HAnimJoint93.children.append(HAnimSegment229)
HAnimSegment241 = x3d.HAnimSegment(DEF="hanim_Left_forehead")
HAnimSegment241.name = "left_forehead"
HAnimDisplacer242 = x3d.HAnimDisplacer(DEF="Left_forehead_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer242.name = "left_forehead_morphinterpolator"
HAnimDisplacer242.coordIndex = [14,16,20]
HAnimDisplacer242.displacements = [(0, -0.094, 0),(0, -0.094, 0),(-0.508, -0.498, 0)]

HAnimSegment241.displacers.append(HAnimDisplacer242)
HAnimDisplacer243 = x3d.HAnimDisplacer(DEF="Left_forehead_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer243.name = "left_forehead_morphinterpolator"
HAnimDisplacer243.coordIndex = [16,20]
HAnimDisplacer243.displacements = [(0, 0.094, 0),(0, 0.366, 0)]

HAnimSegment241.displacers.append(HAnimDisplacer243)
Coordinate244 = x3d.Coordinate(DEF="Left_forehead_COORD_JinBlink")
Coordinate244.point = [(2.366, -3.832, 2.607),(-1.721, -3.37, 5.298),(-0.9278, 3.698, 2.337),(2.798, 0.5048, 1.078),(-5.256, -3.235, 6.945),(0.1169, 5.415, -1.676),(3.513, 2.123, -2.845),(0.04584, 5.238, -6.945),(3.382, 0.4603, -6.945),(-1.306, 1.607, 4.614),(-4.278, 5.326, 2.844),(-4.148, 6.951, -0.7431),(-4.148, 7.108, -6.945),(-4.686, 2.054, 6.111),(3.214, -6.697, 1.298),(4.876, -4.833, -1.108),(1.586, -6.904, 3.028),(5.256, -4.053, -3.68),(4.869, -4.024, -6.945),(-5.136, -7.108, 6.703),(-1.607, -6.931, 5.397)]

HAnimSegment241.coord = Coordinate244
Transform245 = x3d.Transform(DEF="Left_forehead_JinBlink")
Transform245.translation = [6.652,27.61,9.229]
Shape246 = x3d.Shape()
Appearance247 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape246.appearance = Appearance247
IndexedFaceSet248 = x3d.IndexedFaceSet(DEF="Left_forehead-FACES_JinBlink")
IndexedFaceSet248.solid = False
IndexedFaceSet248.creaseAngle = 3.14159
IndexedFaceSet248.texCoordIndex = [1,9,13,-1,13,4,1,-1,3,0,9,-1,3,2,15,-1,15,2,14,-1,2,16,14,-1,1,20,16,-1,16,2,1,-1,3,15,17,-1,17,6,3,-1,0,3,6,-1,6,5,0,-1,6,17,18,-1,18,8,6,-1,5,6,8,-1,8,7,5,-1,9,0,10,-1,10,13,9,-1,1,2,3,-1,3,9,1,-1,1,4,19,-1,19,20,1,-1,0,5,11,-1,11,10,0,-1,5,7,12,-1,12,11,5,-1]
IndexedFaceSet248.coordIndex = [1,9,13,-1,13,4,1,-1,3,2,9,-1,3,0,15,-1,15,0,14,-1,0,16,14,-1,1,20,16,-1,16,0,1,-1,3,15,17,-1,17,6,3,-1,2,3,6,-1,6,5,2,-1,6,17,18,-1,18,8,6,-1,5,6,8,-1,8,7,5,-1,9,2,10,-1,10,13,9,-1,1,0,3,-1,3,9,1,-1,1,4,19,-1,19,20,1,-1,2,5,11,-1,11,10,2,-1,5,7,12,-1,12,11,5,-1]
TextureCoordinate249 = x3d.TextureCoordinate(DEF="Left_forehead-TEXCOORD_JinBlink")
TextureCoordinate249.point = [(0.3563, 0.9819),(0.3371, 0.9436),(0.414, 0.9365),(0.428, 0.9618),(0.2706, 0.9459),(0.3807, 0.9869),(0.434, 0.9653),(0.3786, 0.9951),(0.4425, 0.9551),(0.3372, 0.9707),(0.3002, 0.9788),(0.3015, 0.9807),(0.3016, 0.9833),(0.2804, 0.9652),(0.4299, 0.8825),(0.4655, 0.9081),(0.3992, 0.8783),(0.4676, 0.8967),(0.465, 0.9097),(0.2728, 0.8741),(0.3391, 0.876)]

IndexedFaceSet248.texCoord = TextureCoordinate249
Coordinate250 = x3d.Coordinate(USE="Left_forehead_COORD_JinBlink")

IndexedFaceSet248.coord = Coordinate250

Shape246.geometry = IndexedFaceSet248

Transform245.children.append(Shape246)

HAnimSegment241.children.append(Transform245)

HAnimJoint93.children.append(HAnimSegment241)
HAnimSegment251 = x3d.HAnimSegment(DEF="hanim_Left_lower_eyelid")
HAnimSegment251.name = "left_lower_eyelid"
HAnimDisplacer252 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinBlink")
HAnimDisplacer252.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer252.coordIndex = [0,1,2,4]
HAnimDisplacer252.displacements = [(0, 0.1171, 0.1997),(0, 0.2271, 0.251),(0, 0.1444, 0.0565),(-0.164, 0.1045, 0.25)]

HAnimSegment251.displacers.append(HAnimDisplacer252)
HAnimDisplacer253 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer253.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer253.coordIndex = [5,6,7,8,9,14]
HAnimDisplacer253.displacements = [(0, 0.1005, 0.079),(0, 0.1344, -0.107),(0.299, 0.3808, -0.1835),(0, 0.268, 0.0997),(0, 0.2684, 0),(0, 0.067, -0.082)]

HAnimSegment251.displacers.append(HAnimDisplacer253)
HAnimDisplacer254 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinEyesClosed")
HAnimDisplacer254.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer254.coordIndex = [0,1,2,4]
HAnimDisplacer254.displacements = [(0, 0.1171, 0.1997),(0, 0.2271, 0.251),(0, 0.1444, 0.0565),(-0.164, 0.1045, 0.25)]

HAnimSegment251.displacers.append(HAnimDisplacer254)
HAnimDisplacer255 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinLidDroop")
HAnimDisplacer255.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer255.coordIndex = [11]
HAnimDisplacer255.displacements = [(0, -0.349, 0)]

HAnimSegment251.displacers.append(HAnimDisplacer255)
HAnimDisplacer256 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinLidTightener")
HAnimDisplacer256.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer256.coordIndex = [0,1,2,3,4,10]
HAnimDisplacer256.displacements = [(0, 0.3086, 0),(0, 0.0964, 0),(-0.09, 0.209, 0),(0, 0.3085, 0),(0, 0.1513, 0),(0, 0.1512, 0)]

HAnimSegment251.displacers.append(HAnimDisplacer256)
HAnimDisplacer257 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinSquint")
HAnimDisplacer257.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer257.coordIndex = [0,1,2,3,4,10,11,12]
HAnimDisplacer257.displacements = [(0, 0.6387, 0.7019),(0, 0.3839, 0.263),(0, 0.499, 0.4721),(0, 0.7235, 0.3988),(0, 0.6387, 0.398),(0, 0.6386, 0.399),(0, -0.078, 0),(0, -0.078, 0)]

HAnimSegment251.displacers.append(HAnimDisplacer257)
HAnimDisplacer258 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer258.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer258.coordIndex = [13]
HAnimDisplacer258.displacements = [(0, 0.4976, 0)]

HAnimSegment251.displacers.append(HAnimDisplacer258)
HAnimDisplacer259 = x3d.HAnimDisplacer(DEF="Left_lower_eyelid_MorphInterpolator_JinWink")
HAnimDisplacer259.name = "left_lower_eyelid_morphinterpolator"
HAnimDisplacer259.coordIndex = [0,1,2,3,4,10,11]
HAnimDisplacer259.displacements = [(0.214, 1.0508, 0.5553),(0, 0.4269, 0.471),(0.093, 0.8476, 0.3331),(-0.3349, 1.0786, 0.7039),(0, 0.8357, 0.707),(0, 0.8975, 0.841),(0, 0, 0.034)]

HAnimSegment251.displacers.append(HAnimDisplacer259)
Coordinate260 = x3d.Coordinate(DEF="Left_lower_eyelid_COORD_JinBlink")
Coordinate260.point = [(1.719, -0.0007944, -0.6346),(-2.666, 0.1549, 1.996),(2.315, 0.3494, -0.8744),(0.989, -0.2676, 0.1056),(-1.449, -0.2205, 1.411),(3.651, -0.24, -2.494),(-3.04, -0.8628, 1.994),(2.113, -1.162, -0.9625),(0.5806, -1.427, 0.2034),(-1.577, -1.266, 1.24),(-0.7878, -0.2335, 1.055),(3.25, 1.427, -1.433),(3.946, 1.094, -2.536),(-3.174, 0.6164, 2.536),(-3.946, -0.4586, 2.476)]

HAnimSegment251.coord = Coordinate260
Transform261 = x3d.Transform(DEF="Left_lower_eyelid_JinBlink")
Transform261.translation = [6.11,16.45,11.32]
Shape262 = x3d.Shape()
Appearance263 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape262.appearance = Appearance263
IndexedFaceSet264 = x3d.IndexedFaceSet(DEF="Left_lower_eyelid-FACES_JinBlink")
IndexedFaceSet264.solid = False
IndexedFaceSet264.creaseAngle = 3.14159
IndexedFaceSet264.texCoordIndex = [8,0,10,-1,10,9,8,-1,0,8,7,-1,7,2,0,-1,13,14,6,-1,6,3,13,-1,2,7,5,-1,5,4,2,-1,11,4,5,-1,5,12,11,-1,1,3,6,-1,6,9,1,-1,10,1,9,-1]
IndexedFaceSet264.coordIndex = [8,3,10,-1,10,9,8,-1,3,8,7,-1,7,0,3,-1,13,14,6,-1,6,1,13,-1,0,7,5,-1,5,2,0,-1,11,2,5,-1,5,12,11,-1,4,1,6,-1,6,9,4,-1,10,4,9,-1]
TextureCoordinate265 = x3d.TextureCoordinate(DEF="Left_lower_eyelid-TEXCOORD_JinBlink")
TextureCoordinate265.point = [(0.3777, 0.7936),(0.3315, 0.7948),(0.3916, 0.7984),(0.309, 0.8013),(0.4011, 0.8053),(0.4279, 0.7939),(0.301, 0.7815),(0.3993, 0.7753),(0.3692, 0.7714),(0.3287, 0.7742),(0.344, 0.7945),(0.4198, 0.8261),(0.4335, 0.819),(0.2981, 0.8094),(0.2845, 0.7889)]

IndexedFaceSet264.texCoord = TextureCoordinate265
Coordinate266 = x3d.Coordinate(USE="Left_lower_eyelid_COORD_JinBlink")

IndexedFaceSet264.coord = Coordinate266

Shape262.geometry = IndexedFaceSet264

Transform261.children.append(Shape262)

HAnimSegment251.children.append(Transform261)

HAnimJoint93.children.append(HAnimSegment251)
HAnimSegment267 = x3d.HAnimSegment(DEF="hanim_Left_lower_vermillion_lip")
HAnimSegment267.name = "left_lower_vermillion_lip"
HAnimDisplacer268 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer268.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer268.coordIndex = [0,1,2]
HAnimDisplacer268.displacements = [(0, 0.3821, 0.435),(0.629, 1.323, 0.1066),(0, 0.7896, 0.4659)]

HAnimSegment267.displacers.append(HAnimDisplacer268)
HAnimDisplacer269 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer269.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer269.coordIndex = [0,1,2]
HAnimDisplacer269.displacements = [(0, 0.187, 0),(0, -0.1372, 0),(0, 0.6497, 0.364)]

HAnimSegment267.displacers.append(HAnimDisplacer269)
HAnimDisplacer270 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer270.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer270.coordIndex = [0,1,2]
HAnimDisplacer270.displacements = [(0, -0.0896, 0.533),(0.378, 0.396, 0.1527),(0, 0.6332, 0.8798)]

HAnimSegment267.displacers.append(HAnimDisplacer270)
HAnimDisplacer271 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinJawDrop")
HAnimDisplacer271.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer271.coordIndex = [0,2]
HAnimDisplacer271.displacements = [(0, -0.6156, 0),(0, -0.6154, 0)]

HAnimSegment267.displacers.append(HAnimDisplacer271)
HAnimDisplacer272 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer272.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer272.coordIndex = [0,1,2]
HAnimDisplacer272.displacements = [(0, -0.0368, 0.837),(0.21, -0.7014, 0.0777),(0, 0.5213, 1.2488)]

HAnimSegment267.displacers.append(HAnimDisplacer272)
HAnimDisplacer273 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer273.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer273.coordIndex = [2]
HAnimDisplacer273.displacements = [(1.176, 0.13, -0.375)]

HAnimSegment267.displacers.append(HAnimDisplacer273)
HAnimDisplacer274 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer274.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer274.coordIndex = [0,1,2]
HAnimDisplacer274.displacements = [(0.2642, -0.7179, 0.823),(-0.8355, 0, 1.0637),(-0.101, -0.5994, 0.7018)]

HAnimSegment267.displacers.append(HAnimDisplacer274)
HAnimDisplacer275 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipPressor")
HAnimDisplacer275.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer275.coordIndex = [0,2]
HAnimDisplacer275.displacements = [(0, -0.3795, 0.1337),(0, -0.21, 0)]

HAnimSegment267.displacers.append(HAnimDisplacer275)
HAnimDisplacer276 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer276.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer276.coordIndex = [0,1,2]
HAnimDisplacer276.displacements = [(0, -0.3959, 0.859),(-0.9348, 0, 0.5167),(0, -0.2497, 0.9748)]

HAnimSegment267.displacers.append(HAnimDisplacer276)
HAnimDisplacer277 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipsPart")
HAnimDisplacer277.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer277.coordIndex = [0,2]
HAnimDisplacer277.displacements = [(0, -0.4319, 0.0434),(0, -0.4133, -0.0174)]

HAnimSegment267.displacers.append(HAnimDisplacer277)
HAnimDisplacer278 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipStretcher")
HAnimDisplacer278.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer278.coordIndex = [1]
HAnimDisplacer278.displacements = [(0.898, 0.0092, 0.0257)]

HAnimSegment267.displacers.append(HAnimDisplacer278)
HAnimDisplacer279 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer279.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer279.coordIndex = [0,1,2]
HAnimDisplacer279.displacements = [(0, -0.0594, 0.1828),(0.125, 0, 0),(0, 0.633, 0.3625)]

HAnimSegment267.displacers.append(HAnimDisplacer279)
HAnimDisplacer280 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer280.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer280.coordIndex = [0,1,2]
HAnimDisplacer280.displacements = [(-0.042, -0.058, 1.082),(-0.5211, 0.1705, 1.038),(0.1612, 0.0641, 0.9158)]

HAnimSegment267.displacers.append(HAnimDisplacer280)
HAnimDisplacer281 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer281.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer281.coordIndex = [0,2]
HAnimDisplacer281.displacements = [(0, -0.5685, 0),(0, -0.5684, 0)]

HAnimSegment267.displacers.append(HAnimDisplacer281)
HAnimDisplacer282 = x3d.HAnimDisplacer(DEF="Left_lower_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer282.name = "left_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer282.coordIndex = [0,1,2]
HAnimDisplacer282.displacements = [(0.176, -2.4736, 0.049),(0, -0.7362, 0),(0.1963, -2.4594, 0.002)]

HAnimSegment267.displacers.append(HAnimDisplacer282)
Coordinate283 = x3d.Coordinate(DEF="Left_lower_vermillion_lip_COORD_JinBlink")
Coordinate283.point = [(-1.218, 0.4506, 0.603),(1.218, 0.219, -0.603),(-1.154, -0.4506, 0.3592)]

HAnimSegment267.coord = Coordinate283
Transform284 = x3d.Transform(DEF="Left_lower_vermillion_lip_JinBlink")
Transform284.translation = [1.788,8.405,13.04]
Shape285 = x3d.Shape()
Appearance286 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape285.appearance = Appearance286
IndexedFaceSet287 = x3d.IndexedFaceSet(DEF="Left_lower_vermillion_lip-FACES_JinBlink")
IndexedFaceSet287.solid = False
IndexedFaceSet287.creaseAngle = 3.14159
IndexedFaceSet287.texCoordIndex = [2,1,0,-1]
IndexedFaceSet287.coordIndex = [2,1,0,-1]
TextureCoordinate288 = x3d.TextureCoordinate(DEF="Left_lower_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate288.point = [(0.2548, 0.6554),(0.3007, 0.651),(0.2652, 0.6384)]

IndexedFaceSet287.texCoord = TextureCoordinate288
Coordinate289 = x3d.Coordinate(USE="Left_lower_vermillion_lip_COORD_JinBlink")

IndexedFaceSet287.coord = Coordinate289

Shape285.geometry = IndexedFaceSet287

Transform284.children.append(Shape285)

HAnimSegment267.children.append(Transform284)

HAnimJoint93.children.append(HAnimSegment267)
HAnimSegment290 = x3d.HAnimSegment(DEF="hanim_Left_nasolabial_cheek")
HAnimSegment290.name = "left_nasolabial_cheek"
HAnimDisplacer291 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer291.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer291.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer291.displacements = [(0, 0.838, 0),(0, 0.5164, 0),(0.6288, 1.3226, 0.1063),(0, 0.838, 0),(0, 0.838, 0),(0, 0.8376, 0)]

HAnimSegment290.displacers.append(HAnimDisplacer291)
HAnimDisplacer292 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinChinRaiser")
HAnimDisplacer292.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer292.coordIndex = [1,2]
HAnimDisplacer292.displacements = [(0, 0.0967, 0),(0, -0.137, 0)]

HAnimSegment290.displacers.append(HAnimDisplacer292)
HAnimDisplacer293 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinDimpler")
HAnimDisplacer293.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer293.coordIndex = [1,2]
HAnimDisplacer293.displacements = [(0, -0.069, 0.044),(0.3778, 0.396, 0.1524)]

HAnimSegment290.displacers.append(HAnimDisplacer293)
HAnimDisplacer294 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer294.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer294.coordIndex = [1,2]
HAnimDisplacer294.displacements = [(0, -0.0221, 0.125),(0.2098, -0.701, 0.077)]

HAnimSegment290.displacers.append(HAnimDisplacer294)
HAnimDisplacer295 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer295.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer295.coordIndex = [5]
HAnimDisplacer295.displacements = [(1.176, 0.13, -0.375)]

HAnimSegment290.displacers.append(HAnimDisplacer295)
HAnimDisplacer296 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipFunneler")
HAnimDisplacer296.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer296.coordIndex = [1,2,5]
HAnimDisplacer296.displacements = [(-0.1338, 0.1022, 0.551),(-0.8357, 0, 1.0634),(0, 0, 0.1091)]

HAnimSegment290.displacers.append(HAnimDisplacer296)
HAnimDisplacer297 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer297.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer297.coordIndex = [1,2]
HAnimDisplacer297.displacements = [(-0.1438, 0, 0.566),(-0.935, 0, 0.5164)]

HAnimSegment290.displacers.append(HAnimDisplacer297)
HAnimDisplacer298 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipStretcher")
HAnimDisplacer298.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer298.coordIndex = [2]
HAnimDisplacer298.displacements = [(0.8978, 0.009, 0.025)]

HAnimSegment290.displacers.append(HAnimDisplacer298)
HAnimDisplacer299 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipSuck")
HAnimDisplacer299.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer299.coordIndex = [1,2]
HAnimDisplacer299.displacements = [(0, -0.52, -0.655),(0.1248, 0, 0)]

HAnimSegment290.displacers.append(HAnimDisplacer299)
HAnimDisplacer300 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinLipTightener")
HAnimDisplacer300.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer300.coordIndex = [1,2]
HAnimDisplacer300.displacements = [(-0.0758, -0.0332, 0.261),(-0.5214, 0.171, 1.0377)]

HAnimSegment290.displacers.append(HAnimDisplacer300)
HAnimDisplacer301 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinMouthStretch")
HAnimDisplacer301.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer301.coordIndex = [1,2]
HAnimDisplacer301.displacements = [(0, 0.2684, 0),(0, -0.736, 0)]

HAnimSegment290.displacers.append(HAnimDisplacer301)
HAnimDisplacer302 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer302.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer302.coordIndex = [0,3,4,5]
HAnimDisplacer302.displacements = [(0, 0.376, 0),(-0.0781, 0.552, 0),(0, 0.376, 0),(0, 0.4706, 0)]

HAnimSegment290.displacers.append(HAnimDisplacer302)
HAnimDisplacer303 = x3d.HAnimDisplacer(DEF="Left_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer303.name = "left_nasolabial_cheek_morphinterpolator"
HAnimDisplacer303.coordIndex = [0,1,3,4,5]
HAnimDisplacer303.displacements = [(0, 0.502, 0),(0, 0.5016, 0),(0, 0.294, 0),(0, 0.294, 0),(0, 0.5016, 0)]

HAnimSegment290.displacers.append(HAnimDisplacer303)
Coordinate304 = x3d.Coordinate(DEF="Left_nasolabial_cheek_COORD_JinBlink")
Coordinate304.point = [(-0.8548, 0.741, 0.5666),(-0.9852, -0.962, 1.035),(0.9852, -1.648, -1.094),(-0.5035, 1.438, 0.4388),(-0.9626, 1.648, 1.094),(-0.1761, 0.6814, 0.2329)]

HAnimSegment290.coord = Coordinate304
Transform305 = x3d.Transform(DEF="Left_nasolabial_cheek_JinBlink")
Transform305.translation = [2.021,10.27,13.53]
Shape306 = x3d.Shape()
Appearance307 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape306.appearance = Appearance307
IndexedFaceSet308 = x3d.IndexedFaceSet(DEF="Left_nasolabial_cheek-FACES_JinBlink")
IndexedFaceSet308.solid = False
IndexedFaceSet308.creaseAngle = 3.14159
IndexedFaceSet308.texCoordIndex = [0,3,4,-1,3,0,5,-1,5,0,1,-1,1,2,5,-1]
IndexedFaceSet308.coordIndex = [0,3,4,-1,3,0,5,-1,5,0,1,-1,1,2,5,-1]
TextureCoordinate309 = x3d.TextureCoordinate(DEF="Left_nasolabial_cheek-TEXCOORD_JinBlink")
TextureCoordinate309.point = [(0.2661, 0.696),(0.2636, 0.664),(0.3007, 0.651),(0.2727, 0.7092),(0.2641, 0.7133),(0.2788, 0.6949)]

IndexedFaceSet308.texCoord = TextureCoordinate309
Coordinate310 = x3d.Coordinate(USE="Left_nasolabial_cheek_COORD_JinBlink")

IndexedFaceSet308.coord = Coordinate310

Shape306.geometry = IndexedFaceSet308

Transform305.children.append(Shape306)

HAnimSegment290.children.append(Transform305)

HAnimJoint93.children.append(HAnimSegment290)
HAnimSegment311 = x3d.HAnimSegment(DEF="hanim_Left_nostril")
HAnimSegment311.name = "left_nostril"
HAnimDisplacer312 = x3d.HAnimDisplacer(DEF="Left_nostril_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer312.name = "left_nostril_morphinterpolator"
HAnimDisplacer312.coordIndex = [2,4]
HAnimDisplacer312.displacements = [(0, 0.838, 0),(0, 0.8382, 0)]

HAnimSegment311.displacers.append(HAnimDisplacer312)
HAnimDisplacer313 = x3d.HAnimDisplacer(DEF="Left_nostril_MorphInterpolator_JinNasolabialDeepener")
HAnimDisplacer313.name = "left_nostril_morphinterpolator"
HAnimDisplacer313.coordIndex = [0]
HAnimDisplacer313.displacements = [(0.3849, 0, 0)]

HAnimSegment311.displacers.append(HAnimDisplacer313)
HAnimDisplacer314 = x3d.HAnimDisplacer(DEF="Left_nostril_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer314.name = "left_nostril_morphinterpolator"
HAnimDisplacer314.coordIndex = [2,4]
HAnimDisplacer314.displacements = [(0, 0.3759, 0),(0, 0.3762, 0)]

HAnimSegment311.displacers.append(HAnimDisplacer314)
HAnimDisplacer315 = x3d.HAnimDisplacer(DEF="Left_nostril_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer315.name = "left_nostril_morphinterpolator"
HAnimDisplacer315.coordIndex = [2,4]
HAnimDisplacer315.displacements = [(0, 0.5016, 0),(0, 0.2937, 0)]

HAnimSegment311.displacers.append(HAnimDisplacer315)
Coordinate316 = x3d.Coordinate(DEF="Left_nostril_COORD_JinBlink")
Coordinate316.point = [(-0.2923, 0.2585, 0.9483),(-0.398, -0.9732, 0.1131),(0.398, -0.209, -0.9483),(-0.3119, 0.9732, 0.439),(0.2902, 0.6978, -0.4206)]

HAnimSegment311.coord = Coordinate316
Transform317 = x3d.Transform(DEF="Left_nostril_JinBlink")
Transform317.translation = [0.7684,11.22,15.04]
Shape318 = x3d.Shape()
Appearance319 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape318.appearance = Appearance319
IndexedFaceSet320 = x3d.IndexedFaceSet(DEF="Left_nostril-FACES_JinBlink")
IndexedFaceSet320.solid = False
IndexedFaceSet320.creaseAngle = 3.14159
IndexedFaceSet320.texCoordIndex = [0,2,3,-1,1,2,0,-1,4,3,2,-1]
IndexedFaceSet320.coordIndex = [0,2,3,-1,1,2,0,-1,4,3,2,-1]
TextureCoordinate321 = x3d.TextureCoordinate(DEF="Left_nostril-TEXCOORD_JinBlink")
TextureCoordinate321.point = [(0.2538, 0.7051),(0.2511, 0.6816),(0.2661, 0.696),(0.2528, 0.7186),(0.2641, 0.7133)]

IndexedFaceSet320.texCoord = TextureCoordinate321
Coordinate322 = x3d.Coordinate(USE="Left_nostril_COORD_JinBlink")

IndexedFaceSet320.coord = Coordinate322

Shape318.geometry = IndexedFaceSet320

Transform317.children.append(Shape318)

HAnimSegment311.children.append(Transform317)

HAnimJoint93.children.append(HAnimSegment311)
HAnimSegment323 = x3d.HAnimSegment(DEF="hanim_Left_pupil")
HAnimSegment323.name = "left_pupil"
HAnimDisplacer324 = x3d.HAnimDisplacer(DEF="Left_pupil_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer324.name = "left_pupil_morphinterpolator"
HAnimDisplacer324.coordIndex = [6,7]
HAnimDisplacer324.displacements = [(0, -0.0784, 0),(0, -0.078, 0)]

HAnimSegment323.displacers.append(HAnimDisplacer324)
HAnimDisplacer325 = x3d.HAnimDisplacer(DEF="Left_pupil_MorphInterpolator_JinLidTightener")
HAnimDisplacer325.name = "left_pupil_morphinterpolator"
HAnimDisplacer325.coordIndex = [6,7,8,9,12]
HAnimDisplacer325.displacements = [(0, -0.354, 0),(0, -0.3535, 0),(0, -0.3535, 0),(0, 0.308, 0),(0, 0.151, 0)]

HAnimSegment323.displacers.append(HAnimDisplacer325)
HAnimDisplacer326 = x3d.HAnimDisplacer(DEF="Left_pupil_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer326.name = "left_pupil_morphinterpolator"
HAnimDisplacer326.coordIndex = [6,7,8]
HAnimDisplacer326.displacements = [(0, 0.4971, 0),(0, 0.498, 0),(0, 0.498, 0)]

HAnimSegment323.displacers.append(HAnimDisplacer326)
Coordinate327 = x3d.Coordinate(DEF="Left_pupil_COORD_JinBlink")
Coordinate327.point = [(-0.4761, 0.63, 0.6933),(0.8417, -0.7176, -0.6485),(-0.4665, -0.8077, 0.1079),(0.8447, 0.7457, -0.2465),(-1.612, 0.3169, 1.289),(1.518, 0.7946, -0.736),(-1.517, 0.8129, 1.347),(-0.5339, 1.273, 1.112),(1.311, 1.316, -0.204),(1.04, -1.316, -0.9056),(1.612, -0.6212, -1.347),(-1.373, -0.8544, 0.5399),(-0.7368, -1.282, 0.04415)]

HAnimSegment323.coord = Coordinate327
Transform328 = x3d.Transform(DEF="Left_pupil_JinBlink")
Transform328.translation = [6.059,17.5,12.33]
Shape329 = x3d.Shape()
Appearance330 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape329.appearance = Appearance330
IndexedFaceSet331 = x3d.IndexedFaceSet(DEF="Left_pupil-FACES_JinBlink")
IndexedFaceSet331.solid = False
IndexedFaceSet331.creaseAngle = 3.14159
IndexedFaceSet331.texCoordIndex = [4,0,7,-1,7,6,4,-1,7,0,3,-1,3,8,7,-1,12,9,1,-1,1,2,12,-1,10,1,9,-1,5,3,1,-1,1,10,5,-1,0,4,11,-1,11,2,0,-1,2,11,12,-1,3,5,8,-1,0,2,1,-1,1,3,0,-1]
IndexedFaceSet331.coordIndex = [4,0,7,-1,7,6,4,-1,7,0,3,-1,3,8,7,-1,12,9,1,-1,1,2,12,-1,10,1,9,-1,5,3,1,-1,1,10,5,-1,0,4,11,-1,11,2,0,-1,2,11,12,-1,3,5,8,-1,0,2,1,-1,1,3,0,-1]
TextureCoordinate332 = x3d.TextureCoordinate(DEF="Left_pupil-TEXCOORD_JinBlink")
TextureCoordinate332.point = [(0.3496, 0.8297),(0.3746, 0.8042),(0.3491, 0.8029),(0.3744, 0.8314),(0.328, 0.824),(0.3871, 0.8321),(0.3258, 0.833),(0.3487, 0.8409),(0.385, 0.8438),(0.3777, 0.7936),(0.3889, 0.8064),(0.3322, 0.8026),(0.3442, 0.7934)]

IndexedFaceSet331.texCoord = TextureCoordinate332
Coordinate333 = x3d.Coordinate(USE="Left_pupil_COORD_JinBlink")

IndexedFaceSet331.coord = Coordinate333

Shape329.geometry = IndexedFaceSet331

Transform328.children.append(Shape329)

HAnimSegment323.children.append(Transform328)

HAnimJoint93.children.append(HAnimSegment323)
HAnimSegment334 = x3d.HAnimSegment(DEF="hanim_Left_temple")
HAnimSegment334.name = "left_temple"
HAnimDisplacer335 = x3d.HAnimDisplacer(DEF="Left_temple_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer335.name = "left_temple_morphinterpolator"
HAnimDisplacer335.coordIndex = [1,8]
HAnimDisplacer335.displacements = [(0, -0.0942, 0),(0, -0.0941, 0)]

HAnimSegment334.displacers.append(HAnimDisplacer335)
HAnimDisplacer336 = x3d.HAnimDisplacer(DEF="Left_temple_MorphInterpolator_JinSquint")
HAnimDisplacer336.name = "left_temple_morphinterpolator"
HAnimDisplacer336.coordIndex = [8,11]
HAnimDisplacer336.displacements = [(0, -0.4529, 0),(0, -0.077, 0)]

HAnimSegment334.displacers.append(HAnimDisplacer336)
Coordinate337 = x3d.Coordinate(DEF="Left_temple_COORD_JinBlink")
Coordinate337.point = [(-0.312, -0.6258, 2.224),(-1.079, 0.3506, 4.121),(0.5824, 2.214, 1.716),(0.9631, 2.994, -0.8569),(0.5756, 3.023, -4.121),(0.3971, -0.687, 1.044),(1.042, -0.4888, -3.649),(1.005, -0.6065, -1.903),(-1.243, -0.6321, 3.914),(1.028, -2.588, -2.479),(1.243, -2.002, -3.446),(-0.8897, -3.023, 2.376),(0.2546, -2.916, 0.5272)]

HAnimSegment334.coord = Coordinate337
Transform338 = x3d.Transform(DEF="Left_temple_JinBlink")
Transform338.translation = [10.95,20.56,6.406]
Shape339 = x3d.Shape()
Appearance340 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape339.appearance = Appearance340
IndexedFaceSet341 = x3d.IndexedFaceSet(DEF="Left_temple-FACES_JinBlink")
IndexedFaceSet341.solid = False
IndexedFaceSet341.creaseAngle = 3.14159
IndexedFaceSet341.texCoordIndex = [0,4,5,-1,5,6,0,-1,1,13,15,-1,15,7,1,-1,1,3,2,-1,2,10,1,-1,3,1,7,-1,8,9,4,-1,4,0,8,-1,4,11,12,-1,12,5,4,-1,14,11,4,-1,4,9,14,-1]
IndexedFaceSet341.coordIndex = [9,7,5,-1,5,12,9,-1,0,11,12,-1,12,5,0,-1,0,2,1,-1,1,8,0,-1,2,0,5,-1,10,6,7,-1,7,9,10,-1,7,3,2,-1,2,5,7,-1,4,3,7,-1,7,6,4,-1]
TextureCoordinate342 = x3d.TextureCoordinate(DEF="Left_temple-TEXCOORD_JinBlink")
TextureCoordinate342.point = [(0.44, 0.6625),(0.4455, 0.863),(0.4299, 0.8825),(0.4655, 0.9081),(0.4428, 0.6714),(0.4573, 0.671),(0.4547, 0.661),(0.462, 0.8557),(0.4352, 0.6651),(0.4342, 0.6719),(0.4266, 0.8643),(0.4479, 0.6875),(0.4606, 0.684),(0.4335, 0.819),(0.4319, 0.6876),(0.4572, 0.8171)]

IndexedFaceSet341.texCoord = TextureCoordinate342
Coordinate343 = x3d.Coordinate(USE="Left_temple_COORD_JinBlink")

IndexedFaceSet341.coord = Coordinate343

Shape339.geometry = IndexedFaceSet341

Transform338.children.append(Shape339)

HAnimSegment334.children.append(Transform338)

HAnimJoint93.children.append(HAnimSegment334)
HAnimSegment344 = x3d.HAnimSegment(DEF="hanim_Left_upper_cutaneous_lip")
HAnimSegment344.name = "left_upper_cutaneous_lip"
HAnimDisplacer345 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer345.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer345.coordIndex = [0,1,3]
HAnimDisplacer345.displacements = [(0, 0.8385, 0),(0, 0.5164, 0),(0, 0.4847, 0)]

HAnimSegment344.displacers.append(HAnimDisplacer345)
HAnimDisplacer346 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer346.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer346.coordIndex = [1,3]
HAnimDisplacer346.displacements = [(0, 0.0967, 0),(0, 0.1405, 0)]

HAnimSegment344.displacers.append(HAnimDisplacer346)
HAnimDisplacer347 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer347.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer347.coordIndex = [1,3]
HAnimDisplacer347.displacements = [(0, -0.0689, 0.0447),(0, -0.0689, 0.0448)]

HAnimSegment344.displacers.append(HAnimDisplacer347)
HAnimDisplacer348 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer348.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer348.coordIndex = [1,3]
HAnimDisplacer348.displacements = [(0, -0.0221, 0.1251),(0, -0.022, 0.1251)]

HAnimSegment344.displacers.append(HAnimDisplacer348)
HAnimDisplacer349 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer349.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer349.coordIndex = [1,3]
HAnimDisplacer349.displacements = [(-0.1339, 0.1022, 0.5512),(-0.0736, 0.1634, 0.5282)]

HAnimSegment344.displacers.append(HAnimDisplacer349)
HAnimDisplacer350 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer350.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer350.coordIndex = [1,3]
HAnimDisplacer350.displacements = [(-0.1441, 0, 0.5662),(-0.0977, 0, 0.5662)]

HAnimSegment344.displacers.append(HAnimDisplacer350)
HAnimDisplacer351 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer351.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer351.coordIndex = [1,3]
HAnimDisplacer351.displacements = [(0, -0.5205, -0.6547),(0, -0.5208, -0.6547)]

HAnimSegment344.displacers.append(HAnimDisplacer351)
HAnimDisplacer352 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer352.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer352.coordIndex = [1,3]
HAnimDisplacer352.displacements = [(-0.0754, -0.0332, 0.2613),(-0.0415, -0.0383, 0.241)]

HAnimSegment344.displacers.append(HAnimDisplacer352)
HAnimDisplacer353 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer353.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer353.coordIndex = [1,3]
HAnimDisplacer353.displacements = [(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment344.displacers.append(HAnimDisplacer353)
HAnimDisplacer354 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer354.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer354.coordIndex = [0]
HAnimDisplacer354.displacements = [(0, 0.3765, 0)]

HAnimSegment344.displacers.append(HAnimDisplacer354)
HAnimDisplacer355 = x3d.HAnimDisplacer(DEF="Left_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer355.name = "left_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer355.coordIndex = [0,1,3]
HAnimDisplacer355.displacements = [(0, 0.5015, 0),(0, 0.5016, 0),(0, 0.5016, 0)]

HAnimSegment344.displacers.append(HAnimDisplacer355)
Coordinate356 = x3d.Coordinate(DEF="Left_upper_cutaneous_lip_COORD_JinBlink")
Coordinate356.point = [(0.398, 0.8515, -0.5307),(0.2676, -0.8515, -0.06256),(-0.398, 0.08738, 0.5307),(-0.1985, -0.7812, 0.2164)]

HAnimSegment344.coord = Coordinate356
Transform357 = x3d.Transform(DEF="Left_upper_cutaneous_lip_JinBlink")
Transform357.translation = [0.7684,10.16,14.63]
Shape358 = x3d.Shape()
Appearance359 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape358.appearance = Appearance359
IndexedFaceSet360 = x3d.IndexedFaceSet(DEF="Left_upper_cutaneous_lip-FACES_JinBlink")
IndexedFaceSet360.solid = False
IndexedFaceSet360.creaseAngle = 3.14159
IndexedFaceSet360.texCoordIndex = [2,3,1,-1,1,0,2,-1]
IndexedFaceSet360.coordIndex = [2,3,1,-1,1,0,2,-1]
TextureCoordinate361 = x3d.TextureCoordinate(DEF="Left_upper_cutaneous_lip-TEXCOORD_JinBlink")
TextureCoordinate361.point = [(0.2661, 0.696),(0.2636, 0.664),(0.2511, 0.6816),(0.2548, 0.6653)]

IndexedFaceSet360.texCoord = TextureCoordinate361
Coordinate362 = x3d.Coordinate(USE="Left_upper_cutaneous_lip_COORD_JinBlink")

IndexedFaceSet360.coord = Coordinate362

Shape358.geometry = IndexedFaceSet360

Transform357.children.append(Shape358)

HAnimSegment344.children.append(Transform357)

HAnimJoint93.children.append(HAnimSegment344)
HAnimSegment363 = x3d.HAnimSegment(DEF="hanim_Left_upper_eyelid")
HAnimSegment363.name = "left_upper_eyelid"
HAnimDisplacer364 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinBlink")
HAnimDisplacer364.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer364.coordIndex = [1,3,4]
HAnimDisplacer364.displacements = [(0.2496, -2.0425, -0.987),(1.6453, -2.567, -1.8279),(0.478, -2.36, -1.1421)]

HAnimSegment363.displacers.append(HAnimDisplacer364)
HAnimDisplacer365 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer365.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer365.coordIndex = [0,1,2,3,6,10]
HAnimDisplacer365.displacements = [(-0.331, -0.4142, 0),(0, -0.0785, 0),(-0.5075, -0.4988, 0),(0, -0.0785, 0),(0, -0.094, 0),(0, -0.094, 0)]

HAnimSegment363.displacers.append(HAnimDisplacer365)
HAnimDisplacer366 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer366.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer366.coordIndex = [14]
HAnimDisplacer366.displacements = [(0, 0.067, -0.082)]

HAnimSegment363.displacers.append(HAnimDisplacer366)
HAnimDisplacer367 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinEyesClosed")
HAnimDisplacer367.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer367.coordIndex = [1,3,4]
HAnimDisplacer367.displacements = [(0.2496, -2.0425, -0.987),(1.6453, -2.567, -1.8279),(0.478, -2.36, -1.1421)]

HAnimSegment363.displacers.append(HAnimDisplacer367)
HAnimDisplacer368 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer368.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer368.coordIndex = [0,2,6]
HAnimDisplacer368.displacements = [(0, 0.3655, 0),(0, 0.365, 0),(0, 0.094, 0)]

HAnimSegment363.displacers.append(HAnimDisplacer368)
HAnimDisplacer369 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinJawDrop")
HAnimDisplacer369.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer369.coordIndex = [14]
HAnimDisplacer369.displacements = [(0, -0.316, 0)]

HAnimSegment363.displacers.append(HAnimDisplacer369)
HAnimDisplacer370 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinLidDroop")
HAnimDisplacer370.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer370.coordIndex = [1,3,4,5]
HAnimDisplacer370.displacements = [(0, -0.7517, 0),(0, -1.0484, 0),(0, -1.0134, 0),(0, -0.3486, 0)]

HAnimSegment363.displacers.append(HAnimDisplacer370)
HAnimDisplacer371 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinLidTightener")
HAnimDisplacer371.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer371.coordIndex = [1,3,4]
HAnimDisplacer371.displacements = [(0, -0.354, 0),(0, -0.354, 0),(0, -0.354, 0)]

HAnimSegment363.displacers.append(HAnimDisplacer371)
HAnimDisplacer372 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer372.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer372.coordIndex = [14]
HAnimDisplacer372.displacements = [(0, -0.535, 0.842)]

HAnimSegment363.displacers.append(HAnimDisplacer372)
HAnimDisplacer373 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinSlit")
HAnimDisplacer373.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer373.coordIndex = [1,3,4]
HAnimDisplacer373.displacements = [(0, -1.0868, 0),(0, -1.4762, 0),(0, -1.3055, 0)]

HAnimSegment363.displacers.append(HAnimDisplacer373)
HAnimDisplacer374 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinSquint")
HAnimDisplacer374.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer374.coordIndex = [1,3,4,5,6,10,12]
HAnimDisplacer374.displacements = [(0, -0.5962, 0),(0, -0.7726, -0.115),(0, -0.7324, 0),(0, -0.0775, 0),(0, -0.463, 0),(0, -0.464, 0),(0, -0.0776, 0)]

HAnimSegment363.displacers.append(HAnimDisplacer374)
HAnimDisplacer375 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer375.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer375.coordIndex = [1,2,3,4,13]
HAnimDisplacer375.displacements = [(0, 0.4975, 0),(0, 0.497, 0),(0, 0.498, 0),(0, 0.498, 0),(0, 0.4975, 0)]

HAnimSegment363.displacers.append(HAnimDisplacer375)
HAnimDisplacer376 = x3d.HAnimDisplacer(DEF="Left_upper_eyelid_MorphInterpolator_JinWink")
HAnimDisplacer376.name = "left_upper_eyelid_morphinterpolator"
HAnimDisplacer376.coordIndex = [1,3,4,5]
HAnimDisplacer376.displacements = [(0, -1.2176, -0.113),(0, -1.6397, -0.189),(0, -1.4464, -0.1133),(0, 0, 0.033)]

HAnimSegment363.displacers.append(HAnimDisplacer376)
Coordinate377 = x3d.Coordinate(DEF="Left_upper_eyelid_COORD_JinBlink")
Coordinate377.point = [(-3.944, 0.2777, 3.581),(-0.9888, 0.3455, 1.465),(-0.4509, 1.393, 2.381),(-0.005327, 0.806, 1.231),(1.84, 0.849, -0.08585),(3.829, -0.08937, -2.326),(2.527, 1.923, -0.05675),(-4.303, -0.6947, 2.247),(5.103, 1.975, -3.581),(-5.103, -0.5987, 2.53),(4.172, 1.969, -1.891),(-4.353, -1.523, 2.057),(4.525, -0.4223, -3.429),(-2.594, -0.8999, 1.643),(-3.366, -1.975, 1.583)]

HAnimSegment363.coord = Coordinate377
Transform378 = x3d.Transform(DEF="Left_upper_eyelid_JinBlink")
Transform378.translation = [5.53,17.96,12.21]
Shape379 = x3d.Shape()
Appearance380 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape379.appearance = Appearance380
IndexedFaceSet381 = x3d.IndexedFaceSet(DEF="Left_upper_eyelid-FACES_JinBlink")
IndexedFaceSet381.solid = False
IndexedFaceSet381.creaseAngle = 3.14159
IndexedFaceSet381.texCoordIndex = [2,1,0,-1,4,1,5,-1,5,3,4,-1,5,1,2,-1,2,0,6,-1,6,0,9,-1,11,13,8,-1,8,15,11,-1,3,8,13,-1,13,4,3,-1,0,12,9,-1,10,12,14,-1,7,10,14,-1,14,16,7,-1]
IndexedFaceSet381.coordIndex = [1,2,0,-1,6,2,3,-1,3,4,6,-1,3,2,1,-1,1,0,13,-1,13,0,7,-1,8,10,5,-1,5,12,8,-1,4,5,10,-1,10,6,4,-1,0,9,7,-1,7,9,11,-1,13,7,11,-1,11,14,13,-1]
TextureCoordinate382 = x3d.TextureCoordinate(DEF="Left_upper_eyelid-TEXCOORD_JinBlink")
TextureCoordinate382.point = [(0.274, 0.8322),(0.3402, 0.8534),(0.3285, 0.8323),(0.3831, 0.8437),(0.3979, 0.8641),(0.3487, 0.8409),(0.2983, 0.8142),(0.2981, 0.8094),(0.4198, 0.8261),(0.2678, 0.8154),(0.2677, 0.8134),(0.4455, 0.863),(0.2534, 0.8152),(0.4266, 0.8643),(0.2671, 0.7978),(0.4335, 0.819),(0.2845, 0.7889)]

IndexedFaceSet381.texCoord = TextureCoordinate382
Coordinate383 = x3d.Coordinate(USE="Left_upper_eyelid_COORD_JinBlink")

IndexedFaceSet381.coord = Coordinate383

Shape379.geometry = IndexedFaceSet381

Transform378.children.append(Shape379)

HAnimSegment363.children.append(Transform378)

HAnimJoint93.children.append(HAnimSegment363)
HAnimSegment384 = x3d.HAnimSegment(DEF="hanim_Left_upper_vermillion_lip")
HAnimSegment384.name = "left_upper_vermillion_lip"
HAnimDisplacer385 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer385.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer385.coordIndex = [0,1,2,3]
HAnimDisplacer385.displacements = [(0.629, 1.3225, 0.107),(0, 0.5164, 0),(0, 0.4847, 0),(0, 0.4847, 0)]

HAnimSegment384.displacers.append(HAnimDisplacer385)
HAnimDisplacer386 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer386.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer386.coordIndex = [0,1,2,3]
HAnimDisplacer386.displacements = [(0, -0.1372, 0),(0, 0.0967, 0),(0, 0.1405, 0),(0, 0.187, 0)]

HAnimSegment384.displacers.append(HAnimDisplacer386)
HAnimDisplacer387 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer387.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer387.coordIndex = [0,1,2,3]
HAnimDisplacer387.displacements = [(0.378, 0.3959, 0.153),(0, -0.0689, 0.0447),(0, -0.0688, 0.045),(0, -0.0435, 0.4553)]

HAnimSegment384.displacers.append(HAnimDisplacer387)
HAnimDisplacer388 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer388.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer388.coordIndex = [0,1,2,3]
HAnimDisplacer388.displacements = [(0.21, -0.7019, 0.078),(0, -0.0221, 0.125),(0, -0.022, 0.125),(0, 0.0541, 0.5975)]

HAnimSegment384.displacers.append(HAnimDisplacer388)
HAnimDisplacer389 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer389.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer389.coordIndex = [3]
HAnimDisplacer389.displacements = [(1.176, 0.13, -0.375)]

HAnimSegment384.displacers.append(HAnimDisplacer389)
HAnimDisplacer390 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer390.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer390.coordIndex = [0,1,2,3]
HAnimDisplacer390.displacements = [(-0.8355, 0, 1.0637),(-0.134, 0.1022, 0.551),(-0.074, 0.1634, 0.528),(0, 0.1236, 0.8775)]

HAnimSegment384.displacers.append(HAnimDisplacer390)
HAnimDisplacer391 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer391.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer391.coordIndex = [0,1,2,3]
HAnimDisplacer391.displacements = [(-0.9348, 0, 0.5167),(-0.1441, 0, 0.566),(-0.098, 0, 0.566),(-0.041, 0, 0.366)]

HAnimSegment384.displacers.append(HAnimDisplacer391)
HAnimDisplacer392 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipStretcher")
HAnimDisplacer392.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer392.coordIndex = [0]
HAnimDisplacer392.displacements = [(0.898, 0.0091, 0.026)]

HAnimSegment384.displacers.append(HAnimDisplacer392)
HAnimDisplacer393 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer393.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer393.coordIndex = [0,1,2,3]
HAnimDisplacer393.displacements = [(0.125, 0, 0),(0, -0.5204, -0.6548),(0, -0.5204, -0.6547),(0, -0.135, -0.2471)]

HAnimSegment384.displacers.append(HAnimDisplacer393)
HAnimDisplacer394 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer394.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer394.coordIndex = [0,1,2,3]
HAnimDisplacer394.displacements = [(-0.5211, 0.1704, 1.038),(-0.0755, -0.0332, 0.261),(-0.042, -0.0383, 0.241),(-0.042, -0.0353, 0.6945)]

HAnimSegment384.displacers.append(HAnimDisplacer394)
HAnimDisplacer395 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer395.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer395.coordIndex = [0,1,2,3]
HAnimDisplacer395.displacements = [(0, -0.7359, 0),(0, 0.2684, 0),(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment384.displacers.append(HAnimDisplacer395)
HAnimDisplacer396 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer396.name = "left_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer396.coordIndex = [1,2,3]
HAnimDisplacer396.displacements = [(0, 0.5016, 0),(0, 0.5017, 0),(0, 0.5017, 0)]

HAnimSegment384.displacers.append(HAnimDisplacer396)
Coordinate397 = x3d.Coordinate(DEF="Left_upper_vermillion_lip_COORD_JinBlink")
Coordinate397.point = [(1.218, -0.3781, -1.204),(-0.7521, 0.3078, 0.925),(-1.218, 0.3781, 1.204),(-1.218, -0.1506, 0.4455)]

HAnimSegment384.coord = Coordinate397
Transform398 = x3d.Transform(DEF="Left_upper_vermillion_lip_JinBlink")
Transform398.translation = [1.788,9.002,13.64]
Shape399 = x3d.Shape()
Appearance400 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape399.appearance = Appearance400
IndexedFaceSet401 = x3d.IndexedFaceSet(DEF="Left_upper_vermillion_lip-FACES_JinBlink")
IndexedFaceSet401.solid = False
IndexedFaceSet401.creaseAngle = 3.14159
IndexedFaceSet401.texCoordIndex = [0,1,3,-1,1,2,3,-1]
IndexedFaceSet401.coordIndex = [0,1,3,-1,1,2,3,-1]
TextureCoordinate402 = x3d.TextureCoordinate(DEF="Left_upper_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate402.point = [(0.3007, 0.651),(0.2636, 0.664),(0.2548, 0.6653),(0.2548, 0.6553)]

IndexedFaceSet401.texCoord = TextureCoordinate402
Coordinate403 = x3d.Coordinate(USE="Left_upper_vermillion_lip_COORD_JinBlink")

IndexedFaceSet401.coord = Coordinate403

Shape399.geometry = IndexedFaceSet401

Transform398.children.append(Shape399)

HAnimSegment384.children.append(Transform398)

HAnimJoint93.children.append(HAnimSegment384)
HAnimSegment404 = x3d.HAnimSegment(DEF="hanim_Left_upper_vermillion_lip001")
HAnimSegment404.name = "left_upper_vermillion_lip001"
HAnimDisplacer405 = x3d.HAnimDisplacer(DEF="Left_upper_vermillion_lip001_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer405.name = "left_upper_vermillion_lip001_morphinterpolator"
HAnimDisplacer405.coordIndex = [3]
HAnimDisplacer405.displacements = [(-1.176, 0.13, -0.375)]

HAnimSegment404.displacers.append(HAnimDisplacer405)

HAnimJoint93.children.append(HAnimSegment404)
HAnimSegment406 = x3d.HAnimSegment(DEF="hanim_Mid_forehead")
HAnimSegment406.name = "mid_forehead"
Coordinate407 = x3d.Coordinate(DEF="Mid_forehead_COORD_JinBlink")
Coordinate407.point = [(0, 5.541, 2.824),(1.396, -3.453, 6.748),(2.374, 5.108, 2.647),(2.504, 6.733, -0.9399),(2.504, 6.89, -7.142),(1.966, 1.836, 5.915),(1.516, -7.326, 6.506),(0, -3.452, 7.111),(0, -7.396, 7.142),(-1.516, -7.326, 6.506),(-1.396, -3.453, 6.748),(-2.374, 5.108, 2.647),(-2.504, 6.733, -0.9399),(0, 7.175, -0.7764),(-2.504, 6.89, -7.142),(0, 7.396, -7.142),(0, 1.906, 6.344),(-1.966, 1.836, 5.915)]

HAnimSegment406.coord = Coordinate407
Transform408 = x3d.Transform(DEF="Mid_forehead_JinBlink")
Transform408.translation = [0,27.83,9.426]
Shape409 = x3d.Shape()
Appearance410 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape409.appearance = Appearance410
IndexedFaceSet411 = x3d.IndexedFaceSet(DEF="Mid_forehead-FACES_JinBlink")
IndexedFaceSet411.solid = False
IndexedFaceSet411.creaseAngle = 3.14159
IndexedFaceSet411.texCoordIndex = [10,11,5,-1,5,0,10,-1,6,7,2,-1,2,1,6,-1,7,8,3,-1,3,2,7,-1,1,4,9,-1,9,6,1,-1,4,0,5,-1,5,9,4,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,18,19,21,-1,21,20,18,-1,16,17,23,-1,23,22,16,-1,22,23,15,-1,15,12,22,-1]
IndexedFaceSet411.coordIndex = [8,6,1,-1,1,7,8,-1,2,3,13,-1,13,0,2,-1,3,4,15,-1,15,13,3,-1,0,16,5,-1,5,2,0,-1,16,7,1,-1,1,5,16,-1,8,7,10,-1,10,9,8,-1,11,0,13,-1,13,12,11,-1,12,13,15,-1,15,14,12,-1,0,11,17,-1,17,16,0,-1,16,17,10,-1,10,7,16,-1]
TextureCoordinate412 = x3d.TextureCoordinate(DEF="Mid_forehead-TEXCOORD_JinBlink")
TextureCoordinate412.point = [(0.2445, 0.9452),(0.257, 0.9724),(0.2533, 0.9737),(0.2542, 0.9749),(0.2428, 0.959),(0.2706, 0.9459),(0.3002, 0.9788),(0.3015, 0.9807),(0.3016, 0.9833),(0.2804, 0.9652),(0.2442, 0.8727),(0.2728, 0.8741),(0.2445, 0.9452),(0.2442, 0.8727),(0.2728, 0.8741),(0.2706, 0.9459),(0.257, 0.9724),(0.3002, 0.9788),(0.3015, 0.9807),(0.2533, 0.9737),(0.3016, 0.9833),(0.2542, 0.9749),(0.2428, 0.959),(0.2804, 0.9652)]

IndexedFaceSet411.texCoord = TextureCoordinate412
Coordinate413 = x3d.Coordinate(USE="Mid_forehead_COORD_JinBlink")

IndexedFaceSet411.coord = Coordinate413

Shape409.geometry = IndexedFaceSet411

Transform408.children.append(Shape409)

HAnimSegment406.children.append(Transform408)

HAnimJoint93.children.append(HAnimSegment406)
HAnimSegment414 = x3d.HAnimSegment(DEF="hanim_Mid_nasal_dorsum")
HAnimSegment414.name = "mid_nasal_dorsum"
Coordinate415 = x3d.Coordinate(DEF="Mid_nasal_dorsum_COORD_JinBlink")
Coordinate415.point = [(0.4273, 2.576, -1.018),(0, -2.334, 1.018),(0.2355, 0.01204, -0.9689),(0.4565, -2.593, -0.276),(-0.4273, 2.576, -1.018),(0, 2.593, -0.9668),(0, 0.1768, -0.8433),(-0.2355, 0.01204, -0.9689),(-0.4565, -2.593, -0.276)]

HAnimSegment414.coord = Coordinate415
Transform416 = x3d.Transform(DEF="Mid_nasal_dorsum_JinBlink")
Transform416.translation = [0,14.79,15.76]
Shape417 = x3d.Shape()
Appearance418 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape417.appearance = Appearance418
IndexedFaceSet419 = x3d.IndexedFaceSet(DEF="Mid_nasal_dorsum-FACES_JinBlink")
IndexedFaceSet419.solid = False
IndexedFaceSet419.creaseAngle = 3.14159
IndexedFaceSet419.texCoordIndex = [3,2,1,-1,3,0,5,-1,5,0,4,-1,4,6,5,-1,7,9,8,-1,7,11,10,-1,11,13,12,-1,12,10,11,-1]
IndexedFaceSet419.coordIndex = [0,5,6,-1,0,6,2,-1,2,6,1,-1,1,3,2,-1,4,6,5,-1,4,7,6,-1,7,8,1,-1,1,6,7,-1]
TextureCoordinate420 = x3d.TextureCoordinate(DEF="Mid_nasal_dorsum-TEXCOORD_JinBlink")
TextureCoordinate420.point = [(0.2496, 0.7705),(0.2441, 0.7705),(0.2441, 0.816),(0.2534, 0.8152),(0.2415, 0.7261),(0.2534, 0.767),(0.2528, 0.7186),(0.2534, 0.8152),(0.2441, 0.816),(0.2441, 0.7705),(0.2496, 0.7705),(0.2534, 0.767),(0.2415, 0.7261),(0.2528, 0.7186)]

IndexedFaceSet419.texCoord = TextureCoordinate420
Coordinate421 = x3d.Coordinate(USE="Mid_nasal_dorsum_COORD_JinBlink")

IndexedFaceSet419.coord = Coordinate421

Shape417.geometry = IndexedFaceSet419

Transform416.children.append(Shape417)

HAnimSegment414.children.append(Transform416)

HAnimJoint93.children.append(HAnimSegment414)
HAnimSegment422 = x3d.HAnimSegment(DEF="hanim_Mid_upper_vermillion_lip")
HAnimSegment422.name = "mid_upper_vermillion_lip"
HAnimDisplacer423 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer423.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer423.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer423.displacements = [(0, 0.4846, 0),(0, 0.4847, 0),(0, 0.4847, 0),(0, 0.4846, 0),(0, 0.4846, 0),(0, 0.4847, 0)]

HAnimSegment422.displacers.append(HAnimDisplacer423)
HAnimDisplacer424 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer424.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer424.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer424.displacements = [(0, 0.1404, 0),(0, 0.187, 0),(0, 0.187, 0),(0, 0.1404, 0),(0, 0.2285, 0),(0, 0.2207, 0)]

HAnimSegment422.displacers.append(HAnimDisplacer424)
HAnimDisplacer425 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer425.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer425.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer425.displacements = [(0, -0.0689, 0.0448),(0, -0.0435, 0.4552),(0, -0.0435, 0.4552),(0, -0.0689, 0.0448),(0, -0.0689, 0.0448),(0, -0.0435, 0.4552)]

HAnimSegment422.displacers.append(HAnimDisplacer425)
HAnimDisplacer426 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer426.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer426.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer426.displacements = [(0, -0.0221, 0.1251),(0, 0.0541, 0.5977),(0, 0.0541, 0.5977),(0, -0.0514, -0.0369),(0, -0.0514, -0.0369),(0, 0.0541, 0.5977)]

HAnimSegment422.displacers.append(HAnimDisplacer426)
HAnimDisplacer427 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer427.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer427.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer427.displacements = [(-0.0737, 0.1633, 0.5282),(0, 0.1237, 0.8777),(0, 0.1237, 0.8777),(0.0737, 0.1633, 0.5282),(0, 0.107, 0.5282),(0, 0.1237, 0.8777)]

HAnimSegment422.displacers.append(HAnimDisplacer427)
HAnimDisplacer428 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer428.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer428.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer428.displacements = [(-0.0978, 0, 0.5662),(-0.0413, 0, 0.3659),(-0.0413, 0, 0.3659),(0.0156, 0, 0.5662),(-0.0411, 0, 0.5662),(-0.0413, 0, 0.3659)]

HAnimSegment422.displacers.append(HAnimDisplacer428)
HAnimDisplacer429 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer429.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer429.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer429.displacements = [(0, -0.5204, -0.6547),(0, -0.135, -0.2472),(0, -0.135, -0.2472),(0, -0.5204, -0.6547),(0, -0.5204, -0.6547),(0, -0.135, -0.2472)]

HAnimSegment422.displacers.append(HAnimDisplacer429)
HAnimDisplacer430 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer430.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer430.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer430.displacements = [(-0.0415, -0.0383, 0.241),(-0.0415, -0.0352, 0.6946),(0.0415, -0.0352, 0.6946),(0.0415, -0.0383, 0.241),(0, -0.0383, 0.241),(0, -0.0352, 0.6946)]

HAnimSegment422.displacers.append(HAnimDisplacer430)
HAnimDisplacer431 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer431.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer431.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer431.displacements = [(0, 0.2683, 0),(0, 0.2684, 0),(0, 0.2684, 0),(0, 0.2683, 0),(0, 0.2683, 0),(0, 0.2684, 0)]

HAnimSegment422.displacers.append(HAnimDisplacer431)
HAnimDisplacer432 = x3d.HAnimDisplacer(DEF="Mid_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer432.name = "mid_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer432.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer432.displacements = [(0, 0.5016, 0),(0, 0.5017, 0),(0, 0.5017, 0),(0, 0.5016, 0),(0, 0.5016, 0),(0, 0.5017, 0)]

HAnimSegment422.displacers.append(HAnimDisplacer432)
Coordinate433 = x3d.Coordinate(DEF="Mid_upper_vermillion_lip_COORD_JinBlink")
Coordinate433.point = [(0.5699, 0.2644, 0.3792),(0.5699, -0.2644, -0.3792),(-0.5699, -0.2644, -0.3792),(-0.5699, 0.2644, 0.3792),(0, 0.2644, 0.3792),(0, -0.2644, -0.3792)]

HAnimSegment422.coord = Coordinate433
Transform434 = x3d.Transform(DEF="Mid_upper_vermillion_lip_JinBlink")
Transform434.translation = [0,9.116,14.46]
Shape435 = x3d.Shape()
Appearance436 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape435.appearance = Appearance436
IndexedFaceSet437 = x3d.IndexedFaceSet(DEF="Mid_upper_vermillion_lip-FACES_JinBlink")
IndexedFaceSet437.solid = False
IndexedFaceSet437.creaseAngle = 3.14159
IndexedFaceSet437.texCoordIndex = [1,3,2,-1,2,0,1,-1,6,5,4,-1,4,7,6,-1]
IndexedFaceSet437.coordIndex = [4,5,1,-1,1,0,4,-1,4,3,2,-1,2,5,4,-1]
TextureCoordinate438 = x3d.TextureCoordinate(DEF="Mid_upper_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate438.point = [(0.2548, 0.6653),(0.2441, 0.6653),(0.2548, 0.6553),(0.2441, 0.6553),(0.2548, 0.6553),(0.2548, 0.6653),(0.2441, 0.6653),(0.2441, 0.6553)]

IndexedFaceSet437.texCoord = TextureCoordinate438
Coordinate439 = x3d.Coordinate(USE="Mid_upper_vermillion_lip_COORD_JinBlink")

IndexedFaceSet437.coord = Coordinate439

Shape435.geometry = IndexedFaceSet437

Transform434.children.append(Shape435)

HAnimSegment422.children.append(Transform434)

HAnimJoint93.children.append(HAnimSegment422)
HAnimSegment440 = x3d.HAnimSegment(DEF="hanim_Nasal_tip")
HAnimSegment440.name = "nasal_tip"
HAnimDisplacer441 = x3d.HAnimDisplacer(DEF="Nasal_tip_MorphInterpolator_JinNasolabialDeepener")
HAnimDisplacer441.name = "nasal_tip_morphinterpolator"
HAnimDisplacer441.coordIndex = [3,8]
HAnimDisplacer441.displacements = [(0.3849, 0, 0),(-0.3849, 0, 0)]

HAnimSegment440.displacers.append(HAnimDisplacer441)
Coordinate442 = x3d.Coordinate(DEF="Nasal_tip_COORD_JinBlink")
Coordinate442.point = [(0, -1.103, -1.068),(0.3704, -1.103, -1.072),(0.4565, 0.8434, -0.7458),(0.4761, 0.1288, -0.2364),(0, 0.4512, 1.072),(-0.3704, -1.103, -1.072),(-0.4565, 0.8434, -0.7458),(0, 1.103, 0.5484),(-0.4761, 0.1288, -0.2364)]

HAnimSegment440.coord = Coordinate442
Transform443 = x3d.Transform(DEF="Nasal_tip_JinBlink")
Transform443.translation = [0,11.35,16.23]
Shape444 = x3d.Shape()
Appearance445 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape444.appearance = Appearance445
IndexedFaceSet446 = x3d.IndexedFaceSet(DEF="Nasal_tip-FACES_JinBlink")
IndexedFaceSet446.solid = False
IndexedFaceSet446.creaseAngle = 3.14159
IndexedFaceSet446.texCoordIndex = [1,2,3,-1,1,5,4,-1,4,0,1,-1,5,1,3,-1,6,8,7,-1,6,10,9,-1,9,11,6,-1,11,8,6,-1]
IndexedFaceSet446.coordIndex = [4,0,1,-1,4,3,2,-1,2,7,4,-1,3,4,1,-1,4,5,0,-1,4,7,6,-1,6,8,4,-1,8,5,4,-1]
TextureCoordinate447 = x3d.TextureCoordinate(DEF="Nasal_tip-TEXCOORD_JinBlink")
TextureCoordinate447.point = [(0.2415, 0.7261),(0.2441, 0.7109),(0.2441, 0.6816),(0.2511, 0.6816),(0.2528, 0.7186),(0.2538, 0.7051),(0.2441, 0.7109),(0.2441, 0.6816),(0.2511, 0.6816),(0.2528, 0.7186),(0.2415, 0.7261),(0.2538, 0.7051)]

IndexedFaceSet446.texCoord = TextureCoordinate447
Coordinate448 = x3d.Coordinate(USE="Nasal_tip_COORD_JinBlink")

IndexedFaceSet446.coord = Coordinate448

Shape444.geometry = IndexedFaceSet446

Transform443.children.append(Shape444)

HAnimSegment440.children.append(Transform443)

HAnimJoint93.children.append(HAnimSegment440)
HAnimSegment449 = x3d.HAnimSegment(DEF="hanim_Neck")
HAnimSegment449.name = "neck"
HAnimDisplacer450 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer450.name = "neck_morphinterpolator"
HAnimDisplacer450.coordIndex = [0,1,2,6,8,10]
HAnimDisplacer450.displacements = [(0, 0.156, 0),(0, 0.373, 0),(0, 0.485, 0),(0.0193, 1.002, -0.758),(-0.261, 0.915, -1.261),(-0.281, 0.915, -0.875)]

HAnimSegment449.displacers.append(HAnimDisplacer450)
HAnimDisplacer451 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinChinRaiser")
HAnimDisplacer451.name = "neck_morphinterpolator"
HAnimDisplacer451.coordIndex = [1,4,7,8,10]
HAnimDisplacer451.displacements = [(0, 0.407, 0.199),(0, -0.009, 0),(0, 0.038, 0),(0, -0.076, 0),(0, -0.076, 0)]

HAnimSegment449.displacers.append(HAnimDisplacer451)
HAnimDisplacer452 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinDimpler")
HAnimDisplacer452.name = "neck_morphinterpolator"
HAnimDisplacer452.coordIndex = [2,4,8,10]
HAnimDisplacer452.displacements = [(0.363, 0.369, -1.625),(0.389, 0.369, -1.1236),(-0.364, -0.024, -1.625),(-0.39, -0.024, -1.1236)]

HAnimSegment449.displacers.append(HAnimDisplacer452)
HAnimDisplacer453 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer453.name = "neck_morphinterpolator"
HAnimDisplacer453.coordIndex = [4,8,10]
HAnimDisplacer453.displacements = [(0.217, -0.716, -0.609),(-0.19, -0.716, -0.879),(-0.203, -0.716, -0.609)]

HAnimSegment449.displacers.append(HAnimDisplacer453)
HAnimDisplacer454 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinLipStretcher")
HAnimDisplacer454.name = "neck_morphinterpolator"
HAnimDisplacer454.coordIndex = [2,3,4,8,9,10]
HAnimDisplacer454.displacements = [(0.863, -0.058, -4.372),(1.197, -0.058, -3.6409),(0.927, -0.058, -3.133),(-0.938, -0.058, -4.372),(-1.272, -0.058, -3.6409),(-1.002, -0.058, -3.133)]

HAnimSegment449.displacers.append(HAnimDisplacer454)
HAnimDisplacer455 = x3d.HAnimDisplacer(DEF="Neck_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer455.name = "neck_morphinterpolator"
HAnimDisplacer455.coordIndex = [6]
HAnimDisplacer455.displacements = [(0, -0.299, 0)]

HAnimSegment449.displacers.append(HAnimDisplacer455)
Coordinate456 = x3d.Coordinate(DEF="Neck_COORD_JinBlink")
Coordinate456.point = [(1.364, 4.193, -2.856),(0, 4.193, -3.036),(2.893, 4.193, -2.16),(3.969, 4.193, 0.1849),(3.097, 4.193, 1.816),(1.537, 4.525, 2.797),(0, 3.099, 3.036),(-1.364, 4.193, -2.856),(-2.893, 4.193, -2.16),(-3.969, 4.193, 0.1849),(-3.097, 4.193, 1.816),(-1.537, 4.525, 2.797),(1.378, -3.566, -2.884),(0, -3.437, -3.067),(2.923, -3.023, -2.182),(4.009, -3.081, 0.1871),(3.129, -3.839, 1.835),(0, -4.525, 3.067),(1.552, -4.502, 2.826),(-1.378, -3.566, -2.884),(-2.923, -3.023, -2.182),(-4.009, -3.081, 0.1871),(-3.129, -3.839, 1.835),(-1.552, -4.502, 2.826)]

HAnimSegment449.coord = Coordinate456
Transform457 = x3d.Transform(DEF="Neck_JinBlink")
Transform457.translation = [0,4.213,0.4657]
Shape458 = x3d.Shape()
Appearance459 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape458.appearance = Appearance459
IndexedFaceSet460 = x3d.IndexedFaceSet(DEF="Neck-FACES_JinBlink")
IndexedFaceSet460.solid = False
IndexedFaceSet460.creaseAngle = 3.14159
IndexedFaceSet460.texCoordIndex = [0,1,12,-1,12,13,0,-1,1,2,14,-1,14,12,1,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,5,6,17,-1,17,18,5,-1,4,5,18,-1,18,16,4,-1,19,7,0,-1,0,13,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,17,6,11,-1,11,23,17,-1,23,11,10,-1,10,22,23,-1]
IndexedFaceSet460.coordIndex = [1,0,12,-1,12,13,1,-1,0,2,14,-1,14,12,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,5,6,17,-1,17,18,5,-1,4,5,18,-1,18,16,4,-1,19,7,1,-1,1,13,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,17,6,11,-1,11,23,17,-1,23,11,10,-1,10,22,23,-1]
TextureCoordinate461 = x3d.TextureCoordinate(DEF="Neck-TEXCOORD_JinBlink")
TextureCoordinate461.point = [(0.04371, 0.6512),(0.05004, 0.6512),(0.05713, 0.6512),(0.06211, 0.6512),(0.05807, 0.6512),(0.05084, 0.6529),(0.04371, 0.6456),(0.03739, 0.6512),(0.0303, 0.6512),(0.02531, 0.6512),(0.02935, 0.6512),(0.03659, 0.6529),(0.0501, 0.6113),(0.04371, 0.612),(0.05726, 0.6141),(0.0623, 0.6138),(0.05822, 0.6099),(0.04371, 0.6064),(0.05091, 0.6065),(0.03733, 0.6113),(0.03016, 0.6141),(0.02513, 0.6138),(0.02921, 0.6099),(0.03652, 0.6065)]

IndexedFaceSet460.texCoord = TextureCoordinate461
Coordinate462 = x3d.Coordinate(USE="Neck_COORD_JinBlink")

IndexedFaceSet460.coord = Coordinate462

Shape458.geometry = IndexedFaceSet460

Transform457.children.append(Shape458)

HAnimSegment449.children.append(Transform457)

HAnimJoint93.children.append(HAnimSegment449)
HAnimSegment463 = x3d.HAnimSegment(DEF="hanim_Occipital_scalp")
HAnimSegment463.name = "occipital_scalp"
HAnimDisplacer464 = x3d.HAnimDisplacer(DEF="Occipital_scalp_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer464.name = "occipital_scalp_morphinterpolator"
HAnimDisplacer464.coordIndex = [3,12,64,82,88,96]
HAnimDisplacer464.displacements = [(0, 0.84, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.16, 0),(0, 0.84, 0),(0, 0.15, 0)]

HAnimSegment463.displacers.append(HAnimDisplacer464)
HAnimDisplacer465 = x3d.HAnimDisplacer(DEF="Occipital_scalp_MorphInterpolator_JinChinRaiser")
HAnimDisplacer465.name = "occipital_scalp_morphinterpolator"
HAnimDisplacer465.coordIndex = [82,96,106]
HAnimDisplacer465.displacements = [(0, 0.7, 0.36),(0, 0.75, 0.3638),(0, 0.11, 0)]

HAnimSegment463.displacers.append(HAnimDisplacer465)
HAnimDisplacer466 = x3d.HAnimDisplacer(DEF="Occipital_scalp_MorphInterpolator_JinDimpler")
HAnimDisplacer466.name = "occipital_scalp_morphinterpolator"
HAnimDisplacer466.coordIndex = [27]
HAnimDisplacer466.displacements = [(-0.001, 0.39, 0)]

HAnimSegment463.displacers.append(HAnimDisplacer466)
HAnimDisplacer467 = x3d.HAnimDisplacer(DEF="Occipital_scalp_MorphInterpolator_JinJawDrop")
HAnimDisplacer467.name = "occipital_scalp_morphinterpolator"
HAnimDisplacer467.coordIndex = [106]
HAnimDisplacer467.displacements = [(0, -0.31, 0)]

HAnimSegment463.displacers.append(HAnimDisplacer467)
Coordinate468 = x3d.Coordinate(DEF="Occipital_scalp_COORD_JinBlink")
Coordinate468.point = [(6.595, -7.151, -8.257),(9.429, -11.8, 3.993),(8.282, -11.22, -0.9892),(4.624, -11.64, -3.306),(16.07, -2.995, 5.873),(15.82, -12.8, 1.071),(12.64, -1.285, -4.598),(16.07, -3.083, 2.316),(10.71, -6.207, -3.224),(8.946, -0.132, -8.392),(8.698, -10.19, -8.675),(6.297, 5.219, -7.352),(4.896, -9.878, -12.77),(14.18, 4.623, 2.748),(14.87, 4.604, 5.309),(13.01, -7.209, -3.663),(11.99, 5.219, -3.545),(0, -0.8915, -10.42),(6.297, -0.1284, -9.196),(14.21, 4.47, 4.372),(2.98, -10.26, -5.72),(10.1, -9.009, -1.975),(7.409, -17.27, -8.757),(8.44, -9.628, -3.832),(4.999, -18.87, -2.922),(11.97, -8.702, 0.9778),(11.23, -15.65, -1.56),(3.584, -13.5, 0.961),(5.778, -12.67, 0.2527),(2.389, -13.11, -1.714),(9.699, -10.52, 1.837),(11.85, -10.17, 6.164),(6.297, 16.77, 2.005),(12.13, 8.819, -0.9951),(11.81, 12.89, 2.963),(0, 12.79, -5.593),(6.297, 11.97, -5.107),(14.78, -4.967, 4.122),(9.429, -11.8, 3.993),(14.37, -8.308, 4.774),(12.02, -9.081, 8.596),(15.26, 5.042, 8.379),(16.68, -2.579, 7.954),(13.63, -4.256, 7.877),(0, -17.31, -6.802),(14.16, -2.229, 11.05),(14.63, -3.955, 8.111),(12.19, -3.7, 12.77),(5.31, -15.15, 7.498),(12.02, -9.081, 8.596),(12.84, -3.763, 10.48),(9.046, -12.17, 7.498),(12.8, -9.61, 10.48),(5.33, -15.13, 10.8),(8.079, -13.16, 11.16),(0, -16.06, 10.76),(-8.946, -0.132, -8.392),(-6.297, 5.219, -7.352),(-11.99, 5.219, -3.545),(-12.64, -1.285, -4.598),(0, 5.219, -8.851),(-6.297, -0.1284, -9.196),(-13.01, -7.209, -3.663),(-8.698, -10.19, -8.675),(-4.896, -9.878, -12.77),(0, -5.378, -11.66),(-6.297, 11.97, -5.107),(-12.13, 8.819, -0.9951),(-14.78, -4.967, 4.122),(-16.07, -2.995, 5.873),(-10.71, -6.207, -3.224),(-15.82, -12.8, 1.071),(-16.07, -3.083, 2.316),(-6.595, -7.151, -8.257),(0, -7.956, -9.37),(-14.18, 4.623, 2.748),(-11.81, 12.89, 2.963),(-14.21, 4.47, 4.372),(-14.87, 4.604, 5.309),(-15.26, 5.042, 8.379),(-2.98, -10.26, -5.72),(0, -12.28, -5.509),(0, -14.6, -11.22),(-7.409, -17.27, -8.757),(-10.1, -9.009, -1.975),(-8.44, -9.628, -3.832),(-8.282, -11.22, -0.9892),(-5.778, -12.67, 0.2527),(-4.624, -11.64, -3.306),(-4.999, -18.87, -2.922),(-9.699, -10.52, 1.837),(-9.429, -11.8, 3.993),(-3.584, -13.5, 0.961),(-11.23, -15.65, -1.56),(-11.97, -8.702, 0.9778),(-14.37, -8.308, 4.774),(0, -14.56, 0.6872),(-2.389, -13.11, -1.714),(-12.02, -9.081, 8.596),(-11.85, -10.17, 6.164),(-6.297, 16.77, 2.005),(0, 17.52, 2.005),(-9.046, -12.17, 7.498),(-5.31, -15.15, 7.498),(-12.02, -9.081, 8.596),(-9.429, -11.8, 3.993),(0, -15.55, 7.498),(-13.63, -4.256, 7.877),(-12.8, -9.61, 10.48),(-8.079, -13.16, 11.16),(-12.84, -3.763, 10.48),(-12.19, -3.7, 12.77),(-14.16, -2.229, 11.05),(-14.63, -3.955, 8.111),(-5.33, -15.13, 10.8),(6.083, -2.338, 25.93),(11.2, 8.465, 19.14),(0, 13.66, 24.16),(5.65, 12.75, 23.28),(15.14, -3.7, 12.77),(10.26, -12.78, 18.76),(5.008, 9.476, 25.96),(6.444, 2.872, 25.97),(9.382, 1.978, 23.24),(12.3, 0.8072, 18.53),(9.871, 1.835, 22.39),(9.351, -1.718, 22.51),(9.717, -2.207, 21.66),(8.342, -8.633, 21.21),(11.54, -4.435, 18.7),(9.802, -5.103, 20.89),(11.62, -5.278, 19.98),(12.87, -11.91, 12.98),(12.35, -10.52, 15.83),(13.35, -8.064, 14.95),(14.1, -0.8582, 16.7),(13.11, -9.742, 16.72),(13.82, -5.06, 17.14),(15.52, -3.763, 10.48),(10.32, -0.006923, 20.53),(17.83, -10.69, 7.498),(13.16, 6.618, 15.16),(7.716, 12.49, 21.1),(14.39, 5.565, 12.03),(9.288, 8.426, 22.41),(0, 4.262, 28.62),(3.961, 3.545, 27.61),(7.09, -2.106, 25.09),(0, 17.84, 15.38),(6.297, 17.09, 15.38),(6.297, 18.12, 8.31),(6.297, 15.07, 19.12),(12.03, 13.36, 8.31),(11.64, 11.99, 14.62),(1.971, -2.435, 27.29),(1.137, 3.737, 28.51),(15.15, -4.372, 7.498),(-5.008, 9.476, 25.96),(-5.65, 12.75, 23.28),(0, 9.83, 27.23),(-6.297, 15.07, 19.12),(0, 16.06, 20.15),(-15.14, -3.7, 12.77),(-14.39, 5.565, 12.03),(-13.35, -8.064, 14.95),(-1.137, 3.737, 28.51),(-3.961, 3.545, 27.61),(-6.444, 2.872, 25.97),(-7.09, -2.106, 25.09),(-9.382, 1.978, 23.24),(-1.971, -2.435, 27.29),(-6.083, -2.338, 25.93),(-9.871, 1.835, 22.39),(-9.351, -1.718, 22.51),(-9.717, -2.207, 21.66),(-10.32, -0.006923, 20.53),(-12.3, 0.8072, 18.53),(-11.2, 8.465, 19.14),(-9.288, 8.426, 22.41),(-11.62, -5.278, 19.98),(-9.802, -5.103, 20.89),(-8.342, -8.633, 21.21),(-11.54, -4.435, 18.7),(-12.87, -11.91, 12.98),(-15.52, -3.763, 10.48),(-14.1, -0.8582, 16.7),(-13.82, -5.06, 17.14),(-10.26, -12.78, 18.76),(-13.11, -9.742, 16.72),(-12.35, -10.52, 15.83),(-17.83, -10.69, 7.498),(-16.68, -2.579, 7.954),(-12.03, 13.36, 8.31),(-13.16, 6.618, 15.16),(-11.64, 11.99, 14.62),(-7.716, 12.49, 21.1),(-6.297, 17.09, 15.38),(-6.297, 18.12, 8.31),(0, 18.87, 8.31),(-15.15, -4.372, 7.498)]

HAnimSegment463.coord = Coordinate468
Transform469 = x3d.Transform(DEF="Occipital_scalp_JinBlink")
Transform469.translation = [0,22.26,-9.81]
Shape470 = x3d.Shape()
Appearance471 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape470.appearance = Appearance471
IndexedFaceSet472 = x3d.IndexedFaceSet(DEF="Occipital_scalp-FACES_JinBlink")
IndexedFaceSet472.solid = False
IndexedFaceSet472.creaseAngle = 3.14159
IndexedFaceSet472.texCoordIndex = [0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,79,87,-1,79,15,80,-1,79,14,15,-1,7,17,14,-1,14,16,7,-1,18,17,7,-1,7,19,18,-1,17,18,14,-1,8,7,16,-1,16,20,8,-1,9,6,20,-1,10,9,20,-1,20,21,10,-1,0,12,22,-1,22,12,23,-1,24,22,23,-1,14,18,22,-1,22,24,14,-1,22,18,19,-1,19,0,22,-1,24,23,25,-1,23,83,78,-1,78,25,23,-1,14,24,25,-1,25,15,14,-1,25,78,80,-1,80,15,25,-1,2,6,1,-1,8,20,2,-1,20,6,2,-1,28,27,26,-1,31,30,29,-1,28,32,27,-1,28,35,34,-1,34,33,28,-1,36,33,34,-1,28,33,32,-1,36,38,37,-1,37,38,39,-1,36,40,38,-1,41,44,43,-1,43,42,41,-1,46,45,42,-1,34,35,47,-1,42,45,48,-1,40,47,49,-1,26,27,50,-1,37,33,36,-1,27,37,51,-1,54,53,52,-1,57,56,55,-1,53,37,39,-1,58,51,53,-1,51,37,53,-1,59,44,56,-1,59,43,44,-1,61,60,29,-1,61,62,60,-1,63,36,34,-1,63,34,47,-1,65,76,64,-1,47,35,66,-1,47,66,49,-1,67,64,76,-1,68,67,76,-1,41,40,69,-1,40,49,69,-1,81,83,23,-1,23,70,81,-1,70,71,82,-1,82,81,70,-1,11,70,23,-1,23,12,11,-1,13,71,70,-1,70,11,13,-1,72,73,74,-1,75,74,77,-1,72,74,84,-1,84,74,75,-1,85,86,88,-1,89,75,77,-1,85,88,90,-1,92,74,85,-1,85,91,92,-1,93,94,95,-1,93,95,96,-1,97,74,92,-1,85,93,91,-1,77,74,97,-1,85,90,93,-1,97,98,89,-1,89,77,97,-1,104,103,102,-1,102,105,104,-1,103,107,106,-1,106,108,103,-1,109,105,102,-1,102,110,109,-1,111,108,106,-1,106,112,111,-1,113,103,104,-1,104,114,113,-1,115,107,103,-1,103,113,115,-1,116,118,117,-1,117,120,119,-1,117,119,116,-1,109,121,116,-1,116,122,109,-1,124,123,109,-1,109,122,124,-1,122,116,124,-1,110,125,121,-1,121,109,110,-1,111,125,108,-1,112,126,125,-1,125,111,112,-1,104,127,114,-1,127,128,114,-1,129,128,127,-1,116,129,127,-1,127,124,116,-1,127,104,123,-1,123,124,127,-1,129,130,128,-1,128,130,131,-1,131,132,128,-1,116,119,130,-1,130,129,116,-1,130,119,120,-1,120,131,130,-1,102,103,108,-1,110,102,125,-1,125,102,108,-1,133,135,134,-1,136,138,137,-1,133,134,139,-1,133,141,140,-1,140,142,133,-1,143,140,141,-1,133,139,141,-1,143,145,144,-1,145,146,144,-1,143,144,147,-1,150,149,148,-1,148,151,150,-1,152,149,153,-1,140,154,142,-1,149,155,153,-1,147,156,154,-1,135,157,134,-1,145,143,141,-1,134,158,145,-1,159,161,160,-1,162,164,163,-1,160,146,145,-1,165,160,158,-1,158,160,145,-1,166,163,151,-1,166,151,148,-1,167,138,168,-1,167,168,169,-1,170,140,143,-1,170,154,140,-1,171,173,172,-1,154,174,142,-1,154,156,174,-1,175,172,173,-1,176,172,175,-1,150,177,147,-1,147,177,156,-1,179,178,128,-1,128,132,179,-1,178,179,180,-1,180,181,178,-1,113,114,128,-1,128,178,113,-1,115,113,178,-1,178,181,115,-1,99,100,101,-1,75,182,100,-1,99,183,100,-1,183,75,100,-1,184,185,186,-1,89,182,75,-1,184,187,185,-1,189,188,184,-1,184,100,189,-1,190,191,192,-1,190,193,191,-1,194,189,100,-1,184,188,190,-1,182,194,100,-1,184,190,187,-1,194,182,89,-1,89,98,194,-1,195,198,197,-1,197,196,195,-1,199,200,195,-1,195,196,199,-1,203,202,201,-1,204,197,198,-1,197,206,205,-1,208,207,205,-1,210,209,206,-1,197,204,206,-1,210,206,204,-1,212,198,211,-1,213,212,211,-1,208,215,214,-1,214,207,208,-1,217,216,214,-1,219,218,216,-1,207,220,197,-1,197,205,207,-1,216,222,221,-1,221,219,216,-1,223,221,222,-1,223,224,221,-1,221,224,219,-1,201,225,203,-1,225,226,203,-1,224,227,219,-1,228,230,229,-1,229,224,228,-1,201,229,230,-1,228,231,230,-1,231,201,230,-1,201,227,229,-1,229,227,224,-1,209,205,206,-1,232,233,226,-1,235,202,234,-1,218,219,236,-1,203,226,202,-1,233,234,202,-1,226,233,202,-1,202,235,237,-1,236,237,218,-1,201,202,227,-1,227,202,236,-1,227,236,219,-1,237,199,238,-1,238,199,196,-1,220,238,196,-1,196,197,220,-1,237,239,218,-1,239,237,238,-1,218,239,214,-1,214,216,218,-1,207,214,239,-1,236,202,237,-1,199,237,240,-1,241,200,199,-1,199,240,241,-1,240,237,235,-1,235,242,240,-1,240,242,243,-1,243,241,240,-1,232,226,244,-1,247,246,245,-1,245,248,247,-1,249,246,247,-1,247,250,249,-1,251,253,252,-1,254,248,245,-1,245,256,255,-1,257,256,258,-1,259,255,260,-1,245,255,254,-1,259,254,255,-1,261,262,248,-1,263,262,261,-1,257,258,264,-1,264,265,257,-1,266,264,267,-1,268,267,269,-1,258,256,245,-1,245,270,258,-1,267,268,271,-1,271,272,267,-1,273,272,271,-1,273,271,274,-1,271,268,274,-1,253,251,275,-1,275,251,276,-1,274,268,277,-1,279,274,278,-1,278,280,279,-1,253,280,278,-1,279,280,281,-1,281,280,253,-1,253,278,277,-1,278,274,277,-1,260,255,256,-1,282,276,283,-1,284,285,252,-1,269,286,268,-1,251,252,276,-1,283,252,285,-1,276,252,283,-1,252,287,284,-1,286,269,287,-1,253,277,252,-1,277,286,252,-1,277,268,286,-1,287,288,249,-1,288,246,249,-1,270,245,246,-1,246,288,270,-1,287,269,289,-1,289,288,287,-1,269,267,264,-1,264,289,269,-1,258,289,264,-1,286,287,252,-1,249,290,287,-1,291,290,249,-1,249,250,291,-1,290,292,284,-1,284,287,290,-1,290,291,293,-1,293,292,290,-1,282,294,276,-1]
IndexedFaceSet472.coordIndex = [16,6,9,-1,9,11,16,-1,11,18,17,-1,17,60,11,-1,15,10,9,-1,9,6,15,-1,12,65,17,-1,17,18,12,-1,36,33,16,-1,16,11,36,-1,35,36,11,-1,11,60,35,-1,37,140,156,-1,140,4,42,-1,140,37,4,-1,15,5,37,-1,37,8,15,-1,7,5,15,-1,15,6,7,-1,5,7,37,-1,10,15,8,-1,8,0,10,-1,12,18,0,-1,65,12,0,-1,0,74,65,-1,16,33,13,-1,13,33,34,-1,19,13,34,-1,37,7,13,-1,13,19,37,-1,13,7,6,-1,6,16,13,-1,19,34,14,-1,34,152,41,-1,41,14,34,-1,37,19,14,-1,14,4,37,-1,14,41,42,-1,42,4,14,-1,9,18,11,-1,10,0,9,-1,0,18,9,-1,0,20,74,-1,81,82,20,-1,0,22,20,-1,0,8,21,-1,21,23,0,-1,2,23,21,-1,0,23,22,-1,2,28,3,-1,3,28,24,-1,2,30,28,-1,1,27,28,-1,28,30,1,-1,2,26,30,-1,21,8,25,-1,30,26,25,-1,30,25,39,-1,74,20,82,-1,3,23,2,-1,20,3,81,-1,96,29,27,-1,44,29,96,-1,29,3,24,-1,44,81,29,-1,81,3,29,-1,24,27,29,-1,24,28,27,-1,22,3,20,-1,22,23,3,-1,26,2,21,-1,26,21,25,-1,37,40,39,-1,25,8,37,-1,25,37,39,-1,31,39,40,-1,1,31,40,-1,1,30,31,-1,30,39,31,-1,150,152,34,-1,34,32,150,-1,32,101,198,-1,198,150,32,-1,36,32,34,-1,34,33,36,-1,35,101,32,-1,32,36,35,-1,1,40,51,-1,96,51,48,-1,1,51,27,-1,27,51,96,-1,49,38,37,-1,106,96,48,-1,49,37,43,-1,54,51,49,-1,49,52,54,-1,50,47,45,-1,50,45,46,-1,53,51,54,-1,49,50,52,-1,48,51,53,-1,49,43,50,-1,53,55,106,-1,106,48,53,-1,58,57,56,-1,56,59,58,-1,57,60,17,-1,17,61,57,-1,62,59,56,-1,56,63,62,-1,64,61,17,-1,17,65,64,-1,66,57,58,-1,58,67,66,-1,35,60,57,-1,57,66,35,-1,68,199,190,-1,190,191,69,-1,190,69,68,-1,62,70,68,-1,68,71,62,-1,72,59,62,-1,62,71,72,-1,71,68,72,-1,63,73,70,-1,70,62,63,-1,64,73,61,-1,65,74,73,-1,73,64,65,-1,58,75,67,-1,75,76,67,-1,77,76,75,-1,68,77,75,-1,75,72,68,-1,75,58,59,-1,59,72,75,-1,77,78,76,-1,76,78,79,-1,79,192,76,-1,68,69,78,-1,78,77,68,-1,78,69,191,-1,191,79,78,-1,56,57,61,-1,63,56,73,-1,73,56,61,-1,73,74,80,-1,81,80,82,-1,73,80,83,-1,73,85,84,-1,84,70,73,-1,86,84,85,-1,73,83,85,-1,86,88,87,-1,88,89,87,-1,86,87,90,-1,91,90,87,-1,87,92,91,-1,86,90,93,-1,84,94,70,-1,90,94,93,-1,90,95,94,-1,74,82,80,-1,88,86,85,-1,80,81,88,-1,96,92,97,-1,44,96,97,-1,97,89,88,-1,44,97,81,-1,81,97,88,-1,89,97,92,-1,89,92,87,-1,83,80,88,-1,83,88,85,-1,93,84,86,-1,93,94,84,-1,68,95,98,-1,94,68,70,-1,94,95,68,-1,99,98,95,-1,91,98,99,-1,91,99,90,-1,90,99,95,-1,197,100,76,-1,76,192,197,-1,100,197,198,-1,198,101,100,-1,66,67,76,-1,76,100,66,-1,35,66,100,-1,100,101,35,-1,91,102,98,-1,96,103,102,-1,91,92,102,-1,92,96,102,-1,104,68,105,-1,106,103,96,-1,104,107,68,-1,109,108,104,-1,104,102,109,-1,110,112,111,-1,110,113,112,-1,114,109,102,-1,104,108,110,-1,103,114,102,-1,104,110,107,-1,114,103,106,-1,106,55,114,-1,117,159,121,-1,121,118,117,-1,151,161,117,-1,117,118,151,-1,119,143,134,-1,155,121,159,-1,121,146,122,-1,147,123,122,-1,154,115,146,-1,121,155,146,-1,154,146,155,-1,155,159,145,-1,154,155,145,-1,147,126,125,-1,125,123,147,-1,127,139,125,-1,124,116,139,-1,123,144,121,-1,121,122,123,-1,139,130,131,-1,131,124,139,-1,128,131,130,-1,128,129,131,-1,131,129,124,-1,134,132,119,-1,132,138,119,-1,129,135,124,-1,120,136,137,-1,137,129,120,-1,134,137,136,-1,120,133,136,-1,133,134,136,-1,134,135,137,-1,137,135,129,-1,115,122,146,-1,140,42,138,-1,152,143,41,-1,116,124,141,-1,119,138,143,-1,42,41,143,-1,138,42,143,-1,143,152,153,-1,141,153,116,-1,134,143,135,-1,135,143,141,-1,135,141,124,-1,153,151,142,-1,142,151,118,-1,144,142,118,-1,118,121,144,-1,153,144,116,-1,144,153,142,-1,116,144,125,-1,125,139,116,-1,123,125,144,-1,141,143,153,-1,151,153,149,-1,148,161,151,-1,151,149,148,-1,149,153,152,-1,152,150,149,-1,149,150,198,-1,198,148,149,-1,140,138,156,-1,117,158,157,-1,157,159,117,-1,160,158,117,-1,117,161,160,-1,162,164,163,-1,165,159,157,-1,157,167,166,-1,168,167,169,-1,170,166,171,-1,157,166,165,-1,170,165,166,-1,165,145,159,-1,170,145,165,-1,168,169,172,-1,172,173,168,-1,174,172,175,-1,176,175,177,-1,169,167,157,-1,157,178,169,-1,175,176,179,-1,179,180,175,-1,181,180,179,-1,181,179,182,-1,179,176,182,-1,164,162,183,-1,183,162,184,-1,182,176,185,-1,187,182,186,-1,186,188,187,-1,164,188,186,-1,187,188,189,-1,189,188,164,-1,164,186,185,-1,186,182,185,-1,171,166,167,-1,190,184,191,-1,192,79,163,-1,177,193,176,-1,162,163,184,-1,191,163,79,-1,184,163,191,-1,163,194,192,-1,193,177,194,-1,164,185,163,-1,185,193,163,-1,185,176,193,-1,194,195,160,-1,195,158,160,-1,178,157,158,-1,158,195,178,-1,194,177,178,-1,178,195,194,-1,177,175,172,-1,172,178,177,-1,169,178,172,-1,193,194,163,-1,160,196,194,-1,148,196,160,-1,160,161,148,-1,196,197,192,-1,192,194,196,-1,196,148,198,-1,198,197,196,-1,190,199,184,-1]
TextureCoordinate473 = x3d.TextureCoordinate(DEF="Occipital_scalp-TEXCOORD_JinBlink")
TextureCoordinate473.point = [(0.9175, 0.8974),(0.9509, 0.8981),(0.9421, 0.8701),(0.924, 0.8702),(0.9824, 0.8971),(0.9824, 0.8682),(0.9541, 0.8718),(0.9147, 0.8129),(0.9437, 0.8153),(0.9638, 0.8095),(0.9824, 0.809),(0.9461, 0.923),(0.9071, 0.9135),(0.9824, 0.9287),(0.8767, 0.8622),(0.8669, 0.8674),(0.9208, 0.8549),(0.8792, 0.7991),(0.8835, 0.8633),(0.9139, 0.8636),(0.9513, 0.84),(0.9824, 0.8358),(0.8845, 0.9021),(0.888, 0.931),(0.8761, 0.9036),(0.8705, 0.9018),(0.7338, 0.8385),(0.7279, 0.8339),(0.7208, 0.8401),(0.7397, 0.7767),(0.7338, 0.7681),(0.7338, 0.7727),(0.7192, 0.8201),(0.7171, 0.8352),(0.7139, 0.8364),(0.7127, 0.8419),(0.7175, 0.832),(0.7247, 0.8312),(0.7224, 0.8292),(0.7239, 0.8169),(0.7146, 0.8334),(0.7152, 0.8309),(0.753, 0.7762),(0.7452, 0.772),(0.7409, 0.7703),(0.756, 0.7661),(0.7502, 0.7748),(0.7102, 0.837),(0.7574, 0.7798),(0.7054, 0.8378),(0.7338, 0.8253),(0.7338, 0.8299),(0.7267, 0.8275),(0.7291, 0.8283),(0.7338, 0.8254),(0.7338, 0.7682),(0.7385, 0.7711),(0.7338, 0.7628),(0.7338, 0.82),(0.7437, 0.7597),(0.7429, 0.774),(0.7484, 0.7629),(0.7505, 0.778),(0.7116, 0.8233),(0.7622, 0.7806),(0.763, 0.7872),(0.7046, 0.8444),(0.7572, 0.7769),(0.7524, 0.7737),(0.7104, 0.8341),(0.9158, 0.9539),(0.9824, 0.9663),(0.392, 0.6289),(0.4147, 0.6411),(0.4093, 0.6273),(0.3758, 0.6166),(0.7576, 0.779),(0.4093, 0.6139),(0.8544, 0.902),(0.8589, 0.7975),(0.8568, 0.8668),(0.8497, 0.9637),(0.7343, 0.9872),(0.8538, 0.9345),(0.3771, 0.6213),(0.4147, 0.6411),(0.392, 0.6289),(0.8605, 0.8638),(0.3927, 0.6595),(0.4093, 0.6122),(0.4111, 0.6626),(0.4239, 0.6387),(0.4273, 0.6228),(0.4239, 0.6648),(0.4352, 0.6651),(0.4267, 0.6717),(0.4123, 0.664),(0.4255, 0.614),(0.4253, 0.6099),(0.392, 0.6289),(0.4093, 0.6273),(0.4147, 0.6411),(0.9421, 0.8701),(0.9509, 0.8981),(0.9175, 0.8974),(0.924, 0.8702),(0.9824, 0.8682),(0.9824, 0.8971),(0.9541, 0.8718),(0.9147, 0.8129),(0.9437, 0.8153),(0.9638, 0.8095),(0.9824, 0.809),(0.9461, 0.923),(0.9071, 0.9135),(0.9824, 0.9287),(0.8767, 0.8622),(0.8589, 0.7975),(0.8605, 0.8638),(0.8669, 0.8674),(0.8568, 0.8668),(0.9208, 0.8549),(0.8792, 0.7991),(0.9139, 0.8636),(0.8835, 0.8633),(0.9513, 0.84),(0.9824, 0.8358),(0.8845, 0.9021),(0.888, 0.931),(0.8761, 0.9036),(0.8705, 0.9018),(0.8544, 0.902),(0.8538, 0.9345),(0.7208, 0.8401),(0.7279, 0.8339),(0.7338, 0.8385),(0.7338, 0.7727),(0.7338, 0.7681),(0.7397, 0.7767),(0.7192, 0.8201),(0.7139, 0.8364),(0.7171, 0.8352),(0.7127, 0.8419),(0.7175, 0.832),(0.7224, 0.8292),(0.7247, 0.8312),(0.7239, 0.8169),(0.7146, 0.8334),(0.7452, 0.772),(0.753, 0.7762),(0.7152, 0.8309),(0.7409, 0.7703),(0.7502, 0.7748),(0.756, 0.7661),(0.7102, 0.837),(0.7574, 0.7798),(0.7054, 0.8378),(0.7338, 0.8253),(0.7338, 0.8299),(0.7338, 0.8254),(0.7291, 0.8283),(0.7267, 0.8275),(0.7338, 0.7628),(0.7385, 0.7711),(0.7338, 0.7682),(0.7338, 0.82),(0.7437, 0.7597),(0.7484, 0.7629),(0.7429, 0.774),(0.7505, 0.778),(0.7116, 0.8233),(0.763, 0.7872),(0.7576, 0.779),(0.7622, 0.7806),(0.7046, 0.8444),(0.7572, 0.7769),(0.7524, 0.7737),(0.7104, 0.8341),(0.9158, 0.9539),(0.8497, 0.9637),(0.7343, 0.9872),(0.9824, 0.9663),(0.4093, 0.6139),(0.3771, 0.6213),(0.4147, 0.6411),(0.3927, 0.6595),(0.392, 0.6289),(0.4111, 0.6626),(0.4239, 0.6387),(0.4273, 0.6228),(0.4239, 0.6648),(0.4267, 0.6717),(0.4352, 0.6651),(0.4123, 0.664),(0.4255, 0.614),(0.7343, 0.9169),(0.7616, 0.9147),(0.7553, 0.8982),(0.7343, 0.8968),(0.7739, 0.9327),(0.7343, 0.9365),(0.8187, 0.8433),(0.8348, 0.9045),(0.8324, 0.8647),(0.74, 0.8745),(0.761, 0.8768),(0.7497, 0.8755),(0.777, 0.8787),(0.7647, 0.8593),(0.7596, 0.8565),(0.7438, 0.8546),(0.7343, 0.8756),(0.7372, 0.8736),(0.7405, 0.8536),(0.7808, 0.8802),(0.7786, 0.8666),(0.7875, 0.8787),(0.7821, 0.8667),(0.7952, 0.9076),(0.8011, 0.8823),(0.7745, 0.9003),(0.7939, 0.8518),(0.7845, 0.8549),(0.7731, 0.8049),(0.7979, 0.8609),(0.8185, 0.8054),(0.8439, 0.8655),(0.8131, 0.8741),(0.786, 0.7876),(0.8107, 0.8538),(0.8058, 0.8252),(0.8096, 0.8166),(0.8589, 0.7975),(0.8568, 0.8668),(0.8544, 0.902),(0.8538, 0.9345),(0.8173, 0.9068),(0.8156, 0.9257),(0.7753, 0.9186),(0.7832, 0.9041),(0.7881, 0.9479),(0.7343, 0.9577),(0.8497, 0.9637),(0.7343, 0.9872),(0.8605, 0.8638),(0.7553, 0.8982),(0.7616, 0.9147),(0.7343, 0.9169),(0.7343, 0.8968),(0.7739, 0.9327),(0.7343, 0.9365),(0.8324, 0.8647),(0.8348, 0.9045),(0.8187, 0.8433),(0.74, 0.8745),(0.7497, 0.8755),(0.761, 0.8768),(0.7647, 0.8593),(0.777, 0.8787),(0.7438, 0.8546),(0.7596, 0.8565),(0.7372, 0.8736),(0.7343, 0.8756),(0.7405, 0.8536),(0.7808, 0.8802),(0.7786, 0.8666),(0.7821, 0.8667),(0.7875, 0.8787),(0.8011, 0.8823),(0.7952, 0.9076),(0.7745, 0.9003),(0.7939, 0.8518),(0.7845, 0.8549),(0.7731, 0.8049),(0.7979, 0.8609),(0.8185, 0.8054),(0.8439, 0.8655),(0.8131, 0.8741),(0.8107, 0.8538),(0.786, 0.7876),(0.8058, 0.8252),(0.8096, 0.8166),(0.8589, 0.7975),(0.8568, 0.8668),(0.8538, 0.9345),(0.8544, 0.902),(0.8173, 0.9068),(0.8156, 0.9257),(0.7753, 0.9186),(0.7832, 0.9041),(0.7881, 0.9479),(0.7343, 0.9577),(0.8497, 0.9637),(0.7343, 0.9872),(0.8605, 0.8638)]

IndexedFaceSet472.texCoord = TextureCoordinate473
Coordinate474 = x3d.Coordinate(USE="Occipital_scalp_COORD_JinBlink")

IndexedFaceSet472.coord = Coordinate474

Shape470.geometry = IndexedFaceSet472

Transform469.children.append(Shape470)

HAnimSegment463.children.append(Transform469)

HAnimJoint93.children.append(HAnimSegment463)
HAnimSegment475 = x3d.HAnimSegment(DEF="hanim_Philtrum")
HAnimSegment475.name = "philtrum"
HAnimDisplacer476 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer476.name = "philtrum_morphinterpolator"
HAnimDisplacer476.coordIndex = [1,2,3]
HAnimDisplacer476.displacements = [(0, 0.4847, 0),(0, 0.4847, 0),(0, 0.4847, 0)]

HAnimSegment475.displacers.append(HAnimDisplacer476)
HAnimDisplacer477 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinChinRaiser")
HAnimDisplacer477.name = "philtrum_morphinterpolator"
HAnimDisplacer477.coordIndex = [1,2,3]
HAnimDisplacer477.displacements = [(0, 0.2286, 0),(0, 0.1405, 0),(0, 0.1405, 0)]

HAnimSegment475.displacers.append(HAnimDisplacer477)
HAnimDisplacer478 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinDimpler")
HAnimDisplacer478.name = "philtrum_morphinterpolator"
HAnimDisplacer478.coordIndex = [1,2,3]
HAnimDisplacer478.displacements = [(0, -0.0689, 0.0447),(0, -0.0689, 0.0447),(0, -0.0689, 0.0447)]

HAnimSegment475.displacers.append(HAnimDisplacer478)
HAnimDisplacer479 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer479.name = "philtrum_morphinterpolator"
HAnimDisplacer479.coordIndex = [1,2,3]
HAnimDisplacer479.displacements = [(0, -0.0514, -0.037),(0, -0.0514, -0.037),(0, -0.0514, -0.037)]

HAnimSegment475.displacers.append(HAnimDisplacer479)
HAnimDisplacer480 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipFunneler")
HAnimDisplacer480.name = "philtrum_morphinterpolator"
HAnimDisplacer480.coordIndex = [1,2,3]
HAnimDisplacer480.displacements = [(0, 0.1071, 0.5281),(-0.0737, 0.1634, 0.5281),(0.0737, 0.1634, 0.5281)]

HAnimSegment475.displacers.append(HAnimDisplacer480)
HAnimDisplacer481 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer481.name = "philtrum_morphinterpolator"
HAnimDisplacer481.coordIndex = [1,2,3]
HAnimDisplacer481.displacements = [(-0.0411, 0, 0.5662),(-0.0978, 0, 0.5662),(0.0156, 0, 0.5662)]

HAnimSegment475.displacers.append(HAnimDisplacer481)
HAnimDisplacer482 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipSuck")
HAnimDisplacer482.name = "philtrum_morphinterpolator"
HAnimDisplacer482.coordIndex = [1,2,3]
HAnimDisplacer482.displacements = [(0, -0.5204, -0.6548),(0, -0.5204, -0.6548),(0, -0.5204, -0.6548)]

HAnimSegment475.displacers.append(HAnimDisplacer482)
HAnimDisplacer483 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinLipTightener")
HAnimDisplacer483.name = "philtrum_morphinterpolator"
HAnimDisplacer483.coordIndex = [1,2,3]
HAnimDisplacer483.displacements = [(0, -0.0383, 0.2409),(-0.0415, -0.0383, 0.2409),(0.0415, -0.0383, 0.2409)]

HAnimSegment475.displacers.append(HAnimDisplacer483)
HAnimDisplacer484 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinMouthStretch")
HAnimDisplacer484.name = "philtrum_morphinterpolator"
HAnimDisplacer484.coordIndex = [1,2,3]
HAnimDisplacer484.displacements = [(0, 0.2684, 0),(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment475.displacers.append(HAnimDisplacer484)
HAnimDisplacer485 = x3d.HAnimDisplacer(DEF="Philtrum_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer485.name = "philtrum_morphinterpolator"
HAnimDisplacer485.coordIndex = [1,2,3]
HAnimDisplacer485.displacements = [(0, 0.5016, 0),(0, 0.5016, 0),(0, 0.5016, 0)]

HAnimSegment475.displacers.append(HAnimDisplacer485)
Coordinate486 = x3d.Coordinate(DEF="Philtrum_COORD_JinBlink")
Coordinate486.point = [(0.3704, 0.4343, 0.1553),(0, -0.4343, -0.1589),(0.5699, -0.4343, -0.1589),(-0.5699, -0.4343, -0.1589),(-0.3704, 0.4343, 0.1553),(0, 0.4343, 0.1589)]

HAnimSegment475.coord = Coordinate486
Transform487 = x3d.Transform(DEF="Philtrum_JinBlink")
Transform487.translation = [0,9.815,15]
Shape488 = x3d.Shape()
Appearance489 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape488.appearance = Appearance489
IndexedFaceSet490 = x3d.IndexedFaceSet(DEF="Philtrum-FACES_JinBlink")
IndexedFaceSet490.solid = False
IndexedFaceSet490.creaseAngle = 3.14159
IndexedFaceSet490.texCoordIndex = [0,1,2,-1,2,3,0,-1,6,5,4,-1,4,7,6,-1]
IndexedFaceSet490.coordIndex = [0,5,1,-1,1,2,0,-1,4,3,1,-1,1,5,4,-1]
TextureCoordinate491 = x3d.TextureCoordinate(DEF="Philtrum-TEXCOORD_JinBlink")
TextureCoordinate491.point = [(0.2511, 0.6816),(0.2441, 0.6816),(0.2441, 0.6653),(0.2548, 0.6653),(0.2441, 0.6653),(0.2548, 0.6653),(0.2511, 0.6816),(0.2441, 0.6816)]

IndexedFaceSet490.texCoord = TextureCoordinate491
Coordinate492 = x3d.Coordinate(USE="Philtrum_COORD_JinBlink")

IndexedFaceSet490.coord = Coordinate492

Shape488.geometry = IndexedFaceSet490

Transform487.children.append(Shape488)

HAnimSegment475.children.append(Transform487)

HAnimJoint93.children.append(HAnimSegment475)
HAnimSegment493 = x3d.HAnimSegment(DEF="hanim_Right_bulbar_conjunctiva")
HAnimSegment493.name = "right_bulbar_conjunctiva"
HAnimDisplacer494 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer494.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer494.coordIndex = [3,4,14]
HAnimDisplacer494.displacements = [(0, -0.0591, 0),(0, -0.059, 0),(0.5563, -0.507, 0)]

HAnimSegment493.displacers.append(HAnimDisplacer494)
HAnimDisplacer495 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer495.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer495.coordIndex = [14]
HAnimDisplacer495.displacements = [(0, 0.384, 0)]

HAnimSegment493.displacers.append(HAnimDisplacer495)
HAnimDisplacer496 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinLidTightener")
HAnimDisplacer496.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer496.coordIndex = [3,4,5,7,8,9,11,12,15,21,25,26]
HAnimDisplacer496.displacements = [(0, -0.3349, 0),(0, -0.3349, 0),(0, 0.3017, 0),(0, 0.1097, 0),(0.123, 0.2263, 0),(0, -0.3349, 0),(0, 0.302, 0),(0, 0.151, 0),(0, 0.151, 0),(0, 0.151, 0),(0, 0.151, 0),(0, -0.335, 0)]

HAnimSegment493.displacers.append(HAnimDisplacer496)
HAnimDisplacer497 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer497.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer497.coordIndex = [19]
HAnimDisplacer497.displacements = [(0, 0.135, 0)]

HAnimSegment493.displacers.append(HAnimDisplacer497)
HAnimDisplacer498 = x3d.HAnimDisplacer(DEF="Right_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer498.name = "right_bulbar_conjunctiva_morphinterpolator"
HAnimDisplacer498.coordIndex = [3,4,6,9,26]
HAnimDisplacer498.displacements = [(0, 0.4975, 0),(0, 0.498, 0),(0, 0.4976, 0),(0, 0.498, 0),(0, 0.497, 0)]

HAnimSegment493.displacers.append(HAnimDisplacer498)
Coordinate499 = x3d.Coordinate(DEF="Right_bulbar_conjunctiva_COORD_JinBlink")
Coordinate499.point = [(-2.76, 0.0973, -0.8547),(1.347, 0.2034, 2.463),(-1.784, 0.6812, 0.4382),(1.252, 0.6995, 2.521),(0.2686, 1.16, 2.287),(-2.036, -1.163, -0.4716),(2.858, -0.5459, 2.699),(2.35, -1.007, 2.159),(-2.632, -0.8129, -0.7113),(-1.577, 1.203, 0.9703),(-3.566, 0.2646, -1.27),(-1.305, -1.43, 0.2687),(1.132, -1.383, 1.574),(2.475, 0.7643, 1.73),(0.4787, 1.699, 1.381),(-1.844, -1.377, -0.8846),(4.008, -0.6268, 1.793),(3.316, -1.256, 1.253),(-2.512, -0.9908, -1.342),(-2.026, 1.768, -0.3396),(-4.008, 0.4783, -2.699),(-1.039, -1.688, -0.4347),(1.656, -1.768, 0.6681),(-1.878, -0.7347, -0.1728),(1.108, -0.9679, 1.714),(0.4715, -1.396, 1.218),(-1.925, 1.039, 0.5784)]

HAnimSegment493.coord = Coordinate499
Transform500 = x3d.Transform(DEF="Right_bulbar_conjunctiva_JinBlink")
Transform500.translation = [-5.794,17.61,11.15]
Shape501 = x3d.Shape()
Appearance502 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape501.appearance = Appearance502
IndexedFaceSet503 = x3d.IndexedFaceSet(DEF="Right_bulbar_conjunctiva-FACES_JinBlink")
IndexedFaceSet503.solid = False
IndexedFaceSet503.creaseAngle = 3.14159
IndexedFaceSet503.texCoordIndex = [7,27,0,-1,0,8,7,-1,2,1,29,-1,29,11,2,-1,11,9,2,-1,12,25,5,-1,8,26,13,-1,9,1,2,-1,9,25,1,-1,4,15,14,-1,14,10,4,-1,3,16,15,-1,15,4,3,-1,12,18,17,-1,17,13,28,-1,12,17,28,-1,5,19,18,-1,18,12,5,-1,6,20,16,-1,16,3,6,-1,13,17,21,-1,21,8,13,-1,9,22,19,-1,19,5,9,-1,8,21,23,-1,23,7,8,-1,11,29,14,-1,14,24,11,-1,11,24,22,-1,22,9,11,-1,25,9,5,-1,26,8,0,-1,26,28,13,-1,14,29,10,-1,29,1,10,-1]
IndexedFaceSet503.coordIndex = [6,3,1,-1,1,7,6,-1,0,2,26,-1,26,10,0,-1,10,8,0,-1,11,23,5,-1,7,24,12,-1,8,2,0,-1,8,23,2,-1,4,14,19,-1,19,9,4,-1,3,13,14,-1,14,4,3,-1,11,21,22,-1,22,12,25,-1,11,22,25,-1,5,15,21,-1,21,11,5,-1,6,16,13,-1,13,3,6,-1,12,22,17,-1,17,7,12,-1,8,18,15,-1,15,5,8,-1,7,17,16,-1,16,6,7,-1,10,26,19,-1,19,20,10,-1,10,20,18,-1,18,8,10,-1,23,8,5,-1,24,7,1,-1,24,25,12,-1,19,26,9,-1,26,2,9,-1]
TextureCoordinate504 = x3d.TextureCoordinate(DEF="Right_bulbar_conjunctiva-TEXCOORD_JinBlink")
TextureCoordinate504.point = [(0.328, 0.824),(0.3871, 0.8321),(0.4052, 0.8221),(0.3258, 0.833),(0.3487, 0.8409),(0.3916, 0.7984),(0.2983, 0.8142),(0.2981, 0.8094),(0.309, 0.8013),(0.4011, 0.8053),(0.385, 0.8438),(0.4198, 0.8261),(0.3777, 0.7936),(0.3315, 0.7948),(0.3885, 0.8436),(0.3487, 0.8409),(0.3206, 0.8292),(0.3315, 0.7948),(0.372, 0.7925),(0.3869, 0.7967),(0.2983, 0.8142),(0.309, 0.8013),(0.3966, 0.8018),(0.2981, 0.8094),(0.4198, 0.8261),(0.3889, 0.8064),(0.3322, 0.8026),(0.3307, 0.8316),(0.3442, 0.7934),(0.3915, 0.8393)]

IndexedFaceSet503.texCoord = TextureCoordinate504
Coordinate505 = x3d.Coordinate(USE="Right_bulbar_conjunctiva_COORD_JinBlink")

IndexedFaceSet503.coord = Coordinate505

Shape501.geometry = IndexedFaceSet503

Transform500.children.append(Shape501)

HAnimSegment493.children.append(Transform500)

HAnimJoint93.children.append(HAnimSegment493)
HAnimSegment506 = x3d.HAnimSegment(DEF="hanim_Right_cheek")
HAnimSegment506.name = "right_cheek"
HAnimDisplacer507 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer507.name = "right_cheek_morphinterpolator"
HAnimDisplacer507.coordIndex = [4,10,11,25,26,31,32,33,34]
HAnimDisplacer507.displacements = [(0, 0.8378, 0),(0, 0.8382, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.838, 0),(0, 0.8376, 0),(0, 0.8381, 0),(0, 0.8383, 0),(-0.591, 1.322, 0.107)]

HAnimSegment506.displacers.append(HAnimDisplacer507)
HAnimDisplacer508 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer508.name = "right_cheek_morphinterpolator"
HAnimDisplacer508.coordIndex = [4,6,7,8,9,10,11,12,13,17,19,24,29,30,31,32]
HAnimDisplacer508.displacements = [(-0.6734, 0.6214, 0.174),(0, 0.1, 0.079),(0, 0.134, -0.107),(-0.299, 0.38, -0.184),(0, 0.268, 0.099),(0.0317, 1.7512, 0.87),(-0.255, 1.233, 0.181),(-0.029, 1.5769, 1.5),(-0.588, 1.4349, 0.0324),(0, 0.462, 0.3972),(0, 0.6417, 0),(0, 0.754, 0),(0, 0.067, -0.082),(0, 0.268, 0),(-0.001, 1.3996, 0.448),(0, 0.2915, 0.183)]

HAnimSegment506.displacers.append(HAnimDisplacer508)
HAnimDisplacer509 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinChinRaiser")
HAnimDisplacer509.name = "right_cheek_morphinterpolator"
HAnimDisplacer509.coordIndex = [34]
HAnimDisplacer509.displacements = [(0, -0.137, 0)]

HAnimSegment506.displacers.append(HAnimDisplacer509)
HAnimDisplacer510 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinDimpler")
HAnimDisplacer510.name = "right_cheek_morphinterpolator"
HAnimDisplacer510.coordIndex = [18,34]
HAnimDisplacer510.displacements = [(0.407, 0.417, 0.179),(-0.379, 0.396, 0.153)]

HAnimSegment506.displacers.append(HAnimDisplacer510)
HAnimDisplacer511 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinJawDrop")
HAnimDisplacer511.name = "right_cheek_morphinterpolator"
HAnimDisplacer511.coordIndex = [3,5,15]
HAnimDisplacer511.displacements = [(0, -0.616, 0),(0, -0.616, 0),(0, -0.616, 0)]

HAnimSegment506.displacers.append(HAnimDisplacer511)
HAnimDisplacer512 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer512.name = "right_cheek_morphinterpolator"
HAnimDisplacer512.coordIndex = [34]
HAnimDisplacer512.displacements = [(-0.197, -0.702, 0.078)]

HAnimSegment506.displacers.append(HAnimDisplacer512)
HAnimDisplacer513 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer513.name = "right_cheek_morphinterpolator"
HAnimDisplacer513.coordIndex = [1,8,12,34]
HAnimDisplacer513.displacements = [(-0.473, -0.03, -0.642),(-1.14, 0, -1.022),(-0.583, -0.05, -0.383),(-1.176, 0.13, -0.375)]

HAnimSegment506.displacers.append(HAnimDisplacer513)
HAnimDisplacer514 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipFunneler")
HAnimDisplacer514.name = "right_cheek_morphinterpolator"
HAnimDisplacer514.coordIndex = [5,16,18,32,33,34]
HAnimDisplacer514.displacements = [(0, 0, 0.234),(0, 0, 0.152),(0, 0, 0.084),(0, 0, 0.414),(0, 0, 0.109),(0.835, 0, 1.064)]

HAnimSegment506.displacers.append(HAnimDisplacer514)
HAnimDisplacer515 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer515.name = "right_cheek_morphinterpolator"
HAnimDisplacer515.coordIndex = [5,34]
HAnimDisplacer515.displacements = [(0, 0, 0.163),(0.909, 0, 0.46)]

HAnimSegment506.displacers.append(HAnimDisplacer515)
HAnimDisplacer516 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipsPart")
HAnimDisplacer516.name = "right_cheek_morphinterpolator"
HAnimDisplacer516.coordIndex = [5]
HAnimDisplacer516.displacements = [(0, -0.083, -0.001)]

HAnimSegment506.displacers.append(HAnimDisplacer516)
HAnimDisplacer517 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipStretcher")
HAnimDisplacer517.name = "right_cheek_morphinterpolator"
HAnimDisplacer517.coordIndex = [18,34]
HAnimDisplacer517.displacements = [(-1.335, -0.029, -0.124),(-0.974, 0.009, 0.026)]

HAnimSegment506.displacers.append(HAnimDisplacer517)
HAnimDisplacer518 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipSuck")
HAnimDisplacer518.name = "right_cheek_morphinterpolator"
HAnimDisplacer518.coordIndex = [34]
HAnimDisplacer518.displacements = [(-0.125, 0, 0)]

HAnimSegment506.displacers.append(HAnimDisplacer518)
HAnimDisplacer519 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinLipTightener")
HAnimDisplacer519.name = "right_cheek_morphinterpolator"
HAnimDisplacer519.coordIndex = [34]
HAnimDisplacer519.displacements = [(0.521, 0.17, 1.038)]

HAnimSegment506.displacers.append(HAnimDisplacer519)
HAnimDisplacer520 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinMouthStretch")
HAnimDisplacer520.name = "right_cheek_morphinterpolator"
HAnimDisplacer520.coordIndex = [2,3,5,14,15,18,22,34]
HAnimDisplacer520.displacements = [(0, -0.909, 0.074),(0, -2.034, -0.089),(0, -2.011, -0.01),(0, -0.688, 0),(0, -1.574, -0.1141),(0, -1.34, 0.088),(0, -0.817, 0),(0, -0.736, 0)]

HAnimSegment506.displacers.append(HAnimDisplacer520)
HAnimDisplacer521 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer521.name = "right_cheek_morphinterpolator"
HAnimDisplacer521.coordIndex = [25,26,32,33]
HAnimDisplacer521.displacements = [(0.078, 0.5523, 0),(0, 0.376, 0),(0.146, 0.2645, 0),(0, 0.4707, 0)]

HAnimSegment506.displacers.append(HAnimDisplacer521)
HAnimDisplacer522 = x3d.HAnimDisplacer(DEF="Right_cheek_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer522.name = "right_cheek_morphinterpolator"
HAnimDisplacer522.coordIndex = [25,26,33]
HAnimDisplacer522.displacements = [(0, 0.2937, 0),(0, 0.2937, 0),(0, 0.5019, 0)]

HAnimSegment506.displacers.append(HAnimDisplacer522)
Coordinate523 = x3d.Coordinate(DEF="Right_cheek_COORD_JinBlink")
Coordinate523.point = [(-5.868, 0.6861, -6.977),(-5.046, 6.009, -3.719),(0.5602, -4.076, 1.16),(3.27, -6.054, 1.778),(1.388, -1.337, 4.299),(3.582, -4.636, 3.814),(-2.834, 4.241, 1.178),(3.857, 3.618, 5.665),(-1.296, 3.319, 2.709),(0.2365, 3.054, 3.875),(0.6487, 0.5238, 4.348),(4.592, 1.365, 6.024),(-2.001, 0.9701, 1.578),(-1.819, -1.515, 0.4861),(-0.1831, -3.863, -2.615),(3.274, -6.596, -0.2282),(1.597, -4.834, -6.657),(-4.101, 2.99, -1.336),(2.758, -3.467, 4.304),(-3.42, -0.01058, -3.863),(-5.261, 6.596, -4.686),(-1.153, -2.865, -6.293),(2.435, -5.715, -3.442),(5.749, 4.473, 6.621),(5.809, 2.217, 6.673),(5.409, -0.2562, 6.321),(5.868, -0.0462, 6.977),(-3.128, 5.574, 1.136),(-4.273, 5.681, -0.7129),(4.763, 4.022, 6.147),(2.394, 3.215, 4.911),(2.727, 0.9674, 5.231),(3.19, -1.179, 5.185),(5.082, -1.013, 6.115),(3.921, -3.342, 4.788)]

HAnimSegment506.coord = Coordinate523
Transform524 = x3d.Transform(DEF="Right_cheek_JinBlink")
Transform524.translation = [-6.927,11.97,7.646]
Shape525 = x3d.Shape()
Appearance526 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape525.appearance = Appearance526
IndexedFaceSet527 = x3d.IndexedFaceSet(DEF="Right_cheek-FACES_JinBlink")
IndexedFaceSet527.solid = False
IndexedFaceSet527.creaseAngle = 3.14159
IndexedFaceSet527.texCoordIndex = [0,1,2,-1,3,1,0,-1,4,5,1,-1,1,5,2,-1,5,4,6,-1,7,6,4,-1,39,37,13,-1,13,24,39,-1,36,15,13,-1,13,37,36,-1,8,7,4,-1,18,16,17,-1,17,16,13,-1,13,15,17,-1,19,12,11,-1,16,19,13,-1,28,14,29,-1,29,30,28,-1,28,34,20,-1,20,14,28,-1,21,18,17,-1,17,22,21,-1,15,36,35,-1,35,23,15,-1,17,15,23,-1,23,22,17,-1,24,11,39,-1,19,11,24,-1,13,19,24,-1,1,9,4,-1,4,9,10,-1,10,25,4,-1,26,9,1,-1,4,25,8,-1,21,31,33,-1,33,18,21,-1,32,0,2,-1,34,28,27,-1,20,35,36,-1,36,14,20,-1,38,29,14,-1,37,38,14,-1,36,37,14,-1,37,39,38,-1]
IndexedFaceSet527.coordIndex = [1,19,17,-1,20,19,1,-1,14,13,19,-1,19,13,17,-1,13,14,2,-1,3,2,14,-1,34,32,4,-1,4,18,34,-1,31,10,4,-1,4,32,31,-1,15,3,14,-1,17,13,12,-1,12,13,4,-1,4,10,12,-1,2,3,5,-1,13,2,4,-1,24,11,25,-1,25,26,24,-1,24,29,7,-1,7,11,24,-1,6,17,12,-1,12,8,6,-1,10,31,30,-1,30,9,10,-1,12,10,9,-1,9,8,12,-1,18,5,34,-1,2,5,18,-1,4,2,18,-1,19,21,14,-1,14,21,16,-1,16,22,14,-1,0,21,19,-1,14,22,15,-1,6,27,28,-1,28,17,6,-1,28,1,17,-1,29,24,23,-1,7,30,31,-1,31,11,7,-1,33,25,11,-1,32,33,11,-1,31,32,11,-1,32,34,33,-1]
TextureCoordinate528 = x3d.TextureCoordinate(DEF="Right_cheek-TEXCOORD_JinBlink")
TextureCoordinate528.point = [(0.44, 0.6625),(0.4392, 0.6356),(0.4517, 0.649),(0.4352, 0.6651),(0.4454, 0.6184),(0.4606, 0.6289),(0.464, 0.6174),(0.467, 0.6086),(0.4571, 0.6062),(0.4273, 0.6228),(0.4255, 0.614),(0.3041, 0.631),(0.3118, 0.6205),(0.3484, 0.6888),(0.2881, 0.7397),(0.3623, 0.7239),(0.4088, 0.6855),(0.4123, 0.7323),(0.4518, 0.7703),(0.364, 0.6372),(0.301, 0.7815),(0.4279, 0.7939),(0.3993, 0.7753),(0.3692, 0.7714),(0.3226, 0.6487),(0.4413, 0.6101),(0.4239, 0.6387),(0.2671, 0.7978),(0.268, 0.7555),(0.2727, 0.7092),(0.2641, 0.7133),(0.4335, 0.819),(0.4547, 0.661),(0.4572, 0.8171),(0.2845, 0.7889),(0.3287, 0.7742),(0.3232, 0.7322),(0.3144, 0.6917),(0.2788, 0.6949),(0.3007, 0.651)]

IndexedFaceSet527.texCoord = TextureCoordinate528
Coordinate529 = x3d.Coordinate(USE="Right_cheek_COORD_JinBlink")

IndexedFaceSet527.coord = Coordinate529

Shape525.geometry = IndexedFaceSet527

Transform524.children.append(Shape525)

HAnimSegment506.children.append(Transform524)

HAnimJoint93.children.append(HAnimSegment506)
HAnimSegment530 = x3d.HAnimSegment(DEF="hanim_Right_dorsum")
HAnimSegment530.name = "right_dorsum"
HAnimDisplacer531 = x3d.HAnimDisplacer(DEF="Right_dorsum_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer531.name = "right_dorsum_morphinterpolator"
HAnimDisplacer531.coordIndex = [5]
HAnimDisplacer531.displacements = [(0, 0.838, 0)]

HAnimSegment530.displacers.append(HAnimDisplacer531)
HAnimDisplacer532 = x3d.HAnimDisplacer(DEF="Right_dorsum_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer532.name = "right_dorsum_morphinterpolator"
HAnimDisplacer532.coordIndex = [4]
HAnimDisplacer532.displacements = [(0, 0.7543, 0)]

HAnimSegment530.displacers.append(HAnimDisplacer532)
HAnimDisplacer533 = x3d.HAnimDisplacer(DEF="Right_dorsum_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer533.name = "right_dorsum_morphinterpolator"
HAnimDisplacer533.coordIndex = [5]
HAnimDisplacer533.displacements = [(0, 0.376, 0)]

HAnimSegment530.displacers.append(HAnimDisplacer533)
HAnimDisplacer534 = x3d.HAnimDisplacer(DEF="Right_dorsum_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer534.name = "right_dorsum_morphinterpolator"
HAnimDisplacer534.coordIndex = [5]
HAnimDisplacer534.displacements = [(0, 0.293, 0)]

HAnimSegment530.displacers.append(HAnimDisplacer534)
Coordinate535 = x3d.Coordinate(DEF="Right_dorsum_COORD_JinBlink")
Coordinate535.point = [(0.2793, 2.722, -0.1346),(0.471, 0.1584, -0.08532),(0.25, -2.447, 0.6076),(-0.471, 1.797, -0.6076),(-0.4116, -0.459, -0.556),(-0.352, -2.722, -0.252)]

HAnimSegment530.coord = Coordinate535
Transform536 = x3d.Transform(DEF="Right_dorsum_JinBlink")
Transform536.translation = [-0.7065,14.64,14.87]
Shape537 = x3d.Shape()
Appearance538 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape537.appearance = Appearance538
IndexedFaceSet539 = x3d.IndexedFaceSet(DEF="Right_dorsum-FACES_JinBlink")
IndexedFaceSet539.solid = False
IndexedFaceSet539.creaseAngle = 3.14159
IndexedFaceSet539.texCoordIndex = [3,4,1,-1,1,0,3,-1,5,2,1,-1,1,4,5,-1]
IndexedFaceSet539.coordIndex = [3,4,1,-1,1,0,3,-1,5,2,1,-1,1,4,5,-1]
TextureCoordinate540 = x3d.TextureCoordinate(DEF="Right_dorsum-TEXCOORD_JinBlink")
TextureCoordinate540.point = [(0.2534, 0.8152),(0.2534, 0.767),(0.2528, 0.7186),(0.2671, 0.7978),(0.268, 0.7555),(0.2641, 0.7133)]

IndexedFaceSet539.texCoord = TextureCoordinate540
Coordinate541 = x3d.Coordinate(USE="Right_dorsum_COORD_JinBlink")

IndexedFaceSet539.coord = Coordinate541

Shape537.geometry = IndexedFaceSet539

Transform536.children.append(Shape537)

HAnimSegment530.children.append(Transform536)

HAnimJoint93.children.append(HAnimSegment530)
HAnimSegment542 = x3d.HAnimSegment(DEF="hanim_Right_ear")
HAnimSegment542.name = "right_ear"
Coordinate543 = x3d.Coordinate(DEF="Right_ear_COORD_JinBlink")
Coordinate543.point = [(-1.104, -2.879, -0.3646),(-1.92, -0.7197, -2.765),(-0.3083, -3.342, -0.3477),(-1.674, 4.039, 0.222),(-2.14, 2.313, -2.716),(-0.349, 2.504, -0.3477),(2.14, -4.039, 2.765),(0.2989, 2.568, 1.943)]

HAnimSegment542.coord = Coordinate543
Transform544 = x3d.Transform(DEF="Right_ear_JinBlink")
Transform544.translation = [-12.49,15.99,1.017]
Shape545 = x3d.Shape()
Appearance546 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape545.appearance = Appearance546
IndexedFaceSet547 = x3d.IndexedFaceSet(DEF="Right_ear-FACES_JinBlink")
IndexedFaceSet547.solid = False
IndexedFaceSet547.creaseAngle = 3.14159
IndexedFaceSet547.texCoordIndex = [0,1,2,-1,5,2,3,-1,3,4,5,-1,2,1,3,-1,1,0,6,-1,6,7,1,-1,4,3,1,-1,1,7,4,-1]
IndexedFaceSet547.coordIndex = [6,0,2,-1,5,2,1,-1,1,4,5,-1,2,0,1,-1,0,6,7,-1,7,3,0,-1,4,1,0,-1,0,3,4,-1]
TextureCoordinate548 = x3d.TextureCoordinate(DEF="Right_ear-TEXCOORD_JinBlink")
TextureCoordinate548.point = [(0.4392, 0.6356),(0.4239, 0.6408),(0.4239, 0.6387),(0.412, 0.6504),(0.4123, 0.664),(0.4239, 0.6648),(0.4352, 0.6651),(0.4267, 0.6717)]

IndexedFaceSet547.texCoord = TextureCoordinate548
Coordinate549 = x3d.Coordinate(USE="Right_ear_COORD_JinBlink")

IndexedFaceSet547.coord = Coordinate549

Shape545.geometry = IndexedFaceSet547

Transform544.children.append(Shape545)

HAnimSegment542.children.append(Transform544)

HAnimJoint93.children.append(HAnimSegment542)
HAnimSegment550 = x3d.HAnimSegment(DEF="hanim_Right_eyebrow")
HAnimSegment550.name = "right_eyebrow"
HAnimDisplacer551 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer551.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer551.coordIndex = [0,1,3,4,5,6,7,8]
HAnimDisplacer551.displacements = [(0.5564, -0.5065, 0),(0, -0.094, 0),(0.5566, -0.5069, 0),(0.303, -0.395, 0),(0, -0.094, 0),(0.5562, -0.5066, 0),(0, -0.0941, 0),(0, -0.0942, 0)]

HAnimSegment550.displacers.append(HAnimDisplacer551)
HAnimDisplacer552 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer552.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer552.coordIndex = [0,1,3,4,6,7]
HAnimDisplacer552.displacements = [(0, 0.3842, 0),(0, 0.136, 0),(0, 0.384, 0),(0, 0.3843, 0),(0, 0.3842, 0),(0, 0.1354, 0)]

HAnimSegment550.displacers.append(HAnimDisplacer552)
HAnimDisplacer553 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer553.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer553.coordIndex = [1,5,7,8]
HAnimDisplacer553.displacements = [(0, 0.655, 0),(0, 0.268, 0),(0, 0.6547, 0),(0, 0.2686, 0)]

HAnimSegment550.displacers.append(HAnimDisplacer553)
HAnimDisplacer554 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinSquint")
HAnimDisplacer554.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer554.coordIndex = [7,8]
HAnimDisplacer554.displacements = [(0, -0.4631, 0),(0, -0.4632, 0)]

HAnimSegment550.displacers.append(HAnimDisplacer554)
HAnimDisplacer555 = x3d.HAnimDisplacer(DEF="Right_eyebrow_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer555.name = "right_eyebrow_morphinterpolator"
HAnimDisplacer555.coordIndex = [6]
HAnimDisplacer555.displacements = [(0, 0.4975, 0)]

HAnimSegment550.displacers.append(HAnimDisplacer555)
Coordinate556 = x3d.Coordinate(DEF="Right_eyebrow_COORD_JinBlink")
Coordinate556.point = [(0.6206, 0.2925, 1.523),(-2.547, 1.129, -0.8682),(4.175, 0.9255, 2.806),(0.6464, 1.103, 1.5),(4.104, -1.337, 2.665),(-4.175, 1.337, -2.599),(0.6118, -0.2218, 1.466),(-2.366, 0.3082, -0.9723),(-4.011, 0.3542, -2.806)]

HAnimSegment550.coord = Coordinate556
Transform557 = x3d.Transform(DEF="Right_eyebrow_JinBlink")
Transform557.translation = [-5.691,19.58,13.13]
Shape558 = x3d.Shape()
Appearance559 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape558.appearance = Appearance559
IndexedFaceSet560 = x3d.IndexedFaceSet(DEF="Right_eyebrow-FACES_JinBlink")
IndexedFaceSet560.solid = False
IndexedFaceSet560.creaseAngle = 3.14159
IndexedFaceSet560.texCoordIndex = [5,8,7,-1,7,1,5,-1,6,4,0,-1,7,6,0,-1,0,1,7,-1,2,3,0,-1,0,4,2,-1,3,1,0,-1]
IndexedFaceSet560.coordIndex = [5,8,7,-1,7,1,5,-1,6,4,0,-1,7,6,0,-1,0,1,7,-1,2,3,0,-1,0,4,2,-1,3,1,0,-1]
TextureCoordinate561 = x3d.TextureCoordinate(DEF="Right_eyebrow-TEXCOORD_JinBlink")
TextureCoordinate561.point = [(0.3395, 0.8606),(0.3992, 0.8783),(0.2728, 0.8741),(0.3391, 0.876),(0.274, 0.8322),(0.4299, 0.8825),(0.3402, 0.8534),(0.3979, 0.8641),(0.4266, 0.8643)]

IndexedFaceSet560.texCoord = TextureCoordinate561
Coordinate562 = x3d.Coordinate(USE="Right_eyebrow_COORD_JinBlink")

IndexedFaceSet560.coord = Coordinate562

Shape558.geometry = IndexedFaceSet560

Transform557.children.append(Shape558)

HAnimSegment550.children.append(Transform557)

HAnimJoint93.children.append(HAnimSegment550)
HAnimSegment563 = x3d.HAnimSegment(DEF="hanim_Right_forehead")
HAnimSegment563.name = "right_forehead"
HAnimDisplacer564 = x3d.HAnimDisplacer(DEF="Right_forehead_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer564.name = "right_forehead_morphinterpolator"
HAnimDisplacer564.coordIndex = [14,16,20]
HAnimDisplacer564.displacements = [(0, -0.094, 0),(0, -0.094, 0),(0.557, -0.506, 0)]

HAnimSegment563.displacers.append(HAnimDisplacer564)
HAnimDisplacer565 = x3d.HAnimDisplacer(DEF="Right_forehead_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer565.name = "right_forehead_morphinterpolator"
HAnimDisplacer565.coordIndex = [16,20]
HAnimDisplacer565.displacements = [(0, 0.135, 0),(0, 0.384, 0)]

HAnimSegment563.displacers.append(HAnimDisplacer565)
HAnimDisplacer566 = x3d.HAnimDisplacer(DEF="Right_forehead_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer566.name = "right_forehead_morphinterpolator"
HAnimDisplacer566.coordIndex = [14,16]
HAnimDisplacer566.displacements = [(0, 0.269, 0),(0, 0.654, 0)]

HAnimSegment563.displacers.append(HAnimDisplacer566)
Coordinate567 = x3d.Coordinate(DEF="Right_forehead_COORD_JinBlink")
Coordinate567.point = [(-2.366, -3.832, 2.607),(1.721, -3.37, 5.298),(0.9278, 3.698, 2.337),(-2.798, 0.5048, 1.078),(5.256, -3.235, 6.945),(-0.1169, 5.415, -1.676),(-3.513, 2.123, -2.845),(-0.04584, 5.238, -6.945),(-3.382, 0.4603, -6.945),(1.306, 1.607, 4.614),(4.278, 5.326, 2.844),(4.148, 6.951, -0.7431),(4.148, 7.108, -6.945),(4.686, 2.054, 6.111),(-3.214, -6.697, 1.298),(-4.876, -4.833, -1.108),(-1.586, -6.904, 3.028),(-5.256, -4.053, -3.68),(-4.869, -4.024, -6.945),(5.136, -7.108, 6.703),(1.607, -6.931, 5.397)]

HAnimSegment563.coord = Coordinate567
Transform568 = x3d.Transform(DEF="Right_forehead_JinBlink")
Transform568.translation = [-6.652,27.61,9.229]
Shape569 = x3d.Shape()
Appearance570 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape569.appearance = Appearance570
IndexedFaceSet571 = x3d.IndexedFaceSet(DEF="Right_forehead-FACES_JinBlink")
IndexedFaceSet571.solid = False
IndexedFaceSet571.creaseAngle = 3.14159
IndexedFaceSet571.texCoordIndex = [1,4,13,-1,13,9,1,-1,3,9,0,-1,3,15,2,-1,15,14,2,-1,2,14,16,-1,1,2,16,-1,16,20,1,-1,3,6,17,-1,17,15,3,-1,0,5,6,-1,6,3,0,-1,6,8,18,-1,18,17,6,-1,5,7,8,-1,8,6,5,-1,9,13,10,-1,10,0,9,-1,1,9,3,-1,3,2,1,-1,1,20,19,-1,19,4,1,-1,0,10,11,-1,11,5,0,-1,5,11,12,-1,12,7,5,-1]
IndexedFaceSet571.coordIndex = [1,4,13,-1,13,9,1,-1,3,9,2,-1,3,15,0,-1,15,14,0,-1,0,14,16,-1,1,0,16,-1,16,20,1,-1,3,6,17,-1,17,15,3,-1,2,5,6,-1,6,3,2,-1,6,8,18,-1,18,17,6,-1,5,7,8,-1,8,6,5,-1,9,13,10,-1,10,2,9,-1,1,9,3,-1,3,0,1,-1,1,20,19,-1,19,4,1,-1,2,10,11,-1,11,5,2,-1,5,11,12,-1,12,7,5,-1]
TextureCoordinate572 = x3d.TextureCoordinate(DEF="Right_forehead-TEXCOORD_JinBlink")
TextureCoordinate572.point = [(0.3563, 0.9819),(0.3371, 0.9436),(0.414, 0.9365),(0.428, 0.9618),(0.2706, 0.9459),(0.3807, 0.9869),(0.434, 0.9653),(0.3786, 0.9951),(0.4425, 0.9551),(0.3372, 0.9707),(0.3002, 0.9788),(0.3015, 0.9807),(0.3016, 0.9833),(0.2804, 0.9652),(0.4299, 0.8825),(0.4655, 0.9081),(0.3992, 0.8783),(0.4676, 0.8967),(0.465, 0.9097),(0.2728, 0.8741),(0.3391, 0.876)]

IndexedFaceSet571.texCoord = TextureCoordinate572
Coordinate573 = x3d.Coordinate(USE="Right_forehead_COORD_JinBlink")

IndexedFaceSet571.coord = Coordinate573

Shape569.geometry = IndexedFaceSet571

Transform568.children.append(Shape569)

HAnimSegment563.children.append(Transform568)

HAnimJoint93.children.append(HAnimSegment563)
HAnimSegment574 = x3d.HAnimSegment(DEF="hanim_Right_lower_eyelid")
HAnimSegment574.name = "right_lower_eyelid"
HAnimDisplacer575 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinBlink")
HAnimDisplacer575.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer575.coordIndex = [0,1,2,4]
HAnimDisplacer575.displacements = [(0, 0.1171, 0.1997),(0, 0.2271, 0.251),(0, 0.2126, 0.0762),(-0.165, 0.1045, 0)]

HAnimSegment574.displacers.append(HAnimDisplacer575)
HAnimDisplacer576 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer576.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer576.coordIndex = [5,6,7,8,9,14]
HAnimDisplacer576.displacements = [(0, 0.1005, 0.079),(0, 0.1344, -0.107),(-0.299, 0.3808, -0.1835),(0, 0.268, 0.0997),(0, 0.2684, 0),(0, 0.067, -0.082)]

HAnimSegment574.displacers.append(HAnimDisplacer576)
HAnimDisplacer577 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinEyesClosed")
HAnimDisplacer577.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer577.coordIndex = [0,1,2,4]
HAnimDisplacer577.displacements = [(0, 0.1171, 0.1997),(0, 0.2271, 0.251),(0, 0.2126, 0.0762),(-0.165, 0.1045, 0)]

HAnimSegment574.displacers.append(HAnimDisplacer577)
HAnimDisplacer578 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinLidDroop")
HAnimDisplacer578.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer578.coordIndex = [11]
HAnimDisplacer578.displacements = [(0, -0.349, 0)]

HAnimSegment574.displacers.append(HAnimDisplacer578)
HAnimDisplacer579 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinLidTightener")
HAnimDisplacer579.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer579.coordIndex = [0,1,2,3,4,10]
HAnimDisplacer579.displacements = [(0, 0.3018, 0),(0, 0.1101, 0),(0.123, 0.2262, 0),(0, 0.3018, 0),(0, 0.1513, 0),(0, 0.1512, 0)]

HAnimSegment574.displacers.append(HAnimDisplacer579)
HAnimDisplacer580 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinSquint")
HAnimDisplacer580.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer580.coordIndex = [0,1,2,3,4,10,11,12]
HAnimDisplacer580.displacements = [(0, 0.6387, 0.7019),(0, 0.3839, 0.263),(0, 0.499, 0.4721),(0, 0.7235, 0.3988),(0, 0.6387, 0.398),(0, 0.6386, 0.399),(0, -0.078, 0),(0, -0.078, 0)]

HAnimSegment574.displacers.append(HAnimDisplacer580)
HAnimDisplacer581 = x3d.HAnimDisplacer(DEF="Right_lower_eyelid_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer581.name = "right_lower_eyelid_morphinterpolator"
HAnimDisplacer581.coordIndex = [13]
HAnimDisplacer581.displacements = [(0, 0.4976, 0)]

HAnimSegment574.displacers.append(HAnimDisplacer581)
Coordinate582 = x3d.Coordinate(DEF="Right_lower_eyelid_COORD_JinBlink")
Coordinate582.point = [(-1.719, -0.0007954, -0.6346),(2.666, 0.1549, 1.996),(-2.315, 0.3494, -0.8744),(-0.989, -0.2676, 0.1056),(1.449, -0.2205, 1.411),(-3.651, -0.24, -2.494),(3.04, -0.8628, 1.994),(-2.113, -1.162, -0.9625),(-0.5806, -1.427, 0.2034),(1.577, -1.266, 1.24),(0.7878, -0.2335, 1.055),(-3.25, 1.427, -1.433),(-3.946, 1.094, -2.536),(3.174, 0.6164, 2.536),(3.946, -0.4586, 2.476)]

HAnimSegment574.coord = Coordinate582
Transform583 = x3d.Transform(DEF="Right_lower_eyelid_JinBlink")
Transform583.translation = [-6.11,16.45,11.32]
Shape584 = x3d.Shape()
Appearance585 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape584.appearance = Appearance585
IndexedFaceSet586 = x3d.IndexedFaceSet(DEF="Right_lower_eyelid-FACES_JinBlink")
IndexedFaceSet586.solid = False
IndexedFaceSet586.creaseAngle = 3.14159
IndexedFaceSet586.texCoordIndex = [8,9,10,-1,10,0,8,-1,0,2,7,-1,7,8,0,-1,13,3,6,-1,6,14,13,-1,2,4,5,-1,5,7,2,-1,11,12,5,-1,5,4,11,-1,1,9,6,-1,6,3,1,-1,10,9,1,-1]
IndexedFaceSet586.coordIndex = [8,9,10,-1,10,3,8,-1,3,0,7,-1,7,8,3,-1,13,1,6,-1,6,14,13,-1,0,2,5,-1,5,7,0,-1,11,12,5,-1,5,2,11,-1,4,9,6,-1,6,1,4,-1,10,9,4,-1]
TextureCoordinate587 = x3d.TextureCoordinate(DEF="Right_lower_eyelid-TEXCOORD_JinBlink")
TextureCoordinate587.point = [(0.3777, 0.7936),(0.3315, 0.7948),(0.3916, 0.7984),(0.309, 0.8013),(0.4011, 0.8053),(0.4279, 0.7939),(0.301, 0.7815),(0.3993, 0.7753),(0.3692, 0.7714),(0.3287, 0.7742),(0.344, 0.7945),(0.4198, 0.8261),(0.4335, 0.819),(0.2981, 0.8094),(0.2845, 0.7889)]

IndexedFaceSet586.texCoord = TextureCoordinate587
Coordinate588 = x3d.Coordinate(USE="Right_lower_eyelid_COORD_JinBlink")

IndexedFaceSet586.coord = Coordinate588

Shape584.geometry = IndexedFaceSet586

Transform583.children.append(Shape584)

HAnimSegment574.children.append(Transform583)

HAnimJoint93.children.append(HAnimSegment574)
HAnimSegment589 = x3d.HAnimSegment(DEF="hanim_Right_lower_vermillion_lip")
HAnimSegment589.name = "right_lower_vermillion_lip"
HAnimDisplacer590 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer590.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer590.coordIndex = [0,1,2]
HAnimDisplacer590.displacements = [(0, 0.3821, 0.435),(-0.591, 1.323, 0.1066),(0, 0.7896, 0.4659)]

HAnimSegment589.displacers.append(HAnimDisplacer590)
HAnimDisplacer591 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer591.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer591.coordIndex = [0,1,2]
HAnimDisplacer591.displacements = [(0, 0.187, 0),(0, -0.1372, 0),(0, 0.6497, 0.364)]

HAnimSegment589.displacers.append(HAnimDisplacer591)
HAnimDisplacer592 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer592.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer592.coordIndex = [0,1,2]
HAnimDisplacer592.displacements = [(0, -0.0896, 0.533),(-0.379, 0.396, 0.1527),(0, 0.6332, 0.8798)]

HAnimSegment589.displacers.append(HAnimDisplacer592)
HAnimDisplacer593 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinJawDrop")
HAnimDisplacer593.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer593.coordIndex = [0,2]
HAnimDisplacer593.displacements = [(0, -0.6156, 0),(0, -0.6154, 0)]

HAnimSegment589.displacers.append(HAnimDisplacer593)
HAnimDisplacer594 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer594.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer594.coordIndex = [0,1,2]
HAnimDisplacer594.displacements = [(0, -0.0368, 0.837),(-0.197, -0.7014, 0.0777),(0, 0.5213, 1.2488)]

HAnimSegment589.displacers.append(HAnimDisplacer594)
HAnimDisplacer595 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer595.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer595.coordIndex = [2]
HAnimDisplacer595.displacements = [(-1.176, 0.13, -0.375)]

HAnimSegment589.displacers.append(HAnimDisplacer595)
HAnimDisplacer596 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer596.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer596.coordIndex = [0,1,2]
HAnimDisplacer596.displacements = [(-0.2642, -0.7179, 0.823),(0.8355, 0, 1.0637),(0.101, -0.5994, 0.7018)]

HAnimSegment589.displacers.append(HAnimDisplacer596)
HAnimDisplacer597 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipPressor")
HAnimDisplacer597.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer597.coordIndex = [0,2]
HAnimDisplacer597.displacements = [(0, -0.3795, 0.1337),(0, -0.21, 0)]

HAnimSegment589.displacers.append(HAnimDisplacer597)
HAnimDisplacer598 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer598.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer598.coordIndex = [0,1,2]
HAnimDisplacer598.displacements = [(0, -0.3959, 0.859),(0.9097, 0, 0.4597),(0, -0.2497, 0.9748)]

HAnimSegment589.displacers.append(HAnimDisplacer598)
HAnimDisplacer599 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipStretcher")
HAnimDisplacer599.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer599.coordIndex = [1]
HAnimDisplacer599.displacements = [(-0.973, 0.0092, 0.0257)]

HAnimSegment589.displacers.append(HAnimDisplacer599)
HAnimDisplacer600 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer600.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer600.coordIndex = [0,1,2]
HAnimDisplacer600.displacements = [(0, -0.0594, 0.1828),(-0.125, 0, 0),(0, 0.633, 0.3625)]

HAnimSegment589.displacers.append(HAnimDisplacer600)
HAnimDisplacer601 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer601.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer601.coordIndex = [0,1,2]
HAnimDisplacer601.displacements = [(0.042, -0.058, 1.082),(0.5211, 0.1705, 1.038),(-0.1612, 0.0641, 0.9158)]

HAnimSegment589.displacers.append(HAnimDisplacer601)
HAnimDisplacer602 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor")
HAnimDisplacer602.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer602.coordIndex = [0,2]
HAnimDisplacer602.displacements = [(0, -0.5685, 0),(0, -0.5684, 0)]

HAnimSegment589.displacers.append(HAnimDisplacer602)
HAnimDisplacer603 = x3d.HAnimDisplacer(DEF="Right_lower_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer603.name = "right_lower_vermillion_lip_morphinterpolator"
HAnimDisplacer603.coordIndex = [0,1,2]
HAnimDisplacer603.displacements = [(-0.176, -2.4736, 0.049),(0, -0.7362, 0),(-0.1963, -2.4594, 0.002)]

HAnimSegment589.displacers.append(HAnimDisplacer603)
Coordinate604 = x3d.Coordinate(DEF="Right_lower_vermillion_lip_COORD_JinBlink")
Coordinate604.point = [(1.218, 0.4506, 0.603),(-1.218, 0.219, -0.603),(1.154, -0.4506, 0.3592)]

HAnimSegment589.coord = Coordinate604
Transform605 = x3d.Transform(DEF="Right_lower_vermillion_lip_JinBlink")
Transform605.translation = [-1.788,8.405,13.04]
Shape606 = x3d.Shape()
Appearance607 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape606.appearance = Appearance607
IndexedFaceSet608 = x3d.IndexedFaceSet(DEF="Right_lower_vermillion_lip-FACES_JinBlink")
IndexedFaceSet608.solid = False
IndexedFaceSet608.creaseAngle = 3.14159
IndexedFaceSet608.texCoordIndex = [2,0,1,-1]
IndexedFaceSet608.coordIndex = [2,0,1,-1]
TextureCoordinate609 = x3d.TextureCoordinate(DEF="Right_lower_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate609.point = [(0.2548, 0.6554),(0.3007, 0.651),(0.2652, 0.6384)]

IndexedFaceSet608.texCoord = TextureCoordinate609
Coordinate610 = x3d.Coordinate(USE="Right_lower_vermillion_lip_COORD_JinBlink")

IndexedFaceSet608.coord = Coordinate610

Shape606.geometry = IndexedFaceSet608

Transform605.children.append(Shape606)

HAnimSegment589.children.append(Transform605)

HAnimJoint93.children.append(HAnimSegment589)
HAnimSegment611 = x3d.HAnimSegment(DEF="hanim_Right_nasolabial_cheek")
HAnimSegment611.name = "right_nasolabial_cheek"
HAnimDisplacer612 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer612.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer612.coordIndex = [0,1,2,3,4,5]
HAnimDisplacer612.displacements = [(0, 0.838, 0),(0, 0.5164, 0),(-0.5908, 1.3226, 0.1063),(0, 0.838, 0),(0, 0.838, 0),(0, 0.8376, 0)]

HAnimSegment611.displacers.append(HAnimDisplacer612)
HAnimDisplacer613 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinChinRaiser")
HAnimDisplacer613.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer613.coordIndex = [1,2]
HAnimDisplacer613.displacements = [(0, 0.0967, 0),(0, -0.137, 0)]

HAnimSegment611.displacers.append(HAnimDisplacer613)
HAnimDisplacer614 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinDimpler")
HAnimDisplacer614.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer614.coordIndex = [1,2]
HAnimDisplacer614.displacements = [(0, -0.069, 0.044),(-0.3788, 0.396, 0.1524)]

HAnimSegment611.displacers.append(HAnimDisplacer614)
HAnimDisplacer615 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer615.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer615.coordIndex = [1,2]
HAnimDisplacer615.displacements = [(0, -0.0221, 0.125),(-0.1968, -0.701, 0.077)]

HAnimSegment611.displacers.append(HAnimDisplacer615)
HAnimDisplacer616 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer616.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer616.coordIndex = [5]
HAnimDisplacer616.displacements = [(-1.176, 0.13, -0.375)]

HAnimSegment611.displacers.append(HAnimDisplacer616)
HAnimDisplacer617 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipFunneler")
HAnimDisplacer617.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer617.coordIndex = [1,2,5]
HAnimDisplacer617.displacements = [(0.1338, 0.1022, 0.551),(0.8357, 0, 1.0634),(0, 0, 0.1091)]

HAnimSegment611.displacers.append(HAnimDisplacer617)
HAnimDisplacer618 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer618.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer618.coordIndex = [1,2]
HAnimDisplacer618.displacements = [(0.0618, 0, 0.566),(0.9099, 0, 0.4594)]

HAnimSegment611.displacers.append(HAnimDisplacer618)
HAnimDisplacer619 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipStretcher")
HAnimDisplacer619.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer619.coordIndex = [2]
HAnimDisplacer619.displacements = [(-0.9728, 0.009, 0.025)]

HAnimSegment611.displacers.append(HAnimDisplacer619)
HAnimDisplacer620 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipSuck")
HAnimDisplacer620.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer620.coordIndex = [1,2]
HAnimDisplacer620.displacements = [(0, -0.52, -0.655),(-0.1248, 0, 0)]

HAnimSegment611.displacers.append(HAnimDisplacer620)
HAnimDisplacer621 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinLipTightener")
HAnimDisplacer621.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer621.coordIndex = [1,2]
HAnimDisplacer621.displacements = [(0.0758, -0.0332, 0.261),(0.5214, 0.171, 1.0377)]

HAnimSegment611.displacers.append(HAnimDisplacer621)
HAnimDisplacer622 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinMouthStretch")
HAnimDisplacer622.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer622.coordIndex = [1,2]
HAnimDisplacer622.displacements = [(0, 0.2684, 0),(0, -0.736, 0)]

HAnimSegment611.displacers.append(HAnimDisplacer622)
HAnimDisplacer623 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer623.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer623.coordIndex = [0,3,4,5]
HAnimDisplacer623.displacements = [(0, 0.376, 0),(0.0781, 0.552, 0),(0, 0.376, 0),(0, 0.4706, 0)]

HAnimSegment611.displacers.append(HAnimDisplacer623)
HAnimDisplacer624 = x3d.HAnimDisplacer(DEF="Right_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer624.name = "right_nasolabial_cheek_morphinterpolator"
HAnimDisplacer624.coordIndex = [0,1,3,4,5]
HAnimDisplacer624.displacements = [(0, 0.502, 0),(0, 0.5016, 0),(0, 0.294, 0),(0, 0.294, 0),(0, 0.5016, 0)]

HAnimSegment611.displacers.append(HAnimDisplacer624)
Coordinate625 = x3d.Coordinate(DEF="Right_nasolabial_cheek_COORD_JinBlink")
Coordinate625.point = [(0.8548, 0.741, 0.5666),(0.9852, -0.962, 1.035),(-0.9852, -1.648, -1.094),(0.5035, 1.438, 0.4388),(0.9626, 1.648, 1.094),(0.1761, 0.6814, 0.2329)]

HAnimSegment611.coord = Coordinate625
Transform626 = x3d.Transform(DEF="Right_nasolabial_cheek_JinBlink")
Transform626.translation = [-2.021,10.27,13.53]
Shape627 = x3d.Shape()
Appearance628 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape627.appearance = Appearance628
IndexedFaceSet629 = x3d.IndexedFaceSet(DEF="Right_nasolabial_cheek-FACES_JinBlink")
IndexedFaceSet629.solid = False
IndexedFaceSet629.creaseAngle = 3.14159
IndexedFaceSet629.texCoordIndex = [0,4,3,-1,3,5,0,-1,5,2,1,-1,1,0,5,-1]
IndexedFaceSet629.coordIndex = [0,4,3,-1,3,5,0,-1,5,2,1,-1,1,0,5,-1]
TextureCoordinate630 = x3d.TextureCoordinate(DEF="Right_nasolabial_cheek-TEXCOORD_JinBlink")
TextureCoordinate630.point = [(0.2661, 0.696),(0.2636, 0.664),(0.3007, 0.651),(0.2727, 0.7092),(0.2641, 0.7133),(0.2788, 0.6949)]

IndexedFaceSet629.texCoord = TextureCoordinate630
Coordinate631 = x3d.Coordinate(USE="Right_nasolabial_cheek_COORD_JinBlink")

IndexedFaceSet629.coord = Coordinate631

Shape627.geometry = IndexedFaceSet629

Transform626.children.append(Shape627)

HAnimSegment611.children.append(Transform626)

HAnimJoint93.children.append(HAnimSegment611)
HAnimSegment632 = x3d.HAnimSegment(DEF="hanim_Right_nostril")
HAnimSegment632.name = "right_nostril"
HAnimDisplacer633 = x3d.HAnimDisplacer(DEF="Right_nostril_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer633.name = "right_nostril_morphinterpolator"
HAnimDisplacer633.coordIndex = [2,4]
HAnimDisplacer633.displacements = [(0, 0.838, 0),(0, 0.8382, 0)]

HAnimSegment632.displacers.append(HAnimDisplacer633)
HAnimDisplacer634 = x3d.HAnimDisplacer(DEF="Right_nostril_MorphInterpolator_JinNasolabialDeepener")
HAnimDisplacer634.name = "right_nostril_morphinterpolator"
HAnimDisplacer634.coordIndex = [0]
HAnimDisplacer634.displacements = [(-0.3849, 0, 0)]

HAnimSegment632.displacers.append(HAnimDisplacer634)
HAnimDisplacer635 = x3d.HAnimDisplacer(DEF="Right_nostril_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer635.name = "right_nostril_morphinterpolator"
HAnimDisplacer635.coordIndex = [2,4]
HAnimDisplacer635.displacements = [(0, 0.3759, 0),(0, 0.3762, 0)]

HAnimSegment632.displacers.append(HAnimDisplacer635)
HAnimDisplacer636 = x3d.HAnimDisplacer(DEF="Right_nostril_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer636.name = "right_nostril_morphinterpolator"
HAnimDisplacer636.coordIndex = [2,4]
HAnimDisplacer636.displacements = [(0, 0.5016, 0),(0, 0.2937, 0)]

HAnimSegment632.displacers.append(HAnimDisplacer636)
Coordinate637 = x3d.Coordinate(DEF="Right_nostril_COORD_JinBlink")
Coordinate637.point = [(0.2923, 0.2585, 0.9483),(0.398, -0.9732, 0.1131),(-0.398, -0.209, -0.9483),(0.3119, 0.9732, 0.439),(-0.2902, 0.6978, -0.4206)]

HAnimSegment632.coord = Coordinate637
Transform638 = x3d.Transform(DEF="Right_nostril_JinBlink")
Transform638.translation = [-0.7684,11.22,15.04]
Shape639 = x3d.Shape()
Appearance640 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape639.appearance = Appearance640
IndexedFaceSet641 = x3d.IndexedFaceSet(DEF="Right_nostril-FACES_JinBlink")
IndexedFaceSet641.solid = False
IndexedFaceSet641.creaseAngle = 3.14159
IndexedFaceSet641.texCoordIndex = [0,3,2,-1,1,0,2,-1,4,2,3,-1]
IndexedFaceSet641.coordIndex = [0,3,2,-1,1,0,2,-1,4,2,3,-1]
TextureCoordinate642 = x3d.TextureCoordinate(DEF="Right_nostril-TEXCOORD_JinBlink")
TextureCoordinate642.point = [(0.2538, 0.7051),(0.2511, 0.6816),(0.2661, 0.696),(0.2528, 0.7186),(0.2641, 0.7133)]

IndexedFaceSet641.texCoord = TextureCoordinate642
Coordinate643 = x3d.Coordinate(USE="Right_nostril_COORD_JinBlink")

IndexedFaceSet641.coord = Coordinate643

Shape639.geometry = IndexedFaceSet641

Transform638.children.append(Shape639)

HAnimSegment632.children.append(Transform638)

HAnimJoint93.children.append(HAnimSegment632)
HAnimSegment644 = x3d.HAnimSegment(DEF="hanim_Right_pupil")
HAnimSegment644.name = "right_pupil"
HAnimDisplacer645 = x3d.HAnimDisplacer(DEF="Right_pupil_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer645.name = "right_pupil_morphinterpolator"
HAnimDisplacer645.coordIndex = [6,7]
HAnimDisplacer645.displacements = [(0, -0.0591, 0),(0, -0.059, 0)]

HAnimSegment644.displacers.append(HAnimDisplacer645)
HAnimDisplacer646 = x3d.HAnimDisplacer(DEF="Right_pupil_MorphInterpolator_JinLidTightener")
HAnimDisplacer646.name = "right_pupil_morphinterpolator"
HAnimDisplacer646.coordIndex = [6,7,8,9,12]
HAnimDisplacer646.displacements = [(0, -0.3349, 0),(0, -0.3344, 0),(0, -0.3345, 0),(0, 0.301, 0),(0, 0.151, 0)]

HAnimSegment644.displacers.append(HAnimDisplacer646)
HAnimDisplacer647 = x3d.HAnimDisplacer(DEF="Right_pupil_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer647.name = "right_pupil_morphinterpolator"
HAnimDisplacer647.coordIndex = [6,7,8]
HAnimDisplacer647.displacements = [(0, 0.4971, 0),(0, 0.498, 0),(0, 0.498, 0)]

HAnimSegment644.displacers.append(HAnimDisplacer647)
Coordinate648 = x3d.Coordinate(DEF="Right_pupil_COORD_JinBlink")
Coordinate648.point = [(0.4761, 0.63, 0.6933),(-0.8417, -0.7176, -0.6485),(0.4665, -0.8077, 0.1079),(-0.8447, 0.7457, -0.2465),(1.612, 0.3169, 1.289),(-1.518, 0.7946, -0.736),(1.517, 0.8129, 1.347),(0.5339, 1.273, 1.112),(-1.311, 1.316, -0.204),(-1.04, -1.316, -0.9056),(-1.612, -0.6212, -1.347),(1.373, -0.8544, 0.5399),(0.7368, -1.282, 0.04415)]

HAnimSegment644.coord = Coordinate648
Transform649 = x3d.Transform(DEF="Right_pupil_JinBlink")
Transform649.translation = [-6.059,17.5,12.33]
Shape650 = x3d.Shape()
Appearance651 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape650.appearance = Appearance651
IndexedFaceSet652 = x3d.IndexedFaceSet(DEF="Right_pupil-FACES_JinBlink")
IndexedFaceSet652.solid = False
IndexedFaceSet652.creaseAngle = 3.14159
IndexedFaceSet652.texCoordIndex = [4,6,7,-1,7,0,4,-1,7,8,3,-1,3,0,7,-1,12,2,1,-1,1,9,12,-1,10,9,1,-1,5,10,1,-1,1,3,5,-1,0,2,11,-1,11,4,0,-1,2,12,11,-1,3,8,5,-1,0,3,1,-1,1,2,0,-1]
IndexedFaceSet652.coordIndex = [4,6,7,-1,7,0,4,-1,7,8,3,-1,3,0,7,-1,12,2,1,-1,1,9,12,-1,10,9,1,-1,5,10,1,-1,1,3,5,-1,0,2,11,-1,11,4,0,-1,2,12,11,-1,3,8,5,-1,0,3,1,-1,1,2,0,-1]
TextureCoordinate653 = x3d.TextureCoordinate(DEF="Right_pupil-TEXCOORD_JinBlink")
TextureCoordinate653.point = [(0.3496, 0.8297),(0.3746, 0.8042),(0.3491, 0.8029),(0.3744, 0.8314),(0.328, 0.824),(0.3871, 0.8321),(0.3258, 0.833),(0.3487, 0.8409),(0.385, 0.8438),(0.3777, 0.7936),(0.3889, 0.8064),(0.3322, 0.8026),(0.3442, 0.7934)]

IndexedFaceSet652.texCoord = TextureCoordinate653
Coordinate654 = x3d.Coordinate(USE="Right_pupil_COORD_JinBlink")

IndexedFaceSet652.coord = Coordinate654

Shape650.geometry = IndexedFaceSet652

Transform649.children.append(Shape650)

HAnimSegment644.children.append(Transform649)

HAnimJoint93.children.append(HAnimSegment644)
HAnimSegment655 = x3d.HAnimSegment(DEF="hanim_Right_temple")
HAnimSegment655.name = "right_temple"
HAnimDisplacer656 = x3d.HAnimDisplacer(DEF="Right_temple_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer656.name = "right_temple_morphinterpolator"
HAnimDisplacer656.coordIndex = [1,8]
HAnimDisplacer656.displacements = [(0, -0.0942, 0),(0, -0.0941, 0)]

HAnimSegment655.displacers.append(HAnimDisplacer656)
HAnimDisplacer657 = x3d.HAnimDisplacer(DEF="Right_temple_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer657.name = "right_temple_morphinterpolator"
HAnimDisplacer657.coordIndex = [1,8]
HAnimDisplacer657.displacements = [(0, 0.2686, 0),(0, 0.2687, 0)]

HAnimSegment655.displacers.append(HAnimDisplacer657)
HAnimDisplacer658 = x3d.HAnimDisplacer(DEF="Right_temple_MorphInterpolator_JinSquint")
HAnimDisplacer658.name = "right_temple_morphinterpolator"
HAnimDisplacer658.coordIndex = [8,11]
HAnimDisplacer658.displacements = [(-0.003, -0.4639, 0.004),(0, -0.075, 0)]

HAnimSegment655.displacers.append(HAnimDisplacer658)
Coordinate659 = x3d.Coordinate(DEF="Right_temple_COORD_JinBlink")
Coordinate659.point = [(0.312, -0.6258, 2.224),(1.079, 0.3506, 4.121),(-0.5824, 2.214, 1.716),(-0.9631, 2.994, -0.8569),(-0.5756, 3.023, -4.121),(-0.3971, -0.687, 1.044),(-1.042, -0.4888, -3.649),(-1.005, -0.6065, -1.903),(1.243, -0.6321, 3.914),(-1.028, -2.588, -2.479),(-1.243, -2.002, -3.446),(0.8897, -3.023, 2.376),(-0.2546, -2.916, 0.5272)]

HAnimSegment655.coord = Coordinate659
Transform660 = x3d.Transform(DEF="Right_temple_JinBlink")
Transform660.translation = [-10.95,20.56,6.406]
Shape661 = x3d.Shape()
Appearance662 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape661.appearance = Appearance662
IndexedFaceSet663 = x3d.IndexedFaceSet(DEF="Right_temple-FACES_JinBlink")
IndexedFaceSet663.solid = False
IndexedFaceSet663.creaseAngle = 3.14159
IndexedFaceSet663.texCoordIndex = [0,4,5,-1,5,6,0,-1,1,7,15,-1,15,13,1,-1,1,10,2,-1,2,3,1,-1,3,7,1,-1,8,0,6,-1,6,9,8,-1,6,5,11,-1,11,12,6,-1,14,9,6,-1,6,12,14,-1]
IndexedFaceSet663.coordIndex = [9,12,5,-1,5,7,9,-1,0,5,12,-1,12,11,0,-1,0,8,1,-1,1,2,0,-1,2,5,0,-1,10,9,7,-1,7,6,10,-1,7,5,2,-1,2,3,7,-1,4,6,7,-1,7,3,4,-1]
TextureCoordinate664 = x3d.TextureCoordinate(DEF="Right_temple-TEXCOORD_JinBlink")
TextureCoordinate664.point = [(0.44, 0.6625),(0.4455, 0.863),(0.4299, 0.8825),(0.4655, 0.9081),(0.4547, 0.661),(0.4573, 0.671),(0.4428, 0.6714),(0.462, 0.8557),(0.4352, 0.6651),(0.4342, 0.6719),(0.4266, 0.8643),(0.4606, 0.684),(0.4479, 0.6875),(0.4335, 0.819),(0.4319, 0.6876),(0.4572, 0.8171)]

IndexedFaceSet663.texCoord = TextureCoordinate664
Coordinate665 = x3d.Coordinate(USE="Right_temple_COORD_JinBlink")

IndexedFaceSet663.coord = Coordinate665

Shape661.geometry = IndexedFaceSet663

Transform660.children.append(Shape661)

HAnimSegment655.children.append(Transform660)

HAnimJoint93.children.append(HAnimSegment655)
HAnimSegment666 = x3d.HAnimSegment(DEF="hanim_Right_upper_cutaneous_lip")
HAnimSegment666.name = "right_upper_cutaneous_lip"
HAnimDisplacer667 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer667.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer667.coordIndex = [0,1,3]
HAnimDisplacer667.displacements = [(0, 0.8385, 0),(0, 0.5164, 0),(0, 0.4847, 0)]

HAnimSegment666.displacers.append(HAnimDisplacer667)
HAnimDisplacer668 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer668.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer668.coordIndex = [1,3]
HAnimDisplacer668.displacements = [(0, 0.0967, 0),(0, 0.1405, 0)]

HAnimSegment666.displacers.append(HAnimDisplacer668)
HAnimDisplacer669 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer669.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer669.coordIndex = [1,3]
HAnimDisplacer669.displacements = [(0, -0.0689, 0.0447),(0, -0.0689, 0.0448)]

HAnimSegment666.displacers.append(HAnimDisplacer669)
HAnimDisplacer670 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer670.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer670.coordIndex = [1,3]
HAnimDisplacer670.displacements = [(0, -0.0221, 0.1251),(0, -0.0514, -0.0369)]

HAnimSegment666.displacers.append(HAnimDisplacer670)
HAnimDisplacer671 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer671.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer671.coordIndex = [1,3]
HAnimDisplacer671.displacements = [(0.1339, 0.1022, 0.5512),(0.0736, 0.1634, 0.5282)]

HAnimSegment666.displacers.append(HAnimDisplacer671)
HAnimDisplacer672 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer672.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer672.coordIndex = [1,3]
HAnimDisplacer672.displacements = [(0.0619, 0, 0.5662),(0.0155, 0, 0.5662)]

HAnimSegment666.displacers.append(HAnimDisplacer672)
HAnimDisplacer673 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer673.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer673.coordIndex = [1,3]
HAnimDisplacer673.displacements = [(0, -0.5205, -0.6547),(0, -0.5208, -0.6547)]

HAnimSegment666.displacers.append(HAnimDisplacer673)
HAnimDisplacer674 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer674.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer674.coordIndex = [1,3]
HAnimDisplacer674.displacements = [(0.0754, -0.0332, 0.2613),(0.0415, -0.0383, 0.241)]

HAnimSegment666.displacers.append(HAnimDisplacer674)
HAnimDisplacer675 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer675.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer675.coordIndex = [1,3]
HAnimDisplacer675.displacements = [(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment666.displacers.append(HAnimDisplacer675)
HAnimDisplacer676 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer676.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer676.coordIndex = [0]
HAnimDisplacer676.displacements = [(0, 0.3765, 0)]

HAnimSegment666.displacers.append(HAnimDisplacer676)
HAnimDisplacer677 = x3d.HAnimDisplacer(DEF="Right_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer677.name = "right_upper_cutaneous_lip_morphinterpolator"
HAnimDisplacer677.coordIndex = [0,1,3]
HAnimDisplacer677.displacements = [(0, 0.5015, 0),(0, 0.5016, 0),(0, 0.5016, 0)]

HAnimSegment666.displacers.append(HAnimDisplacer677)
Coordinate678 = x3d.Coordinate(DEF="Right_upper_cutaneous_lip_COORD_JinBlink")
Coordinate678.point = [(-0.398, 0.8515, -0.5307),(-0.2676, -0.8515, -0.06256),(0.398, 0.08738, 0.5307),(0.1985, -0.7812, 0.2164)]

HAnimSegment666.coord = Coordinate678
Transform679 = x3d.Transform(DEF="Right_upper_cutaneous_lip_JinBlink")
Transform679.translation = [-0.7684,10.16,14.63]
Shape680 = x3d.Shape()
Appearance681 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape680.appearance = Appearance681
IndexedFaceSet682 = x3d.IndexedFaceSet(DEF="Right_upper_cutaneous_lip-FACES_JinBlink")
IndexedFaceSet682.solid = False
IndexedFaceSet682.creaseAngle = 3.14159
IndexedFaceSet682.texCoordIndex = [2,0,1,-1,1,3,2,-1]
IndexedFaceSet682.coordIndex = [2,0,1,-1,1,3,2,-1]
TextureCoordinate683 = x3d.TextureCoordinate(DEF="Right_upper_cutaneous_lip-TEXCOORD_JinBlink")
TextureCoordinate683.point = [(0.2661, 0.696),(0.2636, 0.664),(0.2511, 0.6816),(0.2548, 0.6653)]

IndexedFaceSet682.texCoord = TextureCoordinate683
Coordinate684 = x3d.Coordinate(USE="Right_upper_cutaneous_lip_COORD_JinBlink")

IndexedFaceSet682.coord = Coordinate684

Shape680.geometry = IndexedFaceSet682

Transform679.children.append(Shape680)

HAnimSegment666.children.append(Transform679)

HAnimJoint93.children.append(HAnimSegment666)
HAnimSegment685 = x3d.HAnimSegment(DEF="hanim_Right_upper_eyelid")
HAnimSegment685.name = "right_upper_eyelid"
HAnimDisplacer686 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinBlink")
HAnimDisplacer686.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer686.coordIndex = [1,3,4]
HAnimDisplacer686.displacements = [(-0.2496, -2.0425, -0.987),(-1.6453, -2.567, -1.8279),(-0.478, -2.36, -1.1421)]

HAnimSegment685.displacers.append(HAnimDisplacer686)
HAnimDisplacer687 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinBrowLowerer")
HAnimDisplacer687.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer687.coordIndex = [0,1,2,3,6,10]
HAnimDisplacer687.displacements = [(0.303, -0.3949, 0),(0, -0.0592, 0),(0.5561, -0.5069, 0),(0, -0.0591, 0),(0, -0.094, 0),(0, -0.094, 0)]

HAnimSegment685.displacers.append(HAnimDisplacer687)
HAnimDisplacer688 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer688.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer688.coordIndex = [14]
HAnimDisplacer688.displacements = [(0, 0.067, -0.082)]

HAnimSegment685.displacers.append(HAnimDisplacer688)
HAnimDisplacer689 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinEyesClosed")
HAnimDisplacer689.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer689.coordIndex = [1,3,4]
HAnimDisplacer689.displacements = [(-0.2496, -2.0425, -0.987),(-1.6453, -2.567, -1.8279),(-0.478, -2.36, -1.1421)]

HAnimSegment685.displacers.append(HAnimDisplacer689)
HAnimDisplacer690 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser")
HAnimDisplacer690.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer690.coordIndex = [0,2,6]
HAnimDisplacer690.displacements = [(0, 0.3842, 0),(0, 0.384, 0),(0, 0.135, 0)]

HAnimSegment685.displacers.append(HAnimDisplacer690)
HAnimDisplacer691 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinLidDroop")
HAnimDisplacer691.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer691.coordIndex = [1,3,4,5]
HAnimDisplacer691.displacements = [(0, -0.7517, 0),(0, -1.0484, 0),(0, -1.0134, 0),(0, -0.3486, 0)]

HAnimSegment685.displacers.append(HAnimDisplacer691)
HAnimDisplacer692 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinLidTightener")
HAnimDisplacer692.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer692.coordIndex = [1,3,4]
HAnimDisplacer692.displacements = [(0, -0.3349, 0),(0, -0.3349, 0),(0, -0.3349, 0)]

HAnimSegment685.displacers.append(HAnimDisplacer692)
HAnimDisplacer693 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinOuterBrowRaiser")
HAnimDisplacer693.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer693.coordIndex = [6,10]
HAnimDisplacer693.displacements = [(0, 0.654, 0),(0, 0.268, 0)]

HAnimSegment685.displacers.append(HAnimDisplacer693)
HAnimDisplacer694 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinSlit")
HAnimDisplacer694.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer694.coordIndex = [1,3,4]
HAnimDisplacer694.displacements = [(0, -1.0868, 0),(0, -1.4762, 0),(0, -1.3055, 0)]

HAnimSegment685.displacers.append(HAnimDisplacer694)
HAnimDisplacer695 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinSquint")
HAnimDisplacer695.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer695.coordIndex = [1,3,4,5,6,10,12]
HAnimDisplacer695.displacements = [(0, -0.5962, 0),(0, -0.7726, -0.115),(0, -0.7324, 0),(0, -0.0775, 0),(0, -0.463, 0),(0.002, -0.464, 0),(0, -0.0776, 0)]

HAnimSegment685.displacers.append(HAnimDisplacer695)
HAnimDisplacer696 = x3d.HAnimDisplacer(DEF="Right_upper_eyelid_MorphInterpolator_JinUpperLidRaiser")
HAnimDisplacer696.name = "right_upper_eyelid_morphinterpolator"
HAnimDisplacer696.coordIndex = [1,2,3,4,13]
HAnimDisplacer696.displacements = [(0, 0.4975, 0),(0, 0.497, 0),(0, 0.498, 0),(0, 0.498, 0),(0, 0.4975, 0)]

HAnimSegment685.displacers.append(HAnimDisplacer696)
Coordinate697 = x3d.Coordinate(DEF="Right_upper_eyelid_COORD_JinBlink")
Coordinate697.point = [(3.944, 0.2777, 3.581),(0.9888, 0.3455, 1.465),(0.4509, 1.393, 2.381),(0.005327, 0.806, 1.231),(-1.84, 0.849, -0.08585),(-3.829, -0.08937, -2.326),(-2.527, 1.923, -0.05675),(4.303, -0.6947, 2.247),(-5.103, 1.975, -3.581),(5.103, -0.5987, 2.53),(-4.172, 1.969, -1.891),(4.353, -1.523, 2.057),(-4.525, -0.4223, -3.429),(2.594, -0.8999, 1.643),(3.366, -1.975, 1.583)]

HAnimSegment685.coord = Coordinate697
Transform698 = x3d.Transform(DEF="Right_upper_eyelid_JinBlink")
Transform698.translation = [-5.53,17.96,12.21]
Shape699 = x3d.Shape()
Appearance700 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape699.appearance = Appearance700
IndexedFaceSet701 = x3d.IndexedFaceSet(DEF="Right_upper_eyelid-FACES_JinBlink")
IndexedFaceSet701.solid = False
IndexedFaceSet701.creaseAngle = 3.14159
IndexedFaceSet701.texCoordIndex = [2,0,1,-1,4,3,5,-1,5,1,4,-1,5,2,1,-1,2,6,0,-1,6,9,0,-1,11,15,8,-1,8,13,11,-1,3,4,13,-1,13,8,3,-1,0,9,12,-1,10,14,12,-1,7,16,14,-1,14,10,7,-1]
IndexedFaceSet701.coordIndex = [1,0,2,-1,6,4,3,-1,3,2,6,-1,3,1,2,-1,1,13,0,-1,13,7,0,-1,8,12,5,-1,5,10,8,-1,4,6,10,-1,10,5,4,-1,0,7,9,-1,7,11,9,-1,13,14,11,-1,11,7,13,-1]
TextureCoordinate702 = x3d.TextureCoordinate(DEF="Right_upper_eyelid-TEXCOORD_JinBlink")
TextureCoordinate702.point = [(0.274, 0.8322),(0.3402, 0.8534),(0.3285, 0.8323),(0.3831, 0.8437),(0.3979, 0.8641),(0.3487, 0.8409),(0.2983, 0.8142),(0.2981, 0.8094),(0.4198, 0.8261),(0.2678, 0.8154),(0.2677, 0.8134),(0.4455, 0.863),(0.2534, 0.8152),(0.4266, 0.8643),(0.2671, 0.7978),(0.4335, 0.819),(0.2845, 0.7889)]

IndexedFaceSet701.texCoord = TextureCoordinate702
Coordinate703 = x3d.Coordinate(USE="Right_upper_eyelid_COORD_JinBlink")

IndexedFaceSet701.coord = Coordinate703

Shape699.geometry = IndexedFaceSet701

Transform698.children.append(Shape699)

HAnimSegment685.children.append(Transform698)

HAnimJoint93.children.append(HAnimSegment685)
HAnimSegment704 = x3d.HAnimSegment(DEF="hanim_Right_upper_vermillion_lip")
HAnimSegment704.name = "right_upper_vermillion_lip"
HAnimDisplacer705 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer")
HAnimDisplacer705.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer705.coordIndex = [0,1,2,3]
HAnimDisplacer705.displacements = [(-0.591, 1.3225, 0.107),(0, 0.5164, 0),(0, 0.4847, 0),(0, 0.4847, 0)]

HAnimSegment704.displacers.append(HAnimDisplacer705)
HAnimDisplacer706 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinChinRaiser")
HAnimDisplacer706.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer706.coordIndex = [0,1,2,3]
HAnimDisplacer706.displacements = [(0, -0.1372, 0),(0, 0.0967, 0),(0, 0.1405, 0),(0, 0.187, 0)]

HAnimSegment704.displacers.append(HAnimDisplacer706)
HAnimDisplacer707 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinDimpler")
HAnimDisplacer707.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer707.coordIndex = [0,1,2,3]
HAnimDisplacer707.displacements = [(-0.379, 0.3959, 0.153),(0, -0.0689, 0.0447),(0, -0.0688, 0.045),(0, -0.0435, 0.4553)]

HAnimSegment704.displacers.append(HAnimDisplacer707)
HAnimDisplacer708 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor")
HAnimDisplacer708.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer708.coordIndex = [0,1,2,3]
HAnimDisplacer708.displacements = [(-0.197, -0.7019, 0.078),(0, -0.0221, 0.125),(0, -0.0513, -0.037),(0, 0.0541, 0.5975)]

HAnimSegment704.displacers.append(HAnimDisplacer708)
HAnimDisplacer709 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipFunneler")
HAnimDisplacer709.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer709.coordIndex = [0,1,2,3]
HAnimDisplacer709.displacements = [(0.8355, 0, 1.0637),(0.134, 0.1022, 0.551),(0.074, 0.1634, 0.528),(0, 0.1237, 0.8775)]

HAnimSegment704.displacers.append(HAnimDisplacer709)
HAnimDisplacer710 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer710.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer710.coordIndex = [0,1,2,3]
HAnimDisplacer710.displacements = [(0.9097, 0, 0.4597),(0.0619, 0, 0.566),(0.016, 0, 0.566),(-0.041, 0, 0.366)]

HAnimSegment704.displacers.append(HAnimDisplacer710)
HAnimDisplacer711 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipStretcher")
HAnimDisplacer711.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer711.coordIndex = [0]
HAnimDisplacer711.displacements = [(-0.973, 0.0091, 0.026)]

HAnimSegment704.displacers.append(HAnimDisplacer711)
HAnimDisplacer712 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipSuck")
HAnimDisplacer712.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer712.coordIndex = [0,1,2,3]
HAnimDisplacer712.displacements = [(-0.125, 0, 0),(0, -0.5204, -0.6548),(0, -0.5204, -0.6547),(0, -0.135, -0.2471)]

HAnimSegment704.displacers.append(HAnimDisplacer712)
HAnimDisplacer713 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinLipTightener")
HAnimDisplacer713.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer713.coordIndex = [0,1,2,3]
HAnimDisplacer713.displacements = [(0.5211, 0.1704, 1.038),(0.0755, -0.0332, 0.261),(0.042, -0.0383, 0.241),(0.042, -0.0353, 0.6945)]

HAnimSegment704.displacers.append(HAnimDisplacer713)
HAnimDisplacer714 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinMouthStretch")
HAnimDisplacer714.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer714.coordIndex = [0,1,2,3]
HAnimDisplacer714.displacements = [(0, -0.7359, 0),(0, 0.2684, 0),(0, 0.2684, 0),(0, 0.2684, 0)]

HAnimSegment704.displacers.append(HAnimDisplacer714)
HAnimDisplacer715 = x3d.HAnimDisplacer(DEF="Right_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser")
HAnimDisplacer715.name = "right_upper_vermillion_lip_morphinterpolator"
HAnimDisplacer715.coordIndex = [1,2,3]
HAnimDisplacer715.displacements = [(0, 0.5016, 0),(0, 0.5017, 0),(0, 0.5017, 0)]

HAnimSegment704.displacers.append(HAnimDisplacer715)
Coordinate716 = x3d.Coordinate(DEF="Right_upper_vermillion_lip_COORD_JinBlink")
Coordinate716.point = [(-1.218, -0.3781, -1.204),(0.7521, 0.3078, 0.925),(1.218, 0.3781, 1.204),(1.218, -0.1506, 0.4455)]

HAnimSegment704.coord = Coordinate716
Transform717 = x3d.Transform(DEF="Right_upper_vermillion_lip_JinBlink")
Transform717.translation = [-1.788,9.002,13.64]
Shape718 = x3d.Shape()
Appearance719 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape718.appearance = Appearance719
IndexedFaceSet720 = x3d.IndexedFaceSet(DEF="Right_upper_vermillion_lip-FACES_JinBlink")
IndexedFaceSet720.solid = False
IndexedFaceSet720.creaseAngle = 3.14159
IndexedFaceSet720.texCoordIndex = [3,2,1,-1,1,0,3,-1]
IndexedFaceSet720.coordIndex = [3,2,1,-1,1,0,3,-1]
TextureCoordinate721 = x3d.TextureCoordinate(DEF="Right_upper_vermillion_lip-TEXCOORD_JinBlink")
TextureCoordinate721.point = [(0.3007, 0.651),(0.2636, 0.664),(0.2548, 0.6653),(0.2548, 0.6553)]

IndexedFaceSet720.texCoord = TextureCoordinate721
Coordinate722 = x3d.Coordinate(USE="Right_upper_vermillion_lip_COORD_JinBlink")

IndexedFaceSet720.coord = Coordinate722

Shape718.geometry = IndexedFaceSet720

Transform717.children.append(Shape718)

HAnimSegment704.children.append(Transform717)

HAnimJoint93.children.append(HAnimSegment704)
HAnimSegment723 = x3d.HAnimSegment(DEF="hanim_Tongue")
HAnimSegment723.name = "tongue"
HAnimDisplacer724 = x3d.HAnimDisplacer(DEF="Tongue_MorphInterpolator_JinChinRaiser")
HAnimDisplacer724.name = "tongue_morphinterpolator"
HAnimDisplacer724.coordIndex = [0,1,4,5,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,37,38,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,60,62,63,65,75,76,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116]
HAnimDisplacer724.displacements = [(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.112, 0),(0, 0.25, 0.1177),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.2501, 0.118),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.25, 0.1177),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.2501, 0.118),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1615, 0.118),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1614, 0.1175),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1799, 0),(0, 0.1267, 0),(0, 0.1457, 0),(0, 0.0572, 0),(0, 0.2501, 0.118),(0, 0.1865, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1404, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1614, 0.118),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1615, 0.118),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0572, 0),(0, 0.25, 0.118),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.25, 0.1177),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.25, 0.118),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1121, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0572, 0),(0, 0.25, 0.118),(0, 0.1865, 0)]

HAnimSegment723.displacers.append(HAnimDisplacer724)
HAnimDisplacer725 = x3d.HAnimDisplacer(DEF="Tongue_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer725.name = "tongue_morphinterpolator"
HAnimDisplacer725.coordIndex = [19,20,27,44,62,65,83,86,90,105]
HAnimDisplacer725.displacements = [(0, 0, 0.322),(0, 0, 0.0686),(-0.0413, 0, 0.436),(0, 0, 0.0688),(0, 0, 0.0686),(0, 0, 0.322),(0, 0, 0.0683),(0, 0, 0.0686),(0, 0, 0.322),(0, 0, 0.322)]

HAnimSegment723.displacers.append(HAnimDisplacer725)
HAnimDisplacer726 = x3d.HAnimDisplacer(DEF="Tongue_MorphInterpolator_JinMouthStretch")
HAnimDisplacer726.name = "tongue_morphinterpolator"
HAnimDisplacer726.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116]
HAnimDisplacer726.displacements = [(0, -1.3011, -0.5882),(0, -1.3011, -0.5882),(0, -0.1823, 0.11),(0, -0.1474, 0.036),(0, -1.3165, -0.5403),(0, -1.3165, -0.5403),(0, -0.1823, 0.11),(0, -0.1499, 0.048),(0, -1.154, -0.3156),(0, -1.154, -0.3156),(0, -1.0543, -0.2883),(0, -1.0543, -0.2883),(0, -1.4118, -0.614),(0, -1.4118, -0.614),(0, -1.4215, -0.5862),(0, -1.4215, -0.5862),(0, -0.1469, 0.033),(0, -1.303, -0.5972),(0, -1.3236, -0.5343),(0, -0.1504, 0.05),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.508, -0.6254),(0, -1.5299, -0.5751),(0, -0.1469, 0.033),(0, -1.303, -0.5972),(0, -1.3236, -0.5343),(0, -0.1504, 0.05),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.508, -0.6254),(0, -1.5299, -0.5751),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5196, -0.6002),(0, -1.2771, -0.4418),(0, -0.7623, -0.1091),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -0.7623, -0.1091),(0, -1.2771, -0.4418),(0, -1.3794, -0.6176),(0, -1.376, -0.5863),(0, -1.3976, -0.5635),(0, -1.376, -0.5863),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5196, -0.6002),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -1.3794, -0.6176),(0, -1.3976, -0.5635),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5585, -0.6173),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -1.3924, -0.6203),(0, -1.4093, -0.5685),(0, -1.1636, -0.4622),(0, -0.1469, 0.033),(0, -0.7506, -0.1415),(0, -1.3005, -0.5967),(0, -1.3216, -0.5334),(0, -1.2107, -0.3581),(0, -0.1504, 0.05),(0, -0.774, -0.0768),(0, -1.3082, -0.564),(0, -1.3082, -0.564),(0, -0.1487, 0.042),(0, -0.1823, 0.109),(0, -0.7506, -0.1415),(0, -1.1636, -0.4622),(0, -0.774, -0.0768),(0, -1.2107, -0.3581),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.0047, -0.2827),(0, -1.0047, -0.2827),(0, -1.4823, -0.6158),(0, -1.4248, -0.6028),(0, -1.5049, -0.5622),(0, -1.4248, -0.6028),(0, -1.3715, -0.6082),(0, -1.3715, -0.6082),(0, -1.3853, -0.5666),(0, -1.3853, -0.5666),(0, -0.1469, 0.033),(0, -1.3005, -0.5967),(0, -1.3216, -0.5334),(0, -0.1504, 0.05),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.4823, -0.6158),(0, -1.5049, -0.5622),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5488, -0.6128),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -1.3892, -0.62),(0, -1.4069, -0.5673),(0, -0.1469, 0.033),(0, -1.3038, -0.5974),(0, -1.325, -0.5347),(0, -0.1504, 0.05),(0, -1.1455, -0.3322),(0, -1.0581, -0.2783),(0, -1.5163, -0.6283),(0, -1.5379, -0.5794),(0, -1.1594, -0.4717),(0, -1.2139, -0.3495),(0, -1.5488, -0.6128),(0, -0.7467, -0.1522),(0, -0.7779, -0.0661),(0, -1.3892, -0.62),(0, -1.4069, -0.5673)]

HAnimSegment723.displacers.append(HAnimDisplacer726)
Coordinate727 = x3d.Coordinate(DEF="Tongue_COORD_JinBlink")
Coordinate727.point = [(-1.331, -0.2299, 0.7138),(1.331, -0.2299, 0.7138),(-1.563, 0.07305, -1.268),(1.563, 0.07305, -1.268),(-1.331, -0.07451, 0.7385),(1.331, -0.07451, 0.7385),(-1.563, 0.2531, -1.239),(1.563, 0.2531, -1.239),(-1.536, -0.127, -0.00304),(1.536, -0.127, -0.00304),(1.536, 0.05032, 0.0252),(-1.536, 0.05032, 0.0252),(-1.015, -0.2542, 1.071),(1.015, -0.2542, 1.071),(1.015, -0.1625, 1.086),(-1.015, -0.1625, 1.086),(0.5645, 0.04305, -1.272),(-0.5313, -0.257, 0.7253),(-0.5313, -0.05236, 0.7579),(-0.5645, 0.2831, -1.234),(-0.5607, -0.1565, -0.007746),(0.5607, 0.07987, 0.02991),(-0.4876, -0.283, 1.2),(0.4876, -0.1751, 1.217),(-0.5645, 0.04305, -1.272),(0.5313, -0.257, 0.7253),(0.5313, -0.05236, 0.7579),(0.5645, 0.2831, -1.234),(0.5607, -0.1565, -0.007746),(-0.5607, 0.07987, 0.02991),(0.4876, -0.283, 1.2),(-0.4876, -0.1751, 1.217),(-1.073, -0.2176, 0.4108),(-1.073, 0.007936, 0.4467),(-0.7997, -0.2294, 1.21),(1.585, -0.1049, 0.4287),(-1.706, 0.05553, -0.5782),(-1.134, -0.06447, -0.5973),(1.134, 0.1755, -0.559),(1.706, 0.05553, -0.5782),(-1.585, -0.1049, 0.4287),(-0.9063, -0.2816, 0.9715),(1.251, -0.187, 0.9442),(0.9063, -0.1054, 0.9996),(-1.251, -0.187, 0.9442),(1.073, -0.2176, 0.4108),(1.073, 0.007936, 0.4467),(0.7997, -0.2294, 1.21),(1.134, -0.06447, -0.5973),(-1.134, 0.1755, -0.559),(0.9063, -0.2816, 0.9715),(-0.9063, -0.1054, 0.9996),(0, -0.2176, 0.4108),(0, 0.007936, 0.4467),(0, -0.2425, 1.293),(0, -0.06447, -0.5973),(0, 0.1755, -0.559),(0, -0.2846, 1.013),(0, -0.1157, 1.04),(-1.457, -0.1894, 0.4153),(-1.134, 0.04305, -1.272),(1.563, -0.03447, -0.5925),(-1.001, -0.2565, 0.7175),(1.001, -0.05045, 0.7503),(1.457, -0.02026, 0.4422),(1.134, 0.2831, -1.234),(-1.563, 0.1455, -0.5638),(1.441, -0.1518, 0.7236),(-1.441, -0.1518, 0.7236),(1.706, 0.1631, -1.253),(-1.706, 0.1631, -1.253),(-1.563, -0.03447, -0.5925),(1.457, -0.1894, 0.4153),(1.563, 0.1455, -0.5638),(-1.457, -0.02026, 0.4422),(-1.119, -0.1565, -0.007746),(1.119, 0.07987, 0.02991),(1.676, -0.03833, 0.01108),(-1.676, -0.03833, 0.01108),(-0.8264, -0.2777, 1.145),(1.031, -0.2122, 1.103),(0.8264, -0.1631, 1.163),(-1.031, -0.2122, 1.103),(-1.165, -0.2565, 0.9437),(1.165, -0.2565, 0.9437),(1.165, -0.1207, 0.9654),(-1.165, -0.1207, 0.9654),(1.134, 0.04305, -1.272),(1.001, -0.2565, 0.7175),(-1.001, -0.05045, 0.7503),(-1.134, 0.2831, -1.234),(1.119, -0.1565, -0.007746),(-1.119, 0.07987, 0.02991),(0.8264, -0.2777, 1.145),(-0.8264, -0.1631, 1.163),(-0.5493, -0.2176, 0.4108),(-0.5493, 0.007936, 0.4467),(-0.4809, -0.2392, 1.272),(-0.5645, -0.06447, -0.5973),(0.5645, 0.1755, -0.559),(-0.5076, -0.2838, 1.003),(0.5076, -0.1131, 1.03),(0, 0.04305, -1.272),(0, -0.2572, 0.7279),(0, -0.053, 0.7605),(0, 0.2831, -1.234),(0, -0.1565, -0.007746),(0, 0.07987, 0.02991),(0, -0.2847, 1.218),(0, -0.1791, 1.235),(0.5493, -0.2176, 0.4108),(0.5493, 0.007936, 0.4467),(0.4809, -0.2392, 1.272),(0.5645, -0.06447, -0.5973),(-0.5645, 0.1755, -0.559),(0.5076, -0.2838, 1.003),(-0.5076, -0.1131, 1.03)]

HAnimSegment723.coord = Coordinate727
Transform728 = x3d.Transform(DEF="Tongue_JinBlink")
Transform728.translation = [0,8.886,11.1]
Shape729 = x3d.Shape()
Appearance730 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape729.appearance = Appearance730
IndexedFaceSet731 = x3d.IndexedFaceSet(DEF="Tongue-FACES_JinBlink")
IndexedFaceSet731.solid = False
IndexedFaceSet731.creaseAngle = 3.14159
IndexedFaceSet731.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,2,-1,2,5,6,-1,8,3,2,-1,2,7,8,-1,9,10,11,-1,11,12,9,-1,13,14,11,-1,11,10,13,-1,15,16,11,-1,11,14,15,-1,17,12,11,-1,11,16,17,-1,18,19,20,-1,20,21,18,-1,22,23,20,-1,20,19,22,-1,24,25,20,-1,20,23,24,-1,26,21,20,-1,20,25,26,-1,27,28,29,-1,29,30,27,-1,31,32,29,-1,29,28,31,-1,33,34,29,-1,29,32,33,-1,35,30,29,-1,29,34,35,-1,36,37,38,-1,38,39,36,-1,4,40,38,-1,38,37,4,-1,17,41,38,-1,38,40,17,-1,42,39,38,-1,38,41,42,-1,4,37,43,-1,43,5,4,-1,36,44,43,-1,43,37,36,-1,45,46,43,-1,43,44,45,-1,6,5,43,-1,43,46,6,-1,33,47,48,-1,48,49,33,-1,50,51,48,-1,48,47,50,-1,52,53,48,-1,48,51,52,-1,54,49,48,-1,48,53,54,-1,31,55,56,-1,56,32,31,-1,57,58,56,-1,56,55,57,-1,50,47,56,-1,56,58,50,-1,33,32,56,-1,56,47,33,-1,4,1,59,-1,59,40,4,-1,0,60,59,-1,59,1,0,-1,9,12,59,-1,59,60,9,-1,17,40,59,-1,59,12,17,-1,0,3,61,-1,61,62,0,-1,8,63,61,-1,61,3,8,-1,22,19,61,-1,61,63,22,-1,18,62,61,-1,61,19,18,-1,27,30,64,-1,64,65,27,-1,35,66,64,-1,64,30,35,-1,67,68,64,-1,64,66,67,-1,69,65,64,-1,64,68,69,-1,35,70,71,-1,71,66,35,-1,72,73,71,-1,71,70,72,-1,74,75,71,-1,71,73,74,-1,67,66,71,-1,71,75,67,-1,9,60,76,-1,76,77,9,-1,0,62,76,-1,76,60,0,-1,18,21,76,-1,76,62,18,-1,26,77,76,-1,76,21,26,-1,78,79,80,-1,80,81,78,-1,31,28,80,-1,80,79,31,-1,27,82,80,-1,80,28,27,-1,83,81,80,-1,80,82,83,-1,72,70,84,-1,84,85,72,-1,35,34,84,-1,84,70,35,-1,33,49,84,-1,84,34,33,-1,54,85,84,-1,84,49,54,-1,86,87,88,-1,88,89,86,-1,69,68,88,-1,88,87,69,-1,67,75,88,-1,88,68,67,-1,74,89,88,-1,88,75,74,-1,90,91,92,-1,92,93,90,-1,57,55,92,-1,92,91,57,-1,31,79,92,-1,92,55,31,-1,78,93,92,-1,92,79,78,-1,94,95,96,-1,96,97,94,-1,42,41,96,-1,96,95,42,-1,17,16,96,-1,96,41,17,-1,15,97,96,-1,96,16,15,-1,83,82,98,-1,98,99,83,-1,27,65,98,-1,98,82,27,-1,69,87,98,-1,98,65,69,-1,86,99,98,-1,98,87,86,-1,13,10,100,-1,100,101,13,-1,9,77,100,-1,100,10,9,-1,26,25,100,-1,100,77,26,-1,24,101,100,-1,100,25,24,-1,6,102,103,-1,103,7,6,-1,78,81,103,-1,103,102,78,-1,83,104,103,-1,103,81,83,-1,8,7,103,-1,103,104,8,-1,13,105,106,-1,106,14,13,-1,72,85,106,-1,106,105,72,-1,54,107,106,-1,106,85,54,-1,15,14,106,-1,106,107,15,-1,22,108,109,-1,109,23,22,-1,86,89,109,-1,109,108,86,-1,74,110,109,-1,109,89,74,-1,24,23,109,-1,109,110,24,-1,45,111,112,-1,112,46,45,-1,90,93,112,-1,112,111,90,-1,78,102,112,-1,112,93,78,-1,6,46,112,-1,112,102,6,-1,52,113,114,-1,114,53,52,-1,94,97,114,-1,114,113,94,-1,15,107,114,-1,114,97,15,-1,54,53,114,-1,114,107,54,-1,8,104,115,-1,115,63,8,-1,83,99,115,-1,115,104,83,-1,86,108,115,-1,115,99,86,-1,22,63,115,-1,115,108,22,-1,72,105,116,-1,116,73,72,-1,13,101,116,-1,116,105,13,-1,24,110,116,-1,116,101,24,-1,74,73,116,-1,116,110,74,-1]
IndexedFaceSet731.coordIndex = [0,59,32,-1,32,62,0,-1,8,75,32,-1,32,59,8,-1,20,95,32,-1,32,75,20,-1,17,62,32,-1,32,95,17,-1,4,89,33,-1,33,74,4,-1,18,96,33,-1,33,89,18,-1,29,92,33,-1,33,96,29,-1,11,74,33,-1,33,92,11,-1,12,79,34,-1,34,82,12,-1,22,97,34,-1,34,79,22,-1,31,94,34,-1,34,97,31,-1,15,82,34,-1,34,94,15,-1,1,72,35,-1,35,67,1,-1,9,77,35,-1,35,72,9,-1,10,64,35,-1,35,77,10,-1,5,67,35,-1,35,64,5,-1,2,71,36,-1,36,70,2,-1,8,78,36,-1,36,71,8,-1,11,66,36,-1,36,78,11,-1,6,70,36,-1,36,66,6,-1,8,71,37,-1,37,75,8,-1,2,60,37,-1,37,71,2,-1,24,98,37,-1,37,60,24,-1,20,75,37,-1,37,98,20,-1,10,73,38,-1,38,76,10,-1,7,65,38,-1,38,73,7,-1,27,99,38,-1,38,65,27,-1,21,76,38,-1,38,99,21,-1,9,61,39,-1,39,77,9,-1,3,69,39,-1,39,61,3,-1,7,73,39,-1,39,69,7,-1,10,77,39,-1,39,73,10,-1,8,59,40,-1,40,78,8,-1,0,68,40,-1,40,59,0,-1,4,74,40,-1,40,68,4,-1,11,78,40,-1,40,74,11,-1,0,62,41,-1,41,83,0,-1,17,100,41,-1,41,62,17,-1,22,79,41,-1,41,100,22,-1,12,83,41,-1,41,79,12,-1,1,67,42,-1,42,84,1,-1,5,85,42,-1,42,67,5,-1,14,80,42,-1,42,85,14,-1,13,84,42,-1,42,80,13,-1,5,63,43,-1,43,85,5,-1,26,101,43,-1,43,63,26,-1,23,81,43,-1,43,101,23,-1,14,85,43,-1,43,81,14,-1,4,68,44,-1,44,86,4,-1,0,83,44,-1,44,68,0,-1,12,82,44,-1,44,83,12,-1,15,86,44,-1,44,82,15,-1,28,91,45,-1,45,110,28,-1,9,72,45,-1,45,91,9,-1,1,88,45,-1,45,72,1,-1,25,110,45,-1,45,88,25,-1,26,63,46,-1,46,111,26,-1,5,64,46,-1,46,63,5,-1,10,76,46,-1,46,64,10,-1,21,111,46,-1,46,76,21,-1,30,93,47,-1,47,112,30,-1,13,80,47,-1,47,93,13,-1,14,81,47,-1,47,80,14,-1,23,112,47,-1,47,81,23,-1,16,87,48,-1,48,113,16,-1,3,61,48,-1,48,87,3,-1,9,91,48,-1,48,61,9,-1,28,113,48,-1,48,91,28,-1,19,90,49,-1,49,114,19,-1,6,66,49,-1,49,90,6,-1,11,92,49,-1,49,66,11,-1,29,114,49,-1,49,92,29,-1,25,88,50,-1,50,115,25,-1,1,84,50,-1,50,88,1,-1,13,93,50,-1,50,84,13,-1,30,115,50,-1,50,93,30,-1,18,89,51,-1,51,116,18,-1,4,86,51,-1,51,89,4,-1,15,94,51,-1,51,86,15,-1,31,116,51,-1,51,94,31,-1,20,106,52,-1,52,95,20,-1,28,110,52,-1,52,106,28,-1,25,103,52,-1,52,110,25,-1,17,95,52,-1,52,103,17,-1,18,104,53,-1,53,96,18,-1,26,111,53,-1,53,104,26,-1,21,107,53,-1,53,111,21,-1,29,96,53,-1,53,107,29,-1,22,108,54,-1,54,97,22,-1,30,112,54,-1,54,108,30,-1,23,109,54,-1,54,112,23,-1,31,97,54,-1,54,109,31,-1,24,102,55,-1,55,98,24,-1,16,113,55,-1,55,102,16,-1,28,106,55,-1,55,113,28,-1,20,98,55,-1,55,106,20,-1,27,105,56,-1,56,99,27,-1,19,114,56,-1,56,105,19,-1,29,107,56,-1,56,114,29,-1,21,99,56,-1,56,107,21,-1,17,103,57,-1,57,100,17,-1,25,115,57,-1,57,103,25,-1,30,108,57,-1,57,115,30,-1,22,100,57,-1,57,108,22,-1,26,104,58,-1,58,101,26,-1,18,116,58,-1,58,104,18,-1,31,109,58,-1,58,116,31,-1,23,101,58,-1,58,109,23,-1]
TextureCoordinate732 = x3d.TextureCoordinate(DEF="Tongue-TEXCOORD_JinBlink")
TextureCoordinate732.point = [(0.6665, 0.04796),(0.6621, 0.05829),(0.6755, 0.05429),(0.678, 0.04407),(0.6594, 0.0736),(0.6739, 0.06941),(0.6934, 0.06941),(0.6938, 0.05429),(0.6944, 0.04387),(0.6665, 0.07002),(0.678, 0.07332),(0.6755, 0.08631),(0.6621, 0.08231),(0.6944, 0.07293),(0.6938, 0.08631),(0.6934, 0.103),(0.6739, 0.103),(0.6594, 0.09877),(0.6775, 0.03908),(0.6841, 0.03457),(0.685, 0.04057),(0.677, 0.04467),(0.6959, 0.03299),(0.6961, 0.03821),(0.6959, 0.0483),(0.6841, 0.05084),(0.6775, 0.0521),(0.7593, 0.04796),(0.7636, 0.05829),(0.7681, 0.0703),(0.7631, 0.05909),(0.7664, 0.0736),(0.7713, 0.08619),(0.7664, 0.09877),(0.7636, 0.08231),(0.7593, 0.07002),(0.6584, 0.1215),(0.6584, 0.09583),(0.6535, 0.1086),(0.6535, 0.1343),(0.6545, 0.08619),(0.6584, 0.1214),(0.6584, 0.1471),(0.6734, 0.09157),(0.6734, 0.1172),(0.6932, 0.1172),(0.6932, 0.09157),(0.7673, 0.1214),(0.7524, 0.1256),(0.7519, 0.103),(0.7673, 0.1471),(0.7524, 0.1513),(0.7326, 0.1513),(0.7326, 0.1256),(0.7324, 0.103),(0.7673, 0.09583),(0.7723, 0.1086),(0.7673, 0.1215),(0.7723, 0.1343),(0.6577, 0.0703),(0.6627, 0.05909),(0.6813, 0.03662),(0.6723, 0.04066),(0.6952, 0.03583),(0.7565, 0.05069),(0.7535, 0.04066),(0.7535, 0.05994),(0.7482, 0.0521),(0.7488, 0.04467),(0.7482, 0.03908),(0.7478, 0.07332),(0.7445, 0.06163),(0.7314, 0.07293),(0.7306, 0.06006),(0.7299, 0.0483),(0.7417, 0.05084),(0.6693, 0.05069),(0.6723, 0.05994),(0.7324, 0.06941),(0.7519, 0.06941),(0.7503, 0.05429),(0.732, 0.05429),(0.7478, 0.04407),(0.7314, 0.04387),(0.7503, 0.08631),(0.732, 0.08631),(0.7299, 0.03299),(0.7417, 0.03457),(0.7408, 0.04057),(0.7296, 0.03821),(0.7326, 0.1172),(0.7524, 0.1172),(0.7524, 0.09157),(0.7326, 0.09157),(0.6932, 0.1513),(0.6734, 0.1513),(0.6734, 0.1256),(0.6932, 0.1256),(0.7445, 0.03662),(0.7306, 0.03583),(0.6813, 0.06163),(0.6952, 0.06006),(0.7129, 0.06941),(0.7129, 0.05429),(0.7129, 0.04381),(0.7129, 0.0728),(0.7129, 0.08631),(0.7129, 0.103),(0.7129, 0.03246),(0.7129, 0.03742),(0.7129, 0.04745),(0.7129, 0.1172),(0.7129, 0.09157),(0.7129, 0.1513),(0.7129, 0.1256),(0.7129, 0.03556),(0.7129, 0.05954)]

IndexedFaceSet731.texCoord = TextureCoordinate732
Coordinate733 = x3d.Coordinate(USE="Tongue_COORD_JinBlink")

IndexedFaceSet731.coord = Coordinate733

Shape729.geometry = IndexedFaceSet731

Transform728.children.append(Shape729)

HAnimSegment723.children.append(Transform728)

HAnimJoint93.children.append(HAnimSegment723)
HAnimSegment734 = x3d.HAnimSegment(DEF="hanim_Upper_teeth")
HAnimSegment734.name = "upper_teeth"
HAnimDisplacer735 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinBlink")
HAnimDisplacer735.name = "upper_teeth_morphinterpolator"
HAnimDisplacer735.coordIndex = [14,576,886]
HAnimDisplacer735.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer735)
HAnimDisplacer736 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinCheekRaiser")
HAnimDisplacer736.name = "upper_teeth_morphinterpolator"
HAnimDisplacer736.coordIndex = [14,132,576,726,886]
HAnimDisplacer736.displacements = [(0, 0.0001, 0),(0, -0.0001, 0),(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer736)
HAnimDisplacer737 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinChinRaiser")
HAnimDisplacer737.name = "upper_teeth_morphinterpolator"
HAnimDisplacer737.coordIndex = [16,17,19,20,21,22,28,29,30,37,38,39,40,50,51,52,53,54,55,56,57,61,79,80,81,82,83,84,85,86,107,108,109,110,111,112,113,114,118,152,154,155,156,158,159,166,167,168,169,170,171,181,182,183,184,185,186,187,188,209,210,211,212,213,214,215,216,234,239,240,241,242,243,244,245,246,264,275,276,277,278,284,285,286,287,297,298,299,301,302,311,312,313,314,315,316,317,318,322,340,341,342,343,344,345,346,347,351,368,369,370,371,372,373,374,375,379,392,403,404,405,406,412,413,414,415,425,426,427,429,430,439,440,441,442,443,444,445,446,450,468,469,470,471,472,473,474,475,479,496,497,498,499,500,501,502,503,507,520,539,543,545,546,547,549,550,555,556,557,562,563,564,570,571,572,573,585,586,587,588,589,599,600,601,604,605,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,636,640,665,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,694,698,727,728,729,730,731,732,733,734,738,756,757,758,759,760,761,762,763,767,780,808,811,813,814,816,817,818,819,821,822,832,834,835,836,837,838,839,840,841,857,858,863,864,865,866,867,868,869,870,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,924,952,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,985,1014,1015,1016,1017,1018,1019,1020,1021,1039,1040]
HAnimDisplacer737.displacements = [(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0787, 0),(0, 0.2286, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.1799, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1799, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.188, 0),(0, 0.188, 0),(0, 0.0999, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.2285, 0),(0, 0.1, 0),(0, 0.2286, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0999, 0),(0, 0.1405, 0),(0, 0.0999, 0),(0, 0.1404, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0999, 0),(0, 0.0381, 0),(0, 0.1121, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1121, 0),(0, 0.1267, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1267, 0),(0, 0.2286, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0786, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.2285, 0),(0, 0.0999, 0),(0, 0.0999, 0),(0, 0.0349, 0),(0, 0.0381, 0),(0, 0.0349, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1864, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, -0.0056, 0),(0, 0.1, 0),(0, 0.1, 0),(0, -0.0055, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.2285, 0),(0, 0.0999, 0),(0, 0.0999, 0),(0, 0.0349, 0),(0, 0.0381, 0),(0, 0.0349, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.1457, 0),(0, 0.1458, 0),(0, 0.1864, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0787, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0786, 0),(0, 0.0999, 0),(0, 0.1, 0),(0, 0.0349, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.2286, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.1404, 0),(0, 0.1881, 0),(0, 0.1881, 0),(0, 0.1405, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0968, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1458, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0999, 0),(0, 0.2286, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.0968, 0),(0, 0.0381, 0),(0, 0.0967, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, -0.0056, 0),(0, 0.0999, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.2286, 0),(0, 0.0381, 0),(0, 0.0349, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1457, 0),(0, 0.1462, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.1268, 0),(0, 0.1, 0),(0, 0.0999, 0),(0, 0.1404, 0),(0, 0.2286, 0),(0, 0.1, 0),(0, 0.2286, 0),(0, 0.1405, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.1, 0),(0, 0.0382, 0),(0, 0.0968, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1, 0),(0, 0.0967, 0),(0, 0.1, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0.0001, 0.1457, 0),(0, 0.1457, 0),(0, 0.1462, 0),(0, 0.1457, 0),(0, 0.1865, 0),(0, 0.1457, 0),(0, 0.1462, 0),(0, 0.1457, 0),(0, 0.0381, 0),(0, 0.0381, 0),(0, 0.1267, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.1267, 0),(0, 0.1458, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0382, 0),(0, 0.0382, 0),(0, 0.0381, 0),(0, 0.0349, 0),(0, 0.0381, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer737)
HAnimDisplacer738 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinEyesClosed")
HAnimDisplacer738.name = "upper_teeth_morphinterpolator"
HAnimDisplacer738.coordIndex = [14,576,886]
HAnimDisplacer738.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer738)
HAnimDisplacer739 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLidDroop")
HAnimDisplacer739.name = "upper_teeth_morphinterpolator"
HAnimDisplacer739.coordIndex = [14,576,886]
HAnimDisplacer739.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer739)
HAnimDisplacer740 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipCornerPuller")
HAnimDisplacer740.name = "upper_teeth_morphinterpolator"
HAnimDisplacer740.coordIndex = [1,219,711,1006]
HAnimDisplacer740.displacements = [(0, 0.0001, 0),(0, -0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer740)
HAnimDisplacer741 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipFunneler")
HAnimDisplacer741.name = "upper_teeth_morphinterpolator"
HAnimDisplacer741.coordIndex = [14,576,886]
HAnimDisplacer741.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer741)
HAnimDisplacer742 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipPuckerer")
HAnimDisplacer742.name = "upper_teeth_morphinterpolator"
HAnimDisplacer742.coordIndex = [15,17,18,19,20,21,22,37,38,39,107,108,109,110,111,112,113,114,156,157,159,160,167,168,169,170,209,210,211,212,214,216,264,275,277,284,285,286,287,311,312,313,314,315,317,318,368,369,371,372,374,375,403,405,412,413,414,415,439,440,441,442,443,445,446,496,497,499,500,502,503,539,543,544,546,547,548,549,550,570,571,572,573,585,586,587,588,604,617,618,619,620,625,626,627,628,665,727,728,731,732,733,734,756,757,758,759,760,762,763,814,815,818,819,820,822,834,835,836,837,838,839,841,897,898,899,900,901,902,903,904,905,906,908,909,913,914,915,1014,1015,1019,1021,1039]
HAnimDisplacer742.displacements = [(0, 0, 0.092),(0, 0, 0.322),(0, 0, 0.092),(0, 0, 0.322),(-0.0413, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.0246, 0, 0.436),(0.0261, 0, 0.436),(0.0167, 0, 0.436),(-0.0327, 0, 0.436),(0.0045, 0, 0.322),(0.0176, 0, 0.436),(0.0716, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.07, 0, 0.322),(0, 0, 0.322),(0, 0, 0.092),(-0.0413, 0, 0.436),(0, 0, 0.092),(-0.1069, 0, 0.436),(-0.0411, 0, 0.436),(-0.1084, 0, 0.436),(-0.0411, 0, 0.436),(-0.0123, 0, 0.322),(-0.0989, 0, 0.436),(-0.0124, 0, 0.322),(-0.0998, 0, 0.436),(-0.1166, 0, 0.436),(-0.1151, 0, 0.436),(-0.0411, 0, 0.436),(0, 0, 0.092),(0, 0, 0.093),(0.0923, 0, 0.322),(0.029, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.0291, 0, 0.322),(-0.0411, 0, 0.436),(0.0297, 0, 0.322),(0.0256, 0, 0.436),(0.0586, 0, 0.436),(0.0927, 0, 0.322),(0.0256, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.092),(0, 0, 0.093),(-0.1374, 0, 0.436),(-0.0369, 0, 0.322),(0, 0, 0.322),(-0.0412, 0, 0.436),(-0.037, 0, 0.322),(-0.0412, 0, 0.436),(-0.0376, 0, 0.322),(-0.1078, 0, 0.436),(-0.1408, 0, 0.436),(-0.1378, 0, 0.436),(-0.1078, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(-0.0413, 0, 0.436),(0, 0, 0.322),(0, 0, 0.093),(0, 0, 0.093),(0, 0, 0.093),(0, 0, 0.322),(0, 0, 0.092),(0, 0, 0.092),(0, 0, 0.322),(0, 0, 0.322),(0.0926, 0, 0.322),(0.029, 0, 0.322),(0.0298, 0, 0.322),(0.0968, 0, 0.322),(0, 0, 0.322),(0.0241, 0, 0.436),(-0.0411, 0, 0.436),(-0.0413, 0, 0.436),(0.0256, 0, 0.436),(0.0168, 0, 0.436),(-0.0328, 0, 0.436),(-0.0327, 0, 0.436),(0.0176, 0, 0.436),(0.0715, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.07, 0, 0.322),(0.0645, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(0.029, 0, 0.322),(-0.041, 0, 0.436),(0.0298, 0, 0.322),(0.0255, 0, 0.436),(0.059, 0, 0.436),(0.0556, 0, 0.436),(0.0257, 0, 0.436),(0, 0, 0.093),(0, 0, 0.093),(-0.0413, 0, 0.436),(0, 0, 0.322),(0, 0, 0.092),(0, 0, 0.322),(-0.1063, 0, 0.436),(-0.1377, 0, 0.436),(-0.0369, 0, 0.322),(-0.0413, 0, 0.436),(-0.0377, 0, 0.322),(-0.0413, 0, 0.436),(-0.1418, 0, 0.436),(-0.0122, 0, 0.322),(-0.0369, 0, 0.322),(-0.099, 0, 0.436),(-0.0411, 0, 0.436),(-0.0124, 0, 0.322),(-0.0412, 0, 0.436),(-0.0999, 0, 0.436),(-0.0377, 0, 0.322),(-0.1078, 0, 0.436),(-0.1077, 0, 0.436),(-0.1412, 0, 0.436),(-0.1165, 0, 0.436),(-0.115, 0, 0.436),(-0.1378, 0, 0.436),(-0.1079, 0, 0.436),(0, 0, 0.322),(0, 0, 0.322),(0, 0, 0.322),(-0.0413, 0, 0.436),(-0.1467, 0, 0.436)]

HAnimSegment734.displacers.append(HAnimDisplacer742)
HAnimDisplacer743 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipsPart")
HAnimDisplacer743.name = "upper_teeth_morphinterpolator"
HAnimDisplacer743.coordIndex = [14,132,576,726,886]
HAnimDisplacer743.displacements = [(0, -0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0),(0, -0.0001, 0),(0, 0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer743)
HAnimDisplacer744 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipSuck")
HAnimDisplacer744.name = "upper_teeth_morphinterpolator"
HAnimDisplacer744.coordIndex = [14,576,886]
HAnimDisplacer744.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer744)
HAnimDisplacer745 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinLipTightener")
HAnimDisplacer745.name = "upper_teeth_morphinterpolator"
HAnimDisplacer745.coordIndex = [14,576,886]
HAnimDisplacer745.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer745)
HAnimDisplacer746 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinMouthStretch")
HAnimDisplacer746.name = "upper_teeth_morphinterpolator"
HAnimDisplacer746.coordIndex = [14,576,886]
HAnimDisplacer746.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer746)
HAnimDisplacer747 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinNoseWrinkler")
HAnimDisplacer747.name = "upper_teeth_morphinterpolator"
HAnimDisplacer747.coordIndex = [14,576,886]
HAnimDisplacer747.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer747)
HAnimDisplacer748 = x3d.HAnimDisplacer(DEF="Upper_teeth_MorphInterpolator_JinSlit")
HAnimDisplacer748.name = "upper_teeth_morphinterpolator"
HAnimDisplacer748.coordIndex = [14,576,886]
HAnimDisplacer748.displacements = [(0, 0.0001, 0),(0, 0.0001, 0),(0, -0.0001, 0)]

HAnimSegment734.displacers.append(HAnimDisplacer748)
Coordinate749 = x3d.Coordinate(DEF="Upper_teeth_COORD_JinBlink")
Coordinate749.point = [(-2.78, 0.8496, -1.608),(-2.777, 0.2987, -1.683),(-2.125, 0.1308, -1.676),(-2.789, 0.7394, -0.8298),(-2.786, 0.189, -0.9075),(-2.157, 0.06281, -0.9464),(-2.677, 0.6356, -0.09551),(-2.674, 0.08531, -0.1741),(-2.131, -0.02711, -0.275),(-2.371, 0.5392, 0.586),(-2.368, -0.01099, 0.5068),(-2.006, -0.1174, 0.3632),(-1.911, 0.4495, 1.22),(-1.909, -0.1006, 1.14),(-1.713, -0.2048, 0.9811),(-1.336, 0.3957, 1.601),(-1.335, -0.1543, 1.52),(-1.253, -0.2541, 1.33),(-0.6794, 0.3711, 1.775),(-0.679, -0.1789, 1.694),(-0.6546, -0.2767, 1.49),(0, -0.1852, 1.738),(0, -0.2819, 1.526),(-2.122, 0.1608, -1.675),(-1.93, 0.2856, -0.9938),(-1.906, 0.2319, -0.3884),(-1.794, 0.1511, 0.183),(-1.533, 0.07302, 0.7347),(-1.121, 0.02888, 1.047),(-0.5859, 0.00863, 1.19),(0, 0.003966, 1.223),(-2.684, 0.1398, -1.684),(-2.219, 0.1235, -1.665),(-2.213, 0.01946, -0.946),(-2.185, -0.07577, -0.2727),(-2.054, -0.1661, 0.366),(-1.749, -0.258, 1.016),(-1.275, -0.3067, 1.36),(-0.6617, -0.3291, 1.518),(-0.6764, -0.3421, 1.653),(-1.33, -0.3185, 1.486),(-1.895, -0.2665, 1.118),(-2.345, -0.1745, 0.4679),(-2.642, -0.07965, -0.2028),(-2.743, 0.02301, -0.9288),(0, 0.1811, -1.486),(-2.23, -0.3493, -1.636),(-2.257, -0.4254, -1.098),(-2.702, -0.4264, -1.091),(-2.682, -0.3471, -1.651),(-0.5807, -0.7901, 1.481),(-0.08538, -0.7931, 1.503),(-0.08698, -0.8081, 1.608),(-0.5887, -0.8044, 1.582),(-0.7603, -0.8007, 1.556),(-1.244, -0.7838, 1.437),(-1.21, -0.7703, 1.341),(-0.7458, -0.7868, 1.458),(-1.402, -0.7742, 1.369),(-1.811, -0.7368, 1.104),(-1.714, -0.7257, 1.026),(-1.351, -0.7613, 1.278),(-1.943, -0.7183, 0.9738),(-2.266, -0.6481, 0.4769),(-2.054, -0.6365, 0.3949),(-1.813, -0.7073, 0.8956),(-2.365, -0.6241, 0.3072),(-2.572, -0.5544, -0.1856),(-2.216, -0.5456, -0.2477),(-2.106, -0.6128, 0.2276),(-2.626, -0.5291, -0.3645),(-2.692, -0.4533, -0.9005),(-2.26, -0.4504, -0.921),(-2.233, -0.5219, -0.415),(-2.122, -0.3642, -1.749),(-2.295, -0.4218, -1.574),(-2.314, -0.4778, -1.178),(-2.638, -0.4781, -1.176),(-2.623, -0.4207, -1.582),(-0.5147, -0.8554, 1.492),(-0.153, -0.8577, 1.508),(-0.1549, -0.8677, 1.579),(-0.5193, -0.8651, 1.561),(-0.8237, -0.8587, 1.515),(-1.172, -0.8465, 1.429),(-1.152, -0.8373, 1.364),(-0.8114, -0.8494, 1.449),(-1.449, -0.8296, 1.31),(-1.739, -0.8027, 1.119),(-1.679, -0.7949, 1.064),(-1.409, -0.8211, 1.249),(-1.968, -0.7698, 0.8862),(-2.192, -0.7184, 0.5231),(-2.053, -0.7103, 0.4657),(-1.864, -0.7619, 0.8308),(-2.357, -0.6756, 0.2203),(-2.494, -0.6252, -0.1362),(-2.251, -0.6185, -0.1834),(-2.157, -0.6678, 0.1655),(-2.581, -0.5804, -0.453),(-2.623, -0.5257, -0.8394),(-2.316, -0.523, -0.8586),(-2.291, -0.5758, -0.4854),(-2.228, 0.02897, -1.584),(-2.256, -0.04748, -1.043),(-2.704, -0.04851, -1.036),(-2.683, 0.03117, -1.599),(-0.582, -0.4116, 1.532),(-0.08377, -0.4146, 1.553),(-0.08547, -0.4304, 1.665),(-0.5905, -0.4267, 1.639),(-0.7592, -0.4232, 1.613),(-1.246, -0.4061, 1.493),(-1.21, -0.3918, 1.391),(-0.7438, -0.4083, 1.509),(-1.402, -0.3967, 1.426),(-1.815, -0.3589, 1.159),(-1.713, -0.3471, 1.076),(-1.348, -0.383, 1.329),(-1.945, -0.3406, 1.03),(-2.27, -0.27, 0.5304),(-2.052, -0.2581, 0.4462),(-1.81, -0.3292, 0.9487),(-2.367, -0.2463, 0.3627),(-2.575, -0.1762, -0.1332),(-2.214, -0.1673, -0.1961),(-2.104, -0.2349, 0.2818),(-2.628, -0.1513, -0.3093),(-2.694, -0.07502, -0.8484),(-2.258, -0.07211, -0.869),(-2.231, -0.144, -0.3604),(-2.122, 0.08236, -1.686),(2.78, 0.8496, -1.608),(2.777, 0.2987, -1.683),(2.786, 0.189, -0.9075),(2.789, 0.7394, -0.8298),(2.125, 0.1308, -1.676),(2.122, 0.1608, -1.675),(1.93, 0.2856, -0.9938),(2.157, 0.06281, -0.9464),(2.674, 0.08531, -0.1741),(2.677, 0.6356, -0.09551),(1.906, 0.2319, -0.3884),(2.131, -0.02711, -0.275),(2.368, -0.01099, 0.5068),(2.371, 0.5392, 0.586),(1.794, 0.1511, 0.183),(2.006, -0.1174, 0.3632),(1.909, -0.1006, 1.14),(1.911, 0.4495, 1.22),(1.533, 0.07302, 0.7347),(1.713, -0.2048, 0.9811),(1.335, -0.1543, 1.52),(1.336, 0.3957, 1.601),(1.121, 0.02888, 1.047),(1.253, -0.2541, 1.33),(0.679, -0.1789, 1.694),(0.6794, 0.3711, 1.775),(0.5859, 0.00863, 1.19),(0.6546, -0.2767, 1.49),(0, 0.3648, 1.819),(2.213, 0.01946, -0.946),(2.219, 0.1235, -1.665),(2.185, -0.07577, -0.2727),(2.054, -0.1661, 0.366),(1.749, -0.258, 1.016),(1.275, -0.3067, 1.36),(0.6617, -0.3291, 1.518),(0, -0.3335, 1.55),(0.6764, -0.3421, 1.653),(0, -0.3476, 1.692),(1.33, -0.3185, 1.486),(1.895, -0.2665, 1.118),(2.345, -0.1745, 0.4679),(2.642, -0.07966, -0.2028),(2.743, 0.02301, -0.9288),(2.684, 0.1398, -1.684),(2.295, -0.4218, -1.574),(2.314, -0.4778, -1.178),(2.638, -0.4781, -1.176),(2.623, -0.4207, -1.582),(0.5147, -0.8554, 1.492),(0.153, -0.8577, 1.508),(0.1549, -0.8677, 1.579),(0.5193, -0.8651, 1.561),(0.8237, -0.8587, 1.515),(1.172, -0.8465, 1.429),(1.152, -0.8373, 1.364),(0.8114, -0.8494, 1.449),(1.449, -0.8296, 1.31),(1.739, -0.8027, 1.119),(1.679, -0.7949, 1.064),(1.409, -0.8211, 1.249),(1.968, -0.7698, 0.8862),(2.192, -0.7184, 0.5231),(2.053, -0.7103, 0.4657),(1.864, -0.7619, 0.8308),(2.357, -0.6756, 0.2203),(2.494, -0.6252, -0.1362),(2.251, -0.6185, -0.1834),(2.157, -0.6678, 0.1655),(2.581, -0.5804, -0.453),(2.623, -0.5257, -0.8394),(2.316, -0.523, -0.8586),(2.291, -0.5758, -0.4854),(2.256, -0.04748, -1.043),(2.228, 0.02897, -1.584),(2.704, -0.04851, -1.036),(2.683, 0.03117, -1.599),(0.08377, -0.4146, 1.553),(0.582, -0.4116, 1.532),(0.08547, -0.4304, 1.665),(0.5905, -0.4267, 1.639),(1.246, -0.4061, 1.493),(0.7592, -0.4232, 1.613),(1.21, -0.3918, 1.391),(0.7438, -0.4083, 1.509),(1.815, -0.3589, 1.159),(1.402, -0.3967, 1.426),(1.713, -0.3471, 1.076),(1.348, -0.383, 1.329),(2.27, -0.27, 0.5304),(1.945, -0.3406, 1.03),(2.052, -0.2581, 0.4462),(1.81, -0.3292, 0.9487),(2.575, -0.1762, -0.1332),(2.367, -0.2463, 0.3627),(2.214, -0.1673, -0.1961),(2.104, -0.2349, 0.2818),(2.694, -0.07502, -0.8484),(2.628, -0.1513, -0.3093),(2.258, -0.07211, -0.869),(2.231, -0.144, -0.3604),(2.122, 0.08236, -1.686),(0, 0.08788, -1.693),(2.23, -0.3493, -1.636),(2.257, -0.4254, -1.098),(2.702, -0.4264, -1.091),(2.682, -0.3471, -1.651),(0.5807, -0.7901, 1.481),(0.08538, -0.7931, 1.503),(0.08698, -0.8081, 1.608),(0.5887, -0.8044, 1.582),(0.7603, -0.8007, 1.556),(1.244, -0.7838, 1.437),(1.21, -0.7703, 1.341),(0.7458, -0.7868, 1.458),(1.402, -0.7742, 1.369),(1.811, -0.7368, 1.104),(1.714, -0.7257, 1.026),(1.351, -0.7613, 1.278),(1.943, -0.7183, 0.9738),(2.266, -0.6481, 0.4769),(2.054, -0.6365, 0.3949),(1.813, -0.7073, 0.8956),(2.365, -0.6241, 0.3072),(2.572, -0.5544, -0.1856),(2.216, -0.5456, -0.2477),(2.106, -0.6128, 0.2276),(2.626, -0.5291, -0.3645),(2.692, -0.4533, -0.9005),(2.26, -0.4504, -0.921),(2.233, -0.5219, -0.415),(2.122, -0.3642, -1.749),(0, -0.363, -1.757),(-2.792, 0.4871, -1.259),(-2.142, 0.1746, -1.297),(-2.754, 0.3796, -0.4991),(-2.151, 0.1543, -0.5849),(-2.546, 0.2799, 0.2059),(-2.083, 0.06273, 0.0628),(-2.157, 0.1847, 0.8788),(-1.879, -0.02861, 0.7087),(-1.636, 0.1112, 1.399),(-1.501, -0.09869, 1.204),(-1.014, 0.07351, 1.665),(-0.9654, -0.1327, 1.445),(-0.3407, 0.05918, 1.766),(-0.3302, -0.1456, 1.536),(-2.154, 0.07289, -1.306),(-2.162, -0.02563, -0.6098),(-2.094, -0.1175, 0.03959),(-1.889, -0.2092, 0.6885),(-1.508, -0.2798, 1.188),(-0.9686, -0.3141, 1.43),(-0.3311, -0.327, 1.521),(-0.3399, -0.299, 1.704),(-1.011, -0.2848, 1.603),(-1.63, -0.2473, 1.339),(-2.148, -0.1741, 0.821),(-2.536, -0.0793, 0.1506),(-2.743, 0.02005, -0.5519),(-2.781, 0.1265, -1.305),(-1.428, 0.2447, -1.416),(-1.434, 0.2838, -0.9337),(-1.388, 0.2227, -0.5019),(-1.253, 0.1618, -0.07126),(-1.001, 0.1151, 0.2591),(-0.6436, 0.09241, 0.4196),(-0.2202, 0.08385, 0.4801),(-2.468, -0.4496, -1.378),(-0.3355, -0.8615, 1.535),(-0.9899, -0.848, 1.439),(-1.569, -0.8121, 1.185),(-2.019, -0.7401, 0.6765),(-2.315, -0.6468, 0.01655),(-2.453, -0.5512, -0.6591),(-2.166, 0.06133, -1.303),(-2.484, 0.009624, -0.9372),(-2.769, 0.0621, -1.308),(-2.452, 0.1138, -1.674),(-0.332, -0.3396, 1.532),(-0.0005068, -0.3524, 1.623),(-0.3389, -0.3607, 1.682),(-0.6704, -0.3479, 1.591),(-1.007, -0.3466, 1.582),(-1.308, -0.3254, 1.432),(-0.9723, -0.3267, 1.441),(-0.6714, -0.3479, 1.591),(-1.622, -0.3094, 1.319),(-1.829, -0.2762, 1.084),(-1.516, -0.2921, 1.196),(-1.309, -0.3254, 1.432),(-2.138, -0.2367, 0.8045),(-2.208, -0.1815, 0.4145),(-1.9, -0.2209, 0.693),(-1.83, -0.2761, 1.083),(-2.524, -0.1423, 0.137),(-2.422, -0.0895, -0.2363),(-2.106, -0.1286, 0.04056),(-2.209, -0.1814, 0.4139),(-2.731, -0.04331, -0.5628),(-2.484, 0.00952, -0.9364),(-2.174, -0.03654, -0.6107),(-2.422, -0.08937, -0.2371),(-1.061, 0.1611, -1.68),(-2.173, -0.45, -1.375),(-2.483, -0.5009, -1.015),(-2.763, -0.4492, -1.381),(-2.452, -0.3983, -1.74),(-0.3324, -0.8523, 1.47),(-0.006795, -0.8637, 1.55),(-0.3385, -0.8706, 1.6),(-0.6641, -0.8593, 1.519),(-1.005, -0.8566, 1.5),(-1.302, -0.837, 1.361),(-0.9747, -0.8394, 1.378),(-0.6778, -0.859, 1.517),(-1.616, -0.8197, 1.239),(-1.823, -0.788, 1.015),(-1.522, -0.8045, 1.132),(-1.315, -0.8361, 1.355),(-2.13, -0.7474, 0.7281),(-2.205, -0.6935, 0.3471),(-1.908, -0.7328, 0.6249),(-1.833, -0.7867, 1.006),(-2.516, -0.6533, 0.06285),(-2.419, -0.6016, -0.3027),(-2.114, -0.6402, -0.02979),(-2.211, -0.6919, 0.3357),(-2.724, -0.5545, -0.6358),(-2.483, -0.5026, -1.003),(-2.181, -0.5479, -0.6824),(-2.422, -0.5998, -0.3154),(-2.167, -0.1997, -1.34),(-2.484, -0.2513, -0.9747),(-2.768, -0.199, -1.345),(-2.452, -0.1473, -1.71),(-0.3321, -0.6012, 1.499),(-0.00152, -0.6135, 1.586),(-0.3388, -0.6213, 1.641),(-0.6694, -0.609, 1.554),(-1.007, -0.6072, 1.542),(-1.307, -0.5865, 1.395),(-0.9732, -0.5883, 1.408),(-0.6725, -0.6089, 1.554),(-1.62, -0.5701, 1.279),(-1.828, -0.5373, 1.047),(-1.518, -0.5535, 1.162),(-1.311, -0.5863, 1.394),(-2.135, -0.4976, 0.7662),(-2.208, -0.4427, 0.3781),(-1.903, -0.4822, 0.6574),(-1.83, -0.5371, 1.046),(-2.522, -0.4033, 0.09959),(-2.421, -0.3507, -0.2723),(-2.108, -0.3898, 0.004185),(-2.209, -0.4424, 0.3761),(-2.729, -0.3044, -0.5999),(-2.484, -0.2517, -0.9725),(-2.176, -0.2976, -0.6475),(-2.422, -0.3503, -0.2749),(-1.061, -0.1087, -1.718),(2.792, 0.4871, -1.259),(2.142, 0.1746, -1.297),(2.754, 0.3796, -0.4991),(2.151, 0.1543, -0.5849),(2.546, 0.2799, 0.2059),(2.083, 0.06273, 0.0628),(2.157, 0.1847, 0.8788),(1.879, -0.02861, 0.7087),(1.636, 0.1112, 1.399),(1.501, -0.09869, 1.204),(1.014, 0.07351, 1.665),(0.9654, -0.1327, 1.445),(0.3407, 0.05918, 1.766),(0.3302, -0.1456, 1.536),(2.154, 0.07289, -1.306),(2.162, -0.02563, -0.6098),(2.094, -0.1175, 0.03959),(1.889, -0.2092, 0.6885),(1.508, -0.2798, 1.188),(0.9686, -0.3141, 1.43),(0.3311, -0.327, 1.521),(0.3399, -0.299, 1.704),(1.011, -0.2848, 1.603),(1.63, -0.2473, 1.339),(2.148, -0.1741, 0.821),(2.536, -0.0793, 0.1506),(2.743, 0.02005, -0.5519),(2.781, 0.1265, -1.305),(1.428, 0.2447, -1.416),(1.434, 0.2838, -0.9336),(1.388, 0.2227, -0.5019),(1.253, 0.1618, -0.07126),(1.001, 0.1151, 0.2591),(0.6436, 0.09241, 0.4196),(0.2202, 0.08385, 0.4801),(2.468, -0.4496, -1.378),(0.3355, -0.8615, 1.535),(0.9899, -0.848, 1.439),(1.569, -0.8121, 1.185),(2.019, -0.7401, 0.6765),(2.315, -0.6468, 0.01655),(2.453, -0.5512, -0.6591),(2.166, 0.06133, -1.303),(2.484, 0.009624, -0.9372),(2.769, 0.0621, -1.308),(2.452, 0.1138, -1.674),(0.332, -0.3396, 1.532),(0.0005065, -0.3524, 1.623),(0.3389, -0.3607, 1.682),(0.6704, -0.3479, 1.591),(1.007, -0.3466, 1.582),(1.308, -0.3254, 1.432),(0.9723, -0.3267, 1.441),(0.6714, -0.3479, 1.591),(1.622, -0.3094, 1.319),(1.829, -0.2762, 1.084),(1.516, -0.2921, 1.196),(1.309, -0.3254, 1.432),(2.138, -0.2367, 0.8045),(2.208, -0.1815, 0.4145),(1.9, -0.2209, 0.693),(1.83, -0.2761, 1.083),(2.524, -0.1423, 0.137),(2.422, -0.0895, -0.2363),(2.106, -0.1286, 0.04056),(2.209, -0.1814, 0.4139),(2.731, -0.04332, -0.5628),(2.484, 0.009519, -0.9364),(2.174, -0.03654, -0.6107),(2.422, -0.08938, -0.2371),(1.061, 0.1611, -1.68),(2.173, -0.45, -1.375),(2.483, -0.5009, -1.015),(2.763, -0.4492, -1.381),(2.452, -0.3983, -1.74),(0.3324, -0.8523, 1.47),(0.006795, -0.8637, 1.55),(0.3385, -0.8706, 1.6),(0.6641, -0.8593, 1.519),(1.005, -0.8566, 1.5),(1.302, -0.837, 1.361),(0.9747, -0.8394, 1.378),(0.6778, -0.859, 1.517),(1.616, -0.8197, 1.239),(1.823, -0.788, 1.015),(1.522, -0.8045, 1.132),(1.315, -0.8361, 1.355),(2.13, -0.7474, 0.7281),(2.205, -0.6935, 0.3471),(1.908, -0.7328, 0.6249),(1.833, -0.7867, 1.006),(2.516, -0.6533, 0.06285),(2.419, -0.6016, -0.3027),(2.114, -0.6402, -0.02979),(2.211, -0.6919, 0.3357),(2.724, -0.5545, -0.6358),(2.483, -0.5026, -1.003),(2.181, -0.5479, -0.6824),(2.422, -0.5998, -0.3154),(2.167, -0.1997, -1.34),(2.484, -0.2513, -0.9747),(2.768, -0.199, -1.345),(2.452, -0.1473, -1.71),(0.3321, -0.6012, 1.499),(0.00152, -0.6135, 1.586),(0.3388, -0.6213, 1.641),(0.6694, -0.609, 1.554),(1.007, -0.6072, 1.542),(1.307, -0.5865, 1.395),(0.9732, -0.5883, 1.408),(0.6725, -0.6089, 1.554),(1.62, -0.5701, 1.279),(1.828, -0.5373, 1.047),(1.518, -0.5535, 1.162),(1.311, -0.5863, 1.394),(2.135, -0.4976, 0.7662),(2.208, -0.4427, 0.3781),(1.903, -0.4822, 0.6574),(1.83, -0.5371, 1.046),(2.522, -0.4033, 0.09959),(2.421, -0.3507, -0.2723),(2.108, -0.3898, 0.004185),(2.209, -0.4424, 0.3761),(2.729, -0.3044, -0.5999),(2.484, -0.2517, -0.9725),(2.176, -0.2976, -0.6475),(2.422, -0.3503, -0.2749),(1.061, -0.1087, -1.718),(-2.78, 0.5426, -1.652),(-2.122, 0.1477, -1.677),(-2.789, 0.4325, -0.8732),(-2.792, 0.7941, -1.216),(-2.79, 0.2435, -1.293),(-2.145, 0.09869, -1.307),(-2.677, 0.3286, -0.1389),(-2.754, 0.6865, -0.4557),(-2.751, 0.1362, -0.534),(-2.154, 0.0194, -0.6038),(-2.371, 0.2322, 0.5426),(-2.546, 0.5868, 0.2493),(-2.544, 0.03659, 0.1703),(-2.085, -0.07226, 0.04428),(-1.911, 0.1426, 1.177),(-2.157, 0.4917, 0.9222),(-2.155, -0.05849, 0.8426),(-1.881, -0.1637, 0.6909),(-1.336, 0.08874, 1.557),(-1.636, 0.4181, 1.442),(-1.634, -0.1319, 1.362),(-1.503, -0.2339, 1.187),(-0.6794, 0.06411, 1.731),(-1.014, 0.3805, 1.708),(-1.013, -0.1695, 1.628),(-0.9662, -0.268, 1.429),(0, 0.05784, 1.776),(-0.3407, 0.3661, 1.81),(-0.3405, -0.1838, 1.729),(-0.3304, -0.2809, 1.519),(-2.154, 0.183, -0.9298),(-2.128, 0.1079, -0.2563),(-2.003, 0.01768, 0.3814),(-1.711, -0.06958, 0.9984),(-1.252, -0.1188, 1.346),(-0.6541, -0.1414, 1.506),(0, -0.1466, 1.543),(-1.963, 0.2426, -1.32),(-1.972, 0.2766, -0.6594),(-1.909, 0.1927, -0.06564),(-1.722, 0.1089, 0.5264),(-1.376, 0.0447, 0.9807),(-0.8849, 0.0135, 1.201),(-0.3027, 0.001732, 1.285),(-2.162, 0.06963, -1.303),(-2.171, -0.0284, -0.6098),(-2.102, -0.1204, 0.04094),(-1.897, -0.2125, 0.6923),(-1.514, -0.2835, 1.194),(-0.9712, -0.318, 1.438),(-0.3317, -0.3309, 1.529),(-0.3392, -0.34, 1.689),(-1.009, -0.3259, 1.589),(-1.625, -0.2886, 1.325),(-2.141, -0.2157, 0.8097),(-2.528, -0.1212, 0.1413),(-2.734, -0.02207, -0.5593),(-2.773, 0.08362, -1.307),(-2.769, 0.1812, -1.691),(-2.134, 0.1242, -1.669),(-2.166, 0.02262, -0.951),(-2.14, -0.07222, -0.2804),(-2.014, -0.1627, 0.3595),(-1.72, -0.2505, 0.9801),(-1.257, -0.3001, 1.331),(-0.656, -0.3228, 1.492),(0, -0.328, 1.528),(-0.6776, -0.2941, 1.669),(-1.331, -0.2696, 1.496),(-1.903, -0.2161, 1.118),(-2.361, -0.1268, 0.4862),(-2.666, -0.03071, -0.1929),(-2.778, 0.0726, -0.9234),(-1.153, 0.1896, -1.613),(-1.256, 0.2732, -1.231),(-1.241, 0.2441, -0.8359),(-1.167, 0.1914, -0.4632),(-0.9965, 0.1411, -0.1071),(-0.7287, 0.1121, 0.09755),(-0.3811, 0.09886, 0.1912),(0, 0.09574, 0.2133),(-2.452, 0.1247, -1.673),(-2.484, 0.01499, -0.9361),(-0.6709, -0.3425, 1.592),(-1.309, -0.32, 1.433),(-1.83, -0.2707, 1.084),(-2.209, -0.1761, 0.415),(-2.422, -0.08402, -0.236),(-2.227, 0.09968, -1.574),(-2.255, 0.02316, -1.033),(-2.704, 0.02213, -1.026),(-2.684, 0.1019, -1.59),(-2.169, -0.3874, -1.366),(-2.484, -0.4388, -1.003),(-2.766, -0.3866, -1.372),(-2.452, -0.3352, -1.735),(-0.5823, -0.3407, 1.54),(-0.08337, -0.3438, 1.562),(-0.08511, -0.36, 1.676),(-0.591, -0.3563, 1.65),(-0.3323, -0.7892, 1.475),(-0.003092, -0.8011, 1.559),(-0.3387, -0.8086, 1.612),(-0.6678, -0.7967, 1.528),(-0.7589, -0.3527, 1.625),(-1.247, -0.3356, 1.504),(-1.21, -0.3209, 1.4),(-0.7432, -0.3375, 1.517),(-1.006, -0.7945, 1.513),(-1.306, -0.7743, 1.369),(-0.9738, -0.7763, 1.383),(-0.6741, -0.7966, 1.527),(-1.402, -0.3262, 1.438),(-1.816, -0.2883, 1.17),(-1.712, -0.2763, 1.085),(-1.347, -0.3122, 1.338),(-1.618, -0.7575, 1.251),(-1.826, -0.7252, 1.022),(-1.52, -0.7415, 1.137),(-1.312, -0.7739, 1.366),(-1.946, -0.2701, 1.041),(-2.271, -0.1994, 0.5406),(-2.051, -0.1873, 0.4556),(-1.809, -0.2584, 0.9582),(-2.133, -0.6851, 0.7387),(-2.207, -0.6305, 0.3528),(-1.905, -0.67, 0.6319),(-1.831, -0.7246, 1.018),(-2.368, -0.1757, 0.3733),(-2.576, -0.1055, -0.1234),(-2.214, -0.09652, -0.1866),(-2.103, -0.1642, 0.2919),(-2.52, -0.5909, 0.07258),(-2.421, -0.5386, -0.2974),(-2.11, -0.5775, -0.02187),(-2.209, -0.6299, 0.3481),(-2.628, -0.08063, -0.299),(-2.695, -0.004303, -0.8387),(-2.257, -0.001381, -0.8594),(-2.231, -0.07339, -0.3502),(-2.728, -0.492, -0.6266),(-2.483, -0.4395, -0.9976),(-2.178, -0.4853, -0.6739),(-2.422, -0.5378, -0.3029),(-1.061, -0.3634, -1.754),(-2.122, 0.156, -1.675),(-2.249, -0.4499, -1.376),(-2.479, -0.4877, -1.108),(-2.687, -0.4493, -1.38),(-2.456, -0.4115, -1.647),(-2.233, -0.4122, -1.642),(-2.26, -0.4875, -1.109),(-2.699, -0.4886, -1.102),(-2.679, -0.41, -1.657),(-0.3333, -0.8549, 1.488),(-0.09134, -0.8631, 1.546),(-0.3376, -0.868, 1.581),(-0.5796, -0.8598, 1.523),(-0.5782, -0.8531, 1.476),(-0.08821, -0.8561, 1.497),(-0.08971, -0.8702, 1.596),(-0.5857, -0.8665, 1.57),(-1.001, -0.8541, 1.482),(-1.222, -0.8398, 1.381),(-0.9791, -0.8419, 1.396),(-0.7581, -0.8562, 1.497),(-0.7626, -0.8628, 1.544),(-1.24, -0.846, 1.426),(-1.208, -0.8334, 1.336),(-0.749, -0.8497, 1.451),(-1.602, -0.8175, 1.224),(-1.757, -0.7942, 1.059),(-1.536, -0.8067, 1.147),(-1.381, -0.8299, 1.312),(-1.402, -0.8362, 1.356),(-1.806, -0.7993, 1.095),(-1.713, -0.7887, 1.02),(-1.355, -0.824, 1.27),(-2.1, -0.7454, 0.7141),(-2.158, -0.7055, 0.4315),(-1.938, -0.7348, 0.6388),(-1.881, -0.7747, 0.9214),(-1.942, -0.7804, 0.9611),(-2.262, -0.7108, 0.4692),(-2.056, -0.6995, 0.3896),(-1.816, -0.7697, 0.8859),(-2.464, -0.6516, 0.05072),(-2.393, -0.6132, -0.2206),(-2.166, -0.6419, -0.01764),(-2.237, -0.6803, 0.2537),(-2.364, -0.6862, 0.2949),(-2.568, -0.6172, -0.1924),(-2.218, -0.6086, -0.2534),(-2.11, -0.6751, 0.2169),(-2.654, -0.5537, -0.6418),(-2.475, -0.5151, -0.9145),(-2.252, -0.5488, -0.6764),(-2.43, -0.5873, -0.4037),(-2.624, -0.5912, -0.3764),(-2.689, -0.5162, -0.9068),(-2.262, -0.5133, -0.9269),(-2.236, -0.5842, -0.4263),(-2.228, -0.1614, -1.61),(-2.256, -0.2378, -1.07),(-2.703, -0.2389, -1.063),(-2.683, -0.1593, -1.626),(-0.5818, -0.6022, 1.506),(-0.08417, -0.6052, 1.527),(-0.08583, -0.6206, 1.637),(-0.5901, -0.617, 1.61),(-0.7594, -0.6134, 1.585),(-1.246, -0.5963, 1.465),(-1.21, -0.5824, 1.366),(-0.7444, -0.5989, 1.483),(-1.401, -0.5869, 1.398),(-1.813, -0.5492, 1.131),(-1.713, -0.5377, 1.05),(-1.349, -0.5735, 1.303),(-1.944, -0.5309, 1.002),(-2.268, -0.4604, 0.5032),(-2.053, -0.4486, 0.4199),(-1.811, -0.5196, 0.9222),(-2.366, -0.4366, 0.3353),(-2.574, -0.3666, -0.1599),(-2.215, -0.3577, -0.2226),(-2.104, -0.4252, 0.2548),(-2.627, -0.3416, -0.3366),(-2.693, -0.2654, -0.875),(-2.258, -0.2625, -0.8956),(-2.232, -0.3344, -0.3875),(-2.122, -0.111, -1.713),(-2.167, -0.009349, -1.313),(-2.484, -0.06101, -0.9475),(-2.769, -0.008573, -1.318),(-2.452, 0.04308, -1.684),(-0.332, -0.4105, 1.524),(-0.001013, -0.4231, 1.613),(-0.3389, -0.4312, 1.67),(-0.6699, -0.4186, 1.581),(-1.007, -0.4171, 1.57),(-1.308, -0.3961, 1.422),(-0.9727, -0.3976, 1.433),(-0.672, -0.4186, 1.581),(-1.621, -0.3799, 1.308),(-1.829, -0.3469, 1.074),(-1.517, -0.363, 1.188),(-1.31, -0.396, 1.421),(-2.137, -0.3073, 0.7938),(-2.208, -0.2522, 0.4048),(-1.901, -0.2917, 0.6837),(-1.83, -0.3467, 1.073),(-2.523, -0.2129, 0.1268),(-2.421, -0.1602, -0.2458),(-2.107, -0.1994, 0.03084),(-2.209, -0.2521, 0.4034),(-2.73, -0.114, -0.5729),(-2.484, -0.06121, -0.946),(-2.175, -0.1072, -0.6207),(-2.422, -0.16, -0.2476),(-1.061, 0.08604, -1.691),(2.78, 0.5426, -1.652),(2.79, 0.2435, -1.293),(2.789, 0.4325, -0.8732),(2.792, 0.7941, -1.216),(2.122, 0.1477, -1.677),(1.963, 0.2426, -1.32),(2.154, 0.183, -0.9298),(2.145, 0.09869, -1.307),(2.751, 0.1362, -0.534),(2.677, 0.3286, -0.1389),(2.754, 0.6865, -0.4557),(1.972, 0.2766, -0.6594),(2.128, 0.1079, -0.2563),(2.154, 0.0194, -0.6038),(2.544, 0.03659, 0.1703),(2.371, 0.2322, 0.5426),(2.546, 0.5868, 0.2493),(1.909, 0.1927, -0.06564),(2.003, 0.01768, 0.3814),(2.085, -0.07226, 0.04428),(2.155, -0.05849, 0.8426),(1.911, 0.1426, 1.177),(2.157, 0.4917, 0.9222),(1.722, 0.1089, 0.5264),(1.711, -0.06958, 0.9984),(1.881, -0.1637, 0.6909),(1.634, -0.1319, 1.362),(1.336, 0.08874, 1.557),(1.636, 0.4181, 1.442),(1.376, 0.0447, 0.9807),(1.252, -0.1188, 1.346),(1.503, -0.2339, 1.187),(1.013, -0.1695, 1.628),(0.6794, 0.06411, 1.731),(1.014, 0.3805, 1.708),(0.8849, 0.0135, 1.201),(0.6541, -0.1414, 1.506),(0.9662, -0.268, 1.429),(0.3405, -0.1838, 1.729),(0.3407, 0.3661, 1.81),(0.3027, 0.001732, 1.285),(0.3304, -0.2809, 1.519),(2.166, 0.02262, -0.951),(2.162, 0.06963, -1.303),(2.134, 0.1242, -1.669),(2.14, -0.07222, -0.2804),(2.171, -0.0284, -0.6098),(2.014, -0.1627, 0.3595),(2.102, -0.1204, 0.04094),(1.72, -0.2505, 0.9801),(1.897, -0.2125, 0.6923),(1.257, -0.3001, 1.331),(1.514, -0.2835, 1.194),(0.656, -0.3228, 1.492),(0.9712, -0.318, 1.438),(0.3317, -0.3309, 1.529),(0.6776, -0.2941, 1.669),(0.3392, -0.34, 1.689),(0, -0.3003, 1.713),(1.331, -0.2696, 1.496),(1.009, -0.3259, 1.589),(1.903, -0.2161, 1.118),(1.625, -0.2886, 1.325),(2.361, -0.1268, 0.4862),(2.141, -0.2157, 0.8097),(2.666, -0.03072, -0.1929),(2.528, -0.1212, 0.1413),(2.778, 0.07259, -0.9234),(2.734, -0.02207, -0.5593),(2.769, 0.1812, -1.691),(2.773, 0.08362, -1.307),(1.153, 0.1896, -1.613),(1.256, 0.2732, -1.231),(1.241, 0.2441, -0.8359),(1.167, 0.1914, -0.4632),(0.9965, 0.1411, -0.1071),(0.7287, 0.1121, 0.09755),(0.3811, 0.09886, 0.1912),(2.249, -0.4499, -1.376),(2.479, -0.4877, -1.108),(2.687, -0.4493, -1.38),(2.456, -0.4115, -1.647),(0.3333, -0.8549, 1.488),(0.09134, -0.8631, 1.546),(0.3376, -0.868, 1.581),(0.5796, -0.8598, 1.523),(1.001, -0.8541, 1.482),(1.222, -0.8398, 1.381),(0.9791, -0.8419, 1.396),(0.7581, -0.8562, 1.497),(1.602, -0.8175, 1.224),(1.757, -0.7942, 1.059),(1.536, -0.8067, 1.147),(1.381, -0.8299, 1.312),(2.1, -0.7454, 0.7141),(2.158, -0.7055, 0.4315),(1.938, -0.7348, 0.6388),(1.881, -0.7748, 0.9214),(2.464, -0.6516, 0.05072),(2.393, -0.6132, -0.2206),(2.166, -0.6419, -0.01764),(2.237, -0.6803, 0.2537),(2.654, -0.5537, -0.6418),(2.475, -0.5151, -0.9145),(2.252, -0.5488, -0.6764),(2.43, -0.5873, -0.4037),(2.255, 0.02316, -1.033),(2.167, -0.009349, -1.313),(2.227, 0.09968, -1.574),(2.484, 0.01499, -0.9361),(2.704, 0.02213, -1.026),(2.484, -0.06101, -0.9475),(2.684, 0.1019, -1.59),(2.769, -0.008573, -1.318),(2.452, 0.1247, -1.673),(2.452, 0.04308, -1.684),(0.08337, -0.3438, 1.562),(0.332, -0.4105, 1.524),(0.5823, -0.3407, 1.54),(0, -0.347, 1.624),(0.08511, -0.36, 1.676),(0.001013, -0.4231, 1.613),(0.591, -0.3563, 1.65),(0.3389, -0.4312, 1.67),(0.6709, -0.3425, 1.592),(0.6699, -0.4186, 1.581),(1.247, -0.3356, 1.504),(1.007, -0.4171, 1.57),(0.7589, -0.3527, 1.625),(1.309, -0.32, 1.433),(1.21, -0.3209, 1.4),(1.308, -0.3961, 1.422),(0.7432, -0.3375, 1.517),(0.9727, -0.3976, 1.433),(0.672, -0.4186, 1.581),(1.816, -0.2883, 1.17),(1.621, -0.3799, 1.308),(1.402, -0.3262, 1.438),(1.83, -0.2707, 1.084),(1.712, -0.2763, 1.085),(1.829, -0.3469, 1.074),(1.347, -0.3122, 1.338),(1.517, -0.363, 1.188),(1.31, -0.396, 1.421),(2.271, -0.1994, 0.5406),(2.137, -0.3073, 0.7938),(1.946, -0.2701, 1.041),(2.209, -0.1761, 0.415),(2.051, -0.1873, 0.4556),(2.208, -0.2522, 0.4048),(1.809, -0.2584, 0.9582),(1.901, -0.2917, 0.6837),(1.83, -0.3467, 1.073),(2.576, -0.1055, -0.1234),(2.523, -0.2129, 0.1268),(2.368, -0.1757, 0.3733),(2.422, -0.08402, -0.236),(2.214, -0.09652, -0.1866),(2.421, -0.1602, -0.2458),(2.103, -0.1642, 0.2919),(2.107, -0.1994, 0.03084),(2.209, -0.2521, 0.4034),(2.695, -0.004304, -0.8387),(2.73, -0.114, -0.5729),(2.628, -0.08063, -0.299),(2.257, -0.001381, -0.8594),(2.484, -0.06122, -0.946),(2.231, -0.07339, -0.3501),(2.175, -0.1072, -0.6207),(2.422, -0.16, -0.2476),(2.122, 0.156, -1.675),(1.061, 0.08604, -1.691),(0, 0.1637, -1.682),(2.169, -0.3874, -1.366),(2.26, -0.4875, -1.109),(2.233, -0.4122, -1.642),(2.484, -0.4388, -1.003),(2.699, -0.4886, -1.102),(2.766, -0.3866, -1.372),(2.679, -0.41, -1.657),(2.452, -0.3352, -1.735),(0.3322, -0.7892, 1.475),(0.08821, -0.8561, 1.497),(0.5782, -0.8531, 1.476),(0.003092, -0.8011, 1.559),(0.08971, -0.8702, 1.596),(0.3387, -0.8086, 1.612),(0.5857, -0.8665, 1.57),(0.6678, -0.7967, 1.528),(1.006, -0.7945, 1.513),(1.24, -0.846, 1.426),(0.7626, -0.8628, 1.544),(1.306, -0.7743, 1.369),(1.208, -0.8334, 1.336),(0.9738, -0.7763, 1.383),(0.749, -0.8497, 1.451),(0.6741, -0.7966, 1.527),(1.618, -0.7575, 1.251),(1.806, -0.7993, 1.095),(1.402, -0.8362, 1.356),(1.826, -0.7252, 1.022),(1.713, -0.7887, 1.02),(1.52, -0.7415, 1.137),(1.355, -0.824, 1.27),(1.312, -0.7739, 1.366),(2.133, -0.6851, 0.7387),(2.262, -0.7108, 0.4692),(1.942, -0.7804, 0.9611),(2.207, -0.6305, 0.3528),(2.056, -0.6995, 0.3896),(1.905, -0.67, 0.6319),(1.816, -0.7697, 0.8859),(1.831, -0.7246, 1.018),(2.52, -0.5909, 0.07258),(2.568, -0.6172, -0.1924),(2.364, -0.6862, 0.2949),(2.421, -0.5386, -0.2974),(2.218, -0.6086, -0.2534),(2.11, -0.5775, -0.02187),(2.11, -0.6751, 0.2169),(2.209, -0.6299, 0.3481),(2.728, -0.492, -0.6266),(2.689, -0.5162, -0.9068),(2.624, -0.5912, -0.3764),(2.483, -0.4395, -0.9976),(2.262, -0.5133, -0.9269),(2.178, -0.4853, -0.6739),(2.236, -0.5842, -0.4263),(2.422, -0.5378, -0.3029),(2.256, -0.2378, -1.07),(2.228, -0.1614, -1.61),(2.703, -0.2389, -1.063),(2.683, -0.1593, -1.626),(0.08417, -0.6052, 1.527),(0.5817, -0.6022, 1.506),(0.08583, -0.6206, 1.637),(0.5901, -0.617, 1.61),(1.246, -0.5963, 1.465),(0.7594, -0.6134, 1.585),(1.21, -0.5824, 1.366),(0.7444, -0.5989, 1.483),(1.813, -0.5492, 1.131),(1.401, -0.5869, 1.398),(1.713, -0.5377, 1.05),(1.349, -0.5735, 1.303),(2.268, -0.4604, 0.5032),(1.944, -0.5309, 1.002),(2.053, -0.4486, 0.4199),(1.811, -0.5196, 0.9222),(2.574, -0.3666, -0.1599),(2.366, -0.4366, 0.3353),(2.215, -0.3577, -0.2226),(2.104, -0.4252, 0.2548),(2.693, -0.2654, -0.875),(2.627, -0.3416, -0.3366),(2.258, -0.2625, -0.8956),(2.232, -0.3344, -0.3875),(2.122, -0.111, -1.713),(1.061, -0.3634, -1.754),(0, -0.1076, -1.721)]

HAnimSegment734.coord = Coordinate749
Transform750 = x3d.Transform(DEF="Upper_teeth_JinBlink")
Transform750.translation = [0,9.723,11.67]
Shape751 = x3d.Shape()
Appearance752 = x3d.Appearance(USE="BaseAppearance_JinBlink")

Shape751.appearance = Appearance752
IndexedFaceSet753 = x3d.IndexedFaceSet(DEF="Upper_teeth-FACES_JinBlink")
IndexedFaceSet753.solid = False
IndexedFaceSet753.creaseAngle = 3.14159
IndexedFaceSet753.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,5,2,-1,2,3,4,-1,6,7,2,-1,2,5,6,-1,8,1,2,-1,2,7,8,-1,9,12,11,-1,11,10,9,-1,13,14,11,-1,11,12,13,-1,15,16,11,-1,11,14,15,-1,17,10,11,-1,11,16,17,-1,8,7,19,-1,19,18,8,-1,6,20,19,-1,19,7,6,-1,21,22,19,-1,19,20,21,-1,23,18,19,-1,19,22,23,-1,17,16,25,-1,25,24,17,-1,15,26,25,-1,25,16,15,-1,27,28,25,-1,25,26,27,-1,29,24,25,-1,25,28,29,-1,23,22,31,-1,31,30,23,-1,21,32,31,-1,31,22,21,-1,33,34,31,-1,31,32,33,-1,35,30,31,-1,31,34,35,-1,29,28,37,-1,37,36,29,-1,27,38,37,-1,37,28,27,-1,39,40,37,-1,37,38,39,-1,41,36,37,-1,37,40,41,-1,35,34,43,-1,43,42,35,-1,33,44,43,-1,43,34,33,-1,45,46,43,-1,43,44,45,-1,47,42,43,-1,43,46,47,-1,41,40,87,-1,87,48,41,-1,39,88,87,-1,87,40,39,-1,145,146,87,-1,87,88,145,-1,147,48,87,-1,87,146,147,-1,47,46,149,-1,149,148,47,-1,45,150,149,-1,149,46,45,-1,151,152,149,-1,149,150,151,-1,153,148,149,-1,149,152,153,-1,147,146,155,-1,155,154,147,-1,145,156,155,-1,155,146,145,-1,157,158,155,-1,155,156,157,-1,159,154,155,-1,155,158,159,-1,153,152,161,-1,161,160,153,-1,151,162,161,-1,161,152,151,-1,163,164,161,-1,161,162,163,-1,165,160,161,-1,161,164,165,-1,159,158,167,-1,167,166,159,-1,157,168,167,-1,167,158,157,-1,169,170,167,-1,167,168,169,-1,171,166,167,-1,167,170,171,-1,165,164,173,-1,173,172,165,-1,163,174,173,-1,173,164,163,-1,175,176,173,-1,173,174,175,-1,177,172,173,-1,173,176,177,-1,171,170,179,-1,179,178,171,-1,169,180,179,-1,179,170,169,-1,181,182,179,-1,179,180,181,-1,183,178,179,-1,179,182,183,-1,9,10,185,-1,185,184,9,-1,17,186,185,-1,185,10,17,-1,187,188,185,-1,185,186,187,-1,189,184,185,-1,185,188,189,-1,17,24,190,-1,190,186,17,-1,29,191,190,-1,190,24,29,-1,192,193,190,-1,190,191,192,-1,187,186,190,-1,190,193,187,-1,29,36,194,-1,194,191,29,-1,41,195,194,-1,194,36,41,-1,262,263,194,-1,194,195,262,-1,192,191,194,-1,194,263,192,-1,41,48,292,-1,292,195,41,-1,147,293,292,-1,292,48,147,-1,294,295,292,-1,292,293,294,-1,262,195,292,-1,292,295,262,-1,147,154,296,-1,296,293,147,-1,159,297,296,-1,296,154,159,-1,298,299,296,-1,296,297,298,-1,294,293,296,-1,296,299,294,-1,159,166,300,-1,300,297,159,-1,171,301,300,-1,300,166,171,-1,302,303,300,-1,300,301,302,-1,298,297,300,-1,300,303,298,-1,171,178,304,-1,304,301,171,-1,183,305,304,-1,304,178,183,-1,306,307,304,-1,304,305,306,-1,302,301,304,-1,304,307,302,-1,175,174,309,-1,309,308,175,-1,163,310,309,-1,309,174,163,-1,311,312,309,-1,309,310,311,-1,313,308,309,-1,309,312,313,-1,163,162,314,-1,314,310,163,-1,151,315,314,-1,314,162,151,-1,316,317,314,-1,314,315,316,-1,311,310,314,-1,314,317,311,-1,151,150,318,-1,318,315,151,-1,45,319,318,-1,318,150,45,-1,320,321,318,-1,318,319,320,-1,316,315,318,-1,318,321,316,-1,45,44,322,-1,322,319,45,-1,33,323,322,-1,322,44,33,-1,324,325,322,-1,322,323,324,-1,320,319,322,-1,322,325,320,-1,33,32,326,-1,326,323,33,-1,21,327,326,-1,326,32,21,-1,328,364,326,-1,326,327,328,-1,324,323,326,-1,326,364,324,-1,21,20,421,-1,421,327,21,-1,6,422,421,-1,421,20,6,-1,423,424,421,-1,421,422,423,-1,328,327,421,-1,421,424,328,-1,6,5,425,-1,425,422,6,-1,4,426,425,-1,425,5,4,-1,427,428,425,-1,425,426,427,-1,423,422,425,-1,425,428,423,-1,15,14,430,-1,430,429,15,-1,13,431,430,-1,430,14,13,-1,432,429,430,-1,430,431,432,-1,27,26,434,-1,434,433,27,-1,15,429,434,-1,434,26,15,-1,432,433,434,-1,434,429,432,-1,39,38,436,-1,436,435,39,-1,27,433,436,-1,436,38,27,-1,432,435,436,-1,436,433,432,-1,145,88,438,-1,438,437,145,-1,39,435,438,-1,438,88,39,-1,432,437,438,-1,438,435,432,-1,157,156,440,-1,440,439,157,-1,145,437,440,-1,440,156,145,-1,432,439,440,-1,440,437,432,-1,169,168,442,-1,442,441,169,-1,157,439,442,-1,442,168,157,-1,432,441,442,-1,442,439,432,-1,181,180,444,-1,444,443,181,-1,169,441,444,-1,444,180,169,-1,432,443,444,-1,444,441,432,-1,49,52,51,-1,51,50,49,-1,53,54,51,-1,51,52,53,-1,55,56,51,-1,51,54,55,-1,57,50,51,-1,51,56,57,-1,58,61,60,-1,60,59,58,-1,62,63,60,-1,60,61,62,-1,64,65,60,-1,60,63,64,-1,66,59,60,-1,60,65,66,-1,67,70,69,-1,69,68,67,-1,71,72,69,-1,69,70,71,-1,73,74,69,-1,69,72,73,-1,75,68,69,-1,69,74,75,-1,76,79,78,-1,78,77,76,-1,80,81,78,-1,78,79,80,-1,82,83,78,-1,78,81,82,-1,84,77,78,-1,78,83,84,-1,85,90,89,-1,89,86,85,-1,91,92,89,-1,89,90,91,-1,93,94,89,-1,89,92,93,-1,95,86,89,-1,89,94,95,-1,96,99,98,-1,98,97,96,-1,100,101,98,-1,98,99,100,-1,102,103,98,-1,98,101,102,-1,104,97,98,-1,98,103,104,-1,105,108,107,-1,107,106,105,-1,109,110,107,-1,107,108,109,-1,111,112,107,-1,107,110,111,-1,113,106,107,-1,107,112,113,-1,114,117,116,-1,116,115,114,-1,118,119,116,-1,116,117,118,-1,120,121,116,-1,116,119,120,-1,122,115,116,-1,116,121,122,-1,118,124,123,-1,123,119,118,-1,125,126,123,-1,123,124,125,-1,127,128,123,-1,123,126,127,-1,120,119,123,-1,123,128,120,-1,125,130,129,-1,129,126,125,-1,131,132,129,-1,129,130,131,-1,133,134,129,-1,129,132,133,-1,127,126,129,-1,129,134,127,-1,131,136,135,-1,135,132,131,-1,114,115,135,-1,135,136,114,-1,122,137,135,-1,135,115,122,-1,133,132,135,-1,135,137,133,-1,138,141,140,-1,140,139,138,-1,142,143,140,-1,140,141,142,-1,144,196,140,-1,140,143,144,-1,197,139,140,-1,140,196,197,-1,142,199,198,-1,198,143,142,-1,200,201,198,-1,198,199,200,-1,202,203,198,-1,198,201,202,-1,144,143,198,-1,198,203,144,-1,200,205,204,-1,204,201,200,-1,206,207,204,-1,204,205,206,-1,208,209,204,-1,204,207,208,-1,202,201,204,-1,204,209,202,-1,206,211,210,-1,210,207,206,-1,138,139,210,-1,210,211,138,-1,197,212,210,-1,210,139,197,-1,208,207,210,-1,210,212,208,-1,206,215,214,-1,214,213,206,-1,216,217,214,-1,214,215,216,-1,218,219,214,-1,214,217,218,-1,220,213,214,-1,214,219,220,-1,216,222,221,-1,221,217,216,-1,223,224,221,-1,221,222,223,-1,225,226,221,-1,221,224,225,-1,218,217,221,-1,221,226,218,-1,223,228,227,-1,227,224,223,-1,138,229,227,-1,227,228,138,-1,230,231,227,-1,227,229,230,-1,225,224,227,-1,227,231,225,-1,138,211,232,-1,232,229,138,-1,206,213,232,-1,232,211,206,-1,220,233,232,-1,232,213,220,-1,230,229,232,-1,232,233,230,-1,216,236,235,-1,235,234,216,-1,237,238,235,-1,235,236,237,-1,239,240,235,-1,235,238,239,-1,241,234,235,-1,235,240,241,-1,237,243,242,-1,242,238,237,-1,244,245,242,-1,242,243,244,-1,246,247,242,-1,242,245,246,-1,239,238,242,-1,242,247,239,-1,244,249,248,-1,248,245,244,-1,223,250,248,-1,248,249,223,-1,251,252,248,-1,248,250,251,-1,246,245,248,-1,248,252,246,-1,223,222,253,-1,253,250,223,-1,216,234,253,-1,253,222,216,-1,241,254,253,-1,253,234,241,-1,251,250,253,-1,253,254,251,-1,237,257,256,-1,256,255,237,-1,258,259,256,-1,256,257,258,-1,260,261,256,-1,256,259,260,-1,264,255,256,-1,256,261,264,-1,258,266,265,-1,265,259,258,-1,267,268,265,-1,265,266,267,-1,269,270,265,-1,265,268,269,-1,260,259,265,-1,265,270,260,-1,267,272,271,-1,271,268,267,-1,244,273,271,-1,271,272,244,-1,274,275,271,-1,271,273,274,-1,269,268,271,-1,271,275,269,-1,244,243,276,-1,276,273,244,-1,237,255,276,-1,276,243,237,-1,264,277,276,-1,276,255,264,-1,274,273,276,-1,276,277,274,-1,258,280,279,-1,279,278,258,-1,281,282,279,-1,279,280,281,-1,283,284,279,-1,279,282,283,-1,285,278,279,-1,279,284,285,-1,281,287,286,-1,286,282,281,-1,288,289,286,-1,286,287,288,-1,290,291,286,-1,286,289,290,-1,283,282,286,-1,286,291,283,-1,288,330,329,-1,329,289,288,-1,267,331,329,-1,329,330,267,-1,332,333,329,-1,329,331,332,-1,290,289,329,-1,329,333,290,-1,267,266,334,-1,334,331,267,-1,258,278,334,-1,334,266,258,-1,285,335,334,-1,334,278,285,-1,332,331,334,-1,334,335,332,-1,281,338,337,-1,337,336,281,-1,125,339,337,-1,337,338,125,-1,340,341,337,-1,337,339,340,-1,342,336,337,-1,337,341,342,-1,125,124,343,-1,343,339,125,-1,118,344,343,-1,343,124,118,-1,345,346,343,-1,343,344,345,-1,340,339,343,-1,343,346,340,-1,118,348,347,-1,347,344,118,-1,288,349,347,-1,347,348,288,-1,350,351,347,-1,347,349,350,-1,345,344,347,-1,347,351,345,-1,288,287,352,-1,352,349,288,-1,281,336,352,-1,352,287,281,-1,342,353,352,-1,352,336,342,-1,350,349,352,-1,352,353,350,-1,432,431,446,-1,446,445,432,-1,13,447,446,-1,446,431,13,-1,448,449,446,-1,446,447,448,-1,450,445,446,-1,446,449,450,-1,354,357,356,-1,356,355,354,-1,358,359,356,-1,356,357,358,-1,53,52,356,-1,356,359,53,-1,49,355,356,-1,356,52,49,-1,358,361,360,-1,360,359,358,-1,362,363,360,-1,360,361,362,-1,55,54,360,-1,360,363,55,-1,53,359,360,-1,360,54,53,-1,362,366,365,-1,365,363,362,-1,367,368,365,-1,365,366,367,-1,57,56,365,-1,365,368,57,-1,55,363,365,-1,365,56,55,-1,367,370,369,-1,369,368,367,-1,354,355,369,-1,369,370,354,-1,49,50,369,-1,369,355,49,-1,57,368,369,-1,369,50,57,-1,371,374,373,-1,373,372,371,-1,375,376,373,-1,373,374,375,-1,62,61,373,-1,373,376,62,-1,58,372,373,-1,373,61,58,-1,375,378,377,-1,377,376,375,-1,379,380,377,-1,377,378,379,-1,64,63,377,-1,377,380,64,-1,62,376,377,-1,377,63,62,-1,379,382,381,-1,381,380,379,-1,383,384,381,-1,381,382,383,-1,66,65,381,-1,381,384,66,-1,64,380,381,-1,381,65,64,-1,383,386,385,-1,385,384,383,-1,371,372,385,-1,385,386,371,-1,58,59,385,-1,385,372,58,-1,66,384,385,-1,385,59,66,-1,387,390,389,-1,389,388,387,-1,391,392,389,-1,389,390,391,-1,71,70,389,-1,389,392,71,-1,67,388,389,-1,389,70,67,-1,391,394,393,-1,393,392,391,-1,395,396,393,-1,393,394,395,-1,73,72,393,-1,393,396,73,-1,71,392,393,-1,393,72,71,-1,395,398,397,-1,397,396,395,-1,399,400,397,-1,397,398,399,-1,75,74,397,-1,397,400,75,-1,73,396,397,-1,397,74,73,-1,399,402,401,-1,401,400,399,-1,387,388,401,-1,401,402,387,-1,67,68,401,-1,401,388,67,-1,75,400,401,-1,401,68,75,-1,403,406,405,-1,405,404,403,-1,407,408,405,-1,405,406,407,-1,80,79,405,-1,405,408,80,-1,76,404,405,-1,405,79,76,-1,407,410,409,-1,409,408,407,-1,411,412,409,-1,409,410,411,-1,82,81,409,-1,409,412,82,-1,80,408,409,-1,409,81,80,-1,411,414,413,-1,413,412,411,-1,415,416,413,-1,413,414,415,-1,84,83,413,-1,413,416,84,-1,82,412,413,-1,413,83,82,-1,415,418,417,-1,417,416,415,-1,403,404,417,-1,417,418,403,-1,76,77,417,-1,417,404,76,-1,84,416,417,-1,417,77,84,-1,419,458,457,-1,457,420,419,-1,459,460,457,-1,457,458,459,-1,91,90,457,-1,457,460,91,-1,85,420,457,-1,457,90,85,-1,459,462,461,-1,461,460,459,-1,463,464,461,-1,461,462,463,-1,93,92,461,-1,461,464,93,-1,91,460,461,-1,461,92,91,-1,463,466,465,-1,465,464,463,-1,467,468,465,-1,465,466,467,-1,95,94,465,-1,465,468,95,-1,93,464,465,-1,465,94,93,-1,467,470,469,-1,469,468,467,-1,419,420,469,-1,469,470,419,-1,85,86,469,-1,469,420,85,-1,95,468,469,-1,469,86,95,-1,471,474,473,-1,473,472,471,-1,475,476,473,-1,473,474,475,-1,100,99,473,-1,473,476,100,-1,96,472,473,-1,473,99,96,-1,475,478,477,-1,477,476,475,-1,479,480,477,-1,477,478,479,-1,102,101,477,-1,477,480,102,-1,100,476,477,-1,477,101,100,-1,479,482,481,-1,481,480,479,-1,483,484,481,-1,481,482,483,-1,104,103,481,-1,481,484,104,-1,102,480,481,-1,481,103,102,-1,483,486,485,-1,485,484,483,-1,471,472,485,-1,485,486,471,-1,96,97,485,-1,485,472,96,-1,104,484,485,-1,485,97,104,-1,487,490,489,-1,489,488,487,-1,491,493,489,-1,489,490,491,-1,109,108,489,-1,489,493,109,-1,105,488,489,-1,489,108,105,-1,491,495,494,-1,494,493,491,-1,496,497,494,-1,494,495,496,-1,111,110,494,-1,494,497,111,-1,109,493,494,-1,494,110,109,-1,496,499,498,-1,498,497,496,-1,500,501,498,-1,498,499,500,-1,113,112,498,-1,498,501,113,-1,111,497,498,-1,498,112,111,-1,500,503,502,-1,502,501,500,-1,487,488,502,-1,502,503,487,-1,105,106,502,-1,502,488,105,-1,113,501,502,-1,502,106,113,-1,120,505,504,-1,504,121,120,-1,358,357,504,-1,504,505,358,-1,354,506,504,-1,504,357,354,-1,122,121,504,-1,504,506,122,-1,127,508,507,-1,507,128,127,-1,362,361,507,-1,507,508,362,-1,358,505,507,-1,507,361,358,-1,120,128,507,-1,507,505,120,-1,133,510,509,-1,509,134,133,-1,367,366,509,-1,509,510,367,-1,362,508,509,-1,509,366,362,-1,127,134,509,-1,509,508,127,-1,122,506,511,-1,511,137,122,-1,354,370,511,-1,511,506,354,-1,367,510,511,-1,511,370,367,-1,133,137,511,-1,511,510,133,-1,144,513,512,-1,512,196,144,-1,375,374,512,-1,512,513,375,-1,371,514,512,-1,512,374,371,-1,197,196,512,-1,512,514,197,-1,202,516,515,-1,515,203,202,-1,379,378,515,-1,515,516,379,-1,375,513,515,-1,515,378,375,-1,144,203,515,-1,515,513,144,-1,208,518,517,-1,517,209,208,-1,383,382,517,-1,517,518,383,-1,379,516,517,-1,517,382,379,-1,202,209,517,-1,517,516,202,-1,197,514,519,-1,519,212,197,-1,371,386,519,-1,519,514,371,-1,383,518,519,-1,519,386,383,-1,208,212,519,-1,519,518,208,-1,218,521,520,-1,520,219,218,-1,391,390,520,-1,520,521,391,-1,387,522,520,-1,520,390,387,-1,220,219,520,-1,520,522,220,-1,225,524,523,-1,523,226,225,-1,395,394,523,-1,523,524,395,-1,391,521,523,-1,523,394,391,-1,218,226,523,-1,523,521,218,-1,230,526,525,-1,525,231,230,-1,399,398,525,-1,525,526,399,-1,395,524,525,-1,525,398,395,-1,225,231,525,-1,525,524,225,-1,220,522,527,-1,527,233,220,-1,387,402,527,-1,527,522,387,-1,399,526,527,-1,527,402,399,-1,230,233,527,-1,527,526,230,-1,239,529,528,-1,528,240,239,-1,407,406,528,-1,528,529,407,-1,403,530,528,-1,528,406,403,-1,241,240,528,-1,528,530,241,-1,246,532,531,-1,531,247,246,-1,411,410,531,-1,531,532,411,-1,407,529,531,-1,531,410,407,-1,239,247,531,-1,531,529,239,-1,251,534,533,-1,533,252,251,-1,415,414,533,-1,533,534,415,-1,411,532,533,-1,533,414,411,-1,246,252,533,-1,533,532,246,-1,241,530,535,-1,535,254,241,-1,403,418,535,-1,535,530,403,-1,415,534,535,-1,535,418,415,-1,251,254,535,-1,535,534,251,-1,260,537,536,-1,536,261,260,-1,459,458,536,-1,536,537,459,-1,419,538,536,-1,536,458,419,-1,264,261,536,-1,536,538,264,-1,269,540,539,-1,539,270,269,-1,463,462,539,-1,539,540,463,-1,459,537,539,-1,539,462,459,-1,260,270,539,-1,539,537,260,-1,274,542,541,-1,541,275,274,-1,467,466,541,-1,541,542,467,-1,463,540,541,-1,541,466,463,-1,269,275,541,-1,541,540,269,-1,264,538,543,-1,543,277,264,-1,419,470,543,-1,543,538,419,-1,467,542,543,-1,543,470,467,-1,274,277,543,-1,543,542,274,-1,283,545,544,-1,544,284,283,-1,475,474,544,-1,544,545,475,-1,471,546,544,-1,544,474,471,-1,285,284,544,-1,544,546,285,-1,290,548,547,-1,547,291,290,-1,479,478,547,-1,547,548,479,-1,475,545,547,-1,547,478,475,-1,283,291,547,-1,547,545,283,-1,332,600,598,-1,598,333,332,-1,483,482,598,-1,598,600,483,-1,479,548,598,-1,598,482,479,-1,290,333,598,-1,598,548,290,-1,285,546,602,-1,602,335,285,-1,471,486,602,-1,602,546,471,-1,483,600,602,-1,602,486,483,-1,332,335,602,-1,602,600,332,-1,340,606,604,-1,604,341,340,-1,491,490,604,-1,604,606,491,-1,487,609,604,-1,604,490,487,-1,342,341,604,-1,604,609,342,-1,345,642,616,-1,616,346,345,-1,496,495,616,-1,616,642,496,-1,491,606,616,-1,616,495,491,-1,340,346,616,-1,616,606,340,-1,350,644,643,-1,643,351,350,-1,500,499,643,-1,643,644,500,-1,496,642,643,-1,643,499,496,-1,345,351,643,-1,643,642,345,-1,342,609,645,-1,645,353,342,-1,487,503,645,-1,645,609,487,-1,500,644,645,-1,645,503,500,-1,350,353,645,-1,645,644,350,-1,448,452,451,-1,451,449,448,-1,453,454,451,-1,451,452,453,-1,455,456,451,-1,451,454,455,-1,450,449,451,-1,451,456,450,-1,492,551,550,-1,550,549,492,-1,552,553,550,-1,550,551,552,-1,554,555,550,-1,550,553,554,-1,556,549,550,-1,550,555,556,-1,557,560,559,-1,559,558,557,-1,561,562,559,-1,559,560,561,-1,563,564,559,-1,559,562,563,-1,565,558,559,-1,559,564,565,-1,552,567,566,-1,566,553,552,-1,568,569,566,-1,566,567,568,-1,570,571,566,-1,566,569,570,-1,554,553,566,-1,566,571,554,-1,561,573,572,-1,572,562,561,-1,574,575,572,-1,572,573,574,-1,576,577,572,-1,572,575,576,-1,563,562,572,-1,572,577,563,-1,568,579,578,-1,578,569,568,-1,580,581,578,-1,578,579,580,-1,582,583,578,-1,578,581,582,-1,570,569,578,-1,578,583,570,-1,574,585,584,-1,584,575,574,-1,586,587,584,-1,584,585,586,-1,588,589,584,-1,584,587,588,-1,576,575,584,-1,584,589,576,-1,580,591,590,-1,590,581,580,-1,592,593,590,-1,590,591,592,-1,594,595,590,-1,590,593,594,-1,582,581,590,-1,590,595,582,-1,586,597,596,-1,596,587,586,-1,599,601,596,-1,596,597,599,-1,603,605,596,-1,596,601,603,-1,588,587,596,-1,596,605,588,-1,592,608,607,-1,607,593,592,-1,610,611,607,-1,607,608,610,-1,612,613,607,-1,607,611,612,-1,594,593,607,-1,607,613,594,-1,599,615,614,-1,614,601,599,-1,617,618,614,-1,614,615,617,-1,619,620,614,-1,614,618,619,-1,603,601,614,-1,614,620,603,-1,610,622,621,-1,621,611,610,-1,623,624,621,-1,621,622,623,-1,625,626,621,-1,621,624,625,-1,612,611,621,-1,621,626,612,-1,617,628,627,-1,627,618,617,-1,629,630,627,-1,627,628,629,-1,631,632,627,-1,627,630,631,-1,619,618,627,-1,627,632,619,-1,623,634,633,-1,633,624,623,-1,177,176,633,-1,633,634,177,-1,175,635,633,-1,633,176,175,-1,625,624,633,-1,633,635,625,-1,629,637,636,-1,636,630,629,-1,183,182,636,-1,636,637,183,-1,181,638,636,-1,636,182,181,-1,631,630,636,-1,636,638,631,-1,557,640,639,-1,639,560,557,-1,641,707,639,-1,639,640,641,-1,708,793,639,-1,639,707,708,-1,561,560,639,-1,639,793,561,-1,561,793,822,-1,822,573,561,-1,708,823,822,-1,822,793,708,-1,824,825,822,-1,822,823,824,-1,574,573,822,-1,822,825,574,-1,574,825,826,-1,826,585,574,-1,824,827,826,-1,826,825,824,-1,828,829,826,-1,826,827,828,-1,586,585,826,-1,826,829,586,-1,586,829,830,-1,830,597,586,-1,828,831,830,-1,830,829,828,-1,832,833,830,-1,830,831,832,-1,599,597,830,-1,830,833,599,-1,599,833,834,-1,834,615,599,-1,832,835,834,-1,834,833,832,-1,836,837,834,-1,834,835,836,-1,617,615,834,-1,834,837,617,-1,617,837,838,-1,838,628,617,-1,836,839,838,-1,838,837,836,-1,840,841,838,-1,838,839,840,-1,629,628,838,-1,838,841,629,-1,629,841,842,-1,842,637,629,-1,840,843,842,-1,842,841,840,-1,306,305,842,-1,842,843,306,-1,183,637,842,-1,842,305,183,-1,175,308,844,-1,844,635,175,-1,313,845,844,-1,844,308,313,-1,846,847,844,-1,844,845,846,-1,625,635,844,-1,844,847,625,-1,625,847,848,-1,848,626,625,-1,846,849,848,-1,848,847,846,-1,850,851,848,-1,848,849,850,-1,612,626,848,-1,848,851,612,-1,612,851,852,-1,852,613,612,-1,850,853,852,-1,852,851,850,-1,854,855,852,-1,852,853,854,-1,594,613,852,-1,852,855,594,-1,594,855,856,-1,856,595,594,-1,854,857,856,-1,856,855,854,-1,858,859,856,-1,856,857,858,-1,582,595,856,-1,856,859,582,-1,582,859,860,-1,860,583,582,-1,858,861,860,-1,860,859,858,-1,862,863,860,-1,860,861,862,-1,570,583,860,-1,860,863,570,-1,570,863,864,-1,864,571,570,-1,862,865,864,-1,864,863,862,-1,866,867,864,-1,864,865,866,-1,554,571,864,-1,864,867,554,-1,554,867,868,-1,868,555,554,-1,866,869,868,-1,868,867,866,-1,871,872,868,-1,868,869,871,-1,556,555,868,-1,868,872,556,-1,563,875,874,-1,874,564,563,-1,432,877,874,-1,874,875,432,-1,565,564,874,-1,874,877,565,-1,576,880,878,-1,878,577,576,-1,432,875,878,-1,878,880,432,-1,563,577,878,-1,878,875,563,-1,588,883,881,-1,881,589,588,-1,432,880,881,-1,881,883,432,-1,576,589,881,-1,881,880,576,-1,603,885,884,-1,884,605,603,-1,432,883,884,-1,884,885,432,-1,588,605,884,-1,884,883,588,-1,619,888,887,-1,887,620,619,-1,432,885,887,-1,887,888,432,-1,603,620,887,-1,887,885,603,-1,631,890,889,-1,889,632,631,-1,432,888,889,-1,889,890,432,-1,619,632,889,-1,889,888,619,-1,181,443,891,-1,891,638,181,-1,432,890,891,-1,891,443,432,-1,631,638,891,-1,891,890,631,-1,646,649,648,-1,648,647,646,-1,650,651,648,-1,648,649,650,-1,652,653,648,-1,648,651,652,-1,654,647,648,-1,648,653,654,-1,655,658,657,-1,657,656,655,-1,659,660,657,-1,657,658,659,-1,661,662,657,-1,657,660,661,-1,663,656,657,-1,657,662,663,-1,664,667,666,-1,666,665,664,-1,668,669,666,-1,666,667,668,-1,670,671,666,-1,666,669,670,-1,672,665,666,-1,666,671,672,-1,673,676,675,-1,675,674,673,-1,677,678,675,-1,675,676,677,-1,679,680,675,-1,675,678,679,-1,681,674,675,-1,675,680,681,-1,682,685,684,-1,684,683,682,-1,686,687,684,-1,684,685,686,-1,688,689,684,-1,684,687,688,-1,690,683,684,-1,684,689,690,-1,691,694,693,-1,693,692,691,-1,695,696,693,-1,693,694,695,-1,697,698,693,-1,693,696,697,-1,699,692,693,-1,693,698,699,-1,700,703,702,-1,702,701,700,-1,704,705,702,-1,702,703,704,-1,706,709,702,-1,702,705,706,-1,710,701,702,-1,702,709,710,-1,711,714,713,-1,713,712,711,-1,715,716,713,-1,713,714,715,-1,717,718,713,-1,713,716,717,-1,719,712,713,-1,713,718,719,-1,719,718,721,-1,721,720,719,-1,717,722,721,-1,721,718,717,-1,723,724,721,-1,721,722,723,-1,725,720,721,-1,721,724,725,-1,725,724,727,-1,727,726,725,-1,723,728,727,-1,727,724,723,-1,729,730,727,-1,727,728,729,-1,731,726,727,-1,727,730,731,-1,731,730,733,-1,733,732,731,-1,729,734,733,-1,733,730,729,-1,715,714,733,-1,733,734,715,-1,711,732,733,-1,733,714,711,-1,735,738,737,-1,737,736,735,-1,739,740,737,-1,737,738,739,-1,741,742,737,-1,737,740,741,-1,142,736,737,-1,737,742,142,-1,142,742,743,-1,743,199,142,-1,741,744,743,-1,743,742,741,-1,745,746,743,-1,743,744,745,-1,200,199,743,-1,743,746,200,-1,200,746,748,-1,748,747,200,-1,745,749,748,-1,748,746,745,-1,750,751,748,-1,748,749,750,-1,752,747,748,-1,748,751,752,-1,752,751,754,-1,754,753,752,-1,750,755,754,-1,754,751,750,-1,739,738,754,-1,754,755,739,-1,735,753,754,-1,754,738,735,-1,752,758,757,-1,757,756,752,-1,759,760,757,-1,757,758,759,-1,761,762,757,-1,757,760,761,-1,763,756,757,-1,757,762,763,-1,763,762,765,-1,765,764,763,-1,761,766,765,-1,765,762,761,-1,767,768,765,-1,765,766,767,-1,769,764,765,-1,765,768,769,-1,769,768,771,-1,771,770,769,-1,767,772,771,-1,771,768,767,-1,773,774,771,-1,771,772,773,-1,735,770,771,-1,771,774,735,-1,735,774,775,-1,775,753,735,-1,773,776,775,-1,775,774,773,-1,759,758,775,-1,775,776,759,-1,752,753,775,-1,775,758,752,-1,763,779,778,-1,778,777,763,-1,780,781,778,-1,778,779,780,-1,782,783,778,-1,778,781,782,-1,784,777,778,-1,778,783,784,-1,784,783,786,-1,786,785,784,-1,782,787,786,-1,786,783,782,-1,788,789,786,-1,786,787,788,-1,790,785,786,-1,786,789,790,-1,790,789,792,-1,792,791,790,-1,788,794,792,-1,792,789,788,-1,795,796,792,-1,792,794,795,-1,769,791,792,-1,792,796,769,-1,769,796,797,-1,797,764,769,-1,795,798,797,-1,797,796,795,-1,780,779,797,-1,797,798,780,-1,763,764,797,-1,797,779,763,-1,784,801,800,-1,800,799,784,-1,802,803,800,-1,800,801,802,-1,804,805,800,-1,800,803,804,-1,806,799,800,-1,800,805,806,-1,806,805,808,-1,808,807,806,-1,804,809,808,-1,808,805,804,-1,810,811,808,-1,808,809,810,-1,812,807,808,-1,808,811,812,-1,812,811,814,-1,814,813,812,-1,810,815,814,-1,814,811,810,-1,816,817,814,-1,814,815,816,-1,790,813,814,-1,814,817,790,-1,790,817,818,-1,818,785,790,-1,816,819,818,-1,818,817,816,-1,802,801,818,-1,818,819,802,-1,784,785,818,-1,818,801,784,-1,806,870,821,-1,821,820,806,-1,873,876,821,-1,821,870,873,-1,879,882,821,-1,821,876,879,-1,886,820,821,-1,821,882,886,-1,886,882,901,-1,901,896,886,-1,879,902,901,-1,901,882,879,-1,903,904,901,-1,901,902,903,-1,905,896,901,-1,901,904,905,-1,905,904,907,-1,907,906,905,-1,903,908,907,-1,907,904,903,-1,909,910,907,-1,907,908,909,-1,812,906,907,-1,907,910,812,-1,812,910,911,-1,911,807,812,-1,909,912,911,-1,911,910,909,-1,873,870,911,-1,911,912,873,-1,806,807,911,-1,911,870,806,-1,886,915,914,-1,914,913,886,-1,916,917,914,-1,914,915,916,-1,918,919,914,-1,914,917,918,-1,725,913,914,-1,914,919,725,-1,725,919,920,-1,920,720,725,-1,918,921,920,-1,920,919,918,-1,922,923,920,-1,920,921,922,-1,719,720,920,-1,920,923,719,-1,719,923,925,-1,925,924,719,-1,922,926,925,-1,925,923,922,-1,927,928,925,-1,925,926,927,-1,905,924,925,-1,925,928,905,-1,905,928,929,-1,929,896,905,-1,927,930,929,-1,929,928,927,-1,916,915,929,-1,929,930,916,-1,886,896,929,-1,929,915,886,-1,432,445,892,-1,892,877,432,-1,450,893,892,-1,892,445,450,-1,894,895,892,-1,892,893,894,-1,565,877,892,-1,892,895,565,-1,931,934,933,-1,933,932,931,-1,646,647,933,-1,933,934,646,-1,654,935,933,-1,933,647,654,-1,936,932,933,-1,933,935,936,-1,936,935,938,-1,938,937,936,-1,654,653,938,-1,938,935,654,-1,652,939,938,-1,938,653,652,-1,940,937,938,-1,938,939,940,-1,940,939,942,-1,942,941,940,-1,652,651,942,-1,942,939,652,-1,650,943,942,-1,942,651,650,-1,944,941,942,-1,942,943,944,-1,944,943,946,-1,946,945,944,-1,650,649,946,-1,946,943,650,-1,646,934,946,-1,946,649,646,-1,931,945,946,-1,946,934,931,-1,947,950,949,-1,949,948,947,-1,655,656,949,-1,949,950,655,-1,663,951,949,-1,949,656,663,-1,952,948,949,-1,949,951,952,-1,952,951,954,-1,954,953,952,-1,663,662,954,-1,954,951,663,-1,661,955,954,-1,954,662,661,-1,956,953,954,-1,954,955,956,-1,956,955,958,-1,958,957,956,-1,661,660,958,-1,958,955,661,-1,659,959,958,-1,958,660,659,-1,960,957,958,-1,958,959,960,-1,960,959,962,-1,962,961,960,-1,659,658,962,-1,962,959,659,-1,655,950,962,-1,962,658,655,-1,947,961,962,-1,962,950,947,-1,963,966,965,-1,965,964,963,-1,664,665,965,-1,965,966,664,-1,672,967,965,-1,965,665,672,-1,968,964,965,-1,965,967,968,-1,968,967,970,-1,970,969,968,-1,672,671,970,-1,970,967,672,-1,670,971,970,-1,970,671,670,-1,972,969,970,-1,970,971,972,-1,972,971,974,-1,974,973,972,-1,670,669,974,-1,974,971,670,-1,668,975,974,-1,974,669,668,-1,976,973,974,-1,974,975,976,-1,976,975,978,-1,978,977,976,-1,668,667,978,-1,978,975,668,-1,664,966,978,-1,978,667,664,-1,963,977,978,-1,978,966,963,-1,979,982,981,-1,981,980,979,-1,673,674,981,-1,981,982,673,-1,681,983,981,-1,981,674,681,-1,984,980,981,-1,981,983,984,-1,984,983,986,-1,986,985,984,-1,681,680,986,-1,986,983,681,-1,679,987,986,-1,986,680,679,-1,988,985,986,-1,986,987,988,-1,988,987,990,-1,990,989,988,-1,679,678,990,-1,990,987,679,-1,677,991,990,-1,990,678,677,-1,992,989,990,-1,990,991,992,-1,992,991,994,-1,994,993,992,-1,677,676,994,-1,994,991,677,-1,673,982,994,-1,994,676,673,-1,979,993,994,-1,994,982,979,-1,995,998,997,-1,997,996,995,-1,682,683,997,-1,997,998,682,-1,690,999,997,-1,997,683,690,-1,1000,996,997,-1,997,999,1000,-1,1000,999,1002,-1,1002,1001,1000,-1,690,689,1002,-1,1002,999,690,-1,688,1003,1002,-1,1002,689,688,-1,1004,1001,1002,-1,1002,1003,1004,-1,1004,1003,1006,-1,1006,1005,1004,-1,688,687,1006,-1,1006,1003,688,-1,686,1007,1006,-1,1006,687,686,-1,1008,1005,1006,-1,1006,1007,1008,-1,1008,1007,1010,-1,1010,1009,1008,-1,686,685,1010,-1,1010,1007,686,-1,682,998,1010,-1,1010,685,682,-1,995,1009,1010,-1,1010,998,995,-1,1011,1014,1013,-1,1013,1012,1011,-1,691,692,1013,-1,1013,1014,691,-1,699,1015,1013,-1,1013,692,699,-1,1016,1012,1013,-1,1013,1015,1016,-1,1016,1015,1018,-1,1018,1017,1016,-1,699,698,1018,-1,1018,1015,699,-1,697,1019,1018,-1,1018,698,697,-1,1020,1017,1018,-1,1018,1019,1020,-1,1020,1019,1022,-1,1022,1021,1020,-1,697,696,1022,-1,1022,1019,697,-1,695,1023,1022,-1,1022,696,695,-1,1024,1021,1022,-1,1022,1023,1024,-1,1024,1023,1026,-1,1026,1025,1024,-1,695,694,1026,-1,1026,1023,695,-1,691,1014,1026,-1,1026,694,691,-1,1011,1025,1026,-1,1026,1014,1011,-1,1027,1030,1029,-1,1029,1028,1027,-1,700,701,1029,-1,1029,1030,700,-1,710,1031,1029,-1,1029,701,710,-1,1032,1028,1029,-1,1029,1031,1032,-1,1032,1031,1034,-1,1034,1033,1032,-1,710,709,1034,-1,1034,1031,710,-1,706,1035,1034,-1,1034,709,706,-1,1036,1033,1034,-1,1034,1035,1036,-1,1036,1035,1038,-1,1038,1037,1036,-1,706,705,1038,-1,1038,1035,706,-1,704,1039,1038,-1,1038,705,704,-1,1040,1037,1038,-1,1038,1039,1040,-1,1040,1039,1042,-1,1042,1041,1040,-1,704,703,1042,-1,1042,1039,704,-1,700,1030,1042,-1,1042,703,700,-1,1027,1041,1042,-1,1042,1030,1027,-1,717,716,1044,-1,1044,1043,717,-1,715,1045,1044,-1,1044,716,715,-1,931,932,1044,-1,1044,1045,931,-1,936,1043,1044,-1,1044,932,936,-1,723,722,1047,-1,1047,1046,723,-1,717,1043,1047,-1,1047,722,717,-1,936,937,1047,-1,1047,1043,936,-1,940,1046,1047,-1,1047,937,940,-1,729,728,1049,-1,1049,1048,729,-1,723,1046,1049,-1,1049,728,723,-1,940,941,1049,-1,1049,1046,940,-1,944,1048,1049,-1,1049,941,944,-1,715,734,1050,-1,1050,1045,715,-1,729,1048,1050,-1,1050,734,729,-1,944,945,1050,-1,1050,1048,944,-1,931,1045,1050,-1,1050,945,931,-1,741,740,1052,-1,1052,1051,741,-1,739,1053,1052,-1,1052,740,739,-1,947,948,1052,-1,1052,1053,947,-1,952,1051,1052,-1,1052,948,952,-1,745,744,1055,-1,1055,1054,745,-1,741,1051,1055,-1,1055,744,741,-1,952,953,1055,-1,1055,1051,952,-1,956,1054,1055,-1,1055,953,956,-1,750,749,1057,-1,1057,1056,750,-1,745,1054,1057,-1,1057,749,745,-1,956,957,1057,-1,1057,1054,956,-1,960,1056,1057,-1,1057,957,960,-1,739,755,1058,-1,1058,1053,739,-1,750,1056,1058,-1,1058,755,750,-1,960,961,1058,-1,1058,1056,960,-1,947,1053,1058,-1,1058,961,947,-1,761,760,1060,-1,1060,1059,761,-1,759,1061,1060,-1,1060,760,759,-1,963,964,1060,-1,1060,1061,963,-1,968,1059,1060,-1,1060,964,968,-1,767,766,1063,-1,1063,1062,767,-1,761,1059,1063,-1,1063,766,761,-1,968,969,1063,-1,1063,1059,968,-1,972,1062,1063,-1,1063,969,972,-1,773,772,1065,-1,1065,1064,773,-1,767,1062,1065,-1,1065,772,767,-1,972,973,1065,-1,1065,1062,972,-1,976,1064,1065,-1,1065,973,976,-1,759,776,1066,-1,1066,1061,759,-1,773,1064,1066,-1,1066,776,773,-1,976,977,1066,-1,1066,1064,976,-1,963,1061,1066,-1,1066,977,963,-1,782,781,1068,-1,1068,1067,782,-1,780,1069,1068,-1,1068,781,780,-1,979,980,1068,-1,1068,1069,979,-1,984,1067,1068,-1,1068,980,984,-1,788,787,1071,-1,1071,1070,788,-1,782,1067,1071,-1,1071,787,782,-1,984,985,1071,-1,1071,1067,984,-1,988,1070,1071,-1,1071,985,988,-1,795,794,1073,-1,1073,1072,795,-1,788,1070,1073,-1,1073,794,788,-1,988,989,1073,-1,1073,1070,988,-1,992,1072,1073,-1,1073,989,992,-1,780,798,1074,-1,1074,1069,780,-1,795,1072,1074,-1,1074,798,795,-1,992,993,1074,-1,1074,1072,992,-1,979,1069,1074,-1,1074,993,979,-1,804,803,1076,-1,1076,1075,804,-1,802,1077,1076,-1,1076,803,802,-1,995,996,1076,-1,1076,1077,995,-1,1000,1075,1076,-1,1076,996,1000,-1,810,809,1079,-1,1079,1078,810,-1,804,1075,1079,-1,1079,809,804,-1,1000,1001,1079,-1,1079,1075,1000,-1,1004,1078,1079,-1,1079,1001,1004,-1,816,815,1081,-1,1081,1080,816,-1,810,1078,1081,-1,1081,815,810,-1,1004,1005,1081,-1,1081,1078,1004,-1,1008,1080,1081,-1,1081,1005,1008,-1,802,819,1082,-1,1082,1077,802,-1,816,1080,1082,-1,1082,819,816,-1,1008,1009,1082,-1,1082,1080,1008,-1,995,1077,1082,-1,1082,1009,995,-1,879,876,1084,-1,1084,1083,879,-1,873,1085,1084,-1,1084,876,873,-1,1011,1012,1084,-1,1084,1085,1011,-1,1016,1083,1084,-1,1084,1012,1016,-1,903,902,1087,-1,1087,1086,903,-1,879,1083,1087,-1,1087,902,879,-1,1016,1017,1087,-1,1087,1083,1016,-1,1020,1086,1087,-1,1087,1017,1020,-1,909,908,1089,-1,1089,1088,909,-1,903,1086,1089,-1,1089,908,903,-1,1020,1021,1089,-1,1089,1086,1020,-1,1024,1088,1089,-1,1089,1021,1024,-1,873,912,1090,-1,1090,1085,873,-1,909,1088,1090,-1,1090,912,909,-1,1024,1025,1090,-1,1090,1088,1024,-1,1011,1085,1090,-1,1090,1025,1011,-1,918,917,1092,-1,1092,1091,918,-1,916,1093,1092,-1,1092,917,916,-1,1027,1028,1092,-1,1092,1093,1027,-1,1032,1091,1092,-1,1092,1028,1032,-1,922,921,1095,-1,1095,1094,922,-1,918,1091,1095,-1,1095,921,918,-1,1032,1033,1095,-1,1095,1091,1032,-1,1036,1094,1095,-1,1095,1033,1036,-1,927,926,1097,-1,1097,1096,927,-1,922,1094,1097,-1,1097,926,922,-1,1036,1037,1097,-1,1097,1094,1036,-1,1040,1096,1097,-1,1097,1037,1040,-1,916,930,1098,-1,1098,1093,916,-1,927,1096,1098,-1,1098,930,927,-1,1040,1041,1098,-1,1098,1096,1040,-1,1027,1093,1098,-1,1098,1041,1027,-1,894,893,898,-1,898,897,894,-1,450,456,898,-1,898,893,450,-1,455,899,898,-1,898,456,455,-1,900,897,898,-1,898,899,900,-1]
IndexedFaceSet753.coordIndex = [0,521,265,-1,265,524,0,-1,1,525,265,-1,265,521,1,-1,4,523,265,-1,265,525,4,-1,3,524,265,-1,265,523,3,-1,2,522,266,-1,266,526,2,-1,23,558,266,-1,266,522,23,-1,24,551,266,-1,266,558,24,-1,5,526,266,-1,266,551,5,-1,3,523,267,-1,267,528,3,-1,4,529,267,-1,267,523,4,-1,7,527,267,-1,267,529,7,-1,6,528,267,-1,267,527,6,-1,5,551,268,-1,268,530,5,-1,24,559,268,-1,268,551,24,-1,25,552,268,-1,268,559,25,-1,8,530,268,-1,268,552,8,-1,6,527,269,-1,269,532,6,-1,7,533,269,-1,269,527,7,-1,10,531,269,-1,269,533,10,-1,9,532,269,-1,269,531,9,-1,8,552,270,-1,270,534,8,-1,25,560,270,-1,270,552,25,-1,26,553,270,-1,270,560,26,-1,11,534,270,-1,270,553,11,-1,9,531,271,-1,271,536,9,-1,10,537,271,-1,271,531,10,-1,13,535,271,-1,271,537,13,-1,12,536,271,-1,271,535,12,-1,11,553,272,-1,272,538,11,-1,26,561,272,-1,272,553,26,-1,27,554,272,-1,272,561,27,-1,14,538,272,-1,272,554,14,-1,12,535,273,-1,273,540,12,-1,13,541,273,-1,273,535,13,-1,16,539,273,-1,273,541,16,-1,15,540,273,-1,273,539,15,-1,14,554,274,-1,274,542,14,-1,27,562,274,-1,274,554,27,-1,28,555,274,-1,274,562,28,-1,17,542,274,-1,274,555,17,-1,15,539,275,-1,275,544,15,-1,16,545,275,-1,275,539,16,-1,19,543,275,-1,275,545,19,-1,18,544,275,-1,275,543,18,-1,17,555,276,-1,276,546,17,-1,28,563,276,-1,276,555,28,-1,29,556,276,-1,276,563,29,-1,20,546,276,-1,276,556,20,-1,18,543,277,-1,277,548,18,-1,19,549,277,-1,277,543,19,-1,21,547,277,-1,277,549,21,-1,160,548,277,-1,277,547,160,-1,20,556,278,-1,278,550,20,-1,29,564,278,-1,278,556,29,-1,30,557,278,-1,278,564,30,-1,22,550,278,-1,278,557,22,-1,2,526,279,-1,279,580,2,-1,5,581,279,-1,279,526,5,-1,33,565,279,-1,279,581,33,-1,32,580,279,-1,279,565,32,-1,5,530,280,-1,280,581,5,-1,8,582,280,-1,280,530,8,-1,34,566,280,-1,280,582,34,-1,33,581,280,-1,280,566,33,-1,8,534,281,-1,281,582,8,-1,11,583,281,-1,281,534,11,-1,35,567,281,-1,281,583,35,-1,34,582,281,-1,281,567,34,-1,11,538,282,-1,282,583,11,-1,14,584,282,-1,282,538,14,-1,36,568,282,-1,282,584,36,-1,35,583,282,-1,282,568,35,-1,14,542,283,-1,283,584,14,-1,17,585,283,-1,283,542,17,-1,37,569,283,-1,283,585,37,-1,36,584,283,-1,283,569,36,-1,17,546,284,-1,284,585,17,-1,20,586,284,-1,284,546,20,-1,38,570,284,-1,284,586,38,-1,37,585,284,-1,284,570,37,-1,20,550,285,-1,285,586,20,-1,22,587,285,-1,285,550,22,-1,168,571,285,-1,285,587,168,-1,38,586,285,-1,285,571,38,-1,21,549,286,-1,286,839,21,-1,19,588,286,-1,286,549,19,-1,39,572,286,-1,286,588,39,-1,170,839,286,-1,286,572,170,-1,19,545,287,-1,287,588,19,-1,16,589,287,-1,287,545,16,-1,40,573,287,-1,287,589,40,-1,39,588,287,-1,287,573,39,-1,16,541,288,-1,288,589,16,-1,13,590,288,-1,288,541,13,-1,41,574,288,-1,288,590,41,-1,40,589,288,-1,288,574,40,-1,13,537,289,-1,289,590,13,-1,10,591,289,-1,289,537,10,-1,42,575,289,-1,289,591,42,-1,41,590,289,-1,289,575,41,-1,10,533,290,-1,290,591,10,-1,7,592,290,-1,290,533,7,-1,43,576,290,-1,290,592,43,-1,42,591,290,-1,290,576,42,-1,7,529,291,-1,291,592,7,-1,4,593,291,-1,291,529,4,-1,44,577,291,-1,291,593,44,-1,43,592,291,-1,291,577,43,-1,4,525,292,-1,292,593,4,-1,1,579,292,-1,292,525,1,-1,31,578,292,-1,292,579,31,-1,44,593,292,-1,292,578,44,-1,24,558,293,-1,293,595,24,-1,23,594,293,-1,293,558,23,-1,45,595,293,-1,293,594,45,-1,25,559,294,-1,294,596,25,-1,24,595,294,-1,294,559,24,-1,45,596,294,-1,294,595,45,-1,26,560,295,-1,295,597,26,-1,25,596,295,-1,295,560,25,-1,45,597,295,-1,295,596,45,-1,27,561,296,-1,296,598,27,-1,26,597,296,-1,296,561,26,-1,45,598,296,-1,296,597,45,-1,28,562,297,-1,297,599,28,-1,27,598,297,-1,297,562,27,-1,45,599,297,-1,297,598,45,-1,29,563,298,-1,298,600,29,-1,28,599,298,-1,298,563,28,-1,45,600,298,-1,298,599,45,-1,30,564,299,-1,299,601,30,-1,29,600,299,-1,299,564,29,-1,45,601,299,-1,299,600,45,-1,75,667,300,-1,300,670,75,-1,76,668,300,-1,300,667,76,-1,77,669,300,-1,300,668,77,-1,78,670,300,-1,300,669,78,-1,79,675,301,-1,301,678,79,-1,80,676,301,-1,301,675,80,-1,81,677,301,-1,301,676,81,-1,82,678,301,-1,301,677,82,-1,83,683,302,-1,302,686,83,-1,84,684,302,-1,302,683,84,-1,85,685,302,-1,302,684,85,-1,86,686,302,-1,302,685,86,-1,87,691,303,-1,303,694,87,-1,88,692,303,-1,303,691,88,-1,89,693,303,-1,303,692,89,-1,90,694,303,-1,303,693,90,-1,91,699,304,-1,304,702,91,-1,92,700,304,-1,304,699,92,-1,93,701,304,-1,304,700,93,-1,94,702,304,-1,304,701,94,-1,95,707,305,-1,305,710,95,-1,96,708,305,-1,305,707,96,-1,97,709,305,-1,305,708,97,-1,98,710,305,-1,305,709,98,-1,99,715,306,-1,306,718,99,-1,100,716,306,-1,306,715,100,-1,101,717,306,-1,306,716,101,-1,102,718,306,-1,306,717,102,-1,32,565,307,-1,307,609,32,-1,33,610,307,-1,307,565,33,-1,104,752,307,-1,307,610,104,-1,103,609,307,-1,307,752,103,-1,33,603,308,-1,308,610,33,-1,44,611,308,-1,308,603,44,-1,105,753,308,-1,308,611,105,-1,104,610,308,-1,308,753,104,-1,44,578,309,-1,309,611,44,-1,31,612,309,-1,309,578,31,-1,106,754,309,-1,309,612,106,-1,105,611,309,-1,309,754,105,-1,31,602,310,-1,310,612,31,-1,32,609,310,-1,310,602,32,-1,103,755,310,-1,310,609,103,-1,106,612,310,-1,310,755,106,-1,38,571,311,-1,311,617,38,-1,168,618,311,-1,311,571,168,-1,108,756,311,-1,311,618,108,-1,107,617,311,-1,311,756,107,-1,168,900,312,-1,312,618,168,-1,170,619,312,-1,312,900,170,-1,109,757,312,-1,312,619,109,-1,108,618,312,-1,312,757,108,-1,170,572,313,-1,313,619,170,-1,39,620,313,-1,313,572,39,-1,110,758,313,-1,313,620,110,-1,109,619,313,-1,313,758,109,-1,39,604,314,-1,314,620,39,-1,38,617,314,-1,314,604,38,-1,107,759,314,-1,314,617,107,-1,110,620,314,-1,314,759,110,-1,39,573,315,-1,315,625,39,-1,40,626,315,-1,315,573,40,-1,112,760,315,-1,315,626,112,-1,111,625,315,-1,315,760,111,-1,40,605,316,-1,316,626,40,-1,37,627,316,-1,316,605,37,-1,113,761,316,-1,316,627,113,-1,112,626,316,-1,316,761,112,-1,37,570,317,-1,317,627,37,-1,38,628,317,-1,317,570,38,-1,114,762,317,-1,317,628,114,-1,113,627,317,-1,317,762,113,-1,38,604,318,-1,318,628,38,-1,39,625,318,-1,318,604,39,-1,111,763,318,-1,318,625,111,-1,114,628,318,-1,318,763,114,-1,40,574,319,-1,319,633,40,-1,41,634,319,-1,319,574,41,-1,116,764,319,-1,319,634,116,-1,115,633,319,-1,319,764,115,-1,41,606,320,-1,320,634,41,-1,36,635,320,-1,320,606,36,-1,117,765,320,-1,320,635,117,-1,116,634,320,-1,320,765,116,-1,36,569,321,-1,321,635,36,-1,37,636,321,-1,321,569,37,-1,118,766,321,-1,321,636,118,-1,117,635,321,-1,321,766,117,-1,37,605,322,-1,322,636,37,-1,40,633,322,-1,322,605,40,-1,115,767,322,-1,322,633,115,-1,118,636,322,-1,322,767,118,-1,41,575,323,-1,323,641,41,-1,42,642,323,-1,323,575,42,-1,120,768,323,-1,323,642,120,-1,119,641,323,-1,323,768,119,-1,42,607,324,-1,324,642,42,-1,35,643,324,-1,324,607,35,-1,121,769,324,-1,324,643,121,-1,120,642,324,-1,324,769,120,-1,35,568,325,-1,325,643,35,-1,36,644,325,-1,325,568,36,-1,122,770,325,-1,325,644,122,-1,121,643,325,-1,325,770,121,-1,36,606,326,-1,326,644,36,-1,41,641,326,-1,326,606,41,-1,119,771,326,-1,326,641,119,-1,122,644,326,-1,326,771,122,-1,42,576,327,-1,327,649,42,-1,43,650,327,-1,327,576,43,-1,124,772,327,-1,327,650,124,-1,123,649,327,-1,327,772,123,-1,43,608,328,-1,328,650,43,-1,34,651,328,-1,328,608,34,-1,125,773,328,-1,328,651,125,-1,124,650,328,-1,328,773,124,-1,34,567,329,-1,329,651,34,-1,35,652,329,-1,329,567,35,-1,126,774,329,-1,329,652,126,-1,125,651,329,-1,329,774,125,-1,35,607,330,-1,330,652,35,-1,42,649,330,-1,330,607,42,-1,123,775,330,-1,330,649,123,-1,126,652,330,-1,330,775,126,-1,43,577,331,-1,331,657,43,-1,44,658,331,-1,331,577,44,-1,128,776,331,-1,331,658,128,-1,127,657,331,-1,331,776,127,-1,44,603,332,-1,332,658,44,-1,33,659,332,-1,332,603,33,-1,129,777,332,-1,332,659,129,-1,128,658,332,-1,332,777,128,-1,33,566,333,-1,333,659,33,-1,34,660,333,-1,333,566,34,-1,130,778,333,-1,333,660,130,-1,129,659,333,-1,333,778,129,-1,34,608,334,-1,334,660,34,-1,43,657,334,-1,334,608,43,-1,127,779,334,-1,334,657,127,-1,130,660,334,-1,334,779,130,-1,45,594,335,-1,335,953,45,-1,23,666,335,-1,335,594,23,-1,131,780,335,-1,335,666,131,-1,234,953,335,-1,335,780,234,-1,46,613,336,-1,336,671,46,-1,47,672,336,-1,336,613,47,-1,76,667,336,-1,336,672,76,-1,75,671,336,-1,336,667,75,-1,47,614,337,-1,337,672,47,-1,48,673,337,-1,337,614,48,-1,77,668,337,-1,337,673,77,-1,76,672,337,-1,337,668,76,-1,48,615,338,-1,338,673,48,-1,49,674,338,-1,338,615,49,-1,78,669,338,-1,338,674,78,-1,77,673,338,-1,338,669,77,-1,49,616,339,-1,339,674,49,-1,46,671,339,-1,339,616,46,-1,75,670,339,-1,339,671,75,-1,78,674,339,-1,339,670,78,-1,50,621,340,-1,340,679,50,-1,51,680,340,-1,340,621,51,-1,80,675,340,-1,340,680,80,-1,79,679,340,-1,340,675,79,-1,51,622,341,-1,341,680,51,-1,52,681,341,-1,341,622,52,-1,81,676,341,-1,341,681,81,-1,80,680,341,-1,341,676,80,-1,52,623,342,-1,342,681,52,-1,53,682,342,-1,342,623,53,-1,82,677,342,-1,342,682,82,-1,81,681,342,-1,342,677,81,-1,53,624,343,-1,343,682,53,-1,50,679,343,-1,343,624,50,-1,79,678,343,-1,343,679,79,-1,82,682,343,-1,343,678,82,-1,54,629,344,-1,344,687,54,-1,55,688,344,-1,344,629,55,-1,84,683,344,-1,344,688,84,-1,83,687,344,-1,344,683,83,-1,55,630,345,-1,345,688,55,-1,56,689,345,-1,345,630,56,-1,85,684,345,-1,345,689,85,-1,84,688,345,-1,345,684,84,-1,56,631,346,-1,346,689,56,-1,57,690,346,-1,346,631,57,-1,86,685,346,-1,346,690,86,-1,85,689,346,-1,346,685,85,-1,57,632,347,-1,347,690,57,-1,54,687,347,-1,347,632,54,-1,83,686,347,-1,347,687,83,-1,86,690,347,-1,347,686,86,-1,58,637,348,-1,348,695,58,-1,59,696,348,-1,348,637,59,-1,88,691,348,-1,348,696,88,-1,87,695,348,-1,348,691,87,-1,59,638,349,-1,349,696,59,-1,60,697,349,-1,349,638,60,-1,89,692,349,-1,349,697,89,-1,88,696,349,-1,349,692,88,-1,60,639,350,-1,350,697,60,-1,61,698,350,-1,350,639,61,-1,90,693,350,-1,350,698,90,-1,89,697,350,-1,350,693,89,-1,61,640,351,-1,351,698,61,-1,58,695,351,-1,351,640,58,-1,87,694,351,-1,351,695,87,-1,90,698,351,-1,351,694,90,-1,62,645,352,-1,352,703,62,-1,63,704,352,-1,352,645,63,-1,92,699,352,-1,352,704,92,-1,91,703,352,-1,352,699,91,-1,63,646,353,-1,353,704,63,-1,64,705,353,-1,353,646,64,-1,93,700,353,-1,353,705,93,-1,92,704,353,-1,353,700,92,-1,64,647,354,-1,354,705,64,-1,65,706,354,-1,354,647,65,-1,94,701,354,-1,354,706,94,-1,93,705,354,-1,354,701,93,-1,65,648,355,-1,355,706,65,-1,62,703,355,-1,355,648,62,-1,91,702,355,-1,355,703,91,-1,94,706,355,-1,355,702,94,-1,66,653,356,-1,356,711,66,-1,67,712,356,-1,356,653,67,-1,96,707,356,-1,356,712,96,-1,95,711,356,-1,356,707,95,-1,67,654,357,-1,357,712,67,-1,68,713,357,-1,357,654,68,-1,97,708,357,-1,357,713,97,-1,96,712,357,-1,357,708,96,-1,68,655,358,-1,358,713,68,-1,69,714,358,-1,358,655,69,-1,98,709,358,-1,358,714,98,-1,97,713,358,-1,358,709,97,-1,69,656,359,-1,359,714,69,-1,66,711,359,-1,359,656,66,-1,95,710,359,-1,359,711,95,-1,98,714,359,-1,359,710,98,-1,70,661,360,-1,360,719,70,-1,71,720,360,-1,360,661,71,-1,100,715,360,-1,360,720,100,-1,99,719,360,-1,360,715,99,-1,71,662,361,-1,361,720,71,-1,72,721,361,-1,361,662,72,-1,101,716,361,-1,361,721,101,-1,100,720,361,-1,361,716,100,-1,72,663,362,-1,362,721,72,-1,73,722,362,-1,362,663,73,-1,102,717,362,-1,362,722,102,-1,101,721,362,-1,362,717,101,-1,73,664,363,-1,363,722,73,-1,70,719,363,-1,363,664,70,-1,99,718,363,-1,363,719,99,-1,102,722,363,-1,363,718,102,-1,104,724,364,-1,364,752,104,-1,47,613,364,-1,364,724,47,-1,46,723,364,-1,364,613,46,-1,103,752,364,-1,364,723,103,-1,105,725,365,-1,365,753,105,-1,48,614,365,-1,365,725,48,-1,47,724,365,-1,365,614,47,-1,104,753,365,-1,365,724,104,-1,106,726,366,-1,366,754,106,-1,49,615,366,-1,366,726,49,-1,48,725,366,-1,366,615,48,-1,105,754,366,-1,366,725,105,-1,103,723,367,-1,367,755,103,-1,46,616,367,-1,367,723,46,-1,49,726,367,-1,367,616,49,-1,106,755,367,-1,367,726,106,-1,108,728,368,-1,368,756,108,-1,51,621,368,-1,368,728,51,-1,50,727,368,-1,368,621,50,-1,107,756,368,-1,368,727,107,-1,109,729,369,-1,369,757,109,-1,52,622,369,-1,369,729,52,-1,51,728,369,-1,369,622,51,-1,108,757,369,-1,369,728,108,-1,110,730,370,-1,370,758,110,-1,53,623,370,-1,370,730,53,-1,52,729,370,-1,370,623,52,-1,109,758,370,-1,370,729,109,-1,107,727,371,-1,371,759,107,-1,50,624,371,-1,371,727,50,-1,53,730,371,-1,371,624,53,-1,110,759,371,-1,371,730,110,-1,112,732,372,-1,372,760,112,-1,55,629,372,-1,372,732,55,-1,54,731,372,-1,372,629,54,-1,111,760,372,-1,372,731,111,-1,113,733,373,-1,373,761,113,-1,56,630,373,-1,373,733,56,-1,55,732,373,-1,373,630,55,-1,112,761,373,-1,373,732,112,-1,114,734,374,-1,374,762,114,-1,57,631,374,-1,374,734,57,-1,56,733,374,-1,374,631,56,-1,113,762,374,-1,374,733,113,-1,111,731,375,-1,375,763,111,-1,54,632,375,-1,375,731,54,-1,57,734,375,-1,375,632,57,-1,114,763,375,-1,375,734,114,-1,116,736,376,-1,376,764,116,-1,59,637,376,-1,376,736,59,-1,58,735,376,-1,376,637,58,-1,115,764,376,-1,376,735,115,-1,117,737,377,-1,377,765,117,-1,60,638,377,-1,377,737,60,-1,59,736,377,-1,377,638,59,-1,116,765,377,-1,377,736,116,-1,118,738,378,-1,378,766,118,-1,61,639,378,-1,378,738,61,-1,60,737,378,-1,378,639,60,-1,117,766,378,-1,378,737,117,-1,115,735,379,-1,379,767,115,-1,58,640,379,-1,379,735,58,-1,61,738,379,-1,379,640,61,-1,118,767,379,-1,379,738,118,-1,120,740,380,-1,380,768,120,-1,63,645,380,-1,380,740,63,-1,62,739,380,-1,380,645,62,-1,119,768,380,-1,380,739,119,-1,121,741,381,-1,381,769,121,-1,64,646,381,-1,381,741,64,-1,63,740,381,-1,381,646,63,-1,120,769,381,-1,381,740,120,-1,122,742,382,-1,382,770,122,-1,65,647,382,-1,382,742,65,-1,64,741,382,-1,382,647,64,-1,121,770,382,-1,382,741,121,-1,119,739,383,-1,383,771,119,-1,62,648,383,-1,383,739,62,-1,65,742,383,-1,383,648,65,-1,122,771,383,-1,383,742,122,-1,124,744,384,-1,384,772,124,-1,67,653,384,-1,384,744,67,-1,66,743,384,-1,384,653,66,-1,123,772,384,-1,384,743,123,-1,125,745,385,-1,385,773,125,-1,68,654,385,-1,385,745,68,-1,67,744,385,-1,385,654,67,-1,124,773,385,-1,385,744,124,-1,126,746,386,-1,386,774,126,-1,69,655,386,-1,386,746,69,-1,68,745,386,-1,386,655,68,-1,125,774,386,-1,386,745,125,-1,123,743,387,-1,387,775,123,-1,66,656,387,-1,387,743,66,-1,69,746,387,-1,387,656,69,-1,126,775,387,-1,387,746,126,-1,128,748,388,-1,388,776,128,-1,71,661,388,-1,388,748,71,-1,70,747,388,-1,388,661,70,-1,127,776,388,-1,388,747,127,-1,129,749,389,-1,389,777,129,-1,72,662,389,-1,389,749,72,-1,71,748,389,-1,389,662,71,-1,128,777,389,-1,389,748,128,-1,130,750,390,-1,390,778,130,-1,73,663,390,-1,390,750,73,-1,72,749,390,-1,390,663,72,-1,129,778,390,-1,390,749,129,-1,127,747,391,-1,391,779,127,-1,70,664,391,-1,391,747,70,-1,73,750,391,-1,391,664,73,-1,130,779,391,-1,391,750,130,-1,131,751,392,-1,392,780,131,-1,74,665,392,-1,392,751,74,-1,264,1040,392,-1,392,665,264,-1,234,780,392,-1,392,1040,234,-1,132,784,393,-1,393,781,132,-1,135,783,393,-1,393,784,135,-1,134,782,393,-1,393,783,134,-1,133,781,393,-1,393,782,133,-1,136,788,394,-1,394,785,136,-1,139,787,394,-1,394,788,139,-1,138,786,394,-1,394,787,138,-1,137,785,394,-1,394,786,137,-1,135,791,395,-1,395,783,135,-1,141,790,395,-1,395,791,141,-1,140,789,395,-1,395,790,140,-1,134,783,395,-1,395,789,134,-1,139,794,396,-1,396,787,139,-1,143,793,396,-1,396,794,143,-1,142,792,396,-1,396,793,142,-1,138,787,396,-1,396,792,138,-1,141,797,397,-1,397,790,141,-1,145,796,397,-1,397,797,145,-1,144,795,397,-1,397,796,144,-1,140,790,397,-1,397,795,140,-1,143,800,398,-1,398,793,143,-1,147,799,398,-1,398,800,147,-1,146,798,398,-1,398,799,146,-1,142,793,398,-1,398,798,142,-1,145,803,399,-1,399,796,145,-1,149,802,399,-1,399,803,149,-1,148,801,399,-1,399,802,148,-1,144,796,399,-1,399,801,144,-1,147,806,400,-1,400,799,147,-1,151,805,400,-1,400,806,151,-1,150,804,400,-1,400,805,150,-1,146,799,400,-1,400,804,146,-1,149,809,401,-1,401,802,149,-1,153,808,401,-1,401,809,153,-1,152,807,401,-1,401,808,152,-1,148,802,401,-1,401,807,148,-1,151,812,402,-1,402,805,151,-1,155,811,402,-1,402,812,155,-1,154,810,402,-1,402,811,154,-1,150,805,402,-1,402,810,150,-1,153,815,403,-1,403,808,153,-1,157,814,403,-1,403,815,157,-1,156,813,403,-1,403,814,156,-1,152,808,403,-1,403,813,152,-1,155,818,404,-1,404,811,155,-1,159,817,404,-1,404,818,159,-1,158,816,404,-1,404,817,158,-1,154,811,404,-1,404,816,154,-1,157,820,405,-1,405,814,157,-1,160,547,405,-1,405,820,160,-1,21,819,405,-1,405,547,21,-1,156,814,405,-1,405,819,156,-1,159,822,406,-1,406,817,159,-1,22,557,406,-1,406,822,22,-1,30,821,406,-1,406,557,30,-1,158,817,406,-1,406,821,158,-1,136,825,407,-1,407,788,136,-1,162,824,407,-1,407,825,162,-1,161,823,407,-1,407,824,161,-1,139,788,407,-1,407,823,139,-1,139,823,408,-1,408,794,139,-1,161,827,408,-1,408,823,161,-1,163,826,408,-1,408,827,163,-1,143,794,408,-1,408,826,143,-1,143,826,409,-1,409,800,143,-1,163,829,409,-1,409,826,163,-1,164,828,409,-1,409,829,164,-1,147,800,409,-1,409,828,147,-1,147,828,410,-1,410,806,147,-1,164,831,410,-1,410,828,164,-1,165,830,410,-1,410,831,165,-1,151,806,410,-1,410,830,151,-1,151,830,411,-1,411,812,151,-1,165,833,411,-1,411,830,165,-1,166,832,411,-1,411,833,166,-1,155,812,411,-1,411,832,155,-1,155,832,412,-1,412,818,155,-1,166,835,412,-1,412,832,166,-1,167,834,412,-1,412,835,167,-1,159,818,412,-1,412,834,159,-1,159,834,413,-1,413,822,159,-1,167,836,413,-1,413,834,167,-1,168,587,413,-1,413,836,168,-1,22,822,413,-1,413,587,22,-1,21,839,414,-1,414,819,21,-1,170,838,414,-1,414,839,170,-1,169,837,414,-1,414,838,169,-1,156,819,414,-1,414,837,156,-1,156,837,415,-1,415,813,156,-1,169,841,415,-1,415,837,169,-1,171,840,415,-1,415,841,171,-1,152,813,415,-1,415,840,152,-1,152,840,416,-1,416,807,152,-1,171,843,416,-1,416,840,171,-1,172,842,416,-1,416,843,172,-1,148,807,416,-1,416,842,148,-1,148,842,417,-1,417,801,148,-1,172,845,417,-1,417,842,172,-1,173,844,417,-1,417,845,173,-1,144,801,417,-1,417,844,144,-1,144,844,418,-1,418,795,144,-1,173,847,418,-1,418,844,173,-1,174,846,418,-1,418,847,174,-1,140,795,418,-1,418,846,140,-1,140,846,419,-1,419,789,140,-1,174,849,419,-1,419,846,174,-1,175,848,419,-1,419,849,175,-1,134,789,419,-1,419,848,134,-1,134,848,420,-1,420,782,134,-1,175,851,420,-1,420,848,175,-1,176,850,420,-1,420,851,176,-1,133,782,420,-1,420,850,133,-1,138,853,421,-1,421,786,138,-1,45,852,421,-1,421,853,45,-1,137,786,421,-1,421,852,137,-1,142,854,422,-1,422,792,142,-1,45,853,422,-1,422,854,45,-1,138,792,422,-1,422,853,138,-1,146,855,423,-1,423,798,146,-1,45,854,423,-1,423,855,45,-1,142,798,423,-1,423,854,142,-1,150,856,424,-1,424,804,150,-1,45,855,424,-1,424,856,45,-1,146,804,424,-1,424,855,146,-1,154,857,425,-1,425,810,154,-1,45,856,425,-1,425,857,45,-1,150,810,425,-1,425,856,150,-1,158,858,426,-1,426,816,158,-1,45,857,426,-1,426,858,45,-1,154,816,426,-1,426,857,154,-1,30,601,427,-1,427,821,30,-1,45,858,427,-1,427,601,45,-1,158,821,427,-1,427,858,158,-1,177,862,428,-1,428,859,177,-1,180,861,428,-1,428,862,180,-1,179,860,428,-1,428,861,179,-1,178,859,428,-1,428,860,178,-1,181,866,429,-1,429,863,181,-1,184,865,429,-1,429,866,184,-1,183,864,429,-1,429,865,183,-1,182,863,429,-1,429,864,182,-1,185,870,430,-1,430,867,185,-1,188,869,430,-1,430,870,188,-1,187,868,430,-1,430,869,187,-1,186,867,430,-1,430,868,186,-1,189,874,431,-1,431,871,189,-1,192,873,431,-1,431,874,192,-1,191,872,431,-1,431,873,191,-1,190,871,431,-1,431,872,190,-1,193,878,432,-1,432,875,193,-1,196,877,432,-1,432,878,196,-1,195,876,432,-1,432,877,195,-1,194,875,432,-1,432,876,194,-1,197,882,433,-1,433,879,197,-1,200,881,433,-1,433,882,200,-1,199,880,433,-1,433,881,199,-1,198,879,433,-1,433,880,198,-1,201,886,434,-1,434,883,201,-1,204,885,434,-1,434,886,204,-1,203,884,434,-1,434,885,203,-1,202,883,434,-1,434,884,202,-1,162,889,435,-1,435,824,162,-1,206,888,435,-1,435,889,206,-1,205,887,435,-1,435,888,205,-1,161,824,435,-1,435,887,161,-1,161,887,436,-1,436,890,161,-1,205,892,436,-1,436,887,205,-1,207,891,436,-1,436,892,207,-1,175,890,436,-1,436,891,175,-1,175,891,437,-1,437,851,175,-1,207,894,437,-1,437,891,207,-1,208,893,437,-1,437,894,208,-1,176,851,437,-1,437,893,176,-1,176,893,438,-1,438,895,176,-1,208,896,438,-1,438,893,208,-1,206,889,438,-1,438,896,206,-1,162,895,438,-1,438,889,162,-1,167,899,439,-1,439,836,167,-1,210,898,439,-1,439,899,210,-1,209,897,439,-1,439,898,209,-1,168,836,439,-1,439,897,168,-1,168,897,440,-1,440,900,168,-1,209,902,440,-1,440,897,209,-1,211,901,440,-1,440,902,211,-1,170,900,440,-1,440,901,170,-1,170,901,441,-1,441,838,170,-1,211,904,441,-1,441,901,211,-1,212,903,441,-1,441,904,212,-1,169,838,441,-1,441,903,169,-1,169,903,442,-1,442,905,169,-1,212,906,442,-1,442,903,212,-1,210,899,442,-1,442,906,210,-1,167,905,442,-1,442,899,167,-1,169,909,443,-1,443,841,169,-1,214,908,443,-1,443,909,214,-1,213,907,443,-1,443,908,213,-1,171,841,443,-1,443,907,171,-1,171,907,444,-1,444,910,171,-1,213,912,444,-1,444,907,213,-1,215,911,444,-1,444,912,215,-1,166,910,444,-1,444,911,166,-1,166,911,445,-1,445,835,166,-1,215,914,445,-1,445,911,215,-1,216,913,445,-1,445,914,216,-1,167,835,445,-1,445,913,167,-1,167,913,446,-1,446,905,167,-1,216,915,446,-1,446,913,216,-1,214,909,446,-1,446,915,214,-1,169,905,446,-1,446,909,169,-1,171,918,447,-1,447,843,171,-1,218,917,447,-1,447,918,218,-1,217,916,447,-1,447,917,217,-1,172,843,447,-1,447,916,172,-1,172,916,448,-1,448,919,172,-1,217,921,448,-1,448,916,217,-1,219,920,448,-1,448,921,219,-1,165,919,448,-1,448,920,165,-1,165,920,449,-1,449,833,165,-1,219,923,449,-1,449,920,219,-1,220,922,449,-1,449,923,220,-1,166,833,449,-1,449,922,166,-1,166,922,450,-1,450,910,166,-1,220,924,450,-1,450,922,220,-1,218,918,450,-1,450,924,218,-1,171,910,450,-1,450,918,171,-1,172,927,451,-1,451,845,172,-1,222,926,451,-1,451,927,222,-1,221,925,451,-1,451,926,221,-1,173,845,451,-1,451,925,173,-1,173,925,452,-1,452,928,173,-1,221,930,452,-1,452,925,221,-1,223,929,452,-1,452,930,223,-1,164,928,452,-1,452,929,164,-1,164,929,453,-1,453,831,164,-1,223,932,453,-1,453,929,223,-1,224,931,453,-1,453,932,224,-1,165,831,453,-1,453,931,165,-1,165,931,454,-1,454,919,165,-1,224,933,454,-1,454,931,224,-1,222,927,454,-1,454,933,222,-1,172,919,454,-1,454,927,172,-1,173,936,455,-1,455,847,173,-1,226,935,455,-1,455,936,226,-1,225,934,455,-1,455,935,225,-1,174,847,455,-1,455,934,174,-1,174,934,456,-1,456,937,174,-1,225,939,456,-1,456,934,225,-1,227,938,456,-1,456,939,227,-1,163,937,456,-1,456,938,163,-1,163,938,457,-1,457,829,163,-1,227,941,457,-1,457,938,227,-1,228,940,457,-1,457,941,228,-1,164,829,457,-1,457,940,164,-1,164,940,458,-1,458,928,164,-1,228,942,458,-1,458,940,228,-1,226,936,458,-1,458,942,226,-1,173,928,458,-1,458,936,173,-1,174,945,459,-1,459,849,174,-1,230,944,459,-1,459,945,230,-1,229,943,459,-1,459,944,229,-1,175,849,459,-1,459,943,175,-1,175,943,460,-1,460,890,175,-1,229,947,460,-1,460,943,229,-1,231,946,460,-1,460,947,231,-1,161,890,460,-1,460,946,161,-1,161,946,461,-1,461,827,161,-1,231,949,461,-1,461,946,231,-1,232,948,461,-1,461,949,232,-1,163,827,461,-1,461,948,163,-1,163,948,462,-1,462,937,163,-1,232,950,462,-1,462,948,232,-1,230,945,462,-1,462,950,230,-1,174,937,462,-1,462,945,174,-1,45,953,463,-1,463,852,45,-1,234,952,463,-1,463,953,234,-1,233,951,463,-1,463,952,233,-1,137,852,463,-1,463,951,137,-1,235,956,464,-1,464,954,235,-1,177,859,464,-1,464,956,177,-1,178,955,464,-1,464,859,178,-1,236,954,464,-1,464,955,236,-1,236,955,465,-1,465,957,236,-1,178,860,465,-1,465,955,178,-1,179,958,465,-1,465,860,179,-1,237,957,465,-1,465,958,237,-1,237,958,466,-1,466,959,237,-1,179,861,466,-1,466,958,179,-1,180,960,466,-1,466,861,180,-1,238,959,466,-1,466,960,238,-1,238,960,467,-1,467,961,238,-1,180,862,467,-1,467,960,180,-1,177,956,467,-1,467,862,177,-1,235,961,467,-1,467,956,235,-1,239,964,468,-1,468,962,239,-1,181,863,468,-1,468,964,181,-1,182,963,468,-1,468,863,182,-1,240,962,468,-1,468,963,240,-1,240,963,469,-1,469,965,240,-1,182,864,469,-1,469,963,182,-1,183,966,469,-1,469,864,183,-1,241,965,469,-1,469,966,241,-1,241,966,470,-1,470,967,241,-1,183,865,470,-1,470,966,183,-1,184,968,470,-1,470,865,184,-1,242,967,470,-1,470,968,242,-1,242,968,471,-1,471,969,242,-1,184,866,471,-1,471,968,184,-1,181,964,471,-1,471,866,181,-1,239,969,471,-1,471,964,239,-1,243,972,472,-1,472,970,243,-1,185,867,472,-1,472,972,185,-1,186,971,472,-1,472,867,186,-1,244,970,472,-1,472,971,244,-1,244,971,473,-1,473,973,244,-1,186,868,473,-1,473,971,186,-1,187,974,473,-1,473,868,187,-1,245,973,473,-1,473,974,245,-1,245,974,474,-1,474,975,245,-1,187,869,474,-1,474,974,187,-1,188,976,474,-1,474,869,188,-1,246,975,474,-1,474,976,246,-1,246,976,475,-1,475,977,246,-1,188,870,475,-1,475,976,188,-1,185,972,475,-1,475,870,185,-1,243,977,475,-1,475,972,243,-1,247,980,476,-1,476,978,247,-1,189,871,476,-1,476,980,189,-1,190,979,476,-1,476,871,190,-1,248,978,476,-1,476,979,248,-1,248,979,477,-1,477,981,248,-1,190,872,477,-1,477,979,190,-1,191,982,477,-1,477,872,191,-1,249,981,477,-1,477,982,249,-1,249,982,478,-1,478,983,249,-1,191,873,478,-1,478,982,191,-1,192,984,478,-1,478,873,192,-1,250,983,478,-1,478,984,250,-1,250,984,479,-1,479,985,250,-1,192,874,479,-1,479,984,192,-1,189,980,479,-1,479,874,189,-1,247,985,479,-1,479,980,247,-1,251,988,480,-1,480,986,251,-1,193,875,480,-1,480,988,193,-1,194,987,480,-1,480,875,194,-1,252,986,480,-1,480,987,252,-1,252,987,481,-1,481,989,252,-1,194,876,481,-1,481,987,194,-1,195,990,481,-1,481,876,195,-1,253,989,481,-1,481,990,253,-1,253,990,482,-1,482,991,253,-1,195,877,482,-1,482,990,195,-1,196,992,482,-1,482,877,196,-1,254,991,482,-1,482,992,254,-1,254,992,483,-1,483,993,254,-1,196,878,483,-1,483,992,196,-1,193,988,483,-1,483,878,193,-1,251,993,483,-1,483,988,251,-1,255,996,484,-1,484,994,255,-1,197,879,484,-1,484,996,197,-1,198,995,484,-1,484,879,198,-1,256,994,484,-1,484,995,256,-1,256,995,485,-1,485,997,256,-1,198,880,485,-1,485,995,198,-1,199,998,485,-1,485,880,199,-1,257,997,485,-1,485,998,257,-1,257,998,486,-1,486,999,257,-1,199,881,486,-1,486,998,199,-1,200,1000,486,-1,486,881,200,-1,258,999,486,-1,486,1000,258,-1,258,1000,487,-1,487,1001,258,-1,200,882,487,-1,487,1000,200,-1,197,996,487,-1,487,882,197,-1,255,1001,487,-1,487,996,255,-1,259,1004,488,-1,488,1002,259,-1,201,883,488,-1,488,1004,201,-1,202,1003,488,-1,488,883,202,-1,260,1002,488,-1,488,1003,260,-1,260,1003,489,-1,489,1005,260,-1,202,884,489,-1,489,1003,202,-1,203,1006,489,-1,489,884,203,-1,261,1005,489,-1,489,1006,261,-1,261,1006,490,-1,490,1007,261,-1,203,885,490,-1,490,1006,203,-1,204,1008,490,-1,490,885,204,-1,262,1007,490,-1,490,1008,262,-1,262,1008,491,-1,491,1009,262,-1,204,886,491,-1,491,1008,204,-1,201,1004,491,-1,491,886,201,-1,259,1009,491,-1,491,1004,259,-1,205,888,492,-1,492,1010,205,-1,206,1011,492,-1,492,888,206,-1,235,954,492,-1,492,1011,235,-1,236,1010,492,-1,492,954,236,-1,207,892,493,-1,493,1012,207,-1,205,1010,493,-1,493,892,205,-1,236,957,493,-1,493,1010,236,-1,237,1012,493,-1,493,957,237,-1,208,894,494,-1,494,1013,208,-1,207,1012,494,-1,494,894,207,-1,237,959,494,-1,494,1012,237,-1,238,1013,494,-1,494,959,238,-1,206,896,495,-1,495,1011,206,-1,208,1013,495,-1,495,896,208,-1,238,961,495,-1,495,1013,238,-1,235,1011,495,-1,495,961,235,-1,209,898,496,-1,496,1014,209,-1,210,1015,496,-1,496,898,210,-1,239,962,496,-1,496,1015,239,-1,240,1014,496,-1,496,962,240,-1,211,902,497,-1,497,1016,211,-1,209,1014,497,-1,497,902,209,-1,240,965,497,-1,497,1014,240,-1,241,1016,497,-1,497,965,241,-1,212,904,498,-1,498,1017,212,-1,211,1016,498,-1,498,904,211,-1,241,967,498,-1,498,1016,241,-1,242,1017,498,-1,498,967,242,-1,210,906,499,-1,499,1015,210,-1,212,1017,499,-1,499,906,212,-1,242,969,499,-1,499,1017,242,-1,239,1015,499,-1,499,969,239,-1,213,908,500,-1,500,1018,213,-1,214,1019,500,-1,500,908,214,-1,243,970,500,-1,500,1019,243,-1,244,1018,500,-1,500,970,244,-1,215,912,501,-1,501,1020,215,-1,213,1018,501,-1,501,912,213,-1,244,973,501,-1,501,1018,244,-1,245,1020,501,-1,501,973,245,-1,216,914,502,-1,502,1021,216,-1,215,1020,502,-1,502,914,215,-1,245,975,502,-1,502,1020,245,-1,246,1021,502,-1,502,975,246,-1,214,915,503,-1,503,1019,214,-1,216,1021,503,-1,503,915,216,-1,246,977,503,-1,503,1021,246,-1,243,1019,503,-1,503,977,243,-1,217,917,504,-1,504,1022,217,-1,218,1023,504,-1,504,917,218,-1,247,978,504,-1,504,1023,247,-1,248,1022,504,-1,504,978,248,-1,219,921,505,-1,505,1024,219,-1,217,1022,505,-1,505,921,217,-1,248,981,505,-1,505,1022,248,-1,249,1024,505,-1,505,981,249,-1,220,923,506,-1,506,1025,220,-1,219,1024,506,-1,506,923,219,-1,249,983,506,-1,506,1024,249,-1,250,1025,506,-1,506,983,250,-1,218,924,507,-1,507,1023,218,-1,220,1025,507,-1,507,924,220,-1,250,985,507,-1,507,1025,250,-1,247,1023,507,-1,507,985,247,-1,221,926,508,-1,508,1026,221,-1,222,1027,508,-1,508,926,222,-1,251,986,508,-1,508,1027,251,-1,252,1026,508,-1,508,986,252,-1,223,930,509,-1,509,1028,223,-1,221,1026,509,-1,509,930,221,-1,252,989,509,-1,509,1026,252,-1,253,1028,509,-1,509,989,253,-1,224,932,510,-1,510,1029,224,-1,223,1028,510,-1,510,932,223,-1,253,991,510,-1,510,1028,253,-1,254,1029,510,-1,510,991,254,-1,222,933,511,-1,511,1027,222,-1,224,1029,511,-1,511,933,224,-1,254,993,511,-1,511,1029,254,-1,251,1027,511,-1,511,993,251,-1,225,935,512,-1,512,1030,225,-1,226,1031,512,-1,512,935,226,-1,255,994,512,-1,512,1031,255,-1,256,1030,512,-1,512,994,256,-1,227,939,513,-1,513,1032,227,-1,225,1030,513,-1,513,939,225,-1,256,997,513,-1,513,1030,256,-1,257,1032,513,-1,513,997,257,-1,228,941,514,-1,514,1033,228,-1,227,1032,514,-1,514,941,227,-1,257,999,514,-1,514,1032,257,-1,258,1033,514,-1,514,999,258,-1,226,942,515,-1,515,1031,226,-1,228,1033,515,-1,515,942,228,-1,258,1001,515,-1,515,1033,258,-1,255,1031,515,-1,515,1001,255,-1,229,944,516,-1,516,1034,229,-1,230,1035,516,-1,516,944,230,-1,259,1002,516,-1,516,1035,259,-1,260,1034,516,-1,516,1002,260,-1,231,947,517,-1,517,1036,231,-1,229,1034,517,-1,517,947,229,-1,260,1005,517,-1,517,1034,260,-1,261,1036,517,-1,517,1005,261,-1,232,949,518,-1,518,1037,232,-1,231,1036,518,-1,518,949,231,-1,261,1007,518,-1,518,1036,261,-1,262,1037,518,-1,518,1007,262,-1,230,950,519,-1,519,1035,230,-1,232,1037,519,-1,519,950,232,-1,262,1009,519,-1,519,1037,262,-1,259,1035,519,-1,519,1009,259,-1,233,952,520,-1,520,1038,233,-1,234,1040,520,-1,520,952,234,-1,264,1039,520,-1,520,1040,264,-1,263,1038,520,-1,520,1039,263,-1]
TextureCoordinate754 = x3d.TextureCoordinate(DEF="Upper_teeth-TEXCOORD_JinBlink")
TextureCoordinate754.point = [(0.8647, 0.3354),(0.8772, 0.3277),(0.8746, 0.3053),(0.8621, 0.313),(0.8601, 0.2951),(0.8726, 0.2875),(0.8849, 0.2799),(0.8869, 0.2977),(0.8896, 0.3201),(0.8597, 0.2826),(0.8715, 0.2769),(0.8722, 0.2824),(0.8598, 0.2838),(0.8599, 0.2848),(0.8717, 0.2877),(0.8824, 0.2879),(0.8841, 0.2797),(0.8831, 0.2709),(0.9015, 0.3128),(0.8989, 0.2904),(0.8968, 0.2726),(0.9082, 0.2656),(0.9103, 0.2834),(0.913, 0.3058),(0.894, 0.2646),(0.8952, 0.2745),(0.8933, 0.2842),(0.9019, 0.2784),(0.9057, 0.268),(0.9045, 0.2582),(0.9239, 0.299),(0.9213, 0.2766),(0.9192, 0.2589),(0.9299, 0.2523),(0.9321, 0.27),(0.9347, 0.2924),(0.9147, 0.2519),(0.9158, 0.2618),(0.9122, 0.2726),(0.9201, 0.2673),(0.926, 0.2555),(0.9249, 0.2457),(0.9454, 0.2859),(0.9428, 0.2634),(0.9406, 0.2457),(0.9501, 0.2399),(0.9523, 0.2576),(0.9549, 0.28),(0.9353, 0.2393),(0.8544, 0.1),(0.8519, 0.1017),(0.8611, 0.09569),(0.8611, 0.09564),(0.8678, 0.09126),(0.8702, 0.08971),(0.8679, 0.09122),(0.861, 0.09573),(0.8541, 0.1002),(0.9585, 0.03203),(0.9596, 0.03133),(0.96, 0.03107),(0.9584, 0.0321),(0.9591, 0.03167),(0.9604, 0.03082),(0.9615, 0.0301),(0.9616, 0.03005),(0.9609, 0.0305),(0.9593, 0.03151),(0.9587, 0.03191),(0.9568, 0.03319),(0.9582, 0.03223),(0.9564, 0.03343),(0.9548, 0.03448),(0.9542, 0.03487),(0.9553, 0.03415),(0.9571, 0.03297),(0.9524, 0.03607),(0.9524, 0.03602),(0.9481, 0.03882),(0.9494, 0.03797),(0.9459, 0.04029),(0.9439, 0.04162),(0.944, 0.04152),(0.9468, 0.03967),(0.9503, 0.03741),(0.938, 0.04546),(0.9392, 0.04468),(0.9364, 0.2491),(0.931, 0.261),(0.9309, 0.05011),(0.9321, 0.04928),(0.9256, 0.05352),(0.9225, 0.05555),(0.9237, 0.05479),(0.9296, 0.05095),(0.9361, 0.04669),(0.9154, 0.06023),(0.9165, 0.05949),(0.9084, 0.06475),(0.9096, 0.064),(0.9032, 0.06814),(0.9004, 0.07001),(0.9016, 0.06919),(0.9073, 0.06551),(0.9135, 0.06145),(0.8925, 0.07517),(0.8942, 0.07408),(0.8855, 0.07974),(0.8861, 0.07936),(0.8794, 0.08374),(0.8768, 0.08541),(0.8787, 0.08417),(0.8849, 0.08013),(0.8914, 0.07589),(0.8536, 0.1469),(0.8566, 0.144),(0.8658, 0.138),(0.8659, 0.1387),(0.878, 0.1308),(0.875, 0.132),(0.8743, 0.1261),(0.8652, 0.1321),(0.856, 0.1381),(0.8782, 0.1298),(0.8783, 0.1303),(0.8786, 0.1309),(0.8752, 0.1318),(0.8746, 0.126),(0.8776, 0.124),(0.8656, 0.1381),(0.8658, 0.1399),(0.853, 0.1485),(0.8561, 0.1443),(0.8554, 0.1385),(0.865, 0.1322),(0.8532, 0.1462),(0.8533, 0.1471),(0.8526, 0.1403),(0.9617, 0.0761),(0.9624, 0.07489),(0.9621, 0.07506),(0.9621, 0.07583),(0.9628, 0.07539),(0.9631, 0.07441),(0.9625, 0.06853),(0.9377, 0.2565),(0.9456, 0.2435),(0.9446, 0.2336),(0.962, 0.2757),(0.9593, 0.2533),(0.9572, 0.2355),(0.9622, 0.2324),(0.9644, 0.2502),(0.967, 0.2726),(0.9511, 0.2295),(0.9522, 0.2394),(0.9455, 0.2521),(0.9476, 0.2503),(0.9567, 0.2367),(0.9557, 0.2268),(0.9705, 0.2705),(0.9678, 0.2481),(0.9657, 0.2303),(0.9678, 0.229),(0.97, 0.2468),(0.9726, 0.2692),(0.9588, 0.2248),(0.9599, 0.2347),(0.9526, 0.2478),(0.9522, 0.2475),(0.9618, 0.2335),(0.9608, 0.2236),(0.9737, 0.2685),(0.9711, 0.2461),(0.9689, 0.2284),(0.9692, 0.2282),(0.9714, 0.2459),(0.974, 0.2683),(0.9617, 0.2231),(0.9628, 0.233),(0.9552, 0.2462),(0.9532, 0.2469),(0.963, 0.2328),(0.9619, 0.2229),(0.8599, 0.282),(0.8715, 0.2749),(0.8828, 0.268),(0.8829, 0.2677),(0.8716, 0.2747),(0.86, 0.2819),(0.8937, 0.2613),(0.9042, 0.2549),(0.9044, 0.2545),(0.8937, 0.2611),(0.9144, 0.2486),(0.9246, 0.2423),(0.9615, 0.06917),(0.9618, 0.06901),(0.9652, 0.07305),(0.9652, 0.0735),(0.9676, 0.07275),(0.967, 0.07187),(0.9663, 0.06605),(0.9646, 0.0672),(0.9672, 0.07175),(0.9675, 0.07342),(0.9663, 0.07362),(0.9661, 0.07245),(0.9654, 0.06663),(0.9665, 0.06594),(0.9641, 0.07376),(0.9642, 0.07421),(0.9635, 0.06791),(0.9653, 0.07301),(0.9638, 0.07396),(0.9641, 0.07564),(0.9606, 0.07732),(0.9612, 0.0757),(0.9605, 0.06987),(0.9631, 0.06815),(0.9646, 0.06719),(0.9587, 0.07729),(0.9588, 0.07774),(0.9563, 0.07961),(0.9576, 0.078),(0.957, 0.07212),(0.9581, 0.07143),(0.959, 0.07709),(0.959, 0.07785),(0.9616, 0.0754),(0.961, 0.06952),(0.9584, 0.0712),(0.9641, 0.07376),(0.9635, 0.06791),(0.9589, 0.07716),(0.9549, 0.0798),(0.9552, 0.08149),(0.9481, 0.08548),(0.9498, 0.08311),(0.9491, 0.07727),(0.9542, 0.07397),(0.9582, 0.07134),(0.9469, 0.08502),(0.9469, 0.08547),(0.9446, 0.08724),(0.9469, 0.08499),(0.9463, 0.07912),(0.9463, 0.07916),(0.9507, 0.08252),(0.9507, 0.08326),(0.9555, 0.07936),(0.9549, 0.07349),(0.9501, 0.07664),(0.9587, 0.0773),(0.958, 0.07146),(0.9454, 0.08597),(0.9374, 0.09121),(0.9377, 0.09292),(0.926, 0.0999),(0.9284, 0.09706),(0.9278, 0.09122),(0.9367, 0.08537),(0.9248, 0.242),(0.9144, 0.2484),(0.9447, 0.08014),(0.9242, 0.09986),(0.9242, 0.1003),(0.9225, 0.1017),(0.9255, 0.09895),(0.9249, 0.09308),(0.9235, 0.094),(0.9336, 0.09368),(0.9336, 0.0944),(0.9426, 0.0878),(0.942, 0.08194),(0.933, 0.08782),(0.9469, 0.08503),(0.9462, 0.07919),(0.9228, 0.1008),(0.9147, 0.106),(0.915, 0.1078),(0.9032, 0.1148),(0.9059, 0.1118),(0.9052, 0.1059),(0.9141, 0.1002),(0.9221, 0.09494),(0.902, 0.1143),(0.9021, 0.1148),(0.9008, 0.1158),(0.9037, 0.1132),(0.9031, 0.1073),(0.9014, 0.1084),(0.935, 0.2359),(0.9443, 0.2302),(0.9455, 0.2293),(0.9352, 0.2356),(0.951, 0.2261),(0.9555, 0.2233),(0.9564, 0.2226),(0.9512, 0.2258),(0.9587, 0.2214),(0.9606, 0.2202),(0.9615, 0.2195),(0.9589, 0.221),(0.9616, 0.2196),(0.9618, 0.2195),(0.9625, 0.2189),(0.9618, 0.2192),(0.9679, 0.2199),(0.9676, 0.22),(0.9665, 0.2207),(0.9658, 0.2173),(0.967, 0.2171),(0.967, 0.2165),(0.9644, 0.222),(0.961, 0.2241),(0.9605, 0.2206),(0.9638, 0.2191),(0.956, 0.2272),(0.9489, 0.2315),(0.9488, 0.2278),(0.9554, 0.2242),(0.9395, 0.2373),(0.9288, 0.2439),(0.928, 0.2405),(0.939, 0.2343),(0.9181, 0.2504),(0.9072, 0.2572),(0.9066, 0.2536),(0.9115, 0.1082),(0.9115, 0.1088),(0.92, 0.1026),(0.9193, 0.09673),(0.9108, 0.1023),(0.9241, 0.09988),(0.9235, 0.09403),(0.8999, 0.1157),(0.891, 0.1215),(0.8912, 0.1233),(0.8816, 0.1277),(0.881, 0.1218),(0.8903, 0.1157),(0.8993, 0.1098),(0.8783, 0.1298),(0.8809, 0.1281),(0.8803, 0.1223),(0.8776, 0.124),(0.8893, 0.1226),(0.8894, 0.1233),(0.8982, 0.1168),(0.8975, 0.111),(0.8887, 0.1168),(0.902, 0.1143),(0.9014, 0.1085),(0.8526, 0.1068),(0.8521, 0.1016),(0.8612, 0.09563),(0.8617, 0.1008),(0.8709, 0.09485),(0.8702, 0.08973),(0.8734, 0.08764),(0.8741, 0.09274),(0.8711, 0.09469),(0.8704, 0.08957),(0.9176, 0.2474),(0.861, 0.09575),(0.8616, 0.1009),(0.8521, 0.1071),(0.8516, 0.1019),(0.8488, 0.1037),(0.8492, 0.109),(0.9585, 0.03763),(0.958, 0.03239),(0.9578, 0.03251),(0.9582, 0.03778),(0.9592, 0.03716),(0.9587, 0.03192),(0.9605, 0.03073),(0.9611, 0.0359),(0.9628, 0.03482),(0.9621, 0.02971),(0.9622, 0.02964),(0.9629, 0.03473),(0.9619, 0.0354),(0.9612, 0.03028),(0.9595, 0.03142),(0.96, 0.0366),(0.961, 0.03597),(0.9603, 0.03087),(0.9588, 0.03185),(0.9595, 0.03694),(0.9569, 0.03863),(0.9563, 0.0335),(0.9541, 0.03492),(0.9547, 0.04012),(0.9537, 0.04074),(0.9533, 0.03548),(0.9547, 0.03454),(0.9551, 0.03981),(0.9577, 0.03816),(0.9572, 0.03292),(0.9594, 0.03147),(0.96, 0.03662),(0.9546, 0.04012),(0.9539, 0.03504),(0.95, 0.03763),(0.9506, 0.04274),(0.9457, 0.04599),(0.9451, 0.04082),(0.9424, 0.0426),(0.9429, 0.04783),(0.943, 0.04774),(0.9425, 0.04248),(0.9463, 0.04001),(0.9468, 0.04526),(0.9515, 0.04215),(0.951, 0.03695),(0.9539, 0.03505),(0.9546, 0.04018),(0.9412, 0.04889),(0.9405, 0.0438),(0.8957, 0.2642),(0.8839, 0.2714),(0.8835, 0.2678),(0.8953, 0.2611),(0.8717, 0.2789),(0.8594, 0.2865),(0.8595, 0.2833),(0.8715, 0.2757),(0.8747, 0.2891),(0.8686, 0.2887),(0.862, 0.2864),(0.866, 0.2846),(0.8874, 0.2834),(0.8844, 0.2872),(0.8993, 0.2761),(0.8981, 0.2788),(0.9106, 0.2691),(0.9119, 0.2704),(0.9172, 0.2651),(0.9224, 0.2639),(0.9201, 0.2633),(0.9275, 0.2608),(0.9208, 0.2629),(0.9294, 0.2596),(0.8596, 0.2851),(0.8597, 0.2849),(0.8598, 0.2845),(0.8592, 0.2791),(0.8591, 0.2794),(0.859, 0.2795),(0.8574, 0.2652),(0.8575, 0.265),(0.8554, 0.2465),(0.8552, 0.2466),(0.8551, 0.2466),(0.8573, 0.2653),(0.9326, 0.04897),(0.9332, 0.05411),(0.9243, 0.05992),(0.9238, 0.05471),(0.9197, 0.05742),(0.9201, 0.06267),(0.9216, 0.06174),(0.9211, 0.05648),(0.9291, 0.05126),(0.9296, 0.05648),(0.9386, 0.05063),(0.938, 0.04547),(0.942, 0.04281),(0.9427, 0.04792),(0.9186, 0.06368),(0.9179, 0.05858),(0.91, 0.06373),(0.9106, 0.06889),(0.9018, 0.07461),(0.9013, 0.06939),(0.8976, 0.07184),(0.898, 0.07709),(0.8997, 0.07599),(0.8993, 0.07074),(0.9069, 0.06578),(0.9074, 0.07098),(0.9159, 0.06545),(0.9152, 0.06031),(0.9193, 0.05767),(0.92, 0.06277),(0.8958, 0.07858),(0.8951, 0.07347),(0.8863, 0.07922),(0.8869, 0.0844),(0.8776, 0.09047),(0.8647, 0.3354),(0.8771, 0.08524),(0.8738, 0.08737),(0.8743, 0.09263),(0.8769, 0.09093),(0.8764, 0.08568),(0.8847, 0.08026),(0.8853, 0.08545),(0.894, 0.0797),(0.8934, 0.07458),(0.8972, 0.07212),(0.8979, 0.07722),(0.8634, 0.1163),(0.8726, 0.1104),(0.8542, 0.1223),(0.8758, 0.1082),(0.8728, 0.1102),(0.8633, 0.1165),(0.8537, 0.1227),(0.8509, 0.1246),(0.9599, 0.05337),(0.9608, 0.05274),(0.9601, 0.05322),(0.9628, 0.05144),(0.9645, 0.05032),(0.9647, 0.05021),(0.9637, 0.0509),(0.9617, 0.05214),(0.9613, 0.05242),(0.9587, 0.05413),(0.9628, 0.05146),(0.9563, 0.05567),(0.9553, 0.05632),(0.9568, 0.0554),(0.9593, 0.05373),(0.9617, 0.05215),(0.9524, 0.05824),(0.9474, 0.06152),(0.9564, 0.05561),(0.9445, 0.06339),(0.9446, 0.06333),(0.9484, 0.06085),(0.9532, 0.05771),(0.9563, 0.0557),(0.935, 0.06962),(0.926, 0.07546),(0.943, 0.06439),(0.9218, 0.07824),(0.9232, 0.07731),(0.9313, 0.07204),(0.9403, 0.06617),(0.9445, 0.06343),(0.9123, 0.08441),(0.9035, 0.09017),(0.9203, 0.07919),(0.8997, 0.09266),(0.9014, 0.09156),(0.8621, 0.313),(0.8746, 0.3053),(0.8772, 0.3277),(0.8896, 0.3201),(0.8869, 0.2977),(0.8849, 0.2799),(0.8726, 0.2875),(0.8601, 0.2951),(0.8597, 0.2826),(0.8598, 0.2838),(0.8722, 0.2824),(0.8715, 0.2769),(0.8831, 0.2709),(0.8841, 0.2797),(0.8824, 0.2879),(0.8717, 0.2877),(0.8599, 0.2848),(0.8989, 0.2904),(0.9015, 0.3128),(0.913, 0.3058),(0.9103, 0.2834),(0.9082, 0.2656),(0.8968, 0.2726),(0.8952, 0.2745),(0.894, 0.2646),(0.9045, 0.2582),(0.9057, 0.268),(0.9019, 0.2784),(0.8933, 0.2842),(0.9213, 0.2766),(0.9239, 0.299),(0.9347, 0.2924),(0.9321, 0.27),(0.9299, 0.2523),(0.9192, 0.2589),(0.9158, 0.2618),(0.9147, 0.2519),(0.9249, 0.2457),(0.926, 0.2555),(0.9201, 0.2673),(0.9122, 0.2726),(0.9428, 0.2634),(0.9454, 0.2859),(0.9549, 0.28),(0.9523, 0.2576),(0.9501, 0.2399),(0.9406, 0.2457),(0.9364, 0.2491),(0.9353, 0.2393),(0.9091, 0.08653),(0.9446, 0.2336),(0.9176, 0.08097),(0.9456, 0.2435),(0.9217, 0.07828),(0.9377, 0.2565),(0.8886, 0.09993),(0.931, 0.261),(0.8792, 0.106),(0.9593, 0.2533),(0.962, 0.2757),(0.8975, 0.09409),(0.967, 0.2726),(0.9644, 0.2502),(0.9622, 0.2324),(0.9572, 0.2355),(0.9522, 0.2394),(0.9511, 0.2295),(0.8759, 0.1082),(0.9557, 0.2268),(0.9567, 0.2367),(0.9476, 0.2503),(0.9455, 0.2521),(0.9678, 0.2481),(0.9705, 0.2705),(0.9726, 0.2692),(0.97, 0.2468),(0.9678, 0.229),(0.9657, 0.2303),(0.9599, 0.2347),(0.9588, 0.2248),(0.9608, 0.2236),(0.9618, 0.2335),(0.9522, 0.2475),(0.9526, 0.2478),(0.9711, 0.2461),(0.9737, 0.2685),(0.9689, 0.2284),(0.9628, 0.233),(0.9617, 0.2231),(0.9552, 0.2462),(0.8715, 0.2749),(0.8599, 0.282),(0.86, 0.2819),(0.8785, 0.1065),(0.887, 0.101),(0.8958, 0.09522),(0.8996, 0.09272),(0.8544, 0.1),(0.8611, 0.09564),(0.8611, 0.09569),(0.8519, 0.1017),(0.8541, 0.1002),(0.861, 0.09573),(0.8679, 0.09122),(0.8702, 0.08971),(0.8678, 0.09126),(0.9585, 0.03203),(0.9584, 0.0321),(0.96, 0.03107),(0.9596, 0.03133),(0.9609, 0.0305),(0.9616, 0.03005),(0.9615, 0.0301),(0.9604, 0.03082),(0.9591, 0.03167),(0.9593, 0.03151),(0.9582, 0.03223),(0.9568, 0.03319),(0.9587, 0.03191),(0.9571, 0.03297),(0.9553, 0.03415),(0.9542, 0.03487),(0.9548, 0.03448),(0.9564, 0.03343),(0.9524, 0.03607),(0.9494, 0.03797),(0.9481, 0.03882),(0.9524, 0.03602),(0.9503, 0.03741),(0.9468, 0.03967),(0.944, 0.04152),(0.9439, 0.04162),(0.9459, 0.04029),(0.938, 0.04546),(0.9321, 0.04928),(0.9309, 0.05011),(0.9392, 0.04468),(0.9361, 0.04669),(0.9296, 0.05095),(0.9237, 0.05479),(0.9225, 0.05555),(0.9256, 0.05352),(0.9154, 0.06023),(0.9096, 0.064),(0.9084, 0.06475),(0.9165, 0.05949),(0.9135, 0.06145),(0.9073, 0.06551),(0.9016, 0.06919),(0.9004, 0.07001),(0.9032, 0.06814),(0.8925, 0.07517),(0.8861, 0.07936),(0.8855, 0.07974),(0.8942, 0.07408),(0.8914, 0.07589),(0.8849, 0.08013),(0.8787, 0.08417),(0.8716, 0.2747),(0.8829, 0.2677),(0.8768, 0.08541),(0.8794, 0.08374),(0.8536, 0.1469),(0.8659, 0.1387),(0.8658, 0.138),(0.8566, 0.144),(0.856, 0.1381),(0.8652, 0.1321),(0.8743, 0.1261),(0.875, 0.132),(0.878, 0.1308),(0.8783, 0.1303),(0.8782, 0.1298),(0.8776, 0.124),(0.8746, 0.126),(0.8752, 0.1318),(0.8786, 0.1309),(0.8658, 0.1399),(0.8656, 0.1381),(0.865, 0.1322),(0.8554, 0.1385),(0.8561, 0.1443),(0.853, 0.1485),(0.8533, 0.1471),(0.8532, 0.1462),(0.8526, 0.1403),(0.9617, 0.0761),(0.9621, 0.07583),(0.9621, 0.07506),(0.9624, 0.07489),(0.9618, 0.06901),(0.9615, 0.06917),(0.9625, 0.06853),(0.9631, 0.07441),(0.9652, 0.07305),(0.9646, 0.0672),(0.9663, 0.06605),(0.967, 0.07187),(0.9675, 0.07342),(0.9672, 0.07175),(0.9665, 0.06594),(0.9654, 0.06663),(0.9661, 0.07245),(0.9663, 0.07362),(0.9642, 0.07421),(0.9641, 0.07376),(0.9635, 0.06791),(0.9641, 0.07564),(0.9638, 0.07396),(0.9653, 0.07301),(0.9646, 0.06719),(0.9631, 0.06815),(0.9605, 0.06987),(0.9612, 0.0757),(0.9606, 0.07732),(0.9588, 0.07774),(0.9587, 0.07729),(0.9581, 0.07143),(0.957, 0.07212),(0.9576, 0.078),(0.9563, 0.07961),(0.959, 0.07785),(0.959, 0.07709),(0.9584, 0.0712),(0.961, 0.06952),(0.9616, 0.0754),(0.9641, 0.07376),(0.9635, 0.06791),(0.9552, 0.08149),(0.9549, 0.0798),(0.9589, 0.07716),(0.9582, 0.07134),(0.9542, 0.07397),(0.9491, 0.07727),(0.9498, 0.08311),(0.9481, 0.08548),(0.9469, 0.08547),(0.9469, 0.08502),(0.9463, 0.07916),(0.9463, 0.07912),(0.9469, 0.08499),(0.9446, 0.08724),(0.9507, 0.08326),(0.9507, 0.08252),(0.8828, 0.268),(0.9501, 0.07664),(0.9549, 0.07349),(0.9555, 0.07936),(0.9587, 0.0773),(0.958, 0.07146),(0.9377, 0.09292),(0.9374, 0.09121),(0.9454, 0.08597),(0.9447, 0.08014),(0.9367, 0.08537),(0.9278, 0.09122),(0.9284, 0.09706),(0.926, 0.0999),(0.9242, 0.1003),(0.9242, 0.09986),(0.9235, 0.094),(0.9249, 0.09309),(0.9255, 0.09895),(0.9225, 0.1017),(0.9336, 0.0944),(0.9336, 0.09368),(0.933, 0.08782),(0.942, 0.08194),(0.9426, 0.0878),(0.9469, 0.08503),(0.9462, 0.07919),(0.915, 0.1078),(0.9147, 0.106),(0.8937, 0.2613),(0.8937, 0.2611),(0.9044, 0.2545),(0.9042, 0.2549),(0.9144, 0.2486),(0.9144, 0.2484),(0.9248, 0.242),(0.9246, 0.2423),(0.935, 0.2359),(0.9352, 0.2356),(0.9455, 0.2293),(0.9443, 0.2302),(0.951, 0.2261),(0.9512, 0.2258),(0.9564, 0.2226),(0.9555, 0.2233),(0.9587, 0.2214),(0.9589, 0.221),(0.9615, 0.2195),(0.9606, 0.2202),(0.9616, 0.2196),(0.9618, 0.2192),(0.9676, 0.22),(0.967, 0.2171),(0.9658, 0.2173),(0.9665, 0.2207),(0.9644, 0.222),(0.9638, 0.2191),(0.9605, 0.2206),(0.961, 0.2241),(0.956, 0.2272),(0.9554, 0.2242),(0.9488, 0.2278),(0.9489, 0.2315),(0.9395, 0.2373),(0.939, 0.2343),(0.928, 0.2405),(0.9288, 0.2439),(0.9181, 0.2504),(0.9176, 0.2474),(0.9066, 0.2536),(0.9072, 0.2572),(0.8957, 0.2642),(0.8953, 0.2611),(0.8835, 0.2678),(0.8839, 0.2714),(0.8717, 0.2789),(0.8715, 0.2757),(0.9228, 0.1008),(0.8595, 0.2833),(0.8594, 0.2865),(0.9221, 0.09494),(0.8686, 0.2887),(0.8747, 0.2891),(0.9141, 0.1002),(0.862, 0.2864),(0.8844, 0.2872),(0.9052, 0.1059),(0.8874, 0.2834),(0.8981, 0.2788),(0.9059, 0.1118),(0.8993, 0.2761),(0.9119, 0.2704),(0.9106, 0.2691),(0.9032, 0.1148),(0.9224, 0.2639),(0.9172, 0.2651),(0.9275, 0.2608),(0.9201, 0.2633),(0.9294, 0.2596),(0.8597, 0.2849),(0.8591, 0.2794),(0.8592, 0.2791),(0.8598, 0.2845),(0.9021, 0.1148),(0.8575, 0.265),(0.8574, 0.2652),(0.8552, 0.2466),(0.8554, 0.2465),(0.902, 0.1143),(0.9014, 0.1084),(0.9031, 0.1073),(0.9037, 0.1132),(0.9008, 0.1158),(0.9115, 0.1088),(0.9115, 0.1082),(0.9108, 0.1023),(0.9193, 0.09673),(0.92, 0.1026),(0.9241, 0.09988),(0.9235, 0.09403),(0.8912, 0.1233),(0.891, 0.1215),(0.8999, 0.1157),(0.8993, 0.1098),(0.8903, 0.1157),(0.881, 0.1218),(0.8816, 0.1277),(0.8783, 0.1298),(0.8776, 0.124),(0.8803, 0.1223),(0.8809, 0.1281),(0.8894, 0.1233),(0.8893, 0.1226),(0.8887, 0.1168),(0.8975, 0.111),(0.8982, 0.1168),(0.902, 0.1143),(0.9014, 0.1085),(0.8526, 0.1068),(0.8617, 0.1008),(0.8612, 0.09563),(0.8521, 0.1016),(0.8702, 0.08973),(0.8709, 0.09485),(0.8741, 0.09274),(0.8734, 0.08764),(0.8704, 0.08957),(0.8711, 0.09469),(0.8616, 0.1009),(0.861, 0.09575),(0.8516, 0.1019),(0.8521, 0.1071),(0.8492, 0.109),(0.8488, 0.1037),(0.9585, 0.03763),(0.9582, 0.03778),(0.9578, 0.03251),(0.958, 0.03239),(0.9587, 0.03192),(0.9592, 0.03716),(0.9611, 0.0359),(0.9605, 0.03073),(0.9621, 0.02971),(0.9628, 0.03482),(0.9629, 0.03473),(0.9622, 0.02964),(0.9612, 0.03028),(0.9619, 0.0354),(0.96, 0.0366),(0.9595, 0.03142),(0.961, 0.03597),(0.9595, 0.03694),(0.9588, 0.03185),(0.9603, 0.03087),(0.9563, 0.0335),(0.9569, 0.03863),(0.9547, 0.04012),(0.9541, 0.03492),(0.9533, 0.03548),(0.9537, 0.04074),(0.9551, 0.03981),(0.9547, 0.03454),(0.9572, 0.03292),(0.9577, 0.03816),(0.96, 0.03662),(0.9594, 0.03147),(0.9546, 0.04012),(0.9506, 0.04274),(0.95, 0.03763),(0.9539, 0.03504),(0.9451, 0.04082),(0.9457, 0.04599),(0.9429, 0.04783),(0.9424, 0.0426),(0.9425, 0.04248),(0.943, 0.04774),(0.9468, 0.04526),(0.9463, 0.04001),(0.951, 0.03695),(0.9515, 0.04215),(0.9546, 0.04018),(0.9539, 0.03505),(0.9412, 0.04889),(0.9332, 0.05411),(0.9326, 0.04897),(0.9405, 0.0438),(0.9238, 0.05471),(0.9243, 0.05992),(0.9201, 0.06267),(0.9197, 0.05742),(0.9211, 0.05648),(0.9216, 0.06174),(0.9296, 0.05648),(0.9291, 0.05126),(0.938, 0.04547),(0.9386, 0.05063),(0.9427, 0.04792),(0.942, 0.04281),(0.9186, 0.06368),(0.9106, 0.06889),(0.91, 0.06373),(0.9179, 0.05858),(0.9013, 0.06939),(0.9018, 0.07461),(0.898, 0.07709),(0.8976, 0.07184),(0.8993, 0.07074),(0.8997, 0.07599),(0.9074, 0.07098),(0.9069, 0.06578),(0.9152, 0.06031),(0.9159, 0.06545),(0.92, 0.06277),(0.9193, 0.05767),(0.8958, 0.07858),(0.8869, 0.0844),(0.8863, 0.07922),(0.8951, 0.07347),(0.8771, 0.08524),(0.8776, 0.09047),(0.8743, 0.09263),(0.8738, 0.08737),(0.8764, 0.08568),(0.8769, 0.09093),(0.8853, 0.08545),(0.8847, 0.08026),(0.8934, 0.07458),(0.894, 0.0797),(0.8979, 0.07722),(0.8972, 0.07212),(0.8726, 0.1104),(0.8634, 0.1163),(0.8542, 0.1223),(0.8728, 0.1102),(0.8758, 0.1082),(0.8537, 0.1227),(0.8633, 0.1165),(0.8509, 0.1246),(0.9608, 0.05274),(0.9599, 0.05337),(0.9601, 0.05322),(0.9645, 0.05032),(0.9628, 0.05144),(0.9637, 0.0509),(0.9647, 0.05021),(0.9617, 0.05214),(0.9587, 0.05413),(0.9613, 0.05242),(0.9628, 0.05146),(0.9553, 0.05632),(0.9563, 0.05567),(0.9593, 0.05373),(0.9568, 0.0554),(0.9617, 0.05215),(0.9474, 0.06152),(0.9524, 0.05824),(0.9564, 0.05561),(0.9446, 0.06333),(0.9445, 0.06339),(0.9532, 0.05771),(0.9484, 0.06085),(0.9563, 0.0557),(0.926, 0.07546),(0.935, 0.06962),(0.943, 0.06439),(0.9232, 0.07731),(0.9218, 0.07824),(0.9403, 0.06617),(0.9313, 0.07204),(0.9445, 0.06343),(0.9035, 0.09017),(0.9123, 0.08441),(0.9203, 0.07919),(0.9014, 0.09156),(0.8997, 0.09266),(0.9176, 0.08097),(0.9091, 0.08653),(0.9217, 0.07828),(0.8792, 0.106),(0.8886, 0.09993),(0.8975, 0.09409),(0.8785, 0.1065),(0.8759, 0.1082),(0.8958, 0.09522),(0.887, 0.101),(0.8996, 0.09272)]

IndexedFaceSet753.texCoord = TextureCoordinate754
Coordinate755 = x3d.Coordinate(USE="Upper_teeth_COORD_JinBlink")

IndexedFaceSet753.coord = Coordinate755

Shape751.geometry = IndexedFaceSet753

Transform750.children.append(Shape751)

HAnimSegment734.children.append(Transform750)

HAnimJoint93.children.append(HAnimSegment734)

HAnimJoint91.children.append(HAnimJoint93)

HAnimHumanoid90.skeleton.append(HAnimJoint91)
HAnimJoint756 = x3d.HAnimJoint(USE="hanim0_humanoid_root")

HAnimHumanoid90.joints.append(HAnimJoint756)
HAnimJoint757 = x3d.HAnimJoint(USE="hanim0_skullbase")

HAnimHumanoid90.joints.append(HAnimJoint757)

Transform89.children.append(HAnimHumanoid90)

Scene7.children.append(Transform89)
WorldInfo758 = x3d.WorldInfo()
WorldInfo758.title = "FacialAnimationComparisonScripts.x3d"

Scene7.children.append(WorldInfo758)
Viewpoint759 = x3d.Viewpoint()
Viewpoint759.position = [0,20,110]

Scene7.children.append(Viewpoint759)
ProtoInstance760 = x3d.ProtoInstance()
ProtoInstance760.name = "MenuItem"
fieldValue761 = x3d.fieldValue()
fieldValue761.name = "translation"
fieldValue761.value = "24 63.4 0"

ProtoInstance760.fieldValue.append(fieldValue761)
fieldValue762 = x3d.fieldValue()
fieldValue762.name = "description"
fieldValue762.value = "Jin Blink"

ProtoInstance760.fieldValue.append(fieldValue762)
fieldValue763 = x3d.fieldValue()
fieldValue763.name = "menuItemString"
fieldValue763.value = "\"JinBlink\""

ProtoInstance760.fieldValue.append(fieldValue763)
fieldValue764 = x3d.fieldValue()
fieldValue764.name = "adapter"
ScalarInterpolator765 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinBlink")

fieldValue764.children.append(ScalarInterpolator765)

ProtoInstance760.fieldValue.append(fieldValue764)

Scene7.children.append(ProtoInstance760)
ProtoInstance766 = x3d.ProtoInstance()
ProtoInstance766.name = "MenuItem"
fieldValue767 = x3d.fieldValue()
fieldValue767.name = "translation"
fieldValue767.value = "24 60.4 0"

ProtoInstance766.fieldValue.append(fieldValue767)
fieldValue768 = x3d.fieldValue()
fieldValue768.name = "description"
fieldValue768.value = "Jin Brow Lowerer"

ProtoInstance766.fieldValue.append(fieldValue768)
fieldValue769 = x3d.fieldValue()
fieldValue769.name = "menuItemString"
fieldValue769.value = "\"JinBrowLowerer\""

ProtoInstance766.fieldValue.append(fieldValue769)
fieldValue770 = x3d.fieldValue()
fieldValue770.name = "adapter"
ScalarInterpolator771 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinBrowLowerer")

fieldValue770.children.append(ScalarInterpolator771)

ProtoInstance766.fieldValue.append(fieldValue770)

Scene7.children.append(ProtoInstance766)
ProtoInstance772 = x3d.ProtoInstance()
ProtoInstance772.name = "MenuItem"
fieldValue773 = x3d.fieldValue()
fieldValue773.name = "translation"
fieldValue773.value = "24 57.4 0"

ProtoInstance772.fieldValue.append(fieldValue773)
fieldValue774 = x3d.fieldValue()
fieldValue774.name = "description"
fieldValue774.value = "Jin Cheek Puffer"

ProtoInstance772.fieldValue.append(fieldValue774)
fieldValue775 = x3d.fieldValue()
fieldValue775.name = "menuItemString"
fieldValue775.value = "\"JinCheekPuffer\""

ProtoInstance772.fieldValue.append(fieldValue775)
fieldValue776 = x3d.fieldValue()
fieldValue776.name = "adapter"
ScalarInterpolator777 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinCheekPuffer")

fieldValue776.children.append(ScalarInterpolator777)

ProtoInstance772.fieldValue.append(fieldValue776)

Scene7.children.append(ProtoInstance772)
ProtoInstance778 = x3d.ProtoInstance()
ProtoInstance778.name = "MenuItem"
fieldValue779 = x3d.fieldValue()
fieldValue779.name = "translation"
fieldValue779.value = "24 54.4 0"

ProtoInstance778.fieldValue.append(fieldValue779)
fieldValue780 = x3d.fieldValue()
fieldValue780.name = "description"
fieldValue780.value = "Jin Cheek Raiser"

ProtoInstance778.fieldValue.append(fieldValue780)
fieldValue781 = x3d.fieldValue()
fieldValue781.name = "menuItemString"
fieldValue781.value = "\"JinCheekRaiser\""

ProtoInstance778.fieldValue.append(fieldValue781)
fieldValue782 = x3d.fieldValue()
fieldValue782.name = "adapter"
ScalarInterpolator783 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinCheekRaiser")

fieldValue782.children.append(ScalarInterpolator783)

ProtoInstance778.fieldValue.append(fieldValue782)

Scene7.children.append(ProtoInstance778)
ProtoInstance784 = x3d.ProtoInstance()
ProtoInstance784.name = "MenuItem"
fieldValue785 = x3d.fieldValue()
fieldValue785.name = "translation"
fieldValue785.value = "24 51.4 0"

ProtoInstance784.fieldValue.append(fieldValue785)
fieldValue786 = x3d.fieldValue()
fieldValue786.name = "description"
fieldValue786.value = "Jin Chin Raiser"

ProtoInstance784.fieldValue.append(fieldValue786)
fieldValue787 = x3d.fieldValue()
fieldValue787.name = "menuItemString"
fieldValue787.value = "\"JinChinRaiser\""

ProtoInstance784.fieldValue.append(fieldValue787)
fieldValue788 = x3d.fieldValue()
fieldValue788.name = "adapter"
ScalarInterpolator789 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinChinRaiser")

fieldValue788.children.append(ScalarInterpolator789)

ProtoInstance784.fieldValue.append(fieldValue788)

Scene7.children.append(ProtoInstance784)
ProtoInstance790 = x3d.ProtoInstance()
ProtoInstance790.name = "MenuItem"
fieldValue791 = x3d.fieldValue()
fieldValue791.name = "translation"
fieldValue791.value = "24 48.4 0"

ProtoInstance790.fieldValue.append(fieldValue791)
fieldValue792 = x3d.fieldValue()
fieldValue792.name = "description"
fieldValue792.value = "Jin Dimpler"

ProtoInstance790.fieldValue.append(fieldValue792)
fieldValue793 = x3d.fieldValue()
fieldValue793.name = "menuItemString"
fieldValue793.value = "\"JinDimpler\""

ProtoInstance790.fieldValue.append(fieldValue793)
fieldValue794 = x3d.fieldValue()
fieldValue794.name = "adapter"
ScalarInterpolator795 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinDimpler")

fieldValue794.children.append(ScalarInterpolator795)

ProtoInstance790.fieldValue.append(fieldValue794)

Scene7.children.append(ProtoInstance790)
ProtoInstance796 = x3d.ProtoInstance()
ProtoInstance796.name = "MenuItem"
fieldValue797 = x3d.fieldValue()
fieldValue797.name = "translation"
fieldValue797.value = "24 45.4 0"

ProtoInstance796.fieldValue.append(fieldValue797)
fieldValue798 = x3d.fieldValue()
fieldValue798.name = "description"
fieldValue798.value = "Jin Eyes Closed"

ProtoInstance796.fieldValue.append(fieldValue798)
fieldValue799 = x3d.fieldValue()
fieldValue799.name = "menuItemString"
fieldValue799.value = "\"JinEyesClosed\""

ProtoInstance796.fieldValue.append(fieldValue799)
fieldValue800 = x3d.fieldValue()
fieldValue800.name = "adapter"
ScalarInterpolator801 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinEyesClosed")

fieldValue800.children.append(ScalarInterpolator801)

ProtoInstance796.fieldValue.append(fieldValue800)

Scene7.children.append(ProtoInstance796)
ProtoInstance802 = x3d.ProtoInstance()
ProtoInstance802.name = "MenuItem"
fieldValue803 = x3d.fieldValue()
fieldValue803.name = "translation"
fieldValue803.value = "24 42.4 0"

ProtoInstance802.fieldValue.append(fieldValue803)
fieldValue804 = x3d.fieldValue()
fieldValue804.name = "description"
fieldValue804.value = "Jin Inner Brow Raiser"

ProtoInstance802.fieldValue.append(fieldValue804)
fieldValue805 = x3d.fieldValue()
fieldValue805.name = "menuItemString"
fieldValue805.value = "\"JinInnerBrowRaiser\""

ProtoInstance802.fieldValue.append(fieldValue805)
fieldValue806 = x3d.fieldValue()
fieldValue806.name = "adapter"
ScalarInterpolator807 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinInnerBrowRaiser")

fieldValue806.children.append(ScalarInterpolator807)

ProtoInstance802.fieldValue.append(fieldValue806)

Scene7.children.append(ProtoInstance802)
ProtoInstance808 = x3d.ProtoInstance()
ProtoInstance808.name = "MenuItem"
fieldValue809 = x3d.fieldValue()
fieldValue809.name = "translation"
fieldValue809.value = "24 39.4 0"

ProtoInstance808.fieldValue.append(fieldValue809)
fieldValue810 = x3d.fieldValue()
fieldValue810.name = "description"
fieldValue810.value = "Jin Jaw Drop"

ProtoInstance808.fieldValue.append(fieldValue810)
fieldValue811 = x3d.fieldValue()
fieldValue811.name = "menuItemString"
fieldValue811.value = "\"JinJawDrop\""

ProtoInstance808.fieldValue.append(fieldValue811)
fieldValue812 = x3d.fieldValue()
fieldValue812.name = "adapter"
ScalarInterpolator813 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinJawDrop")

fieldValue812.children.append(ScalarInterpolator813)

ProtoInstance808.fieldValue.append(fieldValue812)

Scene7.children.append(ProtoInstance808)
ProtoInstance814 = x3d.ProtoInstance()
ProtoInstance814.name = "MenuItem"
fieldValue815 = x3d.fieldValue()
fieldValue815.name = "translation"
fieldValue815.value = "24 36.4 0"

ProtoInstance814.fieldValue.append(fieldValue815)
fieldValue816 = x3d.fieldValue()
fieldValue816.name = "description"
fieldValue816.value = "Jin Lid Droop"

ProtoInstance814.fieldValue.append(fieldValue816)
fieldValue817 = x3d.fieldValue()
fieldValue817.name = "menuItemString"
fieldValue817.value = "\"JinLidDroop\""

ProtoInstance814.fieldValue.append(fieldValue817)
fieldValue818 = x3d.fieldValue()
fieldValue818.name = "adapter"
ScalarInterpolator819 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLidDroop")

fieldValue818.children.append(ScalarInterpolator819)

ProtoInstance814.fieldValue.append(fieldValue818)

Scene7.children.append(ProtoInstance814)
ProtoInstance820 = x3d.ProtoInstance()
ProtoInstance820.name = "MenuItem"
fieldValue821 = x3d.fieldValue()
fieldValue821.name = "translation"
fieldValue821.value = "24 33.4 0"

ProtoInstance820.fieldValue.append(fieldValue821)
fieldValue822 = x3d.fieldValue()
fieldValue822.name = "description"
fieldValue822.value = "Jin Lid Tightener"

ProtoInstance820.fieldValue.append(fieldValue822)
fieldValue823 = x3d.fieldValue()
fieldValue823.name = "menuItemString"
fieldValue823.value = "\"JinLidTightener\""

ProtoInstance820.fieldValue.append(fieldValue823)
fieldValue824 = x3d.fieldValue()
fieldValue824.name = "adapter"
ScalarInterpolator825 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLidTightener")

fieldValue824.children.append(ScalarInterpolator825)

ProtoInstance820.fieldValue.append(fieldValue824)

Scene7.children.append(ProtoInstance820)
ProtoInstance826 = x3d.ProtoInstance()
ProtoInstance826.name = "MenuItem"
fieldValue827 = x3d.fieldValue()
fieldValue827.name = "translation"
fieldValue827.value = "24 30.4 0"

ProtoInstance826.fieldValue.append(fieldValue827)
fieldValue828 = x3d.fieldValue()
fieldValue828.name = "description"
fieldValue828.value = "Jin Lip Corner Depressor"

ProtoInstance826.fieldValue.append(fieldValue828)
fieldValue829 = x3d.fieldValue()
fieldValue829.name = "menuItemString"
fieldValue829.value = "\"JinLipCornerDepressor\""

ProtoInstance826.fieldValue.append(fieldValue829)
fieldValue830 = x3d.fieldValue()
fieldValue830.name = "adapter"
ScalarInterpolator831 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLipCornerDepressor")

fieldValue830.children.append(ScalarInterpolator831)

ProtoInstance826.fieldValue.append(fieldValue830)

Scene7.children.append(ProtoInstance826)
ProtoInstance832 = x3d.ProtoInstance()
ProtoInstance832.name = "MenuItem"
fieldValue833 = x3d.fieldValue()
fieldValue833.name = "translation"
fieldValue833.value = "24 27.4 0"

ProtoInstance832.fieldValue.append(fieldValue833)
fieldValue834 = x3d.fieldValue()
fieldValue834.name = "description"
fieldValue834.value = "Jin Lip Corner Puller"

ProtoInstance832.fieldValue.append(fieldValue834)
fieldValue835 = x3d.fieldValue()
fieldValue835.name = "menuItemString"
fieldValue835.value = "\"JinLipCornerPuller\""

ProtoInstance832.fieldValue.append(fieldValue835)
fieldValue836 = x3d.fieldValue()
fieldValue836.name = "adapter"
ScalarInterpolator837 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLipCornerPuller")

fieldValue836.children.append(ScalarInterpolator837)

ProtoInstance832.fieldValue.append(fieldValue836)

Scene7.children.append(ProtoInstance832)
ProtoInstance838 = x3d.ProtoInstance()
ProtoInstance838.name = "MenuItem"
fieldValue839 = x3d.fieldValue()
fieldValue839.name = "translation"
fieldValue839.value = "24 24.4 0"

ProtoInstance838.fieldValue.append(fieldValue839)
fieldValue840 = x3d.fieldValue()
fieldValue840.name = "description"
fieldValue840.value = "Jin Lip Funneler"

ProtoInstance838.fieldValue.append(fieldValue840)
fieldValue841 = x3d.fieldValue()
fieldValue841.name = "menuItemString"
fieldValue841.value = "\"JinLipFunneler\""

ProtoInstance838.fieldValue.append(fieldValue841)
fieldValue842 = x3d.fieldValue()
fieldValue842.name = "adapter"
ScalarInterpolator843 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLipFunneler")

fieldValue842.children.append(ScalarInterpolator843)

ProtoInstance838.fieldValue.append(fieldValue842)

Scene7.children.append(ProtoInstance838)
ProtoInstance844 = x3d.ProtoInstance()
ProtoInstance844.name = "MenuItem"
fieldValue845 = x3d.fieldValue()
fieldValue845.name = "translation"
fieldValue845.value = "24 21.4 0"

ProtoInstance844.fieldValue.append(fieldValue845)
fieldValue846 = x3d.fieldValue()
fieldValue846.name = "description"
fieldValue846.value = "Jin Lip Pressor"

ProtoInstance844.fieldValue.append(fieldValue846)
fieldValue847 = x3d.fieldValue()
fieldValue847.name = "menuItemString"
fieldValue847.value = "\"JinLipPressor\""

ProtoInstance844.fieldValue.append(fieldValue847)
fieldValue848 = x3d.fieldValue()
fieldValue848.name = "adapter"
ScalarInterpolator849 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLipPressor")

fieldValue848.children.append(ScalarInterpolator849)

ProtoInstance844.fieldValue.append(fieldValue848)

Scene7.children.append(ProtoInstance844)
ProtoInstance850 = x3d.ProtoInstance()
ProtoInstance850.name = "MenuItem"
fieldValue851 = x3d.fieldValue()
fieldValue851.name = "translation"
fieldValue851.value = "24 18.4 0"

ProtoInstance850.fieldValue.append(fieldValue851)
fieldValue852 = x3d.fieldValue()
fieldValue852.name = "description"
fieldValue852.value = "Jin Lip Puckerer"

ProtoInstance850.fieldValue.append(fieldValue852)
fieldValue853 = x3d.fieldValue()
fieldValue853.name = "menuItemString"
fieldValue853.value = "\"JinLipPuckerer\""

ProtoInstance850.fieldValue.append(fieldValue853)
fieldValue854 = x3d.fieldValue()
fieldValue854.name = "adapter"
ScalarInterpolator855 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLipPuckerer")

fieldValue854.children.append(ScalarInterpolator855)

ProtoInstance850.fieldValue.append(fieldValue854)

Scene7.children.append(ProtoInstance850)
ProtoInstance856 = x3d.ProtoInstance()
ProtoInstance856.name = "MenuItem"
fieldValue857 = x3d.fieldValue()
fieldValue857.name = "translation"
fieldValue857.value = "24 15.4 0"

ProtoInstance856.fieldValue.append(fieldValue857)
fieldValue858 = x3d.fieldValue()
fieldValue858.name = "description"
fieldValue858.value = "Jin Lips Part"

ProtoInstance856.fieldValue.append(fieldValue858)
fieldValue859 = x3d.fieldValue()
fieldValue859.name = "menuItemString"
fieldValue859.value = "\"JinLipsPart\""

ProtoInstance856.fieldValue.append(fieldValue859)
fieldValue860 = x3d.fieldValue()
fieldValue860.name = "adapter"
ScalarInterpolator861 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLipsPart")

fieldValue860.children.append(ScalarInterpolator861)

ProtoInstance856.fieldValue.append(fieldValue860)

Scene7.children.append(ProtoInstance856)
ProtoInstance862 = x3d.ProtoInstance()
ProtoInstance862.name = "MenuItem"
fieldValue863 = x3d.fieldValue()
fieldValue863.name = "translation"
fieldValue863.value = "24 12.4 0"

ProtoInstance862.fieldValue.append(fieldValue863)
fieldValue864 = x3d.fieldValue()
fieldValue864.name = "description"
fieldValue864.value = "Jin Lip Stretcher"

ProtoInstance862.fieldValue.append(fieldValue864)
fieldValue865 = x3d.fieldValue()
fieldValue865.name = "menuItemString"
fieldValue865.value = "\"JinLipStretcher\""

ProtoInstance862.fieldValue.append(fieldValue865)
fieldValue866 = x3d.fieldValue()
fieldValue866.name = "adapter"
ScalarInterpolator867 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLipStretcher")

fieldValue866.children.append(ScalarInterpolator867)

ProtoInstance862.fieldValue.append(fieldValue866)

Scene7.children.append(ProtoInstance862)
ProtoInstance868 = x3d.ProtoInstance()
ProtoInstance868.name = "MenuItem"
fieldValue869 = x3d.fieldValue()
fieldValue869.name = "translation"
fieldValue869.value = "24 9.4 0"

ProtoInstance868.fieldValue.append(fieldValue869)
fieldValue870 = x3d.fieldValue()
fieldValue870.name = "description"
fieldValue870.value = "Jin Lip Suck"

ProtoInstance868.fieldValue.append(fieldValue870)
fieldValue871 = x3d.fieldValue()
fieldValue871.name = "menuItemString"
fieldValue871.value = "\"JinLipSuck\""

ProtoInstance868.fieldValue.append(fieldValue871)
fieldValue872 = x3d.fieldValue()
fieldValue872.name = "adapter"
ScalarInterpolator873 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLipSuck")

fieldValue872.children.append(ScalarInterpolator873)

ProtoInstance868.fieldValue.append(fieldValue872)

Scene7.children.append(ProtoInstance868)
ProtoInstance874 = x3d.ProtoInstance()
ProtoInstance874.name = "MenuItem"
fieldValue875 = x3d.fieldValue()
fieldValue875.name = "translation"
fieldValue875.value = "24 6.4 0"

ProtoInstance874.fieldValue.append(fieldValue875)
fieldValue876 = x3d.fieldValue()
fieldValue876.name = "description"
fieldValue876.value = "Jin Lip Tightener"

ProtoInstance874.fieldValue.append(fieldValue876)
fieldValue877 = x3d.fieldValue()
fieldValue877.name = "menuItemString"
fieldValue877.value = "\"JinLipTightener\""

ProtoInstance874.fieldValue.append(fieldValue877)
fieldValue878 = x3d.fieldValue()
fieldValue878.name = "adapter"
ScalarInterpolator879 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLipTightener")

fieldValue878.children.append(ScalarInterpolator879)

ProtoInstance874.fieldValue.append(fieldValue878)

Scene7.children.append(ProtoInstance874)
ProtoInstance880 = x3d.ProtoInstance()
ProtoInstance880.name = "MenuItem"
fieldValue881 = x3d.fieldValue()
fieldValue881.name = "translation"
fieldValue881.value = "24 3.4 0"

ProtoInstance880.fieldValue.append(fieldValue881)
fieldValue882 = x3d.fieldValue()
fieldValue882.name = "description"
fieldValue882.value = "Jin Lower Lip Depressor"

ProtoInstance880.fieldValue.append(fieldValue882)
fieldValue883 = x3d.fieldValue()
fieldValue883.name = "menuItemString"
fieldValue883.value = "\"JinLowerLipDepressor\""

ProtoInstance880.fieldValue.append(fieldValue883)
fieldValue884 = x3d.fieldValue()
fieldValue884.name = "adapter"
ScalarInterpolator885 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinLowerLipDepressor")

fieldValue884.children.append(ScalarInterpolator885)

ProtoInstance880.fieldValue.append(fieldValue884)

Scene7.children.append(ProtoInstance880)
ProtoInstance886 = x3d.ProtoInstance()
ProtoInstance886.name = "MenuItem"
fieldValue887 = x3d.fieldValue()
fieldValue887.name = "translation"
fieldValue887.value = "24 0.4 0"

ProtoInstance886.fieldValue.append(fieldValue887)
fieldValue888 = x3d.fieldValue()
fieldValue888.name = "description"
fieldValue888.value = "Jin Mouth Stretch"

ProtoInstance886.fieldValue.append(fieldValue888)
fieldValue889 = x3d.fieldValue()
fieldValue889.name = "menuItemString"
fieldValue889.value = "\"JinMouthStretch\""

ProtoInstance886.fieldValue.append(fieldValue889)
fieldValue890 = x3d.fieldValue()
fieldValue890.name = "adapter"
ScalarInterpolator891 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinMouthStretch")

fieldValue890.children.append(ScalarInterpolator891)

ProtoInstance886.fieldValue.append(fieldValue890)

Scene7.children.append(ProtoInstance886)
ProtoInstance892 = x3d.ProtoInstance()
ProtoInstance892.name = "MenuItem"
fieldValue893 = x3d.fieldValue()
fieldValue893.name = "translation"
fieldValue893.value = "24 -2.6 0"

ProtoInstance892.fieldValue.append(fieldValue893)
fieldValue894 = x3d.fieldValue()
fieldValue894.name = "description"
fieldValue894.value = "Jin Nasolabial Deepener"

ProtoInstance892.fieldValue.append(fieldValue894)
fieldValue895 = x3d.fieldValue()
fieldValue895.name = "menuItemString"
fieldValue895.value = "\"JinNasolabialDeepener\""

ProtoInstance892.fieldValue.append(fieldValue895)
fieldValue896 = x3d.fieldValue()
fieldValue896.name = "adapter"
ScalarInterpolator897 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinNasolabialDeepener")

fieldValue896.children.append(ScalarInterpolator897)

ProtoInstance892.fieldValue.append(fieldValue896)

Scene7.children.append(ProtoInstance892)
ProtoInstance898 = x3d.ProtoInstance()
ProtoInstance898.name = "MenuItem"
fieldValue899 = x3d.fieldValue()
fieldValue899.name = "translation"
fieldValue899.value = "24 -5.6 0"

ProtoInstance898.fieldValue.append(fieldValue899)
fieldValue900 = x3d.fieldValue()
fieldValue900.name = "description"
fieldValue900.value = "Jin Nose Wrinkler"

ProtoInstance898.fieldValue.append(fieldValue900)
fieldValue901 = x3d.fieldValue()
fieldValue901.name = "menuItemString"
fieldValue901.value = "\"JinNoseWrinkler\""

ProtoInstance898.fieldValue.append(fieldValue901)
fieldValue902 = x3d.fieldValue()
fieldValue902.name = "adapter"
ScalarInterpolator903 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinNoseWrinkler")

fieldValue902.children.append(ScalarInterpolator903)

ProtoInstance898.fieldValue.append(fieldValue902)

Scene7.children.append(ProtoInstance898)
ProtoInstance904 = x3d.ProtoInstance()
ProtoInstance904.name = "MenuItem"
fieldValue905 = x3d.fieldValue()
fieldValue905.name = "translation"
fieldValue905.value = "24 -8.6 0"

ProtoInstance904.fieldValue.append(fieldValue905)
fieldValue906 = x3d.fieldValue()
fieldValue906.name = "description"
fieldValue906.value = "Jin Outer Brow Raiser"

ProtoInstance904.fieldValue.append(fieldValue906)
fieldValue907 = x3d.fieldValue()
fieldValue907.name = "menuItemString"
fieldValue907.value = "\"JinOuterBrowRaiser\""

ProtoInstance904.fieldValue.append(fieldValue907)
fieldValue908 = x3d.fieldValue()
fieldValue908.name = "adapter"
ScalarInterpolator909 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinOuterBrowRaiser")

fieldValue908.children.append(ScalarInterpolator909)

ProtoInstance904.fieldValue.append(fieldValue908)

Scene7.children.append(ProtoInstance904)
ProtoInstance910 = x3d.ProtoInstance()
ProtoInstance910.name = "MenuItem"
fieldValue911 = x3d.fieldValue()
fieldValue911.name = "translation"
fieldValue911.value = "24 -11.6 0"

ProtoInstance910.fieldValue.append(fieldValue911)
fieldValue912 = x3d.fieldValue()
fieldValue912.name = "description"
fieldValue912.value = "Jin Slit"

ProtoInstance910.fieldValue.append(fieldValue912)
fieldValue913 = x3d.fieldValue()
fieldValue913.name = "menuItemString"
fieldValue913.value = "\"JinSlit\""

ProtoInstance910.fieldValue.append(fieldValue913)
fieldValue914 = x3d.fieldValue()
fieldValue914.name = "adapter"
ScalarInterpolator915 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinSlit")

fieldValue914.children.append(ScalarInterpolator915)

ProtoInstance910.fieldValue.append(fieldValue914)

Scene7.children.append(ProtoInstance910)
ProtoInstance916 = x3d.ProtoInstance()
ProtoInstance916.name = "MenuItem"
fieldValue917 = x3d.fieldValue()
fieldValue917.name = "translation"
fieldValue917.value = "24 -14.6 0"

ProtoInstance916.fieldValue.append(fieldValue917)
fieldValue918 = x3d.fieldValue()
fieldValue918.name = "description"
fieldValue918.value = "Jin Squint"

ProtoInstance916.fieldValue.append(fieldValue918)
fieldValue919 = x3d.fieldValue()
fieldValue919.name = "menuItemString"
fieldValue919.value = "\"JinSquint\""

ProtoInstance916.fieldValue.append(fieldValue919)
fieldValue920 = x3d.fieldValue()
fieldValue920.name = "adapter"
ScalarInterpolator921 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinSquint")

fieldValue920.children.append(ScalarInterpolator921)

ProtoInstance916.fieldValue.append(fieldValue920)

Scene7.children.append(ProtoInstance916)
ProtoInstance922 = x3d.ProtoInstance()
ProtoInstance922.name = "MenuItem"
fieldValue923 = x3d.fieldValue()
fieldValue923.name = "translation"
fieldValue923.value = "24 -17.6 0"

ProtoInstance922.fieldValue.append(fieldValue923)
fieldValue924 = x3d.fieldValue()
fieldValue924.name = "description"
fieldValue924.value = "Jin Upper Lid Raiser"

ProtoInstance922.fieldValue.append(fieldValue924)
fieldValue925 = x3d.fieldValue()
fieldValue925.name = "menuItemString"
fieldValue925.value = "\"JinUpperLidRaiser\""

ProtoInstance922.fieldValue.append(fieldValue925)
fieldValue926 = x3d.fieldValue()
fieldValue926.name = "adapter"
ScalarInterpolator927 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinUpperLidRaiser")

fieldValue926.children.append(ScalarInterpolator927)

ProtoInstance922.fieldValue.append(fieldValue926)

Scene7.children.append(ProtoInstance922)
ProtoInstance928 = x3d.ProtoInstance()
ProtoInstance928.name = "MenuItem"
fieldValue929 = x3d.fieldValue()
fieldValue929.name = "translation"
fieldValue929.value = "24 -20.6 0"

ProtoInstance928.fieldValue.append(fieldValue929)
fieldValue930 = x3d.fieldValue()
fieldValue930.name = "description"
fieldValue930.value = "Jin Upper Lip Raiser"

ProtoInstance928.fieldValue.append(fieldValue930)
fieldValue931 = x3d.fieldValue()
fieldValue931.name = "menuItemString"
fieldValue931.value = "\"JinUpperLipRaiser\""

ProtoInstance928.fieldValue.append(fieldValue931)
fieldValue932 = x3d.fieldValue()
fieldValue932.name = "adapter"
ScalarInterpolator933 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinUpperLipRaiser")

fieldValue932.children.append(ScalarInterpolator933)

ProtoInstance928.fieldValue.append(fieldValue932)

Scene7.children.append(ProtoInstance928)
ProtoInstance934 = x3d.ProtoInstance()
ProtoInstance934.name = "MenuItem"
fieldValue935 = x3d.fieldValue()
fieldValue935.name = "translation"
fieldValue935.value = "24 -23.6 0"

ProtoInstance934.fieldValue.append(fieldValue935)
fieldValue936 = x3d.fieldValue()
fieldValue936.name = "description"
fieldValue936.value = "Jin Wink"

ProtoInstance934.fieldValue.append(fieldValue936)
fieldValue937 = x3d.fieldValue()
fieldValue937.name = "menuItemString"
fieldValue937.value = "\"JinWink\""

ProtoInstance934.fieldValue.append(fieldValue937)
fieldValue938 = x3d.fieldValue()
fieldValue938.name = "adapter"
ScalarInterpolator939 = x3d.ScalarInterpolator(USE="AnimationAdapter_JinWink")

fieldValue938.children.append(ScalarInterpolator939)

ProtoInstance934.fieldValue.append(fieldValue938)

Scene7.children.append(ProtoInstance934)
ProtoInstance940 = x3d.ProtoInstance()
ProtoInstance940.name = "MenuItem"
fieldValue941 = x3d.fieldValue()
fieldValue941.name = "translation"
fieldValue941.value = "65 63.4 0"

ProtoInstance940.fieldValue.append(fieldValue941)
fieldValue942 = x3d.fieldValue()
fieldValue942.name = "textTranslation"
fieldValue942.value = "0 -0.07 0"

ProtoInstance940.fieldValue.append(fieldValue942)
fieldValue943 = x3d.fieldValue()
fieldValue943.name = "description"
fieldValue943.value = "Lower_teeth"

ProtoInstance940.fieldValue.append(fieldValue943)
fieldValue944 = x3d.fieldValue()
fieldValue944.name = "menuItemString"
fieldValue944.value = "\"Lower_teeth\""

ProtoInstance940.fieldValue.append(fieldValue944)
fieldValue945 = x3d.fieldValue()
fieldValue945.name = "adapter"
ScalarInterpolator946 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Lower_teeth")

fieldValue945.children.append(ScalarInterpolator946)

ProtoInstance940.fieldValue.append(fieldValue945)
fieldValue947 = x3d.fieldValue()
fieldValue947.name = "size"
fieldValue947.value = "40 2"

ProtoInstance940.fieldValue.append(fieldValue947)
fieldValue948 = x3d.fieldValue()
fieldValue948.name = "fontSize"
fieldValue948.value = "1.6"

ProtoInstance940.fieldValue.append(fieldValue948)
fieldValue949 = x3d.fieldValue()
fieldValue949.name = "spacing"
fieldValue949.value = "0.8"

ProtoInstance940.fieldValue.append(fieldValue949)

Scene7.children.append(ProtoInstance940)
ProtoInstance950 = x3d.ProtoInstance()
ProtoInstance950.name = "MenuItem"
fieldValue951 = x3d.fieldValue()
fieldValue951.name = "translation"
fieldValue951.value = "65 61.54444 0"

ProtoInstance950.fieldValue.append(fieldValue951)
fieldValue952 = x3d.fieldValue()
fieldValue952.name = "textTranslation"
fieldValue952.value = "0 -0.07 0"

ProtoInstance950.fieldValue.append(fieldValue952)
fieldValue953 = x3d.fieldValue()
fieldValue953.name = "description"
fieldValue953.value = "Hair"

ProtoInstance950.fieldValue.append(fieldValue953)
fieldValue954 = x3d.fieldValue()
fieldValue954.name = "menuItemString"
fieldValue954.value = "\"Hair\""

ProtoInstance950.fieldValue.append(fieldValue954)
fieldValue955 = x3d.fieldValue()
fieldValue955.name = "adapter"
ScalarInterpolator956 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Hair")

fieldValue955.children.append(ScalarInterpolator956)

ProtoInstance950.fieldValue.append(fieldValue955)
fieldValue957 = x3d.fieldValue()
fieldValue957.name = "size"
fieldValue957.value = "40 2"

ProtoInstance950.fieldValue.append(fieldValue957)
fieldValue958 = x3d.fieldValue()
fieldValue958.name = "fontSize"
fieldValue958.value = "1.6"

ProtoInstance950.fieldValue.append(fieldValue958)
fieldValue959 = x3d.fieldValue()
fieldValue959.name = "spacing"
fieldValue959.value = "0.8"

ProtoInstance950.fieldValue.append(fieldValue959)

Scene7.children.append(ProtoInstance950)
ProtoInstance960 = x3d.ProtoInstance()
ProtoInstance960.name = "MenuItem"
fieldValue961 = x3d.fieldValue()
fieldValue961.name = "translation"
fieldValue961.value = "65 59.68889 0"

ProtoInstance960.fieldValue.append(fieldValue961)
fieldValue962 = x3d.fieldValue()
fieldValue962.name = "textTranslation"
fieldValue962.value = "0 -0.07 0"

ProtoInstance960.fieldValue.append(fieldValue962)
fieldValue963 = x3d.fieldValue()
fieldValue963.name = "description"
fieldValue963.value = "__0"

ProtoInstance960.fieldValue.append(fieldValue963)
fieldValue964 = x3d.fieldValue()
fieldValue964.name = "menuItemString"
fieldValue964.value = "\"__0\""

ProtoInstance960.fieldValue.append(fieldValue964)
fieldValue965 = x3d.fieldValue()
fieldValue965.name = "adapter"
ScalarInterpolator966 = x3d.ScalarInterpolator(DEF="AnimationAdapter___0")

fieldValue965.children.append(ScalarInterpolator966)

ProtoInstance960.fieldValue.append(fieldValue965)
fieldValue967 = x3d.fieldValue()
fieldValue967.name = "size"
fieldValue967.value = "40 2"

ProtoInstance960.fieldValue.append(fieldValue967)
fieldValue968 = x3d.fieldValue()
fieldValue968.name = "fontSize"
fieldValue968.value = "1.6"

ProtoInstance960.fieldValue.append(fieldValue968)
fieldValue969 = x3d.fieldValue()
fieldValue969.name = "spacing"
fieldValue969.value = "0.8"

ProtoInstance960.fieldValue.append(fieldValue969)

Scene7.children.append(ProtoInstance960)
ProtoInstance970 = x3d.ProtoInstance()
ProtoInstance970.name = "MenuItem"
fieldValue971 = x3d.fieldValue()
fieldValue971.name = "translation"
fieldValue971.value = "65 57.83333 0"

ProtoInstance970.fieldValue.append(fieldValue971)
fieldValue972 = x3d.fieldValue()
fieldValue972.name = "textTranslation"
fieldValue972.value = "0 -0.07 0"

ProtoInstance970.fieldValue.append(fieldValue972)
fieldValue973 = x3d.fieldValue()
fieldValue973.name = "description"
fieldValue973.value = "__2"

ProtoInstance970.fieldValue.append(fieldValue973)
fieldValue974 = x3d.fieldValue()
fieldValue974.name = "menuItemString"
fieldValue974.value = "\"__2\""

ProtoInstance970.fieldValue.append(fieldValue974)
fieldValue975 = x3d.fieldValue()
fieldValue975.name = "adapter"
ScalarInterpolator976 = x3d.ScalarInterpolator(DEF="AnimationAdapter___2")

fieldValue975.children.append(ScalarInterpolator976)

ProtoInstance970.fieldValue.append(fieldValue975)
fieldValue977 = x3d.fieldValue()
fieldValue977.name = "size"
fieldValue977.value = "40 2"

ProtoInstance970.fieldValue.append(fieldValue977)
fieldValue978 = x3d.fieldValue()
fieldValue978.name = "fontSize"
fieldValue978.value = "1.6"

ProtoInstance970.fieldValue.append(fieldValue978)
fieldValue979 = x3d.fieldValue()
fieldValue979.name = "spacing"
fieldValue979.value = "0.8"

ProtoInstance970.fieldValue.append(fieldValue979)

Scene7.children.append(ProtoInstance970)
ProtoInstance980 = x3d.ProtoInstance()
ProtoInstance980.name = "MenuItem"
fieldValue981 = x3d.fieldValue()
fieldValue981.name = "translation"
fieldValue981.value = "65 55.97778 0"

ProtoInstance980.fieldValue.append(fieldValue981)
fieldValue982 = x3d.fieldValue()
fieldValue982.name = "textTranslation"
fieldValue982.value = "0 -0.07 0"

ProtoInstance980.fieldValue.append(fieldValue982)
fieldValue983 = x3d.fieldValue()
fieldValue983.name = "description"
fieldValue983.value = "__4"

ProtoInstance980.fieldValue.append(fieldValue983)
fieldValue984 = x3d.fieldValue()
fieldValue984.name = "menuItemString"
fieldValue984.value = "\"__4\""

ProtoInstance980.fieldValue.append(fieldValue984)
fieldValue985 = x3d.fieldValue()
fieldValue985.name = "adapter"
ScalarInterpolator986 = x3d.ScalarInterpolator(DEF="AnimationAdapter___4")

fieldValue985.children.append(ScalarInterpolator986)

ProtoInstance980.fieldValue.append(fieldValue985)
fieldValue987 = x3d.fieldValue()
fieldValue987.name = "size"
fieldValue987.value = "40 2"

ProtoInstance980.fieldValue.append(fieldValue987)
fieldValue988 = x3d.fieldValue()
fieldValue988.name = "fontSize"
fieldValue988.value = "1.6"

ProtoInstance980.fieldValue.append(fieldValue988)
fieldValue989 = x3d.fieldValue()
fieldValue989.name = "spacing"
fieldValue989.value = "0.8"

ProtoInstance980.fieldValue.append(fieldValue989)

Scene7.children.append(ProtoInstance980)
ProtoInstance990 = x3d.ProtoInstance()
ProtoInstance990.name = "MenuItem"
fieldValue991 = x3d.fieldValue()
fieldValue991.name = "translation"
fieldValue991.value = "65 54.12222 0"

ProtoInstance990.fieldValue.append(fieldValue991)
fieldValue992 = x3d.fieldValue()
fieldValue992.name = "textTranslation"
fieldValue992.value = "0 -0.07 0"

ProtoInstance990.fieldValue.append(fieldValue992)
fieldValue993 = x3d.fieldValue()
fieldValue993.name = "description"
fieldValue993.value = "Center_lower_vermillion_lip"

ProtoInstance990.fieldValue.append(fieldValue993)
fieldValue994 = x3d.fieldValue()
fieldValue994.name = "menuItemString"
fieldValue994.value = "\"Center_lower_vermillion_lip\""

ProtoInstance990.fieldValue.append(fieldValue994)
fieldValue995 = x3d.fieldValue()
fieldValue995.name = "adapter"
ScalarInterpolator996 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Center_lower_vermillion_lip")

fieldValue995.children.append(ScalarInterpolator996)

ProtoInstance990.fieldValue.append(fieldValue995)
fieldValue997 = x3d.fieldValue()
fieldValue997.name = "size"
fieldValue997.value = "40 2"

ProtoInstance990.fieldValue.append(fieldValue997)
fieldValue998 = x3d.fieldValue()
fieldValue998.name = "fontSize"
fieldValue998.value = "1.6"

ProtoInstance990.fieldValue.append(fieldValue998)
fieldValue999 = x3d.fieldValue()
fieldValue999.name = "spacing"
fieldValue999.value = "0.8"

ProtoInstance990.fieldValue.append(fieldValue999)

Scene7.children.append(ProtoInstance990)
ProtoInstance1000 = x3d.ProtoInstance()
ProtoInstance1000.name = "MenuItem"
fieldValue1001 = x3d.fieldValue()
fieldValue1001.name = "translation"
fieldValue1001.value = "65 52.26667 0"

ProtoInstance1000.fieldValue.append(fieldValue1001)
fieldValue1002 = x3d.fieldValue()
fieldValue1002.name = "textTranslation"
fieldValue1002.value = "0 -0.07 0"

ProtoInstance1000.fieldValue.append(fieldValue1002)
fieldValue1003 = x3d.fieldValue()
fieldValue1003.name = "description"
fieldValue1003.value = "Chin"

ProtoInstance1000.fieldValue.append(fieldValue1003)
fieldValue1004 = x3d.fieldValue()
fieldValue1004.name = "menuItemString"
fieldValue1004.value = "\"Chin\""

ProtoInstance1000.fieldValue.append(fieldValue1004)
fieldValue1005 = x3d.fieldValue()
fieldValue1005.name = "adapter"
ScalarInterpolator1006 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Chin")

fieldValue1005.children.append(ScalarInterpolator1006)

ProtoInstance1000.fieldValue.append(fieldValue1005)
fieldValue1007 = x3d.fieldValue()
fieldValue1007.name = "size"
fieldValue1007.value = "40 2"

ProtoInstance1000.fieldValue.append(fieldValue1007)
fieldValue1008 = x3d.fieldValue()
fieldValue1008.name = "fontSize"
fieldValue1008.value = "1.6"

ProtoInstance1000.fieldValue.append(fieldValue1008)
fieldValue1009 = x3d.fieldValue()
fieldValue1009.name = "spacing"
fieldValue1009.value = "0.8"

ProtoInstance1000.fieldValue.append(fieldValue1009)

Scene7.children.append(ProtoInstance1000)
ProtoInstance1010 = x3d.ProtoInstance()
ProtoInstance1010.name = "MenuItem"
fieldValue1011 = x3d.fieldValue()
fieldValue1011.name = "translation"
fieldValue1011.value = "65 50.41111 0"

ProtoInstance1010.fieldValue.append(fieldValue1011)
fieldValue1012 = x3d.fieldValue()
fieldValue1012.name = "textTranslation"
fieldValue1012.value = "0 -0.07 0"

ProtoInstance1010.fieldValue.append(fieldValue1012)
fieldValue1013 = x3d.fieldValue()
fieldValue1013.name = "description"
fieldValue1013.value = "Glabella"

ProtoInstance1010.fieldValue.append(fieldValue1013)
fieldValue1014 = x3d.fieldValue()
fieldValue1014.name = "menuItemString"
fieldValue1014.value = "\"Glabella\""

ProtoInstance1010.fieldValue.append(fieldValue1014)
fieldValue1015 = x3d.fieldValue()
fieldValue1015.name = "adapter"
ScalarInterpolator1016 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Glabella")

fieldValue1015.children.append(ScalarInterpolator1016)

ProtoInstance1010.fieldValue.append(fieldValue1015)
fieldValue1017 = x3d.fieldValue()
fieldValue1017.name = "size"
fieldValue1017.value = "40 2"

ProtoInstance1010.fieldValue.append(fieldValue1017)
fieldValue1018 = x3d.fieldValue()
fieldValue1018.name = "fontSize"
fieldValue1018.value = "1.6"

ProtoInstance1010.fieldValue.append(fieldValue1018)
fieldValue1019 = x3d.fieldValue()
fieldValue1019.name = "spacing"
fieldValue1019.value = "0.8"

ProtoInstance1010.fieldValue.append(fieldValue1019)

Scene7.children.append(ProtoInstance1010)
ProtoInstance1020 = x3d.ProtoInstance()
ProtoInstance1020.name = "MenuItem"
fieldValue1021 = x3d.fieldValue()
fieldValue1021.name = "translation"
fieldValue1021.value = "65 48.55556 0"

ProtoInstance1020.fieldValue.append(fieldValue1021)
fieldValue1022 = x3d.fieldValue()
fieldValue1022.name = "textTranslation"
fieldValue1022.value = "0 -0.07 0"

ProtoInstance1020.fieldValue.append(fieldValue1022)
fieldValue1023 = x3d.fieldValue()
fieldValue1023.name = "description"
fieldValue1023.value = "Left_bulbar_conjunctiva"

ProtoInstance1020.fieldValue.append(fieldValue1023)
fieldValue1024 = x3d.fieldValue()
fieldValue1024.name = "menuItemString"
fieldValue1024.value = "\"Left_bulbar_conjunctiva\""

ProtoInstance1020.fieldValue.append(fieldValue1024)
fieldValue1025 = x3d.fieldValue()
fieldValue1025.name = "adapter"
ScalarInterpolator1026 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_bulbar_conjunctiva")

fieldValue1025.children.append(ScalarInterpolator1026)

ProtoInstance1020.fieldValue.append(fieldValue1025)
fieldValue1027 = x3d.fieldValue()
fieldValue1027.name = "size"
fieldValue1027.value = "40 2"

ProtoInstance1020.fieldValue.append(fieldValue1027)
fieldValue1028 = x3d.fieldValue()
fieldValue1028.name = "fontSize"
fieldValue1028.value = "1.6"

ProtoInstance1020.fieldValue.append(fieldValue1028)
fieldValue1029 = x3d.fieldValue()
fieldValue1029.name = "spacing"
fieldValue1029.value = "0.8"

ProtoInstance1020.fieldValue.append(fieldValue1029)

Scene7.children.append(ProtoInstance1020)
ProtoInstance1030 = x3d.ProtoInstance()
ProtoInstance1030.name = "MenuItem"
fieldValue1031 = x3d.fieldValue()
fieldValue1031.name = "translation"
fieldValue1031.value = "65 46.7 0"

ProtoInstance1030.fieldValue.append(fieldValue1031)
fieldValue1032 = x3d.fieldValue()
fieldValue1032.name = "textTranslation"
fieldValue1032.value = "0 -0.07 0"

ProtoInstance1030.fieldValue.append(fieldValue1032)
fieldValue1033 = x3d.fieldValue()
fieldValue1033.name = "description"
fieldValue1033.value = "Left_cheek"

ProtoInstance1030.fieldValue.append(fieldValue1033)
fieldValue1034 = x3d.fieldValue()
fieldValue1034.name = "menuItemString"
fieldValue1034.value = "\"Left_cheek\""

ProtoInstance1030.fieldValue.append(fieldValue1034)
fieldValue1035 = x3d.fieldValue()
fieldValue1035.name = "adapter"
ScalarInterpolator1036 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_cheek")

fieldValue1035.children.append(ScalarInterpolator1036)

ProtoInstance1030.fieldValue.append(fieldValue1035)
fieldValue1037 = x3d.fieldValue()
fieldValue1037.name = "size"
fieldValue1037.value = "40 2"

ProtoInstance1030.fieldValue.append(fieldValue1037)
fieldValue1038 = x3d.fieldValue()
fieldValue1038.name = "fontSize"
fieldValue1038.value = "1.6"

ProtoInstance1030.fieldValue.append(fieldValue1038)
fieldValue1039 = x3d.fieldValue()
fieldValue1039.name = "spacing"
fieldValue1039.value = "0.8"

ProtoInstance1030.fieldValue.append(fieldValue1039)

Scene7.children.append(ProtoInstance1030)
ProtoInstance1040 = x3d.ProtoInstance()
ProtoInstance1040.name = "MenuItem"
fieldValue1041 = x3d.fieldValue()
fieldValue1041.name = "translation"
fieldValue1041.value = "65 44.84444 0"

ProtoInstance1040.fieldValue.append(fieldValue1041)
fieldValue1042 = x3d.fieldValue()
fieldValue1042.name = "textTranslation"
fieldValue1042.value = "0 -0.07 0"

ProtoInstance1040.fieldValue.append(fieldValue1042)
fieldValue1043 = x3d.fieldValue()
fieldValue1043.name = "description"
fieldValue1043.value = "Left_dorsum"

ProtoInstance1040.fieldValue.append(fieldValue1043)
fieldValue1044 = x3d.fieldValue()
fieldValue1044.name = "menuItemString"
fieldValue1044.value = "\"Left_dorsum\""

ProtoInstance1040.fieldValue.append(fieldValue1044)
fieldValue1045 = x3d.fieldValue()
fieldValue1045.name = "adapter"
ScalarInterpolator1046 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_dorsum")

fieldValue1045.children.append(ScalarInterpolator1046)

ProtoInstance1040.fieldValue.append(fieldValue1045)
fieldValue1047 = x3d.fieldValue()
fieldValue1047.name = "size"
fieldValue1047.value = "40 2"

ProtoInstance1040.fieldValue.append(fieldValue1047)
fieldValue1048 = x3d.fieldValue()
fieldValue1048.name = "fontSize"
fieldValue1048.value = "1.6"

ProtoInstance1040.fieldValue.append(fieldValue1048)
fieldValue1049 = x3d.fieldValue()
fieldValue1049.name = "spacing"
fieldValue1049.value = "0.8"

ProtoInstance1040.fieldValue.append(fieldValue1049)

Scene7.children.append(ProtoInstance1040)
ProtoInstance1050 = x3d.ProtoInstance()
ProtoInstance1050.name = "MenuItem"
fieldValue1051 = x3d.fieldValue()
fieldValue1051.name = "translation"
fieldValue1051.value = "65 42.98889 0"

ProtoInstance1050.fieldValue.append(fieldValue1051)
fieldValue1052 = x3d.fieldValue()
fieldValue1052.name = "textTranslation"
fieldValue1052.value = "0 -0.07 0"

ProtoInstance1050.fieldValue.append(fieldValue1052)
fieldValue1053 = x3d.fieldValue()
fieldValue1053.name = "description"
fieldValue1053.value = "Left_ear"

ProtoInstance1050.fieldValue.append(fieldValue1053)
fieldValue1054 = x3d.fieldValue()
fieldValue1054.name = "menuItemString"
fieldValue1054.value = "\"Left_ear\""

ProtoInstance1050.fieldValue.append(fieldValue1054)
fieldValue1055 = x3d.fieldValue()
fieldValue1055.name = "adapter"
ScalarInterpolator1056 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_ear")

fieldValue1055.children.append(ScalarInterpolator1056)

ProtoInstance1050.fieldValue.append(fieldValue1055)
fieldValue1057 = x3d.fieldValue()
fieldValue1057.name = "size"
fieldValue1057.value = "40 2"

ProtoInstance1050.fieldValue.append(fieldValue1057)
fieldValue1058 = x3d.fieldValue()
fieldValue1058.name = "fontSize"
fieldValue1058.value = "1.6"

ProtoInstance1050.fieldValue.append(fieldValue1058)
fieldValue1059 = x3d.fieldValue()
fieldValue1059.name = "spacing"
fieldValue1059.value = "0.8"

ProtoInstance1050.fieldValue.append(fieldValue1059)

Scene7.children.append(ProtoInstance1050)
ProtoInstance1060 = x3d.ProtoInstance()
ProtoInstance1060.name = "MenuItem"
fieldValue1061 = x3d.fieldValue()
fieldValue1061.name = "translation"
fieldValue1061.value = "65 41.13333 0"

ProtoInstance1060.fieldValue.append(fieldValue1061)
fieldValue1062 = x3d.fieldValue()
fieldValue1062.name = "textTranslation"
fieldValue1062.value = "0 -0.07 0"

ProtoInstance1060.fieldValue.append(fieldValue1062)
fieldValue1063 = x3d.fieldValue()
fieldValue1063.name = "description"
fieldValue1063.value = "Left_eyebrow"

ProtoInstance1060.fieldValue.append(fieldValue1063)
fieldValue1064 = x3d.fieldValue()
fieldValue1064.name = "menuItemString"
fieldValue1064.value = "\"Left_eyebrow\""

ProtoInstance1060.fieldValue.append(fieldValue1064)
fieldValue1065 = x3d.fieldValue()
fieldValue1065.name = "adapter"
ScalarInterpolator1066 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_eyebrow")

fieldValue1065.children.append(ScalarInterpolator1066)

ProtoInstance1060.fieldValue.append(fieldValue1065)
fieldValue1067 = x3d.fieldValue()
fieldValue1067.name = "size"
fieldValue1067.value = "40 2"

ProtoInstance1060.fieldValue.append(fieldValue1067)
fieldValue1068 = x3d.fieldValue()
fieldValue1068.name = "fontSize"
fieldValue1068.value = "1.6"

ProtoInstance1060.fieldValue.append(fieldValue1068)
fieldValue1069 = x3d.fieldValue()
fieldValue1069.name = "spacing"
fieldValue1069.value = "0.8"

ProtoInstance1060.fieldValue.append(fieldValue1069)

Scene7.children.append(ProtoInstance1060)
ProtoInstance1070 = x3d.ProtoInstance()
ProtoInstance1070.name = "MenuItem"
fieldValue1071 = x3d.fieldValue()
fieldValue1071.name = "translation"
fieldValue1071.value = "65 39.27778 0"

ProtoInstance1070.fieldValue.append(fieldValue1071)
fieldValue1072 = x3d.fieldValue()
fieldValue1072.name = "textTranslation"
fieldValue1072.value = "0 -0.07 0"

ProtoInstance1070.fieldValue.append(fieldValue1072)
fieldValue1073 = x3d.fieldValue()
fieldValue1073.name = "description"
fieldValue1073.value = "Left_forehead"

ProtoInstance1070.fieldValue.append(fieldValue1073)
fieldValue1074 = x3d.fieldValue()
fieldValue1074.name = "menuItemString"
fieldValue1074.value = "\"Left_forehead\""

ProtoInstance1070.fieldValue.append(fieldValue1074)
fieldValue1075 = x3d.fieldValue()
fieldValue1075.name = "adapter"
ScalarInterpolator1076 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_forehead")

fieldValue1075.children.append(ScalarInterpolator1076)

ProtoInstance1070.fieldValue.append(fieldValue1075)
fieldValue1077 = x3d.fieldValue()
fieldValue1077.name = "size"
fieldValue1077.value = "40 2"

ProtoInstance1070.fieldValue.append(fieldValue1077)
fieldValue1078 = x3d.fieldValue()
fieldValue1078.name = "fontSize"
fieldValue1078.value = "1.6"

ProtoInstance1070.fieldValue.append(fieldValue1078)
fieldValue1079 = x3d.fieldValue()
fieldValue1079.name = "spacing"
fieldValue1079.value = "0.8"

ProtoInstance1070.fieldValue.append(fieldValue1079)

Scene7.children.append(ProtoInstance1070)
ProtoInstance1080 = x3d.ProtoInstance()
ProtoInstance1080.name = "MenuItem"
fieldValue1081 = x3d.fieldValue()
fieldValue1081.name = "translation"
fieldValue1081.value = "65 37.42222 0"

ProtoInstance1080.fieldValue.append(fieldValue1081)
fieldValue1082 = x3d.fieldValue()
fieldValue1082.name = "textTranslation"
fieldValue1082.value = "0 -0.07 0"

ProtoInstance1080.fieldValue.append(fieldValue1082)
fieldValue1083 = x3d.fieldValue()
fieldValue1083.name = "description"
fieldValue1083.value = "Left_lower_eyelid"

ProtoInstance1080.fieldValue.append(fieldValue1083)
fieldValue1084 = x3d.fieldValue()
fieldValue1084.name = "menuItemString"
fieldValue1084.value = "\"Left_lower_eyelid\""

ProtoInstance1080.fieldValue.append(fieldValue1084)
fieldValue1085 = x3d.fieldValue()
fieldValue1085.name = "adapter"
ScalarInterpolator1086 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_lower_eyelid")

fieldValue1085.children.append(ScalarInterpolator1086)

ProtoInstance1080.fieldValue.append(fieldValue1085)
fieldValue1087 = x3d.fieldValue()
fieldValue1087.name = "size"
fieldValue1087.value = "40 2"

ProtoInstance1080.fieldValue.append(fieldValue1087)
fieldValue1088 = x3d.fieldValue()
fieldValue1088.name = "fontSize"
fieldValue1088.value = "1.6"

ProtoInstance1080.fieldValue.append(fieldValue1088)
fieldValue1089 = x3d.fieldValue()
fieldValue1089.name = "spacing"
fieldValue1089.value = "0.8"

ProtoInstance1080.fieldValue.append(fieldValue1089)

Scene7.children.append(ProtoInstance1080)
ProtoInstance1090 = x3d.ProtoInstance()
ProtoInstance1090.name = "MenuItem"
fieldValue1091 = x3d.fieldValue()
fieldValue1091.name = "translation"
fieldValue1091.value = "65 35.56667 0"

ProtoInstance1090.fieldValue.append(fieldValue1091)
fieldValue1092 = x3d.fieldValue()
fieldValue1092.name = "textTranslation"
fieldValue1092.value = "0 -0.07 0"

ProtoInstance1090.fieldValue.append(fieldValue1092)
fieldValue1093 = x3d.fieldValue()
fieldValue1093.name = "description"
fieldValue1093.value = "Left_lower_vermillion_lip"

ProtoInstance1090.fieldValue.append(fieldValue1093)
fieldValue1094 = x3d.fieldValue()
fieldValue1094.name = "menuItemString"
fieldValue1094.value = "\"Left_lower_vermillion_lip\""

ProtoInstance1090.fieldValue.append(fieldValue1094)
fieldValue1095 = x3d.fieldValue()
fieldValue1095.name = "adapter"
ScalarInterpolator1096 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_lower_vermillion_lip")

fieldValue1095.children.append(ScalarInterpolator1096)

ProtoInstance1090.fieldValue.append(fieldValue1095)
fieldValue1097 = x3d.fieldValue()
fieldValue1097.name = "size"
fieldValue1097.value = "40 2"

ProtoInstance1090.fieldValue.append(fieldValue1097)
fieldValue1098 = x3d.fieldValue()
fieldValue1098.name = "fontSize"
fieldValue1098.value = "1.6"

ProtoInstance1090.fieldValue.append(fieldValue1098)
fieldValue1099 = x3d.fieldValue()
fieldValue1099.name = "spacing"
fieldValue1099.value = "0.8"

ProtoInstance1090.fieldValue.append(fieldValue1099)

Scene7.children.append(ProtoInstance1090)
ProtoInstance1100 = x3d.ProtoInstance()
ProtoInstance1100.name = "MenuItem"
fieldValue1101 = x3d.fieldValue()
fieldValue1101.name = "translation"
fieldValue1101.value = "65 33.71111 0"

ProtoInstance1100.fieldValue.append(fieldValue1101)
fieldValue1102 = x3d.fieldValue()
fieldValue1102.name = "textTranslation"
fieldValue1102.value = "0 -0.07 0"

ProtoInstance1100.fieldValue.append(fieldValue1102)
fieldValue1103 = x3d.fieldValue()
fieldValue1103.name = "description"
fieldValue1103.value = "Left_nasolabial_cheek"

ProtoInstance1100.fieldValue.append(fieldValue1103)
fieldValue1104 = x3d.fieldValue()
fieldValue1104.name = "menuItemString"
fieldValue1104.value = "\"Left_nasolabial_cheek\""

ProtoInstance1100.fieldValue.append(fieldValue1104)
fieldValue1105 = x3d.fieldValue()
fieldValue1105.name = "adapter"
ScalarInterpolator1106 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_nasolabial_cheek")

fieldValue1105.children.append(ScalarInterpolator1106)

ProtoInstance1100.fieldValue.append(fieldValue1105)
fieldValue1107 = x3d.fieldValue()
fieldValue1107.name = "size"
fieldValue1107.value = "40 2"

ProtoInstance1100.fieldValue.append(fieldValue1107)
fieldValue1108 = x3d.fieldValue()
fieldValue1108.name = "fontSize"
fieldValue1108.value = "1.6"

ProtoInstance1100.fieldValue.append(fieldValue1108)
fieldValue1109 = x3d.fieldValue()
fieldValue1109.name = "spacing"
fieldValue1109.value = "0.8"

ProtoInstance1100.fieldValue.append(fieldValue1109)

Scene7.children.append(ProtoInstance1100)
ProtoInstance1110 = x3d.ProtoInstance()
ProtoInstance1110.name = "MenuItem"
fieldValue1111 = x3d.fieldValue()
fieldValue1111.name = "translation"
fieldValue1111.value = "65 31.85556 0"

ProtoInstance1110.fieldValue.append(fieldValue1111)
fieldValue1112 = x3d.fieldValue()
fieldValue1112.name = "textTranslation"
fieldValue1112.value = "0 -0.07 0"

ProtoInstance1110.fieldValue.append(fieldValue1112)
fieldValue1113 = x3d.fieldValue()
fieldValue1113.name = "description"
fieldValue1113.value = "Left_nostril"

ProtoInstance1110.fieldValue.append(fieldValue1113)
fieldValue1114 = x3d.fieldValue()
fieldValue1114.name = "menuItemString"
fieldValue1114.value = "\"Left_nostril\""

ProtoInstance1110.fieldValue.append(fieldValue1114)
fieldValue1115 = x3d.fieldValue()
fieldValue1115.name = "adapter"
ScalarInterpolator1116 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_nostril")

fieldValue1115.children.append(ScalarInterpolator1116)

ProtoInstance1110.fieldValue.append(fieldValue1115)
fieldValue1117 = x3d.fieldValue()
fieldValue1117.name = "size"
fieldValue1117.value = "40 2"

ProtoInstance1110.fieldValue.append(fieldValue1117)
fieldValue1118 = x3d.fieldValue()
fieldValue1118.name = "fontSize"
fieldValue1118.value = "1.6"

ProtoInstance1110.fieldValue.append(fieldValue1118)
fieldValue1119 = x3d.fieldValue()
fieldValue1119.name = "spacing"
fieldValue1119.value = "0.8"

ProtoInstance1110.fieldValue.append(fieldValue1119)

Scene7.children.append(ProtoInstance1110)
ProtoInstance1120 = x3d.ProtoInstance()
ProtoInstance1120.name = "MenuItem"
fieldValue1121 = x3d.fieldValue()
fieldValue1121.name = "translation"
fieldValue1121.value = "65 30 0"

ProtoInstance1120.fieldValue.append(fieldValue1121)
fieldValue1122 = x3d.fieldValue()
fieldValue1122.name = "textTranslation"
fieldValue1122.value = "0 -0.07 0"

ProtoInstance1120.fieldValue.append(fieldValue1122)
fieldValue1123 = x3d.fieldValue()
fieldValue1123.name = "description"
fieldValue1123.value = "Left_pupil"

ProtoInstance1120.fieldValue.append(fieldValue1123)
fieldValue1124 = x3d.fieldValue()
fieldValue1124.name = "menuItemString"
fieldValue1124.value = "\"Left_pupil\""

ProtoInstance1120.fieldValue.append(fieldValue1124)
fieldValue1125 = x3d.fieldValue()
fieldValue1125.name = "adapter"
ScalarInterpolator1126 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_pupil")

fieldValue1125.children.append(ScalarInterpolator1126)

ProtoInstance1120.fieldValue.append(fieldValue1125)
fieldValue1127 = x3d.fieldValue()
fieldValue1127.name = "size"
fieldValue1127.value = "40 2"

ProtoInstance1120.fieldValue.append(fieldValue1127)
fieldValue1128 = x3d.fieldValue()
fieldValue1128.name = "fontSize"
fieldValue1128.value = "1.6"

ProtoInstance1120.fieldValue.append(fieldValue1128)
fieldValue1129 = x3d.fieldValue()
fieldValue1129.name = "spacing"
fieldValue1129.value = "0.8"

ProtoInstance1120.fieldValue.append(fieldValue1129)

Scene7.children.append(ProtoInstance1120)
ProtoInstance1130 = x3d.ProtoInstance()
ProtoInstance1130.name = "MenuItem"
fieldValue1131 = x3d.fieldValue()
fieldValue1131.name = "translation"
fieldValue1131.value = "65 28.14444 0"

ProtoInstance1130.fieldValue.append(fieldValue1131)
fieldValue1132 = x3d.fieldValue()
fieldValue1132.name = "textTranslation"
fieldValue1132.value = "0 -0.07 0"

ProtoInstance1130.fieldValue.append(fieldValue1132)
fieldValue1133 = x3d.fieldValue()
fieldValue1133.name = "description"
fieldValue1133.value = "Left_temple"

ProtoInstance1130.fieldValue.append(fieldValue1133)
fieldValue1134 = x3d.fieldValue()
fieldValue1134.name = "menuItemString"
fieldValue1134.value = "\"Left_temple\""

ProtoInstance1130.fieldValue.append(fieldValue1134)
fieldValue1135 = x3d.fieldValue()
fieldValue1135.name = "adapter"
ScalarInterpolator1136 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_temple")

fieldValue1135.children.append(ScalarInterpolator1136)

ProtoInstance1130.fieldValue.append(fieldValue1135)
fieldValue1137 = x3d.fieldValue()
fieldValue1137.name = "size"
fieldValue1137.value = "40 2"

ProtoInstance1130.fieldValue.append(fieldValue1137)
fieldValue1138 = x3d.fieldValue()
fieldValue1138.name = "fontSize"
fieldValue1138.value = "1.6"

ProtoInstance1130.fieldValue.append(fieldValue1138)
fieldValue1139 = x3d.fieldValue()
fieldValue1139.name = "spacing"
fieldValue1139.value = "0.8"

ProtoInstance1130.fieldValue.append(fieldValue1139)

Scene7.children.append(ProtoInstance1130)
ProtoInstance1140 = x3d.ProtoInstance()
ProtoInstance1140.name = "MenuItem"
fieldValue1141 = x3d.fieldValue()
fieldValue1141.name = "translation"
fieldValue1141.value = "65 26.28889 0"

ProtoInstance1140.fieldValue.append(fieldValue1141)
fieldValue1142 = x3d.fieldValue()
fieldValue1142.name = "textTranslation"
fieldValue1142.value = "0 -0.07 0"

ProtoInstance1140.fieldValue.append(fieldValue1142)
fieldValue1143 = x3d.fieldValue()
fieldValue1143.name = "description"
fieldValue1143.value = "Left_upper_cutaneous_lip"

ProtoInstance1140.fieldValue.append(fieldValue1143)
fieldValue1144 = x3d.fieldValue()
fieldValue1144.name = "menuItemString"
fieldValue1144.value = "\"Left_upper_cutaneous_lip\""

ProtoInstance1140.fieldValue.append(fieldValue1144)
fieldValue1145 = x3d.fieldValue()
fieldValue1145.name = "adapter"
ScalarInterpolator1146 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_upper_cutaneous_lip")

fieldValue1145.children.append(ScalarInterpolator1146)

ProtoInstance1140.fieldValue.append(fieldValue1145)
fieldValue1147 = x3d.fieldValue()
fieldValue1147.name = "size"
fieldValue1147.value = "40 2"

ProtoInstance1140.fieldValue.append(fieldValue1147)
fieldValue1148 = x3d.fieldValue()
fieldValue1148.name = "fontSize"
fieldValue1148.value = "1.6"

ProtoInstance1140.fieldValue.append(fieldValue1148)
fieldValue1149 = x3d.fieldValue()
fieldValue1149.name = "spacing"
fieldValue1149.value = "0.8"

ProtoInstance1140.fieldValue.append(fieldValue1149)

Scene7.children.append(ProtoInstance1140)
ProtoInstance1150 = x3d.ProtoInstance()
ProtoInstance1150.name = "MenuItem"
fieldValue1151 = x3d.fieldValue()
fieldValue1151.name = "translation"
fieldValue1151.value = "65 24.43333 0"

ProtoInstance1150.fieldValue.append(fieldValue1151)
fieldValue1152 = x3d.fieldValue()
fieldValue1152.name = "textTranslation"
fieldValue1152.value = "0 -0.07 0"

ProtoInstance1150.fieldValue.append(fieldValue1152)
fieldValue1153 = x3d.fieldValue()
fieldValue1153.name = "description"
fieldValue1153.value = "Left_upper_eyelid"

ProtoInstance1150.fieldValue.append(fieldValue1153)
fieldValue1154 = x3d.fieldValue()
fieldValue1154.name = "menuItemString"
fieldValue1154.value = "\"Left_upper_eyelid\""

ProtoInstance1150.fieldValue.append(fieldValue1154)
fieldValue1155 = x3d.fieldValue()
fieldValue1155.name = "adapter"
ScalarInterpolator1156 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_upper_eyelid")

fieldValue1155.children.append(ScalarInterpolator1156)

ProtoInstance1150.fieldValue.append(fieldValue1155)
fieldValue1157 = x3d.fieldValue()
fieldValue1157.name = "size"
fieldValue1157.value = "40 2"

ProtoInstance1150.fieldValue.append(fieldValue1157)
fieldValue1158 = x3d.fieldValue()
fieldValue1158.name = "fontSize"
fieldValue1158.value = "1.6"

ProtoInstance1150.fieldValue.append(fieldValue1158)
fieldValue1159 = x3d.fieldValue()
fieldValue1159.name = "spacing"
fieldValue1159.value = "0.8"

ProtoInstance1150.fieldValue.append(fieldValue1159)

Scene7.children.append(ProtoInstance1150)
ProtoInstance1160 = x3d.ProtoInstance()
ProtoInstance1160.name = "MenuItem"
fieldValue1161 = x3d.fieldValue()
fieldValue1161.name = "translation"
fieldValue1161.value = "65 22.57778 0"

ProtoInstance1160.fieldValue.append(fieldValue1161)
fieldValue1162 = x3d.fieldValue()
fieldValue1162.name = "textTranslation"
fieldValue1162.value = "0 -0.07 0"

ProtoInstance1160.fieldValue.append(fieldValue1162)
fieldValue1163 = x3d.fieldValue()
fieldValue1163.name = "description"
fieldValue1163.value = "Left_upper_vermillion_lip"

ProtoInstance1160.fieldValue.append(fieldValue1163)
fieldValue1164 = x3d.fieldValue()
fieldValue1164.name = "menuItemString"
fieldValue1164.value = "\"Left_upper_vermillion_lip\""

ProtoInstance1160.fieldValue.append(fieldValue1164)
fieldValue1165 = x3d.fieldValue()
fieldValue1165.name = "adapter"
ScalarInterpolator1166 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_upper_vermillion_lip")

fieldValue1165.children.append(ScalarInterpolator1166)

ProtoInstance1160.fieldValue.append(fieldValue1165)
fieldValue1167 = x3d.fieldValue()
fieldValue1167.name = "size"
fieldValue1167.value = "40 2"

ProtoInstance1160.fieldValue.append(fieldValue1167)
fieldValue1168 = x3d.fieldValue()
fieldValue1168.name = "fontSize"
fieldValue1168.value = "1.6"

ProtoInstance1160.fieldValue.append(fieldValue1168)
fieldValue1169 = x3d.fieldValue()
fieldValue1169.name = "spacing"
fieldValue1169.value = "0.8"

ProtoInstance1160.fieldValue.append(fieldValue1169)

Scene7.children.append(ProtoInstance1160)
ProtoInstance1170 = x3d.ProtoInstance()
ProtoInstance1170.name = "MenuItem"
fieldValue1171 = x3d.fieldValue()
fieldValue1171.name = "translation"
fieldValue1171.value = "65 20.72222 0"

ProtoInstance1170.fieldValue.append(fieldValue1171)
fieldValue1172 = x3d.fieldValue()
fieldValue1172.name = "textTranslation"
fieldValue1172.value = "0 -0.07 0"

ProtoInstance1170.fieldValue.append(fieldValue1172)
fieldValue1173 = x3d.fieldValue()
fieldValue1173.name = "description"
fieldValue1173.value = "Left_upper_vermillion_lip001"

ProtoInstance1170.fieldValue.append(fieldValue1173)
fieldValue1174 = x3d.fieldValue()
fieldValue1174.name = "menuItemString"
fieldValue1174.value = "\"Left_upper_vermillion_lip001\""

ProtoInstance1170.fieldValue.append(fieldValue1174)
fieldValue1175 = x3d.fieldValue()
fieldValue1175.name = "adapter"
ScalarInterpolator1176 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Left_upper_vermillion_lip001")

fieldValue1175.children.append(ScalarInterpolator1176)

ProtoInstance1170.fieldValue.append(fieldValue1175)
fieldValue1177 = x3d.fieldValue()
fieldValue1177.name = "size"
fieldValue1177.value = "40 2"

ProtoInstance1170.fieldValue.append(fieldValue1177)
fieldValue1178 = x3d.fieldValue()
fieldValue1178.name = "fontSize"
fieldValue1178.value = "1.6"

ProtoInstance1170.fieldValue.append(fieldValue1178)
fieldValue1179 = x3d.fieldValue()
fieldValue1179.name = "spacing"
fieldValue1179.value = "0.8"

ProtoInstance1170.fieldValue.append(fieldValue1179)

Scene7.children.append(ProtoInstance1170)
ProtoInstance1180 = x3d.ProtoInstance()
ProtoInstance1180.name = "MenuItem"
fieldValue1181 = x3d.fieldValue()
fieldValue1181.name = "translation"
fieldValue1181.value = "65 18.86667 0"

ProtoInstance1180.fieldValue.append(fieldValue1181)
fieldValue1182 = x3d.fieldValue()
fieldValue1182.name = "textTranslation"
fieldValue1182.value = "0 -0.07 0"

ProtoInstance1180.fieldValue.append(fieldValue1182)
fieldValue1183 = x3d.fieldValue()
fieldValue1183.name = "description"
fieldValue1183.value = "Mid_forehead"

ProtoInstance1180.fieldValue.append(fieldValue1183)
fieldValue1184 = x3d.fieldValue()
fieldValue1184.name = "menuItemString"
fieldValue1184.value = "\"Mid_forehead\""

ProtoInstance1180.fieldValue.append(fieldValue1184)
fieldValue1185 = x3d.fieldValue()
fieldValue1185.name = "adapter"
ScalarInterpolator1186 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Mid_forehead")

fieldValue1185.children.append(ScalarInterpolator1186)

ProtoInstance1180.fieldValue.append(fieldValue1185)
fieldValue1187 = x3d.fieldValue()
fieldValue1187.name = "size"
fieldValue1187.value = "40 2"

ProtoInstance1180.fieldValue.append(fieldValue1187)
fieldValue1188 = x3d.fieldValue()
fieldValue1188.name = "fontSize"
fieldValue1188.value = "1.6"

ProtoInstance1180.fieldValue.append(fieldValue1188)
fieldValue1189 = x3d.fieldValue()
fieldValue1189.name = "spacing"
fieldValue1189.value = "0.8"

ProtoInstance1180.fieldValue.append(fieldValue1189)

Scene7.children.append(ProtoInstance1180)
ProtoInstance1190 = x3d.ProtoInstance()
ProtoInstance1190.name = "MenuItem"
fieldValue1191 = x3d.fieldValue()
fieldValue1191.name = "translation"
fieldValue1191.value = "65 17.01111 0"

ProtoInstance1190.fieldValue.append(fieldValue1191)
fieldValue1192 = x3d.fieldValue()
fieldValue1192.name = "textTranslation"
fieldValue1192.value = "0 -0.07 0"

ProtoInstance1190.fieldValue.append(fieldValue1192)
fieldValue1193 = x3d.fieldValue()
fieldValue1193.name = "description"
fieldValue1193.value = "Mid_nasal_dorsum"

ProtoInstance1190.fieldValue.append(fieldValue1193)
fieldValue1194 = x3d.fieldValue()
fieldValue1194.name = "menuItemString"
fieldValue1194.value = "\"Mid_nasal_dorsum\""

ProtoInstance1190.fieldValue.append(fieldValue1194)
fieldValue1195 = x3d.fieldValue()
fieldValue1195.name = "adapter"
ScalarInterpolator1196 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Mid_nasal_dorsum")

fieldValue1195.children.append(ScalarInterpolator1196)

ProtoInstance1190.fieldValue.append(fieldValue1195)
fieldValue1197 = x3d.fieldValue()
fieldValue1197.name = "size"
fieldValue1197.value = "40 2"

ProtoInstance1190.fieldValue.append(fieldValue1197)
fieldValue1198 = x3d.fieldValue()
fieldValue1198.name = "fontSize"
fieldValue1198.value = "1.6"

ProtoInstance1190.fieldValue.append(fieldValue1198)
fieldValue1199 = x3d.fieldValue()
fieldValue1199.name = "spacing"
fieldValue1199.value = "0.8"

ProtoInstance1190.fieldValue.append(fieldValue1199)

Scene7.children.append(ProtoInstance1190)
ProtoInstance1200 = x3d.ProtoInstance()
ProtoInstance1200.name = "MenuItem"
fieldValue1201 = x3d.fieldValue()
fieldValue1201.name = "translation"
fieldValue1201.value = "65 15.15556 0"

ProtoInstance1200.fieldValue.append(fieldValue1201)
fieldValue1202 = x3d.fieldValue()
fieldValue1202.name = "textTranslation"
fieldValue1202.value = "0 -0.07 0"

ProtoInstance1200.fieldValue.append(fieldValue1202)
fieldValue1203 = x3d.fieldValue()
fieldValue1203.name = "description"
fieldValue1203.value = "Mid_upper_vermillion_lip"

ProtoInstance1200.fieldValue.append(fieldValue1203)
fieldValue1204 = x3d.fieldValue()
fieldValue1204.name = "menuItemString"
fieldValue1204.value = "\"Mid_upper_vermillion_lip\""

ProtoInstance1200.fieldValue.append(fieldValue1204)
fieldValue1205 = x3d.fieldValue()
fieldValue1205.name = "adapter"
ScalarInterpolator1206 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Mid_upper_vermillion_lip")

fieldValue1205.children.append(ScalarInterpolator1206)

ProtoInstance1200.fieldValue.append(fieldValue1205)
fieldValue1207 = x3d.fieldValue()
fieldValue1207.name = "size"
fieldValue1207.value = "40 2"

ProtoInstance1200.fieldValue.append(fieldValue1207)
fieldValue1208 = x3d.fieldValue()
fieldValue1208.name = "fontSize"
fieldValue1208.value = "1.6"

ProtoInstance1200.fieldValue.append(fieldValue1208)
fieldValue1209 = x3d.fieldValue()
fieldValue1209.name = "spacing"
fieldValue1209.value = "0.8"

ProtoInstance1200.fieldValue.append(fieldValue1209)

Scene7.children.append(ProtoInstance1200)
ProtoInstance1210 = x3d.ProtoInstance()
ProtoInstance1210.name = "MenuItem"
fieldValue1211 = x3d.fieldValue()
fieldValue1211.name = "translation"
fieldValue1211.value = "65 13.3 0"

ProtoInstance1210.fieldValue.append(fieldValue1211)
fieldValue1212 = x3d.fieldValue()
fieldValue1212.name = "textTranslation"
fieldValue1212.value = "0 -0.07 0"

ProtoInstance1210.fieldValue.append(fieldValue1212)
fieldValue1213 = x3d.fieldValue()
fieldValue1213.name = "description"
fieldValue1213.value = "Nasal_tip"

ProtoInstance1210.fieldValue.append(fieldValue1213)
fieldValue1214 = x3d.fieldValue()
fieldValue1214.name = "menuItemString"
fieldValue1214.value = "\"Nasal_tip\""

ProtoInstance1210.fieldValue.append(fieldValue1214)
fieldValue1215 = x3d.fieldValue()
fieldValue1215.name = "adapter"
ScalarInterpolator1216 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Nasal_tip")

fieldValue1215.children.append(ScalarInterpolator1216)

ProtoInstance1210.fieldValue.append(fieldValue1215)
fieldValue1217 = x3d.fieldValue()
fieldValue1217.name = "size"
fieldValue1217.value = "40 2"

ProtoInstance1210.fieldValue.append(fieldValue1217)
fieldValue1218 = x3d.fieldValue()
fieldValue1218.name = "fontSize"
fieldValue1218.value = "1.6"

ProtoInstance1210.fieldValue.append(fieldValue1218)
fieldValue1219 = x3d.fieldValue()
fieldValue1219.name = "spacing"
fieldValue1219.value = "0.8"

ProtoInstance1210.fieldValue.append(fieldValue1219)

Scene7.children.append(ProtoInstance1210)
ProtoInstance1220 = x3d.ProtoInstance()
ProtoInstance1220.name = "MenuItem"
fieldValue1221 = x3d.fieldValue()
fieldValue1221.name = "translation"
fieldValue1221.value = "65 11.44444 0"

ProtoInstance1220.fieldValue.append(fieldValue1221)
fieldValue1222 = x3d.fieldValue()
fieldValue1222.name = "textTranslation"
fieldValue1222.value = "0 -0.07 0"

ProtoInstance1220.fieldValue.append(fieldValue1222)
fieldValue1223 = x3d.fieldValue()
fieldValue1223.name = "description"
fieldValue1223.value = "Neck"

ProtoInstance1220.fieldValue.append(fieldValue1223)
fieldValue1224 = x3d.fieldValue()
fieldValue1224.name = "menuItemString"
fieldValue1224.value = "\"Neck\""

ProtoInstance1220.fieldValue.append(fieldValue1224)
fieldValue1225 = x3d.fieldValue()
fieldValue1225.name = "adapter"
ScalarInterpolator1226 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Neck")

fieldValue1225.children.append(ScalarInterpolator1226)

ProtoInstance1220.fieldValue.append(fieldValue1225)
fieldValue1227 = x3d.fieldValue()
fieldValue1227.name = "size"
fieldValue1227.value = "40 2"

ProtoInstance1220.fieldValue.append(fieldValue1227)
fieldValue1228 = x3d.fieldValue()
fieldValue1228.name = "fontSize"
fieldValue1228.value = "1.6"

ProtoInstance1220.fieldValue.append(fieldValue1228)
fieldValue1229 = x3d.fieldValue()
fieldValue1229.name = "spacing"
fieldValue1229.value = "0.8"

ProtoInstance1220.fieldValue.append(fieldValue1229)

Scene7.children.append(ProtoInstance1220)
ProtoInstance1230 = x3d.ProtoInstance()
ProtoInstance1230.name = "MenuItem"
fieldValue1231 = x3d.fieldValue()
fieldValue1231.name = "translation"
fieldValue1231.value = "65 9.588889 0"

ProtoInstance1230.fieldValue.append(fieldValue1231)
fieldValue1232 = x3d.fieldValue()
fieldValue1232.name = "textTranslation"
fieldValue1232.value = "0 -0.07 0"

ProtoInstance1230.fieldValue.append(fieldValue1232)
fieldValue1233 = x3d.fieldValue()
fieldValue1233.name = "description"
fieldValue1233.value = "Occipital_scalp"

ProtoInstance1230.fieldValue.append(fieldValue1233)
fieldValue1234 = x3d.fieldValue()
fieldValue1234.name = "menuItemString"
fieldValue1234.value = "\"Occipital_scalp\""

ProtoInstance1230.fieldValue.append(fieldValue1234)
fieldValue1235 = x3d.fieldValue()
fieldValue1235.name = "adapter"
ScalarInterpolator1236 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Occipital_scalp")

fieldValue1235.children.append(ScalarInterpolator1236)

ProtoInstance1230.fieldValue.append(fieldValue1235)
fieldValue1237 = x3d.fieldValue()
fieldValue1237.name = "size"
fieldValue1237.value = "40 2"

ProtoInstance1230.fieldValue.append(fieldValue1237)
fieldValue1238 = x3d.fieldValue()
fieldValue1238.name = "fontSize"
fieldValue1238.value = "1.6"

ProtoInstance1230.fieldValue.append(fieldValue1238)
fieldValue1239 = x3d.fieldValue()
fieldValue1239.name = "spacing"
fieldValue1239.value = "0.8"

ProtoInstance1230.fieldValue.append(fieldValue1239)

Scene7.children.append(ProtoInstance1230)
ProtoInstance1240 = x3d.ProtoInstance()
ProtoInstance1240.name = "MenuItem"
fieldValue1241 = x3d.fieldValue()
fieldValue1241.name = "translation"
fieldValue1241.value = "65 7.733333 0"

ProtoInstance1240.fieldValue.append(fieldValue1241)
fieldValue1242 = x3d.fieldValue()
fieldValue1242.name = "textTranslation"
fieldValue1242.value = "0 -0.07 0"

ProtoInstance1240.fieldValue.append(fieldValue1242)
fieldValue1243 = x3d.fieldValue()
fieldValue1243.name = "description"
fieldValue1243.value = "Philtrum"

ProtoInstance1240.fieldValue.append(fieldValue1243)
fieldValue1244 = x3d.fieldValue()
fieldValue1244.name = "menuItemString"
fieldValue1244.value = "\"Philtrum\""

ProtoInstance1240.fieldValue.append(fieldValue1244)
fieldValue1245 = x3d.fieldValue()
fieldValue1245.name = "adapter"
ScalarInterpolator1246 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Philtrum")

fieldValue1245.children.append(ScalarInterpolator1246)

ProtoInstance1240.fieldValue.append(fieldValue1245)
fieldValue1247 = x3d.fieldValue()
fieldValue1247.name = "size"
fieldValue1247.value = "40 2"

ProtoInstance1240.fieldValue.append(fieldValue1247)
fieldValue1248 = x3d.fieldValue()
fieldValue1248.name = "fontSize"
fieldValue1248.value = "1.6"

ProtoInstance1240.fieldValue.append(fieldValue1248)
fieldValue1249 = x3d.fieldValue()
fieldValue1249.name = "spacing"
fieldValue1249.value = "0.8"

ProtoInstance1240.fieldValue.append(fieldValue1249)

Scene7.children.append(ProtoInstance1240)
ProtoInstance1250 = x3d.ProtoInstance()
ProtoInstance1250.name = "MenuItem"
fieldValue1251 = x3d.fieldValue()
fieldValue1251.name = "translation"
fieldValue1251.value = "65 5.877778 0"

ProtoInstance1250.fieldValue.append(fieldValue1251)
fieldValue1252 = x3d.fieldValue()
fieldValue1252.name = "textTranslation"
fieldValue1252.value = "0 -0.07 0"

ProtoInstance1250.fieldValue.append(fieldValue1252)
fieldValue1253 = x3d.fieldValue()
fieldValue1253.name = "description"
fieldValue1253.value = "Right_bulbar_conjunctiva"

ProtoInstance1250.fieldValue.append(fieldValue1253)
fieldValue1254 = x3d.fieldValue()
fieldValue1254.name = "menuItemString"
fieldValue1254.value = "\"Right_bulbar_conjunctiva\""

ProtoInstance1250.fieldValue.append(fieldValue1254)
fieldValue1255 = x3d.fieldValue()
fieldValue1255.name = "adapter"
ScalarInterpolator1256 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_bulbar_conjunctiva")

fieldValue1255.children.append(ScalarInterpolator1256)

ProtoInstance1250.fieldValue.append(fieldValue1255)
fieldValue1257 = x3d.fieldValue()
fieldValue1257.name = "size"
fieldValue1257.value = "40 2"

ProtoInstance1250.fieldValue.append(fieldValue1257)
fieldValue1258 = x3d.fieldValue()
fieldValue1258.name = "fontSize"
fieldValue1258.value = "1.6"

ProtoInstance1250.fieldValue.append(fieldValue1258)
fieldValue1259 = x3d.fieldValue()
fieldValue1259.name = "spacing"
fieldValue1259.value = "0.8"

ProtoInstance1250.fieldValue.append(fieldValue1259)

Scene7.children.append(ProtoInstance1250)
ProtoInstance1260 = x3d.ProtoInstance()
ProtoInstance1260.name = "MenuItem"
fieldValue1261 = x3d.fieldValue()
fieldValue1261.name = "translation"
fieldValue1261.value = "65 4.022222 0"

ProtoInstance1260.fieldValue.append(fieldValue1261)
fieldValue1262 = x3d.fieldValue()
fieldValue1262.name = "textTranslation"
fieldValue1262.value = "0 -0.07 0"

ProtoInstance1260.fieldValue.append(fieldValue1262)
fieldValue1263 = x3d.fieldValue()
fieldValue1263.name = "description"
fieldValue1263.value = "Right_cheek"

ProtoInstance1260.fieldValue.append(fieldValue1263)
fieldValue1264 = x3d.fieldValue()
fieldValue1264.name = "menuItemString"
fieldValue1264.value = "\"Right_cheek\""

ProtoInstance1260.fieldValue.append(fieldValue1264)
fieldValue1265 = x3d.fieldValue()
fieldValue1265.name = "adapter"
ScalarInterpolator1266 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_cheek")

fieldValue1265.children.append(ScalarInterpolator1266)

ProtoInstance1260.fieldValue.append(fieldValue1265)
fieldValue1267 = x3d.fieldValue()
fieldValue1267.name = "size"
fieldValue1267.value = "40 2"

ProtoInstance1260.fieldValue.append(fieldValue1267)
fieldValue1268 = x3d.fieldValue()
fieldValue1268.name = "fontSize"
fieldValue1268.value = "1.6"

ProtoInstance1260.fieldValue.append(fieldValue1268)
fieldValue1269 = x3d.fieldValue()
fieldValue1269.name = "spacing"
fieldValue1269.value = "0.8"

ProtoInstance1260.fieldValue.append(fieldValue1269)

Scene7.children.append(ProtoInstance1260)
ProtoInstance1270 = x3d.ProtoInstance()
ProtoInstance1270.name = "MenuItem"
fieldValue1271 = x3d.fieldValue()
fieldValue1271.name = "translation"
fieldValue1271.value = "65 2.166667 0"

ProtoInstance1270.fieldValue.append(fieldValue1271)
fieldValue1272 = x3d.fieldValue()
fieldValue1272.name = "textTranslation"
fieldValue1272.value = "0 -0.07 0"

ProtoInstance1270.fieldValue.append(fieldValue1272)
fieldValue1273 = x3d.fieldValue()
fieldValue1273.name = "description"
fieldValue1273.value = "Right_dorsum"

ProtoInstance1270.fieldValue.append(fieldValue1273)
fieldValue1274 = x3d.fieldValue()
fieldValue1274.name = "menuItemString"
fieldValue1274.value = "\"Right_dorsum\""

ProtoInstance1270.fieldValue.append(fieldValue1274)
fieldValue1275 = x3d.fieldValue()
fieldValue1275.name = "adapter"
ScalarInterpolator1276 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_dorsum")

fieldValue1275.children.append(ScalarInterpolator1276)

ProtoInstance1270.fieldValue.append(fieldValue1275)
fieldValue1277 = x3d.fieldValue()
fieldValue1277.name = "size"
fieldValue1277.value = "40 2"

ProtoInstance1270.fieldValue.append(fieldValue1277)
fieldValue1278 = x3d.fieldValue()
fieldValue1278.name = "fontSize"
fieldValue1278.value = "1.6"

ProtoInstance1270.fieldValue.append(fieldValue1278)
fieldValue1279 = x3d.fieldValue()
fieldValue1279.name = "spacing"
fieldValue1279.value = "0.8"

ProtoInstance1270.fieldValue.append(fieldValue1279)

Scene7.children.append(ProtoInstance1270)
ProtoInstance1280 = x3d.ProtoInstance()
ProtoInstance1280.name = "MenuItem"
fieldValue1281 = x3d.fieldValue()
fieldValue1281.name = "translation"
fieldValue1281.value = "65 0.3111111 0"

ProtoInstance1280.fieldValue.append(fieldValue1281)
fieldValue1282 = x3d.fieldValue()
fieldValue1282.name = "textTranslation"
fieldValue1282.value = "0 -0.07 0"

ProtoInstance1280.fieldValue.append(fieldValue1282)
fieldValue1283 = x3d.fieldValue()
fieldValue1283.name = "description"
fieldValue1283.value = "Right_ear"

ProtoInstance1280.fieldValue.append(fieldValue1283)
fieldValue1284 = x3d.fieldValue()
fieldValue1284.name = "menuItemString"
fieldValue1284.value = "\"Right_ear\""

ProtoInstance1280.fieldValue.append(fieldValue1284)
fieldValue1285 = x3d.fieldValue()
fieldValue1285.name = "adapter"
ScalarInterpolator1286 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_ear")

fieldValue1285.children.append(ScalarInterpolator1286)

ProtoInstance1280.fieldValue.append(fieldValue1285)
fieldValue1287 = x3d.fieldValue()
fieldValue1287.name = "size"
fieldValue1287.value = "40 2"

ProtoInstance1280.fieldValue.append(fieldValue1287)
fieldValue1288 = x3d.fieldValue()
fieldValue1288.name = "fontSize"
fieldValue1288.value = "1.6"

ProtoInstance1280.fieldValue.append(fieldValue1288)
fieldValue1289 = x3d.fieldValue()
fieldValue1289.name = "spacing"
fieldValue1289.value = "0.8"

ProtoInstance1280.fieldValue.append(fieldValue1289)

Scene7.children.append(ProtoInstance1280)
ProtoInstance1290 = x3d.ProtoInstance()
ProtoInstance1290.name = "MenuItem"
fieldValue1291 = x3d.fieldValue()
fieldValue1291.name = "translation"
fieldValue1291.value = "65 -1.544444 0"

ProtoInstance1290.fieldValue.append(fieldValue1291)
fieldValue1292 = x3d.fieldValue()
fieldValue1292.name = "textTranslation"
fieldValue1292.value = "0 -0.07 0"

ProtoInstance1290.fieldValue.append(fieldValue1292)
fieldValue1293 = x3d.fieldValue()
fieldValue1293.name = "description"
fieldValue1293.value = "Right_eyebrow"

ProtoInstance1290.fieldValue.append(fieldValue1293)
fieldValue1294 = x3d.fieldValue()
fieldValue1294.name = "menuItemString"
fieldValue1294.value = "\"Right_eyebrow\""

ProtoInstance1290.fieldValue.append(fieldValue1294)
fieldValue1295 = x3d.fieldValue()
fieldValue1295.name = "adapter"
ScalarInterpolator1296 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_eyebrow")

fieldValue1295.children.append(ScalarInterpolator1296)

ProtoInstance1290.fieldValue.append(fieldValue1295)
fieldValue1297 = x3d.fieldValue()
fieldValue1297.name = "size"
fieldValue1297.value = "40 2"

ProtoInstance1290.fieldValue.append(fieldValue1297)
fieldValue1298 = x3d.fieldValue()
fieldValue1298.name = "fontSize"
fieldValue1298.value = "1.6"

ProtoInstance1290.fieldValue.append(fieldValue1298)
fieldValue1299 = x3d.fieldValue()
fieldValue1299.name = "spacing"
fieldValue1299.value = "0.8"

ProtoInstance1290.fieldValue.append(fieldValue1299)

Scene7.children.append(ProtoInstance1290)
ProtoInstance1300 = x3d.ProtoInstance()
ProtoInstance1300.name = "MenuItem"
fieldValue1301 = x3d.fieldValue()
fieldValue1301.name = "translation"
fieldValue1301.value = "65 -3.4 0"

ProtoInstance1300.fieldValue.append(fieldValue1301)
fieldValue1302 = x3d.fieldValue()
fieldValue1302.name = "textTranslation"
fieldValue1302.value = "0 -0.07 0"

ProtoInstance1300.fieldValue.append(fieldValue1302)
fieldValue1303 = x3d.fieldValue()
fieldValue1303.name = "description"
fieldValue1303.value = "Right_forehead"

ProtoInstance1300.fieldValue.append(fieldValue1303)
fieldValue1304 = x3d.fieldValue()
fieldValue1304.name = "menuItemString"
fieldValue1304.value = "\"Right_forehead\""

ProtoInstance1300.fieldValue.append(fieldValue1304)
fieldValue1305 = x3d.fieldValue()
fieldValue1305.name = "adapter"
ScalarInterpolator1306 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_forehead")

fieldValue1305.children.append(ScalarInterpolator1306)

ProtoInstance1300.fieldValue.append(fieldValue1305)
fieldValue1307 = x3d.fieldValue()
fieldValue1307.name = "size"
fieldValue1307.value = "40 2"

ProtoInstance1300.fieldValue.append(fieldValue1307)
fieldValue1308 = x3d.fieldValue()
fieldValue1308.name = "fontSize"
fieldValue1308.value = "1.6"

ProtoInstance1300.fieldValue.append(fieldValue1308)
fieldValue1309 = x3d.fieldValue()
fieldValue1309.name = "spacing"
fieldValue1309.value = "0.8"

ProtoInstance1300.fieldValue.append(fieldValue1309)

Scene7.children.append(ProtoInstance1300)
ProtoInstance1310 = x3d.ProtoInstance()
ProtoInstance1310.name = "MenuItem"
fieldValue1311 = x3d.fieldValue()
fieldValue1311.name = "translation"
fieldValue1311.value = "65 -5.255556 0"

ProtoInstance1310.fieldValue.append(fieldValue1311)
fieldValue1312 = x3d.fieldValue()
fieldValue1312.name = "textTranslation"
fieldValue1312.value = "0 -0.07 0"

ProtoInstance1310.fieldValue.append(fieldValue1312)
fieldValue1313 = x3d.fieldValue()
fieldValue1313.name = "description"
fieldValue1313.value = "Right_lower_eyelid"

ProtoInstance1310.fieldValue.append(fieldValue1313)
fieldValue1314 = x3d.fieldValue()
fieldValue1314.name = "menuItemString"
fieldValue1314.value = "\"Right_lower_eyelid\""

ProtoInstance1310.fieldValue.append(fieldValue1314)
fieldValue1315 = x3d.fieldValue()
fieldValue1315.name = "adapter"
ScalarInterpolator1316 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_lower_eyelid")

fieldValue1315.children.append(ScalarInterpolator1316)

ProtoInstance1310.fieldValue.append(fieldValue1315)
fieldValue1317 = x3d.fieldValue()
fieldValue1317.name = "size"
fieldValue1317.value = "40 2"

ProtoInstance1310.fieldValue.append(fieldValue1317)
fieldValue1318 = x3d.fieldValue()
fieldValue1318.name = "fontSize"
fieldValue1318.value = "1.6"

ProtoInstance1310.fieldValue.append(fieldValue1318)
fieldValue1319 = x3d.fieldValue()
fieldValue1319.name = "spacing"
fieldValue1319.value = "0.8"

ProtoInstance1310.fieldValue.append(fieldValue1319)

Scene7.children.append(ProtoInstance1310)
ProtoInstance1320 = x3d.ProtoInstance()
ProtoInstance1320.name = "MenuItem"
fieldValue1321 = x3d.fieldValue()
fieldValue1321.name = "translation"
fieldValue1321.value = "65 -7.111111 0"

ProtoInstance1320.fieldValue.append(fieldValue1321)
fieldValue1322 = x3d.fieldValue()
fieldValue1322.name = "textTranslation"
fieldValue1322.value = "0 -0.07 0"

ProtoInstance1320.fieldValue.append(fieldValue1322)
fieldValue1323 = x3d.fieldValue()
fieldValue1323.name = "description"
fieldValue1323.value = "Right_lower_vermillion_lip"

ProtoInstance1320.fieldValue.append(fieldValue1323)
fieldValue1324 = x3d.fieldValue()
fieldValue1324.name = "menuItemString"
fieldValue1324.value = "\"Right_lower_vermillion_lip\""

ProtoInstance1320.fieldValue.append(fieldValue1324)
fieldValue1325 = x3d.fieldValue()
fieldValue1325.name = "adapter"
ScalarInterpolator1326 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_lower_vermillion_lip")

fieldValue1325.children.append(ScalarInterpolator1326)

ProtoInstance1320.fieldValue.append(fieldValue1325)
fieldValue1327 = x3d.fieldValue()
fieldValue1327.name = "size"
fieldValue1327.value = "40 2"

ProtoInstance1320.fieldValue.append(fieldValue1327)
fieldValue1328 = x3d.fieldValue()
fieldValue1328.name = "fontSize"
fieldValue1328.value = "1.6"

ProtoInstance1320.fieldValue.append(fieldValue1328)
fieldValue1329 = x3d.fieldValue()
fieldValue1329.name = "spacing"
fieldValue1329.value = "0.8"

ProtoInstance1320.fieldValue.append(fieldValue1329)

Scene7.children.append(ProtoInstance1320)
ProtoInstance1330 = x3d.ProtoInstance()
ProtoInstance1330.name = "MenuItem"
fieldValue1331 = x3d.fieldValue()
fieldValue1331.name = "translation"
fieldValue1331.value = "65 -8.966667 0"

ProtoInstance1330.fieldValue.append(fieldValue1331)
fieldValue1332 = x3d.fieldValue()
fieldValue1332.name = "textTranslation"
fieldValue1332.value = "0 -0.07 0"

ProtoInstance1330.fieldValue.append(fieldValue1332)
fieldValue1333 = x3d.fieldValue()
fieldValue1333.name = "description"
fieldValue1333.value = "Right_nasolabial_cheek"

ProtoInstance1330.fieldValue.append(fieldValue1333)
fieldValue1334 = x3d.fieldValue()
fieldValue1334.name = "menuItemString"
fieldValue1334.value = "\"Right_nasolabial_cheek\""

ProtoInstance1330.fieldValue.append(fieldValue1334)
fieldValue1335 = x3d.fieldValue()
fieldValue1335.name = "adapter"
ScalarInterpolator1336 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_nasolabial_cheek")

fieldValue1335.children.append(ScalarInterpolator1336)

ProtoInstance1330.fieldValue.append(fieldValue1335)
fieldValue1337 = x3d.fieldValue()
fieldValue1337.name = "size"
fieldValue1337.value = "40 2"

ProtoInstance1330.fieldValue.append(fieldValue1337)
fieldValue1338 = x3d.fieldValue()
fieldValue1338.name = "fontSize"
fieldValue1338.value = "1.6"

ProtoInstance1330.fieldValue.append(fieldValue1338)
fieldValue1339 = x3d.fieldValue()
fieldValue1339.name = "spacing"
fieldValue1339.value = "0.8"

ProtoInstance1330.fieldValue.append(fieldValue1339)

Scene7.children.append(ProtoInstance1330)
ProtoInstance1340 = x3d.ProtoInstance()
ProtoInstance1340.name = "MenuItem"
fieldValue1341 = x3d.fieldValue()
fieldValue1341.name = "translation"
fieldValue1341.value = "65 -10.82222 0"

ProtoInstance1340.fieldValue.append(fieldValue1341)
fieldValue1342 = x3d.fieldValue()
fieldValue1342.name = "textTranslation"
fieldValue1342.value = "0 -0.07 0"

ProtoInstance1340.fieldValue.append(fieldValue1342)
fieldValue1343 = x3d.fieldValue()
fieldValue1343.name = "description"
fieldValue1343.value = "Right_nostril"

ProtoInstance1340.fieldValue.append(fieldValue1343)
fieldValue1344 = x3d.fieldValue()
fieldValue1344.name = "menuItemString"
fieldValue1344.value = "\"Right_nostril\""

ProtoInstance1340.fieldValue.append(fieldValue1344)
fieldValue1345 = x3d.fieldValue()
fieldValue1345.name = "adapter"
ScalarInterpolator1346 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_nostril")

fieldValue1345.children.append(ScalarInterpolator1346)

ProtoInstance1340.fieldValue.append(fieldValue1345)
fieldValue1347 = x3d.fieldValue()
fieldValue1347.name = "size"
fieldValue1347.value = "40 2"

ProtoInstance1340.fieldValue.append(fieldValue1347)
fieldValue1348 = x3d.fieldValue()
fieldValue1348.name = "fontSize"
fieldValue1348.value = "1.6"

ProtoInstance1340.fieldValue.append(fieldValue1348)
fieldValue1349 = x3d.fieldValue()
fieldValue1349.name = "spacing"
fieldValue1349.value = "0.8"

ProtoInstance1340.fieldValue.append(fieldValue1349)

Scene7.children.append(ProtoInstance1340)
ProtoInstance1350 = x3d.ProtoInstance()
ProtoInstance1350.name = "MenuItem"
fieldValue1351 = x3d.fieldValue()
fieldValue1351.name = "translation"
fieldValue1351.value = "65 -12.67778 0"

ProtoInstance1350.fieldValue.append(fieldValue1351)
fieldValue1352 = x3d.fieldValue()
fieldValue1352.name = "textTranslation"
fieldValue1352.value = "0 -0.07 0"

ProtoInstance1350.fieldValue.append(fieldValue1352)
fieldValue1353 = x3d.fieldValue()
fieldValue1353.name = "description"
fieldValue1353.value = "Right_pupil"

ProtoInstance1350.fieldValue.append(fieldValue1353)
fieldValue1354 = x3d.fieldValue()
fieldValue1354.name = "menuItemString"
fieldValue1354.value = "\"Right_pupil\""

ProtoInstance1350.fieldValue.append(fieldValue1354)
fieldValue1355 = x3d.fieldValue()
fieldValue1355.name = "adapter"
ScalarInterpolator1356 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_pupil")

fieldValue1355.children.append(ScalarInterpolator1356)

ProtoInstance1350.fieldValue.append(fieldValue1355)
fieldValue1357 = x3d.fieldValue()
fieldValue1357.name = "size"
fieldValue1357.value = "40 2"

ProtoInstance1350.fieldValue.append(fieldValue1357)
fieldValue1358 = x3d.fieldValue()
fieldValue1358.name = "fontSize"
fieldValue1358.value = "1.6"

ProtoInstance1350.fieldValue.append(fieldValue1358)
fieldValue1359 = x3d.fieldValue()
fieldValue1359.name = "spacing"
fieldValue1359.value = "0.8"

ProtoInstance1350.fieldValue.append(fieldValue1359)

Scene7.children.append(ProtoInstance1350)
ProtoInstance1360 = x3d.ProtoInstance()
ProtoInstance1360.name = "MenuItem"
fieldValue1361 = x3d.fieldValue()
fieldValue1361.name = "translation"
fieldValue1361.value = "65 -14.53333 0"

ProtoInstance1360.fieldValue.append(fieldValue1361)
fieldValue1362 = x3d.fieldValue()
fieldValue1362.name = "textTranslation"
fieldValue1362.value = "0 -0.07 0"

ProtoInstance1360.fieldValue.append(fieldValue1362)
fieldValue1363 = x3d.fieldValue()
fieldValue1363.name = "description"
fieldValue1363.value = "Right_temple"

ProtoInstance1360.fieldValue.append(fieldValue1363)
fieldValue1364 = x3d.fieldValue()
fieldValue1364.name = "menuItemString"
fieldValue1364.value = "\"Right_temple\""

ProtoInstance1360.fieldValue.append(fieldValue1364)
fieldValue1365 = x3d.fieldValue()
fieldValue1365.name = "adapter"
ScalarInterpolator1366 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_temple")

fieldValue1365.children.append(ScalarInterpolator1366)

ProtoInstance1360.fieldValue.append(fieldValue1365)
fieldValue1367 = x3d.fieldValue()
fieldValue1367.name = "size"
fieldValue1367.value = "40 2"

ProtoInstance1360.fieldValue.append(fieldValue1367)
fieldValue1368 = x3d.fieldValue()
fieldValue1368.name = "fontSize"
fieldValue1368.value = "1.6"

ProtoInstance1360.fieldValue.append(fieldValue1368)
fieldValue1369 = x3d.fieldValue()
fieldValue1369.name = "spacing"
fieldValue1369.value = "0.8"

ProtoInstance1360.fieldValue.append(fieldValue1369)

Scene7.children.append(ProtoInstance1360)
ProtoInstance1370 = x3d.ProtoInstance()
ProtoInstance1370.name = "MenuItem"
fieldValue1371 = x3d.fieldValue()
fieldValue1371.name = "translation"
fieldValue1371.value = "65 -16.38889 0"

ProtoInstance1370.fieldValue.append(fieldValue1371)
fieldValue1372 = x3d.fieldValue()
fieldValue1372.name = "textTranslation"
fieldValue1372.value = "0 -0.07 0"

ProtoInstance1370.fieldValue.append(fieldValue1372)
fieldValue1373 = x3d.fieldValue()
fieldValue1373.name = "description"
fieldValue1373.value = "Right_upper_cutaneous_lip"

ProtoInstance1370.fieldValue.append(fieldValue1373)
fieldValue1374 = x3d.fieldValue()
fieldValue1374.name = "menuItemString"
fieldValue1374.value = "\"Right_upper_cutaneous_lip\""

ProtoInstance1370.fieldValue.append(fieldValue1374)
fieldValue1375 = x3d.fieldValue()
fieldValue1375.name = "adapter"
ScalarInterpolator1376 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_upper_cutaneous_lip")

fieldValue1375.children.append(ScalarInterpolator1376)

ProtoInstance1370.fieldValue.append(fieldValue1375)
fieldValue1377 = x3d.fieldValue()
fieldValue1377.name = "size"
fieldValue1377.value = "40 2"

ProtoInstance1370.fieldValue.append(fieldValue1377)
fieldValue1378 = x3d.fieldValue()
fieldValue1378.name = "fontSize"
fieldValue1378.value = "1.6"

ProtoInstance1370.fieldValue.append(fieldValue1378)
fieldValue1379 = x3d.fieldValue()
fieldValue1379.name = "spacing"
fieldValue1379.value = "0.8"

ProtoInstance1370.fieldValue.append(fieldValue1379)

Scene7.children.append(ProtoInstance1370)
ProtoInstance1380 = x3d.ProtoInstance()
ProtoInstance1380.name = "MenuItem"
fieldValue1381 = x3d.fieldValue()
fieldValue1381.name = "translation"
fieldValue1381.value = "65 -18.24444 0"

ProtoInstance1380.fieldValue.append(fieldValue1381)
fieldValue1382 = x3d.fieldValue()
fieldValue1382.name = "textTranslation"
fieldValue1382.value = "0 -0.07 0"

ProtoInstance1380.fieldValue.append(fieldValue1382)
fieldValue1383 = x3d.fieldValue()
fieldValue1383.name = "description"
fieldValue1383.value = "Right_upper_eyelid"

ProtoInstance1380.fieldValue.append(fieldValue1383)
fieldValue1384 = x3d.fieldValue()
fieldValue1384.name = "menuItemString"
fieldValue1384.value = "\"Right_upper_eyelid\""

ProtoInstance1380.fieldValue.append(fieldValue1384)
fieldValue1385 = x3d.fieldValue()
fieldValue1385.name = "adapter"
ScalarInterpolator1386 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_upper_eyelid")

fieldValue1385.children.append(ScalarInterpolator1386)

ProtoInstance1380.fieldValue.append(fieldValue1385)
fieldValue1387 = x3d.fieldValue()
fieldValue1387.name = "size"
fieldValue1387.value = "40 2"

ProtoInstance1380.fieldValue.append(fieldValue1387)
fieldValue1388 = x3d.fieldValue()
fieldValue1388.name = "fontSize"
fieldValue1388.value = "1.6"

ProtoInstance1380.fieldValue.append(fieldValue1388)
fieldValue1389 = x3d.fieldValue()
fieldValue1389.name = "spacing"
fieldValue1389.value = "0.8"

ProtoInstance1380.fieldValue.append(fieldValue1389)

Scene7.children.append(ProtoInstance1380)
ProtoInstance1390 = x3d.ProtoInstance()
ProtoInstance1390.name = "MenuItem"
fieldValue1391 = x3d.fieldValue()
fieldValue1391.name = "translation"
fieldValue1391.value = "65 -20.1 0"

ProtoInstance1390.fieldValue.append(fieldValue1391)
fieldValue1392 = x3d.fieldValue()
fieldValue1392.name = "textTranslation"
fieldValue1392.value = "0 -0.07 0"

ProtoInstance1390.fieldValue.append(fieldValue1392)
fieldValue1393 = x3d.fieldValue()
fieldValue1393.name = "description"
fieldValue1393.value = "Right_upper_vermillion_lip"

ProtoInstance1390.fieldValue.append(fieldValue1393)
fieldValue1394 = x3d.fieldValue()
fieldValue1394.name = "menuItemString"
fieldValue1394.value = "\"Right_upper_vermillion_lip\""

ProtoInstance1390.fieldValue.append(fieldValue1394)
fieldValue1395 = x3d.fieldValue()
fieldValue1395.name = "adapter"
ScalarInterpolator1396 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Right_upper_vermillion_lip")

fieldValue1395.children.append(ScalarInterpolator1396)

ProtoInstance1390.fieldValue.append(fieldValue1395)
fieldValue1397 = x3d.fieldValue()
fieldValue1397.name = "size"
fieldValue1397.value = "40 2"

ProtoInstance1390.fieldValue.append(fieldValue1397)
fieldValue1398 = x3d.fieldValue()
fieldValue1398.name = "fontSize"
fieldValue1398.value = "1.6"

ProtoInstance1390.fieldValue.append(fieldValue1398)
fieldValue1399 = x3d.fieldValue()
fieldValue1399.name = "spacing"
fieldValue1399.value = "0.8"

ProtoInstance1390.fieldValue.append(fieldValue1399)

Scene7.children.append(ProtoInstance1390)
ProtoInstance1400 = x3d.ProtoInstance()
ProtoInstance1400.name = "MenuItem"
fieldValue1401 = x3d.fieldValue()
fieldValue1401.name = "translation"
fieldValue1401.value = "65 -21.95556 0"

ProtoInstance1400.fieldValue.append(fieldValue1401)
fieldValue1402 = x3d.fieldValue()
fieldValue1402.name = "textTranslation"
fieldValue1402.value = "0 -0.07 0"

ProtoInstance1400.fieldValue.append(fieldValue1402)
fieldValue1403 = x3d.fieldValue()
fieldValue1403.name = "description"
fieldValue1403.value = "Tongue"

ProtoInstance1400.fieldValue.append(fieldValue1403)
fieldValue1404 = x3d.fieldValue()
fieldValue1404.name = "menuItemString"
fieldValue1404.value = "\"Tongue\""

ProtoInstance1400.fieldValue.append(fieldValue1404)
fieldValue1405 = x3d.fieldValue()
fieldValue1405.name = "adapter"
ScalarInterpolator1406 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Tongue")

fieldValue1405.children.append(ScalarInterpolator1406)

ProtoInstance1400.fieldValue.append(fieldValue1405)
fieldValue1407 = x3d.fieldValue()
fieldValue1407.name = "size"
fieldValue1407.value = "40 2"

ProtoInstance1400.fieldValue.append(fieldValue1407)
fieldValue1408 = x3d.fieldValue()
fieldValue1408.name = "fontSize"
fieldValue1408.value = "1.6"

ProtoInstance1400.fieldValue.append(fieldValue1408)
fieldValue1409 = x3d.fieldValue()
fieldValue1409.name = "spacing"
fieldValue1409.value = "0.8"

ProtoInstance1400.fieldValue.append(fieldValue1409)

Scene7.children.append(ProtoInstance1400)
ProtoInstance1410 = x3d.ProtoInstance()
ProtoInstance1410.name = "MenuItem"
fieldValue1411 = x3d.fieldValue()
fieldValue1411.name = "translation"
fieldValue1411.value = "65 -23.81111 0"

ProtoInstance1410.fieldValue.append(fieldValue1411)
fieldValue1412 = x3d.fieldValue()
fieldValue1412.name = "textTranslation"
fieldValue1412.value = "0 -0.07 0"

ProtoInstance1410.fieldValue.append(fieldValue1412)
fieldValue1413 = x3d.fieldValue()
fieldValue1413.name = "description"
fieldValue1413.value = "Upper_teeth"

ProtoInstance1410.fieldValue.append(fieldValue1413)
fieldValue1414 = x3d.fieldValue()
fieldValue1414.name = "menuItemString"
fieldValue1414.value = "\"Upper_teeth\""

ProtoInstance1410.fieldValue.append(fieldValue1414)
fieldValue1415 = x3d.fieldValue()
fieldValue1415.name = "adapter"
ScalarInterpolator1416 = x3d.ScalarInterpolator(DEF="AnimationAdapter_Upper_teeth")

fieldValue1415.children.append(ScalarInterpolator1416)

ProtoInstance1410.fieldValue.append(fieldValue1415)
fieldValue1417 = x3d.fieldValue()
fieldValue1417.name = "size"
fieldValue1417.value = "40 2"

ProtoInstance1410.fieldValue.append(fieldValue1417)
fieldValue1418 = x3d.fieldValue()
fieldValue1418.name = "fontSize"
fieldValue1418.value = "1.6"

ProtoInstance1410.fieldValue.append(fieldValue1418)
fieldValue1419 = x3d.fieldValue()
fieldValue1419.name = "spacing"
fieldValue1419.value = "0.8"

ProtoInstance1410.fieldValue.append(fieldValue1419)

Scene7.children.append(ProtoInstance1410)
ROUTE1420 = x3d.ROUTE()
ROUTE1420.fromNode = "AnimationAdapter_JinBlink"
ROUTE1420.fromField = "value_changed"
ROUTE1420.toNode = "Upper_teeth_MorphInterpolator_JinBlink"
ROUTE1420.toField = "set_weight"

Scene7.children.append(ROUTE1420)
ROUTE1421 = x3d.ROUTE()
ROUTE1421.fromNode = "AnimationAdapter_JinBlink"
ROUTE1421.fromField = "value_changed"
ROUTE1421.toNode = "Left_upper_eyelid_MorphInterpolator_JinBlink"
ROUTE1421.toField = "set_weight"

Scene7.children.append(ROUTE1421)
ROUTE1422 = x3d.ROUTE()
ROUTE1422.fromNode = "AnimationAdapter_JinBlink"
ROUTE1422.fromField = "value_changed"
ROUTE1422.toNode = "Left_lower_eyelid_MorphInterpolator_JinBlink"
ROUTE1422.toField = "set_weight"

Scene7.children.append(ROUTE1422)
ROUTE1423 = x3d.ROUTE()
ROUTE1423.fromNode = "AnimationAdapter_JinBlink"
ROUTE1423.fromField = "value_changed"
ROUTE1423.toNode = "Right_lower_eyelid_MorphInterpolator_JinBlink"
ROUTE1423.toField = "set_weight"

Scene7.children.append(ROUTE1423)
ROUTE1424 = x3d.ROUTE()
ROUTE1424.fromNode = "AnimationAdapter_JinBlink"
ROUTE1424.fromField = "value_changed"
ROUTE1424.toNode = "Right_upper_eyelid_MorphInterpolator_JinBlink"
ROUTE1424.toField = "set_weight"

Scene7.children.append(ROUTE1424)
ROUTE1425 = x3d.ROUTE()
ROUTE1425.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1425.fromField = "value_changed"
ROUTE1425.toNode = "Left_forehead_MorphInterpolator_JinBrowLowerer"
ROUTE1425.toField = "set_weight"

Scene7.children.append(ROUTE1425)
ROUTE1426 = x3d.ROUTE()
ROUTE1426.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1426.fromField = "value_changed"
ROUTE1426.toNode = "Glabella_MorphInterpolator_JinBrowLowerer"
ROUTE1426.toField = "set_weight"

Scene7.children.append(ROUTE1426)
ROUTE1427 = x3d.ROUTE()
ROUTE1427.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1427.fromField = "value_changed"
ROUTE1427.toNode = "Left_eyebrow_MorphInterpolator_JinBrowLowerer"
ROUTE1427.toField = "set_weight"

Scene7.children.append(ROUTE1427)
ROUTE1428 = x3d.ROUTE()
ROUTE1428.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1428.fromField = "value_changed"
ROUTE1428.toNode = "Left_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer"
ROUTE1428.toField = "set_weight"

Scene7.children.append(ROUTE1428)
ROUTE1429 = x3d.ROUTE()
ROUTE1429.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1429.fromField = "value_changed"
ROUTE1429.toNode = "Left_temple_MorphInterpolator_JinBrowLowerer"
ROUTE1429.toField = "set_weight"

Scene7.children.append(ROUTE1429)
ROUTE1430 = x3d.ROUTE()
ROUTE1430.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1430.fromField = "value_changed"
ROUTE1430.toNode = "Right_forehead_MorphInterpolator_JinBrowLowerer"
ROUTE1430.toField = "set_weight"

Scene7.children.append(ROUTE1430)
ROUTE1431 = x3d.ROUTE()
ROUTE1431.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1431.fromField = "value_changed"
ROUTE1431.toNode = "Right_eyebrow_MorphInterpolator_JinBrowLowerer"
ROUTE1431.toField = "set_weight"

Scene7.children.append(ROUTE1431)
ROUTE1432 = x3d.ROUTE()
ROUTE1432.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1432.fromField = "value_changed"
ROUTE1432.toNode = "Left_upper_eyelid_MorphInterpolator_JinBrowLowerer"
ROUTE1432.toField = "set_weight"

Scene7.children.append(ROUTE1432)
ROUTE1433 = x3d.ROUTE()
ROUTE1433.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1433.fromField = "value_changed"
ROUTE1433.toNode = "Left_pupil_MorphInterpolator_JinBrowLowerer"
ROUTE1433.toField = "set_weight"

Scene7.children.append(ROUTE1433)
ROUTE1434 = x3d.ROUTE()
ROUTE1434.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1434.fromField = "value_changed"
ROUTE1434.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer"
ROUTE1434.toField = "set_weight"

Scene7.children.append(ROUTE1434)
ROUTE1435 = x3d.ROUTE()
ROUTE1435.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1435.fromField = "value_changed"
ROUTE1435.toNode = "Right_pupil_MorphInterpolator_JinBrowLowerer"
ROUTE1435.toField = "set_weight"

Scene7.children.append(ROUTE1435)
ROUTE1436 = x3d.ROUTE()
ROUTE1436.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1436.fromField = "value_changed"
ROUTE1436.toNode = "Right_temple_MorphInterpolator_JinBrowLowerer"
ROUTE1436.toField = "set_weight"

Scene7.children.append(ROUTE1436)
ROUTE1437 = x3d.ROUTE()
ROUTE1437.fromNode = "AnimationAdapter_JinBrowLowerer"
ROUTE1437.fromField = "value_changed"
ROUTE1437.toNode = "Right_upper_eyelid_MorphInterpolator_JinBrowLowerer"
ROUTE1437.toField = "set_weight"

Scene7.children.append(ROUTE1437)
ROUTE1438 = x3d.ROUTE()
ROUTE1438.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1438.fromField = "value_changed"
ROUTE1438.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"
ROUTE1438.toField = "set_weight"

Scene7.children.append(ROUTE1438)
ROUTE1439 = x3d.ROUTE()
ROUTE1439.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1439.fromField = "value_changed"
ROUTE1439.toNode = "Neck_MorphInterpolator_JinCheekPuffer"
ROUTE1439.toField = "set_weight"

Scene7.children.append(ROUTE1439)
ROUTE1440 = x3d.ROUTE()
ROUTE1440.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1440.fromField = "value_changed"
ROUTE1440.toNode = "Occipital_scalp_MorphInterpolator_JinCheekPuffer"
ROUTE1440.toField = "set_weight"

Scene7.children.append(ROUTE1440)
ROUTE1441 = x3d.ROUTE()
ROUTE1441.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1441.fromField = "value_changed"
ROUTE1441.toNode = "Chin_MorphInterpolator_JinCheekPuffer"
ROUTE1441.toField = "set_weight"

Scene7.children.append(ROUTE1441)
ROUTE1442 = x3d.ROUTE()
ROUTE1442.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1442.fromField = "value_changed"
ROUTE1442.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"
ROUTE1442.toField = "set_weight"

Scene7.children.append(ROUTE1442)
ROUTE1443 = x3d.ROUTE()
ROUTE1443.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1443.fromField = "value_changed"
ROUTE1443.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"
ROUTE1443.toField = "set_weight"

Scene7.children.append(ROUTE1443)
ROUTE1444 = x3d.ROUTE()
ROUTE1444.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1444.fromField = "value_changed"
ROUTE1444.toNode = "Left_nostril_MorphInterpolator_JinCheekPuffer"
ROUTE1444.toField = "set_weight"

Scene7.children.append(ROUTE1444)
ROUTE1445 = x3d.ROUTE()
ROUTE1445.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1445.fromField = "value_changed"
ROUTE1445.toNode = "Left_dorsum_MorphInterpolator_JinCheekPuffer"
ROUTE1445.toField = "set_weight"

Scene7.children.append(ROUTE1445)
ROUTE1446 = x3d.ROUTE()
ROUTE1446.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1446.fromField = "value_changed"
ROUTE1446.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinCheekPuffer"
ROUTE1446.toField = "set_weight"

Scene7.children.append(ROUTE1446)
ROUTE1447 = x3d.ROUTE()
ROUTE1447.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1447.fromField = "value_changed"
ROUTE1447.toNode = "Left_cheek_MorphInterpolator_JinCheekPuffer"
ROUTE1447.toField = "set_weight"

Scene7.children.append(ROUTE1447)
ROUTE1448 = x3d.ROUTE()
ROUTE1448.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1448.fromField = "value_changed"
ROUTE1448.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"
ROUTE1448.toField = "set_weight"

Scene7.children.append(ROUTE1448)
ROUTE1449 = x3d.ROUTE()
ROUTE1449.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1449.fromField = "value_changed"
ROUTE1449.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer"
ROUTE1449.toField = "set_weight"

Scene7.children.append(ROUTE1449)
ROUTE1450 = x3d.ROUTE()
ROUTE1450.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1450.fromField = "value_changed"
ROUTE1450.toNode = "Philtrum_MorphInterpolator_JinCheekPuffer"
ROUTE1450.toField = "set_weight"

Scene7.children.append(ROUTE1450)
ROUTE1451 = x3d.ROUTE()
ROUTE1451.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1451.fromField = "value_changed"
ROUTE1451.toNode = "Right_cheek_MorphInterpolator_JinCheekPuffer"
ROUTE1451.toField = "set_weight"

Scene7.children.append(ROUTE1451)
ROUTE1452 = x3d.ROUTE()
ROUTE1452.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1452.fromField = "value_changed"
ROUTE1452.toNode = "Right_dorsum_MorphInterpolator_JinCheekPuffer"
ROUTE1452.toField = "set_weight"

Scene7.children.append(ROUTE1452)
ROUTE1453 = x3d.ROUTE()
ROUTE1453.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1453.fromField = "value_changed"
ROUTE1453.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinCheekPuffer"
ROUTE1453.toField = "set_weight"

Scene7.children.append(ROUTE1453)
ROUTE1454 = x3d.ROUTE()
ROUTE1454.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1454.fromField = "value_changed"
ROUTE1454.toNode = "Right_nostril_MorphInterpolator_JinCheekPuffer"
ROUTE1454.toField = "set_weight"

Scene7.children.append(ROUTE1454)
ROUTE1455 = x3d.ROUTE()
ROUTE1455.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1455.fromField = "value_changed"
ROUTE1455.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer"
ROUTE1455.toField = "set_weight"

Scene7.children.append(ROUTE1455)
ROUTE1456 = x3d.ROUTE()
ROUTE1456.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1456.fromField = "value_changed"
ROUTE1456.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"
ROUTE1456.toField = "set_weight"

Scene7.children.append(ROUTE1456)
ROUTE1457 = x3d.ROUTE()
ROUTE1457.fromNode = "AnimationAdapter_JinCheekPuffer"
ROUTE1457.fromField = "value_changed"
ROUTE1457.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"
ROUTE1457.toField = "set_weight"

Scene7.children.append(ROUTE1457)
ROUTE1458 = x3d.ROUTE()
ROUTE1458.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1458.fromField = "value_changed"
ROUTE1458.toNode = "Upper_teeth_MorphInterpolator_JinCheekRaiser"
ROUTE1458.toField = "set_weight"

Scene7.children.append(ROUTE1458)
ROUTE1459 = x3d.ROUTE()
ROUTE1459.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1459.fromField = "value_changed"
ROUTE1459.toNode = "Left_dorsum_MorphInterpolator_JinCheekRaiser"
ROUTE1459.toField = "set_weight"

Scene7.children.append(ROUTE1459)
ROUTE1460 = x3d.ROUTE()
ROUTE1460.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1460.fromField = "value_changed"
ROUTE1460.toNode = "Left_cheek_MorphInterpolator_JinCheekRaiser"
ROUTE1460.toField = "set_weight"

Scene7.children.append(ROUTE1460)
ROUTE1461 = x3d.ROUTE()
ROUTE1461.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1461.fromField = "value_changed"
ROUTE1461.toNode = "Left_upper_eyelid_MorphInterpolator_JinCheekRaiser"
ROUTE1461.toField = "set_weight"

Scene7.children.append(ROUTE1461)
ROUTE1462 = x3d.ROUTE()
ROUTE1462.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1462.fromField = "value_changed"
ROUTE1462.toNode = "Left_lower_eyelid_MorphInterpolator_JinCheekRaiser"
ROUTE1462.toField = "set_weight"

Scene7.children.append(ROUTE1462)
ROUTE1463 = x3d.ROUTE()
ROUTE1463.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1463.fromField = "value_changed"
ROUTE1463.toNode = "Right_cheek_MorphInterpolator_JinCheekRaiser"
ROUTE1463.toField = "set_weight"

Scene7.children.append(ROUTE1463)
ROUTE1464 = x3d.ROUTE()
ROUTE1464.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1464.fromField = "value_changed"
ROUTE1464.toNode = "Right_dorsum_MorphInterpolator_JinCheekRaiser"
ROUTE1464.toField = "set_weight"

Scene7.children.append(ROUTE1464)
ROUTE1465 = x3d.ROUTE()
ROUTE1465.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1465.fromField = "value_changed"
ROUTE1465.toNode = "Right_lower_eyelid_MorphInterpolator_JinCheekRaiser"
ROUTE1465.toField = "set_weight"

Scene7.children.append(ROUTE1465)
ROUTE1466 = x3d.ROUTE()
ROUTE1466.fromNode = "AnimationAdapter_JinCheekRaiser"
ROUTE1466.fromField = "value_changed"
ROUTE1466.toNode = "Right_upper_eyelid_MorphInterpolator_JinCheekRaiser"
ROUTE1466.toField = "set_weight"

Scene7.children.append(ROUTE1466)
ROUTE1467 = x3d.ROUTE()
ROUTE1467.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1467.fromField = "value_changed"
ROUTE1467.toNode = "Lower_teeth_MorphInterpolator_JinChinRaiser"
ROUTE1467.toField = "set_weight"

Scene7.children.append(ROUTE1467)
ROUTE1468 = x3d.ROUTE()
ROUTE1468.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1468.fromField = "value_changed"
ROUTE1468.toNode = "Tongue_MorphInterpolator_JinChinRaiser"
ROUTE1468.toField = "set_weight"

Scene7.children.append(ROUTE1468)
ROUTE1469 = x3d.ROUTE()
ROUTE1469.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1469.fromField = "value_changed"
ROUTE1469.toNode = "Upper_teeth_MorphInterpolator_JinChinRaiser"
ROUTE1469.toField = "set_weight"

Scene7.children.append(ROUTE1469)
ROUTE1470 = x3d.ROUTE()
ROUTE1470.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1470.fromField = "value_changed"
ROUTE1470.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"
ROUTE1470.toField = "set_weight"

Scene7.children.append(ROUTE1470)
ROUTE1471 = x3d.ROUTE()
ROUTE1471.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1471.fromField = "value_changed"
ROUTE1471.toNode = "Neck_MorphInterpolator_JinChinRaiser"
ROUTE1471.toField = "set_weight"

Scene7.children.append(ROUTE1471)
ROUTE1472 = x3d.ROUTE()
ROUTE1472.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1472.fromField = "value_changed"
ROUTE1472.toNode = "Occipital_scalp_MorphInterpolator_JinChinRaiser"
ROUTE1472.toField = "set_weight"

Scene7.children.append(ROUTE1472)
ROUTE1473 = x3d.ROUTE()
ROUTE1473.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1473.fromField = "value_changed"
ROUTE1473.toNode = "Chin_MorphInterpolator_JinChinRaiser"
ROUTE1473.toField = "set_weight"

Scene7.children.append(ROUTE1473)
ROUTE1474 = x3d.ROUTE()
ROUTE1474.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1474.fromField = "value_changed"
ROUTE1474.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"
ROUTE1474.toField = "set_weight"

Scene7.children.append(ROUTE1474)
ROUTE1475 = x3d.ROUTE()
ROUTE1475.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1475.fromField = "value_changed"
ROUTE1475.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"
ROUTE1475.toField = "set_weight"

Scene7.children.append(ROUTE1475)
ROUTE1476 = x3d.ROUTE()
ROUTE1476.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1476.fromField = "value_changed"
ROUTE1476.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinChinRaiser"
ROUTE1476.toField = "set_weight"

Scene7.children.append(ROUTE1476)
ROUTE1477 = x3d.ROUTE()
ROUTE1477.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1477.fromField = "value_changed"
ROUTE1477.toNode = "Left_cheek_MorphInterpolator_JinChinRaiser"
ROUTE1477.toField = "set_weight"

Scene7.children.append(ROUTE1477)
ROUTE1478 = x3d.ROUTE()
ROUTE1478.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1478.fromField = "value_changed"
ROUTE1478.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"
ROUTE1478.toField = "set_weight"

Scene7.children.append(ROUTE1478)
ROUTE1479 = x3d.ROUTE()
ROUTE1479.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1479.fromField = "value_changed"
ROUTE1479.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser"
ROUTE1479.toField = "set_weight"

Scene7.children.append(ROUTE1479)
ROUTE1480 = x3d.ROUTE()
ROUTE1480.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1480.fromField = "value_changed"
ROUTE1480.toNode = "Philtrum_MorphInterpolator_JinChinRaiser"
ROUTE1480.toField = "set_weight"

Scene7.children.append(ROUTE1480)
ROUTE1481 = x3d.ROUTE()
ROUTE1481.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1481.fromField = "value_changed"
ROUTE1481.toNode = "Right_cheek_MorphInterpolator_JinChinRaiser"
ROUTE1481.toField = "set_weight"

Scene7.children.append(ROUTE1481)
ROUTE1482 = x3d.ROUTE()
ROUTE1482.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1482.fromField = "value_changed"
ROUTE1482.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinChinRaiser"
ROUTE1482.toField = "set_weight"

Scene7.children.append(ROUTE1482)
ROUTE1483 = x3d.ROUTE()
ROUTE1483.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1483.fromField = "value_changed"
ROUTE1483.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser"
ROUTE1483.toField = "set_weight"

Scene7.children.append(ROUTE1483)
ROUTE1484 = x3d.ROUTE()
ROUTE1484.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1484.fromField = "value_changed"
ROUTE1484.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"
ROUTE1484.toField = "set_weight"

Scene7.children.append(ROUTE1484)
ROUTE1485 = x3d.ROUTE()
ROUTE1485.fromNode = "AnimationAdapter_JinChinRaiser"
ROUTE1485.fromField = "value_changed"
ROUTE1485.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"
ROUTE1485.toField = "set_weight"

Scene7.children.append(ROUTE1485)
ROUTE1486 = x3d.ROUTE()
ROUTE1486.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1486.fromField = "value_changed"
ROUTE1486.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinDimpler"
ROUTE1486.toField = "set_weight"

Scene7.children.append(ROUTE1486)
ROUTE1487 = x3d.ROUTE()
ROUTE1487.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1487.fromField = "value_changed"
ROUTE1487.toNode = "Neck_MorphInterpolator_JinDimpler"
ROUTE1487.toField = "set_weight"

Scene7.children.append(ROUTE1487)
ROUTE1488 = x3d.ROUTE()
ROUTE1488.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1488.fromField = "value_changed"
ROUTE1488.toNode = "Occipital_scalp_MorphInterpolator_JinDimpler"
ROUTE1488.toField = "set_weight"

Scene7.children.append(ROUTE1488)
ROUTE1489 = x3d.ROUTE()
ROUTE1489.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1489.fromField = "value_changed"
ROUTE1489.toNode = "Chin_MorphInterpolator_JinDimpler"
ROUTE1489.toField = "set_weight"

Scene7.children.append(ROUTE1489)
ROUTE1490 = x3d.ROUTE()
ROUTE1490.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1490.fromField = "value_changed"
ROUTE1490.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinDimpler"
ROUTE1490.toField = "set_weight"

Scene7.children.append(ROUTE1490)
ROUTE1491 = x3d.ROUTE()
ROUTE1491.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1491.fromField = "value_changed"
ROUTE1491.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinDimpler"
ROUTE1491.toField = "set_weight"

Scene7.children.append(ROUTE1491)
ROUTE1492 = x3d.ROUTE()
ROUTE1492.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1492.fromField = "value_changed"
ROUTE1492.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinDimpler"
ROUTE1492.toField = "set_weight"

Scene7.children.append(ROUTE1492)
ROUTE1493 = x3d.ROUTE()
ROUTE1493.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1493.fromField = "value_changed"
ROUTE1493.toNode = "Left_cheek_MorphInterpolator_JinDimpler"
ROUTE1493.toField = "set_weight"

Scene7.children.append(ROUTE1493)
ROUTE1494 = x3d.ROUTE()
ROUTE1494.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1494.fromField = "value_changed"
ROUTE1494.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinDimpler"
ROUTE1494.toField = "set_weight"

Scene7.children.append(ROUTE1494)
ROUTE1495 = x3d.ROUTE()
ROUTE1495.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1495.fromField = "value_changed"
ROUTE1495.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinDimpler"
ROUTE1495.toField = "set_weight"

Scene7.children.append(ROUTE1495)
ROUTE1496 = x3d.ROUTE()
ROUTE1496.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1496.fromField = "value_changed"
ROUTE1496.toNode = "Philtrum_MorphInterpolator_JinDimpler"
ROUTE1496.toField = "set_weight"

Scene7.children.append(ROUTE1496)
ROUTE1497 = x3d.ROUTE()
ROUTE1497.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1497.fromField = "value_changed"
ROUTE1497.toNode = "Right_cheek_MorphInterpolator_JinDimpler"
ROUTE1497.toField = "set_weight"

Scene7.children.append(ROUTE1497)
ROUTE1498 = x3d.ROUTE()
ROUTE1498.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1498.fromField = "value_changed"
ROUTE1498.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinDimpler"
ROUTE1498.toField = "set_weight"

Scene7.children.append(ROUTE1498)
ROUTE1499 = x3d.ROUTE()
ROUTE1499.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1499.fromField = "value_changed"
ROUTE1499.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinDimpler"
ROUTE1499.toField = "set_weight"

Scene7.children.append(ROUTE1499)
ROUTE1500 = x3d.ROUTE()
ROUTE1500.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1500.fromField = "value_changed"
ROUTE1500.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinDimpler"
ROUTE1500.toField = "set_weight"

Scene7.children.append(ROUTE1500)
ROUTE1501 = x3d.ROUTE()
ROUTE1501.fromNode = "AnimationAdapter_JinDimpler"
ROUTE1501.fromField = "value_changed"
ROUTE1501.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinDimpler"
ROUTE1501.toField = "set_weight"

Scene7.children.append(ROUTE1501)
ROUTE1502 = x3d.ROUTE()
ROUTE1502.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE1502.fromField = "value_changed"
ROUTE1502.toNode = "Upper_teeth_MorphInterpolator_JinEyesClosed"
ROUTE1502.toField = "set_weight"

Scene7.children.append(ROUTE1502)
ROUTE1503 = x3d.ROUTE()
ROUTE1503.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE1503.fromField = "value_changed"
ROUTE1503.toNode = "Left_upper_eyelid_MorphInterpolator_JinEyesClosed"
ROUTE1503.toField = "set_weight"

Scene7.children.append(ROUTE1503)
ROUTE1504 = x3d.ROUTE()
ROUTE1504.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE1504.fromField = "value_changed"
ROUTE1504.toNode = "Left_lower_eyelid_MorphInterpolator_JinEyesClosed"
ROUTE1504.toField = "set_weight"

Scene7.children.append(ROUTE1504)
ROUTE1505 = x3d.ROUTE()
ROUTE1505.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE1505.fromField = "value_changed"
ROUTE1505.toNode = "Right_lower_eyelid_MorphInterpolator_JinEyesClosed"
ROUTE1505.toField = "set_weight"

Scene7.children.append(ROUTE1505)
ROUTE1506 = x3d.ROUTE()
ROUTE1506.fromNode = "AnimationAdapter_JinEyesClosed"
ROUTE1506.fromField = "value_changed"
ROUTE1506.toNode = "Right_upper_eyelid_MorphInterpolator_JinEyesClosed"
ROUTE1506.toField = "set_weight"

Scene7.children.append(ROUTE1506)
ROUTE1507 = x3d.ROUTE()
ROUTE1507.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1507.fromField = "value_changed"
ROUTE1507.toNode = "Left_forehead_MorphInterpolator_JinInnerBrowRaiser"
ROUTE1507.toField = "set_weight"

Scene7.children.append(ROUTE1507)
ROUTE1508 = x3d.ROUTE()
ROUTE1508.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1508.fromField = "value_changed"
ROUTE1508.toNode = "Glabella_MorphInterpolator_JinInnerBrowRaiser"
ROUTE1508.toField = "set_weight"

Scene7.children.append(ROUTE1508)
ROUTE1509 = x3d.ROUTE()
ROUTE1509.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1509.fromField = "value_changed"
ROUTE1509.toNode = "Left_eyebrow_MorphInterpolator_JinInnerBrowRaiser"
ROUTE1509.toField = "set_weight"

Scene7.children.append(ROUTE1509)
ROUTE1510 = x3d.ROUTE()
ROUTE1510.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1510.fromField = "value_changed"
ROUTE1510.toNode = "Left_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser"
ROUTE1510.toField = "set_weight"

Scene7.children.append(ROUTE1510)
ROUTE1511 = x3d.ROUTE()
ROUTE1511.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1511.fromField = "value_changed"
ROUTE1511.toNode = "Right_forehead_MorphInterpolator_JinInnerBrowRaiser"
ROUTE1511.toField = "set_weight"

Scene7.children.append(ROUTE1511)
ROUTE1512 = x3d.ROUTE()
ROUTE1512.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1512.fromField = "value_changed"
ROUTE1512.toNode = "Right_eyebrow_MorphInterpolator_JinInnerBrowRaiser"
ROUTE1512.toField = "set_weight"

Scene7.children.append(ROUTE1512)
ROUTE1513 = x3d.ROUTE()
ROUTE1513.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1513.fromField = "value_changed"
ROUTE1513.toNode = "Left_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser"
ROUTE1513.toField = "set_weight"

Scene7.children.append(ROUTE1513)
ROUTE1514 = x3d.ROUTE()
ROUTE1514.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1514.fromField = "value_changed"
ROUTE1514.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser"
ROUTE1514.toField = "set_weight"

Scene7.children.append(ROUTE1514)
ROUTE1515 = x3d.ROUTE()
ROUTE1515.fromNode = "AnimationAdapter_JinInnerBrowRaiser"
ROUTE1515.fromField = "value_changed"
ROUTE1515.toNode = "Right_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser"
ROUTE1515.toField = "set_weight"

Scene7.children.append(ROUTE1515)
ROUTE1516 = x3d.ROUTE()
ROUTE1516.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE1516.fromField = "value_changed"
ROUTE1516.toNode = "Lower_teeth_MorphInterpolator_JinJawDrop"
ROUTE1516.toField = "set_weight"

Scene7.children.append(ROUTE1516)
ROUTE1517 = x3d.ROUTE()
ROUTE1517.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE1517.fromField = "value_changed"
ROUTE1517.toNode = "Occipital_scalp_MorphInterpolator_JinJawDrop"
ROUTE1517.toField = "set_weight"

Scene7.children.append(ROUTE1517)
ROUTE1518 = x3d.ROUTE()
ROUTE1518.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE1518.fromField = "value_changed"
ROUTE1518.toNode = "Chin_MorphInterpolator_JinJawDrop"
ROUTE1518.toField = "set_weight"

Scene7.children.append(ROUTE1518)
ROUTE1519 = x3d.ROUTE()
ROUTE1519.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE1519.fromField = "value_changed"
ROUTE1519.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinJawDrop"
ROUTE1519.toField = "set_weight"

Scene7.children.append(ROUTE1519)
ROUTE1520 = x3d.ROUTE()
ROUTE1520.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE1520.fromField = "value_changed"
ROUTE1520.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinJawDrop"
ROUTE1520.toField = "set_weight"

Scene7.children.append(ROUTE1520)
ROUTE1521 = x3d.ROUTE()
ROUTE1521.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE1521.fromField = "value_changed"
ROUTE1521.toNode = "Left_cheek_MorphInterpolator_JinJawDrop"
ROUTE1521.toField = "set_weight"

Scene7.children.append(ROUTE1521)
ROUTE1522 = x3d.ROUTE()
ROUTE1522.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE1522.fromField = "value_changed"
ROUTE1522.toNode = "Left_upper_eyelid_MorphInterpolator_JinJawDrop"
ROUTE1522.toField = "set_weight"

Scene7.children.append(ROUTE1522)
ROUTE1523 = x3d.ROUTE()
ROUTE1523.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE1523.fromField = "value_changed"
ROUTE1523.toNode = "Right_cheek_MorphInterpolator_JinJawDrop"
ROUTE1523.toField = "set_weight"

Scene7.children.append(ROUTE1523)
ROUTE1524 = x3d.ROUTE()
ROUTE1524.fromNode = "AnimationAdapter_JinJawDrop"
ROUTE1524.fromField = "value_changed"
ROUTE1524.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinJawDrop"
ROUTE1524.toField = "set_weight"

Scene7.children.append(ROUTE1524)
ROUTE1525 = x3d.ROUTE()
ROUTE1525.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE1525.fromField = "value_changed"
ROUTE1525.toNode = "Upper_teeth_MorphInterpolator_JinLidDroop"
ROUTE1525.toField = "set_weight"

Scene7.children.append(ROUTE1525)
ROUTE1526 = x3d.ROUTE()
ROUTE1526.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE1526.fromField = "value_changed"
ROUTE1526.toNode = "Left_upper_eyelid_MorphInterpolator_JinLidDroop"
ROUTE1526.toField = "set_weight"

Scene7.children.append(ROUTE1526)
ROUTE1527 = x3d.ROUTE()
ROUTE1527.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE1527.fromField = "value_changed"
ROUTE1527.toNode = "Left_lower_eyelid_MorphInterpolator_JinLidDroop"
ROUTE1527.toField = "set_weight"

Scene7.children.append(ROUTE1527)
ROUTE1528 = x3d.ROUTE()
ROUTE1528.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE1528.fromField = "value_changed"
ROUTE1528.toNode = "Right_lower_eyelid_MorphInterpolator_JinLidDroop"
ROUTE1528.toField = "set_weight"

Scene7.children.append(ROUTE1528)
ROUTE1529 = x3d.ROUTE()
ROUTE1529.fromNode = "AnimationAdapter_JinLidDroop"
ROUTE1529.fromField = "value_changed"
ROUTE1529.toNode = "Right_upper_eyelid_MorphInterpolator_JinLidDroop"
ROUTE1529.toField = "set_weight"

Scene7.children.append(ROUTE1529)
ROUTE1530 = x3d.ROUTE()
ROUTE1530.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE1530.fromField = "value_changed"
ROUTE1530.toNode = "Left_bulbar_conjunctiva_MorphInterpolator_JinLidTightener"
ROUTE1530.toField = "set_weight"

Scene7.children.append(ROUTE1530)
ROUTE1531 = x3d.ROUTE()
ROUTE1531.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE1531.fromField = "value_changed"
ROUTE1531.toNode = "Left_upper_eyelid_MorphInterpolator_JinLidTightener"
ROUTE1531.toField = "set_weight"

Scene7.children.append(ROUTE1531)
ROUTE1532 = x3d.ROUTE()
ROUTE1532.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE1532.fromField = "value_changed"
ROUTE1532.toNode = "Left_lower_eyelid_MorphInterpolator_JinLidTightener"
ROUTE1532.toField = "set_weight"

Scene7.children.append(ROUTE1532)
ROUTE1533 = x3d.ROUTE()
ROUTE1533.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE1533.fromField = "value_changed"
ROUTE1533.toNode = "Left_pupil_MorphInterpolator_JinLidTightener"
ROUTE1533.toField = "set_weight"

Scene7.children.append(ROUTE1533)
ROUTE1534 = x3d.ROUTE()
ROUTE1534.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE1534.fromField = "value_changed"
ROUTE1534.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinLidTightener"
ROUTE1534.toField = "set_weight"

Scene7.children.append(ROUTE1534)
ROUTE1535 = x3d.ROUTE()
ROUTE1535.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE1535.fromField = "value_changed"
ROUTE1535.toNode = "Right_lower_eyelid_MorphInterpolator_JinLidTightener"
ROUTE1535.toField = "set_weight"

Scene7.children.append(ROUTE1535)
ROUTE1536 = x3d.ROUTE()
ROUTE1536.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE1536.fromField = "value_changed"
ROUTE1536.toNode = "Right_pupil_MorphInterpolator_JinLidTightener"
ROUTE1536.toField = "set_weight"

Scene7.children.append(ROUTE1536)
ROUTE1537 = x3d.ROUTE()
ROUTE1537.fromNode = "AnimationAdapter_JinLidTightener"
ROUTE1537.fromField = "value_changed"
ROUTE1537.toNode = "Right_upper_eyelid_MorphInterpolator_JinLidTightener"
ROUTE1537.toField = "set_weight"

Scene7.children.append(ROUTE1537)
ROUTE1538 = x3d.ROUTE()
ROUTE1538.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1538.fromField = "value_changed"
ROUTE1538.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"
ROUTE1538.toField = "set_weight"

Scene7.children.append(ROUTE1538)
ROUTE1539 = x3d.ROUTE()
ROUTE1539.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1539.fromField = "value_changed"
ROUTE1539.toNode = "Neck_MorphInterpolator_JinLipCornerDepressor"
ROUTE1539.toField = "set_weight"

Scene7.children.append(ROUTE1539)
ROUTE1540 = x3d.ROUTE()
ROUTE1540.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1540.fromField = "value_changed"
ROUTE1540.toNode = "Chin_MorphInterpolator_JinLipCornerDepressor"
ROUTE1540.toField = "set_weight"

Scene7.children.append(ROUTE1540)
ROUTE1541 = x3d.ROUTE()
ROUTE1541.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1541.fromField = "value_changed"
ROUTE1541.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"
ROUTE1541.toField = "set_weight"

Scene7.children.append(ROUTE1541)
ROUTE1542 = x3d.ROUTE()
ROUTE1542.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1542.fromField = "value_changed"
ROUTE1542.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"
ROUTE1542.toField = "set_weight"

Scene7.children.append(ROUTE1542)
ROUTE1543 = x3d.ROUTE()
ROUTE1543.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1543.fromField = "value_changed"
ROUTE1543.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor"
ROUTE1543.toField = "set_weight"

Scene7.children.append(ROUTE1543)
ROUTE1544 = x3d.ROUTE()
ROUTE1544.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1544.fromField = "value_changed"
ROUTE1544.toNode = "Left_cheek_MorphInterpolator_JinLipCornerDepressor"
ROUTE1544.toField = "set_weight"

Scene7.children.append(ROUTE1544)
ROUTE1545 = x3d.ROUTE()
ROUTE1545.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1545.fromField = "value_changed"
ROUTE1545.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"
ROUTE1545.toField = "set_weight"

Scene7.children.append(ROUTE1545)
ROUTE1546 = x3d.ROUTE()
ROUTE1546.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1546.fromField = "value_changed"
ROUTE1546.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor"
ROUTE1546.toField = "set_weight"

Scene7.children.append(ROUTE1546)
ROUTE1547 = x3d.ROUTE()
ROUTE1547.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1547.fromField = "value_changed"
ROUTE1547.toNode = "Philtrum_MorphInterpolator_JinLipCornerDepressor"
ROUTE1547.toField = "set_weight"

Scene7.children.append(ROUTE1547)
ROUTE1548 = x3d.ROUTE()
ROUTE1548.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1548.fromField = "value_changed"
ROUTE1548.toNode = "Left_upper_eyelid_MorphInterpolator_JinLipCornerDepressor"
ROUTE1548.toField = "set_weight"

Scene7.children.append(ROUTE1548)
ROUTE1549 = x3d.ROUTE()
ROUTE1549.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1549.fromField = "value_changed"
ROUTE1549.toNode = "Right_cheek_MorphInterpolator_JinLipCornerDepressor"
ROUTE1549.toField = "set_weight"

Scene7.children.append(ROUTE1549)
ROUTE1550 = x3d.ROUTE()
ROUTE1550.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1550.fromField = "value_changed"
ROUTE1550.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor"
ROUTE1550.toField = "set_weight"

Scene7.children.append(ROUTE1550)
ROUTE1551 = x3d.ROUTE()
ROUTE1551.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1551.fromField = "value_changed"
ROUTE1551.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor"
ROUTE1551.toField = "set_weight"

Scene7.children.append(ROUTE1551)
ROUTE1552 = x3d.ROUTE()
ROUTE1552.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1552.fromField = "value_changed"
ROUTE1552.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"
ROUTE1552.toField = "set_weight"

Scene7.children.append(ROUTE1552)
ROUTE1553 = x3d.ROUTE()
ROUTE1553.fromNode = "AnimationAdapter_JinLipCornerDepressor"
ROUTE1553.fromField = "value_changed"
ROUTE1553.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"
ROUTE1553.toField = "set_weight"

Scene7.children.append(ROUTE1553)
ROUTE1554 = x3d.ROUTE()
ROUTE1554.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1554.fromField = "value_changed"
ROUTE1554.toNode = "Upper_teeth_MorphInterpolator_JinLipCornerPuller"
ROUTE1554.toField = "set_weight"

Scene7.children.append(ROUTE1554)
ROUTE1555 = x3d.ROUTE()
ROUTE1555.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1555.fromField = "value_changed"
ROUTE1555.toNode = "Left_cheek_MorphInterpolator_JinLipCornerPuller"
ROUTE1555.toField = "set_weight"

Scene7.children.append(ROUTE1555)
ROUTE1556 = x3d.ROUTE()
ROUTE1556.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1556.fromField = "value_changed"
ROUTE1556.toNode = "Right_cheek_MorphInterpolator_JinLipCornerPuller"
ROUTE1556.toField = "set_weight"

Scene7.children.append(ROUTE1556)
ROUTE1557 = x3d.ROUTE()
ROUTE1557.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1557.fromField = "value_changed"
ROUTE1557.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller"
ROUTE1557.toField = "set_weight"

Scene7.children.append(ROUTE1557)
ROUTE1558 = x3d.ROUTE()
ROUTE1558.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1558.fromField = "value_changed"
ROUTE1558.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller"
ROUTE1558.toField = "set_weight"

Scene7.children.append(ROUTE1558)
ROUTE1559 = x3d.ROUTE()
ROUTE1559.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1559.fromField = "value_changed"
ROUTE1559.toNode = "Chin_MorphInterpolator_JinLipCornerPuller"
ROUTE1559.toField = "set_weight"

Scene7.children.append(ROUTE1559)
ROUTE1560 = x3d.ROUTE()
ROUTE1560.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1560.fromField = "value_changed"
ROUTE1560.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller"
ROUTE1560.toField = "set_weight"

Scene7.children.append(ROUTE1560)
ROUTE1561 = x3d.ROUTE()
ROUTE1561.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1561.fromField = "value_changed"
ROUTE1561.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller"
ROUTE1561.toField = "set_weight"

Scene7.children.append(ROUTE1561)
ROUTE1562 = x3d.ROUTE()
ROUTE1562.fromNode = "AnimationAdapter_JinLipCornerPuller"
ROUTE1562.fromField = "value_changed"
ROUTE1562.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerPuller"
ROUTE1562.toField = "set_weight"

Scene7.children.append(ROUTE1562)
ROUTE1563 = x3d.ROUTE()
ROUTE1563.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1563.fromField = "value_changed"
ROUTE1563.toNode = "Upper_teeth_MorphInterpolator_JinLipFunneler"
ROUTE1563.toField = "set_weight"

Scene7.children.append(ROUTE1563)
ROUTE1564 = x3d.ROUTE()
ROUTE1564.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1564.fromField = "value_changed"
ROUTE1564.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"
ROUTE1564.toField = "set_weight"

Scene7.children.append(ROUTE1564)
ROUTE1565 = x3d.ROUTE()
ROUTE1565.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1565.fromField = "value_changed"
ROUTE1565.toNode = "Chin_MorphInterpolator_JinLipFunneler"
ROUTE1565.toField = "set_weight"

Scene7.children.append(ROUTE1565)
ROUTE1566 = x3d.ROUTE()
ROUTE1566.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1566.fromField = "value_changed"
ROUTE1566.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"
ROUTE1566.toField = "set_weight"

Scene7.children.append(ROUTE1566)
ROUTE1567 = x3d.ROUTE()
ROUTE1567.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1567.fromField = "value_changed"
ROUTE1567.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"
ROUTE1567.toField = "set_weight"

Scene7.children.append(ROUTE1567)
ROUTE1568 = x3d.ROUTE()
ROUTE1568.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1568.fromField = "value_changed"
ROUTE1568.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipFunneler"
ROUTE1568.toField = "set_weight"

Scene7.children.append(ROUTE1568)
ROUTE1569 = x3d.ROUTE()
ROUTE1569.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1569.fromField = "value_changed"
ROUTE1569.toNode = "Left_cheek_MorphInterpolator_JinLipFunneler"
ROUTE1569.toField = "set_weight"

Scene7.children.append(ROUTE1569)
ROUTE1570 = x3d.ROUTE()
ROUTE1570.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1570.fromField = "value_changed"
ROUTE1570.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"
ROUTE1570.toField = "set_weight"

Scene7.children.append(ROUTE1570)
ROUTE1571 = x3d.ROUTE()
ROUTE1571.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1571.fromField = "value_changed"
ROUTE1571.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler"
ROUTE1571.toField = "set_weight"

Scene7.children.append(ROUTE1571)
ROUTE1572 = x3d.ROUTE()
ROUTE1572.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1572.fromField = "value_changed"
ROUTE1572.toNode = "Philtrum_MorphInterpolator_JinLipFunneler"
ROUTE1572.toField = "set_weight"

Scene7.children.append(ROUTE1572)
ROUTE1573 = x3d.ROUTE()
ROUTE1573.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1573.fromField = "value_changed"
ROUTE1573.toNode = "Right_cheek_MorphInterpolator_JinLipFunneler"
ROUTE1573.toField = "set_weight"

Scene7.children.append(ROUTE1573)
ROUTE1574 = x3d.ROUTE()
ROUTE1574.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1574.fromField = "value_changed"
ROUTE1574.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipFunneler"
ROUTE1574.toField = "set_weight"

Scene7.children.append(ROUTE1574)
ROUTE1575 = x3d.ROUTE()
ROUTE1575.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1575.fromField = "value_changed"
ROUTE1575.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler"
ROUTE1575.toField = "set_weight"

Scene7.children.append(ROUTE1575)
ROUTE1576 = x3d.ROUTE()
ROUTE1576.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1576.fromField = "value_changed"
ROUTE1576.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"
ROUTE1576.toField = "set_weight"

Scene7.children.append(ROUTE1576)
ROUTE1577 = x3d.ROUTE()
ROUTE1577.fromNode = "AnimationAdapter_JinLipFunneler"
ROUTE1577.fromField = "value_changed"
ROUTE1577.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"
ROUTE1577.toField = "set_weight"

Scene7.children.append(ROUTE1577)
ROUTE1578 = x3d.ROUTE()
ROUTE1578.fromNode = "AnimationAdapter_JinLipPressor"
ROUTE1578.fromField = "value_changed"
ROUTE1578.toNode = "Chin_MorphInterpolator_JinLipPressor"
ROUTE1578.toField = "set_weight"

Scene7.children.append(ROUTE1578)
ROUTE1579 = x3d.ROUTE()
ROUTE1579.fromNode = "AnimationAdapter_JinLipPressor"
ROUTE1579.fromField = "value_changed"
ROUTE1579.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipPressor"
ROUTE1579.toField = "set_weight"

Scene7.children.append(ROUTE1579)
ROUTE1580 = x3d.ROUTE()
ROUTE1580.fromNode = "AnimationAdapter_JinLipPressor"
ROUTE1580.fromField = "value_changed"
ROUTE1580.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipPressor"
ROUTE1580.toField = "set_weight"

Scene7.children.append(ROUTE1580)
ROUTE1581 = x3d.ROUTE()
ROUTE1581.fromNode = "AnimationAdapter_JinLipPressor"
ROUTE1581.fromField = "value_changed"
ROUTE1581.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipPressor"
ROUTE1581.toField = "set_weight"

Scene7.children.append(ROUTE1581)
ROUTE1582 = x3d.ROUTE()
ROUTE1582.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1582.fromField = "value_changed"
ROUTE1582.toNode = "Lower_teeth_MorphInterpolator_JinLipPuckerer"
ROUTE1582.toField = "set_weight"

Scene7.children.append(ROUTE1582)
ROUTE1583 = x3d.ROUTE()
ROUTE1583.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1583.fromField = "value_changed"
ROUTE1583.toNode = "Tongue_MorphInterpolator_JinLipPuckerer"
ROUTE1583.toField = "set_weight"

Scene7.children.append(ROUTE1583)
ROUTE1584 = x3d.ROUTE()
ROUTE1584.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1584.fromField = "value_changed"
ROUTE1584.toNode = "Upper_teeth_MorphInterpolator_JinLipPuckerer"
ROUTE1584.toField = "set_weight"

Scene7.children.append(ROUTE1584)
ROUTE1585 = x3d.ROUTE()
ROUTE1585.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1585.fromField = "value_changed"
ROUTE1585.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"
ROUTE1585.toField = "set_weight"

Scene7.children.append(ROUTE1585)
ROUTE1586 = x3d.ROUTE()
ROUTE1586.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1586.fromField = "value_changed"
ROUTE1586.toNode = "Chin_MorphInterpolator_JinLipPuckerer"
ROUTE1586.toField = "set_weight"

Scene7.children.append(ROUTE1586)
ROUTE1587 = x3d.ROUTE()
ROUTE1587.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1587.fromField = "value_changed"
ROUTE1587.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"
ROUTE1587.toField = "set_weight"

Scene7.children.append(ROUTE1587)
ROUTE1588 = x3d.ROUTE()
ROUTE1588.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1588.fromField = "value_changed"
ROUTE1588.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"
ROUTE1588.toField = "set_weight"

Scene7.children.append(ROUTE1588)
ROUTE1589 = x3d.ROUTE()
ROUTE1589.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1589.fromField = "value_changed"
ROUTE1589.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipPuckerer"
ROUTE1589.toField = "set_weight"

Scene7.children.append(ROUTE1589)
ROUTE1590 = x3d.ROUTE()
ROUTE1590.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1590.fromField = "value_changed"
ROUTE1590.toNode = "Left_cheek_MorphInterpolator_JinLipPuckerer"
ROUTE1590.toField = "set_weight"

Scene7.children.append(ROUTE1590)
ROUTE1591 = x3d.ROUTE()
ROUTE1591.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1591.fromField = "value_changed"
ROUTE1591.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"
ROUTE1591.toField = "set_weight"

Scene7.children.append(ROUTE1591)
ROUTE1592 = x3d.ROUTE()
ROUTE1592.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1592.fromField = "value_changed"
ROUTE1592.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer"
ROUTE1592.toField = "set_weight"

Scene7.children.append(ROUTE1592)
ROUTE1593 = x3d.ROUTE()
ROUTE1593.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1593.fromField = "value_changed"
ROUTE1593.toNode = "Philtrum_MorphInterpolator_JinLipPuckerer"
ROUTE1593.toField = "set_weight"

Scene7.children.append(ROUTE1593)
ROUTE1594 = x3d.ROUTE()
ROUTE1594.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1594.fromField = "value_changed"
ROUTE1594.toNode = "Right_cheek_MorphInterpolator_JinLipPuckerer"
ROUTE1594.toField = "set_weight"

Scene7.children.append(ROUTE1594)
ROUTE1595 = x3d.ROUTE()
ROUTE1595.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1595.fromField = "value_changed"
ROUTE1595.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipPuckerer"
ROUTE1595.toField = "set_weight"

Scene7.children.append(ROUTE1595)
ROUTE1596 = x3d.ROUTE()
ROUTE1596.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1596.fromField = "value_changed"
ROUTE1596.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer"
ROUTE1596.toField = "set_weight"

Scene7.children.append(ROUTE1596)
ROUTE1597 = x3d.ROUTE()
ROUTE1597.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1597.fromField = "value_changed"
ROUTE1597.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"
ROUTE1597.toField = "set_weight"

Scene7.children.append(ROUTE1597)
ROUTE1598 = x3d.ROUTE()
ROUTE1598.fromNode = "AnimationAdapter_JinLipPuckerer"
ROUTE1598.fromField = "value_changed"
ROUTE1598.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"
ROUTE1598.toField = "set_weight"

Scene7.children.append(ROUTE1598)
ROUTE1599 = x3d.ROUTE()
ROUTE1599.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE1599.fromField = "value_changed"
ROUTE1599.toNode = "Upper_teeth_MorphInterpolator_JinLipsPart"
ROUTE1599.toField = "set_weight"

Scene7.children.append(ROUTE1599)
ROUTE1600 = x3d.ROUTE()
ROUTE1600.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE1600.fromField = "value_changed"
ROUTE1600.toNode = "Chin_MorphInterpolator_JinLipsPart"
ROUTE1600.toField = "set_weight"

Scene7.children.append(ROUTE1600)
ROUTE1601 = x3d.ROUTE()
ROUTE1601.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE1601.fromField = "value_changed"
ROUTE1601.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipsPart"
ROUTE1601.toField = "set_weight"

Scene7.children.append(ROUTE1601)
ROUTE1602 = x3d.ROUTE()
ROUTE1602.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE1602.fromField = "value_changed"
ROUTE1602.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipsPart"
ROUTE1602.toField = "set_weight"

Scene7.children.append(ROUTE1602)
ROUTE1603 = x3d.ROUTE()
ROUTE1603.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE1603.fromField = "value_changed"
ROUTE1603.toNode = "Left_cheek_MorphInterpolator_JinLipsPart"
ROUTE1603.toField = "set_weight"

Scene7.children.append(ROUTE1603)
ROUTE1604 = x3d.ROUTE()
ROUTE1604.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE1604.fromField = "value_changed"
ROUTE1604.toNode = "Right_cheek_MorphInterpolator_JinLipsPart"
ROUTE1604.toField = "set_weight"

Scene7.children.append(ROUTE1604)
ROUTE1605 = x3d.ROUTE()
ROUTE1605.fromNode = "AnimationAdapter_JinLipsPart"
ROUTE1605.fromField = "value_changed"
ROUTE1605.toNode = "__4_MorphInterpolator_JinLipsPart"
ROUTE1605.toField = "set_weight"

Scene7.children.append(ROUTE1605)
ROUTE1606 = x3d.ROUTE()
ROUTE1606.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1606.fromField = "value_changed"
ROUTE1606.toNode = "Lower_teeth_MorphInterpolator_JinLipStretcher"
ROUTE1606.toField = "set_weight"

Scene7.children.append(ROUTE1606)
ROUTE1607 = x3d.ROUTE()
ROUTE1607.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1607.fromField = "value_changed"
ROUTE1607.toNode = "Neck_MorphInterpolator_JinLipStretcher"
ROUTE1607.toField = "set_weight"

Scene7.children.append(ROUTE1607)
ROUTE1608 = x3d.ROUTE()
ROUTE1608.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1608.fromField = "value_changed"
ROUTE1608.toNode = "Chin_MorphInterpolator_JinLipStretcher"
ROUTE1608.toField = "set_weight"

Scene7.children.append(ROUTE1608)
ROUTE1609 = x3d.ROUTE()
ROUTE1609.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1609.fromField = "value_changed"
ROUTE1609.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipStretcher"
ROUTE1609.toField = "set_weight"

Scene7.children.append(ROUTE1609)
ROUTE1610 = x3d.ROUTE()
ROUTE1610.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1610.fromField = "value_changed"
ROUTE1610.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipStretcher"
ROUTE1610.toField = "set_weight"

Scene7.children.append(ROUTE1610)
ROUTE1611 = x3d.ROUTE()
ROUTE1611.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1611.fromField = "value_changed"
ROUTE1611.toNode = "Left_cheek_MorphInterpolator_JinLipStretcher"
ROUTE1611.toField = "set_weight"

Scene7.children.append(ROUTE1611)
ROUTE1612 = x3d.ROUTE()
ROUTE1612.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1612.fromField = "value_changed"
ROUTE1612.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipStretcher"
ROUTE1612.toField = "set_weight"

Scene7.children.append(ROUTE1612)
ROUTE1613 = x3d.ROUTE()
ROUTE1613.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1613.fromField = "value_changed"
ROUTE1613.toNode = "Right_cheek_MorphInterpolator_JinLipStretcher"
ROUTE1613.toField = "set_weight"

Scene7.children.append(ROUTE1613)
ROUTE1614 = x3d.ROUTE()
ROUTE1614.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1614.fromField = "value_changed"
ROUTE1614.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipStretcher"
ROUTE1614.toField = "set_weight"

Scene7.children.append(ROUTE1614)
ROUTE1615 = x3d.ROUTE()
ROUTE1615.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1615.fromField = "value_changed"
ROUTE1615.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipStretcher"
ROUTE1615.toField = "set_weight"

Scene7.children.append(ROUTE1615)
ROUTE1616 = x3d.ROUTE()
ROUTE1616.fromNode = "AnimationAdapter_JinLipStretcher"
ROUTE1616.fromField = "value_changed"
ROUTE1616.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipStretcher"
ROUTE1616.toField = "set_weight"

Scene7.children.append(ROUTE1616)
ROUTE1617 = x3d.ROUTE()
ROUTE1617.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1617.fromField = "value_changed"
ROUTE1617.toNode = "Upper_teeth_MorphInterpolator_JinLipSuck"
ROUTE1617.toField = "set_weight"

Scene7.children.append(ROUTE1617)
ROUTE1618 = x3d.ROUTE()
ROUTE1618.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1618.fromField = "value_changed"
ROUTE1618.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipSuck"
ROUTE1618.toField = "set_weight"

Scene7.children.append(ROUTE1618)
ROUTE1619 = x3d.ROUTE()
ROUTE1619.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1619.fromField = "value_changed"
ROUTE1619.toNode = "Chin_MorphInterpolator_JinLipSuck"
ROUTE1619.toField = "set_weight"

Scene7.children.append(ROUTE1619)
ROUTE1620 = x3d.ROUTE()
ROUTE1620.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1620.fromField = "value_changed"
ROUTE1620.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipSuck"
ROUTE1620.toField = "set_weight"

Scene7.children.append(ROUTE1620)
ROUTE1621 = x3d.ROUTE()
ROUTE1621.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1621.fromField = "value_changed"
ROUTE1621.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipSuck"
ROUTE1621.toField = "set_weight"

Scene7.children.append(ROUTE1621)
ROUTE1622 = x3d.ROUTE()
ROUTE1622.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1622.fromField = "value_changed"
ROUTE1622.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipSuck"
ROUTE1622.toField = "set_weight"

Scene7.children.append(ROUTE1622)
ROUTE1623 = x3d.ROUTE()
ROUTE1623.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1623.fromField = "value_changed"
ROUTE1623.toNode = "Left_cheek_MorphInterpolator_JinLipSuck"
ROUTE1623.toField = "set_weight"

Scene7.children.append(ROUTE1623)
ROUTE1624 = x3d.ROUTE()
ROUTE1624.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1624.fromField = "value_changed"
ROUTE1624.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipSuck"
ROUTE1624.toField = "set_weight"

Scene7.children.append(ROUTE1624)
ROUTE1625 = x3d.ROUTE()
ROUTE1625.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1625.fromField = "value_changed"
ROUTE1625.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipSuck"
ROUTE1625.toField = "set_weight"

Scene7.children.append(ROUTE1625)
ROUTE1626 = x3d.ROUTE()
ROUTE1626.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1626.fromField = "value_changed"
ROUTE1626.toNode = "Philtrum_MorphInterpolator_JinLipSuck"
ROUTE1626.toField = "set_weight"

Scene7.children.append(ROUTE1626)
ROUTE1627 = x3d.ROUTE()
ROUTE1627.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1627.fromField = "value_changed"
ROUTE1627.toNode = "Right_cheek_MorphInterpolator_JinLipSuck"
ROUTE1627.toField = "set_weight"

Scene7.children.append(ROUTE1627)
ROUTE1628 = x3d.ROUTE()
ROUTE1628.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1628.fromField = "value_changed"
ROUTE1628.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipSuck"
ROUTE1628.toField = "set_weight"

Scene7.children.append(ROUTE1628)
ROUTE1629 = x3d.ROUTE()
ROUTE1629.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1629.fromField = "value_changed"
ROUTE1629.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipSuck"
ROUTE1629.toField = "set_weight"

Scene7.children.append(ROUTE1629)
ROUTE1630 = x3d.ROUTE()
ROUTE1630.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1630.fromField = "value_changed"
ROUTE1630.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipSuck"
ROUTE1630.toField = "set_weight"

Scene7.children.append(ROUTE1630)
ROUTE1631 = x3d.ROUTE()
ROUTE1631.fromNode = "AnimationAdapter_JinLipSuck"
ROUTE1631.fromField = "value_changed"
ROUTE1631.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipSuck"
ROUTE1631.toField = "set_weight"

Scene7.children.append(ROUTE1631)
ROUTE1632 = x3d.ROUTE()
ROUTE1632.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1632.fromField = "value_changed"
ROUTE1632.toNode = "Upper_teeth_MorphInterpolator_JinLipTightener"
ROUTE1632.toField = "set_weight"

Scene7.children.append(ROUTE1632)
ROUTE1633 = x3d.ROUTE()
ROUTE1633.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1633.fromField = "value_changed"
ROUTE1633.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinLipTightener"
ROUTE1633.toField = "set_weight"

Scene7.children.append(ROUTE1633)
ROUTE1634 = x3d.ROUTE()
ROUTE1634.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1634.fromField = "value_changed"
ROUTE1634.toNode = "Chin_MorphInterpolator_JinLipTightener"
ROUTE1634.toField = "set_weight"

Scene7.children.append(ROUTE1634)
ROUTE1635 = x3d.ROUTE()
ROUTE1635.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1635.fromField = "value_changed"
ROUTE1635.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLipTightener"
ROUTE1635.toField = "set_weight"

Scene7.children.append(ROUTE1635)
ROUTE1636 = x3d.ROUTE()
ROUTE1636.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1636.fromField = "value_changed"
ROUTE1636.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLipTightener"
ROUTE1636.toField = "set_weight"

Scene7.children.append(ROUTE1636)
ROUTE1637 = x3d.ROUTE()
ROUTE1637.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1637.fromField = "value_changed"
ROUTE1637.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinLipTightener"
ROUTE1637.toField = "set_weight"

Scene7.children.append(ROUTE1637)
ROUTE1638 = x3d.ROUTE()
ROUTE1638.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1638.fromField = "value_changed"
ROUTE1638.toNode = "Left_cheek_MorphInterpolator_JinLipTightener"
ROUTE1638.toField = "set_weight"

Scene7.children.append(ROUTE1638)
ROUTE1639 = x3d.ROUTE()
ROUTE1639.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1639.fromField = "value_changed"
ROUTE1639.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinLipTightener"
ROUTE1639.toField = "set_weight"

Scene7.children.append(ROUTE1639)
ROUTE1640 = x3d.ROUTE()
ROUTE1640.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1640.fromField = "value_changed"
ROUTE1640.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinLipTightener"
ROUTE1640.toField = "set_weight"

Scene7.children.append(ROUTE1640)
ROUTE1641 = x3d.ROUTE()
ROUTE1641.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1641.fromField = "value_changed"
ROUTE1641.toNode = "Philtrum_MorphInterpolator_JinLipTightener"
ROUTE1641.toField = "set_weight"

Scene7.children.append(ROUTE1641)
ROUTE1642 = x3d.ROUTE()
ROUTE1642.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1642.fromField = "value_changed"
ROUTE1642.toNode = "Right_cheek_MorphInterpolator_JinLipTightener"
ROUTE1642.toField = "set_weight"

Scene7.children.append(ROUTE1642)
ROUTE1643 = x3d.ROUTE()
ROUTE1643.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1643.fromField = "value_changed"
ROUTE1643.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinLipTightener"
ROUTE1643.toField = "set_weight"

Scene7.children.append(ROUTE1643)
ROUTE1644 = x3d.ROUTE()
ROUTE1644.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1644.fromField = "value_changed"
ROUTE1644.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinLipTightener"
ROUTE1644.toField = "set_weight"

Scene7.children.append(ROUTE1644)
ROUTE1645 = x3d.ROUTE()
ROUTE1645.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1645.fromField = "value_changed"
ROUTE1645.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinLipTightener"
ROUTE1645.toField = "set_weight"

Scene7.children.append(ROUTE1645)
ROUTE1646 = x3d.ROUTE()
ROUTE1646.fromNode = "AnimationAdapter_JinLipTightener"
ROUTE1646.fromField = "value_changed"
ROUTE1646.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLipTightener"
ROUTE1646.toField = "set_weight"

Scene7.children.append(ROUTE1646)
ROUTE1647 = x3d.ROUTE()
ROUTE1647.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1647.fromField = "value_changed"
ROUTE1647.toNode = "Lower_teeth_MorphInterpolator_JinLowerLipDepressor"
ROUTE1647.toField = "set_weight"

Scene7.children.append(ROUTE1647)
ROUTE1648 = x3d.ROUTE()
ROUTE1648.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1648.fromField = "value_changed"
ROUTE1648.toNode = "Neck_MorphInterpolator_JinLowerLipDepressor"
ROUTE1648.toField = "set_weight"

Scene7.children.append(ROUTE1648)
ROUTE1649 = x3d.ROUTE()
ROUTE1649.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1649.fromField = "value_changed"
ROUTE1649.toNode = "Chin_MorphInterpolator_JinLowerLipDepressor"
ROUTE1649.toField = "set_weight"

Scene7.children.append(ROUTE1649)
ROUTE1650 = x3d.ROUTE()
ROUTE1650.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1650.fromField = "value_changed"
ROUTE1650.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"
ROUTE1650.toField = "set_weight"

Scene7.children.append(ROUTE1650)
ROUTE1651 = x3d.ROUTE()
ROUTE1651.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1651.fromField = "value_changed"
ROUTE1651.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"
ROUTE1651.toField = "set_weight"

Scene7.children.append(ROUTE1651)
ROUTE1652 = x3d.ROUTE()
ROUTE1652.fromNode = "AnimationAdapter_JinLowerLipDepressor"
ROUTE1652.fromField = "value_changed"
ROUTE1652.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"
ROUTE1652.toField = "set_weight"

Scene7.children.append(ROUTE1652)
ROUTE1653 = x3d.ROUTE()
ROUTE1653.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1653.fromField = "value_changed"
ROUTE1653.toNode = "Lower_teeth_MorphInterpolator_JinMouthStretch"
ROUTE1653.toField = "set_weight"

Scene7.children.append(ROUTE1653)
ROUTE1654 = x3d.ROUTE()
ROUTE1654.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1654.fromField = "value_changed"
ROUTE1654.toNode = "Tongue_MorphInterpolator_JinMouthStretch"
ROUTE1654.toField = "set_weight"

Scene7.children.append(ROUTE1654)
ROUTE1655 = x3d.ROUTE()
ROUTE1655.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1655.fromField = "value_changed"
ROUTE1655.toNode = "Upper_teeth_MorphInterpolator_JinMouthStretch"
ROUTE1655.toField = "set_weight"

Scene7.children.append(ROUTE1655)
ROUTE1656 = x3d.ROUTE()
ROUTE1656.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1656.fromField = "value_changed"
ROUTE1656.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"
ROUTE1656.toField = "set_weight"

Scene7.children.append(ROUTE1656)
ROUTE1657 = x3d.ROUTE()
ROUTE1657.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1657.fromField = "value_changed"
ROUTE1657.toNode = "Chin_MorphInterpolator_JinMouthStretch"
ROUTE1657.toField = "set_weight"

Scene7.children.append(ROUTE1657)
ROUTE1658 = x3d.ROUTE()
ROUTE1658.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1658.fromField = "value_changed"
ROUTE1658.toNode = "Left_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"
ROUTE1658.toField = "set_weight"

Scene7.children.append(ROUTE1658)
ROUTE1659 = x3d.ROUTE()
ROUTE1659.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1659.fromField = "value_changed"
ROUTE1659.toNode = "Center_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"
ROUTE1659.toField = "set_weight"

Scene7.children.append(ROUTE1659)
ROUTE1660 = x3d.ROUTE()
ROUTE1660.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1660.fromField = "value_changed"
ROUTE1660.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinMouthStretch"
ROUTE1660.toField = "set_weight"

Scene7.children.append(ROUTE1660)
ROUTE1661 = x3d.ROUTE()
ROUTE1661.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1661.fromField = "value_changed"
ROUTE1661.toNode = "Left_cheek_MorphInterpolator_JinMouthStretch"
ROUTE1661.toField = "set_weight"

Scene7.children.append(ROUTE1661)
ROUTE1662 = x3d.ROUTE()
ROUTE1662.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1662.fromField = "value_changed"
ROUTE1662.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"
ROUTE1662.toField = "set_weight"

Scene7.children.append(ROUTE1662)
ROUTE1663 = x3d.ROUTE()
ROUTE1663.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1663.fromField = "value_changed"
ROUTE1663.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch"
ROUTE1663.toField = "set_weight"

Scene7.children.append(ROUTE1663)
ROUTE1664 = x3d.ROUTE()
ROUTE1664.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1664.fromField = "value_changed"
ROUTE1664.toNode = "Philtrum_MorphInterpolator_JinMouthStretch"
ROUTE1664.toField = "set_weight"

Scene7.children.append(ROUTE1664)
ROUTE1665 = x3d.ROUTE()
ROUTE1665.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1665.fromField = "value_changed"
ROUTE1665.toNode = "Right_cheek_MorphInterpolator_JinMouthStretch"
ROUTE1665.toField = "set_weight"

Scene7.children.append(ROUTE1665)
ROUTE1666 = x3d.ROUTE()
ROUTE1666.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1666.fromField = "value_changed"
ROUTE1666.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinMouthStretch"
ROUTE1666.toField = "set_weight"

Scene7.children.append(ROUTE1666)
ROUTE1667 = x3d.ROUTE()
ROUTE1667.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1667.fromField = "value_changed"
ROUTE1667.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch"
ROUTE1667.toField = "set_weight"

Scene7.children.append(ROUTE1667)
ROUTE1668 = x3d.ROUTE()
ROUTE1668.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1668.fromField = "value_changed"
ROUTE1668.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"
ROUTE1668.toField = "set_weight"

Scene7.children.append(ROUTE1668)
ROUTE1669 = x3d.ROUTE()
ROUTE1669.fromNode = "AnimationAdapter_JinMouthStretch"
ROUTE1669.fromField = "value_changed"
ROUTE1669.toNode = "Right_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"
ROUTE1669.toField = "set_weight"

Scene7.children.append(ROUTE1669)
ROUTE1670 = x3d.ROUTE()
ROUTE1670.fromNode = "AnimationAdapter_JinNasolabialDeepener"
ROUTE1670.fromField = "value_changed"
ROUTE1670.toNode = "Nasal_tip_MorphInterpolator_JinNasolabialDeepener"
ROUTE1670.toField = "set_weight"

Scene7.children.append(ROUTE1670)
ROUTE1671 = x3d.ROUTE()
ROUTE1671.fromNode = "AnimationAdapter_JinNasolabialDeepener"
ROUTE1671.fromField = "value_changed"
ROUTE1671.toNode = "Left_nostril_MorphInterpolator_JinNasolabialDeepener"
ROUTE1671.toField = "set_weight"

Scene7.children.append(ROUTE1671)
ROUTE1672 = x3d.ROUTE()
ROUTE1672.fromNode = "AnimationAdapter_JinNasolabialDeepener"
ROUTE1672.fromField = "value_changed"
ROUTE1672.toNode = "Right_nostril_MorphInterpolator_JinNasolabialDeepener"
ROUTE1672.toField = "set_weight"

Scene7.children.append(ROUTE1672)
ROUTE1673 = x3d.ROUTE()
ROUTE1673.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1673.fromField = "value_changed"
ROUTE1673.toNode = "Upper_teeth_MorphInterpolator_JinNoseWrinkler"
ROUTE1673.toField = "set_weight"

Scene7.children.append(ROUTE1673)
ROUTE1674 = x3d.ROUTE()
ROUTE1674.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1674.fromField = "value_changed"
ROUTE1674.toNode = "Left_nostril_MorphInterpolator_JinNoseWrinkler"
ROUTE1674.toField = "set_weight"

Scene7.children.append(ROUTE1674)
ROUTE1675 = x3d.ROUTE()
ROUTE1675.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1675.fromField = "value_changed"
ROUTE1675.toNode = "Left_dorsum_MorphInterpolator_JinNoseWrinkler"
ROUTE1675.toField = "set_weight"

Scene7.children.append(ROUTE1675)
ROUTE1676 = x3d.ROUTE()
ROUTE1676.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1676.fromField = "value_changed"
ROUTE1676.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler"
ROUTE1676.toField = "set_weight"

Scene7.children.append(ROUTE1676)
ROUTE1677 = x3d.ROUTE()
ROUTE1677.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1677.fromField = "value_changed"
ROUTE1677.toNode = "Left_cheek_MorphInterpolator_JinNoseWrinkler"
ROUTE1677.toField = "set_weight"

Scene7.children.append(ROUTE1677)
ROUTE1678 = x3d.ROUTE()
ROUTE1678.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1678.fromField = "value_changed"
ROUTE1678.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler"
ROUTE1678.toField = "set_weight"

Scene7.children.append(ROUTE1678)
ROUTE1679 = x3d.ROUTE()
ROUTE1679.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1679.fromField = "value_changed"
ROUTE1679.toNode = "Right_cheek_MorphInterpolator_JinNoseWrinkler"
ROUTE1679.toField = "set_weight"

Scene7.children.append(ROUTE1679)
ROUTE1680 = x3d.ROUTE()
ROUTE1680.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1680.fromField = "value_changed"
ROUTE1680.toNode = "Right_dorsum_MorphInterpolator_JinNoseWrinkler"
ROUTE1680.toField = "set_weight"

Scene7.children.append(ROUTE1680)
ROUTE1681 = x3d.ROUTE()
ROUTE1681.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1681.fromField = "value_changed"
ROUTE1681.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler"
ROUTE1681.toField = "set_weight"

Scene7.children.append(ROUTE1681)
ROUTE1682 = x3d.ROUTE()
ROUTE1682.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1682.fromField = "value_changed"
ROUTE1682.toNode = "Right_nostril_MorphInterpolator_JinNoseWrinkler"
ROUTE1682.toField = "set_weight"

Scene7.children.append(ROUTE1682)
ROUTE1683 = x3d.ROUTE()
ROUTE1683.fromNode = "AnimationAdapter_JinNoseWrinkler"
ROUTE1683.fromField = "value_changed"
ROUTE1683.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler"
ROUTE1683.toField = "set_weight"

Scene7.children.append(ROUTE1683)
ROUTE1684 = x3d.ROUTE()
ROUTE1684.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1684.fromField = "value_changed"
ROUTE1684.toNode = "Right_forehead_MorphInterpolator_JinOuterBrowRaiser"
ROUTE1684.toField = "set_weight"

Scene7.children.append(ROUTE1684)
ROUTE1685 = x3d.ROUTE()
ROUTE1685.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1685.fromField = "value_changed"
ROUTE1685.toNode = "Right_eyebrow_MorphInterpolator_JinOuterBrowRaiser"
ROUTE1685.toField = "set_weight"

Scene7.children.append(ROUTE1685)
ROUTE1686 = x3d.ROUTE()
ROUTE1686.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1686.fromField = "value_changed"
ROUTE1686.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinOuterBrowRaiser"
ROUTE1686.toField = "set_weight"

Scene7.children.append(ROUTE1686)
ROUTE1687 = x3d.ROUTE()
ROUTE1687.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1687.fromField = "value_changed"
ROUTE1687.toNode = "Right_temple_MorphInterpolator_JinOuterBrowRaiser"
ROUTE1687.toField = "set_weight"

Scene7.children.append(ROUTE1687)
ROUTE1688 = x3d.ROUTE()
ROUTE1688.fromNode = "AnimationAdapter_JinOuterBrowRaiser"
ROUTE1688.fromField = "value_changed"
ROUTE1688.toNode = "Right_upper_eyelid_MorphInterpolator_JinOuterBrowRaiser"
ROUTE1688.toField = "set_weight"

Scene7.children.append(ROUTE1688)
ROUTE1689 = x3d.ROUTE()
ROUTE1689.fromNode = "AnimationAdapter_JinSlit"
ROUTE1689.fromField = "value_changed"
ROUTE1689.toNode = "Upper_teeth_MorphInterpolator_JinSlit"
ROUTE1689.toField = "set_weight"

Scene7.children.append(ROUTE1689)
ROUTE1690 = x3d.ROUTE()
ROUTE1690.fromNode = "AnimationAdapter_JinSlit"
ROUTE1690.fromField = "value_changed"
ROUTE1690.toNode = "Left_upper_eyelid_MorphInterpolator_JinSlit"
ROUTE1690.toField = "set_weight"

Scene7.children.append(ROUTE1690)
ROUTE1691 = x3d.ROUTE()
ROUTE1691.fromNode = "AnimationAdapter_JinSlit"
ROUTE1691.fromField = "value_changed"
ROUTE1691.toNode = "Right_upper_eyelid_MorphInterpolator_JinSlit"
ROUTE1691.toField = "set_weight"

Scene7.children.append(ROUTE1691)
ROUTE1692 = x3d.ROUTE()
ROUTE1692.fromNode = "AnimationAdapter_JinSquint"
ROUTE1692.fromField = "value_changed"
ROUTE1692.toNode = "Left_eyebrow_MorphInterpolator_JinSquint"
ROUTE1692.toField = "set_weight"

Scene7.children.append(ROUTE1692)
ROUTE1693 = x3d.ROUTE()
ROUTE1693.fromNode = "AnimationAdapter_JinSquint"
ROUTE1693.fromField = "value_changed"
ROUTE1693.toNode = "Left_temple_MorphInterpolator_JinSquint"
ROUTE1693.toField = "set_weight"

Scene7.children.append(ROUTE1693)
ROUTE1694 = x3d.ROUTE()
ROUTE1694.fromNode = "AnimationAdapter_JinSquint"
ROUTE1694.fromField = "value_changed"
ROUTE1694.toNode = "Right_eyebrow_MorphInterpolator_JinSquint"
ROUTE1694.toField = "set_weight"

Scene7.children.append(ROUTE1694)
ROUTE1695 = x3d.ROUTE()
ROUTE1695.fromNode = "AnimationAdapter_JinSquint"
ROUTE1695.fromField = "value_changed"
ROUTE1695.toNode = "Left_upper_eyelid_MorphInterpolator_JinSquint"
ROUTE1695.toField = "set_weight"

Scene7.children.append(ROUTE1695)
ROUTE1696 = x3d.ROUTE()
ROUTE1696.fromNode = "AnimationAdapter_JinSquint"
ROUTE1696.fromField = "value_changed"
ROUTE1696.toNode = "Left_lower_eyelid_MorphInterpolator_JinSquint"
ROUTE1696.toField = "set_weight"

Scene7.children.append(ROUTE1696)
ROUTE1697 = x3d.ROUTE()
ROUTE1697.fromNode = "AnimationAdapter_JinSquint"
ROUTE1697.fromField = "value_changed"
ROUTE1697.toNode = "Right_lower_eyelid_MorphInterpolator_JinSquint"
ROUTE1697.toField = "set_weight"

Scene7.children.append(ROUTE1697)
ROUTE1698 = x3d.ROUTE()
ROUTE1698.fromNode = "AnimationAdapter_JinSquint"
ROUTE1698.fromField = "value_changed"
ROUTE1698.toNode = "Right_temple_MorphInterpolator_JinSquint"
ROUTE1698.toField = "set_weight"

Scene7.children.append(ROUTE1698)
ROUTE1699 = x3d.ROUTE()
ROUTE1699.fromNode = "AnimationAdapter_JinSquint"
ROUTE1699.fromField = "value_changed"
ROUTE1699.toNode = "Right_upper_eyelid_MorphInterpolator_JinSquint"
ROUTE1699.toField = "set_weight"

Scene7.children.append(ROUTE1699)
ROUTE1700 = x3d.ROUTE()
ROUTE1700.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1700.fromField = "value_changed"
ROUTE1700.toNode = "Left_eyebrow_MorphInterpolator_JinUpperLidRaiser"
ROUTE1700.toField = "set_weight"

Scene7.children.append(ROUTE1700)
ROUTE1701 = x3d.ROUTE()
ROUTE1701.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1701.fromField = "value_changed"
ROUTE1701.toNode = "Left_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser"
ROUTE1701.toField = "set_weight"

Scene7.children.append(ROUTE1701)
ROUTE1702 = x3d.ROUTE()
ROUTE1702.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1702.fromField = "value_changed"
ROUTE1702.toNode = "Right_eyebrow_MorphInterpolator_JinUpperLidRaiser"
ROUTE1702.toField = "set_weight"

Scene7.children.append(ROUTE1702)
ROUTE1703 = x3d.ROUTE()
ROUTE1703.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1703.fromField = "value_changed"
ROUTE1703.toNode = "Left_upper_eyelid_MorphInterpolator_JinUpperLidRaiser"
ROUTE1703.toField = "set_weight"

Scene7.children.append(ROUTE1703)
ROUTE1704 = x3d.ROUTE()
ROUTE1704.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1704.fromField = "value_changed"
ROUTE1704.toNode = "Left_lower_eyelid_MorphInterpolator_JinUpperLidRaiser"
ROUTE1704.toField = "set_weight"

Scene7.children.append(ROUTE1704)
ROUTE1705 = x3d.ROUTE()
ROUTE1705.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1705.fromField = "value_changed"
ROUTE1705.toNode = "Left_pupil_MorphInterpolator_JinUpperLidRaiser"
ROUTE1705.toField = "set_weight"

Scene7.children.append(ROUTE1705)
ROUTE1706 = x3d.ROUTE()
ROUTE1706.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1706.fromField = "value_changed"
ROUTE1706.toNode = "Right_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser"
ROUTE1706.toField = "set_weight"

Scene7.children.append(ROUTE1706)
ROUTE1707 = x3d.ROUTE()
ROUTE1707.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1707.fromField = "value_changed"
ROUTE1707.toNode = "Right_lower_eyelid_MorphInterpolator_JinUpperLidRaiser"
ROUTE1707.toField = "set_weight"

Scene7.children.append(ROUTE1707)
ROUTE1708 = x3d.ROUTE()
ROUTE1708.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1708.fromField = "value_changed"
ROUTE1708.toNode = "Right_pupil_MorphInterpolator_JinUpperLidRaiser"
ROUTE1708.toField = "set_weight"

Scene7.children.append(ROUTE1708)
ROUTE1709 = x3d.ROUTE()
ROUTE1709.fromNode = "AnimationAdapter_JinUpperLidRaiser"
ROUTE1709.fromField = "value_changed"
ROUTE1709.toNode = "Right_upper_eyelid_MorphInterpolator_JinUpperLidRaiser"
ROUTE1709.toField = "set_weight"

Scene7.children.append(ROUTE1709)
ROUTE1710 = x3d.ROUTE()
ROUTE1710.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1710.fromField = "value_changed"
ROUTE1710.toNode = "Mid_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"
ROUTE1710.toField = "set_weight"

Scene7.children.append(ROUTE1710)
ROUTE1711 = x3d.ROUTE()
ROUTE1711.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1711.fromField = "value_changed"
ROUTE1711.toNode = "Left_nostril_MorphInterpolator_JinUpperLipRaiser"
ROUTE1711.toField = "set_weight"

Scene7.children.append(ROUTE1711)
ROUTE1712 = x3d.ROUTE()
ROUTE1712.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1712.fromField = "value_changed"
ROUTE1712.toNode = "Left_dorsum_MorphInterpolator_JinUpperLipRaiser"
ROUTE1712.toField = "set_weight"

Scene7.children.append(ROUTE1712)
ROUTE1713 = x3d.ROUTE()
ROUTE1713.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1713.fromField = "value_changed"
ROUTE1713.toNode = "Left_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser"
ROUTE1713.toField = "set_weight"

Scene7.children.append(ROUTE1713)
ROUTE1714 = x3d.ROUTE()
ROUTE1714.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1714.fromField = "value_changed"
ROUTE1714.toNode = "Left_cheek_MorphInterpolator_JinUpperLipRaiser"
ROUTE1714.toField = "set_weight"

Scene7.children.append(ROUTE1714)
ROUTE1715 = x3d.ROUTE()
ROUTE1715.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1715.fromField = "value_changed"
ROUTE1715.toNode = "Left_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"
ROUTE1715.toField = "set_weight"

Scene7.children.append(ROUTE1715)
ROUTE1716 = x3d.ROUTE()
ROUTE1716.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1716.fromField = "value_changed"
ROUTE1716.toNode = "Left_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser"
ROUTE1716.toField = "set_weight"

Scene7.children.append(ROUTE1716)
ROUTE1717 = x3d.ROUTE()
ROUTE1717.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1717.fromField = "value_changed"
ROUTE1717.toNode = "Philtrum_MorphInterpolator_JinUpperLipRaiser"
ROUTE1717.toField = "set_weight"

Scene7.children.append(ROUTE1717)
ROUTE1718 = x3d.ROUTE()
ROUTE1718.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1718.fromField = "value_changed"
ROUTE1718.toNode = "Right_cheek_MorphInterpolator_JinUpperLipRaiser"
ROUTE1718.toField = "set_weight"

Scene7.children.append(ROUTE1718)
ROUTE1719 = x3d.ROUTE()
ROUTE1719.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1719.fromField = "value_changed"
ROUTE1719.toNode = "Right_dorsum_MorphInterpolator_JinUpperLipRaiser"
ROUTE1719.toField = "set_weight"

Scene7.children.append(ROUTE1719)
ROUTE1720 = x3d.ROUTE()
ROUTE1720.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1720.fromField = "value_changed"
ROUTE1720.toNode = "Right_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser"
ROUTE1720.toField = "set_weight"

Scene7.children.append(ROUTE1720)
ROUTE1721 = x3d.ROUTE()
ROUTE1721.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1721.fromField = "value_changed"
ROUTE1721.toNode = "Right_nostril_MorphInterpolator_JinUpperLipRaiser"
ROUTE1721.toField = "set_weight"

Scene7.children.append(ROUTE1721)
ROUTE1722 = x3d.ROUTE()
ROUTE1722.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1722.fromField = "value_changed"
ROUTE1722.toNode = "Right_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser"
ROUTE1722.toField = "set_weight"

Scene7.children.append(ROUTE1722)
ROUTE1723 = x3d.ROUTE()
ROUTE1723.fromNode = "AnimationAdapter_JinUpperLipRaiser"
ROUTE1723.fromField = "value_changed"
ROUTE1723.toNode = "Right_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"
ROUTE1723.toField = "set_weight"

Scene7.children.append(ROUTE1723)
ROUTE1724 = x3d.ROUTE()
ROUTE1724.fromNode = "AnimationAdapter_JinWink"
ROUTE1724.fromField = "value_changed"
ROUTE1724.toNode = "Left_upper_eyelid_MorphInterpolator_JinWink"
ROUTE1724.toField = "set_weight"

Scene7.children.append(ROUTE1724)
ROUTE1725 = x3d.ROUTE()
ROUTE1725.fromNode = "AnimationAdapter_JinWink"
ROUTE1725.fromField = "value_changed"
ROUTE1725.toNode = "Left_lower_eyelid_MorphInterpolator_JinWink"
ROUTE1725.toField = "set_weight"

Scene7.children.append(ROUTE1725)

X3D0.Scene = Scene7
f = open("../data/FacialAnimationComparisonScripts.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/FacialAnimationComparisonScripts.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/FacialAnimationComparisonScripts.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
