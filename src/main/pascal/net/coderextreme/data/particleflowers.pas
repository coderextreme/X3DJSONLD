unit particleflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createparticleflowers: TX3DRootNode;
procedure RegisterparticleflowersScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript50Script = class
  private
    Ftranslation: TVector3;
    FField_translation: TSFVec3f;
    FDirty_translation: Boolean;
    Fvelocity: TVector3;
    FField_velocity: TSFVec3f;
    FDirty_velocity: Boolean;
    Fa: Single;
    FField_a: TSFFloat;
    FDirty_a: Boolean;
    Fb: Single;
    FField_b: TSFFloat;
    FDirty_b: Boolean;
    Fc: Single;
    FField_c: TSFFloat;
    FDirty_c: Boolean;
    Fd: Single;
    FField_d: TSFFloat;
    FDirty_d: Boolean;
    Ftdelta: Single;
    FField_tdelta: TSFFloat;
    FDirty_tdelta: Boolean;
    Fpdelta: Single;
    FField_pdelta: TSFFloat;
    FDirty_pdelta: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f; const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_tdelta: TSFFloat; const AField_pdelta: TSFFloat);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
    procedure Animate_flowers(const fraction: Single; const eventTime: Single; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  WorldInfo16: TWorldInfoNode;
  NavigationInfo17: TNavigationInfoNode;
  Viewpoint18: TViewpointNode;
  Background19: TBackgroundNode;
  Group20: TGroupNode;
  ParticleSystem21: TParticleSystemNode;
  BoundedPhysicsModel22: TBoundedPhysicsModelNode;
  Sphere23: TSphereNode;
  ExplosionEmitter24: TExplosionEmitterNode;
  Appearance25: TAppearanceNode;
  Material26: TMaterialNode;
  ComposedCubeMapTexture27: TComposedCubeMapTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ImageTexture30: TImageTextureNode;
  ImageTexture31: TImageTextureNode;
  ImageTexture32: TImageTextureNode;
  ImageTexture33: TImageTextureNode;
  ComposedShader34: TComposedShaderNode;
  FieldVal35: TSFVec3f;
  FieldVal36: TSFNode;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  FieldVal43: TSFFloat;
  FieldVal44: TSFFloat;
  FieldVal45: TSFFloat;
  FieldVal46: TSFFloat;
  ShaderPart47: TShaderPartNode;
  ShaderPart48: TShaderPartNode;
  Sphere49: TSphereNode;
  Script50: TScriptNode;
  FieldVal51: TSFVec3f;
  FieldVal52: TSFVec3f;
  FieldVal53: TX3DEvent;
  FieldVal54: TSFFloat;
  FieldVal55: TSFFloat;
  FieldVal56: TSFFloat;
  FieldVal57: TSFFloat;
  FieldVal58: TSFFloat;
  FieldVal59: TSFFloat;
  CompiledScript50: TScript50Script;
  TimeSensor60: TTimeSensorNode;

constructor TScript50Script.Create(const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f; const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_tdelta: TSFFloat; const AField_pdelta: TSFFloat);
begin
  inherited Create;
  Ftranslation := Vector3(0, 0, 0);
  FField_translation := nil;
  FDirty_translation := False;
  Fvelocity := Vector3(0, 0, 0);
  FField_velocity := nil;
  FDirty_velocity := False;
  Fa := 0.0;
  FField_a := nil;
  FDirty_a := False;
  Fb := 0.0;
  FField_b := nil;
  FDirty_b := False;
  Fc := 0.0;
  FField_c := nil;
  FDirty_c := False;
  Fd := 0.0;
  FField_d := nil;
  FDirty_d := False;
  Ftdelta := 0.0;
  FField_tdelta := nil;
  FDirty_tdelta := False;
  Fpdelta := 0.0;
  FField_pdelta := nil;
  FDirty_pdelta := False;
  FField_translation := AField_translation;
  if AField_translation <> nil then Ftranslation := AField_translation.Value;
  FField_velocity := AField_velocity;
  if AField_velocity <> nil then Fvelocity := AField_velocity.Value;
  FField_a := AField_a;
  if AField_a <> nil then Fa := AField_a.Value;
  FField_b := AField_b;
  if AField_b <> nil then Fb := AField_b.Value;
  FField_c := AField_c;
  if AField_c <> nil then Fc := AField_c.Value;
  FField_d := AField_d;
  if AField_d <> nil then Fd := AField_d.Value;
  FField_tdelta := AField_tdelta;
  if AField_tdelta <> nil then Ftdelta := AField_tdelta.Value;
  FField_pdelta := AField_pdelta;
  if AField_pdelta <> nil then Fpdelta := AField_pdelta.Value;
end;

destructor TScript50Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript50Script.FlushOutputs(const Time: TX3DTime);
begin
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
  if FDirty_a then
  begin
    FDirty_a := False;
    if FField_a <> nil then
      FField_a.Send(Fa, Time);
  end;
  if FDirty_b then
  begin
    FDirty_b := False;
    if FField_b <> nil then
      FField_b.Send(Fb, Time);
  end;
  if FDirty_c then
  begin
    FDirty_c := False;
    if FField_c <> nil then
      FField_c.Send(Fc, Time);
  end;
  if FDirty_d then
  begin
    FDirty_d := False;
    if FField_d <> nil then
      FField_d.Send(Fd, Time);
  end;
  if FDirty_tdelta then
  begin
    FDirty_tdelta := False;
    if FField_tdelta <> nil then
      FField_tdelta.Send(Ftdelta, Time);
  end;
  if FDirty_pdelta then
  begin
    FDirty_pdelta := False;
    if FField_pdelta <> nil then
      FField_pdelta.Send(Fpdelta, Time);
  end;
end;

procedure TScript50Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script50_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script50_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript50Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Ftranslation := Vector3(0, 0, 0); FDirty_translation := True;
  Fvelocity := Vector3(Random - 0.5, Random - 0.5, Random - 0.5); FDirty_velocity := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
var
  j: Integer;
begin
  Ftranslation := Vector3(Ftranslation.X + Fvelocity.X, Ftranslation.Y + Fvelocity.Y, Ftranslation.Z + Fvelocity.Z); FDirty_translation := True;
  for j := 0 to 2 do
  begin
    if Abs(Ftranslation.X) > 10 then
    begin
      Initialize(nil, Time);
    end
    else if Abs(Ftranslation.Y) > 10 then
    begin
      Initialize(nil, Time);
    end
    else if Abs(Ftranslation.Z) > 10 then
    begin
      Initialize(nil, Time);
    end
    else
    begin
      Fvelocity.X := Fvelocity.X + (Random * 0.2 - 0.1); FDirty_velocity := True;
      Fvelocity.Y := Fvelocity.Y + (Random * 0.2 - 0.1); FDirty_velocity := True;
      Fvelocity.Z := Fvelocity.Z + (Random * 0.2 - 0.1); FDirty_velocity := True;
    end;
  end;
  Animate_flowers(0.0, 0.0, Time);
  FlushOutputs(Time);
end;

procedure TScript50Script.Animate_flowers(const fraction: Single; const eventTime: Single; const Time: TX3DTime);
var
  choice: Integer;
begin
  choice := Floor(Random * 4);
  case choice of
    0:
    begin
      Fa := Fa + (Random * 0.2 - 0.1); FDirty_a := True;
    end;
    1:
    begin
      Fb := Fb + (Random * 0.2 - 0.1); FDirty_b := True;
    end;
    2:
    begin
      Fc := Fc + (Random * 2 - 1); FDirty_c := True;
    end;
    3:
    begin
      Fd := Fd + (Random * 2 - 1); FDirty_d := True;
    end;
  end;
  Ftdelta := Ftdelta + 0.05; FDirty_tdelta := True;
  Fpdelta := Fpdelta + 0.05; FDirty_pdelta := True;
  if Fa > 1 then
  begin
    Fa := 0.5; FDirty_a := True;
  end;
  if Fb > 1 then
  begin
    Fb := 0.5; FDirty_b := True;
  end;
  if Fc < 1 then
  begin
    Fc := 4; FDirty_c := True;
  end;
  if Fd < 1 then
  begin
    Fd := 4; FDirty_d := True;
  end;
  if Fc > 10 then
  begin
    Fc := 4; FDirty_c := True;
  end;
  if Fd > 10 then
  begin
    Fd := 4; FDirty_d := True;
  end;
end;

procedure InitparticleflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Components['ParticleSystems'] := 3;
X3D0.Meta['title'] := 'particleflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower particle system';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
X3D0.Meta['generator'] := 'Vim';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'particleflowers.x3d';
Group15.FdChildren.Add(WorldInfo16);
NavigationInfo17 := TNavigationInfoNode.Create;
NavigationInfo17.SetType(['ANY', 'EXAMINE', 'FLY', 'LOOKAT']);
Group15.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
Viewpoint18.Position := Vector3(0, 0, 12);
Group15.FdChildren.Add(Viewpoint18);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png', '../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png', '../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png', '../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png', '../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png', '../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png', '../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group15.FdChildren.Add(Background19);
Group20 := TGroupNode.Create;
ParticleSystem21 := TParticleSystemNode.Create;
ParticleSystem21.MaxParticles := 20;
ParticleSystem21.GeometryType := 'GEOMETRY';
end;

procedure InitparticleflowersPart1;
begin
BoundedPhysicsModel22 := TBoundedPhysicsModelNode.Create;
Sphere23 := TSphereNode.Create;
Sphere23.Radius := 100;
BoundedPhysicsModel22.Geometry := Sphere23;
ParticleSystem21.Physics := BoundedPhysicsModel22;
ExplosionEmitter24 := TExplosionEmitterNode.Create;
ExplosionEmitter24.Speed := 2;
ExplosionEmitter24.Variation := 0.75;
ParticleSystem21.Emitter := ExplosionEmitter24;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material26.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture27.X3DName := 'texture';
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png', '../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture27.BackTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png', '../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture27.BottomTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png', '../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture27.FrontTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png', '../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture27.LeftTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png', '../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture27.RightTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png', '../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture27.TopTexture := ImageTexture33;
Appearance25.Texture := ComposedCubeMapTexture27;
ComposedShader34 := TComposedShaderNode.Create;
ComposedShader34.X3DName := 'x_ite';
ComposedShader34.Language := slGLSL;
FieldVal35 := TSFVec3f.Create(ComposedShader34, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader34.AddCustomFieldOrEvent(FieldVal35);
end;

procedure InitparticleflowersPart2;
begin
FieldVal36 := TSFNode.CreateUndefined(ComposedShader34, False, 'cube');
ComposedShader34.AddCustomFieldOrEvent(FieldVal36);
FieldVal36.Value := ComposedCubeMapTexture27;
FieldVal38 := TSFFloat.Create(ComposedShader34, False, 'bias', 0.5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader34, False, 'scale', 0.5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader34, False, 'power', 2);
ComposedShader34.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.Create(ComposedShader34, True, 'a', 2);
ComposedShader34.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.Create(ComposedShader34, True, 'b', 1);
ComposedShader34.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.Create(ComposedShader34, True, 'c', 5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.Create(ComposedShader34, True, 'd', 5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.Create(ComposedShader34, True, 'tdelta', 0);
ComposedShader34.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(ComposedShader34, True, 'pdelta', 0);
ComposedShader34.AddCustomFieldOrEvent(FieldVal46);
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs', '../shaders/x_ite_flower_particles.vs']);
ShaderPart47.ShaderType := stVertex;
ComposedShader34.FdParts.Add(ShaderPart47);
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs', '../shaders/commonnew.fs']);
ShaderPart48.ShaderType := stFragment;
ComposedShader34.FdParts.Add(ShaderPart48);
Appearance25.FdShaders.Add(ComposedShader34);
ParticleSystem21.Appearance := Appearance25;
Sphere49 := TSphereNode.Create;
ParticleSystem21.Geometry := Sphere49;
Group20.FdChildren.Add(ParticleSystem21);
Script50 := TScriptNode.Create;
Script50.X3DName := 'Animate';
FieldVal51 := TSFVec3f.Create(Script50, True, 'translation', Vector3(0, 0, 0));
Script50.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFVec3f.Create(Script50, True, 'velocity', Vector3(0, 0, 0));
Script50.AddCustomFieldOrEvent(FieldVal52);
end;

procedure InitparticleflowersPart3;
begin
FieldVal53 := TSFFloat.CreateEvent(Script50, 'set_fraction', True);
Script50.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.Create(Script50, True, 'a', 0.5);
Script50.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.Create(Script50, True, 'b', 0.5);
Script50.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.Create(Script50, True, 'c', 3);
Script50.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.Create(Script50, True, 'd', 3);
Script50.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFFloat.Create(Script50, True, 'tdelta', 0.5);
Script50.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFFloat.Create(Script50, True, 'pdelta', 0.5);
Script50.AddCustomFieldOrEvent(FieldVal59);
FreeAndNil(CompiledScript50);
CompiledScript50 := TScript50Script.Create(FieldVal51, FieldVal52, FieldVal54, FieldVal55, FieldVal56, FieldVal57, FieldVal58, FieldVal59);
Script50.SetUrl(['compiled:' + LineEnding +
  'initialize=Script50_initialize' + LineEnding +
  'set_fraction=Script50_set_fraction']);
Group20.FdChildren.Add(Script50);
TimeSensor60 := TTimeSensorNode.Create;
TimeSensor60.X3DName := 'TourTime';
TimeSensor60.CycleInterval := 5;
TimeSensor60.Loop := True;
Group20.FdChildren.Add(TimeSensor60);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Group20.AddRoute(TimeSensor60.EventFraction_changed, FieldVal53);
{ ROUTE Animate.a TO x_ite.a }
Group20.AddRoute(FieldVal54.EventOut, FieldVal41.EventIn);
{ ROUTE Animate.b TO x_ite.b }
Group20.AddRoute(FieldVal55.EventOut, FieldVal42.EventIn);
{ ROUTE Animate.c TO x_ite.c }
Group20.AddRoute(FieldVal56.EventOut, FieldVal43.EventIn);
{ ROUTE Animate.d TO x_ite.d }
Group20.AddRoute(FieldVal57.EventOut, FieldVal44.EventIn);
{ ROUTE Animate.pdelta TO x_ite.pdelta }
Group20.AddRoute(FieldVal59.EventOut, FieldVal46.EventIn);
{ ROUTE Animate.tdelta TO x_ite.tdelta }
Group20.AddRoute(FieldVal58.EventOut, FieldVal45.EventIn);
Group15.FdChildren.Add(Group20);
X3D0.AddChildren([Group15]);
end;

function Createparticleflowers: TX3DRootNode;
begin
  InitparticleflowersPart0;
  InitparticleflowersPart1;
  InitparticleflowersPart2;
  InitparticleflowersPart3;
  Result := X3D0;
end;

procedure RegisterparticleflowersScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript50 <> nil then
    CompiledScript50.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript50);
end.
