import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("StringArrayEncodingExamples.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Demonstrate simple X3D MFString (string array) encoding.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("27 May 2017")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("modified")
meta5.setContent("27 May 2017")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("creator")
meta6.setContent("Don Brutzman")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("X3dHeaderPrototypeSyntaxExamples.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("specificationSection")
meta8.setContent("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("specificationUrl")
meta9.setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("specificationSection")
meta10.setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("specificationUrl")
meta11.setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("specificationSection")
meta12.setContent("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("specificationUrl")
meta13.setContent("https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setDEF("EntryView")
Viewpoint18.setDescription("Hello MFString syntax")

Scene17.addChild(Viewpoint18)
Background19 = x3d.Background()
Background19.setSkyColor(x3d.doubleToFloat([0.6,1,0.8]))

Scene17.addChild(Background19)
Shape20 = x3d.Shape()
Text21 = x3d.Text()
Text21.setString(["One, Two, Three","","He said, \"Immel did it!\""])

Text21.addComments(x3d.CommentsBlock('''alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"''''))

Text21.addComments(x3d.CommentsBlock('''alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})'''))
FontStyle22 = x3d.FontStyle()
FontStyle22.setJustify(["MIDDLE","MIDDLE"])
FontStyle22.setStyle("BOLD")

Text21.setFontStyle(FontStyle22)

Shape20.setGeometry(Text21)
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.setDiffuseColor(x3d.doubleToFloat([0.6,0.4,0.2]))

Appearance23.setMaterial(Material24)

Shape20.setAppearance(Appearance23)

Scene17.addChild(Shape20)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/StringArrayEncodingExamples.new.graalpy.x3d")
X3D0.toFileJSON("../data/StringArrayEncodingExamples.new.graalpy.json")
