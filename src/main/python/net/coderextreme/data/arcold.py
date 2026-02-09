print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta4.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "manual"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
ProtoDeclare7 = x3d.ProtoDeclare()
ProtoDeclare7.name = "point"
ProtoInterface8 = x3d.ProtoInterface()
field9 = x3d.field()
field9.accessType = "inputOutput"
field9.type = "SFVec3f"
field9.name = "translation"

ProtoInterface8.field.append(field9)

ProtoDeclare7.ProtoInterface = ProtoInterface8
ProtoBody10 = x3d.ProtoBody()
Transform11 = x3d.Transform(DEF="node")
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [1,0,0]

Appearance13.material = Material14

Shape12.appearance = Appearance13
Sphere15 = x3d.Sphere()
Sphere15.radius = 0.1

Shape12.geometry = Sphere15

Transform11.children.append(Shape12)
PositionInterpolator16 = x3d.PositionInterpolator(DEF="PI1")
PositionInterpolator16.key = [0,1]
PositionInterpolator16.keyValue = [(0, 0, 0),(0, 5, 0)]

Transform11.children.append(PositionInterpolator16)
Script17 = x3d.Script(DEF="MB1")
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.name = "translation"
field18.value = [50,50,0]

Script17.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFVec3f"
field19.name = "old"

Script17.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOnly"
field20.type = "SFTime"
field20.name = "set_location"

Script17.field.append(field20)
field21 = x3d.field()
field21.accessType = "outputOnly"
field21.type = "MFVec3f"
field21.name = "keyValue"

Script17.field.append(field21)

Script17.sourceCode = '''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}'''

Transform11.children.append(Script17)
TimeSensor22 = x3d.TimeSensor(DEF="CL1")
TimeSensor22.cycleInterval = 3
TimeSensor22.loop = True

Transform11.children.append(TimeSensor22)
IS23 = x3d.IS()
connect24 = x3d.connect()
connect24.nodeField = "translation"
connect24.protoField = "translation"

IS23.connect.append(connect24)

Transform11.IS = IS23

ProtoBody10.children.append(Transform11)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "CL1"
ROUTE25.fromField = "cycleTime"
ROUTE25.toNode = "MB1"
ROUTE25.toField = "set_location"

ProtoBody10.children.append(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.fromNode = "CL1"
ROUTE26.fromField = "fraction_changed"
ROUTE26.toNode = "PI1"
ROUTE26.toField = "set_fraction"

ProtoBody10.children.append(ROUTE26)
ROUTE27 = x3d.ROUTE()
ROUTE27.fromNode = "MB1"
ROUTE27.fromField = "keyValue"
ROUTE27.toNode = "PI1"
ROUTE27.toField = "set_keyValue"

ProtoBody10.children.append(ROUTE27)
ROUTE28 = x3d.ROUTE()
ROUTE28.fromNode = "PI1"
ROUTE28.fromField = "value_changed"
ROUTE28.toNode = "node"
ROUTE28.toField = "set_translation"

ProtoBody10.children.append(ROUTE28)

ProtoDeclare7.ProtoBody = ProtoBody10

Scene6.children.append(ProtoDeclare7)
ProtoDeclare29 = x3d.ProtoDeclare()
ProtoDeclare29.name = "x3dconnector"
ProtoInterface30 = x3d.ProtoInterface()
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFNode"
field31.name = "startnode"

ProtoInterface30.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFNode"
field32.name = "endnode"

ProtoInterface30.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFNode"
field33.name = "transnode"

ProtoInterface30.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFNode"
field34.name = "rotscalenode"

ProtoInterface30.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOnly"
field35.type = "SFVec3f"
field35.name = "set_startpoint"

ProtoInterface30.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOnly"
field36.type = "SFVec3f"
field36.name = "set_endpoint"

ProtoInterface30.field.append(field36)

ProtoDeclare29.ProtoInterface = ProtoInterface30
ProtoBody37 = x3d.ProtoBody()
Script38 = x3d.Script(DEF="S1")
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFNode"
field39.name = "startnode"

Script38.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFNode"
field40.name = "endnode"

Script38.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFNode"
field41.name = "transnode"

Script38.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFNode"
field42.name = "rotscalenode"

Script38.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOnly"
field43.type = "SFVec3f"
field43.name = "set_startpoint"

Script38.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOnly"
field44.type = "SFVec3f"
field44.name = "set_endpoint"

Script38.field.append(field44)

Script38.sourceCode = '''ecmascript:\n"+
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
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.nodeField = "startnode"
connect46.protoField = "startnode"

IS45.connect.append(connect46)
connect47 = x3d.connect()
connect47.nodeField = "endnode"
connect47.protoField = "endnode"

IS45.connect.append(connect47)
connect48 = x3d.connect()
connect48.nodeField = "transnode"
connect48.protoField = "transnode"

IS45.connect.append(connect48)
connect49 = x3d.connect()
connect49.nodeField = "rotscalenode"
connect49.protoField = "rotscalenode"

IS45.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "set_startpoint"
connect50.protoField = "set_startpoint"

IS45.connect.append(connect50)
connect51 = x3d.connect()
connect51.nodeField = "set_endpoint"
connect51.protoField = "set_endpoint"

IS45.connect.append(connect51)

Script38.IS = IS45

ProtoBody37.children.append(Script38)

ProtoDeclare29.ProtoBody = ProtoBody37

Scene6.children.append(ProtoDeclare29)
Viewpoint52 = x3d.Viewpoint()
Viewpoint52.description = "a moving graph"
Viewpoint52.position = [0,0,5]

Scene6.children.append(Viewpoint52)
Background53 = x3d.Background()
Background53.skyColor = [(0.4, 0.4, 0.4)]

Scene6.children.append(Background53)
Transform54 = x3d.Transform(DEF="trans1")
Transform55 = x3d.Transform(DEF="rotscale1")
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()
Material58.diffuseColor = [0.2,0.7,0.7]

Appearance57.material = Material58

Shape56.appearance = Appearance57
Cylinder59 = x3d.Cylinder()
Cylinder59.radius = 0.1

Shape56.geometry = Cylinder59

Transform55.children.append(Shape56)

Transform54.children.append(Transform55)

Scene6.children.append(Transform54)
Transform60 = x3d.Transform(DEF="trans2")
Transform61 = x3d.Transform(DEF="rotscale2")
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.diffuseColor = [0.2,0.7,0.7]

Appearance63.material = Material64

Shape62.appearance = Appearance63
Cylinder65 = x3d.Cylinder()
Cylinder65.radius = 0.1

Shape62.geometry = Cylinder65

Transform61.children.append(Shape62)

Transform60.children.append(Transform61)

Scene6.children.append(Transform60)
Transform66 = x3d.Transform(DEF="trans3")
Transform67 = x3d.Transform(DEF="rotscale3")
Shape68 = x3d.Shape()
Appearance69 = x3d.Appearance()
Material70 = x3d.Material()
Material70.diffuseColor = [0.2,0.7,0.7]

Appearance69.material = Material70

Shape68.appearance = Appearance69
Cylinder71 = x3d.Cylinder()
Cylinder71.radius = 0.1

Shape68.geometry = Cylinder71

Transform67.children.append(Shape68)

Transform66.children.append(Transform67)

Scene6.children.append(Transform66)
ProtoInstance72 = x3d.ProtoInstance(DEF="G1")
ProtoInstance72.name = "point"
fieldValue73 = x3d.fieldValue()
fieldValue73.name = "translation"
fieldValue73.value = "0 4.595 0"

ProtoInstance72.fieldValue.append(fieldValue73)

Scene6.children.append(ProtoInstance72)
ProtoInstance74 = x3d.ProtoInstance(DEF="G2")
ProtoInstance74.name = "point"
fieldValue75 = x3d.fieldValue()
fieldValue75.name = "translation"
fieldValue75.value = "0 4.595 0"

ProtoInstance74.fieldValue.append(fieldValue75)

Scene6.children.append(ProtoInstance74)
ProtoInstance76 = x3d.ProtoInstance(DEF="G3")
ProtoInstance76.name = "point"
fieldValue77 = x3d.fieldValue()
fieldValue77.name = "translation"
fieldValue77.value = "0 4.595 0"

ProtoInstance76.fieldValue.append(fieldValue77)

Scene6.children.append(ProtoInstance76)
ProtoInstance78 = x3d.ProtoInstance(DEF="G4")
ProtoInstance78.name = "point"
fieldValue79 = x3d.fieldValue()
fieldValue79.name = "translation"
fieldValue79.value = "0 4.595 0"

ProtoInstance78.fieldValue.append(fieldValue79)

Scene6.children.append(ProtoInstance78)
ProtoInstance80 = x3d.ProtoInstance(DEF="connector1")
ProtoInstance80.name = "x3dconnector"
fieldValue81 = x3d.fieldValue()
fieldValue81.name = "startnode"
ProtoInstance82 = x3d.ProtoInstance(USE="G1")
ProtoInstance82.name = "point"

fieldValue81.children.append(ProtoInstance82)

ProtoInstance80.fieldValue.append(fieldValue81)
fieldValue83 = x3d.fieldValue()
fieldValue83.name = "endnode"
ProtoInstance84 = x3d.ProtoInstance(USE="G2")
ProtoInstance84.name = "point"

fieldValue83.children.append(ProtoInstance84)

ProtoInstance80.fieldValue.append(fieldValue83)
fieldValue85 = x3d.fieldValue()
fieldValue85.name = "transnode"
Transform86 = x3d.Transform(USE="trans1")

fieldValue85.children.append(Transform86)

ProtoInstance80.fieldValue.append(fieldValue85)
fieldValue87 = x3d.fieldValue()
fieldValue87.name = "rotscalenode"
Transform88 = x3d.Transform(USE="rotscale1")

fieldValue87.children.append(Transform88)

ProtoInstance80.fieldValue.append(fieldValue87)

Scene6.children.append(ProtoInstance80)
ProtoInstance89 = x3d.ProtoInstance(DEF="connector2")
ProtoInstance89.name = "x3dconnector"
fieldValue90 = x3d.fieldValue()
fieldValue90.name = "startnode"
ProtoInstance91 = x3d.ProtoInstance(USE="G1")
ProtoInstance91.name = "point"

fieldValue90.children.append(ProtoInstance91)

ProtoInstance89.fieldValue.append(fieldValue90)
fieldValue92 = x3d.fieldValue()
fieldValue92.name = "endnode"
ProtoInstance93 = x3d.ProtoInstance(USE="G3")
ProtoInstance93.name = "point"

fieldValue92.children.append(ProtoInstance93)

ProtoInstance89.fieldValue.append(fieldValue92)
fieldValue94 = x3d.fieldValue()
fieldValue94.name = "transnode"
Transform95 = x3d.Transform(USE="trans2")

fieldValue94.children.append(Transform95)

ProtoInstance89.fieldValue.append(fieldValue94)
fieldValue96 = x3d.fieldValue()
fieldValue96.name = "rotscalenode"
Transform97 = x3d.Transform(USE="rotscale2")

fieldValue96.children.append(Transform97)

ProtoInstance89.fieldValue.append(fieldValue96)

Scene6.children.append(ProtoInstance89)
ProtoInstance98 = x3d.ProtoInstance(DEF="connector3")
ProtoInstance98.name = "x3dconnector"
fieldValue99 = x3d.fieldValue()
fieldValue99.name = "startnode"
ProtoInstance100 = x3d.ProtoInstance(USE="G1")
ProtoInstance100.name = "point"

fieldValue99.children.append(ProtoInstance100)

ProtoInstance98.fieldValue.append(fieldValue99)
fieldValue101 = x3d.fieldValue()
fieldValue101.name = "endnode"
ProtoInstance102 = x3d.ProtoInstance(USE="G4")
ProtoInstance102.name = "point"

fieldValue101.children.append(ProtoInstance102)

ProtoInstance98.fieldValue.append(fieldValue101)
fieldValue103 = x3d.fieldValue()
fieldValue103.name = "transnode"
Transform104 = x3d.Transform(USE="trans3")

fieldValue103.children.append(Transform104)

ProtoInstance98.fieldValue.append(fieldValue103)
fieldValue105 = x3d.fieldValue()
fieldValue105.name = "rotscalenode"
Transform106 = x3d.Transform(USE="rotscale3")

fieldValue105.children.append(Transform106)

ProtoInstance98.fieldValue.append(fieldValue105)

Scene6.children.append(ProtoInstance98)
ROUTE107 = x3d.ROUTE()
ROUTE107.fromNode = "G1"
ROUTE107.fromField = "translation_changed"
ROUTE107.toNode = "connector1"
ROUTE107.toField = "set_startpoint"

Scene6.children.append(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.fromNode = "G2"
ROUTE108.fromField = "translation_changed"
ROUTE108.toNode = "connector1"
ROUTE108.toField = "set_endpoint"

Scene6.children.append(ROUTE108)
ROUTE109 = x3d.ROUTE()
ROUTE109.fromNode = "G1"
ROUTE109.fromField = "translation_changed"
ROUTE109.toNode = "connector2"
ROUTE109.toField = "set_startpoint"

Scene6.children.append(ROUTE109)
ROUTE110 = x3d.ROUTE()
ROUTE110.fromNode = "G3"
ROUTE110.fromField = "translation_changed"
ROUTE110.toNode = "connector2"
ROUTE110.toField = "set_endpoint"

Scene6.children.append(ROUTE110)
ROUTE111 = x3d.ROUTE()
ROUTE111.fromNode = "G1"
ROUTE111.fromField = "translation_changed"
ROUTE111.toNode = "connector3"
ROUTE111.toField = "set_startpoint"

Scene6.children.append(ROUTE111)
ROUTE112 = x3d.ROUTE()
ROUTE112.fromNode = "G4"
ROUTE112.fromField = "translation_changed"
ROUTE112.toNode = "connector3"
ROUTE112.toField = "set_endpoint"

Scene6.children.append(ROUTE112)

X3D0.Scene = Scene6
f = open("../data/arcold.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arcold.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/arcold.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
