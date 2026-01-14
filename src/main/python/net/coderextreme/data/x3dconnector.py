print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"

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
Transform10 = x3d.Transform()
Transform10.DEF = "G1"
Shape11 = x3d.Shape()
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()
Material13.diffuseColor = [0.7,0.2,0.2]

Appearance12.material = Material13

Shape11.appearance = Appearance12
Sphere14 = x3d.Sphere()
Sphere14.radius = 0.1

Shape11.geometry = Sphere14

Transform10.children.append(Shape11)
PlaneSensor15 = x3d.PlaneSensor()
PlaneSensor15.description = "Grab to move"
PlaneSensor15.DEF = "PS1"

Transform10.children.append(PlaneSensor15)
ROUTE16 = x3d.ROUTE()
ROUTE16.fromNode = "PS1"
ROUTE16.fromField = "translation_changed"
ROUTE16.toNode = "G1"
ROUTE16.toField = "set_translation"

Transform10.children.append(ROUTE16)

Scene7.children.append(Transform10)
Transform17 = x3d.Transform()
Transform17.DEF = "G2"
Transform17.translation = [1,-1,0.01]
Shape18 = x3d.Shape()
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.diffuseColor = [0.2,0.7,0.2]

Appearance19.material = Material20

Shape18.appearance = Appearance19
Sphere21 = x3d.Sphere()
Sphere21.radius = 0.1

Shape18.geometry = Sphere21

Transform17.children.append(Shape18)
PlaneSensor22 = x3d.PlaneSensor()
PlaneSensor22.description = "Grab to move"
PlaneSensor22.offset = [1,-1,0.01]
PlaneSensor22.DEF = "PS2"

Transform17.children.append(PlaneSensor22)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromNode = "PS2"
ROUTE23.fromField = "translation_changed"
ROUTE23.toNode = "G2"
ROUTE23.toField = "set_translation"

Transform17.children.append(ROUTE23)

Scene7.children.append(Transform17)
Transform24 = x3d.Transform()
Transform24.DEF = "transC1"
Transform25 = x3d.Transform()
Transform25.DEF = "rotscaleC1"
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.diffuseColor = [0.2,0.7,0.7]
Material28.transparency = 0.5

Appearance27.material = Material28

Shape26.appearance = Appearance27
Cylinder29 = x3d.Cylinder()
Cylinder29.radius = 0.05

Shape26.geometry = Cylinder29

Transform25.children.append(Shape26)

Transform24.children.append(Transform25)

Scene7.children.append(Transform24)
ProtoDeclare30 = x3d.ProtoDeclare()
ProtoDeclare30.name = "x3dconnector"
ProtoInterface31 = x3d.ProtoInterface()
field32 = x3d.field()
field32.name = "startnode"
field32.accessType = "initializeOnly"
field32.type = "SFNode"

ProtoInterface31.field.append(field32)
field33 = x3d.field()
field33.name = "endnode"
field33.accessType = "initializeOnly"
field33.type = "SFNode"

ProtoInterface31.field.append(field33)
field34 = x3d.field()
field34.name = "transnode"
field34.accessType = "initializeOnly"
field34.type = "SFNode"

ProtoInterface31.field.append(field34)
field35 = x3d.field()
field35.name = "rotscalenode"
field35.accessType = "initializeOnly"
field35.type = "SFNode"

ProtoInterface31.field.append(field35)
field36 = x3d.field()
field36.name = "set_startpoint"
field36.accessType = "inputOnly"
field36.type = "SFVec3f"

ProtoInterface31.field.append(field36)
field37 = x3d.field()
field37.name = "set_endpoint"
field37.accessType = "inputOnly"
field37.type = "SFVec3f"

ProtoInterface31.field.append(field37)

ProtoDeclare30.ProtoInterface = ProtoInterface31
ProtoBody38 = x3d.ProtoBody()
Script39 = x3d.Script()
Script39.DEF = "S1"
field40 = x3d.field()
field40.name = "startnode"
field40.accessType = "initializeOnly"
field40.type = "SFNode"

Script39.field.append(field40)
field41 = x3d.field()
field41.name = "endnode"
field41.accessType = "initializeOnly"
field41.type = "SFNode"

Script39.field.append(field41)
field42 = x3d.field()
field42.name = "transnode"
field42.accessType = "initializeOnly"
field42.type = "SFNode"

Script39.field.append(field42)
field43 = x3d.field()
field43.name = "rotscalenode"
field43.accessType = "initializeOnly"
field43.type = "SFNode"

Script39.field.append(field43)
field44 = x3d.field()
field44.name = "set_startpoint"
field44.accessType = "inputOnly"
field44.type = "SFVec3f"

Script39.field.append(field44)
field45 = x3d.field()
field45.name = "set_endpoint"
field45.accessType = "inputOnly"
field45.type = "SFVec3f"

Script39.field.append(field45)
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
connect49.nodeField = "transnode"
connect49.protoField = "transnode"

IS46.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "rotscalenode"
connect50.protoField = "rotscalenode"

IS46.connect.append(connect50)
connect51 = x3d.connect()
connect51.nodeField = "set_startpoint"
connect51.protoField = "set_startpoint"

IS46.connect.append(connect51)
connect52 = x3d.connect()
connect52.nodeField = "set_endpoint"
connect52.protoField = "set_endpoint"

IS46.connect.append(connect52)

Script39.IS = IS46

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

ProtoBody38.children.append(Script39)

ProtoDeclare30.ProtoBody = ProtoBody38

Scene7.children.append(ProtoDeclare30)
ProtoInstance53 = x3d.ProtoInstance()
ProtoInstance53.name = "x3dconnector"
ProtoInstance53.DEF = "connector1"
fieldValue54 = x3d.fieldValue()
fieldValue54.name = "startnode"
Transform55 = x3d.Transform()
Transform55.USE = "G1"

fieldValue54.children.append(Transform55)

ProtoInstance53.fieldValue.append(fieldValue54)
fieldValue56 = x3d.fieldValue()
fieldValue56.name = "endnode"
Transform57 = x3d.Transform()
Transform57.USE = "G2"

fieldValue56.children.append(Transform57)

ProtoInstance53.fieldValue.append(fieldValue56)
fieldValue58 = x3d.fieldValue()
fieldValue58.name = "transnode"
Transform59 = x3d.Transform()
Transform59.USE = "transC1"

fieldValue58.children.append(Transform59)

ProtoInstance53.fieldValue.append(fieldValue58)
fieldValue60 = x3d.fieldValue()
fieldValue60.name = "rotscalenode"
Transform61 = x3d.Transform()
Transform61.USE = "rotscaleC1"

fieldValue60.children.append(Transform61)

ProtoInstance53.fieldValue.append(fieldValue60)
"""<fieldValue name='set_startpoint'> </fieldValue> <fieldValue name='set_endpoint'> </fieldValue>"""

Scene7.children.append(ProtoInstance53)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "G1"
ROUTE62.fromField = "translation_changed"
ROUTE62.toNode = "connector1"
ROUTE62.toField = "set_startpoint"

Scene7.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "G2"
ROUTE63.fromField = "translation_changed"
ROUTE63.toNode = "connector1"
ROUTE63.toField = "set_endpoint"

Scene7.children.append(ROUTE63)

X3D0.Scene = Scene7
f = open("../data/x3dconnector.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/x3dconnector.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/x3dconnector.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
