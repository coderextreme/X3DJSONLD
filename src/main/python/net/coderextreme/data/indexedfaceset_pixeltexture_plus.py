'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
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
IndexedFaceSet(colorPerVertex=False, coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1], creaseAngle=0.5, texCoordIndex=[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1], 
color=
Color(color=[(0,1,0),(0,1,0),(0,1,0),(0,1,0),(0,1,0),(0,1,0)]), 
coord=
Coordinate(point=[(-2,1,1),(-2,-1,1),(2,1,1),(2,-1,1),(2,1,-1),(2,-1,-1),(-2,1,-1),(-2,-1,-1)]), 
texCoord=
TextureCoordinate(point=[(-1,2),(-1,-1),(2,2),(2,-1)])))]))
.XML())
