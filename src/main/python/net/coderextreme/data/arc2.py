print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "arc2.x3d"

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
Background9.skyColor = [(0.4, 0.4, 0.4)]

Scene7.children.append(Background9)
Transform10 = x3d.Transform(DEF="G1")
Transform11 = x3d.Transform(DEF="DECLpoint_INSTANCE_node")
Shape12 = x3d.Shape()
Sphere13 = x3d.Sphere()
Sphere13.radius = 0.1

Shape12.geometry = Sphere13
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.diffuseColor = [1,0,0]

Appearance14.material = Material15

Shape12.appearance = Appearance14

Transform11.children.append(Shape12)
PositionInterpolator16 = x3d.PositionInterpolator(DEF="DECLpoint_INSTANCE_PI1")
PositionInterpolator16.key = [0,1]
PositionInterpolator16.keyValue = [(0, 0, 0),(0, 5, 0)]

Transform11.children.append(PositionInterpolator16)
Script17 = x3d.Script(DEF="DECLpoint_INSTANCE_MB1")
field18 = x3d.field()
field18.name = "translation"
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.value = [0,0,0]

Script17.field.append(field18)
field19 = x3d.field()
field19.name = "old"
field19.accessType = "inputOutput"
field19.type = "SFVec3f"
field19.value = [0,0,0]

Script17.field.append(field19)
field20 = x3d.field()
field20.name = "set_location"
field20.accessType = "inputOnly"
field20.type = "SFTime"

Script17.field.append(field20)
field21 = x3d.field()
field21.name = "keyValue"
field21.accessType = "inputOutput"
field21.type = "MFVec3f"
field21.value = [(0, 0, 0),(0, 5, 0)]

Script17.field.append(field21)

Script17.sourceCode = '''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }'''

Transform11.children.append(Script17)
TimeSensor22 = x3d.TimeSensor(DEF="DECLpoint_INSTANCE_CL1")
TimeSensor22.cycleInterval = 3
TimeSensor22.loop = True

Transform11.children.append(TimeSensor22)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromNode = "DECLpoint_INSTANCE_CL1"
ROUTE23.fromField = "cycleTime"
ROUTE23.toNode = "DECLpoint_INSTANCE_MB1"
ROUTE23.toField = "set_location"

Transform11.children.append(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "DECLpoint_INSTANCE_CL1"
ROUTE24.fromField = "fraction_changed"
ROUTE24.toNode = "DECLpoint_INSTANCE_PI1"
ROUTE24.toField = "set_fraction"

Transform11.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "DECLpoint_INSTANCE_MB1"
ROUTE25.fromField = "keyValue"
ROUTE25.toNode = "DECLpoint_INSTANCE_PI1"
ROUTE25.toField = "keyValue"

Transform11.children.append(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.fromNode = "DECLpoint_INSTANCE_PI1"
ROUTE26.fromField = "value_changed"
ROUTE26.toNode = "DECLpoint_INSTANCE_node"
ROUTE26.toField = "set_translation"

Transform11.children.append(ROUTE26)
ROUTE27 = x3d.ROUTE()
ROUTE27.fromNode = "DECLpoint_INSTANCE_MB1"
ROUTE27.fromField = "translation_changed"
ROUTE27.toNode = "DECLpoint_INSTANCE_node"
ROUTE27.toField = "set_translation"

Transform11.children.append(ROUTE27)

Transform10.children.append(Transform11)

Scene7.children.append(Transform10)
Transform28 = x3d.Transform(DEF="G2")
Transform29 = x3d.Transform(DEF="DECLpoint_INSTANCE1000_node")
Shape30 = x3d.Shape()
Sphere31 = x3d.Sphere()
Sphere31.radius = 0.1

Shape30.geometry = Sphere31
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()
Material33.diffuseColor = [1,0,0]

Appearance32.material = Material33

Shape30.appearance = Appearance32

Transform29.children.append(Shape30)
PositionInterpolator34 = x3d.PositionInterpolator(DEF="DECLpoint_INSTANCE1000_PI1")
PositionInterpolator34.key = [0,1]
PositionInterpolator34.keyValue = [(0, 0, 0),(0, 5, 0)]

Transform29.children.append(PositionInterpolator34)
Script35 = x3d.Script(DEF="DECLpoint_INSTANCE1000_MB1")
field36 = x3d.field()
field36.name = "translation"
field36.accessType = "inputOutput"
field36.type = "SFVec3f"
field36.value = [0,0,0]

Script35.field.append(field36)
field37 = x3d.field()
field37.name = "old"
field37.accessType = "inputOutput"
field37.type = "SFVec3f"
field37.value = [0,0,0]

Script35.field.append(field37)
field38 = x3d.field()
field38.name = "set_location"
field38.accessType = "inputOnly"
field38.type = "SFTime"

Script35.field.append(field38)
field39 = x3d.field()
field39.name = "keyValue"
field39.accessType = "inputOutput"
field39.type = "MFVec3f"
field39.value = [(0, 0, 0),(0, 5, 0)]

Script35.field.append(field39)

Script35.sourceCode = '''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }'''

Transform29.children.append(Script35)
TimeSensor40 = x3d.TimeSensor(DEF="DECLpoint_INSTANCE1000_CL1")
TimeSensor40.cycleInterval = 3
TimeSensor40.loop = True

Transform29.children.append(TimeSensor40)
ROUTE41 = x3d.ROUTE()
ROUTE41.fromNode = "DECLpoint_INSTANCE1000_CL1"
ROUTE41.fromField = "cycleTime"
ROUTE41.toNode = "DECLpoint_INSTANCE1000_MB1"
ROUTE41.toField = "set_location"

Transform29.children.append(ROUTE41)
ROUTE42 = x3d.ROUTE()
ROUTE42.fromNode = "DECLpoint_INSTANCE1000_CL1"
ROUTE42.fromField = "fraction_changed"
ROUTE42.toNode = "DECLpoint_INSTANCE1000_PI1"
ROUTE42.toField = "set_fraction"

Transform29.children.append(ROUTE42)
ROUTE43 = x3d.ROUTE()
ROUTE43.fromNode = "DECLpoint_INSTANCE1000_MB1"
ROUTE43.fromField = "keyValue"
ROUTE43.toNode = "DECLpoint_INSTANCE1000_PI1"
ROUTE43.toField = "keyValue"

Transform29.children.append(ROUTE43)
ROUTE44 = x3d.ROUTE()
ROUTE44.fromNode = "DECLpoint_INSTANCE1000_PI1"
ROUTE44.fromField = "value_changed"
ROUTE44.toNode = "DECLpoint_INSTANCE1000_node"
ROUTE44.toField = "set_translation"

Transform29.children.append(ROUTE44)
ROUTE45 = x3d.ROUTE()
ROUTE45.fromNode = "DECLpoint_INSTANCE1000_MB1"
ROUTE45.fromField = "translation_changed"
ROUTE45.toNode = "DECLpoint_INSTANCE1000_node"
ROUTE45.toField = "set_translation"

Transform29.children.append(ROUTE45)

Transform28.children.append(Transform29)

Scene7.children.append(Transform28)
Transform46 = x3d.Transform(DEF="transC1")
Transform47 = x3d.Transform(DEF="rotscaleC1")
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance()
Material50 = x3d.Material()
Material50.diffuseColor = [0.2,0.7,0.7]
Material50.transparency = 0.5

Appearance49.material = Material50

Shape48.appearance = Appearance49
Cylinder51 = x3d.Cylinder()
Cylinder51.radius = 0.05

Shape48.geometry = Cylinder51

Transform47.children.append(Shape48)

Transform46.children.append(Transform47)

Scene7.children.append(Transform46)
Script52 = x3d.Script(DEF="DECLx3dconnector_connector1_S1")
field53 = x3d.field()
field53.name = "startnode"
field53.accessType = "initializeOnly"
field53.type = "SFNode"
Transform54 = x3d.Transform(USE="G1")

field53.children.append(Transform54)

Script52.field.append(field53)
field55 = x3d.field()
field55.name = "endnode"
field55.accessType = "initializeOnly"
field55.type = "SFNode"
Transform56 = x3d.Transform(USE="G2")

field55.children.append(Transform56)

Script52.field.append(field55)
field57 = x3d.field()
field57.name = "transC1"
field57.accessType = "initializeOnly"
field57.type = "SFNode"
Transform58 = x3d.Transform(USE="transC1")

field57.children.append(Transform58)

Script52.field.append(field57)
field59 = x3d.field()
field59.name = "rotscaleC1"
field59.accessType = "initializeOnly"
field59.type = "SFNode"
Transform60 = x3d.Transform(USE="rotscaleC1")

field59.children.append(Transform60)

Script52.field.append(field59)
field61 = x3d.field()
field61.name = "set_startpoint"
field61.accessType = "inputOnly"
field61.type = "SFVec3f"

Script52.field.append(field61)
field62 = x3d.field()
field62.name = "set_endpoint"
field62.accessType = "inputOnly"
field62.type = "SFVec3f"

Script52.field.append(field62)

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
"	      transC1.translation = trafo.translation;\n"+
"	      rotscaleC1.rotation = trafo.rotation;\n"+
"	      rotscaleC1.scale = trafo.scale;\n"+
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

Scene7.children.append(Script52)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "G1"
ROUTE63.fromField = "translation_changed"
ROUTE63.toNode = "DECLx3dconnector_connector1_S1"
ROUTE63.toField = "set_startpoint"

Scene7.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "G2"
ROUTE64.fromField = "translation_changed"
ROUTE64.toNode = "DECLx3dconnector_connector1_S1"
ROUTE64.toField = "set_endpoint"

Scene7.children.append(ROUTE64)

X3D0.Scene = Scene7
f = open("../data/arc2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arc2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/arc2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
