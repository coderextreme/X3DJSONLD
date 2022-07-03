'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Immersive", version="3.0", 
head=head(), 
Scene=Scene(children=[
Viewpoint(description="Extrusion Heart", orientation=((1,0,0,1.57)), position=((0,-4,0))),
Transform(translation=((0,-0.5,0)), children=[
Shape(
geometry=
Extrusion(creaseAngle=3.14159, crossSection=[(0,0.8),(0.2,1),(0.7,0.95),(1,0.5),(0.8,0),(0.5,-0.3),(0,-0.7),(-0.5,-0.3),(-0.8,0),(-1,0.5),(-0.7,0.95),(-0.2,1),(0,0.8)], scale=((0.01,0.01),(0.8,0.8),(1,1),(0.8,0.8),(0.01,0.01)), solid=False, spine=[(0,0,0),(0,0.1,0),(0,0.5,0),(0,0.9,0),(0,1,0)]), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.8,0.3,0.3)))))])]))
.XML())
