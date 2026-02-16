import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("EnvironmentalEffects")
component2.setLevel(3)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("Shaders")
component3.setLevel(1)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("CubeMapTexturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Texturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Rendering")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Core")
component8.setLevel(1)

head1.addComponent(component8)
meta9 = x3d.meta()
meta9.setName("title")
meta9.setContent("ball.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("creator")
meta10.setContent("John Carlson")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("generator")
meta11.setContent("manual")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("description")
meta13.setContent("a prismatic sphere")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.setTitle("ball.x3d")

Scene14.addChild(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene14.addChild(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setDescription("Tour Views")
Viewpoint17.setPosition(x3d.doubleToFloat([0,0,12]))

Scene14.addChild(Viewpoint17)
Background18 = x3d.Background()
Background18.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background18.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene14.addChild(Background18)
Transform19 = x3d.Transform()
Shape20 = x3d.Shape()
Sphere21 = x3d.Sphere()

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material23.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance22.setMaterial(Material23)
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture24.setDEF("texture")
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture24.setBackTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture24.setBottomTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture24.setFrontTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture24.setLeftTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture24.setRightTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture24.setTopTexture(ImageTexture30)

Appearance22.setTexture(ComposedCubeMapTexture24)

Appearance22.addComments(x3d.CommentsBlock("""<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs'>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='power' accessType='initializeOnly' type='SFFloat' value='2'/>"""))

Appearance22.addComments(x3d.CommentsBlock("""</ShaderProgram>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/>"""))

Appearance22.addComments(x3d.CommentsBlock("""</ProgramShader>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ComposedShader language='GLSL'>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='cube' type='SFNode' accessType=\"inputOutput\">"""))

Appearance22.addComments(x3d.CommentsBlock("""<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"""))

Appearance22.addComments(x3d.CommentsBlock("""</field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart DEF='commonfs' url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' type='FRAGMENT'></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""</ComposedShader>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ComposedShader language='GLSL'>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\">"""))

Appearance22.addComments(x3d.CommentsBlock("""<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"""))

Appearance22.addComments(x3d.CommentsBlock("""</field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"'></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart USE='commonfs'></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""</ComposedShader>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ComposedShader language='GLSL'>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='cube' type='SFNode' accessType=\"inputOutput\">"""))

Appearance22.addComments(x3d.CommentsBlock("""<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"""))

Appearance22.addComments(x3d.CommentsBlock("""</field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"'></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart USE='commonfs'></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""</ComposedShader>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ComposedShader language='GLSL'>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"'></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart USE='commonfs'></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""</ComposedShader>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ComposedShader language='GLSL'>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='cube' type='SFNode' accessType=\"inputOutput\">"""))

Appearance22.addComments(x3d.CommentsBlock("""<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"""))

Appearance22.addComments(x3d.CommentsBlock("""</field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"'></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""<ShaderPart USE=\"commonfs\"></ShaderPart>"""))

Appearance22.addComments(x3d.CommentsBlock("""</ComposedShader>"""))
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.setLanguage("GLSL")
field32 = x3d.field()
field32.setName("chromaticDispertion")
field32.setAccessType("initializeOnly")
field32.setType("SFVec3f")
field32.setValue("0.98 1 1.033")

ComposedShader31.addField(field32)
field33 = x3d.field()
field33.setName("cube")
field33.setType("SFNode")
field33.setAccessType("initializeOnly")
ComposedCubeMapTexture34 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture34.setUSE("texture")

field33.addChild(ComposedCubeMapTexture34)

ComposedShader31.addField(field33)
field35 = x3d.field()
field35.setName("bias")
field35.setAccessType("initializeOnly")
field35.setType("SFFloat")
field35.setValue("0.5")

ComposedShader31.addField(field35)
field36 = x3d.field()
field36.setName("scale")
field36.setAccessType("initializeOnly")
field36.setType("SFFloat")
field36.setValue("0.5")

ComposedShader31.addField(field36)
field37 = x3d.field()
field37.setName("power")
field37.setAccessType("initializeOnly")
field37.setType("SFFloat")
field37.setValue("2")

ComposedShader31.addField(field37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart38.setType("VERTEX")

ComposedShader31.addParts(ShaderPart38)
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.setDEF("commonfs")
ShaderPart39.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"])
ShaderPart39.setType("FRAGMENT")

ComposedShader31.addParts(ShaderPart39)

ComposedShader31.addComments(x3d.CommentsBlock("""<ShaderPart USE=\"commonfs\"></ShaderPart>"""))

Appearance22.addShaders(ComposedShader31)

Shape20.setAppearance(Appearance22)

Transform19.addChild(Shape20)

Scene14.addChild(Transform19)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/ball.new.graalpy.x3d")
X3D0.toFileJSON("../data/ball.new.graalpy.x3dj")
