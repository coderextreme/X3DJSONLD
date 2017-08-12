# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("flowers7.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("a flower")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()

Scene7.addChild(NavigationInfo8)

Scene7.addComments(CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
Background9 = BackgroundObject()
Background9.setDEF("background")
Background9.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])
Background9.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])
Background9.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])
Background9.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])
Background9.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])
Background9.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])

Scene7.addChild(Background9)
Viewpoint10 = ViewpointObject()
Viewpoint10.setPosition([0,0,40])
Viewpoint10.setDescription("Transparent rose")

Scene7.addChild(Viewpoint10)
Transform11 = TransformObject()
Transform11.setDEF("Rose01")

Shape12 = ShapeObject()

Appearance13 = AppearanceObject()

Material14 = MaterialObject()
Material14.setDiffuseColor([0.7,0.7,0.7])
Material14.setSpecularColor([0.5,0.5,0.5])

Appearance13.setMaterial(Material14)
ComposedCubeMapTexture15 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture15.setDEF("texture")

ImageTexture16 = ImageTextureObject()
ImageTexture16.setDEF("backShader")
ImageTexture16.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture15.setBack(ImageTexture16)
ImageTexture17 = ImageTextureObject()
ImageTexture17.setDEF("bottomShader")
ImageTexture17.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture15.setBottom(ImageTexture17)
ImageTexture18 = ImageTextureObject()
ImageTexture18.setDEF("frontShader")
ImageTexture18.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture15.setFront(ImageTexture18)
ImageTexture19 = ImageTextureObject()
ImageTexture19.setDEF("leftShader")
ImageTexture19.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture15.setLeft(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setDEF("rightShader")
ImageTexture20.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture15.setRight(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setDEF("topShader")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture15.setTop(ImageTexture21)
Appearance13.setTexture(ComposedCubeMapTexture15)
ComposedShader22 = ComposedShaderObject()
ComposedShader22.setDEF("x3dom")
ComposedShader22.setLanguage("GLSL")

field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFINT32)
field23.setName("cube")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field23.setValue("0")

ComposedShader22.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFVEC3F)
field24.setName("chromaticDispertion")
field24.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field24.setValue("0.98 1 1.033")

ComposedShader22.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFFLOAT)
field25.setName("bias")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field25.setValue("0.5")

ComposedShader22.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFFLOAT)
field26.setName("scale")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setValue("0.5")

ComposedShader22.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFFLOAT)
field27.setName("power")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field27.setValue("2")

ComposedShader22.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFFLOAT)
field28.setName("a")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("10")

ComposedShader22.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFFLOAT)
field29.setName("b")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("1")

ComposedShader22.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFFLOAT)
field30.setName("c")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("20")

ComposedShader22.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("d")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("20")

ComposedShader22.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("tdelta")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("0")

ComposedShader22.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFFLOAT)
field33.setName("pdelta")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("0")

ComposedShader22.addField(field33)

ComposedShader22.addComments(CommentsBlock("field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field"))
ShaderPart34 = ShaderPartObject()
ShaderPart34.setType("VERTEX")
ShaderPart34.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom_flowers_chromatic.vs"])

ComposedShader22.addParts(ShaderPart34)
ShaderPart35 = ShaderPartObject()
ShaderPart35.setType("FRAGMENT")
ShaderPart35.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/common.fs"])

ComposedShader22.addParts(ShaderPart35)
Appearance13.addShaders(ComposedShader22)
ComposedShader36 = ComposedShaderObject()
ComposedShader36.setDEF("cobweb")
ComposedShader36.setLanguage("GLSL")

field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFNODE)
field37.setName("cube")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture38 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture38.setUSE("texture")

field37.addChild(ComposedCubeMapTexture38)
ComposedShader36.addField(field37)
field39 = fieldObject()
field39.setType(fieldObject.TYPE_SFVEC3F)
field39.setName("chromaticDispertion")
field39.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field39.setValue("0.98 1 1.033")

ComposedShader36.addField(field39)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFFLOAT)
field40.setName("bias")
field40.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field40.setValue("0.5")

ComposedShader36.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFFLOAT)
field41.setName("scale")
field41.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field41.setValue("0.5")

ComposedShader36.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFFLOAT)
field42.setName("power")
field42.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field42.setValue("2")

ComposedShader36.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFFLOAT)
field43.setName("a")
field43.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field43.setValue("10")

ComposedShader36.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFFLOAT)
field44.setName("b")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field44.setValue("1")

ComposedShader36.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFFLOAT)
field45.setName("c")
field45.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field45.setValue("20")

ComposedShader36.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFFLOAT)
field46.setName("d")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field46.setValue("20")

ComposedShader36.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFFLOAT)
field47.setName("tdelta")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field47.setValue("0")

ComposedShader36.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFFLOAT)
field48.setName("pdelta")
field48.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field48.setValue("0")

ComposedShader36.addField(field48)
ShaderPart49 = ShaderPartObject()
ShaderPart49.setType("VERTEX")
ShaderPart49.setUrl(["../shaders/cobweb_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb_flowers_chromatic.vs"])

ComposedShader36.addParts(ShaderPart49)
ShaderPart50 = ShaderPartObject()
ShaderPart50.setType("FRAGMENT")
ShaderPart50.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/shaders/common.fs"])

ComposedShader36.addParts(ShaderPart50)
Appearance13.addShaders(ComposedShader36)
Shape12.setAppearance(Appearance13)
Sphere51 = SphereObject()
Sphere51.setSolid(False)

Shape12.setGeometry(Sphere51)
Transform11.addChild(Shape12)
Scene7.addChild(Transform11)
Script52 = ScriptObject()
Script52.setDEF("UrlSelector")
Script52.setDirectOutput(True)

field53 = fieldObject()
field53.setType(fieldObject.TYPE_MFSTRING)
field53.setName("frontUrls")
field53.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field53.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script52.addField(field53)
field54 = fieldObject()
field54.setType(fieldObject.TYPE_MFSTRING)
field54.setName("backUrls")
field54.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field54.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script52.addField(field54)
field55 = fieldObject()
field55.setType(fieldObject.TYPE_MFSTRING)
field55.setName("leftUrls")
field55.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field55.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script52.addField(field55)
field56 = fieldObject()
field56.setType(fieldObject.TYPE_MFSTRING)
field56.setName("rightUrls")
field56.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field56.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script52.addField(field56)
field57 = fieldObject()
field57.setType(fieldObject.TYPE_MFSTRING)
field57.setName("topUrls")
field57.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field57.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script52.addField(field57)
field58 = fieldObject()
field58.setType(fieldObject.TYPE_MFSTRING)
field58.setName("bottomUrls")
field58.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field58.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script52.addField(field58)
field59 = fieldObject()
field59.setType(fieldObject.TYPE_MFSTRING)
field59.setName("front")
field59.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script52.addField(field59)
field60 = fieldObject()
field60.setType(fieldObject.TYPE_MFSTRING)
field60.setName("back")
field60.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script52.addField(field60)
field61 = fieldObject()
field61.setType(fieldObject.TYPE_MFSTRING)
field61.setName("left")
field61.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script52.addField(field61)
field62 = fieldObject()
field62.setType(fieldObject.TYPE_MFSTRING)
field62.setName("right")
field62.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script52.addField(field62)
field63 = fieldObject()
field63.setType(fieldObject.TYPE_MFSTRING)
field63.setName("top")
field63.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script52.addField(field63)
field64 = fieldObject()
field64.setType(fieldObject.TYPE_MFSTRING)
field64.setName("bottom")
field64.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script52.addField(field64)
field65 = fieldObject()
field65.setType(fieldObject.TYPE_SFFLOAT)
field65.setName("set_fraction")
field65.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script52.addField(field65)
field66 = fieldObject()
field66.setType(fieldObject.TYPE_SFINT32)
field66.setName("old")
field66.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field66.setValue("-1")

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
Script67 = ScriptObject()
Script67.setDEF("Animate")
Script67.setDirectOutput(True)

field68 = fieldObject()
field68.setType(fieldObject.TYPE_SFFLOAT)
field68.setName("set_fraction")
field68.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script67.addField(field68)
field69 = fieldObject()
field69.setType(fieldObject.TYPE_SFFLOAT)
field69.setName("a")
field69.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field69.setValue("10")

Script67.addField(field69)
field70 = fieldObject()
field70.setType(fieldObject.TYPE_SFFLOAT)
field70.setName("b")
field70.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field70.setValue("1")

Script67.addField(field70)
field71 = fieldObject()
field71.setType(fieldObject.TYPE_SFFLOAT)
field71.setName("c")
field71.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field71.setValue("20")

Script67.addField(field71)
field72 = fieldObject()
field72.setType(fieldObject.TYPE_SFFLOAT)
field72.setName("d")
field72.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field72.setValue("20")

Script67.addField(field72)
field73 = fieldObject()
field73.setType(fieldObject.TYPE_SFFLOAT)
field73.setName("tdelta")
field73.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field73.setValue("0")

Script67.addField(field73)
field74 = fieldObject()
field74.setType(fieldObject.TYPE_SFFLOAT)
field74.setName("pdelta")
field74.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field74.setValue("0")

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
TimeSensor75 = TimeSensorObject()
TimeSensor75.setDEF("TourTime")
TimeSensor75.setCycleInterval(5)
TimeSensor75.setLoop(True)

Scene7.addChild(TimeSensor75)
ROUTE76 = ROUTEObject()
ROUTE76.setFromNode("TourTime")
ROUTE76.setFromField("fraction_changed")
ROUTE76.setToNode("Animate")
ROUTE76.setToField("set_fraction")

Scene7.addChild(ROUTE76)
ROUTE77 = ROUTEObject()
ROUTE77.setFromNode("Animate")
ROUTE77.setFromField("a")
ROUTE77.setToNode("cobweb")
ROUTE77.setToField("a")

Scene7.addChild(ROUTE77)
ROUTE78 = ROUTEObject()
ROUTE78.setFromNode("Animate")
ROUTE78.setFromField("b")
ROUTE78.setToNode("cobweb")
ROUTE78.setToField("b")

Scene7.addChild(ROUTE78)
ROUTE79 = ROUTEObject()
ROUTE79.setFromNode("Animate")
ROUTE79.setFromField("c")
ROUTE79.setToNode("cobweb")
ROUTE79.setToField("c")

Scene7.addChild(ROUTE79)
ROUTE80 = ROUTEObject()
ROUTE80.setFromNode("Animate")
ROUTE80.setFromField("d")
ROUTE80.setToNode("cobweb")
ROUTE80.setToField("d")

Scene7.addChild(ROUTE80)
ROUTE81 = ROUTEObject()
ROUTE81.setFromNode("Animate")
ROUTE81.setFromField("pdelta")
ROUTE81.setToNode("cobweb")
ROUTE81.setToField("pdelta")

Scene7.addChild(ROUTE81)
ROUTE82 = ROUTEObject()
ROUTE82.setFromNode("Animate")
ROUTE82.setFromField("tdelta")
ROUTE82.setToNode("cobweb")
ROUTE82.setToField("tdelta")

Scene7.addChild(ROUTE82)
ROUTE83 = ROUTEObject()
ROUTE83.setFromNode("Animate")
ROUTE83.setFromField("a")
ROUTE83.setToNode("x3dom")
ROUTE83.setToField("a")

Scene7.addChild(ROUTE83)
ROUTE84 = ROUTEObject()
ROUTE84.setFromNode("Animate")
ROUTE84.setFromField("b")
ROUTE84.setToNode("x3dom")
ROUTE84.setToField("b")

Scene7.addChild(ROUTE84)
ROUTE85 = ROUTEObject()
ROUTE85.setFromNode("Animate")
ROUTE85.setFromField("c")
ROUTE85.setToNode("x3dom")
ROUTE85.setToField("c")

Scene7.addChild(ROUTE85)
ROUTE86 = ROUTEObject()
ROUTE86.setFromNode("Animate")
ROUTE86.setFromField("d")
ROUTE86.setToNode("x3dom")
ROUTE86.setToField("d")

Scene7.addChild(ROUTE86)
ROUTE87 = ROUTEObject()
ROUTE87.setFromNode("Animate")
ROUTE87.setFromField("pdelta")
ROUTE87.setToNode("x3dom")
ROUTE87.setToField("pdelta")

Scene7.addChild(ROUTE87)
ROUTE88 = ROUTEObject()
ROUTE88.setFromNode("Animate")
ROUTE88.setFromField("tdelta")
ROUTE88.setToNode("x3dom")
ROUTE88.setToField("tdelta")

Scene7.addChild(ROUTE88)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/flowers7.new.x3d")
