# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

component2 = componentObject()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = componentObject()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
meta4 = metaObject()
meta4.setName("title")
meta4.setContent("flowers.x3d")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("5 or more prismatic flowers")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("generator")
meta7.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/flowers.x3d")

head1.addMeta(meta8)
X3D0.setHead(head1)
Scene9 = SceneObject()

NavigationInfo10 = NavigationInfoObject()

Scene9.addChild(NavigationInfo10)

Scene9.addComments(CommentsBlock("""Images courtesy of Paul Debevec's Light Probe Image Gallery"""))
Background11 = BackgroundObject()
Background11.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background11.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background11.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background11.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background11.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background11.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene9.addChild(Background11)
ProtoDeclare12 = ProtoDeclareObject()
ProtoDeclare12.setName("flower")

ProtoBody13 = ProtoBodyObject()

Transform14 = TransformObject()
Transform14.setDEF("animate_transform")

Shape15 = ShapeObject()

Appearance16 = AppearanceObject()

Material17 = MaterialObject()
Material17.setDiffuseColor([0.7,0.7,0.7])
Material17.setSpecularColor([0.5,0.5,0.5])

Appearance16.setMaterial(Material17)
ComposedCubeMapTexture18 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture18.setDEF("texture")

ImageTexture19 = ImageTextureObject()
ImageTexture19.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture18.setBack(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture18.setBottom(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture18.setFront(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture18.setLeft(ImageTexture22)
ImageTexture23 = ImageTextureObject()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture18.setRight(ImageTexture23)
ImageTexture24 = ImageTextureObject()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture18.setTop(ImageTexture24)
Appearance16.setTexture(ComposedCubeMapTexture18)
ComposedShader25 = ComposedShaderObject()
ComposedShader25.setDEF("x3dom")
ComposedShader25.setLanguage("GLSL")

field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFINT32)
field26.setName("cube")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setValue("0")

ComposedShader25.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFVEC3F)
field27.setName("chromaticDispertion")
field27.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field27.setValue("0.98 1 1.033")

ComposedShader25.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFFLOAT)
field28.setName("bias")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("0.5")

ComposedShader25.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFFLOAT)
field29.setName("scale")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("0.5")

ComposedShader25.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFFLOAT)
field30.setName("power")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("2")

ComposedShader25.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("a")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("10")

ComposedShader25.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("b")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("1")

ComposedShader25.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFFLOAT)
field33.setName("c")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("20")

ComposedShader25.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFFLOAT)
field34.setName("d")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setValue("20")

ComposedShader25.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFFLOAT)
field35.setName("tdelta")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field35.setValue("0")

ComposedShader25.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFFLOAT)
field36.setName("pdelta")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field36.setValue("0")

ComposedShader25.addField(field36)

ComposedShader25.addComments(CommentsBlock("""<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"""))
ShaderPart37 = ShaderPartObject()
ShaderPart37.setType("VERTEX")
ShaderPart37.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])

ComposedShader25.addParts(ShaderPart37)
ShaderPart38 = ShaderPartObject()
ShaderPart38.setType("FRAGMENT")
ShaderPart38.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])

ComposedShader25.addParts(ShaderPart38)
Appearance16.addShaders(ComposedShader25)
ComposedShader39 = ComposedShaderObject()
ComposedShader39.setDEF("x_ite")
ComposedShader39.setLanguage("GLSL")

field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFNODE)
field40.setName("cube")
field40.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture41 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture41.setUSE("texture")

field40.addChild(ComposedCubeMapTexture41)
ComposedShader39.addField(field40)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFVEC3F)
field42.setName("chromaticDispertion")
field42.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field42.setValue("0.98 1 1.033")

ComposedShader39.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFFLOAT)
field43.setName("bias")
field43.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field43.setValue("0.5")

ComposedShader39.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFFLOAT)
field44.setName("scale")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field44.setValue("0.5")

ComposedShader39.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFFLOAT)
field45.setName("power")
field45.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field45.setValue("2")

ComposedShader39.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFFLOAT)
field46.setName("a")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field46.setValue("10")

ComposedShader39.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFFLOAT)
field47.setName("b")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field47.setValue("1")

ComposedShader39.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFFLOAT)
field48.setName("c")
field48.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field48.setValue("20")

ComposedShader39.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFFLOAT)
field49.setName("d")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field49.setValue("20")

ComposedShader39.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFFLOAT)
field50.setName("tdelta")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field50.setValue("0")

ComposedShader39.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFFLOAT)
field51.setName("pdelta")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field51.setValue("0")

ComposedShader39.addField(field51)
ShaderPart52 = ShaderPartObject()
ShaderPart52.setType("VERTEX")
ShaderPart52.setUrl(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])

ComposedShader39.addParts(ShaderPart52)
ShaderPart53 = ShaderPartObject()
ShaderPart53.setType("FRAGMENT")
ShaderPart53.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])

ComposedShader39.addParts(ShaderPart53)
Appearance16.addShaders(ComposedShader39)
Shape15.setAppearance(Appearance16)
Sphere54 = SphereObject()

Shape15.setGeometry(Sphere54)
Transform14.addChild(Shape15)
ProtoBody13.addChild(Transform14)
Script55 = ScriptObject()
Script55.setDEF("Animate")

field56 = fieldObject()
field56.setType(fieldObject.TYPE_SFVEC3F)
field56.setName("translation")
field56.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field56.setValue("0 0 0")

Script55.addField(field56)
field57 = fieldObject()
field57.setType(fieldObject.TYPE_SFVEC3F)
field57.setName("velocity")
field57.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field57.setValue("0 0 0")

Script55.addField(field57)
field58 = fieldObject()
field58.setType(fieldObject.TYPE_SFFLOAT)
field58.setName("set_fraction")
field58.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script55.addField(field58)
field59 = fieldObject()
field59.setType(fieldObject.TYPE_SFFLOAT)
field59.setName("a")
field59.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field59.setValue("0.5")

Script55.addField(field59)
field60 = fieldObject()
field60.setType(fieldObject.TYPE_SFFLOAT)
field60.setName("b")
field60.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field60.setValue("0.5")

Script55.addField(field60)
field61 = fieldObject()
field61.setType(fieldObject.TYPE_SFFLOAT)
field61.setName("c")
field61.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field61.setValue("3")

Script55.addField(field61)
field62 = fieldObject()
field62.setType(fieldObject.TYPE_SFFLOAT)
field62.setName("d")
field62.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field62.setValue("3")

Script55.addField(field62)
field63 = fieldObject()
field63.setType(fieldObject.TYPE_SFFLOAT)
field63.setName("tdelta")
field63.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field63.setValue("0.5")

Script55.addField(field63)
field64 = fieldObject()
field64.setType(fieldObject.TYPE_SFFLOAT)
field64.setName("pdelta")
field64.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field64.setValue("0.5")

Script55.addField(field64)

Script55.setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}\n"+
"\n"+
"\n"+
"")
ProtoBody13.addChild(Script55)
TimeSensor65 = TimeSensorObject()
TimeSensor65.setDEF("TourTime")
TimeSensor65.setCycleInterval(5)
TimeSensor65.setLoop(True)

ProtoBody13.addChild(TimeSensor65)
ROUTE66 = ROUTEObject()
ROUTE66.setFromNode("TourTime")
ROUTE66.setFromField("fraction_changed")
ROUTE66.setToNode("Animate")
ROUTE66.setToField("set_fraction")

ProtoBody13.addChild(ROUTE66)
ROUTE67 = ROUTEObject()
ROUTE67.setFromNode("Animate")
ROUTE67.setFromField("translation_changed")
ROUTE67.setToNode("animate_transform")
ROUTE67.setToField("set_translation")

ProtoBody13.addChild(ROUTE67)
ROUTE68 = ROUTEObject()
ROUTE68.setFromNode("Animate")
ROUTE68.setFromField("a")
ROUTE68.setToNode("x_ite")
ROUTE68.setToField("a")

ProtoBody13.addChild(ROUTE68)
ROUTE69 = ROUTEObject()
ROUTE69.setFromNode("Animate")
ROUTE69.setFromField("b")
ROUTE69.setToNode("x_ite")
ROUTE69.setToField("b")

ProtoBody13.addChild(ROUTE69)
ROUTE70 = ROUTEObject()
ROUTE70.setFromNode("Animate")
ROUTE70.setFromField("c")
ROUTE70.setToNode("x_ite")
ROUTE70.setToField("c")

ProtoBody13.addChild(ROUTE70)
ROUTE71 = ROUTEObject()
ROUTE71.setFromNode("Animate")
ROUTE71.setFromField("d")
ROUTE71.setToNode("x_ite")
ROUTE71.setToField("d")

ProtoBody13.addChild(ROUTE71)
ROUTE72 = ROUTEObject()
ROUTE72.setFromNode("Animate")
ROUTE72.setFromField("pdelta")
ROUTE72.setToNode("x_ite")
ROUTE72.setToField("pdelta")

ProtoBody13.addChild(ROUTE72)
ROUTE73 = ROUTEObject()
ROUTE73.setFromNode("Animate")
ROUTE73.setFromField("tdelta")
ROUTE73.setToNode("x_ite")
ROUTE73.setToField("tdelta")

ProtoBody13.addChild(ROUTE73)
ROUTE74 = ROUTEObject()
ROUTE74.setFromNode("Animate")
ROUTE74.setFromField("a")
ROUTE74.setToNode("x3dom")
ROUTE74.setToField("a")

ProtoBody13.addChild(ROUTE74)
ROUTE75 = ROUTEObject()
ROUTE75.setFromNode("Animate")
ROUTE75.setFromField("b")
ROUTE75.setToNode("x3dom")
ROUTE75.setToField("b")

ProtoBody13.addChild(ROUTE75)
ROUTE76 = ROUTEObject()
ROUTE76.setFromNode("Animate")
ROUTE76.setFromField("c")
ROUTE76.setToNode("x3dom")
ROUTE76.setToField("c")

ProtoBody13.addChild(ROUTE76)
ROUTE77 = ROUTEObject()
ROUTE77.setFromNode("Animate")
ROUTE77.setFromField("d")
ROUTE77.setToNode("x3dom")
ROUTE77.setToField("d")

ProtoBody13.addChild(ROUTE77)
ROUTE78 = ROUTEObject()
ROUTE78.setFromNode("Animate")
ROUTE78.setFromField("pdelta")
ROUTE78.setToNode("x3dom")
ROUTE78.setToField("pdelta")

ProtoBody13.addChild(ROUTE78)
ROUTE79 = ROUTEObject()
ROUTE79.setFromNode("Animate")
ROUTE79.setFromField("tdelta")
ROUTE79.setToNode("x3dom")
ROUTE79.setToField("tdelta")

ProtoBody13.addChild(ROUTE79)
ProtoDeclare12.setProtoBody(ProtoBody13)
Scene9.addChild(ProtoDeclare12)
ProtoInstance80 = ProtoInstanceObject()
ProtoInstance80.setName("flower")

Scene9.addChild(ProtoInstance80)
ProtoInstance81 = ProtoInstanceObject()
ProtoInstance81.setName("flower")

Scene9.addChild(ProtoInstance81)
ProtoInstance82 = ProtoInstanceObject()
ProtoInstance82.setName("flower")

Scene9.addChild(ProtoInstance82)
X3D0.setScene(Scene9)

X3D0.toFileX3D("../data/flowers.new.x3d")
