# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="StringArrayEncodingExamples.x3d"),
meta(name="description", content="Demonstrate simple X3D MFString (string array) encoding."),
meta(name="created", content="27 May 2017"),
meta(name="modified", content="27 May 2017"),
meta(name="creator", content="Don Brutzman"),
meta(name="reference", content="X3dHeaderPrototypeSyntaxExamples.x3d"),
meta(name="specificationSection", content="X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString"),
meta(name="specificationUrl", content="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString"),
meta(name="specificationSection", content="X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString"),
meta(name="specificationUrl", content="https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString"),
meta(name="specificationSection", content="X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString"),
meta(name="specificationUrl", content="https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString"),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="28 June 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
Viewpoint(DEF="EntryView", description="Hello MFString syntax"),
Background(skyColor=[(0.6,1,0.8)]),
Shape(
geometry=
Text(string=["One, Two, Three","","He said, \"Immel did it!\""], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], style_="BOLD")), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.6,0.4,0.2)))))]))
.XML())
