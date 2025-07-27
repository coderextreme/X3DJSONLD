import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("x3dconnectorProto.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Lost, Doug Sanden I think")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("Unknown")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("modified")
meta5.setContent("July 30 2023")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("manual")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("identifier")
meta7.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("description")
meta8.setContent("a generic proto to connect two objects")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("license")
meta9.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.setTitle("Connector Proto")

Scene10.addChild(WorldInfo11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.setPosition(x3d.doubleToFloat([0,0,5]))
Viewpoint12.setDescription("Only Viewpoint")

Scene10.addChild(Viewpoint12)
Background13 = x3d.Background()
Background13.setSkyColor(x3d.doubleToFloat([0.4,0.4,0.4]))

Scene10.addChild(Background13)
Transform14 = x3d.Transform()
Transform14.setDEF("G1")
Shape15 = x3d.Shape()
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.setDiffuseColor(x3d.doubleToFloat([0.7,0.2,0.2]))

Appearance16.setMaterial(Material17)

Shape15.setAppearance(Appearance16)
Sphere18 = x3d.Sphere()
Sphere18.setRadius(0.1)

Shape15.setGeometry(Sphere18)

Transform14.addChild(Shape15)
PlaneSensor19 = x3d.PlaneSensor()
PlaneSensor19.setDescription("Grab to move")
PlaneSensor19.setDEF("PS1")

Transform14.addChild(PlaneSensor19)
ROUTE20 = x3d.ROUTE()
ROUTE20.setFromNode("PS1")
ROUTE20.setFromField("translation_changed")
ROUTE20.setToNode("G1")
ROUTE20.setToField("set_translation")

Transform14.addChild(ROUTE20)

Scene10.addChild(Transform14)
Transform21 = x3d.Transform()
Transform21.setDEF("G2")
Transform21.setTranslation(x3d.doubleToFloat([1,-1,0.01]))
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.setDiffuseColor(x3d.doubleToFloat([0.2,0.7,0.2]))

Appearance23.setMaterial(Material24)

Shape22.setAppearance(Appearance23)
Sphere25 = x3d.Sphere()
Sphere25.setRadius(0.1)

Shape22.setGeometry(Sphere25)

Transform21.addChild(Shape22)
PlaneSensor26 = x3d.PlaneSensor()
PlaneSensor26.setDescription("Grab to move")
PlaneSensor26.setOffset(x3d.doubleToFloat([1,-1,0.01]))
PlaneSensor26.setDEF("PS2")

Transform21.addChild(PlaneSensor26)
ROUTE27 = x3d.ROUTE()
ROUTE27.setFromNode("PS2")
ROUTE27.setFromField("translation_changed")
ROUTE27.setToNode("G2")
ROUTE27.setToField("set_translation")

Transform21.addChild(ROUTE27)

Scene10.addChild(Transform21)
Transform28 = x3d.Transform()
Transform28.setDEF("G3")
Transform28.setTranslation(x3d.doubleToFloat([1,1,0.01]))
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
Material31.setDiffuseColor(x3d.doubleToFloat([0.2,0.7,0.2]))

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
Sphere32 = x3d.Sphere()
Sphere32.setRadius(0.1)

Shape29.setGeometry(Sphere32)

Transform28.addChild(Shape29)
PlaneSensor33 = x3d.PlaneSensor()
PlaneSensor33.setDescription("Grab to move")
PlaneSensor33.setOffset(x3d.doubleToFloat([1,1,0.01]))
PlaneSensor33.setDEF("PS3")

Transform28.addChild(PlaneSensor33)
ROUTE34 = x3d.ROUTE()
ROUTE34.setFromNode("PS3")
ROUTE34.setFromField("translation_changed")
ROUTE34.setToNode("G3")
ROUTE34.setToField("set_translation")

Transform28.addChild(ROUTE34)

Scene10.addChild(Transform28)
Transform35 = x3d.Transform()
Transform35.setDEF("G4")
Transform35.setTranslation(x3d.doubleToFloat([-1,1,0.01]))
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.setDiffuseColor(x3d.doubleToFloat([0.2,0.7,0.2]))

Appearance37.setMaterial(Material38)

Shape36.setAppearance(Appearance37)
Sphere39 = x3d.Sphere()
Sphere39.setRadius(0.1)

Shape36.setGeometry(Sphere39)

Transform35.addChild(Shape36)
PlaneSensor40 = x3d.PlaneSensor()
PlaneSensor40.setDescription("Grab to move")
PlaneSensor40.setOffset(x3d.doubleToFloat([-1,1,0.01]))
PlaneSensor40.setDEF("PS4")

Transform35.addChild(PlaneSensor40)
ROUTE41 = x3d.ROUTE()
ROUTE41.setFromNode("PS4")
ROUTE41.setFromField("translation_changed")
ROUTE41.setToNode("G4")
ROUTE41.setToField("set_translation")

Transform35.addChild(ROUTE41)

Scene10.addChild(Transform35)
Transform42 = x3d.Transform()
Transform42.setDEF("transC1")
Transform43 = x3d.Transform()
Transform43.setDEF("rotscaleC1")
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.setDiffuseColor(x3d.doubleToFloat([0.2,0.7,0.7]))
Material46.setTransparency(0.5)

Appearance45.setMaterial(Material46)

Shape44.setAppearance(Appearance45)
Cylinder47 = x3d.Cylinder()
Cylinder47.setRadius(0.05)

Shape44.setGeometry(Cylinder47)

Transform43.addChild(Shape44)

Transform42.addChild(Transform43)

Scene10.addChild(Transform42)
Transform48 = x3d.Transform()
Transform48.setDEF("transC2")
Transform49 = x3d.Transform()
Transform49.setDEF("rotscaleC2")
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.setDiffuseColor(x3d.doubleToFloat([0.2,0.7,0.7]))
Material52.setTransparency(0.5)

Appearance51.setMaterial(Material52)

Shape50.setAppearance(Appearance51)
Cylinder53 = x3d.Cylinder()
Cylinder53.setRadius(0.05)

Shape50.setGeometry(Cylinder53)

Transform49.addChild(Shape50)

Transform48.addChild(Transform49)

Scene10.addChild(Transform48)
Transform54 = x3d.Transform()
Transform54.setDEF("transC3")
Transform55 = x3d.Transform()
Transform55.setDEF("rotscaleC3")
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()
Material58.setDiffuseColor(x3d.doubleToFloat([0.2,0.7,0.7]))
Material58.setTransparency(0.5)

Appearance57.setMaterial(Material58)

Shape56.setAppearance(Appearance57)
Cylinder59 = x3d.Cylinder()
Cylinder59.setRadius(0.05)

Shape56.setGeometry(Cylinder59)

Transform55.addChild(Shape56)

Transform54.addChild(Transform55)

Scene10.addChild(Transform54)
ProtoDeclare60 = x3d.ProtoDeclare()
ProtoDeclare60.setName("x3dconnector")
ProtoInterface61 = x3d.ProtoInterface()
field62 = x3d.field()
field62.setName("startnode")
field62.setAccessType("initializeOnly")
field62.setType("SFNode")

ProtoInterface61.addField(field62)
field63 = x3d.field()
field63.setName("endnode")
field63.setAccessType("initializeOnly")
field63.setType("SFNode")

ProtoInterface61.addField(field63)
field64 = x3d.field()
field64.setName("transnode")
field64.setAccessType("initializeOnly")
field64.setType("SFNode")

ProtoInterface61.addField(field64)
field65 = x3d.field()
field65.setName("rotscalenode")
field65.setAccessType("initializeOnly")
field65.setType("SFNode")

ProtoInterface61.addField(field65)
field66 = x3d.field()
field66.setName("set_startpoint")
field66.setAccessType("inputOnly")
field66.setType("SFVec3f")

ProtoInterface61.addField(field66)
field67 = x3d.field()
field67.setName("set_endpoint")
field67.setAccessType("inputOnly")
field67.setType("SFVec3f")

ProtoInterface61.addField(field67)

ProtoDeclare60.setProtoInterface(ProtoInterface61)
ProtoBody68 = x3d.ProtoBody()
Script69 = x3d.Script()
Script69.setDEF("S1")
Script69.setDirectOutput(True)
field70 = x3d.field()
field70.setName("startnode")
field70.setAccessType("initializeOnly")
field70.setType("SFNode")

Script69.addField(field70)
field71 = x3d.field()
field71.setName("endnode")
field71.setAccessType("initializeOnly")
field71.setType("SFNode")

Script69.addField(field71)
field72 = x3d.field()
field72.setName("transnode")
field72.setAccessType("initializeOnly")
field72.setType("SFNode")

Script69.addField(field72)
field73 = x3d.field()
field73.setName("rotscalenode")
field73.setAccessType("initializeOnly")
field73.setType("SFNode")

Script69.addField(field73)
field74 = x3d.field()
field74.setName("set_startpoint")
field74.setAccessType("inputOnly")
field74.setType("SFVec3f")

Script69.addField(field74)
field75 = x3d.field()
field75.setName("set_endpoint")
field75.setAccessType("inputOnly")
field75.setType("SFVec3f")

Script69.addField(field75)
IS76 = x3d.IS()
connect77 = x3d.connect()
connect77.setNodeField("startnode")
connect77.setProtoField("startnode")

IS76.addConnect(connect77)
connect78 = x3d.connect()
connect78.setNodeField("endnode")
connect78.setProtoField("endnode")

IS76.addConnect(connect78)
connect79 = x3d.connect()
connect79.setNodeField("transnode")
connect79.setProtoField("transnode")

IS76.addConnect(connect79)
connect80 = x3d.connect()
connect80.setNodeField("rotscalenode")
connect80.setProtoField("rotscalenode")

IS76.addConnect(connect80)
connect81 = x3d.connect()
connect81.setNodeField("set_startpoint")
connect81.setProtoField("set_startpoint")

IS76.addConnect(connect81)
connect82 = x3d.connect()
connect82.setNodeField("set_endpoint")
connect82.setProtoField("set_endpoint")

IS76.addConnect(connect82)

Script69.setIS(IS76)

Script69.setSourceCode('''ecmascript:
        function recompute(startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		return;
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      transnode.translation = trafo.translation;
		      rotscalenode.rotation = trafo.rotation;
		      rotscalenode.scale = trafo.scale;
	      }
	}
        function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        }''')

ProtoBody68.addChild(Script69)

ProtoDeclare60.setProtoBody(ProtoBody68)

Scene10.addChild(ProtoDeclare60)
ProtoInstance83 = x3d.ProtoInstance()
ProtoInstance83.setName("x3dconnector")
ProtoInstance83.setDEF("connector1")
fieldValue84 = x3d.fieldValue()
fieldValue84.setName("startnode")
Transform85 = x3d.Transform()
Transform85.setUSE("G1")

fieldValue84.addChild(Transform85)

ProtoInstance83.addFieldValue(fieldValue84)
fieldValue86 = x3d.fieldValue()
fieldValue86.setName("endnode")
Transform87 = x3d.Transform()
Transform87.setUSE("G2")

fieldValue86.addChild(Transform87)

ProtoInstance83.addFieldValue(fieldValue86)
fieldValue88 = x3d.fieldValue()
fieldValue88.setName("transnode")
Transform89 = x3d.Transform()
Transform89.setUSE("transC1")

fieldValue88.addChild(Transform89)

ProtoInstance83.addFieldValue(fieldValue88)
fieldValue90 = x3d.fieldValue()
fieldValue90.setName("rotscalenode")
Transform91 = x3d.Transform()
Transform91.setUSE("rotscaleC1")

fieldValue90.addChild(Transform91)

ProtoInstance83.addFieldValue(fieldValue90)

Scene10.addChild(ProtoInstance83)
ProtoInstance92 = x3d.ProtoInstance()
ProtoInstance92.setName("x3dconnector")
ProtoInstance92.setDEF("connector2")
fieldValue93 = x3d.fieldValue()
fieldValue93.setName("startnode")
Transform94 = x3d.Transform()
Transform94.setUSE("G1")

fieldValue93.addChild(Transform94)

ProtoInstance92.addFieldValue(fieldValue93)
fieldValue95 = x3d.fieldValue()
fieldValue95.setName("endnode")
Transform96 = x3d.Transform()
Transform96.setUSE("G3")

fieldValue95.addChild(Transform96)

ProtoInstance92.addFieldValue(fieldValue95)
fieldValue97 = x3d.fieldValue()
fieldValue97.setName("transnode")
Transform98 = x3d.Transform()
Transform98.setUSE("transC2")

fieldValue97.addChild(Transform98)

ProtoInstance92.addFieldValue(fieldValue97)
fieldValue99 = x3d.fieldValue()
fieldValue99.setName("rotscalenode")
Transform100 = x3d.Transform()
Transform100.setUSE("rotscaleC2")

fieldValue99.addChild(Transform100)

ProtoInstance92.addFieldValue(fieldValue99)

Scene10.addChild(ProtoInstance92)
ProtoInstance101 = x3d.ProtoInstance()
ProtoInstance101.setName("x3dconnector")
ProtoInstance101.setDEF("connector3")
fieldValue102 = x3d.fieldValue()
fieldValue102.setName("startnode")
Transform103 = x3d.Transform()
Transform103.setUSE("G1")

fieldValue102.addChild(Transform103)

ProtoInstance101.addFieldValue(fieldValue102)
fieldValue104 = x3d.fieldValue()
fieldValue104.setName("endnode")
Transform105 = x3d.Transform()
Transform105.setUSE("G4")

fieldValue104.addChild(Transform105)

ProtoInstance101.addFieldValue(fieldValue104)
fieldValue106 = x3d.fieldValue()
fieldValue106.setName("transnode")
Transform107 = x3d.Transform()
Transform107.setUSE("transC3")

fieldValue106.addChild(Transform107)

ProtoInstance101.addFieldValue(fieldValue106)
fieldValue108 = x3d.fieldValue()
fieldValue108.setName("rotscalenode")
Transform109 = x3d.Transform()
Transform109.setUSE("rotscaleC3")

fieldValue108.addChild(Transform109)

ProtoInstance101.addFieldValue(fieldValue108)

Scene10.addChild(ProtoInstance101)
ROUTE110 = x3d.ROUTE()
ROUTE110.setFromNode("G1")
ROUTE110.setFromField("translation_changed")
ROUTE110.setToNode("connector1")
ROUTE110.setToField("set_startpoint")

Scene10.addChild(ROUTE110)
ROUTE111 = x3d.ROUTE()
ROUTE111.setFromNode("G2")
ROUTE111.setFromField("translation_changed")
ROUTE111.setToNode("connector1")
ROUTE111.setToField("set_endpoint")

Scene10.addChild(ROUTE111)
ROUTE112 = x3d.ROUTE()
ROUTE112.setFromNode("G1")
ROUTE112.setFromField("translation_changed")
ROUTE112.setToNode("connector2")
ROUTE112.setToField("set_startpoint")

Scene10.addChild(ROUTE112)
ROUTE113 = x3d.ROUTE()
ROUTE113.setFromNode("G3")
ROUTE113.setFromField("translation_changed")
ROUTE113.setToNode("connector2")
ROUTE113.setToField("set_endpoint")

Scene10.addChild(ROUTE113)
ROUTE114 = x3d.ROUTE()
ROUTE114.setFromNode("G1")
ROUTE114.setFromField("translation_changed")
ROUTE114.setToNode("connector3")
ROUTE114.setToField("set_startpoint")

Scene10.addChild(ROUTE114)
ROUTE115 = x3d.ROUTE()
ROUTE115.setFromNode("G4")
ROUTE115.setFromField("translation_changed")
ROUTE115.setToNode("connector3")
ROUTE115.setToField("set_endpoint")

Scene10.addChild(ROUTE115)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/x3dconnectorProto.new.graalpy.x3d")
X3D0.toFileJSON("../data/x3dconnectorProto.new.graalpy.json")
