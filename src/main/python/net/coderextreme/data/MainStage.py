print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "MainStage.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Main stage for HAnim scene Winter and Spring."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Joe Williams"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Joe Williams and Don Brutzman"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "created"
meta7.content = "25 May 2023"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Mon, 09 Feb 2026 07:12:40 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "originals/0MainStageScene0525.x3dv"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
WorldInfo12 = x3d.WorldInfo()
WorldInfo12.title = "MainStage.x3d"

Scene11.children.append(WorldInfo12)
NavigationInfo13 = x3d.NavigationInfo()
NavigationInfo13.headlight = False

Scene11.children.append(NavigationInfo13)
DirectionalLight14 = x3d.DirectionalLight()
DirectionalLight14.global_ = True
DirectionalLight14.ambientIntensity = 1
DirectionalLight14.direction = [-0.5,-0.5,-0.5]

Scene11.children.append(DirectionalLight14)
DirectionalLight15 = x3d.DirectionalLight()
DirectionalLight15.global_ = True
DirectionalLight15.ambientIntensity = 1
DirectionalLight15.direction = [-1,-1,-1]

Scene11.children.append(DirectionalLight15)
DirectionalLight16 = x3d.DirectionalLight()
DirectionalLight16.global_ = True
DirectionalLight16.intensity = 0.5
DirectionalLight16.ambientIntensity = 1
DirectionalLight16.direction = [1,1,-1]

Scene11.children.append(DirectionalLight16)
Viewpoint17 = x3d.Viewpoint(DEF="Scene_StageFrontViewFar")
Viewpoint17.description = "hanim_Stage Front View"
Viewpoint17.position = [0,4,10]
Viewpoint17.orientation = [1,0,0,-0.449999988]

Scene11.children.append(Viewpoint17)
Viewpoint18 = x3d.Viewpoint(DEF="Scene_InclinedView")
Viewpoint18.description = "hanim_Inclined View"
Viewpoint18.position = [2.62,1.05,4.06]
Viewpoint18.orientation = [-0.112999998,0.992999971,0.034699999,0.671000004]

Scene11.children.append(Viewpoint18)
Viewpoint19 = x3d.Viewpoint(DEF="Scene_StageFrontView")
Viewpoint19.description = "hanim_Stage Front View"
Viewpoint19.position = [0,1,5]

Scene11.children.append(Viewpoint19)
Viewpoint20 = x3d.Viewpoint(DEF="Scene_FeetStageBottomView")
Viewpoint20.description = "hanim_feet View"
Viewpoint20.position = [0,-10,0]
Viewpoint20.orientation = [1,0,0,1.570000052]

Scene11.children.append(Viewpoint20)
Viewpoint21 = x3d.Viewpoint(DEF="Scene_HeadTopView")
Viewpoint21.description = "hanim_Head Top View"
Viewpoint21.position = [0,15,0]
Viewpoint21.orientation = [1,0,0,-1.570000052]

Scene11.children.append(Viewpoint21)
Viewpoint22 = x3d.Viewpoint(DEF="Scene_TopFrontCloseView")
Viewpoint22.description = "hanim_Head Top View"
Viewpoint22.position = [0,8,3]
Viewpoint22.orientation = [1,0,0,-1.100000024]

Scene11.children.append(Viewpoint22)
Group23 = x3d.Group(DEF="HAnimStage")
Transform24 = x3d.Transform(DEF="cordsysfloor")
Transform24.scale = [0.175,0.175,0.175]
Inline25 = x3d.Inline()
Inline25.url = ["JointCoordinateAxes.x3dv"]

Transform24.children.append(Inline25)

Group23.children.append(Transform24)
Transform26 = x3d.Transform(DEF="StageGeometry")
Transform26.translation = [0,-0.01,0]
Transform26.scale = [1,0.01,1]
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
Material29 = x3d.Material()
Material29.transparency = 0.6

Appearance28.material = Material29

Shape27.appearance = Appearance28
Box30 = x3d.Box()
Box30.size = [9,1,9]

Shape27.geometry = Box30

Transform26.children.append(Shape27)
Transform31 = x3d.Transform(DEF="Circle0")
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance(DEF="LineColor")
Material34 = x3d.Material()
Material34.ambientIntensity = 1
Material34.diffuseColor = [0.7,0,0.9]
Material34.specularColor = [0,0,1]
Material34.emissiveColor = [0.45,0.45,1]
Material34.shininess = 1

Appearance33.material = Material34

Shape32.appearance = Appearance33
IndexedLineSet35 = x3d.IndexedLineSet(DEF="Orbit1")
IndexedLineSet35.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]
Coordinate36 = x3d.Coordinate()
Coordinate36.point = [(1, 0, 0),(0.995, 0, -0.105),(0.979, 0, -0.208),(0.951, 0, -0.309),(0.914, 0, -0.407),(0.866, 0, -0.5),(0.809, 0, -0.588),(0.743, 0, -0.669),(0.669, 0, -0.743),(0.588, 0, -0.809),(0.5, 0, -0.866),(0.407, 0, -0.914),(0.309, 0, -0.951),(0.208, 0, -0.978),(0.105, 0, -0.995),(0, 0, -1),(-0.105, 0, -0.994522),(-0.208, 0, -0.978),(-0.309, 0, -0.951),(-0.407, 0, -0.914),(-0.5, 0, -0.866),(-0.588, 0, -0.809),(-0.669, 0, -0.743),(-0.743, 0, -0.669),(-0.809, 0, -0.588),(-0.866, 0, -0.5),(-0.914, 0, -0.407),(-0.951, 0, -0.309),(-0.978, 0, -0.208),(-0.995, 0, -0.105),(-1, 0, 0),(-0.995, 0, 0.105),(-0.978, 0, 0.208),(-0.951, 0, 0.309),(-0.914, 0, 0.407),(-0.866, 0, 0.5),(-0.809, 0, 0.588),(-0.743, 0, 0.669),(-0.669, 0, 0.743),(-0.588, 0, 0.809),(-0.5, 0, 0.866),(-0.407, 0, 0.914),(-0.309, 0, 0.951),(-0.208, 0, 0.978),(-0.105, 0, 0.995),(0, 0, 1),(0.105, 0, 0.995),(0.208, 0, 0.978),(0.309, 0, 0.951),(0.407, 0, 0.914),(0.5, 0, 0.866),(0.588, 0, 0.809),(0.669, 0, 0.743),(0.743, 0, 0.669),(0.809, 0, 0.588),(0.866, 0, 0.5),(0.914, 0, 0.407),(0.951, 0, 0.309),(0.978, 0, 0.208),(0.995, 0, 0.104),(1, 0, 0)]

IndexedLineSet35.coord = Coordinate36

Shape32.geometry = IndexedLineSet35

Transform31.children.append(Shape32)

Transform26.children.append(Transform31)
Transform37 = x3d.Transform(DEF="Circle1")
Transform37.scale = [0.5,1,0.5]
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance(USE="LineColor")

Shape38.appearance = Appearance39
IndexedLineSet40 = x3d.IndexedLineSet(USE="Orbit1")

Shape38.geometry = IndexedLineSet40

Transform37.children.append(Shape38)

Transform26.children.append(Transform37)
Transform41 = x3d.Transform(DEF="Circle2")
Transform41.scale = [0.25,1,0.25]
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance(USE="LineColor")

Shape42.appearance = Appearance43
IndexedLineSet44 = x3d.IndexedLineSet(USE="Orbit1")

Shape42.geometry = IndexedLineSet44

Transform41.children.append(Shape42)

Transform26.children.append(Transform41)
Transform45 = x3d.Transform(DEF="Circle3")
Transform45.scale = [2,1,2]
Shape46 = x3d.Shape()
Appearance47 = x3d.Appearance(USE="LineColor")

Shape46.appearance = Appearance47
IndexedLineSet48 = x3d.IndexedLineSet(USE="Orbit1")

Shape46.geometry = IndexedLineSet48

Transform45.children.append(Shape46)

Transform26.children.append(Transform45)
Transform49 = x3d.Transform(DEF="Circle4")
Transform49.scale = [3,1,3]
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance(USE="LineColor")

Shape50.appearance = Appearance51
IndexedLineSet52 = x3d.IndexedLineSet(USE="Orbit1")

Shape50.geometry = IndexedLineSet52

Transform49.children.append(Shape50)

Transform26.children.append(Transform49)

Group23.children.append(Transform26)

Scene11.children.append(Group23)

X3D0.Scene = Scene11
f = open("../data/MainStage.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MainStage.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/MainStage.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
