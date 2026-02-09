print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "flowers2.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "23 January 2005"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "Mon, 09 Feb 2026 07:09:54 GMT"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
ProtoDeclare9 = x3d.ProtoDeclare()
ProtoDeclare9.name = "orbit"
ProtoInterface10 = x3d.ProtoInterface()
field11 = x3d.field()
field11.accessType = "inputOutput"
field11.type = "SFVec3f"
field11.name = "translation"
field11.value = [-8,0,0]

ProtoInterface10.field.append(field11)
field12 = x3d.field()
field12.accessType = "inputOutput"
field12.type = "SFColor"
field12.name = "diffuseColor"
field12.value = [1,0.5,0]

ProtoInterface10.field.append(field12)
field13 = x3d.field()
field13.accessType = "inputOutput"
field13.type = "SFColor"
field13.name = "specularColor"
field13.value = [1,0.5,0]

ProtoInterface10.field.append(field13)
field14 = x3d.field()
field14.accessType = "inputOutput"
field14.type = "SFFloat"
field14.name = "transparency"
field14.value = 0.75

ProtoInterface10.field.append(field14)

ProtoDeclare9.ProtoInterface = ProtoInterface10
ProtoBody15 = x3d.ProtoBody()
Group16 = x3d.Group()
TimeSensor17 = x3d.TimeSensor(DEF="Clock")
TimeSensor17.cycleInterval = 16
TimeSensor17.loop = True

Group16.children.append(TimeSensor17)
OrientationInterpolator18 = x3d.OrientationInterpolator(DEF="OrbitPath")
OrientationInterpolator18.key = [0,0.5,1]
OrientationInterpolator18.keyValue = [(1, 0, 0, 0),(1, 0, 0, 3.14),(1, 0, 0, 6.28)]

Group16.children.append(OrientationInterpolator18)
Transform19 = x3d.Transform(DEF="OrbitTransform")
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
IS23 = x3d.IS()
connect24 = x3d.connect()
connect24.nodeField = "diffuseColor"
connect24.protoField = "diffuseColor"

IS23.connect.append(connect24)
connect25 = x3d.connect()
connect25.nodeField = "specularColor"
connect25.protoField = "specularColor"

IS23.connect.append(connect25)
connect26 = x3d.connect()
connect26.nodeField = "transparency"
connect26.protoField = "transparency"

IS23.connect.append(connect26)

Material22.IS = IS23

Appearance21.material = Material22

Shape20.appearance = Appearance21
IndexedFaceSet27 = x3d.IndexedFaceSet(DEF="Orbit")
IndexedFaceSet27.ccw = False
IndexedFaceSet27.convex = False
IndexedFaceSet27.coordIndex = [0,1,2,-1]
Coordinate28 = x3d.Coordinate(DEF="OrbitCoordinates")
Coordinate28.point = [(0, 0, 1),(0, 1, 0),(1, 0, 0)]

IndexedFaceSet27.coord = Coordinate28

Shape20.geometry = IndexedFaceSet27

Transform19.children.append(Shape20)
IS29 = x3d.IS()
connect30 = x3d.connect()
connect30.nodeField = "translation"
connect30.protoField = "translation"

IS29.connect.append(connect30)

Transform19.IS = IS29

Group16.children.append(Transform19)
Script31 = x3d.Script(DEF="OrbitScript")
field32 = x3d.field()
field32.accessType = "inputOnly"
field32.type = "SFFloat"
field32.name = "set_fraction"

Script31.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "MFVec3f"
field33.name = "coordinates"

Script31.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "MFInt32"
field34.name = "coordIndexes"

Script31.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.name = "e"
field35.value = 5

Script31.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.name = "f"
field36.value = 5

Script31.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.name = "g"
field37.value = 5

Script31.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.name = "h"
field38.value = 5

Script31.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFInt32"
field39.name = "resolution"
field39.value = 50

Script31.field.append(field39)

Script31.sourceCode = '''ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}\n"+
"\n"+
"			function set_fraction(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 1:\n"+
"					f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 2:\n"+
"					g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				if (e < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (f < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (g < 1) {\n"+
"					g = 4;\n"+
"				}\n"+
"				if (h < 1) {\n"+
"					h = 4;\n"+
"				}\n"+
"				generateCoordinates();\n"+
"			}'''

Group16.children.append(Script31)

ProtoBody15.children.append(Group16)
ROUTE40 = x3d.ROUTE()
ROUTE40.fromNode = "OrbitScript"
ROUTE40.fromField = "coordIndexes_changed"
ROUTE40.toNode = "Orbit"
ROUTE40.toField = "set_coordIndex"

ProtoBody15.children.append(ROUTE40)
ROUTE41 = x3d.ROUTE()
ROUTE41.fromNode = "OrbitScript"
ROUTE41.fromField = "coordinates_changed"
ROUTE41.toNode = "OrbitCoordinates"
ROUTE41.toField = "set_point"

ProtoBody15.children.append(ROUTE41)
ROUTE42 = x3d.ROUTE()
ROUTE42.fromNode = "Clock"
ROUTE42.fromField = "fraction_changed"
ROUTE42.toNode = "OrbitScript"
ROUTE42.toField = "set_fraction"

ProtoBody15.children.append(ROUTE42)
ROUTE43 = x3d.ROUTE()
ROUTE43.fromNode = "OrbitPath"
ROUTE43.fromField = "value_changed"
ROUTE43.toNode = "OrbitTransform"
ROUTE43.toField = "set_rotation"

ProtoBody15.children.append(ROUTE43)
ROUTE44 = x3d.ROUTE()
ROUTE44.fromNode = "Clock"
ROUTE44.fromField = "fraction_changed"
ROUTE44.toNode = "OrbitPath"
ROUTE44.toField = "set_fraction"

ProtoBody15.children.append(ROUTE44)

ProtoDeclare9.ProtoBody = ProtoBody15

Scene8.children.append(ProtoDeclare9)
NavigationInfo45 = x3d.NavigationInfo()

Scene8.children.append(NavigationInfo45)
Viewpoint46 = x3d.Viewpoint()
Viewpoint46.description = "Two mathematical orbitals"
Viewpoint46.position = [0,0,50]

Scene8.children.append(Viewpoint46)
Group47 = x3d.Group()
DirectionalLight48 = x3d.DirectionalLight()
DirectionalLight48.direction = [1,1,1]

Group47.children.append(DirectionalLight48)
ProtoInstance49 = x3d.ProtoInstance()
ProtoInstance49.name = "orbit"

Group47.children.append(ProtoInstance49)
ProtoInstance50 = x3d.ProtoInstance()
ProtoInstance50.name = "orbit"
fieldValue51 = x3d.fieldValue()
fieldValue51.name = "translation"
fieldValue51.value = "8 0 0"

ProtoInstance50.fieldValue.append(fieldValue51)
fieldValue52 = x3d.fieldValue()
fieldValue52.name = "diffuseColor"
fieldValue52.value = "0 0.5 1"

ProtoInstance50.fieldValue.append(fieldValue52)
fieldValue53 = x3d.fieldValue()
fieldValue53.name = "specularColor"
fieldValue53.value = "0 0.5 1"

ProtoInstance50.fieldValue.append(fieldValue53)
fieldValue54 = x3d.fieldValue()
fieldValue54.name = "transparency"
fieldValue54.value = "0.5"

ProtoInstance50.fieldValue.append(fieldValue54)

Group47.children.append(ProtoInstance50)

Scene8.children.append(Group47)

X3D0.Scene = Scene8
f = open("../data/flowers2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flowers2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/flowers2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
