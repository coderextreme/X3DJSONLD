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
meta5.name = "created"
meta5.content = "23 January 2005"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "9 November 2024"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "description"
meta7.content = "2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "identifier"
meta8.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "manually written"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "license"
meta10.content = "https://www.web3d.org/x3d/content/examples/license.html"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
NavigationInfo12 = x3d.NavigationInfo()

Scene11.children.append(NavigationInfo12)
Viewpoint13 = x3d.Viewpoint()
Viewpoint13.description = "Two mathematical orbitals"
Viewpoint13.position = [0,0,50]

Scene11.children.append(Viewpoint13)
Group14 = x3d.Group()
DirectionalLight15 = x3d.DirectionalLight()
DirectionalLight15.direction = [1,1,1]

Group14.children.append(DirectionalLight15)
ProtoDeclare16 = x3d.ProtoDeclare()
ProtoDeclare16.name = "orbit"
ProtoInterface17 = x3d.ProtoInterface()
field18 = x3d.field()
field18.name = "translation"
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.value = [-8,0,0]

ProtoInterface17.field.append(field18)
field19 = x3d.field()
field19.name = "diffuseColor"
field19.accessType = "inputOutput"
field19.type = "SFColor"
field19.value = [1,0.5,0]

ProtoInterface17.field.append(field19)
field20 = x3d.field()
field20.name = "specularColor"
field20.accessType = "inputOutput"
field20.type = "SFColor"
field20.value = [1,0.5,0]

ProtoInterface17.field.append(field20)
field21 = x3d.field()
field21.name = "transparency"
field21.accessType = "inputOutput"
field21.type = "SFFloat"
field21.value = 0.75

ProtoInterface17.field.append(field21)

ProtoDeclare16.ProtoInterface = ProtoInterface17
ProtoBody22 = x3d.ProtoBody()
Group23 = x3d.Group()
TimeSensor24 = x3d.TimeSensor()
TimeSensor24.DEF = "Clock"
TimeSensor24.cycleInterval = 16
TimeSensor24.loop = True

Group23.children.append(TimeSensor24)
OrientationInterpolator25 = x3d.OrientationInterpolator()
OrientationInterpolator25.DEF = "OrbitPath"
OrientationInterpolator25.key = [0,0.5,1]

Group23.children.append(OrientationInterpolator25)
Transform26 = x3d.Transform()
Transform26.DEF = "OrbitTransform"
IS27 = x3d.IS()
connect28 = x3d.connect()
connect28.nodeField = "translation"
connect28.protoField = "translation"

IS27.connect.append(connect28)

Transform26.IS = IS27
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
IS32 = x3d.IS()
connect33 = x3d.connect()
connect33.nodeField = "diffuseColor"
connect33.protoField = "diffuseColor"

IS32.connect.append(connect33)
connect34 = x3d.connect()
connect34.nodeField = "specularColor"
connect34.protoField = "specularColor"

IS32.connect.append(connect34)
connect35 = x3d.connect()
connect35.nodeField = "transparency"
connect35.protoField = "transparency"

IS32.connect.append(connect35)

Material31.IS = IS32

Appearance30.material = Material31

Shape29.appearance = Appearance30
"""<IndexedFaceSet DEF=\"Orbit\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>"""
IndexedFaceSet36 = x3d.IndexedFaceSet()
IndexedFaceSet36.ccw = False
IndexedFaceSet36.convex = False
IndexedFaceSet36.coordIndex = [0,1,2,-1]
IndexedFaceSet36.DEF = "Orbit"
Coordinate37 = x3d.Coordinate()
Coordinate37.DEF = "OrbitCoordinates"

IndexedFaceSet36.coord = Coordinate37

Shape29.geometry = IndexedFaceSet36

Transform26.children.append(Shape29)

Group23.children.append(Transform26)
Script38 = x3d.Script()
Script38.DEF = "OrbitScript"
field39 = x3d.field()
field39.name = "set_fraction"
field39.accessType = "inputOnly"
field39.type = "SFFloat"

Script38.field.append(field39)
field40 = x3d.field()
field40.name = "coordinates"
field40.accessType = "inputOutput"
field40.type = "MFVec3f"

Script38.field.append(field40)
field41 = x3d.field()
field41.name = "coordIndexes"
field41.accessType = "inputOutput"
field41.type = "MFInt32"

Script38.field.append(field41)
field42 = x3d.field()
field42.name = "e"
field42.accessType = "inputOutput"
field42.type = "SFFloat"
field42.value = 5

Script38.field.append(field42)
field43 = x3d.field()
field43.name = "f"
field43.accessType = "inputOutput"
field43.type = "SFFloat"
field43.value = 5

Script38.field.append(field43)
field44 = x3d.field()
field44.name = "g"
field44.accessType = "inputOutput"
field44.type = "SFFloat"
field44.value = 5

Script38.field.append(field44)
field45 = x3d.field()
field45.name = "h"
field45.accessType = "inputOutput"
field45.type = "SFFloat"
field45.value = 5

Script38.field.append(field45)
field46 = x3d.field()
field46.name = "resolution"
field46.accessType = "inputOutput"
field46.type = "SFInt32"
field46.value = 50

Script38.field.append(field46)

Script38.sourceCode = '''ecmascript:\n"+
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

Group23.children.append(Script38)
ROUTE47 = x3d.ROUTE()
ROUTE47.fromNode = "OrbitScript"
ROUTE47.fromField = "coordIndexes"
ROUTE47.toNode = "Orbit"
ROUTE47.toField = "set_coordIndex"

Group23.children.append(ROUTE47)
ROUTE48 = x3d.ROUTE()
ROUTE48.fromNode = "OrbitScript"
ROUTE48.fromField = "coordinates"
ROUTE48.toNode = "OrbitCoordinates"
ROUTE48.toField = "point"

Group23.children.append(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.fromNode = "Clock"
ROUTE49.fromField = "fraction_changed"
ROUTE49.toNode = "OrbitScript"
ROUTE49.toField = "set_fraction"

Group23.children.append(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.fromNode = "OrbitPath"
ROUTE50.fromField = "value_changed"
ROUTE50.toNode = "OrbitTransform"
ROUTE50.toField = "rotation"

Group23.children.append(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.fromNode = "Clock"
ROUTE51.fromField = "fraction_changed"
ROUTE51.toNode = "OrbitPath"
ROUTE51.toField = "set_fraction"

Group23.children.append(ROUTE51)

ProtoBody22.children.append(Group23)

ProtoDeclare16.ProtoBody = ProtoBody22

Group14.children.append(ProtoDeclare16)
ProtoInstance52 = x3d.ProtoInstance()
ProtoInstance52.name = "orbit"
fieldValue53 = x3d.fieldValue()
fieldValue53.name = "translation"
fieldValue53.value = "-8 0 0"

ProtoInstance52.fieldValue.append(fieldValue53)
fieldValue54 = x3d.fieldValue()
fieldValue54.name = "diffuseColor"
fieldValue54.value = "1 0.5 0"

ProtoInstance52.fieldValue.append(fieldValue54)
fieldValue55 = x3d.fieldValue()
fieldValue55.name = "specularColor"
fieldValue55.value = "1 0.5 0"

ProtoInstance52.fieldValue.append(fieldValue55)
fieldValue56 = x3d.fieldValue()
fieldValue56.name = "transparency"
fieldValue56.value = "0.75"

ProtoInstance52.fieldValue.append(fieldValue56)

Group14.children.append(ProtoInstance52)
ProtoInstance57 = x3d.ProtoInstance()
ProtoInstance57.name = "orbit"
fieldValue58 = x3d.fieldValue()
fieldValue58.name = "translation"
fieldValue58.value = "8 0 0"

ProtoInstance57.fieldValue.append(fieldValue58)
fieldValue59 = x3d.fieldValue()
fieldValue59.name = "diffuseColor"
fieldValue59.value = "0 0.5 1"

ProtoInstance57.fieldValue.append(fieldValue59)
fieldValue60 = x3d.fieldValue()
fieldValue60.name = "specularColor"
fieldValue60.value = "0 0.5 1"

ProtoInstance57.fieldValue.append(fieldValue60)
fieldValue61 = x3d.fieldValue()
fieldValue61.name = "transparency"
fieldValue61.value = "0.5"

ProtoInstance57.fieldValue.append(fieldValue61)

Group14.children.append(ProtoInstance57)

Scene11.children.append(Group14)

X3D0.Scene = Scene11
f = open("../data/flowers2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flowers2.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
