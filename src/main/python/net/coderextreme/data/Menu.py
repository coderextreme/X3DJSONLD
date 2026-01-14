print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "Menu.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "X3D scene with a Switch of Inlines controlled by a menu"

head1.children.append(meta3)

X3D0.head = head1
Scene4 = x3d.Scene()
"""Viewpoint and any other scene setup"""
Viewpoint5 = x3d.Viewpoint()
Viewpoint5.position = [0,20,110]

Scene4.children.append(Viewpoint5)
"""Menu prototype declaration"""
ProtoDeclare6 = x3d.ProtoDeclare()
ProtoDeclare6.name = "Menu"
ProtoInterface7 = x3d.ProtoInterface()
field8 = x3d.field()
field8.name = "menuItems"
field8.type = "MFString"
field8.accessType = "initializeOnly"

ProtoInterface7.field.append(field8)

ProtoDeclare6.ProtoInterface = ProtoInterface7
ProtoBody9 = x3d.ProtoBody()
Group10 = x3d.Group()
Transform11 = x3d.Transform()
Transform11.DEF = "TextMenuTransform"
Transform11.translation = [48,27,0]
TouchSensor12 = x3d.TouchSensor()
TouchSensor12.DEF = "MenuTouchSensor"

Transform11.children.append(TouchSensor12)
Shape13 = x3d.Shape()
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.diffuseColor = [1,1,1]

Appearance14.material = Material15

Shape13.appearance = Appearance14
Text16 = x3d.Text()
Text16.DEF = "MenuText"
IS17 = x3d.IS()
connect18 = x3d.connect()
connect18.nodeField = "string"
connect18.protoField = "menuItems"

IS17.connect.append(connect18)

Text16.IS = IS17
FontStyle19 = x3d.FontStyle()
FontStyle19.size = 2.4
FontStyle19.spacing = 1.2
FontStyle19.justify = ["MIDDLE","MIDDLE"]

Text16.fontStyle = FontStyle19

Shape13.geometry = Text16

Transform11.children.append(Shape13)
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [0,0,1]

Appearance21.material = Material22

Shape20.appearance = Appearance21
IndexedFaceSet23 = x3d.IndexedFaceSet()
IndexedFaceSet23.DEF = "Backing"
IndexedFaceSet23.coordIndex = [0,1,2,3,-1]
Coordinate24 = x3d.Coordinate()
Coordinate24.point = [(25, 36, -0.01),(-25, 36, -0.01),(-25, -51, -0.01),(25, -51, -0.01)]

IndexedFaceSet23.coord = Coordinate24

Shape20.geometry = IndexedFaceSet23

Transform11.children.append(Shape20)

Group10.children.append(Transform11)
Switch25 = x3d.Switch()
Switch25.DEF = "SceneSwitcher"
Switch25.whichChoice = 0
Inline26 = x3d.Inline()
Inline26.DEF = "OPTION1"
Inline26.url = ["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"]

Switch25.children.append(Inline26)
Inline27 = x3d.Inline()
Inline27.DEF = "OPTION2"
Inline27.url = ["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"]

Switch25.children.append(Inline27)
Inline28 = x3d.Inline()
Inline28.DEF = "OPTION3"
Inline28.url = ["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"]

Switch25.children.append(Inline28)
Inline29 = x3d.Inline()
Inline29.DEF = "OPTION4"
Inline29.url = ["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"]

Switch25.children.append(Inline29)
Inline30 = x3d.Inline()
Inline30.DEF = "OPTION5"
Inline30.url = ["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"]

Switch25.children.append(Inline30)
Inline31 = x3d.Inline()
Inline31.DEF = "OPTION6"
Inline31.url = ["../resources/JinLidTightener.x3d","JinLidTightener.x3d"]

Switch25.children.append(Inline31)
Inline32 = x3d.Inline()
Inline32.DEF = "OPTION7"
Inline32.url = ["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"]

Switch25.children.append(Inline32)
Inline33 = x3d.Inline()
Inline33.DEF = "OPTION8"
Inline33.url = ["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"]

Switch25.children.append(Inline33)
Inline34 = x3d.Inline()
Inline34.DEF = "OPTION9"
Inline34.url = ["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"]

Switch25.children.append(Inline34)
Inline35 = x3d.Inline()
Inline35.DEF = "OPTION10"
Inline35.url = ["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"]

Switch25.children.append(Inline35)
Inline36 = x3d.Inline()
Inline36.DEF = "OPTION11"
Inline36.url = ["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"]

Switch25.children.append(Inline36)
Inline37 = x3d.Inline()
Inline37.DEF = "OPTION12"
Inline37.url = ["../resources/JinDimpler.x3d","JinDimpler.x3d"]

Switch25.children.append(Inline37)
Inline38 = x3d.Inline()
Inline38.DEF = "OPTION13"
Inline38.url = ["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"]

Switch25.children.append(Inline38)
Inline39 = x3d.Inline()
Inline39.DEF = "OPTION14"
Inline39.url = ["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"]

Switch25.children.append(Inline39)
Inline40 = x3d.Inline()
Inline40.DEF = "OPTION15"
Inline40.url = ["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"]

Switch25.children.append(Inline40)
Inline41 = x3d.Inline()
Inline41.DEF = "OPTION16"
Inline41.url = ["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"]

Switch25.children.append(Inline41)
Inline42 = x3d.Inline()
Inline42.DEF = "OPTION17"
Inline42.url = ["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"]

Switch25.children.append(Inline42)
Inline43 = x3d.Inline()
Inline43.DEF = "OPTION18"
Inline43.url = ["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"]

Switch25.children.append(Inline43)
Inline44 = x3d.Inline()
Inline44.DEF = "OPTION19"
Inline44.url = ["../resources/JinLipTightener.x3d","JinLipTightener.x3d"]

Switch25.children.append(Inline44)
Inline45 = x3d.Inline()
Inline45.DEF = "OPTION20"
Inline45.url = ["../resources/JinLipPressor.x3d","JinLipPressor.x3d"]

Switch25.children.append(Inline45)
Inline46 = x3d.Inline()
Inline46.DEF = "OPTION21"
Inline46.url = ["../resources/JinLipsPart.x3d","JinLipsPart.x3d"]

Switch25.children.append(Inline46)
Inline47 = x3d.Inline()
Inline47.DEF = "OPTION22"
Inline47.url = ["../resources/JinJawDrop.x3d","JinJawDrop.x3d"]

Switch25.children.append(Inline47)
Inline48 = x3d.Inline()
Inline48.DEF = "OPTION23"
Inline48.url = ["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"]

Switch25.children.append(Inline48)
Inline49 = x3d.Inline()
Inline49.DEF = "OPTION24"
Inline49.url = ["../resources/JinLipSuck.x3d","JinLipSuck.x3d"]

Switch25.children.append(Inline49)
Inline50 = x3d.Inline()
Inline50.DEF = "OPTION25"
Inline50.url = ["../resources/JinLidDroop.x3d","JinLidDroop.x3d"]

Switch25.children.append(Inline50)
Inline51 = x3d.Inline()
Inline51.DEF = "OPTION26"
Inline51.url = ["../resources/JinSlit.x3d","JinSlit.x3d"]

Switch25.children.append(Inline51)
Inline52 = x3d.Inline()
Inline52.DEF = "OPTION27"
Inline52.url = ["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"]

Switch25.children.append(Inline52)
Inline53 = x3d.Inline()
Inline53.DEF = "OPTION28"
Inline53.url = ["../resources/JinSquint.x3d","JinSquint.x3d"]

Switch25.children.append(Inline53)
Inline54 = x3d.Inline()
Inline54.DEF = "OPTION29"
Inline54.url = ["../resources/JinBlink.x3d","JinBlink.x3d"]

Switch25.children.append(Inline54)
Inline55 = x3d.Inline()
Inline55.DEF = "OPTION30"
Inline55.url = ["../resources/JinWink.x3d","JinWink.x3d"]

Switch25.children.append(Inline55)

Group10.children.append(Switch25)
"""Script to handle selection logic"""
Script56 = x3d.Script()
Script56.DEF = "MenuScript"
field57 = x3d.field()
field57.name = "menuItems"
field57.type = "MFString"
field57.accessType = "initializeOnly"

Script56.field.append(field57)
field58 = x3d.field()
field58.name = "selection"
field58.type = "SFInt32"
field58.accessType = "outputOnly"

Script56.field.append(field58)
field59 = x3d.field()
field59.name = "touchPoint"
field59.type = "SFVec3f"
field59.accessType = "inputOnly"

Script56.field.append(field59)
field60 = x3d.field()
field60.name = "spacing"
field60.type = "SFFloat"
field60.accessType = "initializeOnly"
field60.value = 1.2

Script56.field.append(field60)
field61 = x3d.field()
field61.name = "size"
field61.type = "SFFloat"
field61.accessType = "initializeOnly"
field61.value = 2.4

Script56.field.append(field61)
field62 = x3d.field()
field62.name = "menuCenterY"
field62.type = "SFFloat"
field62.accessType = "initializeOnly"

Script56.field.append(field62)
field63 = x3d.field()
field63.name = "itemHeight"
field63.type = "SFFloat"
field63.accessType = "initializeOnly"

Script56.field.append(field63)
IS64 = x3d.IS()
connect65 = x3d.connect()
connect65.nodeField = "menuItems"
connect65.protoField = "menuItems"

IS64.connect.append(connect65)

Script56.IS = IS64

Script56.sourceCode = '''ecmascript:\n"+
"        function initialize() {\n"+
"          selection = 0;\n"+
"          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation\n"+
"          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;\n"+
"          menuCenterY = menuHeight / 2;\n"+
"          itemHeight = menuHeight / menuItems.length;\n"+
"        }\n"+
"\n"+
"        function touchPoint(value) {\n"+
"          Browser.print(\"Hit \"+value+\" \"+selection+\"\n"+
"\");\n"+
"          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);\n"+
"\n"+
"          selection = index - 2;\n"+
"          if (selection >= 0 && selection < menuItems.length) {\n"+
"            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"\n"+
"\");\n"+
"          }\n"+
"        }'''

Group10.children.append(Script56)
"""ROUTEs to connect everything"""
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "MenuTouchSensor"
ROUTE66.fromField = "hitPoint_changed"
ROUTE66.toNode = "MenuScript"
ROUTE66.toField = "touchPoint"

Group10.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "MenuScript"
ROUTE67.fromField = "selection"
ROUTE67.toNode = "SceneSwitcher"
ROUTE67.toField = "whichChoice"

Group10.children.append(ROUTE67)

ProtoBody9.children.append(Group10)

ProtoDeclare6.ProtoBody = ProtoBody9

Scene4.children.append(ProtoDeclare6)
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.name = "Menu"
ProtoInstance68.DEF = "MainMenu"
fieldValue69 = x3d.fieldValue()
fieldValue69.name = "menuItems"
fieldValue69.value = "\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\""

ProtoInstance68.fieldValue.append(fieldValue69)

Scene4.children.append(ProtoInstance68)

X3D0.Scene = Scene4
f = open("../data/Menu.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Menu.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Menu.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
