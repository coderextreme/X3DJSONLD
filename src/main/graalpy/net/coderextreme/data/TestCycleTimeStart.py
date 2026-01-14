import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Interactive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("TestCycleTimeStart.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Andreas")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Joe D. Williams")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("Test design patterns for animation control.")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("10 September 2023")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("Mon, 15 Sep 2025 05:20:59 GMT")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("identifier")
meta10.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = x3d.Scene()
WorldInfo12 = x3d.WorldInfo()
WorldInfo12.setTitle("TestCycleTimeStart.x3d")

Scene11.addChild(WorldInfo12)
Viewpoint13 = x3d.Viewpoint()
Viewpoint13.setDescription("hello in there")

Scene11.addChild(Viewpoint13)
TimeSensor14 = x3d.TimeSensor()
TimeSensor14.setDEF("REDTIME1")
TimeSensor14.setLoop(True)
TimeSensor14.setStopTime(1757913659.298)

Scene11.addChild(TimeSensor14)
TimeSensor15 = x3d.TimeSensor()
TimeSensor15.setDEF("GREENTIME2")
TimeSensor15.setCycleInterval(5)
TimeSensor15.setStartTime(1757913659.298)

Scene11.addChild(TimeSensor15)
TimeSensor16 = x3d.TimeSensor()
TimeSensor16.setDEF("BLUETIME3")
TimeSensor16.setCycleInterval(10)

Scene11.addChild(TimeSensor16)
BooleanFilter17 = x3d.BooleanFilter()
BooleanFilter17.setDEF("GREENFILTER")

Scene11.addChild(BooleanFilter17)
TimeTrigger18 = x3d.TimeTrigger()
TimeTrigger18.setDEF("BLUETRIGGER")

Scene11.addChild(TimeTrigger18)
Transform19 = x3d.Transform()
Transform19.setDEF("REDBALL")
Transform19.setTranslation(x3d.doubleToFloat([1.615999,0,0]))
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
Sphere23 = x3d.Sphere()

Shape20.setGeometry(Sphere23)

Transform19.addChild(Shape20)

Scene11.addChild(Transform19)
Transform24 = x3d.Transform()
Transform24.setDEF("GREENBALL")
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.setDiffuseColor(x3d.doubleToFloat([0,1,0]))

Appearance26.setMaterial(Material27)

Shape25.setAppearance(Appearance26)
Sphere28 = x3d.Sphere()

Shape25.setGeometry(Sphere28)

Transform24.addChild(Shape25)

Scene11.addChild(Transform24)
Transform29 = x3d.Transform()
Transform29.setDEF("BLUEBALL")
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
Material32.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance31.setMaterial(Material32)

Shape30.setAppearance(Appearance31)
Sphere33 = x3d.Sphere()

Shape30.setGeometry(Sphere33)

Transform29.addChild(Shape30)

Scene11.addChild(Transform29)
PositionInterpolator34 = x3d.PositionInterpolator()
PositionInterpolator34.setDEF("REDINTERP1")
PositionInterpolator34.setKey(x3d.doubleToFloat([0,0.25,0.5,0.75,1]))
PositionInterpolator34.setKeyValue(x3d.doubleToFloat([0,0,0,2,0,0,0,0,0,-2,0,0,0,0,0]))

Scene11.addChild(PositionInterpolator34)
PositionInterpolator35 = x3d.PositionInterpolator()
PositionInterpolator35.setDEF("GREENINTERP2")
PositionInterpolator35.setKey(x3d.doubleToFloat([0,0.25,0.5,0.75,1]))
PositionInterpolator35.setKeyValue(x3d.doubleToFloat([0,0,0,0,2,0,0,0,0,0,-2,0,0,0,0]))

Scene11.addChild(PositionInterpolator35)
PositionInterpolator36 = x3d.PositionInterpolator()
PositionInterpolator36.setDEF("BLUEINTERP3")
PositionInterpolator36.setKey(x3d.doubleToFloat([0,0.25,0.5,0.75,1]))
PositionInterpolator36.setKeyValue(x3d.doubleToFloat([0,0,0,0,-2,0,0,0,0,0,2,0,0,0,0]))

Scene11.addChild(PositionInterpolator36)
ROUTE37 = x3d.ROUTE()
ROUTE37.setFromNode("REDTIME1")
ROUTE37.setFromField("cycleTime")
ROUTE37.setToNode("REDTIME1")
ROUTE37.setToField("set_stopTime")

Scene11.addChild(ROUTE37)
ROUTE38 = x3d.ROUTE()
ROUTE38.setFromNode("REDTIME1")
ROUTE38.setFromField("stopTime_changed")
ROUTE38.setToNode("GREENTIME2")
ROUTE38.setToField("set_startTime")

Scene11.addChild(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.setFromNode("GREENTIME2")
ROUTE39.setFromField("isActive")
ROUTE39.setToNode("GREENFILTER")
ROUTE39.setToField("set_boolean")

Scene11.addChild(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.setFromNode("GREENFILTER")
ROUTE40.setFromField("inputFalse")
ROUTE40.setToNode("BLUETRIGGER")
ROUTE40.setToField("set_boolean")

Scene11.addChild(ROUTE40)
ROUTE41 = x3d.ROUTE()
ROUTE41.setFromNode("BLUETRIGGER")
ROUTE41.setFromField("triggerTime")
ROUTE41.setToNode("BLUETIME3")
ROUTE41.setToField("set_startTime")

Scene11.addChild(ROUTE41)
ROUTE42 = x3d.ROUTE()
ROUTE42.setFromNode("REDTIME1")
ROUTE42.setFromField("fraction_changed")
ROUTE42.setToNode("REDINTERP1")
ROUTE42.setToField("set_fraction")

Scene11.addChild(ROUTE42)
ROUTE43 = x3d.ROUTE()
ROUTE43.setFromNode("REDINTERP1")
ROUTE43.setFromField("value_changed")
ROUTE43.setToNode("REDBALL")
ROUTE43.setToField("set_translation")

Scene11.addChild(ROUTE43)
ROUTE44 = x3d.ROUTE()
ROUTE44.setFromNode("GREENTIME2")
ROUTE44.setFromField("fraction_changed")
ROUTE44.setToNode("GREENINTERP2")
ROUTE44.setToField("set_fraction")

Scene11.addChild(ROUTE44)
ROUTE45 = x3d.ROUTE()
ROUTE45.setFromNode("GREENINTERP2")
ROUTE45.setFromField("value_changed")
ROUTE45.setToNode("GREENBALL")
ROUTE45.setToField("set_translation")

Scene11.addChild(ROUTE45)
ROUTE46 = x3d.ROUTE()
ROUTE46.setFromNode("BLUETIME3")
ROUTE46.setFromField("fraction_changed")
ROUTE46.setToNode("BLUEINTERP3")
ROUTE46.setToField("set_fraction")

Scene11.addChild(ROUTE46)
ROUTE47 = x3d.ROUTE()
ROUTE47.setFromNode("BLUEINTERP3")
ROUTE47.setFromField("value_changed")
ROUTE47.setToNode("BLUEBALL")
ROUTE47.setToField("set_translation")

Scene11.addChild(ROUTE47)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/TestCycleTimeStart.new.graalpy.x3d")
X3D0.toFileJSON("../data/TestCycleTimeStart.new.graalpy.x3dj")
