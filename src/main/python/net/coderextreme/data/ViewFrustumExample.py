'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print((
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="ViewFrustumExample.x3d"),
Viewpoint(description="ViewFrustum from above, looking down", orientation=((1,0,0,-1.57)), position=((0,40,0))),
Viewpoint(description="ViewFrustum from point of view"),
Viewpoint(description="ViewFrustum behind point of view", position=((0,0,15))),
Viewpoint(description="ViewFrustum oblique side view", orientation=((0.8005,0.5926,0.0898,-0.3743)), position=((-5,5,20))),
NavigationInfo(type="\"EXAMINE\" \"FLY\" \"ANY\""),
ExternProtoDeclare(name="ViewFrustum", appinfo="Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes", url=["ViewFrustumPrototype.x3d#ViewFrustum"], field=[field(name="ViewpointNode", accessType="initializeOnly", appinfo="required: insert Viewpoint DEF or USE node for view of interest", type="SFNode"),
field(name="NavigationInfoNode", accessType="initializeOnly", appinfo="required: insert NavigationInfo DEF or USE node of interest", type="SFNode"),
field(name="visible", accessType="inputOutput", appinfo="whether or not frustum geometry is rendered", type="SFBool"),
field(name="lineColor", accessType="inputOutput", appinfo="RGB color of ViewFrustum outline, default value 0.9 0.9 0.9", type="SFColor"),
field(name="frustumColor", accessType="inputOutput", appinfo="RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8", type="SFColor"),
field(name="transparency", accessType="inputOutput", appinfo="transparency of ViewFrustum hull geometry, default value 0.5", type="SFFloat"),
field(name="aspectRatio", accessType="inputOutput", appinfo="assumed ratio height/width, default value 0.75", type="SFFloat"),
field(name="trace", accessType="initializeOnly", appinfo="debug support, default false", type="SFBool")
]),
#Example use

ProtoInstance(name="ViewFrustum", fieldValue=[fieldValue(name="ViewpointNode", children=[
#prefer empty description to prevent entry in player's ViewpointList

Viewpoint(description="ViewFrustum ViewpointNode"),]),
fieldValue(name="NavigationInfoNode", children=[
NavigationInfo(visibilityLimit=15)]),
fieldValue(name="visible", value=True),
fieldValue(name="lineColor", value=[0.9,0.9,0.9]),
fieldValue(name="frustumColor", value=[0.8,0.8,0.8]),
fieldValue(name="transparency", value=0.75),
fieldValue(name="trace", value=True)
]),
#Visualization assists

Inline(DEF="GridXZ", url=["GridXZ_20x20Fixed.x3d"]),
Transform(scale=((5,5,5)), children=[
Inline(DEF="CoordinateAxes", url=["CoordinateAxes.x3d"])]),]))
.XML()))
