print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "arc3.x3d"

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

Scene7.children.append(Background9)
Transform10 = x3d.Transform()
Transform10.DEF = "DECLpoint_G1_node"
Shape11 = x3d.Shape()
Sphere12 = x3d.Sphere()
Sphere12.radius = 0.1

Shape11.geometry = Sphere12
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [1,0,0]

Appearance13.material = Material14

Shape11.appearance = Appearance13

Transform10.children.append(Shape11)
PositionInterpolator15 = x3d.PositionInterpolator()
PositionInterpolator15.DEF = "DECLpoint_G1_PI1"
PositionInterpolator15.key = [0,1]

Transform10.children.append(PositionInterpolator15)
Script16 = x3d.Script()
Script16.DEF = "DECLpoint_G1_MB1"
field17 = x3d.field()
field17.name = "translation"
field17.accessType = "inputOutput"
field17.type = "SFVec3f"
field17.value = [0,0,0]

Script16.field.append(field17)
field18 = x3d.field()
field18.name = "old"
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.value = [0,0,0]

Script16.field.append(field18)
field19 = x3d.field()
field19.name = "set_location"
field19.accessType = "inputOnly"
field19.type = "SFTime"

Script16.field.append(field19)
field20 = x3d.field()
field20.name = "keyValue"
field20.accessType = "inputOutput"
field20.type = "MFVec3f"

Script16.field.append(field20)

Script16.sourceCode = '''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}'''

Transform10.children.append(Script16)
TimeSensor21 = x3d.TimeSensor()
TimeSensor21.DEF = "DECLpoint_G1_CL1"
TimeSensor21.cycleInterval = 3
TimeSensor21.loop = True

Transform10.children.append(TimeSensor21)
ROUTE22 = x3d.ROUTE()
ROUTE22.fromNode = "DECLpoint_G1_CL1"
ROUTE22.fromField = "cycleTime"
ROUTE22.toNode = "DECLpoint_G1_MB1"
ROUTE22.toField = "set_location"

Transform10.children.append(ROUTE22)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromNode = "DECLpoint_G1_CL1"
ROUTE23.fromField = "fraction_changed"
ROUTE23.toNode = "DECLpoint_G1_PI1"
ROUTE23.toField = "set_fraction"

Transform10.children.append(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "DECLpoint_G1_MB1"
ROUTE24.fromField = "keyValue"
ROUTE24.toNode = "DECLpoint_G1_PI1"
ROUTE24.toField = "keyValue"

Transform10.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "DECLpoint_G1_PI1"
ROUTE25.fromField = "value_changed"
ROUTE25.toNode = "DECLpoint_G1_node"
ROUTE25.toField = "set_translation"

Transform10.children.append(ROUTE25)

Scene7.children.append(Transform10)
Transform26 = x3d.Transform()
Transform26.DEF = "DECLpoint_G2_node"
Shape27 = x3d.Shape()
Sphere28 = x3d.Sphere()
Sphere28.radius = 0.1

Shape27.geometry = Sphere28
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.diffuseColor = [1,0,0]

Appearance29.material = Material30

Shape27.appearance = Appearance29

Transform26.children.append(Shape27)
PositionInterpolator31 = x3d.PositionInterpolator()
PositionInterpolator31.DEF = "DECLpoint_G2_PI1"
PositionInterpolator31.key = [0,1]

Transform26.children.append(PositionInterpolator31)
Script32 = x3d.Script()
Script32.DEF = "DECLpoint_G2_MB1"
field33 = x3d.field()
field33.name = "translation"
field33.accessType = "inputOutput"
field33.type = "SFVec3f"
field33.value = [0,0,0]

Script32.field.append(field33)
field34 = x3d.field()
field34.name = "old"
field34.accessType = "inputOutput"
field34.type = "SFVec3f"
field34.value = [0,0,0]

Script32.field.append(field34)
field35 = x3d.field()
field35.name = "set_location"
field35.accessType = "inputOnly"
field35.type = "SFTime"

Script32.field.append(field35)
field36 = x3d.field()
field36.name = "keyValue"
field36.accessType = "inputOutput"
field36.type = "MFVec3f"

Script32.field.append(field36)

Script32.sourceCode = '''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}'''

Transform26.children.append(Script32)
TimeSensor37 = x3d.TimeSensor()
TimeSensor37.DEF = "DECLpoint_G2_CL1"
TimeSensor37.cycleInterval = 3
TimeSensor37.loop = True

Transform26.children.append(TimeSensor37)
ROUTE38 = x3d.ROUTE()
ROUTE38.fromNode = "DECLpoint_G2_CL1"
ROUTE38.fromField = "cycleTime"
ROUTE38.toNode = "DECLpoint_G2_MB1"
ROUTE38.toField = "set_location"

Transform26.children.append(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.fromNode = "DECLpoint_G2_CL1"
ROUTE39.fromField = "fraction_changed"
ROUTE39.toNode = "DECLpoint_G2_PI1"
ROUTE39.toField = "set_fraction"

Transform26.children.append(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.fromNode = "DECLpoint_G2_MB1"
ROUTE40.fromField = "keyValue"
ROUTE40.toNode = "DECLpoint_G2_PI1"
ROUTE40.toField = "keyValue"

Transform26.children.append(ROUTE40)
ROUTE41 = x3d.ROUTE()
ROUTE41.fromNode = "DECLpoint_G2_PI1"
ROUTE41.fromField = "value_changed"
ROUTE41.toNode = "DECLpoint_G2_node"
ROUTE41.toField = "set_translation"

Transform26.children.append(ROUTE41)

Scene7.children.append(Transform26)
Group42 = x3d.Group()
Transform43 = x3d.Transform()
Transform43.DEF = "DECLx3dconnector_connector1_trans"
Transform44 = x3d.Transform()
Transform44.DEF = "DECLx3dconnector_connector1_rotscale"
Shape45 = x3d.Shape()
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.diffuseColor = [0.2,0.7,0.7]
Material47.transparency = 0.5

Appearance46.material = Material47

Shape45.appearance = Appearance46
Cylinder48 = x3d.Cylinder()
Cylinder48.radius = 0.05

Shape45.geometry = Cylinder48

Transform44.children.append(Shape45)

Transform43.children.append(Transform44)

Group42.children.append(Transform43)
Script49 = x3d.Script()
Script49.DEF = "DECLx3dconnector_connector1_S1"
field50 = x3d.field()
field50.name = "startnode"
field50.accessType = "initializeOnly"
field50.type = "SFNode"
Group51 = x3d.Group()
Group51.USE = "DECLpoint_G1_node"

field50.children.append(Group51)

Script49.field.append(field50)
field52 = x3d.field()
field52.name = "endnode"
field52.accessType = "initializeOnly"
field52.type = "SFNode"
Group53 = x3d.Group()
Group53.USE = "DECLpoint_G2_node"

field52.children.append(Group53)

Script49.field.append(field52)
field54 = x3d.field()
field54.name = "position"
field54.accessType = "inputOutput"
field54.type = "SFNode"
Transform55 = x3d.Transform()
Transform55.USE = "DECLx3dconnector_connector1_trans"

field54.children.append(Transform55)

Script49.field.append(field54)
field56 = x3d.field()
field56.name = "rotscale"
field56.accessType = "inputOutput"
field56.type = "SFNode"
Transform57 = x3d.Transform()
Transform57.USE = "DECLx3dconnector_connector1_rotscale"

field56.children.append(Transform57)

Script49.field.append(field56)
field58 = x3d.field()
field58.name = "set_startpoint"
field58.accessType = "inputOnly"
field58.type = "SFVec3f"

Script49.field.append(field58)
field59 = x3d.field()
field59.name = "set_endpoint"
field59.accessType = "inputOnly"
field59.type = "SFVec3f"

Script49.field.append(field59)

Script49.sourceCode = '''ecmascript:\n"+
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

Group42.children.append(Script49)

Scene7.children.append(Group42)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "DECLpoint_G1_node"
ROUTE60.fromField = "translation"
ROUTE60.toNode = "DECLx3dconnector_connector1_S1"
ROUTE60.toField = "set_startpoint"

Scene7.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "DECLpoint_G2_node"
ROUTE61.fromField = "translation"
ROUTE61.toNode = "DECLx3dconnector_connector1_S1"
ROUTE61.toField = "set_endpoint"

Scene7.children.append(ROUTE61)

X3D0.Scene = Scene7
f = open("../data/arc3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arc3.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
