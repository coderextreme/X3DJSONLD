print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "TextExamples.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Show different escape-character text examples for embedded quotation marks."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Don Brutzman"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "7 April 2001"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "26 April 2016"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "warning"
meta7.content = "Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control."

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "warning"
meta8.content = "Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations."

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "identifier"
meta9.content = "https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "generator"
meta10.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "license"
meta11.content = "../license.html"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
Transform13 = x3d.Transform()
Transform13.translation = [0,2,0]
Shape14 = x3d.Shape()
Text15 = x3d.Text()
Text15.string = ["Compare special character escaping"]
FontStyle16 = x3d.FontStyle()
FontStyle16.DEF = "testFontStyle"
FontStyle16.justify = ["MIDDLE","MIDDLE"]
FontStyle16.size = 0.8

Text15.fontStyle = FontStyle16

Shape14.geometry = Text15
Appearance17 = x3d.Appearance()
Appearance17.DEF = "LightBlueAppearance"
Material18 = x3d.Material()
Material18.diffuseColor = [0.1,0.7,0.7]

Appearance17.material = Material18

Shape14.appearance = Appearance17

Transform13.children.append(Shape14)

Scene12.children.append(Transform13)
Transform19 = x3d.Transform()
Transform19.translation = [-3,0,0]
Shape20 = x3d.Shape()
Text21 = x3d.Text()
Text21.string = ["I don't think so","","he said \"Hi\""]
FontStyle22 = x3d.FontStyle()
FontStyle22.USE = "testFontStyle"

Text21.fontStyle = FontStyle22

Shape20.geometry = Text21
Appearance23 = x3d.Appearance()
Appearance23.USE = "LightBlueAppearance"

Shape20.appearance = Appearance23

Transform19.children.append(Shape20)

Scene12.children.append(Transform19)
Transform24 = x3d.Transform()
Transform24.translation = [3,0,0]
Shape25 = x3d.Shape()
Text26 = x3d.Text()
Text26.string = ["I don't think so","","he said \"Hi\""]
FontStyle27 = x3d.FontStyle()
FontStyle27.USE = "testFontStyle"

Text26.fontStyle = FontStyle27

Shape25.geometry = Text26
Appearance28 = x3d.Appearance()
Appearance28.USE = "LightBlueAppearance"

Shape25.appearance = Appearance28

Transform24.children.append(Shape25)

Scene12.children.append(Transform24)

X3D0.Scene = Scene12
f = open("../data/TextExamples.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/TextExamples.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/TextExamples.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
