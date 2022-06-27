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
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(6.95441767781059),float(-10.9455192646649),float(38.1205570962763)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(0.267526168119517),float(0.886841256272589),float(-0.376752353070482),float(0.231331896046484)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(-0.49056801199913),float(-8.33930015563965),float(1.86343002319336)])]),
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="previous", DEF="previous", reference="http://titania.create3000.de"),
MetadataSet(name="children", DEF="children", reference="http://titania.create3000.de", value=[
Transform(DEF="TransparencyText", translation=((1.675,-0.95,-3.49096e-06)), scale=((0.0672307,0.0672307,0.0672307)), children=[
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
Text(DEF="_1", string=["numParticles 2337"], solid=True, 
fontStyle=
FontStyle(DEF="_2", family=["SANS"], justify=["END"])))])])]),
MetadataSet(name="LayerSet", DEF="LayerSet", reference="http://titania.create3000.de", value=[
MetadataInteger(name="activeLayer", DEF="activeLayer", reference="http://titania.create3000.de", value=[int(1)])])]))),
LayerSet(activeLayer=1, order=(int(0),int(1),int(2),int(3)), layers=(
Layer(children=[
Viewpoint(description="Home", position=((10.1059,-0.348535,36.514)), orientation=((-0.589527441120123,0.804383826489013,0.0736481897214987,0.36678659778641)), centerOfRotation=((-0.490568,-8.3393,1.86343))),
ParticleSystem(DEF="Fountain", geometryType="SPRITE", maxParticles=2337, particleLifetime=2, lifetimeVariation=0.1, particleSize=((1,1)), colorKey=(float(0),float(0.1),float(0.4),float(1)), bboxSize=((65.18,52.41,52.41)), bboxCenter=((0,-16.74,0)), 
emitter=(
PointEmitter(direction=((0,0,0)), speed=10, variation=0.01, mass=0.01, surfaceArea=0.1)), physics=(
ForcePhysicsModel(force=((0,-0.098,0))),
WindPhysicsModel(speed=0.8, gustiness=0.8, turbulence=2),
WindPhysicsModel(direction=((0,0,-1)), speed=0.6, gustiness=1)), 
color=
ColorRGBA(color=[(0,0.38,1,0),(0.06,0.58,1,0.1),(0,0.37,1,0.2),(0,0.05,1,0.2)]), 
appearance=
Appearance(
lineProperties=(
LineProperties(linewidthScaleFactor=4)))),
ProtoInstance(name="Grid")]),
LayoutLayer=(),
Layer(children=[
OrthoViewpoint=(),
Transform(USE="TransparencyText"),
Transform(DEF="TransparancySlider", translation=((0.025,-0.923,-3.49096e-06)), center=((0,-0.027,0)), children=[
Transform(DEF="IndexedLineSet", children=[
Shape(
appearance=
Appearance(
lineProperties=(
LineProperties(linewidthScaleFactor=2)), 
material=
Material(DEF="Artdeco31", emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(colorPerVertex=False, coordIndex=[int(0),int(1),int(-1)], 
coord=
Coordinate(point=[(0,0,0),(1,0,0)])))]),
Transform(children=[
Transform(DEF="Rectangle2D", translation=((0.0584318,0,0)), scale=((0.027,0.0267372,0.0267372)), children=[
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
Disk2D=())]),
PlaneSensor(DEF="_3", offset=((0.0584318,0,0)), maxPosition=((1,0)))]),
Group(children=[
Group(DEF="Animation", 
metadata=(
MetadataSet(name="Animation", DEF="Animation_1", reference="http://titania.create3000.de", value=[
MetadataInteger(name="duration", DEF="duration", reference="http://titania.create3000.de", value=[int(68)]),
MetadataInteger(name="framesPerSecond", DEF="framesPerSecond", reference="http://titania.create3000.de", value=[int(10)])])), children=[
TimeSensor(DEF="_4", cycleInterval=6.8, loop=True, startTime=1451028308.5169, resumeTime=1451028223.75739, pauseTime=1451028247.50596, stopTime=1451028309.80616),
PositionInterpolator(DEF="pointSizeScriptSet_translationInterpolator", key=[float(0),float(0.0147059),float(0.0294118),float(0.0441176),float(0.0588235),float(0.0735294),float(0.0882353),float(0.102941),float(0.117647),float(0.132353),float(0.147059),float(0.161765),float(0.176471),float(0.191176),float(0.205882),float(0.220588),float(0.235294),float(0.25),float(0.264706),float(0.279412),float(0.294118),float(0.308824),float(0.323529),float(0.338235),float(0.352941),float(0.367647),float(0.382353),float(0.397059),float(0.411765),float(0.426471),float(0.441176),float(0.455882),float(0.470588),float(0.485294),float(0.5),float(0.514706),float(0.529412),float(0.544118),float(0.558824),float(0.573529),float(0.588235),float(0.602941),float(0.617647),float(0.632353),float(0.647059),float(0.661765),float(0.676471),float(0.691176),float(0.705882),float(0.720588),float(0.735294),float(0.75),float(0.764706),float(0.779412),float(0.794118),float(0.808824),float(0.823529),float(0.838235),float(0.852941),float(0.867647),float(0.882353),float(0.897059),float(0.911765),float(0.926471),float(0.941176),float(0.955882),float(0.970588),float(0.985294),float(1)], keyValue=[(0.200605,0,0),(0.202642,0,0),(0.208588,0,0),(0.2182,0,0),(0.231232,0,0),(0.247441,0,0),(0.266581,0,0),(0.288408,0,0),(0.312679,0,0),(0.339147,0,0),(0.367569,0,0),(0.3977,0,0),(0.429295,0,0),(0.462111,0,0),(0.495902,0,0),(0.530424,0,0),(0.565432,0,0),(0.600683,0,0),(0.63593,0,0),(0.670931,0,0),(0.70544,0,0),(0.739212,0,0),(0.772004,0,0),(0.803571,0,0),(0.833668,0,0),(0.86205,0,0),(0.888474,0,0),(0.912694,0,0),(0.934466,0,0),(0.953546,0,0),(0.969689,0,0),(0.98265,0,0),(0.992186,0,0),(0.99805,0,0),(1,0,0),(0.997866,0,0),(0.991808,0,0),(0.982071,0,0),(0.968899,0,0),(0.95254,0,0),(0.933237,0,0),(0.911238,0,0),(0.886786,0,0),(0.860128,0,0),(0.831508,0,0),(0.801174,0,0),(0.769369,0,0),(0.736339,0,0),(0.70233,0,0),(0.667588,0,0),(0.632357,0,0),(0.596883,0,0),(0.561412,0,0),(0.526189,0,0),(0.49146,0,0),(0.457469,0,0),(0.424463,0,0),(0.392687,0,0),(0.362387,0,0),(0.333807,0,0),(0.307193,0,0),(0.282792,0,0),(0.260847,0,0),(0.241605,0,0),(0.225311,0,0),(0.212211,0,0),(0.20255,0,0),(0.196573,0,0),(0.194526,0,0)], 
metadata=(
MetadataSet(name="Interpolator", DEF="Interpolator", reference="http://titania.create3000.de", value=[
MetadataInteger(name="key", DEF="key", reference="http://titania.create3000.de", value=[int(0),int(34),int(68)]),
MetadataDouble(name="keyValue", DEF="keyValue", reference="http://titania.create3000.de", value=[float(0.20060533285141),float(0),float(0),float(1),float(0),float(0),float(0.194526299834251),float(0),float(0)]),
MetadataString(name="keyType", DEF="keyType", reference="http://titania.create3000.de", value=[", ","SPLINE, ","SPLINESPLINE"])])))]),
Script(DEF="NumParticlesyScript", field=[field(name="set_translation", accessType="inputOnly", type="SFVec3f"),
field(name="description", accessType="inputOutput", type="SFString", value="numParticles"),
field(name="minValue", accessType="inputOutput", type="SFInt32"),
field(name="maxValue", accessType="inputOutput", type="SFInt32", value=40000),
field(name="value_changed", accessType="outputOnly", type="SFInt32"),
field(name="string_changed", accessType="outputOnly", type="MFString"),
field(name="currentValue", accessType="initializeOnly", type="SFInt32", value=2337)
], 
#['', 'ecmascript:', '', 'function initialized ()', '{', '\tset_value (value);', '}', '', 'function set_translation (value)', '{', '\tset_value (minValue + (value .x * (maxValue - minValue)));', '}', '', 'function set_value (value)', '{', '\tvar rounded = value .toFixed (0);', '', '\tif (rounded == currentValue)', '\t\treturn;', '', '\tcurrentValue       = rounded;', '\tstring_changed [0] = description + " " + rounded;', '\tvalue_changed      = rounded;', '}', '', '']
)]),
Switch(whichChoice=-1, children=[
Transform(DEF="Rectangle2D_1", translation=((-0.075,0,0)), scale=((0.025,0.0247567,0.0247567)), children=[
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
Rectangle2D()),
TouchSensor(DEF="_5", description="Toggle Animation"),
Script(DEF="ToggleTransparencyAnim", field=[field(name="set_touchTime", accessType="inputOnly", type="SFTime"),
field(name="timer", accessType="initializeOnly", type="SFNode", children=[
TimeSensor(USE="_4")])
], 
#['', 'ecmascript:', '', 'function set_touchTime (value, time)', '{', '\tif (timer .isActive)', '\t{', '\t\tif (timer .isPaused)', '\t\t\ttimer .resumeTime = time;', '\t\telse', '\t\t\ttimer .pauseTime = time;', '\t}', '\telse', '\t\ttimer .startTime = time;', '} ', '']
)])])])]))),
ROUTE(fromNode="_5", fromField="touchTime", toNode="ToggleTransparencyAnim", toField="set_touchTime"),
ROUTE(fromNode="_3", fromField="translation_changed", toNode="Rectangle2D", toField="set_translation"),
ROUTE(fromNode="NumParticlesyScript", fromField="string_changed", toNode="_1", toField="set_string"),
ROUTE(fromNode="_3", fromField="translation_changed", toNode="NumParticlesyScript", toField="set_translation"),
ROUTE(fromNode="pointSizeScriptSet_translationInterpolator", fromField="value_changed", toNode="Rectangle2D", toField="set_translation"),
ROUTE(fromNode="pointSizeScriptSet_translationInterpolator", fromField="value_changed", toNode="NumParticlesyScript", toField="set_translation"),
ROUTE(fromNode="pointSizeScriptSet_translationInterpolator", fromField="value_changed", toNode="_3", toField="set_offset"),
ROUTE(fromNode="_4", fromField="fraction_changed", toNode="pointSizeScriptSet_translationInterpolator", toField="set_fraction"),
ROUTE(fromNode="NumParticlesyScript", fromField="value_changed", toNode="Fountain", toField="set_maxParticles")]))
.XML())
