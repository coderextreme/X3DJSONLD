'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Group(children=[
Shape(
geometry=
Extrusion(DEF="extrusion", spine=[(-50,-50,0),(50,50,0)], creaseAngle=0.785, crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)]), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,1,0))))),
TimeSensor(DEF="TourTime", loop=True),
Script(DEF="MoveCylinder", field=[field(name="set_cycle", accessType="inputOnly", type="SFTime"),
field(name="spine", accessType="inputOutput", type="MFVec3f", value=[(-50,-50,0),(50,50,0)])
], 
#['', '', 'ecmascript:', '', '                function set_cycle(value) {', '                        Browser.print(value);', '                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);', '                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);', '\t\t        spine = new MFVec3f([endA, endB]);', '                }', '', '']
),
ROUTE(fromNode="TourTime", fromField="cycleTime", toNode="MoveCylinder", toField="set_cycle"),
ROUTE(fromNode="MoveCylinder", fromField="spine_changed", toNode="extrusion", toField="set_spine")])]))
.XML())
