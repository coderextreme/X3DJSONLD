import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("JohnBoy.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("An attempt at a standard LOA-4 skeleton")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("h.pl")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("creator")
meta7.setContent("John Carlson")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("created")
meta8.setContent("12 June 2020")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("license")
meta9.setContent("../license.html")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
NavigationInfo11 = x3d.NavigationInfo()
NavigationInfo11.setSpeed(1.5)

Scene10.addChildren(NavigationInfo11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.setCenterOfRotation([0,1,0])
Viewpoint12.setDescription("JohnBoy")
Viewpoint12.setPosition([0,1,3])

Scene10.addChildren(Viewpoint12)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/skeletonLOA1_RoundTrip.x3d")
