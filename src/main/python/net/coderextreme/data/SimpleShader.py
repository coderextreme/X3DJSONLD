#x3d.py package loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.2", 
head=head(), 
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
Material(diffuseColor=((0.5,0.5,0.9))), shaders=(
ComposedShader(language="GLSL", field=[field(name="decis", accessType="initializeOnly", type="SFVec3f")
], 
IS=IS(connect=[connect(nodeField="decis", protoField="myInputRange")
]), parts=(
ShaderPart(type="VERTEX"),
ShaderPart(type="FRAGMENT"))),
ComposedShader(DEF="Cobweb", language="GLSL", field=[field(name="decis", accessType="initializeOnly", type="SFVec3f", value=(0.95,0.77,0.44))
], parts=(
ShaderPart(type="VERTEX"),
ShaderPart(DEF="_1", type="FRAGMENT"))))), 
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
