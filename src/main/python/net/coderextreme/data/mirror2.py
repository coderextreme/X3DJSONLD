# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 = X3DObject()
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
meta4.setContent("mirro2.x3d")

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
meta7.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("description")
meta8.setContent("a mirrored sphere")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = SceneObject()
Viewpoint10 = ViewpointObject()
Viewpoint10.setPosition([0,5,100])
Viewpoint10.setDescription("Switch background and images texture")

Scene9.addChildren(Viewpoint10)
Background11 = BackgroundObject()
Background11.setDEF("cube")
Background11.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])
Background11.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])
Background11.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])
Background11.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])
Background11.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])
Background11.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

Scene9.addChildren(Background11)
Transform12 = TransformObject()
Shape13 = ShapeObject()
Appearance14 = AppearanceObject()
Material15 = MaterialObject()
Material15.setDiffuseColor([0.7,0.7,0.7])
Material15.setSpecularColor([0.5,0.5,0.5])

Appearance14.setMaterial(Material15)
ComposedCubeMapTexture16 = ComposedCubeMapTextureObject()
ImageTexture17 = ImageTextureObject()
ImageTexture17.setDEF("backShader")
ImageTexture17.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture16.setBack(ImageTexture17)
ImageTexture18 = ImageTextureObject()
ImageTexture18.setDEF("bottomShader")
ImageTexture18.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture16.setBottom(ImageTexture18)
ImageTexture19 = ImageTextureObject()
ImageTexture19.setDEF("frontShader")
ImageTexture19.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture16.setFront(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setDEF("leftShader")
ImageTexture20.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture16.setLeft(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setDEF("rightShader")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture16.setRight(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setDEF("topShader")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture16.setTop(ImageTexture22)

Appearance14.setTexture(ComposedCubeMapTexture16)
ComposedShader23 = ComposedShaderObject()
ComposedShader23.setDEF("x_ite")
ComposedShader23.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field24 = fieldObject()
field24.setName("chromaticDispertion")
field24.setAccessType("inputOutput")
field24.setType("SFVec3f")
field24.setValue("0.98 1 1.033")

ComposedShader23.addField(field24)
field25 = fieldObject()
field25.setName("cube")
field25.setAccessType("inputOutput")
field25.setType("SFInt32")
field25.setValue("0")

ComposedShader23.addField(field25)
field26 = fieldObject()
field26.setName("bias")
field26.setAccessType("inputOutput")
field26.setType("SFFloat")
field26.setValue("0.5")

ComposedShader23.addField(field26)
field27 = fieldObject()
field27.setName("scale")
field27.setAccessType("inputOutput")
field27.setType("SFFloat")
field27.setValue("0.5")

ComposedShader23.addField(field27)
field28 = fieldObject()
field28.setName("power")
field28.setAccessType("inputOutput")
field28.setType("SFFloat")
field28.setValue("2")

ComposedShader23.addField(field28)
ShaderPart29 = ShaderPartObject()
ShaderPart29.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart29.setType("VERTEX")

ComposedShader23.addParts(ShaderPart29)
ShaderPart30 = ShaderPartObject()
ShaderPart30.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])
ShaderPart30.setType("FRAGMENT")

ComposedShader23.addParts(ShaderPart30)

Appearance14.addShaders(ComposedShader23)
ComposedShader31 = ComposedShaderObject()
ComposedShader31.setDEF("x3dom")
ComposedShader31.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field32 = fieldObject()
field32.setName("chromaticDispertion")
field32.setAccessType("inputOutput")
field32.setType("SFVec3f")
field32.setValue("0.98 1 1.033")

ComposedShader31.addField(field32)
field33 = fieldObject()
field33.setName("cube")
field33.setAccessType("inputOutput")
field33.setType("SFInt32")
field33.setValue("0")

ComposedShader31.addField(field33)
field34 = fieldObject()
field34.setName("bias")
field34.setAccessType("inputOutput")
field34.setType("SFFloat")
field34.setValue("0.5")

ComposedShader31.addField(field34)
field35 = fieldObject()
field35.setName("scale")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("0.5")

ComposedShader31.addField(field35)
field36 = fieldObject()
field36.setName("power")
field36.setAccessType("inputOutput")
field36.setType("SFFloat")
field36.setValue("2")

ComposedShader31.addField(field36)
ShaderPart37 = ShaderPartObject()
ShaderPart37.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart37.setType("VERTEX")

ComposedShader31.addParts(ShaderPart37)
ShaderPart38 = ShaderPartObject()
ShaderPart38.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])
ShaderPart38.setType("FRAGMENT")

ComposedShader31.addParts(ShaderPart38)

Appearance14.addShaders(ComposedShader31)

Shape13.setAppearance(Appearance14)
Sphere39 = SphereObject()
Sphere39.setRadius(30)

Shape13.setGeometry(Sphere39)

Transform12.addChildren(Shape13)
Script40 = ScriptObject()
Script40.setDEF("UrlSelector")
Script40.setDirectOutput(True)
field41 = fieldObject()
field41.setName("frontUrls")
field41.setType("MFString")
field41.setAccessType("initializeOnly")
field41.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script40.addField(field41)
field42 = fieldObject()
field42.setName("backUrls")
field42.setType("MFString")
field42.setAccessType("initializeOnly")
field42.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script40.addField(field42)
field43 = fieldObject()
field43.setName("leftUrls")
field43.setType("MFString")
field43.setAccessType("initializeOnly")
field43.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script40.addField(field43)
field44 = fieldObject()
field44.setName("rightUrls")
field44.setType("MFString")
field44.setAccessType("initializeOnly")
field44.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script40.addField(field44)
field45 = fieldObject()
field45.setName("topUrls")
field45.setType("MFString")
field45.setAccessType("initializeOnly")
field45.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script40.addField(field45)
field46 = fieldObject()
field46.setName("bottomUrls")
field46.setType("MFString")
field46.setAccessType("initializeOnly")
field46.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script40.addField(field46)
field47 = fieldObject()
field47.setName("front_changed")
field47.setType("MFString")
field47.setAccessType("outputOnly")

Script40.addField(field47)
field48 = fieldObject()
field48.setName("back_changed")
field48.setType("MFString")
field48.setAccessType("outputOnly")

Script40.addField(field48)
field49 = fieldObject()
field49.setName("left_changed")
field49.setType("MFString")
field49.setAccessType("outputOnly")

Script40.addField(field49)
field50 = fieldObject()
field50.setName("right_changed")
field50.setType("MFString")
field50.setAccessType("outputOnly")

Script40.addField(field50)
field51 = fieldObject()
field51.setName("top_changed")
field51.setType("MFString")
field51.setAccessType("outputOnly")

Script40.addField(field51)
field52 = fieldObject()
field52.setName("bottom_changed")
field52.setType("MFString")
field52.setAccessType("outputOnly")

Script40.addField(field52)
field53 = fieldObject()
field53.setName("set_fraction")
field53.setType("SFFloat")
field53.setAccessType("inputOnly")

Script40.addField(field53)
field54 = fieldObject()
field54.setName("old")
field54.setType("SFInt32")
field54.setAccessType("inputOutput")
field54.setValue("-1")

Script40.addField(field54)

Script40.setSourceCode('''ecmascript:\n"+
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
"        }''')

Transform12.addChildren(Script40)
TimeSensor55 = TimeSensorObject()
TimeSensor55.setDEF("Clock")
TimeSensor55.setCycleInterval(45)
TimeSensor55.setLoop(True)

Transform12.addChildren(TimeSensor55)
ROUTE56 = ROUTEObject()
ROUTE56.setFromNode("Clock")
ROUTE56.setFromField("fraction_changed")
ROUTE56.setToNode("UrlSelector")
ROUTE56.setToField("set_fraction")

Transform12.addChildren(ROUTE56)
ROUTE57 = ROUTEObject()
ROUTE57.setFromNode("UrlSelector")
ROUTE57.setFromField("front_changed")
ROUTE57.setToNode("cube")
ROUTE57.setToField("frontUrl")

Transform12.addChildren(ROUTE57)
ROUTE58 = ROUTEObject()
ROUTE58.setFromNode("UrlSelector")
ROUTE58.setFromField("back_changed")
ROUTE58.setToNode("cube")
ROUTE58.setToField("backUrl")

Transform12.addChildren(ROUTE58)
ROUTE59 = ROUTEObject()
ROUTE59.setFromNode("UrlSelector")
ROUTE59.setFromField("left_changed")
ROUTE59.setToNode("cube")
ROUTE59.setToField("leftUrl")

Transform12.addChildren(ROUTE59)
ROUTE60 = ROUTEObject()
ROUTE60.setFromNode("UrlSelector")
ROUTE60.setFromField("right_changed")
ROUTE60.setToNode("cube")
ROUTE60.setToField("rightUrl")

Transform12.addChildren(ROUTE60)
ROUTE61 = ROUTEObject()
ROUTE61.setFromNode("UrlSelector")
ROUTE61.setFromField("top_changed")
ROUTE61.setToNode("cube")
ROUTE61.setToField("topUrl")

Transform12.addChildren(ROUTE61)
ROUTE62 = ROUTEObject()
ROUTE62.setFromNode("UrlSelector")
ROUTE62.setFromField("bottom_changed")
ROUTE62.setToNode("cube")
ROUTE62.setToField("bottomUrl")

Transform12.addChildren(ROUTE62)
ROUTE63 = ROUTEObject()
ROUTE63.setFromNode("UrlSelector")
ROUTE63.setFromField("front_changed")
ROUTE63.setToNode("frontShader")
ROUTE63.setToField("url")

Transform12.addChildren(ROUTE63)
ROUTE64 = ROUTEObject()
ROUTE64.setFromNode("UrlSelector")
ROUTE64.setFromField("back_changed")
ROUTE64.setToNode("backShader")
ROUTE64.setToField("url")

Transform12.addChildren(ROUTE64)
ROUTE65 = ROUTEObject()
ROUTE65.setFromNode("UrlSelector")
ROUTE65.setFromField("left_changed")
ROUTE65.setToNode("leftShader")
ROUTE65.setToField("url")

Transform12.addChildren(ROUTE65)
ROUTE66 = ROUTEObject()
ROUTE66.setFromNode("UrlSelector")
ROUTE66.setFromField("right_changed")
ROUTE66.setToNode("rightShader")
ROUTE66.setToField("url")

Transform12.addChildren(ROUTE66)
ROUTE67 = ROUTEObject()
ROUTE67.setFromNode("UrlSelector")
ROUTE67.setFromField("top_changed")
ROUTE67.setToNode("topShader")
ROUTE67.setToField("url")

Transform12.addChildren(ROUTE67)
ROUTE68 = ROUTEObject()
ROUTE68.setFromNode("UrlSelector")
ROUTE68.setFromField("bottom_changed")
ROUTE68.setToNode("bottomShader")
ROUTE68.setToField("url")

Transform12.addChildren(ROUTE68)

Scene9.addChildren(Transform12)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/mirror2.new.x3d")
