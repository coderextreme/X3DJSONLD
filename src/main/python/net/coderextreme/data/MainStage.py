import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("MainStage.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Main stage for HAnim scene Winter and Spring.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Joe Williams")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("translator")
meta6.setContent("Joe Williams and Don Brutzman")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("created")
meta7.setContent("25 May 2023")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("modified")
meta8.setContent("27 May 2023")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("originals/0MainStageScene0525.x3dv")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("identifier")
meta10.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("generator")
meta11.setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("license")
meta12.setContent("../license.html")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = x3d.Scene()
WorldInfo14 = x3d.WorldInfo()
WorldInfo14.setTitle("MainStage.x3d")

Scene13.addChildren(WorldInfo14)
NavigationInfo15 = x3d.NavigationInfo()
NavigationInfo15.setHeadlight(False)

Scene13.addChildren(NavigationInfo15)
DirectionalLight16 = x3d.DirectionalLight()
DirectionalLight16.setAmbientIntensity(1)
DirectionalLight16.setDirection([-0.5,-0.5,-0.5])
DirectionalLight16.setGlobal(True)

Scene13.addChildren(DirectionalLight16)
DirectionalLight17 = x3d.DirectionalLight()
DirectionalLight17.setAmbientIntensity(1)
DirectionalLight17.setDirection([-1,-1,-1])
DirectionalLight17.setGlobal(True)

Scene13.addChildren(DirectionalLight17)
DirectionalLight18 = x3d.DirectionalLight()
DirectionalLight18.setAmbientIntensity(1)
DirectionalLight18.setDirection([1,1,-1])
DirectionalLight18.setGlobal(True)
DirectionalLight18.setIntensity(0.5)

Scene13.addChildren(DirectionalLight18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.setDEF("Scene_StageFrontViewFar")
Viewpoint19.setDescription("hanim_Stage Front View")
Viewpoint19.setOrientation([1,0,0,-0.449999988])
Viewpoint19.setPosition([0,4,10])

Scene13.addChildren(Viewpoint19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.setDEF("Scene_InclinedView")
Viewpoint20.setDescription("hanim_Inclined View")
Viewpoint20.setOrientation([-0.112999998,0.992999971,0.034699999,0.671000004])
Viewpoint20.setPosition([2.619999886,1.049999952,4.059999943])

Scene13.addChildren(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.setDEF("Scene_StageFrontView")
Viewpoint21.setDescription("hanim_Stage Front View")
Viewpoint21.setPosition([0,1,5])

Scene13.addChildren(Viewpoint21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.setDEF("Scene_FeetStageBottomView")
Viewpoint22.setDescription("hanim_feet View")
Viewpoint22.setOrientation([1,0,0,1.570000052])
Viewpoint22.setPosition([0,-10,0])

Scene13.addChildren(Viewpoint22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.setDEF("Scene_HeadTopView")
Viewpoint23.setDescription("hanim_Head Top View")
Viewpoint23.setOrientation([1,0,0,-1.570000052])
Viewpoint23.setPosition([0,15,0])

Scene13.addChildren(Viewpoint23)
Viewpoint24 = x3d.Viewpoint()
Viewpoint24.setDEF("Scene_TopFrontCloseView")
Viewpoint24.setDescription("hanim_Head Top View")
Viewpoint24.setOrientation([1,0,0,-1.100000024])
Viewpoint24.setPosition([0,8,3])

Scene13.addChildren(Viewpoint24)
Group25 = x3d.Group()
Group25.setDEF("HAnimStage")
Transform26 = x3d.Transform()
Transform26.setDEF("cordsysfloor")
Transform26.setScale([0.174999997,0.174999997,0.174999997])
Inline27 = x3d.Inline()
Inline27.setUrl(["JointCoordinateAxes.x3dv"])

Transform26.addChildren(Inline27)

Group25.addChildren(Transform26)
Transform28 = x3d.Transform()
Transform28.setDEF("StageGeometry")
Transform28.setScale([1,0.01,1])
Transform28.setTranslation([0,-0.01,0])
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
Material31.setTransparency(0.6)

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
Box32 = x3d.Box()
Box32.setSize([9,1,9])

Shape29.setGeometry(Box32)

Transform28.addChild(Shape29)
Transform33 = x3d.Transform()
Transform33.setDEF("Circle0")
Shape34 = x3d.Shape()
Appearance35 = x3d.Appearance()
Appearance35.setDEF("LineColor")
Material36 = x3d.Material()
Material36.setAmbientIntensity(1)
Material36.setDiffuseColor([0.699999988,0,0.899999976])
Material36.setEmissiveColor([0.449999988,0.449999988,1])
Material36.setShininess(1)
Material36.setSpecularColor([0,0,1])

Appearance35.setMaterial(Material36)

Shape34.setAppearance(Appearance35)
IndexedLineSet37 = x3d.IndexedLineSet()
IndexedLineSet37.setDEF("Orbit1")
IndexedLineSet37.setCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1])
Coordinate38 = x3d.Coordinate()
Coordinate38.setPoint([1,0,0,0.995000005,0,-0.104999997,0.978999972,0,-0.208000004,0.950999975,0,-0.308999985,0.913999975,0,-0.407000005,0.865999997,0,-0.5,0.809000015,0,-0.588,0.742999971,0,-0.66900003,0.66900003,0,-0.742999971,0.588,0,-0.809000015,0.5,0,-0.865999997,0.407000005,0,-0.913999975,0.308999985,0,-0.950999975,0.208000004,0,-0.977999985,0.104999997,0,-0.995000005,0,0,-1,-0.104999997,0,-0.994521976,-0.208000004,0,-0.977999985,-0.308999985,0,-0.950999975,-0.407000005,0,-0.913999975,-0.5,0,-0.865999997,-0.588,0,-0.809000015,-0.66900003,0,-0.742999971,-0.742999971,0,-0.66900003,-0.809000015,0,-0.588,-0.865999997,0,-0.5,-0.913999975,0,-0.407000005,-0.950999975,0,-0.308999985,-0.977999985,0,-0.208000004,-0.995000005,0,-0.104999997,-1,0,0,-0.995000005,0,0.104999997,-0.977999985,0,0.208000004,-0.950999975,0,0.308999985,-0.913999975,0,0.407000005,-0.865999997,0,0.5,-0.809000015,0,0.588,-0.742999971,0,0.66900003,-0.66900003,0,0.742999971,-0.588,0,0.809000015,-0.5,0,0.865999997,-0.407000005,0,0.913999975,-0.308999985,0,0.950999975,-0.208000004,0,0.977999985,-0.104999997,0,0.995000005,0,0,1,0.104999997,0,0.995000005,0.208000004,0,0.977999985,0.308999985,0,0.950999975,0.407000005,0,0.913999975,0.5,0,0.865999997,0.588,0,0.809000015,0.66900003,0,0.742999971,0.742999971,0,0.66900003,0.809000015,0,0.588,0.865999997,0,0.5,0.913999975,0,0.407000005,0.950999975,0,0.308999985,0.977999985,0,0.208000004,0.995000005,0,0.104000002,1,0,0])

IndexedLineSet37.setCoord(Coordinate38)

Shape34.setGeometry(IndexedLineSet37)

Transform33.addChild(Shape34)

Transform28.addChildren(Transform33)
Transform39 = x3d.Transform()
Transform39.setDEF("Circle1")
Transform39.setScale([0.5,1,0.5])
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
Appearance41.setUSE("LineColor")

Shape40.setAppearance(Appearance41)
IndexedLineSet42 = x3d.IndexedLineSet()
IndexedLineSet42.setUSE("Orbit1")

Shape40.setGeometry(IndexedLineSet42)

Transform39.addChild(Shape40)

Transform28.addChildren(Transform39)
Transform43 = x3d.Transform()
Transform43.setDEF("Circle2")
Transform43.setScale([0.25,1,0.25])
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Appearance45.setUSE("LineColor")

Shape44.setAppearance(Appearance45)
IndexedLineSet46 = x3d.IndexedLineSet()
IndexedLineSet46.setUSE("Orbit1")

Shape44.setGeometry(IndexedLineSet46)

Transform43.addChild(Shape44)

Transform28.addChildren(Transform43)
Transform47 = x3d.Transform()
Transform47.setDEF("Circle3")
Transform47.setScale([2,1,2])
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance()
Appearance49.setUSE("LineColor")

Shape48.setAppearance(Appearance49)
IndexedLineSet50 = x3d.IndexedLineSet()
IndexedLineSet50.setUSE("Orbit1")

Shape48.setGeometry(IndexedLineSet50)

Transform47.addChild(Shape48)

Transform28.addChildren(Transform47)
Transform51 = x3d.Transform()
Transform51.setDEF("Circle4")
Transform51.setScale([3,1,3])
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance()
Appearance53.setUSE("LineColor")

Shape52.setAppearance(Appearance53)
IndexedLineSet54 = x3d.IndexedLineSet()
IndexedLineSet54.setUSE("Orbit1")

Shape52.setGeometry(IndexedLineSet54)

Transform51.addChild(Shape52)

Transform28.addChildren(Transform51)

Group25.addChildren(Transform28)

Scene13.addChildren(Group25)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/MainStage.new.python.x3d")
X3D0.toFileJSON("../data/MainStage.new.python.json")
