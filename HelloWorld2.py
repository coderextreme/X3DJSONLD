from x3d import *
X3D0 = X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.3"
head1 = head()
#Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON
meta2 = meta()
meta2.name = "title"
meta2.content = "HelloWorld.x3d"

head1.children.append(meta2)
meta3 = meta()
meta3.name = "description"
meta3.content = "Simple X3D model example: Hello World!"

head1.children.append(meta3)
meta4 = meta()
meta4.name = "created"
meta4.content = "30 October 2000"

head1.children.append(meta4)
meta5 = meta()
meta5.name = "modified"
meta5.content = "20 October 2019"

head1.children.append(meta5)
meta6 = meta()
meta6.name = "creator"
meta6.content = "Don Brutzman"

head1.children.append(meta6)
meta7 = meta()
meta7.name = "Image"
meta7.content = "HelloWorld.tall.png"

head1.children.append(meta7)
meta8 = meta()
meta8.name = "reference"
meta8.content = "http://en.wikipedia.org/wiki/Hello_world"

head1.children.append(meta8)
meta9 = meta()
meta9.name = "reference"
meta9.content = "https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"

head1.children.append(meta9)
meta10 = meta()
meta10.name = "reference"
meta10.content = "https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"

head1.children.append(meta10)
meta11 = meta()
meta11.name = "reference"
meta11.content = "http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"

head1.children.append(meta11)
meta12 = meta()
meta12.name = "reference"
meta12.content = "http://www.HelloWorldExample.net"

head1.children.append(meta12)
meta13 = meta()
meta13.name = "reference"
meta13.content = "https://www.web3d.org"

head1.children.append(meta13)
meta14 = meta()
meta14.name = "reference"
meta14.content = "https://www.web3d.org/realtime-3d/news/internationalization-x3d"

head1.children.append(meta14)
meta15 = meta()
meta15.name = "reference"
meta15.content = "https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"

head1.children.append(meta15)
meta16 = meta()
meta16.name = "reference"
meta16.content = "http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"

head1.children.append(meta16)
meta17 = meta()
meta17.name = "identifier"
meta17.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"

head1.children.append(meta17)
meta18 = meta()
meta18.name = "license"
meta18.content = "https://www.web3d.org/x3d/content/examples/license.html"

head1.children.append(meta18)
meta19 = meta()
meta19.name = "generator"
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta19)
meta20 = meta()
meta20.name = "reference"
meta20.content = "HelloWorld.wrl"

head1.children.append(meta20)
meta21 = meta()
meta21.name = "reference"
meta21.content = "HelloWorld.x3dv"

head1.children.append(meta21)
meta22 = meta()
meta22.name = "reference"
meta22.content = "HelloWorld.x3db"

head1.children.append(meta22)
meta23 = meta()
meta23.name = "reference"
meta23.content = "HelloWorld.xhtml"

head1.children.append(meta23)
meta24 = meta()
meta24.name = "reference"
meta24.content = "HelloWorld.json"

head1.children.append(meta24)

X3D0.head = head1
Scene25 = Scene()
#Example scene to illustrate X3D nodes and fields (XML elements and attributes)
WorldInfo26 = WorldInfo()
WorldInfo26.info = ["Example scene to illustrate a simple X3D model"]
WorldInfo26.title = "Hello World!"

Scene25.children.append(WorldInfo26)
Group27 = Group()
Viewpoint28 = Viewpoint()
Viewpoint28.DEF = "ViewUpClose"
Viewpoint28.centerOfRotation = [0,-1,0]
Viewpoint28.description = "Hello world!"
Viewpoint28.position = [0,-1,7]

Group27.children.append(Viewpoint28)
Transform29 = Transform()
Transform29.rotation = [0,1,0,3]
Shape30 = Shape()
Sphere31 = Sphere()

Shape30.geometry = Sphere31
Appearance32 = Appearance()
Material33 = Material()
Material33.DEF = "MaterialLightBlue"
Material33.diffuseColor = [0.1,0.5,1]

Appearance32.material = Material33
ImageTexture34 = ImageTexture()
ImageTexture34.DEF = "ImageCloudlessEarth"
ImageTexture34.url = ["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]

Appearance32.texture = ImageTexture34

Shape30.appearance = Appearance32

Transform29.children.append(Shape30)

Group27.children.append(Transform29)
Transform35 = Transform()
Transform35.translation = [0,-2,0]
Shape36 = Shape()
Text37 = Text()
Text37.DEF = "TextMessage"
Text37.string = ["Hello","world!"]
FontStyle38 = FontStyle()
FontStyle38.justify = ["MIDDLE","MIDDLE"]

Text37.fontStyle = FontStyle38

Shape36.geometry = Text37
Appearance39 = Appearance()
Material40 = Material()
Material40.USE = "MaterialLightBlue"

Appearance39.material = Material40

Shape36.appearance = Appearance39

Transform35.children.append(Shape36)

Group27.children.append(Transform35)

Scene25.children.append(Group27)

X3D0.Scene = Scene25
print(X3D0.XML())
