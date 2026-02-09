print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "x3dconnectorProto.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "Lost, Doug Sanden I think"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "Unknown"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "Mon, 09 Feb 2026 07:13:20 GMT"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "generator"
meta7.content = "manual"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
ProtoDeclare9 = x3d.ProtoDeclare()
ProtoDeclare9.name = "x3dconnector"
ProtoInterface10 = x3d.ProtoInterface()
field11 = x3d.field()
field11.accessType = "initializeOnly"
field11.type = "SFNode"
field11.name = "startnode"

ProtoInterface10.field.append(field11)
field12 = x3d.field()
field12.accessType = "initializeOnly"
field12.type = "SFNode"
field12.name = "endnode"

ProtoInterface10.field.append(field12)
field13 = x3d.field()
field13.accessType = "initializeOnly"
field13.type = "SFNode"
field13.name = "transnode"

ProtoInterface10.field.append(field13)
field14 = x3d.field()
field14.accessType = "initializeOnly"
field14.type = "SFNode"
field14.name = "rotscalenode"

ProtoInterface10.field.append(field14)
field15 = x3d.field()
field15.accessType = "inputOnly"
field15.type = "SFVec3f"
field15.name = "set_startpoint"

ProtoInterface10.field.append(field15)
field16 = x3d.field()
field16.accessType = "inputOnly"
field16.type = "SFVec3f"
field16.name = "set_endpoint"

ProtoInterface10.field.append(field16)

ProtoDeclare9.ProtoInterface = ProtoInterface10
ProtoBody17 = x3d.ProtoBody()
Script18 = x3d.Script(DEF="S1")
Script18.directOutput = True
field19 = x3d.field()
field19.accessType = "initializeOnly"
field19.type = "SFNode"
field19.name = "startnode"

Script18.field.append(field19)
field20 = x3d.field()
field20.accessType = "initializeOnly"
field20.type = "SFNode"
field20.name = "endnode"

Script18.field.append(field20)
field21 = x3d.field()
field21.accessType = "initializeOnly"
field21.type = "SFNode"
field21.name = "transnode"

Script18.field.append(field21)
field22 = x3d.field()
field22.accessType = "initializeOnly"
field22.type = "SFNode"
field22.name = "rotscalenode"

Script18.field.append(field22)
field23 = x3d.field()
field23.accessType = "inputOnly"
field23.type = "SFVec3f"
field23.name = "set_startpoint"

Script18.field.append(field23)
field24 = x3d.field()
field24.accessType = "inputOnly"
field24.type = "SFVec3f"
field24.name = "set_endpoint"

Script18.field.append(field24)

Script18.sourceCode = '''ecmascript:\n"+
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
IS25 = x3d.IS()
connect26 = x3d.connect()
connect26.nodeField = "startnode"
connect26.protoField = "startnode"

IS25.connect.append(connect26)
connect27 = x3d.connect()
connect27.nodeField = "endnode"
connect27.protoField = "endnode"

IS25.connect.append(connect27)
connect28 = x3d.connect()
connect28.nodeField = "transnode"
connect28.protoField = "transnode"

IS25.connect.append(connect28)
connect29 = x3d.connect()
connect29.nodeField = "rotscalenode"
connect29.protoField = "rotscalenode"

IS25.connect.append(connect29)
connect30 = x3d.connect()
connect30.nodeField = "set_startpoint"
connect30.protoField = "set_startpoint"

IS25.connect.append(connect30)
connect31 = x3d.connect()
connect31.nodeField = "set_endpoint"
connect31.protoField = "set_endpoint"

IS25.connect.append(connect31)

Script18.IS = IS25

ProtoBody17.children.append(Script18)

ProtoDeclare9.ProtoBody = ProtoBody17

Scene8.children.append(ProtoDeclare9)
WorldInfo32 = x3d.WorldInfo()
WorldInfo32.title = "Connector Proto"

Scene8.children.append(WorldInfo32)
Viewpoint33 = x3d.Viewpoint()
Viewpoint33.description = "Only Viewpoint"
Viewpoint33.position = [0,0,5]

Scene8.children.append(Viewpoint33)
Background34 = x3d.Background()
Background34.skyColor = [(0.4, 0.4, 0.4)]

Scene8.children.append(Background34)
Transform35 = x3d.Transform(DEF="G1")
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.diffuseColor = [0.7,0.2,0.2]

Appearance37.material = Material38

Shape36.appearance = Appearance37
Sphere39 = x3d.Sphere()
Sphere39.radius = 0.1

Shape36.geometry = Sphere39

Transform35.children.append(Shape36)
PlaneSensor40 = x3d.PlaneSensor(DEF="PS1")
PlaneSensor40.description = "Grab to move"

Transform35.children.append(PlaneSensor40)

Scene8.children.append(Transform35)
Transform41 = x3d.Transform(DEF="G2")
Transform41.translation = [1,-1,0.01]
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.diffuseColor = [0.2,0.7,0.2]

Appearance43.material = Material44

Shape42.appearance = Appearance43
Sphere45 = x3d.Sphere()
Sphere45.radius = 0.1

Shape42.geometry = Sphere45

Transform41.children.append(Shape42)
PlaneSensor46 = x3d.PlaneSensor(DEF="PS2")
PlaneSensor46.description = "Grab to move"
PlaneSensor46.offset = [1,-1,0.01]

Transform41.children.append(PlaneSensor46)

Scene8.children.append(Transform41)
Transform47 = x3d.Transform(DEF="G3")
Transform47.translation = [1,1,0.01]
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance()
Material50 = x3d.Material()
Material50.diffuseColor = [0.2,0.7,0.2]

Appearance49.material = Material50

Shape48.appearance = Appearance49
Sphere51 = x3d.Sphere()
Sphere51.radius = 0.1

Shape48.geometry = Sphere51

Transform47.children.append(Shape48)
PlaneSensor52 = x3d.PlaneSensor(DEF="PS3")
PlaneSensor52.description = "Grab to move"
PlaneSensor52.offset = [1,1,0.01]

Transform47.children.append(PlaneSensor52)

Scene8.children.append(Transform47)
Transform53 = x3d.Transform(DEF="G4")
Transform53.translation = [-1,1,0.01]
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.diffuseColor = [0.2,0.7,0.2]

Appearance55.material = Material56

Shape54.appearance = Appearance55
Sphere57 = x3d.Sphere()
Sphere57.radius = 0.1

Shape54.geometry = Sphere57

Transform53.children.append(Shape54)
PlaneSensor58 = x3d.PlaneSensor(DEF="PS4")
PlaneSensor58.description = "Grab to move"
PlaneSensor58.offset = [-1,1,0.01]

Transform53.children.append(PlaneSensor58)

Scene8.children.append(Transform53)
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

Scene8.children.append(Transform59)
Transform65 = x3d.Transform(DEF="transC2")
Transform66 = x3d.Transform(DEF="rotscaleC2")
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.diffuseColor = [0.2,0.7,0.7]
Material69.transparency = 0.5

Appearance68.material = Material69

Shape67.appearance = Appearance68
Cylinder70 = x3d.Cylinder()
Cylinder70.radius = 0.05

Shape67.geometry = Cylinder70

Transform66.children.append(Shape67)

Transform65.children.append(Transform66)

Scene8.children.append(Transform65)
Transform71 = x3d.Transform(DEF="transC3")
Transform72 = x3d.Transform(DEF="rotscaleC3")
Shape73 = x3d.Shape()
Appearance74 = x3d.Appearance()
Material75 = x3d.Material()
Material75.diffuseColor = [0.2,0.7,0.7]
Material75.transparency = 0.5

Appearance74.material = Material75

Shape73.appearance = Appearance74
Cylinder76 = x3d.Cylinder()
Cylinder76.radius = 0.05

Shape73.geometry = Cylinder76

Transform72.children.append(Shape73)

Transform71.children.append(Transform72)

Scene8.children.append(Transform71)
ProtoInstance77 = x3d.ProtoInstance(DEF="connector1")
ProtoInstance77.name = "x3dconnector"
fieldValue78 = x3d.fieldValue()
fieldValue78.name = "startnode"
Transform79 = x3d.Transform(USE="G1")

fieldValue78.children.append(Transform79)

ProtoInstance77.fieldValue.append(fieldValue78)
fieldValue80 = x3d.fieldValue()
fieldValue80.name = "endnode"
Transform81 = x3d.Transform(USE="G2")

fieldValue80.children.append(Transform81)

ProtoInstance77.fieldValue.append(fieldValue80)
fieldValue82 = x3d.fieldValue()
fieldValue82.name = "transnode"
Transform83 = x3d.Transform(USE="transC1")

fieldValue82.children.append(Transform83)

ProtoInstance77.fieldValue.append(fieldValue82)
fieldValue84 = x3d.fieldValue()
fieldValue84.name = "rotscalenode"
Transform85 = x3d.Transform(USE="rotscaleC1")

fieldValue84.children.append(Transform85)

ProtoInstance77.fieldValue.append(fieldValue84)

Scene8.children.append(ProtoInstance77)
ProtoInstance86 = x3d.ProtoInstance(DEF="connector2")
ProtoInstance86.name = "x3dconnector"
fieldValue87 = x3d.fieldValue()
fieldValue87.name = "startnode"
Transform88 = x3d.Transform(USE="G1")

fieldValue87.children.append(Transform88)

ProtoInstance86.fieldValue.append(fieldValue87)
fieldValue89 = x3d.fieldValue()
fieldValue89.name = "endnode"
Transform90 = x3d.Transform(USE="G3")

fieldValue89.children.append(Transform90)

ProtoInstance86.fieldValue.append(fieldValue89)
fieldValue91 = x3d.fieldValue()
fieldValue91.name = "transnode"
Transform92 = x3d.Transform(USE="transC2")

fieldValue91.children.append(Transform92)

ProtoInstance86.fieldValue.append(fieldValue91)
fieldValue93 = x3d.fieldValue()
fieldValue93.name = "rotscalenode"
Transform94 = x3d.Transform(USE="rotscaleC2")

fieldValue93.children.append(Transform94)

ProtoInstance86.fieldValue.append(fieldValue93)

Scene8.children.append(ProtoInstance86)
ProtoInstance95 = x3d.ProtoInstance(DEF="connector3")
ProtoInstance95.name = "x3dconnector"
fieldValue96 = x3d.fieldValue()
fieldValue96.name = "startnode"
Transform97 = x3d.Transform(USE="G1")

fieldValue96.children.append(Transform97)

ProtoInstance95.fieldValue.append(fieldValue96)
fieldValue98 = x3d.fieldValue()
fieldValue98.name = "endnode"
Transform99 = x3d.Transform(USE="G4")

fieldValue98.children.append(Transform99)

ProtoInstance95.fieldValue.append(fieldValue98)
fieldValue100 = x3d.fieldValue()
fieldValue100.name = "transnode"
Transform101 = x3d.Transform(USE="transC3")

fieldValue100.children.append(Transform101)

ProtoInstance95.fieldValue.append(fieldValue100)
fieldValue102 = x3d.fieldValue()
fieldValue102.name = "rotscalenode"
Transform103 = x3d.Transform(USE="rotscaleC3")

fieldValue102.children.append(Transform103)

ProtoInstance95.fieldValue.append(fieldValue102)

Scene8.children.append(ProtoInstance95)
ROUTE104 = x3d.ROUTE()
ROUTE104.fromNode = "PS1"
ROUTE104.fromField = "translation_changed"
ROUTE104.toNode = "G1"
ROUTE104.toField = "set_translation"

Scene8.children.append(ROUTE104)
ROUTE105 = x3d.ROUTE()
ROUTE105.fromNode = "PS2"
ROUTE105.fromField = "translation_changed"
ROUTE105.toNode = "G2"
ROUTE105.toField = "set_translation"

Scene8.children.append(ROUTE105)
ROUTE106 = x3d.ROUTE()
ROUTE106.fromNode = "PS3"
ROUTE106.fromField = "translation_changed"
ROUTE106.toNode = "G3"
ROUTE106.toField = "set_translation"

Scene8.children.append(ROUTE106)
ROUTE107 = x3d.ROUTE()
ROUTE107.fromNode = "PS4"
ROUTE107.fromField = "translation_changed"
ROUTE107.toNode = "G4"
ROUTE107.toField = "set_translation"

Scene8.children.append(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.fromNode = "G1"
ROUTE108.fromField = "translation_changed"
ROUTE108.toNode = "connector1"
ROUTE108.toField = "set_startpoint"

Scene8.children.append(ROUTE108)
ROUTE109 = x3d.ROUTE()
ROUTE109.fromNode = "G2"
ROUTE109.fromField = "translation_changed"
ROUTE109.toNode = "connector1"
ROUTE109.toField = "set_endpoint"

Scene8.children.append(ROUTE109)
ROUTE110 = x3d.ROUTE()
ROUTE110.fromNode = "G1"
ROUTE110.fromField = "translation_changed"
ROUTE110.toNode = "connector2"
ROUTE110.toField = "set_startpoint"

Scene8.children.append(ROUTE110)
ROUTE111 = x3d.ROUTE()
ROUTE111.fromNode = "G3"
ROUTE111.fromField = "translation_changed"
ROUTE111.toNode = "connector2"
ROUTE111.toField = "set_endpoint"

Scene8.children.append(ROUTE111)
ROUTE112 = x3d.ROUTE()
ROUTE112.fromNode = "G1"
ROUTE112.fromField = "translation_changed"
ROUTE112.toNode = "connector3"
ROUTE112.toField = "set_startpoint"

Scene8.children.append(ROUTE112)
ROUTE113 = x3d.ROUTE()
ROUTE113.fromNode = "G4"
ROUTE113.fromField = "translation_changed"
ROUTE113.toNode = "connector3"
ROUTE113.toField = "set_endpoint"

Scene8.children.append(ROUTE113)

X3D0.Scene = Scene8
f = open("../data/x3dconnectorProto.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/x3dconnectorProto.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/x3dconnectorProto.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
