# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Full", version="4.0", 
head=head(children=[meta(name="title", content="Filters.x3d"),
meta(name="description", content="This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."),
meta(name="info", content="This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."),
meta(name="creator", content="Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"),
meta(name="created", content="28 October 2020"),
meta(name="modified", content="5 December 2021"),
meta(name="reference", content="CHANGELOG.txt"),
meta(name="TODO", content="credit for audio files"),
meta(name="reference", content="https://www.medialab.hmu.gr/minipages/x3domAudio"),
meta(name="identifier", content="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"),
meta(name="generator", content="X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="09 June 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="Filters.x3d"),
NavigationInfo(),
Background(skyColor=[(0.2,0.2,0.2)]),
Viewpoint(description="View entire audio model", orientation=((1,0,0,-0.5)), position=((0.0,500.0,600.0)), retainUserOffsets=True),
Transform(DEF="TransformAudio1", translation=((-200,50,0)), children=[
Shape(
appearance=
Appearance(DEF="audio_emit", 
material=
Material(diffuseColor=((0.1,0.1,0.1)), emissiveColor=((0.8,0.8,0.8)), specularColor=((0.01,0.01,0.01)))), 
geometry=
Sphere(radius=30))]),
Transform(DEF="TransformAudio2", translation=((0,50,0)), children=[
Shape(
appearance=
Appearance(DEF="audio_emit2", 
material=
Material(diffuseColor=((0.1,0.1,0.1)), emissiveColor=((0.8,0.8,0.8)), specularColor=((0.01,0.01,0.01)))), 
geometry=
Sphere(radius=30))]),
Transform(DEF="TransformAudio3", translation=((200,50,0)), children=[
Shape(
appearance=
Appearance(DEF="audio_emit3", 
material=
Material(diffuseColor=((0.1,0.1,0.1)), emissiveColor=((0.8,0.8,0.8)), specularColor=((0.01,0.01,0.01)))), 
geometry=
Sphere(radius=30))]),
Transform(DEF="AnimData", translation=((0,50,0))),
Transform(DEF="AnimDataBoxH", translation=((0,100,0))),
Transform(DEF="AnimDataBoxM", translation=((15,100,0))),
Transform(DEF="AnimDataBoxL", translation=((30,100,0))),
Transform(DEF="AnimDataBoxMM", translation=((-15,100,0))),
Transform(DEF="AnimDataBoxLM", translation=((-30,100,0))),
Transform(children=[
Shape(
appearance=
Appearance(DEF="floor", 
material=
Material(diffuseColor=((0.1,0.1,0.1)), shininess=0.8, specularColor=((0.5,0.6,0.7)))), 
geometry=
Cylinder(radius=500))]),
ListenerPointSource(trackCurrentView=True),
StreamAudioDestination(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
DynamicsCompressor(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
Gain(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
SpatialSound(DEF="Audio1", distanceModel="INVERSE", children=[
Gain(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
Analyser(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
BiquadFilter(detune=50.0, frequency=600, qualityFactor=30.0, type="allpass", channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
AudioClip(description="Techno beat", loop=True, url=["sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"])])])])]),
SpatialSound(DEF="Audio2", distanceModel="INVERSE", children=[
Gain(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
Analyser(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
BiquadFilter(detune=15.0, frequency=600, qualityFactor=15.0, type="allpass", channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
AudioClip(description="Simple beat", loop=True, url=["sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"])])])])]),
SpatialSound(DEF="Audio3", distanceModel="INVERSE", children=[
Gain(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
Analyser(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
BiquadFilter(frequency=1000, qualityFactor=0, type="allpass", channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
AudioClip(description="Wobble loop", loop=True, url=["sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"])])])])])])])])]))
.XML())
