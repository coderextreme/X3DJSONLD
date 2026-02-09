print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "arc4.x3d"

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
Transform9 = x3d.Transform(DEF="DECLpoint_G1_node")
Transform9.translation = [0,4.523333,0]
Shape10 = x3d.Shape()
Appearance11 = x3d.Appearance()
Material12 = x3d.Material()
Material12.diffuseColor = [1,0,0]

Appearance11.material = Material12

Shape10.appearance = Appearance11
Sphere13 = x3d.Sphere()
Sphere13.radius = 0.1

Shape10.geometry = Sphere13

Transform9.children.append(Shape10)
PositionInterpolator14 = x3d.PositionInterpolator(DEF="DECLpoint_G1_PI1")
PositionInterpolator14.key = [0,1]
PositionInterpolator14.keyValue = [(0, 0, 0),(0, 5, 0)]

Transform9.children.append(PositionInterpolator14)
Script15 = x3d.Script(DEF="DECLpoint_G1_MB1")
field16 = x3d.field()
field16.accessType = "inputOutput"
field16.type = "SFVec3f"
field16.name = "translation"

Script15.field.append(field16)
field17 = x3d.field()
field17.accessType = "inputOutput"
field17.type = "SFVec3f"
field17.name = "old"

Script15.field.append(field17)
field18 = x3d.field()
field18.accessType = "inputOnly"
field18.type = "SFTime"
field18.name = "set_location"

Script15.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "MFVec3f"
field19.name = "keyValue"
field19.value = [(0, 0, 0),(0, 5, 0)]

Script15.field.append(field19)

Script15.sourceCode = '''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}'''

Transform9.children.append(Script15)
TimeSensor20 = x3d.TimeSensor(DEF="DECLpoint_G1_CL1")
TimeSensor20.cycleInterval = 3
TimeSensor20.loop = True

Transform9.children.append(TimeSensor20)

Scene6.children.append(Transform9)
Transform21 = x3d.Transform(DEF="DECLpoint_G2_node")
Transform21.translation = [0,4.523333,0]
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.diffuseColor = [1,0,0]

Appearance23.material = Material24

Shape22.appearance = Appearance23
Sphere25 = x3d.Sphere()
Sphere25.radius = 0.1

Shape22.geometry = Sphere25

Transform21.children.append(Shape22)
PositionInterpolator26 = x3d.PositionInterpolator(DEF="DECLpoint_G2_PI1")
PositionInterpolator26.key = [0,1]
PositionInterpolator26.keyValue = [(0, 0, 0),(0, 5, 0)]

Transform21.children.append(PositionInterpolator26)
Script27 = x3d.Script(DEF="DECLpoint_G2_MB1")
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFVec3f"
field28.name = "translation"

Script27.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFVec3f"
field29.name = "old"

Script27.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOnly"
field30.type = "SFTime"
field30.name = "set_location"

Script27.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "MFVec3f"
field31.name = "keyValue"
field31.value = [(0, 0, 0),(0, 5, 0)]

Script27.field.append(field31)

Script27.sourceCode = '''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}'''

Transform21.children.append(Script27)
TimeSensor32 = x3d.TimeSensor(DEF="DECLpoint_G2_CL1")
TimeSensor32.cycleInterval = 3
TimeSensor32.loop = True

Transform21.children.append(TimeSensor32)

Scene6.children.append(Transform21)
Group33 = x3d.Group()
Transform34 = x3d.Transform(DEF="DECLx3dconnector_connector1_trans")
Transform35 = x3d.Transform(DEF="DECLx3dconnector_connector1_rotscale")
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.diffuseColor = [0.2,0.7,0.7]
Material38.transparency = 0.5

Appearance37.material = Material38

Shape36.appearance = Appearance37
Cylinder39 = x3d.Cylinder()
Cylinder39.radius = 0.05

Shape36.geometry = Cylinder39

Transform35.children.append(Shape36)

Transform34.children.append(Transform35)

Group33.children.append(Transform34)
Script40 = x3d.Script(DEF="DECLx3dconnector_connector1_S1")
field41 = x3d.field()
field41.accessType = "initializeOnly"
field41.type = "SFNode"
field41.name = "startnode"

Script40.field.append(field41)
field42 = x3d.field()
field42.accessType = "initializeOnly"
field42.type = "SFNode"
field42.name = "endnode"

Script40.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFNode"
field43.name = "position"
Transform44 = x3d.Transform(USE="DECLx3dconnector_connector1_trans")

field43.children.append(Transform44)

Script40.field.append(field43)
field45 = x3d.field()
field45.accessType = "inputOutput"
field45.type = "SFNode"
field45.name = "rotscale"
Transform46 = x3d.Transform(USE="DECLx3dconnector_connector1_rotscale")

field45.children.append(Transform46)

Script40.field.append(field45)
field47 = x3d.field()
field47.accessType = "inputOnly"
field47.type = "SFVec3f"
field47.name = "set_startpoint"

Script40.field.append(field47)
field48 = x3d.field()
field48.accessType = "inputOnly"
field48.type = "SFVec3f"
field48.name = "set_endpoint"

Script40.field.append(field48)

Script40.sourceCode = '''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		    if (typeof Quaternion !== 'undefined') {\n"+
"			    return {\n"+
"				    scale : new SFVec3f(1.0,1.0,1.0),\n"+
"				    translation : new SFVec3f(1.0,1.0,1.0),\n"+
"			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)\n"+
"			    };\n"+
"	    	    } else if (typeof SFRotation !== 'undefined') {\n"+
"			    return {\n"+
"				    scale : new SFVec3f(1.0,1.0,1.0),\n"+
"				    translation : new SFVec3f(1.0,1.0,1.0),\n"+
"			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)\n"+
"			    };\n"+
"	    	    } else {\n"+
"			    return {\n"+
"				    scale : new SFVec3f(1.0,1.0,1.0),\n"+
"				    translation : new SFVec3f(1.0,1.0,1.0)\n"+
"			    };\n"+
"		    }\n"+
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
"	      position.translation = trafo.translation;\n"+
"	      rotscale.rotation = trafo.rotation;\n"+
"	      rotscale.scale = trafo.scale;\n"+
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

Group33.children.append(Script40)

Scene6.children.append(Group33)
ROUTE49 = x3d.ROUTE()
ROUTE49.fromNode = "DECLpoint_G1_CL1"
ROUTE49.fromField = "cycleTime"
ROUTE49.toNode = "DECLpoint_G1_MB1"
ROUTE49.toField = "set_location"

Scene6.children.append(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.fromNode = "DECLpoint_G1_CL1"
ROUTE50.fromField = "fraction_changed"
ROUTE50.toNode = "DECLpoint_G1_PI1"
ROUTE50.toField = "set_fraction"

Scene6.children.append(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.fromNode = "DECLpoint_G1_MB1"
ROUTE51.fromField = "keyValue_changed"
ROUTE51.toNode = "DECLpoint_G1_PI1"
ROUTE51.toField = "set_keyValue"

Scene6.children.append(ROUTE51)
ROUTE52 = x3d.ROUTE()
ROUTE52.fromNode = "DECLpoint_G1_PI1"
ROUTE52.fromField = "value_changed"
ROUTE52.toNode = "DECLpoint_G1_node"
ROUTE52.toField = "set_translation"

Scene6.children.append(ROUTE52)
ROUTE53 = x3d.ROUTE()
ROUTE53.fromNode = "DECLpoint_G2_CL1"
ROUTE53.fromField = "cycleTime"
ROUTE53.toNode = "DECLpoint_G2_MB1"
ROUTE53.toField = "set_location"

Scene6.children.append(ROUTE53)
ROUTE54 = x3d.ROUTE()
ROUTE54.fromNode = "DECLpoint_G2_CL1"
ROUTE54.fromField = "fraction_changed"
ROUTE54.toNode = "DECLpoint_G2_PI1"
ROUTE54.toField = "set_fraction"

Scene6.children.append(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "DECLpoint_G2_MB1"
ROUTE55.fromField = "keyValue_changed"
ROUTE55.toNode = "DECLpoint_G2_PI1"
ROUTE55.toField = "set_keyValue"

Scene6.children.append(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "DECLpoint_G2_PI1"
ROUTE56.fromField = "value_changed"
ROUTE56.toNode = "DECLpoint_G2_node"
ROUTE56.toField = "set_translation"

Scene6.children.append(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "DECLpoint_G1_node"
ROUTE57.fromField = "translation_changed"
ROUTE57.toNode = "DECLx3dconnector_connector1_S1"
ROUTE57.toField = "set_startpoint"

Scene6.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "DECLpoint_G2_node"
ROUTE58.fromField = "translation_changed"
ROUTE58.toNode = "DECLx3dconnector_connector1_S1"
ROUTE58.toField = "set_endpoint"

Scene6.children.append(ROUTE58)

X3D0.Scene = Scene6
f = open("../data/arc4.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/arc4.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/arc4.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
