print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "arcold.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "generator"
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "an attempt to implement an arc in a graph"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.position = [0,0,5]
Viewpoint8.description = "a moving graph"

Scene7.children.append(Viewpoint8)
Background9 = x3d.Background()
Background9.skyColor = [(0.4, 0.4, 0.4)]

Scene7.children.append(Background9)
Transform10 = x3d.Transform()
Transform10.DEF = "trans1"
Transform11 = x3d.Transform()
Transform11.DEF = "rotscale1"
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [0.2,0.7,0.7]

Appearance13.material = Material14

Shape12.appearance = Appearance13
Cylinder15 = x3d.Cylinder()
Cylinder15.radius = 0.1

Shape12.geometry = Cylinder15

Transform11.children.append(Shape12)

Transform10.children.append(Transform11)

Scene7.children.append(Transform10)
Transform16 = x3d.Transform()
Transform16.DEF = "trans2"
Transform17 = x3d.Transform()
Transform17.DEF = "rotscale2"
Shape18 = x3d.Shape()
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.diffuseColor = [0.2,0.7,0.7]

Appearance19.material = Material20

Shape18.appearance = Appearance19
Cylinder21 = x3d.Cylinder()
Cylinder21.radius = 0.1

Shape18.geometry = Cylinder21

Transform17.children.append(Shape18)

Transform16.children.append(Transform17)

Scene7.children.append(Transform16)
Transform22 = x3d.Transform()
Transform22.DEF = "trans3"
Transform23 = x3d.Transform()
Transform23.DEF = "rotscale3"
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.diffuseColor = [0.2,0.7,0.7]

Appearance25.material = Material26

Shape24.appearance = Appearance25
Cylinder27 = x3d.Cylinder()
Cylinder27.radius = 0.1

Shape24.geometry = Cylinder27

Transform23.children.append(Shape24)

Transform22.children.append(Transform23)

Scene7.children.append(Transform22)
ProtoDeclare28 = x3d.ProtoDeclare()
ProtoDeclare28.name = "point"
ProtoInterface29 = x3d.ProtoInterface()
field30 = x3d.field()
field30.name = "translation"
field30.accessType = "inputOutput"
field30.type = "SFVec3f"
field30.value = [0,0,0]

ProtoInterface29.field.append(field30)

ProtoDeclare28.ProtoInterface = ProtoInterface29
ProtoBody31 = x3d.ProtoBody()
Transform32 = x3d.Transform()
Transform32.DEF = "node"
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.nodeField = "translation"
connect34.protoField = "translation"

IS33.connect.append(connect34)

Transform32.IS = IS33
Shape35 = x3d.Shape()
Sphere36 = x3d.Sphere()
Sphere36.radius = 0.1

Shape35.geometry = Sphere36
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.diffuseColor = [1,0,0]

Appearance37.material = Material38

Shape35.appearance = Appearance37

Transform32.children.append(Shape35)
PositionInterpolator39 = x3d.PositionInterpolator()
PositionInterpolator39.DEF = "PI1"
PositionInterpolator39.key = [0,1]
PositionInterpolator39.keyValue = [(0, 0, 0),(0, 5, 0)]

Transform32.children.append(PositionInterpolator39)
Script40 = x3d.Script()
Script40.DEF = "MB1"
field41 = x3d.field()
field41.name = "translation"
field41.accessType = "inputOutput"
field41.type = "SFVec3f"
field41.value = [50,50,0]

Script40.field.append(field41)
field42 = x3d.field()
field42.name = "old"
field42.accessType = "inputOutput"
field42.type = "SFVec3f"
field42.value = [0,0,0]

Script40.field.append(field42)
field43 = x3d.field()
field43.name = "set_location"
field43.accessType = "inputOnly"
field43.type = "SFTime"

Script40.field.append(field43)
field44 = x3d.field()
field44.name = "keyValue"
field44.accessType = "outputOnly"
field44.type = "MFVec3f"

Script40.field.append(field44)

Script40.sourceCode = '''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}'''

Transform32.children.append(Script40)
TimeSensor45 = x3d.TimeSensor()
TimeSensor45.DEF = "CL1"
TimeSensor45.cycleInterval = 3
TimeSensor45.loop = True

Transform32.children.append(TimeSensor45)
ROUTE46 = x3d.ROUTE()
ROUTE46.fromNode = "CL1"
ROUTE46.fromField = "cycleTime"
ROUTE46.toNode = "MB1"
ROUTE46.toField = "set_location"

Transform32.children.append(ROUTE46)
ROUTE47 = x3d.ROUTE()
ROUTE47.fromNode = "CL1"
ROUTE47.fromField = "fraction_changed"
ROUTE47.toNode = "PI1"
ROUTE47.toField = "set_fraction"

Transform32.children.append(ROUTE47)
ROUTE48 = x3d.ROUTE()
ROUTE48.fromNode = "MB1"
ROUTE48.fromField = "keyValue"
ROUTE48.toNode = "PI1"
ROUTE48.toField = "keyValue"

Transform32.children.append(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.fromNode = "PI1"
ROUTE49.fromField = "value_changed"
ROUTE49.toNode = "node"
ROUTE49.toField = "set_translation"

Transform32.children.append(ROUTE49)

ProtoBody31.children.append(Transform32)

ProtoDeclare28.ProtoBody = ProtoBody31

Scene7.children.append(ProtoDeclare28)
"""from doug sanden"""
ProtoDeclare50 = x3d.ProtoDeclare()
ProtoDeclare50.name = "x3dconnector"
ProtoInterface51 = x3d.ProtoInterface()
field52 = x3d.field()
field52.name = "startnode"
field52.accessType = "inputOutput"
field52.type = "SFNode"

ProtoInterface51.field.append(field52)
field53 = x3d.field()
field53.name = "endnode"
field53.accessType = "inputOutput"
field53.type = "SFNode"

ProtoInterface51.field.append(field53)
field54 = x3d.field()
field54.name = "transnode"
field54.accessType = "inputOutput"
field54.type = "SFNode"

ProtoInterface51.field.append(field54)
field55 = x3d.field()
field55.name = "rotscalenode"
field55.accessType = "inputOutput"
field55.type = "SFNode"

ProtoInterface51.field.append(field55)
field56 = x3d.field()
field56.name = "set_startpoint"
field56.accessType = "inputOnly"
field56.type = "SFVec3f"

ProtoInterface51.field.append(field56)
field57 = x3d.field()
field57.name = "set_endpoint"
field57.accessType = "inputOnly"
field57.type = "SFVec3f"

ProtoInterface51.field.append(field57)

ProtoDeclare50.ProtoInterface = ProtoInterface51
ProtoBody58 = x3d.ProtoBody()
Script59 = x3d.Script()
Script59.DEF = "S1"
field60 = x3d.field()
field60.name = "startnode"
field60.accessType = "inputOutput"
field60.type = "SFNode"

Script59.field.append(field60)
field61 = x3d.field()
field61.name = "endnode"
field61.accessType = "inputOutput"
field61.type = "SFNode"

Script59.field.append(field61)
field62 = x3d.field()
field62.name = "transnode"
field62.accessType = "inputOutput"
field62.type = "SFNode"

Script59.field.append(field62)
field63 = x3d.field()
field63.name = "rotscalenode"
field63.accessType = "inputOutput"
field63.type = "SFNode"

Script59.field.append(field63)
field64 = x3d.field()
field64.name = "set_startpoint"
field64.accessType = "inputOnly"
field64.type = "SFVec3f"

Script59.field.append(field64)
field65 = x3d.field()
field65.name = "set_endpoint"
field65.accessType = "inputOnly"
field65.type = "SFVec3f"

Script59.field.append(field65)
IS66 = x3d.IS()
connect67 = x3d.connect()
connect67.nodeField = "startnode"
connect67.protoField = "startnode"

IS66.connect.append(connect67)
connect68 = x3d.connect()
connect68.nodeField = "endnode"
connect68.protoField = "endnode"

IS66.connect.append(connect68)
connect69 = x3d.connect()
connect69.nodeField = "transnode"
connect69.protoField = "transnode"

IS66.connect.append(connect69)
connect70 = x3d.connect()
connect70.nodeField = "rotscalenode"
connect70.protoField = "rotscalenode"

IS66.connect.append(connect70)
connect71 = x3d.connect()
connect71.nodeField = "set_startpoint"
connect71.protoField = "set_startpoint"

IS66.connect.append(connect71)
connect72 = x3d.connect()
connect72.nodeField = "set_endpoint"
connect72.protoField = "set_endpoint"

IS66.connect.append(connect72)

Script59.IS = IS66

Script59.sourceCode = '''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"		var trafo = recompute(startpoint, endpoint);\n"+
"		if (typeof trafo !== 'undefined') {\n"+
"			transnode.translation = trafo.translation;\n"+
"			rotscalenode.rotation = trafo.rotation;\n"+
"			rotscalenode.scale = trafo.scale;\n"+
"		} else {\n"+
"			Browser.print(\"recompute returned undefined\");\n"+
"		}\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val || startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val || endnode.translation);\n"+
"        }'''

ProtoBody58.children.append(Script59)

ProtoDeclare50.ProtoBody = ProtoBody58

Scene7.children.append(ProtoDeclare50)
ProtoInstance73 = x3d.ProtoInstance()
ProtoInstance73.name = "point"
ProtoInstance73.DEF = "G1"

Scene7.children.append(ProtoInstance73)
ProtoInstance74 = x3d.ProtoInstance()
ProtoInstance74.name = "point"
ProtoInstance74.DEF = "G2"

Scene7.children.append(ProtoInstance74)
ProtoInstance75 = x3d.ProtoInstance()
ProtoInstance75.name = "point"
ProtoInstance75.DEF = "G3"

Scene7.children.append(ProtoInstance75)
ProtoInstance76 = x3d.ProtoInstance()
ProtoInstance76.name = "point"
ProtoInstance76.DEF = "G4"

Scene7.children.append(ProtoInstance76)
ProtoInstance77 = x3d.ProtoInstance()
ProtoInstance77.name = "x3dconnector"
ProtoInstance77.DEF = "connector1"
fieldValue78 = x3d.fieldValue()
fieldValue78.name = "startnode"
ProtoInstance79 = x3d.ProtoInstance()
ProtoInstance79.name = "point"
ProtoInstance79.USE = "G1"

fieldValue78.children.append(ProtoInstance79)

ProtoInstance77.fieldValue.append(fieldValue78)
fieldValue80 = x3d.fieldValue()
fieldValue80.name = "endnode"
ProtoInstance81 = x3d.ProtoInstance()
ProtoInstance81.name = "point"
ProtoInstance81.USE = "G2"

fieldValue80.children.append(ProtoInstance81)

ProtoInstance77.fieldValue.append(fieldValue80)
fieldValue82 = x3d.fieldValue()
fieldValue82.name = "transnode"
Transform83 = x3d.Transform()
Transform83.USE = "trans1"

fieldValue82.children.append(Transform83)

ProtoInstance77.fieldValue.append(fieldValue82)
fieldValue84 = x3d.fieldValue()
fieldValue84.name = "rotscalenode"
Transform85 = x3d.Transform()
Transform85.USE = "rotscale1"

fieldValue84.children.append(Transform85)

ProtoInstance77.fieldValue.append(fieldValue84)

Scene7.children.append(ProtoInstance77)
ProtoInstance86 = x3d.ProtoInstance()
ProtoInstance86.name = "x3dconnector"
ProtoInstance86.DEF = "connector2"
fieldValue87 = x3d.fieldValue()
fieldValue87.name = "startnode"
ProtoInstance88 = x3d.ProtoInstance()
ProtoInstance88.name = "point"
ProtoInstance88.USE = "G1"

fieldValue87.children.append(ProtoInstance88)

ProtoInstance86.fieldValue.append(fieldValue87)
fieldValue89 = x3d.fieldValue()
fieldValue89.name = "endnode"
ProtoInstance90 = x3d.ProtoInstance()
ProtoInstance90.name = "point"
ProtoInstance90.USE = "G3"

fieldValue89.children.append(ProtoInstance90)

ProtoInstance86.fieldValue.append(fieldValue89)
fieldValue91 = x3d.fieldValue()
fieldValue91.name = "transnode"
Transform92 = x3d.Transform()
Transform92.USE = "trans2"

fieldValue91.children.append(Transform92)

ProtoInstance86.fieldValue.append(fieldValue91)
fieldValue93 = x3d.fieldValue()
fieldValue93.name = "rotscalenode"
Transform94 = x3d.Transform()
Transform94.USE = "rotscale2"

fieldValue93.children.append(Transform94)

ProtoInstance86.fieldValue.append(fieldValue93)

Scene7.children.append(ProtoInstance86)
ProtoInstance95 = x3d.ProtoInstance()
ProtoInstance95.name = "x3dconnector"
ProtoInstance95.DEF = "connector3"
fieldValue96 = x3d.fieldValue()
fieldValue96.name = "startnode"
ProtoInstance97 = x3d.ProtoInstance()
ProtoInstance97.name = "point"
ProtoInstance97.USE = "G1"

fieldValue96.children.append(ProtoInstance97)

ProtoInstance95.fieldValue.append(fieldValue96)
fieldValue98 = x3d.fieldValue()
fieldValue98.name = "endnode"
ProtoInstance99 = x3d.ProtoInstance()
ProtoInstance99.name = "point"
ProtoInstance99.USE = "G4"

fieldValue98.children.append(ProtoInstance99)

ProtoInstance95.fieldValue.append(fieldValue98)
fieldValue100 = x3d.fieldValue()
fieldValue100.name = "transnode"
Transform101 = x3d.Transform()
Transform101.USE = "trans3"

fieldValue100.children.append(Transform101)

ProtoInstance95.fieldValue.append(fieldValue100)
fieldValue102 = x3d.fieldValue()
fieldValue102.name = "rotscalenode"
Transform103 = x3d.Transform()
Transform103.USE = "rotscale3"

fieldValue102.children.append(Transform103)

ProtoInstance95.fieldValue.append(fieldValue102)

Scene7.children.append(ProtoInstance95)
ROUTE104 = x3d.ROUTE()
ROUTE104.fromNode = "G1"
ROUTE104.fromField = "translation_changed"
ROUTE104.toNode = "connector1"
ROUTE104.toField = "set_startpoint"

Scene7.children.append(ROUTE104)
ROUTE105 = x3d.ROUTE()
ROUTE105.fromNode = "G2"
ROUTE105.fromField = "translation_changed"
ROUTE105.toNode = "connector1"
ROUTE105.toField = "set_endpoint"

Scene7.children.append(ROUTE105)
ROUTE106 = x3d.ROUTE()
ROUTE106.fromNode = "G1"
ROUTE106.fromField = "translation_changed"
ROUTE106.toNode = "connector2"
ROUTE106.toField = "set_startpoint"

Scene7.children.append(ROUTE106)
ROUTE107 = x3d.ROUTE()
ROUTE107.fromNode = "G3"
ROUTE107.fromField = "translation_changed"
ROUTE107.toNode = "connector2"
ROUTE107.toField = "set_endpoint"

Scene7.children.append(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.fromNode = "G1"
ROUTE108.fromField = "translation_changed"
ROUTE108.toNode = "connector3"
ROUTE108.toField = "set_startpoint"

Scene7.children.append(ROUTE108)
ROUTE109 = x3d.ROUTE()
ROUTE109.fromNode = "G4"
ROUTE109.fromField = "translation_changed"
ROUTE109.toNode = "connector3"
ROUTE109.toField = "set_endpoint"

Scene7.children.append(ROUTE109)

X3D0.Scene = Scene7
f = open("../data/arcold.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arcold.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/arcold.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
