print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta4.content = "text3shapes.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "3 text shapes"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
Transform8 = x3d.Transform()
Shape9 = x3d.Shape()
Appearance10 = x3d.Appearance()
Material11 = x3d.Material()

Appearance10.material = Material11

Shape9.appearance = Appearance10
Text12 = x3d.Text()
Text12.string = ["Node\"\"\""]
FontStyle13 = x3d.FontStyle()

Text12.fontStyle = FontStyle13

Shape9.geometry = Text12

Transform8.children.append(Shape9)
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()

Appearance15.material = Material16

Shape14.appearance = Appearance15
Text17 = x3d.Text()
Text17.string = ["Node2","\\\\","\\\\\\\\","Node2"]
FontStyle18 = x3d.FontStyle()

Text17.fontStyle = FontStyle18

Shape14.geometry = Text17

Transform8.children.append(Shape14)
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()

Appearance20.material = Material21

Shape19.appearance = Appearance20
Text22 = x3d.Text()
Text22.string = ["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]
FontStyle23 = x3d.FontStyle()

Text22.fontStyle = FontStyle23

Shape19.geometry = Text22

Transform8.children.append(Shape19)
Script24 = x3d.Script()
field25 = x3d.field()
field25.accessType = "initializeOnly"
field25.type = "MFString"
field25.name = "frontUrls"
field25.value = ["rnl_front.png","uffizi_front.png"]

Script24.field.append(field25)

Script24.sourceCode = '''ecmascript:\n"+
"			    var me = '\"1\" \"\\\"2\" \"\\n3\"';'''

Transform8.children.append(Script24)

Scene7.children.append(Transform8)

X3D0.Scene = Scene7
f = open("../data/text3shapes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/text3shapes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/text3shapes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
