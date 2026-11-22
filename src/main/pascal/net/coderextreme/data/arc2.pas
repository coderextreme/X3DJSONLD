unit arc2;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createarc2: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
Sphere13: TSphereNode;
Appearance14: TAppearanceNode;
Material15: TMaterialNode;
PositionInterpolator16: TPositionInterpolatorNode;
Script17: TScriptNode;
SFVec3f18: TSFVec3f;
SFVec3f19: TSFVec3f;
SFTime20: TSFTime;
MFVec3f21: TMFVec3f;
TimeSensor22: TTimeSensorNode;
Transform28: TTransformNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
Sphere31: TSphereNode;
Appearance32: TAppearanceNode;
Material33: TMaterialNode;
PositionInterpolator34: TPositionInterpolatorNode;
Script35: TScriptNode;
SFVec3f36: TSFVec3f;
SFVec3f37: TSFVec3f;
SFTime38: TSFTime;
MFVec3f39: TMFVec3f;
TimeSensor40: TTimeSensorNode;
Transform46: TTransformNode;
Transform47: TTransformNode;
Shape48: TShapeNode;
Appearance49: TAppearanceNode;
Material50: TMaterialNode;
Cylinder51: TCylinderNode;
Script52: TScriptNode;
SFNode53: TSFNode;
Transform54: TTransformNode;
SFNode55: TSFNode;
Transform56: TTransformNode;
SFNode57: TSFNode;
Transform58: TTransformNode;
SFNode59: TSFNode;
Transform60: TTransformNode;
SFVec3f61: TSFVec3f;
SFVec3f62: TSFVec3f;

procedure Initarc2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc2.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d';
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
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
Sphere13.Radius := 0.1;
{ METHOD .Geometry }
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance14.Material := Material15;
{ METHOD .Appearance }
Shape12.Appearance := Appearance14;
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(Shape12);
PositionInterpolator16 := TPositionInterpolatorNode.Create;
PositionInterpolator16.SetKey([0,1]);
PositionInterpolator16.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(PositionInterpolator16);
Script17 := TScriptNode.Create;
SFVec3f18 := TSFVec3f.CreateUndefined(Script17, false, 'translation');
SFVec3f18.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script17.AddCustomField(SFVec3f18);
SFVec3f19 := TSFVec3f.CreateUndefined(Script17, false, 'old');
SFVec3f19.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script17.AddCustomField(SFVec3f19);
end;

procedure Initarc2Part1;
begin

SFTime20 := TSFTime.CreateUndefined(Script17, false, 'set_location');
{ METHOD .Fd.AddCustomField }
Script17.AddCustomField(SFTime20);
MFVec3f21 := TMFVec3f.CreateUndefined(Script17, false, 'keyValue');
MFVec3f21.Value := '0 0 0 0 5 0';
{ METHOD .Fd.AddCustomField }
Script17.AddCustomField(MFVec3f21);

Script17.SetSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(Script17);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.CycleInterval := 3;
TimeSensor22.Loop := True;
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(TimeSensor22);
{ Original "DECLpoint_INSTANCE_CL1.EventCycleTime TO DECLpoint_INSTANCE_MB1.EventSet_location }
{ Sample DECLpoint_INSTANCE_CL1.EventCycleTime TO DECLpoint_INSTANCE_MB1.EventSet_location}
Transform11.AddRoute(TimeSensor22.EventCycleTime, Script17.set_EventSet_location);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_INSTANCE_CL1.EventFraction_changed TO DECLpoint_INSTANCE_PI1.EventSet_fraction }
{ Sample DECLpoint_INSTANCE_CL1.EventFraction_changed TO DECLpoint_INSTANCE_PI1.EventSet_fraction}
Transform11.AddRoute(TimeSensor22.EventFraction_changed, PositionInterpolator16.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_INSTANCE_MB1.EventKeyValue TO DECLpoint_INSTANCE_PI1.keyValue }
{ Sample DECLpoint_INSTANCE_MB1.EventKeyValue TO DECLpoint_INSTANCE_PI1.keyValue}
Transform11.AddRoute(Script17.EventKeyValue, PositionInterpolator16.set_keyValue);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_INSTANCE_PI1.EventValue_changed TO DECLpoint_INSTANCE_node.EventSet_translation }
{ Sample DECLpoint_INSTANCE_PI1.EventValue_changed TO DECLpoint_INSTANCE_node.EventSet_translation}
Transform11.AddRoute(PositionInterpolator16.EventValue_changed, Transform11.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_INSTANCE_MB1.EventTranslation_changed TO DECLpoint_INSTANCE_node.EventSet_translation }
{ Sample DECLpoint_INSTANCE_MB1.EventTranslation_changed TO DECLpoint_INSTANCE_node.EventSet_translation}
Transform11.AddRoute(Script17.EventTranslation_changed, Transform11.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Transform10.FdChildren.Add(Transform11);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform10);
Transform28 := TTransformNode.Create;
Transform29 := TTransformNode.Create;
Shape30 := TShapeNode.Create;
Sphere31 := TSphereNode.Create;
Sphere31.Radius := 0.1;
{ METHOD .Geometry }
Shape30.Geometry := Sphere31;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance32.Material := Material33;
{ METHOD .Appearance }
Shape30.Appearance := Appearance32;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
PositionInterpolator34 := TPositionInterpolatorNode.Create;
PositionInterpolator34.SetKey([0,1]);
PositionInterpolator34.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(PositionInterpolator34);
Script35 := TScriptNode.Create;
SFVec3f36 := TSFVec3f.CreateUndefined(Script35, false, 'translation');
SFVec3f36.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script35.AddCustomField(SFVec3f36);
SFVec3f37 := TSFVec3f.CreateUndefined(Script35, false, 'old');
SFVec3f37.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script35.AddCustomField(SFVec3f37);
SFTime38 := TSFTime.CreateUndefined(Script35, false, 'set_location');
{ METHOD .Fd.AddCustomField }
Script35.AddCustomField(SFTime38);
MFVec3f39 := TMFVec3f.CreateUndefined(Script35, false, 'keyValue');
MFVec3f39.Value := '0 0 0 0 5 0';
{ METHOD .Fd.AddCustomField }
Script35.AddCustomField(MFVec3f39);

Script35.SetSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Script35);
TimeSensor40 := TTimeSensorNode.Create;
TimeSensor40.CycleInterval := 3;
TimeSensor40.Loop := True;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(TimeSensor40);
{ Original "DECLpoint_INSTANCE1000_CL1.EventCycleTime TO DECLpoint_INSTANCE1000_MB1.EventSet_location }
{ Sample DECLpoint_INSTANCE1000_CL1.EventCycleTime TO DECLpoint_INSTANCE1000_MB1.EventSet_location}
Transform29.AddRoute(TimeSensor40.EventCycleTime, Script35.set_EventSet_location);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_INSTANCE1000_CL1.EventFraction_changed TO DECLpoint_INSTANCE1000_PI1.EventSet_fraction }
{ Sample DECLpoint_INSTANCE1000_CL1.EventFraction_changed TO DECLpoint_INSTANCE1000_PI1.EventSet_fraction}
Transform29.AddRoute(TimeSensor40.EventFraction_changed, PositionInterpolator34.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_INSTANCE1000_MB1.EventKeyValue TO DECLpoint_INSTANCE1000_PI1.keyValue }
{ Sample DECLpoint_INSTANCE1000_MB1.EventKeyValue TO DECLpoint_INSTANCE1000_PI1.keyValue}
Transform29.AddRoute(Script35.EventKeyValue, PositionInterpolator34.set_keyValue);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_INSTANCE1000_PI1.EventValue_changed TO DECLpoint_INSTANCE1000_node.EventSet_translation }
{ Sample DECLpoint_INSTANCE1000_PI1.EventValue_changed TO DECLpoint_INSTANCE1000_node.EventSet_translation}
Transform29.AddRoute(PositionInterpolator34.EventValue_changed, Transform29.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "DECLpoint_INSTANCE1000_MB1.EventTranslation_changed TO DECLpoint_INSTANCE1000_node.EventSet_translation }
{ Sample DECLpoint_INSTANCE1000_MB1.EventTranslation_changed TO DECLpoint_INSTANCE1000_node.EventSet_translation}
Transform29.AddRoute(Script35.EventTranslation_changed, Transform29.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Transform28.FdChildren.Add(Transform29);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform28);
Transform46 := TTransformNode.Create;
Transform47 := TTransformNode.Create;
Shape48 := TShapeNode.Create;
Appearance49 := TAppearanceNode.Create;
Material50 := TMaterialNode.Create;
Material50.DiffuseColor := Vector3(0.2,0.7,0.7);
Material50.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance49.Material := Material50;
{ METHOD .Appearance }
Shape48.Appearance := Appearance49;
Cylinder51 := TCylinderNode.Create;
Cylinder51.Radius := 0.05;
{ METHOD .Geometry }
Shape48.Geometry := Cylinder51;
{ METHOD .FdChildren.Add }
Transform47.FdChildren.Add(Shape48);
{ METHOD .FdChildren.Add }
Transform46.FdChildren.Add(Transform47);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform46);
Script52 := TScriptNode.Create;
SFNode53 := TSFNode.CreateUndefined(Script52, false, 'startnode');
{ METHOD .Fd.Value }
SFNode53.Value := Transform10;
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFNode53);
SFNode55 := TSFNode.CreateUndefined(Script52, false, 'endnode');
{ METHOD .Fd.Value }
SFNode55.Value := Transform28;
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFNode55);
SFNode57 := TSFNode.CreateUndefined(Script52, false, 'transC1');
{ METHOD .Fd.Value }
SFNode57.Value := Transform46;
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFNode57);
SFNode59 := TSFNode.CreateUndefined(Script52, false, 'rotscaleC1');
{ METHOD .Fd.Value }
SFNode59.Value := Transform47;
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFNode59);
SFVec3f61 := TSFVec3f.CreateUndefined(Script52, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFVec3f61);
SFVec3f62 := TSFVec3f.CreateUndefined(Script52, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFVec3f62);

Script52.SetSourceCode('''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\\n		return;\\n	    }\\n            var dif = endpoint.subtract(startpoint);\\n            var dist = dif.length()*0.5;\\n            var dif2 = dif.multiply(0.5);\\n            var norm = dif.normalize();\\n            var transl = startpoint.add(dif2);\\n	    if (typeof Quaternion !== 'undefined') {\n"+
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
"        }''');
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Script52);
{ Original "G1.EventTranslation_changed TO DECLx3dconnector_connector1_S1.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO DECLx3dconnector_connector1_S1.EventSet_startpoint}
Group7.AddRoute(Transform10.EventTranslation_changed, Script52.set_EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G2.EventTranslation_changed TO DECLx3dconnector_connector1_S1.EventSet_endpoint }
{ Sample G2.EventTranslation_changed TO DECLx3dconnector_connector1_S1.EventSet_endpoint}
Group7.AddRoute(Transform28.EventTranslation_changed, Script52.set_EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createarc2: TX3DRootNode;
begin
Initarc2Part0;
Initarc2Part1;
Result := X3D0;
end;

begin
end.
