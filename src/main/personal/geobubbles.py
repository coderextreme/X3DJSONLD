# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=head(
component(name="Geospatial", level=1),
meta(name="title", content="geobubbles.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d"),
meta(name="description", content="geo bubbles"),
meta(name="translated", content="26 August 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
Comment(value=''' Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/ '''),
Comment(value=''' PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/ '''),
GeoViewpoint(DEF="Tour", position=((0,0,4)), orientation=((1,0,0,0)), description="Tour Views"),
Background(backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"], bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"], frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"], leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"], rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"], topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]),
Transform(children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,0.7,0.7)), specularColor=((0.5,0.5,0.5)))))]),
TimeSensor(DEF="TourTime", cycleInterval=5, loop=True),
GeoPositionInterpolator(DEF="TourPosition", key=[float(0),float(1)], keyValue=[(0.0015708,0,4),(0,0.0015708,4)]),
Script(DEF="RandomTourTime", field=[field(name="set_cycle", accessType="inputOnly", type="SFTime"),
field(name="val", accessType="inputOutput", type="SFFloat", value=0),
field(name="positions", accessType="inputOutput", type="MFVec3d", value=[(0.0015708,0,4),(0,0.0015708,4)]),
field(name="position", accessType="inputOutput", type="MFVec3d", value=[(0.0015708,0,4),(0,0.0015708,4)])
], sourceCode="""['ecmascript:', '', '               function set_cycle(value) {', '                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo', '                        var ov = val;', "\t\t\t// Browser.print('old '+ov);", '                        do {', '                                val = Math.floor(Math.random()*2);', '                                var vc = val;', '                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);', '                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);', '\t\t\t// Browser.println(positions[ov]);', '\t\t\t// Browser.println(positions[vc]);', '                        position = new MFVec3d();', '                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);', '                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);', '               }']""",),
ROUTE(fromNode="TourTime", fromField="cycleTime", toNode="RandomTourTime", toField="set_cycle"),
ROUTE(fromNode="RandomTourTime", fromField="position", toNode="TourPosition", toField="keyValue"),
ROUTE(fromNode="TourTime", fromField="fraction_changed", toNode="TourPosition", toField="set_fraction"),
ROUTE(fromNode="TourPosition", fromField="geovalue_changed", toNode="Tour", toField="set_position"),])))
output = model.JSON()
json.loads(output)