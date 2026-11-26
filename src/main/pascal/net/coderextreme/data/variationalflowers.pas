unit variationalflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createvariationalflowers: TX3DRootNode;
procedure RegistervariationalflowersScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript42Script = class
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
  ExplosionEmitter21: TExplosionEmitterNode;
  Sphere22: TSphereNode;
  Appearance23: TAppearanceNode;
  Material24: TMaterialNode;
  ComposedCubeMapTexture25: TComposedCubeMapTextureNode;
  ImageTexture26: TImageTextureNode;
  ImageTexture27: TImageTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ImageTexture30: TImageTextureNode;
  ImageTexture31: TImageTextureNode;
  ComposedShader32: TComposedShaderNode;
  FieldVal33: TSFVec3f;
  FieldVal34: TSFNode;
  FieldVal36: TSFFloat;
  FieldVal37: TSFFloat;
  FieldVal38: TSFFloat;
  FieldVal39: TMFFloat;
  ShaderPart40: TShaderPartNode;
  ShaderPart41: TShaderPartNode;
  Script42: TScriptNode;
  FieldVal43: TX3DEvent;
  FieldVal44: TMFFloat;
  FieldVal45: TMFFloat;
  FieldVal46: TSFFloat;
  FieldVal47: TSFFloat;
  CompiledScript42: TScript42Script;
  TimeSensor48: TTimeSensorNode;

constructor TScript42Script.Create(const AField_values: TMFFloat; const AField_variations: TMFFloat; const AField_lastframe: TSFFloat; const AField_updaterate: TSFFloat);
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

destructor TScript42Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript42Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript42Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script42_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript42Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
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

procedure InitvariationalflowersPart0;
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
X3D0.Meta['title'] := 'particleflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'particleflowers.x3d';
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY', 'EXAMINE', 'FLY', 'LOOKAT']);
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0, 0, 12);
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group14.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
ParticleSystem20 := TParticleSystemNode.Create;
ParticleSystem20.MaxParticles := 100;
ParticleSystem20.GeometryType := 'GEOMETRY';
{ * values - array of MFFloats to pass to ComposedShader }
end;

procedure InitvariationalflowersPart1;
begin
{ * variations in values - array of MFFloats to pass to ComposedShader that varies values }
{ * lastFrame - last frame that was rendered (0 for default) }
{ * updateRate - update rate is amount of time between frames }
{ <VariationPhysicsModel values="2 2 5 5 0 0" varations="2 1 3 3 0.1 0.1" lastFrame='0' updateRate='0.1'> }
{ </VariationPhysicsModel> }
ExplosionEmitter21 := TExplosionEmitterNode.Create;
ExplosionEmitter21.Speed := 1;
ExplosionEmitter21.Variation := 0.75;
ParticleSystem20.Emitter := ExplosionEmitter21;
Sphere22 := TSphereNode.Create;
ParticleSystem20.Geometry := Sphere22;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material24.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture25.X3DName := 'texture';
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture25.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture25.BottomTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture25.FrontTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture25.LeftTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture25.RightTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture25.TopTexture := ImageTexture31;
Appearance23.Texture := ComposedCubeMapTexture25;
{ <ComposedShader language='GLSL'> }
{ <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
end;

procedure InitvariationalflowersPart2;
begin
{ <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> }
{ </field> }
{ <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> }
{ <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/freewrl.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader DEF="shader" language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <ShaderPart url='"../shaders/castle.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"'/> }
{ <ShaderPart type='FRAGMENT' url='"../shaders/castle.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"'/> }
{ </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.X3DName := 'x_ite';
ComposedShader32.Language := slGLSL;
FieldVal33 := TSFVec3f.Create(ComposedShader32, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader32.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFNode.CreateUndefined(ComposedShader32, False, 'cube');
ComposedShader32.AddCustomFieldOrEvent(FieldVal34);
FieldVal34.Value := ComposedCubeMapTexture25;
FieldVal36 := TSFFloat.Create(ComposedShader32, False, 'bias', 0.5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.Create(ComposedShader32, False, 'scale', 0.5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.Create(ComposedShader32, False, 'power', 2);
ComposedShader32.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TMFFloat.Create(ComposedShader32, True, 'x3d_ParticleValues', [2, 1, 4, 4, 0, 0]);
ComposedShader32.AddCustomFieldOrEvent(FieldVal39);
ShaderPart40 := TShaderPartNode.Create;
ShaderPart40.SetUrl(['../shaders/x_ite_variations.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs']);
ShaderPart40.ShaderType := stVertex;
ComposedShader32.FdParts.Add(ShaderPart40);
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/commonnew.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs']);
ShaderPart41.ShaderType := stFragment;
end;

procedure InitvariationalflowersPart3;
begin
ComposedShader32.FdParts.Add(ShaderPart41);
Appearance23.FdShaders.Add(ComposedShader32);
ParticleSystem20.Appearance := Appearance23;
Transform19.FdChildren.Add(ParticleSystem20);
Script42 := TScriptNode.Create;
Script42.X3DName := 'Animate';
FieldVal43 := TSFFloat.CreateEvent(Script42, 'set_fraction', True);
Script42.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TMFFloat.Create(Script42, True, 'values', [2, 2, 5, 5, 0, 0]);
Script42.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TMFFloat.Create(Script42, True, 'variations', [0.2, 0.1, 0.3, 0.3, 0.01, 0.01]);
Script42.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(Script42, True, 'lastframe', 0);
Script42.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFFloat.Create(Script42, True, 'updaterate', 0.1);
Script42.AddCustomFieldOrEvent(FieldVal47);
FreeAndNil(CompiledScript42);
CompiledScript42 := TScript42Script.Create(FieldVal44, FieldVal45, FieldVal46, FieldVal47);
Script42.SetUrl(['compiled:' + LineEnding +
  'set_fraction=Script42_set_fraction']);
Transform19.FdChildren.Add(Script42);
TimeSensor48 := TTimeSensorNode.Create;
TimeSensor48.X3DName := 'TourTime';
TimeSensor48.CycleInterval := 45;
TimeSensor48.Loop := True;
Transform19.FdChildren.Add(TimeSensor48);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Transform19.AddRoute(TimeSensor48.EventFraction_changed, FieldVal43);
{ ROUTE Animate.values TO x_ite.x3d_ParticleValues }
Transform19.AddRoute(FieldVal44.EventOut, FieldVal39.EventIn);
Group14.FdChildren.Add(Transform19);
X3D0.AddChildren([Group14]);
end;

function Createvariationalflowers: TX3DRootNode;
begin
  InitvariationalflowersPart0;
  InitvariationalflowersPart1;
  InitvariationalflowersPart2;
  InitvariationalflowersPart3;
  Result := X3D0;
end;

procedure RegistervariationalflowersScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript42 <> nil then
    CompiledScript42.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript42);
end.
