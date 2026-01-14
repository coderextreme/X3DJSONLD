import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()

head1.addComments(x3d.CommentsBlock("""<component name='Shape' level='4'></component>"""))
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

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
component6.setName("Grouping")
component6.setLevel(3)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Core")
component7.setLevel(1)

head1.addComponent(component7)
meta8 = x3d.meta()
meta8.setName("title")
meta8.setContent("sliders.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("created")
meta9.setContent("8 August 2025")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("description")
meta10.setContent("*Bumpy flower with prototype sliders*")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("Doug Sanden, Christoph Valentin, John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("license")
meta13.setContent("license.html")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("Vim, VI Improved")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
LayerSet16 = x3d.LayerSet()
LayerSet16.setActiveLayer(1)
LayerSet16.setOrder([1,2,3])
Layer17 = x3d.Layer()
Layer17.setPickable(True)
Layer17.setObjectType(["ALL"])
NavigationInfo18 = x3d.NavigationInfo()
NavigationInfo18.setType(["EXAMINE"])
NavigationInfo18.setAvatarSize(x3d.doubleToFloat([0.25,1.75,0.75]))

Layer17.addChild(NavigationInfo18)
DirectionalLight19 = x3d.DirectionalLight()
DirectionalLight19.setAmbientIntensity(0.2)
DirectionalLight19.setDirection(x3d.doubleToFloat([0,-1,0]))

Layer17.addChild(DirectionalLight19)
DirectionalLight20 = x3d.DirectionalLight()
DirectionalLight20.setAmbientIntensity(0.2)
DirectionalLight20.setDirection(x3d.doubleToFloat([-1,-0.1,-1]))

Layer17.addChild(DirectionalLight20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.setDescription("My Overview")
Viewpoint21.setFieldOfView(1.570796)
Viewpoint21.setPosition(x3d.doubleToFloat([0,1.75,60]))

Layer17.addChild(Viewpoint21)
Group22 = x3d.Group()

Group22.addComments(x3d.CommentsBlock("""Arrow X"""))
Transform23 = x3d.Transform()
Transform23.setTranslation(x3d.doubleToFloat([25,0,0]))
Transform23.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
Shape24 = x3d.Shape()
Cylinder25 = x3d.Cylinder()
Cylinder25.setDEF("Shaft")
Cylinder25.setRadius(0.35)
Cylinder25.setHeight(50)

Shape24.setGeometry(Cylinder25)
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.setDEF("RED")
Material27.setDiffuseColor(x3d.doubleToFloat([1,0,0]))
Material27.setEmissiveColor(x3d.doubleToFloat([1,0,0]))

Appearance26.setMaterial(Material27)

Shape24.setAppearance(Appearance26)

Transform23.addChild(Shape24)

Group22.addChild(Transform23)
Transform28 = x3d.Transform()
Transform28.setTranslation(x3d.doubleToFloat([50,0,0]))
Transform28.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
Shape29 = x3d.Shape()
Cone30 = x3d.Cone()
Cone30.setDEF("Tip")
Cone30.setBottomRadius(0.8)
Cone30.setHeight(3)

Shape29.setGeometry(Cone30)
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
Material32.setUSE("RED")

Appearance31.setMaterial(Material32)

Shape29.setAppearance(Appearance31)

Transform28.addChild(Shape29)

Group22.addChild(Transform28)

Group22.addComments(x3d.CommentsBlock("""Arrow Y"""))
Transform33 = x3d.Transform()
Transform33.setTranslation(x3d.doubleToFloat([0,25,0]))
Shape34 = x3d.Shape()
Cylinder35 = x3d.Cylinder()
Cylinder35.setUSE("Shaft")

Shape34.setGeometry(Cylinder35)
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.setDEF("GREEN")
Material37.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material37.setEmissiveColor(x3d.doubleToFloat([0,1,0]))

Appearance36.setMaterial(Material37)

Shape34.setAppearance(Appearance36)

Transform33.addChild(Shape34)

Group22.addChild(Transform33)
Transform38 = x3d.Transform()
Transform38.setTranslation(x3d.doubleToFloat([0,50,0]))
Shape39 = x3d.Shape()
Cone40 = x3d.Cone()
Cone40.setUSE("Tip")

Shape39.setGeometry(Cone40)
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.setUSE("GREEN")

Appearance41.setMaterial(Material42)

Shape39.setAppearance(Appearance41)

Transform38.addChild(Shape39)

Group22.addChild(Transform38)

Group22.addComments(x3d.CommentsBlock("""Arrow Z"""))
Transform43 = x3d.Transform()
Transform43.setTranslation(x3d.doubleToFloat([0,0,25]))
Transform43.setRotation(x3d.doubleToFloat([1,0,0,1.57]))
Shape44 = x3d.Shape()
Cylinder45 = x3d.Cylinder()
Cylinder45.setUSE("Shaft")

Shape44.setGeometry(Cylinder45)
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.setDEF("BLUE")
Material47.setDiffuseColor(x3d.doubleToFloat([0,0,1]))
Material47.setEmissiveColor(x3d.doubleToFloat([0,0,1]))

Appearance46.setMaterial(Material47)

Shape44.setAppearance(Appearance46)

Transform43.addChild(Shape44)

Group22.addChild(Transform43)
Transform48 = x3d.Transform()
Transform48.setTranslation(x3d.doubleToFloat([0,0,50]))
Transform48.setRotation(x3d.doubleToFloat([1,0,0,1.57]))
Shape49 = x3d.Shape()
Cone50 = x3d.Cone()
Cone50.setUSE("Tip")

Shape49.setGeometry(Cone50)
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.setUSE("BLUE")

Appearance51.setMaterial(Material52)

Shape49.setAppearance(Appearance51)

Transform48.addChild(Shape49)

Group22.addChild(Transform48)

Layer17.addChild(Group22)

Layer17.addComments(x3d.CommentsBlock("""the model that is being reviewed by the users of this scene"""))
Transform53 = x3d.Transform()
Transform53.setDEF("FlowerTransform")
Transform54 = x3d.Transform()
Shape55 = x3d.Shape()
IndexedFaceSet56 = x3d.IndexedFaceSet()
IndexedFaceSet56.setConvex(False)
IndexedFaceSet56.setDEF("Orbit")
Coordinate57 = x3d.Coordinate()
Coordinate57.setDEF("OrbitCoordinates")

IndexedFaceSet56.setCoord(Coordinate57)

Shape55.setGeometry(IndexedFaceSet56)
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material59.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance58.setMaterial(Material59)

Shape55.setAppearance(Appearance58)

Transform54.addChild(Shape55)

Transform53.addChild(Transform54)

Layer17.addChild(Transform53)
Script60 = x3d.Script()
Script60.setDEF("OrbitScript")
field61 = x3d.field()
field61.setName("coordinates")
field61.setType("MFVec3f")
field61.setAccessType("inputOutput")

Script60.addField(field61)
field62 = x3d.field()
field62.setName("coordIndexes")
field62.setType("MFInt32")
field62.setAccessType("inputOutput")

Script60.addField(field62)
field63 = x3d.field()
field63.setName("a")
field63.setType("SFFloat")
field63.setAccessType("inputOutput")
field63.setValue("5")

Script60.addField(field63)
field64 = x3d.field()
field64.setName("b")
field64.setType("SFFloat")
field64.setAccessType("inputOutput")
field64.setValue("5")

Script60.addField(field64)
field65 = x3d.field()
field65.setName("c")
field65.setType("SFFloat")
field65.setAccessType("inputOutput")
field65.setValue("5")

Script60.addField(field65)
field66 = x3d.field()
field66.setName("d")
field66.setType("SFFloat")
field66.setAccessType("inputOutput")
field66.setValue("5")

Script60.addField(field66)
field67 = x3d.field()
field67.setName("pdelta")
field67.setType("SFFloat")
field67.setAccessType("inputOutput")
field67.setValue("0")

Script60.addField(field67)
field68 = x3d.field()
field68.setName("tdelta")
field68.setType("SFFloat")
field68.setAccessType("inputOutput")
field68.setValue("0")

Script60.addField(field68)
field69 = x3d.field()
field69.setName("resolution")
field69.setType("SFInt32")
field69.setAccessType("inputOutput")
field69.setValue("50")

Script60.addField(field69)

Script60.setSourceCode('''ecmascript:
			function initialize() {
			     generateCoordinates();
			     var arrIndex = 0;
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     coordIndexes[arrIndex++] = i*resolution+j;
				     coordIndexes[arrIndex++] = i*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j;
				     coordIndexes[arrIndex++] = -1;
				}
			    }
			}
			function set_a(value) {
				a = value;
				generateCoordinates();
			}

			function set_b(value) {
				b = value;
				generateCoordinates();
			}

			function set_c(value) {
				c = value;
				generateCoordinates();
			}

			function set_d(value) {
				d = value;
				generateCoordinates();
			}

			function set_pdelta(value) {
				pdelta = value;
				generateCoordinates();
			}

			function set_tdelta(value) {
				tdelta = value;
				generateCoordinates();
			}

			function resolution(value) {
				resolution = value;
				initialize();
			}

			function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var arrIndex = 0;
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
					coordinates[arrIndex++] = new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					);
					theta += delta;
				}
				phi += delta;
			     }
			}''')

Layer17.addChild(Script60)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromField("coordIndexes")
ROUTE70.setFromNode("OrbitScript")
ROUTE70.setToField("set_coordIndex")
ROUTE70.setToNode("Orbit")

Layer17.addChild(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromField("coordinates")
ROUTE71.setFromNode("OrbitScript")
ROUTE71.setToField("set_point")
ROUTE71.setToNode("OrbitCoordinates")

Layer17.addChild(ROUTE71)

LayerSet16.addLayers(Layer17)
LayoutLayer72 = x3d.LayoutLayer()
LayoutLayer72.setPickable(True)
LayoutLayer72.setObjectType(["ALL"])
Layout73 = x3d.Layout()
Layout73.setAlign(["LEFT","BOTTOM"])
Layout73.setOffset(x3d.doubleToFloat([-0.2,0.19]))
Layout73.setSize(x3d.doubleToFloat([0.4,0.6]))

LayoutLayer72.setLayout(Layout73)
Viewport74 = x3d.Viewport()
Viewport74.setClipBoundary(x3d.doubleToFloat([0,1,0,1]))

LayoutLayer72.setViewport(Viewport74)
Transform75 = x3d.Transform()
Transform75.setTranslation(x3d.doubleToFloat([0,0,-3]))
Shape76 = x3d.Shape()
Appearance77 = x3d.Appearance()
Material78 = x3d.Material()
Material78.setDiffuseColor(x3d.doubleToFloat([0,0,0]))
Material78.setTransparency(0.7)

Appearance77.setMaterial(Material78)

Shape76.setAppearance(Appearance77)
Box79 = x3d.Box()
Box79.setSize(x3d.doubleToFloat([100,100,0.02]))

Shape76.setGeometry(Box79)

Transform75.addChild(Shape76)

LayoutLayer72.addChild(Transform75)
Transform80 = x3d.Transform()
Transform80.setDEF("equationTransform")
Transform81 = x3d.Transform()
Transform81.setTranslation(x3d.doubleToFloat([0,0,-20]))
Shape82 = x3d.Shape()
Text83 = x3d.Text()
Text83.setDEF("equation")
Text83.setString(["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"])
FontStyle84 = x3d.FontStyle()
FontStyle84.setSize(0.09)

Text83.setFontStyle(FontStyle84)

Shape82.setGeometry(Text83)
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.setDiffuseColor(x3d.doubleToFloat([1,1,0]))

Appearance85.setMaterial(Material86)

Shape82.setAppearance(Appearance85)

Transform81.addChild(Shape82)

Transform80.addChild(Transform81)

LayoutLayer72.addChild(Transform80)

LayoutLayer72.addComments(x3d.CommentsBlock("""The slider parameters"""))
ProtoDeclare87 = x3d.ProtoDeclare()
ProtoDeclare87.setName("SliderProto")
ProtoInterface88 = x3d.ProtoInterface()
field89 = x3d.field()
field89.setName("sliderTranslation")
field89.setAccessType("inputOutput")
field89.setType("SFVec3f")
field89.setValue("0 0 0")

ProtoInterface88.addField(field89)
field90 = x3d.field()
field90.setName("textString")
field90.setAccessType("inputOutput")
field90.setType("MFString")
field90.setValue("\"x=\"")

ProtoInterface88.addField(field90)
field91 = x3d.field()
field91.setName("parameterScale")
field91.setAccessType("inputOutput")
field91.setType("SFFloat")
field91.setValue("15")

ProtoInterface88.addField(field91)
field92 = x3d.field()
field92.setName("parameterName")
field92.setAccessType("inputOutput")
field92.setType("SFString")
field92.setValue("x")

ProtoInterface88.addField(field92)
field93 = x3d.field()
field93.setName("orbScript")
field93.setAccessType("inputOutput")
field93.setType("SFNode")

ProtoInterface88.addField(field93)

ProtoDeclare87.setProtoInterface(ProtoInterface88)
ProtoBody94 = x3d.ProtoBody()
Group95 = x3d.Group()
Transform96 = x3d.Transform()
Transform96.setDEF("protoSlider")
Transform96.setTranslation(x3d.doubleToFloat([0,0.7,0]))
IS97 = x3d.IS()
connect98 = x3d.connect()
connect98.setNodeField("translation")
connect98.setProtoField("sliderTranslation")

IS97.addConnect(connect98)

Transform96.setIS(IS97)
Transform99 = x3d.Transform()
Transform99.setDEF("protoTransform")
Transform99.setTranslation(x3d.doubleToFloat([0,0,0.1]))
PlaneSensor100 = x3d.PlaneSensor()
PlaneSensor100.setDEF("protoSensor")
PlaneSensor100.setDescription("Grab with mouse to adjust slider")
PlaneSensor100.setMaxPosition(x3d.doubleToFloat([1,0]))

Transform99.addChild(PlaneSensor100)
Transform101 = x3d.Transform()
Transform101.setTranslation(x3d.doubleToFloat([0,0,0]))
TouchSensor102 = x3d.TouchSensor()
TouchSensor102.setDescription("Maybe start dragging this?")
TouchSensor102.setDEF("protoTS")

Transform101.addChild(TouchSensor102)

Transform99.addChild(Transform101)
Transform103 = x3d.Transform()
Shape104 = x3d.Shape()
Text105 = x3d.Text()
Text105.setDEF("protoText")
Text105.setString(["a="])
IS106 = x3d.IS()
connect107 = x3d.connect()
connect107.setNodeField("string")
connect107.setProtoField("textString")

IS106.addConnect(connect107)

Text105.setIS(IS106)
FontStyle108 = x3d.FontStyle()
FontStyle108.setStyle("BOLD")
FontStyle108.setSize(0.23)

Text105.setFontStyle(FontStyle108)

Shape104.setGeometry(Text105)
Appearance109 = x3d.Appearance()
Material110 = x3d.Material()

Appearance109.setMaterial(Material110)

Shape104.setAppearance(Appearance109)

Transform103.addChild(Shape104)

Transform99.addChild(Transform103)

Transform96.addChild(Transform99)

Group95.addChild(Transform96)
Script111 = x3d.Script()
Script111.setDEF("protoValueTransformerScript")
field112 = x3d.field()
field112.setName("protoScale")
field112.setAccessType("inputOutput")
field112.setType("SFFloat")

Script111.addField(field112)
field113 = x3d.field()
field113.setName("protoParameterName")
field113.setAccessType("inputOutput")
field113.setType("SFString")

Script111.addField(field113)
field114 = x3d.field()
field114.setName("newTranslation")
field114.setAccessType("inputOnly")
field114.setType("SFVec3f")
field114.setValue("1 1 1")

Script111.addField(field114)
field115 = x3d.field()
field115.setName("protoScript")
field115.setAccessType("inputOutput")
field115.setType("SFNode")

Script111.addField(field115)
field116 = x3d.field()
field116.setName("protoValue")
field116.setAccessType("inputOutput")
field116.setType("SFFloat")
field116.setValue("1")

Script111.addField(field116)
field117 = x3d.field()
field117.setName("protoText")
field117.setAccessType("inputOutput")
field117.setType("MFString")
field117.setValue("\"1.0\"")

Script111.addField(field117)
IS118 = x3d.IS()
connect119 = x3d.connect()
connect119.setNodeField("protoScale")
connect119.setProtoField("parameterScale")

IS118.addConnect(connect119)
connect120 = x3d.connect()
connect120.setNodeField("protoParameterName")
connect120.setProtoField("parameterName")

IS118.addConnect(connect120)
connect121 = x3d.connect()
connect121.setNodeField("protoScript")
connect121.setProtoField("orbScript")

IS118.addConnect(connect121)

Script111.setIS(IS118)

Script111.setSourceCode('''ecmascript:
function set_protoScale(value) {
	protoScale = value;
}

function set_protoParameterName(value) {
	protoParameterName = value;
}

function set_protoScript(value) {
	protoScript = value;
}

function set_protoValue(value) {
	protoValue = value;
}

function set_protoText(value) {
	protoText = value;
}

function newTranslation(value) {
       	set_protoValue(value.x * protoScale);
       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));
	protoScript[protoParameterName] = protoValue;
};''')

Group95.addChild(Script111)
ROUTE122 = x3d.ROUTE()
ROUTE122.setFromField("translation_changed")
ROUTE122.setFromNode("protoSensor")
ROUTE122.setToField("set_translation")
ROUTE122.setToNode("protoTransform")

Group95.addChild(ROUTE122)
ROUTE123 = x3d.ROUTE()
ROUTE123.setFromField("translation_changed")
ROUTE123.setFromNode("protoSensor")
ROUTE123.setToField("newTranslation")
ROUTE123.setToNode("protoValueTransformerScript")

Group95.addChild(ROUTE123)
ROUTE124 = x3d.ROUTE()
ROUTE124.setFromField("protoText")
ROUTE124.setFromNode("protoValueTransformerScript")
ROUTE124.setToField("string")
ROUTE124.setToNode("protoText")

Group95.addChild(ROUTE124)

ProtoBody94.addChild(Group95)

ProtoDeclare87.setProtoBody(ProtoBody94)

LayoutLayer72.addChild(ProtoDeclare87)
ProtoInstance125 = x3d.ProtoInstance()
ProtoInstance125.setName("SliderProto")
ProtoInstance125.setDEF("aPI")
fieldValue126 = x3d.fieldValue()
fieldValue126.setName("sliderTranslation")
fieldValue126.setValue("0 0.7 0")

ProtoInstance125.addFieldValue(fieldValue126)
fieldValue127 = x3d.fieldValue()
fieldValue127.setName("textString")
fieldValue127.setValue("\"a=\"")

ProtoInstance125.addFieldValue(fieldValue127)
fieldValue128 = x3d.fieldValue()
fieldValue128.setName("parameterScale")
fieldValue128.setValue("30")

ProtoInstance125.addFieldValue(fieldValue128)
fieldValue129 = x3d.fieldValue()
fieldValue129.setName("parameterName")
fieldValue129.setValue("a")

ProtoInstance125.addFieldValue(fieldValue129)
fieldValue130 = x3d.fieldValue()
fieldValue130.setName("orbScript")
Script131 = x3d.Script()
Script131.setUSE("OrbitScript")

fieldValue130.addChild(Script131)

ProtoInstance125.addFieldValue(fieldValue130)

LayoutLayer72.addChild(ProtoInstance125)
ProtoInstance132 = x3d.ProtoInstance()
ProtoInstance132.setName("SliderProto")
ProtoInstance132.setDEF("bPI")
fieldValue133 = x3d.fieldValue()
fieldValue133.setName("sliderTranslation")
fieldValue133.setValue("0 0.4 0")

ProtoInstance132.addFieldValue(fieldValue133)
fieldValue134 = x3d.fieldValue()
fieldValue134.setName("textString")
fieldValue134.setValue("\"b=\"")

ProtoInstance132.addFieldValue(fieldValue134)
fieldValue135 = x3d.fieldValue()
fieldValue135.setName("parameterScale")
fieldValue135.setValue("30")

ProtoInstance132.addFieldValue(fieldValue135)
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("parameterName")
fieldValue136.setValue("b")

ProtoInstance132.addFieldValue(fieldValue136)
fieldValue137 = x3d.fieldValue()
fieldValue137.setName("orbScript")
Script138 = x3d.Script()
Script138.setUSE("OrbitScript")

fieldValue137.addChild(Script138)

ProtoInstance132.addFieldValue(fieldValue137)

LayoutLayer72.addChild(ProtoInstance132)
ProtoInstance139 = x3d.ProtoInstance()
ProtoInstance139.setName("SliderProto")
ProtoInstance139.setDEF("cPI")
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("sliderTranslation")
fieldValue140.setValue("0 0.1 0")

ProtoInstance139.addFieldValue(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.setName("textString")
fieldValue141.setValue("\"c=\"")

ProtoInstance139.addFieldValue(fieldValue141)
fieldValue142 = x3d.fieldValue()
fieldValue142.setName("parameterScale")
fieldValue142.setValue("20")

ProtoInstance139.addFieldValue(fieldValue142)
fieldValue143 = x3d.fieldValue()
fieldValue143.setName("parameterName")
fieldValue143.setValue("c")

ProtoInstance139.addFieldValue(fieldValue143)
fieldValue144 = x3d.fieldValue()
fieldValue144.setName("orbScript")
Script145 = x3d.Script()
Script145.setUSE("OrbitScript")

fieldValue144.addChild(Script145)

ProtoInstance139.addFieldValue(fieldValue144)

LayoutLayer72.addChild(ProtoInstance139)
ProtoInstance146 = x3d.ProtoInstance()
ProtoInstance146.setName("SliderProto")
ProtoInstance146.setDEF("dPI")
fieldValue147 = x3d.fieldValue()
fieldValue147.setName("sliderTranslation")
fieldValue147.setValue("0 -0.2 0")

ProtoInstance146.addFieldValue(fieldValue147)
fieldValue148 = x3d.fieldValue()
fieldValue148.setName("textString")
fieldValue148.setValue("\"d=\"")

ProtoInstance146.addFieldValue(fieldValue148)
fieldValue149 = x3d.fieldValue()
fieldValue149.setName("parameterScale")
fieldValue149.setValue("20")

ProtoInstance146.addFieldValue(fieldValue149)
fieldValue150 = x3d.fieldValue()
fieldValue150.setName("parameterName")
fieldValue150.setValue("d")

ProtoInstance146.addFieldValue(fieldValue150)
fieldValue151 = x3d.fieldValue()
fieldValue151.setName("orbScript")
Script152 = x3d.Script()
Script152.setUSE("OrbitScript")

fieldValue151.addChild(Script152)

ProtoInstance146.addFieldValue(fieldValue151)

LayoutLayer72.addChild(ProtoInstance146)
ProtoInstance153 = x3d.ProtoInstance()
ProtoInstance153.setName("SliderProto")
ProtoInstance153.setDEF("tdeltaPI")
fieldValue154 = x3d.fieldValue()
fieldValue154.setName("sliderTranslation")
fieldValue154.setValue("0 -0.5 0")

ProtoInstance153.addFieldValue(fieldValue154)
fieldValue155 = x3d.fieldValue()
fieldValue155.setName("textString")
fieldValue155.setValue("\"tdelta=\"")

ProtoInstance153.addFieldValue(fieldValue155)
fieldValue156 = x3d.fieldValue()
fieldValue156.setName("parameterScale")
fieldValue156.setValue("6.28")

ProtoInstance153.addFieldValue(fieldValue156)
fieldValue157 = x3d.fieldValue()
fieldValue157.setName("parameterName")
fieldValue157.setValue("tdelta")

ProtoInstance153.addFieldValue(fieldValue157)
fieldValue158 = x3d.fieldValue()
fieldValue158.setName("orbScript")
Script159 = x3d.Script()
Script159.setUSE("OrbitScript")

fieldValue158.addChild(Script159)

ProtoInstance153.addFieldValue(fieldValue158)

LayoutLayer72.addChild(ProtoInstance153)
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.setName("SliderProto")
ProtoInstance160.setDEF("pdeltaPI")
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("sliderTranslation")
fieldValue161.setValue("0 -0.8 0")

ProtoInstance160.addFieldValue(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.setName("textString")
fieldValue162.setValue("\"pdelta=\"")

ProtoInstance160.addFieldValue(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.setName("parameterScale")
fieldValue163.setValue("6.28")

ProtoInstance160.addFieldValue(fieldValue163)
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("parameterName")
fieldValue164.setValue("pdelta")

ProtoInstance160.addFieldValue(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.setName("orbScript")
Script166 = x3d.Script()
Script166.setUSE("OrbitScript")

fieldValue165.addChild(Script166)

ProtoInstance160.addFieldValue(fieldValue165)

LayoutLayer72.addChild(ProtoInstance160)

LayerSet16.addLayers(LayoutLayer72)
Layer167 = x3d.Layer()
Layer167.setPickable(True)
Layer167.setObjectType(["ALL"])
Viewpoint168 = x3d.Viewpoint()
Viewpoint168.setDescription("My Humanoids")
Viewpoint168.setFieldOfView(1.570796)
Viewpoint168.setPosition(x3d.doubleToFloat([0,1.75,80]))

Layer167.addChild(Viewpoint168)

LayerSet16.addLayers(Layer167)

Scene15.addLayerSet(LayerSet16)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/sliders.new.graalpy.x3d")
X3D0.toFileJSON("../data/sliders.new.graalpy.x3dj")
