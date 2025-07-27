print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.3"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "creator"
meta2.content = "John W Carlson"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "created"
meta3.content = "December 13 2015"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "title"
meta4.content = "text.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/text.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "test \\n text"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "generator"
meta7.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
Transform9 = x3d.Transform()
Shape10 = x3d.Shape()
Text11 = x3d.Text()
Text11.string = ["Node\"\"\""]
FontStyle12 = x3d.FontStyle()

Text11.fontStyle = FontStyle12

Shape10.geometry = Text11
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()

Appearance13.material = Material14

Shape10.appearance = Appearance13

Transform9.children.append(Shape10)
Shape15 = x3d.Shape()
Text16 = x3d.Text()
Text16.string = ["Node2","\\\\","\\\\\\\\","Node2"]
FontStyle17 = x3d.FontStyle()

Text16.fontStyle = FontStyle17

Shape15.geometry = Text16
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()

Appearance18.material = Material19

Shape15.appearance = Appearance18

Transform9.children.append(Shape15)
Shape20 = x3d.Shape()
Text21 = x3d.Text()
Text21.string = ["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]
FontStyle22 = x3d.FontStyle()

Text21.fontStyle = FontStyle22

Shape20.geometry = Text21
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()

Appearance23.material = Material24

Shape20.appearance = Appearance23

Transform9.children.append(Shape20)
Script25 = x3d.Script()
field26 = x3d.field()
field26.name = "frontUrls"
field26.type = "MFString"
field26.accessType = "initializeOnly"
field26.value = ["rnl_front.png","uffizi_front.png"]

Script25.field.append(field26)

Script25.sourceCode = '''ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';'''

Transform9.children.append(Script25)

Scene8.children.append(Transform9)

X3D0.Scene = Scene8
f = open("../personal/text.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/text.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
