print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "CoordinateAxes.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "Don Brutzman, Byounghyun Yoo"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "14 July 2000"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "Mon, 09 Feb 2026 07:09:53 GMT"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame."

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "CoordinateAxes.x3d"

Scene12.children.append(WorldInfo13)
Collision14 = x3d.Collision(DEF="DoNotCollideWithVisualizationWidget")
Group15 = x3d.Group()
Group16 = x3d.Group(DEF="ArrowGreen")
Shape17 = x3d.Shape()
Appearance18 = x3d.Appearance(DEF="Green")
Material19 = x3d.Material()
Material19.diffuseColor = [0.1,0.6,0.1]
Material19.emissiveColor = [0.05,0.2,0.05]

Appearance18.material = Material19

Shape17.appearance = Appearance18
Cylinder20 = x3d.Cylinder(DEF="ArrowCylinder")
Cylinder20.top = False
Cylinder20.radius = 0.025

Shape17.geometry = Cylinder20

Group16.children.append(Shape17)
Transform21 = x3d.Transform()
Transform21.translation = [0,1,0]
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance(USE="Green")

Shape22.appearance = Appearance23
Cone24 = x3d.Cone(DEF="ArrowCone")
Cone24.height = 0.1
Cone24.bottomRadius = 0.05

Shape22.geometry = Cone24

Transform21.children.append(Shape22)

Group16.children.append(Transform21)

Group15.children.append(Group16)
Transform25 = x3d.Transform()
Transform25.translation = [0,1.08,0]
Billboard26 = x3d.Billboard()
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance(DEF="LABEL_APPEARANCE")
Material29 = x3d.Material()
Material29.diffuseColor = [1,1,0.3]
Material29.emissiveColor = [0.33,0.33,0.1]

Appearance28.material = Material29

Shape27.appearance = Appearance28
Text30 = x3d.Text()
Text30.string = ["Y"]
FontStyle31 = x3d.FontStyle(DEF="LABEL_FONT")
FontStyle31.family = ["SANS"]
FontStyle31.size = 0.2
FontStyle31.justify = ["MIDDLE","MIDDLE"]

Text30.fontStyle = FontStyle31

Shape27.geometry = Text30

Billboard26.children.append(Shape27)

Transform25.children.append(Billboard26)

Group15.children.append(Transform25)

Collision14.proxy = Group15
Transform32 = x3d.Transform()
Transform32.rotation = [0,0,1,-1.57079]
Group33 = x3d.Group()
Group34 = x3d.Group(DEF="ArrowRed")
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance(DEF="Red")
Material37 = x3d.Material()
Material37.diffuseColor = [0.7,0.1,0.1]
Material37.emissiveColor = [0.33,0,0]

Appearance36.material = Material37

Shape35.appearance = Appearance36
Cylinder38 = x3d.Cylinder(USE="ArrowCylinder")

Shape35.geometry = Cylinder38

Group34.children.append(Shape35)
Transform39 = x3d.Transform()
Transform39.translation = [0,1,0]
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance(USE="Red")

Shape40.appearance = Appearance41
Cone42 = x3d.Cone(USE="ArrowCone")

Shape40.geometry = Cone42

Transform39.children.append(Shape40)

Group34.children.append(Transform39)

Group33.children.append(Group34)
Transform43 = x3d.Transform()
Transform43.translation = [0.072,1.1,0]
Transform43.rotation = [0,0,1,1.57079]
Billboard44 = x3d.Billboard()
Shape45 = x3d.Shape()
Appearance46 = x3d.Appearance(USE="LABEL_APPEARANCE")

Shape45.appearance = Appearance46
Text47 = x3d.Text()
Text47.string = ["X"]
FontStyle48 = x3d.FontStyle(USE="LABEL_FONT")

Text47.fontStyle = FontStyle48

Shape45.geometry = Text47

Billboard44.children.append(Shape45)

Transform43.children.append(Billboard44)

Group33.children.append(Transform43)

Transform32.children.append(Group33)

Collision14.proxy = Transform32
Transform49 = x3d.Transform()
Transform49.rotation = [1,0,0,1.57079]
Group50 = x3d.Group()
Group51 = x3d.Group(DEF="ArrowBlue")
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance(DEF="Blue")
Material54 = x3d.Material()
Material54.diffuseColor = [0.3,0.3,1]
Material54.emissiveColor = [0.1,0.1,0.33]

Appearance53.material = Material54

Shape52.appearance = Appearance53
Cylinder55 = x3d.Cylinder(USE="ArrowCylinder")

Shape52.geometry = Cylinder55

Group51.children.append(Shape52)
Transform56 = x3d.Transform()
Transform56.translation = [0,1,0]
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance(USE="Blue")

Shape57.appearance = Appearance58
Cone59 = x3d.Cone(USE="ArrowCone")

Shape57.geometry = Cone59

Transform56.children.append(Shape57)

Group51.children.append(Transform56)

Group50.children.append(Group51)
Transform60 = x3d.Transform()
Transform60.translation = [0,1.1,0.072]
Transform60.rotation = [1,0,0,-1.57079]
Billboard61 = x3d.Billboard()
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance(USE="LABEL_APPEARANCE")

Shape62.appearance = Appearance63
Text64 = x3d.Text()
Text64.string = ["Z"]
FontStyle65 = x3d.FontStyle(USE="LABEL_FONT")

Text64.fontStyle = FontStyle65

Shape62.geometry = Text64

Billboard61.children.append(Shape62)

Transform60.children.append(Billboard61)

Group50.children.append(Transform60)

Transform49.children.append(Group50)

Collision14.proxy = Transform49

Scene12.children.append(Collision14)

X3D0.Scene = Scene12
f = open("../data/CoordinateAxes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/CoordinateAxes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/CoordinateAxes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
