'''
x3d.py package 4.0.63.7 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
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
IndexedFaceSet(DEF="Box001-GEOMETRY", coordIndex=[int(0),int(1),int(2),int(-1),int(3),int(4),int(5),int(-1),int(6),int(7),int(8),int(-1),int(9),int(10),int(11),int(-1),int(12),int(13),int(14),int(-1),int(15),int(16),int(17),int(-1),int(18),int(19),int(20),int(-1),int(21),int(22),int(23),int(-1),int(24),int(25),int(26),int(-1),int(27),int(28),int(29),int(-1),int(30),int(31),int(32),int(-1),int(33),int(34),int(35),int(-1)], solid=False, 
coord=
Coordinate(point=[(-1000.0,0.0,1000.0),(-1000.0,0.0,-1000.0),(1000.0,0.0,-1000.0),(1000.0,0.0,-1000.0),(1000.0,0.0,1000.0),(-1000.0,0.0,1000.0),(-1000.0,8.031588,1000.0),(1000.0,8.031588,1000.0),(1000.0,8.031588,-1000.0),(1000.0,8.031588,-1000.0),(-1000.0,8.031588,-1000.0),(-1000.0,8.031588,1000.0),(-1000.0,0.0,1000.0),(1000.0,0.0,1000.0),(1000.0,8.031588,1000.0),(1000.0,8.031588,1000.0),(-1000.0,8.031588,1000.0),(-1000.0,0.0,1000.0),(1000.0,0.0,1000.0),(1000.0,0.0,-1000.0),(1000.0,8.031588,-1000.0),(1000.0,8.031588,-1000.0),(1000.0,8.031588,1000.0),(1000.0,0.0,1000.0),(1000.0,0.0,-1000.0),(-1000.0,0.0,-1000.0),(-1000.0,8.031588,-1000.0),(-1000.0,8.031588,-1000.0),(1000.0,8.031588,-1000.0),(1000.0,0.0,-1000.0),(-1000.0,0.0,-1000.0),(-1000.0,0.0,1000.0),(-1000.0,8.031588,1000.0),(-1000.0,8.031588,1000.0),(-1000.0,8.031588,-1000.0),(-1000.0,0.0,-1000.0)]), 
normal=
Normal(vector=[(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,-1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,1.0,0.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(0.0,0.0,1.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(0.0,0.0,-1.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0),(-1.0,0.0,0.0)])))]),
Transform(DEF="InlineScene", children=[
Inline(DEF="inline", url=["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"])])]))
.XML())
