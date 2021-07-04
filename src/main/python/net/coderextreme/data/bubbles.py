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
component7.setLevel(4)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Grouping")
component8.setLevel(3)

head1.addComponent(component8)
meta9 = x3d.meta()
meta9.setName("title")
meta9.setContent("bubbles.x3d")

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
meta12.setContent("https://coderextreme.net/X3DJSONLD/bubbles.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("description")
meta13.setContent("not sure what this is")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
NavigationInfo15 = x3d.NavigationInfo()
NavigationInfo15.setType(["EXAMINE"])

Scene14.addChildren(NavigationInfo15)
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.setDEF("Tour")
Viewpoint16.setDescription("Tour Views")

Scene14.addChildren(Viewpoint16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setPosition([0,0,4])
Viewpoint17.setDescription("sphere in road")

Scene14.addChildren(Viewpoint17)
Background18 = x3d.Background()
Background18.setBackUrl(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"])
Background18.setBottomUrl(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"])
Background18.setFrontUrl(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"])
Background18.setLeftUrl(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"])
Background18.setTopUrl(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"])

Scene14.addChildren(Background18)
Transform19 = x3d.Transform()
Transform19.setDEF("Rose01")
Shape20 = x3d.Shape()
Sphere21 = x3d.Sphere()

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Appearance22.setDEF("_01_-_Default")
Material23 = x3d.Material()
Material23.setDiffuseColor([0.7,0.7,0.7])
Material23.setSpecularColor([0.5,0.5,0.5])

Appearance22.setMaterial(Material23)
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"])

ComposedCubeMapTexture24.setBack(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"])

ComposedCubeMapTexture24.setBottom(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"])

ComposedCubeMapTexture24.setFront(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"])

ComposedCubeMapTexture24.setLeft(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"])

ComposedCubeMapTexture24.setRight(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"])

ComposedCubeMapTexture24.setTop(ImageTexture30)

Appearance22.setTexture(ComposedCubeMapTexture24)
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.setDEF("x_ite")
ComposedShader31.setLanguage("GLSL")
field32 = x3d.field()
field32.setName("cube")
field32.setAccessType("inputOutput")
field32.setType("SFInt32")
field32.setValue("0")

ComposedShader31.addField(field32)
field33 = x3d.field()
field33.setName("chromaticDispertion")
field33.setAccessType("inputOutput")
field33.setType("SFVec3f")
field33.setValue("0.98 1 1.033")

ComposedShader31.addField(field33)
field34 = x3d.field()
field34.setName("bias")
field34.setAccessType("inputOutput")
field34.setType("SFFloat")
field34.setValue("0.5")

ComposedShader31.addField(field34)
field35 = x3d.field()
field35.setName("scale")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("0.5")

ComposedShader31.addField(field35)
field36 = x3d.field()
field36.setName("power")
field36.setAccessType("inputOutput")
field36.setType("SFFloat")
field36.setValue("2")

ComposedShader31.addField(field36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart37.setType("VERTEX")

ComposedShader31.addParts(ShaderPart37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.setUrl(["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])
ShaderPart38.setType("FRAGMENT")

ComposedShader31.addParts(ShaderPart38)

Appearance22.addShaders(ComposedShader31)
#<ComposedShader DEF=\"x3dom\" containerField='shaders' language='GLSL'> <field name='cube' accessType='inputOutput' type='SFInt32' value='0'/> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='power' accessType='inputOutput' type='SFFloat' value='2'/> <ShaderPart url='\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>

Shape20.setAppearance(Appearance22)

Transform19.addChildren(Shape20)

Scene14.addChildren(Transform19)
TimeSensor39 = x3d.TimeSensor()
TimeSensor39.setDEF("TourTime")
TimeSensor39.setCycleInterval(5)
TimeSensor39.setLoop(True)

Scene14.addChildren(TimeSensor39)
PositionInterpolator40 = x3d.PositionInterpolator()
PositionInterpolator40.setDEF("TourPosition")
PositionInterpolator40.setKey([0,1])
PositionInterpolator40.setKeyValue([0,0,10,0,0,-10])

Scene14.addChildren(PositionInterpolator40)
OrientationInterpolator41 = x3d.OrientationInterpolator()
OrientationInterpolator41.setDEF("TourOrientation")
OrientationInterpolator41.setKey([0,1])
OrientationInterpolator41.setKeyValue([0,1,0,0,0,1,0,3.1416])

Scene14.addChildren(OrientationInterpolator41)
Script42 = x3d.Script()
Script42.setDEF("RandomTourTime")
field43 = x3d.field()
field43.setName("set_cycle")
field43.setAccessType("inputOnly")
field43.setType("SFTime")

Script42.addField(field43)
field44 = x3d.field()
field44.setName("lastKey")
field44.setAccessType("inputOutput")
field44.setType("SFFloat")
field44.setValue("0")

Script42.addField(field44)
field45 = x3d.field()
field45.setName("orientations")
field45.setAccessType("inputOutput")
field45.setType("MFRotation")
field45.setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0")

Script42.addField(field45)
field46 = x3d.field()
field46.setName("positions")
field46.setAccessType("inputOutput")
field46.setType("MFVec3f")
field46.setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10")

Script42.addField(field46)
field47 = x3d.field()
field47.setName("position_changed")
field47.setAccessType("outputOnly")
field47.setType("MFVec3f")

Script42.addField(field47)
field48 = x3d.field()
field48.setName("set_orientation")
field48.setAccessType("inputOnly")
field48.setType("MFRotation")

Script42.addField(field48)
field49 = x3d.field()
field49.setName("orientation_changed")
field49.setAccessType("outputOnly")
field49.setType("MFRotation")

Script42.addField(field49)

Script42.setSourceCode('''ecmascript:\n"+
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
"                        orientation_changed[0] = orientations[ov];\n"+
"                        orientation_changed[1] = orientations[vc];\n"+
"		   } catch (e) {\n"+
"		   	if (typeof console.log === 'function') {\n"+
"				console.log(e);\n"+
"			}\n"+
"		   }\n"+
"               }''')

Scene14.addChildren(Script42)
ROUTE50 = x3d.ROUTE()
ROUTE50.setFromNode("TourTime")
ROUTE50.setFromField("cycleTime")
ROUTE50.setToNode("RandomTourTime")
ROUTE50.setToField("set_cycle")

Scene14.addChildren(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.setFromNode("RandomTourTime")
ROUTE51.setFromField("orientation_changed")
ROUTE51.setToNode("TourOrientation")
ROUTE51.setToField("set_keyValue")

Scene14.addChildren(ROUTE51)
ROUTE52 = x3d.ROUTE()
ROUTE52.setFromNode("RandomTourTime")
ROUTE52.setFromField("position_changed")
ROUTE52.setToNode("TourPosition")
ROUTE52.setToField("set_keyValue")

Scene14.addChildren(ROUTE52)
ROUTE53 = x3d.ROUTE()
ROUTE53.setFromNode("TourTime")
ROUTE53.setFromField("fraction_changed")
ROUTE53.setToNode("TourOrientation")
ROUTE53.setToField("set_fraction")

Scene14.addChildren(ROUTE53)
ROUTE54 = x3d.ROUTE()
ROUTE54.setFromNode("TourOrientation")
ROUTE54.setFromField("value_changed")
ROUTE54.setToNode("Tour")
ROUTE54.setToField("set_orientation")

Scene14.addChildren(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.setFromNode("TourTime")
ROUTE55.setFromField("fraction_changed")
ROUTE55.setToNode("TourPosition")
ROUTE55.setToField("set_fraction")

Scene14.addChildren(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.setFromNode("TourPosition")
ROUTE56.setFromField("value_changed")
ROUTE56.setToNode("Tour")
ROUTE56.setToField("set_position")

Scene14.addChildren(ROUTE56)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/bubbles_RoundTrip.x3d")
