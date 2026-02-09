print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.1"
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
meta6.content = "Mon, 09 Feb 2026 07:12:56 GMT"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
WorldInfo9 = x3d.WorldInfo()
WorldInfo9.title = "ScubaTank.x3d"

Scene8.children.append(WorldInfo9)
Transform10 = x3d.Transform(DEF="ScubaTank")
Transform11 = x3d.Transform()
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance()
Material14 = x3d.Material(DEF="tank")
Material14.ambientIntensity = 0.3
Material14.diffuseColor = [0.3,0.3,0.5]
Material14.specularColor = [0.7,0.7,0.8]
Material14.shininess = 0.1

Appearance13.material = Material14

Shape12.appearance = Appearance13
Cylinder15 = x3d.Cylinder()
Cylinder15.height = 0.7
Cylinder15.radius = 0.1

Shape12.geometry = Cylinder15

Transform11.children.append(Shape12)

Transform10.children.append(Transform11)
Transform16 = x3d.Transform()
Transform16.translation = [0,0.35,0]
Shape17 = x3d.Shape()
Appearance18 = x3d.Appearance()
Material19 = x3d.Material(USE="tank")

Appearance18.material = Material19

Shape17.appearance = Appearance18
Sphere20 = x3d.Sphere()
Sphere20.radius = 0.098

Shape17.geometry = Sphere20

Transform16.children.append(Shape17)

Transform10.children.append(Transform16)
Transform21 = x3d.Transform()
Transform21.translation = [0,-0.35,0]
Shape22 = x3d.Shape(DEF="tankBottom")
Appearance23 = x3d.Appearance()
Material24 = x3d.Material(DEF="black")
Material24.ambientIntensity = 0.3
Material24.diffuseColor = [0,0,0]

Appearance23.material = Material24

Shape22.appearance = Appearance23
Cylinder25 = x3d.Cylinder()
Cylinder25.height = 0.06
Cylinder25.radius = 0.115

Shape22.geometry = Cylinder25

Transform21.children.append(Shape22)

Transform10.children.append(Transform21)
Group26 = x3d.Group(DEF="tankNozzle")
Transform27 = x3d.Transform()
Transform28 = x3d.Transform()
Transform28.translation = [0,0.45,0]
Shape29 = x3d.Shape(DEF="pressure")
Appearance30 = x3d.Appearance()
Material31 = x3d.Material(DEF="pressureColor")
Material31.ambientIntensity = 0.4
Material31.diffuseColor = [0.91,0.91,0.91]
Material31.specularColor = [0.91,0.9,0.91]
Material31.shininess = 0.16

Appearance30.material = Material31

Shape29.appearance = Appearance30
Cylinder32 = x3d.Cylinder()
Cylinder32.height = 0.1
Cylinder32.radius = 0.015

Shape29.geometry = Cylinder32

Transform28.children.append(Shape29)

Transform27.children.append(Transform28)
Transform33 = x3d.Transform()
Transform33.translation = [0,0.5,0]
Shape34 = x3d.Shape(DEF="pressureTop")
Appearance35 = x3d.Appearance()
Material36 = x3d.Material(USE="black")

Appearance35.material = Material36

Shape34.appearance = Appearance35
Cylinder37 = x3d.Cylinder()
Cylinder37.height = 0.02
Cylinder37.radius = 0.025

Shape34.geometry = Cylinder37

Transform33.children.append(Shape34)

Transform27.children.append(Transform33)
Transform38 = x3d.Transform()
Transform38.translation = [-0.028,0.462,0]
Transform38.rotation = [0,0,1,1.57]
Transform39 = x3d.Transform()
Shape40 = x3d.Shape(DEF="connectorToRegulator")
Appearance41 = x3d.Appearance()
Material42 = x3d.Material(USE="pressureColor")

Appearance41.material = Material42

Shape40.appearance = Appearance41
Cylinder43 = x3d.Cylinder()
Cylinder43.height = 0.03
Cylinder43.radius = 0.01

Shape40.geometry = Cylinder43

Transform39.children.append(Shape40)

Transform38.children.append(Transform39)
Transform44 = x3d.Transform()
Transform44.translation = [0,0.02,0]
Shape45 = x3d.Shape(DEF="connectorToRegulatorTop")
Appearance46 = x3d.Appearance()
Material47 = x3d.Material(USE="black")

Appearance46.material = Material47

Shape45.appearance = Appearance46
Cylinder48 = x3d.Cylinder()
Cylinder48.height = 0.02
Cylinder48.radius = 0.02

Shape45.geometry = Cylinder48

Transform44.children.append(Shape45)

Transform38.children.append(Transform44)

Transform27.children.append(Transform38)

Group26.children.append(Transform27)

Transform10.children.append(Group26)
Transform49 = x3d.Transform()
Transform49.translation = [0,0.2,0]
Shape50 = x3d.Shape(DEF="tankHoldBelt")
Appearance51 = x3d.Appearance()
Material52 = x3d.Material(USE="black")

Appearance51.material = Material52

Shape50.appearance = Appearance51
Cylinder53 = x3d.Cylinder()
Cylinder53.height = 0.1
Cylinder53.radius = 0.115

Shape50.geometry = Cylinder53

Transform49.children.append(Shape50)

Transform10.children.append(Transform49)

Scene8.children.append(Transform10)
Background54 = x3d.Background()
Background54.skyColor = [(0.6, 0.6, 0.6)]

Scene8.children.append(Background54)

X3D0.Scene = Scene8
f = open("../data/ScubaTank.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ScubaTank.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ScubaTank.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
