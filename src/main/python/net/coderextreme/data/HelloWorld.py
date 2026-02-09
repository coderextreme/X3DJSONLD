print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "HelloWorld.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Simple X3D model example: Hello World!"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "30 October 2000"

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
meta7.name = "Image"
meta7.content = "HelloWorld.tall.png"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "https://en.wikipedia.org/wiki/Hello_world"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "https://www.HelloWorldExample.net"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "https://www.web3d.org"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "https://www.web3d.org/realtime-3d/news/internationalization-x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "https://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "identifier"
meta17.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "license"
meta18.content = "https://www.web3d.org/x3d/content/examples/license.html"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "generator"
meta19.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "generator"
meta20.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "reference"
meta21.content = "HelloWorld.wrl"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "reference"
meta22.content = "HelloWorld.x3dv"

head1.children.append(meta22)

X3D0.head = head1
Scene23 = x3d.Scene()
WorldInfo24 = x3d.WorldInfo()
WorldInfo24.title = "Hello World!"
WorldInfo24.info = ["Example scene to illustrate a simple X3D model"]

Scene23.children.append(WorldInfo24)
Group25 = x3d.Group()
Viewpoint26 = x3d.Viewpoint(DEF="ViewUpClose")
Viewpoint26.description = "Hello world!"
Viewpoint26.position = [0,-1,7]
Viewpoint26.centerOfRotation = [0,-1,0]

Group25.children.append(Viewpoint26)
Transform27 = x3d.Transform()
Transform27.rotation = [0,1,0,3]
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance()
Material30 = x3d.Material(DEF="MaterialLightBlue")
Material30.diffuseColor = [0.1,0.5,1]

Appearance29.material = Material30
ImageTexture31 = x3d.ImageTexture(DEF="ImageCloudlessEarth")
ImageTexture31.url = ["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]

Appearance29.texture = ImageTexture31

Shape28.appearance = Appearance29
Sphere32 = x3d.Sphere()

Shape28.geometry = Sphere32

Transform27.children.append(Shape28)

Group25.children.append(Transform27)
Transform33 = x3d.Transform()
Transform33.translation = [0,-2,0]
Shape34 = x3d.Shape()
Appearance35 = x3d.Appearance()
Material36 = x3d.Material(USE="MaterialLightBlue")

Appearance35.material = Material36

Shape34.appearance = Appearance35
Text37 = x3d.Text(DEF="TextMessage")
Text37.string = ["Hello","world!"]
FontStyle38 = x3d.FontStyle()
FontStyle38.justify = ["MIDDLE","MIDDLE"]

Text37.fontStyle = FontStyle38

Shape34.geometry = Text37

Transform33.children.append(Shape34)

Group25.children.append(Transform33)

Scene23.children.append(Group25)

X3D0.Scene = Scene23
f = open("../data/HelloWorld.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HelloWorld.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HelloWorld.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
