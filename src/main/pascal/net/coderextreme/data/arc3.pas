unit arc3;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createarc3: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Shape11: TShapeNode;
Sphere12: TSphereNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
PositionInterpolator15: TPositionInterpolatorNode;
Script16: TScriptNode;
SFVec3f17: TSFVec3f;
SFVec3f18: TSFVec3f;
SFTime19: TSFTime;
MFVec3f20: TMFVec3f;
TimeSensor21: TTimeSensorNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Sphere28: TSphereNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
PositionInterpolator31: TPositionInterpolatorNode;
Script32: TScriptNode;
SFVec3f33: TSFVec3f;
SFVec3f34: TSFVec3f;
SFTime35: TSFTime;
MFVec3f36: TMFVec3f;
TimeSensor37: TTimeSensorNode;
Group42: TGroupNode;
Transform43: TTransformNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
Cylinder48: TCylinderNode;
Script49: TScriptNode;
SFNode50: TSFNode;
Group51: TGroupNode;
SFNode52: TSFNode;
Group53: TGroupNode;
SFNode54: TSFNode;
Transform55: TTransformNode;
SFNode56: TSFNode;
Transform57: TTransformNode;
SFVec3f58: TSFVec3f;
SFVec3f59: TSFVec3f;

procedure Initarc3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc3.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a generic proto to connect two objects';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'Only Viewpoint';
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Background9);
Transform10 := TTransformNode.Create;
Shape11 := TShapeNode.Create;
Sphere12 := TSphereNode.Create;
Sphere12.Radius := 0.1;
{ METHOD .Geometry }
Shape11.Geometry := Sphere12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance13.Material := Material14;
{ METHOD .Appearance }
Shape11.Appearance := Appearance13;
{ METHOD .FdChildren.Add }
Transform10.FdChildren.Add(Shape11);
PositionInterpolator15 := TPositionInterpolatorNode.Create;
PositionInterpolator15.SetKey([0,1]);
PositionInterpolator15.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Transform10.FdChildren.Add(PositionInterpolator15);
Script16 := TScriptNode.Create;
SFVec3f17 := TSFVec3f.CreateUndefined(Script16, false, 'translation');
SFVec3f17.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(SFVec3f17);
SFVec3f18 := TSFVec3f.CreateUndefined(Script16, false, 'old');
SFVec3f18.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(SFVec3f18);
SFTime19 := TSFTime.CreateUndefined(Script16, false, 'set_location');
end;

procedure Initarc3Part1;
begin

{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(SFTime19);
MFVec3f20 := TMFVec3f.CreateUndefined(Script16, false, 'keyValue');
MFVec3f20.Value := '0 0 0 0 5 0';
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(MFVec3f20);

Script16.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
{ METHOD .FdChildren.Add }
Transform10.FdChildren.Add(Script16);
TimeSensor21 := TTimeSensorNode.Create;
TimeSensor21.CycleInterval := 3;
TimeSensor21.Loop := True;
{ METHOD .FdChildren.Add }
Transform10.FdChildren.Add(TimeSensor21);
{ Original "DECLpoint_G1_CL1.EventCycleTime TO DECLpoint_G1_MB1.EventSet_location }
{ Sample DECLpoint_G1_CL1.EventCycleTime TO DECLpoint_G1_MB1.EventSet_location}
Transform10.AddRoute(TimeSensor21.EventCycleTime, Script16.EventSet_location);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_G1_CL1.EventFraction_changed TO DECLpoint_G1_PI1.EventSet_fraction }
{ Sample DECLpoint_G1_CL1.EventFraction_changed TO DECLpoint_G1_PI1.EventSet_fraction}
Transform10.AddRoute(TimeSensor21.EventFraction_changed, PositionInterpolator15.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_G1_MB1.EventKeyValue TO DECLpoint_G1_PI1.keyValue }
{ Sample DECLpoint_G1_MB1.EventKeyValue TO DECLpoint_G1_PI1.keyValue}
Transform10.AddRoute(Script16.EventKeyValue, PositionInterpolator15.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_G1_PI1.EventValue_changed TO DECLpoint_G1_node.FdTranslation.EventIn }
{ Sample DECLpoint_G1_PI1.EventValue_changed TO DECLpoint_G1_node.FdTranslation.EventIn}
Transform10.AddRoute(PositionInterpolator15.EventValue_changed, Transform10.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform10);
Transform26 := TTransformNode.Create;
Shape27 := TShapeNode.Create;
Sphere28 := TSphereNode.Create;
Sphere28.Radius := 0.1;
{ METHOD .Geometry }
Shape27.Geometry := Sphere28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance29.Material := Material30;
{ METHOD .Appearance }
Shape27.Appearance := Appearance29;
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(Shape27);
PositionInterpolator31 := TPositionInterpolatorNode.Create;
PositionInterpolator31.SetKey([0,1]);
PositionInterpolator31.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(PositionInterpolator31);
Script32 := TScriptNode.Create;
SFVec3f33 := TSFVec3f.CreateUndefined(Script32, false, 'translation');
SFVec3f33.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script32.AddCustomField(SFVec3f33);
SFVec3f34 := TSFVec3f.CreateUndefined(Script32, false, 'old');
SFVec3f34.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script32.AddCustomField(SFVec3f34);
SFTime35 := TSFTime.CreateUndefined(Script32, false, 'set_location');
{ METHOD .Fd.AddCustomField }
Script32.AddCustomField(SFTime35);
MFVec3f36 := TMFVec3f.CreateUndefined(Script32, false, 'keyValue');
MFVec3f36.Value := '0 0 0 0 5 0';
{ METHOD .Fd.AddCustomField }
Script32.AddCustomField(MFVec3f36);

Script32.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(Script32);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.CycleInterval := 3;
TimeSensor37.Loop := True;
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(TimeSensor37);
{ Original "DECLpoint_G2_CL1.EventCycleTime TO DECLpoint_G2_MB1.EventSet_location }
{ Sample DECLpoint_G2_CL1.EventCycleTime TO DECLpoint_G2_MB1.EventSet_location}
Transform26.AddRoute(TimeSensor37.EventCycleTime, Script32.EventSet_location);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_G2_CL1.EventFraction_changed TO DECLpoint_G2_PI1.EventSet_fraction }
{ Sample DECLpoint_G2_CL1.EventFraction_changed TO DECLpoint_G2_PI1.EventSet_fraction}
Transform26.AddRoute(TimeSensor37.EventFraction_changed, PositionInterpolator31.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_G2_MB1.EventKeyValue TO DECLpoint_G2_PI1.keyValue }
{ Sample DECLpoint_G2_MB1.EventKeyValue TO DECLpoint_G2_PI1.keyValue}
Transform26.AddRoute(Script32.EventKeyValue, PositionInterpolator31.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_G2_PI1.EventValue_changed TO DECLpoint_G2_node.FdTranslation.EventIn }
{ Sample DECLpoint_G2_PI1.EventValue_changed TO DECLpoint_G2_node.FdTranslation.EventIn}
Transform26.AddRoute(PositionInterpolator31.EventValue_changed, Transform26.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform26);
Group42 := TGroupNode.Create;
Transform43 := TTransformNode.Create;
Transform44 := TTransformNode.Create;
Shape45 := TShapeNode.Create;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0.2,0.7,0.7);
Material47.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance46.Material := Material47;
{ METHOD .Appearance }
Shape45.Appearance := Appearance46;
Cylinder48 := TCylinderNode.Create;
Cylinder48.Radius := 0.05;
{ METHOD .Geometry }
Shape45.Geometry := Cylinder48;
{ METHOD .FdChildren.Add }
Transform44.FdChildren.Add(Shape45);
{ METHOD .FdChildren.Add }
Transform43.FdChildren.Add(Transform44);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Transform43);
Script49 := TScriptNode.Create;
SFNode50 := TSFNode.CreateUndefined(Script49, false, 'startnode');
{ METHOD .AddGroup }
SFNode50.AddChildren([Group10]);
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFNode50);
SFNode52 := TSFNode.CreateUndefined(Script49, false, 'endnode');
{ METHOD .AddGroup }
SFNode52.AddChildren([Group26]);
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFNode52);
SFNode54 := TSFNode.CreateUndefined(Script49, false, 'position');
{ METHOD .Fd.Value }
SFNode54.Value := Transform43;
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFNode54);
SFNode56 := TSFNode.CreateUndefined(Script49, false, 'rotscale');
{ METHOD .Fd.Value }
SFNode56.Value := Transform44;
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFNode56);
SFVec3f58 := TSFVec3f.CreateUndefined(Script49, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFVec3f58);
SFVec3f59 := TSFVec3f.CreateUndefined(Script49, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFVec3f59);

Script49.SetSourceCode('''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\\n		return;\\n	    }\\n            var dif = endpoint.subtract(startpoint);\\n            var dist = dif.length()*0.5;\\n            var dif2 = dif.multiply(0.5);\\n            var norm = dif.normalize();\\n            var transl = startpoint.add(dif2);\\n	    if (typeof Quaternion !== 'undefined') {\\n		    return {\\n			    scale : new SFVec3f(1.0,dist,1.0),\\n			    translation : transl,\\n			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\\n		    };\\n	    } else if (typeof SFRotation !== 'undefined') {\n"+
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
"        }''');
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Script49);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Group42);
{ Original "DECLpoint_G1_node.EventTranslation TO DECLx3dconnector_connector1_S1.EventSet_startpoint }
{ Sample DECLpoint_G1_node.EventTranslation TO DECLx3dconnector_connector1_S1.EventSet_startpoint}
Group7.AddRoute(Transform10.EventTranslation, Script49.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_G2_node.EventTranslation TO DECLx3dconnector_connector1_S1.EventSet_endpoint }
{ Sample DECLpoint_G2_node.EventTranslation TO DECLx3dconnector_connector1_S1.EventSet_endpoint}
Group7.AddRoute(Transform26.EventTranslation, Script49.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createarc3: TX3DRootNode;
begin
Initarc3Part0;
Initarc3Part1;
Result := X3D0;
end;

begin
end.
