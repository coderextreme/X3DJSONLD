from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("TextExamples.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("Show different escape-character text examples for embedded quotation marks.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("created")
meta5.setContent("7 April 2001")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("modified")
meta6.setContent("26 April 2016")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("warning")
meta7.setContent("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("warning")
meta8.setContent("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("identifier")
meta9.setContent("https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("generator")
meta10.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("license")
meta11.setContent("../license.html")

head1.addMeta(meta11)

X3D0.setHead(head1)
Scene12 = Scene()
Transform13 = Transform()
Transform13.setTranslation([0,2,0])
Shape14 = Shape()
Text15 = Text()
Text15.setString(["Compare special character escaping"])
FontStyle16 = FontStyle()
FontStyle16.setDEF("testFontStyle")
FontStyle16.setJustify(["MIDDLE","MIDDLE"])
FontStyle16.setSize(0.8)

Text15.setFontStyle(FontStyle16)

Shape14.setGeometry(Text15)
Appearance17 = Appearance()
Appearance17.setDEF("LightBlueAppearance")
Material18 = Material()
Material18.setDiffuseColor([0.1,0.7,0.7])

Appearance17.setMaterial(Material18)

Shape14.setAppearance(Appearance17)

Transform13.addChildren(Shape14)

Scene12.addChildren(Transform13)
Transform19 = Transform()
Transform19.setTranslation([-3,0,0])
Shape20 = Shape()
Text21 = Text()
Text21.setString(["I don't think so","","he said \"Hi\""])
FontStyle22 = FontStyle()
FontStyle22.setUSE("testFontStyle")

Text21.setFontStyle(FontStyle22)

Shape20.setGeometry(Text21)
Appearance23 = Appearance()
Appearance23.setUSE("LightBlueAppearance")

Shape20.setAppearance(Appearance23)

Transform19.addChildren(Shape20)

Scene12.addChildren(Transform19)
Transform24 = Transform()
Transform24.setTranslation([3,0,0])
Shape25 = Shape()
Text26 = Text()
Text26.setString(["I don't think so","","he said \"Hi\""])
FontStyle27 = FontStyle()
FontStyle27.setUSE("testFontStyle")

Text26.setFontStyle(FontStyle27)

Shape25.setGeometry(Text26)
Appearance28 = Appearance()
Appearance28.setUSE("LightBlueAppearance")

Shape25.setAppearance(Appearance28)

Transform24.addChildren(Shape25)

Scene12.addChildren(Transform24)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/TextExamples_RoundTrip.x3d")
