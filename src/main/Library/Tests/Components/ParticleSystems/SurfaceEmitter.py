'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Full", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="SurfaceEmitter", 
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(4.76851185683365),float(3.20037486840233),float(-1.41588301559672)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(-0.199294275901945),float(0.976263035154586),float(0.0848072979375946),float(1.82535953386045)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(1.07153058052063),float(2.01354050636292),float(-0.443973183631897)])]),
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de"),
MetadataSet(name="children", DEF="children", reference="http://titania.create3000.de", value=[
Appearance(DEF="_1")])]),
MetadataSet(name="AngleGrid", DEF="AngleGrid", reference="http://titania.create3000.de", value=[
MetadataBoolean(name="enabled", DEF="enabled", reference="http://titania.create3000.de", value=[False])]),
MetadataSet(name="Grid", DEF="Grid", reference="http://titania.create3000.de", value=[
MetadataBoolean(name="enabled", DEF="enabled_1", reference="http://titania.create3000.de", value=[True])])]))),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
Viewpoint(description="Viewpoint", position=((0,0,8))),
Transform(children=[
ParticleSystem(geometryType="SPRITE", maxParticles=10000, particleLifetime=10, lifetimeVariation=0.01, particleSize=((0.1,0.1)), colorKey=(float(0),float(0.1),float(0.4),float(1)), 
emitter=(
SurfaceEmitter(speed=0.05, mass=0.01, surfaceArea=0.01, 
surface=(
IndexedFaceSet(DEF="_2", ccw=False, coordIndex=[int(0),int(1),int(2),int(-1),int(3),int(4),int(5),int(6),int(-1),int(7),int(8),int(9),int(10),int(11),int(-1)], 
coord=
Coordinate(point=[(0,0,0),(0,-1,0),(1,0,0),(0,-1,0),(0,-2,0),(1,-2,0),(1,-1,0),(0,0,0),(2,1,0),(2,2,0),(1,3,0),(0,2,0)]))))), 
color=
ColorRGBA(color=[(1,0.38,0,1),(1,0.58,0.06,1),(1,0.37,0,1),(1,0.05,0,1)]), 
appearance=
Appearance(USE="_1"))]),
Transform(DEF="IndexedLineSet", children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(0),int(1),int(2)], coordIndex=[int(0),int(1),int(-1),int(2),int(3),int(-1),int(4),int(5),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
Transform(DEF="Background", children=[
Background(skyAngle=[float(0.8),float(1.3),float(1.4),float(1.5708)], skyColor=[(0.21,0.31,0.59),(0.33,0.45,0.7),(0.57,0.66,0.85),(0.6,0.73,0.89),(0.7,0.83,0.98)], groundAngle=[float(0.6),float(1.2),float(1.3),float(1.5708)], groundColor=[(0.21,0.31,0.59),(0.33,0.45,0.7),(0.57,0.66,0.85),(0.6,0.73,0.89),(0.7,0.83,0.98)])]),
Transform(DEF="Box", children=[
Shape(
appearance=
Appearance(
material=
Material()), 
geometry=
IndexedFaceSet(USE="_2"))])]))
.XML())
