'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.0", 
head=head(), 
Scene=Scene(children=[
Viewpoint(description="XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)", orientation=((1,0,0,-0.4)), position=((0,10,25))),
Transform(DEF="GridLocation", children=[
Group(children=[
Shape(DEF="LinesAlignedAlongZ", 
geometry=
IndexedLineSet(colorIndex=[int(1),int(0),int(0),int(0),int(0),int(2),int(0),int(0),int(0),int(0),int(1),int(0),int(0),int(0),int(0),int(2),int(0),int(0),int(0),int(0),int(1)], colorPerVertex=False, coordIndex=[int(1),int(22),int(-1),int(2),int(23),int(-1),int(3),int(24),int(-1),int(4),int(25),int(-1),int(5),int(26),int(-1),int(6),int(27),int(-1),int(7),int(28),int(-1),int(8),int(29),int(-1),int(9),int(30),int(-1),int(10),int(31),int(-1),int(11),int(32),int(-1),int(12),int(33),int(-1),int(13),int(34),int(-1),int(14),int(35),int(-1),int(15),int(36),int(-1),int(16),int(37),int(-1),int(17),int(38),int(-1),int(18),int(39),int(-1),int(19),int(40),int(-1),int(20),int(41),int(-1),int(21),int(42),int(-1)], 
coord=
Coordinate(DEF="EndPoints", point=[(0,0,0),(-10,0,10),(-9,0,10),(-8,0,10),(-7,0,10),(-6,0,10),(-5,0,10),(-4,0,10),(-3,0,10),(-2,0,10),(-1,0,10),(0,0,10),(1,0,10),(2,0,10),(3,0,10),(4,0,10),(5,0,10),(6,0,10),(7,0,10),(8,0,10),(9,0,10),(10,0,10),(-10,0,-10),(-9,0,-10),(-8,0,-10),(-7,0,-10),(-6,0,-10),(-5,0,-10),(-4,0,-10),(-3,0,-10),(-2,0,-10),(-1,0,-10),(0,0,-10),(1,0,-10),(2,0,-10),(3,0,-10),(4,0,-10),(5,0,-10),(6,0,-10),(7,0,-10),(8,0,-10),(9,0,-10),(10,0,-10)]), 
color=
Color(color=[(0.4,0.4,0.4),(0.8,0.2,0),(0.4,0.1,0.05)]))),
Transform(DEF="LinesAlignedAlongX", rotation=((0,1,0,1.57079)), children=[
Shape(USE="LinesAlignedAlongZ")]),
Transform(translation=((0,-0.5,0)), children=[
Billboard(children=[
Shape(
geometry=
Text(DEF="CenterTextNode", string=["origin"], 
fontStyle=
FontStyle(DEF="FS4", justify=["MIDDLE","MIDDLE"], size=0.4)), 
appearance=
Appearance(DEF="DefaultAppearance", 
material=
Material()))])]),
Transform(translation=((10,-0.5,10)), children=[
Billboard(children=[
Shape(
geometry=
Text(string=["10 0 10"], 
fontStyle=
FontStyle(USE="FS4")), 
appearance=
Appearance(USE="DefaultAppearance"))])]),
Transform(translation=((10,-0.5,-10)), children=[
Billboard(children=[
Shape(
geometry=
Text(string=["10 0 -10"], 
fontStyle=
FontStyle(USE="FS4")), 
appearance=
Appearance(USE="DefaultAppearance"))])]),
Transform(translation=((-10,-0.5,10)), children=[
Billboard(children=[
Shape(
geometry=
Text(string=["-10 0 10"], 
fontStyle=
FontStyle(USE="FS4")), 
appearance=
Appearance(USE="DefaultAppearance"))])]),
Transform(translation=((-10,-0.5,-10)), children=[
Billboard(children=[
Shape(
geometry=
Text(string=["-10 0 -10"], 
fontStyle=
FontStyle(USE="FS4")), 
appearance=
Appearance(USE="DefaultAppearance"))])])])])]))
.XML())
