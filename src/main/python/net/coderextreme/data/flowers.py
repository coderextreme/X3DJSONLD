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
Transform14.setDEF("transform")

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
ComposedShader25.setLanguage("GLSL")

field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFINT32)
field26.setName("xxxcube")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setValue("0")

ComposedShader25.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFNODE)
field27.setName("cube")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture28 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture28.setUSE("texture")

field27.addChild(ComposedCubeMapTexture28)
ComposedShader25.addField(field27)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFVEC3F)
field29.setName("chromaticDispertion")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("0.98 1 1.033")

ComposedShader25.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFFLOAT)
field30.setName("bias")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("0.5")

ComposedShader25.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("scale")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("0.5")

ComposedShader25.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("power")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("2")

ComposedShader25.addField(field32)
ShaderPart33 = ShaderPartObject()
ShaderPart33.setType("VERTEX")
ShaderPart33.setUrl(["../shaders/common.vs","https://coderextreme.net/X3DJSONLD/shaders/common.vs"])

ComposedShader25.addParts(ShaderPart33)
ShaderPart34 = ShaderPartObject()
ShaderPart34.setType("FRAGMENT")
ShaderPart34.setUrl(["../shaders/gl_flowers_chromatic.fs","https://coderextreme.net/X3DJSONLD/shaders/gl_flowers_chromatic.fs"])

ComposedShader25.addParts(ShaderPart34)
Appearance16.addShaders(ComposedShader25)
ComposedShader35 = ComposedShaderObject()
ComposedShader35.setLanguage("GLSL")

field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFINT32)
field36.setName("xxxcube")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field36.setValue("0")

ComposedShader35.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFNODE)
field37.setName("cube")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture38 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture38.setUSE("texture")

field37.addChild(ComposedCubeMapTexture38)
ComposedShader35.addField(field37)
field39 = fieldObject()
field39.setType(fieldObject.TYPE_SFVEC3F)
field39.setName("chromaticDispertion")
field39.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field39.setValue("0.98 1 1.033")

ComposedShader35.addField(field39)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFFLOAT)
field40.setName("bias")
field40.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field40.setValue("0.5")

ComposedShader35.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFFLOAT)
field41.setName("scale")
field41.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field41.setValue("0.5")

ComposedShader35.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFFLOAT)
field42.setName("power")
field42.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field42.setValue("2")

ComposedShader35.addField(field42)
ShaderPart43 = ShaderPartObject()
ShaderPart43.setType("VERTEX")
ShaderPart43.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])

ComposedShader35.addParts(ShaderPart43)
ShaderPart44 = ShaderPartObject()
ShaderPart44.setType("FRAGMENT")
ShaderPart44.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs"])

ComposedShader35.addParts(ShaderPart44)
Appearance16.addShaders(ComposedShader35)
ComposedShader45 = ComposedShaderObject()
ComposedShader45.setDEF("shader")
ComposedShader45.setLanguage("GLSL")

field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFINT32)
field46.setName("xxxcube")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field46.setValue("0")

ComposedShader45.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFNODE)
field47.setName("cube")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture48 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture48.setUSE("texture")

field47.addChild(ComposedCubeMapTexture48)
ComposedShader45.addField(field47)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFVEC3F)
field49.setName("chromaticDispertion")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field49.setValue("0.98 1 1.033")

ComposedShader45.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFFLOAT)
field50.setName("bias")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field50.setValue("10")

ComposedShader45.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFFLOAT)
field51.setName("scale")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field51.setValue("10")

ComposedShader45.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFFLOAT)
field52.setName("power")
field52.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field52.setValue("2")

ComposedShader45.addField(field52)
ShaderPart53 = ShaderPartObject()
ShaderPart53.setType("VERTEX")
ShaderPart53.setUrl(["../shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])

ComposedShader45.addParts(ShaderPart53)
ShaderPart54 = ShaderPartObject()
ShaderPart54.setType("FRAGMENT")
ShaderPart54.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs"])

ComposedShader45.addParts(ShaderPart54)
Appearance16.addShaders(ComposedShader45)
Shape15.setAppearance(Appearance16)

Shape15.addComments(CommentsBlock("""<Sphere></Sphere>"""))
IndexedFaceSet55 = IndexedFaceSetObject()
IndexedFaceSet55.setConvex(False)
IndexedFaceSet55.setDEF("Orbit")

Coordinate56 = CoordinateObject()
Coordinate56.setDEF("OrbitCoordinates")

IndexedFaceSet55.setCoord(Coordinate56)
Shape15.setGeometry(IndexedFaceSet55)
Transform14.addChild(Shape15)
ProtoBody13.addChild(Transform14)
Script57 = ScriptObject()
Script57.setDEF("Bounce")

field58 = fieldObject()
field58.setType(fieldObject.TYPE_SFVEC3F)
field58.setName("translation")
field58.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field58.setValue("0 0 0")

Script57.addField(field58)
field59 = fieldObject()
field59.setType(fieldObject.TYPE_SFVEC3F)
field59.setName("velocity")
field59.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field59.setValue("0 0 0")

Script57.addField(field59)
field60 = fieldObject()
field60.setType(fieldObject.TYPE_SFTIME)
field60.setName("set_fraction")
field60.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script57.addField(field60)
field61 = fieldObject()
field61.setType(fieldObject.TYPE_MFVEC3F)
field61.setName("coordinates")
field61.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script57.addField(field61)
field62 = fieldObject()
field62.setType(fieldObject.TYPE_MFINT32)
field62.setName("coordIndexes")
field62.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script57.addField(field62)
field63 = fieldObject()
field63.setType(fieldObject.TYPE_SFFLOAT)
field63.setName("a")
field63.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field63.setValue("0.5")

Script57.addField(field63)
field64 = fieldObject()
field64.setType(fieldObject.TYPE_SFFLOAT)
field64.setName("b")
field64.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field64.setValue("0.5")

Script57.addField(field64)
field65 = fieldObject()
field65.setType(fieldObject.TYPE_SFFLOAT)
field65.setName("c")
field65.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field65.setValue("3")

Script57.addField(field65)
field66 = fieldObject()
field66.setType(fieldObject.TYPE_SFFLOAT)
field66.setName("d")
field66.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field66.setValue("3")

Script57.addField(field66)
field67 = fieldObject()
field67.setType(fieldObject.TYPE_SFFLOAT)
field67.setName("tdelta")
field67.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field67.setValue("0.5")

Script57.addField(field67)
field68 = fieldObject()
field68.setType(fieldObject.TYPE_SFFLOAT)
field68.setName("pdelta")
field68.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field68.setValue("0.5")

Script57.addField(field68)

Script57.setSourceCode("ecmascript:\n"+
"			function newBubble() {\n"+
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
"			    if (Math.abs(translation.x) > 10) {\n"+
"					newBubble();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"					newBubble();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"					newBubble();\n"+
"			    } else {\n"+
"					velocity = new SFVec3f(\n"+
"						velocity.x + Math.random() * 0.2 - 0.1,\n"+
"						velocity.y + Math.random() * 0.2 - 0.1,\n"+
"						velocity.z + Math.random() * 0.2 - 0.1\n"+
"					);\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     var cis = [];\n"+
"			     newBubble();\n"+
"			     resolution = 100;\n"+
"			     updateCoordinates(resolution);\n"+
"			     for ( i = 0; i < resolution-1; i++) {\n"+
"				for ( j = 0; j < resolution-1; j++) {\n"+
"				     cis.push(i*resolution+j);\n"+
"				     cis.push(i*resolution+j+1);\n"+
"				     cis.push((i+1)*resolution+j+1);\n"+
"				     cis.push((i+1)*resolution+j);\n"+
"				     cis.push(-1);\n"+
"				}\n"+
"			    }\n"+
"			     coordIndexes = new MFInt32(cis);\n"+
"			}\n"+
"\n"+
"			function updateCoordinates(resolution) {\n"+
"			     theta = 0.0;\n"+
"			     phi = 0.0;\n"+
"			     delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var crds = [];\n"+
"			     for ( i = 0; i < resolution; i++) {\n"+
"				for ( j = 0; j < resolution; j++) {\n"+
"					rho = a + b * Math.cos(c * theta) * Math.cos(d * phi);\n"+
"					crds.push(new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					));\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"				coordinates = new MFVec3f(crds);\n"+
"			     }\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				choice = Math.floor(Math.random() * 4);\n"+
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
"				resolution = 100;\n"+
"				updateCoordinates(resolution);\n"+
"			}\n"+
"")
ProtoBody13.addChild(Script57)
TimeSensor69 = TimeSensorObject()
TimeSensor69.setDEF("TourTime")
TimeSensor69.setCycleInterval(0.15)
TimeSensor69.setLoop(True)

ProtoBody13.addChild(TimeSensor69)
TimeSensor70 = TimeSensorObject()
TimeSensor70.setDEF("SongTime")
TimeSensor70.setLoop(True)

ProtoBody13.addChild(TimeSensor70)
Sound71 = SoundObject()
Sound71.setMaxBack(100)
Sound71.setMaxFront(100)
Sound71.setMinBack(20)
Sound71.setMinFront(20)

AudioClip72 = AudioClipObject()
AudioClip72.setDEF("AudioClip")
AudioClip72.setDescription("Chandubabamusic #1")
AudioClip72.setUrl(["../resources/chandubabamusic1.wav"])

Sound71.setSource(AudioClip72)
ProtoBody13.addChild(Sound71)
ROUTE73 = ROUTEObject()
ROUTE73.setFromField("cycleTime")
ROUTE73.setFromNode("SongTime")
ROUTE73.setToField("startTime")
ROUTE73.setToNode("AudioClip")

ProtoBody13.addChild(ROUTE73)
ROUTE74 = ROUTEObject()
ROUTE74.setFromNode("TourTime")
ROUTE74.setFromField("cycleTime")
ROUTE74.setToNode("Bounce")
ROUTE74.setToField("set_fraction")

ProtoBody13.addChild(ROUTE74)
ROUTE75 = ROUTEObject()
ROUTE75.setFromNode("Bounce")
ROUTE75.setFromField("translation")
ROUTE75.setToNode("transform")
ROUTE75.setToField("set_translation")

ProtoBody13.addChild(ROUTE75)

ProtoBody13.addComments(CommentsBlock("""<ROUTE fromField=\"coordIndexes\" fromNode=\"Bounce\" toField=\"set_coordIndex\" toNode=\"Orbit\"/> <ROUTE fromField=\"coordinates\" fromNode=\"Bounce\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>"""))
ProtoDeclare12.setProtoBody(ProtoBody13)
Scene9.addChild(ProtoDeclare12)
Transform76 = TransformObject()

ProtoInstance77 = ProtoInstanceObject()
ProtoInstance77.setName("flower")

Transform76.addChild(ProtoInstance77)

Transform76.addComments(CommentsBlock("""<ProtoInstance name=\"flower\"/> <ProtoInstance name=\"flower\"/>"""))
Scene9.addChild(Transform76)
X3D0.setScene(Scene9)

X3D0.toFileX3D("../data/flowers.new.x3d")
