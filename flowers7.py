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
meta5 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/flowers7.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("a flower")
head1.addMeta(meta6)
meta7 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta7)
meta8 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta8)
meta9 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta9)
meta10 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta10)
meta11 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta11)
X3D0.setHead(head1)
Scene12 = SceneObject()
NavigationInfo13 = NavigationInfoObject()
Scene12.addChild(NavigationInfo13)

Scene12.addComments(CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
Background14 = BackgroundObject().setDEF("background").setBackUrl(["cubemap/all_probes/beach_cross/beach_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_back.png"]).setBottomUrl(["cubemap/all_probes/beach_cross/beach_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_bottom.png"]).setFrontUrl(["cubemap/all_probes/beach_cross/beach_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_front.png"]).setLeftUrl(["cubemap/all_probes/beach_cross/beach_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_left.png"]).setRightUrl(["cubemap/all_probes/beach_cross/beach_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_right.png"]).setTopUrl(["cubemap/all_probes/beach_cross/beach_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_top.png"])
Scene12.addChild(Background14)
Viewpoint15 = ViewpointObject().setPosition([0,0,40]).setDescription("Transparent rose")
Scene12.addChild(Viewpoint15)
Transform16 = TransformObject().setDEF("Rose01")
Shape17 = ShapeObject()
Appearance18 = AppearanceObject()
Material19 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance18.setMaterial(Material19)
ComposedCubeMapTexture20 = ComposedCubeMapTextureObject()
ImageTexture21 = ImageTextureObject().setDEF("backShader").setUrl(["cubemap/all_probes/beach_cross/beach_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_back.png"])
ComposedCubeMapTexture20.setBack(ImageTexture21)
ImageTexture22 = ImageTextureObject().setDEF("bottomShader").setUrl(["cubemap/all_probes/beach_cross/beach_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_bottom.png"])
ComposedCubeMapTexture20.setBottom(ImageTexture22)
ImageTexture23 = ImageTextureObject().setDEF("frontShader").setUrl(["cubemap/all_probes/beach_cross/beach_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_front.png"])
ComposedCubeMapTexture20.setFront(ImageTexture23)
ImageTexture24 = ImageTextureObject().setDEF("leftShader").setUrl(["cubemap/all_probes/beach_cross/beach_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_left.png"])
ComposedCubeMapTexture20.setLeft(ImageTexture24)
ImageTexture25 = ImageTextureObject().setDEF("rightShader").setUrl(["cubemap/all_probes/beach_cross/beach_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_right.png"])
ComposedCubeMapTexture20.setRight(ImageTexture25)
ImageTexture26 = ImageTextureObject().setDEF("topShader").setUrl(["cubemap/all_probes/beach_cross/beach_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_top.png"])
ComposedCubeMapTexture20.setTop(ImageTexture26)
Appearance18.setTexture(ComposedCubeMapTexture20)
ComposedShader27 = ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
field28 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("set_cube").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
ComposedShader27.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033")
ComposedShader27.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_bias").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5")
ComposedShader27.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_scale").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5")
ComposedShader27.addField(field31)
field32 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_power").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("2")
ComposedShader27.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10")
ComposedShader27.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1")
ComposedShader27.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
ComposedShader27.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
ComposedShader27.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
ComposedShader27.addField(field37)
field38 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
ComposedShader27.addField(field38)
ShaderPart39 = ShaderPartObject().setType("VERTEX").setUrl(["cobweb_flowers_input.vs","http://coderextreme.net/X3DJSONLD/cobweb_flowers_input.vs"])
ComposedShader27.addParts(ShaderPart39)
ShaderPart40 = ShaderPartObject().setType("FRAGMENT").setUrl(["pc_input_flowers.fs","http://coderextreme.net/X3DJSONLD/pc_input_flowers.fs"])
ComposedShader27.addParts(ShaderPart40)
Appearance18.addShaders(ComposedShader27)
Shape17.setAppearance(Appearance18)
Sphere41 = SphereObject().setSolid(False).setRadius(20)
Shape17.setGeometry(Sphere41)
Transform16.addChild(Shape17)
Scene12.addChild(Transform16)
Script42 = ScriptObject().setDEF("UrlSelector").setDirectOutput(True)
field43 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("frontUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_front.png\" \"cubemap/all_probes/building_cross/building_front.png\" \"cubemap/all_probes/campus_cross/campus_front.png\" \"cubemap/all_probes/galileo_cross/galileo_front.png\" \"cubemap/all_probes/grace_cross/grace_front.png\" \"cubemap/all_probes/kitchen_cross/kitchen_front.png\" \"cubemap/all_probes/rnl_cross/rnl_front.png\" \"cubemap/all_probes/stpeters_cross/stpeters_front.png\" \"cubemap/all_probes/uffizi_cross/uffizi_front.png\"")
Script42.addField(field43)
field44 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("backUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_back.png\" \"cubemap/all_probes/building_cross/building_back.png\" \"cubemap/all_probes/campus_cross/campus_back.png\" \"cubemap/all_probes/galileo_cross/galileo_back.png\" \"cubemap/all_probes/grace_cross/grace_back.png\" \"cubemap/all_probes/kitchen_cross/kitchen_back.png\" \"cubemap/all_probes/rnl_cross/rnl_back.png\" \"cubemap/all_probes/stpeters_cross/stpeters_back.png\" \"cubemap/all_probes/uffizi_cross/uffizi_back.png\"")
Script42.addField(field44)
field45 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("leftUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_left.png\" \"cubemap/all_probes/building_cross/building_left.png\" \"cubemap/all_probes/campus_cross/campus_left.png\" \"cubemap/all_probes/galileo_cross/galileo_left.png\" \"cubemap/all_probes/grace_cross/grace_left.png\" \"cubemap/all_probes/kitchen_cross/kitchen_left.png\" \"cubemap/all_probes/rnl_cross/rnl_left.png\" \"cubemap/all_probes/stpeters_cross/stpeters_left.png\" \"cubemap/all_probes/uffizi_cross/uffizi_left.png\"")
Script42.addField(field45)
field46 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("rightUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_right.png\" \"cubemap/all_probes/building_cross/building_right.png\" \"cubemap/all_probes/campus_cross/campus_right.png\" \"cubemap/all_probes/galileo_cross/galileo_right.png\" \"cubemap/all_probes/grace_cross/grace_right.png\" \"cubemap/all_probes/kitchen_cross/kitchen_right.png\" \"cubemap/all_probes/rnl_cross/rnl_right.png\" \"cubemap/all_probes/stpeters_cross/stpeters_right.png\" \"cubemap/all_probes/uffizi_cross/uffizi_right.png\"")
Script42.addField(field46)
field47 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("topUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_top.png\" \"cubemap/all_probes/building_cross/building_top.png\" \"cubemap/all_probes/campus_cross/campus_top.png\" \"cubemap/all_probes/galileo_cross/galileo_top.png\" \"cubemap/all_probes/grace_cross/grace_top.png\" \"cubemap/all_probes/kitchen_cross/kitchen_top.png\" \"cubemap/all_probes/rnl_cross/rnl_top.png\" \"cubemap/all_probes/stpeters_cross/stpeters_top.png\" \"cubemap/all_probes/uffizi_cross/uffizi_top.png\"")
Script42.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("bottomUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_bottom.png\" \"cubemap/all_probes/building_cross/building_bottom.png\" \"cubemap/all_probes/campus_cross/campus_bottom.png\" \"cubemap/all_probes/galileo_cross/galileo_bottom.png\" \"cubemap/all_probes/grace_cross/grace_bottom.png\" \"cubemap/all_probes/kitchen_cross/kitchen_bottom.png\" \"cubemap/all_probes/rnl_cross/rnl_bottom.png\" \"cubemap/all_probes/stpeters_cross/stpeters_bottom.png\" \"cubemap/all_probes/uffizi_cross/uffizi_bottom.png\"")
Script42.addField(field48)
field49 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("front_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script42.addField(field49)
field50 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("back_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script42.addField(field50)
field51 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("left_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script42.addField(field51)
field52 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("right_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script42.addField(field52)
field53 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("top_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script42.addField(field53)
field54 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("bottom_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script42.addField(field54)
field55 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script42.addField(field55)
field56 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-1")
Script42.addField(field56)

Script42.setSourceCode("ecmascript:\n"+
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
Scene12.addChild(Script42)
TimeSensor57 = TimeSensorObject().setDEF("Clock").setCycleInterval(45).setLoop(True)
Scene12.addChild(TimeSensor57)
ROUTE58 = ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction")
Scene12.addChild(ROUTE58)
ROUTE59 = ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("background").setToField("frontUrl")
Scene12.addChild(ROUTE59)
ROUTE60 = ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("background").setToField("backUrl")
Scene12.addChild(ROUTE60)
ROUTE61 = ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("background").setToField("leftUrl")
Scene12.addChild(ROUTE61)
ROUTE62 = ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("background").setToField("rightUrl")
Scene12.addChild(ROUTE62)
ROUTE63 = ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("background").setToField("topUrl")
Scene12.addChild(ROUTE63)
ROUTE64 = ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("background").setToField("bottomUrl")
Scene12.addChild(ROUTE64)
ROUTE65 = ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url")
Scene12.addChild(ROUTE65)
ROUTE66 = ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url")
Scene12.addChild(ROUTE66)
ROUTE67 = ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url")
Scene12.addChild(ROUTE67)
ROUTE68 = ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url")
Scene12.addChild(ROUTE68)
ROUTE69 = ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url")
Scene12.addChild(ROUTE69)
ROUTE70 = ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url")
Scene12.addChild(ROUTE70)
Script71 = ScriptObject().setDEF("Animate").setDirectOutput(True)
field72 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script71.addField(field72)
field73 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("10")
Script71.addField(field73)
field74 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("1")
Script71.addField(field74)
field75 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("20")
Script71.addField(field75)
field76 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("20")
Script71.addField(field76)
field77 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0")
Script71.addField(field77)
field78 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0")
Script71.addField(field78)
field79 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10")
Script71.addField(field79)
field80 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1")
Script71.addField(field80)
field81 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
Script71.addField(field81)
field82 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
Script71.addField(field82)
field83 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
Script71.addField(field83)
field84 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
Script71.addField(field84)

Script71.setSourceCode("ecmascript:\n"+
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
Scene12.addChild(Script71)
ROUTE85 = ROUTEObject().setFromNode("Animate").setFromField("a_changed").setToNode("cobweb").setToField("set_a")
Scene12.addChild(ROUTE85)
ROUTE86 = ROUTEObject().setFromNode("Animate").setFromField("b_changed").setToNode("cobweb").setToField("set_b")
Scene12.addChild(ROUTE86)
ROUTE87 = ROUTEObject().setFromNode("Animate").setFromField("c_changed").setToNode("cobweb").setToField("set_c")
Scene12.addChild(ROUTE87)
ROUTE88 = ROUTEObject().setFromNode("Animate").setFromField("d_changed").setToNode("cobweb").setToField("set_d")
Scene12.addChild(ROUTE88)
ROUTE89 = ROUTEObject().setFromNode("Animate").setFromField("pdelta_changed").setToNode("cobweb").setToField("set_pdelta")
Scene12.addChild(ROUTE89)
ROUTE90 = ROUTEObject().setFromNode("Animate").setFromField("tdelta_changed").setToNode("cobweb").setToField("set_tdelta")
Scene12.addChild(ROUTE90)
X3D0.setScene(Scene12)

X3D0.toFileX3D("flowers7.new.x3d")
