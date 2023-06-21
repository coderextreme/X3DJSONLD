from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
component2 = component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
component3 = component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = component()
component4.setName("Shaders")
component4.setLevel(1)

head1.addComponent(component4)
component5 = component()
component5.setName("CubeMapTexturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = component()
component6.setName("Texturing")
component6.setLevel(1)

head1.addComponent(component6)
component7 = component()
component7.setName("Rendering")
component7.setLevel(1)

head1.addComponent(component7)
component8 = component()
component8.setName("Shape")
component8.setLevel(4)

head1.addComponent(component8)
component9 = component()
component9.setName("Grouping")
component9.setLevel(3)

head1.addComponent(component9)
component10 = component()
component10.setName("Core")
component10.setLevel(1)

head1.addComponent(component10)
#component name='EnvironmentalEffects' level='1'></component
meta11 = meta()
meta11.setName("title")
meta11.setContent("ball.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("creator")
meta12.setContent("John Carlson")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("generator")
meta13.setContent("manual")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("identifier")
meta14.setContent("https://coderextreme.net/X3DJSONLD/ball.x3d")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("description")
meta15.setContent("a prismatic sphere")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = Scene()
WorldInfo17 = WorldInfo()
WorldInfo17.setTitle("ball.x3d")

Scene16.addChildren(WorldInfo17)
NavigationInfo18 = NavigationInfo()
NavigationInfo18.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene16.addChildren(NavigationInfo18)
Viewpoint19 = Viewpoint()
Viewpoint19.setDescription("Tour Views")

Scene16.addChildren(Viewpoint19)
Background20 = Background()
Background20.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background20.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background20.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background20.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background20.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background20.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene16.addChildren(Background20)
Transform21 = Transform()
Shape22 = Shape()
Sphere23 = Sphere()

Shape22.setGeometry(Sphere23)
Appearance24 = Appearance()
Material25 = Material()
Material25.setDiffuseColor([0.7,0.7,0.7])
Material25.setSpecularColor([0.5,0.5,0.5])

Appearance24.setMaterial(Material25)
ComposedCubeMapTexture26 = ComposedCubeMapTexture()
ComposedCubeMapTexture26.setDEF("texture")
ImageTexture27 = ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture26.setBack(ImageTexture27)
ImageTexture28 = ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture26.setBottom(ImageTexture28)
ImageTexture29 = ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture26.setFront(ImageTexture29)
ImageTexture30 = ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture26.setLeft(ImageTexture30)
ImageTexture31 = ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture26.setRight(ImageTexture31)
ImageTexture32 = ImageTexture()
ImageTexture32.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture26.setTop(ImageTexture32)

Appearance24.setTexture(ComposedCubeMapTexture26)
#<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/contact.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/octaga.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#
ComposedShader33 = ComposedShader()
ComposedShader33.setLanguage("GLSL")
field34 = field()
field34.setName("chromaticDispertion")
field34.setAccessType("inputOutput")
field34.setType("SFVec3f")
field34.setValue("0.98 1 1.033")

ComposedShader33.addField(field34)
field35 = field()
field35.setName("cube")
field35.setType("SFNode")
field35.setAccessType("inputOutput")
ComposedCubeMapTexture36 = ComposedCubeMapTexture()
ComposedCubeMapTexture36.setUSE("texture")

field35.addChildren(ComposedCubeMapTexture36)

ComposedShader33.addField(field35)
field37 = field()
field37.setName("bias")
field37.setAccessType("inputOutput")
field37.setType("SFFloat")
field37.setValue("0.5")

ComposedShader33.addField(field37)
field38 = field()
field38.setName("scale")
field38.setAccessType("inputOutput")
field38.setType("SFFloat")
field38.setValue("0.5")

ComposedShader33.addField(field38)
field39 = field()
field39.setName("power")
field39.setAccessType("inputOutput")
field39.setType("SFFloat")
field39.setValue("2")

ComposedShader33.addField(field39)
ShaderPart40 = ShaderPart()
ShaderPart40.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart40.setType("VERTEX")

ComposedShader33.addParts(ShaderPart40)
ShaderPart41 = ShaderPart()
ShaderPart41.setDEF("common")
ShaderPart41.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart41.setType("FRAGMENT")

ComposedShader33.addParts(ShaderPart41)

Appearance24.addShaders(ComposedShader33)
ComposedShader42 = ComposedShader()
ComposedShader42.setLanguage("GLSL")
field43 = field()
field43.setName("chromaticDispertion")
field43.setAccessType("initializeOnly")
field43.setType("SFVec3f")
field43.setValue("0.98 1 1.033")

ComposedShader42.addField(field43)
field44 = field()
field44.setName("cube")
field44.setType("SFNode")
field44.setAccessType("initializeOnly")
ComposedCubeMapTexture45 = ComposedCubeMapTexture()
ComposedCubeMapTexture45.setUSE("texture")

field44.addChildren(ComposedCubeMapTexture45)

ComposedShader42.addField(field44)
field46 = field()
field46.setName("bias")
field46.setAccessType("initializeOnly")
field46.setType("SFFloat")
field46.setValue("0.5")

ComposedShader42.addField(field46)
field47 = field()
field47.setName("scale")
field47.setAccessType("initializeOnly")
field47.setType("SFFloat")
field47.setValue("0.5")

ComposedShader42.addField(field47)
field48 = field()
field48.setName("power")
field48.setAccessType("initializeOnly")
field48.setType("SFFloat")
field48.setValue("2")

ComposedShader42.addField(field48)
ShaderPart49 = ShaderPart()
ShaderPart49.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart49.setType("VERTEX")

ComposedShader42.addParts(ShaderPart49)
ShaderPart50 = ShaderPart()
ShaderPart50.setUrl(["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])
ShaderPart50.setType("FRAGMENT")

ComposedShader42.addParts(ShaderPart50)

Appearance24.addShaders(ComposedShader42)

Shape22.setAppearance(Appearance24)

Transform21.addChildren(Shape22)

Scene16.addChildren(Transform21)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/ball_RoundTrip.x3d")
