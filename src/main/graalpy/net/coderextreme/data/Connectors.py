import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("comment")
meta2.setContent("World of Titania")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("created")
meta3.setContent("Fri, 04 Sep 2015 10:19:01 GMT")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Holger Seelig")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("generator")
meta5.setContent("Titania V3.0.4, https://titania.create3000.de")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("Tue, 25 Jul 2017 09:42:17 GMT")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("title")
meta8.setContent("Connectors")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = x3d.Scene()
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.setName("RoundedRectangle2D")
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.setName("cornerRadius")
field12.setAccessType("initializeOnly")
field12.setType("SFFloat")
field12.setValue("1")

ProtoInterface11.addField(field12)
field13 = x3d.field()
field13.setName("size")
field13.setAccessType("initializeOnly")
field13.setType("SFVec2f")
field13.setValue("2 2")

ProtoInterface11.addField(field13)
field14 = x3d.field()
field14.setName("solid")
field14.setAccessType("initializeOnly")
field14.setType("SFBool")
field14.setValue("true")

ProtoInterface11.addField(field14)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody15 = x3d.ProtoBody()
IndexedFaceSet16 = x3d.IndexedFaceSet()
IndexedFaceSet16.setDEF("Geometry")
IS17 = x3d.IS()
connect18 = x3d.connect()
connect18.setNodeField("solid")
connect18.setProtoField("solid")

IS17.addConnect(connect18)

IndexedFaceSet16.setIS(IS17)
Coordinate19 = x3d.Coordinate()

IndexedFaceSet16.setCoord(Coordinate19)

ProtoBody15.addChild(IndexedFaceSet16)
Script20 = x3d.Script()
Script20.setDEF("RoundedRectangle2D")
Script20.setDirectOutput(True)
field21 = x3d.field()
field21.setName("cornerDimension")
field21.setAccessType("initializeOnly")
field21.setType("SFFloat")
field21.setValue("10")

Script20.addField(field21)
field22 = x3d.field()
field22.setName("cornerRadius")
field22.setAccessType("initializeOnly")
field22.setType("SFFloat")

Script20.addField(field22)
field23 = x3d.field()
field23.setName("size")
field23.setAccessType("initializeOnly")
field23.setType("SFVec2f")

Script20.addField(field23)
field24 = x3d.field()
field24.setName("geometry")
field24.setAccessType("initializeOnly")
field24.setType("SFNode")
IndexedFaceSet25 = x3d.IndexedFaceSet()
IndexedFaceSet25.setUSE("Geometry")

field24.addChild(IndexedFaceSet25)

Script20.addField(field24)
IS26 = x3d.IS()
connect27 = x3d.connect()
connect27.setNodeField("cornerRadius")
connect27.setProtoField("cornerRadius")

IS26.addConnect(connect27)
connect28 = x3d.connect()
connect28.setNodeField("size")
connect28.setProtoField("size")

IS26.addConnect(connect28)

Script20.setIS(IS26)

Script20.setSourceCode('''ecmascript:

function initialize ()
{
	var point         = new SFVec3f (cornerRadius, 0, 0);
	var startRotation = new SFRotation ();
	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);
	var corner        = new MFVec3f ();
	var coordIndex    = new MFInt32 ();
	var points        = new MFVec3f ();

	for (var i = 0; i < cornerDimension * 4; ++ i)
		coordIndex [coordIndex .length] = i;

	geometry .coordIndex = coordIndex;

	for (var i = 0; i < cornerDimension; ++i)
		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = corner [i] .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	geometry .coord .point = points;
}''')

ProtoBody15.addChild(Script20)

ProtoDeclare10.setProtoBody(ProtoBody15)

Scene9.addChild(ProtoDeclare10)
ProtoDeclare29 = x3d.ProtoDeclare()
ProtoDeclare29.setName("Widget")
ProtoInterface30 = x3d.ProtoInterface()
field31 = x3d.field()
field31.setName("fillColor")
field31.setAccessType("inputOutput")
field31.setType("SFColor")
field31.setValue("0.1 0.1 0.1")

ProtoInterface30.addField(field31)
field32 = x3d.field()
field32.setName("lineColor")
field32.setAccessType("inputOutput")
field32.setType("SFColor")
field32.setValue("0.4 0.4 0.4")

ProtoInterface30.addField(field32)
field33 = x3d.field()
field33.setName("linewidthScaleFactor")
field33.setAccessType("inputOutput")
field33.setType("SFFloat")
field33.setValue("1")

ProtoInterface30.addField(field33)
field34 = x3d.field()
field34.setName("geometry")
field34.setAccessType("inputOutput")
field34.setType("SFNode")

ProtoInterface30.addField(field34)

ProtoDeclare29.setProtoInterface(ProtoInterface30)
ProtoBody35 = x3d.ProtoBody()
Transform36 = x3d.Transform()
Transform36.setDEF("Shape")
Shape37 = x3d.Shape()
IS38 = x3d.IS()
connect39 = x3d.connect()
connect39.setNodeField("geometry")
connect39.setProtoField("geometry")

IS38.addConnect(connect39)

Shape37.setIS(IS38)
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
IS42 = x3d.IS()
connect43 = x3d.connect()
connect43.setNodeField("diffuseColor")
connect43.setProtoField("fillColor")

IS42.addConnect(connect43)

Material41.setIS(IS42)

Appearance40.setMaterial(Material41)

Shape37.setAppearance(Appearance40)

Transform36.addChild(Shape37)
Shape44 = x3d.Shape()
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.setNodeField("geometry")
connect46.setProtoField("geometry")

IS45.addConnect(connect46)

Shape44.setIS(IS45)
Appearance47 = x3d.Appearance()
FillProperties48 = x3d.FillProperties()
FillProperties48.setFilled(False)
FillProperties48.setHatched(False)

Appearance47.setFillProperties(FillProperties48)
LineProperties49 = x3d.LineProperties()
IS50 = x3d.IS()
connect51 = x3d.connect()
connect51.setNodeField("linewidthScaleFactor")
connect51.setProtoField("linewidthScaleFactor")

IS50.addConnect(connect51)

LineProperties49.setIS(IS50)

Appearance47.setLineProperties(LineProperties49)
Material52 = x3d.Material()
Material52.setDiffuseColor(x3d.doubleToFloat([0,0,0]))
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.setNodeField("emissiveColor")
connect54.setProtoField("lineColor")

IS53.addConnect(connect54)

Material52.setIS(IS53)

Appearance47.setMaterial(Material52)

Shape44.setAppearance(Appearance47)

Transform36.addChild(Shape44)

ProtoBody35.addChild(Transform36)

ProtoDeclare29.setProtoBody(ProtoBody35)

Scene9.addChild(ProtoDeclare29)
ProtoDeclare55 = x3d.ProtoDeclare()
ProtoDeclare55.setName("Node")
ProtoInterface56 = x3d.ProtoInterface()
field57 = x3d.field()
field57.setName("translation")
field57.setAccessType("inputOutput")
field57.setType("SFVec3f")

ProtoInterface56.addField(field57)

ProtoDeclare55.setProtoInterface(ProtoInterface56)
ProtoBody58 = x3d.ProtoBody()
Group59 = x3d.Group()
PlaneSensor60 = x3d.PlaneSensor()
PlaneSensor60.setDEF("PlaneSensor")

Group59.addChild(PlaneSensor60)
Transform61 = x3d.Transform()
Transform61.setDEF("Node")
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.setNodeField("translation")
connect63.setProtoField("translation")

IS62.addConnect(connect63)

Transform61.setIS(IS62)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.setName("Widget")
fieldValue65 = x3d.fieldValue()
fieldValue65.setName("geometry")
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.setName("RoundedRectangle2D")
fieldValue67 = x3d.fieldValue()
fieldValue67.setName("cornerRadius")
fieldValue67.setValue("0.12")

ProtoInstance66.addFieldValue(fieldValue67)
fieldValue68 = x3d.fieldValue()
fieldValue68.setName("size")
fieldValue68.setValue("2 1")

ProtoInstance66.addFieldValue(fieldValue68)

fieldValue65.addChild(ProtoInstance66)

ProtoInstance64.addFieldValue(fieldValue65)

Transform61.addChild(ProtoInstance64)
Transform69 = x3d.Transform()
Transform69.setDEF("Input")
Transform69.setTranslation(x3d.doubleToFloat([-1,0,0]))
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.setName("Widget")
fieldValue71 = x3d.fieldValue()
fieldValue71.setName("lineColor")
fieldValue71.setValue("0.72 0.14 0.23")

ProtoInstance70.addFieldValue(fieldValue71)
fieldValue72 = x3d.fieldValue()
fieldValue72.setName("geometry")
Disk2D73 = x3d.Disk2D()
Disk2D73.setDEF("Connector")
Disk2D73.setOuterRadius(0.2)

fieldValue72.addChild(Disk2D73)

ProtoInstance70.addFieldValue(fieldValue72)

Transform69.addChild(ProtoInstance70)

Transform61.addChild(Transform69)
Transform74 = x3d.Transform()
Transform74.setDEF("Output")
Transform74.setTranslation(x3d.doubleToFloat([1,0,0]))
ProtoInstance75 = x3d.ProtoInstance()
ProtoInstance75.setName("Widget")
fieldValue76 = x3d.fieldValue()
fieldValue76.setName("lineColor")
fieldValue76.setValue("0.44 0.5 0.72")

ProtoInstance75.addFieldValue(fieldValue76)
fieldValue77 = x3d.fieldValue()
fieldValue77.setName("geometry")
Disk2D78 = x3d.Disk2D()
Disk2D78.setUSE("Connector")

fieldValue77.addChild(Disk2D78)

ProtoInstance75.addFieldValue(fieldValue77)

Transform74.addChild(ProtoInstance75)

Transform61.addChild(Transform74)

Group59.addChild(Transform61)

ProtoBody58.addChild(Group59)
Script79 = x3d.Script()
Script79.setDirectOutput(True)
field80 = x3d.field()
field80.setName("translation")
field80.setAccessType("inputOutput")
field80.setType("SFVec3f")

Script79.addField(field80)
field81 = x3d.field()
field81.setName("sensor")
field81.setAccessType("initializeOnly")
field81.setType("SFNode")
PlaneSensor82 = x3d.PlaneSensor()
PlaneSensor82.setUSE("PlaneSensor")

field81.addChild(PlaneSensor82)

Script79.addField(field81)
field83 = x3d.field()
field83.setName("transform")
field83.setAccessType("initializeOnly")
field83.setType("SFNode")
Transform84 = x3d.Transform()
Transform84.setUSE("Node")

field83.addChild(Transform84)

Script79.addField(field83)
IS85 = x3d.IS()
connect86 = x3d.connect()
connect86.setNodeField("translation")
connect86.setProtoField("translation")

IS85.addConnect(connect86)

Script79.setIS(IS85)

Script79.setSourceCode('''ecmascript:
function initialize ()
{
	sensor .offset = translation;
}''')

ProtoBody58.addChild(Script79)
ROUTE87 = x3d.ROUTE()
ROUTE87.setFromNode("PlaneSensor")
ROUTE87.setFromField("translation_changed")
ROUTE87.setToNode("Node")
ROUTE87.setToField("set_translation")

ProtoBody58.addChild(ROUTE87)

ProtoDeclare55.setProtoBody(ProtoBody58)

Scene9.addChild(ProtoDeclare55)
ProtoDeclare88 = x3d.ProtoDeclare()
ProtoDeclare88.setName("Route")
ProtoInterface89 = x3d.ProtoInterface()
field90 = x3d.field()
field90.setName("lineColor")
field90.setAccessType("inputOutput")
field90.setType("SFColor")
field90.setValue("0.43 0.43 0.98")

ProtoInterface89.addField(field90)
field91 = x3d.field()
field91.setName("linewidthScaleFactor")
field91.setAccessType("inputOutput")
field91.setType("SFFloat")
field91.setValue("2")

ProtoInterface89.addField(field91)
field92 = x3d.field()
field92.setName("output")
field92.setAccessType("initializeOnly")
field92.setType("SFNode")

ProtoInterface89.addField(field92)
field93 = x3d.field()
field93.setName("input")
field93.setAccessType("initializeOnly")
field93.setType("SFNode")

ProtoInterface89.addField(field93)

ProtoDeclare88.setProtoInterface(ProtoInterface89)
ProtoBody94 = x3d.ProtoBody()
Shape95 = x3d.Shape()
Appearance96 = x3d.Appearance()
LineProperties97 = x3d.LineProperties()
IS98 = x3d.IS()
connect99 = x3d.connect()
connect99.setNodeField("linewidthScaleFactor")
connect99.setProtoField("linewidthScaleFactor")

IS98.addConnect(connect99)

LineProperties97.setIS(IS98)

Appearance96.setLineProperties(LineProperties97)
Material100 = x3d.Material()
Material100.setDiffuseColor(x3d.doubleToFloat([0,0,0]))
IS101 = x3d.IS()
connect102 = x3d.connect()
connect102.setNodeField("emissiveColor")
connect102.setProtoField("lineColor")

IS101.addConnect(connect102)

Material100.setIS(IS101)

Appearance96.setMaterial(Material100)

Shape95.setAppearance(Appearance96)
LineSet103 = x3d.LineSet()
LineSet103.setDEF("Geometry_1")
LineSet103.setVertexCount([2])
Coordinate104 = x3d.Coordinate()
Coordinate104.setPoint(x3d.doubleToFloat([-1,0,0,1,0,0]))

LineSet103.setCoord(Coordinate104)

Shape95.setGeometry(LineSet103)

ProtoBody94.addChild(Shape95)
Script105 = x3d.Script()
Script105.setDEF("Route")
Script105.setDirectOutput(True)
field106 = x3d.field()
field106.setName("set_translation")
field106.setAccessType("inputOnly")
field106.setType("SFVec3f")

Script105.addField(field106)
field107 = x3d.field()
field107.setName("routeDimension")
field107.setAccessType("initializeOnly")
field107.setType("SFInt32")
field107.setValue("21")

Script105.addField(field107)
field108 = x3d.field()
field108.setName("output")
field108.setAccessType("initializeOnly")
field108.setType("SFNode")

Script105.addField(field108)
field109 = x3d.field()
field109.setName("input")
field109.setAccessType("initializeOnly")
field109.setType("SFNode")

Script105.addField(field109)
field110 = x3d.field()
field110.setName("geometry")
field110.setAccessType("initializeOnly")
field110.setType("SFNode")
LineSet111 = x3d.LineSet()
LineSet111.setUSE("Geometry_1")

field110.addChild(LineSet111)

Script105.addField(field110)
field112 = x3d.field()
field112.setName("self")
field112.setAccessType("initializeOnly")
field112.setType("SFNode")
Script113 = x3d.Script()
Script113.setUSE("Route")

field112.addChild(Script113)

Script105.addField(field112)
IS114 = x3d.IS()
connect115 = x3d.connect()
connect115.setNodeField("output")
connect115.setProtoField("output")

IS114.addConnect(connect115)
connect116 = x3d.connect()
connect116.setNodeField("input")
connect116.setProtoField("input")

IS114.addConnect(connect116)

Script105.setIS(IS114)

Script105.setSourceCode('''ecmascript:
function initialize ()
{
	Browser .addRoute (output, 'translation_changed', self, 'set_translation');
	Browser .addRoute (input,  'translation_changed', self, 'set_translation');

	set_translation ();
}

function set_translation ()
{
	geometry .vertexCount [0] = routeDimension;

	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));
	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));

	var w = inPoint .x - outPoint .x;
	var h = outPoint .y - inPoint .y;

	for (var i = 0; i < routeDimension; ++ i)
	{
		var t = i / (routeDimension - 1);
		var y = h / 2 * (Math .cos (t * Math .PI) - 1);

		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));
	}
}''')

ProtoBody94.addChild(Script105)

ProtoDeclare88.setProtoBody(ProtoBody94)

Scene9.addChild(ProtoDeclare88)
NavigationInfo117 = x3d.NavigationInfo()
NavigationInfo117.setType(["FLY","ANY"])

Scene9.addChild(NavigationInfo117)
Background118 = x3d.Background()
Background118.setSkyColor(x3d.doubleToFloat([0.2,0.2,0.2]))

Scene9.addChild(Background118)
OrthoViewpoint119 = x3d.OrthoViewpoint()
OrthoViewpoint119.setDescription("OthoViewpoint")
OrthoViewpoint119.setPosition(x3d.doubleToFloat([-3.13496,-4.19776,10]))
OrthoViewpoint119.setCenterOfRotation(x3d.doubleToFloat([-3.13496,-4.19776,0]))
OrthoViewpoint119.setFieldOfView(x3d.doubleToFloat([0,0,10,10]))

Scene9.addChild(OrthoViewpoint119)
Viewpoint120 = x3d.Viewpoint()
Viewpoint120.setDescription("Viewpoint")

Scene9.addChild(Viewpoint120)
Transform121 = x3d.Transform()
Transform121.setDEF("Connectors")
ProtoInstance122 = x3d.ProtoInstance()
ProtoInstance122.setName("Route")
fieldValue123 = x3d.fieldValue()
fieldValue123.setName("output")
ProtoInstance124 = x3d.ProtoInstance()
ProtoInstance124.setName("Node")
ProtoInstance124.setDEF("N1")
fieldValue125 = x3d.fieldValue()
fieldValue125.setName("translation")
fieldValue125.setValue("-3.98323 2.88948 0")

ProtoInstance124.addFieldValue(fieldValue125)

fieldValue123.addChild(ProtoInstance124)

ProtoInstance122.addFieldValue(fieldValue123)
fieldValue126 = x3d.fieldValue()
fieldValue126.setName("input")
ProtoInstance127 = x3d.ProtoInstance()
ProtoInstance127.setName("Node")
ProtoInstance127.setDEF("N2")
fieldValue128 = x3d.fieldValue()
fieldValue128.setName("translation")
fieldValue128.setValue("-0.0890862 2.96049 0")

ProtoInstance127.addFieldValue(fieldValue128)

fieldValue126.addChild(ProtoInstance127)

ProtoInstance122.addFieldValue(fieldValue126)

Transform121.addChild(ProtoInstance122)
ProtoInstance129 = x3d.ProtoInstance()
ProtoInstance129.setName("Route")
fieldValue130 = x3d.fieldValue()
fieldValue130.setName("output")
ProtoInstance131 = x3d.ProtoInstance()
ProtoInstance131.setName("Node")
ProtoInstance131.setUSE("N1")

fieldValue130.addChild(ProtoInstance131)

ProtoInstance129.addFieldValue(fieldValue130)
fieldValue132 = x3d.fieldValue()
fieldValue132.setName("input")
ProtoInstance133 = x3d.ProtoInstance()
ProtoInstance133.setName("Node")
ProtoInstance133.setDEF("N3")
fieldValue134 = x3d.fieldValue()
fieldValue134.setName("translation")
fieldValue134.setValue("-0.104169 1.16371 0")

ProtoInstance133.addFieldValue(fieldValue134)

fieldValue132.addChild(ProtoInstance133)

ProtoInstance129.addFieldValue(fieldValue132)

Transform121.addChild(ProtoInstance129)
ProtoInstance135 = x3d.ProtoInstance()
ProtoInstance135.setName("Route")
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("output")
ProtoInstance137 = x3d.ProtoInstance()
ProtoInstance137.setName("Node")
ProtoInstance137.setUSE("N1")

fieldValue136.addChild(ProtoInstance137)

ProtoInstance135.addFieldValue(fieldValue136)
fieldValue138 = x3d.fieldValue()
fieldValue138.setName("input")
ProtoInstance139 = x3d.ProtoInstance()
ProtoInstance139.setName("Node")
ProtoInstance139.setDEF("N4")
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("translation")
fieldValue140.setValue("-0.0998688 -0.40172 0")

ProtoInstance139.addFieldValue(fieldValue140)

fieldValue138.addChild(ProtoInstance139)

ProtoInstance135.addFieldValue(fieldValue138)

Transform121.addChild(ProtoInstance135)
ProtoInstance141 = x3d.ProtoInstance()
ProtoInstance141.setName("Route")
fieldValue142 = x3d.fieldValue()
fieldValue142.setName("output")
ProtoInstance143 = x3d.ProtoInstance()
ProtoInstance143.setName("Node")
ProtoInstance143.setUSE("N1")

fieldValue142.addChild(ProtoInstance143)

ProtoInstance141.addFieldValue(fieldValue142)
fieldValue144 = x3d.fieldValue()
fieldValue144.setName("input")
ProtoInstance145 = x3d.ProtoInstance()
ProtoInstance145.setName("Node")
ProtoInstance145.setDEF("N5")
fieldValue146 = x3d.fieldValue()
fieldValue146.setName("translation")
fieldValue146.setValue("-0.0998687 -2.14742 0")

ProtoInstance145.addFieldValue(fieldValue146)

fieldValue144.addChild(ProtoInstance145)

ProtoInstance141.addFieldValue(fieldValue144)

Transform121.addChild(ProtoInstance141)
ProtoInstance147 = x3d.ProtoInstance()
ProtoInstance147.setName("Route")
fieldValue148 = x3d.fieldValue()
fieldValue148.setName("output")
ProtoInstance149 = x3d.ProtoInstance()
ProtoInstance149.setName("Node")
ProtoInstance149.setUSE("N2")

fieldValue148.addChild(ProtoInstance149)

ProtoInstance147.addFieldValue(fieldValue148)
fieldValue150 = x3d.fieldValue()
fieldValue150.setName("input")
ProtoInstance151 = x3d.ProtoInstance()
ProtoInstance151.setName("Node")
ProtoInstance151.setDEF("N6")
fieldValue152 = x3d.fieldValue()
fieldValue152.setName("translation")
fieldValue152.setValue("3.55694 2.4116 0")

ProtoInstance151.addFieldValue(fieldValue152)

fieldValue150.addChild(ProtoInstance151)

ProtoInstance147.addFieldValue(fieldValue150)

Transform121.addChild(ProtoInstance147)
ProtoInstance153 = x3d.ProtoInstance()
ProtoInstance153.setName("Route")
fieldValue154 = x3d.fieldValue()
fieldValue154.setName("output")
ProtoInstance155 = x3d.ProtoInstance()
ProtoInstance155.setName("Node")
ProtoInstance155.setUSE("N3")

fieldValue154.addChild(ProtoInstance155)

ProtoInstance153.addFieldValue(fieldValue154)
fieldValue156 = x3d.fieldValue()
fieldValue156.setName("input")
ProtoInstance157 = x3d.ProtoInstance()
ProtoInstance157.setName("Node")
ProtoInstance157.setUSE("N6")

fieldValue156.addChild(ProtoInstance157)

ProtoInstance153.addFieldValue(fieldValue156)

Transform121.addChild(ProtoInstance153)
ProtoInstance158 = x3d.ProtoInstance()
ProtoInstance158.setName("Route")
fieldValue159 = x3d.fieldValue()
fieldValue159.setName("output")
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.setName("Node")
ProtoInstance160.setUSE("N4")

fieldValue159.addChild(ProtoInstance160)

ProtoInstance158.addFieldValue(fieldValue159)
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("input")
ProtoInstance162 = x3d.ProtoInstance()
ProtoInstance162.setName("Node")
ProtoInstance162.setDEF("N7")
fieldValue163 = x3d.fieldValue()
fieldValue163.setName("translation")
fieldValue163.setValue("3.75106 -0.0794556 0")

ProtoInstance162.addFieldValue(fieldValue163)

fieldValue161.addChild(ProtoInstance162)

ProtoInstance158.addFieldValue(fieldValue161)

Transform121.addChild(ProtoInstance158)
ProtoInstance164 = x3d.ProtoInstance()
ProtoInstance164.setName("Route")
fieldValue165 = x3d.fieldValue()
fieldValue165.setName("output")
ProtoInstance166 = x3d.ProtoInstance()
ProtoInstance166.setName("Node")
ProtoInstance166.setUSE("N5")

fieldValue165.addChild(ProtoInstance166)

ProtoInstance164.addFieldValue(fieldValue165)
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("input")
ProtoInstance168 = x3d.ProtoInstance()
ProtoInstance168.setName("Node")
ProtoInstance168.setUSE("N7")

fieldValue167.addChild(ProtoInstance168)

ProtoInstance164.addFieldValue(fieldValue167)

Transform121.addChild(ProtoInstance164)
ProtoInstance169 = x3d.ProtoInstance()
ProtoInstance169.setName("Route")
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("output")
ProtoInstance171 = x3d.ProtoInstance()
ProtoInstance171.setName("Node")
ProtoInstance171.setUSE("N6")

fieldValue170.addChild(ProtoInstance171)

ProtoInstance169.addFieldValue(fieldValue170)
fieldValue172 = x3d.fieldValue()
fieldValue172.setName("input")
ProtoInstance173 = x3d.ProtoInstance()
ProtoInstance173.setName("Node")
ProtoInstance173.setDEF("N8")
fieldValue174 = x3d.fieldValue()
fieldValue174.setName("translation")
fieldValue174.setValue("7.68077 1.21228 0")

ProtoInstance173.addFieldValue(fieldValue174)

fieldValue172.addChild(ProtoInstance173)

ProtoInstance169.addFieldValue(fieldValue172)

Transform121.addChild(ProtoInstance169)
ProtoInstance175 = x3d.ProtoInstance()
ProtoInstance175.setName("Route")
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("output")
ProtoInstance177 = x3d.ProtoInstance()
ProtoInstance177.setName("Node")
ProtoInstance177.setUSE("N7")

fieldValue176.addChild(ProtoInstance177)

ProtoInstance175.addFieldValue(fieldValue176)
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("input")
ProtoInstance179 = x3d.ProtoInstance()
ProtoInstance179.setName("Node")
ProtoInstance179.setUSE("N8")

fieldValue178.addChild(ProtoInstance179)

ProtoInstance175.addFieldValue(fieldValue178)

Transform121.addChild(ProtoInstance175)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.setName("Node")
ProtoInstance180.setUSE("N1")

Transform121.addChild(ProtoInstance180)
ProtoInstance181 = x3d.ProtoInstance()
ProtoInstance181.setName("Node")
ProtoInstance181.setUSE("N2")

Transform121.addChild(ProtoInstance181)
ProtoInstance182 = x3d.ProtoInstance()
ProtoInstance182.setName("Node")
ProtoInstance182.setUSE("N3")

Transform121.addChild(ProtoInstance182)
ProtoInstance183 = x3d.ProtoInstance()
ProtoInstance183.setName("Node")
ProtoInstance183.setUSE("N4")

Transform121.addChild(ProtoInstance183)
ProtoInstance184 = x3d.ProtoInstance()
ProtoInstance184.setName("Node")
ProtoInstance184.setUSE("N5")

Transform121.addChild(ProtoInstance184)
ProtoInstance185 = x3d.ProtoInstance()
ProtoInstance185.setName("Node")
ProtoInstance185.setUSE("N6")

Transform121.addChild(ProtoInstance185)
ProtoInstance186 = x3d.ProtoInstance()
ProtoInstance186.setName("Node")
ProtoInstance186.setUSE("N7")

Transform121.addChild(ProtoInstance186)
ProtoInstance187 = x3d.ProtoInstance()
ProtoInstance187.setName("Node")
ProtoInstance187.setUSE("N8")

Transform121.addChild(ProtoInstance187)

Scene9.addChild(Transform121)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/Connectors.new.graalpy.x3d")
X3D0.toFileJSON("../data/Connectors.new.graalpy.x3dj")
