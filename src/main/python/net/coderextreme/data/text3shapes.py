import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("title")
meta4.setContent("text3shapes.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("3 text shapes")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("generator")
meta7.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = x3d.Scene()
Transform9 = x3d.Transform()
Shape10 = x3d.Shape()
Text11 = x3d.Text()
Text11.setString(["Node\"\"\""])
FontStyle12 = x3d.FontStyle()

Text11.setFontStyle(FontStyle12)

Shape10.setGeometry(Text11)
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()

Appearance13.setMaterial(Material14)

Shape10.setAppearance(Appearance13)

Transform9.addChild(Shape10)
Shape15 = x3d.Shape()
Text16 = x3d.Text()
Text16.setString(["Node2","\\\\","\\\\\\\\","Node2"])
FontStyle17 = x3d.FontStyle()

Text16.setFontStyle(FontStyle17)

Shape15.setGeometry(Text16)
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()

Appearance18.setMaterial(Material19)

Shape15.setAppearance(Appearance18)

Transform9.addChild(Shape15)
Shape20 = x3d.Shape()
Text21 = x3d.Text()
Text21.setString(["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""])
FontStyle22 = x3d.FontStyle()

Text21.setFontStyle(FontStyle22)

Shape20.setGeometry(Text21)
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()

Appearance23.setMaterial(Material24)

Shape20.setAppearance(Appearance23)

Transform9.addChild(Shape20)
Script25 = x3d.Script()
field26 = x3d.field()
field26.setName("frontUrls")
field26.setType("MFString")
field26.setAccessType("initializeOnly")
field26.setValue("\"rnl_front.png\" \"uffizi_front.png\"")

Script25.addField(field26)

Script25.setSourceCode('''ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';''')

Transform9.addChildren(Script25)

Scene8.addChildren(Transform9)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/text3shapes.new.python.x3d")
X3D0.toFileJSON("../data/text3shapes.new.python.json")
