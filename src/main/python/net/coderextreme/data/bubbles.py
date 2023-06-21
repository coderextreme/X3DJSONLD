from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
#component name='EnvironmentalEffects' level='1'/
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
component7.setLevel(4)

head1.addComponent(component7)
component8 = component()
component8.setName("Grouping")
component8.setLevel(3)

head1.addComponent(component8)
meta9 = meta()
meta9.setName("title")
meta9.setContent("bubbles.x3d")

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
meta12.setContent("https://coderextreme.net/X3DJSONLD/bubbles.x3d")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("description")
meta13.setContent("not sure what this is")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = Scene()
NavigationInfo15 = NavigationInfo()
NavigationInfo15.setType(["EXAMINE"])

Scene14.addChildren(NavigationInfo15)
Viewpoint16 = Viewpoint()
Viewpoint16.setDEF("Tour")
Viewpoint16.setDescription("Tour Views")

Scene14.addChildren(Viewpoint16)
Viewpoint17 = Viewpoint()
Viewpoint17.setPosition([0,0,4])
Viewpoint17.setDescription("sphere in road")

Scene14.addChildren(Viewpoint17)
Background18 = Background()
Background18.setBackUrl(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"])
Background18.setBottomUrl(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"])
Background18.setFrontUrl(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"])
Background18.setLeftUrl(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"])
Background18.setTopUrl(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"])

Scene14.addChildren(Background18)
Transform19 = Transform()
Transform19.setDEF("Rose01")
Shape20 = Shape()
Sphere21 = Sphere()

Shape20.setGeometry(Sphere21)
Appearance22 = Appearance()
Appearance22.setDEF("_01_-_Default")
Material23 = Material()
Material23.setDiffuseColor([0.7,0.7,0.7])
Material23.setSpecularColor([0.5,0.5,0.5])

Appearance22.setMaterial(Material23)
ComposedCubeMapTexture24 = ComposedCubeMapTexture()
ImageTexture25 = ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"])

ComposedCubeMapTexture24.setBack(ImageTexture25)
ImageTexture26 = ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"])

ComposedCubeMapTexture24.setBottom(ImageTexture26)
ImageTexture27 = ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"])

ComposedCubeMapTexture24.setFront(ImageTexture27)
ImageTexture28 = ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"])

ComposedCubeMapTexture24.setLeft(ImageTexture28)
ImageTexture29 = ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"])

ComposedCubeMapTexture24.setRight(ImageTexture29)
ImageTexture30 = ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"])

ComposedCubeMapTexture24.setTop(ImageTexture30)

Appearance22.setTexture(ComposedCubeMapTexture24)
ComposedShader31 = ComposedShader()
ComposedShader31.setDEF("x_ite")
ComposedShader31.setLanguage("GLSL")
field32 = field()
field32.setName("cube")
field32.setAccessType("inputOutput")
field32.setType("SFInt32")
field32.setValue("0")

ComposedShader31.addField(field32)
field33 = field()
field33.setName("chromaticDispertion")
field33.setAccessType("inputOutput")
field33.setType("SFVec3f")
field33.setValue("0.98 1 1.033")

ComposedShader31.addField(field33)
field34 = field()
field34.setName("bias")
field34.setAccessType("inputOutput")
field34.setType("SFFloat")
field34.setValue("0.5")

ComposedShader31.addField(field34)
field35 = field()
field35.setName("scale")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("0.5")

ComposedShader31.addField(field35)
field36 = field()
field36.setName("power")
field36.setAccessType("inputOutput")
field36.setType("SFFloat")
field36.setValue("2")

ComposedShader31.addField(field36)
ShaderPart37 = ShaderPart()
ShaderPart37.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart37.setType("VERTEX")

ComposedShader31.addParts(ShaderPart37)
ShaderPart38 = ShaderPart()
ShaderPart38.setUrl(["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])
ShaderPart38.setType("FRAGMENT")

ComposedShader31.addParts(ShaderPart38)

Appearance22.addShaders(ComposedShader31)
ComposedShader39 = ComposedShader()
ComposedShader39.setDEF("x3dom")
ComposedShader39.setLanguage("GLSL")
field40 = field()
field40.setName("cube")
field40.setAccessType("inputOutput")
field40.setType("SFInt32")
field40.setValue("0")

ComposedShader39.addField(field40)
field41 = field()
field41.setName("chromaticDispertion")
field41.setAccessType("inputOutput")
field41.setType("SFVec3f")
field41.setValue("0.98 1 1.033")

ComposedShader39.addField(field41)
field42 = field()
field42.setName("bias")
field42.setAccessType("inputOutput")
field42.setType("SFFloat")
field42.setValue("0.5")

ComposedShader39.addField(field42)
field43 = field()
field43.setName("scale")
field43.setAccessType("inputOutput")
field43.setType("SFFloat")
field43.setValue("0.5")

ComposedShader39.addField(field43)
field44 = field()
field44.setName("power")
field44.setAccessType("inputOutput")
field44.setType("SFFloat")
field44.setValue("2")

ComposedShader39.addField(field44)
ShaderPart45 = ShaderPart()
ShaderPart45.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart45.setType("VERTEX")

ComposedShader39.addParts(ShaderPart45)
ShaderPart46 = ShaderPart()
ShaderPart46.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart46.setType("FRAGMENT")

ComposedShader39.addParts(ShaderPart46)

Appearance22.addShaders(ComposedShader39)

Shape20.setAppearance(Appearance22)

Transform19.addChildren(Shape20)

Scene14.addChildren(Transform19)
TimeSensor47 = TimeSensor()
TimeSensor47.setDEF("TourTime")
TimeSensor47.setCycleInterval(5)
TimeSensor47.setLoop(True)

Scene14.addChildren(TimeSensor47)
PositionInterpolator48 = PositionInterpolator()
PositionInterpolator48.setDEF("TourPosition")
PositionInterpolator48.setKey([0,1])
PositionInterpolator48.setKeyValue([0,0,10,0,0,-10])

Scene14.addChildren(PositionInterpolator48)
OrientationInterpolator49 = OrientationInterpolator()
OrientationInterpolator49.setDEF("TourOrientation")
OrientationInterpolator49.setKey([0,1])
OrientationInterpolator49.setKeyValue([0,1,0,0,0,1,0,3.1416])

Scene14.addChildren(OrientationInterpolator49)
Script50 = Script()
Script50.setDEF("RandomTourTime")
field51 = field()
field51.setName("set_cycle")
field51.setAccessType("inputOnly")
field51.setType("SFTime")

Script50.addField(field51)
field52 = field()
field52.setName("lastKey")
field52.setAccessType("inputOutput")
field52.setType("SFFloat")
field52.setValue("0")

Script50.addField(field52)
field53 = field()
field53.setName("orientations")
field53.setAccessType("inputOutput")
field53.setType("MFRotation")
field53.setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0")

Script50.addField(field53)
field54 = field()
field54.setName("positions")
field54.setAccessType("inputOutput")
field54.setType("MFVec3f")
field54.setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10")

Script50.addField(field54)
field55 = field()
field55.setName("fraction_changed")
field55.setAccessType("outputOnly")
field55.setType("SFFloat")

Script50.addField(field55)
field56 = field()
field56.setName("position_changed")
field56.setAccessType("outputOnly")
field56.setType("MFVec3f")

Script50.addField(field56)
field57 = field()
field57.setName("set_orientation")
field57.setAccessType("inputOnly")
field57.setType("MFRotation")

Script50.addField(field57)
field58 = field()
field58.setName("orientation_changed")
field58.setAccessType("outputOnly")
field58.setType("MFRotation")

Script50.addField(field58)

Script50.setSourceCode('''ecmascript:\n"+
"               function set_cycle(value) {\n"+
"	       	   try {\n"+
"                        var ov = lastKey;\n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        var vc = lastKey;\n"+
"\n"+
"                        position_changed[0] = positions[ov];\n"+
"                        position_changed[1] = positions[vc];\n"+
"\n"+
"                        orientation_changed[0] = orientations[ov];\n"+
"                        orientation_changed[1] = orientations[vc];\n"+
"\n"+
"                        fraction_changed = 0;\n"+
"		   } catch (e) {\n"+
"		   	if (typeof console.log === 'function') {\n"+
"				console.log(e);\n"+
"			}\n"+
"		   }\n"+
"               }''')

Scene14.addChildren(Script50)
ROUTE59 = ROUTE()
ROUTE59.setFromNode("TourTime")
ROUTE59.setFromField("cycleTime")
ROUTE59.setToNode("RandomTourTime")
ROUTE59.setToField("set_cycle")

Scene14.addChildren(ROUTE59)
ROUTE60 = ROUTE()
ROUTE60.setFromNode("RandomTourTime")
ROUTE60.setFromField("fraction_changed")
ROUTE60.setToNode("TourOrientation")
ROUTE60.setToField("set_fraction")

Scene14.addChildren(ROUTE60)
ROUTE61 = ROUTE()
ROUTE61.setFromNode("RandomTourTime")
ROUTE61.setFromField("fraction_changed")
ROUTE61.setToNode("TourPosition")
ROUTE61.setToField("set_fraction")

Scene14.addChildren(ROUTE61)
ROUTE62 = ROUTE()
ROUTE62.setFromNode("RandomTourTime")
ROUTE62.setFromField("orientation_changed")
ROUTE62.setToNode("TourOrientation")
ROUTE62.setToField("set_keyValue")

Scene14.addChildren(ROUTE62)
ROUTE63 = ROUTE()
ROUTE63.setFromNode("RandomTourTime")
ROUTE63.setFromField("position_changed")
ROUTE63.setToNode("TourPosition")
ROUTE63.setToField("set_keyValue")

Scene14.addChildren(ROUTE63)
ROUTE64 = ROUTE()
ROUTE64.setFromNode("TourTime")
ROUTE64.setFromField("fraction_changed")
ROUTE64.setToNode("TourOrientation")
ROUTE64.setToField("set_fraction")

Scene14.addChildren(ROUTE64)
ROUTE65 = ROUTE()
ROUTE65.setFromNode("TourOrientation")
ROUTE65.setFromField("value_changed")
ROUTE65.setToNode("Tour")
ROUTE65.setToField("set_orientation")

Scene14.addChildren(ROUTE65)
ROUTE66 = ROUTE()
ROUTE66.setFromNode("TourTime")
ROUTE66.setFromField("fraction_changed")
ROUTE66.setToNode("TourPosition")
ROUTE66.setToField("set_fraction")

Scene14.addChildren(ROUTE66)
ROUTE67 = ROUTE()
ROUTE67.setFromNode("TourPosition")
ROUTE67.setFromField("value_changed")
ROUTE67.setToNode("Tour")
ROUTE67.setToField("set_position")

Scene14.addChildren(ROUTE67)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/bubbles_RoundTrip.x3d")
