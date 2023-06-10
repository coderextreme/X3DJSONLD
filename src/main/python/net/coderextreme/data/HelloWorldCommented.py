# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="HelloWorldCommented.x3d"),
meta(name="description", content="Numerous comments added to simple X3D scene example for testing JSON encoding alternatives."),
meta(name="created", content="19 December 2015"),
meta(name="modified", content="20 October 2019"),
meta(name="creator", content="Don Brutzman"),
meta(name="info", content="HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental."),
meta(name="reference", content="HelloWorldCommented.json"),
meta(name="reference", content="HelloWorldCommentedOriginalEncoding.json"),
meta(name="reference", content="HelloWorldCommentedAlternativeEncoding.json"),
meta(name="identifier", content="https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d"),
meta(name="license", content="https://www.web3d.org/x3d/content/examples/license.html"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
Comment(value=''' Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes) '''),

Comment(value=''' WorldInfo begin '''),

WorldInfo(title="Hello world!"),
Comment(value=''' WorldInfo complete, Group begin '''),

Group(children=[
Comment(value=''' Viewpoint begin '''),

Viewpoint(DEF="ViewUpClose", centerOfRotation=((0,-1,0)), description="Hello world!", position=((0,-1,7))),
Comment(value=''' Viewpoint complete, Transform begin '''),

Transform(rotation=((0,1,0,3)), children=[
Comment(value=''' Shape begin '''),

Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(DEF="MaterialLightBlue", diffuseColor=((0.1,0.5,1))), 
texture=
ImageTexture(DEF="ImageCloudlessEarth", url=["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]))),
Comment(value=''' Shape complete '''),
]),
Comment(value=''' Transform complete, Transform begin '''),

Transform(translation=((0,-2,0)), children=[
Comment(value=''' Shape begin '''),

Shape(
geometry=
Text(DEF="TextMessage", string=["Hello","world!"], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"])), 
appearance=
Appearance(
material=
Material(USE="MaterialLightBlue"))),
Comment(value=''' Shape complete '''),
]),
Comment(value=''' Transform complete '''),
]),
Comment(value=''' Group complete '''),
]))
.XML())
