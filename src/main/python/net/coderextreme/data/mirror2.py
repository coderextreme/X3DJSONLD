from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
component2 = component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = component()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
component4 = component()
component4.setName("Texturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = component()
component5.setName("Rendering")
component5.setLevel(1)

head1.addComponent(component5)
component6 = component()
component6.setName("Shape")
component6.setLevel(4)

head1.addComponent(component6)
component7 = component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
meta8 = meta()
meta8.setName("title")
meta8.setContent("mirror2.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("creator")
meta9.setContent("John Carlson")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("generator")
meta10.setContent("manual")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("identifier")
meta11.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("description")
meta12.setContent("a mirrored sphere")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = Scene()
Viewpoint14 = Viewpoint()
Viewpoint14.setPosition([0,5,100])
Viewpoint14.setDescription("Switch background and images texture")

Scene13.addChildren(Viewpoint14)
Background15 = Background()
Background15.setDEF("cube")
Background15.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])
Background15.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])
Background15.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])
Background15.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])
Background15.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])
Background15.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

Scene13.addChildren(Background15)
Transform16 = Transform()
Shape17 = Shape()
Appearance18 = Appearance()
Material19 = Material()
Material19.setDiffuseColor([0.7,0.7,0.7])
Material19.setSpecularColor([0.5,0.5,0.5])

Appearance18.setMaterial(Material19)
ComposedCubeMapTexture20 = ComposedCubeMapTexture()
ImageTexture21 = ImageTexture()
ImageTexture21.setDEF("backShader")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture20.setBack(ImageTexture21)
ImageTexture22 = ImageTexture()
ImageTexture22.setDEF("bottomShader")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture20.setBottom(ImageTexture22)
ImageTexture23 = ImageTexture()
ImageTexture23.setDEF("frontShader")
ImageTexture23.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture20.setFront(ImageTexture23)
ImageTexture24 = ImageTexture()
ImageTexture24.setDEF("leftShader")
ImageTexture24.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture20.setLeft(ImageTexture24)
ImageTexture25 = ImageTexture()
ImageTexture25.setDEF("rightShader")
ImageTexture25.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture20.setRight(ImageTexture25)
ImageTexture26 = ImageTexture()
ImageTexture26.setDEF("topShader")
ImageTexture26.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture20.setTop(ImageTexture26)

Appearance18.setTexture(ComposedCubeMapTexture20)
ComposedShader27 = ComposedShader()
ComposedShader27.setDEF("x_ite")
ComposedShader27.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field28 = field()
field28.setName("chromaticDispertion")
field28.setAccessType("inputOutput")
field28.setType("SFVec3f")
field28.setValue("0.98 1 1.033")

ComposedShader27.addField(field28)
field29 = field()
field29.setName("cube")
field29.setAccessType("inputOutput")
field29.setType("SFInt32")
field29.setValue("0")

ComposedShader27.addField(field29)
field30 = field()
field30.setName("bias")
field30.setAccessType("inputOutput")
field30.setType("SFFloat")
field30.setValue("0.5")

ComposedShader27.addField(field30)
field31 = field()
field31.setName("scale")
field31.setAccessType("inputOutput")
field31.setType("SFFloat")
field31.setValue("0.5")

ComposedShader27.addField(field31)
field32 = field()
field32.setName("power")
field32.setAccessType("inputOutput")
field32.setType("SFFloat")
field32.setValue("2")

ComposedShader27.addField(field32)
ShaderPart33 = ShaderPart()
ShaderPart33.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart33.setType("VERTEX")

ComposedShader27.addParts(ShaderPart33)
ShaderPart34 = ShaderPart()
ShaderPart34.setUrl(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"])
ShaderPart34.setType("FRAGMENT")

ComposedShader27.addParts(ShaderPart34)

Appearance18.addShaders(ComposedShader27)
ComposedShader35 = ComposedShader()
ComposedShader35.setDEF("x3dom")
ComposedShader35.setLanguage("GLSL")
field36 = field()
field36.setName("chromaticDispertion")
field36.setAccessType("inputOutput")
field36.setType("SFVec3f")
field36.setValue("0.98 1 1.033")

ComposedShader35.addField(field36)
field37 = field()
field37.setName("cube")
field37.setAccessType("inputOutput")
field37.setType("SFInt32")
field37.setValue("0")

ComposedShader35.addField(field37)
field38 = field()
field38.setName("bias")
field38.setAccessType("inputOutput")
field38.setType("SFFloat")
field38.setValue("0.5")

ComposedShader35.addField(field38)
field39 = field()
field39.setName("scale")
field39.setAccessType("inputOutput")
field39.setType("SFFloat")
field39.setValue("0.5")

ComposedShader35.addField(field39)
field40 = field()
field40.setName("power")
field40.setAccessType("inputOutput")
field40.setType("SFFloat")
field40.setValue("2")

ComposedShader35.addField(field40)
ShaderPart41 = ShaderPart()
ShaderPart41.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart41.setType("VERTEX")

ComposedShader35.addParts(ShaderPart41)
ShaderPart42 = ShaderPart()
ShaderPart42.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])
ShaderPart42.setType("FRAGMENT")

ComposedShader35.addParts(ShaderPart42)

Appearance18.addShaders(ComposedShader35)

Shape17.setAppearance(Appearance18)
Sphere43 = Sphere()
Sphere43.setRadius(30)

Shape17.setGeometry(Sphere43)

Transform16.addChildren(Shape17)
Script44 = Script()
Script44.setDEF("UrlSelector")
Script44.setDirectOutput(True)
field45 = field()
field45.setName("frontUrls")
field45.setType("MFString")
field45.setAccessType("initializeOnly")
field45.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script44.addField(field45)
field46 = field()
field46.setName("backUrls")
field46.setType("MFString")
field46.setAccessType("initializeOnly")
field46.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script44.addField(field46)
field47 = field()
field47.setName("leftUrls")
field47.setType("MFString")
field47.setAccessType("initializeOnly")
field47.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script44.addField(field47)
field48 = field()
field48.setName("rightUrls")
field48.setType("MFString")
field48.setAccessType("initializeOnly")
field48.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script44.addField(field48)
field49 = field()
field49.setName("topUrls")
field49.setType("MFString")
field49.setAccessType("initializeOnly")
field49.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script44.addField(field49)
field50 = field()
field50.setName("bottomUrls")
field50.setType("MFString")
field50.setAccessType("initializeOnly")
field50.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script44.addField(field50)
field51 = field()
field51.setName("front_changed")
field51.setType("MFString")
field51.setAccessType("outputOnly")

Script44.addField(field51)
field52 = field()
field52.setName("back_changed")
field52.setType("MFString")
field52.setAccessType("outputOnly")

Script44.addField(field52)
field53 = field()
field53.setName("left_changed")
field53.setType("MFString")
field53.setAccessType("outputOnly")

Script44.addField(field53)
field54 = field()
field54.setName("right_changed")
field54.setType("MFString")
field54.setAccessType("outputOnly")

Script44.addField(field54)
field55 = field()
field55.setName("top_changed")
field55.setType("MFString")
field55.setAccessType("outputOnly")

Script44.addField(field55)
field56 = field()
field56.setName("bottom_changed")
field56.setType("MFString")
field56.setAccessType("outputOnly")

Script44.addField(field56)
field57 = field()
field57.setName("set_fraction")
field57.setType("SFFloat")
field57.setAccessType("inputOnly")

Script44.addField(field57)
field58 = field()
field58.setName("old")
field58.setType("SFInt32")
field58.setAccessType("inputOutput")
field58.setValue("-1")

Script44.addField(field58)

Script44.setSourceCode('''ecmascript:\n"+
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

Transform16.addChildren(Script44)
TimeSensor59 = TimeSensor()
TimeSensor59.setDEF("Clock")
TimeSensor59.setCycleInterval(45)
TimeSensor59.setLoop(True)

Transform16.addChildren(TimeSensor59)
ROUTE60 = ROUTE()
ROUTE60.setFromNode("Clock")
ROUTE60.setFromField("fraction_changed")
ROUTE60.setToNode("UrlSelector")
ROUTE60.setToField("set_fraction")

Transform16.addChildren(ROUTE60)
ROUTE61 = ROUTE()
ROUTE61.setFromNode("UrlSelector")
ROUTE61.setFromField("front_changed")
ROUTE61.setToNode("cube")
ROUTE61.setToField("frontUrl")

Transform16.addChildren(ROUTE61)
ROUTE62 = ROUTE()
ROUTE62.setFromNode("UrlSelector")
ROUTE62.setFromField("back_changed")
ROUTE62.setToNode("cube")
ROUTE62.setToField("backUrl")

Transform16.addChildren(ROUTE62)
ROUTE63 = ROUTE()
ROUTE63.setFromNode("UrlSelector")
ROUTE63.setFromField("left_changed")
ROUTE63.setToNode("cube")
ROUTE63.setToField("leftUrl")

Transform16.addChildren(ROUTE63)
ROUTE64 = ROUTE()
ROUTE64.setFromNode("UrlSelector")
ROUTE64.setFromField("right_changed")
ROUTE64.setToNode("cube")
ROUTE64.setToField("rightUrl")

Transform16.addChildren(ROUTE64)
ROUTE65 = ROUTE()
ROUTE65.setFromNode("UrlSelector")
ROUTE65.setFromField("top_changed")
ROUTE65.setToNode("cube")
ROUTE65.setToField("topUrl")

Transform16.addChildren(ROUTE65)
ROUTE66 = ROUTE()
ROUTE66.setFromNode("UrlSelector")
ROUTE66.setFromField("bottom_changed")
ROUTE66.setToNode("cube")
ROUTE66.setToField("bottomUrl")

Transform16.addChildren(ROUTE66)
ROUTE67 = ROUTE()
ROUTE67.setFromNode("UrlSelector")
ROUTE67.setFromField("front_changed")
ROUTE67.setToNode("frontShader")
ROUTE67.setToField("url")

Transform16.addChildren(ROUTE67)
ROUTE68 = ROUTE()
ROUTE68.setFromNode("UrlSelector")
ROUTE68.setFromField("back_changed")
ROUTE68.setToNode("backShader")
ROUTE68.setToField("url")

Transform16.addChildren(ROUTE68)
ROUTE69 = ROUTE()
ROUTE69.setFromNode("UrlSelector")
ROUTE69.setFromField("left_changed")
ROUTE69.setToNode("leftShader")
ROUTE69.setToField("url")

Transform16.addChildren(ROUTE69)
ROUTE70 = ROUTE()
ROUTE70.setFromNode("UrlSelector")
ROUTE70.setFromField("right_changed")
ROUTE70.setToNode("rightShader")
ROUTE70.setToField("url")

Transform16.addChildren(ROUTE70)
ROUTE71 = ROUTE()
ROUTE71.setFromNode("UrlSelector")
ROUTE71.setFromField("top_changed")
ROUTE71.setToNode("topShader")
ROUTE71.setToField("url")

Transform16.addChildren(ROUTE71)
ROUTE72 = ROUTE()
ROUTE72.setFromNode("UrlSelector")
ROUTE72.setFromField("bottom_changed")
ROUTE72.setToNode("bottomShader")
ROUTE72.setToField("url")

Transform16.addChildren(ROUTE72)

Scene13.addChildren(Transform16)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/mirror2_RoundTrip.x3d")
