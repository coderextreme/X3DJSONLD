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
WorldInfo(
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="AngleGrid", DEF="AngleGrid", reference="http://titania.create3000.de", value=[
MetadataBoolean(name="enabled", DEF="enabled", reference="http://titania.create3000.de", value=[False])]),
MetadataSet(name="Grid", DEF="Grid", reference="http://titania.create3000.de", value=[
MetadataBoolean(name="enabled", DEF="enabled_1", reference="http://titania.create3000.de", value=[False])]),
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(5.87788534164429),float(6.46984958648682),float(13.8524446487427)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(-0.704047462871212),float(0.695566762376517),float(0.143192350010952),float(0.568941727555854)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(-1.77635683940025e-15),float(-7.105427357601e-15),float(3.5527136788005e-15)])]),
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de")])]))),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
ProtoInstance(name="Grid"),
Viewpoint(description="Home", position=((5.87789,6.46985,13.8524)), orientation=((-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854)), centerOfRotation=((-1.77636e-15,-7.10543e-15,3.55271e-15))),
ParticleSystem(DEF="BlackSmoke", geometryType="POINT", maxParticles=4000, particleLifetime=4, lifetimeVariation=0.5, particleSize=((1,1)), colorKey=(float(0),float(0.2),float(0.5),float(0.7),float(0.8),float(1)), 
emitter=(
PointEmitter(direction=((0,0,0)), speed=0.2, variation=0.5, mass=0.1, surfaceArea=0.1)), physics=(
WindPhysicsModel(direction=((0,1,0)), speed=0.5, gustiness=1.7, turbulence=0.1),
WindPhysicsModel(speed=0.3, gustiness=2)), 
appearance=
Appearance(
lineProperties=(
LineProperties(linewidthScaleFactor=8)), 
material=
Material(emissiveColor=((0.0437445,0.0437445,0.0437445)), transparency=0.96)))]))
.XML())
