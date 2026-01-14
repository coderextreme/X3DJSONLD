import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("Menu.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("X3D scene with a Switch of Inlines controlled by a menu")

head1.addMeta(meta3)

X3D0.setHead(head1)
Scene4 = x3d.Scene()

Scene4.addComments(x3d.CommentsBlock("""Viewpoint and any other scene setup"""))
Viewpoint5 = x3d.Viewpoint()
Viewpoint5.setPosition(x3d.doubleToFloat([0,20,110]))

Scene4.addChild(Viewpoint5)

Scene4.addComments(x3d.CommentsBlock("""Menu prototype declaration"""))
ProtoDeclare6 = x3d.ProtoDeclare()
ProtoDeclare6.setName("Menu")
ProtoInterface7 = x3d.ProtoInterface()
field8 = x3d.field()
field8.setName("menuItems")
field8.setType("MFString")
field8.setAccessType("initializeOnly")

ProtoInterface7.addField(field8)

ProtoDeclare6.setProtoInterface(ProtoInterface7)
ProtoBody9 = x3d.ProtoBody()
Group10 = x3d.Group()
Transform11 = x3d.Transform()
Transform11.setDEF("TextMenuTransform")
Transform11.setTranslation(x3d.doubleToFloat([48,27,0]))
TouchSensor12 = x3d.TouchSensor()
TouchSensor12.setDEF("MenuTouchSensor")

Transform11.addChild(TouchSensor12)
Shape13 = x3d.Shape()
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance14.setMaterial(Material15)

Shape13.setAppearance(Appearance14)
Text16 = x3d.Text()
Text16.setDEF("MenuText")
IS17 = x3d.IS()
connect18 = x3d.connect()
connect18.setNodeField("string")
connect18.setProtoField("menuItems")

IS17.addConnect(connect18)

Text16.setIS(IS17)
FontStyle19 = x3d.FontStyle()
FontStyle19.setSize(2.4)
FontStyle19.setSpacing(1.2)
FontStyle19.setJustify(["MIDDLE","MIDDLE"])

Text16.setFontStyle(FontStyle19)

Shape13.setGeometry(Text16)

Transform11.addChild(Shape13)
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
IndexedFaceSet23 = x3d.IndexedFaceSet()
IndexedFaceSet23.setDEF("Backing")
IndexedFaceSet23.setCoordIndex([0,1,2,3,-1])
Coordinate24 = x3d.Coordinate()
Coordinate24.setPoint(x3d.doubleToFloat([25,36,-0.01,-25,36,-0.01,-25,-51,-0.01,25,-51,-0.01]))

IndexedFaceSet23.setCoord(Coordinate24)

Shape20.setGeometry(IndexedFaceSet23)

Transform11.addChild(Shape20)

Group10.addChild(Transform11)
Switch25 = x3d.Switch()
Switch25.setDEF("SceneSwitcher")
Switch25.setWhichChoice(0)
Inline26 = x3d.Inline()
Inline26.setDEF("OPTION1")
Inline26.setUrl(["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"])

Switch25.addChild(Inline26)
Inline27 = x3d.Inline()
Inline27.setDEF("OPTION2")
Inline27.setUrl(["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"])

Switch25.addChild(Inline27)
Inline28 = x3d.Inline()
Inline28.setDEF("OPTION3")
Inline28.setUrl(["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"])

Switch25.addChild(Inline28)
Inline29 = x3d.Inline()
Inline29.setDEF("OPTION4")
Inline29.setUrl(["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"])

Switch25.addChild(Inline29)
Inline30 = x3d.Inline()
Inline30.setDEF("OPTION5")
Inline30.setUrl(["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"])

Switch25.addChild(Inline30)
Inline31 = x3d.Inline()
Inline31.setDEF("OPTION6")
Inline31.setUrl(["../resources/JinLidTightener.x3d","JinLidTightener.x3d"])

Switch25.addChild(Inline31)
Inline32 = x3d.Inline()
Inline32.setDEF("OPTION7")
Inline32.setUrl(["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"])

Switch25.addChild(Inline32)
Inline33 = x3d.Inline()
Inline33.setDEF("OPTION8")
Inline33.setUrl(["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"])

Switch25.addChild(Inline33)
Inline34 = x3d.Inline()
Inline34.setDEF("OPTION9")
Inline34.setUrl(["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"])

Switch25.addChild(Inline34)
Inline35 = x3d.Inline()
Inline35.setDEF("OPTION10")
Inline35.setUrl(["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"])

Switch25.addChild(Inline35)
Inline36 = x3d.Inline()
Inline36.setDEF("OPTION11")
Inline36.setUrl(["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"])

Switch25.addChild(Inline36)
Inline37 = x3d.Inline()
Inline37.setDEF("OPTION12")
Inline37.setUrl(["../resources/JinDimpler.x3d","JinDimpler.x3d"])

Switch25.addChild(Inline37)
Inline38 = x3d.Inline()
Inline38.setDEF("OPTION13")
Inline38.setUrl(["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"])

Switch25.addChild(Inline38)
Inline39 = x3d.Inline()
Inline39.setDEF("OPTION14")
Inline39.setUrl(["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"])

Switch25.addChild(Inline39)
Inline40 = x3d.Inline()
Inline40.setDEF("OPTION15")
Inline40.setUrl(["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"])

Switch25.addChild(Inline40)
Inline41 = x3d.Inline()
Inline41.setDEF("OPTION16")
Inline41.setUrl(["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"])

Switch25.addChild(Inline41)
Inline42 = x3d.Inline()
Inline42.setDEF("OPTION17")
Inline42.setUrl(["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"])

Switch25.addChild(Inline42)
Inline43 = x3d.Inline()
Inline43.setDEF("OPTION18")
Inline43.setUrl(["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"])

Switch25.addChild(Inline43)
Inline44 = x3d.Inline()
Inline44.setDEF("OPTION19")
Inline44.setUrl(["../resources/JinLipTightener.x3d","JinLipTightener.x3d"])

Switch25.addChild(Inline44)
Inline45 = x3d.Inline()
Inline45.setDEF("OPTION20")
Inline45.setUrl(["../resources/JinLipPressor.x3d","JinLipPressor.x3d"])

Switch25.addChild(Inline45)
Inline46 = x3d.Inline()
Inline46.setDEF("OPTION21")
Inline46.setUrl(["../resources/JinLipsPart.x3d","JinLipsPart.x3d"])

Switch25.addChild(Inline46)
Inline47 = x3d.Inline()
Inline47.setDEF("OPTION22")
Inline47.setUrl(["../resources/JinJawDrop.x3d","JinJawDrop.x3d"])

Switch25.addChild(Inline47)
Inline48 = x3d.Inline()
Inline48.setDEF("OPTION23")
Inline48.setUrl(["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"])

Switch25.addChild(Inline48)
Inline49 = x3d.Inline()
Inline49.setDEF("OPTION24")
Inline49.setUrl(["../resources/JinLipSuck.x3d","JinLipSuck.x3d"])

Switch25.addChild(Inline49)
Inline50 = x3d.Inline()
Inline50.setDEF("OPTION25")
Inline50.setUrl(["../resources/JinLidDroop.x3d","JinLidDroop.x3d"])

Switch25.addChild(Inline50)
Inline51 = x3d.Inline()
Inline51.setDEF("OPTION26")
Inline51.setUrl(["../resources/JinSlit.x3d","JinSlit.x3d"])

Switch25.addChild(Inline51)
Inline52 = x3d.Inline()
Inline52.setDEF("OPTION27")
Inline52.setUrl(["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"])

Switch25.addChild(Inline52)
Inline53 = x3d.Inline()
Inline53.setDEF("OPTION28")
Inline53.setUrl(["../resources/JinSquint.x3d","JinSquint.x3d"])

Switch25.addChild(Inline53)
Inline54 = x3d.Inline()
Inline54.setDEF("OPTION29")
Inline54.setUrl(["../resources/JinBlink.x3d","JinBlink.x3d"])

Switch25.addChild(Inline54)
Inline55 = x3d.Inline()
Inline55.setDEF("OPTION30")
Inline55.setUrl(["../resources/JinWink.x3d","JinWink.x3d"])

Switch25.addChild(Inline55)

Group10.addChild(Switch25)

Group10.addComments(x3d.CommentsBlock("""Script to handle selection logic"""))
Script56 = x3d.Script()
Script56.setDEF("MenuScript")
field57 = x3d.field()
field57.setName("menuItems")
field57.setType("MFString")
field57.setAccessType("initializeOnly")

Script56.addField(field57)
field58 = x3d.field()
field58.setName("selection")
field58.setType("SFInt32")
field58.setAccessType("outputOnly")

Script56.addField(field58)
field59 = x3d.field()
field59.setName("touchPoint")
field59.setType("SFVec3f")
field59.setAccessType("inputOnly")

Script56.addField(field59)
field60 = x3d.field()
field60.setName("spacing")
field60.setType("SFFloat")
field60.setAccessType("initializeOnly")
field60.setValue("1.2")

Script56.addField(field60)
field61 = x3d.field()
field61.setName("size")
field61.setType("SFFloat")
field61.setAccessType("initializeOnly")
field61.setValue("2.4")

Script56.addField(field61)
field62 = x3d.field()
field62.setName("menuCenterY")
field62.setType("SFFloat")
field62.setAccessType("initializeOnly")

Script56.addField(field62)
field63 = x3d.field()
field63.setName("itemHeight")
field63.setType("SFFloat")
field63.setAccessType("initializeOnly")

Script56.addField(field63)
IS64 = x3d.IS()
connect65 = x3d.connect()
connect65.setNodeField("menuItems")
connect65.setProtoField("menuItems")

IS64.addConnect(connect65)

Script56.setIS(IS64)

Script56.setSourceCode('''ecmascript:
        function initialize() {
          selection = 0;
          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation
          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;
          menuCenterY = menuHeight / 2;
          itemHeight = menuHeight / menuItems.length;
        }

        function touchPoint(value) {
          Browser.print(\"Hit \"+value+\" \"+selection+\"
\");
          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);

          selection = index - 2;
          if (selection >= 0 && selection < menuItems.length) {
            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"
\");
          }
        }''')

Group10.addChild(Script56)

Group10.addComments(x3d.CommentsBlock("""ROUTEs to connect everything"""))
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("MenuTouchSensor")
ROUTE66.setFromField("hitPoint_changed")
ROUTE66.setToNode("MenuScript")
ROUTE66.setToField("touchPoint")

Group10.addChild(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("MenuScript")
ROUTE67.setFromField("selection")
ROUTE67.setToNode("SceneSwitcher")
ROUTE67.setToField("whichChoice")

Group10.addChild(ROUTE67)

ProtoBody9.addChild(Group10)

ProtoDeclare6.setProtoBody(ProtoBody9)

Scene4.addChild(ProtoDeclare6)
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.setName("Menu")
ProtoInstance68.setDEF("MainMenu")
fieldValue69 = x3d.fieldValue()
fieldValue69.setName("menuItems")
fieldValue69.setValue("\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\"")

ProtoInstance68.addFieldValue(fieldValue69)

Scene4.addChild(ProtoInstance68)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/Menu.new.graalpy.x3d")
X3D0.toFileJSON("../data/Menu.new.graalpy.x3dj")
