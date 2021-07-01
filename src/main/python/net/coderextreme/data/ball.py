import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Shaders")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("CubeMapTexturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Texturing")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Rendering")
component7.setLevel(1)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Shape")
component8.setLevel(4)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Grouping")
component9.setLevel(3)

head1.addComponent(component9)
component10 = x3d.component()
component10.setName("Core")
component10.setLevel(1)

head1.addComponent(component10)
#component name='EnvironmentalEffects' level='1'></component
meta11 = x3d.meta()
meta11.setName("title")
meta11.setContent("ball.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("creator")
meta12.setContent("John Carlson")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("manual")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://coderextreme.net/X3DJSONLD/ball.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("description")
meta15.setContent("a prismatic sphere")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
WorldInfo17 = x3d.WorldInfo()
WorldInfo17.setTitle("ball.x3d")

Scene16.addChildren(WorldInfo17)
NavigationInfo18 = x3d.NavigationInfo()
NavigationInfo18.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene16.addChildren(NavigationInfo18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.setDescription("Tour Views")

Scene16.addChildren(Viewpoint19)
Background20 = x3d.Background()
Background20.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background20.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background20.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background20.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background20.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background20.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene16.addChildren(Background20)
Transform21 = x3d.Transform()
Shape22 = x3d.Shape()
Sphere23 = x3d.Sphere()

Shape22.setGeometry(Sphere23)
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.setDiffuseColor([0.7,0.7,0.7])
Material25.setSpecularColor([0.5,0.5,0.5])

Appearance24.setMaterial(Material25)
ComposedCubeMapTexture26 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture26.setDEF("texture")
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture26.setBackTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture26.setBottomTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture26.setFrontTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture26.setLeftTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture26.setRightTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture26.setTopTexture(ImageTexture32)

Appearance24.setTexture(ComposedCubeMapTexture26)
#<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/contact.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/octaga.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#
ComposedShader33 = x3d.ComposedShader()
ComposedShader33.setLanguage("GLSL")
field34 = x3d.field()
field34.setName("chromaticDispertion")
field34.setAccessType("inputOutput")
field34.setType("SFVec3f")
field34.setValue("0.98 1 1.033")

ComposedShader33.addField(field34)
field35 = x3d.field()
field35.setName("cube")
field35.setType("SFNode")
field35.setAccessType("inputOutput")
ComposedCubeMapTexture36 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture36.setUSE("texture")

field35.addChildren(ComposedCubeMapTexture36)

ComposedShader33.addField(field35)
field37 = x3d.field()
field37.setName("bias")
field37.setAccessType("inputOutput")
field37.setType("SFFloat")
field37.setValue("0.5")

ComposedShader33.addField(field37)
field38 = x3d.field()
field38.setName("scale")
field38.setAccessType("inputOutput")
field38.setType("SFFloat")
field38.setValue("0.5")

ComposedShader33.addField(field38)
field39 = x3d.field()
field39.setName("power")
field39.setAccessType("inputOutput")
field39.setType("SFFloat")
field39.setValue("2")

ComposedShader33.addField(field39)
ShaderPart40 = x3d.ShaderPart()
ShaderPart40.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x3dom.vs"])
ShaderPart40.setType("VERTEX")

ComposedShader33.addParts(ShaderPart40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.setDEF("common")
ShaderPart41.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart41.setType("FRAGMENT")

ComposedShader33.addParts(ShaderPart41)

Appearance24.addShaders(ComposedShader33)
ComposedShader42 = x3d.ComposedShader()
ComposedShader42.setLanguage("GLSL")
field43 = x3d.field()
field43.setName("chromaticDispertion")
field43.setAccessType("initializeOnly")
field43.setType("SFVec3f")
field43.setValue("0.98 1 1.033")

ComposedShader42.addField(field43)
field44 = x3d.field()
field44.setName("cube")
field44.setType("SFNode")
field44.setAccessType("initializeOnly")
ComposedCubeMapTexture45 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture45.setUSE("texture")

field44.addChildren(ComposedCubeMapTexture45)

ComposedShader42.addField(field44)
field46 = x3d.field()
field46.setName("bias")
field46.setAccessType("initializeOnly")
field46.setType("SFFloat")
field46.setValue("0.5")

ComposedShader42.addField(field46)
field47 = x3d.field()
field47.setName("scale")
field47.setAccessType("initializeOnly")
field47.setType("SFFloat")
field47.setValue("0.5")

ComposedShader42.addField(field47)
field48 = x3d.field()
field48.setName("power")
field48.setAccessType("initializeOnly")
field48.setType("SFFloat")
field48.setValue("2")

ComposedShader42.addField(field48)
ShaderPart49 = x3d.ShaderPart()
ShaderPart49.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart49.setType("VERTEX")

ComposedShader42.addParts(ShaderPart49)
ShaderPart50 = x3d.ShaderPart()
ShaderPart50.setUSE("common")

ComposedShader42.addParts(ShaderPart50)

Appearance24.addShaders(ComposedShader42)

Shape22.setAppearance(Appearance24)

Transform21.addChildren(Shape22)

Scene16.addChildren(Transform21)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/ball_RoundTrip.x3d")
