# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="creator", content="John W Carlson"),
Pymeta(name="created", content="December 13 2015"),
Pymeta(name="title", content="extrusion.x3d"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"),
Pymeta(name="description", content="beginnings of a force directed graph in 3D"),
Pymeta(name="generator", content="Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
Group(children=[
Shape(
geometry=
Extrusion(DEF="extrusion", spine=[(-50,-50,0),(50,50,0)], creaseAngle=0.785, crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)]), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,1,0))))),
TimeSensor(DEF="TourTime", loop=True),
Script(DEF="MoveCylinder", field=[Pyfield(name="set_cycle", accessType="inputOnly", type="SFTime"),
Pyfield(name="spine", accessType="inputOutput", type="MFVec3f", value=[(-50,-50,0),(50,50,0)])
], sourceCode="""['', '', 'ecmascript:', '', '                function set_cycle(value) {', '                        Browser.print(value);', '                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);', '                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);', '\t\t        spine = new MFVec3f([endA, endB]);', '                }', '', '']""",),
ROUTE(fromNode="TourTime", fromField="cycleTime", toNode="MoveCylinder", toField="set_cycle"),
ROUTE(fromNode="MoveCylinder", fromField="spine_changed", toNode="extrusion", toField="set_spine")])])))
output = model.JSON()
json.loads(output)
