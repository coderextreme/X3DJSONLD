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
meta11 = x3d.meta()
meta11.setName("title")
meta11.setContent("flowers7.x3d")

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
meta14.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("description")
meta15.setContent("a flower")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
NavigationInfo17 = x3d.NavigationInfo()

Scene16.addChildren(NavigationInfo17)
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background18 = x3d.Background()
Background18.setDEF("background")
Background18.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])
Background18.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])
Background18.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])
Background18.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])
Background18.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

Scene16.addChildren(Background18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.setPosition([0,0,40])
Viewpoint19.setDescription("Transparent rose")

Scene16.addChildren(Viewpoint19)
Transform20 = x3d.Transform()
Shape21 = x3d.Shape()
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDiffuseColor([0.7,0.7,0.7])
Material23.setSpecularColor([0.5,0.5,0.5])

Appearance22.setMaterial(Material23)
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture24.setDEF("texture")
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setDEF("backShader")
ImageTexture25.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture24.setBackTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setDEF("bottomShader")
ImageTexture26.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture24.setBottomTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setDEF("frontShader")
ImageTexture27.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture24.setFrontTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setDEF("leftShader")
ImageTexture28.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture24.setLeftTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setDEF("rightShader")
ImageTexture29.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture24.setRightTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setDEF("topShader")
ImageTexture30.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture24.setTopTexture(ImageTexture30)

Appearance22.setTexture(ComposedCubeMapTexture24)
#<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.setDEF("x_ite")
ComposedShader31.setLanguage("GLSL")
field32 = x3d.field()
field32.setName("cube")
field32.setType("SFNode")
field32.setAccessType("inputOutput")
ComposedCubeMapTexture33 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture33.setUSE("texture")

field32.addChildren(ComposedCubeMapTexture33)

ComposedShader31.addField(field32)
field34 = x3d.field()
field34.setName("chromaticDispertion")
field34.setAccessType("initializeOnly")
field34.setType("SFVec3f")
field34.setValue("0.98 1 1.033")

ComposedShader31.addField(field34)
field35 = x3d.field()
field35.setName("bias")
field35.setType("SFFloat")
field35.setAccessType("inputOnly")
field35.setValue("0.5")

ComposedShader31.addField(field35)
field36 = x3d.field()
field36.setName("scale")
field36.setType("SFFloat")
field36.setAccessType("inputOnly")
field36.setValue("0.5")

ComposedShader31.addField(field36)
field37 = x3d.field()
field37.setName("power")
field37.setType("SFFloat")
field37.setAccessType("inputOnly")
field37.setValue("2")

ComposedShader31.addField(field37)
field38 = x3d.field()
field38.setName("a")
field38.setType("SFFloat")
field38.setAccessType("inputOnly")
field38.setValue("10")

ComposedShader31.addField(field38)
field39 = x3d.field()
field39.setName("b")
field39.setType("SFFloat")
field39.setAccessType("inputOnly")
field39.setValue("1")

ComposedShader31.addField(field39)
field40 = x3d.field()
field40.setName("c")
field40.setType("SFFloat")
field40.setAccessType("inputOnly")
field40.setValue("20")

ComposedShader31.addField(field40)
field41 = x3d.field()
field41.setName("d")
field41.setType("SFFloat")
field41.setAccessType("inputOnly")
field41.setValue("20")

ComposedShader31.addField(field41)
field42 = x3d.field()
field42.setName("tdelta")
field42.setType("SFFloat")
field42.setAccessType("inputOnly")
field42.setValue("0")

ComposedShader31.addField(field42)
field43 = x3d.field()
field43.setName("pdelta")
field43.setType("SFFloat")
field43.setAccessType("inputOnly")
field43.setValue("0")

ComposedShader31.addField(field43)
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart44.setType("VERTEX")

ComposedShader31.addParts(ShaderPart44)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart45.setType("FRAGMENT")

ComposedShader31.addParts(ShaderPart45)

Appearance22.addShaders(ComposedShader31)

Shape21.setAppearance(Appearance22)
Sphere46 = x3d.Sphere()

Shape21.setGeometry(Sphere46)

Transform20.addChild(Shape21)

Scene16.addChildren(Transform20)
Script47 = x3d.Script()
Script47.setDEF("UrlSelector")
Script47.setDirectOutput(True)
field48 = x3d.field()
field48.setName("frontUrls")
field48.setType("MFString")
field48.setAccessType("initializeOnly")
field48.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script47.addField(field48)
field49 = x3d.field()
field49.setName("backUrls")
field49.setType("MFString")
field49.setAccessType("initializeOnly")
field49.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script47.addField(field49)
field50 = x3d.field()
field50.setName("leftUrls")
field50.setType("MFString")
field50.setAccessType("initializeOnly")
field50.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script47.addField(field50)
field51 = x3d.field()
field51.setName("rightUrls")
field51.setType("MFString")
field51.setAccessType("initializeOnly")
field51.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script47.addField(field51)
field52 = x3d.field()
field52.setName("topUrls")
field52.setType("MFString")
field52.setAccessType("initializeOnly")
field52.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script47.addField(field52)
field53 = x3d.field()
field53.setName("bottomUrls")
field53.setType("MFString")
field53.setAccessType("initializeOnly")
field53.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script47.addField(field53)
field54 = x3d.field()
field54.setName("front")
field54.setType("MFString")
field54.setAccessType("inputOutput")

Script47.addField(field54)
field55 = x3d.field()
field55.setName("back")
field55.setType("MFString")
field55.setAccessType("inputOutput")

Script47.addField(field55)
field56 = x3d.field()
field56.setName("left")
field56.setType("MFString")
field56.setAccessType("inputOutput")

Script47.addField(field56)
field57 = x3d.field()
field57.setName("right")
field57.setType("MFString")
field57.setAccessType("inputOutput")

Script47.addField(field57)
field58 = x3d.field()
field58.setName("top")
field58.setType("MFString")
field58.setAccessType("inputOutput")

Script47.addField(field58)
field59 = x3d.field()
field59.setName("bottom")
field59.setType("MFString")
field59.setAccessType("inputOutput")

Script47.addField(field59)
field60 = x3d.field()
field60.setName("set_fraction")
field60.setType("SFFloat")
field60.setAccessType("inputOnly")

Script47.addField(field60)
field61 = x3d.field()
field61.setName("old")
field61.setType("SFInt32")
field61.setAccessType("inputOutput")
field61.setValue("-1")

Script47.addField(field61)

Script47.setSourceCode('''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front[0] = frontUrls[side];\n"+
"                    back[0] = backUrls[side];\n"+
"                    left[0] = leftUrls[side];\n"+
"                    right[0] = rightUrls[side];\n"+
"                    top[0] = topUrls[side];\n"+
"                    bottom[0] = bottomUrls[side];\n"+
"            }\n"+
"        }''')

Scene16.addChildren(Script47)
#<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script62 = x3d.Script()
Script62.setDEF("Animate")
Script62.setDirectOutput(True)
field63 = x3d.field()
field63.setName("set_fraction")
field63.setType("SFFloat")
field63.setAccessType("inputOnly")

Script62.addField(field63)
field64 = x3d.field()
field64.setName("a")
field64.setType("SFFloat")
field64.setAccessType("inputOutput")
field64.setValue("10")

Script62.addField(field64)
field65 = x3d.field()
field65.setName("b")
field65.setType("SFFloat")
field65.setAccessType("inputOutput")
field65.setValue("1")

Script62.addField(field65)
field66 = x3d.field()
field66.setName("c")
field66.setType("SFFloat")
field66.setAccessType("inputOutput")
field66.setValue("20")

Script62.addField(field66)
field67 = x3d.field()
field67.setName("d")
field67.setType("SFFloat")
field67.setAccessType("inputOutput")
field67.setValue("20")

Script62.addField(field67)
field68 = x3d.field()
field68.setName("tdelta")
field68.setType("SFFloat")
field68.setAccessType("inputOutput")
field68.setValue("0")

Script62.addField(field68)
field69 = x3d.field()
field69.setName("pdelta")
field69.setType("SFFloat")
field69.setAccessType("inputOutput")
field69.setValue("0")

Script62.addField(field69)

Script62.setSourceCode('''ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	tdelta = tdelta + 0.5;\n"+
"	pdelta = pdelta + 0.5;\n"+
"	if (a < 1) {\n"+
"		a = 10;\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		b = 10;\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		d = 4;\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		d = 4;\n"+
"	}\n"+
"}''')

Scene16.addChildren(Script62)
TimeSensor70 = x3d.TimeSensor()
TimeSensor70.setDEF("TourTime")
TimeSensor70.setCycleInterval(5)
TimeSensor70.setLoop(True)

Scene16.addChildren(TimeSensor70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromNode("TourTime")
ROUTE71.setFromField("fraction_changed")
ROUTE71.setToNode("Animate")
ROUTE71.setToField("set_fraction")

Scene16.addChildren(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromNode("Animate")
ROUTE72.setFromField("a")
ROUTE72.setToNode("x_ite")
ROUTE72.setToField("a")

Scene16.addChildren(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromNode("Animate")
ROUTE73.setFromField("b")
ROUTE73.setToNode("x_ite")
ROUTE73.setToField("b")

Scene16.addChildren(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromNode("Animate")
ROUTE74.setFromField("c")
ROUTE74.setToNode("x_ite")
ROUTE74.setToField("c")

Scene16.addChildren(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromNode("Animate")
ROUTE75.setFromField("d")
ROUTE75.setToNode("x_ite")
ROUTE75.setToField("d")

Scene16.addChildren(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromNode("Animate")
ROUTE76.setFromField("pdelta")
ROUTE76.setToNode("x_ite")
ROUTE76.setToField("pdelta")

Scene16.addChildren(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("Animate")
ROUTE77.setFromField("tdelta")
ROUTE77.setToNode("x_ite")
ROUTE77.setToField("tdelta")

Scene16.addChildren(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("Animate")
ROUTE78.setFromField("a")
ROUTE78.setToNode("x3dom")
ROUTE78.setToField("a")

Scene16.addChildren(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("Animate")
ROUTE79.setFromField("b")
ROUTE79.setToNode("x3dom")
ROUTE79.setToField("b")

Scene16.addChildren(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("Animate")
ROUTE80.setFromField("c")
ROUTE80.setToNode("x3dom")
ROUTE80.setToField("c")

Scene16.addChildren(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromNode("Animate")
ROUTE81.setFromField("d")
ROUTE81.setToNode("x3dom")
ROUTE81.setToField("d")

Scene16.addChildren(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromNode("Animate")
ROUTE82.setFromField("pdelta")
ROUTE82.setToNode("x3dom")
ROUTE82.setToField("pdelta")

Scene16.addChildren(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromNode("Animate")
ROUTE83.setFromField("tdelta")
ROUTE83.setToNode("x3dom")
ROUTE83.setToField("tdelta")

Scene16.addChildren(ROUTE83)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../personal/flowers7.new.python.x3d")
X3D0.toFileJSON("../personal/flowers7.new.python.json")
