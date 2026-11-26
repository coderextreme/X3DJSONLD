unit bubs;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createbubs: TX3DRootNode;
procedure RegisterbubsScripts(const Scene: TCastleSceneCore);

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
  TScript19Script = class
  private
    Fscale: TVector3;
    FField_scale: TSFVec3f;
    FDirty_scale: Boolean;
    Ftranslation: TVector3;
    FField_translation: TSFVec3f;
    FDirty_translation: Boolean;
    Fvelocity: TVector3;
    FField_velocity: TSFVec3f;
    FDirty_velocity: Boolean;
    Fscalvel: TVector3;
    FField_scalvel: TSFVec3f;
    FDirty_scalvel: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_scale: TSFVec3f; const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f; const AField_scalvel: TSFVec3f);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group8: TGroupNode;
  NavigationInfo9: TNavigationInfoNode;
  Viewpoint10: TViewpointNode;
  Background11: TBackgroundNode;
  ProtoDeclare12: TX3DPrototype;
  Transform14: TTransformNode;
  Shape15: TShapeNode;
  Sphere16: TSphereNode;
  Appearance17: TAppearanceNode;
  Material18: TMaterialNode;
  Script19: TScriptNode;
  FieldVal20: TSFVec3f;
  FieldVal21: TSFVec3f;
  FieldVal22: TSFVec3f;
  FieldVal23: TSFVec3f;
  FieldVal24: TX3DEvent;
  CompiledScript19: TScript19Script;
  TimeSensor25: TTimeSensorNode;
  ProtoInstance29: TX3DPrototypeNode;
  ProtoInstance30: TX3DPrototypeNode;
  ProtoInstance31: TX3DPrototypeNode;
  ProtoInstance32: TX3DPrototypeNode;

constructor TScript19Script.Create(const AField_scale: TSFVec3f; const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f; const AField_scalvel: TSFVec3f);
begin
  inherited Create;
  Fscale := Vector3(0, 0, 0);
  FField_scale := nil;
  FDirty_scale := False;
  Ftranslation := Vector3(0, 0, 0);
  FField_translation := nil;
  FDirty_translation := False;
  Fvelocity := Vector3(0, 0, 0);
  FField_velocity := nil;
  FDirty_velocity := False;
  Fscalvel := Vector3(0, 0, 0);
  FField_scalvel := nil;
  FDirty_scalvel := False;
  FField_scale := AField_scale;
  if AField_scale <> nil then Fscale := AField_scale.Value;
  FField_translation := AField_translation;
  if AField_translation <> nil then Ftranslation := AField_translation.Value;
  FField_velocity := AField_velocity;
  if AField_velocity <> nil then Fvelocity := AField_velocity.Value;
  FField_scalvel := AField_scalvel;
  if AField_scalvel <> nil then Fscalvel := AField_scalvel.Value;
end;

destructor TScript19Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript19Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_scale then
  begin
    FDirty_scale := False;
    if FField_scale <> nil then
      FField_scale.Send(Fscale, Time);
  end;
  if FDirty_translation then
  begin
    FDirty_translation := False;
    if FField_translation <> nil then
      FField_translation.Send(Ftranslation, Time);
  end;
  if FDirty_velocity then
  begin
    FDirty_velocity := False;
    if FField_velocity <> nil then
      FField_velocity.Send(Fvelocity, Time);
  end;
  if FDirty_scalvel then
  begin
    FDirty_scalvel := False;
    if FField_scalvel <> nil then
      FField_scalvel.Send(Fscalvel, Time);
  end;
end;

procedure TScript19Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script19_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script19_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript19Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Fvelocity := Vector3(Random * 0.25 - 0.125, Random * 0.25 - 0.125, Random * 0.25 - 0.125); FDirty_velocity := True;
  Fscalvel := Vector3(Random * 0.4, Random * 0.4, Random * 0.4); FDirty_scalvel := True;
  FlushOutputs(Time);
end;

procedure TScript19Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
begin
  Ftranslation := Vector3(Ftranslation.X + Fvelocity.X, Ftranslation.Y + Fvelocity.Y, Ftranslation.Z + Fvelocity.Z); FDirty_translation := True;
  Fscale := Vector3(Fscale.X + Fscalvel.X, Fscale.Y + Fscalvel.Y, Fscale.Z + Fscalvel.Z); FDirty_scale := True;
  if Abs(Ftranslation.X) > 256 then
  begin
    Ftranslation.X := 0; FDirty_translation := True;
    Initialize(nil, Time);
  end;
  if Abs(Ftranslation.Y) > 256 then
  begin
    Ftranslation.Y := 0; FDirty_translation := True;
    Initialize(nil, Time);
  end;
  if Abs(Ftranslation.Z) > 256 then
  begin
    Ftranslation.Z := 0; FDirty_translation := True;
    Initialize(nil, Time);
  end;
  if Abs(Fscale.X) > 20 then
  begin
    Fscale.X := Fscale.X / 20; FDirty_scale := True;
    Ftranslation.X := 0; FDirty_translation := True;
    Initialize(nil, Time);
  end;
  if Abs(Fscale.Y) > 20 then
  begin
    Fscale.Y := Fscale.Y / 20; FDirty_scale := True;
    Ftranslation.Y := 0; FDirty_translation := True;
    Initialize(nil, Time);
  end;
  if Abs(Fscale.Z) > 20 then
  begin
    Fscale.Z := Fscale.Z / 20; FDirty_scale := True;
    Ftranslation.Z := 0; FDirty_translation := True;
    Initialize(nil, Time);
  end;
  FlushOutputs(Time);
end;

procedure InitbubsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'bubs.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d';
Group8 := TGroupNode.Create;
NavigationInfo9 := TNavigationInfoNode.Create;
NavigationInfo9.SetType(['EXAMINE']);
Group8.FdChildren.Add(NavigationInfo9);
Viewpoint10 := TViewpointNode.Create;
Viewpoint10.Position := Vector3(0, 0, 4);
Viewpoint10.Orientation := Vector4(1, 0, 0, 0);
Viewpoint10.Description := 'Bubbles in action';
Group8.FdChildren.Add(Viewpoint10);
Background11 := TBackgroundNode.Create;
Background11.SetBackUrl(['../resources/images/BK.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background11.SetBottomUrl(['../resources/images/BT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background11.SetFrontUrl(['../resources/images/FR.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background11.SetLeftUrl(['../resources/images/LF.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background11.SetRightUrl(['../resources/images/RT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background11.SetTopUrl(['../resources/images/TP.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
Group8.FdChildren.Add(Background11);
ProtoDeclare12 := CreateEmptyPrototype('Bubble');
ProtoDeclare12.X3DName := 'Bubble';
Transform14 := TTransformNode.Create;
Transform14.X3DName := 'body_trans';
Shape15 := TShapeNode.Create;
Sphere16 := TSphereNode.Create;
Sphere16.Radius := 0.25;
Shape15.Geometry := Sphere16;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(1, 0, 0);
Material18.Transparency := 0.2;
Appearance17.Material := Material18;
end;

procedure InitbubsPart1;
begin
Shape15.Appearance := Appearance17;
Transform14.FdChildren.Add(Shape15);
Script19 := TScriptNode.Create;
Script19.X3DName := 'bounce1';
FieldVal20 := TSFVec3f.Create(Script19, True, 'scale', Vector3(1, 1, 1));
Script19.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TSFVec3f.Create(Script19, True, 'translation', Vector3(0, 0, 0));
Script19.AddCustomFieldOrEvent(FieldVal21);
FieldVal22 := TSFVec3f.Create(Script19, True, 'velocity', Vector3(0, 0, 0));
Script19.AddCustomFieldOrEvent(FieldVal22);
FieldVal23 := TSFVec3f.Create(Script19, True, 'scalvel', Vector3(0, 0, 0));
Script19.AddCustomFieldOrEvent(FieldVal23);
FieldVal24 := TSFFloat.CreateEvent(Script19, 'set_fraction', True);
Script19.AddCustomFieldOrEvent(FieldVal24);
FreeAndNil(CompiledScript19);
CompiledScript19 := TScript19Script.Create(FieldVal20, FieldVal21, FieldVal22, FieldVal23);
Script19.SetUrl(['compiled:' + LineEnding +
  'initialize=Script19_initialize' + LineEnding +
  'set_fraction=Script19_set_fraction']);
Transform14.FdChildren.Add(Script19);
TimeSensor25 := TTimeSensorNode.Create;
TimeSensor25.X3DName := 'bubbleClock';
TimeSensor25.CycleInterval := 10;
TimeSensor25.Loop := True;
Transform14.FdChildren.Add(TimeSensor25);
{ ROUTE bounce1.translation_changed TO body_trans.set_translation }
Transform14.AddRoute(FieldVal21.EventOut, Transform14.FdTranslation.EventIn);
{ ROUTE bounce1.scale_changed TO body_trans.set_scale }
Transform14.AddRoute(FieldVal20.EventOut, Transform14.scale);
{ ROUTE bubbleClock.fraction_changed TO bounce1.set_fraction }
Transform14.AddRoute(TimeSensor25.EventFraction_changed, FieldVal24);
ProtoDeclare12.Node.AddChildren([Transform14]);
X3D0.AddPrototype(ProtoDeclare12);
ProtoInstance29 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance29.X3DName := 'bubbleA';
Group8.FdChildren.Add(ProtoInstance29.Instantiate);
ProtoInstance30 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance30.X3DName := 'bubbleB';
Group8.FdChildren.Add(ProtoInstance30.Instantiate);
ProtoInstance31 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance31.X3DName := 'bubbleC';
Group8.FdChildren.Add(ProtoInstance31.Instantiate);
end;

procedure InitbubsPart2;
begin
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance32.X3DName := 'bubbleD';
Group8.FdChildren.Add(ProtoInstance32.Instantiate);
X3D0.AddChildren([Group8]);
end;

function Createbubs: TX3DRootNode;
begin
  InitbubsPart0;
  InitbubsPart1;
  InitbubsPart2;
  Result := X3D0;
end;

procedure RegisterbubsScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript19 <> nil then
    CompiledScript19.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript19);
end.
