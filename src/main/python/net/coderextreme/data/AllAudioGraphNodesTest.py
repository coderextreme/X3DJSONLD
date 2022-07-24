'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Full", version="4.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="AllAudioGraphNodes.x3d"),
Shape(
geometry=
Box(), 
appearance=
Appearance(acousticProperties=(
AcousticProperties(description="Testing of X3D4 nodes demonstrating W3C Audio API in progress", diffuse=0.25, refraction=0.5, specular=1)), 
material=
Material())),
Sound(location=((0,1.6,0)), 
source=
AudioClip(description="testing", url=["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])),
Sound(location=((0,1.6,0)), 
source=
MovieTexture(description="testing", url=["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"])),
SpatialSound(children=[
Analyser(children=[
StreamAudioDestination(children=[
BiquadFilter(children=[
ChannelMerger(children=[
ChannelSelector(children=[
ChannelSplitter(children=[
Convolver(children=[
Delay(children=[
DynamicsCompressor(children=[
Gain(children=[
StreamAudioDestination(children=[
WaveShaper(children=[
#The following X3DSoundSourceNode nodes have no audio-graph children

BufferAudioSource(),
ListenerPointSource(),
MicrophoneSource(),
OscillatorSource(frequency=440.0),
StreamAudioSource(),])])])])])])])])])])])])])]))
.XML())
