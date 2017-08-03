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
Background9 = BackgroundObject().setDEF("background").setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]).setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]).setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]).setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]).setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]).setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])
Scene7.addChild(Background9)
Viewpoint10 = ViewpointObject().setPosition([0,0,40]).setDescription("Transparent rose")
Scene7.addChild(Viewpoint10)
Transform11 = TransformObject().setDEF("Rose01")
Shape12 = ShapeObject()
Appearance13 = AppearanceObject()
Material14 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance13.setMaterial(Material14)
ComposedCubeMapTexture15 = ComposedCubeMapTextureObject().setDEF("texture")
ImageTexture16 = ImageTextureObject().setDEF("backShader").setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])
ComposedCubeMapTexture15.setBack(ImageTexture16)
ImageTexture17 = ImageTextureObject().setDEF("bottomShader").setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])
ComposedCubeMapTexture15.setBottom(ImageTexture17)
ImageTexture18 = ImageTextureObject().setDEF("frontShader").setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])
ComposedCubeMapTexture15.setFront(ImageTexture18)
ImageTexture19 = ImageTextureObject().setDEF("leftShader").setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])
ComposedCubeMapTexture15.setLeft(ImageTexture19)
ImageTexture20 = ImageTextureObject().setDEF("rightShader").setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])
ComposedCubeMapTexture15.setRight(ImageTexture20)
ImageTexture21 = ImageTextureObject().setDEF("topShader").setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])
ComposedCubeMapTexture15.setTop(ImageTexture21)
Appearance13.setTexture(ComposedCubeMapTexture15)
ComposedShader22 = ComposedShaderObject().setDEF("x3dom").setLanguage("GLSL")
field23 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader22.addField(field23)
field24 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033")
ComposedShader22.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader22.addField(field25)
field26 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader22.addField(field26)
field27 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader22.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
ComposedShader22.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1")
ComposedShader22.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("20")
ComposedShader22.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("20")
ComposedShader22.addField(field31)
field32 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader22.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader22.addField(field33)

ComposedShader22.addComments(CommentsBlock("field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field"))
ShaderPart34 = ShaderPartObject().setType("VERTEX").setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom_flowers_chromatic.vs"])
ComposedShader22.addParts(ShaderPart34)
ShaderPart35 = ShaderPartObject().setType("FRAGMENT").setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/common.fs"])
ComposedShader22.addParts(ShaderPart35)
Appearance13.addShaders(ComposedShader22)
ComposedShader36 = ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
field37 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
ComposedCubeMapTexture38 = ComposedCubeMapTextureObject().setUSE("texture")
field37.addChild(ComposedCubeMapTexture38)
ComposedShader36.addField(field37)
field39 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033")
ComposedShader36.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5")
ComposedShader36.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5")
ComposedShader36.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("2")
ComposedShader36.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10")
ComposedShader36.addField(field43)
field44 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1")
ComposedShader36.addField(field44)
field45 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
ComposedShader36.addField(field45)
field46 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20")
ComposedShader36.addField(field46)
field47 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
ComposedShader36.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0")
ComposedShader36.addField(field48)
ShaderPart49 = ShaderPartObject().setType("VERTEX").setUrl(["../shaders/cobweb_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb_flowers_chromatic.vs"])
ComposedShader36.addParts(ShaderPart49)
ShaderPart50 = ShaderPartObject().setType("FRAGMENT").setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/shaders/common.fs"])
ComposedShader36.addParts(ShaderPart50)
Appearance13.addShaders(ComposedShader36)
Shape12.setAppearance(Appearance13)
Sphere51 = SphereObject().setSolid(False)
Shape12.setGeometry(Sphere51)
Transform11.addChild(Shape12)
Scene7.addChild(Transform11)
Script52 = ScriptObject().setDEF("UrlSelector").setDirectOutput(True)
field53 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("frontUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")
Script52.addField(field53)
field54 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("backUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")
Script52.addField(field54)
field55 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("leftUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")
Script52.addField(field55)
field56 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("rightUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")
Script52.addField(field56)
field57 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("topUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")
Script52.addField(field57)
field58 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("bottomUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")
Script52.addField(field58)
field59 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("front").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script52.addField(field59)
field60 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("back").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script52.addField(field60)
field61 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("left").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script52.addField(field61)
field62 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("right").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script52.addField(field62)
field63 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("top").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script52.addField(field63)
field64 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("bottom").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script52.addField(field64)
field65 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script52.addField(field65)
field66 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-1")
Script52.addField(field66)

Script52.setSourceCode("ecmascript:\n"+
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
"        }\n"+
"")
Scene7.addChild(Script52)

Scene7.addComments(CommentsBlock("<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>"))
Script67 = ScriptObject().setDEF("Animate").setDirectOutput(True)
field68 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script67.addField(field68)
field69 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
Script67.addField(field69)
field70 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1")
Script67.addField(field70)
field71 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("20")
Script67.addField(field71)
field72 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("20")
Script67.addField(field72)
field73 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
Script67.addField(field73)
field74 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
Script67.addField(field74)

Script67.setSourceCode("ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	if (choice == 0) {\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"	} else if (choice == 1) {\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"	} else if (choice == 2) {\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"	} else if (choice == 3) {\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
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
"}\n"+
"")
Scene7.addChild(Script67)
TimeSensor75 = TimeSensorObject().setDEF("TourTime").setCycleInterval(5).setLoop(True)
Scene7.addChild(TimeSensor75)
ROUTE76 = ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction")
Scene7.addChild(ROUTE76)
ROUTE77 = ROUTEObject().setFromNode("Animate").setFromField("a").setToNode("cobweb").setToField("a")
Scene7.addChild(ROUTE77)
ROUTE78 = ROUTEObject().setFromNode("Animate").setFromField("b").setToNode("cobweb").setToField("b")
Scene7.addChild(ROUTE78)
ROUTE79 = ROUTEObject().setFromNode("Animate").setFromField("c").setToNode("cobweb").setToField("c")
Scene7.addChild(ROUTE79)
ROUTE80 = ROUTEObject().setFromNode("Animate").setFromField("d").setToNode("cobweb").setToField("d")
Scene7.addChild(ROUTE80)
ROUTE81 = ROUTEObject().setFromNode("Animate").setFromField("pdelta").setToNode("cobweb").setToField("pdelta")
Scene7.addChild(ROUTE81)
ROUTE82 = ROUTEObject().setFromNode("Animate").setFromField("tdelta").setToNode("cobweb").setToField("tdelta")
Scene7.addChild(ROUTE82)
ROUTE83 = ROUTEObject().setFromNode("Animate").setFromField("a").setToNode("x3dom").setToField("a")
Scene7.addChild(ROUTE83)
ROUTE84 = ROUTEObject().setFromNode("Animate").setFromField("b").setToNode("x3dom").setToField("b")
Scene7.addChild(ROUTE84)
ROUTE85 = ROUTEObject().setFromNode("Animate").setFromField("c").setToNode("x3dom").setToField("c")
Scene7.addChild(ROUTE85)
ROUTE86 = ROUTEObject().setFromNode("Animate").setFromField("d").setToNode("x3dom").setToField("d")
Scene7.addChild(ROUTE86)
ROUTE87 = ROUTEObject().setFromNode("Animate").setFromField("pdelta").setToNode("x3dom").setToField("pdelta")
Scene7.addChild(ROUTE87)
ROUTE88 = ROUTEObject().setFromNode("Animate").setFromField("tdelta").setToNode("x3dom").setToField("tdelta")
Scene7.addChild(ROUTE88)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/flowers7.new.x3d")
