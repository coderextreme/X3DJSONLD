from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
component2 = component()
component2.setName("EnvironmentalEffects")
component2.setLevel(3)

head1.addComponent(component2)
component3 = component()
component3.setName("Shaders")
component3.setLevel(1)

head1.addComponent(component3)
component4 = component()
component4.setName("CubeMapTexturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = component()
component5.setName("Texturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = component()
component6.setName("Rendering")
component6.setLevel(1)

head1.addComponent(component6)
component7 = component()
component7.setName("Shape")
component7.setLevel(1)

head1.addComponent(component7)
component8 = component()
component8.setName("Grouping")
component8.setLevel(1)

head1.addComponent(component8)
meta9 = meta()
meta9.setName("title")
meta9.setContent("mirror.x3d")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("creator")
meta10.setContent("John Carlson")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("generator")
meta11.setContent("manual")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("identifier")
meta12.setContent("https://coderextreme.net/X3DJSONLD/mirror.x3d")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("description")
meta13.setContent("sphere with alternating backgrounds")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = Scene()
Viewpoint15 = Viewpoint()
Viewpoint15.setPosition([0,5,100])
Viewpoint15.setDescription("Switch background and images texture")

Scene14.addChildren(Viewpoint15)
TextureBackground16 = TextureBackground()
ImageTexture17 = ImageTexture()
ImageTexture17.setDEF("leftBack")
ImageTexture17.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

TextureBackground16.setLeft(ImageTexture17)
ImageTexture18 = ImageTexture()
ImageTexture18.setDEF("rightBack")
ImageTexture18.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

TextureBackground16.setRight(ImageTexture18)
ImageTexture19 = ImageTexture()
ImageTexture19.setDEF("frontBack")
ImageTexture19.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

TextureBackground16.setFront(ImageTexture19)
ImageTexture20 = ImageTexture()
ImageTexture20.setDEF("backBack")
ImageTexture20.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

TextureBackground16.setBack(ImageTexture20)
ImageTexture21 = ImageTexture()
ImageTexture21.setDEF("topBack")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

TextureBackground16.setTop(ImageTexture21)
ImageTexture22 = ImageTexture()
ImageTexture22.setDEF("bottomBack")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

TextureBackground16.setBottom(ImageTexture22)

Scene14.addChildren(TextureBackground16)
Transform23 = Transform()
Shape24 = Shape()
Appearance25 = Appearance()
Material26 = Material()
Material26.setDiffuseColor([0.7,0.7,0.7])
Material26.setSpecularColor([0.5,0.5,0.5])

Appearance25.setMaterial(Material26)
ComposedCubeMapTexture27 = ComposedCubeMapTexture()
ImageTexture28 = ImageTexture()
ImageTexture28.setDEF("backShader")
ImageTexture28.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture27.setBack(ImageTexture28)
ImageTexture29 = ImageTexture()
ImageTexture29.setDEF("bottomShader")
ImageTexture29.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture27.setBottom(ImageTexture29)
ImageTexture30 = ImageTexture()
ImageTexture30.setDEF("frontShader")
ImageTexture30.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture27.setFront(ImageTexture30)
ImageTexture31 = ImageTexture()
ImageTexture31.setDEF("leftShader")
ImageTexture31.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture27.setLeft(ImageTexture31)
ImageTexture32 = ImageTexture()
ImageTexture32.setDEF("rightShader")
ImageTexture32.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture27.setRight(ImageTexture32)
ImageTexture33 = ImageTexture()
ImageTexture33.setDEF("topShader")
ImageTexture33.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture27.setTop(ImageTexture33)

Appearance25.setTexture(ComposedCubeMapTexture27)
ComposedShader34 = ComposedShader()
ComposedShader34.setDEF("x3dom")
ComposedShader34.setLanguage("GLSL")
field35 = field()
field35.setName("chromaticDispertion")
field35.setAccessType("inputOutput")
field35.setType("SFVec3f")
field35.setValue("0.98 1 1.033")

ComposedShader34.addField(field35)
field36 = field()
field36.setName("cube")
field36.setAccessType("inputOutput")
field36.setType("SFInt32")
field36.setValue("0")

ComposedShader34.addField(field36)
field37 = field()
field37.setName("bias")
field37.setAccessType("inputOutput")
field37.setType("SFFloat")
field37.setValue("0.5")

ComposedShader34.addField(field37)
field38 = field()
field38.setName("scale")
field38.setAccessType("inputOutput")
field38.setType("SFFloat")
field38.setValue("0.5")

ComposedShader34.addField(field38)
field39 = field()
field39.setName("power")
field39.setAccessType("inputOutput")
field39.setType("SFFloat")
field39.setValue("2")

ComposedShader34.addField(field39)
ShaderPart40 = ShaderPart()
ShaderPart40.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart40.setType("VERTEX")

ComposedShader34.addParts(ShaderPart40)
ShaderPart41 = ShaderPart()
ShaderPart41.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])
ShaderPart41.setType("FRAGMENT")

ComposedShader34.addParts(ShaderPart41)

Appearance25.addShaders(ComposedShader34)
ComposedShader42 = ComposedShader()
ComposedShader42.setDEF("x_ite")
ComposedShader42.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field43 = field()
field43.setName("chromaticDispertion")
field43.setAccessType("inputOutput")
field43.setType("SFVec3f")
field43.setValue("0.98 1 1.033")

ComposedShader42.addField(field43)
field44 = field()
field44.setName("cube")
field44.setAccessType("inputOutput")
field44.setType("SFInt32")
field44.setValue("0")

ComposedShader42.addField(field44)
field45 = field()
field45.setName("bias")
field45.setAccessType("inputOutput")
field45.setType("SFFloat")
field45.setValue("0.5")

ComposedShader42.addField(field45)
field46 = field()
field46.setName("scale")
field46.setAccessType("inputOutput")
field46.setType("SFFloat")
field46.setValue("0.5")

ComposedShader42.addField(field46)
field47 = field()
field47.setName("power")
field47.setAccessType("inputOutput")
field47.setType("SFFloat")
field47.setValue("2")

ComposedShader42.addField(field47)
ShaderPart48 = ShaderPart()
ShaderPart48.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart48.setType("VERTEX")

ComposedShader42.addParts(ShaderPart48)
ShaderPart49 = ShaderPart()
ShaderPart49.setUrl(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"])
ShaderPart49.setType("FRAGMENT")

ComposedShader42.addParts(ShaderPart49)

Appearance25.addShaders(ComposedShader42)

Shape24.setAppearance(Appearance25)
Sphere50 = Sphere()
Sphere50.setRadius(30)

Shape24.setGeometry(Sphere50)

Transform23.addChildren(Shape24)
Script51 = Script()
Script51.setDEF("UrlSelector")
Script51.setDirectOutput(True)
field52 = field()
field52.setName("frontUrls")
field52.setType("MFString")
field52.setAccessType("initializeOnly")
field52.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script51.addField(field52)
field53 = field()
field53.setName("backUrls")
field53.setType("MFString")
field53.setAccessType("initializeOnly")
field53.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script51.addField(field53)
field54 = field()
field54.setName("leftUrls")
field54.setType("MFString")
field54.setAccessType("initializeOnly")
field54.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script51.addField(field54)
field55 = field()
field55.setName("rightUrls")
field55.setType("MFString")
field55.setAccessType("initializeOnly")
field55.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script51.addField(field55)
field56 = field()
field56.setName("topUrls")
field56.setType("MFString")
field56.setAccessType("initializeOnly")
field56.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script51.addField(field56)
field57 = field()
field57.setName("bottomUrls")
field57.setType("MFString")
field57.setAccessType("initializeOnly")
field57.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script51.addField(field57)
field58 = field()
field58.setName("front_changed")
field58.setType("MFString")
field58.setAccessType("outputOnly")

Script51.addField(field58)
field59 = field()
field59.setName("back_changed")
field59.setType("MFString")
field59.setAccessType("outputOnly")

Script51.addField(field59)
field60 = field()
field60.setName("left_changed")
field60.setType("MFString")
field60.setAccessType("outputOnly")

Script51.addField(field60)
field61 = field()
field61.setName("right_changed")
field61.setType("MFString")
field61.setAccessType("outputOnly")

Script51.addField(field61)
field62 = field()
field62.setName("top_changed")
field62.setType("MFString")
field62.setAccessType("outputOnly")

Script51.addField(field62)
field63 = field()
field63.setName("bottom_changed")
field63.setType("MFString")
field63.setAccessType("outputOnly")

Script51.addField(field63)
field64 = field()
field64.setName("set_fraction")
field64.setType("SFFloat")
field64.setAccessType("inputOnly")

Script51.addField(field64)
field65 = field()
field65.setName("old")
field65.setType("SFInt32")
field65.setAccessType("inputOutput")
field65.setValue("-1")

Script51.addField(field65)

Script51.setSourceCode('''ecmascript:\n"+
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

Transform23.addChildren(Script51)
TimeSensor66 = TimeSensor()
TimeSensor66.setDEF("Clock")
TimeSensor66.setCycleInterval(45)
TimeSensor66.setLoop(True)

Transform23.addChildren(TimeSensor66)
ROUTE67 = ROUTE()
ROUTE67.setFromNode("Clock")
ROUTE67.setFromField("fraction_changed")
ROUTE67.setToNode("UrlSelector")
ROUTE67.setToField("set_fraction")

Transform23.addChildren(ROUTE67)
ROUTE68 = ROUTE()
ROUTE68.setFromNode("UrlSelector")
ROUTE68.setFromField("front_changed")
ROUTE68.setToNode("frontBack")
ROUTE68.setToField("url")

Transform23.addChildren(ROUTE68)
ROUTE69 = ROUTE()
ROUTE69.setFromNode("UrlSelector")
ROUTE69.setFromField("back_changed")
ROUTE69.setToNode("backBack")
ROUTE69.setToField("url")

Transform23.addChildren(ROUTE69)
ROUTE70 = ROUTE()
ROUTE70.setFromNode("UrlSelector")
ROUTE70.setFromField("left_changed")
ROUTE70.setToNode("leftBack")
ROUTE70.setToField("url")

Transform23.addChildren(ROUTE70)
ROUTE71 = ROUTE()
ROUTE71.setFromNode("UrlSelector")
ROUTE71.setFromField("right_changed")
ROUTE71.setToNode("rightBack")
ROUTE71.setToField("url")

Transform23.addChildren(ROUTE71)
ROUTE72 = ROUTE()
ROUTE72.setFromNode("UrlSelector")
ROUTE72.setFromField("top_changed")
ROUTE72.setToNode("topBack")
ROUTE72.setToField("url")

Transform23.addChildren(ROUTE72)
ROUTE73 = ROUTE()
ROUTE73.setFromNode("UrlSelector")
ROUTE73.setFromField("bottom_changed")
ROUTE73.setToNode("bottomBack")
ROUTE73.setToField("url")

Transform23.addChildren(ROUTE73)
ROUTE74 = ROUTE()
ROUTE74.setFromNode("UrlSelector")
ROUTE74.setFromField("front_changed")
ROUTE74.setToNode("frontShader")
ROUTE74.setToField("url")

Transform23.addChildren(ROUTE74)
ROUTE75 = ROUTE()
ROUTE75.setFromNode("UrlSelector")
ROUTE75.setFromField("back_changed")
ROUTE75.setToNode("backShader")
ROUTE75.setToField("url")

Transform23.addChildren(ROUTE75)
ROUTE76 = ROUTE()
ROUTE76.setFromNode("UrlSelector")
ROUTE76.setFromField("left_changed")
ROUTE76.setToNode("leftShader")
ROUTE76.setToField("url")

Transform23.addChildren(ROUTE76)
ROUTE77 = ROUTE()
ROUTE77.setFromNode("UrlSelector")
ROUTE77.setFromField("right_changed")
ROUTE77.setToNode("rightShader")
ROUTE77.setToField("url")

Transform23.addChildren(ROUTE77)
ROUTE78 = ROUTE()
ROUTE78.setFromNode("UrlSelector")
ROUTE78.setFromField("top_changed")
ROUTE78.setToNode("topShader")
ROUTE78.setToField("url")

Transform23.addChildren(ROUTE78)
ROUTE79 = ROUTE()
ROUTE79.setFromNode("UrlSelector")
ROUTE79.setFromField("bottom_changed")
ROUTE79.setToNode("bottomShader")
ROUTE79.setToField("url")

Transform23.addChildren(ROUTE79)

Scene14.addChildren(Transform23)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/mirror_RoundTrip.x3d")
