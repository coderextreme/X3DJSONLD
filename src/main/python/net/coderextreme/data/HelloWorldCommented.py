#x3d.py package loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
#Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)

#WorldInfo begin

WorldInfo(title="Hello world!"),
#WorldInfo complete, Group begin

Group(children=[
#Viewpoint begin

Viewpoint(DEF="ViewUpClose", centerOfRotation=((0,-1,0)), description="Hello world!", position=((0,-1,7))),
#Viewpoint complete, Transform begin

Transform(rotation=((0,1,0,3)), children=[
#Shape begin

Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(DEF="MaterialLightBlue", diffuseColor=((0.1,0.5,1))), 
texture=
ImageTexture(DEF="ImageCloudlessEarth", url=["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]))),
#Shape complete
]),
#Transform complete, Transform begin

Transform(translation=((0,-2,0)), children=[
#Shape begin

Shape(
geometry=
Text(DEF="TextMessage", string=["Hello","world!"], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"])), 
appearance=
Appearance(
material=
Material(USE="MaterialLightBlue"))),
#Shape complete
]),
#Transform complete
]),
#Group complete
]))
.XML())
