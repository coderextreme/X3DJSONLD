print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "StringArrayEncodingExamples.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Demonstrate simple X3D MFString (string array) encoding."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "27 May 2017"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "27 May 2017"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Don Brutzman"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "X3dHeaderPrototypeSyntaxExamples.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "specificationSection"
meta8.content = "X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "specificationUrl"
meta9.content = "https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "specificationSection"
meta10.content = "X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "specificationUrl"
meta11.content = "https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "specificationSection"
meta12.content = "X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "specificationUrl"
meta13.content = "https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "license"
meta16.content = "../license.html"

head1.children.append(meta16)

X3D0.head = head1
Scene17 = x3d.Scene()
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.DEF = "EntryView"
Viewpoint18.description = "Hello MFString syntax"

Scene17.children.append(Viewpoint18)
Background19 = x3d.Background()

Scene17.children.append(Background19)
Shape20 = x3d.Shape()
Text21 = x3d.Text()
Text21.string = ["One, Two, Three","","He said, \"Immel did it!\""]
"""alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"""
"""alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})"""
FontStyle22 = x3d.FontStyle()
FontStyle22.justify = ["MIDDLE","MIDDLE"]
FontStyle22.style = "BOLD"

Text21.fontStyle = FontStyle22

Shape20.geometry = Text21
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.diffuseColor = [0.6,0.4,0.2]

Appearance23.material = Material24

Shape20.appearance = Appearance23

Scene17.children.append(Shape20)

X3D0.Scene = Scene17
f = open("../data/StringArrayEncodingExamples.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/StringArrayEncodingExamples.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
