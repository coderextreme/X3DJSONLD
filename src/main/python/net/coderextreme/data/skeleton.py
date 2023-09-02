# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(
children=[
component(name="HAnim", level=1),
meta(name="title", content="skeleton.x3d"),
meta(name="identifier", content="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/skeleton.x3d"),
meta(name="description", content="An attempt at a standard LOA-4 skeleton"),
meta(name="generator", content="h.pl"),
meta(name="creator", content="John Carlson"),
meta(name="created", content="12 June 2020"),
meta(name="license", content="../license.html"),
meta(name="translated", content="30 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(speed=1.5),
Viewpoint(centerOfRotation=((0,1,0)), description="skeleton", position=((0,1,3)))]))
.XML())
