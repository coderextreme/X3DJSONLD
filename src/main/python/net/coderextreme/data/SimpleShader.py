print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
head1.children.append(x3d.Comment("""meta content='under development' name='warning'/"""))
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
meta9.content = "20 October 2019"

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
meta16.content = "Titania V3.0.3, http://titania.create3000.de"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "info"
meta17.content = "World of Titania"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "outputStyle"
meta18.content = "nicest"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "generator"
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "identifier"
meta20.content = "https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "license"
meta21.content = "../../license.html"

head1.children.append(meta21)

X3D0.head = head1
Scene22 = x3d.Scene()
ProtoDeclare23 = x3d.ProtoDeclare()
ProtoDeclare23.name = "myPrototype"
ProtoInterface24 = x3d.ProtoInterface()
field25 = x3d.field()
field25.name = "myInputRange"
field25.accessType = "initializeOnly"
field25.type = "SFVec3f"
field25.value = [0.95,0.44,0.22]

ProtoInterface24.field.append(field25)

ProtoDeclare23.ProtoInterface = ProtoInterface24
ProtoBody26 = x3d.ProtoBody()
Transform27 = x3d.Transform(DEF="TR")
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.diffuseColor = [0.5,0.5,0.9]

Appearance29.material = Material30
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.language = "GLSL"
field32 = x3d.field()
field32.name = "decis"
field32.accessType = "initializeOnly"
field32.type = "SFVec3f"

ComposedShader31.field.append(field32)
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.nodeField = "decis"
connect34.protoField = "myInputRange"

IS33.connect.append(connect34)

ComposedShader31.IS = IS33
ShaderPart35 = x3d.ShaderPart()
ShaderPart35.type = "VERTEX"

ComposedShader31.parts.append(ShaderPart35)
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.type = "FRAGMENT"

ComposedShader31.parts.append(ShaderPart36)

Appearance29.shaders.append(ComposedShader31)
ComposedShader37 = x3d.ComposedShader(DEF="Cobweb")
ComposedShader37.language = "GLSL"
field38 = x3d.field()
field38.name = "decis"
field38.accessType = "initializeOnly"
field38.type = "SFVec3f"
field38.value = [0.95,0.77,0.44]

ComposedShader37.field.append(field38)
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.type = "VERTEX"

ComposedShader37.parts.append(ShaderPart39)
ShaderPart40 = x3d.ShaderPart(DEF="_1")
ShaderPart40.type = "FRAGMENT"

ComposedShader37.parts.append(ShaderPart40)

Appearance29.shaders.append(ComposedShader37)

Shape28.appearance = Appearance29
Sphere41 = x3d.Sphere()
Sphere41.radius = 1.75

Shape28.geometry = Sphere41

Transform27.children.append(Shape28)

ProtoBody26.children.append(Transform27)

ProtoDeclare23.ProtoBody = ProtoBody26

Scene22.children.append(ProtoDeclare23)
WorldInfo42 = x3d.WorldInfo()
WorldInfo42.title = "SimpleShader"
MetadataSet43 = x3d.MetadataSet(DEF="Titania")
MetadataSet43.name = "Titania"
MetadataSet43.reference = "http://titania.create3000.de"
MetadataSet44 = x3d.MetadataSet(DEF="Selection")
MetadataSet44.name = "Selection"
MetadataSet44.reference = "http://titania.create3000.de"
MetadataSet45 = x3d.MetadataSet(DEF="nodes")
MetadataSet45.name = "nodes"
MetadataSet45.reference = "http://titania.create3000.de"
MetadataSet45.children.append(x3d.Comment("""NULL"""))

if MetadataSet44.value is None:
    MetadataSet44.value = []
MetadataSet44.value.append(MetadataSet45)

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataSet44)
MetadataSet46 = x3d.MetadataSet(DEF="NavigationInfo")
MetadataSet46.name = "NavigationInfo"
MetadataSet46.reference = "http://titania.create3000.de"
MetadataString47 = x3d.MetadataString(DEF="type")
MetadataString47.name = "type"
MetadataString47.reference = "http://titania.create3000.de"
MetadataString47.value = ["EXAMINE"]

if MetadataSet46.value is None:
    MetadataSet46.value = []
MetadataSet46.value.append(MetadataString47)

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataSet46)
MetadataSet48 = x3d.MetadataSet(DEF="Viewpoint")
MetadataSet48.name = "Viewpoint"
MetadataSet48.reference = "http://titania.create3000.de"
MetadataDouble49 = x3d.MetadataDouble(DEF="position")
MetadataDouble49.name = "position"
MetadataDouble49.reference = "http://titania.create3000.de"
MetadataDouble49.value = [6.24067728185014,0.00250837343276661,2.92117542307615]

if MetadataSet48.value is None:
    MetadataSet48.value = []
MetadataSet48.value.append(MetadataDouble49)
MetadataDouble50 = x3d.MetadataDouble(DEF="orientation")
MetadataDouble50.name = "orientation"
MetadataDouble50.reference = "http://titania.create3000.de"
MetadataDouble50.value = [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191]

if MetadataSet48.value is None:
    MetadataSet48.value = []
MetadataSet48.value.append(MetadataDouble50)
MetadataDouble51 = x3d.MetadataDouble(DEF="centerOfRotation")
MetadataDouble51.name = "centerOfRotation"
MetadataDouble51.reference = "http://titania.create3000.de"
MetadataDouble51.value = [-0.808320198626341,-0.358072370409949,0.22817191560906]

if MetadataSet48.value is None:
    MetadataSet48.value = []
MetadataSet48.value.append(MetadataDouble51)

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataSet48)

WorldInfo42.metadata = MetadataSet43

Scene22.children.append(WorldInfo42)
ProtoInstance52 = x3d.ProtoInstance()
ProtoInstance52.name = "myPrototype"

Scene22.children.append(ProtoInstance52)

X3D0.Scene = Scene22
f = open("../data/SimpleShader.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/SimpleShader.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/SimpleShader.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
