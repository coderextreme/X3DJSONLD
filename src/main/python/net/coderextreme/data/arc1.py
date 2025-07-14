print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"

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

Script22.field.append(field26)

Script22.sourceCode = '''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }'''

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
ROUTE32 = x3d.ROUTE()
ROUTE32.fromNode = "MB1"
ROUTE32.fromField = "translation_changed"
ROUTE32.toNode = "node"
ROUTE32.toField = "set_translation"

Transform14.children.append(ROUTE32)

ProtoBody13.children.append(Transform14)

ProtoDeclare10.ProtoBody = ProtoBody13

Scene7.children.append(ProtoDeclare10)
Transform33 = x3d.Transform()
Transform33.DEF = "G1"
ProtoInstance34 = x3d.ProtoInstance()
ProtoInstance34.name = "point"

Transform33.children.append(ProtoInstance34)

Scene7.children.append(Transform33)
Transform35 = x3d.Transform()
Transform35.DEF = "G2"
ProtoInstance36 = x3d.ProtoInstance()
ProtoInstance36.name = "point"

Transform35.children.append(ProtoInstance36)

Scene7.children.append(Transform35)
Transform37 = x3d.Transform()
Transform37.DEF = "transC1"
Transform38 = x3d.Transform()
Transform38.DEF = "rotscaleC1"
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

Scene7.children.append(Transform37)
ProtoDeclare43 = x3d.ProtoDeclare()
ProtoDeclare43.name = "x3dconnector"
ProtoInterface44 = x3d.ProtoInterface()
field45 = x3d.field()
field45.name = "startnode"
field45.accessType = "initializeOnly"
field45.type = "SFNode"

ProtoInterface44.field.append(field45)
field46 = x3d.field()
field46.name = "endnode"
field46.accessType = "initializeOnly"
field46.type = "SFNode"

ProtoInterface44.field.append(field46)
field47 = x3d.field()
field47.name = "transnode"
field47.accessType = "inputOutput"
field47.type = "SFNode"

ProtoInterface44.field.append(field47)
field48 = x3d.field()
field48.name = "rotscalenode"
field48.accessType = "inputOutput"
field48.type = "SFNode"

ProtoInterface44.field.append(field48)
field49 = x3d.field()
field49.name = "set_startpoint"
field49.accessType = "inputOnly"
field49.type = "SFVec3f"

ProtoInterface44.field.append(field49)
field50 = x3d.field()
field50.name = "set_endpoint"
field50.accessType = "inputOnly"
field50.type = "SFVec3f"

ProtoInterface44.field.append(field50)

ProtoDeclare43.ProtoInterface = ProtoInterface44
ProtoBody51 = x3d.ProtoBody()
Script52 = x3d.Script()
Script52.DEF = "S1"
field53 = x3d.field()
field53.name = "startnode"
field53.accessType = "initializeOnly"
field53.type = "SFNode"

Script52.field.append(field53)
field54 = x3d.field()
field54.name = "endnode"
field54.accessType = "initializeOnly"
field54.type = "SFNode"

Script52.field.append(field54)
field55 = x3d.field()
field55.name = "transnode"
field55.accessType = "initializeOnly"
field55.type = "SFNode"

Script52.field.append(field55)
field56 = x3d.field()
field56.name = "rotscalenode"
field56.accessType = "initializeOnly"
field56.type = "SFNode"

Script52.field.append(field56)
field57 = x3d.field()
field57.name = "set_startpoint"
field57.accessType = "inputOnly"
field57.type = "SFVec3f"

Script52.field.append(field57)
field58 = x3d.field()
field58.name = "set_endpoint"
field58.accessType = "inputOnly"
field58.type = "SFVec3f"

Script52.field.append(field58)
IS59 = x3d.IS()
connect60 = x3d.connect()
connect60.nodeField = "startnode"
connect60.protoField = "startnode"

IS59.connect.append(connect60)
connect61 = x3d.connect()
connect61.nodeField = "endnode"
connect61.protoField = "endnode"

IS59.connect.append(connect61)
connect62 = x3d.connect()
connect62.nodeField = "transnode"
connect62.protoField = "transnode"

IS59.connect.append(connect62)
connect63 = x3d.connect()
connect63.nodeField = "rotscalenode"
connect63.protoField = "rotscalenode"

IS59.connect.append(connect63)
connect64 = x3d.connect()
connect64.nodeField = "set_startpoint"
connect64.protoField = "set_startpoint"

IS59.connect.append(connect64)
connect65 = x3d.connect()
connect65.nodeField = "set_endpoint"
connect65.protoField = "set_endpoint"

IS59.connect.append(connect65)

Script52.IS = IS59

Script52.sourceCode = '''ecmascript:\n"+
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

ProtoBody51.children.append(Script52)

ProtoDeclare43.ProtoBody = ProtoBody51

Scene7.children.append(ProtoDeclare43)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.name = "x3dconnector"
ProtoInstance66.DEF = "connector1"
fieldValue67 = x3d.fieldValue()
fieldValue67.name = "startnode"
Transform68 = x3d.Transform()
Transform68.USE = "G1"

fieldValue67.children.append(Transform68)

ProtoInstance66.fieldValue.append(fieldValue67)
fieldValue69 = x3d.fieldValue()
fieldValue69.name = "endnode"
Transform70 = x3d.Transform()
Transform70.USE = "G2"

fieldValue69.children.append(Transform70)

ProtoInstance66.fieldValue.append(fieldValue69)
fieldValue71 = x3d.fieldValue()
fieldValue71.name = "transnode"
Transform72 = x3d.Transform()
Transform72.USE = "transC1"

fieldValue71.children.append(Transform72)

ProtoInstance66.fieldValue.append(fieldValue71)
fieldValue73 = x3d.fieldValue()
fieldValue73.name = "rotscalenode"
Transform74 = x3d.Transform()
Transform74.USE = "rotscaleC1"

fieldValue73.children.append(Transform74)

ProtoInstance66.fieldValue.append(fieldValue73)
fieldValue75 = x3d.fieldValue()
fieldValue75.name = "set_startpoint"

ProtoInstance66.fieldValue.append(fieldValue75)
fieldValue76 = x3d.fieldValue()
fieldValue76.name = "set_endpoint"

ProtoInstance66.fieldValue.append(fieldValue76)

Scene7.children.append(ProtoInstance66)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromNode = "G1"
ROUTE77.fromField = "translation_changed"
ROUTE77.toNode = "connector1"
ROUTE77.toField = "set_startpoint"

Scene7.children.append(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.fromNode = "G2"
ROUTE78.fromField = "translation_changed"
ROUTE78.toNode = "connector1"
ROUTE78.toField = "set_endpoint"

Scene7.children.append(ROUTE78)

X3D0.Scene = Scene7
f = open("../data/arc1.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arc1.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
