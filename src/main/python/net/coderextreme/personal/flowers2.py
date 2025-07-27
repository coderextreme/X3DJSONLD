print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Scripting"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "flowers2.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "transcriber"
meta5.content = "John Carlson"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "23 January 2005"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "21 March 2018"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "description"
meta8.content = "2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "identifier"
meta9.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/flowers2.x3d"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "generator"
meta10.content = "manually written"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "license"
meta11.content = "https://coderextreme.net/X3DJSONLD/LICENSE"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
NavigationInfo13 = x3d.NavigationInfo()

Scene12.children.append(NavigationInfo13)
Viewpoint14 = x3d.Viewpoint()
Viewpoint14.description = "Two mathematical orbitals"
Viewpoint14.position = [0,0,50]

Scene12.children.append(Viewpoint14)
Group15 = x3d.Group()
DirectionalLight16 = x3d.DirectionalLight()
DirectionalLight16.direction = [1,1,1]

Group15.children.append(DirectionalLight16)
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.name = "orbit"
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.name = "translation"
field19.accessType = "inputOutput"
field19.type = "SFVec3f"
field19.value = [-8,0,0]

ProtoInterface18.field.append(field19)
field20 = x3d.field()
field20.name = "diffuseColor"
field20.accessType = "inputOutput"
field20.type = "SFColor"
field20.value = [1,0.5,0]

ProtoInterface18.field.append(field20)
field21 = x3d.field()
field21.name = "specularColor"
field21.accessType = "inputOutput"
field21.type = "SFColor"
field21.value = [1,0.5,0]

ProtoInterface18.field.append(field21)
field22 = x3d.field()
field22.name = "transparency"
field22.accessType = "inputOutput"
field22.type = "SFFloat"
field22.value = 0.75

ProtoInterface18.field.append(field22)

ProtoDeclare17.ProtoInterface = ProtoInterface18
ProtoBody23 = x3d.ProtoBody()
Group24 = x3d.Group()
TimeSensor25 = x3d.TimeSensor()
TimeSensor25.DEF = "Clock"
TimeSensor25.cycleInterval = 16
TimeSensor25.loop = True

Group24.children.append(TimeSensor25)
OrientationInterpolator26 = x3d.OrientationInterpolator()
OrientationInterpolator26.DEF = "OrbitPath"
OrientationInterpolator26.key = [0,0.5,1]

Group24.children.append(OrientationInterpolator26)
Transform27 = x3d.Transform()
Transform27.DEF = "OrbitTransform"
IS28 = x3d.IS()
connect29 = x3d.connect()
connect29.nodeField = "translation"
connect29.protoField = "translation"

IS28.connect.append(connect29)

Transform27.IS = IS28
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.nodeField = "diffuseColor"
connect34.protoField = "diffuseColor"

IS33.connect.append(connect34)
connect35 = x3d.connect()
connect35.nodeField = "specularColor"
connect35.protoField = "specularColor"

IS33.connect.append(connect35)
connect36 = x3d.connect()
connect36.nodeField = "transparency"
connect36.protoField = "transparency"

IS33.connect.append(connect36)

Material32.IS = IS33

Appearance31.material = Material32

Shape30.appearance = Appearance31
"""<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>"""
IndexedFaceSet37 = x3d.IndexedFaceSet()
IndexedFaceSet37.ccw = False
IndexedFaceSet37.convex = False
IndexedFaceSet37.coordIndex = [0,1,2,-1]
IndexedFaceSet37.DEF = "Orbit"
Coordinate38 = x3d.Coordinate()
Coordinate38.DEF = "OrbitCoordinates"

IndexedFaceSet37.coord = Coordinate38

Shape30.geometry = IndexedFaceSet37

Transform27.children.append(Shape30)

Group24.children.append(Transform27)
Script39 = x3d.Script()
Script39.DEF = "OrbitScript"
field40 = x3d.field()
field40.name = "set_fraction"
field40.accessType = "inputOnly"
field40.type = "SFFloat"

Script39.field.append(field40)
field41 = x3d.field()
field41.name = "coordinates"
field41.accessType = "inputOutput"
field41.type = "MFVec3f"

Script39.field.append(field41)
field42 = x3d.field()
field42.name = "coordIndexes"
field42.accessType = "inputOutput"
field42.type = "MFInt32"

Script39.field.append(field42)
field43 = x3d.field()
field43.name = "e"
field43.accessType = "inputOutput"
field43.type = "SFFloat"
field43.value = 5

Script39.field.append(field43)
field44 = x3d.field()
field44.name = "f"
field44.accessType = "inputOutput"
field44.type = "SFFloat"
field44.value = 5

Script39.field.append(field44)
field45 = x3d.field()
field45.name = "g"
field45.accessType = "inputOutput"
field45.type = "SFFloat"
field45.value = 5

Script39.field.append(field45)
field46 = x3d.field()
field46.name = "h"
field46.accessType = "inputOutput"
field46.type = "SFFloat"
field46.value = 5

Script39.field.append(field46)
field47 = x3d.field()
field47.name = "resolution"
field47.accessType = "inputOutput"
field47.type = "SFInt32"
field47.value = 50

Script39.field.append(field47)

Script39.sourceCode = '''ecmascript:\n"+
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

Group24.children.append(Script39)
ROUTE48 = x3d.ROUTE()
ROUTE48.fromNode = "OrbitScript"
ROUTE48.fromField = "coordIndexes"
ROUTE48.toNode = "Orbit"
ROUTE48.toField = "set_coordIndex"

Group24.children.append(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.fromNode = "OrbitScript"
ROUTE49.fromField = "coordinates"
ROUTE49.toNode = "OrbitCoordinates"
ROUTE49.toField = "point"

Group24.children.append(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.fromNode = "Clock"
ROUTE50.fromField = "fraction_changed"
ROUTE50.toNode = "OrbitScript"
ROUTE50.toField = "set_fraction"

Group24.children.append(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.fromNode = "OrbitPath"
ROUTE51.fromField = "value_changed"
ROUTE51.toNode = "OrbitTransform"
ROUTE51.toField = "rotation"

Group24.children.append(ROUTE51)
ROUTE52 = x3d.ROUTE()
ROUTE52.fromNode = "Clock"
ROUTE52.fromField = "fraction_changed"
ROUTE52.toNode = "OrbitPath"
ROUTE52.toField = "set_fraction"

Group24.children.append(ROUTE52)

ProtoBody23.children.append(Group24)

ProtoDeclare17.ProtoBody = ProtoBody23

Group15.children.append(ProtoDeclare17)
ProtoInstance53 = x3d.ProtoInstance()
ProtoInstance53.name = "orbit"
fieldValue54 = x3d.fieldValue()
fieldValue54.name = "translation"
fieldValue54.value = "-8 0 0"

ProtoInstance53.fieldValue.append(fieldValue54)
fieldValue55 = x3d.fieldValue()
fieldValue55.name = "diffuseColor"
fieldValue55.value = "1 0.5 0"

ProtoInstance53.fieldValue.append(fieldValue55)
fieldValue56 = x3d.fieldValue()
fieldValue56.name = "specularColor"
fieldValue56.value = "1 0.5 0"

ProtoInstance53.fieldValue.append(fieldValue56)
fieldValue57 = x3d.fieldValue()
fieldValue57.name = "transparency"
fieldValue57.value = "0.75"

ProtoInstance53.fieldValue.append(fieldValue57)

Group15.children.append(ProtoInstance53)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.name = "orbit"
fieldValue59 = x3d.fieldValue()
fieldValue59.name = "translation"
fieldValue59.value = "8 0 0"

ProtoInstance58.fieldValue.append(fieldValue59)
fieldValue60 = x3d.fieldValue()
fieldValue60.name = "diffuseColor"
fieldValue60.value = "0 0.5 1"

ProtoInstance58.fieldValue.append(fieldValue60)
fieldValue61 = x3d.fieldValue()
fieldValue61.name = "specularColor"
fieldValue61.value = "0 0.5 1"

ProtoInstance58.fieldValue.append(fieldValue61)
fieldValue62 = x3d.fieldValue()
fieldValue62.name = "transparency"
fieldValue62.value = "0.5"

ProtoInstance58.fieldValue.append(fieldValue62)

Group15.children.append(ProtoInstance58)

Scene12.children.append(Group15)

X3D0.Scene = Scene12
f = open("../personal/flowers2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/flowers2.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
