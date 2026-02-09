print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "Menu.x3d"

head1.children.append(meta2)

X3D0.head = head1
Scene3 = x3d.Scene()
ProtoDeclare4 = x3d.ProtoDeclare()
ProtoDeclare4.name = "Menu"
ProtoInterface5 = x3d.ProtoInterface()
field6 = x3d.field()
field6.accessType = "initializeOnly"
field6.type = "MFString"
field6.name = "menuItems"

ProtoInterface5.field.append(field6)

ProtoDeclare4.ProtoInterface = ProtoInterface5
ProtoBody7 = x3d.ProtoBody()
Group8 = x3d.Group()
Transform9 = x3d.Transform(DEF="TextMenuTransform")
Transform9.translation = [48,27,0]
TouchSensor10 = x3d.TouchSensor(DEF="MenuTouchSensor")

Transform9.children.append(TouchSensor10)
Shape11 = x3d.Shape()
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()
Material13.diffuseColor = [1,1,1]

Appearance12.material = Material13

Shape11.appearance = Appearance12
Text14 = x3d.Text(DEF="MenuText")
FontStyle15 = x3d.FontStyle()
FontStyle15.size = 2.4
FontStyle15.spacing = 1.2
FontStyle15.justify = ["MIDDLE","MIDDLE"]

Text14.fontStyle = FontStyle15
IS16 = x3d.IS()
connect17 = x3d.connect()
connect17.nodeField = "string"
connect17.protoField = "menuItems"

IS16.connect.append(connect17)

Text14.IS = IS16

Shape11.geometry = Text14

Transform9.children.append(Shape11)
Shape18 = x3d.Shape()
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.diffuseColor = [0,0,1]

Appearance19.material = Material20

Shape18.appearance = Appearance19
IndexedFaceSet21 = x3d.IndexedFaceSet(DEF="Backing")
IndexedFaceSet21.coordIndex = [0,1,2,3,-1]
Coordinate22 = x3d.Coordinate()
Coordinate22.point = [(25, 36, -0.01),(-25, 36, -0.01),(-25, -51, -0.01),(25, -51, -0.01)]

IndexedFaceSet21.coord = Coordinate22

Shape18.geometry = IndexedFaceSet21

Transform9.children.append(Shape18)

Group8.children.append(Transform9)
Switch23 = x3d.Switch(DEF="SceneSwitcher")
Switch23.whichChoice = 0
Inline24 = x3d.Inline(DEF="OPTION1")
Inline24.url = ["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"]

Switch23.children.append(Inline24)
Inline25 = x3d.Inline(DEF="OPTION2")
Inline25.url = ["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"]

Switch23.children.append(Inline25)
Inline26 = x3d.Inline(DEF="OPTION3")
Inline26.url = ["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"]

Switch23.children.append(Inline26)
Inline27 = x3d.Inline(DEF="OPTION4")
Inline27.url = ["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"]

Switch23.children.append(Inline27)
Inline28 = x3d.Inline(DEF="OPTION5")
Inline28.url = ["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"]

Switch23.children.append(Inline28)
Inline29 = x3d.Inline(DEF="OPTION6")
Inline29.url = ["../resources/JinLidTightener.x3d","JinLidTightener.x3d"]

Switch23.children.append(Inline29)
Inline30 = x3d.Inline(DEF="OPTION7")
Inline30.url = ["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"]

Switch23.children.append(Inline30)
Inline31 = x3d.Inline(DEF="OPTION8")
Inline31.url = ["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"]

Switch23.children.append(Inline31)
Inline32 = x3d.Inline(DEF="OPTION9")
Inline32.url = ["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"]

Switch23.children.append(Inline32)
Inline33 = x3d.Inline(DEF="OPTION10")
Inline33.url = ["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"]

Switch23.children.append(Inline33)
Inline34 = x3d.Inline(DEF="OPTION11")
Inline34.url = ["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"]

Switch23.children.append(Inline34)
Inline35 = x3d.Inline(DEF="OPTION12")
Inline35.url = ["../resources/JinDimpler.x3d","JinDimpler.x3d"]

Switch23.children.append(Inline35)
Inline36 = x3d.Inline(DEF="OPTION13")
Inline36.url = ["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"]

Switch23.children.append(Inline36)
Inline37 = x3d.Inline(DEF="OPTION14")
Inline37.url = ["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"]

Switch23.children.append(Inline37)
Inline38 = x3d.Inline(DEF="OPTION15")
Inline38.url = ["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"]

Switch23.children.append(Inline38)
Inline39 = x3d.Inline(DEF="OPTION16")
Inline39.url = ["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"]

Switch23.children.append(Inline39)
Inline40 = x3d.Inline(DEF="OPTION17")
Inline40.url = ["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"]

Switch23.children.append(Inline40)
Inline41 = x3d.Inline(DEF="OPTION18")
Inline41.url = ["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"]

Switch23.children.append(Inline41)
Inline42 = x3d.Inline(DEF="OPTION19")
Inline42.url = ["../resources/JinLipTightener.x3d","JinLipTightener.x3d"]

Switch23.children.append(Inline42)
Inline43 = x3d.Inline(DEF="OPTION20")
Inline43.url = ["../resources/JinLipPressor.x3d","JinLipPressor.x3d"]

Switch23.children.append(Inline43)
Inline44 = x3d.Inline(DEF="OPTION21")
Inline44.url = ["../resources/JinLipsPart.x3d","JinLipsPart.x3d"]

Switch23.children.append(Inline44)
Inline45 = x3d.Inline(DEF="OPTION22")
Inline45.url = ["../resources/JinJawDrop.x3d","JinJawDrop.x3d"]

Switch23.children.append(Inline45)
Inline46 = x3d.Inline(DEF="OPTION23")
Inline46.url = ["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"]

Switch23.children.append(Inline46)
Inline47 = x3d.Inline(DEF="OPTION24")
Inline47.url = ["../resources/JinLipSuck.x3d","JinLipSuck.x3d"]

Switch23.children.append(Inline47)
Inline48 = x3d.Inline(DEF="OPTION25")
Inline48.url = ["../resources/JinLidDroop.x3d","JinLidDroop.x3d"]

Switch23.children.append(Inline48)
Inline49 = x3d.Inline(DEF="OPTION26")
Inline49.url = ["../resources/JinSlit.x3d","JinSlit.x3d"]

Switch23.children.append(Inline49)
Inline50 = x3d.Inline(DEF="OPTION27")
Inline50.url = ["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"]

Switch23.children.append(Inline50)
Inline51 = x3d.Inline(DEF="OPTION28")
Inline51.url = ["../resources/JinSquint.x3d","JinSquint.x3d"]

Switch23.children.append(Inline51)
Inline52 = x3d.Inline(DEF="OPTION29")
Inline52.url = ["../resources/JinBlink.x3d","JinBlink.x3d"]

Switch23.children.append(Inline52)
Inline53 = x3d.Inline(DEF="OPTION30")
Inline53.url = ["../resources/JinWink.x3d","JinWink.x3d"]

Switch23.children.append(Inline53)

Group8.children.append(Switch23)
Script54 = x3d.Script(DEF="MenuScript")
field55 = x3d.field()
field55.accessType = "initializeOnly"
field55.type = "MFString"
field55.name = "menuItems"

Script54.field.append(field55)
field56 = x3d.field()
field56.accessType = "outputOnly"
field56.type = "SFInt32"
field56.name = "selection"

Script54.field.append(field56)
field57 = x3d.field()
field57.accessType = "inputOnly"
field57.type = "SFVec3f"
field57.name = "touchPoint"

Script54.field.append(field57)
field58 = x3d.field()
field58.accessType = "initializeOnly"
field58.type = "SFFloat"
field58.name = "spacing"
field58.value = 1.2

Script54.field.append(field58)
field59 = x3d.field()
field59.accessType = "initializeOnly"
field59.type = "SFFloat"
field59.name = "size"
field59.value = 2.4

Script54.field.append(field59)
field60 = x3d.field()
field60.accessType = "initializeOnly"
field60.type = "SFFloat"
field60.name = "menuCenterY"

Script54.field.append(field60)
field61 = x3d.field()
field61.accessType = "initializeOnly"
field61.type = "SFFloat"
field61.name = "itemHeight"

Script54.field.append(field61)

Script54.sourceCode = '''ecmascript:\n"+
"        function initialize() {\n"+
"          selection = 0;\n"+
"          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation\n"+
"          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;\n"+
"          menuCenterY = menuHeight / 2;\n"+
"          itemHeight = menuHeight / menuItems.length;\n"+
"        }\n"+
"\n"+
"        function touchPoint(value) {\n"+
"          Browser.print(\"Hit \"+value+\" \"+selection+\"\\n\");\n"+
"          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);\n"+
"\n"+
"          selection = index - 2;\n"+
"          if (selection >= 0 && selection < menuItems.length) {\n"+
"            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"\\n\");\n"+
"          }\n"+
"        }'''
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.nodeField = "menuItems"
connect63.protoField = "menuItems"

IS62.connect.append(connect63)

Script54.IS = IS62

Group8.children.append(Script54)

ProtoBody7.children.append(Group8)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "MenuTouchSensor"
ROUTE64.fromField = "hitPoint_changed"
ROUTE64.toNode = "MenuScript"
ROUTE64.toField = "touchPoint"

ProtoBody7.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "MenuScript"
ROUTE65.fromField = "selection"
ROUTE65.toNode = "SceneSwitcher"
ROUTE65.toField = "set_whichChoice"

ProtoBody7.children.append(ROUTE65)

ProtoDeclare4.ProtoBody = ProtoBody7

Scene3.children.append(ProtoDeclare4)
Viewpoint66 = x3d.Viewpoint()
Viewpoint66.position = [0,20,110]

Scene3.children.append(Viewpoint66)
ProtoInstance67 = x3d.ProtoInstance(DEF="MainMenu")
ProtoInstance67.name = "Menu"
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "menuItems"
fieldValue68.value = "\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\""

ProtoInstance67.fieldValue.append(fieldValue68)

Scene3.children.append(ProtoInstance67)

X3D0.Scene = Scene3
f = open("../data/Menu.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Menu.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Menu.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
