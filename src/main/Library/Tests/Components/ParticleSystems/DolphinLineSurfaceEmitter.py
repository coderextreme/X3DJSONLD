'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Full", version="3.3", 
head=head(), 
Scene=Scene(children=[
ExternProtoDeclare(name="Dolphin", url=[", ","Dolphin.x3d#Dolphinfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Dolphin.x3d#Dolphin"], field=[field(name="set_fraction", accessType="inputOnly", type="SFFloat"),
field(name="solid", accessType="initializeOnly", type="SFBool")
]),
WorldInfo(
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="AngleGrid", DEF="AngleGrid", reference="http://titania.create3000.de", value=[
MetadataBoolean(name="enabled", DEF="enabled", reference="http://titania.create3000.de", value=[False])]),
MetadataSet(name="Grid", DEF="Grid", reference="http://titania.create3000.de", value=[
MetadataBoolean(name="enabled", DEF="enabled_1", reference="http://titania.create3000.de", value=[True])]),
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(209.085708618164),float(-284.294311523438),float(251.209625244141)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(0.832041258895059),float(0.311619716372351),float(0.458912296484134),float(1.01485308574234)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(17.631872177124),float(-9.29712867736816),float(-18.6251792907715)])]),
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de"),
MetadataSet(name="children", DEF="children", reference="http://titania.create3000.de", value=[
ParticleSystem(DEF="_1", geometryType="LINE", maxParticles=15000, particleSize=((6,6)), 
emitter=(
SurfaceEmitter(speed=2, mass=0.01, surfaceArea=0.01, 
surface=(
ProtoInstance(name="Dolphin", DEF="_2")))), 
appearance=
Appearance(
material=
Material(DEF="Rococo17", ambientIntensity=0.187004, diffuseColor=((0,0,0)), emissiveColor=((0.640987,0.460097,0.748016)), shininess=0.612121)))])])]))),
Background(DEF="White", skyColor=[(1,1,1)]),
Viewpoint(description="Home", position=((179.724,-295.826,258.352)), orientation=((0.851609192029354,0.229794819966725,0.47112219727749,0.997756545817209)), centerOfRotation=((17.6319,-9.29713,-18.6252))),
TimeSensor(DEF="_3", cycleInterval=10, loop=True),
Transform(DEF="Box", children=[
Shape(
appearance=
Appearance(
material=
Material(transparency=0.884393)), 
geometry=
ProtoInstance(name="Dolphin", USE="_2"))]),
ParticleSystem(USE="_1"),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
ROUTE(fromNode="_3", fromField="fraction_changed", toNode="_2", toField="set_fraction")]))
.XML())
