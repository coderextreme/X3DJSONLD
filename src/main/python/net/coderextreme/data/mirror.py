# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

component2 = componentObject()
component2.setName("EnvironmentalEffects")
component2.setLevel(3)

head1.addComponent(component2)
meta3 = metaObject()
meta3.setName("title")
meta3.setContent("mirror.x3d")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("generator")
meta5.setContent("manual")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/mirror.x3d")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("description")
meta7.setContent("sphere with alternating backgrounds")

head1.addMeta(meta7)
X3D0.setHead(head1)
Scene8 = SceneObject()

Viewpoint9 = ViewpointObject()
Viewpoint9.setPosition([0,5,100])
Viewpoint9.setDescription("Switch background and images texture")

Scene8.addChild(Viewpoint9)
TextureBackground10 = TextureBackgroundObject()

ImageTexture11 = ImageTextureObject()
ImageTexture11.setDEF("leftBack")
ImageTexture11.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])

TextureBackground10.setLeftTexture(ImageTexture11)
ImageTexture12 = ImageTextureObject()
ImageTexture12.setDEF("rightBack")
ImageTexture12.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])

TextureBackground10.setRightTexture(ImageTexture12)
ImageTexture13 = ImageTextureObject()
ImageTexture13.setDEF("frontBack")
ImageTexture13.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])

TextureBackground10.setFrontTexture(ImageTexture13)
ImageTexture14 = ImageTextureObject()
ImageTexture14.setDEF("backBack")
ImageTexture14.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])

TextureBackground10.setBackTexture(ImageTexture14)
ImageTexture15 = ImageTextureObject()
ImageTexture15.setDEF("topBack")
ImageTexture15.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"])

TextureBackground10.setTopTexture(ImageTexture15)
ImageTexture16 = ImageTextureObject()
ImageTexture16.setDEF("bottomBack")
ImageTexture16.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"])

TextureBackground10.setBottomTexture(ImageTexture16)
Scene8.addChild(TextureBackground10)
Transform17 = TransformObject()

Shape18 = ShapeObject()

Appearance19 = AppearanceObject()

Material20 = MaterialObject()
Material20.setDiffuseColor([0.7,0.7,0.7])
Material20.setSpecularColor([0.5,0.5,0.5])

Appearance19.setMaterial(Material20)
ComposedCubeMapTexture21 = ComposedCubeMapTextureObject()

ImageTexture22 = ImageTextureObject()
ImageTexture22.setDEF("backShader")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture21.setBack(ImageTexture22)
ImageTexture23 = ImageTextureObject()
ImageTexture23.setDEF("bottomShader")
ImageTexture23.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture21.setBottom(ImageTexture23)
ImageTexture24 = ImageTextureObject()
ImageTexture24.setDEF("frontShader")
ImageTexture24.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture21.setFront(ImageTexture24)
ImageTexture25 = ImageTextureObject()
ImageTexture25.setDEF("leftShader")
ImageTexture25.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture21.setLeft(ImageTexture25)
ImageTexture26 = ImageTextureObject()
ImageTexture26.setDEF("rightShader")
ImageTexture26.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture21.setRight(ImageTexture26)
ImageTexture27 = ImageTextureObject()
ImageTexture27.setDEF("topShader")
ImageTexture27.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture21.setTop(ImageTexture27)
Appearance19.setTexture(ComposedCubeMapTexture21)
ComposedShader28 = ComposedShaderObject()
ComposedShader28.setDEF("x3dom")
ComposedShader28.setLanguage("GLSL")


ComposedShader28.addComments(CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFVEC3F)
field29.setName("chromaticDispertion")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("0.98 1 1.033")

ComposedShader28.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFINT32)
field30.setName("cube")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("0")

ComposedShader28.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("bias")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("0.5")

ComposedShader28.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("scale")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("0.5")

ComposedShader28.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFFLOAT)
field33.setName("power")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("2")

ComposedShader28.addField(field33)
ShaderPart34 = ShaderPartObject()
ShaderPart34.setType("VERTEX")
ShaderPart34.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])

ComposedShader28.addParts(ShaderPart34)
ShaderPart35 = ShaderPartObject()
ShaderPart35.setType("FRAGMENT")
ShaderPart35.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/shaders/mix.fs"])

ComposedShader28.addParts(ShaderPart35)
Appearance19.addShaders(ComposedShader28)
ComposedShader36 = ComposedShaderObject()
ComposedShader36.setDEF("cobweb")
ComposedShader36.setLanguage("GLSL")


ComposedShader36.addComments(CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFVEC3F)
field37.setName("chromaticDispertion")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field37.setValue("0.98 1 1.033")

ComposedShader36.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFINT32)
field38.setName("cube")
field38.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field38.setValue("0")

ComposedShader36.addField(field38)
field39 = fieldObject()
field39.setType(fieldObject.TYPE_SFFLOAT)
field39.setName("bias")
field39.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field39.setValue("0.5")

ComposedShader36.addField(field39)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFFLOAT)
field40.setName("scale")
field40.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field40.setValue("0.5")

ComposedShader36.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFFLOAT)
field41.setName("power")
field41.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field41.setValue("2")

ComposedShader36.addField(field41)
ShaderPart42 = ShaderPartObject()
ShaderPart42.setType("VERTEX")
ShaderPart42.setUrl(["../shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])

ComposedShader36.addParts(ShaderPart42)
ShaderPart43 = ShaderPartObject()
ShaderPart43.setType("FRAGMENT")
ShaderPart43.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/shaders/mix.fs"])

ComposedShader36.addParts(ShaderPart43)
Appearance19.addShaders(ComposedShader36)
Shape18.setAppearance(Appearance19)
Sphere44 = SphereObject()
Sphere44.setRadius(30)

Shape18.setGeometry(Sphere44)
Transform17.addChild(Shape18)
Script45 = ScriptObject()
Script45.setDEF("UrlSelector")
Script45.setDirectOutput(True)

field46 = fieldObject()
field46.setType(fieldObject.TYPE_MFSTRING)
field46.setName("frontUrls")
field46.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field46.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script45.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_MFSTRING)
field47.setName("backUrls")
field47.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field47.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script45.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_MFSTRING)
field48.setName("leftUrls")
field48.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field48.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script45.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_MFSTRING)
field49.setName("rightUrls")
field49.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field49.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script45.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_MFSTRING)
field50.setName("topUrls")
field50.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field50.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script45.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_MFSTRING)
field51.setName("bottomUrls")
field51.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field51.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script45.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_MFSTRING)
field52.setName("front_changed")
field52.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script45.addField(field52)
field53 = fieldObject()
field53.setType(fieldObject.TYPE_MFSTRING)
field53.setName("back_changed")
field53.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script45.addField(field53)
field54 = fieldObject()
field54.setType(fieldObject.TYPE_MFSTRING)
field54.setName("left_changed")
field54.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script45.addField(field54)
field55 = fieldObject()
field55.setType(fieldObject.TYPE_MFSTRING)
field55.setName("right_changed")
field55.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script45.addField(field55)
field56 = fieldObject()
field56.setType(fieldObject.TYPE_MFSTRING)
field56.setName("top_changed")
field56.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script45.addField(field56)
field57 = fieldObject()
field57.setType(fieldObject.TYPE_MFSTRING)
field57.setName("bottom_changed")
field57.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script45.addField(field57)
field58 = fieldObject()
field58.setType(fieldObject.TYPE_SFFLOAT)
field58.setName("set_fraction")
field58.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script45.addField(field58)
field59 = fieldObject()
field59.setType(fieldObject.TYPE_SFINT32)
field59.setName("old")
field59.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field59.setValue("-1")

Script45.addField(field59)

Script45.setSourceCode("ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
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
Transform17.addChild(Script45)
TimeSensor60 = TimeSensorObject()
TimeSensor60.setDEF("Clock")
TimeSensor60.setCycleInterval(45)
TimeSensor60.setLoop(True)

Transform17.addChild(TimeSensor60)
ROUTE61 = ROUTEObject()
ROUTE61.setFromNode("Clock")
ROUTE61.setFromField("fraction_changed")
ROUTE61.setToNode("UrlSelector")
ROUTE61.setToField("set_fraction")

Transform17.addChild(ROUTE61)
ROUTE62 = ROUTEObject()
ROUTE62.setFromNode("UrlSelector")
ROUTE62.setFromField("front_changed")
ROUTE62.setToNode("frontBack")
ROUTE62.setToField("url")

Transform17.addChild(ROUTE62)
ROUTE63 = ROUTEObject()
ROUTE63.setFromNode("UrlSelector")
ROUTE63.setFromField("back_changed")
ROUTE63.setToNode("backBack")
ROUTE63.setToField("url")

Transform17.addChild(ROUTE63)
ROUTE64 = ROUTEObject()
ROUTE64.setFromNode("UrlSelector")
ROUTE64.setFromField("left_changed")
ROUTE64.setToNode("leftBack")
ROUTE64.setToField("url")

Transform17.addChild(ROUTE64)
ROUTE65 = ROUTEObject()
ROUTE65.setFromNode("UrlSelector")
ROUTE65.setFromField("right_changed")
ROUTE65.setToNode("rightBack")
ROUTE65.setToField("url")

Transform17.addChild(ROUTE65)
ROUTE66 = ROUTEObject()
ROUTE66.setFromNode("UrlSelector")
ROUTE66.setFromField("top_changed")
ROUTE66.setToNode("topBack")
ROUTE66.setToField("url")

Transform17.addChild(ROUTE66)
ROUTE67 = ROUTEObject()
ROUTE67.setFromNode("UrlSelector")
ROUTE67.setFromField("bottom_changed")
ROUTE67.setToNode("bottomBack")
ROUTE67.setToField("url")

Transform17.addChild(ROUTE67)
ROUTE68 = ROUTEObject()
ROUTE68.setFromNode("UrlSelector")
ROUTE68.setFromField("front_changed")
ROUTE68.setToNode("frontShader")
ROUTE68.setToField("url")

Transform17.addChild(ROUTE68)
ROUTE69 = ROUTEObject()
ROUTE69.setFromNode("UrlSelector")
ROUTE69.setFromField("back_changed")
ROUTE69.setToNode("backShader")
ROUTE69.setToField("url")

Transform17.addChild(ROUTE69)
ROUTE70 = ROUTEObject()
ROUTE70.setFromNode("UrlSelector")
ROUTE70.setFromField("left_changed")
ROUTE70.setToNode("leftShader")
ROUTE70.setToField("url")

Transform17.addChild(ROUTE70)
ROUTE71 = ROUTEObject()
ROUTE71.setFromNode("UrlSelector")
ROUTE71.setFromField("right_changed")
ROUTE71.setToNode("rightShader")
ROUTE71.setToField("url")

Transform17.addChild(ROUTE71)
ROUTE72 = ROUTEObject()
ROUTE72.setFromNode("UrlSelector")
ROUTE72.setFromField("top_changed")
ROUTE72.setToNode("topShader")
ROUTE72.setToField("url")

Transform17.addChild(ROUTE72)
ROUTE73 = ROUTEObject()
ROUTE73.setFromNode("UrlSelector")
ROUTE73.setFromField("bottom_changed")
ROUTE73.setToNode("bottomShader")
ROUTE73.setToField("url")

Transform17.addChild(ROUTE73)
Scene8.addChild(Transform17)
X3D0.setScene(Scene8)

X3D0.toFileX3D("../data/mirror.new.x3d")
