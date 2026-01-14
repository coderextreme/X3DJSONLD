print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ScubaTank.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Scuba gear used by Nancy Diving example."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Etsuko Lippi"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "24 January 2001"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "23 May 2020"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "license"
meta9.content = "../license.html"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "ScubaTank.x3d"

Scene10.children.append(WorldInfo11)
Transform12 = x3d.Transform()
Transform12.DEF = "ScubaTank"
Transform13 = x3d.Transform()
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.DEF = "tank"
Material16.ambientIntensity = 0.3
Material16.diffuseColor = [0.3,0.3,0.5]
Material16.shininess = 0.1
Material16.specularColor = [0.7,0.7,0.8]

Appearance15.material = Material16

Shape14.appearance = Appearance15
Cylinder17 = x3d.Cylinder()
Cylinder17.height = 0.7
Cylinder17.radius = 0.1

Shape14.geometry = Cylinder17

Transform13.children.append(Shape14)

Transform12.children.append(Transform13)
Transform18 = x3d.Transform()
Transform18.translation = [0,0.35,0]
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.USE = "tank"

Appearance20.material = Material21

Shape19.appearance = Appearance20
Sphere22 = x3d.Sphere()
Sphere22.radius = 0.098

Shape19.geometry = Sphere22

Transform18.children.append(Shape19)

Transform12.children.append(Transform18)
Transform23 = x3d.Transform()
Transform23.translation = [0,-0.35,0]
Shape24 = x3d.Shape()
Shape24.DEF = "tankBottom"
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.DEF = "black"
Material26.ambientIntensity = 0.3
Material26.diffuseColor = [0,0,0]

Appearance25.material = Material26

Shape24.appearance = Appearance25
Cylinder27 = x3d.Cylinder()
Cylinder27.height = 0.06
Cylinder27.radius = 0.115

Shape24.geometry = Cylinder27

Transform23.children.append(Shape24)

Transform12.children.append(Transform23)
Group28 = x3d.Group()
Group28.DEF = "tankNozzle"
Transform29 = x3d.Transform()
Transform30 = x3d.Transform()
Transform30.translation = [0,0.45,0]
Shape31 = x3d.Shape()
Shape31.DEF = "pressure"
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()
Material33.DEF = "pressureColor"
Material33.ambientIntensity = 0.4
Material33.diffuseColor = [0.91,0.91,0.91]
Material33.shininess = 0.16
Material33.specularColor = [0.91,0.9,0.91]

Appearance32.material = Material33

Shape31.appearance = Appearance32
Cylinder34 = x3d.Cylinder()
Cylinder34.height = 0.1
Cylinder34.radius = 0.015

Shape31.geometry = Cylinder34

Transform30.children.append(Shape31)

Transform29.children.append(Transform30)
Transform35 = x3d.Transform()
Transform35.translation = [0,0.5,0]
Shape36 = x3d.Shape()
Shape36.DEF = "pressureTop"
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.USE = "black"

Appearance37.material = Material38

Shape36.appearance = Appearance37
Cylinder39 = x3d.Cylinder()
Cylinder39.height = 0.02
Cylinder39.radius = 0.025

Shape36.geometry = Cylinder39

Transform35.children.append(Shape36)

Transform29.children.append(Transform35)
Transform40 = x3d.Transform()
Transform40.rotation = [0,0,1,1.57]
Transform40.translation = [-0.028,0.462,0]
Transform41 = x3d.Transform()
Shape42 = x3d.Shape()
Shape42.DEF = "connectorToRegulator"
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.USE = "pressureColor"

Appearance43.material = Material44

Shape42.appearance = Appearance43
Cylinder45 = x3d.Cylinder()
Cylinder45.height = 0.03
Cylinder45.radius = 0.01

Shape42.geometry = Cylinder45

Transform41.children.append(Shape42)

Transform40.children.append(Transform41)
Transform46 = x3d.Transform()
Transform46.translation = [0,0.02,0]
Shape47 = x3d.Shape()
Shape47.DEF = "connectorToRegulatorTop"
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.USE = "black"

Appearance48.material = Material49

Shape47.appearance = Appearance48
Cylinder50 = x3d.Cylinder()
Cylinder50.height = 0.02
Cylinder50.radius = 0.02

Shape47.geometry = Cylinder50

Transform46.children.append(Shape47)

Transform40.children.append(Transform46)

Transform29.children.append(Transform40)

Group28.children.append(Transform29)

Transform12.children.append(Group28)
Transform51 = x3d.Transform()
Transform51.translation = [0,0.2,0]
Shape52 = x3d.Shape()
Shape52.DEF = "tankHoldBelt"
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.USE = "black"

Appearance53.material = Material54

Shape52.appearance = Appearance53
Cylinder55 = x3d.Cylinder()
Cylinder55.height = 0.1
Cylinder55.radius = 0.115

Shape52.geometry = Cylinder55

Transform51.children.append(Shape52)

Transform12.children.append(Transform51)

Scene10.children.append(Transform12)
Background56 = x3d.Background()
Background56.skyColor = [(0.6, 0.6, 0.6)]

Scene10.children.append(Background56)

X3D0.Scene = Scene10
f = open("../data/ScubaTank.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ScubaTank.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ScubaTank.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
