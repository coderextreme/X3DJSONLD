print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "arc1.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "Lost, Doug Sanden I think"

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
field21.accessType = "inputOutput"
field21.type = "MFVec3f"
field21.name = "keyValue"
field21.value = [(0, 0, 0),(0, 5, 0)]

Script17.field.append(field21)

Script17.sourceCode = '''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }'''

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
ROUTE27.fromField = "keyValue_changed"
ROUTE27.toNode = "PI1"
ROUTE27.toField = "set_keyValue"

ProtoBody10.children.append(ROUTE27)
ROUTE28 = x3d.ROUTE()
ROUTE28.fromNode = "PI1"
ROUTE28.fromField = "value_changed"
ROUTE28.toNode = "node"
ROUTE28.toField = "set_translation"

ProtoBody10.children.append(ROUTE28)
ROUTE29 = x3d.ROUTE()
ROUTE29.fromNode = "MB1"
ROUTE29.fromField = "translation_changed"
ROUTE29.toNode = "node"
ROUTE29.toField = "set_translation"

ProtoBody10.children.append(ROUTE29)

ProtoDeclare7.ProtoBody = ProtoBody10

Scene6.children.append(ProtoDeclare7)
ProtoDeclare30 = x3d.ProtoDeclare()
ProtoDeclare30.name = "x3dconnector"
ProtoInterface31 = x3d.ProtoInterface()
field32 = x3d.field()
field32.accessType = "initializeOnly"
field32.type = "SFNode"
field32.name = "startnode"

ProtoInterface31.field.append(field32)
field33 = x3d.field()
field33.accessType = "initializeOnly"
field33.type = "SFNode"
field33.name = "endnode"

ProtoInterface31.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFNode"
field34.name = "transnode"

ProtoInterface31.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFNode"
field35.name = "rotscalenode"

ProtoInterface31.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOnly"
field36.type = "SFVec3f"
field36.name = "set_startpoint"

ProtoInterface31.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOnly"
field37.type = "SFVec3f"
field37.name = "set_endpoint"

ProtoInterface31.field.append(field37)

ProtoDeclare30.ProtoInterface = ProtoInterface31
ProtoBody38 = x3d.ProtoBody()
Script39 = x3d.Script(DEF="S1")
field40 = x3d.field()
field40.accessType = "initializeOnly"
field40.type = "SFNode"
field40.name = "startnode"

Script39.field.append(field40)
field41 = x3d.field()
field41.accessType = "initializeOnly"
field41.type = "SFNode"
field41.name = "endnode"

Script39.field.append(field41)
field42 = x3d.field()
field42.accessType = "initializeOnly"
field42.type = "SFNode"
field42.name = "transnode"

Script39.field.append(field42)
field43 = x3d.field()
field43.accessType = "initializeOnly"
field43.type = "SFNode"
field43.name = "rotscalenode"

Script39.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOnly"
field44.type = "SFVec3f"
field44.name = "set_startpoint"

Script39.field.append(field44)
field45 = x3d.field()
field45.accessType = "inputOnly"
field45.type = "SFVec3f"
field45.name = "set_endpoint"

Script39.field.append(field45)

Script39.sourceCode = '''ecmascript:\n"+
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
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
"	      }\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }'''
IS46 = x3d.IS()
connect47 = x3d.connect()
connect47.nodeField = "startnode"
connect47.protoField = "startnode"

IS46.connect.append(connect47)
connect48 = x3d.connect()
connect48.nodeField = "endnode"
connect48.protoField = "endnode"

IS46.connect.append(connect48)
connect49 = x3d.connect()
connect49.nodeField = "set_startpoint"
connect49.protoField = "set_startpoint"

IS46.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "set_endpoint"
connect50.protoField = "set_endpoint"

IS46.connect.append(connect50)

Script39.IS = IS46

ProtoBody38.children.append(Script39)

ProtoDeclare30.ProtoBody = ProtoBody38

Scene6.children.append(ProtoDeclare30)
Viewpoint51 = x3d.Viewpoint()
Viewpoint51.description = "Only Viewpoint"
Viewpoint51.position = [0,0,5]

Scene6.children.append(Viewpoint51)
Background52 = x3d.Background()
Background52.skyColor = [(0.4, 0.4, 0.4)]

Scene6.children.append(Background52)
Transform53 = x3d.Transform(DEF="G1")
ProtoInstance54 = x3d.ProtoInstance()
ProtoInstance54.name = "point"
fieldValue55 = x3d.fieldValue()
fieldValue55.name = "translation"
fieldValue55.value = "0 0.9499997 0"

ProtoInstance54.fieldValue.append(fieldValue55)

Transform53.children.append(ProtoInstance54)

Scene6.children.append(Transform53)
Transform56 = x3d.Transform(DEF="G2")
ProtoInstance57 = x3d.ProtoInstance()
ProtoInstance57.name = "point"
fieldValue58 = x3d.fieldValue()
fieldValue58.name = "translation"
fieldValue58.value = "0 0.9499997 0"

ProtoInstance57.fieldValue.append(fieldValue58)

Transform56.children.append(ProtoInstance57)

Scene6.children.append(Transform56)
Transform59 = x3d.Transform(DEF="transC1")
Transform60 = x3d.Transform(DEF="rotscaleC1")
Shape61 = x3d.Shape()
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.diffuseColor = [0.2,0.7,0.7]
Material63.transparency = 0.5

Appearance62.material = Material63

Shape61.appearance = Appearance62
Cylinder64 = x3d.Cylinder()
Cylinder64.radius = 0.05

Shape61.geometry = Cylinder64

Transform60.children.append(Shape61)

Transform59.children.append(Transform60)

Scene6.children.append(Transform59)
ProtoInstance65 = x3d.ProtoInstance(DEF="connector1")
ProtoInstance65.name = "x3dconnector"
fieldValue66 = x3d.fieldValue()
fieldValue66.name = "startnode"
Transform67 = x3d.Transform(USE="G1")

fieldValue66.children.append(Transform67)

ProtoInstance65.fieldValue.append(fieldValue66)
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "endnode"
Transform69 = x3d.Transform(USE="G2")

fieldValue68.children.append(Transform69)

ProtoInstance65.fieldValue.append(fieldValue68)
fieldValue70 = x3d.fieldValue()
fieldValue70.name = "transnode"
Transform71 = x3d.Transform(USE="transC1")

fieldValue70.children.append(Transform71)

ProtoInstance65.fieldValue.append(fieldValue70)
fieldValue72 = x3d.fieldValue()
fieldValue72.name = "rotscalenode"
Transform73 = x3d.Transform(USE="rotscaleC1")

fieldValue72.children.append(Transform73)

ProtoInstance65.fieldValue.append(fieldValue72)

Scene6.children.append(ProtoInstance65)
ROUTE74 = x3d.ROUTE()
ROUTE74.fromNode = "G1"
ROUTE74.fromField = "translation_changed"
ROUTE74.toNode = "connector1"
ROUTE74.toField = "set_startpoint"

Scene6.children.append(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.fromNode = "G2"
ROUTE75.fromField = "translation_changed"
ROUTE75.toNode = "connector1"
ROUTE75.toField = "set_endpoint"

Scene6.children.append(ROUTE75)

X3D0.Scene = Scene6
f = open("../data/arc1.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arc1.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/arc1.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
