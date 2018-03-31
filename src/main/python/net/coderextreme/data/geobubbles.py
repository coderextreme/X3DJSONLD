# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

component2 = componentObject()
component2.setName("Geospatial")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = metaObject()
meta3.setName("title")
meta3.setContent("geobubbles.x3d")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("generator")
meta5.setContent("manual")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/geobubbles.x3d")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("description")
meta7.setContent("geo bubbles")

head1.addMeta(meta7)
X3D0.setHead(head1)
Scene8 = SceneObject()


Scene8.addComments(CommentsBlock("""Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"""))

Scene8.addComments(CommentsBlock("""PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"""))
GeoViewpoint9 = GeoViewpointObject()
GeoViewpoint9.setDEF("Tour")
GeoViewpoint9.setPosition([0,0,4])
GeoViewpoint9.setOrientation([1,0,0,0])
GeoViewpoint9.setDescription("Tour Views")

Scene8.addChild(GeoViewpoint9)
Background10 = BackgroundObject()
Background10.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])
Background10.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])
Background10.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])
Background10.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])
Background10.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])
Background10.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])

Scene8.addChild(Background10)
Transform11 = TransformObject()

Shape12 = ShapeObject()

Sphere13 = SphereObject()

Shape12.setGeometry(Sphere13)
Appearance14 = AppearanceObject()

Material15 = MaterialObject()
Material15.setDiffuseColor([0.7,0.7,0.7])
Material15.setSpecularColor([0.5,0.5,0.5])

Appearance14.setMaterial(Material15)
Shape12.setAppearance(Appearance14)
Transform11.addChild(Shape12)
Scene8.addChild(Transform11)
TimeSensor16 = TimeSensorObject()
TimeSensor16.setDEF("TourTime")
TimeSensor16.setCycleInterval(5)
TimeSensor16.setLoop(True)

Scene8.addChild(TimeSensor16)
GeoPositionInterpolator17 = GeoPositionInterpolatorObject()
GeoPositionInterpolator17.setDEF("TourPosition")
GeoPositionInterpolator17.setKey([0,1])
GeoPositionInterpolator17.setKeyValue([0.0015708,0,4,0,0.0015708,4])

Scene8.addChild(GeoPositionInterpolator17)
Script18 = ScriptObject()
Script18.setDEF("RandomTourTime")

field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFTIME)
field19.setName("set_cycle")
field19.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script18.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFFLOAT)
field20.setName("val")
field20.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field20.setValue("0")

Script18.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_MFVEC3D)
field21.setName("positions")
field21.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field21.setValue("0.0015708 0 4 0 0.0015708 4")

Script18.addField(field21)
field22 = fieldObject()
field22.setType(fieldObject.TYPE_MFVEC3D)
field22.setName("position")
field22.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field22.setValue("0.0015708 0 4 0 0.0015708 4")

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
ROUTE23 = ROUTEObject()
ROUTE23.setFromNode("TourTime")
ROUTE23.setFromField("cycleTime")
ROUTE23.setToNode("RandomTourTime")
ROUTE23.setToField("set_cycle")

Scene8.addChild(ROUTE23)
ROUTE24 = ROUTEObject()
ROUTE24.setFromNode("RandomTourTime")
ROUTE24.setFromField("position")
ROUTE24.setToNode("TourPosition")
ROUTE24.setToField("keyValue")

Scene8.addChild(ROUTE24)
ROUTE25 = ROUTEObject()
ROUTE25.setFromNode("TourTime")
ROUTE25.setFromField("fraction_changed")
ROUTE25.setToNode("TourPosition")
ROUTE25.setToField("set_fraction")

Scene8.addChild(ROUTE25)
ROUTE26 = ROUTEObject()
ROUTE26.setFromNode("TourPosition")
ROUTE26.setFromField("geovalue_changed")
ROUTE26.setToNode("Tour")
ROUTE26.setToField("set_position")

Scene8.addChild(ROUTE26)
X3D0.setScene(Scene8)

X3D0.toFileX3D("../data/geobubbles.new.x3d")
