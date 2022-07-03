'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Interchange", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="ScubaTank.x3d"),
Transform(DEF="ScubaTank", children=[
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="tank", ambientIntensity=0.3, diffuseColor=((0.3,0.3,0.5)), shininess=0.1, specularColor=((0.7,0.7,0.8)))), 
geometry=
Cylinder(height=0.7, radius=0.1))]),
Transform(translation=((0,0.35,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="tank")), 
geometry=
Sphere(radius=0.098))]),
Transform(translation=((0,-0.35,0)), children=[
Shape(DEF="tankBottom", 
appearance=
Appearance(
material=
Material(DEF="black", ambientIntensity=0.3, diffuseColor=((0,0,0)))), 
geometry=
Cylinder(height=0.06, radius=0.115))]),
Group(DEF="tankNozzle", children=[
Transform(children=[
Transform(translation=((0,0.45,0)), children=[
Shape(DEF="pressure", 
appearance=
Appearance(
material=
Material(DEF="pressureColor", ambientIntensity=0.4, diffuseColor=((0.91,0.91,0.91)), shininess=0.16, specularColor=((0.91,0.9,0.91)))), 
geometry=
Cylinder(height=0.1, radius=0.015))]),
Transform(translation=((0,0.5,0)), children=[
Shape(DEF="pressureTop", 
appearance=
Appearance(
material=
Material(USE="black")), 
geometry=
Cylinder(height=0.02, radius=0.025))]),
Transform(rotation=((0,0,1,1.57)), translation=((-0.028,0.462,0)), children=[
Transform(children=[
Shape(DEF="connectorToRegulator", 
appearance=
Appearance(
material=
Material(USE="pressureColor")), 
geometry=
Cylinder(height=0.03, radius=0.01))]),
Transform(translation=((0,0.02,0)), children=[
Shape(DEF="connectorToRegulatorTop", 
appearance=
Appearance(
material=
Material(USE="black")), 
geometry=
Cylinder(height=0.02, radius=0.02))])])])]),
Transform(translation=((0,0.2,0)), children=[
Shape(DEF="tankHoldBelt", 
appearance=
Appearance(
material=
Material(USE="black")), 
geometry=
Cylinder(height=0.1, radius=0.115))])]),
Background(skyColor=[(0.6,0.6,0.6)])]))
.XML())
