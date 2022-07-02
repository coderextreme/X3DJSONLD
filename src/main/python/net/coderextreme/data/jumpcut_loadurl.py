'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print((
X3D(profile="Immersive", version="3.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="jumpcut_loadurl.x3d"),
Background(groundAngle=[float(1.57)], groundColor=[(0,0.5,0),(0,0.5,0)], skyColor=[(0,0,1)]),
NavigationInfo(type="\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""),
Viewpoint(DEF="Front_View", description="Front View"),
Viewpoint(DEF="Top_View", description="Top View", orientation=((1,0,0,-1.57)), position=((0,10,0))),
TouchSensor(DEF="STARTER", description="touch to activate"),
Transform(DEF="ROOT", children=[
Shape(
appearance=
Appearance(
material=
Material()), 
geometry=
Box())]),
Script(DEF="MYSCRIPT", url=["jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"], field=[field(name="myParameter", accessType="initializeOnly", type="MFString", value=["Top_View"]),
field(name="myUrl", accessType="initializeOnly", type="MFString", value=["jumpcut_loadurl.x3d#Top_View","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View","jumpcut_loadurl.wrl#Top_View","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View"]),
field(name="trigger_event", accessType="inputOnly", type="SFBool")
]),
ROUTE(fromField="isActive", fromNode="STARTER", toField="trigger_event", toNode="MYSCRIPT")]))
.XML()))
