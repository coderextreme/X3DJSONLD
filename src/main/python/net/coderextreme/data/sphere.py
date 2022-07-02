'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print((
X3D(profile="Interchange", version="3.3", 
head=head(), 
Scene=Scene(children=[
Group(children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)))), 
geometry=
Sphere())])]))
.XML()))
