print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta5.content = "20 October 2019"

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
meta12 = x3d.meta()
meta12.name = "generator"
meta12.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "license"
meta13.content = "../license.html"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "CoordinateAxes.x3d"

Scene14.children.append(WorldInfo15)
Collision16 = x3d.Collision(DEF="DoNotCollideWithVisualizationWidget")
Collision16.children.append(x3d.Comment("""Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph."""))
Collision16.children.append(x3d.Comment("""This NavigationInfo allows examine mode and will be overridden by any parent scene."""))
Collision16.children.append(x3d.Comment("""Each arrow goes from +1m to -1m to allow linear scaling to fit a scene"""))
Collision16.children.append(x3d.Comment("""Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user"""))
Group17 = x3d.Group()
Group17.children.append(x3d.Comment("""Vertical Y arrow and label"""))
Group18 = x3d.Group(DEF="ArrowGreen")
Shape19 = x3d.Shape()
Cylinder20 = x3d.Cylinder(DEF="ArrowCylinder")
Cylinder20.radius = 0.025
Cylinder20.top = False

Shape19.geometry = Cylinder20
Appearance21 = x3d.Appearance(DEF="Green")
Material22 = x3d.Material()
Material22.diffuseColor = [0.1,0.6,0.1]
Material22.emissiveColor = [0.05,0.2,0.05]

Appearance21.material = Material22

Shape19.appearance = Appearance21

Group18.children.append(Shape19)
Transform23 = x3d.Transform()
Transform23.translation = [0,1,0]
Shape24 = x3d.Shape()
Cone25 = x3d.Cone(DEF="ArrowCone")
Cone25.bottomRadius = 0.05
Cone25.height = 0.1

Shape24.geometry = Cone25
Appearance26 = x3d.Appearance(USE="Green")

Shape24.appearance = Appearance26

Transform23.children.append(Shape24)

Group18.children.append(Transform23)

Group17.children.append(Group18)
Transform27 = x3d.Transform()
Transform27.translation = [0,1.08,0]
Billboard28 = x3d.Billboard()
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance(DEF="LABEL_APPEARANCE")
Material31 = x3d.Material()
Material31.diffuseColor = [1,1,0.3]
Material31.emissiveColor = [0.33,0.33,0.1]

Appearance30.material = Material31

Shape29.appearance = Appearance30
Text32 = x3d.Text()
Text32.string = ["Y"]
FontStyle33 = x3d.FontStyle(DEF="LABEL_FONT")
FontStyle33.family = ["SANS"]
FontStyle33.justify = ["MIDDLE","MIDDLE"]
FontStyle33.size = 0.2

Text32.fontStyle = FontStyle33

Shape29.geometry = Text32

Billboard28.children.append(Shape29)

Transform27.children.append(Billboard28)

Group17.children.append(Transform27)

Collision16.proxy = Group17
Transform34 = x3d.Transform()
Transform34.rotation = [0,0,1,-1.57079]
Transform34.children.append(x3d.Comment("""Horizontal X arrow and label"""))
Group35 = x3d.Group()
Group36 = x3d.Group(DEF="ArrowRed")
Shape37 = x3d.Shape()
Cylinder38 = x3d.Cylinder(USE="ArrowCylinder")

Shape37.geometry = Cylinder38
Appearance39 = x3d.Appearance(DEF="Red")
Material40 = x3d.Material()
Material40.diffuseColor = [0.7,0.1,0.1]
Material40.emissiveColor = [0.33,0,0]

Appearance39.material = Material40

Shape37.appearance = Appearance39

Group36.children.append(Shape37)
Transform41 = x3d.Transform()
Transform41.translation = [0,1,0]
Shape42 = x3d.Shape()
Cone43 = x3d.Cone(USE="ArrowCone")

Shape42.geometry = Cone43
Appearance44 = x3d.Appearance(USE="Red")

Shape42.appearance = Appearance44

Transform41.children.append(Shape42)

Group36.children.append(Transform41)

Group35.children.append(Group36)
Transform45 = x3d.Transform()
Transform45.rotation = [0,0,1,1.57079]
Transform45.translation = [0.072,1.1,0]
Transform45.children.append(x3d.Comment("""note label rotated back to original coordinate frame"""))
Billboard46 = x3d.Billboard()
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance(USE="LABEL_APPEARANCE")

Shape47.appearance = Appearance48
Text49 = x3d.Text()
Text49.string = ["X"]
FontStyle50 = x3d.FontStyle(USE="LABEL_FONT")

Text49.fontStyle = FontStyle50

Shape47.geometry = Text49

Billboard46.children.append(Shape47)

Transform45.children.append(Billboard46)

Group35.children.append(Transform45)

Transform34.children.append(Group35)

Collision16.proxy = Transform34
Transform51 = x3d.Transform()
Transform51.rotation = [1,0,0,1.57079]
Transform51.children.append(x3d.Comment("""Perpendicular Z arrow and label, note right-hand rule"""))
Group52 = x3d.Group()
Group53 = x3d.Group(DEF="ArrowBlue")
Shape54 = x3d.Shape()
Cylinder55 = x3d.Cylinder(USE="ArrowCylinder")

Shape54.geometry = Cylinder55
Appearance56 = x3d.Appearance(DEF="Blue")
Material57 = x3d.Material()
Material57.diffuseColor = [0.3,0.3,1]
Material57.emissiveColor = [0.1,0.1,0.33]

Appearance56.material = Material57

Shape54.appearance = Appearance56

Group53.children.append(Shape54)
Transform58 = x3d.Transform()
Transform58.translation = [0,1,0]
Shape59 = x3d.Shape()
Cone60 = x3d.Cone(USE="ArrowCone")

Shape59.geometry = Cone60
Appearance61 = x3d.Appearance(USE="Blue")

Shape59.appearance = Appearance61

Transform58.children.append(Shape59)

Group53.children.append(Transform58)

Group52.children.append(Group53)
Transform62 = x3d.Transform()
Transform62.rotation = [1,0,0,-1.57079]
Transform62.translation = [0,1.1,0.072]
Transform62.children.append(x3d.Comment("""note label rotated back to original coordinate frame"""))
Billboard63 = x3d.Billboard()
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance(USE="LABEL_APPEARANCE")

Shape64.appearance = Appearance65
Text66 = x3d.Text()
Text66.string = ["Z"]
FontStyle67 = x3d.FontStyle(USE="LABEL_FONT")

Text66.fontStyle = FontStyle67

Shape64.geometry = Text66

Billboard63.children.append(Shape64)

Transform62.children.append(Billboard63)

Group52.children.append(Transform62)

Transform51.children.append(Group52)

Collision16.proxy = Transform51

Scene14.children.append(Collision16)

X3D0.Scene = Scene14
f = open("../data/CoordinateAxes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/CoordinateAxes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/CoordinateAxes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
