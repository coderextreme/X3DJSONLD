# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

component2 = componentObject()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = componentObject()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
meta4 = metaObject()
meta4.setName("title")
meta4.setContent("flowers7.x3d")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("generator")
meta6.setContent("manual")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("identifier")
meta7.setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("description")
meta8.setContent("a flower")

head1.addMeta(meta8)
X3D0.setHead(head1)
Scene9 = SceneObject()

NavigationInfo10 = NavigationInfoObject()

Scene9.addChild(NavigationInfo10)

Scene9.addComments(CommentsBlock("""Images courtesy of Paul Debevec's Light Probe Image Gallery"""))
Background11 = BackgroundObject()
Background11.setDEF("background")
Background11.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])
Background11.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])
Background11.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])
Background11.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])
Background11.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])
Background11.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])

Scene9.addChild(Background11)
Viewpoint12 = ViewpointObject()
Viewpoint12.setPosition([0,0,40])
Viewpoint12.setDescription("Transparent rose")

Scene9.addChild(Viewpoint12)
Transform13 = TransformObject()
Transform13.setDEF("Rose01")

Shape14 = ShapeObject()

Appearance15 = AppearanceObject()

Material16 = MaterialObject()
Material16.setDiffuseColor([0.7,0.7,0.7])
Material16.setSpecularColor([0.5,0.5,0.5])

Appearance15.setMaterial(Material16)
ComposedCubeMapTexture17 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture17.setDEF("texture")

ImageTexture18 = ImageTextureObject()
ImageTexture18.setDEF("backShader")
ImageTexture18.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture17.setBack(ImageTexture18)
ImageTexture19 = ImageTextureObject()
ImageTexture19.setDEF("bottomShader")
ImageTexture19.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture17.setBottom(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setDEF("frontShader")
ImageTexture20.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture17.setFront(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setDEF("leftShader")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture17.setLeft(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setDEF("rightShader")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture17.setRight(ImageTexture22)
ImageTexture23 = ImageTextureObject()
ImageTexture23.setDEF("topShader")
ImageTexture23.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture17.setTop(ImageTexture23)
Appearance15.setTexture(ComposedCubeMapTexture17)
ComposedShader24 = ComposedShaderObject()
ComposedShader24.setDEF("x3dom")
ComposedShader24.setLanguage("GLSL")

field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFINT32)
field25.setName("cube")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field25.setValue("0")

ComposedShader24.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFVEC3F)
field26.setName("chromaticDispertion")
field26.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field26.setValue("0.98 1 1.033")

ComposedShader24.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFFLOAT)
field27.setName("bias")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field27.setValue("0.5")

ComposedShader24.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFFLOAT)
field28.setName("scale")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("0.5")

ComposedShader24.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFFLOAT)
field29.setName("power")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("2")

ComposedShader24.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFFLOAT)
field30.setName("a")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("10")

ComposedShader24.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("b")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("1")

ComposedShader24.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("c")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("20")

ComposedShader24.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFFLOAT)
field33.setName("d")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("20")

ComposedShader24.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFFLOAT)
field34.setName("tdelta")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setValue("0")

ComposedShader24.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFFLOAT)
field35.setName("pdelta")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field35.setValue("0")

ComposedShader24.addField(field35)

ComposedShader24.addComments(CommentsBlock("""field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field"""))
ShaderPart36 = ShaderPartObject()
ShaderPart36.setType("VERTEX")
ShaderPart36.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom_flowers_chromatic.vs"])

ComposedShader24.addParts(ShaderPart36)
ShaderPart37 = ShaderPartObject()
ShaderPart37.setType("FRAGMENT")
ShaderPart37.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/common.fs"])

ComposedShader24.addParts(ShaderPart37)
Appearance15.addShaders(ComposedShader24)
ComposedShader38 = ComposedShaderObject()
ComposedShader38.setDEF("cobweb")
ComposedShader38.setLanguage("GLSL")

field39 = fieldObject()
field39.setType(fieldObject.TYPE_SFNODE)
field39.setName("cube")
field39.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture40 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture40.setUSE("texture")

field39.addChild(ComposedCubeMapTexture40)
ComposedShader38.addField(field39)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFVEC3F)
field41.setName("chromaticDispertion")
field41.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field41.setValue("0.98 1 1.033")

ComposedShader38.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFFLOAT)
field42.setName("bias")
field42.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field42.setValue("0.5")

ComposedShader38.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFFLOAT)
field43.setName("scale")
field43.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field43.setValue("0.5")

ComposedShader38.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFFLOAT)
field44.setName("power")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field44.setValue("2")

ComposedShader38.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFFLOAT)
field45.setName("a")
field45.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field45.setValue("10")

ComposedShader38.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFFLOAT)
field46.setName("b")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field46.setValue("1")

ComposedShader38.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFFLOAT)
field47.setName("c")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field47.setValue("20")

ComposedShader38.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFFLOAT)
field48.setName("d")
field48.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field48.setValue("20")

ComposedShader38.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFFLOAT)
field49.setName("tdelta")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field49.setValue("0")

ComposedShader38.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFFLOAT)
field50.setName("pdelta")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field50.setValue("0")

ComposedShader38.addField(field50)
ShaderPart51 = ShaderPartObject()
ShaderPart51.setType("VERTEX")
ShaderPart51.setUrl(["../shaders/cobweb_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb_flowers_chromatic.vs"])

ComposedShader38.addParts(ShaderPart51)
ShaderPart52 = ShaderPartObject()
ShaderPart52.setType("FRAGMENT")
ShaderPart52.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/shaders/common.fs"])

ComposedShader38.addParts(ShaderPart52)
Appearance15.addShaders(ComposedShader38)
Shape14.setAppearance(Appearance15)
Sphere53 = SphereObject()
Sphere53.setSolid(False)

Shape14.setGeometry(Sphere53)
Transform13.addChild(Shape14)
Scene9.addChild(Transform13)
Script54 = ScriptObject()
Script54.setDEF("UrlSelector")
Script54.setDirectOutput(True)

field55 = fieldObject()
field55.setType(fieldObject.TYPE_MFSTRING)
field55.setName("frontUrls")
field55.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field55.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script54.addField(field55)
field56 = fieldObject()
field56.setType(fieldObject.TYPE_MFSTRING)
field56.setName("backUrls")
field56.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field56.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script54.addField(field56)
field57 = fieldObject()
field57.setType(fieldObject.TYPE_MFSTRING)
field57.setName("leftUrls")
field57.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field57.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script54.addField(field57)
field58 = fieldObject()
field58.setType(fieldObject.TYPE_MFSTRING)
field58.setName("rightUrls")
field58.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field58.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script54.addField(field58)
field59 = fieldObject()
field59.setType(fieldObject.TYPE_MFSTRING)
field59.setName("topUrls")
field59.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field59.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script54.addField(field59)
field60 = fieldObject()
field60.setType(fieldObject.TYPE_MFSTRING)
field60.setName("bottomUrls")
field60.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field60.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script54.addField(field60)
field61 = fieldObject()
field61.setType(fieldObject.TYPE_MFSTRING)
field61.setName("front")
field61.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script54.addField(field61)
field62 = fieldObject()
field62.setType(fieldObject.TYPE_MFSTRING)
field62.setName("back")
field62.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script54.addField(field62)
field63 = fieldObject()
field63.setType(fieldObject.TYPE_MFSTRING)
field63.setName("left")
field63.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script54.addField(field63)
field64 = fieldObject()
field64.setType(fieldObject.TYPE_MFSTRING)
field64.setName("right")
field64.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script54.addField(field64)
field65 = fieldObject()
field65.setType(fieldObject.TYPE_MFSTRING)
field65.setName("top")
field65.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script54.addField(field65)
field66 = fieldObject()
field66.setType(fieldObject.TYPE_MFSTRING)
field66.setName("bottom")
field66.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script54.addField(field66)
field67 = fieldObject()
field67.setType(fieldObject.TYPE_SFFLOAT)
field67.setName("set_fraction")
field67.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script54.addField(field67)
field68 = fieldObject()
field68.setType(fieldObject.TYPE_SFINT32)
field68.setName("old")
field68.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field68.setValue("-1")

Script54.addField(field68)

Script54.setSourceCode("ecmascript:\n"+
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
Scene9.addChild(Script54)

Scene9.addComments(CommentsBlock("""<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>"""))
Script69 = ScriptObject()
Script69.setDEF("Animate")
Script69.setDirectOutput(True)

field70 = fieldObject()
field70.setType(fieldObject.TYPE_SFFLOAT)
field70.setName("set_fraction")
field70.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script69.addField(field70)
field71 = fieldObject()
field71.setType(fieldObject.TYPE_SFFLOAT)
field71.setName("a")
field71.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field71.setValue("10")

Script69.addField(field71)
field72 = fieldObject()
field72.setType(fieldObject.TYPE_SFFLOAT)
field72.setName("b")
field72.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field72.setValue("1")

Script69.addField(field72)
field73 = fieldObject()
field73.setType(fieldObject.TYPE_SFFLOAT)
field73.setName("c")
field73.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field73.setValue("20")

Script69.addField(field73)
field74 = fieldObject()
field74.setType(fieldObject.TYPE_SFFLOAT)
field74.setName("d")
field74.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field74.setValue("20")

Script69.addField(field74)
field75 = fieldObject()
field75.setType(fieldObject.TYPE_SFFLOAT)
field75.setName("tdelta")
field75.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field75.setValue("0")

Script69.addField(field75)
field76 = fieldObject()
field76.setType(fieldObject.TYPE_SFFLOAT)
field76.setName("pdelta")
field76.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field76.setValue("0")

Script69.addField(field76)

Script69.setSourceCode("ecmascript:\n"+
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
Scene9.addChild(Script69)
TimeSensor77 = TimeSensorObject()
TimeSensor77.setDEF("TourTime")
TimeSensor77.setCycleInterval(5)
TimeSensor77.setLoop(True)

Scene9.addChild(TimeSensor77)
ROUTE78 = ROUTEObject()
ROUTE78.setFromNode("TourTime")
ROUTE78.setFromField("fraction_changed")
ROUTE78.setToNode("Animate")
ROUTE78.setToField("set_fraction")

Scene9.addChild(ROUTE78)
ROUTE79 = ROUTEObject()
ROUTE79.setFromNode("Animate")
ROUTE79.setFromField("a")
ROUTE79.setToNode("cobweb")
ROUTE79.setToField("a")

Scene9.addChild(ROUTE79)
ROUTE80 = ROUTEObject()
ROUTE80.setFromNode("Animate")
ROUTE80.setFromField("b")
ROUTE80.setToNode("cobweb")
ROUTE80.setToField("b")

Scene9.addChild(ROUTE80)
ROUTE81 = ROUTEObject()
ROUTE81.setFromNode("Animate")
ROUTE81.setFromField("c")
ROUTE81.setToNode("cobweb")
ROUTE81.setToField("c")

Scene9.addChild(ROUTE81)
ROUTE82 = ROUTEObject()
ROUTE82.setFromNode("Animate")
ROUTE82.setFromField("d")
ROUTE82.setToNode("cobweb")
ROUTE82.setToField("d")

Scene9.addChild(ROUTE82)
ROUTE83 = ROUTEObject()
ROUTE83.setFromNode("Animate")
ROUTE83.setFromField("pdelta")
ROUTE83.setToNode("cobweb")
ROUTE83.setToField("pdelta")

Scene9.addChild(ROUTE83)
ROUTE84 = ROUTEObject()
ROUTE84.setFromNode("Animate")
ROUTE84.setFromField("tdelta")
ROUTE84.setToNode("cobweb")
ROUTE84.setToField("tdelta")

Scene9.addChild(ROUTE84)
ROUTE85 = ROUTEObject()
ROUTE85.setFromNode("Animate")
ROUTE85.setFromField("a")
ROUTE85.setToNode("x3dom")
ROUTE85.setToField("a")

Scene9.addChild(ROUTE85)
ROUTE86 = ROUTEObject()
ROUTE86.setFromNode("Animate")
ROUTE86.setFromField("b")
ROUTE86.setToNode("x3dom")
ROUTE86.setToField("b")

Scene9.addChild(ROUTE86)
ROUTE87 = ROUTEObject()
ROUTE87.setFromNode("Animate")
ROUTE87.setFromField("c")
ROUTE87.setToNode("x3dom")
ROUTE87.setToField("c")

Scene9.addChild(ROUTE87)
ROUTE88 = ROUTEObject()
ROUTE88.setFromNode("Animate")
ROUTE88.setFromField("d")
ROUTE88.setToNode("x3dom")
ROUTE88.setToField("d")

Scene9.addChild(ROUTE88)
ROUTE89 = ROUTEObject()
ROUTE89.setFromNode("Animate")
ROUTE89.setFromField("pdelta")
ROUTE89.setToNode("x3dom")
ROUTE89.setToField("pdelta")

Scene9.addChild(ROUTE89)
ROUTE90 = ROUTEObject()
ROUTE90.setFromNode("Animate")
ROUTE90.setFromField("tdelta")
ROUTE90.setToNode("x3dom")
ROUTE90.setToField("tdelta")

Scene9.addChild(ROUTE90)
X3D0.setScene(Scene9)

X3D0.toFileX3D("../data/flowers7.new.x3d")
