import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("bubs2.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Tour around a prismatic sphere")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("translated")
meta7.setContent("13 March 2016")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("generator")
meta8.setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html")

head1.addMeta(meta8)
component9 = x3d.component()
component9.setName("Scripting")
component9.setLevel(1)

head1.addComponent(component9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
NavigationInfo11 = x3d.NavigationInfo()
NavigationInfo11.setType(["EXAMINE"])

Scene10.addChild(NavigationInfo11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.setPosition(x3d.doubleToFloat([0,0,4]))
Viewpoint12.setOrientation(x3d.doubleToFloat([1,0,0,0]))
Viewpoint12.setDescription("Bubbles in action")

Scene10.addChild(Viewpoint12)
Background13 = x3d.Background()
Background13.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"])
Background13.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"])
Background13.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"])
Background13.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"])
Background13.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"])
Background13.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"])

Scene10.addChild(Background13)
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.setName("Bubble")
ProtoBody15 = x3d.ProtoBody()
Transform16 = x3d.Transform()
Transform16.setDEF("body_trans")
Shape17 = x3d.Shape()
Sphere18 = x3d.Sphere()
Sphere18.setRadius(0.25)

Shape17.setGeometry(Sphere18)
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.setDiffuseColor(x3d.doubleToFloat([1,0,0]))
Material20.setTransparency(0.2)

Appearance19.setMaterial(Material20)

Shape17.setAppearance(Appearance19)

Transform16.addChild(Shape17)
Script21 = x3d.Script()
Script21.setDEF("bounce")
field22 = x3d.field()
field22.setName("scale")
field22.setAccessType("inputOutput")
field22.setType("SFVec3f")
field22.setValue("1 1 1")

Script21.addField(field22)
field23 = x3d.field()
field23.setName("translation")
field23.setAccessType("inputOutput")
field23.setType("SFVec3f")
field23.setValue("0 0 0")

Script21.addField(field23)
field24 = x3d.field()
field24.setName("velocity")
field24.setAccessType("inputOutput")
field24.setType("SFVec3f")
field24.setValue("0 0 0")

Script21.addField(field24)
field25 = x3d.field()
field25.setName("scalvel")
field25.setAccessType("inputOutput")
field25.setType("SFVec3f")
field25.setValue("0 0 0")

Script21.addField(field25)
field26 = x3d.field()
field26.setName("set_fraction")
field26.setAccessType("inputOnly")
field26.setType("SFFloat")

Script21.addField(field26)

Script21.setSourceCode('''ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
    if (typeof translation === 'undefined') {
		translation = new SFVec3f(0, 0, 0);
    }
    if (typeof velocity === 'undefined') {
		velocity = new SFVec3f(0, 0, 0);
    }
    if (typeof scalvel === 'undefined') {
		scalvel = new SFVec3f(0, 0, 0);
    }
    if (typeof scale === 'undefined') {
		scale = new SFVec3f(1, 1, 1);
    }
    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(translation.x) > 256) {
	translation.x = 0;
	initialize();
    }
    if ( Math.abs(translation.y) > 256) {
	translation.y = 0;
	initialize();
    }
    if ( Math.abs(translation.z) > 256) {
	translation.z = 0;
	initialize();
    }
    if (Math.abs(scale.x) > 20) {
	scale.x = scale.x/20;
	translation.x = 0;
	initialize();
    }
    if (Math.abs(scale.y) > 20) {
	scale.y = scale.y/20;
	translation.y = 0;
	initialize();
    }
    if (Math.abs(scale.z) > 20) {
	scale.z = scale.z/20;
	translation.z = 0;
	initialize();
    }
}''')

Transform16.addChild(Script21)
TimeSensor27 = x3d.TimeSensor()
TimeSensor27.setDEF("bubbleClock")
TimeSensor27.setCycleInterval(10)
TimeSensor27.setLoop(True)

Transform16.addChild(TimeSensor27)
ROUTE28 = x3d.ROUTE()
ROUTE28.setFromNode("bounce")
ROUTE28.setFromField("translation_changed")
ROUTE28.setToNode("body_trans")
ROUTE28.setToField("set_translation")

Transform16.addChild(ROUTE28)
ROUTE29 = x3d.ROUTE()
ROUTE29.setFromNode("bounce")
ROUTE29.setFromField("scale_changed")
ROUTE29.setToNode("body_trans")
ROUTE29.setToField("set_scale")

Transform16.addChild(ROUTE29)
ROUTE30 = x3d.ROUTE()
ROUTE30.setFromNode("bubbleClock")
ROUTE30.setFromField("fraction_changed")
ROUTE30.setToNode("bounce")
ROUTE30.setToField("set_fraction")

Transform16.addChild(ROUTE30)

ProtoBody15.addChild(Transform16)

ProtoDeclare14.setProtoBody(ProtoBody15)

Scene10.addChild(ProtoDeclare14)
ProtoInstance31 = x3d.ProtoInstance()
ProtoInstance31.setName("Bubble")
ProtoInstance31.setDEF("bubbleA")

Scene10.addChild(ProtoInstance31)
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.setName("Bubble")
ProtoInstance32.setDEF("bubbleB")

Scene10.addChild(ProtoInstance32)
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.setName("Bubble")
ProtoInstance33.setDEF("bubbleC")

Scene10.addChild(ProtoInstance33)
ProtoInstance34 = x3d.ProtoInstance()
ProtoInstance34.setName("Bubble")
ProtoInstance34.setDEF("bubbleD")

Scene10.addChild(ProtoInstance34)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/bubs2.new.graalpy.x3d")
X3D0.toFileJSON("../data/bubs2.new.graalpy.json")
