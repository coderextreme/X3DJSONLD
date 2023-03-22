# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="ObliqueStrategies.x3d"),
NavigationInfo(type="\"NONE\""),
Background(skyColor=[(0.419608,0.427451,1)]),
Transform(scale=((0.4,0.4,0.4)), translation=((0,1,0)), children=[
TouchSensor(DEF="RandomTextClickedSensor", description="Select to see a new strategy"),
Shape(
geometry=
Text(string=["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"], 
fontStyle=
FontStyle(DEF="MessageFont", family=["SANS"], justify=["MIDDLE","MIDDLE"], style_="BOLD")), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1))))),
Transform(scale=((10,3,1)), children=[
Shape(DEF="HeadlineClickSurface", 
geometry=
IndexedFaceSet(coordIndex=[0,1,2,3,-1], solid=False, 
coord=
Coordinate(point=[(1,1,0),(1,-1,0),(-1,-1,0),(-1,1,0)])), 
appearance=
Appearance(
material=
Material(ambientIntensity=0.245763, diffuseColor=((0.34773,0.090909,0.005289)), shininess=0.07, specularColor=((0.336735,0.051091,0.051091)), transparency=0.8)))])]),
Script(DEF="TextScript", url=["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"], field=[field(name="index", accessType="initializeOnly", appinfo="index for active strategy card, -1 means no selection", type="SFInt32", value=0),
field(name="string_changed", accessType="outputOnly", appinfo="latest strategy card value", type="MFString"),
field(name="textToSpeechUrl", accessType="outputOnly", appinfo="\"url to invoke Google Translate\"", type="MFString"),
field(name="newCardTime", accessType="outputOnly", appinfo="activate Sound node", type="SFTime"),
field(name="selectPreviousCard", accessType="inputOnly", type="SFBool"),
field(name="selectNextCard", accessType="inputOnly", type="SFBool"),
field(name="selectRandomCard", accessType="inputOnly", type="SFBool"),
field(name="traceEnabled", accessType="initializeOnly", appinfo="controls console tracing", type="SFBool", value=True)
]),
Transform(DEF="CardTransform", scale=((0.4,0.4,0.4)), translation=((0,-1.5,0)), children=[
Shape(
geometry=
Text(DEF="CardText", 
fontStyle=
FontStyle(family=["SANS"], justify=["MIDDLE","MIDDLE"], style_="BOLD")), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1))))),
ROUTE(fromField="string_changed", fromNode="TextScript", toField="string", toNode="CardText"),
Sound(DEF="CardSoundSpatialization", maxBack=100, maxFront=100, minBack=20, minFront=20, 
source=
AudioClip(DEF="TextToSpeechAudioClip", description="sends strategy text google translate", url=["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"])),
ROUTE(fromField="textToSpeechUrl", fromNode="TextScript", toField="url", toNode="TextToSpeechAudioClip"),
ROUTE(fromField="newCardTime", fromNode="TextScript", toField="startTime", toNode="TextToSpeechAudioClip")]),
Transform(scale=((0.4,0.4,0.4)), translation=((-3.2,2.5,0)), children=[
TouchSensor(DEF="PreviousTextClickedSensor", description="Select to see previous strategy"),
ROUTE(fromField="isActive", fromNode="PreviousTextClickedSensor", toField="selectPreviousCard", toNode="TextScript"),
Shape(
geometry=
Text(string=["previous"], 
fontStyle=
FontStyle(USE="MessageFont")), 
appearance=
Appearance(DEF="InterfaceAppearance", 
material=
Material(diffuseColor=((1,0,0.6))))),
Transform(scale=((2,0.6,1)), children=[
Shape(DEF="TransparentClickSurface", 
geometry=
IndexedFaceSet(coordIndex=[0,1,2,3,-1], solid=False, 
coord=
Coordinate(point=[(1,1,0),(1,-1,0),(-1,-1,0),(-1,1,0)])), 
appearance=
Appearance(
material=
Material(transparency=1)))])]),
Transform(scale=((0.4,0.4,0.4)), translation=((3.5,2.5,0)), children=[
TouchSensor(DEF="NextTextClickedSensor", description="Select to see next strategy"),
ROUTE(fromField="isActive", fromNode="NextTextClickedSensor", toField="selectNextCard", toNode="TextScript"),
Shape(
geometry=
Text(string=["next"], 
fontStyle=
FontStyle(USE="MessageFont")), 
appearance=
Appearance(USE="InterfaceAppearance")),
Transform(scale=((1.2,0.6,1)), children=[
Shape(USE="TransparentClickSurface")])]),
Transform(scale=((0.4,0.4,0.4)), translation=((-3.3,-0.5,0)), children=[
TouchSensor(USE="RandomTextClickedSensor"),
ROUTE(fromField="isActive", fromNode="RandomTextClickedSensor", toField="selectRandomCard", toNode="TextScript"),
Shape(
geometry=
Text(string=["random"], 
fontStyle=
FontStyle(USE="MessageFont")), 
appearance=
Appearance(USE="InterfaceAppearance")),
Transform(scale=((1.8,0.6,1)), children=[
Shape(USE="TransparentClickSurface")])]),
Transform(scale=((0.4,0.4,0.4)), translation=((3.3,-0.5,0)), children=[
Anchor(DEF="TextToSpeechAnchor", description="text to speech in browser", parameter=("target=_blank"), url=["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"], children=[
ROUTE(fromField="textToSpeechUrl", fromNode="TextScript", toField="url", toNode="TextToSpeechAnchor"),
Shape(
geometry=
Text(string=["speech"], 
fontStyle=
FontStyle(USE="MessageFont")), 
appearance=
Appearance(USE="InterfaceAppearance")),
Transform(scale=((1.8,0.6,1)), children=[
Shape(USE="TransparentClickSurface")])])])]))
.XML())
