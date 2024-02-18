# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="title", content="browser.x3d"),
Pymeta(name="creator", content="John Carlson"),
Pymeta(name="generator", content="manual"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/browser.x3d"),
Pymeta(name="description", content="a script test with embedded 
 between single quotes, a double backslash \\ a backslash \ and a closing quote \""),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
Script(DEF="Browser", sourceCode="""['', 'ecmascript:', '                function initialize() {', '\t\t    Browser.print(\'DUDES\n\'+\'"DUDETTES\');', '                }', '', '']""",),
Script(DEF="Clouds", sourceCode="""['', '', 'ecmascript:', '', '', 'function cumulustranslation() // These values designate the boundary location of the cloud', '{', "var xxx = ' '+' '+", "'\tTransform\t\t\n'+", "'    ' + '               \t\n';", '', '}', '', '']""",)])))
output = model.JSON()
json.loads(output)
