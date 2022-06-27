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
WorldInfo(),
Background(DEF="Gray", skyColor=[(0.2,0.2,0.2)]),
Viewpoint(description="Viewpoint", position=((5.84487,5.03472,4.6136)), orientation=((-0.345888826425389,0.916328938277108,0.201747854090235,1.13369964678518)), centerOfRotation=((-0.531098,1.64484,1.00739))),
ParticleSystem(geometryType="LINE", maxParticles=10000, particleLifetime=20, lifetimeVariation=0.1, particleSize=((0.1,0.1)), particleElasticity=0.5, colorKey=(float(0),float(0.1),float(0.4),float(1)), 
emitter=(
PolylineEmitter(direction=((0,0,1)), speed=0.2, mass=0.1, surfaceArea=0.01, 
coord=
Coordinate(point=[(-1,4,0),(1,4,0)]))), physics=(
ForcePhysicsModel(force=((0,-0.098,0))),
WindPhysicsModel(direction=((0,1,0)), speed=0.12, gustiness=8, turbulence=0.9),
BoundedPhysicsModel(
geometry=
IndexedFaceSet(DEF="_1", texCoordIndex=[int(10),int(8),int(9),int(11),int(-1),int(11),int(0),int(1),int(10),int(-1),int(12),int(4),int(5),int(13),int(-1),int(13),int(9),int(8),int(12),int(-1),int(14),int(6),int(7),int(15),int(-1),int(15),int(5),int(4),int(14),int(-1),int(16),int(2),int(3),int(17),int(-1),int(17),int(7),int(6),int(16),int(-1),int(18),int(19),int(20),int(21),int(-1),int(21),int(22),int(23),int(18),int(-1),int(24),int(25),int(26),int(27),int(-1),int(27),int(20),int(19),int(24),int(-1),int(28),int(29),int(30),int(31),int(-1),int(31),int(26),int(25),int(28),int(-1),int(32),int(33),int(34),int(35),int(-1),int(35),int(30),int(29),int(32),int(-1),int(36),int(37),int(38),int(39),int(-1),int(39),int(40),int(41),int(36),int(-1),int(42),int(43),int(44),int(45),int(-1),int(45),int(38),int(37),int(42),int(-1),int(46),int(47),int(48),int(49),int(-1),int(49),int(44),int(43),int(46),int(-1),int(50),int(51),int(52),int(53),int(-1),int(53),int(48),int(47),int(50),int(-1)], coordIndex=[int(10),int(8),int(9),int(11),int(-1),int(11),int(0),int(1),int(10),int(-1),int(12),int(4),int(5),int(13),int(-1),int(13),int(9),int(8),int(12),int(-1),int(14),int(6),int(7),int(15),int(-1),int(15),int(5),int(4),int(14),int(-1),int(16),int(2),int(3),int(17),int(-1),int(17),int(7),int(6),int(16),int(-1),int(18),int(19),int(20),int(21),int(-1),int(21),int(22),int(23),int(18),int(-1),int(24),int(25),int(26),int(27),int(-1),int(27),int(20),int(19),int(24),int(-1),int(28),int(29),int(30),int(31),int(-1),int(31),int(26),int(25),int(28),int(-1),int(32),int(33),int(34),int(35),int(-1),int(35),int(30),int(29),int(32),int(-1),int(36),int(37),int(38),int(39),int(-1),int(39),int(40),int(41),int(36),int(-1),int(42),int(43),int(44),int(45),int(-1),int(45),int(38),int(37),int(42),int(-1),int(46),int(47),int(48),int(49),int(-1),int(49),int(44),int(43),int(46),int(-1),int(50),int(51),int(52),int(53),int(-1),int(53),int(48),int(47),int(50),int(-1)], 
texCoord=
TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1),(1,0.5),(0,0.5),(1,0.75),(0,0.75),(1,0.25),(0,0.25),(1,0.125),(0,0.125),(1,0.375),(0,0.375),(1,0.625),(0,0.625),(1,0.875),(0,0.875),(1,0.125),(1,0.25),(0,0.25),(0,0.125),(0,0),(1,0),(1,0.375),(1,0.5),(0,0.5),(0,0.375),(1,0.625),(1,0.75),(0,0.75),(0,0.625),(1,0.875),(1,1),(0,1),(0,0.875),(1,0.125),(1,0.25),(0,0.25),(0,0.125),(0,0),(1,0),(1,0.375),(1,0.5),(0,0.5),(0,0.375),(1,0.625),(1,0.75),(0,0.75),(0,0.625),(1,0.875),(1,1),(0,1),(0,0.875)]), 
coord=
Coordinate(point=[(-1,-0.152656,2.87901),(0.999992,-0.152654,2.87901),(0.999994,1.35935,1.56987),(-1,1.35935,1.56986),(0.999993,0.603347,2.22444),(-1,0.603346,2.22443),(0.999994,0.98135,1.89715),(-1,0.98135,1.89715),(0.999993,0.225347,2.55172),(-1,0.225346,2.55172),(0.999992,0.197455,2.90145),(-1,0.197454,2.90144),(0.999992,0.575457,2.57415),(-1,0.575455,2.57415),(0.999993,0.953455,2.24687),(-1,0.953455,2.24687),(0.999993,1.33146,1.91959),(-1,1.33145,1.91958),(0.999994,1.7096,1.5963),(0.999995,1.7375,1.24658),(-1,1.73749,1.24658),(-1,1.70961,1.59631),(-1,1.35949,1.57386),(0.999994,1.35949,1.57387),(0.999994,2.0876,1.26902),(0.999995,2.1155,0.919301),(-1,2.1155,0.919296),(-1,2.0876,1.26901),(0.999995,2.46561,0.941743),(0.999996,2.49349,0.592018),(-1,2.49349,0.592014),(-1,2.4656,0.941731),(0.999995,2.84361,0.61445),(0.999996,2.8715,0.264734),(-1,2.87149,0.264728),(-1,2.84361,0.614446),(0.999996,3.22092,0.289732),(0.999997,3.24882,-0.059977),(-1,3.24881,-0.0599823),(-1,3.22093,0.289735),(-1,2.87081,0.267296),(0.999996,2.87081,0.267308),(0.999996,3.59892,-0.0375446),(0.999997,3.62682,-0.387262),(-1,3.62682,-0.387266),(-1,3.59892,-0.0375569),(0.999997,3.97693,-0.364829),(0.999998,4.00481,-0.714547),(-1,4.00481,-0.714546),(-1,3.97692,-0.364828),(0.999998,4.35492,-0.692108),(0.999998,4.3828,-1.04183),(-1,4.38281,-1.04184),(-1,4.35493,-0.692119)])))), 
color=
ColorRGBA(color=[(0,0.38,1,0),(0,0.58,1,0.1),(0,0.37,1,0.1),(0,0.6,1,0.05)]), 
appearance=
Appearance(
lineProperties=(
LineProperties(linewidthScaleFactor=8)))),
Transform(DEF="IndexedLineSet", children=[
Shape(
geometry=
IndexedLineSet(colorPerVertex=False, colorIndex=[int(0),int(1),int(2)], coordIndex=[int(0),int(1),int(-1),int(2),int(3),int(-1),int(4),int(5),int(-1)], 
color=
Color(color=[(1,0,0),(0,1,0),(0,0,1)]), 
coord=
Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
Transform(DEF="Box", children=[
Shape(
appearance=
Appearance(
material=
Material()), 
geometry=
IndexedFaceSet(USE="_1"))]),
ProtoInstance(name="Grid")]))
.XML())
