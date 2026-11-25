unit arc3;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
  FieldVal17: TSFVec3f;
  FieldVal18: TSFVec3f;
  FieldVal19: TX3DEvent;
  FieldVal20: TMFVec3f;
  TimeSensor21: TTimeSensorNode;
  Transform26: TTransformNode;
  Shape27: TShapeNode;
  Sphere28: TSphereNode;
  Appearance29: TAppearanceNode;
  Material30: TMaterialNode;
  PositionInterpolator31: TPositionInterpolatorNode;
  Script32: TScriptNode;
  FieldVal33: TSFVec3f;
  FieldVal34: TSFVec3f;
  FieldVal35: TX3DEvent;
  FieldVal36: TMFVec3f;
  TimeSensor37: TTimeSensorNode;
  Group42: TGroupNode;
  Transform43: TTransformNode;
  Transform44: TTransformNode;
  Shape45: TShapeNode;
  Appearance46: TAppearanceNode;
  Material47: TMaterialNode;
  Cylinder48: TCylinderNode;
  Script49: TScriptNode;
  FieldVal50: TSFNode;
  FieldVal52: TSFNode;
  FieldVal54: TSFNode;
  FieldVal56: TSFNode;
  FieldVal58: TX3DEvent;
  FieldVal59: TX3DEvent;

procedure Initarc3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc3.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
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
Transform10.X3DName := 'DECLpoint_G1_node';
Shape11 := TShapeNode.Create;
Sphere12 := TSphereNode.Create;
Sphere12.Radius := 0.1;
Shape11.Geometry := Sphere12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(1, 0, 0);
Appearance13.Material := Material14;
Shape11.Appearance := Appearance13;
Transform10.FdChildren.Add(Shape11);
PositionInterpolator15 := TPositionInterpolatorNode.Create;
PositionInterpolator15.X3DName := 'DECLpoint_G1_PI1';
PositionInterpolator15.SetKey([0, 1]);
PositionInterpolator15.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform10.FdChildren.Add(PositionInterpolator15);
Script16 := TScriptNode.Create;
Script16.X3DName := 'DECLpoint_G1_MB1';
FieldVal17 := TSFVec3f.Create(Script16, True, 'translation', Vector3(0, 0, 0));
Script16.AddCustomFieldOrEvent(FieldVal17);
FieldVal18 := TSFVec3f.Create(Script16, True, 'old', Vector3(0, 0, 0));
Script16.AddCustomFieldOrEvent(FieldVal18);
end;

procedure Initarc3Part1;
begin
FieldVal19 := TSFTime.CreateEvent(Script16, 'set_location', True);
Script16.AddCustomFieldOrEvent(FieldVal19);
FieldVal20 := TMFVec3f.Create(Script16, True, 'keyValue', ([Vector3(0, 0, 0), Vector3(0, 5, 0)]));
Script16.AddCustomFieldOrEvent(FieldVal20);
Script16.SetSourceCode('ecmascript:' + LineEnding +
  '		function set_location(value) {' + LineEnding +
  '                    old = translation;' + LineEnding +
  '		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);' + LineEnding +
  '                    keyValue = new MFVec3f([old, translation]);' + LineEnding +
  '		    // Browser.println(keyValue);' + LineEnding +
  '		}');
Transform10.FdChildren.Add(Script16);
TimeSensor21 := TTimeSensorNode.Create;
TimeSensor21.X3DName := 'DECLpoint_G1_CL1';
TimeSensor21.CycleInterval := 3;
TimeSensor21.Loop := True;
Transform10.FdChildren.Add(TimeSensor21);
{ ROUTE DECLpoint_G1_CL1.cycleTime TO DECLpoint_G1_MB1.set_location }
Transform10.AddRoute(TimeSensor21.EventCycleTime, FieldVal19);
{ ROUTE DECLpoint_G1_CL1.fraction_changed TO DECLpoint_G1_PI1.set_fraction }
Transform10.AddRoute(TimeSensor21.EventFraction_changed, PositionInterpolator15.EventSet_fraction);
{ ROUTE DECLpoint_G1_MB1.keyValue TO DECLpoint_G1_PI1.keyValue }
Transform10.AddRoute(FieldVal20, PositionInterpolator15.keyValue);
{ ROUTE DECLpoint_G1_PI1.value_changed TO DECLpoint_G1_node.set_translation }
Transform10.AddRoute(PositionInterpolator15.EventValue_changed, Transform10.FdTranslation.EventIn);
Group7.FdChildren.Add(Transform10);
Transform26 := TTransformNode.Create;
Transform26.X3DName := 'DECLpoint_G2_node';
Shape27 := TShapeNode.Create;
Sphere28 := TSphereNode.Create;
Sphere28.Radius := 0.1;
Shape27.Geometry := Sphere28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1, 0, 0);
Appearance29.Material := Material30;
Shape27.Appearance := Appearance29;
Transform26.FdChildren.Add(Shape27);
PositionInterpolator31 := TPositionInterpolatorNode.Create;
PositionInterpolator31.X3DName := 'DECLpoint_G2_PI1';
PositionInterpolator31.SetKey([0, 1]);
PositionInterpolator31.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform26.FdChildren.Add(PositionInterpolator31);
Script32 := TScriptNode.Create;
Script32.X3DName := 'DECLpoint_G2_MB1';
FieldVal33 := TSFVec3f.Create(Script32, True, 'translation', Vector3(0, 0, 0));
end;

procedure Initarc3Part2;
begin
Script32.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFVec3f.Create(Script32, True, 'old', Vector3(0, 0, 0));
Script32.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFTime.CreateEvent(Script32, 'set_location', True);
Script32.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TMFVec3f.Create(Script32, True, 'keyValue', ([Vector3(0, 0, 0), Vector3(0, 5, 0)]));
Script32.AddCustomFieldOrEvent(FieldVal36);
Script32.SetSourceCode('ecmascript:' + LineEnding +
  '		function set_location(value) {' + LineEnding +
  '                    old = translation;' + LineEnding +
  '		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);' + LineEnding +
  '                    keyValue = new MFVec3f([old, translation]);' + LineEnding +
  '		    // Browser.println(keyValue);' + LineEnding +
  '		}');
Transform26.FdChildren.Add(Script32);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.X3DName := 'DECLpoint_G2_CL1';
TimeSensor37.CycleInterval := 3;
TimeSensor37.Loop := True;
Transform26.FdChildren.Add(TimeSensor37);
{ ROUTE DECLpoint_G2_CL1.cycleTime TO DECLpoint_G2_MB1.set_location }
Transform26.AddRoute(TimeSensor37.EventCycleTime, FieldVal35);
{ ROUTE DECLpoint_G2_CL1.fraction_changed TO DECLpoint_G2_PI1.set_fraction }
Transform26.AddRoute(TimeSensor37.EventFraction_changed, PositionInterpolator31.EventSet_fraction);
{ ROUTE DECLpoint_G2_MB1.keyValue TO DECLpoint_G2_PI1.keyValue }
Transform26.AddRoute(FieldVal36, PositionInterpolator31.keyValue);
{ ROUTE DECLpoint_G2_PI1.value_changed TO DECLpoint_G2_node.set_translation }
Transform26.AddRoute(PositionInterpolator31.EventValue_changed, Transform26.FdTranslation.EventIn);
Group7.FdChildren.Add(Transform26);
Group42 := TGroupNode.Create;
Transform43 := TTransformNode.Create;
Transform43.X3DName := 'DECLx3dconnector_connector1_trans';
Transform44 := TTransformNode.Create;
Transform44.X3DName := 'DECLx3dconnector_connector1_rotscale';
Shape45 := TShapeNode.Create;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material47.Transparency := 0.5;
Appearance46.Material := Material47;
Shape45.Appearance := Appearance46;
Cylinder48 := TCylinderNode.Create;
Cylinder48.Radius := 0.05;
Shape45.Geometry := Cylinder48;
Transform44.FdChildren.Add(Shape45);
Transform43.FdChildren.Add(Transform44);
end;

procedure Initarc3Part3;
begin
Group42.FdChildren.Add(Transform43);
Script49 := TScriptNode.Create;
Script49.X3DName := 'DECLx3dconnector_connector1_S1';
FieldVal50 := TSFNode.CreateUndefined(Script49, False, 'startnode');
Script49.AddCustomFieldOrEvent(FieldVal50);
FieldVal50.Value := Transform10;
FieldVal52 := TSFNode.CreateUndefined(Script49, False, 'endnode');
Script49.AddCustomFieldOrEvent(FieldVal52);
FieldVal52.Value := Transform26;
FieldVal54 := TSFNode.CreateUndefined(Script49, True, 'position');
Script49.AddCustomFieldOrEvent(FieldVal54);
FieldVal54.Value := Transform43;
FieldVal56 := TSFNode.CreateUndefined(Script49, True, 'rotscale');
Script49.AddCustomFieldOrEvent(FieldVal56);
FieldVal56.Value := Transform44;
FieldVal58 := TSFVec3f.CreateEvent(Script49, 'set_startpoint', True);
Script49.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFVec3f.CreateEvent(Script49, 'set_endpoint', True);
Script49.AddCustomFieldOrEvent(FieldVal59);
Script49.SetSourceCode('ecmascript:' + LineEnding +
  '        function recompute(startpoint,endpoint){' + LineEnding +
  '	    if (typeof endpoint === ''undefined'') {\n		return;\n	    }\n            var dif = endpoint.subtract(startpoint);\n            var dist = dif.length()*0.5;\n            var dif2 = dif.multiply(0.5);\n            var norm = dif.normalize();\n            var transl = startpoint.add(dif2);\n	    if (typeof Quaternion !== ''undefined'') {\n		    return {\n			    scale : new SFVec3f(1.0,dist,1.0),\n			    translation : transl,\n			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n		    };\n	    } else if (typeof SFRotation !== ''undefined'') {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl,' + LineEnding +
  '			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)' + LineEnding +
  '		    };' + LineEnding +
  '	    } else {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl' + LineEnding +
  '		    };' + LineEnding +
  '	    }' + LineEnding +
  '	}' + LineEnding +
  '	function recompute_and_route(startpoint, endpoint) {' + LineEnding +
  '	      var trafo = recompute(startpoint, endpoint);' + LineEnding +
  '	      if (trafo) {' + LineEnding +
  '		      position.translation = trafo.translation;' + LineEnding +
  '		      rotscale.rotation = trafo.rotation;' + LineEnding +
  '		      rotscale.scale = trafo.scale;' + LineEnding +
  '	      }' + LineEnding +
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
Group42.FdChildren.Add(Script49);
Group7.FdChildren.Add(Group42);
{ ROUTE DECLpoint_G1_node.translation TO DECLx3dconnector_connector1_S1.set_startpoint }
Group7.AddRoute(Transform10.EventTranslation, FieldVal58);
{ ROUTE DECLpoint_G2_node.translation TO DECLx3dconnector_connector1_S1.set_endpoint }
Group7.AddRoute(Transform26.EventTranslation, FieldVal59);
X3D0.AddChildren([Group7]);
end;

function Createarc3: TX3DRootNode;
begin
  Initarc3Part0;
  Initarc3Part1;
  Initarc3Part2;
  Initarc3Part3;
  Result := X3D0;
end;

begin
end.
