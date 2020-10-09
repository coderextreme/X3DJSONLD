import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.2")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("SimpleShader.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Simple shader example")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("John Stewart")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("translator")
meta6.setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("created")
meta7.setContent("26 May 2009")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("translated")
meta8.setContent("15 October 2009")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("modified")
meta9.setContent("20 October 2019")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://www.opengl.org/wiki/Fragment_Shader")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("subject")
meta13.setContent("X3D shader example")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("originals/simpleShader.x3dv")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("ShaderTutorialInstantReality.pdf")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("generator")
meta16.setContent("Titania V3.0.3, http://titania.create3000.de")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("comment")
meta17.setContent("World of Titania")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("outputStyle")
meta18.setContent("nicest")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("warning")
meta19.setContent("under development")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("generator")
meta20.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("identifier")
meta21.setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("license")
meta22.setContent("../../license.html")

head1.addMeta(meta22)

X3D0.setHead(head1)
Scene23 = x3d.Scene()
ProtoDeclare24 = x3d.ProtoDeclare()
ProtoDeclare24.setName("myPrototype")
ProtoInterface25 = x3d.ProtoInterface()
field26 = x3d.field()
field26.setName("myInputRange")
field26.setAccessType("initializeOnly")
field26.setType("SFVec3f")
field26.setValue("0.95 0.44 0.22")

ProtoInterface25.addField(field26)

ProtoDeclare24.setProtoInterface(ProtoInterface25)
ProtoBody27 = x3d.ProtoBody()
Transform28 = x3d.Transform()
Transform28.setDEF("TR")
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
Material31.setDiffuseColor([0.5,0.5,0.9])

Appearance30.setMaterial(Material31)
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.setLanguage("GLSL")
field33 = x3d.field()
field33.setName("decis")
field33.setAccessType("initializeOnly")
field33.setType("SFVec3f")

ComposedShader32.addField(field33)
IS34 = x3d.IS()
connect35 = x3d.connect()
connect35.setNodeField("decis")
connect35.setProtoField("myInputRange")

IS34.addConnect(connect35)

ComposedShader32.setIS(IS34)
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.setType("VERTEX")

ComposedShader32.addParts(ShaderPart36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.setType("FRAGMENT")

ComposedShader32.addParts(ShaderPart37)

Appearance30.addShaders(ComposedShader32)
ComposedShader38 = x3d.ComposedShader()
ComposedShader38.setDEF("Cobweb")
ComposedShader38.setLanguage("GLSL")
field39 = x3d.field()
field39.setName("decis")
field39.setAccessType("initializeOnly")
field39.setType("SFVec3f")
field39.setValue("0.95 0.77 0.44")

ComposedShader38.addField(field39)
ShaderPart40 = x3d.ShaderPart()
ShaderPart40.setType("VERTEX")

ComposedShader38.addParts(ShaderPart40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.setDEF("_1")
ShaderPart41.setType("FRAGMENT")

ComposedShader38.addParts(ShaderPart41)

Appearance30.addShaders(ComposedShader38)

Shape29.setAppearance(Appearance30)
Sphere42 = x3d.Sphere()
Sphere42.setRadius(1.75)

Shape29.setGeometry(Sphere42)

Transform28.addChildren(Shape29)

ProtoBody27.addChildren(Transform28)

ProtoDeclare24.setProtoBody(ProtoBody27)

Scene23.addChildren(ProtoDeclare24)
WorldInfo43 = x3d.WorldInfo()
WorldInfo43.setTitle("SimpleShader")
MetadataSet44 = x3d.MetadataSet()
MetadataSet44.setName("Titania")
MetadataSet44.setDEF("Titania")
MetadataSet44.setReference("http://titania.create3000.de")
MetadataSet45 = x3d.MetadataSet()
MetadataSet45.setName("Selection")
MetadataSet45.setDEF("Selection")
MetadataSet45.setReference("http://titania.create3000.de")
MetadataSet46 = x3d.MetadataSet()
MetadataSet46.setName("nodes")
MetadataSet46.setDEF("nodes")
MetadataSet46.setReference("http://titania.create3000.de")
#NULL

MetadataSet45.addValue(MetadataSet46)

MetadataSet44.addValue(MetadataSet45)
MetadataSet47 = x3d.MetadataSet()
MetadataSet47.setName("NavigationInfo")
MetadataSet47.setDEF("NavigationInfo")
MetadataSet47.setReference("http://titania.create3000.de")
MetadataString48 = x3d.MetadataString()
MetadataString48.setName("type")
MetadataString48.setDEF("type")
MetadataString48.setReference("http://titania.create3000.de")
MetadataString48.setValue(["EXAMINE"])

MetadataSet47.addValue(MetadataString48)

MetadataSet44.addValue(MetadataSet47)
MetadataSet49 = x3d.MetadataSet()
MetadataSet49.setName("Viewpoint")
MetadataSet49.setDEF("Viewpoint")
MetadataSet49.setReference("http://titania.create3000.de")
MetadataDouble50 = x3d.MetadataDouble()
MetadataDouble50.setName("position")
MetadataDouble50.setDEF("position")
MetadataDouble50.setReference("http://titania.create3000.de")
MetadataDouble50.setValue([6.24067728185014,0.00250837343276661,2.92117542307615])

MetadataSet49.addValue(MetadataDouble50)
MetadataDouble51 = x3d.MetadataDouble()
MetadataDouble51.setName("orientation")
MetadataDouble51.setDEF("orientation")
MetadataDouble51.setReference("http://titania.create3000.de")
MetadataDouble51.setValue([-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])

MetadataSet49.addValue(MetadataDouble51)
MetadataDouble52 = x3d.MetadataDouble()
MetadataDouble52.setName("centerOfRotation")
MetadataDouble52.setDEF("centerOfRotation")
MetadataDouble52.setReference("http://titania.create3000.de")
MetadataDouble52.setValue([-0.808320198626341,-0.358072370409949,0.22817191560906])

MetadataSet49.addValue(MetadataDouble52)

MetadataSet44.addValue(MetadataSet49)

WorldInfo43.setMetadata(MetadataSet44)

Scene23.addChildren(WorldInfo43)
ProtoInstance53 = x3d.ProtoInstance()
ProtoInstance53.setName("myPrototype")

Scene23.addChildren(ProtoInstance53)

X3D0.setScene(Scene23)
X3D0.toFileX3D("../data/SimpleShader_RoundTrip.x3d")
