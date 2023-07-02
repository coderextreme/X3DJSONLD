# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="x3dconnector"),
meta(name="creator", content="Lost, Doug Sanden I think"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"),
meta(name="description", content="a generic proto to connect two objects"),
meta(name="translated", content="02 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
Viewpoint(position=((0,0,5)), description="Only Viewpoint"),
Background(skyColor=[(0.4,0.4,0.4)]),
Transform(DEF="G1", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,0.2,0.2)))), 
geometry=
Sphere(radius=0.1)),
PlaneSensor(description="Grab to move", DEF="PS1"),
ROUTE(fromNode="PS1", fromField="translation_changed", toNode="G1", toField="set_translation")]),
Transform(DEF="G2", translation=((1,-1,0.01)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.2,0.7,0.2)))), 
geometry=
Sphere(radius=0.1)),
PlaneSensor(description="Grab to move", offset=((1,-1,0.01)), DEF="PS2"),
ROUTE(fromNode="PS2", fromField="translation_changed", toNode="G2", toField="set_translation")]),
Transform(DEF="transC1", children=[
Transform(DEF="rotscaleC1", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.2,0.7,0.7)), transparency=0.5)), 
geometry=
Cylinder(radius=0.05))])]),
ProtoDeclare(name="x3dconnector", 
ProtoInterface=ProtoInterface(field=[field(name="startnode", accessType="initializeOnly", type="SFNode"),
field(name="endnode", accessType="initializeOnly", type="SFNode"),
field(name="transnode", accessType="initializeOnly", type="SFNode"),
field(name="rotscalenode", accessType="initializeOnly", type="SFNode"),
field(name="set_startpoint", accessType="inputOnly", type="SFVec3f"),
field(name="set_endpoint", accessType="inputOnly", type="SFVec3f")
]), 
ProtoBody=ProtoBody(children=[
Script(DEF="S1", field=[field(name="startnode", accessType="initializeOnly", type="SFNode"),
field(name="endnode", accessType="initializeOnly", type="SFNode"),
field(name="transnode", accessType="initializeOnly", type="SFNode"),
field(name="rotscalenode", accessType="initializeOnly", type="SFNode"),
field(name="set_startpoint", accessType="inputOnly", type="SFVec3f"),
field(name="set_endpoint", accessType="inputOnly", type="SFVec3f")
], 
IS=IS(connect=[connect(nodeField="startnode", protoField="startnode"),
connect(nodeField="endnode", protoField="endnode"),
connect(nodeField="transnode", protoField="transnode"),
connect(nodeField="rotscalenode", protoField="rotscalenode"),
connect(nodeField="set_startpoint", protoField="set_startpoint"),
connect(nodeField="set_endpoint", protoField="set_endpoint")
]), sourceCode="""['', '            ecmascript:', '        function recompute(startpoint,endpoint){', "\t    if (typeof endpoint === 'undefined') {", '\t\treturn;', '\t    }', '            var dif = endpoint.subtract(startpoint);', '            var dist = dif.length()*0.5;', '            var dif2 = dif.multiply(0.5);', '            var norm = dif.normalize();', '            var transl = startpoint.add(dif2);', "\t    if (typeof Quaternion !== 'undefined') {", '\t\t    return {', '\t\t\t    scale : new SFVec3f(1.0,dist,1.0),', '\t\t\t    translation : transl,', '\t\t\t    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)', '\t\t    };', '\t    } else {', '\t\t    return {', '\t\t\t    scale : new SFVec3f(1.0,dist,1.0),', '\t\t\t    translation : transl,', '\t\t\t    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)', '\t\t    };', '\t    }', '\t}', '\tfunction recompute_and_route(startpoint, endpoint) {', '\t      var trafo = recompute(startpoint, endpoint);', '\t      if (trafo) {', '\t\t      transnode.translation = trafo.translation;', '\t\t      rotscalenode.rotation = trafo.rotation;', '\t\t      rotscalenode.scale = trafo.scale;', '\t      }', '\t}', '        function initialize(){', '            recompute_and_route(startnode.translation,endnode.translation);', '        }', '        function set_startpoint(val,t){', '            recompute_and_route(val,endnode.translation);', '        }', '        function set_endpoint(val,t){', '            recompute_and_route(startnode.translation,val);', '        }', '', '']""",)])),
ProtoInstance(name="x3dconnector", DEF="connector1", fieldValue=[fieldValue(name="startnode", children=[
Transform(USE="G1")]),
fieldValue(name="endnode", children=[
Transform(USE="G2")]),
fieldValue(name="transnode", children=[
Transform(USE="transC1")]),
fieldValue(name="rotscalenode", children=[
Transform(USE="rotscaleC1")]),
fieldValue(name="set_startpoint"),
fieldValue(name="set_endpoint")
]),
ROUTE(fromNode="G1", fromField="translation_changed", toNode="connector1", toField="set_startpoint"),
ROUTE(fromNode="G2", fromField="translation_changed", toNode="connector1", toField="set_endpoint")]))
.XML())
