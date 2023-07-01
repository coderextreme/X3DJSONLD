# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.2", 
head=head(children=[component(name="Shaders", level=1),
meta(name="title", content="SimpleShader.x3d"),
meta(name="description", content="Simple shader example"),
meta(name="creator", content="John Stewart"),
meta(name="translator", content="Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"),
meta(name="created", content="26 May 2009"),
meta(name="translated", content="15 October 2009"),
meta(name="modified", content="20 October 2019"),
meta(name="reference", content="http://www.opengl.org/wiki/Fragment_Shader"),
meta(name="reference", content="http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"),
meta(name="reference", content="https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"),
meta(name="subject", content="X3D shader example"),
meta(name="reference", content="originals/simpleShader.x3dv"),
meta(name="reference", content="ShaderTutorialInstantReality.pdf"),
meta(name="generator", content="Titania V3.0.3, http://titania.create3000.de"),
meta(name="info", content="World of Titania"),
meta(name="outputStyle", content="nicest"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"),
meta(name="license", content="../../license.html"),
meta(name="translated", content="01 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
ProtoDeclare(name="myPrototype", 
ProtoInterface=ProtoInterface(field=[field(name="myInputRange", accessType="initializeOnly", type="SFVec3f", value=(0.95,0.44,0.22))
]), 
ProtoBody=ProtoBody(children=[
Transform(DEF="TR", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.5,0.5,0.9))), shaders=[
ComposedShader(language="GLSL", field=[field(name="decis", accessType="initializeOnly", type="SFVec3f")
], 
IS=IS(connect=[connect(nodeField="decis", protoField="myInputRange")
]), parts=[
ShaderPart(type="VERTEX"),
ShaderPart(type="FRAGMENT")]),
ComposedShader(DEF="Cobweb", language="GLSL", field=[field(name="decis", accessType="initializeOnly", type="SFVec3f", value=(0.95,0.77,0.44))
], parts=[
ShaderPart(type="VERTEX"),
ShaderPart(DEF="_1", type="FRAGMENT")])]), 
geometry=
Sphere(radius=1.75))])])),
WorldInfo(title="SimpleShader", 
metadata=(
MetadataSet(name="Titania", DEF="Titania", reference="http://titania.create3000.de", value=[
MetadataSet(name="Selection", DEF="Selection", reference="http://titania.create3000.de", value=[
MetadataSet(name="nodes", DEF="nodes", reference="http://titania.create3000.de")]),
MetadataSet(name="NavigationInfo", DEF="NavigationInfo", reference="http://titania.create3000.de", value=[
MetadataString(name="type", DEF="type", reference="http://titania.create3000.de", value=["EXAMINE"])]),
MetadataSet(name="Viewpoint", DEF="Viewpoint", reference="http://titania.create3000.de", value=[
MetadataDouble(name="position", DEF="position", reference="http://titania.create3000.de", value=[float(6.24067728185014),float(0.00250837343276661),float(2.92117542307615)]),
MetadataDouble(name="orientation", DEF="orientation", reference="http://titania.create3000.de", value=[float(-0.110173424710488),float(0.990158061907379),float(-0.0863065984000336),float(1.21146676119191)]),
MetadataDouble(name="centerOfRotation", DEF="centerOfRotation", reference="http://titania.create3000.de", value=[float(-0.808320198626341),float(-0.358072370409949),float(0.22817191560906)])])]))),
ProtoInstance(name="myPrototype")]))
.XML())
