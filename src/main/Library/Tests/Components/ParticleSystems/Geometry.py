'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Full", version="3.3", 
head=head(), 
Scene=Scene(children=[
ExternProtoDeclare(name="Grid", url=[", ","GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid"], field=[field(name="translation", accessType="inputOutput", type="SFVec3f"),
field(name="rotation", accessType="inputOutput", type="SFRotation"),
field(name="scale", accessType="inputOutput", type="SFVec3f"),
field(name="dimension", accessType="inputOutput", type="MFInt32"),
field(name="majorLineEvery", accessType="inputOutput", type="MFInt32"),
field(name="majorLineOffset", accessType="inputOutput", type="MFInt32"),
field(name="color", accessType="inputOutput", type="SFColor"),
field(name="transparency", accessType="inputOutput", type="SFFloat"),
field(name="lineColor", accessType="inputOutput", type="SFColor"),
field(name="lineTransparency", accessType="inputOutput", type="SFFloat"),
field(name="majorLineColor", accessType="inputOutput", type="SFColor"),
field(name="majorLineTransparency", accessType="inputOutput", type="SFFloat"),
field(name="solid", accessType="initializeOnly", type="SFBool")
]),
WorldInfo(title="Geometry", 
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de"),
MetadataSet(name="children", DEF="children", reference="http://titania.create3000.de", value=[
ParticleSystem(DEF="_1", geometryType="GEOMETRY", maxParticles=10, particleLifetime=4, lifetimeVariation=0.5, particleSize=((1,1)), 
emitter=(
PointEmitter(direction=((0,0,0)), speed=0.5, variation=0.5, mass=0.1, surfaceArea=0.1)), physics=(
WindPhysicsModel(direction=((0,1,0)), speed=0.7, gustiness=1.7, turbulence=0.3),
WindPhysicsModel(speed=0.5, gustiness=2)), 
appearance=
Appearance(
texture=
ImageTexture(url=["../images/image.png"])), 
geometry=
Cone())])]),
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(0),float(20),float(55)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(0),float(0),float(1),float(0)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(0),float(0),float(0)])])]))),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
Viewpoint(description="Viewpoint", position=((0,20,55))),
ParticleSystem(USE="_1"),
Transform(DEF="IndexedLineSet", children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(0),int(1),int(2)], coordIndex=[int(0),int(1),int(-1),int(2),int(3),int(-1),int(4),int(5),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
ProtoInstance(name="Grid")]))
.XML())
