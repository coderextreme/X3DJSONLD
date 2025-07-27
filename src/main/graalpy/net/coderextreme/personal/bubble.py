import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("bubble.x3d")

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
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/bubble.x3d")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.setPosition(x3d.doubleToFloat([0,0,4]))
Viewpoint9.setOrientation(x3d.doubleToFloat([1,0,0,0]))
Viewpoint9.setDescription("Bubble in action")

Scene7.addChild(Viewpoint9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.setName("Bubble")
ProtoBody11 = x3d.ProtoBody()
Transform12 = x3d.Transform()
Transform12.setDEF("transform")
Shape13 = x3d.Shape()
Sphere14 = x3d.Sphere()
Sphere14.setRadius(0.25)

Shape13.setGeometry(Sphere14)
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.setDiffuseColor(x3d.doubleToFloat([1,0,0]))
Material16.setTransparency(0.2)

Appearance15.setMaterial(Material16)

Shape13.setAppearance(Appearance15)

Transform12.addChild(Shape13)
Script17 = x3d.Script()
Script17.setDEF("bounce")
field18 = x3d.field()
field18.setName("scale")
field18.setAccessType("inputOutput")
field18.setType("SFVec3f")
field18.setValue("1 1 1")

Script17.addField(field18)
field19 = x3d.field()
field19.setName("translation")
field19.setAccessType("inputOutput")
field19.setType("SFVec3f")
field19.setValue("0 0 0")

Script17.addField(field19)
field20 = x3d.field()
field20.setName("velocity")
field20.setAccessType("inputOutput")
field20.setType("SFVec3f")
field20.setValue("0 0 0")

Script17.addField(field20)
field21 = x3d.field()
field21.setName("scalvel")
field21.setAccessType("inputOutput")
field21.setType("SFVec3f")
field21.setValue("0 0 0")

Script17.addField(field21)
field22 = x3d.field()
field22.setName("set_fraction")
field22.setAccessType("inputOnly")
field22.setType("SFFloat")

Script17.addField(field22)

Script17.setSourceCode('''ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
	translation = new SFVec3f(
		translation.x + velocity.x,
		translation.y + velocity.y,
		translation.z + velocity.z);
	scale = new SFVec3f(
		scale.x + scalvel.x,
		scale.y + scalvel.y,
		scale.z + scalvel.z);
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
		scale.x = scale.x/2;
		translation.x = 0;
		initialize();
	}
	if (Math.abs(scale.y) > 20) {
		scale.y = scale.y/2;
		translation.y = 0;
		initialize();
	}
	if (Math.abs(scale.z) > 20) {
		scale.z = scale.z/2;
		translation.z = 0;
		initialize();
	}
}''')

Transform12.addChild(Script17)
TimeSensor23 = x3d.TimeSensor()
TimeSensor23.setDEF("bubbleClock")
TimeSensor23.setCycleInterval(10)
TimeSensor23.setLoop(True)

Transform12.addChild(TimeSensor23)
ROUTE24 = x3d.ROUTE()
ROUTE24.setFromNode("bounce")
ROUTE24.setFromField("translation_changed")
ROUTE24.setToNode("transform")
ROUTE24.setToField("set_translation")

Transform12.addChild(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.setFromNode("bounce")
ROUTE25.setFromField("scale_changed")
ROUTE25.setToNode("transform")
ROUTE25.setToField("set_scale")

Transform12.addChild(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.setFromNode("bubbleClock")
ROUTE26.setFromField("fraction_changed")
ROUTE26.setToNode("bounce")
ROUTE26.setToField("set_fraction")

Transform12.addChild(ROUTE26)

ProtoBody11.addChild(Transform12)

ProtoDeclare10.setProtoBody(ProtoBody11)

Scene7.addChild(ProtoDeclare10)
ProtoInstance27 = x3d.ProtoInstance()
ProtoInstance27.setName("Bubble")
ProtoInstance27.setDEF("bubbleA")

Scene7.addChild(ProtoInstance27)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/bubble.new.graalpy.x3d")
X3D0.toFileJSON("../personal/bubble.new.graalpy.json")
