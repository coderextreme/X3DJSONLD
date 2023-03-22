# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
ProtoDeclare(name="Process", 
ProtoBody=ProtoBody(children=[
Group(children=[
#left

Transform(scale=((0.5,0.5,0.5)), children=[
Shape(DEF="ShapeLeftDown", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,1,0)))), 
geometry=
Extrusion(spine=[(-2.5,0,0),(-1.5,0,0)], creaseAngle=0.785, crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)]))]),
#right

Transform(scale=((0.5,0.5,0.5)), children=[
Shape(DEF="ShapeUpRight", 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0.7,1)))), 
geometry=
Extrusion(spine=[(1.5,0,0),(2.5,0,0)], creaseAngle=0.785, crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)]))]),
#up

Transform(scale=((0.5,0.5,0.5)), children=[
Shape(USE="ShapeUpRight")]),
#down

Transform(scale=((0.5,0.5,0.5)), children=[
Shape(USE="ShapeLeftDown")]),])])),
Viewpoint(description="Process pipes", orientation=((1,0,0,-0.4)), position=((0,5,12))),
Transform(translation=((0,-2.5,0)), children=[
ProtoInstance(name="Process")]),
Transform(children=[
ProtoInstance(name="Process")]),
Transform(translation=((0,2.5,0)), children=[
ProtoInstance(name="Process")])]))
.XML())
