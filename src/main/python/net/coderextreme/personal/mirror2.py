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
meta11.setContent("mirror2.x3d")

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
meta14.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("description")
meta15.setContent("a mirrored sphere")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setPosition([0,5,100])
Viewpoint17.setDescription("Switch background and images texture")

Scene16.addChildren(Viewpoint17)
Background18 = x3d.Background()
Background18.setDEF("cube")
Background18.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])
Background18.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])
Background18.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])
Background18.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])
Background18.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

Scene16.addChildren(Background18)
Transform19 = x3d.Transform()
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor([0.7,0.7,0.7])
Material22.setSpecularColor([0.5,0.5,0.5])

Appearance21.setMaterial(Material22)
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setDEF("backShader")
ImageTexture24.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture23.setBack(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setDEF("bottomShader")
ImageTexture25.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture23.setBottom(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setDEF("frontShader")
ImageTexture26.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture23.setFront(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setDEF("leftShader")
ImageTexture27.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture23.setLeft(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setDEF("rightShader")
ImageTexture28.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture23.setRight(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setDEF("topShader")
ImageTexture29.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture23.setTop(ImageTexture29)

Appearance21.setTexture(ComposedCubeMapTexture23)
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.setDEF("x_ite")
ComposedShader30.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field31 = x3d.field()
field31.setName("chromaticDispertion")
field31.setAccessType("inputOutput")
field31.setType("SFVec3f")
field31.setValue("0.98 1 1.033")

ComposedShader30.addField(field31)
field32 = x3d.field()
field32.setName("cube")
field32.setAccessType("inputOutput")
field32.setType("SFInt32")
field32.setValue("0")

ComposedShader30.addField(field32)
field33 = x3d.field()
field33.setName("bias")
field33.setAccessType("inputOutput")
field33.setType("SFFloat")
field33.setValue("0.5")

ComposedShader30.addField(field33)
field34 = x3d.field()
field34.setName("scale")
field34.setAccessType("inputOutput")
field34.setType("SFFloat")
field34.setValue("0.5")

ComposedShader30.addField(field34)
field35 = x3d.field()
field35.setName("power")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("2")

ComposedShader30.addField(field35)
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart36.setType("VERTEX")

ComposedShader30.addParts(ShaderPart36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.setUrl(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"])
ShaderPart37.setType("FRAGMENT")

ComposedShader30.addParts(ShaderPart37)

Appearance21.addShaders(ComposedShader30)
ComposedShader38 = x3d.ComposedShader()
ComposedShader38.setDEF("x3dom")
ComposedShader38.setLanguage("GLSL")
field39 = x3d.field()
field39.setName("chromaticDispertion")
field39.setAccessType("inputOutput")
field39.setType("SFVec3f")
field39.setValue("0.98 1 1.033")

ComposedShader38.addField(field39)
field40 = x3d.field()
field40.setName("cube")
field40.setAccessType("inputOutput")
field40.setType("SFInt32")
field40.setValue("0")

ComposedShader38.addField(field40)
field41 = x3d.field()
field41.setName("bias")
field41.setAccessType("inputOutput")
field41.setType("SFFloat")
field41.setValue("0.5")

ComposedShader38.addField(field41)
field42 = x3d.field()
field42.setName("scale")
field42.setAccessType("inputOutput")
field42.setType("SFFloat")
field42.setValue("0.5")

ComposedShader38.addField(field42)
field43 = x3d.field()
field43.setName("power")
field43.setAccessType("inputOutput")
field43.setType("SFFloat")
field43.setValue("2")

ComposedShader38.addField(field43)
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart44.setType("VERTEX")

ComposedShader38.addParts(ShaderPart44)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])
ShaderPart45.setType("FRAGMENT")

ComposedShader38.addParts(ShaderPart45)

Appearance21.addShaders(ComposedShader38)

Shape20.setAppearance(Appearance21)
Sphere46 = x3d.Sphere()
Sphere46.setRadius(30)

Shape20.setGeometry(Sphere46)

Transform19.addChild(Shape20)
Script47 = x3d.Script()
Script47.setDEF("UrlSelector")
Script47.setDirectOutput(True)
field48 = x3d.field()
field48.setName("frontUrls")
field48.setType("MFString")
field48.setAccessType("initializeOnly")
field48.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script47.addField(field48)
field49 = x3d.field()
field49.setName("backUrls")
field49.setType("MFString")
field49.setAccessType("initializeOnly")
field49.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script47.addField(field49)
field50 = x3d.field()
field50.setName("leftUrls")
field50.setType("MFString")
field50.setAccessType("initializeOnly")
field50.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script47.addField(field50)
field51 = x3d.field()
field51.setName("rightUrls")
field51.setType("MFString")
field51.setAccessType("initializeOnly")
field51.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script47.addField(field51)
field52 = x3d.field()
field52.setName("topUrls")
field52.setType("MFString")
field52.setAccessType("initializeOnly")
field52.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script47.addField(field52)
field53 = x3d.field()
field53.setName("bottomUrls")
field53.setType("MFString")
field53.setAccessType("initializeOnly")
field53.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script47.addField(field53)
field54 = x3d.field()
field54.setName("front_changed")
field54.setType("MFString")
field54.setAccessType("outputOnly")

Script47.addField(field54)
field55 = x3d.field()
field55.setName("back_changed")
field55.setType("MFString")
field55.setAccessType("outputOnly")

Script47.addField(field55)
field56 = x3d.field()
field56.setName("left_changed")
field56.setType("MFString")
field56.setAccessType("outputOnly")

Script47.addField(field56)
field57 = x3d.field()
field57.setName("right_changed")
field57.setType("MFString")
field57.setAccessType("outputOnly")

Script47.addField(field57)
field58 = x3d.field()
field58.setName("top_changed")
field58.setType("MFString")
field58.setAccessType("outputOnly")

Script47.addField(field58)
field59 = x3d.field()
field59.setName("bottom_changed")
field59.setType("MFString")
field59.setAccessType("outputOnly")

Script47.addField(field59)
field60 = x3d.field()
field60.setName("set_fraction")
field60.setType("SFFloat")
field60.setAccessType("inputOnly")

Script47.addField(field60)
field61 = x3d.field()
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

Transform19.addChildren(Script47)
TimeSensor62 = x3d.TimeSensor()
TimeSensor62.setDEF("Clock")
TimeSensor62.setCycleInterval(45)
TimeSensor62.setLoop(True)

Transform19.addChildren(TimeSensor62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Clock")
ROUTE63.setFromField("fraction_changed")
ROUTE63.setToNode("UrlSelector")
ROUTE63.setToField("set_fraction")

Transform19.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("UrlSelector")
ROUTE64.setFromField("front_changed")
ROUTE64.setToNode("cube")
ROUTE64.setToField("frontUrl")

Transform19.addChildren(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("UrlSelector")
ROUTE65.setFromField("back_changed")
ROUTE65.setToNode("cube")
ROUTE65.setToField("backUrl")

Transform19.addChildren(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("UrlSelector")
ROUTE66.setFromField("left_changed")
ROUTE66.setToNode("cube")
ROUTE66.setToField("leftUrl")

Transform19.addChildren(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("UrlSelector")
ROUTE67.setFromField("right_changed")
ROUTE67.setToNode("cube")
ROUTE67.setToField("rightUrl")

Transform19.addChildren(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromNode("UrlSelector")
ROUTE68.setFromField("top_changed")
ROUTE68.setToNode("cube")
ROUTE68.setToField("topUrl")

Transform19.addChildren(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromNode("UrlSelector")
ROUTE69.setFromField("bottom_changed")
ROUTE69.setToNode("cube")
ROUTE69.setToField("bottomUrl")

Transform19.addChildren(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromNode("UrlSelector")
ROUTE70.setFromField("front_changed")
ROUTE70.setToNode("frontShader")
ROUTE70.setToField("url")

Transform19.addChildren(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromNode("UrlSelector")
ROUTE71.setFromField("back_changed")
ROUTE71.setToNode("backShader")
ROUTE71.setToField("url")

Transform19.addChildren(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromNode("UrlSelector")
ROUTE72.setFromField("left_changed")
ROUTE72.setToNode("leftShader")
ROUTE72.setToField("url")

Transform19.addChildren(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromNode("UrlSelector")
ROUTE73.setFromField("right_changed")
ROUTE73.setToNode("rightShader")
ROUTE73.setToField("url")

Transform19.addChildren(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromNode("UrlSelector")
ROUTE74.setFromField("top_changed")
ROUTE74.setToNode("topShader")
ROUTE74.setToField("url")

Transform19.addChildren(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromNode("UrlSelector")
ROUTE75.setFromField("bottom_changed")
ROUTE75.setToNode("bottomShader")
ROUTE75.setToField("url")

Transform19.addChildren(ROUTE75)

Scene16.addChildren(Transform19)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../personal/mirror2.new.python.x3d")
X3D0.toFileJSON("../personal/mirror2.new.python.json")
