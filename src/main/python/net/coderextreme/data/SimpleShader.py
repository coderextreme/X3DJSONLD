# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 = X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.2")
head1 = headObject()
component2 = componentObject()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = metaObject()
meta3.setName("title")
meta3.setContent("SimpleShader.x3d")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("Simple shader example")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("creator")
meta5.setContent("John Stewart")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("translator")
meta6.setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("created")
meta7.setContent("26 May 2009")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("translated")
meta8.setContent("15 October 2009")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("modified")
meta9.setContent("24 April 2017")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("reference")
meta10.setContent("http://www.opengl.org/wiki/Fragment_Shader")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("reference")
meta11.setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("reference")
meta12.setContent("http://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("subject")
meta13.setContent("X3D shader example")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("reference")
meta14.setContent("originals/simpleShader.x3dv")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("reference")
meta15.setContent("ShaderTutorialInstantReality.pdf")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("generator")
meta16.setContent("Titania V3.0.3, http://titania.create3000.de")

head1.addMeta(meta16)
meta17 = metaObject()
meta17.setName("comment")
meta17.setContent("World of Titania")

head1.addMeta(meta17)
meta18 = metaObject()
meta18.setName("outputStyle")
meta18.setContent("nicest")

head1.addMeta(meta18)
meta19 = metaObject()
meta19.setName("warning")
meta19.setContent("under development")

head1.addMeta(meta19)
meta20 = metaObject()
meta20.setName("generator")
meta20.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta20)
meta21 = metaObject()
meta21.setName("identifier")
meta21.setContent("http://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d")

head1.addMeta(meta21)
meta22 = metaObject()
meta22.setName("license")
meta22.setContent("../../license.html")

head1.addMeta(meta22)

X3D0.setHead(head1)
Scene23 = SceneObject()
ProtoDeclare24 = ProtoDeclareObject()
ProtoDeclare24.setName("myPrototype")
ProtoInterface25 = ProtoInterfaceObject()
field26 = fieldObject()
field26.setName("myInputRange")
field26.setAccessType("initializeOnly")
field26.setType("SFVec3f")
field26.setValue("0.95 0.44 0.22")

ProtoInterface25.addField(field26)

ProtoDeclare24.setProtoInterface(ProtoInterface25)
ProtoBody27 = ProtoBodyObject()
Transform28 = TransformObject()
Transform28.setDEF("TR")
Shape29 = ShapeObject()
Appearance30 = AppearanceObject()
Material31 = MaterialObject()
Material31.setDiffuseColor([0.5,0.5,0.9])

Appearance30.setMaterial(Material31)
ComposedShader32 = ComposedShaderObject()
ComposedShader32.setDEF("Cobweb")
ComposedShader32.setLanguage("GLSL")
field33 = fieldObject()
field33.setName("decis")
field33.setAccessType("initializeOnly")
field33.setType("SFVec3f")
field33.setValue("0.95 0.77 0.44")

ComposedShader32.addField(field33)
ShaderPart34 = ShaderPartObject()
ShaderPart34.setType("VERTEX")

ShaderPart34.setSourceCode('''data:text/plain;charset=utf-8,\n"+
"\n"+
"precision mediump float;\n"+
"\n"+
"uniform mat4 x3d_ProjectionMatrix;\n"+
"uniform mat4 x3d_ModelViewMatrix;\n"+
"uniform mat3 x3d_NormalMatrix;\n"+
"\n"+
"attribute vec4 x3d_Vertex;\n"+
"attribute vec3 x3d_Normal;\n"+
"\n"+
"varying vec3 normal;\n"+
"\n"+
"void main()\n"+
"{\n"+
"	normal = x3d_NormalMatrix * x3d_Normal;\n"+
"	\n"+
"	gl_Position = x3d_ProjectionMatrix * x3d_ModelViewMatrix * x3d_Vertex;\n"+
"}''')

ComposedShader32.addParts(ShaderPart34)
ShaderPart35 = ShaderPartObject()
ShaderPart35.setDEF("_1")
ShaderPart35.setType("FRAGMENT")

ShaderPart35.setSourceCode('''data:text/plain;charset=utf-8,\n"+
"\n"+
"precision mediump float;\n"+
"\n"+
"uniform vec3 x3d_LightDirection [x3d_MaxLights];\n"+
"\n"+
"varying vec3 normal;\n"+
"uniform vec3 decis;\n"+
"\n"+
"void main()\n"+
"{\n"+
"	float intensity;\n"+
"	vec4 color;\n"+
"	vec3 n = normalize (normal);\n"+
"\n"+
"	intensity = abs (dot (x3d_LightDirection [0], n));\n"+
"\n"+
"	if (intensity > decis[0])\n"+
"		color = vec4(0.0,0.5,0.5,1.0);\n"+
"	else if (intensity > decis[1])\n"+
"		color = vec4(0.6,0.3,0.3,1.0);\n"+
"	else if (intensity > decis[2])\n"+
"		color = vec4(1.0,0.2,0.2,1.0);\n"+
"	else\n"+
"		color = vec4(0.0,0.4,0.0,1.0);\n"+
"\n"+
"	gl_FragColor = color;\n"+
"}''')

ComposedShader32.addParts(ShaderPart35)

Appearance30.addShaders(ComposedShader32)

Shape29.setAppearance(Appearance30)
Sphere36 = SphereObject()
Sphere36.setRadius(1.75)

Shape29.setGeometry(Sphere36)

Transform28.addChildren(Shape29)

ProtoBody27.addChildren(Transform28)

ProtoDeclare24.setProtoBody(ProtoBody27)

Scene23.addChildren(ProtoDeclare24)
WorldInfo37 = WorldInfoObject()
WorldInfo37.setTitle("SimpleShader")
MetadataSet38 = MetadataSetObject()
MetadataSet38.setName("Titania")
MetadataSet38.setDEF("Titania")
MetadataSet38.setReference("http://titania.create3000.de")
MetadataSet39 = MetadataSetObject()
MetadataSet39.setName("Selection")
MetadataSet39.setDEF("Selection")
MetadataSet39.setReference("http://titania.create3000.de")
MetadataSet40 = MetadataSetObject()
MetadataSet40.setName("nodes")
MetadataSet40.setDEF("nodes")
MetadataSet40.setReference("http://titania.create3000.de")
#NULL

MetadataSet39.addValue(MetadataSet40)

MetadataSet38.addValue(MetadataSet39)
MetadataSet41 = MetadataSetObject()
MetadataSet41.setName("NavigationInfo")
MetadataSet41.setDEF("NavigationInfo")
MetadataSet41.setReference("http://titania.create3000.de")
MetadataString42 = MetadataStringObject()
MetadataString42.setName("type")
MetadataString42.setDEF("type")
MetadataString42.setReference("http://titania.create3000.de")
MetadataString42.setValue(["EXAMINE"])

MetadataSet41.addValue(MetadataString42)

MetadataSet38.addValue(MetadataSet41)
MetadataSet43 = MetadataSetObject()
MetadataSet43.setName("Viewpoint")
MetadataSet43.setDEF("Viewpoint")
MetadataSet43.setReference("http://titania.create3000.de")
MetadataDouble44 = MetadataDoubleObject()
MetadataDouble44.setName("position")
MetadataDouble44.setDEF("position")
MetadataDouble44.setReference("http://titania.create3000.de")
MetadataDouble44.setValue([6.24067728185014,0.00250837343276661,2.92117542307615])

MetadataSet43.addValue(MetadataDouble44)
MetadataDouble45 = MetadataDoubleObject()
MetadataDouble45.setName("orientation")
MetadataDouble45.setDEF("orientation")
MetadataDouble45.setReference("http://titania.create3000.de")
MetadataDouble45.setValue([-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])

MetadataSet43.addValue(MetadataDouble45)
MetadataDouble46 = MetadataDoubleObject()
MetadataDouble46.setName("centerOfRotation")
MetadataDouble46.setDEF("centerOfRotation")
MetadataDouble46.setReference("http://titania.create3000.de")
MetadataDouble46.setValue([-0.808320198626341,-0.358072370409949,0.22817191560906])

MetadataSet43.addValue(MetadataDouble46)

MetadataSet38.addValue(MetadataSet43)

WorldInfo37.setMetadata(MetadataSet38)

Scene23.addChildren(WorldInfo37)
ProtoInstance47 = ProtoInstanceObject()
ProtoInstance47.setName("myPrototype")

Scene23.addChildren(ProtoInstance47)

X3D0.setScene(Scene23)
X3D0.toFileX3D("../data/SimpleShader.new.x3d")
