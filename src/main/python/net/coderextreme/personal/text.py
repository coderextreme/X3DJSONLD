from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("title")
meta4.setContent("text.x3d")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/text.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("test \\n text")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("generator")
meta7.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = Scene()
Transform9 = Transform()
Shape10 = Shape()
Text11 = Text()
Text11.setString(["Node\"\"\""])
FontStyle12 = FontStyle()

Text11.setFontStyle(FontStyle12)

Shape10.setGeometry(Text11)
Appearance13 = Appearance()
Material14 = Material()

Appearance13.setMaterial(Material14)

Shape10.setAppearance(Appearance13)

Transform9.addChildren(Shape10)
Shape15 = Shape()
Text16 = Text()
Text16.setString(["Node2","\\\\","\\\\\\\\","Node2"])
FontStyle17 = FontStyle()

Text16.setFontStyle(FontStyle17)

Shape15.setGeometry(Text16)
Appearance18 = Appearance()
Material19 = Material()

Appearance18.setMaterial(Material19)

Shape15.setAppearance(Appearance18)

Transform9.addChildren(Shape15)
Shape20 = Shape()
Text21 = Text()
Text21.setString(["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""])
FontStyle22 = FontStyle()

Text21.setFontStyle(FontStyle22)

Shape20.setGeometry(Text21)
Appearance23 = Appearance()
Material24 = Material()

Appearance23.setMaterial(Material24)

Shape20.setAppearance(Appearance23)

Transform9.addChildren(Shape20)
Script25 = Script()
field26 = field()
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
X3D0.toFileX3D("../personal/text_RoundTrip.x3d")
