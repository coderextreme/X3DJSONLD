#x3d.py package loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Full", version="4.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="SplitChannels.x3d"),
NavigationInfo(type="NONE"),
Background(skyColor=[(0.2,0.2,0.21)]),
Viewpoint(orientation=((1,0,0,-0.5)), position=((0.0,500.0,600.0)), retainUserOffsets=True),
Transform(DEF="PowerR", translation=((100,400,400)), children=[
Transform(rotation=((1,0,0,-0.5)), translation=((0,40,0)), children=[
Shape(
appearance=
Appearance(DEF="audio_emit", 
material=
Material(diffuseColor=((0,1,0)), emissiveColor=((0.8,0.8,0.8)), specularColor=((0.01,0.01,0.01)))), 
geometry=
Box(size=((10,80,0.01))))]),
Transform(rotation=((1,0,0,-0.5)), translation=((-2.7,37,0)), children=[
Shape(
appearance=
Appearance(DEF="audio_emit2", 
material=
Material(diffuseColor=((0,1,0)), emissiveColor=((0.8,0.8,0.8)), specularColor=((0.01,0.01,0.01))), 
texture=
ImageTexture(url=["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"])), 
geometry=
Box(size=((25,83,0.01))))]),
Transform(DEF="volumeRight", rotation=((1,0,0,-0.5)), scale=((10,10,10)), translation=((0,-10,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(ambientIntensity=0.0933, diffuseColor=((0.345,0.345,0.882)), shininess=0.51, specularColor=((0.46,0.46,0.46)))), 
geometry=
Text(string=["Right Channel Volume"], 
fontStyle=
FontStyle(family=["Times"], style_="BOLD")))])]),
Transform(DEF="PowerL", translation=((-100,400,400)), children=[
Transform(rotation=((1,0,0,-0.5)), translation=((0,40,0)), children=[
Shape(
appearance=
Appearance(DEF="audio_emit3", 
material=
Material(diffuseColor=((0,1,0)), emissiveColor=((0.8,0.8,0.8)), specularColor=((0.01,0.01,0.01)))), 
geometry=
Box(size=((10,80,0.01))))]),
Transform(rotation=((1,0,0,-0.5)), translation=((13.2,37,0)), children=[
Shape(
appearance=
Appearance(DEF="audio_emit4", 
material=
Material(diffuseColor=((0,1,0)), emissiveColor=((0.8,0.8,0.8)), specularColor=((0.01,0.01,0.01))), 
texture=
ImageTexture(url=["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"])), 
geometry=
Box(size=((25,83,0.01))))]),
Transform(DEF="volumeLeft", rotation=((1,0,0,-0.5)), scale=((10,10,10)), translation=((0,-10,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(ambientIntensity=0.0933, diffuseColor=((0.345,0.345,0.882)), shininess=0.51, specularColor=((0.46,0.46,0.46)))), 
geometry=
Text(string=["Left Channel Volume"], 
fontStyle=
FontStyle(family=["Times"], style_="BOLD")))])]),
Transform(children=[
Shape(
appearance=
Appearance(DEF="floor", 
material=
Material(diffuseColor=((0.1,0.1,0.1)), shininess=0.8, specularColor=((0.5,0.6,0.7)))), 
geometry=
Box(size=((1500,10,500))))]),
ListenerPointSource(trackCurrentView=True),
StreamAudioDestination(children=[
Gain(children=[
ChannelMerger(children=[
ChannelSelector(children=[
Gain(USE="ChannelSplitter")]),
ChannelSelector(channelSelection=1, children=[
Gain(USE="ChannelSplitter")])])])]),
ChannelSplitter(DEF="ChannelSplitter", channelCountMode="explicit", children=[
AudioClip(description="Violin", url=["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])]),
Transform(DEF="Audio3", rotation=((1,0,0,-0.5)), translation=((0,100,0)), children=[
Shape(
appearance=
Appearance(DEF="audio_emit5", 
material=
Material(diffuseColor=((0.3,1,0.3)), emissiveColor=((0.8,0.8,0.8)), specularColor=((0.01,0.01,0.01))), 
texture=
ImageTexture(url=["images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"])), 
geometry=
Box(size=((100,100,0.001))))])]))
.XML())
