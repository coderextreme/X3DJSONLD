print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta4.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "manual"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
Viewpoint7 = x3d.Viewpoint()
Viewpoint7.description = "Only Viewpoint"
Viewpoint7.position = [0,0,5]

Scene6.children.append(Viewpoint7)
Background8 = x3d.Background()
Background8.skyColor = [(0.4, 0.4, 0.4)]

Scene6.children.append(Background8)
Transform9 = x3d.Transform(DEF="G1")
Transform10 = x3d.Transform(DEF="DECLpoint_INSTANCE_node")
Transform10.translation = [0,0.995,0]
Shape11 = x3d.Shape()
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()
Material13.diffuseColor = [1,0,0]

Appearance12.material = Material13

Shape11.appearance = Appearance12
Sphere14 = x3d.Sphere()
Sphere14.radius = 0.1

Shape11.geometry = Sphere14

Transform10.children.append(Shape11)
PositionInterpolator15 = x3d.PositionInterpolator(DEF="DECLpoint_INSTANCE_PI1")
PositionInterpolator15.key = [0,1]
PositionInterpolator15.keyValue = [(0, 0, 0),(0, 5, 0)]

Transform10.children.append(PositionInterpolator15)
Script16 = x3d.Script(DEF="DECLpoint_INSTANCE_MB1")
field17 = x3d.field()
field17.accessType = "inputOutput"
field17.type = "SFVec3f"
field17.name = "translation"

Script16.field.append(field17)
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.name = "old"

Script16.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOnly"
field19.type = "SFTime"
field19.name = "set_location"

Script16.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "MFVec3f"
field20.name = "keyValue"
field20.value = [(0, 0, 0),(0, 5, 0)]

Script16.field.append(field20)

Script16.sourceCode = '''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }'''

Transform10.children.append(Script16)
TimeSensor21 = x3d.TimeSensor(DEF="DECLpoint_INSTANCE_CL1")
TimeSensor21.cycleInterval = 3
TimeSensor21.loop = True

Transform10.children.append(TimeSensor21)

Transform9.children.append(Transform10)

Scene6.children.append(Transform9)
Transform22 = x3d.Transform(DEF="G2")
Transform23 = x3d.Transform(DEF="DECLpoint_INSTANCE1000_node")
Transform23.translation = [0,0.995,0]
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.diffuseColor = [1,0,0]

Appearance25.material = Material26

Shape24.appearance = Appearance25
Sphere27 = x3d.Sphere()
Sphere27.radius = 0.1

Shape24.geometry = Sphere27

Transform23.children.append(Shape24)
PositionInterpolator28 = x3d.PositionInterpolator(DEF="DECLpoint_INSTANCE1000_PI1")
PositionInterpolator28.key = [0,1]
PositionInterpolator28.keyValue = [(0, 0, 0),(0, 5, 0)]

Transform23.children.append(PositionInterpolator28)
Script29 = x3d.Script(DEF="DECLpoint_INSTANCE1000_MB1")
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFVec3f"
field30.name = "translation"

Script29.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFVec3f"
field31.name = "old"

Script29.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOnly"
field32.type = "SFTime"
field32.name = "set_location"

Script29.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "MFVec3f"
field33.name = "keyValue"
field33.value = [(0, 0, 0),(0, 5, 0)]

Script29.field.append(field33)

Script29.sourceCode = '''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }'''

Transform23.children.append(Script29)
TimeSensor34 = x3d.TimeSensor(DEF="DECLpoint_INSTANCE1000_CL1")
TimeSensor34.cycleInterval = 3
TimeSensor34.loop = True

Transform23.children.append(TimeSensor34)

Transform22.children.append(Transform23)

Scene6.children.append(Transform22)
Transform35 = x3d.Transform(DEF="transC1")
Transform36 = x3d.Transform(DEF="rotscaleC1")
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.diffuseColor = [0.2,0.7,0.7]
Material39.transparency = 0.5

Appearance38.material = Material39

Shape37.appearance = Appearance38
Cylinder40 = x3d.Cylinder()
Cylinder40.radius = 0.05

Shape37.geometry = Cylinder40

Transform36.children.append(Shape37)

Transform35.children.append(Transform36)

Scene6.children.append(Transform35)
Script41 = x3d.Script(DEF="DECLx3dconnector_connector1_S1")
field42 = x3d.field()
field42.accessType = "initializeOnly"
field42.type = "SFNode"
field42.name = "startnode"
Transform43 = x3d.Transform(USE="G1")

field42.children.append(Transform43)

Script41.field.append(field42)
field44 = x3d.field()
field44.accessType = "initializeOnly"
field44.type = "SFNode"
field44.name = "endnode"
Transform45 = x3d.Transform(USE="G2")

field44.children.append(Transform45)

Script41.field.append(field44)
field46 = x3d.field()
field46.accessType = "initializeOnly"
field46.type = "SFNode"
field46.name = "transC1"
Transform47 = x3d.Transform(USE="transC1")

field46.children.append(Transform47)

Script41.field.append(field46)
field48 = x3d.field()
field48.accessType = "initializeOnly"
field48.type = "SFNode"
field48.name = "rotscaleC1"
Transform49 = x3d.Transform(USE="rotscaleC1")

field48.children.append(Transform49)

Script41.field.append(field48)
field50 = x3d.field()
field50.accessType = "inputOnly"
field50.type = "SFVec3f"
field50.name = "set_startpoint"

Script41.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOnly"
field51.type = "SFVec3f"
field51.name = "set_endpoint"

Script41.field.append(field51)

Script41.sourceCode = '''ecmascript:\n"+
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

Scene6.children.append(Script41)
ROUTE52 = x3d.ROUTE()
ROUTE52.fromNode = "DECLpoint_INSTANCE_CL1"
ROUTE52.fromField = "cycleTime"
ROUTE52.toNode = "DECLpoint_INSTANCE_MB1"
ROUTE52.toField = "set_location"

Scene6.children.append(ROUTE52)
ROUTE53 = x3d.ROUTE()
ROUTE53.fromNode = "DECLpoint_INSTANCE_CL1"
ROUTE53.fromField = "fraction_changed"
ROUTE53.toNode = "DECLpoint_INSTANCE_PI1"
ROUTE53.toField = "set_fraction"

Scene6.children.append(ROUTE53)
ROUTE54 = x3d.ROUTE()
ROUTE54.fromNode = "DECLpoint_INSTANCE_MB1"
ROUTE54.fromField = "keyValue_changed"
ROUTE54.toNode = "DECLpoint_INSTANCE_PI1"
ROUTE54.toField = "set_keyValue"

Scene6.children.append(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "DECLpoint_INSTANCE_PI1"
ROUTE55.fromField = "value_changed"
ROUTE55.toNode = "DECLpoint_INSTANCE_node"
ROUTE55.toField = "set_translation"

Scene6.children.append(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "DECLpoint_INSTANCE_MB1"
ROUTE56.fromField = "translation_changed"
ROUTE56.toNode = "DECLpoint_INSTANCE_node"
ROUTE56.toField = "set_translation"

Scene6.children.append(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "DECLpoint_INSTANCE1000_CL1"
ROUTE57.fromField = "cycleTime"
ROUTE57.toNode = "DECLpoint_INSTANCE1000_MB1"
ROUTE57.toField = "set_location"

Scene6.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "DECLpoint_INSTANCE1000_CL1"
ROUTE58.fromField = "fraction_changed"
ROUTE58.toNode = "DECLpoint_INSTANCE1000_PI1"
ROUTE58.toField = "set_fraction"

Scene6.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "DECLpoint_INSTANCE1000_MB1"
ROUTE59.fromField = "keyValue_changed"
ROUTE59.toNode = "DECLpoint_INSTANCE1000_PI1"
ROUTE59.toField = "set_keyValue"

Scene6.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "DECLpoint_INSTANCE1000_PI1"
ROUTE60.fromField = "value_changed"
ROUTE60.toNode = "DECLpoint_INSTANCE1000_node"
ROUTE60.toField = "set_translation"

Scene6.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "DECLpoint_INSTANCE1000_MB1"
ROUTE61.fromField = "translation_changed"
ROUTE61.toNode = "DECLpoint_INSTANCE1000_node"
ROUTE61.toField = "set_translation"

Scene6.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "G1"
ROUTE62.fromField = "translation_changed"
ROUTE62.toNode = "DECLx3dconnector_connector1_S1"
ROUTE62.toField = "set_startpoint"

Scene6.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "G2"
ROUTE63.fromField = "translation_changed"
ROUTE63.toNode = "DECLx3dconnector_connector1_S1"
ROUTE63.toField = "set_endpoint"

Scene6.children.append(ROUTE63)

X3D0.Scene = Scene6
f = open("../data/arc2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arc2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/arc2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
