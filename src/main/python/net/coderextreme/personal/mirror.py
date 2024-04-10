import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Shaders")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("CubeMapTexturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Texturing")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Rendering")
component7.setLevel(1)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Shape")
component8.setLevel(4)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Grouping")
component9.setLevel(3)

head1.addComponent(component9)
component10 = x3d.component()
component10.setName("Core")
component10.setLevel(1)

head1.addComponent(component10)
meta11 = x3d.meta()
meta11.setName("title")
meta11.setContent("mirror.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("creator")
meta12.setContent("John Carlson")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("manual")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("description")
meta15.setContent("sphere with alternating backgrounds")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setPosition([0,5,100])
Viewpoint17.setDescription("Switch background and images texture")

Scene16.addChildren(Viewpoint17)
TextureBackground18 = x3d.TextureBackground()
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.setDEF("leftBackgroundTexture")
ImageTexture19.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

TextureBackground18.setLeftTexture(ImageTexture19)
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.setDEF("rightBackgroundTexture")
ImageTexture20.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

TextureBackground18.setRightTexture(ImageTexture20)
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.setDEF("frontBackgroundTexture")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

TextureBackground18.setFrontTexture(ImageTexture21)
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.setDEF("backBackgroundTexture")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

TextureBackground18.setBackTexture(ImageTexture22)
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.setDEF("topBackgroundTexture")
ImageTexture23.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

TextureBackground18.setTopTexture(ImageTexture23)
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setDEF("bottomBackgroundTexture")
ImageTexture24.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

TextureBackground18.setBottomTexture(ImageTexture24)

Scene16.addChildren(TextureBackground18)
Transform25 = x3d.Transform()
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.setDiffuseColor([0.7,0.7,0.7])
Material28.setSpecularColor([0.5,0.5,0.5])

Appearance27.setMaterial(Material28)
ComposedCubeMapTexture29 = x3d.ComposedCubeMapTexture()
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setDEF("backShader")
ImageTexture30.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture29.setBack(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setDEF("bottomShader")
ImageTexture31.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture29.setBottom(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setDEF("frontShader")
ImageTexture32.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture29.setFront(ImageTexture32)
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.setDEF("leftShader")
ImageTexture33.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture29.setLeft(ImageTexture33)
ImageTexture34 = x3d.ImageTexture()
ImageTexture34.setDEF("rightShader")
ImageTexture34.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture29.setRight(ImageTexture34)
ImageTexture35 = x3d.ImageTexture()
ImageTexture35.setDEF("topShader")
ImageTexture35.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture29.setTop(ImageTexture35)

Appearance27.setTexture(ComposedCubeMapTexture29)
ComposedShader36 = x3d.ComposedShader()
ComposedShader36.setDEF("x3dom")
ComposedShader36.setLanguage("GLSL")
field37 = x3d.field()
field37.setName("chromaticDispertion")
field37.setAccessType("inputOutput")
field37.setType("SFVec3f")
field37.setValue("0.98 1 1.033")

ComposedShader36.addField(field37)
field38 = x3d.field()
field38.setName("cube")
field38.setAccessType("inputOutput")
field38.setType("SFInt32")
field38.setValue("0")

ComposedShader36.addField(field38)
field39 = x3d.field()
field39.setName("bias")
field39.setAccessType("inputOutput")
field39.setType("SFFloat")
field39.setValue("0.5")

ComposedShader36.addField(field39)
field40 = x3d.field()
field40.setName("scale")
field40.setAccessType("inputOutput")
field40.setType("SFFloat")
field40.setValue("0.5")

ComposedShader36.addField(field40)
field41 = x3d.field()
field41.setName("power")
field41.setAccessType("inputOutput")
field41.setType("SFFloat")
field41.setValue("2")

ComposedShader36.addField(field41)
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart42.setType("VERTEX")

ComposedShader36.addParts(ShaderPart42)
ShaderPart43 = x3d.ShaderPart()
ShaderPart43.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])
ShaderPart43.setType("FRAGMENT")

ComposedShader36.addParts(ShaderPart43)

Appearance27.addShaders(ComposedShader36)
ComposedShader44 = x3d.ComposedShader()
ComposedShader44.setDEF("x_ite")
ComposedShader44.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field45 = x3d.field()
field45.setName("chromaticDispertion")
field45.setAccessType("inputOutput")
field45.setType("SFVec3f")
field45.setValue("0.98 1 1.033")

ComposedShader44.addField(field45)
field46 = x3d.field()
field46.setName("cube")
field46.setAccessType("inputOutput")
field46.setType("SFInt32")
field46.setValue("0")

ComposedShader44.addField(field46)
field47 = x3d.field()
field47.setName("bias")
field47.setAccessType("inputOutput")
field47.setType("SFFloat")
field47.setValue("0.5")

ComposedShader44.addField(field47)
field48 = x3d.field()
field48.setName("scale")
field48.setAccessType("inputOutput")
field48.setType("SFFloat")
field48.setValue("0.5")

ComposedShader44.addField(field48)
field49 = x3d.field()
field49.setName("power")
field49.setAccessType("inputOutput")
field49.setType("SFFloat")
field49.setValue("2")

ComposedShader44.addField(field49)
ShaderPart50 = x3d.ShaderPart()
ShaderPart50.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart50.setType("VERTEX")

ComposedShader44.addParts(ShaderPart50)
ShaderPart51 = x3d.ShaderPart()
ShaderPart51.setUrl(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"])
ShaderPart51.setType("FRAGMENT")

ComposedShader44.addParts(ShaderPart51)

Appearance27.addShaders(ComposedShader44)

Shape26.setAppearance(Appearance27)
Sphere52 = x3d.Sphere()
Sphere52.setRadius(30)

Shape26.setGeometry(Sphere52)

Transform25.addChild(Shape26)
Script53 = x3d.Script()
Script53.setDEF("UrlSelector")
Script53.setDirectOutput(True)
field54 = x3d.field()
field54.setName("frontUrls")
field54.setType("MFString")
field54.setAccessType("initializeOnly")
field54.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script53.addField(field54)
field55 = x3d.field()
field55.setName("backUrls")
field55.setType("MFString")
field55.setAccessType("initializeOnly")
field55.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script53.addField(field55)
field56 = x3d.field()
field56.setName("leftUrls")
field56.setType("MFString")
field56.setAccessType("initializeOnly")
field56.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script53.addField(field56)
field57 = x3d.field()
field57.setName("rightUrls")
field57.setType("MFString")
field57.setAccessType("initializeOnly")
field57.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script53.addField(field57)
field58 = x3d.field()
field58.setName("topUrls")
field58.setType("MFString")
field58.setAccessType("initializeOnly")
field58.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script53.addField(field58)
field59 = x3d.field()
field59.setName("bottomUrls")
field59.setType("MFString")
field59.setAccessType("initializeOnly")
field59.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script53.addField(field59)
field60 = x3d.field()
field60.setName("front_changed")
field60.setType("MFString")
field60.setAccessType("outputOnly")

Script53.addField(field60)
field61 = x3d.field()
field61.setName("back_changed")
field61.setType("MFString")
field61.setAccessType("outputOnly")

Script53.addField(field61)
field62 = x3d.field()
field62.setName("left_changed")
field62.setType("MFString")
field62.setAccessType("outputOnly")

Script53.addField(field62)
field63 = x3d.field()
field63.setName("right_changed")
field63.setType("MFString")
field63.setAccessType("outputOnly")

Script53.addField(field63)
field64 = x3d.field()
field64.setName("top_changed")
field64.setType("MFString")
field64.setAccessType("outputOnly")

Script53.addField(field64)
field65 = x3d.field()
field65.setName("bottom_changed")
field65.setType("MFString")
field65.setAccessType("outputOnly")

Script53.addField(field65)
field66 = x3d.field()
field66.setName("set_fraction")
field66.setType("SFFloat")
field66.setAccessType("inputOnly")

Script53.addField(field66)
field67 = x3d.field()
field67.setName("old")
field67.setType("SFInt32")
field67.setAccessType("inputOutput")
field67.setValue("-1")

Script53.addField(field67)

Script53.setSourceCode('''ecmascript:\n"+
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

Transform25.addChildren(Script53)
TimeSensor68 = x3d.TimeSensor()
TimeSensor68.setDEF("Clock")
TimeSensor68.setCycleInterval(45)
TimeSensor68.setLoop(True)

Transform25.addChildren(TimeSensor68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromNode("Clock")
ROUTE69.setFromField("fraction_changed")
ROUTE69.setToNode("UrlSelector")
ROUTE69.setToField("set_fraction")

Transform25.addChildren(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromNode("UrlSelector")
ROUTE70.setFromField("front_changed")
ROUTE70.setToNode("frontBackgroundTexture")
ROUTE70.setToField("url")

Transform25.addChildren(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromNode("UrlSelector")
ROUTE71.setFromField("back_changed")
ROUTE71.setToNode("backBackgroundTexture")
ROUTE71.setToField("url")

Transform25.addChildren(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromNode("UrlSelector")
ROUTE72.setFromField("left_changed")
ROUTE72.setToNode("leftBackgroundTexture")
ROUTE72.setToField("url")

Transform25.addChildren(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromNode("UrlSelector")
ROUTE73.setFromField("right_changed")
ROUTE73.setToNode("rightBackgroundTexture")
ROUTE73.setToField("url")

Transform25.addChildren(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromNode("UrlSelector")
ROUTE74.setFromField("top_changed")
ROUTE74.setToNode("topBackgroundTexture")
ROUTE74.setToField("url")

Transform25.addChildren(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromNode("UrlSelector")
ROUTE75.setFromField("bottom_changed")
ROUTE75.setToNode("bottomBackgroundTexture")
ROUTE75.setToField("url")

Transform25.addChildren(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromNode("UrlSelector")
ROUTE76.setFromField("front_changed")
ROUTE76.setToNode("frontShader")
ROUTE76.setToField("url")

Transform25.addChildren(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("UrlSelector")
ROUTE77.setFromField("back_changed")
ROUTE77.setToNode("backShader")
ROUTE77.setToField("url")

Transform25.addChildren(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("UrlSelector")
ROUTE78.setFromField("left_changed")
ROUTE78.setToNode("leftShader")
ROUTE78.setToField("url")

Transform25.addChildren(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("UrlSelector")
ROUTE79.setFromField("right_changed")
ROUTE79.setToNode("rightShader")
ROUTE79.setToField("url")

Transform25.addChildren(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("UrlSelector")
ROUTE80.setFromField("top_changed")
ROUTE80.setToNode("topShader")
ROUTE80.setToField("url")

Transform25.addChildren(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromNode("UrlSelector")
ROUTE81.setFromField("bottom_changed")
ROUTE81.setToNode("bottomShader")
ROUTE81.setToField("url")

Transform25.addChildren(ROUTE81)

Scene16.addChildren(Transform25)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../personal/mirror.new.python.x3d")
X3D0.toFileJSON("../personal/mirror.new.python.json")
