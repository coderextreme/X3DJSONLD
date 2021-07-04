import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Texturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Rendering")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Shape")
component6.setLevel(4)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
meta8 = x3d.meta()
meta8.setName("title")
meta8.setContent("mirror2.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("creator")
meta9.setContent("John Carlson")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("generator")
meta10.setContent("manual")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("a mirrored sphere")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = x3d.Scene()
Viewpoint14 = x3d.Viewpoint()
Viewpoint14.setPosition([0,5,100])
Viewpoint14.setDescription("Switch background and images texture")

Scene13.addChildren(Viewpoint14)
Background15 = x3d.Background()
Background15.setDEF("cube")
Background15.setLeftUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])
Background15.setRightUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])
Background15.setFrontUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])
Background15.setBackUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])
Background15.setTopUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])
Background15.setBottomUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

Scene13.addChildren(Background15)
Transform16 = x3d.Transform()
Shape17 = x3d.Shape()
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()
Material19.setDiffuseColor([0.7,0.7,0.7])
Material19.setSpecularColor([0.5,0.5,0.5])

Appearance18.setMaterial(Material19)
ComposedCubeMapTexture20 = x3d.ComposedCubeMapTexture()
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.setDEF("backShader")
ImageTexture21.setUrl(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])

ComposedCubeMapTexture20.setBack(ImageTexture21)
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.setDEF("bottomShader")
ImageTexture22.setUrl(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])

ComposedCubeMapTexture20.setBottom(ImageTexture22)
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.setDEF("frontShader")
ImageTexture23.setUrl(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])

ComposedCubeMapTexture20.setFront(ImageTexture23)
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setDEF("leftShader")
ImageTexture24.setUrl(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])

ComposedCubeMapTexture20.setLeft(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setDEF("rightShader")
ImageTexture25.setUrl(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])

ComposedCubeMapTexture20.setRight(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setDEF("topShader")
ImageTexture26.setUrl(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])

ComposedCubeMapTexture20.setTop(ImageTexture26)

Appearance18.setTexture(ComposedCubeMapTexture20)
ComposedShader27 = x3d.ComposedShader()
ComposedShader27.setDEF("x_ite")
ComposedShader27.setLanguage("GLSL")
#http://hypertextbook.com/facts/2005/JustinChe.shtml
field28 = x3d.field()
field28.setName("chromaticDispertion")
field28.setAccessType("inputOutput")
field28.setType("SFVec3f")
field28.setValue("0.98 1 1.033")

ComposedShader27.addField(field28)
field29 = x3d.field()
field29.setName("cube")
field29.setAccessType("inputOutput")
field29.setType("SFInt32")
field29.setValue("0")

ComposedShader27.addField(field29)
field30 = x3d.field()
field30.setName("bias")
field30.setAccessType("inputOutput")
field30.setType("SFFloat")
field30.setValue("0.5")

ComposedShader27.addField(field30)
field31 = x3d.field()
field31.setName("scale")
field31.setAccessType("inputOutput")
field31.setType("SFFloat")
field31.setValue("0.5")

ComposedShader27.addField(field31)
field32 = x3d.field()
field32.setName("power")
field32.setAccessType("inputOutput")
field32.setType("SFFloat")
field32.setValue("2")

ComposedShader27.addField(field32)
ShaderPart33 = x3d.ShaderPart()
ShaderPart33.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart33.setType("VERTEX")

ComposedShader27.addParts(ShaderPart33)
ShaderPart34 = x3d.ShaderPart()
ShaderPart34.setUrl(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"])
ShaderPart34.setType("FRAGMENT")

ComposedShader27.addParts(ShaderPart34)

Appearance18.addShaders(ComposedShader27)
#<ComposedShader DEF=\"x3dom\" language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'/> <field name='cube' accessType='inputOutput' type='SFInt32' value='0'/> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='power' accessType='inputOutput' type='SFFloat' value='2'/> <ShaderPart url='\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/mix.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>

Shape17.setAppearance(Appearance18)
Sphere35 = x3d.Sphere()
Sphere35.setRadius(30)

Shape17.setGeometry(Sphere35)

Transform16.addChildren(Shape17)
Script36 = x3d.Script()
Script36.setDEF("UrlSelector")
Script36.setDirectOutput(True)
field37 = x3d.field()
field37.setName("frontUrls")
field37.setType("MFString")
field37.setAccessType("initializeOnly")
field37.setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")

Script36.addField(field37)
field38 = x3d.field()
field38.setName("backUrls")
field38.setType("MFString")
field38.setAccessType("initializeOnly")
field38.setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")

Script36.addField(field38)
field39 = x3d.field()
field39.setName("leftUrls")
field39.setType("MFString")
field39.setAccessType("initializeOnly")
field39.setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")

Script36.addField(field39)
field40 = x3d.field()
field40.setName("rightUrls")
field40.setType("MFString")
field40.setAccessType("initializeOnly")
field40.setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")

Script36.addField(field40)
field41 = x3d.field()
field41.setName("topUrls")
field41.setType("MFString")
field41.setAccessType("initializeOnly")
field41.setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")

Script36.addField(field41)
field42 = x3d.field()
field42.setName("bottomUrls")
field42.setType("MFString")
field42.setAccessType("initializeOnly")
field42.setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")

Script36.addField(field42)
field43 = x3d.field()
field43.setName("front_changed")
field43.setType("MFString")
field43.setAccessType("outputOnly")

Script36.addField(field43)
field44 = x3d.field()
field44.setName("back_changed")
field44.setType("MFString")
field44.setAccessType("outputOnly")

Script36.addField(field44)
field45 = x3d.field()
field45.setName("left_changed")
field45.setType("MFString")
field45.setAccessType("outputOnly")

Script36.addField(field45)
field46 = x3d.field()
field46.setName("right_changed")
field46.setType("MFString")
field46.setAccessType("outputOnly")

Script36.addField(field46)
field47 = x3d.field()
field47.setName("top_changed")
field47.setType("MFString")
field47.setAccessType("outputOnly")

Script36.addField(field47)
field48 = x3d.field()
field48.setName("bottom_changed")
field48.setType("MFString")
field48.setAccessType("outputOnly")

Script36.addField(field48)
field49 = x3d.field()
field49.setName("set_fraction")
field49.setType("SFFloat")
field49.setAccessType("inputOnly")

Script36.addField(field49)
field50 = x3d.field()
field50.setName("old")
field50.setType("SFInt32")
field50.setAccessType("inputOutput")
field50.setValue("-1")

Script36.addField(field50)

Script36.setSourceCode('''ecmascript:\n"+
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

Transform16.addChildren(Script36)
TimeSensor51 = x3d.TimeSensor()
TimeSensor51.setDEF("Clock")
TimeSensor51.setCycleInterval(45)
TimeSensor51.setLoop(True)

Transform16.addChildren(TimeSensor51)
ROUTE52 = x3d.ROUTE()
ROUTE52.setFromNode("Clock")
ROUTE52.setFromField("fraction_changed")
ROUTE52.setToNode("UrlSelector")
ROUTE52.setToField("set_fraction")

Transform16.addChildren(ROUTE52)
ROUTE53 = x3d.ROUTE()
ROUTE53.setFromNode("UrlSelector")
ROUTE53.setFromField("front_changed")
ROUTE53.setToNode("cube")
ROUTE53.setToField("frontUrl")

Transform16.addChildren(ROUTE53)
ROUTE54 = x3d.ROUTE()
ROUTE54.setFromNode("UrlSelector")
ROUTE54.setFromField("back_changed")
ROUTE54.setToNode("cube")
ROUTE54.setToField("backUrl")

Transform16.addChildren(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.setFromNode("UrlSelector")
ROUTE55.setFromField("left_changed")
ROUTE55.setToNode("cube")
ROUTE55.setToField("leftUrl")

Transform16.addChildren(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.setFromNode("UrlSelector")
ROUTE56.setFromField("right_changed")
ROUTE56.setToNode("cube")
ROUTE56.setToField("rightUrl")

Transform16.addChildren(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.setFromNode("UrlSelector")
ROUTE57.setFromField("top_changed")
ROUTE57.setToNode("cube")
ROUTE57.setToField("topUrl")

Transform16.addChildren(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.setFromNode("UrlSelector")
ROUTE58.setFromField("bottom_changed")
ROUTE58.setToNode("cube")
ROUTE58.setToField("bottomUrl")

Transform16.addChildren(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("UrlSelector")
ROUTE59.setFromField("front_changed")
ROUTE59.setToNode("frontShader")
ROUTE59.setToField("url")

Transform16.addChildren(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("UrlSelector")
ROUTE60.setFromField("back_changed")
ROUTE60.setToNode("backShader")
ROUTE60.setToField("url")

Transform16.addChildren(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("UrlSelector")
ROUTE61.setFromField("left_changed")
ROUTE61.setToNode("leftShader")
ROUTE61.setToField("url")

Transform16.addChildren(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("UrlSelector")
ROUTE62.setFromField("right_changed")
ROUTE62.setToNode("rightShader")
ROUTE62.setToField("url")

Transform16.addChildren(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("UrlSelector")
ROUTE63.setFromField("top_changed")
ROUTE63.setToNode("topShader")
ROUTE63.setToField("url")

Transform16.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("UrlSelector")
ROUTE64.setFromField("bottom_changed")
ROUTE64.setToNode("bottomShader")
ROUTE64.setToField("url")

Transform16.addChildren(ROUTE64)

Scene13.addChildren(Transform16)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/mirror2_RoundTrip.x3d")
