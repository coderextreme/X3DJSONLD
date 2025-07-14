print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "JohnJoint.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "An attempt at a standard LOA-4 skeleton"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "h6.pl"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "John Carlson"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "created"
meta8.content = "12 January 2023"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "license"
meta9.content = "../license.html"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
Transform11 = x3d.Transform()
"""DEF for markerfor XYZ axes"""
Shape12 = x3d.Shape()
Shape12.DEF = "AxisLinesShape"
"""RGB lines showing XYZ axes"""
IndexedLineSet13 = x3d.IndexedLineSet()
IndexedLineSet13.colorIndex = [0,1,2]
IndexedLineSet13.colorPerVertex = False
IndexedLineSet13.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate14 = x3d.Coordinate()

IndexedLineSet13.coord = Coordinate14
Color15 = x3d.Color()

IndexedLineSet13.color = Color15

Shape12.geometry = IndexedLineSet13

Transform11.children.append(Shape12)

Scene10.children.append(Transform11)
Group16 = x3d.Group()
"""DEFS for markers of skeleton joints, segments, and sites"""
Transform17 = x3d.Transform()
"""<Transform translation='0 2 0'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>"""
Transform18 = x3d.Transform()
Transform18.translation = [0,2.1,0]
Shape19 = x3d.Shape()
Shape19.DEF = "HAnimJointShape"
Sphere20 = x3d.Sphere()
Sphere20.radius = 0.02

Shape19.geometry = Sphere20
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.DEF = "HAnimJointMaterial"
Material22.diffuseColor = [0,0,0.8]
Material22.transparency = 0.3

Appearance21.material = Material22

Shape19.appearance = Appearance21

Transform18.children.append(Shape19)

Transform17.children.append(Transform18)
Transform23 = x3d.Transform()
Transform23.translation = [0,2.05,0]
Shape24 = x3d.Shape()
Shape24.DEF = "HAnimSegmentLine"
LineSet25 = x3d.LineSet()
LineSet25.vertexCount = [2]
ColorRGBA26 = x3d.ColorRGBA()
ColorRGBA26.DEF = "HAnimSegmentLineColorRGBA"

LineSet25.color = ColorRGBA26
Coordinate27 = x3d.Coordinate()

LineSet25.coord = Coordinate27

Shape24.geometry = LineSet25

Transform23.children.append(Shape24)

Transform17.children.append(Transform23)
"""<Transform translation='0 2.1 0'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>"""

Group16.children.append(Transform17)

Scene10.children.append(Group16)
NavigationInfo28 = x3d.NavigationInfo()
NavigationInfo28.speed = 1.5

Scene10.children.append(NavigationInfo28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.description = "default"

Scene10.children.append(Viewpoint29)

X3D0.Scene = Scene10
f = open("../data/JohnJoint.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JohnJoint.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
