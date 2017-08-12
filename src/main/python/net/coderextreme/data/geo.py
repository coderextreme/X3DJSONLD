# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("geo.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/geo.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("a sphere")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()
NavigationInfo8.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = ViewpointObject()
Viewpoint9.setDEF("Tour")
Viewpoint9.setDescription("Tour Views")

Scene7.addChild(Viewpoint9)

Scene7.addComments(CommentsBlock("Viewpoint position='0 0 4' description='sphere in road'/"))
Background10 = BackgroundObject()
Background10.setBackUrl(["resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"])
Background10.setBottomUrl(["resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"])
Background10.setFrontUrl(["resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"])
Background10.setLeftUrl(["resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"])
Background10.setRightUrl(["resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"])
Background10.setTopUrl(["resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])

Scene7.addChild(Background10)
Transform11 = TransformObject()

Shape12 = ShapeObject()

Sphere13 = SphereObject()

Shape12.setGeometry(Sphere13)
Appearance14 = AppearanceObject()

Material15 = MaterialObject()
Material15.setDiffuseColor([0.7,0.7,0.7])
Material15.setSpecularColor([0.5,0.5,0.5])

Appearance14.setMaterial(Material15)
ComposedCubeMapTexture16 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture16.setDEF("texture")

ImageTexture17 = ImageTextureObject()
ImageTexture17.setUrl(["resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"])

ComposedCubeMapTexture16.setBack(ImageTexture17)
ImageTexture18 = ImageTextureObject()
ImageTexture18.setUrl(["resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"])

ComposedCubeMapTexture16.setBottom(ImageTexture18)
ImageTexture19 = ImageTextureObject()
ImageTexture19.setUrl(["resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"])

ComposedCubeMapTexture16.setFront(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setUrl(["resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"])

ComposedCubeMapTexture16.setLeft(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setUrl(["resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"])

ComposedCubeMapTexture16.setRight(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setUrl(["resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])

ComposedCubeMapTexture16.setTop(ImageTexture22)
Appearance14.setTexture(ComposedCubeMapTexture16)
ComposedShader23 = ComposedShaderObject()
ComposedShader23.setLanguage("GLSL")

field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFVEC3F)
field24.setName("chromaticDispertion")
field24.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field24.setValue("0.98 1 1.033")

ComposedShader23.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFNODE)
field25.setName("cube")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture26 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture26.setUSE("texture")

field25.addChild(ComposedCubeMapTexture26)
ComposedShader23.addField(field25)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFFLOAT)
field27.setName("bias")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field27.setValue("0.5")

ComposedShader23.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFFLOAT)
field28.setName("scale")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("0.5")

ComposedShader23.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFFLOAT)
field29.setName("power")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("2")

ComposedShader23.addField(field29)
ShaderPart30 = ShaderPartObject()
ShaderPart30.setType("VERTEX")
ShaderPart30.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])

ComposedShader23.addParts(ShaderPart30)
ShaderPart31 = ShaderPartObject()
ShaderPart31.setType("FRAGMENT")
ShaderPart31.setDEF("common")
ShaderPart31.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/shaders/common.fs"])

ComposedShader23.addParts(ShaderPart31)
Appearance14.addShaders(ComposedShader23)
ComposedShader32 = ComposedShaderObject()
ComposedShader32.setLanguage("GLSL")

field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFVEC3F)
field33.setName("chromaticDispertion")
field33.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field33.setValue("0.98 1 1.033")

ComposedShader32.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFNODE)
field34.setName("cube")
field34.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ComposedCubeMapTexture35 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture35.setUSE("texture")

field34.addChild(ComposedCubeMapTexture35)
ComposedShader32.addField(field34)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFFLOAT)
field36.setName("bias")
field36.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field36.setValue("0.5")

ComposedShader32.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFFLOAT)
field37.setName("scale")
field37.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field37.setValue("0.5")

ComposedShader32.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFFLOAT)
field38.setName("power")
field38.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field38.setValue("2")

ComposedShader32.addField(field38)
ShaderPart39 = ShaderPartObject()
ShaderPart39.setType("VERTEX")
ShaderPart39.setUrl(["../shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])

ComposedShader32.addParts(ShaderPart39)
ShaderPart40 = ShaderPartObject()
ShaderPart40.setUSE("common")

ComposedShader32.addParts(ShaderPart40)
Appearance14.addShaders(ComposedShader32)
Shape12.setAppearance(Appearance14)
Transform11.addChild(Shape12)
Scene7.addChild(Transform11)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/geo.new.x3d")
