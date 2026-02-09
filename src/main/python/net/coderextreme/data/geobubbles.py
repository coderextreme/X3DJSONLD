print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Geospatial"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "geobubbles.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "manual"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
GeoViewpoint8 = x3d.GeoViewpoint(DEF="Tour")
GeoViewpoint8.description = "Tour Views"
GeoViewpoint8.position = [0.000213314646318662,0.00135748535376003,3.99999812897295]

Scene7.children.append(GeoViewpoint8)
Background9 = x3d.Background()
Background9.frontUrl = ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]
Background9.backUrl = ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]
Background9.leftUrl = ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]
Background9.rightUrl = ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]
Background9.topUrl = ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]
Background9.bottomUrl = ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]

Scene7.children.append(Background9)
Transform10 = x3d.Transform()
Shape11 = x3d.Shape()
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()
Material13.diffuseColor = [0.7,0.7,0.7]
Material13.specularColor = [0.5,0.5,0.5]

Appearance12.material = Material13

Shape11.appearance = Appearance12
Sphere14 = x3d.Sphere()

Shape11.geometry = Sphere14

Transform10.children.append(Shape11)

Scene7.children.append(Transform10)
TimeSensor15 = x3d.TimeSensor(DEF="TourTime")
TimeSensor15.cycleInterval = 5
TimeSensor15.loop = True

Scene7.children.append(TimeSensor15)
GeoPositionInterpolator16 = x3d.GeoPositionInterpolator(DEF="TourPosition")
GeoPositionInterpolator16.key = [0,1]
GeoPositionInterpolator16.keyValue = [(0.0015708, 0, 4),(0, 0.0015708, 4)]

Scene7.children.append(GeoPositionInterpolator16)
Script17 = x3d.Script(DEF="RandomTourTime")
field18 = x3d.field()
field18.accessType = "inputOnly"
field18.type = "SFTime"
field18.name = "set_cycle"

Script17.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFFloat"
field19.name = "val"

Script17.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "MFVec3d"
field20.name = "positions"
field20.value = [(0.0015708, 0, 4),(0, 0.0015708, 4)]

Script17.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOutput"
field21.type = "MFVec3d"
field21.name = "position"
field21.value = [(0.0015708, 0, 4),(0, 0.0015708, 4)]

Script17.field.append(field21)

Script17.sourceCode = '''ecmascript:\n"+
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
"               }'''

Scene7.children.append(Script17)
ROUTE22 = x3d.ROUTE()
ROUTE22.fromNode = "TourTime"
ROUTE22.fromField = "cycleTime"
ROUTE22.toNode = "RandomTourTime"
ROUTE22.toField = "set_cycle"

Scene7.children.append(ROUTE22)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromNode = "RandomTourTime"
ROUTE23.fromField = "position_changed"
ROUTE23.toNode = "TourPosition"
ROUTE23.toField = "set_keyValue"

Scene7.children.append(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "TourTime"
ROUTE24.fromField = "fraction_changed"
ROUTE24.toNode = "TourPosition"
ROUTE24.toField = "set_fraction"

Scene7.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "TourPosition"
ROUTE25.fromField = "geovalue_changed"
ROUTE25.toNode = "Tour"
ROUTE25.toField = "set_position"

Scene7.children.append(ROUTE25)

X3D0.Scene = Scene7
f = open("../data/geobubbles.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/geobubbles.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/geobubbles.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
