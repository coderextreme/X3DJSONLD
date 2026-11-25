unit arc2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
  FieldVal18: TSFVec3f;
  FieldVal19: TSFVec3f;
  FieldVal20: TX3DEvent;
  FieldVal21: TMFVec3f;
  TimeSensor22: TTimeSensorNode;
  Transform28: TTransformNode;
  Transform29: TTransformNode;
  Shape30: TShapeNode;
  Sphere31: TSphereNode;
  Appearance32: TAppearanceNode;
  Material33: TMaterialNode;
  PositionInterpolator34: TPositionInterpolatorNode;
  Script35: TScriptNode;
  FieldVal36: TSFVec3f;
  FieldVal37: TSFVec3f;
  FieldVal38: TX3DEvent;
  FieldVal39: TMFVec3f;
  TimeSensor40: TTimeSensorNode;
  Transform46: TTransformNode;
  Transform47: TTransformNode;
  Shape48: TShapeNode;
  Appearance49: TAppearanceNode;
  Material50: TMaterialNode;
  Cylinder51: TCylinderNode;
  Script52: TScriptNode;
  FieldVal53: TSFNode;
  FieldVal55: TSFNode;
  FieldVal57: TSFNode;
  FieldVal59: TSFNode;
  FieldVal61: TX3DEvent;
  FieldVal62: TX3DEvent;

procedure Initarc2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc2.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0, 0, 5);
Viewpoint8.Description := 'Only Viewpoint';
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4, 0.4, 0.4)]);
Group7.FdChildren.Add(Background9);
Transform10 := TTransformNode.Create;
Transform10.X3DName := 'G1';
Transform11 := TTransformNode.Create;
Transform11.X3DName := 'DECLpoint_INSTANCE_node';
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
Sphere13.Radius := 0.1;
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(1, 0, 0);
Appearance14.Material := Material15;
Shape12.Appearance := Appearance14;
Transform11.FdChildren.Add(Shape12);
PositionInterpolator16 := TPositionInterpolatorNode.Create;
PositionInterpolator16.X3DName := 'DECLpoint_INSTANCE_PI1';
PositionInterpolator16.SetKey([0, 1]);
PositionInterpolator16.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform11.FdChildren.Add(PositionInterpolator16);
Script17 := TScriptNode.Create;
Script17.X3DName := 'DECLpoint_INSTANCE_MB1';
FieldVal18 := TSFVec3f.Create(Script17, True, 'translation', Vector3(0, 0, 0));
Script17.AddCustomFieldOrEvent(FieldVal18);
end;

procedure Initarc2Part1;
begin
FieldVal19 := TSFVec3f.Create(Script17, True, 'old', Vector3(0, 0, 0));
Script17.AddCustomFieldOrEvent(FieldVal19);
FieldVal20 := TSFTime.CreateEvent(Script17, 'set_location', True);
Script17.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TMFVec3f.Create(Script17, True, 'keyValue', ([Vector3(0, 0, 0), Vector3(0, 5, 0)]));
Script17.AddCustomFieldOrEvent(FieldVal21);
Script17.SetSourceCode('ecmascript:' + LineEnding +
  '               function set_location(value) {' + LineEnding +
  '                    old = translation;' + LineEnding +
  '                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);' + LineEnding +
  '                    keyValue = new MFVec3f([old, translation]);' + LineEnding +
  '               }');
Transform11.FdChildren.Add(Script17);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.X3DName := 'DECLpoint_INSTANCE_CL1';
TimeSensor22.CycleInterval := 3;
TimeSensor22.Loop := True;
Transform11.FdChildren.Add(TimeSensor22);
{ ROUTE DECLpoint_INSTANCE_CL1.cycleTime TO DECLpoint_INSTANCE_MB1.set_location }
Transform11.AddRoute(TimeSensor22.EventCycleTime, FieldVal20);
{ ROUTE DECLpoint_INSTANCE_CL1.fraction_changed TO DECLpoint_INSTANCE_PI1.set_fraction }
Transform11.AddRoute(TimeSensor22.EventFraction_changed, PositionInterpolator16.EventSet_fraction);
{ ROUTE DECLpoint_INSTANCE_MB1.keyValue TO DECLpoint_INSTANCE_PI1.keyValue }
Transform11.AddRoute(FieldVal21, PositionInterpolator16.keyValue);
{ ROUTE DECLpoint_INSTANCE_PI1.value_changed TO DECLpoint_INSTANCE_node.set_translation }
Transform11.AddRoute(PositionInterpolator16.EventValue_changed, Transform11.FdTranslation.EventIn);
{ ROUTE DECLpoint_INSTANCE_MB1.translation_changed TO DECLpoint_INSTANCE_node.set_translation }
Transform11.AddRoute(Script17.EventTranslation_changed, Transform11.FdTranslation.EventIn);
Transform10.FdChildren.Add(Transform11);
Group7.FdChildren.Add(Transform10);
Transform28 := TTransformNode.Create;
Transform28.X3DName := 'G2';
Transform29 := TTransformNode.Create;
Transform29.X3DName := 'DECLpoint_INSTANCE1000_node';
Shape30 := TShapeNode.Create;
Sphere31 := TSphereNode.Create;
Sphere31.Radius := 0.1;
Shape30.Geometry := Sphere31;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33.DiffuseColor := Vector3(1, 0, 0);
Appearance32.Material := Material33;
Shape30.Appearance := Appearance32;
Transform29.FdChildren.Add(Shape30);
PositionInterpolator34 := TPositionInterpolatorNode.Create;
end;

procedure Initarc2Part2;
begin
PositionInterpolator34.X3DName := 'DECLpoint_INSTANCE1000_PI1';
PositionInterpolator34.SetKey([0, 1]);
PositionInterpolator34.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform29.FdChildren.Add(PositionInterpolator34);
Script35 := TScriptNode.Create;
Script35.X3DName := 'DECLpoint_INSTANCE1000_MB1';
FieldVal36 := TSFVec3f.Create(Script35, True, 'translation', Vector3(0, 0, 0));
Script35.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFVec3f.Create(Script35, True, 'old', Vector3(0, 0, 0));
Script35.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFTime.CreateEvent(Script35, 'set_location', True);
Script35.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TMFVec3f.Create(Script35, True, 'keyValue', ([Vector3(0, 0, 0), Vector3(0, 5, 0)]));
Script35.AddCustomFieldOrEvent(FieldVal39);
Script35.SetSourceCode('ecmascript:' + LineEnding +
  '               function set_location(value) {' + LineEnding +
  '                    old = translation;' + LineEnding +
  '                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);' + LineEnding +
  '                    keyValue = new MFVec3f([old, translation]);' + LineEnding +
  '               }');
Transform29.FdChildren.Add(Script35);
TimeSensor40 := TTimeSensorNode.Create;
TimeSensor40.X3DName := 'DECLpoint_INSTANCE1000_CL1';
TimeSensor40.CycleInterval := 3;
TimeSensor40.Loop := True;
Transform29.FdChildren.Add(TimeSensor40);
{ ROUTE DECLpoint_INSTANCE1000_CL1.cycleTime TO DECLpoint_INSTANCE1000_MB1.set_location }
Transform29.AddRoute(TimeSensor40.EventCycleTime, FieldVal38);
{ ROUTE DECLpoint_INSTANCE1000_CL1.fraction_changed TO DECLpoint_INSTANCE1000_PI1.set_fraction }
Transform29.AddRoute(TimeSensor40.EventFraction_changed, PositionInterpolator34.EventSet_fraction);
{ ROUTE DECLpoint_INSTANCE1000_MB1.keyValue TO DECLpoint_INSTANCE1000_PI1.keyValue }
Transform29.AddRoute(FieldVal39, PositionInterpolator34.keyValue);
{ ROUTE DECLpoint_INSTANCE1000_PI1.value_changed TO DECLpoint_INSTANCE1000_node.set_translation }
Transform29.AddRoute(PositionInterpolator34.EventValue_changed, Transform29.FdTranslation.EventIn);
{ ROUTE DECLpoint_INSTANCE1000_MB1.translation_changed TO DECLpoint_INSTANCE1000_node.set_translation }
Transform29.AddRoute(Script35.EventTranslation_changed, Transform29.FdTranslation.EventIn);
Transform28.FdChildren.Add(Transform29);
Group7.FdChildren.Add(Transform28);
Transform46 := TTransformNode.Create;
Transform46.X3DName := 'transC1';
Transform47 := TTransformNode.Create;
Transform47.X3DName := 'rotscaleC1';
Shape48 := TShapeNode.Create;
Appearance49 := TAppearanceNode.Create;
Material50 := TMaterialNode.Create;
end;

procedure Initarc2Part3;
begin
Material50.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material50.Transparency := 0.5;
Appearance49.Material := Material50;
Shape48.Appearance := Appearance49;
Cylinder51 := TCylinderNode.Create;
Cylinder51.Radius := 0.05;
Shape48.Geometry := Cylinder51;
Transform47.FdChildren.Add(Shape48);
Transform46.FdChildren.Add(Transform47);
Group7.FdChildren.Add(Transform46);
Script52 := TScriptNode.Create;
Script52.X3DName := 'DECLx3dconnector_connector1_S1';
FieldVal53 := TSFNode.CreateUndefined(Script52, False, 'startnode');
Script52.AddCustomFieldOrEvent(FieldVal53);
FieldVal53.Value := Transform10;
FieldVal55 := TSFNode.CreateUndefined(Script52, False, 'endnode');
Script52.AddCustomFieldOrEvent(FieldVal55);
FieldVal55.Value := Transform28;
FieldVal57 := TSFNode.CreateUndefined(Script52, False, 'transC1');
Script52.AddCustomFieldOrEvent(FieldVal57);
FieldVal57.Value := Transform46;
FieldVal59 := TSFNode.CreateUndefined(Script52, False, 'rotscaleC1');
Script52.AddCustomFieldOrEvent(FieldVal59);
FieldVal59.Value := Transform47;
FieldVal61 := TSFVec3f.CreateEvent(Script52, 'set_startpoint', True);
Script52.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TSFVec3f.CreateEvent(Script52, 'set_endpoint', True);
Script52.AddCustomFieldOrEvent(FieldVal62);
Script52.SetSourceCode('ecmascript:' + LineEnding +
  '        function recompute(startpoint,endpoint){' + LineEnding +
  '	    if (typeof endpoint === ''undefined'') {\n		return;\n	    }\n            var dif = endpoint.subtract(startpoint);\n            var dist = dif.length()*0.5;\n            var dif2 = dif.multiply(0.5);\n            var norm = dif.normalize();\n            var transl = startpoint.add(dif2);\n	    if (typeof Quaternion !== ''undefined'') {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl,' + LineEnding +
  '			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)' + LineEnding +
  '		    };' + LineEnding +
  '	    } else {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl,' + LineEnding +
  '			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)' + LineEnding +
  '		    };' + LineEnding +
  '	    }' + LineEnding +
  '	}' + LineEnding +
  '	function recompute_and_route(startpoint, endpoint) {' + LineEnding +
  '	      var trafo = recompute(startpoint, endpoint);' + LineEnding +
  '	      transC1.translation = trafo.translation;' + LineEnding +
  '	      rotscaleC1.rotation = trafo.rotation;' + LineEnding +
  '	      rotscaleC1.scale = trafo.scale;' + LineEnding +
  '	}' + LineEnding +
  '        function initialize(){' + LineEnding +
  '            recompute_and_route(startnode.translation,endnode.translation);' + LineEnding +
  '        }' + LineEnding +
  '        function set_startpoint(val,t){' + LineEnding +
  '            recompute_and_route(val,endnode.translation);' + LineEnding +
  '        }' + LineEnding +
  '        function set_endpoint(val,t){' + LineEnding +
  '            recompute_and_route(startnode.translation,val);' + LineEnding +
  '        }');
Group7.FdChildren.Add(Script52);
{ ROUTE G1.translation_changed TO DECLx3dconnector_connector1_S1.set_startpoint }
Group7.AddRoute(Transform10.EventTranslation_changed, FieldVal61);
{ ROUTE G2.translation_changed TO DECLx3dconnector_connector1_S1.set_endpoint }
Group7.AddRoute(Transform28.EventTranslation_changed, FieldVal62);
X3D0.AddChildren([Group7]);
end;

function Createarc2: TX3DRootNode;
begin
  Initarc2Part0;
  Initarc2Part1;
  Initarc2Part2;
  Initarc2Part3;
  Result := X3D0;
end;

begin
end.
