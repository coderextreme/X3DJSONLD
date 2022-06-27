'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Full", version="3.3", 
head=head(), 
Scene=Scene(children=[
ExternProtoDeclare(name="IcoSphere", url=[", ","https://cdn.rawgit.com/create3000/Library/1.0.13/Prototypes/Geometry3D/IcoSphere.x3d, ","http://cdn.rawgit.com/create3000/Library/1.0.13/Prototypes/Geometry3D/IcoSphere.x3d, ","https://rawgit.com/create3000/Library/1.0.13/Prototypes/Geometry3D/IcoSphere.x3dhttp://rawgit.com/create3000/Library/1.0.13/Prototypes/Geometry3D/IcoSphere.x3d"], field=[field(name="type", accessType="inputOutput", type="SFString"),
field(name="order", accessType="inputOutput", type="SFInt32"),
field(name="radius", accessType="inputOutput", type="SFFloat"),
field(name="solid", accessType="initializeOnly", type="SFBool")
]),
WorldInfo(title="BoundedPhysicsModel", 
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(0),float(0),float(15)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(0),float(0),float(1),float(0)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(0),float(0),float(0)])]),
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="nodes", DEF="nodes", reference="http://titania.create3000.de", value=[
Transform(DEF="Icosahedron", children=[
Shape(
appearance=
Appearance(
material=
Material()), 
geometry=
ProtoInstance(name="IcoSphere", DEF="_1", fieldValue=[fieldValue(name="order", value=3)
]))])]),
MetadataBoolean(name="selectGeometry", DEF="selectGeometry", reference="http://titania.create3000.de", value=[False])]),
MetadataSet(name="Page", DEF="Page", reference="http://titania.create3000.de", value=[
MetadataInteger(name="activeView", DEF="activeView", reference="http://titania.create3000.de", value=[int(1)]),
MetadataInteger(name="multiView", DEF="multiView", reference="http://titania.create3000.de", value=[int(0)])])]))),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
Viewpoint(description="Viewpoint", position=((0,0,15))),
Transform(DEF="Box", children=[
Shape(
appearance=
Appearance(
material=
Material(transparency=0.49)), 
geometry=
Box(DEF="_2", size=((7,7,7))))]),
Transform(USE="Icosahedron"),
TimeSensor(DEF="_3", cycleInterval=20, loop=True),
BooleanSequencer=(DEF="_4", key=[float(0),float(0.3),float(1)], keyValue=[True,False]),
ParticleSystem(DEF="_5", geometryType="POINT", maxParticles=4000, createParticles=False, particleLifetime=30, lifetimeVariation=0, particleSize=((0.1,0.1)), colorKey=(float(0),float(0.1),float(0.4),float(1)), 
emitter=(
ConeEmitter(position=((0,-3,0)), direction=((1,4,0)), angle=0.4, speed=0.2, mass=3200)), physics=(
BoundedPhysicsModel(DEF="BoundedSphere", 
geometry=
ProtoInstance(name="IcoSphere", USE="_1")),
BoundedPhysicsModel(DEF="BoundedBox", 
geometry=
Box(USE="_2")),
ForcePhysicsModel(force=((0,-0.098,0)))), 
color=
ColorRGBA(color=[(1,0.38,0,0.5),(1,0.58,0.06,0.5),(1,0.37,0,0.5),(1,0.05,0,0.5)]), 
appearance=
Appearance(
lineProperties=(
LineProperties(linewidthScaleFactor=4)))),
Transform(DEF="IndexedLineSet", children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(0),int(1),int(2)], coordIndex=[int(0),int(1),int(-1),int(2),int(3),int(-1),int(4),int(5),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
ROUTE(fromNode="_3", fromField="fraction_changed", toNode="_4", toField="set_fraction"),
ROUTE(fromNode="_4", fromField="value_changed", toNode="_5", toField="set_createParticles")]))
.XML())
