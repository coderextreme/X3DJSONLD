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
meta10.setContent("mirror.x3d")

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
meta13.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/mirror.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("description")
meta14.setContent("sphere with alternating backgrounds")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.setPosition([0,5,100])
Viewpoint16.setDescription("Switch background and images texture")

Scene15.addChildren(Viewpoint16)
TextureBackground17 = x3d.TextureBackground()
ImageTexture18 = x3d.ImageTexture()
ImageTexture18.setDEF("leftBackgroundTexture")
ImageTexture18.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

TextureBackground17.setLeftTexture(ImageTexture18)
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.setDEF("rightBackgroundTexture")
ImageTexture19.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

TextureBackground17.setRightTexture(ImageTexture19)
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.setDEF("frontBackgroundTexture")
ImageTexture20.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

TextureBackground17.setFrontTexture(ImageTexture20)
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.setDEF("backBackgroundTexture")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

TextureBackground17.setBackTexture(ImageTexture21)
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.setDEF("topBackgroundTexture")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

TextureBackground17.setTopTexture(ImageTexture22)
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.setDEF("bottomBackgroundTexture")
ImageTexture23.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

TextureBackground17.setBottomTexture(ImageTexture23)

Scene15.addChildren(TextureBackground17)
Transform24 = x3d.Transform()
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.setDiffuseColor([0.7,0.7,0.7])
Material27.setSpecularColor([0.5,0.5,0.5])

Appearance26.setMaterial(Material27)
ComposedCubeMapTexture28 = x3d.ComposedCubeMapTexture()
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setDEF("backShader")
ImageTexture29.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture28.setBackTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setDEF("bottomShader")
ImageTexture30.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture28.setBottomTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setDEF("frontShader")
ImageTexture31.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture28.setFrontTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setDEF("leftShader")
ImageTexture32.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture28.setLeftTexture(ImageTexture32)
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.setDEF("rightShader")
ImageTexture33.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture28.setRightTexture(ImageTexture33)
ImageTexture34 = x3d.ImageTexture()
ImageTexture34.setDEF("topShader")
ImageTexture34.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture28.setTopTexture(ImageTexture34)

Appearance26.setTexture(ComposedCubeMapTexture28)
ComposedShader35 = x3d.ComposedShader()
ComposedShader35.setDEF("x3dom")
ComposedShader35.setLanguage("GLSL")
field36 = x3d.field()
field36.setName("chromaticDispertion")
field36.setAccessType("inputOutput")
field36.setType("SFVec3f")
field36.setValue("0.98 1 1.033")

ComposedShader35.addField(field36)
field37 = x3d.field()
field37.setName("cube")
field37.setAccessType("inputOutput")
field37.setType("SFInt32")
field37.setValue("0")

ComposedShader35.addField(field37)
field38 = x3d.field()
field38.setName("bias")
field38.setAccessType("inputOutput")
field38.setType("SFFloat")
field38.setValue("0.5")

ComposedShader35.addField(field38)
field39 = x3d.field()
field39.setName("scale")
field39.setAccessType("inputOutput")
field39.setType("SFFloat")
field39.setValue("0.5")

ComposedShader35.addField(field39)
field40 = x3d.field()
field40.setName("power")
field40.setAccessType("inputOutput")
field40.setType("SFFloat")
field40.setValue("2")

ComposedShader35.addField(field40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart41.setType("VERTEX")

ComposedShader35.addParts(ShaderPart41)
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.setUrl(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])
ShaderPart42.setType("FRAGMENT")

ComposedShader35.addParts(ShaderPart42)

Appearance26.addShaders(ComposedShader35)
ComposedShader43 = x3d.ComposedShader()
ComposedShader43.setDEF("x_ite")
ComposedShader43.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field44 = x3d.field()
field44.setName("chromaticDispertion")
field44.setAccessType("inputOutput")
field44.setType("SFVec3f")
field44.setValue("0.98 1 1.033")

ComposedShader43.addField(field44)
field45 = x3d.field()
field45.setName("cube")
field45.setAccessType("inputOutput")
field45.setType("SFInt32")
field45.setValue("0")

ComposedShader43.addField(field45)
field46 = x3d.field()
field46.setName("bias")
field46.setAccessType("inputOutput")
field46.setType("SFFloat")
field46.setValue("0.5")

ComposedShader43.addField(field46)
field47 = x3d.field()
field47.setName("scale")
field47.setAccessType("inputOutput")
field47.setType("SFFloat")
field47.setValue("0.5")

ComposedShader43.addField(field47)
field48 = x3d.field()
field48.setName("power")
field48.setAccessType("inputOutput")
field48.setType("SFFloat")
field48.setValue("2")

ComposedShader43.addField(field48)
ShaderPart49 = x3d.ShaderPart()
ShaderPart49.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart49.setType("VERTEX")

ComposedShader43.addParts(ShaderPart49)
ShaderPart50 = x3d.ShaderPart()
ShaderPart50.setUrl(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"])
ShaderPart50.setType("FRAGMENT")

ComposedShader43.addParts(ShaderPart50)

Appearance26.addShaders(ComposedShader43)

Shape25.setAppearance(Appearance26)
Sphere51 = x3d.Sphere()
Sphere51.setRadius(30)

Shape25.setGeometry(Sphere51)

Transform24.addChild(Shape25)
Script52 = x3d.Script()
Script52.setDEF("UrlSelector")
Script52.setDirectOutput(True)
field53 = x3d.field()
field53.setName("frontUrls")
field53.setType("MFString")
field53.setAccessType("initializeOnly")
field53.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script52.addField(field53)
field54 = x3d.field()
field54.setName("backUrls")
field54.setType("MFString")
field54.setAccessType("initializeOnly")
field54.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script52.addField(field54)
field55 = x3d.field()
field55.setName("leftUrls")
field55.setType("MFString")
field55.setAccessType("initializeOnly")
field55.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script52.addField(field55)
field56 = x3d.field()
field56.setName("rightUrls")
field56.setType("MFString")
field56.setAccessType("initializeOnly")
field56.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script52.addField(field56)
field57 = x3d.field()
field57.setName("topUrls")
field57.setType("MFString")
field57.setAccessType("initializeOnly")
field57.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script52.addField(field57)
field58 = x3d.field()
field58.setName("bottomUrls")
field58.setType("MFString")
field58.setAccessType("initializeOnly")
field58.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script52.addField(field58)
field59 = x3d.field()
field59.setName("front_changed")
field59.setType("MFString")
field59.setAccessType("outputOnly")

Script52.addField(field59)
field60 = x3d.field()
field60.setName("back_changed")
field60.setType("MFString")
field60.setAccessType("outputOnly")

Script52.addField(field60)
field61 = x3d.field()
field61.setName("left_changed")
field61.setType("MFString")
field61.setAccessType("outputOnly")

Script52.addField(field61)
field62 = x3d.field()
field62.setName("right_changed")
field62.setType("MFString")
field62.setAccessType("outputOnly")

Script52.addField(field62)
field63 = x3d.field()
field63.setName("top_changed")
field63.setType("MFString")
field63.setAccessType("outputOnly")

Script52.addField(field63)
field64 = x3d.field()
field64.setName("bottom_changed")
field64.setType("MFString")
field64.setAccessType("outputOnly")

Script52.addField(field64)
field65 = x3d.field()
field65.setName("set_fraction")
field65.setType("SFFloat")
field65.setAccessType("inputOnly")

Script52.addField(field65)
field66 = x3d.field()
field66.setName("old")
field66.setType("SFInt32")
field66.setAccessType("inputOutput")
field66.setValue("-1")

Script52.addField(field66)

Script52.setSourceCode('''ecmascript:\n"+
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

Transform24.addChildren(Script52)
TimeSensor67 = x3d.TimeSensor()
TimeSensor67.setDEF("Clock")
TimeSensor67.setCycleInterval(45)
TimeSensor67.setLoop(True)

Transform24.addChildren(TimeSensor67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromNode("Clock")
ROUTE68.setFromField("fraction_changed")
ROUTE68.setToNode("UrlSelector")
ROUTE68.setToField("set_fraction")

Transform24.addChildren(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromNode("UrlSelector")
ROUTE69.setFromField("front_changed")
ROUTE69.setToNode("frontBackgroundTexture")
ROUTE69.setToField("url")

Transform24.addChildren(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromNode("UrlSelector")
ROUTE70.setFromField("back_changed")
ROUTE70.setToNode("backBackgroundTexture")
ROUTE70.setToField("url")

Transform24.addChildren(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromNode("UrlSelector")
ROUTE71.setFromField("left_changed")
ROUTE71.setToNode("leftBackgroundTexture")
ROUTE71.setToField("url")

Transform24.addChildren(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromNode("UrlSelector")
ROUTE72.setFromField("right_changed")
ROUTE72.setToNode("rightBackgroundTexture")
ROUTE72.setToField("url")

Transform24.addChildren(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromNode("UrlSelector")
ROUTE73.setFromField("top_changed")
ROUTE73.setToNode("topBackgroundTexture")
ROUTE73.setToField("url")

Transform24.addChildren(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromNode("UrlSelector")
ROUTE74.setFromField("bottom_changed")
ROUTE74.setToNode("bottomBackgroundTexture")
ROUTE74.setToField("url")

Transform24.addChildren(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromNode("UrlSelector")
ROUTE75.setFromField("front_changed")
ROUTE75.setToNode("frontShader")
ROUTE75.setToField("url")

Transform24.addChildren(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromNode("UrlSelector")
ROUTE76.setFromField("back_changed")
ROUTE76.setToNode("backShader")
ROUTE76.setToField("url")

Transform24.addChildren(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("UrlSelector")
ROUTE77.setFromField("left_changed")
ROUTE77.setToNode("leftShader")
ROUTE77.setToField("url")

Transform24.addChildren(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("UrlSelector")
ROUTE78.setFromField("right_changed")
ROUTE78.setToNode("rightShader")
ROUTE78.setToField("url")

Transform24.addChildren(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("UrlSelector")
ROUTE79.setFromField("top_changed")
ROUTE79.setToNode("topShader")
ROUTE79.setToField("url")

Transform24.addChildren(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("UrlSelector")
ROUTE80.setFromField("bottom_changed")
ROUTE80.setToNode("bottomShader")
ROUTE80.setToField("url")

Transform24.addChildren(ROUTE80)

Scene15.addChildren(Transform24)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../personal/mirror.new.python.x3d")
X3D0.toFileJSON("../personal/mirror.new.python.json")
