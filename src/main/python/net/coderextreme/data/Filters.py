'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Full", version="4.0", 
head=head(), 
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
