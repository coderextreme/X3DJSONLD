# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 = X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = headObject()
component2 = componentObject()
component2.setName("EnvironmentalEffects")
component2.setLevel(3)

head1.addComponent(component2)
component3 = componentObject()
component3.setName("Shaders")
component3.setLevel(1)

head1.addComponent(component3)
component4 = componentObject()
component4.setName("CubeMapTexturing")
component4.setLevel(1)

head1.addComponent(component4)
meta5 = metaObject()
meta5.setName("title")
meta5.setContent("mirror.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("creator")
meta6.setContent("John Carlson")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("generator")
meta7.setContent("manual")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/mirror.x3d")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("description")
meta9.setContent("sphere with alternating backgrounds")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = SceneObject()
Viewpoint11 = ViewpointObject()
Viewpoint11.setPosition([0,5,100])
Viewpoint11.setDescription("Switch background and images texture")

Scene10.addChildren(Viewpoint11)
TextureBackground12 = TextureBackgroundObject()
ImageTexture13 = ImageTextureObject()
ImageTexture13.setDEF("leftBack")
ImageTexture13.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])

TextureBackground12.setLeftTexture(ImageTexture13)
ImageTexture14 = ImageTextureObject()
ImageTexture14.setDEF("rightBack")
ImageTexture14.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])

TextureBackground12.setRightTexture(ImageTexture14)
ImageTexture15 = ImageTextureObject()
ImageTexture15.setDEF("frontBack")
ImageTexture15.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])

TextureBackground12.setFrontTexture(ImageTexture15)
ImageTexture16 = ImageTextureObject()
ImageTexture16.setDEF("backBack")
ImageTexture16.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])

TextureBackground12.setBackTexture(ImageTexture16)
ImageTexture17 = ImageTextureObject()
ImageTexture17.setDEF("topBack")
ImageTexture17.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"])

TextureBackground12.setTopTexture(ImageTexture17)
ImageTexture18 = ImageTextureObject()
ImageTexture18.setDEF("bottomBack")
ImageTexture18.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"])

TextureBackground12.setBottomTexture(ImageTexture18)

Scene10.addChildren(TextureBackground12)
Transform19 = TransformObject()
Shape20 = ShapeObject()
Appearance21 = AppearanceObject()
Material22 = MaterialObject()
Material22.setDiffuseColor([0.7,0.7,0.7])
Material22.setSpecularColor([0.5,0.5,0.5])

Appearance21.setMaterial(Material22)
ComposedCubeMapTexture23 = ComposedCubeMapTextureObject()
ImageTexture24 = ImageTextureObject()
ImageTexture24.setDEF("backShader")
ImageTexture24.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture23.setBack(ImageTexture24)
ImageTexture25 = ImageTextureObject()
ImageTexture25.setDEF("bottomShader")
ImageTexture25.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture23.setBottom(ImageTexture25)
ImageTexture26 = ImageTextureObject()
ImageTexture26.setDEF("frontShader")
ImageTexture26.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture23.setFront(ImageTexture26)
ImageTexture27 = ImageTextureObject()
ImageTexture27.setDEF("leftShader")
ImageTexture27.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture23.setLeft(ImageTexture27)
ImageTexture28 = ImageTextureObject()
ImageTexture28.setDEF("rightShader")
ImageTexture28.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture23.setRight(ImageTexture28)
ImageTexture29 = ImageTextureObject()
ImageTexture29.setDEF("topShader")
ImageTexture29.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture23.setTop(ImageTexture29)

Appearance21.setTexture(ComposedCubeMapTexture23)
ComposedShader30 = ComposedShaderObject()
ComposedShader30.setDEF("x3dom")
ComposedShader30.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field31 = fieldObject()
field31.setName("chromaticDispertion")
field31.setAccessType("inputOutput")
field31.setType("SFVec3f")
field31.setValue("0.98 1 1.033")

ComposedShader30.addField(field31)
field32 = fieldObject()
field32.setName("cube")
field32.setAccessType("inputOutput")
field32.setType("SFInt32")
field32.setValue("0")

ComposedShader30.addField(field32)
field33 = fieldObject()
field33.setName("bias")
field33.setAccessType("inputOutput")
field33.setType("SFFloat")
field33.setValue("0.5")

ComposedShader30.addField(field33)
field34 = fieldObject()
field34.setName("scale")
field34.setAccessType("inputOutput")
field34.setType("SFFloat")
field34.setValue("0.5")

ComposedShader30.addField(field34)
field35 = fieldObject()
field35.setName("power")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("2")

ComposedShader30.addField(field35)
ShaderPart36 = ShaderPartObject()
ShaderPart36.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart36.setType("VERTEX")

ComposedShader30.addParts(ShaderPart36)
ShaderPart37 = ShaderPartObject()
ShaderPart37.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])
ShaderPart37.setType("FRAGMENT")

ComposedShader30.addParts(ShaderPart37)

Appearance21.addShaders(ComposedShader30)
ComposedShader38 = ComposedShaderObject()
ComposedShader38.setDEF("x_ite")
ComposedShader38.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field39 = fieldObject()
field39.setName("chromaticDispertion")
field39.setAccessType("inputOutput")
field39.setType("SFVec3f")
field39.setValue("0.98 1 1.033")

ComposedShader38.addField(field39)
field40 = fieldObject()
field40.setName("cube")
field40.setAccessType("inputOutput")
field40.setType("SFInt32")
field40.setValue("0")

ComposedShader38.addField(field40)
field41 = fieldObject()
field41.setName("bias")
field41.setAccessType("inputOutput")
field41.setType("SFFloat")
field41.setValue("0.5")

ComposedShader38.addField(field41)
field42 = fieldObject()
field42.setName("scale")
field42.setAccessType("inputOutput")
field42.setType("SFFloat")
field42.setValue("0.5")

ComposedShader38.addField(field42)
field43 = fieldObject()
field43.setName("power")
field43.setAccessType("inputOutput")
field43.setType("SFFloat")
field43.setValue("2")

ComposedShader38.addField(field43)
ShaderPart44 = ShaderPartObject()
ShaderPart44.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x_ite.vs"])
ShaderPart44.setType("VERTEX")

ComposedShader38.addParts(ShaderPart44)
ShaderPart45 = ShaderPartObject()
ShaderPart45.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/mix.fs"])
ShaderPart45.setType("FRAGMENT")

ComposedShader38.addParts(ShaderPart45)

Appearance21.addShaders(ComposedShader38)

Shape20.setAppearance(Appearance21)
Sphere46 = SphereObject()
Sphere46.setRadius(30)

Shape20.setGeometry(Sphere46)

Transform19.addChildren(Shape20)
Script47 = ScriptObject()
Script47.setDEF("UrlSelector")
Script47.setDirectOutput(True)
field48 = fieldObject()
field48.setName("frontUrls")
field48.setType("MFString")
field48.setAccessType("initializeOnly")
field48.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script47.addField(field48)
field49 = fieldObject()
field49.setName("backUrls")
field49.setType("MFString")
field49.setAccessType("initializeOnly")
field49.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script47.addField(field49)
field50 = fieldObject()
field50.setName("leftUrls")
field50.setType("MFString")
field50.setAccessType("initializeOnly")
field50.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script47.addField(field50)
field51 = fieldObject()
field51.setName("rightUrls")
field51.setType("MFString")
field51.setAccessType("initializeOnly")
field51.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script47.addField(field51)
field52 = fieldObject()
field52.setName("topUrls")
field52.setType("MFString")
field52.setAccessType("initializeOnly")
field52.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script47.addField(field52)
field53 = fieldObject()
field53.setName("bottomUrls")
field53.setType("MFString")
field53.setAccessType("initializeOnly")
field53.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script47.addField(field53)
field54 = fieldObject()
field54.setName("front_changed")
field54.setType("MFString")
field54.setAccessType("outputOnly")

Script47.addField(field54)
field55 = fieldObject()
field55.setName("back_changed")
field55.setType("MFString")
field55.setAccessType("outputOnly")

Script47.addField(field55)
field56 = fieldObject()
field56.setName("left_changed")
field56.setType("MFString")
field56.setAccessType("outputOnly")

Script47.addField(field56)
field57 = fieldObject()
field57.setName("right_changed")
field57.setType("MFString")
field57.setAccessType("outputOnly")

Script47.addField(field57)
field58 = fieldObject()
field58.setName("top_changed")
field58.setType("MFString")
field58.setAccessType("outputOnly")

Script47.addField(field58)
field59 = fieldObject()
field59.setName("bottom_changed")
field59.setType("MFString")
field59.setAccessType("outputOnly")

Script47.addField(field59)
field60 = fieldObject()
field60.setName("set_fraction")
field60.setType("SFFloat")
field60.setAccessType("inputOnly")

Script47.addField(field60)
field61 = fieldObject()
field61.setName("old")
field61.setType("SFInt32")
field61.setAccessType("inputOutput")
field61.setValue("-1")

Script47.addField(field61)

Script47.setSourceCode('''ecmascript:\n"+
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
"        }''')

Transform19.addChildren(Script47)
TimeSensor62 = TimeSensorObject()
TimeSensor62.setDEF("Clock")
TimeSensor62.setCycleInterval(45)
TimeSensor62.setLoop(True)

Transform19.addChildren(TimeSensor62)
ROUTE63 = ROUTEObject()
ROUTE63.setFromNode("Clock")
ROUTE63.setFromField("fraction_changed")
ROUTE63.setToNode("UrlSelector")
ROUTE63.setToField("set_fraction")

Transform19.addChildren(ROUTE63)
ROUTE64 = ROUTEObject()
ROUTE64.setFromNode("UrlSelector")
ROUTE64.setFromField("front_changed")
ROUTE64.setToNode("frontBack")
ROUTE64.setToField("url")

Transform19.addChildren(ROUTE64)
ROUTE65 = ROUTEObject()
ROUTE65.setFromNode("UrlSelector")
ROUTE65.setFromField("back_changed")
ROUTE65.setToNode("backBack")
ROUTE65.setToField("url")

Transform19.addChildren(ROUTE65)
ROUTE66 = ROUTEObject()
ROUTE66.setFromNode("UrlSelector")
ROUTE66.setFromField("left_changed")
ROUTE66.setToNode("leftBack")
ROUTE66.setToField("url")

Transform19.addChildren(ROUTE66)
ROUTE67 = ROUTEObject()
ROUTE67.setFromNode("UrlSelector")
ROUTE67.setFromField("right_changed")
ROUTE67.setToNode("rightBack")
ROUTE67.setToField("url")

Transform19.addChildren(ROUTE67)
ROUTE68 = ROUTEObject()
ROUTE68.setFromNode("UrlSelector")
ROUTE68.setFromField("top_changed")
ROUTE68.setToNode("topBack")
ROUTE68.setToField("url")

Transform19.addChildren(ROUTE68)
ROUTE69 = ROUTEObject()
ROUTE69.setFromNode("UrlSelector")
ROUTE69.setFromField("bottom_changed")
ROUTE69.setToNode("bottomBack")
ROUTE69.setToField("url")

Transform19.addChildren(ROUTE69)
ROUTE70 = ROUTEObject()
ROUTE70.setFromNode("UrlSelector")
ROUTE70.setFromField("front_changed")
ROUTE70.setToNode("frontShader")
ROUTE70.setToField("url")

Transform19.addChildren(ROUTE70)
ROUTE71 = ROUTEObject()
ROUTE71.setFromNode("UrlSelector")
ROUTE71.setFromField("back_changed")
ROUTE71.setToNode("backShader")
ROUTE71.setToField("url")

Transform19.addChildren(ROUTE71)
ROUTE72 = ROUTEObject()
ROUTE72.setFromNode("UrlSelector")
ROUTE72.setFromField("left_changed")
ROUTE72.setToNode("leftShader")
ROUTE72.setToField("url")

Transform19.addChildren(ROUTE72)
ROUTE73 = ROUTEObject()
ROUTE73.setFromNode("UrlSelector")
ROUTE73.setFromField("right_changed")
ROUTE73.setToNode("rightShader")
ROUTE73.setToField("url")

Transform19.addChildren(ROUTE73)
ROUTE74 = ROUTEObject()
ROUTE74.setFromNode("UrlSelector")
ROUTE74.setFromField("top_changed")
ROUTE74.setToNode("topShader")
ROUTE74.setToField("url")

Transform19.addChildren(ROUTE74)
ROUTE75 = ROUTEObject()
ROUTE75.setFromNode("UrlSelector")
ROUTE75.setFromField("bottom_changed")
ROUTE75.setToNode("bottomShader")
ROUTE75.setToField("url")

Transform19.addChildren(ROUTE75)

Scene10.addChildren(Transform19)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/mirror.new.x3d")
