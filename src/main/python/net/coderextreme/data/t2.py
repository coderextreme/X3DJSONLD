# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Interchange", version="3.0", 
head=head(children=[component(name="Networking", level=2),
meta(name="generator", content="view3dscene, https://castle-engine.io/view3dscene.php"),
meta(name="source", content="t1.wrl"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\" \"FLY\" \"WALK\"", speed=3, avatarSize=[float(200),float(200),float(120)]),
WorldInfo(title="Arts Mapper"),
Viewpoint(description="looking North", position=((0,60,110)), orientation=((1,0,0,-0.699999988079071)), fieldOfView=0.785398125648499),
Viewpoint(description="looking East", position=((-140,30,0)), orientation=((0,0.400000005960464,0,-1.39999997615814)), fieldOfView=0.785398125648499),
Viewpoint(description="Overhead", position=((0,150,0)), orientation=((1,0,0,-1.57000005245209)), fieldOfView=0.785398125648499),
ProtoDeclare(name="org", 
ProtoInterface=ProtoInterface(field=[field(name="posi", accessType="initializeOnly", type="SFVec3f", value=(0,0,0)),
field(name="col", accessType="initializeOnly", type="SFColor", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(transparency=0.400000005960464, 
IS=IS(connect=[connect(nodeField="emissiveColor", protoField="col")
]))), 
geometry=
Sphere(radius=1.10000002384186))], 
IS=IS(connect=[connect(nodeField="translation", protoField="posi")
]))])),
ProtoDeclare(name="r", 
ProtoInterface=ProtoInterface(field=[field(name="pos", accessType="initializeOnly", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
ProtoInstance(name="org", fieldValue=[fieldValue(name="col", value=[0,0.300000011920929,1]),
fieldValue(name="posi")
], 
IS=IS(connect=[connect(nodeField="posi", protoField="pos")
]))])),
Anchor(url=["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="High Peak Community Arts", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[400,0.100000001490116,-385])
])])]))
.XML())
