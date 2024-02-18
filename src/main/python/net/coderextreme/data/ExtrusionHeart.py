# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.0", 
head=Pyhead(
children=[
Pymeta(name="title", content="ExtrusionHeart.x3d"),
Pymeta(name="description", content="Simple extrusion of a Valentine heart."),
Pymeta(name="creator", content="Class participants in course Introduction to VRML/X3D."),
Pymeta(name="created", content="14 February 2001"),
Pymeta(name="modified", content="27 November 2015"),
Pymeta(name="identifier", content="https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"),
Pymeta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
Pymeta(name="license", content="../license.html"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
Viewpoint(description="Extrusion Heart", orientation=((1,0,0,1.57)), position=((0,-4,0))),
Transform(translation=((0,-0.5,0)), children=[
Shape(
geometry=
Extrusion(creaseAngle=3.14159, crossSection=[(0,0.8),(0.2,1),(0.7,0.95),(1,0.5),(0.8,0),(0.5,-0.3),(0,-0.7),(-0.5,-0.3),(-0.8,0),(-1,0.5),(-0.7,0.95),(-0.2,1),(0,0.8)], scale=((0.01,0.01),(0.8,0.8),(1,1),(0.8,0.8),(0.01,0.01)), solid=False, spine=[(0,0,0),(0,0.1,0),(0,0.5,0),(0,0.9,0),(0,1,0)]), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.8,0.3,0.3)))))])])))
output = model.JSON()
json.loads(output)
