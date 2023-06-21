from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
component2 = component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = component()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
component4 = component()
component4.setName("Texturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = component()
component5.setName("Rendering")
component5.setLevel(1)

head1.addComponent(component5)
component6 = component()
component6.setName("Shape")
component6.setLevel(4)

head1.addComponent(component6)
component7 = component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
meta8 = meta()
meta8.setName("title")
meta8.setContent("flowers7.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("creator")
meta9.setContent("John Carlson")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("generator")
meta10.setContent("manual")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("identifier")
meta11.setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("description")
meta12.setContent("a flower")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = Scene()
NavigationInfo14 = NavigationInfo()

Scene13.addChildren(NavigationInfo14)
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background15 = Background()
Background15.setDEF("background")
Background15.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])
Background15.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])
Background15.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])
Background15.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])
Background15.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])
Background15.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])

Scene13.addChildren(Background15)
Viewpoint16 = Viewpoint()
Viewpoint16.setPosition([0,0,40])
Viewpoint16.setDescription("Transparent rose")

Scene13.addChildren(Viewpoint16)
Transform17 = Transform()
Shape18 = Shape()
Appearance19 = Appearance()
Material20 = Material()
Material20.setDiffuseColor([0.7,0.7,0.7])
Material20.setSpecularColor([0.5,0.5,0.5])

Appearance19.setMaterial(Material20)
ComposedCubeMapTexture21 = ComposedCubeMapTexture()
ComposedCubeMapTexture21.setDEF("texture")
ImageTexture22 = ImageTexture()
ImageTexture22.setDEF("backShader")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture21.setBack(ImageTexture22)
ImageTexture23 = ImageTexture()
ImageTexture23.setDEF("bottomShader")
ImageTexture23.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture21.setBottom(ImageTexture23)
ImageTexture24 = ImageTexture()
ImageTexture24.setDEF("frontShader")
ImageTexture24.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture21.setFront(ImageTexture24)
ImageTexture25 = ImageTexture()
ImageTexture25.setDEF("leftShader")
ImageTexture25.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture21.setLeft(ImageTexture25)
ImageTexture26 = ImageTexture()
ImageTexture26.setDEF("rightShader")
ImageTexture26.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture21.setRight(ImageTexture26)
ImageTexture27 = ImageTexture()
ImageTexture27.setDEF("topShader")
ImageTexture27.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture21.setTop(ImageTexture27)

Appearance19.setTexture(ComposedCubeMapTexture21)
ComposedShader28 = ComposedShader()
ComposedShader28.setDEF("x3dom")
ComposedShader28.setLanguage("GLSL")
field29 = field()
field29.setName("cube")
field29.setType("SFInt32")
field29.setAccessType("inputOutput")
field29.setValue("0")

ComposedShader28.addField(field29)
field30 = field()
field30.setName("chromaticDispertion")
field30.setAccessType("initializeOnly")
field30.setType("SFVec3f")
field30.setValue("0.98 1 1.033")

ComposedShader28.addField(field30)
field31 = field()
field31.setName("bias")
field31.setType("SFFloat")
field31.setAccessType("inputOutput")
field31.setValue("0.5")

ComposedShader28.addField(field31)
field32 = field()
field32.setName("scale")
field32.setType("SFFloat")
field32.setAccessType("inputOutput")
field32.setValue("0.5")

ComposedShader28.addField(field32)
field33 = field()
field33.setName("power")
field33.setType("SFFloat")
field33.setAccessType("inputOutput")
field33.setValue("2")

ComposedShader28.addField(field33)
field34 = field()
field34.setName("a")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("10")

ComposedShader28.addField(field34)
field35 = field()
field35.setName("b")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("1")

ComposedShader28.addField(field35)
field36 = field()
field36.setName("c")
field36.setType("SFFloat")
field36.setAccessType("inputOutput")
field36.setValue("20")

ComposedShader28.addField(field36)
field37 = field()
field37.setName("d")
field37.setType("SFFloat")
field37.setAccessType("inputOutput")
field37.setValue("20")

ComposedShader28.addField(field37)
field38 = field()
field38.setName("tdelta")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("0")

ComposedShader28.addField(field38)
field39 = field()
field39.setName("pdelta")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("0")

ComposedShader28.addField(field39)
#<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart40 = ShaderPart()
ShaderPart40.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])
ShaderPart40.setType("VERTEX")

ComposedShader28.addParts(ShaderPart40)
ShaderPart41 = ShaderPart()
ShaderPart41.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart41.setType("FRAGMENT")

ComposedShader28.addParts(ShaderPart41)

Appearance19.addShaders(ComposedShader28)
ComposedShader42 = ComposedShader()
ComposedShader42.setDEF("x_ite")
ComposedShader42.setLanguage("GLSL")
field43 = field()
field43.setName("cube")
field43.setType("SFNode")
field43.setAccessType("inputOutput")
ComposedCubeMapTexture44 = ComposedCubeMapTexture()
ComposedCubeMapTexture44.setUSE("texture")

field43.addChildren(ComposedCubeMapTexture44)

ComposedShader42.addField(field43)
field45 = field()
field45.setName("chromaticDispertion")
field45.setAccessType("initializeOnly")
field45.setType("SFVec3f")
field45.setValue("0.98 1 1.033")

ComposedShader42.addField(field45)
field46 = field()
field46.setName("bias")
field46.setType("SFFloat")
field46.setAccessType("inputOnly")
field46.setValue("0.5")

ComposedShader42.addField(field46)
field47 = field()
field47.setName("scale")
field47.setType("SFFloat")
field47.setAccessType("inputOnly")
field47.setValue("0.5")

ComposedShader42.addField(field47)
field48 = field()
field48.setName("power")
field48.setType("SFFloat")
field48.setAccessType("inputOnly")
field48.setValue("2")

ComposedShader42.addField(field48)
field49 = field()
field49.setName("a")
field49.setType("SFFloat")
field49.setAccessType("inputOnly")
field49.setValue("10")

ComposedShader42.addField(field49)
field50 = field()
field50.setName("b")
field50.setType("SFFloat")
field50.setAccessType("inputOnly")
field50.setValue("1")

ComposedShader42.addField(field50)
field51 = field()
field51.setName("c")
field51.setType("SFFloat")
field51.setAccessType("inputOnly")
field51.setValue("20")

ComposedShader42.addField(field51)
field52 = field()
field52.setName("d")
field52.setType("SFFloat")
field52.setAccessType("inputOnly")
field52.setValue("20")

ComposedShader42.addField(field52)
field53 = field()
field53.setName("tdelta")
field53.setType("SFFloat")
field53.setAccessType("inputOnly")
field53.setValue("0")

ComposedShader42.addField(field53)
field54 = field()
field54.setName("pdelta")
field54.setType("SFFloat")
field54.setAccessType("inputOnly")
field54.setValue("0")

ComposedShader42.addField(field54)
ShaderPart55 = ShaderPart()
ShaderPart55.setUrl(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart55.setType("VERTEX")

ComposedShader42.addParts(ShaderPart55)
ShaderPart56 = ShaderPart()
ShaderPart56.setUrl(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart56.setType("FRAGMENT")

ComposedShader42.addParts(ShaderPart56)

Appearance19.addShaders(ComposedShader42)

Shape18.setAppearance(Appearance19)
Sphere57 = Sphere()

Shape18.setGeometry(Sphere57)

Transform17.addChildren(Shape18)

Scene13.addChildren(Transform17)
Script58 = Script()
Script58.setDEF("UrlSelector")
Script58.setDirectOutput(True)
field59 = field()
field59.setName("frontUrls")
field59.setType("MFString")
field59.setAccessType("initializeOnly")
field59.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script58.addField(field59)
field60 = field()
field60.setName("backUrls")
field60.setType("MFString")
field60.setAccessType("initializeOnly")
field60.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script58.addField(field60)
field61 = field()
field61.setName("leftUrls")
field61.setType("MFString")
field61.setAccessType("initializeOnly")
field61.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script58.addField(field61)
field62 = field()
field62.setName("rightUrls")
field62.setType("MFString")
field62.setAccessType("initializeOnly")
field62.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script58.addField(field62)
field63 = field()
field63.setName("topUrls")
field63.setType("MFString")
field63.setAccessType("initializeOnly")
field63.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script58.addField(field63)
field64 = field()
field64.setName("bottomUrls")
field64.setType("MFString")
field64.setAccessType("initializeOnly")
field64.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script58.addField(field64)
field65 = field()
field65.setName("front")
field65.setType("MFString")
field65.setAccessType("inputOutput")

Script58.addField(field65)
field66 = field()
field66.setName("back")
field66.setType("MFString")
field66.setAccessType("inputOutput")

Script58.addField(field66)
field67 = field()
field67.setName("left")
field67.setType("MFString")
field67.setAccessType("inputOutput")

Script58.addField(field67)
field68 = field()
field68.setName("right")
field68.setType("MFString")
field68.setAccessType("inputOutput")

Script58.addField(field68)
field69 = field()
field69.setName("top")
field69.setType("MFString")
field69.setAccessType("inputOutput")

Script58.addField(field69)
field70 = field()
field70.setName("bottom")
field70.setType("MFString")
field70.setAccessType("inputOutput")

Script58.addField(field70)
field71 = field()
field71.setName("set_fraction")
field71.setType("SFFloat")
field71.setAccessType("inputOnly")

Script58.addField(field71)
field72 = field()
field72.setName("old")
field72.setType("SFInt32")
field72.setAccessType("inputOutput")
field72.setValue("-1")

Script58.addField(field72)

Script58.setSourceCode('''ecmascript:\n"+
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

Scene13.addChildren(Script58)
#<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script73 = Script()
Script73.setDEF("Animate")
Script73.setDirectOutput(True)
field74 = field()
field74.setName("set_fraction")
field74.setType("SFFloat")
field74.setAccessType("inputOnly")

Script73.addField(field74)
field75 = field()
field75.setName("a")
field75.setType("SFFloat")
field75.setAccessType("inputOutput")
field75.setValue("10")

Script73.addField(field75)
field76 = field()
field76.setName("b")
field76.setType("SFFloat")
field76.setAccessType("inputOutput")
field76.setValue("1")

Script73.addField(field76)
field77 = field()
field77.setName("c")
field77.setType("SFFloat")
field77.setAccessType("inputOutput")
field77.setValue("20")

Script73.addField(field77)
field78 = field()
field78.setName("d")
field78.setType("SFFloat")
field78.setAccessType("inputOutput")
field78.setValue("20")

Script73.addField(field78)
field79 = field()
field79.setName("tdelta")
field79.setType("SFFloat")
field79.setAccessType("inputOutput")
field79.setValue("0")

Script73.addField(field79)
field80 = field()
field80.setName("pdelta")
field80.setType("SFFloat")
field80.setAccessType("inputOutput")
field80.setValue("0")

Script73.addField(field80)

Script73.setSourceCode('''ecmascript:\n"+
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

Scene13.addChildren(Script73)
TimeSensor81 = TimeSensor()
TimeSensor81.setDEF("TourTime")
TimeSensor81.setCycleInterval(5)
TimeSensor81.setLoop(True)

Scene13.addChildren(TimeSensor81)
ROUTE82 = ROUTE()
ROUTE82.setFromNode("TourTime")
ROUTE82.setFromField("fraction_changed")
ROUTE82.setToNode("Animate")
ROUTE82.setToField("set_fraction")

Scene13.addChildren(ROUTE82)
ROUTE83 = ROUTE()
ROUTE83.setFromNode("Animate")
ROUTE83.setFromField("a")
ROUTE83.setToNode("x_ite")
ROUTE83.setToField("a")

Scene13.addChildren(ROUTE83)
ROUTE84 = ROUTE()
ROUTE84.setFromNode("Animate")
ROUTE84.setFromField("b")
ROUTE84.setToNode("x_ite")
ROUTE84.setToField("b")

Scene13.addChildren(ROUTE84)
ROUTE85 = ROUTE()
ROUTE85.setFromNode("Animate")
ROUTE85.setFromField("c")
ROUTE85.setToNode("x_ite")
ROUTE85.setToField("c")

Scene13.addChildren(ROUTE85)
ROUTE86 = ROUTE()
ROUTE86.setFromNode("Animate")
ROUTE86.setFromField("d")
ROUTE86.setToNode("x_ite")
ROUTE86.setToField("d")

Scene13.addChildren(ROUTE86)
ROUTE87 = ROUTE()
ROUTE87.setFromNode("Animate")
ROUTE87.setFromField("pdelta")
ROUTE87.setToNode("x_ite")
ROUTE87.setToField("pdelta")

Scene13.addChildren(ROUTE87)
ROUTE88 = ROUTE()
ROUTE88.setFromNode("Animate")
ROUTE88.setFromField("tdelta")
ROUTE88.setToNode("x_ite")
ROUTE88.setToField("tdelta")

Scene13.addChildren(ROUTE88)
ROUTE89 = ROUTE()
ROUTE89.setFromNode("Animate")
ROUTE89.setFromField("a")
ROUTE89.setToNode("x3dom")
ROUTE89.setToField("a")

Scene13.addChildren(ROUTE89)
ROUTE90 = ROUTE()
ROUTE90.setFromNode("Animate")
ROUTE90.setFromField("b")
ROUTE90.setToNode("x3dom")
ROUTE90.setToField("b")

Scene13.addChildren(ROUTE90)
ROUTE91 = ROUTE()
ROUTE91.setFromNode("Animate")
ROUTE91.setFromField("c")
ROUTE91.setToNode("x3dom")
ROUTE91.setToField("c")

Scene13.addChildren(ROUTE91)
ROUTE92 = ROUTE()
ROUTE92.setFromNode("Animate")
ROUTE92.setFromField("d")
ROUTE92.setToNode("x3dom")
ROUTE92.setToField("d")

Scene13.addChildren(ROUTE92)
ROUTE93 = ROUTE()
ROUTE93.setFromNode("Animate")
ROUTE93.setFromField("pdelta")
ROUTE93.setToNode("x3dom")
ROUTE93.setToField("pdelta")

Scene13.addChildren(ROUTE93)
ROUTE94 = ROUTE()
ROUTE94.setFromNode("Animate")
ROUTE94.setFromField("tdelta")
ROUTE94.setToNode("x3dom")
ROUTE94.setToField("tdelta")

Scene13.addChildren(ROUTE94)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/flowers7_RoundTrip.x3d")
