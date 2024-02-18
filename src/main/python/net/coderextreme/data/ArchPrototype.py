# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="title", content="ArchPrototype.x3d"),
Pymeta(name="description", content="Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."),
Pymeta(name="description", content="Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."),
Pymeta(name="creator", content="Michele Foti, Don Brutzman"),
Pymeta(name="created", content="15 December 2014"),
Pymeta(name="modified", content="27 November 2015"),
Pymeta(name="reference", content="ArchModelingDiagrams.pdf"),
Pymeta(name="reference", content="https://en.wikipedia.org/wiki/Arch"),
Pymeta(name="identifier", content="http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"),
Pymeta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
Pymeta(name="license", content="../license.html"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
ProtoDeclare(name="ArchPrototype", appinfo="Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.", 
ProtoInterface=PyProtoInterface(field=[Pyfield(name="diffuseColor", accessType="inputOutput", appinfo="color of arch", type="SFColor", value=(0.2,0.8,0.8)),
Pyfield(name="emissiveColor", accessType="inputOutput", appinfo="color of arch", type="SFColor", value=(0.2,0.8,0.8)),
Pyfield(name="clearSpanWidth", accessType="initializeOnly", appinfo="clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference", type="SFFloat", value=4),
Pyfield(name="riseHeight", accessType="initializeOnly", appinfo="riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference", type="SFFloat", value=2),
Pyfield(name="depth", accessType="initializeOnly", appinfo="depth", type="SFFloat", value=3),
Pyfield(name="topAbutmentHeight", accessType="initializeOnly", appinfo="topAbutmentHeight:topAbutmentHeight=0 means no topAbutment", type="SFFloat", value=0.5),
Pyfield(name="pierWidth", accessType="initializeOnly", appinfo="pierWidth:pierWidtht=0 means no pierWidth", type="SFFloat", value=0.5),
Pyfield(name="pierHeight", accessType="initializeOnly", appinfo="pierHeight: pierHeight=0 means no pierHeight", type="SFFloat", value=1),
Pyfield(name="archHalf", accessType="initializeOnly", appinfo="archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width", type="SFBool", value=False),
Pyfield(name="archHalfExtensionWidth", accessType="initializeOnly", appinfo="archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.", type="SFFloat", value=0),
Pyfield(name="onlyIntrados", accessType="initializeOnly", appinfo="onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.", type="SFBool", value=False),
Pyfield(name="archFilled", accessType="initializeOnly", appinfo="archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.", type="SFBool", value=False),
Pyfield(name="archHalfFilled", accessType="initializeOnly", appinfo="archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.", type="SFBool", value=False),
Pyfield(name="lintel", accessType="initializeOnly", appinfo="lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.", type="SFBool", value=False)
]), 
ProtoBody=PyProtoBody(children=[
Comment(value=''' First node determines node type of this prototype '''),
Comment(value=''' IndexedFaceset creates arch '''),
Transform(DEF="ArchTransform", children=[
Shape(DEF="Arch", 
geometry=
IndexedFaceSet(DEF="ArchIndex", convex=False, solid=False, 
coord=
Coordinate(DEF="ArchChord")), 
appearance=
Appearance(
material=
Material(DEF="MaterialNode", 
IS=PyIS(connect=[Pyconnect(nodeField="emissiveColor", protoField="emissiveColor"),
Pyconnect(nodeField="diffuseColor", protoField="diffuseColor")
]))))]),
Comment(value=''' Subsequent nodes do not render, but still must be a valid X3D subgraph '''),
Comment(value=''' This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs '''),
Script(DEF="ArchPrototypeScript", url=["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"], field=[Pyfield(name="clearSpanWidth", accessType="initializeOnly", appinfo="user or default input for clearSpanWidth parameter", type="SFFloat"),
Pyfield(name="riseHeight", accessType="initializeOnly", appinfo="user or default input for riseHeight parameter", type="SFFloat"),
Pyfield(name="depth", accessType="initializeOnly", appinfo="user or default input for depth parameter", type="SFFloat"),
Pyfield(name="topAbutmentHeight", accessType="initializeOnly", appinfo="user or default input for topAbutmentHeight parameter", type="SFFloat"),
Pyfield(name="pierWidth", accessType="initializeOnly", appinfo="user or default input for pierWidth parameter", type="SFFloat"),
Pyfield(name="pierHeight", accessType="initializeOnly", appinfo="user or default input for pierHeight parameter", type="SFFloat"),
Pyfield(name="archHalf", accessType="initializeOnly", appinfo="user or default input for archHalf parameter", type="SFBool"),
Pyfield(name="archHalfExtensionWidth", accessType="initializeOnly", appinfo="user or default input for archHalfExtensionWidth parameter", type="SFFloat"),
Pyfield(name="onlyIntrados", accessType="initializeOnly", appinfo="user or default input for onlyIntrados parameter", type="SFBool"),
Pyfield(name="archFilled", accessType="initializeOnly", appinfo="user or default input for archFilled parameter", type="SFBool"),
Pyfield(name="archHalfFilled", accessType="initializeOnly", appinfo="user or default input for archHalfFilled parameter", type="SFBool"),
Pyfield(name="lintel", accessType="initializeOnly", appinfo="user or default input for lintel parameter", type="SFBool"),
Pyfield(name="computedScale", accessType="outputOnly", appinfo="computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth", type="SFVec3f"),
Pyfield(name="pointOut", accessType="outputOnly", appinfo="send computed points to the Coordinate node", type="MFVec3f"),
Pyfield(name="indexOut", accessType="outputOnly", appinfo="send computed indices to the IndexedFaceSet node", type="MFInt32")
], 
IS=PyIS(connect=[Pyconnect(nodeField="clearSpanWidth", protoField="clearSpanWidth"),
Pyconnect(nodeField="riseHeight", protoField="riseHeight"),
Pyconnect(nodeField="depth", protoField="depth"),
Pyconnect(nodeField="pierWidth", protoField="pierWidth"),
Pyconnect(nodeField="topAbutmentHeight", protoField="topAbutmentHeight"),
Pyconnect(nodeField="pierHeight", protoField="pierHeight"),
Pyconnect(nodeField="archHalf", protoField="archHalf"),
Pyconnect(nodeField="archHalfExtensionWidth", protoField="archHalfExtensionWidth"),
Pyconnect(nodeField="onlyIntrados", protoField="onlyIntrados"),
Pyconnect(nodeField="archFilled", protoField="archFilled"),
Pyconnect(nodeField="archHalfFilled", protoField="archHalfFilled"),
Pyconnect(nodeField="lintel", protoField="lintel")
])),
ROUTE(fromField="computedScale", fromNode="ArchPrototypeScript", toField="scale", toNode="ArchTransform"),
ROUTE(fromField="pointOut", fromNode="ArchPrototypeScript", toField="point", toNode="ArchChord"),
ROUTE(fromField="indexOut", fromNode="ArchPrototypeScript", toField="set_coordIndex", toNode="ArchIndex"),])),
ProtoInstance(name="ArchPrototype", DEF="ArchInstance", fieldValue=[PyfieldValue(name="diffuseColor", value=[0.5,0.3,0.6]),
PyfieldValue(name="emissiveColor", value=[0.5,0.3,0.6]),
PyfieldValue(name="clearSpanWidth", value=5),
PyfieldValue(name="riseHeight", value=2.5),
PyfieldValue(name="depth", value=2),
PyfieldValue(name="topAbutmentHeight", value=0.6),
PyfieldValue(name="pierWidth", value=1),
PyfieldValue(name="pierHeight", value=2)
]),
Comment(value=''' Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) '''),
Inline(DEF="CoordinateAxes", url=["../data/CoordinateAxes.x3d"]),])))
output = model.JSON()
json.loads(output)
