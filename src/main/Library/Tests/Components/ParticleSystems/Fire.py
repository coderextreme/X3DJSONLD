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
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(1.31269461177796),float(0.873141120607314),float(0.42007766929488)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(0.353413775780365),float(-0.897474128965571),float(-0.26389181670934),float(4.9156754975484)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(-1.7763600157738e-15),float(-7.10542989869984e-15),float(3.55271007891048e-15)])]),
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de"),
MetadataSet(name="children", DEF="children", reference="http://titania.create3000.de", value=[
Transform(DEF="Box", translation=((0,-1.02384,0)), scale=((2,1,2)), children=[
Shape(
appearance=
Appearance(
material=
Material()), 
geometry=
Box())])])])]))),
ParticleSystem(DEF="Fire2", geometryType="SPRITE", particleLifetime=2, lifetimeVariation=0.5, particleSize=((1,1)), colorKey=(float(0)), texCoordKey=(float(0),float(0.015625),float(0.03125),float(0.046875),float(0.0625),float(0.078125),float(0.09375),float(0.109375),float(0.125),float(0.140625),float(0.15625),float(0.171875),float(0.1875),float(0.203125),float(0.21875),float(0.234375),float(0.25),float(0.265625),float(0.28125),float(0.296875),float(0.3125),float(0.328125),float(0.34375),float(0.359375),float(0.375),float(0.390625),float(0.40625),float(0.421875),float(0.4375),float(0.453125),float(0.46875),float(0.484375),float(0.5),float(0.515625),float(0.53125),float(0.546875),float(0.5625),float(0.578125),float(0.59375),float(0.609375),float(0.625),float(0.640625),float(0.65625),float(0.671875),float(0.6875),float(0.703125),float(0.71875),float(0.734375),float(0.75),float(0.765625),float(0.78125),float(0.796875),float(0.8125),float(0.828125),float(0.84375),float(0.859375),float(0.875),float(0.890625),float(0.90625),float(0.921875),float(0.9375),float(0.953125),float(0.96875),float(0.984375),float(1)), 
emitter=(
PointEmitter(direction=((0,0,0)), speed=0.2, variation=0, mass=0.1, surfaceArea=0.1)), physics=(
WindPhysicsModel(direction=((0,1,0)), speed=0.5, gustiness=1.9),
WindPhysicsModel(direction=((1,-1,0)), speed=0.15, gustiness=7)), 
color=
ColorRGBA(color=[(1,1,1,0.1)]), 
texCoord=
TextureCoordinate(point=[(0,0),(0.125,0),(0.125,0.125),(0,0.125),(0.125,0),(0.25,0),(0.25,0.125),(0.125,0.125),(0.25,0),(0.375,0),(0.375,0.125),(0.25,0.125),(0.375,0),(0.5,0),(0.5,0.125),(0.375,0.125),(0.5,0),(0.625,0),(0.625,0.125),(0.5,0.125),(0.625,0),(0.75,0),(0.75,0.125),(0.625,0.125),(0.75,0),(0.875,0),(0.875,0.125),(0.75,0.125),(0.875,0),(1,0),(1,0.125),(0.875,0.125),(0,0.125),(0.125,0.125),(0.125,0.25),(0,0.25),(0.125,0.125),(0.25,0.125),(0.25,0.25),(0.125,0.25),(0.25,0.125),(0.375,0.125),(0.375,0.25),(0.25,0.25),(0.375,0.125),(0.5,0.125),(0.5,0.25),(0.375,0.25),(0.5,0.125),(0.625,0.125),(0.625,0.25),(0.5,0.25),(0.625,0.125),(0.75,0.125),(0.75,0.25),(0.625,0.25),(0.75,0.125),(0.875,0.125),(0.875,0.25),(0.75,0.25),(0.875,0.125),(1,0.125),(1,0.25),(0.875,0.25),(0,0.25),(0.125,0.25),(0.125,0.375),(0,0.375),(0.125,0.25),(0.25,0.25),(0.25,0.375),(0.125,0.375),(0.25,0.25),(0.375,0.25),(0.375,0.375),(0.25,0.375),(0.375,0.25),(0.5,0.25),(0.5,0.375),(0.375,0.375),(0.5,0.25),(0.625,0.25),(0.625,0.375),(0.5,0.375),(0.625,0.25),(0.75,0.25),(0.75,0.375),(0.625,0.375),(0.75,0.25),(0.875,0.25),(0.875,0.375),(0.75,0.375),(0.875,0.25),(1,0.25),(1,0.375),(0.875,0.375),(0,0.375),(0.125,0.375),(0.125,0.5),(0,0.5),(0.125,0.375),(0.25,0.375),(0.25,0.5),(0.125,0.5),(0.25,0.375),(0.375,0.375),(0.375,0.5),(0.25,0.5),(0.375,0.375),(0.5,0.375),(0.5,0.5),(0.375,0.5),(0.5,0.375),(0.625,0.375),(0.625,0.5),(0.5,0.5),(0.625,0.375),(0.75,0.375),(0.75,0.5),(0.625,0.5),(0.75,0.375),(0.875,0.375),(0.875,0.5),(0.75,0.5),(0.875,0.375),(1,0.375),(1,0.5),(0.875,0.5),(0,0.5),(0.125,0.5),(0.125,0.625),(0,0.625),(0.125,0.5),(0.25,0.5),(0.25,0.625),(0.125,0.625),(0.25,0.5),(0.375,0.5),(0.375,0.625),(0.25,0.625),(0.375,0.5),(0.5,0.5),(0.5,0.625),(0.375,0.625),(0.5,0.5),(0.625,0.5),(0.625,0.625),(0.5,0.625),(0.625,0.5),(0.75,0.5),(0.75,0.625),(0.625,0.625),(0.75,0.5),(0.875,0.5),(0.875,0.625),(0.75,0.625),(0.875,0.5),(1,0.5),(1,0.625),(0.875,0.625),(0,0.625),(0.125,0.625),(0.125,0.75),(0,0.75),(0.125,0.625),(0.25,0.625),(0.25,0.75),(0.125,0.75),(0.25,0.625),(0.375,0.625),(0.375,0.75),(0.25,0.75),(0.375,0.625),(0.5,0.625),(0.5,0.75),(0.375,0.75),(0.5,0.625),(0.625,0.625),(0.625,0.75),(0.5,0.75),(0.625,0.625),(0.75,0.625),(0.75,0.75),(0.625,0.75),(0.75,0.625),(0.875,0.625),(0.875,0.75),(0.75,0.75),(0.875,0.625),(1,0.625),(1,0.75),(0.875,0.75),(0,0.75),(0.125,0.75),(0.125,0.875),(0,0.875),(0.125,0.75),(0.25,0.75),(0.25,0.875),(0.125,0.875),(0.25,0.75),(0.375,0.75),(0.375,0.875),(0.25,0.875),(0.375,0.75),(0.5,0.75),(0.5,0.875),(0.375,0.875),(0.5,0.75),(0.625,0.75),(0.625,0.875),(0.5,0.875),(0.625,0.75),(0.75,0.75),(0.75,0.875),(0.625,0.875),(0.75,0.75),(0.875,0.75),(0.875,0.875),(0.75,0.875),(0.875,0.75),(1,0.75),(1,0.875),(0.875,0.875),(0,0.875),(0.125,0.875),(0.125,1),(0,1),(0.125,0.875),(0.25,0.875),(0.25,1),(0.125,1),(0.25,0.875),(0.375,0.875),(0.375,1),(0.25,1),(0.375,0.875),(0.5,0.875),(0.5,1),(0.375,1),(0.5,0.875),(0.625,0.875),(0.625,1),(0.5,1),(0.625,0.875),(0.75,0.875),(0.75,1),(0.625,1),(0.75,0.875),(0.875,0.875),(0.875,1),(0.75,1),(0.875,0.875),(1,0.875),(1,1),(0.875,1),(0.875,0.875),(1,0.875),(1,1),(0.875,1)]), 
appearance=
Appearance(
texture=
ImageTexture(url=[", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png, ","http://rawgit.com/create3000/Library/master/Textures/Effects/fire2.pnghttps://rawgit.com/create3000/Library/master/Textures/Effects/fire2.png"]))),
Viewpoint(position=((1.89619,2.08715,4.46876)), orientation=((-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854)), centerOfRotation=((-1.77636e-15,-7.10543e-15,3.55271e-15))),
ProtoInstance(name="Grid"),
Transform(USE="Box"),
DirectionalLight(DEF="_1", direction=((-0.531638,-0.672816,-0.51447)), shadows=True, shadowIntensity=0.605),
NavigationInfo(headlight=False),
Script(DEF="PhongShadingScript", 
#['', 'ecmascript:', '', 'function initialize ()', '{', '\tBrowser .setBrowserOption ("Shading", "PHONG");', '}', '', '']
)]))
.XML())
