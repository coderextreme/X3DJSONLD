from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("BindingOperations.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("description").setContent("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event.")
head1.addMeta(meta3)
meta4 = metaObject().setName("creator").setContent("Don Brutzman")
head1.addMeta(meta4)
meta5 = metaObject().setName("created").setContent("5 January 2008")
head1.addMeta(meta5)
meta6 = metaObject().setName("modified").setContent("22 July 2013")
head1.addMeta(meta6)
meta7 = metaObject().setName("reference").setContent("BindingOperations.console.txt")
head1.addMeta(meta7)
meta8 = metaObject().setName("reference").setContent("BindingStackOperations.png")
head1.addMeta(meta8)
meta9 = metaObject().setName("reference").setContent("X3D for Web Authors, Section 2.5.1, Figure 4.1")
head1.addMeta(meta9)
meta10 = metaObject().setName("reference").setContent("http://X3dGraphics.com")
head1.addMeta(meta10)
meta11 = metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html")
head1.addMeta(meta11)
meta12 = metaObject().setName("rights").setContent("Copyright Don Brutzman and Leonard Daly 2007")
head1.addMeta(meta12)
meta13 = metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")
head1.addMeta(meta13)
meta14 = metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d")
head1.addMeta(meta14)
meta15 = metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta15)
meta16 = metaObject().setName("license").setContent("../license.html")
head1.addMeta(meta16)
X3D0.setHead(head1)
Scene17 = SceneObject()
Viewpoint18 = ViewpointObject().setDEF("View1").setCenterOfRotation([-6,0,0]).setDescription("Viewpoint 1").setPosition([-6,0,5])
Scene17.addChild(Viewpoint18)
Viewpoint19 = ViewpointObject().setDEF("View2").setCenterOfRotation([-2,0,0]).setDescription("Viewpoint 2").setPosition([-2,0,5])
Scene17.addChild(Viewpoint19)
Viewpoint20 = ViewpointObject().setDEF("View3").setCenterOfRotation([2,0,0]).setDescription("Viewpoint 3").setPosition([2,0,5])
Scene17.addChild(Viewpoint20)
Viewpoint21 = ViewpointObject().setDEF("View4").setCenterOfRotation([6,0,0]).setDescription("Viewpoint 4").setPosition([6,0,5])
Scene17.addChild(Viewpoint21)

Scene17.addComments(CommentsBlock("Script initialization ought to first bind view5 below."))
Group22 = GroupObject()
Transform23 = TransformObject().setDEF("Text1").setTranslation([-6,0,0])
Shape24 = ShapeObject()
Text25 = TextObject().setString(["View","# 1"])
FontStyle26 = FontStyleObject().setDEF("CenterJustify").setJustify(["MIDDLE","MIDDLE"])
Text25.setFontStyle(FontStyle26)
Shape24.setGeometry(Text25)
Appearance27 = AppearanceObject()
Material28 = MaterialObject().setDiffuseColor([1,0,0])
Appearance27.setMaterial(Material28)
Shape24.setAppearance(Appearance27)
Transform23.addChild(Shape24)
Group22.addChild(Transform23)
Transform29 = TransformObject().setDEF("Text2").setTranslation([-2,0,0])
Shape30 = ShapeObject()
Text31 = TextObject().setString(["View","# 2"])
FontStyle32 = FontStyleObject().setUSE("CenterJustify")
Text31.setFontStyle(FontStyle32)
Shape30.setGeometry(Text31)
Appearance33 = AppearanceObject()
Material34 = MaterialObject().setDiffuseColor([0,1,0])
Appearance33.setMaterial(Material34)
Shape30.setAppearance(Appearance33)
Transform29.addChild(Shape30)
Group22.addChild(Transform29)
Transform35 = TransformObject().setDEF("Text3").setTranslation([2,0,0])
Shape36 = ShapeObject()
Text37 = TextObject().setString(["View","# 3"])
FontStyle38 = FontStyleObject().setUSE("CenterJustify")
Text37.setFontStyle(FontStyle38)
Shape36.setGeometry(Text37)
Appearance39 = AppearanceObject()
Material40 = MaterialObject().setDiffuseColor([0,0,1])
Appearance39.setMaterial(Material40)
Shape36.setAppearance(Appearance39)
Transform35.addChild(Shape36)
Group22.addChild(Transform35)
Transform41 = TransformObject().setDEF("Text4").setTranslation([6,0,0])
Shape42 = ShapeObject()
Text43 = TextObject().setString(["View","# 4"])
FontStyle44 = FontStyleObject().setUSE("CenterJustify")
Text43.setFontStyle(FontStyle44)
Shape42.setGeometry(Text43)
Appearance45 = AppearanceObject()
Material46 = MaterialObject()
Appearance45.setMaterial(Material46)
Shape42.setAppearance(Appearance45)
Transform41.addChild(Shape42)
Group22.addChild(Transform41)
Scene17.addChild(Group22)

Scene17.addComments(CommentsBlock("The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9."))

Scene17.addComments(CommentsBlock("It does not need to be studied in this chapter."))
Transform47 = TransformObject().setTranslation([0,-3,8])

Transform47.addComments(CommentsBlock("notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script."))
Viewpoint48 = ViewpointObject().setDEF("ClickToAnimateView").setDescription("Select animation sequence").setPosition([0,0,7])
Transform47.addChild(Viewpoint48)
Shape49 = ShapeObject()
Text50 = TextObject().setString(["Click here to animate"])
FontStyle51 = FontStyleObject().setJustify(["MIDDLE","BEGIN"])
Text50.setFontStyle(FontStyle51)
Shape49.setGeometry(Text50)
Appearance52 = AppearanceObject()
Material53 = MaterialObject().setDiffuseColor([0.8,0.4,0])
Appearance52.setMaterial(Material53)
Shape49.setAppearance(Appearance52)
Transform47.addChild(Shape49)
Shape54 = ShapeObject()
Box55 = BoxObject().setSize([7,1,0.02])
Shape54.setGeometry(Box55)
Appearance56 = AppearanceObject()
Material57 = MaterialObject().setTransparency(1)
Appearance56.setMaterial(Material57)
Shape54.setAppearance(Appearance56)
Transform47.addChild(Shape54)
TouchSensor58 = TouchSensorObject().setDEF("TextTouchSensor").setDescription("Click to begin animating viewpoint selections")
Transform47.addChild(TouchSensor58)
TimeSensor59 = TimeSensorObject().setDEF("Clock").setCycleInterval(10)
Transform47.addChild(TimeSensor59)
ROUTE60 = ROUTEObject().setFromField("touchTime").setFromNode("TextTouchSensor").setToField("set_startTime").setToNode("Clock")
Transform47.addChild(ROUTE60)
IntegerSequencer61 = IntegerSequencerObject().setDEF("TimingSequencer").setKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]).setKeyValue([0,1,2,3,4,5,6,7,8,10])
Transform47.addChild(IntegerSequencer61)
ROUTE62 = ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("TimingSequencer")
Transform47.addChild(ROUTE62)
Script63 = ScriptObject().setDEF("BindingSequencerEngine")
field64 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("set_timeEvent").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script63.addField(field64)
field65 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView1").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script63.addField(field65)
field66 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView2").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script63.addField(field66)
field67 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView3").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script63.addField(field67)
field68 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView4").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script63.addField(field68)
field69 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView5").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script63.addField(field69)
field70 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("view1Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script63.addField(field70)
field71 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("view2Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script63.addField(field71)
field72 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("view3Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script63.addField(field72)
field73 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("view4Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script63.addField(field73)
field74 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("priorInputvalue").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("-1")
Script63.addField(field74)

Script63.setSourceCode("\n"+
"        \n"+
"ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"    bindView5 = true;\n"+
"    Browser.print ('Timing script initialized and ready for activation');\n"+
"}\n"+
"function set_timeEvent (inputValue)\n"+
"{\n"+
"    if (inputValue == priorInputvalue)\n"+
"    {\n"+
"        return; // ignore repeated inputs\n"+
"    }\n"+
"    // new value provided\n"+
"    priorInputvalue = inputValue;\n"+
"    // Browser.print ('\\ntimeEvent inputValue=' + inputValue);\n"+
"        \n"+
"    // mimics user execution of Figure 4.1 steps t_0 through t_8\n"+
"    if (inputValue == 0)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t0');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 1)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t1');\n"+
"        bindView2 = true;\n"+
"    }\n"+
"    else if (inputValue == 2)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t2');\n"+
"        bindView3 = true;\n"+
"    }\n"+
"    else if (inputValue == 3)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t3');\n"+
"        bindView3 = false;\n"+
"    }\n"+
"    else if (inputValue == 4)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t4');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 5)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t5');\n"+
"        bindView2 = false;\n"+
"    }\n"+
"    else if (inputValue == 6)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t6');\n"+
"        bindView1 = false;\n"+
"    }\n"+
"    else if (inputValue == 7)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t7');\n"+
"        bindView4 = true;\n"+
"\n"+
"    }\n"+
"    else if (inputValue == 8)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t8');\n"+
"        Browser.print (', no action, all done');\n"+
"        Browser.print ('\\n\\n');\n"+
"    }\n"+
"}\n"+
"\n"+
"function view1Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view1Bound ' + (inputValue));\n"+
"    if (priorInputvalue == -1) Browser.print ('\\n');\n"+
"}\n"+
"function view2Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view2Bound ' + (inputValue));\n"+
"}\n"+
"function view3Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view3Bound ' + (inputValue));\n"+
"}\n"+
"function view4Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view4Bound ' + (inputValue));\n"+
"}\n"+
"function view5Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view5Bound ' + (inputValue));\n"+
"}\n"+
"")
Transform47.addChild(Script63)

Transform47.addComments(CommentsBlock("drive Script with TimeSensor clock"))
ROUTE75 = ROUTEObject().setFromField("value_changed").setFromNode("TimingSequencer").setToField("set_timeEvent").setToNode("BindingSequencerEngine")
Transform47.addChild(ROUTE75)

Transform47.addComments(CommentsBlock("Script will bind and unbind Viewpoint nodes"))
ROUTE76 = ROUTEObject().setFromField("bindView1").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View1")
Transform47.addChild(ROUTE76)
ROUTE77 = ROUTEObject().setFromField("bindView2").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View2")
Transform47.addChild(ROUTE77)
ROUTE78 = ROUTEObject().setFromField("bindView3").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View3")
Transform47.addChild(ROUTE78)
ROUTE79 = ROUTEObject().setFromField("bindView4").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View4")
Transform47.addChild(ROUTE79)
ROUTE80 = ROUTEObject().setFromField("bindView5").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("ClickToAnimateView")
Transform47.addChild(ROUTE80)

Transform47.addComments(CommentsBlock("Viewpoint nodes report bind and unbind events"))
ROUTE81 = ROUTEObject().setFromField("isBound").setFromNode("View1").setToField("view1Bound").setToNode("BindingSequencerEngine")
Transform47.addChild(ROUTE81)
ROUTE82 = ROUTEObject().setFromField("isBound").setFromNode("View2").setToField("view2Bound").setToNode("BindingSequencerEngine")
Transform47.addChild(ROUTE82)
ROUTE83 = ROUTEObject().setFromField("isBound").setFromNode("View3").setToField("view3Bound").setToNode("BindingSequencerEngine")
Transform47.addChild(ROUTE83)
ROUTE84 = ROUTEObject().setFromField("isBound").setFromNode("View4").setToField("view4Bound").setToNode("BindingSequencerEngine")
Transform47.addChild(ROUTE84)
Scene17.addChild(Transform47)
X3D0.setScene(Scene17)

X3D0.toFileX3D("../data/BindingOperations.new.x3d")
