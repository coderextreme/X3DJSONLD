unit variationalflowers2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createvariationalflowers2: TX3DRootNode;
procedure Registervariationalflowers2Scripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript43Script = class
  private
    Fvalues: array of Single;
    FField_values: TMFFloat;
    FDirty_values: Boolean;
    Fvariations: array of Single;
    FField_variations: TMFFloat;
    FDirty_variations: Boolean;
    Flastframe: Single;
    FField_lastframe: TSFFloat;
    FDirty_lastframe: Boolean;
    Fupdaterate: Single;
    FField_updaterate: TSFFloat;
    FDirty_updaterate: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_values: TMFFloat; const AField_variations: TMFFloat; const AField_lastframe: TSFFloat; const AField_updaterate: TSFFloat);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group14: TGroupNode;
  WorldInfo15: TWorldInfoNode;
  NavigationInfo16: TNavigationInfoNode;
  Viewpoint17: TViewpointNode;
  Background18: TBackgroundNode;
  Transform19: TTransformNode;
  ParticleSystem20: TParticleSystemNode;
  VariationPhysicsModel21: TVariationPhysicsModelNode;
  ExplosionEmitter22: TExplosionEmitterNode;
  Sphere23: TSphereNode;
  Appearance24: TAppearanceNode;
  Material25: TMaterialNode;
  ComposedCubeMapTexture26: TComposedCubeMapTextureNode;
  ImageTexture27: TImageTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ImageTexture30: TImageTextureNode;
  ImageTexture31: TImageTextureNode;
  ImageTexture32: TImageTextureNode;
  ComposedShader33: TComposedShaderNode;
  FieldVal34: TSFVec3f;
  FieldVal35: TSFNode;
  FieldVal37: TSFFloat;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TMFFloat;
  ShaderPart41: TShaderPartNode;
  ShaderPart42: TShaderPartNode;
  Script43: TScriptNode;
  FieldVal44: TX3DEvent;
  FieldVal45: TMFFloat;
  FieldVal46: TMFFloat;
  FieldVal47: TSFFloat;
  FieldVal48: TSFFloat;
  CompiledScript43: TScript43Script;
  TimeSensor49: TTimeSensorNode;

constructor TScript43Script.Create(const AField_values: TMFFloat; const AField_variations: TMFFloat; const AField_lastframe: TSFFloat; const AField_updaterate: TSFFloat);
begin
  inherited Create;
  Fvalues := 0;
  FField_values := nil;
  FDirty_values := False;
  Fvariations := 0;
  FField_variations := nil;
  FDirty_variations := False;
  Flastframe := 0.0;
  FField_lastframe := nil;
  FDirty_lastframe := False;
  Fupdaterate := 0.0;
  FField_updaterate := nil;
  FDirty_updaterate := False;
  FField_values := AField_values;
  if AField_values <> nil then Fvalues := AField_values.Value;
  FField_variations := AField_variations;
  if AField_variations <> nil then Fvariations := AField_variations.Value;
  FField_lastframe := AField_lastframe;
  if AField_lastframe <> nil then Flastframe := AField_lastframe.Value;
  FField_updaterate := AField_updaterate;
  if AField_updaterate <> nil then Fupdaterate := AField_updaterate.Value;
end;

destructor TScript43Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript43Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_values then
  begin
    FDirty_values := False;
    if FField_values <> nil then
      FField_values.Send(Fvalues, Time);
  end;
  if FDirty_variations then
  begin
    FDirty_variations := False;
    if FField_variations <> nil then
      FField_variations.Send(Fvariations, Time);
  end;
  if FDirty_lastframe then
  begin
    FDirty_lastframe := False;
    if FField_lastframe <> nil then
      FField_lastframe.Send(Flastframe, Time);
  end;
  if FDirty_updaterate then
  begin
    FDirty_updaterate := False;
    if FField_updaterate <> nil then
      FField_updaterate.Send(Fupdaterate, Time);
  end;
end;

procedure TScript43Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script43_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript43Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
var
  v: Integer;
begin
  if Flastframe + Fupdaterate < tm then
  begin
    Flastframe := tm; FDirty_lastframe := True;
    for v := 0 to High(Fvalues) do
    begin
      Fvalues[v] := Fvalues[v] + 2 * Random - 1 * Fvariations[v]; FDirty_values := True;
    end;
  end;
  FlushOutputs(Time);
end;

procedure Initvariationalflowers2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
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
X3D0.Meta['title'] := 'variationalflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower particle system';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'variationalflowers.x3d';
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY', 'EXAMINE', 'FLY', 'LOOKAT']);
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0, 0, 12);
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group14.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
ParticleSystem20 := TParticleSystemNode.Create;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
{ * values - array of MFFloats to pass to ComposedShader }
end;

procedure Initvariationalflowers2Part1;
begin
{ * variations in values - array of MFFloats to pass to ComposedShader that varies values }
VariationPhysicsModel21 := TVariationPhysicsModelNode.Create;
VariationPhysicsModel21.Values := '2 2 5 5 0 0';
VariationPhysicsModel21.Variations := '0.2 0.1 0.3 0.3 0.01 0.01';
ParticleSystem20.AddVariationPhysicsModel([VariationPhysicsModel21]);
ExplosionEmitter22 := TExplosionEmitterNode.Create;
ExplosionEmitter22.Speed := 1;
ExplosionEmitter22.Variation := 0.75;
ParticleSystem20.Emitter := ExplosionEmitter22;
Sphere23 := TSphereNode.Create;
ParticleSystem20.Geometry := Sphere23;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material25.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance24.Material := Material25;
ComposedCubeMapTexture26 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture26.X3DName := 'texture';
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture26.BackTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture26.BottomTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture26.FrontTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture26.LeftTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture26.RightTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture26.TopTexture := ImageTexture32;
Appearance24.Texture := ComposedCubeMapTexture26;
ComposedShader33 := TComposedShaderNode.Create;
ComposedShader33.X3DName := 'x_ite';
ComposedShader33.Language := slGLSL;
end;

procedure Initvariationalflowers2Part2;
begin
FieldVal34 := TSFVec3f.Create(ComposedShader33, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader33.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFNode.CreateUndefined(ComposedShader33, False, 'cube');
ComposedShader33.AddCustomFieldOrEvent(FieldVal35);
FieldVal35.Value := ComposedCubeMapTexture26;
FieldVal37 := TSFFloat.Create(ComposedShader33, False, 'bias', 0.5);
ComposedShader33.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.Create(ComposedShader33, False, 'scale', 0.5);
ComposedShader33.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader33, False, 'power', 2);
ComposedShader33.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TMFFloat.Create(ComposedShader33, True, 'x3d_ParticleValues', [2, 1, 4, 4, 0, 0]);
ComposedShader33.AddCustomFieldOrEvent(FieldVal40);
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/x_ite_variations.vs']);
ShaderPart41.ShaderType := stVertex;
ComposedShader33.FdParts.Add(ShaderPart41);
ShaderPart42 := TShaderPartNode.Create;
ShaderPart42.SetUrl(['../shaders/commonnew.fs']);
ShaderPart42.ShaderType := stFragment;
ComposedShader33.FdParts.Add(ShaderPart42);
Appearance24.FdShaders.Add(ComposedShader33);
ParticleSystem20.Appearance := Appearance24;
Transform19.FdChildren.Add(ParticleSystem20);
Script43 := TScriptNode.Create;
Script43.X3DName := 'Animate';
FieldVal44 := TSFFloat.CreateEvent(Script43, 'set_fraction', True);
Script43.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TMFFloat.Create(Script43, True, 'values', [2, 2, 5, 5, 0, 0]);
Script43.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TMFFloat.Create(Script43, True, 'variations', [0.2, 0.1, 0.3, 0.3, 0.01, 0.01]);
Script43.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFFloat.Create(Script43, True, 'lastframe', 0);
Script43.AddCustomFieldOrEvent(FieldVal47);
FieldVal48 := TSFFloat.Create(Script43, True, 'updaterate', 0.1);
Script43.AddCustomFieldOrEvent(FieldVal48);
FreeAndNil(CompiledScript43);
CompiledScript43 := TScript43Script.Create(FieldVal45, FieldVal46, FieldVal47, FieldVal48);
Script43.SetUrl(['compiled:' + LineEnding +
  'set_fraction=Script43_set_fraction']);
Transform19.FdChildren.Add(Script43);
end;

procedure Initvariationalflowers2Part3;
begin
TimeSensor49 := TTimeSensorNode.Create;
TimeSensor49.X3DName := 'TourTime';
TimeSensor49.CycleInterval := 45;
TimeSensor49.Loop := True;
Transform19.FdChildren.Add(TimeSensor49);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Transform19.AddRoute(TimeSensor49.EventFraction_changed, FieldVal44);
{ ROUTE Animate.values TO x_ite.x3d_ParticleValues }
Transform19.AddRoute(FieldVal45.EventOut, FieldVal40.EventIn);
Group14.FdChildren.Add(Transform19);
X3D0.AddChildren([Group14]);
end;

function Createvariationalflowers2: TX3DRootNode;
begin
  Initvariationalflowers2Part0;
  Initvariationalflowers2Part1;
  Initvariationalflowers2Part2;
  Initvariationalflowers2Part3;
  Result := X3D0;
end;

procedure Registervariationalflowers2Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript43 <> nil then
    CompiledScript43.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript43);
end.
