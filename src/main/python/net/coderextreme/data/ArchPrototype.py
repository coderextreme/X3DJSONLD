# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="ArchPrototype.x3d"),
meta(name="description", content="Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."),
meta(name="description", content="Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."),
meta(name="creator", content="Michele Foti, Don Brutzman"),
meta(name="created", content="15 December 2014"),
meta(name="modified", content="27 November 2015"),
meta(name="reference", content="ArchModelingDiagrams.pdf"),
meta(name="reference", content="https://en.wikipedia.org/wiki/Arch"),
meta(name="identifier", content="http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="02 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
ProtoDeclare(name="ArchPrototype", appinfo="Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.", 
ProtoInterface=ProtoInterface(field=[field(name="diffuseColor", accessType="inputOutput", appinfo="color of arch", type="SFColor", value=(0.2,0.8,0.8)),
field(name="emissiveColor", accessType="inputOutput", appinfo="color of arch", type="SFColor", value=(0.2,0.8,0.8)),
field(name="clearSpanWidth", accessType="initializeOnly", appinfo="clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference", type="SFFloat", value=4),
field(name="riseHeight", accessType="initializeOnly", appinfo="riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference", type="SFFloat", value=2),
field(name="depth", accessType="initializeOnly", appinfo="depth", type="SFFloat", value=3),
field(name="topAbutmentHeight", accessType="initializeOnly", appinfo="topAbutmentHeight:topAbutmentHeight=0 means no topAbutment", type="SFFloat", value=0.5),
field(name="pierWidth", accessType="initializeOnly", appinfo="pierWidth:pierWidtht=0 means no pierWidth", type="SFFloat", value=0.5),
field(name="pierHeight", accessType="initializeOnly", appinfo="pierHeight: pierHeight=0 means no pierHeight", type="SFFloat", value=1),
field(name="archHalf", accessType="initializeOnly", appinfo="archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width", type="SFBool", value=False),
field(name="archHalfExtensionWidth", accessType="initializeOnly", appinfo="archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.", type="SFFloat", value=0),
field(name="onlyIntrados", accessType="initializeOnly", appinfo="onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.", type="SFBool", value=False),
field(name="archFilled", accessType="initializeOnly", appinfo="archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.", type="SFBool", value=False),
field(name="archHalfFilled", accessType="initializeOnly", appinfo="archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.", type="SFBool", value=False),
field(name="lintel", accessType="initializeOnly", appinfo="lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.", type="SFBool", value=False)
]), 
ProtoBody=ProtoBody(children=[
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
IS=IS(connect=[connect(nodeField="emissiveColor", protoField="emissiveColor"),
connect(nodeField="diffuseColor", protoField="diffuseColor")
]))))]),
Comment(value=''' Subsequent nodes do not render, but still must be a valid X3D subgraph '''),

Comment(value=''' This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs '''),

Script(DEF="ArchPrototypeScript", url=["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"], field=[field(name="clearSpanWidth", accessType="initializeOnly", appinfo="user or default input for clearSpanWidth parameter", type="SFFloat"),
field(name="riseHeight", accessType="initializeOnly", appinfo="user or default input for riseHeight parameter", type="SFFloat"),
field(name="depth", accessType="initializeOnly", appinfo="user or default input for depth parameter", type="SFFloat"),
field(name="topAbutmentHeight", accessType="initializeOnly", appinfo="user or default input for topAbutmentHeight parameter", type="SFFloat"),
field(name="pierWidth", accessType="initializeOnly", appinfo="user or default input for pierWidth parameter", type="SFFloat"),
field(name="pierHeight", accessType="initializeOnly", appinfo="user or default input for pierHeight parameter", type="SFFloat"),
field(name="archHalf", accessType="initializeOnly", appinfo="user or default input for archHalf parameter", type="SFBool"),
field(name="archHalfExtensionWidth", accessType="initializeOnly", appinfo="user or default input for archHalfExtensionWidth parameter", type="SFFloat"),
field(name="onlyIntrados", accessType="initializeOnly", appinfo="user or default input for onlyIntrados parameter", type="SFBool"),
field(name="archFilled", accessType="initializeOnly", appinfo="user or default input for archFilled parameter", type="SFBool"),
field(name="archHalfFilled", accessType="initializeOnly", appinfo="user or default input for archHalfFilled parameter", type="SFBool"),
field(name="lintel", accessType="initializeOnly", appinfo="user or default input for lintel parameter", type="SFBool"),
field(name="computedScale", accessType="outputOnly", appinfo="computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth", type="SFVec3f"),
field(name="pointOut", accessType="outputOnly", appinfo="send computed points to the Coordinate node", type="MFVec3f"),
field(name="indexOut", accessType="outputOnly", appinfo="send computed indices to the IndexedFaceSet node", type="MFInt32")
], 
IS=IS(connect=[connect(nodeField="clearSpanWidth", protoField="clearSpanWidth"),
connect(nodeField="riseHeight", protoField="riseHeight"),
connect(nodeField="depth", protoField="depth"),
connect(nodeField="pierWidth", protoField="pierWidth"),
connect(nodeField="topAbutmentHeight", protoField="topAbutmentHeight"),
connect(nodeField="pierHeight", protoField="pierHeight"),
connect(nodeField="archHalf", protoField="archHalf"),
connect(nodeField="archHalfExtensionWidth", protoField="archHalfExtensionWidth"),
connect(nodeField="onlyIntrados", protoField="onlyIntrados"),
connect(nodeField="archFilled", protoField="archFilled"),
connect(nodeField="archHalfFilled", protoField="archHalfFilled"),
connect(nodeField="lintel", protoField="lintel")
])),
ROUTE(fromField="computedScale", fromNode="ArchPrototypeScript", toField="scale", toNode="ArchTransform"),
ROUTE(fromField="pointOut", fromNode="ArchPrototypeScript", toField="point", toNode="ArchChord"),
ROUTE(fromField="indexOut", fromNode="ArchPrototypeScript", toField="set_coordIndex", toNode="ArchIndex"),])),
ProtoInstance(name="ArchPrototype", DEF="ArchInstance", fieldValue=[fieldValue(name="diffuseColor", value=[0.5,0.3,0.6]),
fieldValue(name="emissiveColor", value=[0.5,0.3,0.6]),
fieldValue(name="clearSpanWidth", value=5),
fieldValue(name="riseHeight", value=2.5),
fieldValue(name="depth", value=2),
fieldValue(name="topAbutmentHeight", value=0.6),
fieldValue(name="pierWidth", value=1),
fieldValue(name="pierHeight", value=2)
]),
Comment(value=''' Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) '''),

Inline(DEF="CoordinateAxes", url=["../data/CoordinateAxes.x3d"]),]))
.XML())
