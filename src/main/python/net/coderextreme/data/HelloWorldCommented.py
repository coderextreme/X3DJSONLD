print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta5.content = "20 October 2019"

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
meta12 = x3d.meta()
meta12.name = "license"
meta12.content = "https://www.web3d.org/x3d/content/examples/license.html"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
"""Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)"""
"""WorldInfo begin"""
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "Hello world!"

Scene14.children.append(WorldInfo15)
"""WorldInfo complete, Group begin"""
Group16 = x3d.Group()
"""Viewpoint begin"""
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.DEF = "ViewUpClose"
Viewpoint17.centerOfRotation = [0,-1,0]
Viewpoint17.description = "Hello world!"
Viewpoint17.position = [0,-1,7]

Group16.children.append(Viewpoint17)
"""Viewpoint complete, Transform begin"""
Transform18 = x3d.Transform()
Transform18.rotation = [0,1,0,3]
"""Shape begin"""
Shape19 = x3d.Shape()
"""Sphere begin"""
"""Sphere complete, Appearance begin"""
"""Appearance complete"""
Sphere20 = x3d.Sphere()

Shape19.geometry = Sphere20
Appearance21 = x3d.Appearance()
"""Material begin"""
"""Material complete, ImageTexture begin"""
"""ImageTexture complete"""
Material22 = x3d.Material()
Material22.DEF = "MaterialLightBlue"
Material22.diffuseColor = [0.1,0.5,1]

Appearance21.material = Material22
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.DEF = "ImageCloudlessEarth"
ImageTexture23.url = ["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]

Appearance21.texture = ImageTexture23

Shape19.appearance = Appearance21

Transform18.children.append(Shape19)
"""Shape complete"""

Group16.children.append(Transform18)
"""Transform complete, Transform begin"""
Transform24 = x3d.Transform()
Transform24.translation = [0,-2,0]
"""Shape begin"""
Shape25 = x3d.Shape()
"""Text begin"""
"""Text complete, Appearance begin"""
"""Appearance complete"""
Text26 = x3d.Text()
Text26.DEF = "TextMessage"
Text26.string = ["Hello","world!"]
"""FontStyle begin"""
"""FontStyle complete"""
FontStyle27 = x3d.FontStyle()
FontStyle27.justify = ["MIDDLE","MIDDLE"]

Text26.fontStyle = FontStyle27

Shape25.geometry = Text26
Appearance28 = x3d.Appearance()
"""Material begin"""
"""Material complete"""
Material29 = x3d.Material()
Material29.USE = "MaterialLightBlue"

Appearance28.material = Material29

Shape25.appearance = Appearance28

Transform24.children.append(Shape25)
"""Shape complete"""

Group16.children.append(Transform24)
"""Transform complete"""

Scene14.children.append(Group16)
"""Group complete"""

X3D0.Scene = Scene14
f = open("../data/HelloWorldCommented.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HelloWorldCommented.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
