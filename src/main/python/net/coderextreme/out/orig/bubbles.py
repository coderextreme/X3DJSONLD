from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
component2 = componentObject().setName("EnvironmentalEffects").setLevel(1)
head1.addComponent(component2)
component3 = componentObject().setName("EnvironmentalEffects").setLevel(3)
head1.addComponent(component3)
meta4 = metaObject().setName("title").setContent("bubbles.x3d")
head1.addMeta(meta4)
meta5 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta5)
meta6 = metaObject().setName("generator").setContent("manual")
head1.addMeta(meta6)
meta7 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/bubbles.x3d")
head1.addMeta(meta7)
meta8 = metaObject().setName("description").setContent("not sure what this is")
head1.addMeta(meta8)
X3D0.setHead(head1)
Scene9 = SceneObject()
NavigationInfo10 = NavigationInfoObject().setType(["EXAMINE"])
Scene9.addChild(NavigationInfo10)
Viewpoint11 = ViewpointObject().setDEF("Tour").setDescription("Tour Views")
Scene9.addChild(Viewpoint11)
Viewpoint12 = ViewpointObject().setPosition([0,0,4]).setDescription("sphere in road")
Scene9.addChild(Viewpoint12)
Background13 = BackgroundObject().setBackUrl(["images/all_probes/uffizi_cross/uffizi_back.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"]).setBottomUrl(["images/all_probes/uffizi_cross/uffizi_bottom.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"]).setFrontUrl(["images/all_probes/uffizi_cross/uffizi_front.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"]).setLeftUrl(["images/all_probes/uffizi_cross/uffizi_left.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"]).setRightUrl(["images/all_probes/uffizi_cross/uffizi_right.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"]).setTopUrl(["images/all_probes/uffizi_cross/uffizi_top.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"])
Scene9.addChild(Background13)
Transform14 = TransformObject().setDEF("Rose01")
Shape15 = ShapeObject()
Sphere16 = SphereObject()
Shape15.setGeometry(Sphere16)
Appearance17 = AppearanceObject().setDEF("_01_-_Default")
Material18 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance17.setMaterial(Material18)
ComposedCubeMapTexture19 = ComposedCubeMapTextureObject()
ImageTexture20 = ImageTextureObject().setUrl(["images/all_probes/uffizi_cross/uffizi_back.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"])
ComposedCubeMapTexture19.setBack(ImageTexture20)
ImageTexture21 = ImageTextureObject().setUrl(["images/all_probes/uffizi_cross/uffizi_bottom.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"])
ComposedCubeMapTexture19.setBottom(ImageTexture21)
ImageTexture22 = ImageTextureObject().setUrl(["images/all_probes/uffizi_cross/uffizi_front.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"])
ComposedCubeMapTexture19.setFront(ImageTexture22)
ImageTexture23 = ImageTextureObject().setUrl(["images/all_probes/uffizi_cross/uffizi_left.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"])
ComposedCubeMapTexture19.setLeft(ImageTexture23)
ImageTexture24 = ImageTextureObject().setUrl(["images/all_probes/uffizi_cross/uffizi_right.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"])
ComposedCubeMapTexture19.setRight(ImageTexture24)
ImageTexture25 = ImageTextureObject().setUrl(["images/all_probes/uffizi_cross/uffizi_top.png","http://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"])
ComposedCubeMapTexture19.setTop(ImageTexture25)
Appearance17.setTexture(ComposedCubeMapTexture19)
ComposedShader26 = ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
field27 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader26.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader26.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader26.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader26.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader26.addField(field31)
ShaderPart32 = ShaderPartObject().setType("VERTEX").setUrl(["cobweb.vs","http://coderextreme.net/X3DJSONLD/cobweb.vs"])
ComposedShader26.addParts(ShaderPart32)
ShaderPart33 = ShaderPartObject().setType("FRAGMENT").setUrl(["pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"])
ComposedShader26.addParts(ShaderPart33)
Appearance17.addShaders(ComposedShader26)
ComposedShader34 = ComposedShaderObject().setDEF("x3dom").setLanguage("GLSL")
field35 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader34.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader34.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader34.addField(field37)
field38 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader34.addField(field38)
field39 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader34.addField(field39)
ShaderPart40 = ShaderPartObject().setType("VERTEX").setUrl(["x3dom.vs","http://coderextreme.net/X3DJSONLD/x3dom.vs"])
ComposedShader34.addParts(ShaderPart40)
ShaderPart41 = ShaderPartObject().setType("FRAGMENT").setUrl(["pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"])
ComposedShader34.addParts(ShaderPart41)
Appearance17.addShaders(ComposedShader34)
Shape15.setAppearance(Appearance17)
Transform14.addChild(Shape15)
Scene9.addChild(Transform14)
TimeSensor42 = TimeSensorObject().setDEF("TourTime").setCycleInterval(5).setLoop(True)
Scene9.addChild(TimeSensor42)
PositionInterpolator43 = PositionInterpolatorObject().setDEF("TourPosition").setKey([0,1]).setKeyValue([0,0,10,0,0,-10])
Scene9.addChild(PositionInterpolator43)
OrientationInterpolator44 = OrientationInterpolatorObject().setDEF("TourOrientation").setKey([0,1]).setKeyValue([0,1,0,0,0,1,0,3.1416])
Scene9.addChild(OrientationInterpolator44)
Script45 = ScriptObject().setDEF("RandomTourTime")
field46 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script45.addField(field46)
field47 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("lastKey").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
Script45.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_MFROTATION).setName("orientations").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0")
Script45.addField(field48)
field49 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("positions").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10")
Script45.addField(field49)
field50 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("position").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script45.addField(field50)
field51 = fieldObject().setType(fieldObject.TYPE_MFROTATION).setName("orientation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script45.addField(field51)

Script45.setSourceCode("ecmascript:\n"+
"               function set_cycle(value) {\n"+
"                        //var positions = [[0, 0, 10], [-10, 0, 0], [0, 0, -10], [10, 0, 0], [0, 0, 10], [0, 10, 0], [0, 0, 10], [0, -10, 0], [0, 0, 10]];\n"+
"                        //var orientations = [[0, 1, 0, 0], [0, 1, 0, -1.57], [0, 1, 0, 3.14], [0, 1, 0, 1.57], [0, 1, 0, 0] [1, 0, 0, -1.57], [0, 1, 0, 0], [1, 0, 0, 1.57], [0, 1, 0, 0]];\n"+
"                        //Browser.println(lastKey);\n"+
"                        var ov = lastKey;\n"+
"                        // Browser.println(ov);      \n"+
"                        //Browser.println(positions.length);                  \n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        // Browser.println(lastKey);\n"+
"                        var vc = lastKey;\n"+
"                        \n"+
"                        // Browser.println(orientations[ov]);\n"+
"                        // Browser.println(orientations[vc]);\n"+
"                        orientation = new MFRotation();\n"+
"                        orientation[0] = new SFRotation(orientations[ov][0], orientations[ov][1], orientations[ov][2], orientations[ov][3]);\n"+
"                        orientation[1] = new SFRotation(orientations[vc][0], orientations[vc][1], orientations[vc][2], orientations[vc][3]);\n"+
"                        // Browser.println(positions[ov]);\n"+
"                        // Browser.println(positions[vc]);\n"+
"                        position = new MFVec3f();\n"+
"                        position[0] = new SFVec3f(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3f(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"                    // }\n"+
"               }\n"+
"")
Scene9.addChild(Script45)
ROUTE52 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle")
Scene9.addChild(ROUTE52)
ROUTE53 = ROUTEObject().setFromNode("RandomTourTime").setFromField("orientation").setToNode("TourOrientation").setToField("keyValue")
Scene9.addChild(ROUTE53)
ROUTE54 = ROUTEObject().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue")
Scene9.addChild(ROUTE54)
ROUTE55 = ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourOrientation").setToField("set_fraction")
Scene9.addChild(ROUTE55)
ROUTE56 = ROUTEObject().setFromNode("TourOrientation").setFromField("value_changed").setToNode("Tour").setToField("set_orientation")
Scene9.addChild(ROUTE56)
ROUTE57 = ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction")
Scene9.addChild(ROUTE57)
ROUTE58 = ROUTEObject().setFromNode("TourPosition").setFromField("value_changed").setToNode("Tour").setToField("set_position")
Scene9.addChild(ROUTE58)
X3D0.setScene(Scene9)

X3D0.toFileX3D("../out/orig/bubbles.new.x3d")
