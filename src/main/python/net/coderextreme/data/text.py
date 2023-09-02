# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=head(
children=[
meta(name="creator", content="John W Carlson"),
meta(name="created", content="December 13 2015"),
meta(name="title", content="text.x3d"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/text.x3d"),
meta(name="description", content="test 
 text"),
meta(name="generator", content="Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"),
meta(name="translated", content="02 September 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
Transform(children=[
Shape(
geometry=
Text(string=["Node\"\"\""], 
fontStyle=
FontStyle()), 
appearance=
Appearance(
material=
Material())),
Shape(
geometry=
Text(string=["Node2","\\","\\\\","Node2"], 
fontStyle=
FontStyle()), 
appearance=
Appearance(
material=
Material())),
Shape(
geometry=
Text(string=["Node3 \\\\ \\ ","Node3\"\"\""], 
fontStyle=
FontStyle()), 
appearance=
Appearance(
material=
Material())),
Script(field=[field(name="frontUrls", type="MFString", accessType="initializeOnly", value=["rnl_front.png","uffizi_front.png"])
], sourceCode="""['', '\t\t\t    ecmascript:', '\t\t\t    var me = \'"1" ""2" "\n3"\';', '\t\t\t    ', '\t\t\t']""",)])])))
output = model.JSON()
json.loads(output)
