print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "a generic proto to connect two objects"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.position = [0,0,5]
Viewpoint8.description = "Only Viewpoint"

Scene7.children.append(Viewpoint8)
Background9 = x3d.Background()
Background9.skyColor = [(0.4, 0.4, 0.4)]

Scene7.children.append(Background9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.name = "point"
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.name = "translation"
field12.accessType = "inputOutput"
field12.type = "SFVec3f"
field12.value = [0,0,0]

ProtoInterface11.field.append(field12)

ProtoDeclare10.ProtoInterface = ProtoInterface11
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
Transform14.DEF = "node"
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.nodeField = "translation"
connect16.protoField = "translation"

IS15.connect.append(connect16)

Transform14.IS = IS15
Shape17 = x3d.Shape()
Sphere18 = x3d.Sphere()
Sphere18.radius = 0.1

Shape17.geometry = Sphere18
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.diffuseColor = [1,0,0]

Appearance19.material = Material20

Shape17.appearance = Appearance19

Transform14.children.append(Shape17)
PositionInterpolator21 = x3d.PositionInterpolator()
PositionInterpolator21.DEF = "PI1"
PositionInterpolator21.key = [0,1]
PositionInterpolator21.keyValue = [(0, 0, 0),(0, 5, 0)]

Transform14.children.append(PositionInterpolator21)
Script22 = x3d.Script()
Script22.DEF = "MB1"
field23 = x3d.field()
field23.name = "translation"
field23.accessType = "inputOutput"
field23.type = "SFVec3f"
field23.value = [50,50,0]

Script22.field.append(field23)
field24 = x3d.field()
field24.name = "old"
field24.accessType = "inputOutput"
field24.type = "SFVec3f"
field24.value = [0,0,0]

Script22.field.append(field24)
field25 = x3d.field()
field25.name = "set_location"
field25.accessType = "inputOnly"
field25.type = "SFTime"

Script22.field.append(field25)
field26 = x3d.field()
field26.name = "keyValue"
field26.accessType = "inputOutput"
field26.type = "MFVec3f"
field26.value = [(0, 0, 0),(0, 5, 0)]

Script22.field.append(field26)

Script22.sourceCode = '''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}'''

Transform14.children.append(Script22)
TimeSensor27 = x3d.TimeSensor()
TimeSensor27.DEF = "CL1"
TimeSensor27.cycleInterval = 3
TimeSensor27.loop = True

Transform14.children.append(TimeSensor27)
ROUTE28 = x3d.ROUTE()
ROUTE28.fromNode = "CL1"
ROUTE28.fromField = "cycleTime"
ROUTE28.toNode = "MB1"
ROUTE28.toField = "set_location"

Transform14.children.append(ROUTE28)
ROUTE29 = x3d.ROUTE()
ROUTE29.fromNode = "CL1"
ROUTE29.fromField = "fraction_changed"
ROUTE29.toNode = "PI1"
ROUTE29.toField = "set_fraction"

Transform14.children.append(ROUTE29)
ROUTE30 = x3d.ROUTE()
ROUTE30.fromNode = "MB1"
ROUTE30.fromField = "keyValue"
ROUTE30.toNode = "PI1"
ROUTE30.toField = "keyValue"

Transform14.children.append(ROUTE30)
ROUTE31 = x3d.ROUTE()
ROUTE31.fromNode = "PI1"
ROUTE31.fromField = "value_changed"
ROUTE31.toNode = "node"
ROUTE31.toField = "set_translation"

Transform14.children.append(ROUTE31)

ProtoBody13.children.append(Transform14)

ProtoDeclare10.ProtoBody = ProtoBody13

Scene7.children.append(ProtoDeclare10)
ProtoDeclare32 = x3d.ProtoDeclare()
ProtoDeclare32.name = "x3dconnector"
ProtoInterface33 = x3d.ProtoInterface()
field34 = x3d.field()
field34.name = "startnode"
field34.accessType = "initializeOnly"
field34.type = "SFNode"

ProtoInterface33.field.append(field34)
field35 = x3d.field()
field35.name = "endnode"
field35.accessType = "initializeOnly"
field35.type = "SFNode"

ProtoInterface33.field.append(field35)
field36 = x3d.field()
field36.name = "set_startpoint"
field36.accessType = "inputOnly"
field36.type = "SFVec3f"

ProtoInterface33.field.append(field36)
field37 = x3d.field()
field37.name = "set_endpoint"
field37.accessType = "inputOnly"
field37.type = "SFVec3f"

ProtoInterface33.field.append(field37)

ProtoDeclare32.ProtoInterface = ProtoInterface33
ProtoBody38 = x3d.ProtoBody()
Group39 = x3d.Group()
Transform40 = x3d.Transform()
Transform40.DEF = "trans"
Transform41 = x3d.Transform()
Transform41.DEF = "rotscale"
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.diffuseColor = [0.2,0.7,0.7]
Material44.transparency = 0.5

Appearance43.material = Material44

Shape42.appearance = Appearance43
Cylinder45 = x3d.Cylinder()
Cylinder45.radius = 0.05

Shape42.geometry = Cylinder45

Transform41.children.append(Shape42)

Transform40.children.append(Transform41)

Group39.children.append(Transform40)
Script46 = x3d.Script()
Script46.DEF = "S1"
field47 = x3d.field()
field47.name = "startnode"
field47.accessType = "initializeOnly"
field47.type = "SFNode"

Script46.field.append(field47)
field48 = x3d.field()
field48.name = "endnode"
field48.accessType = "initializeOnly"
field48.type = "SFNode"

Script46.field.append(field48)
field49 = x3d.field()
field49.name = "position"
field49.accessType = "inputOutput"
field49.type = "SFNode"
Transform50 = x3d.Transform()
Transform50.USE = "trans"

field49.children.append(Transform50)

Script46.field.append(field49)
field51 = x3d.field()
field51.name = "rotscale"
field51.accessType = "inputOutput"
field51.type = "SFNode"
Transform52 = x3d.Transform()
Transform52.USE = "rotscale"

field51.children.append(Transform52)

Script46.field.append(field51)
field53 = x3d.field()
field53.name = "set_startpoint"
field53.accessType = "inputOnly"
field53.type = "SFVec3f"

Script46.field.append(field53)
field54 = x3d.field()
field54.name = "set_endpoint"
field54.accessType = "inputOnly"
field54.type = "SFVec3f"

Script46.field.append(field54)
IS55 = x3d.IS()
connect56 = x3d.connect()
connect56.nodeField = "startnode"
connect56.protoField = "startnode"

IS55.connect.append(connect56)
connect57 = x3d.connect()
connect57.nodeField = "endnode"
connect57.protoField = "endnode"

IS55.connect.append(connect57)
connect58 = x3d.connect()
connect58.nodeField = "set_startpoint"
connect58.protoField = "set_startpoint"

IS55.connect.append(connect58)
connect59 = x3d.connect()
connect59.nodeField = "set_endpoint"
connect59.protoField = "set_endpoint"

IS55.connect.append(connect59)

Script46.IS = IS55

Script46.sourceCode = '''ecmascript:\n"+
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

Group39.children.append(Script46)

ProtoBody38.children.append(Group39)

ProtoDeclare32.ProtoBody = ProtoBody38

Scene7.children.append(ProtoDeclare32)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.name = "point"
ProtoInstance60.DEF = "G1"

Scene7.children.append(ProtoInstance60)
ProtoInstance61 = x3d.ProtoInstance()
ProtoInstance61.name = "point"
ProtoInstance61.DEF = "G2"

Scene7.children.append(ProtoInstance61)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.name = "point"
ProtoInstance62.DEF = "G3"

Scene7.children.append(ProtoInstance62)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.name = "point"
ProtoInstance63.DEF = "G4"

Scene7.children.append(ProtoInstance63)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.name = "x3dconnector"
ProtoInstance64.DEF = "connector1"
fieldValue65 = x3d.fieldValue()
fieldValue65.name = "startnode"
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.name = "point"
ProtoInstance66.USE = "G1"

fieldValue65.children.append(ProtoInstance66)

ProtoInstance64.fieldValue.append(fieldValue65)
fieldValue67 = x3d.fieldValue()
fieldValue67.name = "endnode"
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.name = "point"
ProtoInstance68.USE = "G2"

fieldValue67.children.append(ProtoInstance68)

ProtoInstance64.fieldValue.append(fieldValue67)
fieldValue69 = x3d.fieldValue()
fieldValue69.name = "set_startpoint"

ProtoInstance64.fieldValue.append(fieldValue69)
fieldValue70 = x3d.fieldValue()
fieldValue70.name = "set_endpoint"

ProtoInstance64.fieldValue.append(fieldValue70)

Scene7.children.append(ProtoInstance64)
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.name = "x3dconnector"
ProtoInstance71.DEF = "connector2"
fieldValue72 = x3d.fieldValue()
fieldValue72.name = "startnode"
ProtoInstance73 = x3d.ProtoInstance()
ProtoInstance73.name = "point"
ProtoInstance73.USE = "G1"

fieldValue72.children.append(ProtoInstance73)

ProtoInstance71.fieldValue.append(fieldValue72)
fieldValue74 = x3d.fieldValue()
fieldValue74.name = "endnode"
ProtoInstance75 = x3d.ProtoInstance()
ProtoInstance75.name = "point"
ProtoInstance75.USE = "G3"

fieldValue74.children.append(ProtoInstance75)

ProtoInstance71.fieldValue.append(fieldValue74)
fieldValue76 = x3d.fieldValue()
fieldValue76.name = "set_startpoint"

ProtoInstance71.fieldValue.append(fieldValue76)
fieldValue77 = x3d.fieldValue()
fieldValue77.name = "set_endpoint"

ProtoInstance71.fieldValue.append(fieldValue77)

Scene7.children.append(ProtoInstance71)
ProtoInstance78 = x3d.ProtoInstance()
ProtoInstance78.name = "x3dconnector"
ProtoInstance78.DEF = "connector3"
fieldValue79 = x3d.fieldValue()
fieldValue79.name = "startnode"
ProtoInstance80 = x3d.ProtoInstance()
ProtoInstance80.name = "point"
ProtoInstance80.USE = "G1"

fieldValue79.children.append(ProtoInstance80)

ProtoInstance78.fieldValue.append(fieldValue79)
fieldValue81 = x3d.fieldValue()
fieldValue81.name = "endnode"
ProtoInstance82 = x3d.ProtoInstance()
ProtoInstance82.name = "point"
ProtoInstance82.USE = "G4"

fieldValue81.children.append(ProtoInstance82)

ProtoInstance78.fieldValue.append(fieldValue81)
fieldValue83 = x3d.fieldValue()
fieldValue83.name = "set_startpoint"

ProtoInstance78.fieldValue.append(fieldValue83)
fieldValue84 = x3d.fieldValue()
fieldValue84.name = "set_endpoint"

ProtoInstance78.fieldValue.append(fieldValue84)

Scene7.children.append(ProtoInstance78)
ROUTE85 = x3d.ROUTE()
ROUTE85.fromNode = "G1"
ROUTE85.fromField = "translation"
ROUTE85.toNode = "connector1"
ROUTE85.toField = "set_startpoint"

Scene7.children.append(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.fromNode = "G2"
ROUTE86.fromField = "translation"
ROUTE86.toNode = "connector1"
ROUTE86.toField = "set_endpoint"

Scene7.children.append(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.fromNode = "G1"
ROUTE87.fromField = "translation"
ROUTE87.toNode = "connector2"
ROUTE87.toField = "set_startpoint"

Scene7.children.append(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.fromNode = "G3"
ROUTE88.fromField = "translation"
ROUTE88.toNode = "connector2"
ROUTE88.toField = "set_endpoint"

Scene7.children.append(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.fromNode = "G1"
ROUTE89.fromField = "translation"
ROUTE89.toNode = "connector3"
ROUTE89.toField = "set_startpoint"

Scene7.children.append(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.fromNode = "G4"
ROUTE90.fromField = "translation"
ROUTE90.toNode = "connector3"
ROUTE90.toField = "set_endpoint"

Scene7.children.append(ROUTE90)

X3D0.Scene = Scene7
f = open("../data/arc.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arc.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/arc.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
