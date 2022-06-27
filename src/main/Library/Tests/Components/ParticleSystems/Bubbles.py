'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Full", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="Bubbles", 
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(1.62303498729208),float(40.0774585689728),float(42.6164648005402)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(0.948208773060804),float(-0.218726178841849),float(-0.230345352416253),float(5.85764824335848)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(0),float(0),float(0)])]),
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de"),
MetadataSet(name="children", DEF="children", reference="http://titania.create3000.de", value=[
DirectionalLight(DEF="_1", direction=((-0.372556,-3.8217e-05,-0.92801)), shadows=True, shadowIntensity=0.518717)])])]))),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
NavigationInfo(headlight=False),
Viewpoint(description="Viewpoint", position=((0,20,55))),
Transform(DEF="IndexedLineSet", children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(0),int(1),int(2)], coordIndex=[int(0),int(1),int(-1),int(2),int(3),int(-1),int(4),int(5),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
ParticleSystem(geometryType="GEOMETRY", maxParticles=500, particleLifetime=8, lifetimeVariation=0.8, particleSize=((1,1)), 
emitter=(
PointEmitter(direction=((0,0,0)), speed=0.5, variation=0.5, mass=0.1, surfaceArea=0.1)), physics=(
WindPhysicsModel(direction=((0,1,0)), speed=0.6, gustiness=1.7, turbulence=0.3),
WindPhysicsModel(speed=1, gustiness=1.5)), 
appearance=
Appearance(
material=
Material(ambientIntensity=0.25, diffuseColor=((1,0.520125,0.73699)), specularColor=((0.951515,0.951515,0.951515)), shininess=0.557576)), 
geometry=
Sphere()),
Transform(DEF="Rectangle2D", translation=((0,19.2591,-14.5791)), scale=((43.4935,20.2591,1)), children=[
Shape(
appearance=
Appearance(
material=
Material()), 
geometry=
Rectangle2D())]),
DirectionalLight(USE="_1"),
Script(DEF="PhongShadingScript", 
#['', 'ecmascript:', '', 'function initialize ()', '{', '\tBrowser .setBrowserOption ("Shading", "PHONG");', '}', '', '']
)]))
.XML())
