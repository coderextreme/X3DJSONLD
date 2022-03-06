#x3d.py package 4.0.60 loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Full", version="4.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="SpatialAudioCameraAnimation.x3d"),
NavigationInfo(),
Background(backUrl=["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"], bottomUrl=["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"], frontUrl=["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"], leftUrl=["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"], rightUrl=["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"], topUrl=["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]),
Viewpoint(DEF="Camera001", description="Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view", orientation=((1,0,0,-0.523599)), position=((0,2000,3500))),
TimeSensor(DEF="TIMER", cycleInterval=33.333332, loop=True),
PositionInterpolator(DEF="Camera001-POS-INTERP", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(0,2000,3500),(0,2000,0),(0,2000,-3500),(0,2000,0),(0,2000,3500)]),
OrientationInterpolator(DEF="Camera001-ROT-INTERP", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(1),float(0),float(0),float(-0.523599)),(float(0.99999),float(0.003554),float(0.002727),float(-1.309007)),(float(0),float(-0.965926),float(-0.258819),float(-3.141593)),(float(0.002282),float(-0.793351),float(-0.60876),float(-3.135645)),(float(1),float(-1e-06),float(0),float(-0.523599))]),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="Camera001-POS-INTERP"),
ROUTE(fromField="value_changed", fromNode="Camera001-POS-INTERP", toField="set_position", toNode="Camera001"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="Camera001-ROT-INTERP"),
ROUTE(fromField="value_changed", fromNode="Camera001-ROT-INTERP", toField="set_orientation", toNode="Camera001"),
Transform(DEF="Floor", translation=((1.241,0.0,0.358)), children=[
Shape(
appearance=
Appearance(DEF="WireColor", 
material=
Material(diffuseColor=((0.122,0.114,0.125)))), 
geometry=
Box(size=((2000,1,2000))))]),
Transform(DEF="TransformAudio1", translation=((-933.123474,0,-926.253235)), children=[
Shape(
appearance=
Appearance(DEF="WireColor_1", 
material=
Material(diffuseColor=((0.690196,0.101961,0.101961)))), 
geometry=
Sphere(radius=100)),
Billboard(children=[
Transform(DEF="violin", rotation=((1,0,0,-0.5)), scale=((100,100,100)), translation=((0,100,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(ambientIntensity=0.0933, diffuseColor=((1,1,1)), shininess=0.51, specularColor=((0.46,0.46,0.46)))), 
geometry=
Text(string=["Violin"], 
fontStyle=
FontStyle(DEF="ModelFontStyle", family=["Times","SERIF"], style_="BOLD")))])])]),
Transform(DEF="TransformAudio2", translation=((933.475586,0,924.423218)), children=[
Shape(
appearance=
Appearance(DEF="WireColor_2", 
material=
Material(diffuseColor=((0.105882,0.694118,0.580392)))), 
geometry=
Sphere(radius=100)),
Billboard(children=[
Transform(DEF="saxophone", rotation=((1,0,0,-0.5)), scale=((100,100,100)), translation=((0,100,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(ambientIntensity=0.0933, diffuseColor=((1,1,1)), shininess=0.51, specularColor=((0.46,0.46,0.46)))), 
geometry=
Text(string=["Saxophone"], 
fontStyle=
FontStyle(USE="ModelFontStyle")))])])]),
ListenerPointSource(trackCurrentView=True),
StreamAudioDestination(children=[
SpatialSound(DEF="Audio1", children=[
Gain(children=[
AudioClip(description="Violin", loop=True, url=["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])])]),
SpatialSound(DEF="Audio2", children=[
Gain(children=[
AudioClip(description="Saxophone", loop=True, url=["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])])])])]))
.XML())
