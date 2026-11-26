unit bubs2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createbubs2: TX3DRootNode;
procedure Registerbubs2Scripts(const Scene: TCastleSceneCore);

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
  TScript21Script = class
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
  Group10: TGroupNode;
  NavigationInfo11: TNavigationInfoNode;
  Viewpoint12: TViewpointNode;
  Background13: TBackgroundNode;
  ProtoDeclare14: TX3DPrototype;
  Transform16: TTransformNode;
  Shape17: TShapeNode;
  Sphere18: TSphereNode;
  Appearance19: TAppearanceNode;
  Material20: TMaterialNode;
  Script21: TScriptNode;
  FieldVal22: TSFVec3f;
  FieldVal23: TSFVec3f;
  FieldVal24: TSFVec3f;
  FieldVal25: TSFVec3f;
  FieldVal26: TX3DEvent;
  CompiledScript21: TScript21Script;
  TimeSensor27: TTimeSensorNode;
  ProtoInstance31: TX3DPrototypeNode;
  ProtoInstance32: TX3DPrototypeNode;
  ProtoInstance33: TX3DPrototypeNode;
  ProtoInstance34: TX3DPrototypeNode;

constructor TScript21Script.Create(const AField_scale: TSFVec3f; const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f; const AField_scalvel: TSFVec3f);
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

destructor TScript21Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript21Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript21Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script21_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script21_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript21Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Fvelocity := Vector3(Random * 0.25 - 0.125, Random * 0.25 - 0.125, Random * 0.25 - 0.125); FDirty_velocity := True;
  Fscalvel := Vector3(Random * 0.4, Random * 0.4, Random * 0.4); FDirty_scalvel := True;
  FlushOutputs(Time);
end;

procedure TScript21Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
begin
  if Ftranslation = 'undefined' then
  begin
    Ftranslation := Vector3(0, 0, 0); FDirty_translation := True;
  end;
  if Fvelocity = 'undefined' then
  begin
    Fvelocity := Vector3(0, 0, 0); FDirty_velocity := True;
  end;
  if Fscalvel = 'undefined' then
  begin
    Fscalvel := Vector3(0, 0, 0); FDirty_scalvel := True;
  end;
  if Fscale = 'undefined' then
  begin
    Fscale := Vector3(1, 1, 1); FDirty_scale := True;
  end;
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

procedure Initbubs2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'bubs2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d';
X3D0.Meta['translated'] := '13 March 2016';
X3D0.Meta['generator'] := 'X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html';
Group10 := TGroupNode.Create;
NavigationInfo11 := TNavigationInfoNode.Create;
NavigationInfo11.SetType(['EXAMINE']);
Group10.FdChildren.Add(NavigationInfo11);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Position := Vector3(0, 0, 4);
Viewpoint12.Orientation := Vector4(1, 0, 0, 0);
Viewpoint12.Description := 'Bubbles in action';
Group10.FdChildren.Add(Viewpoint12);
Background13 := TBackgroundNode.Create;
Background13.SetBackUrl(['../resources/images/BK.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background13.SetBottomUrl(['../resources/images/BT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background13.SetFrontUrl(['../resources/images/FR.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background13.SetLeftUrl(['../resources/images/LF.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background13.SetRightUrl(['../resources/images/RT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background13.SetTopUrl(['../resources/images/TP.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
Group10.FdChildren.Add(Background13);
ProtoDeclare14 := CreateEmptyPrototype('Bubble');
ProtoDeclare14.X3DName := 'Bubble';
Transform16 := TTransformNode.Create;
Transform16.X3DName := 'body_trans';
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.25;
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1, 0, 0);
end;

procedure Initbubs2Part1;
begin
Material20.Transparency := 0.2;
Appearance19.Material := Material20;
Shape17.Appearance := Appearance19;
Transform16.FdChildren.Add(Shape17);
Script21 := TScriptNode.Create;
Script21.X3DName := 'bounce';
FieldVal22 := TSFVec3f.Create(Script21, True, 'scale', Vector3(1, 1, 1));
Script21.AddCustomFieldOrEvent(FieldVal22);
FieldVal23 := TSFVec3f.Create(Script21, True, 'translation', Vector3(0, 0, 0));
Script21.AddCustomFieldOrEvent(FieldVal23);
FieldVal24 := TSFVec3f.Create(Script21, True, 'velocity', Vector3(0, 0, 0));
Script21.AddCustomFieldOrEvent(FieldVal24);
FieldVal25 := TSFVec3f.Create(Script21, True, 'scalvel', Vector3(0, 0, 0));
Script21.AddCustomFieldOrEvent(FieldVal25);
FieldVal26 := TSFFloat.CreateEvent(Script21, 'set_fraction', True);
Script21.AddCustomFieldOrEvent(FieldVal26);
FreeAndNil(CompiledScript21);
CompiledScript21 := TScript21Script.Create(FieldVal22, FieldVal23, FieldVal24, FieldVal25);
Script21.SetUrl(['compiled:' + LineEnding +
  'initialize=Script21_initialize' + LineEnding +
  'set_fraction=Script21_set_fraction']);
Transform16.FdChildren.Add(Script21);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.X3DName := 'bubbleClock';
TimeSensor27.CycleInterval := 10;
TimeSensor27.Loop := True;
Transform16.FdChildren.Add(TimeSensor27);
{ ROUTE bounce.translation_changed TO body_trans.set_translation }
Transform16.AddRoute(FieldVal23.EventOut, Transform16.FdTranslation.EventIn);
{ ROUTE bounce.scale_changed TO body_trans.set_scale }
Transform16.AddRoute(FieldVal22.EventOut, Transform16.scale);
{ ROUTE bubbleClock.fraction_changed TO bounce.set_fraction }
Transform16.AddRoute(TimeSensor27.EventFraction_changed, FieldVal26);
ProtoDeclare14.Node.AddChildren([Transform16]);
X3D0.AddPrototype(ProtoDeclare14);
ProtoInstance31 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
ProtoInstance31.X3DName := 'bubbleA';
Group10.FdChildren.Add(ProtoInstance31.Instantiate);
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
ProtoInstance32.X3DName := 'bubbleB';
Group10.FdChildren.Add(ProtoInstance32.Instantiate);
ProtoInstance33 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
end;

procedure Initbubs2Part2;
begin
ProtoInstance33.X3DName := 'bubbleC';
Group10.FdChildren.Add(ProtoInstance33.Instantiate);
ProtoInstance34 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
ProtoInstance34.X3DName := 'bubbleD';
Group10.FdChildren.Add(ProtoInstance34.Instantiate);
X3D0.AddChildren([Group10]);
end;

function Createbubs2: TX3DRootNode;
begin
  Initbubs2Part0;
  Initbubs2Part1;
  Initbubs2Part2;
  Result := X3D0;
end;

procedure Registerbubs2Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript21 <> nil then
    CompiledScript21.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript21);
end.
