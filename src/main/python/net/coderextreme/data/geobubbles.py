import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Geospatial")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("geobubbles.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("generator")
meta5.setContent("manual")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("geo bubbles")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = x3d.Scene()
#Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
#PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
GeoViewpoint9 = x3d.GeoViewpoint()
GeoViewpoint9.setDEF("Tour")
GeoViewpoint9.setPosition(x3d.doubleToDouble([0,0,4]))
GeoViewpoint9.setOrientation(x3d.doubleToFloat([1,0,0,0]))
GeoViewpoint9.setDescription("Tour Views")

Scene8.addChildren(GeoViewpoint9)
Background10 = x3d.Background()
Background10.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"])
Background10.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"])
Background10.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"])
Background10.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"])
Background10.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"])
Background10.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"])

Scene8.addChildren(Background10)
Transform11 = x3d.Transform()
Shape12 = x3d.Shape()
Sphere13 = x3d.Sphere()

Shape12.setGeometry(Sphere13)
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material15.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance14.setMaterial(Material15)

Shape12.setAppearance(Appearance14)

Transform11.addChild(Shape12)

Scene8.addChildren(Transform11)
TimeSensor16 = x3d.TimeSensor()
TimeSensor16.setDEF("TourTime")
TimeSensor16.setCycleInterval(5)
TimeSensor16.setLoop(True)

Scene8.addChildren(TimeSensor16)
GeoPositionInterpolator17 = x3d.GeoPositionInterpolator()
GeoPositionInterpolator17.setDEF("TourPosition")
GeoPositionInterpolator17.setKey(x3d.doubleToFloat([0,1]))
GeoPositionInterpolator17.setKeyValue(x3d.doubleToDouble([0.0015708,0,4,0,0.0015708,4]))

Scene8.addChildren(GeoPositionInterpolator17)
Script18 = x3d.Script()
Script18.setDEF("RandomTourTime")
field19 = x3d.field()
field19.setName("set_cycle")
field19.setAccessType("inputOnly")
field19.setType("SFTime")

Script18.addField(field19)
field20 = x3d.field()
field20.setName("val")
field20.setAccessType("inputOutput")
field20.setType("SFFloat")
field20.setValue("0")

Script18.addField(field20)
field21 = x3d.field()
field21.setName("positions")
field21.setAccessType("inputOutput")
field21.setType("MFVec3d")
field21.setValue("0.0015708 0 4 0 0.0015708 4")

Script18.addField(field21)
field22 = x3d.field()
field22.setName("position")
field22.setAccessType("inputOutput")
field22.setType("MFVec3d")
field22.setValue("0.0015708 0 4 0 0.0015708 4")

Script18.addField(field22)

Script18.setSourceCode('''ecmascript:\n"+
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
"               }''')

Scene8.addChildren(Script18)
ROUTE23 = x3d.ROUTE()
ROUTE23.setFromNode("TourTime")
ROUTE23.setFromField("cycleTime")
ROUTE23.setToNode("RandomTourTime")
ROUTE23.setToField("set_cycle")

Scene8.addChildren(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.setFromNode("RandomTourTime")
ROUTE24.setFromField("position")
ROUTE24.setToNode("TourPosition")
ROUTE24.setToField("keyValue")

Scene8.addChildren(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.setFromNode("TourTime")
ROUTE25.setFromField("fraction_changed")
ROUTE25.setToNode("TourPosition")
ROUTE25.setToField("set_fraction")

Scene8.addChildren(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.setFromNode("TourPosition")
ROUTE26.setFromField("geovalue_changed")
ROUTE26.setToNode("Tour")
ROUTE26.setToField("set_position")

Scene8.addChildren(ROUTE26)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/geobubbles.new.python.x3d")
X3D0.toFileJSON("../data/geobubbles.new.python.json")
