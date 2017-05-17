from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("flowers7.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("generator").setContent("manual")
head1.addMeta(meta4)
meta5 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("a flower")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
NavigationInfo8 = NavigationInfoObject()
Scene7.addChild(NavigationInfo8)

Scene7.addComments(CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
Background9 = BackgroundObject().setDEF("background").setBackUrl(["images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]).setBottomUrl(["images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]).setFrontUrl(["images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]).setLeftUrl(["images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]).setRightUrl(["images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]).setTopUrl(["images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])
Scene7.addChild(Background9)
Viewpoint10 = ViewpointObject().setPosition([0,0,40]).setDescription("Transparent rose")
Scene7.addChild(Viewpoint10)
Transform11 = TransformObject().setDEF("Rose01")
Shape12 = ShapeObject()
Appearance13 = AppearanceObject()
Material14 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance13.setMaterial(Material14)
ComposedCubeMapTexture15 = ComposedCubeMapTextureObject()
ImageTexture16 = ImageTextureObject().setDEF("backShader").setUrl(["images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])
ComposedCubeMapTexture15.setBack(ImageTexture16)
ImageTexture17 = ImageTextureObject().setDEF("bottomShader").setUrl(["images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])
ComposedCubeMapTexture15.setBottom(ImageTexture17)
ImageTexture18 = ImageTextureObject().setDEF("frontShader").setUrl(["images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])
ComposedCubeMapTexture15.setFront(ImageTexture18)
ImageTexture19 = ImageTextureObject().setDEF("leftShader").setUrl(["images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])
ComposedCubeMapTexture15.setLeft(ImageTexture19)
ImageTexture20 = ImageTextureObject().setDEF("rightShader").setUrl(["images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])
ComposedCubeMapTexture15.setRight(ImageTexture20)
ImageTexture21 = ImageTextureObject().setDEF("topShader").setUrl(["images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])
ComposedCubeMapTexture15.setTop(ImageTexture21)
Appearance13.setTexture(ComposedCubeMapTexture15)
ComposedShader22 = ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
field23 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("set_cube").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
ComposedShader22.addField(field23)
field24 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033")
ComposedShader22.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_bias").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5")
ComposedShader22.addField(field25)
field26 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_scale").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5")
ComposedShader22.addField(field26)
field27 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_power").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("2")
ComposedShader22.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10")
ComposedShader22.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1")
ComposedShader22.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
ComposedShader22.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
ComposedShader22.addField(field31)
field32 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
ComposedShader22.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
ComposedShader22.addField(field33)
ShaderPart34 = ShaderPartObject().setType("VERTEX").setUrl(["shaders/cobweb_flowers_input.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb_flowers_input.vs"])
ComposedShader22.addParts(ShaderPart34)
ShaderPart35 = ShaderPartObject().setType("FRAGMENT").setUrl(["shaders/pc_input_flowers.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_input_flowers.fs"])
ComposedShader22.addParts(ShaderPart35)
Appearance13.addShaders(ComposedShader22)
Shape12.setAppearance(Appearance13)
Sphere36 = SphereObject().setSolid(False).setRadius(20)
Shape12.setGeometry(Sphere36)
Transform11.addChild(Shape12)
Scene7.addChild(Transform11)
Script37 = ScriptObject().setDEF("UrlSelector").setDirectOutput(True)
field38 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("frontUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_front.png\" \"images/all_probes/building_cross/building_front.png\" \"images/all_probes/campus_cross/campus_front.png\" \"images/all_probes/galileo_cross/galileo_front.png\" \"images/all_probes/grace_cross/grace_front.png\" \"images/all_probes/kitchen_cross/kitchen_front.png\" \"images/all_probes/rnl_cross/rnl_front.png\" \"images/all_probes/stpeters_cross/stpeters_front.png\" \"images/all_probes/uffizi_cross/uffizi_front.png\"")
Script37.addField(field38)
field39 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("backUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_back.png\" \"images/all_probes/building_cross/building_back.png\" \"images/all_probes/campus_cross/campus_back.png\" \"images/all_probes/galileo_cross/galileo_back.png\" \"images/all_probes/grace_cross/grace_back.png\" \"images/all_probes/kitchen_cross/kitchen_back.png\" \"images/all_probes/rnl_cross/rnl_back.png\" \"images/all_probes/stpeters_cross/stpeters_back.png\" \"images/all_probes/uffizi_cross/uffizi_back.png\"")
Script37.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("leftUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_left.png\" \"images/all_probes/building_cross/building_left.png\" \"images/all_probes/campus_cross/campus_left.png\" \"images/all_probes/galileo_cross/galileo_left.png\" \"images/all_probes/grace_cross/grace_left.png\" \"images/all_probes/kitchen_cross/kitchen_left.png\" \"images/all_probes/rnl_cross/rnl_left.png\" \"images/all_probes/stpeters_cross/stpeters_left.png\" \"images/all_probes/uffizi_cross/uffizi_left.png\"")
Script37.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("rightUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_right.png\" \"images/all_probes/building_cross/building_right.png\" \"images/all_probes/campus_cross/campus_right.png\" \"images/all_probes/galileo_cross/galileo_right.png\" \"images/all_probes/grace_cross/grace_right.png\" \"images/all_probes/kitchen_cross/kitchen_right.png\" \"images/all_probes/rnl_cross/rnl_right.png\" \"images/all_probes/stpeters_cross/stpeters_right.png\" \"images/all_probes/uffizi_cross/uffizi_right.png\"")
Script37.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("topUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_top.png\" \"images/all_probes/building_cross/building_top.png\" \"images/all_probes/campus_cross/campus_top.png\" \"images/all_probes/galileo_cross/galileo_top.png\" \"images/all_probes/grace_cross/grace_top.png\" \"images/all_probes/kitchen_cross/kitchen_top.png\" \"images/all_probes/rnl_cross/rnl_top.png\" \"images/all_probes/stpeters_cross/stpeters_top.png\" \"images/all_probes/uffizi_cross/uffizi_top.png\"")
Script37.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("bottomUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"images/all_probes/beach_cross/beach_bottom.png\" \"images/all_probes/building_cross/building_bottom.png\" \"images/all_probes/campus_cross/campus_bottom.png\" \"images/all_probes/galileo_cross/galileo_bottom.png\" \"images/all_probes/grace_cross/grace_bottom.png\" \"images/all_probes/kitchen_cross/kitchen_bottom.png\" \"images/all_probes/rnl_cross/rnl_bottom.png\" \"images/all_probes/stpeters_cross/stpeters_bottom.png\" \"images/all_probes/uffizi_cross/uffizi_bottom.png\"")
Script37.addField(field43)
field44 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("front_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script37.addField(field44)
field45 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("back_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script37.addField(field45)
field46 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("left_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script37.addField(field46)
field47 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("right_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script37.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("top_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script37.addField(field48)
field49 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("bottom_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script37.addField(field49)
field50 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script37.addField(field50)
field51 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-1")
Script37.addField(field51)

Script37.setSourceCode("ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front_changed[0] = frontUrls[side];\n"+
"                    back_changed[0] = backUrls[side];\n"+
"                    left_changed[0] = leftUrls[side];\n"+
"                    right_changed[0] = rightUrls[side];\n"+
"                    top_changed[0] = topUrls[side];\n"+
"                    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }\n"+
"")
Scene7.addChild(Script37)
TimeSensor52 = TimeSensorObject().setDEF("Clock").setCycleInterval(45).setLoop(True)
Scene7.addChild(TimeSensor52)
ROUTE53 = ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction")
Scene7.addChild(ROUTE53)
ROUTE54 = ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("background").setToField("frontUrl")
Scene7.addChild(ROUTE54)
ROUTE55 = ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("background").setToField("backUrl")
Scene7.addChild(ROUTE55)
ROUTE56 = ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("background").setToField("leftUrl")
Scene7.addChild(ROUTE56)
ROUTE57 = ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("background").setToField("rightUrl")
Scene7.addChild(ROUTE57)
ROUTE58 = ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("background").setToField("topUrl")
Scene7.addChild(ROUTE58)
ROUTE59 = ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("background").setToField("bottomUrl")
Scene7.addChild(ROUTE59)
ROUTE60 = ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url")
Scene7.addChild(ROUTE60)
ROUTE61 = ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url")
Scene7.addChild(ROUTE61)
ROUTE62 = ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url")
Scene7.addChild(ROUTE62)
ROUTE63 = ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url")
Scene7.addChild(ROUTE63)
ROUTE64 = ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url")
Scene7.addChild(ROUTE64)
ROUTE65 = ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url")
Scene7.addChild(ROUTE65)
Script66 = ScriptObject().setDEF("Animate").setDirectOutput(True)
field67 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script66.addField(field67)
field68 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("10")
Script66.addField(field68)
field69 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("1")
Script66.addField(field69)
field70 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("20")
Script66.addField(field70)
field71 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("20")
Script66.addField(field71)
field72 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0")
Script66.addField(field72)
field73 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0")
Script66.addField(field73)
field74 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10")
Script66.addField(field74)
field75 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1")
Script66.addField(field75)
field76 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
Script66.addField(field76)
field77 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
Script66.addField(field77)
field78 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
Script66.addField(field78)
field79 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
Script66.addField(field79)

Script66.setSourceCode("ecmascript:\n"+
"\n"+
"function set_a(value) {\n"+
"	a = value;\n"+
"}\n"+
"\n"+
"function set_b(value) {\n"+
"	b = value;\n"+
"}\n"+
"\n"+
"function set_c(value) {\n"+
"	c = value;\n"+
"}\n"+
"\n"+
"function set_d(value) {\n"+
"	d = value;\n"+
"}\n"+
"\n"+
"function set_tdelta(value) {\n"+
"	tdelta = value;\n"+
"}\n"+
"\n"+
"function set_tdelta(value) {\n"+
"	tdelta = value;\n"+
"}\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	if (choice == 0) {\n"+
"		set_a(a + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	} else if (choice == 1) {\n"+
"		set_b(b + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	} else if (choice == 2) {\n"+
"		set_c(c + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	} else if (choice == 3) {\n"+
"		set_d(d + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	}\n"+
"	set_tdelta(tdelta + 0.5);\n"+
"	set_pdelta(pdelta + 0.5);\n"+
"	if (a < 1) {\n"+
"		set_a(10);\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		set_b(10);\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		set_c(4);\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		set_c(4);\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		set_d(4);\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		set_d(4);\n"+
"	}\n"+
"	// console.log(a, b, c, d, tdelta, pdelta);\n"+
"}\n"+
"")
Scene7.addChild(Script66)
ROUTE80 = ROUTEObject().setFromNode("Animate").setFromField("a_changed").setToNode("cobweb").setToField("set_a")
Scene7.addChild(ROUTE80)
ROUTE81 = ROUTEObject().setFromNode("Animate").setFromField("b_changed").setToNode("cobweb").setToField("set_b")
Scene7.addChild(ROUTE81)
ROUTE82 = ROUTEObject().setFromNode("Animate").setFromField("c_changed").setToNode("cobweb").setToField("set_c")
Scene7.addChild(ROUTE82)
ROUTE83 = ROUTEObject().setFromNode("Animate").setFromField("d_changed").setToNode("cobweb").setToField("set_d")
Scene7.addChild(ROUTE83)
ROUTE84 = ROUTEObject().setFromNode("Animate").setFromField("pdelta_changed").setToNode("cobweb").setToField("set_pdelta")
Scene7.addChild(ROUTE84)
ROUTE85 = ROUTEObject().setFromNode("Animate").setFromField("tdelta_changed").setToNode("cobweb").setToField("set_tdelta")
Scene7.addChild(ROUTE85)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../out/orig/flowers7.new.x3d")
