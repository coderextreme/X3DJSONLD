# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="qq3.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="translator", content="John Carlson"),
meta(name="created", content="11 Jan 2015"),
meta(name="modified", content="05 May 2017"),
meta(name="description", content="12 extrusions to test prototype expander"),
meta(name="identifier", content="https://coderextreme.net/x3d/qq3.x3d"),
meta(name="generator", content="manual"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
ProtoDeclare(name="Process", 
ProtoBody=ProtoBody(children=[
Group(children=[
Comment(value=''' left '''),

Transform(scale=((0.5,0.5,0.5)), children=[
Shape(DEF="ShapeLeftDown", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,1,0)))), 
geometry=
Extrusion(spine=[(-2.5,0,0),(-1.5,0,0)], creaseAngle=0.785, crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)]))]),
Comment(value=''' right '''),

Transform(scale=((0.5,0.5,0.5)), children=[
Shape(DEF="ShapeUpRight", 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0.7,1)))), 
geometry=
Extrusion(spine=[(1.5,0,0),(2.5,0,0)], creaseAngle=0.785, crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)]))]),
Comment(value=''' up '''),

Transform(scale=((0.5,0.5,0.5)), children=[
Shape(USE="ShapeUpRight")]),
Comment(value=''' down '''),

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
