'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Full", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="PolylineEmitter", 
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(4),float(2),float(8)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(0),float(0),float(1),float(0)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(0),float(0),float(0)])]),
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="children", DEF="children", reference="http://titania.create3000.de"),
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de")])]))),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
Viewpoint(description="Viewpoint", position=((4,2,8))),
Transform(children=[
ParticleSystem(geometryType="LINE", maxParticles=10000, particleLifetime=10, lifetimeVariation=0.01, particleSize=((0.1,0.1)), colorKey=(float(0),float(0.1),float(0.4),float(1)), 
emitter=(
PolylineEmitter(speed=0.01, mass=0.01, surfaceArea=0.01, 
coord=
Coordinate(point=[(0,0,0),(1,1,0),(2,0,0),(4,2,0),(8,0,0)]))), physics=(
WindPhysicsModel(direction=((0,1,0)), speed=0.12, gustiness=8, turbulence=0.9),
WindPhysicsModel(speed=0.3, gustiness=1)), 
color=
ColorRGBA(color=[(1,0.38,0,0),(1,0.58,0.06,0.1),(1,0.37,0,0.1),(1,0.05,0,0)]), 
appearance=
Appearance(
lineProperties=(
LineProperties(linewidthScaleFactor=8))))]),
Transform(DEF="IndexedLineSet", children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(0),int(1),int(2)], coordIndex=[int(0),int(1),int(-1),int(2),int(3),int(-1),int(4),int(5),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))])]))
.XML())
