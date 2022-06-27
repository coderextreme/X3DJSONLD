'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Full", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de", value=[
Transform(DEF="Box", children=[
Shape(
appearance=
Appearance(
material=
Material(transparency=0.703209)), 
geometry=
IndexedFaceSet(texCoordIndex=[int(0),int(1),int(2),int(3),int(-1),int(0),int(1),int(2),int(3),int(-1),int(0),int(1),int(2),int(3),int(-1),int(0),int(1),int(2),int(3),int(-1),int(0),int(1),int(2),int(3),int(-1)], coordIndex=[int(0),int(1),int(2),int(3),int(-1),int(3),int(2),int(6),int(7),int(-1),int(4),int(5),int(1),int(0),int(-1),int(4),int(0),int(3),int(7),int(-1),int(1),int(5),int(6),int(2),int(-1)], 
texCoord=
TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)]), 
coord=
Coordinate(DEF="_1", point=[(-1,-1,1),(1,-1,1),(1,1,1),(-1,1,1),(-1,-1,-1),(1,-1,-1),(1,1,-1),(-1,1,-1)])))])]),
MetadataSet(name="children", DEF="children", reference="http://titania.create3000.de")]),
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(3.27443170547485),float(-2.87154245376587),float(-2.91164755821228)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(0.3740505936904),float(-0.817335415554851),float(0.438233923652242),float(3.52979903438381)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(-1.33226762955019e-15),float(2.48689957516035e-14),float(-3.01980662698043e-14)])])]))),
NavigationInfo(avatarSize=[float(0.05),float(1.6),float(0.75)]),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
Viewpoint(description="Viewpoint", position=((3.27443,-2.87154,-2.91165)), orientation=((0.3740505936904,-0.817335415554851,0.438233923652242,3.52979903438381)), centerOfRotation=((-1.33227e-15,2.4869e-14,-3.01981e-14))),
Viewpoint(description="Debug", position=((0,0.05,0.13))),
Transform(children=[
ParticleSystem(geometryType="POINT", maxParticles=80000, particleLifetime=40, lifetimeVariation=1, particleSize=((0.1,0.1)), colorKey=(float(0),float(0.1),float(0.4),float(1)), 
emitter=(
VolumeEmitter(direction=((0,0,0)), mass=0.01, surfaceArea=0.01, 
coord=
Coordinate(USE="_1"))), 
color=
ColorRGBA(color=[(1,0.38,0,0.5),(1,0.58,0.06,0.5),(1,0.37,0,0.5),(1,0.05,0,0.5)]), 
appearance=
Appearance(
lineProperties=(
LineProperties(linewidthScaleFactor=1))))]),
Transform(DEF="IndexedLineSet", children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(0),int(1),int(2)], coordIndex=[int(0),int(1),int(-1),int(2),int(3),int(-1),int(4),int(5),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
Transform(DEF="IndexedLineSet1", translation=((0.001,0,0)), children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(1)], coordIndex=[int(2),int(3),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
Transform(DEF="IndexedLineSet2", translation=((0.004,0,0)), children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(1)], coordIndex=[int(2),int(3),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
Transform(DEF="IndexedLineSet3", translation=((0.013,0,0)), children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(1)], coordIndex=[int(2),int(3),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
Transform(USE="Box")]))
.XML())
