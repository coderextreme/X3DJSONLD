import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
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
meta5.setContent("Kwan Hee YOO and Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("8 February 2015")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("Mon, 15 Sep 2025 05:20:09 GMT")

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
meta15.setContent("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("subject")
meta16.setContent("X3D HAnim humanoid animation")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("identifier")
meta17.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d")

head1.addMeta(meta17)

X3D0.setHead(head1)
Scene18 = x3d.Scene()
WorldInfo19 = x3d.WorldInfo()
WorldInfo19.setTitle("HAnimModelsHandsFeet.x3d")

Scene18.addChild(WorldInfo19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.setDescription("Hands and feet 10m")

Scene18.addChild(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.setDescription("Hands and feet 1.7m")
Viewpoint21.setPosition(x3d.doubleToFloat([0,0,1.7]))

Scene18.addChild(Viewpoint21)
Transform22 = x3d.Transform()
Transform22.setTranslation(x3d.doubleToFloat([-1,1,0]))
Inline23 = x3d.Inline()
Inline23.setUrl(["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"])

Transform22.addChild(Inline23)
Transform24 = x3d.Transform()
Transform24.setDEF("GridXY_20x20Fixed_AdjustScale")
Transform24.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Inline25 = x3d.Inline()
Inline25.setDEF("GridXY_20x20Fixed")
Inline25.setUrl(["../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"])

Transform24.addChild(Inline25)

Transform22.addChild(Transform24)

Scene18.addChild(Transform22)
Transform26 = x3d.Transform()
Transform26.setTranslation(x3d.doubleToFloat([1,1,0]))
Inline27 = x3d.Inline()
Inline27.setUrl(["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"])

Transform26.addChild(Inline27)
Transform28 = x3d.Transform()
Transform28.setUSE("GridXY_20x20Fixed_AdjustScale")

Transform26.addChild(Transform28)

Scene18.addChild(Transform26)
Transform29 = x3d.Transform()
Transform29.setTranslation(x3d.doubleToFloat([-1,-1,0]))
Inline30 = x3d.Inline()
Inline30.setUrl(["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"])

Transform29.addChild(Inline30)
Transform31 = x3d.Transform()
Transform31.setUSE("GridXY_20x20Fixed_AdjustScale")

Transform29.addChild(Transform31)

Scene18.addChild(Transform29)
Transform32 = x3d.Transform()
Transform32.setTranslation(x3d.doubleToFloat([1,-1,0]))
Inline33 = x3d.Inline()
Inline33.setUrl(["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"])

Transform32.addChild(Inline33)
Transform34 = x3d.Transform()
Transform34.setUSE("GridXY_20x20Fixed_AdjustScale")

Transform32.addChild(Transform34)

Scene18.addChild(Transform32)

X3D0.setScene(Scene18)
X3D0.toFileX3D("../data/HAnimModelsHandsFeet.new.graalpy.x3d")
X3D0.toFileJSON("../data/HAnimModelsHandsFeet.new.graalpy.x3dj")
