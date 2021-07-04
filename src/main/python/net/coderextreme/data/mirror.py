import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("EnvironmentalEffects")
component2.setLevel(3)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("Shaders")
component3.setLevel(1)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("CubeMapTexturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Texturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Rendering")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Shape")
component7.setLevel(1)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Grouping")
component8.setLevel(1)

head1.addComponent(component8)
meta9 = x3d.meta()
meta9.setName("title")
meta9.setContent("mirror.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("creator")
meta10.setContent("John Carlson")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("generator")
meta11.setContent("manual")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://coderextreme.net/X3DJSONLD/mirror.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("description")
meta13.setContent("sphere with alternating backgrounds")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
Viewpoint15 = x3d.Viewpoint()
Viewpoint15.setPosition([0,5,100])
Viewpoint15.setDescription("Switch background and images texture")

Scene14.addChildren(Viewpoint15)
TextureBackground16 = x3d.TextureBackground()
ImageTexture17 = x3d.ImageTexture()
ImageTexture17.setDEF("leftBack")
ImageTexture17.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])

TextureBackground16.setLeftTexture(ImageTexture17)
ImageTexture18 = x3d.ImageTexture()
ImageTexture18.setDEF("rightBack")
ImageTexture18.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])

TextureBackground16.setRightTexture(ImageTexture18)
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.setDEF("frontBack")
ImageTexture19.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])

TextureBackground16.setFrontTexture(ImageTexture19)
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.setDEF("backBack")
ImageTexture20.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])

TextureBackground16.setBackTexture(ImageTexture20)
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.setDEF("topBack")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"])

TextureBackground16.setTopTexture(ImageTexture21)
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.setDEF("bottomBack")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"])

TextureBackground16.setBottomTexture(ImageTexture22)

Scene14.addChildren(TextureBackground16)
Transform23 = x3d.Transform()
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.setDiffuseColor([0.7,0.7,0.7])
Material26.setSpecularColor([0.5,0.5,0.5])

Appearance25.setMaterial(Material26)
ComposedCubeMapTexture27 = x3d.ComposedCubeMapTexture()
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setDEF("backShader")
ImageTexture28.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture27.setBack(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setDEF("bottomShader")
ImageTexture29.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture27.setBottom(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setDEF("frontShader")
ImageTexture30.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture27.setFront(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setDEF("leftShader")
ImageTexture31.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture27.setLeft(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setDEF("rightShader")
ImageTexture32.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture27.setRight(ImageTexture32)
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.setDEF("topShader")
ImageTexture33.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture27.setTop(ImageTexture33)

Appearance25.setTexture(ComposedCubeMapTexture27)
#<ComposedShader DEF=\"x3dom\" language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'/> <field name='cube' accessType='inputOutput' type='SFInt32' value='0'/> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='power' accessType='inputOutput' type='SFFloat' value='2'/> <ShaderPart url='\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/mix.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader34 = x3d.ComposedShader()
ComposedShader34.setDEF("x_ite")
ComposedShader34.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field35 = x3d.field()
field35.setName("chromaticDispertion")
field35.setAccessType("inputOutput")
field35.setType("SFVec3f")
field35.setValue("0.98 1 1.033")

ComposedShader34.addField(field35)
field36 = x3d.field()
field36.setName("cube")
field36.setAccessType("inputOutput")
field36.setType("SFInt32")
field36.setValue("0")

ComposedShader34.addField(field36)
field37 = x3d.field()
field37.setName("bias")
field37.setAccessType("inputOutput")
field37.setType("SFFloat")
field37.setValue("0.5")

ComposedShader34.addField(field37)
field38 = x3d.field()
field38.setName("scale")
field38.setAccessType("inputOutput")
field38.setType("SFFloat")
field38.setValue("0.5")

ComposedShader34.addField(field38)
field39 = x3d.field()
field39.setName("power")
field39.setAccessType("inputOutput")
field39.setType("SFFloat")
field39.setValue("2")

ComposedShader34.addField(field39)
ShaderPart40 = x3d.ShaderPart()
ShaderPart40.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart40.setType("VERTEX")

ComposedShader34.addParts(ShaderPart40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.setUrl(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"])
ShaderPart41.setType("FRAGMENT")

ComposedShader34.addParts(ShaderPart41)

Appearance25.addShaders(ComposedShader34)

Shape24.setAppearance(Appearance25)
Sphere42 = x3d.Sphere()
Sphere42.setRadius(30)

Shape24.setGeometry(Sphere42)

Transform23.addChildren(Shape24)
Script43 = x3d.Script()
Script43.setDEF("UrlSelector")
Script43.setDirectOutput(True)
field44 = x3d.field()
field44.setName("frontUrls")
field44.setType("MFString")
field44.setAccessType("initializeOnly")
field44.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script43.addField(field44)
field45 = x3d.field()
field45.setName("backUrls")
field45.setType("MFString")
field45.setAccessType("initializeOnly")
field45.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script43.addField(field45)
field46 = x3d.field()
field46.setName("leftUrls")
field46.setType("MFString")
field46.setAccessType("initializeOnly")
field46.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script43.addField(field46)
field47 = x3d.field()
field47.setName("rightUrls")
field47.setType("MFString")
field47.setAccessType("initializeOnly")
field47.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script43.addField(field47)
field48 = x3d.field()
field48.setName("topUrls")
field48.setType("MFString")
field48.setAccessType("initializeOnly")
field48.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script43.addField(field48)
field49 = x3d.field()
field49.setName("bottomUrls")
field49.setType("MFString")
field49.setAccessType("initializeOnly")
field49.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script43.addField(field49)
field50 = x3d.field()
field50.setName("front_changed")
field50.setType("MFString")
field50.setAccessType("outputOnly")

Script43.addField(field50)
field51 = x3d.field()
field51.setName("back_changed")
field51.setType("MFString")
field51.setAccessType("outputOnly")

Script43.addField(field51)
field52 = x3d.field()
field52.setName("left_changed")
field52.setType("MFString")
field52.setAccessType("outputOnly")

Script43.addField(field52)
field53 = x3d.field()
field53.setName("right_changed")
field53.setType("MFString")
field53.setAccessType("outputOnly")

Script43.addField(field53)
field54 = x3d.field()
field54.setName("top_changed")
field54.setType("MFString")
field54.setAccessType("outputOnly")

Script43.addField(field54)
field55 = x3d.field()
field55.setName("bottom_changed")
field55.setType("MFString")
field55.setAccessType("outputOnly")

Script43.addField(field55)
field56 = x3d.field()
field56.setName("set_fraction")
field56.setType("SFFloat")
field56.setAccessType("inputOnly")

Script43.addField(field56)
field57 = x3d.field()
field57.setName("old")
field57.setType("SFInt32")
field57.setAccessType("inputOutput")
field57.setValue("-1")

Script43.addField(field57)

Script43.setSourceCode('''ecmascript:\n"+
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

Transform23.addChildren(Script43)
TimeSensor58 = x3d.TimeSensor()
TimeSensor58.setDEF("Clock")
TimeSensor58.setCycleInterval(45)
TimeSensor58.setLoop(True)

Transform23.addChildren(TimeSensor58)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("Clock")
ROUTE59.setFromField("fraction_changed")
ROUTE59.setToNode("UrlSelector")
ROUTE59.setToField("set_fraction")

Transform23.addChildren(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("UrlSelector")
ROUTE60.setFromField("front_changed")
ROUTE60.setToNode("frontBack")
ROUTE60.setToField("url")

Transform23.addChildren(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("UrlSelector")
ROUTE61.setFromField("back_changed")
ROUTE61.setToNode("backBack")
ROUTE61.setToField("url")

Transform23.addChildren(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("UrlSelector")
ROUTE62.setFromField("left_changed")
ROUTE62.setToNode("leftBack")
ROUTE62.setToField("url")

Transform23.addChildren(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("UrlSelector")
ROUTE63.setFromField("right_changed")
ROUTE63.setToNode("rightBack")
ROUTE63.setToField("url")

Transform23.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("UrlSelector")
ROUTE64.setFromField("top_changed")
ROUTE64.setToNode("topBack")
ROUTE64.setToField("url")

Transform23.addChildren(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("UrlSelector")
ROUTE65.setFromField("bottom_changed")
ROUTE65.setToNode("bottomBack")
ROUTE65.setToField("url")

Transform23.addChildren(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("UrlSelector")
ROUTE66.setFromField("front_changed")
ROUTE66.setToNode("frontShader")
ROUTE66.setToField("url")

Transform23.addChildren(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("UrlSelector")
ROUTE67.setFromField("back_changed")
ROUTE67.setToNode("backShader")
ROUTE67.setToField("url")

Transform23.addChildren(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromNode("UrlSelector")
ROUTE68.setFromField("left_changed")
ROUTE68.setToNode("leftShader")
ROUTE68.setToField("url")

Transform23.addChildren(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromNode("UrlSelector")
ROUTE69.setFromField("right_changed")
ROUTE69.setToNode("rightShader")
ROUTE69.setToField("url")

Transform23.addChildren(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromNode("UrlSelector")
ROUTE70.setFromField("top_changed")
ROUTE70.setToNode("topShader")
ROUTE70.setToField("url")

Transform23.addChildren(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromNode("UrlSelector")
ROUTE71.setFromField("bottom_changed")
ROUTE71.setToNode("bottomShader")
ROUTE71.setToField("url")

Transform23.addChildren(ROUTE71)

Scene14.addChildren(Transform23)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/mirror_RoundTrip.x3d")
