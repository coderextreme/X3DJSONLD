print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Shaders"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "SimpleShader.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Simple shader example"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "John Stewart"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "created"
meta7.content = "26 May 2009"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "translated"
meta8.content = "15 October 2009"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "modified"
meta9.content = "Mon, 09 Feb 2026 07:12:58 GMT"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "http://www.opengl.org/wiki/Fragment_Shader"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "subject"
meta13.content = "X3D shader example"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "originals/simpleShader.x3dv"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "ShaderTutorialInstantReality.pdf"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "generator"
meta17.content = "Titania V3.0.3, http://titania.create3000.de"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "generator"
meta18.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "info"
meta19.content = "World of Titania"

head1.children.append(meta19)

X3D0.head = head1
Scene20 = x3d.Scene()
ProtoDeclare21 = x3d.ProtoDeclare()
ProtoDeclare21.name = "myPrototype"
ProtoInterface22 = x3d.ProtoInterface()
field23 = x3d.field()
field23.accessType = "initializeOnly"
field23.type = "SFVec3f"
field23.name = "myInputRange"
field23.value = [0.95,0.44,0.22]

ProtoInterface22.field.append(field23)

ProtoDeclare21.ProtoInterface = ProtoInterface22
ProtoBody24 = x3d.ProtoBody()
Transform25 = x3d.Transform(DEF="TR")
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.diffuseColor = [0.5,0.5,0.9]

Appearance27.material = Material28
ComposedShader29 = x3d.ComposedShader()
ComposedShader29.language = "GLSL"
ShaderPart30 = x3d.ShaderPart()

ComposedShader29.parts.append(ShaderPart30)
ShaderPart31 = x3d.ShaderPart()
ShaderPart31.type = "FRAGMENT"

ComposedShader29.parts.append(ShaderPart31)
field32 = x3d.field()
field32.accessType = "initializeOnly"
field32.type = "SFVec3f"
field32.name = "decis"

ComposedShader29.field.append(field32)
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.nodeField = "decis"
connect34.protoField = "myInputRange"

IS33.connect.append(connect34)

ComposedShader29.IS = IS33

Appearance27.shaders.append(ComposedShader29)
ComposedShader35 = x3d.ComposedShader(DEF="Cobweb")
ComposedShader35.language = "GLSL"
ShaderPart36 = x3d.ShaderPart()

ComposedShader35.parts.append(ShaderPart36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.type = "FRAGMENT"

ComposedShader35.parts.append(ShaderPart37)
field38 = x3d.field()
field38.accessType = "initializeOnly"
field38.type = "SFVec3f"
field38.name = "decis"
field38.value = [0.95,0.77,0.44]

ComposedShader35.field.append(field38)

Appearance27.shaders.append(ComposedShader35)

Shape26.appearance = Appearance27
Sphere39 = x3d.Sphere()
Sphere39.radius = 1.75

Shape26.geometry = Sphere39

Transform25.children.append(Shape26)

ProtoBody24.children.append(Transform25)

ProtoDeclare21.ProtoBody = ProtoBody24

Scene20.children.append(ProtoDeclare21)
WorldInfo40 = x3d.WorldInfo()
WorldInfo40.title = "SimpleShader"
MetadataSet41 = x3d.MetadataSet(DEF="Titania")
MetadataSet41.name = "Titania"
MetadataSet41.reference = "http://titania.create3000.de"
MetadataSet42 = x3d.MetadataSet(DEF="Selection")
MetadataSet42.name = "Selection"
MetadataSet42.reference = "http://titania.create3000.de"
MetadataSet43 = x3d.MetadataSet(DEF="nodes")
MetadataSet43.name = "nodes"
MetadataSet43.reference = "http://titania.create3000.de"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataSet43)

if MetadataSet41.value is None:
    MetadataSet41.value = []
MetadataSet41.value.append(MetadataSet42)
MetadataSet44 = x3d.MetadataSet(DEF="NavigationInfo")
MetadataSet44.name = "NavigationInfo"
MetadataSet44.reference = "http://titania.create3000.de"
MetadataString45 = x3d.MetadataString(DEF="type")
MetadataString45.name = "type"
MetadataString45.reference = "http://titania.create3000.de"
MetadataString45.value = ["EXAMINE"]

if MetadataSet44.value is None:
    MetadataSet44.value = []
MetadataSet44.value.append(MetadataString45)

if MetadataSet41.value is None:
    MetadataSet41.value = []
MetadataSet41.value.append(MetadataSet44)
MetadataSet46 = x3d.MetadataSet(DEF="Viewpoint")
MetadataSet46.name = "Viewpoint"
MetadataSet46.reference = "http://titania.create3000.de"
MetadataDouble47 = x3d.MetadataDouble(DEF="position")
MetadataDouble47.name = "position"
MetadataDouble47.reference = "http://titania.create3000.de"
MetadataDouble47.value = [6.24067728185014,0.00250837343276661,2.92117542307615]

if MetadataSet46.value is None:
    MetadataSet46.value = []
MetadataSet46.value.append(MetadataDouble47)
MetadataDouble48 = x3d.MetadataDouble(DEF="orientation")
MetadataDouble48.name = "orientation"
MetadataDouble48.reference = "http://titania.create3000.de"
MetadataDouble48.value = [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191]

if MetadataSet46.value is None:
    MetadataSet46.value = []
MetadataSet46.value.append(MetadataDouble48)
MetadataDouble49 = x3d.MetadataDouble(DEF="centerOfRotation")
MetadataDouble49.name = "centerOfRotation"
MetadataDouble49.reference = "http://titania.create3000.de"
MetadataDouble49.value = [-0.808320198626341,-0.358072370409949,0.22817191560906]

if MetadataSet46.value is None:
    MetadataSet46.value = []
MetadataSet46.value.append(MetadataDouble49)

if MetadataSet41.value is None:
    MetadataSet41.value = []
MetadataSet41.value.append(MetadataSet46)

WorldInfo40.metadata = MetadataSet41

Scene20.children.append(WorldInfo40)
ProtoInstance50 = x3d.ProtoInstance()
ProtoInstance50.name = "myPrototype"

Scene20.children.append(ProtoInstance50)

X3D0.Scene = Scene20
f = open("../data/SimpleShader.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/SimpleShader.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/SimpleShader.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
