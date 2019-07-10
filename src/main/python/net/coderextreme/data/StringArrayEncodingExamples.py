# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("StringArrayEncodingExamples.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("Demonstrate simple X3D MFString (string array) encoding.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("created")
meta4.setContent("27 May 2017")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("modified")
meta5.setContent("27 May 2017")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("creator")
meta6.setContent("Don Brutzman")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("reference")
meta7.setContent("X3dHeaderPrototypeSyntaxExamples.x3d")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("specificationSection")
meta8.setContent("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("specificationUrl")
meta9.setContent("http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("specificationSection")
meta10.setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("specificationUrl")
meta11.setContent("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("specificationSection")
meta12.setContent("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("specificationUrl")
meta13.setContent("http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("identifier")
meta14.setContent("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = Scene()
Viewpoint18 = Viewpoint()
Viewpoint18.setDEF("EntryView")
Viewpoint18.setDescription("Hello MFString syntax")

Scene17.addChildren(Viewpoint18)
Background19 = Background()
Background19.setSkyColor([0.6,1,0.8])

Scene17.addChildren(Background19)
Shape20 = Shape()
Text21 = Text()
Text21.setString(["One, Two, Three","","He said, \"Immel did it!\""])
#alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
#alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
FontStyle22 = FontStyle()
FontStyle22.setJustify(["MIDDLE","MIDDLE"])
FontStyle22.setStyle("BOLD")

Text21.setFontStyle(FontStyle22)

Shape20.setGeometry(Text21)
Appearance23 = Appearance()
Material24 = Material()
Material24.setDiffuseColor([0.6,0.4,0.2])

Appearance23.setMaterial(Material24)

Shape20.setAppearance(Appearance23)

Scene17.addChildren(Shape20)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/StringArrayEncodingExamples.new.x3d")
