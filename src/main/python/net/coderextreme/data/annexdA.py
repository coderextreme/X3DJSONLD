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
meta3.setContent("KoreanCharacterAnnexD01Jin.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Jin Hoon Lee and Min Joo Lee")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("translator")
meta5.setContent("Chul Hee Jung and Myeong Won Lee")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("31 March 2011")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("translated")
meta7.setContent("1 November 2014")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("modified")
meta8.setContent("28 May 2018")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("description")
meta9.setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("KoreanCharacter00ReadMe.txt")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("KoreanCharactersIllustrated.pdf")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("identifier")
meta13.setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/KoreanCharacterAnnexD01Jin.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("Suwon HAnim Converter")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("generator")
meta16.setContent("Gnu Image Manipulation Program, http://www.gimp.org")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("generator")
meta17.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("license")
meta18.setContent("../license.html")

head1.addMeta(meta18)

X3D0.setHead(head1)
Scene19 = x3d.Scene()
WorldInfo20 = x3d.WorldInfo()
WorldInfo20.setTitle("KoreanCharacterAnnexD01Jin.x3d")

Scene19.addChildren(WorldInfo20)
NavigationInfo21 = x3d.NavigationInfo()
NavigationInfo21.setSpeed(1.5)

Scene19.addChildren(NavigationInfo21)
#Viewpoint centerOfRotation=\"0 1 0\" description=\"AnnexD01Jin\" position=\"0 35 113\"/
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.setCenterOfRotation([0,1,0])
Viewpoint22.setDescription("AnnexD01Jin")
Viewpoint22.setPosition([0,40,140])

Scene19.addChildren(Viewpoint22)

X3D0.setScene(Scene19)
X3D0.toFileX3D("../data/annexdA_RoundTrip.x3d")
