# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("mirro2.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/mirro2.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("a mirrored sphere")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

Viewpoint8 = ViewpointObject()
Viewpoint8.setPosition([0,5,100])
Viewpoint8.setDescription("Switch background and images texture")

Scene7.addChild(Viewpoint8)
Background9 = BackgroundObject()
Background9.setDEF("cube")
Background9.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])
Background9.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])
Background9.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])
Background9.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])
Background9.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"])
Background9.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"])

Scene7.addChild(Background9)
Transform10 = TransformObject()

Shape11 = ShapeObject()

Appearance12 = AppearanceObject()

Material13 = MaterialObject()
Material13.setDiffuseColor([0.7,0.7,0.7])
Material13.setSpecularColor([0.5,0.5,0.5])

Appearance12.setMaterial(Material13)
ComposedCubeMapTexture14 = ComposedCubeMapTextureObject()

ImageTexture15 = ImageTextureObject()
ImageTexture15.setDEF("backShader")
ImageTexture15.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture14.setBack(ImageTexture15)
ImageTexture16 = ImageTextureObject()
ImageTexture16.setDEF("bottomShader")
ImageTexture16.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture14.setBottom(ImageTexture16)
ImageTexture17 = ImageTextureObject()
ImageTexture17.setDEF("frontShader")
ImageTexture17.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture14.setFront(ImageTexture17)
ImageTexture18 = ImageTextureObject()
ImageTexture18.setDEF("leftShader")
ImageTexture18.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture14.setLeft(ImageTexture18)
ImageTexture19 = ImageTextureObject()
ImageTexture19.setDEF("rightShader")
ImageTexture19.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture14.setRight(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setDEF("topShader")
ImageTexture20.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture14.setTop(ImageTexture20)
Appearance12.setTexture(ComposedCubeMapTexture14)
ComposedShader21 = ComposedShaderObject()
ComposedShader21.setDEF("cobweb")
ComposedShader21.setLanguage("GLSL")


ComposedShader21.addComments(CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFVEC3F)
field22.setName("chromaticDispertion")
field22.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field22.setValue("0.98 1 1.033")

ComposedShader21.addField(field22)
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFINT32)
field23.setName("cube")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field23.setValue("0")

ComposedShader21.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFFLOAT)
field24.setName("bias")
field24.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field24.setValue("0.5")

ComposedShader21.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFFLOAT)
field25.setName("scale")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field25.setValue("0.5")

ComposedShader21.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFFLOAT)
field26.setName("power")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setValue("2")

ComposedShader21.addField(field26)
ShaderPart27 = ShaderPartObject()
ShaderPart27.setType("VERTEX")
ShaderPart27.setUrl(["../shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])

ComposedShader21.addParts(ShaderPart27)
ShaderPart28 = ShaderPartObject()
ShaderPart28.setType("FRAGMENT")
ShaderPart28.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/shaders/mix.fs"])

ComposedShader21.addParts(ShaderPart28)
Appearance12.addShaders(ComposedShader21)
ComposedShader29 = ComposedShaderObject()
ComposedShader29.setDEF("x3dom")
ComposedShader29.setLanguage("GLSL")


ComposedShader29.addComments(CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFVEC3F)
field30.setName("chromaticDispertion")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("0.98 1 1.033")

ComposedShader29.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFINT32)
field31.setName("cube")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("0")

ComposedShader29.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("bias")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("0.5")

ComposedShader29.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFFLOAT)
field33.setName("scale")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("0.5")

ComposedShader29.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFFLOAT)
field34.setName("power")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setValue("2")

ComposedShader29.addField(field34)
ShaderPart35 = ShaderPartObject()
ShaderPart35.setType("VERTEX")
ShaderPart35.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])

ComposedShader29.addParts(ShaderPart35)
ShaderPart36 = ShaderPartObject()
ShaderPart36.setType("FRAGMENT")
ShaderPart36.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/shaders/mix.fs"])

ComposedShader29.addParts(ShaderPart36)
Appearance12.addShaders(ComposedShader29)
Shape11.setAppearance(Appearance12)
Sphere37 = SphereObject()
Sphere37.setRadius(30)

Shape11.setGeometry(Sphere37)
Transform10.addChild(Shape11)
Script38 = ScriptObject()
Script38.setDEF("UrlSelector")
Script38.setDirectOutput(True)

field39 = fieldObject()
field39.setType(fieldObject.TYPE_MFSTRING)
field39.setName("frontUrls")
field39.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field39.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script38.addField(field39)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_MFSTRING)
field40.setName("backUrls")
field40.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field40.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script38.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_MFSTRING)
field41.setName("leftUrls")
field41.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field41.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script38.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_MFSTRING)
field42.setName("rightUrls")
field42.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field42.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script38.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_MFSTRING)
field43.setName("topUrls")
field43.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field43.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script38.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_MFSTRING)
field44.setName("bottomUrls")
field44.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field44.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script38.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_MFSTRING)
field45.setName("front_changed")
field45.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script38.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_MFSTRING)
field46.setName("back_changed")
field46.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script38.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_MFSTRING)
field47.setName("left_changed")
field47.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script38.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_MFSTRING)
field48.setName("right_changed")
field48.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script38.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_MFSTRING)
field49.setName("top_changed")
field49.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script38.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_MFSTRING)
field50.setName("bottom_changed")
field50.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script38.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFFLOAT)
field51.setName("set_fraction")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script38.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFINT32)
field52.setName("old")
field52.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field52.setValue("-1")

Script38.addField(field52)

Script38.setSourceCode("ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }\n"+
"")
Transform10.addChild(Script38)
TimeSensor53 = TimeSensorObject()
TimeSensor53.setDEF("Clock")
TimeSensor53.setCycleInterval(45)
TimeSensor53.setLoop(True)

Transform10.addChild(TimeSensor53)
ROUTE54 = ROUTEObject()
ROUTE54.setFromNode("Clock")
ROUTE54.setFromField("fraction_changed")
ROUTE54.setToNode("UrlSelector")
ROUTE54.setToField("set_fraction")

Transform10.addChild(ROUTE54)
ROUTE55 = ROUTEObject()
ROUTE55.setFromNode("UrlSelector")
ROUTE55.setFromField("front_changed")
ROUTE55.setToNode("cube")
ROUTE55.setToField("frontUrl")

Transform10.addChild(ROUTE55)
ROUTE56 = ROUTEObject()
ROUTE56.setFromNode("UrlSelector")
ROUTE56.setFromField("back_changed")
ROUTE56.setToNode("cube")
ROUTE56.setToField("backUrl")

Transform10.addChild(ROUTE56)
ROUTE57 = ROUTEObject()
ROUTE57.setFromNode("UrlSelector")
ROUTE57.setFromField("left_changed")
ROUTE57.setToNode("cube")
ROUTE57.setToField("leftUrl")

Transform10.addChild(ROUTE57)
ROUTE58 = ROUTEObject()
ROUTE58.setFromNode("UrlSelector")
ROUTE58.setFromField("right_changed")
ROUTE58.setToNode("cube")
ROUTE58.setToField("rightUrl")

Transform10.addChild(ROUTE58)
ROUTE59 = ROUTEObject()
ROUTE59.setFromNode("UrlSelector")
ROUTE59.setFromField("top_changed")
ROUTE59.setToNode("cube")
ROUTE59.setToField("topUrl")

Transform10.addChild(ROUTE59)
ROUTE60 = ROUTEObject()
ROUTE60.setFromNode("UrlSelector")
ROUTE60.setFromField("bottom_changed")
ROUTE60.setToNode("cube")
ROUTE60.setToField("bottomUrl")

Transform10.addChild(ROUTE60)
ROUTE61 = ROUTEObject()
ROUTE61.setFromNode("UrlSelector")
ROUTE61.setFromField("front_changed")
ROUTE61.setToNode("frontShader")
ROUTE61.setToField("url")

Transform10.addChild(ROUTE61)
ROUTE62 = ROUTEObject()
ROUTE62.setFromNode("UrlSelector")
ROUTE62.setFromField("back_changed")
ROUTE62.setToNode("backShader")
ROUTE62.setToField("url")

Transform10.addChild(ROUTE62)
ROUTE63 = ROUTEObject()
ROUTE63.setFromNode("UrlSelector")
ROUTE63.setFromField("left_changed")
ROUTE63.setToNode("leftShader")
ROUTE63.setToField("url")

Transform10.addChild(ROUTE63)
ROUTE64 = ROUTEObject()
ROUTE64.setFromNode("UrlSelector")
ROUTE64.setFromField("right_changed")
ROUTE64.setToNode("rightShader")
ROUTE64.setToField("url")

Transform10.addChild(ROUTE64)
ROUTE65 = ROUTEObject()
ROUTE65.setFromNode("UrlSelector")
ROUTE65.setFromField("top_changed")
ROUTE65.setToNode("topShader")
ROUTE65.setToField("url")

Transform10.addChild(ROUTE65)
ROUTE66 = ROUTEObject()
ROUTE66.setFromNode("UrlSelector")
ROUTE66.setFromField("bottom_changed")
ROUTE66.setToNode("bottomShader")
ROUTE66.setToField("url")

Transform10.addChild(ROUTE66)
Scene7.addChild(Transform10)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/mirror2.new.x3d")
