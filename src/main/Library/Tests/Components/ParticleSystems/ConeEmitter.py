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
WorldInfo(title="ConeEmitter", 
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(0),float(0),float(4)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(0),float(0),float(1),float(0)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(0),float(0),float(0)])]),
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="children", DEF="children", reference="http://titania.create3000.de", value=[
ParticleSystem(DEF="_1", geometryType="POINT", maxParticles=1000, particleLifetime=10, lifetimeVariation=0.01, particleSize=((0.1,0.1)), colorKey=(float(0),float(0.1),float(0.4),float(1)), 
emitter=(
ConeEmitter(direction=((1,1,0)))), 
color=
ColorRGBA(color=[(1,0.38,0,1),(1,0.58,0.06,1),(1,0.37,0,1),(1,0.05,0,1)]), 
appearance=
Appearance(
lineProperties=(
LineProperties(linewidthScaleFactor=2))))]),
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de")])]))),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
Viewpoint(description="Viewpoint", position=((0,0,4))),
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
