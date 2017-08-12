# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("flowers.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("5 or more prismatic flowers")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/flowers.x3d")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()

Scene7.addChild(NavigationInfo8)
Background9 = BackgroundObject()
Background9.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background9.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background9.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background9.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background9.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background9.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene7.addChild(Background9)
ProtoDeclare10 = ProtoDeclareObject()
ProtoDeclare10.setName("flower")

ProtoBody11 = ProtoBodyObject()

Transform12 = TransformObject()
Transform12.setDEF("transform")

Shape13 = ShapeObject()

Appearance14 = AppearanceObject()

Material15 = MaterialObject()
Material15.setDiffuseColor([0.7,0.7,0.7])
Material15.setSpecularColor([0.5,0.5,0.5])

Appearance14.setMaterial(Material15)
ComposedCubeMapTexture16 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture16.setDEF("texture")

ImageTexture17 = ImageTextureObject()
ImageTexture17.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture16.setBack(ImageTexture17)
ImageTexture18 = ImageTextureObject()
ImageTexture18.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture16.setBottom(ImageTexture18)
ImageTexture19 = ImageTextureObject()
ImageTexture19.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture16.setFront(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture16.setLeft(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture16.setRight(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture16.setTop(ImageTexture22)
Appearance14.setTexture(ComposedCubeMapTexture16)
ComposedShader23 = ComposedShaderObject()
ComposedShader23.setLanguage("GLSL")

field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFINT32)
field24.setName("xxxcube")
field24.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field24.setValue("0")

ComposedShader23.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFNODE)
field25.setName("cube")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture26 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture26.setUSE("texture")

field25.addChild(ComposedCubeMapTexture26)
ComposedShader23.addField(field25)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFVEC3F)
field27.setName("chromaticDispertion")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field27.setValue("0.98 1 1.033")

ComposedShader23.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFFLOAT)
field28.setName("bias")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("0.5")

ComposedShader23.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFFLOAT)
field29.setName("scale")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("0.5")

ComposedShader23.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFFLOAT)
field30.setName("power")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("2")

ComposedShader23.addField(field30)
ShaderPart31 = ShaderPartObject()
ShaderPart31.setType("VERTEX")
ShaderPart31.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])

ComposedShader23.addParts(ShaderPart31)
ShaderPart32 = ShaderPartObject()
ShaderPart32.setType("FRAGMENT")
ShaderPart32.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs"])

ComposedShader23.addParts(ShaderPart32)
Appearance14.addShaders(ComposedShader23)
ComposedShader33 = ComposedShaderObject()
ComposedShader33.setDEF("shader")
ComposedShader33.setLanguage("GLSL")

field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFINT32)
field34.setName("xxxcube")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setValue("0")

ComposedShader33.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFNODE)
field35.setName("cube")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture36 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture36.setUSE("texture")

field35.addChild(ComposedCubeMapTexture36)
ComposedShader33.addField(field35)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFVEC3F)
field37.setName("chromaticDispertion")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field37.setValue("0.98 1 1.033")

ComposedShader33.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFFLOAT)
field38.setName("bias")
field38.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field38.setValue("10")

ComposedShader33.addField(field38)
field39 = fieldObject()
field39.setType(fieldObject.TYPE_SFFLOAT)
field39.setName("scale")
field39.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field39.setValue("10")

ComposedShader33.addField(field39)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFFLOAT)
field40.setName("power")
field40.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field40.setValue("2")

ComposedShader33.addField(field40)
ShaderPart41 = ShaderPartObject()
ShaderPart41.setType("VERTEX")
ShaderPart41.setUrl(["../shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])

ComposedShader33.addParts(ShaderPart41)
ShaderPart42 = ShaderPartObject()
ShaderPart42.setType("FRAGMENT")
ShaderPart42.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs"])

ComposedShader33.addParts(ShaderPart42)
Appearance14.addShaders(ComposedShader33)
Shape13.setAppearance(Appearance14)

Shape13.addComments(CommentsBlock("<Sphere></Sphere>"))
IndexedFaceSet43 = IndexedFaceSetObject()
IndexedFaceSet43.setConvex(False)
IndexedFaceSet43.setDEF("Orbit")

Coordinate44 = CoordinateObject()
Coordinate44.setDEF("OrbitCoordinates")

IndexedFaceSet43.setCoord(Coordinate44)
Shape13.setGeometry(IndexedFaceSet43)
Transform12.addChild(Shape13)
ProtoBody11.addChild(Transform12)
Script45 = ScriptObject()
Script45.setDEF("Bounce")

field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFVEC3F)
field46.setName("translation")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field46.setValue("0 0 0")

Script45.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFVEC3F)
field47.setName("velocity")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field47.setValue("0 0 0")

Script45.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFTIME)
field48.setName("set_fraction")
field48.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script45.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_MFVEC3F)
field49.setName("coordinates")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script45.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_MFINT32)
field50.setName("coordIndexes")
field50.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script45.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFFLOAT)
field51.setName("a")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field51.setValue("0.5")

Script45.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFFLOAT)
field52.setName("b")
field52.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field52.setValue("0.5")

Script45.addField(field52)
field53 = fieldObject()
field53.setType(fieldObject.TYPE_SFFLOAT)
field53.setName("c")
field53.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field53.setValue("3")

Script45.addField(field53)
field54 = fieldObject()
field54.setType(fieldObject.TYPE_SFFLOAT)
field54.setName("d")
field54.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field54.setValue("3")

Script45.addField(field54)
field55 = fieldObject()
field55.setType(fieldObject.TYPE_SFFLOAT)
field55.setName("tdelta")
field55.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field55.setValue("0.5")

Script45.addField(field55)
field56 = fieldObject()
field56.setType(fieldObject.TYPE_SFFLOAT)
field56.setName("pdelta")
field56.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field56.setValue("0.5")

Script45.addField(field56)

Script45.setSourceCode("ecmascript:\n"+
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
"			     newBubble();\n"+
"			     resolution = 100;\n"+
"			     updateCoordinates(resolution);\n"+
"			     var cis = [];\n"+
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
ProtoBody11.addChild(Script45)
TimeSensor57 = TimeSensorObject()
TimeSensor57.setDEF("TourTime")
TimeSensor57.setCycleInterval(0.15)
TimeSensor57.setLoop(True)

ProtoBody11.addChild(TimeSensor57)
ROUTE58 = ROUTEObject()
ROUTE58.setFromNode("TourTime")
ROUTE58.setFromField("cycleTime")
ROUTE58.setToNode("Bounce")
ROUTE58.setToField("set_fraction")

ProtoBody11.addChild(ROUTE58)
ROUTE59 = ROUTEObject()
ROUTE59.setFromNode("Bounce")
ROUTE59.setFromField("translation")
ROUTE59.setToNode("transform")
ROUTE59.setToField("set_translation")

ProtoBody11.addChild(ROUTE59)

ProtoBody11.addComments(CommentsBlock("<ROUTE fromField=\"coordIndexes\" fromNode=\"Bounce\" toField=\"set_coordIndex\" toNode=\"Orbit\"/> <ROUTE fromField=\"coordinates\" fromNode=\"Bounce\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>"))
ProtoDeclare10.setProtoBody(ProtoBody11)
Scene7.addChild(ProtoDeclare10)
Transform60 = TransformObject()

ProtoInstance61 = ProtoInstanceObject()
ProtoInstance61.setName("flower")

Transform60.addChild(ProtoInstance61)

Transform60.addComments(CommentsBlock("<ProtoInstance name=\"flower\"/> <ProtoInstance name=\"flower\"/>"))
Scene7.addChild(Transform60)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/flowers.new.x3d")
