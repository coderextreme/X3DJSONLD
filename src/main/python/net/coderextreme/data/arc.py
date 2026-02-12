print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "arc.x3d"

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
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
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

ProtoDeclare7.ProtoBody = ProtoBody10

Scene6.children.append(ProtoDeclare7)
ProtoDeclare29 = x3d.ProtoDeclare()
ProtoDeclare29.name = "x3dconnector"
ProtoInterface30 = x3d.ProtoInterface()
field31 = x3d.field()
field31.accessType = "initializeOnly"
field31.type = "SFNode"
field31.name = "startnode"

ProtoInterface30.field.append(field31)
field32 = x3d.field()
field32.accessType = "initializeOnly"
field32.type = "SFNode"
field32.name = "endnode"

ProtoInterface30.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOnly"
field33.type = "SFVec3f"
field33.name = "set_startpoint"

ProtoInterface30.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOnly"
field34.type = "SFVec3f"
field34.name = "set_endpoint"

ProtoInterface30.field.append(field34)

ProtoDeclare29.ProtoInterface = ProtoInterface30
ProtoBody35 = x3d.ProtoBody()
Group36 = x3d.Group()
Transform37 = x3d.Transform(DEF="trans")
Transform38 = x3d.Transform(DEF="rotscale")
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.diffuseColor = [0.2,0.7,0.7]
Material41.transparency = 0.5

Appearance40.material = Material41

Shape39.appearance = Appearance40
Cylinder42 = x3d.Cylinder()
Cylinder42.radius = 0.05

Shape39.geometry = Cylinder42

Transform38.children.append(Shape39)

Transform37.children.append(Transform38)

Group36.children.append(Transform37)
Script43 = x3d.Script(DEF="S1")
field44 = x3d.field()
field44.accessType = "initializeOnly"
field44.type = "SFNode"
field44.name = "startnode"

Script43.field.append(field44)
field45 = x3d.field()
field45.accessType = "initializeOnly"
field45.type = "SFNode"
field45.name = "endnode"

Script43.field.append(field45)
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "SFNode"
field46.name = "position"
Transform47 = x3d.Transform(USE="trans")

field46.children.append(Transform47)

Script43.field.append(field46)
field48 = x3d.field()
field48.accessType = "inputOutput"
field48.type = "SFNode"
field48.name = "rotscale"
Transform49 = x3d.Transform(USE="rotscale")

field48.children.append(Transform49)

Script43.field.append(field48)
field50 = x3d.field()
field50.accessType = "inputOnly"
field50.type = "SFVec3f"
field50.name = "set_startpoint"

Script43.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOnly"
field51.type = "SFVec3f"
field51.name = "set_endpoint"

Script43.field.append(field51)

Script43.sourceCode = '''ecmascript:\n"+
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
"	    } else if (typeof SFRotation !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      position.translation = trafo.translation;\n"+
"		      rotscale.rotation = trafo.rotation;\n"+
"		      rotscale.scale = trafo.scale;\n"+
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
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.nodeField = "startnode"
connect53.protoField = "startnode"

IS52.connect.append(connect53)
connect54 = x3d.connect()
connect54.nodeField = "endnode"
connect54.protoField = "endnode"

IS52.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "set_startpoint"
connect55.protoField = "set_startpoint"

IS52.connect.append(connect55)
connect56 = x3d.connect()
connect56.nodeField = "set_endpoint"
connect56.protoField = "set_endpoint"

IS52.connect.append(connect56)

Script43.IS = IS52

Group36.children.append(Script43)

ProtoBody35.children.append(Group36)

ProtoDeclare29.ProtoBody = ProtoBody35

Scene6.children.append(ProtoDeclare29)
Viewpoint57 = x3d.Viewpoint()
Viewpoint57.description = "Only Viewpoint"
Viewpoint57.position = [0,0,5]

Scene6.children.append(Viewpoint57)
Background58 = x3d.Background()
Background58.skyColor = [(0.4, 0.4, 0.4)]

Scene6.children.append(Background58)
ProtoInstance59 = x3d.ProtoInstance(DEF="G1")
ProtoInstance59.name = "point"
fieldValue60 = x3d.fieldValue()
fieldValue60.name = "translation"
fieldValue60.value = "0 0.9066665 0"

ProtoInstance59.fieldValue.append(fieldValue60)

Scene6.children.append(ProtoInstance59)
ProtoInstance61 = x3d.ProtoInstance(DEF="G2")
ProtoInstance61.name = "point"
fieldValue62 = x3d.fieldValue()
fieldValue62.name = "translation"
fieldValue62.value = "0 0.9066665 0"

ProtoInstance61.fieldValue.append(fieldValue62)

Scene6.children.append(ProtoInstance61)
ProtoInstance63 = x3d.ProtoInstance(DEF="G3")
ProtoInstance63.name = "point"
fieldValue64 = x3d.fieldValue()
fieldValue64.name = "translation"
fieldValue64.value = "0 0.9066665 0"

ProtoInstance63.fieldValue.append(fieldValue64)

Scene6.children.append(ProtoInstance63)
ProtoInstance65 = x3d.ProtoInstance(DEF="G4")
ProtoInstance65.name = "point"
fieldValue66 = x3d.fieldValue()
fieldValue66.name = "translation"
fieldValue66.value = "0 0.9066665 0"

ProtoInstance65.fieldValue.append(fieldValue66)

Scene6.children.append(ProtoInstance65)
ProtoInstance67 = x3d.ProtoInstance(DEF="connector1")
ProtoInstance67.name = "x3dconnector"
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "startnode"
ProtoInstance69 = x3d.ProtoInstance(USE="G1")
ProtoInstance69.name = "point"

fieldValue68.children.append(ProtoInstance69)

ProtoInstance67.fieldValue.append(fieldValue68)
fieldValue70 = x3d.fieldValue()
fieldValue70.name = "endnode"
ProtoInstance71 = x3d.ProtoInstance(USE="G2")
ProtoInstance71.name = "point"

fieldValue70.children.append(ProtoInstance71)

ProtoInstance67.fieldValue.append(fieldValue70)

Scene6.children.append(ProtoInstance67)
ProtoInstance72 = x3d.ProtoInstance(DEF="connector2")
ProtoInstance72.name = "x3dconnector"
fieldValue73 = x3d.fieldValue()
fieldValue73.name = "startnode"
ProtoInstance74 = x3d.ProtoInstance(USE="G1")
ProtoInstance74.name = "point"

fieldValue73.children.append(ProtoInstance74)

ProtoInstance72.fieldValue.append(fieldValue73)
fieldValue75 = x3d.fieldValue()
fieldValue75.name = "endnode"
ProtoInstance76 = x3d.ProtoInstance(USE="G3")
ProtoInstance76.name = "point"

fieldValue75.children.append(ProtoInstance76)

ProtoInstance72.fieldValue.append(fieldValue75)

Scene6.children.append(ProtoInstance72)
ProtoInstance77 = x3d.ProtoInstance(DEF="connector3")
ProtoInstance77.name = "x3dconnector"
fieldValue78 = x3d.fieldValue()
fieldValue78.name = "startnode"
ProtoInstance79 = x3d.ProtoInstance(USE="G1")
ProtoInstance79.name = "point"

fieldValue78.children.append(ProtoInstance79)

ProtoInstance77.fieldValue.append(fieldValue78)
fieldValue80 = x3d.fieldValue()
fieldValue80.name = "endnode"
ProtoInstance81 = x3d.ProtoInstance(USE="G4")
ProtoInstance81.name = "point"

fieldValue80.children.append(ProtoInstance81)

ProtoInstance77.fieldValue.append(fieldValue80)

Scene6.children.append(ProtoInstance77)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromNode = "G1"
ROUTE82.fromField = "translation_changed"
ROUTE82.toNode = "connector1"
ROUTE82.toField = "set_startpoint"

Scene6.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromNode = "G2"
ROUTE83.fromField = "translation_changed"
ROUTE83.toNode = "connector1"
ROUTE83.toField = "set_endpoint"

Scene6.children.append(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.fromNode = "G1"
ROUTE84.fromField = "translation_changed"
ROUTE84.toNode = "connector2"
ROUTE84.toField = "set_startpoint"

Scene6.children.append(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.fromNode = "G3"
ROUTE85.fromField = "translation_changed"
ROUTE85.toNode = "connector2"
ROUTE85.toField = "set_endpoint"

Scene6.children.append(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.fromNode = "G1"
ROUTE86.fromField = "translation_changed"
ROUTE86.toNode = "connector3"
ROUTE86.toField = "set_startpoint"

Scene6.children.append(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.fromNode = "G4"
ROUTE87.fromField = "translation_changed"
ROUTE87.toNode = "connector3"
ROUTE87.toField = "set_endpoint"

Scene6.children.append(ROUTE87)

X3D0.Scene = Scene6
f = open("../data/arc.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arc.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/arc.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
