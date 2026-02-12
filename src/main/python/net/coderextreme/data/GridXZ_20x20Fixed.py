print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta5.content = "Mon, 09 Feb 2026 12:24:16 GMT"

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

X3D0.head = head1
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "GridXZ_20x20Fixed.x3d"

Scene10.children.append(WorldInfo11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.description = "XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)"
Viewpoint12.position = [0,10,25]
Viewpoint12.orientation = [1,0,0,-0.4]

Scene10.children.append(Viewpoint12)
Transform13 = x3d.Transform(DEF="GridLocation")
Group14 = x3d.Group()
Shape15 = x3d.Shape(DEF="LinesAlignedAlongZ")
IndexedLineSet16 = x3d.IndexedLineSet()
IndexedLineSet16.colorPerVertex = False
IndexedLineSet16.colorIndex = [1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1]
IndexedLineSet16.coordIndex = [1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1]
Color17 = x3d.Color()
Color17.color = [(0.4, 0.4, 0.4),(0.8, 0.2, 0),(0.4, 0.1, 0.05)]

IndexedLineSet16.color = Color17
Coordinate18 = x3d.Coordinate(DEF="EndPoints")
Coordinate18.point = [(0, 0, 0),(-10, 0, 10),(-9, 0, 10),(-8, 0, 10),(-7, 0, 10),(-6, 0, 10),(-5, 0, 10),(-4, 0, 10),(-3, 0, 10),(-2, 0, 10),(-1, 0, 10),(0, 0, 10),(1, 0, 10),(2, 0, 10),(3, 0, 10),(4, 0, 10),(5, 0, 10),(6, 0, 10),(7, 0, 10),(8, 0, 10),(9, 0, 10),(10, 0, 10),(-10, 0, -10),(-9, 0, -10),(-8, 0, -10),(-7, 0, -10),(-6, 0, -10),(-5, 0, -10),(-4, 0, -10),(-3, 0, -10),(-2, 0, -10),(-1, 0, -10),(0, 0, -10),(1, 0, -10),(2, 0, -10),(3, 0, -10),(4, 0, -10),(5, 0, -10),(6, 0, -10),(7, 0, -10),(8, 0, -10),(9, 0, -10),(10, 0, -10)]

IndexedLineSet16.coord = Coordinate18

Shape15.geometry = IndexedLineSet16

Group14.children.append(Shape15)
Transform19 = x3d.Transform(DEF="LinesAlignedAlongX")
Transform19.rotation = [0,1,0,1.57079]
Shape20 = x3d.Shape(USE="LinesAlignedAlongZ")

Transform19.children.append(Shape20)

Group14.children.append(Transform19)
Transform21 = x3d.Transform()
Transform21.translation = [0,-0.5,0]
Billboard22 = x3d.Billboard()
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance(DEF="DefaultAppearance")
Material25 = x3d.Material()

Appearance24.material = Material25

Shape23.appearance = Appearance24
Text26 = x3d.Text(DEF="CenterTextNode")
Text26.string = ["origin"]
FontStyle27 = x3d.FontStyle(DEF="FS4")
FontStyle27.size = 0.4
FontStyle27.justify = ["MIDDLE","MIDDLE"]

Text26.fontStyle = FontStyle27

Shape23.geometry = Text26

Billboard22.children.append(Shape23)

Transform21.children.append(Billboard22)

Group14.children.append(Transform21)
Transform28 = x3d.Transform()
Transform28.translation = [10,-0.5,10]
Billboard29 = x3d.Billboard()
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance(USE="DefaultAppearance")

Shape30.appearance = Appearance31
Text32 = x3d.Text()
Text32.string = ["10 0 10"]
FontStyle33 = x3d.FontStyle(USE="FS4")

Text32.fontStyle = FontStyle33

Shape30.geometry = Text32

Billboard29.children.append(Shape30)

Transform28.children.append(Billboard29)

Group14.children.append(Transform28)
Transform34 = x3d.Transform()
Transform34.translation = [10,-0.5,-10]
Billboard35 = x3d.Billboard()
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance(USE="DefaultAppearance")

Shape36.appearance = Appearance37
Text38 = x3d.Text()
Text38.string = ["10 0 -10"]
FontStyle39 = x3d.FontStyle(USE="FS4")

Text38.fontStyle = FontStyle39

Shape36.geometry = Text38

Billboard35.children.append(Shape36)

Transform34.children.append(Billboard35)

Group14.children.append(Transform34)
Transform40 = x3d.Transform()
Transform40.translation = [-10,-0.5,10]
Billboard41 = x3d.Billboard()
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance(USE="DefaultAppearance")

Shape42.appearance = Appearance43
Text44 = x3d.Text()
Text44.string = ["-10 0 10"]
FontStyle45 = x3d.FontStyle(USE="FS4")

Text44.fontStyle = FontStyle45

Shape42.geometry = Text44

Billboard41.children.append(Shape42)

Transform40.children.append(Billboard41)

Group14.children.append(Transform40)
Transform46 = x3d.Transform()
Transform46.translation = [-10,-0.5,-10]
Billboard47 = x3d.Billboard()
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance(USE="DefaultAppearance")

Shape48.appearance = Appearance49
Text50 = x3d.Text()
Text50.string = ["-10 0 -10"]
FontStyle51 = x3d.FontStyle(USE="FS4")

Text50.fontStyle = FontStyle51

Shape48.geometry = Text50

Billboard47.children.append(Shape48)

Transform46.children.append(Billboard47)

Group14.children.append(Transform46)

Transform13.children.append(Group14)

Scene10.children.append(Transform13)

X3D0.Scene = Scene10
f = open("../data/GridXZ_20x20Fixed.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/GridXZ_20x20Fixed.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/GridXZ_20x20Fixed.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
