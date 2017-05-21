from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("flowers.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("description").setContent("5 or more prismatic flowers")
head1.addMeta(meta4)
meta5 = metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta5)
meta6 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers.x3d")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
NavigationInfo8 = NavigationInfoObject()
Scene7.addChild(NavigationInfo8)
Background9 = BackgroundObject().setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]).setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]).setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]).setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]).setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]).setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])
Scene7.addChild(Background9)
ProtoDeclare10 = ProtoDeclareObject().setName("flower")
ProtoBody11 = ProtoBodyObject()
Transform12 = TransformObject().setDEF("transform")
Shape13 = ShapeObject()
Appearance14 = AppearanceObject()
Material15 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance14.setMaterial(Material15)
ComposedCubeMapTexture16 = ComposedCubeMapTextureObject().setDEF("texture")
ImageTexture17 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
ComposedCubeMapTexture16.setBack(ImageTexture17)
ImageTexture18 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
ComposedCubeMapTexture16.setBottom(ImageTexture18)
ImageTexture19 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
ComposedCubeMapTexture16.setFront(ImageTexture19)
ImageTexture20 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
ComposedCubeMapTexture16.setLeft(ImageTexture20)
ImageTexture21 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
ComposedCubeMapTexture16.setRight(ImageTexture21)
ImageTexture22 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])
ComposedCubeMapTexture16.setTop(ImageTexture22)
Appearance14.setTexture(ComposedCubeMapTexture16)
ComposedShader23 = ComposedShaderObject().setDEF("shader").setLanguage("GLSL")
field24 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("xxxcube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader23.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
ComposedCubeMapTexture26 = ComposedCubeMapTextureObject().setUSE("texture")
field25.addChild(ComposedCubeMapTexture26)
ComposedShader23.addField(field25)
field27 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader23.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
ComposedShader23.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
ComposedShader23.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader23.addField(field30)
ShaderPart31 = ShaderPartObject().setType("VERTEX").setUrl(["../shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])
ComposedShader23.addParts(ShaderPart31)
ShaderPart32 = ShaderPartObject().setType("FRAGMENT").setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs"])
ComposedShader23.addParts(ShaderPart32)
Appearance14.addShaders(ComposedShader23)
Shape13.setAppearance(Appearance14)
IndexedFaceSet33 = IndexedFaceSetObject().setDEF("Orbit")
Coordinate34 = CoordinateObject().setDEF("OrbitCoordinates")
IndexedFaceSet33.setCoord(Coordinate34)
Shape13.setGeometry(IndexedFaceSet33)
Transform12.addChild(Shape13)
ProtoBody11.addChild(Transform12)
Script35 = ScriptObject().setDEF("Bounce")
field36 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script35.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script35.addField(field37)
field38 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script35.addField(field38)
field39 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script35.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script35.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script35.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script35.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
Script35.addField(field43)
field44 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
Script35.addField(field44)
field45 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script35.addField(field45)
field46 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script35.addField(field46)

Script35.setSourceCode("\n"+
"ecmascript:\n"+
"			function set_translation(value) {\n"+
"				translation = value;\n"+
"			}\n"+
"			function translation_changed() {\n"+
"				return translation;\n"+
"			}\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation[0] + velocity[0],\n"+
"				translation[1] + velocity[1],\n"+
"				translation[2] + velocity[2]);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation[j]) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity[0] += Math.random() * 0.2 - 0.1;\n"+
"					velocity[1] += Math.random() * 0.2 - 0.1;\n"+
"					velocity[2] += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     resolution = 100;\n"+
"			     updateCoordinates(resolution);\n"+
"			     if (typeof coordIndexes == 'undefined' || coordIndexes == null) {\n"+
"				coordIndexes = new MFInt32();\n"+
"			     }\n"+
"			     ci = 0;\n"+
"			     for ( i = 0; i < resolution-1; i++) {\n"+
"				for ( j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[ci] = i*resolution+j;\n"+
"				     coordIndexes[ci+1] = i*resolution+j+1;\n"+
"				     coordIndexes[ci+2] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[ci+3] = (i+1)*resolution+j;\n"+
"				     coordIndexes[ci+4] = -1;\n"+
"				     ci += 5;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"\n"+
"			function updateCoordinates(resolution) {\n"+
"			     theta = 0.0;\n"+
"			     phi = 0.0;\n"+
"			     delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     if (typeof coordinates == 'undefined' || coordinates == null) {\n"+
"				coordinates = new MFVec3f();\n"+
"			     }\n"+
"			     for ( i = 0; i < resolution; i++) {\n"+
"				for ( j = 0; j < resolution; j++) {\n"+
"					rho = a + b * Math.cos(c * theta) * Math.cos(d * phi);\n"+
"					coordinates[i*resolution+j] = new SFVec3f();\n"+
"					coordinates[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);\n"+
"					coordinates[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);\n"+
"					coordinates[i*resolution+j][2] = rho * Math.sin(phi);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
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
ProtoBody11.addChild(Script35)
TimeSensor47 = TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(True)
ProtoBody11.addChild(TimeSensor47)
ROUTE48 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction")
ProtoBody11.addChild(ROUTE48)
ROUTE49 = ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
ProtoBody11.addChild(ROUTE49)
ROUTE50 = ROUTEObject().setFromField("coordIndexes").setFromNode("Bounce").setToField("set_coordIndex").setToNode("Orbit")
ProtoBody11.addChild(ROUTE50)
ROUTE51 = ROUTEObject().setFromField("coordinates").setFromNode("Bounce").setToField("set_point").setToNode("OrbitCoordinates")
ProtoBody11.addChild(ROUTE51)
ProtoDeclare10.setProtoBody(ProtoBody11)
Scene7.addChild(ProtoDeclare10)
Transform52 = TransformObject()
ProtoInstance53 = ProtoInstanceObject().setName("flower")
Transform52.addChild(ProtoInstance53)
ProtoInstance54 = ProtoInstanceObject().setName("flower")
Transform52.addChild(ProtoInstance54)
ProtoInstance55 = ProtoInstanceObject().setName("flower")
Transform52.addChild(ProtoInstance55)
Scene7.addChild(Transform52)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/flowers.new.x3d")
