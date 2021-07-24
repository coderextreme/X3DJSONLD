from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
component2 = component()
component2.setName("EnvironmentalEffects")
component2.setLevel(1)

head1.addComponent(component2)
component3 = component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = component()
component4.setName("Shaders")
component4.setLevel(1)

head1.addComponent(component4)
component5 = component()
component5.setName("CubeMapTexturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = component()
component6.setName("Texturing")
component6.setLevel(1)

head1.addComponent(component6)
component7 = component()
component7.setName("Rendering")
component7.setLevel(1)

head1.addComponent(component7)
component8 = component()
component8.setName("Shape")
component8.setLevel(4)

head1.addComponent(component8)
component9 = component()
component9.setName("Grouping")
component9.setLevel(3)

head1.addComponent(component9)
meta10 = meta()
meta10.setName("title")
meta10.setContent("bubbles.x3d")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("generator")
meta12.setContent("manual")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("identifier")
meta13.setContent("https://coderextreme.net/X3DJSONLD/bubbles.x3d")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("description")
meta14.setContent("not sure what this is")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = Scene()
NavigationInfo16 = NavigationInfo()
NavigationInfo16.setType(["EXAMINE"])

Scene15.addChildren(NavigationInfo16)
Viewpoint17 = Viewpoint()
Viewpoint17.setDEF("Tour")
Viewpoint17.setDescription("Tour Views")

Scene15.addChildren(Viewpoint17)
Viewpoint18 = Viewpoint()
Viewpoint18.setPosition([0,0,4])
Viewpoint18.setDescription("sphere in road")

Scene15.addChildren(Viewpoint18)
Background19 = Background()
Background19.setBackUrl(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"])
Background19.setBottomUrl(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"])
Background19.setFrontUrl(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"])
Background19.setLeftUrl(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"])
Background19.setRightUrl(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"])
Background19.setTopUrl(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"])

Scene15.addChildren(Background19)
Transform20 = Transform()
Transform20.setDEF("Rose01")
Shape21 = Shape()
Sphere22 = Sphere()

Shape21.setGeometry(Sphere22)
Appearance23 = Appearance()
Appearance23.setDEF("_01_-_Default")
Material24 = Material()
Material24.setDiffuseColor([0.7,0.7,0.7])
Material24.setSpecularColor([0.5,0.5,0.5])

Appearance23.setMaterial(Material24)
ComposedCubeMapTexture25 = ComposedCubeMapTexture()
ImageTexture26 = ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"])

ComposedCubeMapTexture25.setBackTexture(ImageTexture26)
ImageTexture27 = ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"])

ComposedCubeMapTexture25.setBottomTexture(ImageTexture27)
ImageTexture28 = ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"])

ComposedCubeMapTexture25.setFrontTexture(ImageTexture28)
ImageTexture29 = ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"])

ComposedCubeMapTexture25.setLeftTexture(ImageTexture29)
ImageTexture30 = ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"])

ComposedCubeMapTexture25.setRightTexture(ImageTexture30)
ImageTexture31 = ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"])

ComposedCubeMapTexture25.setTopTexture(ImageTexture31)

Appearance23.setTexture(ComposedCubeMapTexture25)
ComposedShader32 = ComposedShader()
ComposedShader32.setDEF("x_ite")
ComposedShader32.setLanguage("GLSL")
field33 = field()
field33.setName("cube")
field33.setAccessType("inputOutput")
field33.setType("SFInt32")
field33.setValue("0")

ComposedShader32.addField(field33)
field34 = field()
field34.setName("chromaticDispertion")
field34.setAccessType("inputOutput")
field34.setType("SFVec3f")
field34.setValue("0.98 1 1.033")

ComposedShader32.addField(field34)
field35 = field()
field35.setName("bias")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("0.5")

ComposedShader32.addField(field35)
field36 = field()
field36.setName("scale")
field36.setAccessType("inputOutput")
field36.setType("SFFloat")
field36.setValue("0.5")

ComposedShader32.addField(field36)
field37 = field()
field37.setName("power")
field37.setAccessType("inputOutput")
field37.setType("SFFloat")
field37.setValue("2")

ComposedShader32.addField(field37)
ShaderPart38 = ShaderPart()
ShaderPart38.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart38.setType("VERTEX")

ComposedShader32.addParts(ShaderPart38)
ShaderPart39 = ShaderPart()
ShaderPart39.setUrl(["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])
ShaderPart39.setType("FRAGMENT")

ComposedShader32.addParts(ShaderPart39)

Appearance23.addShaders(ComposedShader32)
ComposedShader40 = ComposedShader()
ComposedShader40.setDEF("x3dom")
ComposedShader40.setLanguage("GLSL")
field41 = field()
field41.setName("cube")
field41.setAccessType("inputOutput")
field41.setType("SFInt32")
field41.setValue("0")

ComposedShader40.addField(field41)
field42 = field()
field42.setName("chromaticDispertion")
field42.setAccessType("inputOutput")
field42.setType("SFVec3f")
field42.setValue("0.98 1 1.033")

ComposedShader40.addField(field42)
field43 = field()
field43.setName("bias")
field43.setAccessType("inputOutput")
field43.setType("SFFloat")
field43.setValue("0.5")

ComposedShader40.addField(field43)
field44 = field()
field44.setName("scale")
field44.setAccessType("inputOutput")
field44.setType("SFFloat")
field44.setValue("0.5")

ComposedShader40.addField(field44)
field45 = field()
field45.setName("power")
field45.setAccessType("inputOutput")
field45.setType("SFFloat")
field45.setValue("2")

ComposedShader40.addField(field45)
ShaderPart46 = ShaderPart()
ShaderPart46.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart46.setType("VERTEX")

ComposedShader40.addParts(ShaderPart46)
ShaderPart47 = ShaderPart()
ShaderPart47.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart47.setType("FRAGMENT")

ComposedShader40.addParts(ShaderPart47)

Appearance23.addShaders(ComposedShader40)

Shape21.setAppearance(Appearance23)

Transform20.addChildren(Shape21)

Scene15.addChildren(Transform20)
TimeSensor48 = TimeSensor()
TimeSensor48.setDEF("TourTime")
TimeSensor48.setCycleInterval(5)
TimeSensor48.setLoop(True)

Scene15.addChildren(TimeSensor48)
PositionInterpolator49 = PositionInterpolator()
PositionInterpolator49.setDEF("TourPosition")
PositionInterpolator49.setKey([0,1])
PositionInterpolator49.setKeyValue([0,0,10,0,0,-10])

Scene15.addChildren(PositionInterpolator49)
OrientationInterpolator50 = OrientationInterpolator()
OrientationInterpolator50.setDEF("TourOrientation")
OrientationInterpolator50.setKey([0,1])
OrientationInterpolator50.setKeyValue([0,1,0,0,0,1,0,3.1416])

Scene15.addChildren(OrientationInterpolator50)
Script51 = Script()
Script51.setDEF("RandomTourTime")
field52 = field()
field52.setName("set_cycle")
field52.setAccessType("inputOnly")
field52.setType("SFTime")

Script51.addField(field52)
field53 = field()
field53.setName("lastKey")
field53.setAccessType("inputOutput")
field53.setType("SFFloat")
field53.setValue("0")

Script51.addField(field53)
field54 = field()
field54.setName("orientations")
field54.setAccessType("inputOutput")
field54.setType("MFRotation")
field54.setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0")

Script51.addField(field54)
field55 = field()
field55.setName("positions")
field55.setAccessType("inputOutput")
field55.setType("MFVec3f")
field55.setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10")

Script51.addField(field55)
field56 = field()
field56.setName("fraction_changed")
field56.setAccessType("outputOnly")
field56.setType("SFFloat")

Script51.addField(field56)
field57 = field()
field57.setName("position_changed")
field57.setAccessType("outputOnly")
field57.setType("MFVec3f")

Script51.addField(field57)
field58 = field()
field58.setName("set_orientation")
field58.setAccessType("inputOnly")
field58.setType("MFRotation")

Script51.addField(field58)
field59 = field()
field59.setName("orientation_changed")
field59.setAccessType("outputOnly")
field59.setType("MFRotation")

Script51.addField(field59)

Script51.setSourceCode('''ecmascript:\n"+
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

Scene15.addChildren(Script51)
ROUTE60 = ROUTE()
ROUTE60.setFromNode("TourTime")
ROUTE60.setFromField("cycleTime")
ROUTE60.setToNode("RandomTourTime")
ROUTE60.setToField("set_cycle")

Scene15.addChildren(ROUTE60)
ROUTE61 = ROUTE()
ROUTE61.setFromNode("RandomTourTime")
ROUTE61.setFromField("fraction_changed")
ROUTE61.setToNode("TourOrientation")
ROUTE61.setToField("set_fraction")

Scene15.addChildren(ROUTE61)
ROUTE62 = ROUTE()
ROUTE62.setFromNode("RandomTourTime")
ROUTE62.setFromField("fraction_changed")
ROUTE62.setToNode("TourPosition")
ROUTE62.setToField("set_fraction")

Scene15.addChildren(ROUTE62)
ROUTE63 = ROUTE()
ROUTE63.setFromNode("RandomTourTime")
ROUTE63.setFromField("orientation_changed")
ROUTE63.setToNode("TourOrientation")
ROUTE63.setToField("set_keyValue")

Scene15.addChildren(ROUTE63)
ROUTE64 = ROUTE()
ROUTE64.setFromNode("RandomTourTime")
ROUTE64.setFromField("position_changed")
ROUTE64.setToNode("TourPosition")
ROUTE64.setToField("set_keyValue")

Scene15.addChildren(ROUTE64)
ROUTE65 = ROUTE()
ROUTE65.setFromNode("TourTime")
ROUTE65.setFromField("fraction_changed")
ROUTE65.setToNode("TourOrientation")
ROUTE65.setToField("set_fraction")

Scene15.addChildren(ROUTE65)
ROUTE66 = ROUTE()
ROUTE66.setFromNode("TourOrientation")
ROUTE66.setFromField("value_changed")
ROUTE66.setToNode("Tour")
ROUTE66.setToField("set_orientation")

Scene15.addChildren(ROUTE66)
ROUTE67 = ROUTE()
ROUTE67.setFromNode("TourTime")
ROUTE67.setFromField("fraction_changed")
ROUTE67.setToNode("TourPosition")
ROUTE67.setToField("set_fraction")

Scene15.addChildren(ROUTE67)
ROUTE68 = ROUTE()
ROUTE68.setFromNode("TourPosition")
ROUTE68.setFromField("value_changed")
ROUTE68.setToNode("Tour")
ROUTE68.setToField("set_position")

Scene15.addChildren(ROUTE68)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/bubbles_RoundTrip.x3d")
