# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Full", version="4.0", 
head=head(
children=[
meta(name="title", content="InlineSoundSource.x3d"),
meta(name="description", content="This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file."),
meta(name="info", content="This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."),
meta(name="creator", content="Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"),
meta(name="created", content="28 October 2020"),
meta(name="modified", content="4 August 2021"),
meta(name="reference", content="CHANGELOG.txt"),
meta(name="TODO", content="credit for audio files"),
meta(name="reference", content="https://medialab.hmu.gr/minipages/x3domAudio"),
meta(name="identifier", content="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d"),
meta(name="generator", content="X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="02 September 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="InlineSoundSource.x3d"),
NavigationInfo(DEF="NAV"),
Background(backUrl=["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"], bottomUrl=["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"], frontUrl=["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"], leftUrl=["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"], rightUrl=["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"], topUrl=["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]),
Viewpoint(DEF="Camera001", description="Camera001", farDistance=0, nearDistance=1.0, orientation=((1.0,0.0,-0.0,-0.523599)), position=((0.0,2000.0,3500.0))),
Transform(DEF="Floor", translation=((1.241,0.0,0.358)), children=[
Shape(
appearance=
Appearance(DEF="WireColor", 
material=
Material(diffuseColor=((0.122,0.114,0.125)))), 
geometry=
IndexedFaceSet(DEF="Box001-GEOMETRY", coordIndex=[0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1], solid=False, 
coord=
Coordinate(point=[(-1000.0,0.0,1000.0),(-1000.0,0.0,-1000.0),(1000.0,0.0,-1000.0),(1000.0,0.0,-1000.0),(1000.0,0.0,1000.0),(-1000.0,0.0,1000.0),(-1000.0,8.031588,1000.0),(1000.0,8.031588,1000.0),(1000.0,8.031588,-1000.0),(1000.0,8.031588,-1000.0),(-1000.0,8.031588,-1000.0),(-1000.0,8.031588,1000.0),(-1000.0,0.0,1000.0),(1000.0,0.0,1000.0),(1000.0,8.031588,1000.0),(1000.0,8.031588,1000.0),(-1000.0,8.031588,1000.0),(-1000.0,0.0,1000.0),(1000.0,0.0,1000.0),(1000.0,0.0,-1000.0),(1000.0,8.031588,-1000.0),(1000.0,8.031588,-1000.0),(1000.0,8.031588,1000.0),(1000.0,0.0,1000.0),(1000.0,0.0,-1000.0),(-1000.0,0.0,-1000.0),(-1000.0,8.031588,-1000.0),(-1000.0,8.031588,-1000.0),(1000.0,8.031588,-1000.0),(1000.0,0.0,-1000.0),(-1000.0,0.0,-1000.0),(-1000.0,0.0,1000.0),(-1000.0,8.031588,1000.0),(-1000.0,8.031588,1000.0),(-1000.0,8.031588,-1000.0),(-1000.0,0.0,-1000.0)]), 
normal=
Normal(vector=[(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0)])))]),
Transform(DEF="InlineScene", children=[
Inline(DEF="inline", url=["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"])])])))
output = model.JSON()
json.loads(output)
