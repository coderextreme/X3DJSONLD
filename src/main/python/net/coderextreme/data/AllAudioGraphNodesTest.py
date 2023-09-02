# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Full", version="4.0", 
head=head(
children=[
meta(name="title", content="AllAudioGraphNodesTest.x3d"),
meta(name="description", content="List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working."),
meta(name="creator", content="Don Brutzman"),
meta(name="created", content="25 October 2020"),
meta(name="modified", content="26 November 2021"),
meta(name="warning", content="Developmental test, no actual 3D model expected"),
meta(name="identifier", content="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d"),
meta(name="generator", content="X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="02 September 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
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
SpatialSound(distanceModel="INVERSE", children=[
Analyser(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
StreamAudioDestination(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
BiquadFilter(channelCountMode="MAX", channelInterpretation="SPEAKERS", type="LOWPASS", children=[
ChannelMerger(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
ChannelSelector(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
ChannelSplitter(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
Convolver(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
Delay(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
DynamicsCompressor(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
Gain(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
StreamAudioDestination(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
WaveShaper(channelCountMode="MAX", channelInterpretation="SPEAKERS", children=[
Comment(value=''' The following X3DSoundSourceNode nodes have no audio-graph children '''),
BufferAudioSource(channelCountMode="MAX", channelInterpretation="SPEAKERS"),
ListenerPointSource(),
MicrophoneSource(),
OscillatorSource(frequency=440.0),
StreamAudioSource(channelCountMode="MAX", channelInterpretation="SPEAKERS"),])])])])])])])])])])])])])])))
output = model.JSON()
json.loads(output)
