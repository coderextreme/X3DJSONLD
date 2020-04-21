import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
meta4 = x3d.meta()
meta4.setName("title")
meta4.setContent("flowers7.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("manual")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("identifier")
meta7.setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("description")
meta8.setContent("a flower")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = x3d.Scene()
NavigationInfo10 = x3d.NavigationInfo()

Scene9.addChildren(NavigationInfo10)
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background11 = x3d.Background()
Background11.setDEF("background")
Background11.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])
Background11.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])
Background11.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])
Background11.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])
Background11.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])
Background11.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])

Scene9.addChildren(Background11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.setPosition([0,0,40])
Viewpoint12.setDescription("Transparent rose")

Scene9.addChildren(Viewpoint12)
Transform13 = x3d.Transform()
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.setDiffuseColor([0.7,0.7,0.7])
Material16.setSpecularColor([0.5,0.5,0.5])

Appearance15.setMaterial(Material16)
ComposedCubeMapTexture17 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture17.setDEF("texture")
ImageTexture18 = x3d.ImageTexture()
ImageTexture18.setDEF("backShader")
ImageTexture18.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture17.setBack(ImageTexture18)
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.setDEF("bottomShader")
ImageTexture19.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture17.setBottom(ImageTexture19)
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.setDEF("frontShader")
ImageTexture20.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture17.setFront(ImageTexture20)
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.setDEF("leftShader")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture17.setLeft(ImageTexture21)
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.setDEF("rightShader")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture17.setRight(ImageTexture22)
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.setDEF("topShader")
ImageTexture23.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture17.setTop(ImageTexture23)

Appearance15.setTexture(ComposedCubeMapTexture17)
ComposedShader24 = x3d.ComposedShader()
ComposedShader24.setDEF("x3dom")
ComposedShader24.setLanguage("GLSL")
field25 = x3d.field()
field25.setName("cube")
field25.setType("SFInt32")
field25.setAccessType("inputOutput")
field25.setValue("0")

ComposedShader24.addField(field25)
field26 = x3d.field()
field26.setName("chromaticDispertion")
field26.setAccessType("initializeOnly")
field26.setType("SFVec3f")
field26.setValue("0.98 1 1.033")

ComposedShader24.addField(field26)
field27 = x3d.field()
field27.setName("bias")
field27.setType("SFFloat")
field27.setAccessType("inputOutput")
field27.setValue("0.5")

ComposedShader24.addField(field27)
field28 = x3d.field()
field28.setName("scale")
field28.setType("SFFloat")
field28.setAccessType("inputOutput")
field28.setValue("0.5")

ComposedShader24.addField(field28)
field29 = x3d.field()
field29.setName("power")
field29.setType("SFFloat")
field29.setAccessType("inputOutput")
field29.setValue("2")

ComposedShader24.addField(field29)
field30 = x3d.field()
field30.setName("a")
field30.setType("SFFloat")
field30.setAccessType("inputOutput")
field30.setValue("10")

ComposedShader24.addField(field30)
field31 = x3d.field()
field31.setName("b")
field31.setType("SFFloat")
field31.setAccessType("inputOutput")
field31.setValue("1")

ComposedShader24.addField(field31)
field32 = x3d.field()
field32.setName("c")
field32.setType("SFFloat")
field32.setAccessType("inputOutput")
field32.setValue("20")

ComposedShader24.addField(field32)
field33 = x3d.field()
field33.setName("d")
field33.setType("SFFloat")
field33.setAccessType("inputOutput")
field33.setValue("20")

ComposedShader24.addField(field33)
field34 = x3d.field()
field34.setName("tdelta")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("0")

ComposedShader24.addField(field34)
field35 = x3d.field()
field35.setName("pdelta")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("0")

ComposedShader24.addField(field35)
#<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])
ShaderPart36.setType("VERTEX")

ComposedShader24.addParts(ShaderPart36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart37.setType("FRAGMENT")

ComposedShader24.addParts(ShaderPart37)

Appearance15.addShaders(ComposedShader24)
ComposedShader38 = x3d.ComposedShader()
ComposedShader38.setDEF("x_ite")
ComposedShader38.setLanguage("GLSL")
field39 = x3d.field()
field39.setName("cube")
field39.setType("SFNode")
field39.setAccessType("inputOutput")
ComposedCubeMapTexture40 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture40.setUSE("texture")

field39.addChildren(ComposedCubeMapTexture40)

ComposedShader38.addField(field39)
field41 = x3d.field()
field41.setName("chromaticDispertion")
field41.setAccessType("initializeOnly")
field41.setType("SFVec3f")
field41.setValue("0.98 1 1.033")

ComposedShader38.addField(field41)
field42 = x3d.field()
field42.setName("bias")
field42.setType("SFFloat")
field42.setAccessType("inputOnly")
field42.setValue("0.5")

ComposedShader38.addField(field42)
field43 = x3d.field()
field43.setName("scale")
field43.setType("SFFloat")
field43.setAccessType("inputOnly")
field43.setValue("0.5")

ComposedShader38.addField(field43)
field44 = x3d.field()
field44.setName("power")
field44.setType("SFFloat")
field44.setAccessType("inputOnly")
field44.setValue("2")

ComposedShader38.addField(field44)
field45 = x3d.field()
field45.setName("a")
field45.setType("SFFloat")
field45.setAccessType("inputOnly")
field45.setValue("10")

ComposedShader38.addField(field45)
field46 = x3d.field()
field46.setName("b")
field46.setType("SFFloat")
field46.setAccessType("inputOnly")
field46.setValue("1")

ComposedShader38.addField(field46)
field47 = x3d.field()
field47.setName("c")
field47.setType("SFFloat")
field47.setAccessType("inputOnly")
field47.setValue("20")

ComposedShader38.addField(field47)
field48 = x3d.field()
field48.setName("d")
field48.setType("SFFloat")
field48.setAccessType("inputOnly")
field48.setValue("20")

ComposedShader38.addField(field48)
field49 = x3d.field()
field49.setName("tdelta")
field49.setType("SFFloat")
field49.setAccessType("inputOnly")
field49.setValue("0")

ComposedShader38.addField(field49)
field50 = x3d.field()
field50.setName("pdelta")
field50.setType("SFFloat")
field50.setAccessType("inputOnly")
field50.setValue("0")

ComposedShader38.addField(field50)
ShaderPart51 = x3d.ShaderPart()
ShaderPart51.setUrl(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart51.setType("VERTEX")

ComposedShader38.addParts(ShaderPart51)
ShaderPart52 = x3d.ShaderPart()
ShaderPart52.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart52.setType("FRAGMENT")

ComposedShader38.addParts(ShaderPart52)

Appearance15.addShaders(ComposedShader38)

Shape14.setAppearance(Appearance15)
Sphere53 = x3d.Sphere()

Shape14.setGeometry(Sphere53)

Transform13.addChildren(Shape14)

Scene9.addChildren(Transform13)
Script54 = x3d.Script()
Script54.setDEF("UrlSelector")
Script54.setDirectOutput(True)
field55 = x3d.field()
field55.setName("frontUrls")
field55.setType("MFString")
field55.setAccessType("initializeOnly")
field55.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script54.addField(field55)
field56 = x3d.field()
field56.setName("backUrls")
field56.setType("MFString")
field56.setAccessType("initializeOnly")
field56.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script54.addField(field56)
field57 = x3d.field()
field57.setName("leftUrls")
field57.setType("MFString")
field57.setAccessType("initializeOnly")
field57.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script54.addField(field57)
field58 = x3d.field()
field58.setName("rightUrls")
field58.setType("MFString")
field58.setAccessType("initializeOnly")
field58.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script54.addField(field58)
field59 = x3d.field()
field59.setName("topUrls")
field59.setType("MFString")
field59.setAccessType("initializeOnly")
field59.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script54.addField(field59)
field60 = x3d.field()
field60.setName("bottomUrls")
field60.setType("MFString")
field60.setAccessType("initializeOnly")
field60.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script54.addField(field60)
field61 = x3d.field()
field61.setName("front")
field61.setType("MFString")
field61.setAccessType("inputOutput")

Script54.addField(field61)
field62 = x3d.field()
field62.setName("back")
field62.setType("MFString")
field62.setAccessType("inputOutput")

Script54.addField(field62)
field63 = x3d.field()
field63.setName("left")
field63.setType("MFString")
field63.setAccessType("inputOutput")

Script54.addField(field63)
field64 = x3d.field()
field64.setName("right")
field64.setType("MFString")
field64.setAccessType("inputOutput")

Script54.addField(field64)
field65 = x3d.field()
field65.setName("top")
field65.setType("MFString")
field65.setAccessType("inputOutput")

Script54.addField(field65)
field66 = x3d.field()
field66.setName("bottom")
field66.setType("MFString")
field66.setAccessType("inputOutput")

Script54.addField(field66)
field67 = x3d.field()
field67.setName("set_fraction")
field67.setType("SFFloat")
field67.setAccessType("inputOnly")

Script54.addField(field67)
field68 = x3d.field()
field68.setName("old")
field68.setType("SFInt32")
field68.setAccessType("inputOutput")
field68.setValue("-1")

Script54.addField(field68)

Script54.setSourceCode('''ecmascript:\n"+
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

Scene9.addChildren(Script54)
#<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script69 = x3d.Script()
Script69.setDEF("Animate")
Script69.setDirectOutput(True)
field70 = x3d.field()
field70.setName("set_fraction")
field70.setType("SFFloat")
field70.setAccessType("inputOnly")

Script69.addField(field70)
field71 = x3d.field()
field71.setName("a")
field71.setType("SFFloat")
field71.setAccessType("inputOutput")
field71.setValue("10")

Script69.addField(field71)
field72 = x3d.field()
field72.setName("b")
field72.setType("SFFloat")
field72.setAccessType("inputOutput")
field72.setValue("1")

Script69.addField(field72)
field73 = x3d.field()
field73.setName("c")
field73.setType("SFFloat")
field73.setAccessType("inputOutput")
field73.setValue("20")

Script69.addField(field73)
field74 = x3d.field()
field74.setName("d")
field74.setType("SFFloat")
field74.setAccessType("inputOutput")
field74.setValue("20")

Script69.addField(field74)
field75 = x3d.field()
field75.setName("tdelta")
field75.setType("SFFloat")
field75.setAccessType("inputOutput")
field75.setValue("0")

Script69.addField(field75)
field76 = x3d.field()
field76.setName("pdelta")
field76.setType("SFFloat")
field76.setAccessType("inputOutput")
field76.setValue("0")

Script69.addField(field76)

Script69.setSourceCode('''ecmascript:\n"+
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

Scene9.addChildren(Script69)
TimeSensor77 = x3d.TimeSensor()
TimeSensor77.setDEF("TourTime")
TimeSensor77.setCycleInterval(5)
TimeSensor77.setLoop(True)

Scene9.addChildren(TimeSensor77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("TourTime")
ROUTE78.setFromField("fraction_changed")
ROUTE78.setToNode("Animate")
ROUTE78.setToField("set_fraction")

Scene9.addChildren(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("Animate")
ROUTE79.setFromField("a")
ROUTE79.setToNode("x_ite")
ROUTE79.setToField("a")

Scene9.addChildren(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("Animate")
ROUTE80.setFromField("b")
ROUTE80.setToNode("x_ite")
ROUTE80.setToField("b")

Scene9.addChildren(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromNode("Animate")
ROUTE81.setFromField("c")
ROUTE81.setToNode("x_ite")
ROUTE81.setToField("c")

Scene9.addChildren(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromNode("Animate")
ROUTE82.setFromField("d")
ROUTE82.setToNode("x_ite")
ROUTE82.setToField("d")

Scene9.addChildren(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromNode("Animate")
ROUTE83.setFromField("pdelta")
ROUTE83.setToNode("x_ite")
ROUTE83.setToField("pdelta")

Scene9.addChildren(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.setFromNode("Animate")
ROUTE84.setFromField("tdelta")
ROUTE84.setToNode("x_ite")
ROUTE84.setToField("tdelta")

Scene9.addChildren(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.setFromNode("Animate")
ROUTE85.setFromField("a")
ROUTE85.setToNode("x3dom")
ROUTE85.setToField("a")

Scene9.addChildren(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.setFromNode("Animate")
ROUTE86.setFromField("b")
ROUTE86.setToNode("x3dom")
ROUTE86.setToField("b")

Scene9.addChildren(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.setFromNode("Animate")
ROUTE87.setFromField("c")
ROUTE87.setToNode("x3dom")
ROUTE87.setToField("c")

Scene9.addChildren(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.setFromNode("Animate")
ROUTE88.setFromField("d")
ROUTE88.setToNode("x3dom")
ROUTE88.setToField("d")

Scene9.addChildren(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.setFromNode("Animate")
ROUTE89.setFromField("pdelta")
ROUTE89.setToNode("x3dom")
ROUTE89.setToField("pdelta")

Scene9.addChildren(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.setFromNode("Animate")
ROUTE90.setFromField("tdelta")
ROUTE90.setToNode("x3dom")
ROUTE90.setToField("tdelta")

Scene9.addChildren(ROUTE90)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/flowers7_RoundTrip.x3d")
