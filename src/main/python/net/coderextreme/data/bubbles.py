import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("EnvironmentalEffects")
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
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("bubbles.x3d")

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
meta13.setContent("https://coderextreme.net/X3DJSONLD/bubbles.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("description")
meta14.setContent("not sure what this is")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setType(["EXAMINE"])

Scene15.addChildren(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setDEF("Tour")
Viewpoint17.setDescription("Tour Views")

Scene15.addChildren(Viewpoint17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setPosition([0,0,4])
Viewpoint18.setDescription("sphere in road")

Scene15.addChildren(Viewpoint18)
Background19 = x3d.Background()
Background19.setBackUrl(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"])
Background19.setBottomUrl(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"])
Background19.setFrontUrl(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"])
Background19.setLeftUrl(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"])
Background19.setRightUrl(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"])
Background19.setTopUrl(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"])

Scene15.addChildren(Background19)
Transform20 = x3d.Transform()
Transform20.setDEF("Rose01")
Shape21 = x3d.Shape()
Sphere22 = x3d.Sphere()

Shape21.setGeometry(Sphere22)
Appearance23 = x3d.Appearance()
Appearance23.setDEF("_01_-_Default")
Material24 = x3d.Material()
Material24.setDiffuseColor([0.7,0.7,0.7])
Material24.setSpecularColor([0.5,0.5,0.5])

Appearance23.setMaterial(Material24)
ComposedCubeMapTexture25 = x3d.ComposedCubeMapTexture()
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"])

ComposedCubeMapTexture25.setBackTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"])

ComposedCubeMapTexture25.setBottomTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"])

ComposedCubeMapTexture25.setFrontTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"])

ComposedCubeMapTexture25.setLeftTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"])

ComposedCubeMapTexture25.setRightTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"])

ComposedCubeMapTexture25.setTopTexture(ImageTexture31)

Appearance23.setTexture(ComposedCubeMapTexture25)
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.setDEF("x_ite")
ComposedShader32.setLanguage("GLSL")
field33 = x3d.field()
field33.setName("cube")
field33.setAccessType("inputOutput")
field33.setType("SFInt32")
field33.setValue("0")

ComposedShader32.addField(field33)
field34 = x3d.field()
field34.setName("chromaticDispertion")
field34.setAccessType("inputOutput")
field34.setType("SFVec3f")
field34.setValue("0.98 1 1.033")

ComposedShader32.addField(field34)
field35 = x3d.field()
field35.setName("bias")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("0.5")

ComposedShader32.addField(field35)
field36 = x3d.field()
field36.setName("scale")
field36.setAccessType("inputOutput")
field36.setType("SFFloat")
field36.setValue("0.5")

ComposedShader32.addField(field36)
field37 = x3d.field()
field37.setName("power")
field37.setAccessType("inputOutput")
field37.setType("SFFloat")
field37.setValue("2")

ComposedShader32.addField(field37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart38.setType("VERTEX")

ComposedShader32.addParts(ShaderPart38)
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart39.setType("FRAGMENT")

ComposedShader32.addParts(ShaderPart39)

Appearance23.addShaders(ComposedShader32)
ComposedShader40 = x3d.ComposedShader()
ComposedShader40.setDEF("x3dom")
ComposedShader40.setLanguage("GLSL")
field41 = x3d.field()
field41.setName("cube")
field41.setAccessType("inputOutput")
field41.setType("SFInt32")
field41.setValue("0")

ComposedShader40.addField(field41)
field42 = x3d.field()
field42.setName("chromaticDispertion")
field42.setAccessType("inputOutput")
field42.setType("SFVec3f")
field42.setValue("0.98 1 1.033")

ComposedShader40.addField(field42)
field43 = x3d.field()
field43.setName("bias")
field43.setAccessType("inputOutput")
field43.setType("SFFloat")
field43.setValue("0.5")

ComposedShader40.addField(field43)
field44 = x3d.field()
field44.setName("scale")
field44.setAccessType("inputOutput")
field44.setType("SFFloat")
field44.setValue("0.5")

ComposedShader40.addField(field44)
field45 = x3d.field()
field45.setName("power")
field45.setAccessType("inputOutput")
field45.setType("SFFloat")
field45.setValue("2")

ComposedShader40.addField(field45)
ShaderPart46 = x3d.ShaderPart()
ShaderPart46.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart46.setType("VERTEX")

ComposedShader40.addParts(ShaderPart46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart47.setType("FRAGMENT")

ComposedShader40.addParts(ShaderPart47)

Appearance23.addShaders(ComposedShader40)

Shape21.setAppearance(Appearance23)

Transform20.addChildren(Shape21)

Scene15.addChildren(Transform20)
TimeSensor48 = x3d.TimeSensor()
TimeSensor48.setDEF("TourTime")
TimeSensor48.setCycleInterval(5)
TimeSensor48.setLoop(True)

Scene15.addChildren(TimeSensor48)
PositionInterpolator49 = x3d.PositionInterpolator()
PositionInterpolator49.setDEF("TourPosition")
PositionInterpolator49.setKey([0,1])
PositionInterpolator49.setKeyValue([0,0,10,0,0,-10])

Scene15.addChildren(PositionInterpolator49)
OrientationInterpolator50 = x3d.OrientationInterpolator()
OrientationInterpolator50.setDEF("TourOrientation")
OrientationInterpolator50.setKey([0,1])
OrientationInterpolator50.setKeyValue([0,1,0,0,0,1,0,3.1416])

Scene15.addChildren(OrientationInterpolator50)
Script51 = x3d.Script()
Script51.setDEF("RandomTourTime")
field52 = x3d.field()
field52.setName("set_cycle")
field52.setAccessType("inputOnly")
field52.setType("SFTime")

Script51.addField(field52)
field53 = x3d.field()
field53.setName("lastKey")
field53.setAccessType("inputOutput")
field53.setType("SFFloat")
field53.setValue("0")

Script51.addField(field53)
field54 = x3d.field()
field54.setName("orientations")
field54.setAccessType("inputOutput")
field54.setType("MFRotation")
field54.setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0")

Script51.addField(field54)
field55 = x3d.field()
field55.setName("positions")
field55.setAccessType("inputOutput")
field55.setType("MFVec3f")
field55.setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10")

Script51.addField(field55)
field56 = x3d.field()
field56.setName("position_changed")
field56.setAccessType("outputOnly")
field56.setType("MFVec3f")

Script51.addField(field56)
field57 = x3d.field()
field57.setName("set_orientation")
field57.setAccessType("inputOnly")
field57.setType("MFRotation")

Script51.addField(field57)
field58 = x3d.field()
field58.setName("orientation_changed")
field58.setAccessType("outputOnly")
field58.setType("MFRotation")

Script51.addField(field58)

Script51.setSourceCode('''ecmascript:\n"+
"               function set_cycle(value) {\n"+
"	       	   try {\n"+
"                        var ov = lastKey;\n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        var vc = lastKey;\n"+
"\n"+
"                        position_changed = new MFVec3f();\n"+
"                        position_changed[0] = new SFVec3f(positions[ov].x,positions[ov].y,positions[ov].z);\n"+
"                        position_changed[1] = new SFVec3f(positions[vc].x,positions[vc].y,positions[vc].z);\n"+
"\n"+
"                        orientation_changed = new MFRotation();\n"+
"                        orientation_changed[0] = new SFRotation(orientations[ov].x, orientations[ov].y, orientations[ov].z, orientations[ov].w);\n"+
"                        orientation_changed[1] = new SFRotation(orientations[vc].x, orientations[vc].y, orientations[vc].z, orientations[vc].w);\n"+
"		   } catch (e) {\n"+
"		   	if (typeof console.log === 'function') {\n"+
"				console.log(e);\n"+
"			}\n"+
"		   }\n"+
"               }''')

Scene15.addChildren(Script51)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("TourTime")
ROUTE59.setFromField("cycleTime")
ROUTE59.setToNode("RandomTourTime")
ROUTE59.setToField("set_cycle")

Scene15.addChildren(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("RandomTourTime")
ROUTE60.setFromField("orientation_changed")
ROUTE60.setToNode("TourOrientation")
ROUTE60.setToField("set_keyValue")

Scene15.addChildren(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("RandomTourTime")
ROUTE61.setFromField("position_changed")
ROUTE61.setToNode("TourPosition")
ROUTE61.setToField("set_keyValue")

Scene15.addChildren(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("TourTime")
ROUTE62.setFromField("fraction_changed")
ROUTE62.setToNode("TourOrientation")
ROUTE62.setToField("set_fraction")

Scene15.addChildren(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("TourOrientation")
ROUTE63.setFromField("value_changed")
ROUTE63.setToNode("Tour")
ROUTE63.setToField("set_orientation")

Scene15.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("TourTime")
ROUTE64.setFromField("fraction_changed")
ROUTE64.setToNode("TourPosition")
ROUTE64.setToField("set_fraction")

Scene15.addChildren(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("TourPosition")
ROUTE65.setFromField("value_changed")
ROUTE65.setToNode("Tour")
ROUTE65.setToField("set_position")

Scene15.addChildren(ROUTE65)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/bubbles_RoundTrip.x3d")
