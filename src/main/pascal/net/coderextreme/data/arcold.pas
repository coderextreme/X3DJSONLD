unit arcold;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createarcold: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  Viewpoint8: TViewpointNode;
  Background9: TBackgroundNode;
  Transform10: TTransformNode;
  Transform11: TTransformNode;
  Shape12: TShapeNode;
  Appearance13: TAppearanceNode;
  Material14: TMaterialNode;
  Cylinder15: TCylinderNode;
  Transform16: TTransformNode;
  Transform17: TTransformNode;
  Shape18: TShapeNode;
  Appearance19: TAppearanceNode;
  Material20: TMaterialNode;
  Cylinder21: TCylinderNode;
  Transform22: TTransformNode;
  Transform23: TTransformNode;
  Shape24: TShapeNode;
  Appearance25: TAppearanceNode;
  Material26: TMaterialNode;
  Cylinder27: TCylinderNode;
  ProtoDeclare28: TX3DPrototype;
  FieldDecl30: TX3DInterfaceDeclaration;
  FieldVal30: TSFVec3f;
  Transform32: TTransformNode;
  Shape33: TShapeNode;
  Sphere34: TSphereNode;
  Appearance35: TAppearanceNode;
  Material36: TMaterialNode;
  PositionInterpolator37: TPositionInterpolatorNode;
  Script38: TScriptNode;
  FieldVal39: TSFVec3f;
  FieldVal40: TSFVec3f;
  FieldVal41: TX3DEvent;
  FieldVal42: TX3DEvent;
  TimeSensor43: TTimeSensorNode;
  ProtoDeclare48: TX3DPrototype;
  FieldDecl50: TX3DInterfaceDeclaration;
  FieldVal50: TSFNode;
  FieldDecl51: TX3DInterfaceDeclaration;
  FieldVal51: TSFNode;
  FieldDecl52: TX3DInterfaceDeclaration;
  FieldVal52: TSFNode;
  FieldDecl53: TX3DInterfaceDeclaration;
  FieldVal53: TSFNode;
  FieldDecl54: TX3DInterfaceDeclaration;
  FieldVal54: TX3DEvent;
  FieldDecl55: TX3DInterfaceDeclaration;
  FieldVal55: TX3DEvent;
  Script57: TScriptNode;
  FieldVal58: TSFNode;
  FieldVal59: TSFNode;
  FieldVal60: TSFNode;
  FieldVal61: TSFNode;
  FieldVal62: TX3DEvent;
  FieldVal63: TX3DEvent;
  ProtoInstance64: TX3DPrototypeNode;
  ProtoInstance65: TX3DPrototypeNode;
  ProtoInstance66: TX3DPrototypeNode;
  ProtoInstance67: TX3DPrototypeNode;
  ProtoInstance68: TX3DPrototypeNode;
  ProtoInstance77: TX3DPrototypeNode;
  ProtoInstance86: TX3DPrototypeNode;

procedure InitarcoldPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arcold.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d';
X3D0.Meta['description'] := 'an attempt to implement an arc in a graph';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0, 0, 5);
Viewpoint8.Description := 'a moving graph';
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4, 0.4, 0.4)]);
Group7.FdChildren.Add(Background9);
Transform10 := TTransformNode.Create;
Transform10.X3DName := 'trans1';
Transform11 := TTransformNode.Create;
Transform11.X3DName := 'rotscale1';
Shape12 := TShapeNode.Create;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Appearance13.Material := Material14;
Shape12.Appearance := Appearance13;
Cylinder15 := TCylinderNode.Create;
Cylinder15.Radius := 0.1;
Shape12.Geometry := Cylinder15;
Transform11.FdChildren.Add(Shape12);
Transform10.FdChildren.Add(Transform11);
Group7.FdChildren.Add(Transform10);
Transform16 := TTransformNode.Create;
Transform16.X3DName := 'trans2';
Transform17 := TTransformNode.Create;
Transform17.X3DName := 'rotscale2';
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
end;

procedure InitarcoldPart1;
begin
Material20.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Appearance19.Material := Material20;
Shape18.Appearance := Appearance19;
Cylinder21 := TCylinderNode.Create;
Cylinder21.Radius := 0.1;
Shape18.Geometry := Cylinder21;
Transform17.FdChildren.Add(Shape18);
Transform16.FdChildren.Add(Transform17);
Group7.FdChildren.Add(Transform16);
Transform22 := TTransformNode.Create;
Transform22.X3DName := 'trans3';
Transform23 := TTransformNode.Create;
Transform23.X3DName := 'rotscale3';
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Appearance25.Material := Material26;
Shape24.Appearance := Appearance25;
Cylinder27 := TCylinderNode.Create;
Cylinder27.Radius := 0.1;
Shape24.Geometry := Cylinder27;
Transform23.FdChildren.Add(Shape24);
Transform22.FdChildren.Add(Transform23);
Group7.FdChildren.Add(Transform22);
ProtoDeclare28 := CreateEmptyPrototype('point');
ProtoDeclare28.X3DName := 'point';
FieldVal30 := TSFVec3f.Create(nil, True, 'translation', Vector3(0, 0, 0));
FieldDecl30 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl30.FieldOrEvent := FieldVal30;
FieldVal30.ParentInterfaceDeclaration := FieldDecl30;
ProtoDeclare28.InterfaceDeclarations.Add(FieldDecl30);
Transform32 := TTransformNode.Create;
Transform32.X3DName := 'node';
Transform32.FieldOrEvent('translation', True).IsClauseNamesAdd('translation');
Shape33 := TShapeNode.Create;
Sphere34 := TSphereNode.Create;
Sphere34.Radius := 0.1;
Shape33.Geometry := Sphere34;
Appearance35 := TAppearanceNode.Create;
end;

procedure InitarcoldPart2;
begin
Material36 := TMaterialNode.Create;
Material36.DiffuseColor := Vector3(1, 0, 0);
Appearance35.Material := Material36;
Shape33.Appearance := Appearance35;
Transform32.FdChildren.Add(Shape33);
PositionInterpolator37 := TPositionInterpolatorNode.Create;
PositionInterpolator37.X3DName := 'PI1';
PositionInterpolator37.SetKey([0, 1]);
PositionInterpolator37.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform32.FdChildren.Add(PositionInterpolator37);
Script38 := TScriptNode.Create;
Script38.X3DName := 'MB1';
FieldVal39 := TSFVec3f.Create(Script38, True, 'translation', Vector3(50, 50, 0));
Script38.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFVec3f.Create(Script38, True, 'old', Vector3(0, 0, 0));
Script38.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFTime.CreateEvent(Script38, 'set_location', True);
Script38.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TMFVec3f.CreateEvent(Script38, 'keyValue', False);
Script38.AddCustomFieldOrEvent(FieldVal42);
Script38.SetSourceCode('ecmascript:' + LineEnding +
  '		function set_location(value) {' + LineEnding +
  '                    old = translation;' + LineEnding +
  '		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);' + LineEnding +
  '                    keyValue = new MFVec3f([old, translation]);' + LineEnding +
  '		    // Browser.println(translation);' + LineEnding +
  '		}');
Transform32.FdChildren.Add(Script38);
TimeSensor43 := TTimeSensorNode.Create;
TimeSensor43.X3DName := 'CL1';
TimeSensor43.CycleInterval := 3;
TimeSensor43.Loop := True;
Transform32.FdChildren.Add(TimeSensor43);
{ ROUTE CL1.cycleTime TO MB1.set_location }
Transform32.AddRoute(TimeSensor43.EventCycleTime, FieldVal41);
{ ROUTE CL1.fraction_changed TO PI1.set_fraction }
Transform32.AddRoute(TimeSensor43.EventFraction_changed, PositionInterpolator37.EventSet_fraction);
{ ROUTE MB1.keyValue TO PI1.keyValue }
Transform32.AddRoute(FieldVal42, PositionInterpolator37.keyValue);
{ ROUTE PI1.value_changed TO node.set_translation }
Transform32.AddRoute(PositionInterpolator37.EventValue_changed, Transform32.FdTranslation.EventIn);
ProtoDeclare28.Node.AddChildren([Transform32]);
X3D0.AddPrototype(ProtoDeclare28);
{ from doug sanden }
ProtoDeclare48 := CreateEmptyPrototype('x3dconnector');
ProtoDeclare48.X3DName := 'x3dconnector';
end;

procedure InitarcoldPart3;
begin
FieldVal50 := TSFNode.CreateUndefined(nil, True, 'startnode');
FieldDecl50 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl50.FieldOrEvent := FieldVal50;
FieldVal50.ParentInterfaceDeclaration := FieldDecl50;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl50);
FieldVal51 := TSFNode.CreateUndefined(nil, True, 'endnode');
FieldDecl51 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl51.FieldOrEvent := FieldVal51;
FieldVal51.ParentInterfaceDeclaration := FieldDecl51;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl51);
FieldVal52 := TSFNode.CreateUndefined(nil, True, 'transnode');
FieldDecl52 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl52.FieldOrEvent := FieldVal52;
FieldVal52.ParentInterfaceDeclaration := FieldDecl52;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl52);
FieldVal53 := TSFNode.CreateUndefined(nil, True, 'rotscalenode');
FieldDecl53 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl53.FieldOrEvent := FieldVal53;
FieldVal53.ParentInterfaceDeclaration := FieldDecl53;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl53);
FieldVal54 := TSFVec3f.CreateEvent(nil, 'set_startpoint', True);
FieldDecl54 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl54.FieldOrEvent := FieldVal54;
FieldVal54.ParentInterfaceDeclaration := FieldDecl54;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl54);
FieldVal55 := TSFVec3f.CreateEvent(nil, 'set_endpoint', True);
FieldDecl55 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl55.FieldOrEvent := FieldVal55;
FieldVal55.ParentInterfaceDeclaration := FieldDecl55;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl55);
Script57 := TScriptNode.Create;
Script57.X3DName := 'S1';
FieldVal58 := TSFNode.CreateUndefined(Script57, True, 'startnode');
Script57.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFNode.CreateUndefined(Script57, True, 'endnode');
Script57.AddCustomFieldOrEvent(FieldVal59);
FieldVal60 := TSFNode.CreateUndefined(Script57, True, 'transnode');
Script57.AddCustomFieldOrEvent(FieldVal60);
FieldVal61 := TSFNode.CreateUndefined(Script57, True, 'rotscalenode');
Script57.AddCustomFieldOrEvent(FieldVal61);
end;

procedure InitarcoldPart4;
begin
FieldVal62 := TSFVec3f.CreateEvent(Script57, 'set_startpoint', True);
Script57.AddCustomFieldOrEvent(FieldVal62);
FieldVal63 := TSFVec3f.CreateEvent(Script57, 'set_endpoint', True);
Script57.AddCustomFieldOrEvent(FieldVal63);
Script57.FieldOrEvent('startnode', True).IsClauseNamesAdd('startnode');
Script57.FieldOrEvent('endnode', True).IsClauseNamesAdd('endnode');
Script57.FieldOrEvent('transnode', True).IsClauseNamesAdd('transnode');
Script57.FieldOrEvent('rotscalenode', True).IsClauseNamesAdd('rotscalenode');
Script57.FieldOrEvent('set_startpoint', True).IsClauseNamesAdd('set_startpoint');
Script57.FieldOrEvent('set_endpoint', True).IsClauseNamesAdd('set_endpoint');
Script57.SetSourceCode('ecmascript:' + LineEnding +
  '        function recompute(startpoint,endpoint){' + LineEnding +
  '	    if (typeof endpoint === ''undefined'') {\n		return;\n	    }\n            var dif = endpoint.subtract(startpoint);\n            var dist = dif.length()*0.5;\n            var dif2 = dif.multiply(0.5);\n            var norm = dif.normalize();\n            var transl = startpoint.add(dif2);\n	    if (typeof Quaternion !== ''undefined'') {\n		    return {\n			    scale : new SFVec3f(1.0,dist,1.0),\n			    translation : transl,\n			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n		    };\n	    } else {\n		    return {\n			    scale : new SFVec3f(1.0,dist,1.0),\n			    translation : transl,\n			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n		    };\n	    }\n	}\n	function recompute_and_route(startpoint, endpoint) {\n		var trafo = recompute(startpoint, endpoint);\n		if (typeof trafo !== ''undefined'') {' + LineEnding +
  '			transnode.translation = trafo.translation;' + LineEnding +
  '			rotscalenode.rotation = trafo.rotation;' + LineEnding +
  '			rotscalenode.scale = trafo.scale;' + LineEnding +
  '		} else {' + LineEnding +
  '			Browser.print("recompute returned undefined");' + LineEnding +
  '		}' + LineEnding +
  '	}' + LineEnding +
  '        function initialize(){' + LineEnding +
  '            recompute_and_route(startnode.translation,endnode.translation);' + LineEnding +
  '        }' + LineEnding +
  '        function set_startpoint(val,t){' + LineEnding +
  '            recompute_and_route(val || startnode.translation,endnode.translation);' + LineEnding +
  '        }' + LineEnding +
  '        function set_endpoint(val,t){' + LineEnding +
  '            recompute_and_route(startnode.translation,val || endnode.translation);' + LineEnding +
  '        }');
ProtoDeclare48.Node.AddChildren([Script57]);
X3D0.AddPrototype(ProtoDeclare48);
ProtoInstance64 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare28);
ProtoInstance64.X3DName := 'G1';
Group7.FdChildren.Add(ProtoInstance64.Instantiate);
ProtoInstance65 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare28);
ProtoInstance65.X3DName := 'G2';
Group7.FdChildren.Add(ProtoInstance65.Instantiate);
ProtoInstance66 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare28);
ProtoInstance66.X3DName := 'G3';
Group7.FdChildren.Add(ProtoInstance66.Instantiate);
ProtoInstance67 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare28);
ProtoInstance67.X3DName := 'G4';
Group7.FdChildren.Add(ProtoInstance67.Instantiate);
ProtoInstance68 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare48);
ProtoInstance68.X3DName := 'connector1';
(ProtoInstance68.Field('startnode') as TSFNode).Value := ProtoInstance64;
(ProtoInstance68.Field('endnode') as TSFNode).Value := ProtoInstance65;
(ProtoInstance68.Field('transnode') as TSFNode).Value := Transform10;
(ProtoInstance68.Field('rotscalenode') as TSFNode).Value := Transform11;
Group7.FdChildren.Add(ProtoInstance68.Instantiate);
ProtoInstance77 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare48);
ProtoInstance77.X3DName := 'connector2';
(ProtoInstance77.Field('startnode') as TSFNode).Value := ProtoInstance64;
(ProtoInstance77.Field('endnode') as TSFNode).Value := ProtoInstance66;
(ProtoInstance77.Field('transnode') as TSFNode).Value := Transform16;
(ProtoInstance77.Field('rotscalenode') as TSFNode).Value := Transform17;
Group7.FdChildren.Add(ProtoInstance77.Instantiate);
ProtoInstance86 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare48);
end;

procedure InitarcoldPart5;
begin
ProtoInstance86.X3DName := 'connector3';
(ProtoInstance86.Field('startnode') as TSFNode).Value := ProtoInstance64;
(ProtoInstance86.Field('endnode') as TSFNode).Value := ProtoInstance67;
(ProtoInstance86.Field('transnode') as TSFNode).Value := Transform22;
(ProtoInstance86.Field('rotscalenode') as TSFNode).Value := Transform23;
Group7.FdChildren.Add(ProtoInstance86.Instantiate);
{ ROUTE G1.translation_changed TO connector1.set_startpoint }
Group7.AddRoute(ProtoInstance64.EventTranslation_changed, ProtoInstance68.EventSet_startpoint);
{ ROUTE G2.translation_changed TO connector1.set_endpoint }
Group7.AddRoute(ProtoInstance65.EventTranslation_changed, ProtoInstance68.EventSet_endpoint);
{ ROUTE G1.translation_changed TO connector2.set_startpoint }
Group7.AddRoute(ProtoInstance64.EventTranslation_changed, ProtoInstance77.EventSet_startpoint);
{ ROUTE G3.translation_changed TO connector2.set_endpoint }
Group7.AddRoute(ProtoInstance66.EventTranslation_changed, ProtoInstance77.EventSet_endpoint);
{ ROUTE G1.translation_changed TO connector3.set_startpoint }
Group7.AddRoute(ProtoInstance64.EventTranslation_changed, ProtoInstance86.EventSet_startpoint);
{ ROUTE G4.translation_changed TO connector3.set_endpoint }
Group7.AddRoute(ProtoInstance67.EventTranslation_changed, ProtoInstance86.EventSet_endpoint);
X3D0.AddChildren([Group7]);
end;

function Createarcold: TX3DRootNode;
begin
  InitarcoldPart0;
  InitarcoldPart1;
  InitarcoldPart2;
  InitarcoldPart3;
  InitarcoldPart4;
  InitarcoldPart5;
  Result := X3D0;
end;

begin
end.
