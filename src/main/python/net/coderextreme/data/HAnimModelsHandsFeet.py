import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setLevel(1)
component2.setName("H-Anim")

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setContent("HAnimModelsHandsFeet.x3d")
meta3.setName("title")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setContent("Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2")
meta4.setName("description")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setContent("YOO Kwan Hee and Don Brutzman")
meta5.setName("creator")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setContent("8 February 2015")
meta6.setName("created")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setContent("20 October 2019")
meta7.setName("modified")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setContent("not yet to scale")
meta8.setName("warning")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")
meta9.setName("warning")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setContent("HAnimModelsHandsFeet.png")
meta10.setName("Image")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setContent("HAnimModelsHandsFeetWithFour1mGrids.png")
meta11.setName("Image")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim")
meta12.setName("reference")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setContent("https://www.web3d.org/files/specifications/19774/V1.0")
meta13.setName("reference")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html")
meta14.setName("reference")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setContent("X3D H-Anim humanoid animation")
meta15.setName("subject")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setContent("scene, DOCTYPE and Schema under development.")
meta16.setName("warning")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d")
meta17.setName("identifier")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
meta18.setName("generator")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setContent("../license.html")
meta19.setName("license")

head1.addMeta(meta19)

X3D0.setHead(head1)
Scene20 = x3d.Scene()
WorldInfo21 = x3d.WorldInfo()
WorldInfo21.setTitle("HAnimModelsHandsFeet.x3d")

Scene20.addChildren(WorldInfo21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.setDescription("Hands and feet 10m")

Scene20.addChildren(Viewpoint22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.setDescription("Hands and feet 1.7m")
Viewpoint23.setPosition([0,0,1.7])

Scene20.addChildren(Viewpoint23)
Transform24 = x3d.Transform()
Transform24.setTranslation([-1,1,0])
Inline25 = x3d.Inline()
Inline25.setUrl(["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.wrl"])

Transform24.addChildren(Inline25)
# Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model 
Transform26 = x3d.Transform()
Transform26.setDEF("GridXY_20x20Fixed_AdjustScale")
Transform26.setScale([0.1,0.1,0.1])
Inline27 = x3d.Inline()
Inline27.setDEF("GridXY_20x20Fixed")
Inline27.setUrl(["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"])

Transform26.addChildren(Inline27)

Transform24.addChildren(Transform26)

Scene20.addChildren(Transform24)
Transform28 = x3d.Transform()
Transform28.setTranslation([1,1,0])
Inline29 = x3d.Inline()
Inline29.setUrl(["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.wrl"])

Transform28.addChildren(Inline29)
Transform30 = x3d.Transform()
Transform30.setUSE("GridXY_20x20Fixed_AdjustScale")

Transform28.addChildren(Transform30)

Scene20.addChildren(Transform28)
Transform31 = x3d.Transform()
Transform31.setTranslation([-1,-1,0])
# rotation='0 0 1 3.141593' 
Inline32 = x3d.Inline()
Inline32.setUrl(["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.wrl"])

Transform31.addChildren(Inline32)
Transform33 = x3d.Transform()
Transform33.setUSE("GridXY_20x20Fixed_AdjustScale")

Transform31.addChildren(Transform33)

Scene20.addChildren(Transform31)
Transform34 = x3d.Transform()
Transform34.setTranslation([1,-1,0])
# rotation='0 0 1 3.141593' 
Inline35 = x3d.Inline()
Inline35.setUrl(["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.wrl"])

Transform34.addChildren(Inline35)
Transform36 = x3d.Transform()
Transform36.setUSE("GridXY_20x20Fixed_AdjustScale")

Transform34.addChildren(Transform36)

Scene20.addChildren(Transform34)

X3D0.setScene(Scene20)
X3D0.toFileX3D("../data/HAnimModelsHandsFeet_RoundTrip.x3d")