print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
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
meta8.content = "27 May 2023"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "originals/0MainStageScene0525.x3dv"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "generator"
meta11.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "license"
meta12.content = "../license.html"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
WorldInfo14 = x3d.WorldInfo()
WorldInfo14.title = "MainStage.x3d"

Scene13.children.append(WorldInfo14)
NavigationInfo15 = x3d.NavigationInfo()
NavigationInfo15.headlight = False

Scene13.children.append(NavigationInfo15)
DirectionalLight16 = x3d.DirectionalLight()
DirectionalLight16.ambientIntensity = 1
DirectionalLight16.direction = [-0.5,-0.5,-0.5]
DirectionalLight16.global_ = True

Scene13.children.append(DirectionalLight16)
DirectionalLight17 = x3d.DirectionalLight()
DirectionalLight17.ambientIntensity = 1
DirectionalLight17.direction = [-1,-1,-1]
DirectionalLight17.global_ = True

Scene13.children.append(DirectionalLight17)
DirectionalLight18 = x3d.DirectionalLight()
DirectionalLight18.ambientIntensity = 1
DirectionalLight18.direction = [1,1,-1]
DirectionalLight18.global_ = True
DirectionalLight18.intensity = 0.5

Scene13.children.append(DirectionalLight18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.DEF = "Scene_StageFrontViewFar"
Viewpoint19.description = "hanim_Stage Front View"
Viewpoint19.orientation = [1,0,0,-0.449999988]
Viewpoint19.position = [0,4,10]

Scene13.children.append(Viewpoint19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.DEF = "Scene_InclinedView"
Viewpoint20.description = "hanim_Inclined View"
Viewpoint20.orientation = [-0.112999998,0.992999971,0.034699999,0.671000004]
Viewpoint20.position = [2.619999886,1.049999952,4.059999943]

Scene13.children.append(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.DEF = "Scene_StageFrontView"
Viewpoint21.description = "hanim_Stage Front View"
Viewpoint21.position = [0,1,5]

Scene13.children.append(Viewpoint21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.DEF = "Scene_FeetStageBottomView"
Viewpoint22.description = "hanim_feet View"
Viewpoint22.orientation = [1,0,0,1.570000052]
Viewpoint22.position = [0,-10,0]

Scene13.children.append(Viewpoint22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.DEF = "Scene_HeadTopView"
Viewpoint23.description = "hanim_Head Top View"
Viewpoint23.orientation = [1,0,0,-1.570000052]
Viewpoint23.position = [0,15,0]

Scene13.children.append(Viewpoint23)
Viewpoint24 = x3d.Viewpoint()
Viewpoint24.DEF = "Scene_TopFrontCloseView"
Viewpoint24.description = "hanim_Head Top View"
Viewpoint24.orientation = [1,0,0,-1.100000024]
Viewpoint24.position = [0,8,3]

Scene13.children.append(Viewpoint24)
Group25 = x3d.Group()
Group25.DEF = "HAnimStage"
Transform26 = x3d.Transform()
Transform26.DEF = "cordsysfloor"
Transform26.scale = [0.174999997,0.174999997,0.174999997]
Inline27 = x3d.Inline()
Inline27.url = ["JointCoordinateAxes.x3dv"]

Transform26.children.append(Inline27)

Group25.children.append(Transform26)
Transform28 = x3d.Transform()
Transform28.DEF = "StageGeometry"
Transform28.scale = [1,0.01,1]
Transform28.translation = [0,-0.01,0]
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
Material31.transparency = 0.6

Appearance30.material = Material31

Shape29.appearance = Appearance30
Box32 = x3d.Box()
Box32.size = [9,1,9]

Shape29.geometry = Box32

Transform28.children.append(Shape29)
Transform33 = x3d.Transform()
Transform33.DEF = "Circle0"
Shape34 = x3d.Shape()
Appearance35 = x3d.Appearance()
Appearance35.DEF = "LineColor"
Material36 = x3d.Material()
Material36.ambientIntensity = 1
Material36.diffuseColor = [0.699999988,0,0.899999976]
Material36.emissiveColor = [0.449999988,0.449999988,1]
Material36.shininess = 1
Material36.specularColor = [0,0,1]

Appearance35.material = Material36

Shape34.appearance = Appearance35
IndexedLineSet37 = x3d.IndexedLineSet()
IndexedLineSet37.DEF = "Orbit1"
IndexedLineSet37.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]
Coordinate38 = x3d.Coordinate()

IndexedLineSet37.coord = Coordinate38

Shape34.geometry = IndexedLineSet37

Transform33.children.append(Shape34)

Transform28.children.append(Transform33)
Transform39 = x3d.Transform()
Transform39.DEF = "Circle1"
Transform39.scale = [0.5,1,0.5]
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
Appearance41.USE = "LineColor"

Shape40.appearance = Appearance41
IndexedLineSet42 = x3d.IndexedLineSet()
IndexedLineSet42.USE = "Orbit1"

Shape40.geometry = IndexedLineSet42

Transform39.children.append(Shape40)

Transform28.children.append(Transform39)
Transform43 = x3d.Transform()
Transform43.DEF = "Circle2"
Transform43.scale = [0.25,1,0.25]
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Appearance45.USE = "LineColor"

Shape44.appearance = Appearance45
IndexedLineSet46 = x3d.IndexedLineSet()
IndexedLineSet46.USE = "Orbit1"

Shape44.geometry = IndexedLineSet46

Transform43.children.append(Shape44)

Transform28.children.append(Transform43)
Transform47 = x3d.Transform()
Transform47.DEF = "Circle3"
Transform47.scale = [2,1,2]
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance()
Appearance49.USE = "LineColor"

Shape48.appearance = Appearance49
IndexedLineSet50 = x3d.IndexedLineSet()
IndexedLineSet50.USE = "Orbit1"

Shape48.geometry = IndexedLineSet50

Transform47.children.append(Shape48)

Transform28.children.append(Transform47)
Transform51 = x3d.Transform()
Transform51.DEF = "Circle4"
Transform51.scale = [3,1,3]
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance()
Appearance53.USE = "LineColor"

Shape52.appearance = Appearance53
IndexedLineSet54 = x3d.IndexedLineSet()
IndexedLineSet54.USE = "Orbit1"

Shape52.geometry = IndexedLineSet54

Transform51.children.append(Shape52)

Transform28.children.append(Transform51)

Group25.children.append(Transform28)

Scene13.children.append(Group25)

X3D0.Scene = Scene13
f = open("../data/MainStage.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MainStage.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
