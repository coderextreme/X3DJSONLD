'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Interchange", version="3.0", 
head=head(), 
Scene=Scene(children=[
Viewpoint(description="Front View"),
Viewpoint(description="Rear View", orientation=((0,1,0,3.14)), position=((0,0,-10))),
Viewpoint(description="Top View", orientation=((1,0,0,-1.57)), position=((0,10,0))),
Viewpoint(description="Bottom View", orientation=((1,0,0,1.57)), position=((0,-10,0))),
Viewpoint(description="Right View", orientation=((0,1,0,1.57)), position=((10,0,0))),
Viewpoint(description="Left View", orientation=((0,1,0,-1.57)), position=((-10,0,0))),
NavigationInfo(type="\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""),
Shape(
appearance=
Appearance(
material=
Material(), 
texture=
PixelTexture(image=[2,2,4,4278190335,16711935,4294967295,4294902015])), 
geometry=
IndexedFaceSet(colorPerVertex=False, coordIndex=[int(0),int(1),int(3),int(2),int(-1),int(4),int(5),int(7),int(6),int(-1),int(6),int(7),int(1),int(0),int(-1),int(2),int(3),int(5),int(4),int(-1),int(6),int(0),int(2),int(4),int(-1),int(1),int(7),int(5),int(3),int(-1)], creaseAngle=0.5, texCoordIndex=[int(0),int(1),int(3),int(2),int(-1),int(0),int(1),int(3),int(2),int(-1),int(0),int(1),int(3),int(2),int(-1),int(0),int(1),int(3),int(2),int(-1),int(0),int(1),int(3),int(2),int(-1),int(0),int(1),int(3),int(2),int(-1)], 
color=
Color(color=[(0,1,0),(0,1,0),(0,1,0),(0,1,0),(0,1,0),(0,1,0)]), 
coord=
Coordinate(point=[(-2,1,1),(-2,-1,1),(2,1,1),(2,-1,1),(2,1,-1),(2,-1,-1),(-2,1,-1),(-2,-1,-1)]), 
texCoord=
TextureCoordinate(point=[(0.5,1),(0.5,0.5),(1,1),(1,0.5)])))]))
.XML())
