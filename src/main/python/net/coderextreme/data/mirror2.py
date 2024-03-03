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
component8.setName("Grouping")
component8.setLevel(3)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Core")
component9.setLevel(1)

head1.addComponent(component9)
#<component name='Shape' level='4'></component>
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("mirror2.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("generator")
meta12.setContent("manual")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("identifier")
meta13.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("description")
meta14.setContent("a mirrored sphere")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.setPosition([0,5,100])
Viewpoint16.setDescription("Switch background and images texture")

Scene15.addChildren(Viewpoint16)
Background17 = x3d.Background()
Background17.setDEF("cube")
Background17.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])
Background17.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])
Background17.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])
Background17.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])
Background17.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])
Background17.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

Scene15.addChildren(Background17)
Transform18 = x3d.Transform()
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.setDiffuseColor([0.7,0.7,0.7])
Material21.setSpecularColor([0.5,0.5,0.5])

Appearance20.setMaterial(Material21)
ComposedCubeMapTexture22 = x3d.ComposedCubeMapTexture()
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.setDEF("backShader")
ImageTexture23.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture22.setBackTexture(ImageTexture23)
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setDEF("bottomShader")
ImageTexture24.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture22.setBottomTexture(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setDEF("frontShader")
ImageTexture25.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture22.setFrontTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setDEF("leftShader")
ImageTexture26.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture22.setLeftTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setDEF("rightShader")
ImageTexture27.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture22.setRightTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setDEF("topShader")
ImageTexture28.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture22.setTopTexture(ImageTexture28)

Appearance20.setTexture(ComposedCubeMapTexture22)
ComposedShader29 = x3d.ComposedShader()
ComposedShader29.setDEF("x_ite")
ComposedShader29.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field30 = x3d.field()
field30.setName("chromaticDispertion")
field30.setAccessType("inputOutput")
field30.setType("SFVec3f")
field30.setValue("0.98 1 1.033")

ComposedShader29.addField(field30)
field31 = x3d.field()
field31.setName("cube")
field31.setAccessType("inputOutput")
field31.setType("SFInt32")
field31.setValue("0")

ComposedShader29.addField(field31)
field32 = x3d.field()
field32.setName("bias")
field32.setAccessType("inputOutput")
field32.setType("SFFloat")
field32.setValue("0.5")

ComposedShader29.addField(field32)
field33 = x3d.field()
field33.setName("scale")
field33.setAccessType("inputOutput")
field33.setType("SFFloat")
field33.setValue("0.5")

ComposedShader29.addField(field33)
field34 = x3d.field()
field34.setName("power")
field34.setAccessType("inputOutput")
field34.setType("SFFloat")
field34.setValue("2")

ComposedShader29.addField(field34)
ShaderPart35 = x3d.ShaderPart()
ShaderPart35.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart35.setType("VERTEX")

ComposedShader29.addParts(ShaderPart35)
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.setUrl(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"])
ShaderPart36.setType("FRAGMENT")

ComposedShader29.addParts(ShaderPart36)

Appearance20.addShaders(ComposedShader29)
ComposedShader37 = x3d.ComposedShader()
ComposedShader37.setDEF("x3dom")
ComposedShader37.setLanguage("GLSL")
field38 = x3d.field()
field38.setName("chromaticDispertion")
field38.setAccessType("inputOutput")
field38.setType("SFVec3f")
field38.setValue("0.98 1 1.033")

ComposedShader37.addField(field38)
field39 = x3d.field()
field39.setName("cube")
field39.setAccessType("inputOutput")
field39.setType("SFInt32")
field39.setValue("0")

ComposedShader37.addField(field39)
field40 = x3d.field()
field40.setName("bias")
field40.setAccessType("inputOutput")
field40.setType("SFFloat")
field40.setValue("0.5")

ComposedShader37.addField(field40)
field41 = x3d.field()
field41.setName("scale")
field41.setAccessType("inputOutput")
field41.setType("SFFloat")
field41.setValue("0.5")

ComposedShader37.addField(field41)
field42 = x3d.field()
field42.setName("power")
field42.setAccessType("inputOutput")
field42.setType("SFFloat")
field42.setValue("2")

ComposedShader37.addField(field42)
ShaderPart43 = x3d.ShaderPart()
ShaderPart43.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart43.setType("VERTEX")

ComposedShader37.addParts(ShaderPart43)
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])
ShaderPart44.setType("FRAGMENT")

ComposedShader37.addParts(ShaderPart44)

Appearance20.addShaders(ComposedShader37)

Shape19.setAppearance(Appearance20)
Sphere45 = x3d.Sphere()
Sphere45.setRadius(30)

Shape19.setGeometry(Sphere45)

Transform18.addChild(Shape19)
Script46 = x3d.Script()
Script46.setDEF("UrlSelector")
Script46.setDirectOutput(True)
field47 = x3d.field()
field47.setName("frontUrls")
field47.setType("MFString")
field47.setAccessType("initializeOnly")
field47.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script46.addField(field47)
field48 = x3d.field()
field48.setName("backUrls")
field48.setType("MFString")
field48.setAccessType("initializeOnly")
field48.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script46.addField(field48)
field49 = x3d.field()
field49.setName("leftUrls")
field49.setType("MFString")
field49.setAccessType("initializeOnly")
field49.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script46.addField(field49)
field50 = x3d.field()
field50.setName("rightUrls")
field50.setType("MFString")
field50.setAccessType("initializeOnly")
field50.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script46.addField(field50)
field51 = x3d.field()
field51.setName("topUrls")
field51.setType("MFString")
field51.setAccessType("initializeOnly")
field51.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script46.addField(field51)
field52 = x3d.field()
field52.setName("bottomUrls")
field52.setType("MFString")
field52.setAccessType("initializeOnly")
field52.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script46.addField(field52)
field53 = x3d.field()
field53.setName("front_changed")
field53.setType("MFString")
field53.setAccessType("outputOnly")

Script46.addField(field53)
field54 = x3d.field()
field54.setName("back_changed")
field54.setType("MFString")
field54.setAccessType("outputOnly")

Script46.addField(field54)
field55 = x3d.field()
field55.setName("left_changed")
field55.setType("MFString")
field55.setAccessType("outputOnly")

Script46.addField(field55)
field56 = x3d.field()
field56.setName("right_changed")
field56.setType("MFString")
field56.setAccessType("outputOnly")

Script46.addField(field56)
field57 = x3d.field()
field57.setName("top_changed")
field57.setType("MFString")
field57.setAccessType("outputOnly")

Script46.addField(field57)
field58 = x3d.field()
field58.setName("bottom_changed")
field58.setType("MFString")
field58.setAccessType("outputOnly")

Script46.addField(field58)
field59 = x3d.field()
field59.setName("set_fraction")
field59.setType("SFFloat")
field59.setAccessType("inputOnly")

Script46.addField(field59)
field60 = x3d.field()
field60.setName("old")
field60.setType("SFInt32")
field60.setAccessType("inputOutput")
field60.setValue("-1")

Script46.addField(field60)

Script46.setSourceCode('''ecmascript:\n"+
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

Transform18.addChildren(Script46)
TimeSensor61 = x3d.TimeSensor()
TimeSensor61.setDEF("Clock")
TimeSensor61.setCycleInterval(45)
TimeSensor61.setLoop(True)

Transform18.addChildren(TimeSensor61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("Clock")
ROUTE62.setFromField("fraction_changed")
ROUTE62.setToNode("UrlSelector")
ROUTE62.setToField("set_fraction")

Transform18.addChildren(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("UrlSelector")
ROUTE63.setFromField("front_changed")
ROUTE63.setToNode("cube")
ROUTE63.setToField("frontUrl")

Transform18.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("UrlSelector")
ROUTE64.setFromField("back_changed")
ROUTE64.setToNode("cube")
ROUTE64.setToField("backUrl")

Transform18.addChildren(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("UrlSelector")
ROUTE65.setFromField("left_changed")
ROUTE65.setToNode("cube")
ROUTE65.setToField("leftUrl")

Transform18.addChildren(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("UrlSelector")
ROUTE66.setFromField("right_changed")
ROUTE66.setToNode("cube")
ROUTE66.setToField("rightUrl")

Transform18.addChildren(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("UrlSelector")
ROUTE67.setFromField("top_changed")
ROUTE67.setToNode("cube")
ROUTE67.setToField("topUrl")

Transform18.addChildren(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromNode("UrlSelector")
ROUTE68.setFromField("bottom_changed")
ROUTE68.setToNode("cube")
ROUTE68.setToField("bottomUrl")

Transform18.addChildren(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromNode("UrlSelector")
ROUTE69.setFromField("front_changed")
ROUTE69.setToNode("frontShader")
ROUTE69.setToField("url")

Transform18.addChildren(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromNode("UrlSelector")
ROUTE70.setFromField("back_changed")
ROUTE70.setToNode("backShader")
ROUTE70.setToField("url")

Transform18.addChildren(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromNode("UrlSelector")
ROUTE71.setFromField("left_changed")
ROUTE71.setToNode("leftShader")
ROUTE71.setToField("url")

Transform18.addChildren(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromNode("UrlSelector")
ROUTE72.setFromField("right_changed")
ROUTE72.setToNode("rightShader")
ROUTE72.setToField("url")

Transform18.addChildren(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromNode("UrlSelector")
ROUTE73.setFromField("top_changed")
ROUTE73.setToNode("topShader")
ROUTE73.setToField("url")

Transform18.addChildren(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromNode("UrlSelector")
ROUTE74.setFromField("bottom_changed")
ROUTE74.setToNode("bottomShader")
ROUTE74.setToField("url")

Transform18.addChildren(ROUTE74)

Scene15.addChildren(Transform18)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/mirror2.new.python.x3d")
