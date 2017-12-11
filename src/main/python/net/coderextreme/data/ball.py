# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

component2 = componentObject()
component2.setName("EnvironmentalEffects")
component2.setLevel(1)

head1.addComponent(component2)
component3 = componentObject()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = componentObject()
component4.setName("Shaders")
component4.setLevel(1)

head1.addComponent(component4)
component5 = componentObject()
component5.setName("CubeMapTexturing")
component5.setLevel(1)

head1.addComponent(component5)
meta6 = metaObject()
meta6.setName("title")
meta6.setContent("ball.x3d")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("creator")
meta7.setContent("John Carlson")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("generator")
meta8.setContent("manual")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("identifier")
meta9.setContent("https://coderextreme.net/X3DJSONLD/ball.x3d")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("description")
meta10.setContent("a prismatic sphere")

head1.addMeta(meta10)
X3D0.setHead(head1)
Scene11 = SceneObject()

NavigationInfo12 = NavigationInfoObject()
NavigationInfo12.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene11.addChild(NavigationInfo12)
Viewpoint13 = ViewpointObject()
Viewpoint13.setDescription("Tour Views")

Scene11.addChild(Viewpoint13)
Background14 = BackgroundObject()
Background14.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background14.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background14.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background14.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background14.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background14.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene11.addChild(Background14)
Transform15 = TransformObject()

Shape16 = ShapeObject()

Sphere17 = SphereObject()

Shape16.setGeometry(Sphere17)
Appearance18 = AppearanceObject()

Material19 = MaterialObject()
Material19.setDiffuseColor([0.7,0.7,0.7])
Material19.setSpecularColor([0.5,0.5,0.5])

Appearance18.setMaterial(Material19)
ComposedCubeMapTexture20 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture20.setDEF("texture")

ImageTexture21 = ImageTextureObject()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture20.setBack(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture20.setBottom(ImageTexture22)
ImageTexture23 = ImageTextureObject()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture20.setFront(ImageTexture23)
ImageTexture24 = ImageTextureObject()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture20.setLeft(ImageTexture24)
ImageTexture25 = ImageTextureObject()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture20.setRight(ImageTexture25)
ImageTexture26 = ImageTextureObject()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture20.setTop(ImageTexture26)
Appearance18.setTexture(ComposedCubeMapTexture20)

Appearance18.addComments(CommentsBlock("""<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>"""))

Appearance18.addComments(CommentsBlock("""<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/contact.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>"""))

Appearance18.addComments(CommentsBlock("""<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/octaga.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>"""))

Appearance18.addComments(CommentsBlock("""<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>"""))

Appearance18.addComments(CommentsBlock(""""""))
ComposedShader27 = ComposedShaderObject()
ComposedShader27.setLanguage("GLSL")

field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFVEC3F)
field28.setName("chromaticDispertion")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("0.98 1 1.033")

ComposedShader27.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFNODE)
field29.setName("cube")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture30 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture30.setUSE("texture")

field29.addChild(ComposedCubeMapTexture30)
ComposedShader27.addField(field29)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("bias")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("0.5")

ComposedShader27.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("scale")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("0.5")

ComposedShader27.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFFLOAT)
field33.setName("power")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("2")

ComposedShader27.addField(field33)
ShaderPart34 = ShaderPartObject()
ShaderPart34.setType("VERTEX")
ShaderPart34.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])

ComposedShader27.addParts(ShaderPart34)
ShaderPart35 = ShaderPartObject()
ShaderPart35.setType("FRAGMENT")
ShaderPart35.setDEF("common")
ShaderPart35.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/shaders/common.fs"])

ComposedShader27.addParts(ShaderPart35)
Appearance18.addShaders(ComposedShader27)
ComposedShader36 = ComposedShaderObject()
ComposedShader36.setLanguage("GLSL")

field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFVEC3F)
field37.setName("chromaticDispertion")
field37.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field37.setValue("0.98 1 1.033")

ComposedShader36.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFNODE)
field38.setName("cube")
field38.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ComposedCubeMapTexture39 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture39.setUSE("texture")

field38.addChild(ComposedCubeMapTexture39)
ComposedShader36.addField(field38)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFFLOAT)
field40.setName("bias")
field40.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field40.setValue("0.5")

ComposedShader36.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFFLOAT)
field41.setName("scale")
field41.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field41.setValue("0.5")

ComposedShader36.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFFLOAT)
field42.setName("power")
field42.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field42.setValue("2")

ComposedShader36.addField(field42)
ShaderPart43 = ShaderPartObject()
ShaderPart43.setType("VERTEX")
ShaderPart43.setUrl(["../shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])

ComposedShader36.addParts(ShaderPart43)
ShaderPart44 = ShaderPartObject()
ShaderPart44.setUSE("common")

ComposedShader36.addParts(ShaderPart44)
Appearance18.addShaders(ComposedShader36)
Shape16.setAppearance(Appearance18)
Transform15.addChild(Shape16)
Scene11.addChild(Transform15)
X3D0.setScene(Scene11)

X3D0.toFileX3D("../data/ball.new.x3d")
