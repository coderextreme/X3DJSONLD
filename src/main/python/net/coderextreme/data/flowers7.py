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
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.setDEF("x3dom")
ComposedShader31.setLanguage("GLSL")
#TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>
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
field35.setAccessType("inputOutput")
field35.setValue("0.5")

ComposedShader31.addField(field35)
field36 = x3d.field()
field36.setName("scale")
field36.setType("SFFloat")
field36.setAccessType("inputOutput")
field36.setValue("0.5")

ComposedShader31.addField(field36)
field37 = x3d.field()
field37.setName("power")
field37.setType("SFFloat")
field37.setAccessType("inputOutput")
field37.setValue("2")

ComposedShader31.addField(field37)
field38 = x3d.field()
field38.setName("a")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("10")

ComposedShader31.addField(field38)
field39 = x3d.field()
field39.setName("b")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("1")

ComposedShader31.addField(field39)
field40 = x3d.field()
field40.setName("c")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("20")

ComposedShader31.addField(field40)
field41 = x3d.field()
field41.setName("d")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("20")

ComposedShader31.addField(field41)
field42 = x3d.field()
field42.setName("tdelta")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("0")

ComposedShader31.addField(field42)
field43 = x3d.field()
field43.setName("pdelta")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("0")

ComposedShader31.addField(field43)
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])
ShaderPart44.setType("VERTEX")

ComposedShader31.addParts(ShaderPart44)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart45.setType("FRAGMENT")

ComposedShader31.addParts(ShaderPart45)

Appearance22.addShaders(ComposedShader31)
ComposedShader46 = x3d.ComposedShader()
ComposedShader46.setDEF("x_ite")
ComposedShader46.setLanguage("GLSL")
field47 = x3d.field()
field47.setName("cube")
field47.setType("SFNode")
field47.setAccessType("inputOutput")
ComposedCubeMapTexture48 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture48.setUSE("texture")

field47.addChildren(ComposedCubeMapTexture48)

ComposedShader46.addField(field47)
field49 = x3d.field()
field49.setName("chromaticDispertion")
field49.setAccessType("initializeOnly")
field49.setType("SFVec3f")
field49.setValue("0.98 1 1.033")

ComposedShader46.addField(field49)
field50 = x3d.field()
field50.setName("bias")
field50.setType("SFFloat")
field50.setAccessType("inputOnly")
field50.setValue("0.5")

ComposedShader46.addField(field50)
field51 = x3d.field()
field51.setName("scale")
field51.setType("SFFloat")
field51.setAccessType("inputOnly")
field51.setValue("0.5")

ComposedShader46.addField(field51)
field52 = x3d.field()
field52.setName("power")
field52.setType("SFFloat")
field52.setAccessType("inputOnly")
field52.setValue("2")

ComposedShader46.addField(field52)
field53 = x3d.field()
field53.setName("a")
field53.setType("SFFloat")
field53.setAccessType("inputOnly")
field53.setValue("10")

ComposedShader46.addField(field53)
field54 = x3d.field()
field54.setName("b")
field54.setType("SFFloat")
field54.setAccessType("inputOnly")
field54.setValue("1")

ComposedShader46.addField(field54)
field55 = x3d.field()
field55.setName("c")
field55.setType("SFFloat")
field55.setAccessType("inputOnly")
field55.setValue("20")

ComposedShader46.addField(field55)
field56 = x3d.field()
field56.setName("d")
field56.setType("SFFloat")
field56.setAccessType("inputOnly")
field56.setValue("20")

ComposedShader46.addField(field56)
field57 = x3d.field()
field57.setName("tdelta")
field57.setType("SFFloat")
field57.setAccessType("inputOnly")
field57.setValue("0")

ComposedShader46.addField(field57)
field58 = x3d.field()
field58.setName("pdelta")
field58.setType("SFFloat")
field58.setAccessType("inputOnly")
field58.setValue("0")

ComposedShader46.addField(field58)
ShaderPart59 = x3d.ShaderPart()
ShaderPart59.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart59.setType("VERTEX")

ComposedShader46.addParts(ShaderPart59)
ShaderPart60 = x3d.ShaderPart()
ShaderPart60.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart60.setType("FRAGMENT")

ComposedShader46.addParts(ShaderPart60)

Appearance22.addShaders(ComposedShader46)

Shape21.setAppearance(Appearance22)
Sphere61 = x3d.Sphere()

Shape21.setGeometry(Sphere61)

Transform20.addChild(Shape21)

Scene16.addChildren(Transform20)
Script62 = x3d.Script()
Script62.setDEF("UrlSelector")
Script62.setDirectOutput(True)
field63 = x3d.field()
field63.setName("frontUrls")
field63.setType("MFString")
field63.setAccessType("initializeOnly")
field63.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script62.addField(field63)
field64 = x3d.field()
field64.setName("backUrls")
field64.setType("MFString")
field64.setAccessType("initializeOnly")
field64.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script62.addField(field64)
field65 = x3d.field()
field65.setName("leftUrls")
field65.setType("MFString")
field65.setAccessType("initializeOnly")
field65.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script62.addField(field65)
field66 = x3d.field()
field66.setName("rightUrls")
field66.setType("MFString")
field66.setAccessType("initializeOnly")
field66.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script62.addField(field66)
field67 = x3d.field()
field67.setName("topUrls")
field67.setType("MFString")
field67.setAccessType("initializeOnly")
field67.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script62.addField(field67)
field68 = x3d.field()
field68.setName("bottomUrls")
field68.setType("MFString")
field68.setAccessType("initializeOnly")
field68.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script62.addField(field68)
field69 = x3d.field()
field69.setName("front")
field69.setType("MFString")
field69.setAccessType("inputOutput")

Script62.addField(field69)
field70 = x3d.field()
field70.setName("back")
field70.setType("MFString")
field70.setAccessType("inputOutput")

Script62.addField(field70)
field71 = x3d.field()
field71.setName("left")
field71.setType("MFString")
field71.setAccessType("inputOutput")

Script62.addField(field71)
field72 = x3d.field()
field72.setName("right")
field72.setType("MFString")
field72.setAccessType("inputOutput")

Script62.addField(field72)
field73 = x3d.field()
field73.setName("top")
field73.setType("MFString")
field73.setAccessType("inputOutput")

Script62.addField(field73)
field74 = x3d.field()
field74.setName("bottom")
field74.setType("MFString")
field74.setAccessType("inputOutput")

Script62.addField(field74)
field75 = x3d.field()
field75.setName("set_fraction")
field75.setType("SFFloat")
field75.setAccessType("inputOnly")

Script62.addField(field75)
field76 = x3d.field()
field76.setName("old")
field76.setType("SFInt32")
field76.setAccessType("inputOutput")
field76.setValue("-1")

Script62.addField(field76)

Script62.setSourceCode('''ecmascript:\n"+
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

Scene16.addChildren(Script62)
#<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script77 = x3d.Script()
Script77.setDEF("Animate")
Script77.setDirectOutput(True)
field78 = x3d.field()
field78.setName("set_fraction")
field78.setType("SFFloat")
field78.setAccessType("inputOnly")

Script77.addField(field78)
field79 = x3d.field()
field79.setName("a")
field79.setType("SFFloat")
field79.setAccessType("inputOutput")
field79.setValue("10")

Script77.addField(field79)
field80 = x3d.field()
field80.setName("b")
field80.setType("SFFloat")
field80.setAccessType("inputOutput")
field80.setValue("1")

Script77.addField(field80)
field81 = x3d.field()
field81.setName("c")
field81.setType("SFFloat")
field81.setAccessType("inputOutput")
field81.setValue("20")

Script77.addField(field81)
field82 = x3d.field()
field82.setName("d")
field82.setType("SFFloat")
field82.setAccessType("inputOutput")
field82.setValue("20")

Script77.addField(field82)
field83 = x3d.field()
field83.setName("tdelta")
field83.setType("SFFloat")
field83.setAccessType("inputOutput")
field83.setValue("0")

Script77.addField(field83)
field84 = x3d.field()
field84.setName("pdelta")
field84.setType("SFFloat")
field84.setAccessType("inputOutput")
field84.setValue("0")

Script77.addField(field84)

Script77.setSourceCode('''ecmascript:\n"+
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

Scene16.addChildren(Script77)
TimeSensor85 = x3d.TimeSensor()
TimeSensor85.setDEF("TourTime")
TimeSensor85.setCycleInterval(5)
TimeSensor85.setLoop(True)

Scene16.addChildren(TimeSensor85)
ROUTE86 = x3d.ROUTE()
ROUTE86.setFromNode("TourTime")
ROUTE86.setFromField("fraction_changed")
ROUTE86.setToNode("Animate")
ROUTE86.setToField("set_fraction")

Scene16.addChildren(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.setFromNode("Animate")
ROUTE87.setFromField("a")
ROUTE87.setToNode("x_ite")
ROUTE87.setToField("a")

Scene16.addChildren(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.setFromNode("Animate")
ROUTE88.setFromField("b")
ROUTE88.setToNode("x_ite")
ROUTE88.setToField("b")

Scene16.addChildren(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.setFromNode("Animate")
ROUTE89.setFromField("c")
ROUTE89.setToNode("x_ite")
ROUTE89.setToField("c")

Scene16.addChildren(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.setFromNode("Animate")
ROUTE90.setFromField("d")
ROUTE90.setToNode("x_ite")
ROUTE90.setToField("d")

Scene16.addChildren(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.setFromNode("Animate")
ROUTE91.setFromField("pdelta")
ROUTE91.setToNode("x_ite")
ROUTE91.setToField("pdelta")

Scene16.addChildren(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.setFromNode("Animate")
ROUTE92.setFromField("tdelta")
ROUTE92.setToNode("x_ite")
ROUTE92.setToField("tdelta")

Scene16.addChildren(ROUTE92)
ROUTE93 = x3d.ROUTE()
ROUTE93.setFromNode("Animate")
ROUTE93.setFromField("a")
ROUTE93.setToNode("x3dom")
ROUTE93.setToField("a")

Scene16.addChildren(ROUTE93)
ROUTE94 = x3d.ROUTE()
ROUTE94.setFromNode("Animate")
ROUTE94.setFromField("b")
ROUTE94.setToNode("x3dom")
ROUTE94.setToField("b")

Scene16.addChildren(ROUTE94)
ROUTE95 = x3d.ROUTE()
ROUTE95.setFromNode("Animate")
ROUTE95.setFromField("c")
ROUTE95.setToNode("x3dom")
ROUTE95.setToField("c")

Scene16.addChildren(ROUTE95)
ROUTE96 = x3d.ROUTE()
ROUTE96.setFromNode("Animate")
ROUTE96.setFromField("d")
ROUTE96.setToNode("x3dom")
ROUTE96.setToField("d")

Scene16.addChildren(ROUTE96)
ROUTE97 = x3d.ROUTE()
ROUTE97.setFromNode("Animate")
ROUTE97.setFromField("pdelta")
ROUTE97.setToNode("x3dom")
ROUTE97.setToField("pdelta")

Scene16.addChildren(ROUTE97)
ROUTE98 = x3d.ROUTE()
ROUTE98.setFromNode("Animate")
ROUTE98.setFromField("tdelta")
ROUTE98.setToNode("x3dom")
ROUTE98.setToField("tdelta")

Scene16.addChildren(ROUTE98)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/flowers7.new.python.x3d")
X3D0.toFileJSON("../data/flowers7.new.python.json")
