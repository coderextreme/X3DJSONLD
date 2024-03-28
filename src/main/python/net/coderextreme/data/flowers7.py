import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
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
component8.setName("Grouping")
component8.setLevel(3)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Core")
component9.setLevel(1)

head1.addComponent(component9)
#<component name='Shape' level='4'></component>
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("flowers7.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("generator")
meta12.setContent("manual")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("identifier")
meta13.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("description")
meta14.setContent("a flower")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()

Scene15.addChildren(NavigationInfo16)
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background17 = x3d.Background()
Background17.setDEF("background")
Background17.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])
Background17.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])
Background17.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])
Background17.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])
Background17.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])
Background17.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

Scene15.addChildren(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setPosition([0,0,40])
Viewpoint18.setDescription("Transparent rose")

Scene15.addChildren(Viewpoint18)
Transform19 = x3d.Transform()
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor([0.7,0.7,0.7])
Material22.setSpecularColor([0.5,0.5,0.5])

Appearance21.setMaterial(Material22)
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture23.setDEF("texture")
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setDEF("backShader")
ImageTexture24.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture23.setBackTexture(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setDEF("bottomShader")
ImageTexture25.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture23.setBottomTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setDEF("frontShader")
ImageTexture26.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture23.setFrontTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setDEF("leftShader")
ImageTexture27.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture23.setLeftTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setDEF("rightShader")
ImageTexture28.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture23.setRightTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setDEF("topShader")
ImageTexture29.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture23.setTopTexture(ImageTexture29)

Appearance21.setTexture(ComposedCubeMapTexture23)
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.setDEF("x3dom")
ComposedShader30.setLanguage("GLSL")
field31 = x3d.field()
field31.setName("cube")
field31.setType("SFInt32")
field31.setAccessType("inputOutput")
field31.setValue("0")

ComposedShader30.addField(field31)
field32 = x3d.field()
field32.setName("chromaticDispertion")
field32.setAccessType("initializeOnly")
field32.setType("SFVec3f")
field32.setValue("0.98 1 1.033")

ComposedShader30.addField(field32)
field33 = x3d.field()
field33.setName("bias")
field33.setType("SFFloat")
field33.setAccessType("inputOutput")
field33.setValue("0.5")

ComposedShader30.addField(field33)
field34 = x3d.field()
field34.setName("scale")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("0.5")

ComposedShader30.addField(field34)
field35 = x3d.field()
field35.setName("power")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("2")

ComposedShader30.addField(field35)
field36 = x3d.field()
field36.setName("a")
field36.setType("SFFloat")
field36.setAccessType("inputOutput")
field36.setValue("10")

ComposedShader30.addField(field36)
field37 = x3d.field()
field37.setName("b")
field37.setType("SFFloat")
field37.setAccessType("inputOutput")
field37.setValue("1")

ComposedShader30.addField(field37)
field38 = x3d.field()
field38.setName("c")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("20")

ComposedShader30.addField(field38)
field39 = x3d.field()
field39.setName("d")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("20")

ComposedShader30.addField(field39)
field40 = x3d.field()
field40.setName("tdelta")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("0")

ComposedShader30.addField(field40)
field41 = x3d.field()
field41.setName("pdelta")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("0")

ComposedShader30.addField(field41)
#<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])
ShaderPart42.setType("VERTEX")

ComposedShader30.addParts(ShaderPart42)
ShaderPart43 = x3d.ShaderPart()
ShaderPart43.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart43.setType("FRAGMENT")

ComposedShader30.addParts(ShaderPart43)

Appearance21.addShaders(ComposedShader30)
ComposedShader44 = x3d.ComposedShader()
ComposedShader44.setDEF("x_ite")
ComposedShader44.setLanguage("GLSL")
field45 = x3d.field()
field45.setName("cube")
field45.setType("SFNode")
field45.setAccessType("inputOutput")
ComposedCubeMapTexture46 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture46.setUSE("texture")

field45.addChildren(ComposedCubeMapTexture46)

ComposedShader44.addField(field45)
field47 = x3d.field()
field47.setName("chromaticDispertion")
field47.setAccessType("initializeOnly")
field47.setType("SFVec3f")
field47.setValue("0.98 1 1.033")

ComposedShader44.addField(field47)
field48 = x3d.field()
field48.setName("bias")
field48.setType("SFFloat")
field48.setAccessType("inputOnly")
field48.setValue("0.5")

ComposedShader44.addField(field48)
field49 = x3d.field()
field49.setName("scale")
field49.setType("SFFloat")
field49.setAccessType("inputOnly")
field49.setValue("0.5")

ComposedShader44.addField(field49)
field50 = x3d.field()
field50.setName("power")
field50.setType("SFFloat")
field50.setAccessType("inputOnly")
field50.setValue("2")

ComposedShader44.addField(field50)
field51 = x3d.field()
field51.setName("a")
field51.setType("SFFloat")
field51.setAccessType("inputOnly")
field51.setValue("10")

ComposedShader44.addField(field51)
field52 = x3d.field()
field52.setName("b")
field52.setType("SFFloat")
field52.setAccessType("inputOnly")
field52.setValue("1")

ComposedShader44.addField(field52)
field53 = x3d.field()
field53.setName("c")
field53.setType("SFFloat")
field53.setAccessType("inputOnly")
field53.setValue("20")

ComposedShader44.addField(field53)
field54 = x3d.field()
field54.setName("d")
field54.setType("SFFloat")
field54.setAccessType("inputOnly")
field54.setValue("20")

ComposedShader44.addField(field54)
field55 = x3d.field()
field55.setName("tdelta")
field55.setType("SFFloat")
field55.setAccessType("inputOnly")
field55.setValue("0")

ComposedShader44.addField(field55)
field56 = x3d.field()
field56.setName("pdelta")
field56.setType("SFFloat")
field56.setAccessType("inputOnly")
field56.setValue("0")

ComposedShader44.addField(field56)
ShaderPart57 = x3d.ShaderPart()
ShaderPart57.setUrl(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart57.setType("VERTEX")

ComposedShader44.addParts(ShaderPart57)
ShaderPart58 = x3d.ShaderPart()
ShaderPart58.setUrl(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart58.setType("FRAGMENT")

ComposedShader44.addParts(ShaderPart58)

Appearance21.addShaders(ComposedShader44)

Shape20.setAppearance(Appearance21)
Sphere59 = x3d.Sphere()

Shape20.setGeometry(Sphere59)

Transform19.addChild(Shape20)

Scene15.addChildren(Transform19)
Script60 = x3d.Script()
Script60.setDEF("UrlSelector")
Script60.setDirectOutput(True)
field61 = x3d.field()
field61.setName("frontUrls")
field61.setType("MFString")
field61.setAccessType("initializeOnly")
field61.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script60.addField(field61)
field62 = x3d.field()
field62.setName("backUrls")
field62.setType("MFString")
field62.setAccessType("initializeOnly")
field62.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script60.addField(field62)
field63 = x3d.field()
field63.setName("leftUrls")
field63.setType("MFString")
field63.setAccessType("initializeOnly")
field63.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script60.addField(field63)
field64 = x3d.field()
field64.setName("rightUrls")
field64.setType("MFString")
field64.setAccessType("initializeOnly")
field64.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script60.addField(field64)
field65 = x3d.field()
field65.setName("topUrls")
field65.setType("MFString")
field65.setAccessType("initializeOnly")
field65.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script60.addField(field65)
field66 = x3d.field()
field66.setName("bottomUrls")
field66.setType("MFString")
field66.setAccessType("initializeOnly")
field66.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script60.addField(field66)
field67 = x3d.field()
field67.setName("front")
field67.setType("MFString")
field67.setAccessType("inputOutput")

Script60.addField(field67)
field68 = x3d.field()
field68.setName("back")
field68.setType("MFString")
field68.setAccessType("inputOutput")

Script60.addField(field68)
field69 = x3d.field()
field69.setName("left")
field69.setType("MFString")
field69.setAccessType("inputOutput")

Script60.addField(field69)
field70 = x3d.field()
field70.setName("right")
field70.setType("MFString")
field70.setAccessType("inputOutput")

Script60.addField(field70)
field71 = x3d.field()
field71.setName("top")
field71.setType("MFString")
field71.setAccessType("inputOutput")

Script60.addField(field71)
field72 = x3d.field()
field72.setName("bottom")
field72.setType("MFString")
field72.setAccessType("inputOutput")

Script60.addField(field72)
field73 = x3d.field()
field73.setName("set_fraction")
field73.setType("SFFloat")
field73.setAccessType("inputOnly")

Script60.addField(field73)
field74 = x3d.field()
field74.setName("old")
field74.setType("SFInt32")
field74.setAccessType("inputOutput")
field74.setValue("-1")

Script60.addField(field74)

Script60.setSourceCode('''ecmascript:\n"+
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

Scene15.addChildren(Script60)
#<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script75 = x3d.Script()
Script75.setDEF("Animate")
Script75.setDirectOutput(True)
field76 = x3d.field()
field76.setName("set_fraction")
field76.setType("SFFloat")
field76.setAccessType("inputOnly")

Script75.addField(field76)
field77 = x3d.field()
field77.setName("a")
field77.setType("SFFloat")
field77.setAccessType("inputOutput")
field77.setValue("10")

Script75.addField(field77)
field78 = x3d.field()
field78.setName("b")
field78.setType("SFFloat")
field78.setAccessType("inputOutput")
field78.setValue("1")

Script75.addField(field78)
field79 = x3d.field()
field79.setName("c")
field79.setType("SFFloat")
field79.setAccessType("inputOutput")
field79.setValue("20")

Script75.addField(field79)
field80 = x3d.field()
field80.setName("d")
field80.setType("SFFloat")
field80.setAccessType("inputOutput")
field80.setValue("20")

Script75.addField(field80)
field81 = x3d.field()
field81.setName("tdelta")
field81.setType("SFFloat")
field81.setAccessType("inputOutput")
field81.setValue("0")

Script75.addField(field81)
field82 = x3d.field()
field82.setName("pdelta")
field82.setType("SFFloat")
field82.setAccessType("inputOutput")
field82.setValue("0")

Script75.addField(field82)

Script75.setSourceCode('''ecmascript:\n"+
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

Scene15.addChildren(Script75)
TimeSensor83 = x3d.TimeSensor()
TimeSensor83.setDEF("TourTime")
TimeSensor83.setCycleInterval(5)
TimeSensor83.setLoop(True)

Scene15.addChildren(TimeSensor83)
ROUTE84 = x3d.ROUTE()
ROUTE84.setFromNode("TourTime")
ROUTE84.setFromField("fraction_changed")
ROUTE84.setToNode("Animate")
ROUTE84.setToField("set_fraction")

Scene15.addChildren(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.setFromNode("Animate")
ROUTE85.setFromField("a")
ROUTE85.setToNode("x_ite")
ROUTE85.setToField("a")

Scene15.addChildren(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.setFromNode("Animate")
ROUTE86.setFromField("b")
ROUTE86.setToNode("x_ite")
ROUTE86.setToField("b")

Scene15.addChildren(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.setFromNode("Animate")
ROUTE87.setFromField("c")
ROUTE87.setToNode("x_ite")
ROUTE87.setToField("c")

Scene15.addChildren(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.setFromNode("Animate")
ROUTE88.setFromField("d")
ROUTE88.setToNode("x_ite")
ROUTE88.setToField("d")

Scene15.addChildren(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.setFromNode("Animate")
ROUTE89.setFromField("pdelta")
ROUTE89.setToNode("x_ite")
ROUTE89.setToField("pdelta")

Scene15.addChildren(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.setFromNode("Animate")
ROUTE90.setFromField("tdelta")
ROUTE90.setToNode("x_ite")
ROUTE90.setToField("tdelta")

Scene15.addChildren(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.setFromNode("Animate")
ROUTE91.setFromField("a")
ROUTE91.setToNode("x3dom")
ROUTE91.setToField("a")

Scene15.addChildren(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.setFromNode("Animate")
ROUTE92.setFromField("b")
ROUTE92.setToNode("x3dom")
ROUTE92.setToField("b")

Scene15.addChildren(ROUTE92)
ROUTE93 = x3d.ROUTE()
ROUTE93.setFromNode("Animate")
ROUTE93.setFromField("c")
ROUTE93.setToNode("x3dom")
ROUTE93.setToField("c")

Scene15.addChildren(ROUTE93)
ROUTE94 = x3d.ROUTE()
ROUTE94.setFromNode("Animate")
ROUTE94.setFromField("d")
ROUTE94.setToNode("x3dom")
ROUTE94.setToField("d")

Scene15.addChildren(ROUTE94)
ROUTE95 = x3d.ROUTE()
ROUTE95.setFromNode("Animate")
ROUTE95.setFromField("pdelta")
ROUTE95.setToNode("x3dom")
ROUTE95.setToField("pdelta")

Scene15.addChildren(ROUTE95)
ROUTE96 = x3d.ROUTE()
ROUTE96.setFromNode("Animate")
ROUTE96.setFromField("tdelta")
ROUTE96.setToNode("x3dom")
ROUTE96.setToField("tdelta")

Scene15.addChildren(ROUTE96)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/flowers7.new.python.x3d")
X3D0.toFileJSON("../data/flowers7.new.python.json")
