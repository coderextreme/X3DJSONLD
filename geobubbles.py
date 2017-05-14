from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
component2 = componentObject().setName("Geospatial").setLevel(1)
head1.addComponent(component2)
meta3 = metaObject().setName("title").setContent("geobubbles.x3d")
head1.addMeta(meta3)
meta4 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta4)
meta5 = metaObject().setName("generator").setContent("manual")
head1.addMeta(meta5)
meta6 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/geobubbles.x3d")
head1.addMeta(meta6)
meta7 = metaObject().setName("description").setContent("geo bubbles")
head1.addMeta(meta7)
meta8 = metaObject().setName("translated").setContent("14 May 2017")
head1.addMeta(meta8)
meta9 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta9)
meta10 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta10)
meta11 = metaObject().setName("translated").setContent("14 May 2017")
head1.addMeta(meta11)
meta12 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta12)
X3D0.setHead(head1)
Scene13 = SceneObject()

Scene13.addComments(CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"))

Scene13.addComments(CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"))
GeoViewpoint14 = GeoViewpointObject().setDEF("Tour").setPosition([0,0,4]).setOrientation([1,0,0,0]).setDescription("Tour Views")
Scene13.addChild(GeoViewpoint14)
Background15 = BackgroundObject().setBackUrl(["cubemap/BK.png","http://coderextreme.net/X3DJSONLD/cubemap/BK.png"]).setBottomUrl(["cubemap/BT.png","http://coderextreme.net/X3DJSONLD/cubemap/BT.png"]).setFrontUrl(["cubemap/FR.png","http://coderextreme.net/X3DJSONLD/cubemap/FR.png"]).setLeftUrl(["cubemap/LF.png","http://coderextreme.net/X3DJSONLD/cubemap/LF.png"]).setRightUrl(["cubemap/RT.png","http://coderextreme.net/X3DJSONLD/cubemap/RT.png"]).setTopUrl(["cubemap/TP.png","http://coderextreme.net/X3DJSONLD/cubemap/TP.png"])
Scene13.addChild(Background15)
Transform16 = TransformObject()
Shape17 = ShapeObject()
Sphere18 = SphereObject()
Shape17.setGeometry(Sphere18)
Appearance19 = AppearanceObject()
Material20 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance19.setMaterial(Material20)
Shape17.setAppearance(Appearance19)
Transform16.addChild(Shape17)
Scene13.addChild(Transform16)
TimeSensor21 = TimeSensorObject().setDEF("TourTime").setCycleInterval(5).setLoop(True)
Scene13.addChild(TimeSensor21)
GeoPositionInterpolator22 = GeoPositionInterpolatorObject().setDEF("TourPosition").setKey([0,1]).setKeyValue([0.0015708,0,4,0,0.0015708,4])
Scene13.addChild(GeoPositionInterpolator22)
Script23 = ScriptObject().setDEF("RandomTourTime")
field24 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script23.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("val").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
Script23.addField(field25)
field26 = fieldObject().setType(fieldObject.TYPE_MFVEC3D).setName("positions").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4")
Script23.addField(field26)
field27 = fieldObject().setType(fieldObject.TYPE_MFVEC3D).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4")
Script23.addField(field27)

Script23.setSourceCode("ecmascript:\n"+
"\n"+
"               function set_cycle(value) {\n"+
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo\n"+
"                        var ov = val;\n"+
"			// Browser.print('old '+ov);\n"+
"                        do {\n"+
"                                val = Math.floor(Math.random()*2);\n"+
"                                var vc = val;\n"+
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);\n"+
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);\n"+
"			// Browser.println(positions[ov]);\n"+
"			// Browser.println(positions[vc]);\n"+
"                        position = new MFVec3d();\n"+
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"               }\n"+
"")
Scene13.addChild(Script23)
ROUTE28 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle")
Scene13.addChild(ROUTE28)
ROUTE29 = ROUTEObject().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue")
Scene13.addChild(ROUTE29)
ROUTE30 = ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction")
Scene13.addChild(ROUTE30)
ROUTE31 = ROUTEObject().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")
Scene13.addChild(ROUTE31)
X3D0.setScene(Scene13)

X3D0.toFileX3D("geobubbles.new.x3d")
