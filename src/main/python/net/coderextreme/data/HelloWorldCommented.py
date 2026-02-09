print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "HelloWorldCommented.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Numerous comments added to simple X3D scene example for testing JSON encoding alternatives."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "19 December 2015"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "Mon, 09 Feb 2026 07:11:17 GMT"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Don Brutzman"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "info"
meta7.content = "HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental."

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "HelloWorldCommented.json"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "HelloWorldCommentedOriginalEncoding.json"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "HelloWorldCommentedAlternativeEncoding.json"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "Hello world!"

Scene12.children.append(WorldInfo13)
Group14 = x3d.Group()
Viewpoint15 = x3d.Viewpoint(DEF="ViewUpClose")
Viewpoint15.description = "Hello world!"
Viewpoint15.position = [0,-1,7]
Viewpoint15.centerOfRotation = [0,-1,0]

Group14.children.append(Viewpoint15)
Transform16 = x3d.Transform()
Transform16.rotation = [0,1,0,3]
Shape17 = x3d.Shape()
Appearance18 = x3d.Appearance()
Material19 = x3d.Material(DEF="MaterialLightBlue")
Material19.diffuseColor = [0.1,0.5,1]

Appearance18.material = Material19
ImageTexture20 = x3d.ImageTexture(DEF="ImageCloudlessEarth")
ImageTexture20.url = ["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]

Appearance18.texture = ImageTexture20

Shape17.appearance = Appearance18
Sphere21 = x3d.Sphere()

Shape17.geometry = Sphere21

Transform16.children.append(Shape17)

Group14.children.append(Transform16)
Transform22 = x3d.Transform()
Transform22.translation = [0,-2,0]
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance()
Material25 = x3d.Material(USE="MaterialLightBlue")

Appearance24.material = Material25

Shape23.appearance = Appearance24
Text26 = x3d.Text(DEF="TextMessage")
Text26.string = ["Hello","world!"]
FontStyle27 = x3d.FontStyle()
FontStyle27.justify = ["MIDDLE","MIDDLE"]

Text26.fontStyle = FontStyle27

Shape23.geometry = Text26

Transform22.children.append(Shape23)

Group14.children.append(Transform22)

Scene12.children.append(Group14)

X3D0.Scene = Scene12
f = open("../data/HelloWorldCommented.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HelloWorldCommented.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HelloWorldCommented.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
