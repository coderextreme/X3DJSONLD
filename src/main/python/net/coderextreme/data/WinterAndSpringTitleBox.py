print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "WinterAndSpringTitleBox.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Credits for scene."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Carol McDonald"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "Joe Williams and Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "26 June 2023"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "Mon, 15 Sep 2025 05:21:02 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "identifier"
meta9.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringTitleBox.x3d"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "WinterAndSpringTitleBox.x3d"

Scene10.children.append(WorldInfo11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.DEF = "WinterAndSpringTitleView"
Viewpoint12.description = "Look at main title"
Viewpoint12.position = [10,11,5]
Viewpoint12.orientation = [-0.15,0,0,0.2]

Scene10.children.append(Viewpoint12)
Transform13 = x3d.Transform()
Transform13.DEF = "WinterAndSpringTitle"
Transform13.translation = [10,10,0]
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()

Appearance15.material = Material16
ImageTexture17 = x3d.ImageTexture()
ImageTexture17.url = ["images/WinterAndSpring.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WinterAndSpring.png"]

Appearance15.texture = ImageTexture17

Shape14.appearance = Appearance15
Box18 = x3d.Box()
Box18.size = [4,3,0.25]

Shape14.geometry = Box18

Transform13.children.append(Shape14)

Scene10.children.append(Transform13)

X3D0.Scene = Scene10
f = open("../data/WinterAndSpringTitleBox.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/WinterAndSpringTitleBox.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/WinterAndSpringTitleBox.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
