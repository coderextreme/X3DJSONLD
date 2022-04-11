'''
x3d.py package 4.0.63.7 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
#Example scene to illustrate X3D nodes and fields (XML elements and attributes)

WorldInfo(info=["Example scene to illustrate a simple X3D model"], title="Hello World!"),
Group(children=[
Viewpoint(DEF="ViewUpClose", centerOfRotation=((0,-1,0)), description="Hello world!", position=((0,-1,7))),
Transform(rotation=((0,1,0,3)), children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(DEF="MaterialLightBlue", diffuseColor=((0.1,0.5,1))), 
texture=
ImageTexture(DEF="ImageCloudlessEarth", url=["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])))]),
Transform(translation=((0,-2,0)), children=[
Shape(
geometry=
Text(DEF="TextMessage", string=["Hello","world!"], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"])), 
appearance=
Appearance(
material=
Material(USE="MaterialLightBlue")))])]),]))
.XML())
