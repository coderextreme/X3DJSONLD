# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
Group(children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)))), 
geometry=
Box())]),
Transform(rotation=((7,8,9,3.14)), scale=((4,5,6)), translation=((1,2,3)))]))
.XML())
