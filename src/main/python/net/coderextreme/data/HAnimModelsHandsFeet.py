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
meta3.setContent("HAnimModelsHandsFeet.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("YOO Kwan Hee and Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("8 February 2015")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("8 March 2021")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("warning")
meta8.setContent("not yet to scale")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("warning")
meta9.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("TODO")
meta10.setContent("how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("Image")
meta11.setContent("HAnimModelsHandsFeet.png")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("Image")
meta12.setContent("HAnimModelsHandsFeetWithFour1mGrids.png")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("https://www.web3d.org/documents/specifications/19774/V2.0")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("subject")
meta16.setContent("X3D HAnim humanoid animation")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("identifier")
meta17.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("generator")
meta18.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("license")
meta19.setContent("../license.html")

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
Inline25.setUrl(["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"])

Transform24.addChildren(Inline25)
#Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model
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
Inline29.setUrl(["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"])

Transform28.addChildren(Inline29)
Transform30 = x3d.Transform()
Transform30.setUSE("GridXY_20x20Fixed_AdjustScale")

Transform28.addChildren(Transform30)

Scene20.addChildren(Transform28)
Transform31 = x3d.Transform()
Transform31.setTranslation([-1,-1,0])
#rotation='0 0 1 3.141593'
Inline32 = x3d.Inline()
Inline32.setUrl(["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"])

Transform31.addChildren(Inline32)
Transform33 = x3d.Transform()
Transform33.setUSE("GridXY_20x20Fixed_AdjustScale")

Transform31.addChildren(Transform33)

Scene20.addChildren(Transform31)
Transform34 = x3d.Transform()
Transform34.setTranslation([1,-1,0])
#rotation='0 0 1 3.141593'
Inline35 = x3d.Inline()
Inline35.setUrl(["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"])

Transform34.addChildren(Inline35)
Transform36 = x3d.Transform()
Transform36.setUSE("GridXY_20x20Fixed_AdjustScale")

Transform34.addChildren(Transform36)

Scene20.addChildren(Transform34)

X3D0.setScene(Scene20)
X3D0.toFileX3D("../data/HAnimModelsHandsFeet_RoundTrip.x3d")
