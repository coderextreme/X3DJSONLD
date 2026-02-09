print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "x3dconnector.x3d"

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
ProtoDeclare7.name = "x3dconnector"
ProtoInterface8 = x3d.ProtoInterface()
field9 = x3d.field()
field9.accessType = "initializeOnly"
field9.type = "SFNode"
field9.name = "startnode"

ProtoInterface8.field.append(field9)
field10 = x3d.field()
field10.accessType = "initializeOnly"
field10.type = "SFNode"
field10.name = "endnode"

ProtoInterface8.field.append(field10)
field11 = x3d.field()
field11.accessType = "initializeOnly"
field11.type = "SFNode"
field11.name = "transnode"

ProtoInterface8.field.append(field11)
field12 = x3d.field()
field12.accessType = "initializeOnly"
field12.type = "SFNode"
field12.name = "rotscalenode"

ProtoInterface8.field.append(field12)
field13 = x3d.field()
field13.accessType = "inputOnly"
field13.type = "SFVec3f"
field13.name = "set_startpoint"

ProtoInterface8.field.append(field13)
field14 = x3d.field()
field14.accessType = "inputOnly"
field14.type = "SFVec3f"
field14.name = "set_endpoint"

ProtoInterface8.field.append(field14)

ProtoDeclare7.ProtoInterface = ProtoInterface8
ProtoBody15 = x3d.ProtoBody()
Script16 = x3d.Script(DEF="S1")
field17 = x3d.field()
field17.accessType = "initializeOnly"
field17.type = "SFNode"
field17.name = "startnode"

Script16.field.append(field17)
field18 = x3d.field()
field18.accessType = "initializeOnly"
field18.type = "SFNode"
field18.name = "endnode"

Script16.field.append(field18)
field19 = x3d.field()
field19.accessType = "initializeOnly"
field19.type = "SFNode"
field19.name = "transnode"

Script16.field.append(field19)
field20 = x3d.field()
field20.accessType = "initializeOnly"
field20.type = "SFNode"
field20.name = "rotscalenode"

Script16.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOnly"
field21.type = "SFVec3f"
field21.name = "set_startpoint"

Script16.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOnly"
field22.type = "SFVec3f"
field22.name = "set_endpoint"

Script16.field.append(field22)

Script16.sourceCode = '''ecmascript:\n"+
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
IS23 = x3d.IS()
connect24 = x3d.connect()
connect24.nodeField = "startnode"
connect24.protoField = "startnode"

IS23.connect.append(connect24)
connect25 = x3d.connect()
connect25.nodeField = "endnode"
connect25.protoField = "endnode"

IS23.connect.append(connect25)
connect26 = x3d.connect()
connect26.nodeField = "transnode"
connect26.protoField = "transnode"

IS23.connect.append(connect26)
connect27 = x3d.connect()
connect27.nodeField = "rotscalenode"
connect27.protoField = "rotscalenode"

IS23.connect.append(connect27)
connect28 = x3d.connect()
connect28.nodeField = "set_startpoint"
connect28.protoField = "set_startpoint"

IS23.connect.append(connect28)
connect29 = x3d.connect()
connect29.nodeField = "set_endpoint"
connect29.protoField = "set_endpoint"

IS23.connect.append(connect29)

Script16.IS = IS23

ProtoBody15.children.append(Script16)

ProtoDeclare7.ProtoBody = ProtoBody15

Scene6.children.append(ProtoDeclare7)
Viewpoint30 = x3d.Viewpoint()
Viewpoint30.description = "Only Viewpoint"
Viewpoint30.position = [0,0,5]

Scene6.children.append(Viewpoint30)
Background31 = x3d.Background()
Background31.skyColor = [(0.4, 0.4, 0.4)]

Scene6.children.append(Background31)
Transform32 = x3d.Transform(DEF="G1")
Shape33 = x3d.Shape()
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.diffuseColor = [0.7,0.2,0.2]

Appearance34.material = Material35

Shape33.appearance = Appearance34
Sphere36 = x3d.Sphere()
Sphere36.radius = 0.1

Shape33.geometry = Sphere36

Transform32.children.append(Shape33)
PlaneSensor37 = x3d.PlaneSensor(DEF="PS1")
PlaneSensor37.description = "Grab to move"

Transform32.children.append(PlaneSensor37)

Scene6.children.append(Transform32)
Transform38 = x3d.Transform(DEF="G2")
Transform38.translation = [1,-1,0.01]
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.diffuseColor = [0.2,0.7,0.2]

Appearance40.material = Material41

Shape39.appearance = Appearance40
Sphere42 = x3d.Sphere()
Sphere42.radius = 0.1

Shape39.geometry = Sphere42

Transform38.children.append(Shape39)
PlaneSensor43 = x3d.PlaneSensor(DEF="PS2")
PlaneSensor43.description = "Grab to move"
PlaneSensor43.offset = [1,-1,0.01]

Transform38.children.append(PlaneSensor43)

Scene6.children.append(Transform38)
Transform44 = x3d.Transform(DEF="transC1")
Transform45 = x3d.Transform(DEF="rotscaleC1")
Shape46 = x3d.Shape()
Appearance47 = x3d.Appearance()
Material48 = x3d.Material()
Material48.diffuseColor = [0.2,0.7,0.7]
Material48.transparency = 0.5

Appearance47.material = Material48

Shape46.appearance = Appearance47
Cylinder49 = x3d.Cylinder()
Cylinder49.radius = 0.05

Shape46.geometry = Cylinder49

Transform45.children.append(Shape46)

Transform44.children.append(Transform45)

Scene6.children.append(Transform44)
ProtoInstance50 = x3d.ProtoInstance(DEF="connector1")
ProtoInstance50.name = "x3dconnector"
fieldValue51 = x3d.fieldValue()
fieldValue51.name = "startnode"
Transform52 = x3d.Transform(USE="G1")

fieldValue51.children.append(Transform52)

ProtoInstance50.fieldValue.append(fieldValue51)
fieldValue53 = x3d.fieldValue()
fieldValue53.name = "endnode"
Transform54 = x3d.Transform(USE="G2")

fieldValue53.children.append(Transform54)

ProtoInstance50.fieldValue.append(fieldValue53)
fieldValue55 = x3d.fieldValue()
fieldValue55.name = "transnode"
Transform56 = x3d.Transform(USE="transC1")

fieldValue55.children.append(Transform56)

ProtoInstance50.fieldValue.append(fieldValue55)
fieldValue57 = x3d.fieldValue()
fieldValue57.name = "rotscalenode"
Transform58 = x3d.Transform(USE="rotscaleC1")

fieldValue57.children.append(Transform58)

ProtoInstance50.fieldValue.append(fieldValue57)

Scene6.children.append(ProtoInstance50)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "PS1"
ROUTE59.fromField = "translation_changed"
ROUTE59.toNode = "G1"
ROUTE59.toField = "set_translation"

Scene6.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "PS2"
ROUTE60.fromField = "translation_changed"
ROUTE60.toNode = "G2"
ROUTE60.toField = "set_translation"

Scene6.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "G1"
ROUTE61.fromField = "translation_changed"
ROUTE61.toNode = "connector1"
ROUTE61.toField = "set_startpoint"

Scene6.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "G2"
ROUTE62.fromField = "translation_changed"
ROUTE62.toNode = "connector1"
ROUTE62.toField = "set_endpoint"

Scene6.children.append(ROUTE62)

X3D0.Scene = Scene6
f = open("../data/x3dconnector.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/x3dconnector.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/x3dconnector.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
