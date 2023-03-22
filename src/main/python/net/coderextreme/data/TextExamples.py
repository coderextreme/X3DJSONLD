# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.0", 
head=head(), 
Scene=Scene(children=[
Transform(translation=((0,2,0)), children=[
Shape(
geometry=
Text(string=["Compare special character escaping"], 
fontStyle=
FontStyle(DEF="testFontStyle", justify=["MIDDLE","MIDDLE"], size=0.8)), 
appearance=
Appearance(DEF="LightBlueAppearance", 
material=
Material(diffuseColor=((0.1,0.7,0.7)))))]),
Transform(translation=((-3,0,0)), children=[
Shape(
geometry=
Text(string=["I don't think so","","he said \"Hi\""], 
fontStyle=
FontStyle(USE="testFontStyle")), 
appearance=
Appearance(USE="LightBlueAppearance"))]),
Transform(translation=((3,0,0)), children=[
Shape(
geometry=
Text(string=["I don't think so","","he said \"Hi\""], 
fontStyle=
FontStyle(USE="testFontStyle")), 
appearance=
Appearance(USE="LightBlueAppearance"))])]))
.XML())
