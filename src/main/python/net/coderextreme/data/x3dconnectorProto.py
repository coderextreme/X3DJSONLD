print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta5.content = "July 30 2023"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "manual"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "description"
meta8.content = "a generic proto to connect two objects"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "license"
meta9.content = "https://www.web3d.org/x3d/content/examples/license.html"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "Connector Proto"

Scene10.children.append(WorldInfo11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.position = [0,0,5]
Viewpoint12.description = "Only Viewpoint"

Scene10.children.append(Viewpoint12)
Background13 = x3d.Background()
Background13.skyColor = [(0.4, 0.4, 0.4)]

Scene10.children.append(Background13)
Transform14 = x3d.Transform()
Transform14.DEF = "G1"
Shape15 = x3d.Shape()
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.diffuseColor = [0.7,0.2,0.2]

Appearance16.material = Material17

Shape15.appearance = Appearance16
Sphere18 = x3d.Sphere()
Sphere18.radius = 0.1

Shape15.geometry = Sphere18

Transform14.children.append(Shape15)
PlaneSensor19 = x3d.PlaneSensor()
PlaneSensor19.description = "Grab to move"
PlaneSensor19.DEF = "PS1"

Transform14.children.append(PlaneSensor19)
ROUTE20 = x3d.ROUTE()
ROUTE20.fromNode = "PS1"
ROUTE20.fromField = "translation_changed"
ROUTE20.toNode = "G1"
ROUTE20.toField = "set_translation"

Transform14.children.append(ROUTE20)

Scene10.children.append(Transform14)
Transform21 = x3d.Transform()
Transform21.DEF = "G2"
Transform21.translation = [1,-1,0.01]
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.diffuseColor = [0.2,0.7,0.2]

Appearance23.material = Material24

Shape22.appearance = Appearance23
Sphere25 = x3d.Sphere()
Sphere25.radius = 0.1

Shape22.geometry = Sphere25

Transform21.children.append(Shape22)
PlaneSensor26 = x3d.PlaneSensor()
PlaneSensor26.description = "Grab to move"
PlaneSensor26.offset = [1,-1,0.01]
PlaneSensor26.DEF = "PS2"

Transform21.children.append(PlaneSensor26)
ROUTE27 = x3d.ROUTE()
ROUTE27.fromNode = "PS2"
ROUTE27.fromField = "translation_changed"
ROUTE27.toNode = "G2"
ROUTE27.toField = "set_translation"

Transform21.children.append(ROUTE27)

Scene10.children.append(Transform21)
Transform28 = x3d.Transform()
Transform28.DEF = "G3"
Transform28.translation = [1,1,0.01]
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
Material31.diffuseColor = [0.2,0.7,0.2]

Appearance30.material = Material31

Shape29.appearance = Appearance30
Sphere32 = x3d.Sphere()
Sphere32.radius = 0.1

Shape29.geometry = Sphere32

Transform28.children.append(Shape29)
PlaneSensor33 = x3d.PlaneSensor()
PlaneSensor33.description = "Grab to move"
PlaneSensor33.offset = [1,1,0.01]
PlaneSensor33.DEF = "PS3"

Transform28.children.append(PlaneSensor33)
ROUTE34 = x3d.ROUTE()
ROUTE34.fromNode = "PS3"
ROUTE34.fromField = "translation_changed"
ROUTE34.toNode = "G3"
ROUTE34.toField = "set_translation"

Transform28.children.append(ROUTE34)

Scene10.children.append(Transform28)
Transform35 = x3d.Transform()
Transform35.DEF = "G4"
Transform35.translation = [-1,1,0.01]
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.diffuseColor = [0.2,0.7,0.2]

Appearance37.material = Material38

Shape36.appearance = Appearance37
Sphere39 = x3d.Sphere()
Sphere39.radius = 0.1

Shape36.geometry = Sphere39

Transform35.children.append(Shape36)
PlaneSensor40 = x3d.PlaneSensor()
PlaneSensor40.description = "Grab to move"
PlaneSensor40.offset = [-1,1,0.01]
PlaneSensor40.DEF = "PS4"

Transform35.children.append(PlaneSensor40)
ROUTE41 = x3d.ROUTE()
ROUTE41.fromNode = "PS4"
ROUTE41.fromField = "translation_changed"
ROUTE41.toNode = "G4"
ROUTE41.toField = "set_translation"

Transform35.children.append(ROUTE41)

Scene10.children.append(Transform35)
Transform42 = x3d.Transform()
Transform42.DEF = "transC1"
Transform43 = x3d.Transform()
Transform43.DEF = "rotscaleC1"
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.diffuseColor = [0.2,0.7,0.7]
Material46.transparency = 0.5

Appearance45.material = Material46

Shape44.appearance = Appearance45
Cylinder47 = x3d.Cylinder()
Cylinder47.radius = 0.05

Shape44.geometry = Cylinder47

Transform43.children.append(Shape44)

Transform42.children.append(Transform43)

Scene10.children.append(Transform42)
Transform48 = x3d.Transform()
Transform48.DEF = "transC2"
Transform49 = x3d.Transform()
Transform49.DEF = "rotscaleC2"
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.diffuseColor = [0.2,0.7,0.7]
Material52.transparency = 0.5

Appearance51.material = Material52

Shape50.appearance = Appearance51
Cylinder53 = x3d.Cylinder()
Cylinder53.radius = 0.05

Shape50.geometry = Cylinder53

Transform49.children.append(Shape50)

Transform48.children.append(Transform49)

Scene10.children.append(Transform48)
Transform54 = x3d.Transform()
Transform54.DEF = "transC3"
Transform55 = x3d.Transform()
Transform55.DEF = "rotscaleC3"
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()
Material58.diffuseColor = [0.2,0.7,0.7]
Material58.transparency = 0.5

Appearance57.material = Material58

Shape56.appearance = Appearance57
Cylinder59 = x3d.Cylinder()
Cylinder59.radius = 0.05

Shape56.geometry = Cylinder59

Transform55.children.append(Shape56)

Transform54.children.append(Transform55)

Scene10.children.append(Transform54)
ProtoDeclare60 = x3d.ProtoDeclare()
ProtoDeclare60.name = "x3dconnector"
ProtoInterface61 = x3d.ProtoInterface()
field62 = x3d.field()
field62.name = "startnode"
field62.accessType = "initializeOnly"
field62.type = "SFNode"

ProtoInterface61.field.append(field62)
field63 = x3d.field()
field63.name = "endnode"
field63.accessType = "initializeOnly"
field63.type = "SFNode"

ProtoInterface61.field.append(field63)
field64 = x3d.field()
field64.name = "transnode"
field64.accessType = "initializeOnly"
field64.type = "SFNode"

ProtoInterface61.field.append(field64)
field65 = x3d.field()
field65.name = "rotscalenode"
field65.accessType = "initializeOnly"
field65.type = "SFNode"

ProtoInterface61.field.append(field65)
field66 = x3d.field()
field66.name = "set_startpoint"
field66.accessType = "inputOnly"
field66.type = "SFVec3f"

ProtoInterface61.field.append(field66)
field67 = x3d.field()
field67.name = "set_endpoint"
field67.accessType = "inputOnly"
field67.type = "SFVec3f"

ProtoInterface61.field.append(field67)

ProtoDeclare60.ProtoInterface = ProtoInterface61
ProtoBody68 = x3d.ProtoBody()
Script69 = x3d.Script()
Script69.DEF = "S1"
Script69.directOutput = True
field70 = x3d.field()
field70.name = "startnode"
field70.accessType = "initializeOnly"
field70.type = "SFNode"

Script69.field.append(field70)
field71 = x3d.field()
field71.name = "endnode"
field71.accessType = "initializeOnly"
field71.type = "SFNode"

Script69.field.append(field71)
field72 = x3d.field()
field72.name = "transnode"
field72.accessType = "initializeOnly"
field72.type = "SFNode"

Script69.field.append(field72)
field73 = x3d.field()
field73.name = "rotscalenode"
field73.accessType = "initializeOnly"
field73.type = "SFNode"

Script69.field.append(field73)
field74 = x3d.field()
field74.name = "set_startpoint"
field74.accessType = "inputOnly"
field74.type = "SFVec3f"

Script69.field.append(field74)
field75 = x3d.field()
field75.name = "set_endpoint"
field75.accessType = "inputOnly"
field75.type = "SFVec3f"

Script69.field.append(field75)
IS76 = x3d.IS()
connect77 = x3d.connect()
connect77.nodeField = "startnode"
connect77.protoField = "startnode"

IS76.connect.append(connect77)
connect78 = x3d.connect()
connect78.nodeField = "endnode"
connect78.protoField = "endnode"

IS76.connect.append(connect78)
connect79 = x3d.connect()
connect79.nodeField = "transnode"
connect79.protoField = "transnode"

IS76.connect.append(connect79)
connect80 = x3d.connect()
connect80.nodeField = "rotscalenode"
connect80.protoField = "rotscalenode"

IS76.connect.append(connect80)
connect81 = x3d.connect()
connect81.nodeField = "set_startpoint"
connect81.protoField = "set_startpoint"

IS76.connect.append(connect81)
connect82 = x3d.connect()
connect82.nodeField = "set_endpoint"
connect82.protoField = "set_endpoint"

IS76.connect.append(connect82)

Script69.IS = IS76

Script69.sourceCode = '''ecmascript:\n"+
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

ProtoBody68.children.append(Script69)

ProtoDeclare60.ProtoBody = ProtoBody68

Scene10.children.append(ProtoDeclare60)
ProtoInstance83 = x3d.ProtoInstance()
ProtoInstance83.name = "x3dconnector"
ProtoInstance83.DEF = "connector1"
fieldValue84 = x3d.fieldValue()
fieldValue84.name = "startnode"
Transform85 = x3d.Transform()
Transform85.USE = "G1"

fieldValue84.children.append(Transform85)

ProtoInstance83.fieldValue.append(fieldValue84)
fieldValue86 = x3d.fieldValue()
fieldValue86.name = "endnode"
Transform87 = x3d.Transform()
Transform87.USE = "G2"

fieldValue86.children.append(Transform87)

ProtoInstance83.fieldValue.append(fieldValue86)
fieldValue88 = x3d.fieldValue()
fieldValue88.name = "transnode"
Transform89 = x3d.Transform()
Transform89.USE = "transC1"

fieldValue88.children.append(Transform89)

ProtoInstance83.fieldValue.append(fieldValue88)
fieldValue90 = x3d.fieldValue()
fieldValue90.name = "rotscalenode"
Transform91 = x3d.Transform()
Transform91.USE = "rotscaleC1"

fieldValue90.children.append(Transform91)

ProtoInstance83.fieldValue.append(fieldValue90)

Scene10.children.append(ProtoInstance83)
ProtoInstance92 = x3d.ProtoInstance()
ProtoInstance92.name = "x3dconnector"
ProtoInstance92.DEF = "connector2"
fieldValue93 = x3d.fieldValue()
fieldValue93.name = "startnode"
Transform94 = x3d.Transform()
Transform94.USE = "G1"

fieldValue93.children.append(Transform94)

ProtoInstance92.fieldValue.append(fieldValue93)
fieldValue95 = x3d.fieldValue()
fieldValue95.name = "endnode"
Transform96 = x3d.Transform()
Transform96.USE = "G3"

fieldValue95.children.append(Transform96)

ProtoInstance92.fieldValue.append(fieldValue95)
fieldValue97 = x3d.fieldValue()
fieldValue97.name = "transnode"
Transform98 = x3d.Transform()
Transform98.USE = "transC2"

fieldValue97.children.append(Transform98)

ProtoInstance92.fieldValue.append(fieldValue97)
fieldValue99 = x3d.fieldValue()
fieldValue99.name = "rotscalenode"
Transform100 = x3d.Transform()
Transform100.USE = "rotscaleC2"

fieldValue99.children.append(Transform100)

ProtoInstance92.fieldValue.append(fieldValue99)

Scene10.children.append(ProtoInstance92)
ProtoInstance101 = x3d.ProtoInstance()
ProtoInstance101.name = "x3dconnector"
ProtoInstance101.DEF = "connector3"
fieldValue102 = x3d.fieldValue()
fieldValue102.name = "startnode"
Transform103 = x3d.Transform()
Transform103.USE = "G1"

fieldValue102.children.append(Transform103)

ProtoInstance101.fieldValue.append(fieldValue102)
fieldValue104 = x3d.fieldValue()
fieldValue104.name = "endnode"
Transform105 = x3d.Transform()
Transform105.USE = "G4"

fieldValue104.children.append(Transform105)

ProtoInstance101.fieldValue.append(fieldValue104)
fieldValue106 = x3d.fieldValue()
fieldValue106.name = "transnode"
Transform107 = x3d.Transform()
Transform107.USE = "transC3"

fieldValue106.children.append(Transform107)

ProtoInstance101.fieldValue.append(fieldValue106)
fieldValue108 = x3d.fieldValue()
fieldValue108.name = "rotscalenode"
Transform109 = x3d.Transform()
Transform109.USE = "rotscaleC3"

fieldValue108.children.append(Transform109)

ProtoInstance101.fieldValue.append(fieldValue108)

Scene10.children.append(ProtoInstance101)
ROUTE110 = x3d.ROUTE()
ROUTE110.fromNode = "G1"
ROUTE110.fromField = "translation_changed"
ROUTE110.toNode = "connector1"
ROUTE110.toField = "set_startpoint"

Scene10.children.append(ROUTE110)
ROUTE111 = x3d.ROUTE()
ROUTE111.fromNode = "G2"
ROUTE111.fromField = "translation_changed"
ROUTE111.toNode = "connector1"
ROUTE111.toField = "set_endpoint"

Scene10.children.append(ROUTE111)
ROUTE112 = x3d.ROUTE()
ROUTE112.fromNode = "G1"
ROUTE112.fromField = "translation_changed"
ROUTE112.toNode = "connector2"
ROUTE112.toField = "set_startpoint"

Scene10.children.append(ROUTE112)
ROUTE113 = x3d.ROUTE()
ROUTE113.fromNode = "G3"
ROUTE113.fromField = "translation_changed"
ROUTE113.toNode = "connector2"
ROUTE113.toField = "set_endpoint"

Scene10.children.append(ROUTE113)
ROUTE114 = x3d.ROUTE()
ROUTE114.fromNode = "G1"
ROUTE114.fromField = "translation_changed"
ROUTE114.toNode = "connector3"
ROUTE114.toField = "set_startpoint"

Scene10.children.append(ROUTE114)
ROUTE115 = x3d.ROUTE()
ROUTE115.fromNode = "G4"
ROUTE115.fromField = "translation_changed"
ROUTE115.toNode = "connector3"
ROUTE115.toField = "set_endpoint"

Scene10.children.append(ROUTE115)

X3D0.Scene = Scene10
f = open("../data/x3dconnectorProto.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/x3dconnectorProto.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/x3dconnectorProto.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
