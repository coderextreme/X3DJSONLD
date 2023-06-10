# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="TextSpecialCharacters.x3d"),
meta(name="description", content="Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities"),
meta(name="creator", content="Don Brutzman"),
meta(name="created", content="12 July 2008"),
meta(name="modified", content="2 April 2017"),
meta(name="reference", content="Character entity references in HTML 4"),
meta(name="reference", content="http://www.w3.org/TR/REC-html40/sgml/entities.html"),
meta(name="rights", content="Copyright (c) Don Brutzman and Leonard Daly, 2008"),
meta(name="identifier", content="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="09 June 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
Background(skyColor=[(1,1,1)]),
Viewpoint(description="Default View", position=((0,0,15))),
Shape(
geometry=
Text(DEF="DefaultText", string=["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe ' is &apos;","ampersand & is &amp;","quote mark \" is &quot;","backslash \\ is X3D escape character","double backslash \\\\ is X3D backslash \\ character","Pi Π is &#928; XML character entity"], 
fontStyle=
FontStyle(DEF="CenteredFontStyle", justify=["MIDDLE","MIDDLE"])), 
appearance=
Appearance(
material=
Material(DEF="DefaultMaterial", diffuseColor=((0.2,0.2,0.2)))))]))
.XML())
