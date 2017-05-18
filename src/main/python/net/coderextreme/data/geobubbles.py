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
meta6 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/geobubbles.x3d")
head1.addMeta(meta6)
meta7 = metaObject().setName("description").setContent("geo bubbles")
head1.addMeta(meta7)
X3D0.setHead(head1)
Scene8 = SceneObject()

Scene8.addComments(CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"))

Scene8.addComments(CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"))
GeoViewpoint9 = GeoViewpointObject().setDEF("Tour").setPosition([0,0,4]).setOrientation([1,0,0,0]).setDescription("Tour Views")
Scene8.addChild(GeoViewpoint9)
Background10 = BackgroundObject().setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]).setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]).setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]).setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]).setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]).setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])
Scene8.addChild(Background10)
Transform11 = TransformObject()
Shape12 = ShapeObject()
Sphere13 = SphereObject()
Shape12.setGeometry(Sphere13)
Appearance14 = AppearanceObject()
Material15 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance14.setMaterial(Material15)
Shape12.setAppearance(Appearance14)
Transform11.addChild(Shape12)
Scene8.addChild(Transform11)
TimeSensor16 = TimeSensorObject().setDEF("TourTime").setCycleInterval(5).setLoop(True)
Scene8.addChild(TimeSensor16)
GeoPositionInterpolator17 = GeoPositionInterpolatorObject().setDEF("TourPosition").setKey([0,1]).setKeyValue([0.0015708,0,4,0,0.0015708,4])
Scene8.addChild(GeoPositionInterpolator17)
Script18 = ScriptObject().setDEF("RandomTourTime")
field19 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script18.addField(field19)
field20 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("val").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
Script18.addField(field20)
field21 = fieldObject().setType(fieldObject.TYPE_MFVEC3D).setName("positions").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4")
Script18.addField(field21)
field22 = fieldObject().setType(fieldObject.TYPE_MFVEC3D).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4")
Script18.addField(field22)

Script18.setSourceCode("ecmascript:\n"+
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
Scene8.addChild(Script18)
ROUTE23 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle")
Scene8.addChild(ROUTE23)
ROUTE24 = ROUTEObject().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue")
Scene8.addChild(ROUTE24)
ROUTE25 = ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction")
Scene8.addChild(ROUTE25)
ROUTE26 = ROUTEObject().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")
Scene8.addChild(ROUTE26)
X3D0.setScene(Scene8)

X3D0.toFileX3D("../data/geobubbles.new.x3d")
