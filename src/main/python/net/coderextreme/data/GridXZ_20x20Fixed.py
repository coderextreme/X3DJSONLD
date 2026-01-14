print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "GridXZ_20x20Fixed.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "MV4204 class"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "3 September 2000"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "28 November 2019"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "reference"
meta6.content = "GridXY_20x20Fixed.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "GridYZ_20x20Fixed.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "description"
meta8.content = "Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m."

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "identifier"
meta9.content = "https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "generator"
meta10.content = "X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "license"
meta11.content = "../../license.html"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "GridXZ_20x20Fixed.x3d"

Scene12.children.append(WorldInfo13)
Viewpoint14 = x3d.Viewpoint()
Viewpoint14.description = "XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)"
Viewpoint14.orientation = [1,0,0,-0.4]
Viewpoint14.position = [0,10,25]

Scene12.children.append(Viewpoint14)
Transform15 = x3d.Transform()
Transform15.DEF = "GridLocation"
Group16 = x3d.Group()
Shape17 = x3d.Shape()
Shape17.DEF = "LinesAlignedAlongZ"
IndexedLineSet18 = x3d.IndexedLineSet()
IndexedLineSet18.colorIndex = [1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1]
IndexedLineSet18.colorPerVertex = False
IndexedLineSet18.coordIndex = [1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1]
Coordinate19 = x3d.Coordinate()
Coordinate19.DEF = "EndPoints"
Coordinate19.point = [(0, 0, 0),(-10, 0, 10),(-9, 0, 10),(-8, 0, 10),(-7, 0, 10),(-6, 0, 10),(-5, 0, 10),(-4, 0, 10),(-3, 0, 10),(-2, 0, 10),(-1, 0, 10),(0, 0, 10),(1, 0, 10),(2, 0, 10),(3, 0, 10),(4, 0, 10),(5, 0, 10),(6, 0, 10),(7, 0, 10),(8, 0, 10),(9, 0, 10),(10, 0, 10),(-10, 0, -10),(-9, 0, -10),(-8, 0, -10),(-7, 0, -10),(-6, 0, -10),(-5, 0, -10),(-4, 0, -10),(-3, 0, -10),(-2, 0, -10),(-1, 0, -10),(0, 0, -10),(1, 0, -10),(2, 0, -10),(3, 0, -10),(4, 0, -10),(5, 0, -10),(6, 0, -10),(7, 0, -10),(8, 0, -10),(9, 0, -10),(10, 0, -10)]

IndexedLineSet18.coord = Coordinate19
Color20 = x3d.Color()
Color20.color = [(0.4, 0.4, 0.4),(0.8, 0.2, 0),(0.4, 0.1, 0.05)]

IndexedLineSet18.color = Color20

Shape17.geometry = IndexedLineSet18

Group16.children.append(Shape17)
Transform21 = x3d.Transform()
Transform21.DEF = "LinesAlignedAlongX"
Transform21.rotation = [0,1,0,1.57079]
Shape22 = x3d.Shape()
Shape22.USE = "LinesAlignedAlongZ"

Transform21.children.append(Shape22)

Group16.children.append(Transform21)
Transform23 = x3d.Transform()
Transform23.translation = [0,-0.5,0]
Billboard24 = x3d.Billboard()
Shape25 = x3d.Shape()
Text26 = x3d.Text()
Text26.DEF = "CenterTextNode"
Text26.string = ["origin"]
FontStyle27 = x3d.FontStyle()
FontStyle27.DEF = "FS4"
FontStyle27.justify = ["MIDDLE","MIDDLE"]
FontStyle27.size = 0.4

Text26.fontStyle = FontStyle27

Shape25.geometry = Text26
Appearance28 = x3d.Appearance()
Appearance28.DEF = "DefaultAppearance"
Material29 = x3d.Material()

Appearance28.material = Material29

Shape25.appearance = Appearance28

Billboard24.children.append(Shape25)

Transform23.children.append(Billboard24)

Group16.children.append(Transform23)
Transform30 = x3d.Transform()
Transform30.translation = [10,-0.5,10]
Billboard31 = x3d.Billboard()
Shape32 = x3d.Shape()
Text33 = x3d.Text()
Text33.string = ["10 0 10"]
FontStyle34 = x3d.FontStyle()
FontStyle34.USE = "FS4"

Text33.fontStyle = FontStyle34

Shape32.geometry = Text33
Appearance35 = x3d.Appearance()
Appearance35.USE = "DefaultAppearance"

Shape32.appearance = Appearance35

Billboard31.children.append(Shape32)

Transform30.children.append(Billboard31)

Group16.children.append(Transform30)
Transform36 = x3d.Transform()
Transform36.translation = [10,-0.5,-10]
Billboard37 = x3d.Billboard()
Shape38 = x3d.Shape()
Text39 = x3d.Text()
Text39.string = ["10 0 -10"]
FontStyle40 = x3d.FontStyle()
FontStyle40.USE = "FS4"

Text39.fontStyle = FontStyle40

Shape38.geometry = Text39
Appearance41 = x3d.Appearance()
Appearance41.USE = "DefaultAppearance"

Shape38.appearance = Appearance41

Billboard37.children.append(Shape38)

Transform36.children.append(Billboard37)

Group16.children.append(Transform36)
Transform42 = x3d.Transform()
Transform42.translation = [-10,-0.5,10]
Billboard43 = x3d.Billboard()
Shape44 = x3d.Shape()
Text45 = x3d.Text()
Text45.string = ["-10 0 10"]
FontStyle46 = x3d.FontStyle()
FontStyle46.USE = "FS4"

Text45.fontStyle = FontStyle46

Shape44.geometry = Text45
Appearance47 = x3d.Appearance()
Appearance47.USE = "DefaultAppearance"

Shape44.appearance = Appearance47

Billboard43.children.append(Shape44)

Transform42.children.append(Billboard43)

Group16.children.append(Transform42)
Transform48 = x3d.Transform()
Transform48.translation = [-10,-0.5,-10]
Billboard49 = x3d.Billboard()
Shape50 = x3d.Shape()
Text51 = x3d.Text()
Text51.string = ["-10 0 -10"]
FontStyle52 = x3d.FontStyle()
FontStyle52.USE = "FS4"

Text51.fontStyle = FontStyle52

Shape50.geometry = Text51
Appearance53 = x3d.Appearance()
Appearance53.USE = "DefaultAppearance"

Shape50.appearance = Appearance53

Billboard49.children.append(Shape50)

Transform48.children.append(Billboard49)

Group16.children.append(Transform48)

Transform15.children.append(Group16)

Scene12.children.append(Transform15)

X3D0.Scene = Scene12
f = open("../data/GridXZ_20x20Fixed.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/GridXZ_20x20Fixed.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/GridXZ_20x20Fixed.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
