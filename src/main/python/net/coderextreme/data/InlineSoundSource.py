'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Full", version="4.0", 
head=head(), 
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
Inline(DEF="inline", url=["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"])])]))
.XML())
