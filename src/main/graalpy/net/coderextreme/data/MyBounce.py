import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("MyBounce.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("3 prismatic spheres")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.addChild(NavigationInfo8)
Transform9 = x3d.Transform()
Transform9.setDEF("transform")
Shape10 = x3d.Shape()
Appearance11 = x3d.Appearance()
Material12 = x3d.Material()
Material12.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material12.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance11.setMaterial(Material12)

Shape10.setAppearance(Appearance11)
Sphere13 = x3d.Sphere()

Shape10.setGeometry(Sphere13)

Transform9.addChild(Shape10)

Scene7.addChild(Transform9)
Script14 = x3d.Script()
Script14.setDEF("Bounce2")
field15 = x3d.field()
field15.setName("set_translation")
field15.setAccessType("inputOnly")
field15.setType("SFVec3f")
field15.setValue("0 0 0")

Script14.addField(field15)
field16 = x3d.field()
field16.setName("translation_changed")
field16.setAccessType("outputOnly")
field16.setType("SFVec3f")
field16.setValue("0 0 0")

Script14.addField(field16)
field17 = x3d.field()
field17.setName("translation")
field17.setAccessType("inputOutput")
field17.setType("SFVec3f")
field17.setValue("0 0 0")

Script14.addField(field17)
field18 = x3d.field()
field18.setName("velocity")
field18.setAccessType("inputOutput")
field18.setType("SFVec3f")
field18.setValue("0 0 0")

Script14.addField(field18)
field19 = x3d.field()
field19.setName("set_fraction")
field19.setAccessType("inputOnly")
field19.setType("SFTime")

Script14.addField(field19)

Script14.setSourceCode('''ecmascript:
			function newBubble() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
				if (Math.abs(translation.x) > 10) {
					newBubble();
				} else if (Math.abs(translation.y) > 10) {
					newBubble();
				} else if (Math.abs(translation.z) > 10) {
					newBubble();
				} else {
					velocity = new SFVec3f(
						velocity.x + Math.random() * 0.2 - 0.1,
						velocity.y + Math.random() * 0.2 - 0.1,
						velocity.z + Math.random() * 0.2 - 0.1
					);
				}
			}

			function initialize() {
			     newBubble();
			}''')

Scene7.addChild(Script14)
TimeSensor20 = x3d.TimeSensor()
TimeSensor20.setDEF("TourTime")
TimeSensor20.setCycleInterval(0.15)
TimeSensor20.setLoop(True)

Scene7.addChild(TimeSensor20)
ROUTE21 = x3d.ROUTE()
ROUTE21.setFromNode("TourTime")
ROUTE21.setFromField("cycleTime")
ROUTE21.setToNode("Bounce2")
ROUTE21.setToField("set_fraction")

Scene7.addChild(ROUTE21)
ROUTE22 = x3d.ROUTE()
ROUTE22.setFromNode("Bounce2")
ROUTE22.setFromField("translation_changed")
ROUTE22.setToNode("transform")
ROUTE22.setToField("set_translation")

Scene7.addChild(ROUTE22)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/MyBounce.new.graalpy.x3d")
X3D0.toFileJSON("../data/MyBounce.new.graalpy.json")
