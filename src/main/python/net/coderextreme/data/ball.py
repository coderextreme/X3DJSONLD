import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("EnvironmentalEffects")
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
NavigationInfo17 = x3d.NavigationInfo()
NavigationInfo17.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene16.addChildren(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setDescription("Tour Views")

Scene16.addChildren(Viewpoint18)
Background19 = x3d.Background()
Background19.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background19.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background19.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background19.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background19.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background19.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])
Background19.setSkyColor([0,0,0])
Background19.setTransparency(0)

Scene16.addChildren(Background19)
Transform20 = x3d.Transform()
Transform20.setBboxCenter([0,0,0])
Transform20.setBboxSize([-1,-1,-1])
Shape21 = x3d.Shape()
Shape21.setBboxCenter([0,0,0])
Shape21.setBboxSize([-1,-1,-1])
Sphere22 = x3d.Sphere()

Shape21.setGeometry(Sphere22)
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.setDiffuseColor([0.7,0.7,0.7])
Material24.setSpecularColor([0.5,0.5,0.5])

Appearance23.setMaterial(Material24)
ComposedCubeMapTexture25 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture25.setDEF("texture")
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture25.setBack(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture25.setBottom(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture25.setFront(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture25.setLeft(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture25.setRight(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture25.setTop(ImageTexture31)

Appearance23.setTexture(ComposedCubeMapTexture25)
#<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/contact.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/octaga.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.setLanguage("GLSL")
field33 = x3d.field()
field33.setName("chromaticDispertion")
field33.setAccessType("inputOutput")
field33.setType("SFVec3f")
field33.setValue("0.98 1 1.033")

ComposedShader32.addField(field33)
field34 = x3d.field()
field34.setName("cube")
field34.setType("SFNode")
field34.setAccessType("inputOutput")
ComposedCubeMapTexture35 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture35.setUSE("texture")

field34.addChildren(ComposedCubeMapTexture35)

ComposedShader32.addField(field34)
field36 = x3d.field()
field36.setName("bias")
field36.setAccessType("inputOutput")
field36.setType("SFFloat")
field36.setValue("0.5")

ComposedShader32.addField(field36)
field37 = x3d.field()
field37.setName("scale")
field37.setAccessType("inputOutput")
field37.setType("SFFloat")
field37.setValue("0.5")

ComposedShader32.addField(field37)
field38 = x3d.field()
field38.setName("power")
field38.setAccessType("inputOutput")
field38.setType("SFFloat")
field38.setValue("2")

ComposedShader32.addField(field38)
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x3dom.vs"])
ShaderPart39.setType("VERTEX")

ComposedShader32.addParts(ShaderPart39)
ShaderPart40 = x3d.ShaderPart()
ShaderPart40.setDEF("common")
ShaderPart40.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart40.setType("FRAGMENT")

ComposedShader32.addParts(ShaderPart40)

Appearance23.addShaders(ComposedShader32)
ComposedShader41 = x3d.ComposedShader()
ComposedShader41.setLanguage("GLSL")
field42 = x3d.field()
field42.setName("chromaticDispertion")
field42.setAccessType("initializeOnly")
field42.setType("SFVec3f")
field42.setValue("0.98 1 1.033")

ComposedShader41.addField(field42)
field43 = x3d.field()
field43.setName("cube")
field43.setType("SFNode")
field43.setAccessType("initializeOnly")
ComposedCubeMapTexture44 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture44.setUSE("texture")

field43.addChildren(ComposedCubeMapTexture44)

ComposedShader41.addField(field43)
field45 = x3d.field()
field45.setName("bias")
field45.setAccessType("initializeOnly")
field45.setType("SFFloat")
field45.setValue("0.5")

ComposedShader41.addField(field45)
field46 = x3d.field()
field46.setName("scale")
field46.setAccessType("initializeOnly")
field46.setType("SFFloat")
field46.setValue("0.5")

ComposedShader41.addField(field46)
field47 = x3d.field()
field47.setName("power")
field47.setAccessType("initializeOnly")
field47.setType("SFFloat")
field47.setValue("2")

ComposedShader41.addField(field47)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart48.setType("VERTEX")

ComposedShader41.addParts(ShaderPart48)
ShaderPart49 = x3d.ShaderPart()
ShaderPart49.setUSE("common")

ComposedShader41.addParts(ShaderPart49)

Appearance23.addShaders(ComposedShader41)

Shape21.setAppearance(Appearance23)

Transform20.addChildren(Shape21)

Scene16.addChildren(Transform20)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/ball_RoundTrip.x3d")
