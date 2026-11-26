unit bub;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createbub: TX3DRootNode;
procedure RegisterbubScripts(const Scene: TCastleSceneCore);

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
  TScript50Script = class
  private
    Ftranslation: TVector3;
    FField_translation: TSFVec3f;
    FDirty_translation: Boolean;
    Fvelocity: TVector3;
    FField_velocity: TSFVec3f;
    FDirty_velocity: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  NavigationInfo16: TNavigationInfoNode;
  Background17: TBackgroundNode;
  Viewpoint18: TViewpointNode;
  ProtoDeclare19: TX3DPrototype;
  Transform21: TTransformNode;
  Shape22: TShapeNode;
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
  FieldVal33: TSFInt32;
  FieldVal34: TSFVec3f;
  FieldVal35: TSFFloat;
  FieldVal36: TSFFloat;
  FieldVal37: TSFFloat;
  ShaderPart38: TShaderPartNode;
  ShaderPart39: TShaderPartNode;
  ComposedShader40: TComposedShaderNode;
  FieldVal41: TSFNode;
  FieldVal43: TSFVec3f;
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
  CompiledScript50: TScript50Script;
  TimeSensor54: TTimeSensorNode;
  ProtoInstance57: TX3DPrototypeNode;
  ProtoInstance58: TX3DPrototypeNode;
  ProtoInstance59: TX3DPrototypeNode;

constructor TScript50Script.Create(const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f);
begin
  inherited Create;
  Ftranslation := Vector3(0, 0, 0);
  FField_translation := nil;
  FDirty_translation := False;
  Fvelocity := Vector3(0, 0, 0);
  FField_velocity := nil;
  FDirty_velocity := False;
  FField_translation := AField_translation;
  if AField_translation <> nil then Ftranslation := AField_translation.Value;
  FField_velocity := AField_velocity;
  if AField_velocity <> nil then Fvelocity := AField_velocity.Value;
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
begin
  Ftranslation := Vector3(Ftranslation.X + Fvelocity.X, Ftranslation.Y + Fvelocity.Y, Ftranslation.Z + Fvelocity.Z); FDirty_translation := True;
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
  FlushOutputs(Time);
end;

procedure InitbubPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'bub.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '3 prismatic spheres';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d';
Group15 := TGroupNode.Create;
NavigationInfo16 := TNavigationInfoNode.Create;
Group15.FdChildren.Add(NavigationInfo16);
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group15.FdChildren.Add(Background17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Position := Vector3(0, 0, 20);
Viewpoint18.Description := 'Look at the bubbles flying';
Group15.FdChildren.Add(Viewpoint18);
ProtoDeclare19 := CreateEmptyPrototype('Bubble');
ProtoDeclare19.X3DName := 'Bubble';
Transform21 := TTransformNode.Create;
Transform21.X3DName := 'transform';
Shape22 := TShapeNode.Create;
Shape22.X3DName := 'myShape';
Appearance23 := TAppearanceNode.Create;
end;

procedure InitbubPart1;
begin
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
{ <ComposedShader DEF='gl' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/> }
{ <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> }
{ <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> }
{ <ShaderPart url='"../shaders/gl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader DEF='freewrl' language="GLSL"> }
{ <field name='fw_textureCoodGenType' type='SFInt32' accessType="inputOutput" value='0'/> }
{ <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> }
{ <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> }
end;

procedure InitbubPart2;
begin
{ <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader DEF='instant' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/> }
{ <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> }
{ <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> }
{ <ShaderPart url='"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.X3DName := 'x3dom';
ComposedShader32.Language := slGLSL;
FieldVal33 := TSFInt32.Create(ComposedShader32, True, 'cube', 0);
ComposedShader32.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFVec3f.Create(ComposedShader32, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader32.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFFloat.Create(ComposedShader32, True, 'bias', 0.5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFFloat.Create(ComposedShader32, True, 'scale', 0.5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.Create(ComposedShader32, True, 'power', 2);
ComposedShader32.AddCustomFieldOrEvent(FieldVal37);
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['../shaders/x3dom.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart38.ShaderType := stVertex;
ComposedShader32.FdParts.Add(ShaderPart38);
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.SetUrl(['../shaders/pc_bubbles.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs']);
ShaderPart39.ShaderType := stFragment;
ComposedShader32.FdParts.Add(ShaderPart39);
Appearance23.FdShaders.Add(ComposedShader32);
ComposedShader40 := TComposedShaderNode.Create;
ComposedShader40.X3DName := 'x_ite';
ComposedShader40.Language := slGLSL;
FieldVal41 := TSFNode.CreateUndefined(ComposedShader40, True, 'cube');
ComposedShader40.AddCustomFieldOrEvent(FieldVal41);
FieldVal41.Value := ComposedCubeMapTexture25;
end;

procedure InitbubPart3;
begin
FieldVal43 := TSFVec3f.Create(ComposedShader40, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader40.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.Create(ComposedShader40, True, 'bias', 0.5);
ComposedShader40.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.Create(ComposedShader40, True, 'scale', 0.5);
ComposedShader40.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(ComposedShader40, True, 'power', 2);
ComposedShader40.AddCustomFieldOrEvent(FieldVal46);
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['../shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart47.ShaderType := stVertex;
ComposedShader40.FdParts.Add(ShaderPart47);
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['../shaders/x_itebubbles.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs']);
ShaderPart48.ShaderType := stFragment;
ComposedShader40.FdParts.Add(ShaderPart48);
Appearance23.FdShaders.Add(ComposedShader40);
Shape22.Appearance := Appearance23;
Sphere49 := TSphereNode.Create;
Shape22.Geometry := Sphere49;
Transform21.FdChildren.Add(Shape22);
ProtoDeclare19.Node.AddChildren([Transform21]);
Script50 := TScriptNode.Create;
Script50.X3DName := 'Bounce';
FieldVal51 := TSFVec3f.Create(Script50, True, 'translation', Vector3(0, 0, 0));
Script50.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFVec3f.Create(Script50, True, 'velocity', Vector3(0, 0, 0));
Script50.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFTime.CreateEvent(Script50, 'set_fraction', True);
Script50.AddCustomFieldOrEvent(FieldVal53);
FreeAndNil(CompiledScript50);
CompiledScript50 := TScript50Script.Create(FieldVal51, FieldVal52);
Script50.SetUrl(['compiled:' + LineEnding +
  'initialize=Script50_initialize' + LineEnding +
  'set_fraction=Script50_set_fraction']);
ProtoDeclare19.Node.AddChildren([Script50]);
TimeSensor54 := TTimeSensorNode.Create;
TimeSensor54.X3DName := 'TourTime';
TimeSensor54.CycleInterval := 0.15;
TimeSensor54.Loop := True;
ProtoDeclare19.Node.AddChildren([TimeSensor54]);
{ ROUTE TourTime.cycleTime TO Bounce.set_fraction }
end;

procedure InitbubPart4;
begin
ProtoDeclare19.Node.AddRoute(TimeSensor54.EventCycleTime, FieldVal53);
{ ROUTE Bounce.translation_changed TO transform.set_translation }
ProtoDeclare19.Node.AddRoute(FieldVal51.EventOut, Transform21.FdTranslation.EventIn);
X3D0.AddPrototype(ProtoDeclare19);
ProtoInstance57 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
Group15.FdChildren.Add(ProtoInstance57.Instantiate);
ProtoInstance58 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
Group15.FdChildren.Add(ProtoInstance58.Instantiate);
ProtoInstance59 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
Group15.FdChildren.Add(ProtoInstance59.Instantiate);
X3D0.AddChildren([Group15]);
end;

function Createbub: TX3DRootNode;
begin
  InitbubPart0;
  InitbubPart1;
  InitbubPart2;
  InitbubPart3;
  InitbubPart4;
  Result := X3D0;
end;

procedure RegisterbubScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript50 <> nil then
    CompiledScript50.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript50);
end.
