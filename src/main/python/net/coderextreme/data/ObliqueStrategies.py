# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="ObliqueStrategies.x3d"),
meta(name="description", content="Text scripting and animation example using Oblique Strategies card set by Brian Eno."),
meta(name="creator", content="Don Brutzman, John Kelly, Ben Cheng"),
meta(name="created", content="3 November 2013"),
meta(name="modified", content="10 November 2019"),
meta(name="reference", content="oblique.html"),
meta(name="reference", content="ObliqueStrategies.txt"),
meta(name="reference", content="ObliqueStrategiesScript.js"),
meta(name="reference", content="http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"),
meta(name="reference", content="http://www.eno-web.co.uk/obliques.html"),
meta(name="reference", content="http://gothpunk.com/haiku-intro.html"),
meta(name="reference", content="http://www.rtqe.net/ObliqueStrategies/OSintro.html"),
meta(name="reference", content="https://en.wikipedia.org/wiki/Oblique_Strategies"),
meta(name="subject", content="Brian Eno, Oblique Strategies"),
meta(name="Image", content="images/ObliqueStrategiesEntryScreen.png"),
meta(name="Sound", content="http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"),
meta(name="Sound", content="translate_tts_HelloX3D.mp3"),
meta(name="Sound", content="translate_tts_HelloX3D.wav"),
meta(name="TODO", content="multiliingual translation parameter"),
meta(name="reference", content="http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"),
meta(name="reference", content="http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"),
meta(name="warning", content="under development, scene Sound/AudioClip triggering (or retrieved file format) not working"),
meta(name="warning", content="TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];"),
meta(name="reference", content="https://gist.github.com/alotaiba/1728771"),
meta(name="reference", content="https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api"),
meta(name="Sound", content="https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4"),
meta(name="Sound", content="translate_tts_HelloX3D4.mp3"),
meta(name="reference", content="https://cloud.google.com/translate/docs/basic/translating-text"),
meta(name="identifier", content="https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="21 June 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
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
