# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="CoordinateAxes.x3d"),
Collision(DEF="DoNotCollideWithVisualizationWidget", children=[
#Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.

#This NavigationInfo allows examine mode and will be overridden by any parent scene.

#Each arrow goes from +1m to -1m to allow linear scaling to fit a scene

#Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user

Group(children=[
#Vertical Y arrow and label

Group(DEF="ArrowGreen", children=[
Shape(
geometry=
Cylinder(DEF="ArrowCylinder", radius=0.025, top=False), 
appearance=
Appearance(DEF="Green", 
material=
Material(diffuseColor=((0.1,0.6,0.1)), emissiveColor=((0.05,0.2,0.05))))),
Transform(translation=((0,1,0)), children=[
Shape(
geometry=
Cone(DEF="ArrowCone", bottomRadius=0.05, height=0.1), 
appearance=
Appearance(USE="Green"))])]),
Transform(translation=((0,1.08,0)), children=[
Billboard(children=[
Shape(
appearance=
Appearance(DEF="LABEL_APPEARANCE", 
material=
Material(diffuseColor=((1,1,0.3)), emissiveColor=((0.33,0.33,0.1)))), 
geometry=
Text(string=["Y"], 
fontStyle=
FontStyle(DEF="LABEL_FONT", family=["SANS"], justify=["MIDDLE","MIDDLE"], size=0.2)))])]),]),
Transform(rotation=((0,0,1,-1.57079)), children=[
#Horizontal X arrow and label

Group(children=[
Group(DEF="ArrowRed", children=[
Shape(
geometry=
Cylinder(USE="ArrowCylinder"), 
appearance=
Appearance(DEF="Red", 
material=
Material(diffuseColor=((0.7,0.1,0.1)), emissiveColor=((0.33,0,0))))),
Transform(translation=((0,1,0)), children=[
Shape(
geometry=
Cone(USE="ArrowCone"), 
appearance=
Appearance(USE="Red"))])]),
Transform(rotation=((0,0,1,1.57079)), translation=((0.072,1.1,0)), children=[
#note label rotated back to original coordinate frame

Billboard(children=[
Shape(
appearance=
Appearance(USE="LABEL_APPEARANCE"), 
geometry=
Text(string=["X"], 
fontStyle=
FontStyle(USE="LABEL_FONT")))]),])]),]),
Transform(rotation=((1,0,0,1.57079)), children=[
#Perpendicular Z arrow and label, note right-hand rule

Group(children=[
Group(DEF="ArrowBlue", children=[
Shape(
geometry=
Cylinder(USE="ArrowCylinder"), 
appearance=
Appearance(DEF="Blue", 
material=
Material(diffuseColor=((0.3,0.3,1)), emissiveColor=((0.1,0.1,0.33))))),
Transform(translation=((0,1,0)), children=[
Shape(
geometry=
Cone(USE="ArrowCone"), 
appearance=
Appearance(USE="Blue"))])]),
Transform(rotation=((1,0,0,-1.57079)), translation=((0,1.1,0.072)), children=[
#note label rotated back to original coordinate frame

Billboard(children=[
Shape(
appearance=
Appearance(USE="LABEL_APPEARANCE"), 
geometry=
Text(string=["Z"], 
fontStyle=
FontStyle(USE="LABEL_FONT")))]),])]),]),])]))
.XML())
