# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
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

Transform24 = TransformObject()
Transform24.setDEF("TR")

Shape25 = ShapeObject()

Appearance26 = AppearanceObject()

Material27 = MaterialObject()
Material27.setDiffuseColor([0.5,0.5,0.9])

Appearance26.setMaterial(Material27)
ComposedShader28 = ComposedShaderObject()
ComposedShader28.setLanguage("GLSL")

field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFVEC3F)
field29.setName("decis")
field29.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field29.setValue("0.95 0.44 0.22")

ComposedShader28.addField(field29)
ShaderPart30 = ShaderPartObject()
ShaderPart30.setType("VERTEX")


ShaderPart30.setSourceCode("\n"+
"\n"+
"#ifdef GL_ES\n"+
"  precision mediump float;\n"+
"#endif\n"+
"\n"+
"// the vertex shader is small enough we can uri it here\n"+
"// but the link also contains a 'toon.vs' for those interested\n"+
"\n"+
"    varying vec3 x3domnormal;\n"+
"    attribute vec3 normal;\n"+
"    attribute vec3 position;\n"+
"    uniform mat4 normalMatrix;\n"+
"    uniform mat4 modelViewProjectionMatrix;\n"+
"    void main()\n"+
"    {\n"+
"        x3domnormal=mat3(normalMatrix)*normal;\n"+
"        gl_Position=modelViewProjectionMatrix * vec4(position, 1.0);\n"+
"    }\n"+
"\n"+
"\n"+
"")
ComposedShader28.addParts(ShaderPart30)
ShaderPart31 = ShaderPartObject()
ShaderPart31.setType("FRAGMENT")


ShaderPart31.setSourceCode("\n"+
"\n"+
"#ifdef GL_ES\n"+
"  precision mediump float;\n"+
"#endif\n"+
"\n"+
"varying vec3 x3domnormal;\n"+
"uniform vec3 decis;\n"+
"uniform vec3 light0_Location;\n"+
"\n"+
"void main()\n"+
"{\n"+
"        float intensity;\n"+
"        vec4 color;\n"+
"        vec3 n = normalize(x3domnormal);\n"+
"\n"+
"        intensity = dot(light0_Location,n);\n"+
"\n"+
"        if (intensity > decis[0])\n"+
"                color = vec4(0.0,0.5,0.5,1.0);\n"+
"        else if (intensity > decis[1])\n"+
"                color = vec4(0.6,0.3,0.3,1.0);\n"+
"        else if (intensity > decis[2])\n"+
"                color = vec4(1.0,0.2,0.2,1.0);\n"+
"        else\n"+
"                color = vec4(0.0,0.4,0.0,1.0);\n"+
"\n"+
"        gl_FragColor = color;\n"+
"}\n"+
"\n"+
"\n"+
"")
ComposedShader28.addParts(ShaderPart31)
Appearance26.addShaders(ComposedShader28)
ComposedShader32 = ComposedShaderObject()
ComposedShader32.setLanguage("GLSL")

field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFVEC3F)
field33.setName("decis")
field33.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field33.setValue("0.95 0.44 0.22")

ComposedShader32.addField(field33)
ShaderPart34 = ShaderPartObject()
ShaderPart34.setType("VERTEX")


ShaderPart34.setSourceCode("\n"+
"\n"+
"# toon.vs\n"+
"# http://www.web3d.org/x3d/content/examples/Basic/Shaders/toon.vs\n"+
"\n"+
"// the vertex shader is small enough we can uri it here\n"+
"// but the link also contains a 'toon.vs' for those interested\n"+
"\n"+
"    varying vec3 normal;\n"+
"    void main()\n"+
"    {\n"+
"        normal=gl_NormalMatrix*gl_Normal;\n"+
"        gl_Position=ftransform();\n"+
"    }\n"+
"\n"+
"\n"+
"")
ComposedShader32.addParts(ShaderPart34)
ShaderPart35 = ShaderPartObject()
ShaderPart35.setType("FRAGMENT")


ShaderPart35.setSourceCode("\n"+
"\n"+
"# toon.fs\n"+
"# http://www.web3d.org/x3d/content/examples/Basic/Shaders/toon.fs\n"+
"varying vec3 normal;\n"+
"uniform vec3 decis;\n"+
"\n"+
"void main()\n"+
"{\n"+
"        float intensity;\n"+
"        vec4 color;\n"+
"        vec3 n = normalize(normal);\n"+
"\n"+
"        intensity = dot(vec3(gl_LightSource[0].position),n);\n"+
"\n"+
"        if (intensity > decis[0])\n"+
"                color = vec4(0.0,0.5,0.5,1.0);\n"+
"        else if (intensity > decis[1])\n"+
"                color = vec4(0.6,0.3,0.3,1.0);\n"+
"        else if (intensity > decis[2])\n"+
"                color = vec4(1.0,0.2,0.2,1.0);\n"+
"        else\n"+
"                color = vec4(0.0,0.4,0.0,1.0);\n"+
"\n"+
"        gl_FragColor = color;\n"+
"}\n"+
"\n"+
"\n"+
"")
ComposedShader32.addParts(ShaderPart35)
Appearance26.addShaders(ComposedShader32)
ComposedShader36 = ComposedShaderObject()
ComposedShader36.setDEF("Cobweb")
ComposedShader36.setLanguage("GLSL")

field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFVEC3F)
field37.setName("decis")
field37.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field37.setValue("0.95 0.77 0.44")

ComposedShader36.addField(field37)
ShaderPart38 = ShaderPartObject()
ShaderPart38.setType("VERTEX")


ShaderPart38.setSourceCode("\n"+
"                  data:text/plain;charset=utf-8,\n"+
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
"}\n"+
"\n"+
"\n"+
"")
ComposedShader36.addParts(ShaderPart38)
ShaderPart39 = ShaderPartObject()
ShaderPart39.setType("FRAGMENT")
ShaderPart39.setDEF("_1")


ShaderPart39.setSourceCode("\n"+
"                  data:text/plain;charset=utf-8,\n"+
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
"} \n"+
"\n"+
"\n"+
"")
ComposedShader36.addParts(ShaderPart39)
Appearance26.addShaders(ComposedShader36)
Shape25.setAppearance(Appearance26)
Sphere40 = SphereObject()
Sphere40.setRadius(1.75)

Shape25.setGeometry(Sphere40)
Transform24.addChild(Shape25)
Scene23.addChild(Transform24)
WorldInfo41 = WorldInfoObject()
WorldInfo41.setTitle("SimpleShader")

MetadataSet42 = MetadataSetObject()
MetadataSet42.setName("Titania")
MetadataSet42.setDEF("Titania")
MetadataSet42.setReference("http://titania.create3000.de")

MetadataSet43 = MetadataSetObject()
MetadataSet43.setName("Selection")
MetadataSet43.setDEF("Selection")
MetadataSet43.setReference("http://titania.create3000.de")

MetadataSet44 = MetadataSetObject()
MetadataSet44.setName("nodes")
MetadataSet44.setDEF("nodes")
MetadataSet44.setReference("http://titania.create3000.de")


MetadataSet44.addComments(CommentsBlock("""NULL"""))
MetadataSet43.addValue(MetadataSet44)
MetadataSet42.addValue(MetadataSet43)
MetadataSet45 = MetadataSetObject()
MetadataSet45.setName("NavigationInfo")
MetadataSet45.setDEF("NavigationInfo")
MetadataSet45.setReference("http://titania.create3000.de")

MetadataString46 = MetadataStringObject()
MetadataString46.setName("type")
MetadataString46.setDEF("type")
MetadataString46.setReference("http://titania.create3000.de")
MetadataString46.setValue(["EXAMINE"])

MetadataSet45.addValue(MetadataString46)
MetadataSet42.addValue(MetadataSet45)
MetadataSet47 = MetadataSetObject()
MetadataSet47.setName("Viewpoint")
MetadataSet47.setDEF("Viewpoint")
MetadataSet47.setReference("http://titania.create3000.de")

MetadataDouble48 = MetadataDoubleObject()
MetadataDouble48.setName("position")
MetadataDouble48.setDEF("position")
MetadataDouble48.setReference("http://titania.create3000.de")
MetadataDouble48.setValue([6.24067728185014,0.00250837343276661,2.92117542307615])

MetadataSet47.addValue(MetadataDouble48)
MetadataDouble49 = MetadataDoubleObject()
MetadataDouble49.setName("orientation")
MetadataDouble49.setDEF("orientation")
MetadataDouble49.setReference("http://titania.create3000.de")
MetadataDouble49.setValue([-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])

MetadataSet47.addValue(MetadataDouble49)
MetadataDouble50 = MetadataDoubleObject()
MetadataDouble50.setName("centerOfRotation")
MetadataDouble50.setDEF("centerOfRotation")
MetadataDouble50.setReference("http://titania.create3000.de")
MetadataDouble50.setValue([-0.808320198626341,-0.358072370409949,0.22817191560906])

MetadataSet47.addValue(MetadataDouble50)
MetadataSet42.addValue(MetadataSet47)
WorldInfo41.setMetadata(MetadataSet42)
Scene23.addChild(WorldInfo41)
X3D0.setScene(Scene23)

X3D0.toFileX3D("../data/SimpleShader.new.x3d")
