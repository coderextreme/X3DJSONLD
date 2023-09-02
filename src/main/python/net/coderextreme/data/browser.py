# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=head(
children=[
meta(name="title", content="browser.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/browser.x3d"),
meta(name="description", content="a script test with embedded \n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote \""),
meta(name="converter", content="x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"),
meta(name="converted", content="Sat, 02 Sep 2023 10:58:56 GMT")
]), 
Scene=Scene(children=[
Script(DEF="Browser", sourceCode="""['ecmascript:\r', '                function initialize() {\r', '\t\t    Browser.print(\'DUDES\\n\'+\'"DUDETTES\');\r', '                }\r', '']""",),
Script(DEF="Clouds", sourceCode="""['\r', 'ecmascript:\r', '\r', '\r', 'function cumulustranslation() // These values designate the boundary location of the cloud\r', '{\r', "var xxx = ' '+' '+\r", "'\tTransform\t\t\\n'+\r", "'    ' + '               \t\\n';\r", '\r', '}\r', '']""",)])))
output = model.JSON()
json.loads(output)
