# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[component(name="Geospatial", level=1),
component(name="NURBS", level=2),
component(name="Core", level=2),
component(name="Navigation", level=1),
component(name="Text", level=1),
meta(name="title", content="X3dHeaderPrototypeSyntaxExamples.x3d"),
meta(name="description", content="X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding."),
meta(name="created", content="14 October 2002"),
meta(name="modified", content="27 May 2017"),
meta(name="creator", content="Don Brutzman"),
meta(name="specificationSection", content="X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax"),
meta(name="specificationUrl", content="https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax"),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="01 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
ExternProtoDeclare(name="ViewPositionOrientation", url=["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"], field=[field(name="enabled", accessType="inputOutput", type="SFBool"),
field(name="traceEnabled", accessType="initializeOnly", type="SFBool"),
field(name="set_traceEnabled", accessType="inputOnly", type="SFBool"),
field(name="position_changed", accessType="outputOnly", type="SFVec3f"),
field(name="orientation_changed", accessType="outputOnly", type="SFRotation"),
field(name="outputViewpointString", accessType="outputOnly", type="MFString")
]),
ProtoDeclare(name="NewWorldInfoNode", 
ProtoBody=ProtoBody(children=[
WorldInfo(DEF="ExamplePrototypeBody")])),
ProtoInstance(name="NewWorldInfoNode"),
ProtoDeclare(name="EmissiveMaterial", 
ProtoInterface=ProtoInterface(field=[field(name="onlyColor", accessType="inputOutput", type="SFColor", value=(1,0,0))
]), 
ProtoBody=ProtoBody(children=[
Comment(value=''' Override default diffuseColor value 0.8 0.8 0.8 '''),

Material(diffuseColor=((0,0,0)), 
IS=IS(connect=[connect(nodeField="emissiveColor", protoField="onlyColor")
])),])),
ProtoDeclare(name="ShiftGroupUp2m", 
ProtoInterface=ProtoInterface(field=[field(name="children", accessType="inputOutput", type="MFNode", children=[
Group(DEF="DefaultNodeValue", bboxSize=((2,2,2)), children=[
Comment(value=''' Authors need to override this node when creating the ProtoInstance fieldValue name="children" '''),
])])
]), 
ProtoBody=ProtoBody(children=[
Transform(translation=((0,2,0)), children=[
Group(
IS=IS(connect=[connect(nodeField="children", protoField="children")
]))])])),
ProtoInstance(name="ShiftGroupUp2m"),
Comment(value=''' ==================== '''),

Viewpoint(DEF="ExampleSingleElement", description="Hello syntax"),
Group(DEF="ExampleChildElement", children=[
Shape(
geometry=
Box(), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.6,0.4,0.2)))))]),
Transform(DEF="TransformExampleUSE", rotation=((0,1,0,0.78)), translation=((0,2.5,0)), children=[
Group(USE="ExampleChildElement")]),
Collision(
proxy=Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material())), children=[
Group(USE="ExampleChildElement")]),
Transform(translation=((0,-2.5,0)), children=[
Shape(
appearance=
Appearance(
material=
ProtoInstance(name="EmissiveMaterial", fieldValue=[fieldValue(name="onlyColor", value=[0.2,0.6,0.6])
])), 
geometry=
Text(string=["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], size=0.6)))]),
ProtoInstance(name="ViewPositionOrientation", fieldValue=[fieldValue(name="enabled", value=True)
]),
TimeSensor(DEF="Clock", cycleInterval=4, loop=True),
OrientationInterpolator(DEF="Spinner", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(3.14159)),(float(0),float(1),float(0),float(6.28318))]),
ROUTE(fromField="fraction_changed", fromNode="Clock", toField="set_fraction", toNode="Spinner"),
ROUTE(fromField="value_changed", fromNode="Spinner", toField="rotation", toNode="TransformExampleUSE"),
Inline(DEF="someInline", url=["someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"]),
IMPORT(AS="someInlineRoot", importedDEF="someName", inlineDEF="someInline"),
PositionInterpolator(DEF="StayInPlace", key=[float(0),float(1)], keyValue=[(0,0,0),(0,0,0)]),
ROUTE(fromField="fraction_changed", fromNode="Clock", toField="set_fraction", toNode="StayInPlace"),
ROUTE(fromField="value_changed", fromNode="StayInPlace", toField="set_translation", toNode="someInlineRoot"),]))
.XML())
