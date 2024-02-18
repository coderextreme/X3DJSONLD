# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=Pyhead(
children=[
Pymeta(name="title", content="app.x3d"),
Pymeta(name="creator", content="Carlson, I"),
Pymeta(name="creator", content="Carlson, II"),
Pymeta(name="creator", content="Carlson, III"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
Group(children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)))), 
geometry=
Box())]),
Transform(rotation=((7,8,9,3.14)), scale=((4,5,6)), translation=((1,2,3)))])))
output = model.JSON()
json.loads(output)
