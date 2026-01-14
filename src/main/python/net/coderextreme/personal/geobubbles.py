print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.3"
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
meta5.content = "manual"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/geobubbles.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "description"
meta7.content = "geo bubbles"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
"""Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"""
"""PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"""
GeoViewpoint9 = x3d.GeoViewpoint()
GeoViewpoint9.DEF = "Tour"
GeoViewpoint9.position = [0,0,4]
GeoViewpoint9.orientation = [1,0,0,0]
GeoViewpoint9.description = "Tour Views"

Scene8.children.append(GeoViewpoint9)
Background10 = x3d.Background()
Background10.backUrl = ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]
Background10.bottomUrl = ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]
Background10.frontUrl = ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]
Background10.leftUrl = ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]
Background10.rightUrl = ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]
Background10.topUrl = ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]

Scene8.children.append(Background10)
Transform11 = x3d.Transform()
Shape12 = x3d.Shape()
Sphere13 = x3d.Sphere()

Shape12.geometry = Sphere13
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.diffuseColor = [0.7,0.7,0.7]
Material15.specularColor = [0.5,0.5,0.5]

Appearance14.material = Material15

Shape12.appearance = Appearance14

Transform11.children.append(Shape12)

Scene8.children.append(Transform11)
TimeSensor16 = x3d.TimeSensor()
TimeSensor16.DEF = "TourTime"
TimeSensor16.cycleInterval = 5
TimeSensor16.loop = True

Scene8.children.append(TimeSensor16)
GeoPositionInterpolator17 = x3d.GeoPositionInterpolator()
GeoPositionInterpolator17.DEF = "TourPosition"
GeoPositionInterpolator17.key = [0,1]

Scene8.children.append(GeoPositionInterpolator17)
Script18 = x3d.Script()
Script18.DEF = "RandomTourTime"
field19 = x3d.field()
field19.name = "set_cycle"
field19.accessType = "inputOnly"
field19.type = "SFTime"

Script18.field.append(field19)
field20 = x3d.field()
field20.name = "val"
field20.accessType = "inputOutput"
field20.type = "SFFloat"
field20.value = 0

Script18.field.append(field20)
field21 = x3d.field()
field21.name = "positions"
field21.accessType = "inputOutput"
field21.type = "MFVec3d"

Script18.field.append(field21)
field22 = x3d.field()
field22.name = "position"
field22.accessType = "inputOutput"
field22.type = "MFVec3d"

Script18.field.append(field22)

Script18.sourceCode = '''ecmascript:\n"+
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

Scene8.children.append(Script18)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromNode = "TourTime"
ROUTE23.fromField = "cycleTime"
ROUTE23.toNode = "RandomTourTime"
ROUTE23.toField = "set_cycle"

Scene8.children.append(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "RandomTourTime"
ROUTE24.fromField = "position"
ROUTE24.toNode = "TourPosition"
ROUTE24.toField = "keyValue"

Scene8.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "TourTime"
ROUTE25.fromField = "fraction_changed"
ROUTE25.toNode = "TourPosition"
ROUTE25.toField = "set_fraction"

Scene8.children.append(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.fromNode = "TourPosition"
ROUTE26.fromField = "geovalue_changed"
ROUTE26.toNode = "Tour"
ROUTE26.toField = "set_position"

Scene8.children.append(ROUTE26)

X3D0.Scene = Scene8
f = open("../personal/geobubbles.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/geobubbles.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
