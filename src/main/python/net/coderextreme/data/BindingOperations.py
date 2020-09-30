import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("BindingOperations.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("5 January 2008")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("22 July 2013")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("BindingOperations.console.txt")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("BindingStackOperations.png")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("X3D for Web Authors, Section 2.5.1, Figure 4.1")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://X3dGraphics.com")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("rights")
meta12.setContent("Copyright Don Brutzman and Leonard Daly 2007")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("subject")
meta13.setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setDEF("View1")
Viewpoint18.setCenterOfRotation([-6,0,0])
Viewpoint18.setDescription("Viewpoint 1")
Viewpoint18.setPosition([-6,0,5])

Scene17.addChildren(Viewpoint18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.setDEF("View2")
Viewpoint19.setCenterOfRotation([-2,0,0])
Viewpoint19.setDescription("Viewpoint 2")
Viewpoint19.setPosition([-2,0,5])

Scene17.addChildren(Viewpoint19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.setDEF("View3")
Viewpoint20.setCenterOfRotation([2,0,0])
Viewpoint20.setDescription("Viewpoint 3")
Viewpoint20.setPosition([2,0,5])

Scene17.addChildren(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.setDEF("View4")
Viewpoint21.setCenterOfRotation([6,0,0])
Viewpoint21.setDescription("Viewpoint 4")
Viewpoint21.setPosition([6,0,5])

Scene17.addChildren(Viewpoint21)
#Script initialization ought to first bind view5 below.
Group22 = x3d.Group()
Group22.setBboxCenter([0,0,0])
Group22.setBboxSize([-1,-1,-1])
Transform23 = x3d.Transform()
Transform23.setDEF("Text1")
Transform23.setTranslation([-6,0,0])
Transform23.setBboxCenter([0,0,0])
Transform23.setBboxSize([-1,-1,-1])
Shape24 = x3d.Shape()
Shape24.setBboxCenter([0,0,0])
Shape24.setBboxSize([-1,-1,-1])
Text25 = x3d.Text()
Text25.setString(["View","# 1"])
FontStyle26 = x3d.FontStyle()
FontStyle26.setDEF("CenterJustify")
FontStyle26.setJustify(["MIDDLE","MIDDLE"])

Text25.setFontStyle(FontStyle26)

Shape24.setGeometry(Text25)
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.setDiffuseColor([1,0,0])

Appearance27.setMaterial(Material28)

Shape24.setAppearance(Appearance27)

Transform23.addChildren(Shape24)

Group22.addChildren(Transform23)
Transform29 = x3d.Transform()
Transform29.setDEF("Text2")
Transform29.setTranslation([-2,0,0])
Transform29.setBboxCenter([0,0,0])
Transform29.setBboxSize([-1,-1,-1])
Shape30 = x3d.Shape()
Shape30.setBboxCenter([0,0,0])
Shape30.setBboxSize([-1,-1,-1])
Text31 = x3d.Text()
Text31.setString(["View","# 2"])
FontStyle32 = x3d.FontStyle()
FontStyle32.setUSE("CenterJustify")

Text31.setFontStyle(FontStyle32)

Shape30.setGeometry(Text31)
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.setDiffuseColor([0,1,0])

Appearance33.setMaterial(Material34)

Shape30.setAppearance(Appearance33)

Transform29.addChildren(Shape30)

Group22.addChildren(Transform29)
Transform35 = x3d.Transform()
Transform35.setDEF("Text3")
Transform35.setTranslation([2,0,0])
Transform35.setBboxCenter([0,0,0])
Transform35.setBboxSize([-1,-1,-1])
Shape36 = x3d.Shape()
Shape36.setBboxCenter([0,0,0])
Shape36.setBboxSize([-1,-1,-1])
Text37 = x3d.Text()
Text37.setString(["View","# 3"])
FontStyle38 = x3d.FontStyle()
FontStyle38.setUSE("CenterJustify")

Text37.setFontStyle(FontStyle38)

Shape36.setGeometry(Text37)
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.setDiffuseColor([0,0,1])

Appearance39.setMaterial(Material40)

Shape36.setAppearance(Appearance39)

Transform35.addChildren(Shape36)

Group22.addChildren(Transform35)
Transform41 = x3d.Transform()
Transform41.setDEF("Text4")
Transform41.setTranslation([6,0,0])
Transform41.setBboxCenter([0,0,0])
Transform41.setBboxSize([-1,-1,-1])
Shape42 = x3d.Shape()
Shape42.setBboxCenter([0,0,0])
Shape42.setBboxSize([-1,-1,-1])
Text43 = x3d.Text()
Text43.setString(["View","# 4"])
FontStyle44 = x3d.FontStyle()
FontStyle44.setUSE("CenterJustify")

Text43.setFontStyle(FontStyle44)

Shape42.setGeometry(Text43)
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()

Appearance45.setMaterial(Material46)

Shape42.setAppearance(Appearance45)

Transform41.addChildren(Shape42)

Group22.addChildren(Transform41)

Scene17.addChildren(Group22)
#The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.
#It does not need to be studied in this chapter.
Transform47 = x3d.Transform()
Transform47.setTranslation([0,-3,8])
Transform47.setBboxCenter([0,0,0])
Transform47.setBboxSize([-1,-1,-1])
#notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.
Viewpoint48 = x3d.Viewpoint()
Viewpoint48.setDEF("ClickToAnimateView")
Viewpoint48.setDescription("Select animation sequence")
Viewpoint48.setPosition([0,0,7])

Transform47.addChildren(Viewpoint48)
Shape49 = x3d.Shape()
Shape49.setBboxCenter([0,0,0])
Shape49.setBboxSize([-1,-1,-1])
Text50 = x3d.Text()
Text50.setString(["Click here to animate"])
FontStyle51 = x3d.FontStyle()
FontStyle51.setJustify(["MIDDLE","BEGIN"])

Text50.setFontStyle(FontStyle51)

Shape49.setGeometry(Text50)
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.setDiffuseColor([0.8,0.4,0])

Appearance52.setMaterial(Material53)

Shape49.setAppearance(Appearance52)

Transform47.addChildren(Shape49)
Shape54 = x3d.Shape()
Shape54.setBboxCenter([0,0,0])
Shape54.setBboxSize([-1,-1,-1])
Box55 = x3d.Box()
Box55.setSize([7,1,0.02])
Box55.setSolid(True)

Shape54.setGeometry(Box55)
Appearance56 = x3d.Appearance()
Material57 = x3d.Material()
Material57.setTransparency(1)

Appearance56.setMaterial(Material57)

Shape54.setAppearance(Appearance56)

Transform47.addChildren(Shape54)
TouchSensor58 = x3d.TouchSensor()
TouchSensor58.setDEF("TextTouchSensor")
TouchSensor58.setDescription("Click to begin animating viewpoint selections")

Transform47.addChildren(TouchSensor58)
TimeSensor59 = x3d.TimeSensor()
TimeSensor59.setDEF("Clock")
TimeSensor59.setCycleInterval(10)

Transform47.addChildren(TimeSensor59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromField("touchTime")
ROUTE60.setFromNode("TextTouchSensor")
ROUTE60.setToField("set_startTime")
ROUTE60.setToNode("Clock")

Transform47.addChildren(ROUTE60)
IntegerSequencer61 = x3d.IntegerSequencer()
IntegerSequencer61.setDEF("TimingSequencer")
IntegerSequencer61.setKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1])
IntegerSequencer61.setKeyValue([0,1,2,3,4,5,6,7,8,10])

Transform47.addChildren(IntegerSequencer61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromField("fraction_changed")
ROUTE62.setFromNode("Clock")
ROUTE62.setToField("set_fraction")
ROUTE62.setToNode("TimingSequencer")

Transform47.addChildren(ROUTE62)
#drive Script with TimeSensor clock
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromField("value_changed")
ROUTE63.setFromNode("TimingSequencer")
ROUTE63.setToField("set_timeEvent")
ROUTE63.setToNode("BindingSequencerEngine")

Transform47.addChildren(ROUTE63)
#Script will bind and unbind Viewpoint nodes
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromField("bindView1")
ROUTE64.setFromNode("BindingSequencerEngine")
ROUTE64.setToField("set_bind")
ROUTE64.setToNode("View1")

Transform47.addChildren(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromField("bindView2")
ROUTE65.setFromNode("BindingSequencerEngine")
ROUTE65.setToField("set_bind")
ROUTE65.setToNode("View2")

Transform47.addChildren(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromField("bindView3")
ROUTE66.setFromNode("BindingSequencerEngine")
ROUTE66.setToField("set_bind")
ROUTE66.setToNode("View3")

Transform47.addChildren(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromField("bindView4")
ROUTE67.setFromNode("BindingSequencerEngine")
ROUTE67.setToField("set_bind")
ROUTE67.setToNode("View4")

Transform47.addChildren(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromField("bindView5")
ROUTE68.setFromNode("BindingSequencerEngine")
ROUTE68.setToField("set_bind")
ROUTE68.setToNode("ClickToAnimateView")

Transform47.addChildren(ROUTE68)
#Viewpoint nodes report bind and unbind events
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromField("isBound")
ROUTE69.setFromNode("View1")
ROUTE69.setToField("view1Bound")
ROUTE69.setToNode("BindingSequencerEngine")

Transform47.addChildren(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromField("isBound")
ROUTE70.setFromNode("View2")
ROUTE70.setToField("view2Bound")
ROUTE70.setToNode("BindingSequencerEngine")

Transform47.addChildren(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromField("isBound")
ROUTE71.setFromNode("View3")
ROUTE71.setToField("view3Bound")
ROUTE71.setToNode("BindingSequencerEngine")

Transform47.addChildren(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromField("isBound")
ROUTE72.setFromNode("View4")
ROUTE72.setToField("view4Bound")
ROUTE72.setToNode("BindingSequencerEngine")

Transform47.addChildren(ROUTE72)
X3DScript73 = x3d.X3DScript()
X3DScript73.setDEF("BindingSequencerEngine")
field74 = x3d.field()
field74.setName("set_timeEvent")
field74.setAccessType("inputOnly")
field74.setType("SFInt32")

X3DScript73.addField(field74)
field75 = x3d.field()
field75.setName("bindView1")
field75.setAccessType("outputOnly")
field75.setType("SFBool")

X3DScript73.addField(field75)
field76 = x3d.field()
field76.setName("bindView2")
field76.setAccessType("outputOnly")
field76.setType("SFBool")

X3DScript73.addField(field76)
field77 = x3d.field()
field77.setName("bindView3")
field77.setAccessType("outputOnly")
field77.setType("SFBool")

X3DScript73.addField(field77)
field78 = x3d.field()
field78.setName("bindView4")
field78.setAccessType("outputOnly")
field78.setType("SFBool")

X3DScript73.addField(field78)
field79 = x3d.field()
field79.setName("bindView5")
field79.setAccessType("outputOnly")
field79.setType("SFBool")

X3DScript73.addField(field79)
field80 = x3d.field()
field80.setName("view1Bound")
field80.setAccessType("inputOnly")
field80.setType("SFBool")

X3DScript73.addField(field80)
field81 = x3d.field()
field81.setName("view2Bound")
field81.setAccessType("inputOnly")
field81.setType("SFBool")

X3DScript73.addField(field81)
field82 = x3d.field()
field82.setName("view3Bound")
field82.setAccessType("inputOnly")
field82.setType("SFBool")

X3DScript73.addField(field82)
field83 = x3d.field()
field83.setName("view4Bound")
field83.setAccessType("inputOnly")
field83.setType("SFBool")

X3DScript73.addField(field83)
field84 = x3d.field()
field84.setName("priorInputvalue")
field84.setAccessType("initializeOnly")
field84.setType("SFInt32")
field84.setValue("-1")

X3DScript73.addField(field84)

Transform47.addX3DScript(X3DScript73)

Scene17.addChildren(Transform47)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/BindingOperations_RoundTrip.x3d")
