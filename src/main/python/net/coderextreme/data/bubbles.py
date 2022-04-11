'''
x3d.py package 4.0.63.7 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Interchange", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="Bubbles.x3d"),
Transform(DEF="Bubbles", children=[
Group(DEF="Bubble", children=[
TimeSensor(DEF="BubbleClock", cycleInterval=6.0, loop=True),
PositionInterpolator(DEF="BubblePath1", key=[float(0),float(0.5),float(0.8),float(0.9),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.75,0.75,0.75),(0.86,0.86,0.86),(0.99,0.998,0.9876),(1.272,1.9044,0.9509)]),
PositionInterpolator(DEF="BubblePath2", key=[float(0),float(0.3),float(0.64),float(0.85),float(1.0)], keyValue=[(0.1,0.1,0.1),(0.2,0.4,0.25),(0.3,0.5,0.46),(0.75,0.5,0.575),(0.038483478,1.989,1.098373)]),
PositionInterpolator(DEF="BubblePath3", key=[float(0),float(0.1),float(0.45),float(0.7),float(1.0)], keyValue=[(0.01,0.01,0.01),(0.25,0.35,0.0045),(0.55,0.6,0.0055),(0.66,0.665,0.00655),(1.555,1.09043,0.005734)]),
PositionInterpolator(DEF="BubblePath4", key=[float(0),float(0.5),float(0.6),float(0.8),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.5,0.5,0.005),(0.6,0.6,0.006),(0.75,0.75,0.0075),(1.948594,1.3983,0.009009349)]),
PositionInterpolator(DEF="BubblePath5", key=[float(0),float(0.25),float(0.35),float(0.65),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.5,0.5,0.005),(0.6,0.6,0.006),(0.75,0.75,0.0075),(1.84444,1.22222,0.1)]),
PositionInterpolator(DEF="BubblePath6", key=[float(0),float(0.15),float(0.22235),float(0.55565),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.235,0.3455,0.0055),(0.356,0.676,0.00456),(0.5675,0.75,0.0074565),(1.098,1.0343,0.14)]),
PositionInterpolator(DEF="BubblePath7", key=[float(0),float(0.2425),float(0.4535),float(0.6775),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.12345,0.2225,0.00335),(0.786,0.456,0.00666),(0.74555,0.7335,0.00234575),(0.08787,1.022,0.12)]),
PositionInterpolator(DEF="BubblePath8", key=[float(0),float(0.1125),float(0.5535),float(0.97865),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.1235,0.05,0.00125),(0.5666,0.4346,0.005556),(0.8975,0.34575,0.0098775),(1.8787,1.686,0.86)]),
PositionInterpolator(DEF="BubblePath9", key=[float(0),float(0.0025),float(0.035),float(0.65),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.522,0.5445,0.0057),(0.6543,0.226,0.0055),(0.45575,0.4375,0.0067),(1.8787,2.0,0.1545)]),
PositionInterpolator(DEF="BubblePath10", key=[float(0),float(0.00025),float(0.035),float(0.6895),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.8765,0.445,0.00335),(0.3336,0.4446,0.005556),(0.765,0.75,0.0075),(1.0,1.0,0.1)]),
Transform(children=[
Transform(DEF="bubble1", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.025))]),
Transform(DEF="bubble2", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.055))]),
Transform(DEF="bubble3", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.065))]),
Transform(DEF="bubble4", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.015))]),
Transform(DEF="bubble5", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.075))]),
Transform(DEF="bubble6", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.005))]),
Transform(DEF="bubble7", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.035))]),
Transform(DEF="bubble8", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.05))]),
Transform(DEF="bubble9", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.045))]),
Transform(DEF="bubble10", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.035))]),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath1"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath2"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath3"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath4"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath5"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath6"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath7"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath8"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath9"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath10"),
ROUTE(fromField="value_changed", fromNode="BubblePath1", toField="set_translation", toNode="bubble1"),
ROUTE(fromField="value_changed", fromNode="BubblePath2", toField="set_translation", toNode="bubble2"),
ROUTE(fromField="value_changed", fromNode="BubblePath3", toField="set_translation", toNode="bubble3"),
ROUTE(fromField="value_changed", fromNode="BubblePath4", toField="set_translation", toNode="bubble4"),
ROUTE(fromField="value_changed", fromNode="BubblePath5", toField="set_translation", toNode="bubble5"),
ROUTE(fromField="value_changed", fromNode="BubblePath6", toField="set_translation", toNode="bubble6"),
ROUTE(fromField="value_changed", fromNode="BubblePath7", toField="set_translation", toNode="bubble7"),
ROUTE(fromField="value_changed", fromNode="BubblePath8", toField="set_translation", toNode="bubble8"),
ROUTE(fromField="value_changed", fromNode="BubblePath9", toField="set_translation", toNode="bubble9"),
ROUTE(fromField="value_changed", fromNode="BubblePath10", toField="set_translation", toNode="bubble10")])])]),
Background(skyColor=[(0,0,0.6)])]))
.XML())
