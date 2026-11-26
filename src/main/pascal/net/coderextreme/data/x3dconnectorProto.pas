unit x3dconnectorProto;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createx3dconnectorProto: TX3DRootNode;
procedure Registerx3dconnectorProtoScripts(const Scene: TCastleSceneCore);

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors, Math, X3DTime;

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

type
  TScript69Script = class
  private
    Fstartnode: TX3DNode;
    Fendnode: TX3DNode;
    Ftransnode: TX3DNode;
    Frotscalenode: TX3DNode;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_transnode: TSFNode; const AField_rotscalenode: TSFNode);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Recompute(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
    procedure Recompute_and_route(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_startpoint(Value: TX3DField; const Time: TX3DTime);
    procedure Set_endpoint(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group10: TGroupNode;
  WorldInfo11: TWorldInfoNode;
  Viewpoint12: TViewpointNode;
  Background13: TBackgroundNode;
  Transform14: TTransformNode;
  Shape15: TShapeNode;
  Appearance16: TAppearanceNode;
  Material17: TMaterialNode;
  Sphere18: TSphereNode;
  PlaneSensor19: TPlaneSensorNode;
  Transform21: TTransformNode;
  Shape22: TShapeNode;
  Appearance23: TAppearanceNode;
  Material24: TMaterialNode;
  Sphere25: TSphereNode;
  PlaneSensor26: TPlaneSensorNode;
  Transform28: TTransformNode;
  Shape29: TShapeNode;
  Appearance30: TAppearanceNode;
  Material31: TMaterialNode;
  Sphere32: TSphereNode;
  PlaneSensor33: TPlaneSensorNode;
  Transform35: TTransformNode;
  Shape36: TShapeNode;
  Appearance37: TAppearanceNode;
  Material38: TMaterialNode;
  Sphere39: TSphereNode;
  PlaneSensor40: TPlaneSensorNode;
  Transform42: TTransformNode;
  Transform43: TTransformNode;
  Shape44: TShapeNode;
  Appearance45: TAppearanceNode;
  Material46: TMaterialNode;
  Cylinder47: TCylinderNode;
  Transform48: TTransformNode;
  Transform49: TTransformNode;
  Shape50: TShapeNode;
  Appearance51: TAppearanceNode;
  Material52: TMaterialNode;
  Cylinder53: TCylinderNode;
  Transform54: TTransformNode;
  Transform55: TTransformNode;
  Shape56: TShapeNode;
  Appearance57: TAppearanceNode;
  Material58: TMaterialNode;
  Cylinder59: TCylinderNode;
  ProtoDeclare60: TX3DPrototype;
  FieldDecl62: TX3DInterfaceDeclaration;
  FieldVal62: TSFNode;
  FieldDecl63: TX3DInterfaceDeclaration;
  FieldVal63: TSFNode;
  FieldDecl64: TX3DInterfaceDeclaration;
  FieldVal64: TSFNode;
  FieldDecl65: TX3DInterfaceDeclaration;
  FieldVal65: TSFNode;
  FieldDecl66: TX3DInterfaceDeclaration;
  FieldVal66: TX3DEvent;
  FieldDecl67: TX3DInterfaceDeclaration;
  FieldVal67: TX3DEvent;
  Script69: TScriptNode;
  FieldVal70: TSFNode;
  FieldVal71: TSFNode;
  FieldVal72: TSFNode;
  FieldVal73: TSFNode;
  FieldVal74: TX3DEvent;
  FieldVal75: TX3DEvent;
  CompiledScript69: TScript69Script;
  ProtoInstance76: TX3DPrototypeNode;
  ProtoInstance85: TX3DPrototypeNode;
  ProtoInstance94: TX3DPrototypeNode;

constructor TScript69Script.Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_transnode: TSFNode; const AField_rotscalenode: TSFNode);
begin
  inherited Create;
  Fstartnode := nil;
  Fendnode := nil;
  Ftransnode := nil;
  Frotscalenode := nil;
  if AField_startnode <> nil then Fstartnode := AField_startnode.Value;
  if AField_endnode <> nil then Fendnode := AField_endnode.Value;
  if AField_transnode <> nil then Ftransnode := AField_transnode.Value;
  if AField_rotscalenode <> nil then Frotscalenode := AField_rotscalenode.Value;
end;

destructor TScript69Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript69Script.FlushOutputs(const Time: TX3DTime);
begin
end;

procedure TScript69Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script69_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script69_set_startpoint', {$ifdef FPC}@{$endif}Set_startpoint);
  Scene.RegisterCompiledScript('Script69_set_endpoint', {$ifdef FPC}@{$endif}Set_endpoint);
end;

procedure TScript69Script.Recompute(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
var
  dif: Single;
  dist: Single;
  dif2: Single;
  norm: Single;
  transl: Single;
begin
  if endpoint = 'undefined' then
  begin
    Exit;
  end;
  dif := endpoint.subtract(startpoint);
  dist := dif.Length * 0.5;
  dif2 := dif.multiply(0.5);
  norm := dif.Normalize;
  transl := startpoint.add(dif2);
  if Quaternion <> 'undefined' then
  begin
    Result := 0;
    Exit;
  end
  else
  begin
    Result := 0;
    Exit;
  end;
end;

procedure TScript69Script.Recompute_and_route(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
var
  trafo: Single;
begin
  trafo := Recompute(startpoint, endpoint, Time);
  if trafo then
  begin
    Ftransnode.translation := trafo.translation;
    Frotscalenode.rotation := trafo.rotation;
    Frotscalenode.scale := trafo.scale;
  end;
end;

procedure TScript69Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, Fendnode.translation, Time);
end;

procedure TScript69Script.Set_startpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route((Value as TSFVec3f).Value, Fendnode.translation, Time);
end;

procedure TScript69Script.Set_endpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, (Value as TSFVec3f).Value, Time);
end;

procedure Initx3dconnectorProtoPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'x3dconnectorProto.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['created'] := 'Unknown';
X3D0.Meta['modified'] := 'July 30 2023';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
Group10 := TGroupNode.Create;
WorldInfo11 := TWorldInfoNode.Create;
WorldInfo11.Title := 'Connector Proto';
Group10.FdChildren.Add(WorldInfo11);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Position := Vector3(0, 0, 5);
Viewpoint12.Description := 'Only Viewpoint';
Group10.FdChildren.Add(Viewpoint12);
Background13 := TBackgroundNode.Create;
Background13.SetSkyColor([Vector3(0.4, 0.4, 0.4)]);
Group10.FdChildren.Add(Background13);
Transform14 := TTransformNode.Create;
Transform14.X3DName := 'G1';
Shape15 := TShapeNode.Create;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(0.7, 0.2, 0.2);
Appearance16.Material := Material17;
Shape15.Appearance := Appearance16;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.1;
Shape15.Geometry := Sphere18;
Transform14.FdChildren.Add(Shape15);
PlaneSensor19 := TPlaneSensorNode.Create;
PlaneSensor19.Description := 'Grab to move';
PlaneSensor19.X3DName := 'PS1';
Transform14.FdChildren.Add(PlaneSensor19);
{ ROUTE PS1.translation_changed TO G1.set_translation }
end;

procedure Initx3dconnectorProtoPart1;
begin
Transform14.AddRoute(PlaneSensor19.EventTranslation_changed, Transform14.FdTranslation.EventIn);
Group10.FdChildren.Add(Transform14);
Transform21 := TTransformNode.Create;
Transform21.X3DName := 'G2';
Transform21.Translation := Vector3(1, -1, 0.01);
Shape22 := TShapeNode.Create;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.2, 0.7, 0.2);
Appearance23.Material := Material24;
Shape22.Appearance := Appearance23;
Sphere25 := TSphereNode.Create;
Sphere25.Radius := 0.1;
Shape22.Geometry := Sphere25;
Transform21.FdChildren.Add(Shape22);
PlaneSensor26 := TPlaneSensorNode.Create;
PlaneSensor26.Description := 'Grab to move';
PlaneSensor26.Offset := Vector3(1, -1, 0.01);
PlaneSensor26.X3DName := 'PS2';
Transform21.FdChildren.Add(PlaneSensor26);
{ ROUTE PS2.translation_changed TO G2.set_translation }
Transform21.AddRoute(PlaneSensor26.EventTranslation_changed, Transform21.FdTranslation.EventIn);
Group10.FdChildren.Add(Transform21);
Transform28 := TTransformNode.Create;
Transform28.X3DName := 'G3';
Transform28.Translation := Vector3(1, 1, 0.01);
Shape29 := TShapeNode.Create;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
Material31.DiffuseColor := Vector3(0.2, 0.7, 0.2);
Appearance30.Material := Material31;
Shape29.Appearance := Appearance30;
Sphere32 := TSphereNode.Create;
Sphere32.Radius := 0.1;
Shape29.Geometry := Sphere32;
Transform28.FdChildren.Add(Shape29);
PlaneSensor33 := TPlaneSensorNode.Create;
PlaneSensor33.Description := 'Grab to move';
PlaneSensor33.Offset := Vector3(1, 1, 0.01);
PlaneSensor33.X3DName := 'PS3';
end;

procedure Initx3dconnectorProtoPart2;
begin
Transform28.FdChildren.Add(PlaneSensor33);
{ ROUTE PS3.translation_changed TO G3.set_translation }
Transform28.AddRoute(PlaneSensor33.EventTranslation_changed, Transform28.FdTranslation.EventIn);
Group10.FdChildren.Add(Transform28);
Transform35 := TTransformNode.Create;
Transform35.X3DName := 'G4';
Transform35.Translation := Vector3(-1, 1, 0.01);
Shape36 := TShapeNode.Create;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.DiffuseColor := Vector3(0.2, 0.7, 0.2);
Appearance37.Material := Material38;
Shape36.Appearance := Appearance37;
Sphere39 := TSphereNode.Create;
Sphere39.Radius := 0.1;
Shape36.Geometry := Sphere39;
Transform35.FdChildren.Add(Shape36);
PlaneSensor40 := TPlaneSensorNode.Create;
PlaneSensor40.Description := 'Grab to move';
PlaneSensor40.Offset := Vector3(-1, 1, 0.01);
PlaneSensor40.X3DName := 'PS4';
Transform35.FdChildren.Add(PlaneSensor40);
{ ROUTE PS4.translation_changed TO G4.set_translation }
Transform35.AddRoute(PlaneSensor40.EventTranslation_changed, Transform35.FdTranslation.EventIn);
Group10.FdChildren.Add(Transform35);
Transform42 := TTransformNode.Create;
Transform42.X3DName := 'transC1';
Transform43 := TTransformNode.Create;
Transform43.X3DName := 'rotscaleC1';
Shape44 := TShapeNode.Create;
Appearance45 := TAppearanceNode.Create;
Material46 := TMaterialNode.Create;
Material46.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material46.Transparency := 0.5;
Appearance45.Material := Material46;
Shape44.Appearance := Appearance45;
Cylinder47 := TCylinderNode.Create;
Cylinder47.Radius := 0.05;
Shape44.Geometry := Cylinder47;
Transform43.FdChildren.Add(Shape44);
end;

procedure Initx3dconnectorProtoPart3;
begin
Transform42.FdChildren.Add(Transform43);
Group10.FdChildren.Add(Transform42);
Transform48 := TTransformNode.Create;
Transform48.X3DName := 'transC2';
Transform49 := TTransformNode.Create;
Transform49.X3DName := 'rotscaleC2';
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material52.Transparency := 0.5;
Appearance51.Material := Material52;
Shape50.Appearance := Appearance51;
Cylinder53 := TCylinderNode.Create;
Cylinder53.Radius := 0.05;
Shape50.Geometry := Cylinder53;
Transform49.FdChildren.Add(Shape50);
Transform48.FdChildren.Add(Transform49);
Group10.FdChildren.Add(Transform48);
Transform54 := TTransformNode.Create;
Transform54.X3DName := 'transC3';
Transform55 := TTransformNode.Create;
Transform55.X3DName := 'rotscaleC3';
Shape56 := TShapeNode.Create;
Appearance57 := TAppearanceNode.Create;
Material58 := TMaterialNode.Create;
Material58.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material58.Transparency := 0.5;
Appearance57.Material := Material58;
Shape56.Appearance := Appearance57;
Cylinder59 := TCylinderNode.Create;
Cylinder59.Radius := 0.05;
Shape56.Geometry := Cylinder59;
Transform55.FdChildren.Add(Shape56);
Transform54.FdChildren.Add(Transform55);
Group10.FdChildren.Add(Transform54);
ProtoDeclare60 := CreateEmptyPrototype('x3dconnector');
ProtoDeclare60.X3DName := 'x3dconnector';
FieldVal62 := TSFNode.CreateUndefined(nil, False, 'startnode');
FieldDecl62 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure Initx3dconnectorProtoPart4;
begin
FieldDecl62.FieldOrEvent := FieldVal62;
FieldVal62.ParentInterfaceDeclaration := FieldDecl62;
ProtoDeclare60.InterfaceDeclarations.Add(FieldDecl62);
FieldVal63 := TSFNode.CreateUndefined(nil, False, 'endnode');
FieldDecl63 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl63.FieldOrEvent := FieldVal63;
FieldVal63.ParentInterfaceDeclaration := FieldDecl63;
ProtoDeclare60.InterfaceDeclarations.Add(FieldDecl63);
FieldVal64 := TSFNode.CreateUndefined(nil, False, 'transnode');
FieldDecl64 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl64.FieldOrEvent := FieldVal64;
FieldVal64.ParentInterfaceDeclaration := FieldDecl64;
ProtoDeclare60.InterfaceDeclarations.Add(FieldDecl64);
FieldVal65 := TSFNode.CreateUndefined(nil, False, 'rotscalenode');
FieldDecl65 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl65.FieldOrEvent := FieldVal65;
FieldVal65.ParentInterfaceDeclaration := FieldDecl65;
ProtoDeclare60.InterfaceDeclarations.Add(FieldDecl65);
FieldVal66 := TSFVec3f.CreateEvent(nil, 'set_startpoint', True);
FieldDecl66 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl66.FieldOrEvent := FieldVal66;
FieldVal66.ParentInterfaceDeclaration := FieldDecl66;
ProtoDeclare60.InterfaceDeclarations.Add(FieldDecl66);
FieldVal67 := TSFVec3f.CreateEvent(nil, 'set_endpoint', True);
FieldDecl67 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl67.FieldOrEvent := FieldVal67;
FieldVal67.ParentInterfaceDeclaration := FieldDecl67;
ProtoDeclare60.InterfaceDeclarations.Add(FieldDecl67);
Script69 := TScriptNode.Create;
Script69.X3DName := 'S1';
Script69.DirectOutput := True;
FieldVal70 := TSFNode.CreateUndefined(Script69, False, 'startnode');
Script69.AddCustomFieldOrEvent(FieldVal70);
FieldVal71 := TSFNode.CreateUndefined(Script69, False, 'endnode');
Script69.AddCustomFieldOrEvent(FieldVal71);
FieldVal72 := TSFNode.CreateUndefined(Script69, False, 'transnode');
Script69.AddCustomFieldOrEvent(FieldVal72);
FieldVal73 := TSFNode.CreateUndefined(Script69, False, 'rotscalenode');
Script69.AddCustomFieldOrEvent(FieldVal73);
FieldVal74 := TSFVec3f.CreateEvent(Script69, 'set_startpoint', True);
end;

procedure Initx3dconnectorProtoPart5;
begin
Script69.AddCustomFieldOrEvent(FieldVal74);
FieldVal75 := TSFVec3f.CreateEvent(Script69, 'set_endpoint', True);
Script69.AddCustomFieldOrEvent(FieldVal75);
Script69.FieldOrEvent('startnode', True).IsClauseNamesAdd('startnode');
Script69.FieldOrEvent('endnode', True).IsClauseNamesAdd('endnode');
Script69.FieldOrEvent('transnode', True).IsClauseNamesAdd('transnode');
Script69.FieldOrEvent('rotscalenode', True).IsClauseNamesAdd('rotscalenode');
Script69.FieldOrEvent('set_startpoint', True).IsClauseNamesAdd('set_startpoint');
Script69.FieldOrEvent('set_endpoint', True).IsClauseNamesAdd('set_endpoint');
FreeAndNil(CompiledScript69);
CompiledScript69 := TScript69Script.Create(FieldVal70, FieldVal71, FieldVal72, FieldVal73);
Script69.SetUrl(['compiled:' + LineEnding +
  'initialize=Script69_initialize' + LineEnding +
  'set_startpoint=Script69_set_startpoint' + LineEnding +
  'set_endpoint=Script69_set_endpoint']);
ProtoDeclare60.Node.AddChildren([Script69]);
X3D0.AddPrototype(ProtoDeclare60);
ProtoInstance76 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare60);
ProtoInstance76.X3DName := 'connector1';
(ProtoInstance76.Field('startnode') as TSFNode).Value := Transform14;
(ProtoInstance76.Field('endnode') as TSFNode).Value := Transform21;
(ProtoInstance76.Field('transnode') as TSFNode).Value := Transform42;
(ProtoInstance76.Field('rotscalenode') as TSFNode).Value := Transform43;
Group10.FdChildren.Add(ProtoInstance76.Instantiate);
ProtoInstance85 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare60);
ProtoInstance85.X3DName := 'connector2';
(ProtoInstance85.Field('startnode') as TSFNode).Value := Transform14;
(ProtoInstance85.Field('endnode') as TSFNode).Value := Transform28;
(ProtoInstance85.Field('transnode') as TSFNode).Value := Transform48;
(ProtoInstance85.Field('rotscalenode') as TSFNode).Value := Transform49;
Group10.FdChildren.Add(ProtoInstance85.Instantiate);
ProtoInstance94 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare60);
ProtoInstance94.X3DName := 'connector3';
(ProtoInstance94.Field('startnode') as TSFNode).Value := Transform14;
(ProtoInstance94.Field('endnode') as TSFNode).Value := Transform35;
(ProtoInstance94.Field('transnode') as TSFNode).Value := Transform54;
(ProtoInstance94.Field('rotscalenode') as TSFNode).Value := Transform55;
Group10.FdChildren.Add(ProtoInstance94.Instantiate);
{ ROUTE G1.translation_changed TO connector1.set_startpoint }
Group10.AddRoute(Transform14.EventTranslation_changed, ProtoInstance76.EventSet_startpoint);
{ ROUTE G2.translation_changed TO connector1.set_endpoint }
Group10.AddRoute(Transform21.EventTranslation_changed, ProtoInstance76.EventSet_endpoint);
{ ROUTE G1.translation_changed TO connector2.set_startpoint }
end;

procedure Initx3dconnectorProtoPart6;
begin
Group10.AddRoute(Transform14.EventTranslation_changed, ProtoInstance85.EventSet_startpoint);
{ ROUTE G3.translation_changed TO connector2.set_endpoint }
Group10.AddRoute(Transform28.EventTranslation_changed, ProtoInstance85.EventSet_endpoint);
{ ROUTE G1.translation_changed TO connector3.set_startpoint }
Group10.AddRoute(Transform14.EventTranslation_changed, ProtoInstance94.EventSet_startpoint);
{ ROUTE G4.translation_changed TO connector3.set_endpoint }
Group10.AddRoute(Transform35.EventTranslation_changed, ProtoInstance94.EventSet_endpoint);
X3D0.AddChildren([Group10]);
end;

function Createx3dconnectorProto: TX3DRootNode;
begin
  Initx3dconnectorProtoPart0;
  Initx3dconnectorProtoPart1;
  Initx3dconnectorProtoPart2;
  Initx3dconnectorProtoPart3;
  Initx3dconnectorProtoPart4;
  Initx3dconnectorProtoPart5;
  Initx3dconnectorProtoPart6;
  Result := X3D0;
end;

procedure Registerx3dconnectorProtoScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript69 <> nil then
    CompiledScript69.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript69);
end.
