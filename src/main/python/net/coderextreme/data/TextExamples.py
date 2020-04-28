import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setContent("TextExamples.x3d")
meta2.setName("title")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setContent("Show different escape-character text examples for embedded quotation marks.")
meta3.setName("description")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setContent("Don Brutzman")
meta4.setName("creator")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setContent("7 April 2001")
meta5.setName("created")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setContent("26 April 2016")
meta6.setName("modified")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setContent("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.")
meta7.setName("warning")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setContent("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.")
meta8.setName("warning")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setContent("http://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d")
meta9.setName("identifier")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
meta10.setName("generator")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setContent("../license.html")
meta11.setName("license")

head1.addMeta(meta11)

X3D0.setHead(head1)
Scene12 = x3d.Scene()
Transform13 = x3d.Transform()
Transform13.setTranslation([0,2,0])
Shape14 = x3d.Shape()
Text15 = x3d.Text()
Text15.setString(["Compare special character escaping"])
FontStyle16 = x3d.FontStyle()
FontStyle16.setDEF("testFontStyle")
FontStyle16.setJustify(["MIDDLE","MIDDLE"])
FontStyle16.setSize(0.8)

Text15.setFontStyle(FontStyle16)

Shape14.setGeometry(Text15)
Appearance17 = x3d.Appearance()
Appearance17.setDEF("LightBlueAppearance")
Material18 = x3d.Material()
Material18.setDiffuseColor([0.1,0.7,0.7])

Appearance17.setMaterial(Material18)

Shape14.setAppearance(Appearance17)

Transform13.addChildren(Shape14)

Scene12.addChildren(Transform13)
Transform19 = x3d.Transform()
Transform19.setTranslation([-3,0,0])
Shape20 = x3d.Shape()
Text21 = x3d.Text()
Text21.setString(["I don't think so","","he said \"Hi\""])
FontStyle22 = x3d.FontStyle()
FontStyle22.setUSE("testFontStyle")

Text21.setFontStyle(FontStyle22)

Shape20.setGeometry(Text21)
Appearance23 = x3d.Appearance()
Appearance23.setUSE("LightBlueAppearance")

Shape20.setAppearance(Appearance23)

Transform19.addChildren(Shape20)

Scene12.addChildren(Transform19)
Transform24 = x3d.Transform()
Transform24.setTranslation([3,0,0])
Shape25 = x3d.Shape()
Text26 = x3d.Text()
Text26.setString(["I don't think so","","he said \"Hi\""])
FontStyle27 = x3d.FontStyle()
FontStyle27.setUSE("testFontStyle")

Text26.setFontStyle(FontStyle27)

Shape25.setGeometry(Text26)
Appearance28 = x3d.Appearance()
Appearance28.setUSE("LightBlueAppearance")

Shape25.setAppearance(Appearance28)

Transform24.addChildren(Shape25)

Scene12.addChildren(Transform24)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/TextExamples_RoundTrip.x3d")
