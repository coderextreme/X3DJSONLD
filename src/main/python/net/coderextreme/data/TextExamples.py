print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta6.content = "Mon, 09 Feb 2026 07:13:12 GMT"

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

X3D0.head = head1
Scene10 = x3d.Scene()
Transform11 = x3d.Transform()
Transform11.translation = [0,2,0]
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance(DEF="LightBlueAppearance")
Material14 = x3d.Material()
Material14.diffuseColor = [0.1,0.7,0.7]

Appearance13.material = Material14

Shape12.appearance = Appearance13
Text15 = x3d.Text()
Text15.string = ["Compare special character escaping"]
FontStyle16 = x3d.FontStyle(DEF="testFontStyle")
FontStyle16.size = 0.8
FontStyle16.justify = ["MIDDLE","MIDDLE"]

Text15.fontStyle = FontStyle16

Shape12.geometry = Text15

Transform11.children.append(Shape12)

Scene10.children.append(Transform11)
Transform17 = x3d.Transform()
Transform17.translation = [-3,0,0]
Shape18 = x3d.Shape()
Appearance19 = x3d.Appearance(USE="LightBlueAppearance")

Shape18.appearance = Appearance19
Text20 = x3d.Text()
Text20.string = ["I don't think so","","he said \"Hi\""]
FontStyle21 = x3d.FontStyle(USE="testFontStyle")

Text20.fontStyle = FontStyle21

Shape18.geometry = Text20

Transform17.children.append(Shape18)

Scene10.children.append(Transform17)
Transform22 = x3d.Transform()
Transform22.translation = [3,0,0]
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance(USE="LightBlueAppearance")

Shape23.appearance = Appearance24
Text25 = x3d.Text()
Text25.string = ["I don't think so","","he said \"Hi\""]
FontStyle26 = x3d.FontStyle(USE="testFontStyle")

Text25.fontStyle = FontStyle26

Shape23.geometry = Text25

Transform22.children.append(Shape23)

Scene10.children.append(Transform22)

X3D0.Scene = Scene10
f = open("../data/TextExamples.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/TextExamples.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/TextExamples.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
