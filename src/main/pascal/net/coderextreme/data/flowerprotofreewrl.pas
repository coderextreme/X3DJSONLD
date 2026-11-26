unit flowerprotofreewrl;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createflowerprotofreewrl: TX3DRootNode;
procedure RegisterflowerprotofreewrlScripts(const Scene: TCastleSceneCore);

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
  TScript51Script = class
  private
    Ftranslation: TVector3;
    FField_translation: TSFVec3f;
    FDirty_translation: Boolean;
    Fvelocity: TVector3;
    FField_velocity: TSFVec3f;
    FDirty_velocity: Boolean;
    Fset_fraction: Single;
    FField_set_fraction: TSFFloat;
    FDirty_set_fraction: Boolean;
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
    constructor Create(const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f; const AField_set_fraction: TSFFloat; const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_tdelta: TSFFloat; const AField_pdelta: TSFFloat);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
    procedure Animate_flowers(const fraction: Single; const eventTime: Single; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group16: TGroupNode;
  NavigationInfo17: TNavigationInfoNode;
  Viewpoint18: TViewpointNode;
  Background19: TBackgroundNode;
  ProtoDeclare20: TX3DPrototype;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TX3DEvent;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TX3DEvent;
  Transform25: TTransformNode;
  Shape26: TShapeNode;
  Appearance27: TAppearanceNode;
  Material28: TMaterialNode;
  ComposedCubeMapTexture29: TComposedCubeMapTextureNode;
  ImageTexture30: TImageTextureNode;
  ImageTexture31: TImageTextureNode;
  ImageTexture32: TImageTextureNode;
  ImageTexture33: TImageTextureNode;
  ImageTexture34: TImageTextureNode;
  ImageTexture35: TImageTextureNode;
  ComposedShader36: TComposedShaderNode;
  FieldVal37: TSFInt32;
  FieldVal38: TSFVec3f;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  FieldVal43: TSFFloat;
  FieldVal44: TSFFloat;
  FieldVal45: TSFFloat;
  FieldVal46: TSFFloat;
  FieldVal47: TSFFloat;
  ShaderPart48: TShaderPartNode;
  ShaderPart49: TShaderPartNode;
  Sphere50: TSphereNode;
  Script51: TScriptNode;
  FieldVal52: TSFVec3f;
  FieldVal53: TSFVec3f;
  FieldVal54: TSFFloat;
  FieldVal55: TSFFloat;
  FieldVal56: TSFFloat;
  FieldVal57: TSFFloat;
  FieldVal58: TSFFloat;
  FieldVal59: TSFFloat;
  FieldVal60: TSFFloat;
  CompiledScript51: TScript51Script;
  TimeSensor61: TTimeSensorNode;
  ProtoInstance70: TX3DPrototypeNode;

constructor TScript51Script.Create(const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f; const AField_set_fraction: TSFFloat; const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_tdelta: TSFFloat; const AField_pdelta: TSFFloat);
begin
  inherited Create;
  Ftranslation := Vector3(0, 0, 0);
  FField_translation := nil;
  FDirty_translation := False;
  Fvelocity := Vector3(0, 0, 0);
  FField_velocity := nil;
  FDirty_velocity := False;
  Fset_fraction := 0.0;
  FField_set_fraction := nil;
  FDirty_set_fraction := False;
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
  FField_set_fraction := AField_set_fraction;
  if AField_set_fraction <> nil then Fset_fraction := AField_set_fraction.Value;
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

destructor TScript51Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript51Script.FlushOutputs(const Time: TX3DTime);
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
  if FDirty_set_fraction then
  begin
    FDirty_set_fraction := False;
    if FField_set_fraction <> nil then
      FField_set_fraction.Send(Fset_fraction, Time);
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

procedure TScript51Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script51_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script51_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript51Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Ftranslation := Vector3(0, 0, 0); FDirty_translation := True;
  Fvelocity := Vector3(Random - 0.5, Random - 0.5, Random - 0.5); FDirty_velocity := True;
  FlushOutputs(Time);
end;

procedure TScript51Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
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

procedure TScript51Script.Animate_flowers(const fraction: Single; const eventTime: Single; const Time: TX3DTime);
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
  Ftdelta := Ftdelta + (0.5); FDirty_tdelta := True;
  Fpdelta := Fpdelta + (0.5); FDirty_pdelta := True;
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

procedure InitflowerprotofreewrlPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Shape'] := 4;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'flowerproto.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
Group16.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
Viewpoint18.Position := Vector3(0, 0, 50);
Group16.FdChildren.Add(Viewpoint18);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group16.FdChildren.Add(Background19);
ProtoDeclare20 := CreateEmptyPrototype('FlowerProto');
ProtoDeclare20.X3DName := 'FlowerProto';
FieldVal22 := TMFString.CreateEvent(nil, 'vertex', True);
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl22);
end;

procedure InitflowerprotofreewrlPart1;
begin
FieldVal23 := TMFString.CreateEvent(nil, 'fragment', True);
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl23);
Transform25 := TTransformNode.Create;
Transform25.X3DName := 'transform';
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material28.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance27.Material := Material28;
ComposedCubeMapTexture29 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture29.X3DName := 'texture';
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture29.BackTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture29.BottomTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture29.FrontTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture29.LeftTexture := ImageTexture33;
ImageTexture34 := TImageTextureNode.Create;
ImageTexture34.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture29.RightTexture := ImageTexture34;
ImageTexture35 := TImageTextureNode.Create;
ImageTexture35.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture29.TopTexture := ImageTexture35;
Appearance27.Texture := ComposedCubeMapTexture29;
ComposedShader36 := TComposedShaderNode.Create;
ComposedShader36.X3DName := 'shader';
ComposedShader36.Language := slGLSL;
FieldVal37 := TSFInt32.Create(ComposedShader36, True, 'fw_textureCoordGenType', 0);
ComposedShader36.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFVec3f.Create(ComposedShader36, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
end;

procedure InitflowerprotofreewrlPart2;
begin
ComposedShader36.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader36, True, 'bias', 0.5);
ComposedShader36.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader36, True, 'scale', 0.5);
ComposedShader36.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.Create(ComposedShader36, True, 'power', 2);
ComposedShader36.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.Create(ComposedShader36, True, 'a', 5);
ComposedShader36.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.Create(ComposedShader36, True, 'b', 5);
ComposedShader36.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.Create(ComposedShader36, True, 'c', 20);
ComposedShader36.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.Create(ComposedShader36, True, 'd', 20);
ComposedShader36.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(ComposedShader36, True, 'tdelta', 0);
ComposedShader36.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFFloat.Create(ComposedShader36, True, 'pdelta', 0);
ComposedShader36.AddCustomFieldOrEvent(FieldVal47);
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.ShaderType := stVertex;
ShaderPart48.FieldOrEvent('url', True).IsClauseNamesAdd('vertex');
ComposedShader36.FdParts.Add(ShaderPart48);
ShaderPart49 := TShaderPartNode.Create;
ShaderPart49.ShaderType := stFragment;
ShaderPart49.FieldOrEvent('url', True).IsClauseNamesAdd('fragment');
ComposedShader36.FdParts.Add(ShaderPart49);
Appearance27.FdShaders.Add(ComposedShader36);
Shape26.Appearance := Appearance27;
Sphere50 := TSphereNode.Create;
Sphere50.Radius := 5;
Shape26.Geometry := Sphere50;
Transform25.FdChildren.Add(Shape26);
Script51 := TScriptNode.Create;
Script51.X3DName := 'Animate';
Script51.DirectOutput := True;
FieldVal52 := TSFVec3f.Create(Script51, True, 'translation', Vector3(0, 0, 0));
end;

procedure InitflowerprotofreewrlPart3;
begin
Script51.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFVec3f.Create(Script51, True, 'velocity', Vector3(0, 0, 0));
Script51.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.CreateUndefined(Script51, True, 'set_fraction');
Script51.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.Create(Script51, True, 'a', 0.5);
Script51.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.Create(Script51, True, 'b', 0.5);
Script51.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.Create(Script51, True, 'c', 3);
Script51.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFFloat.Create(Script51, True, 'd', 3);
Script51.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFFloat.Create(Script51, True, 'tdelta', 0.5);
Script51.AddCustomFieldOrEvent(FieldVal59);
FieldVal60 := TSFFloat.Create(Script51, True, 'pdelta', 0.5);
Script51.AddCustomFieldOrEvent(FieldVal60);
FreeAndNil(CompiledScript51);
CompiledScript51 := TScript51Script.Create(FieldVal52, FieldVal53, FieldVal54, FieldVal55, FieldVal56, FieldVal57, FieldVal58, FieldVal59, FieldVal60);
Script51.SetUrl(['compiled:' + LineEnding +
  'initialize=Script51_initialize' + LineEnding +
  'set_fraction=Script51_set_fraction']);
Transform25.FdChildren.Add(Script51);
TimeSensor61 := TTimeSensorNode.Create;
TimeSensor61.X3DName := 'TourTime';
TimeSensor61.CycleInterval := 5;
TimeSensor61.Loop := True;
Transform25.FdChildren.Add(TimeSensor61);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Transform25.AddRoute(TimeSensor61.EventFraction_changed, FieldVal54.EventIn);
{ ROUTE Animate.translation_changed TO transform.set_translation }
Transform25.AddRoute(FieldVal52.EventOut, Transform25.FdTranslation.EventIn);
{ ROUTE Animate.a TO shader.a }
Transform25.AddRoute(FieldVal55.EventOut, FieldVal42.EventIn);
{ ROUTE Animate.b TO shader.b }
Transform25.AddRoute(FieldVal56.EventOut, FieldVal43.EventIn);
{ ROUTE Animate.c TO shader.c }
Transform25.AddRoute(FieldVal57.EventOut, FieldVal44.EventIn);
{ ROUTE Animate.d TO shader.d }
Transform25.AddRoute(FieldVal58.EventOut, FieldVal45.EventIn);
{ ROUTE Animate.tdelta TO shader.tdelta }
Transform25.AddRoute(FieldVal59.EventOut, FieldVal46.EventIn);
end;

procedure InitflowerprotofreewrlPart4;
begin
{ ROUTE Animate.pdelta TO shader.pdelta }
Transform25.AddRoute(FieldVal60.EventOut, FieldVal47.EventIn);
ProtoDeclare20.Node.AddChildren([Transform25]);
X3D0.AddPrototype(ProtoDeclare20);
ProtoInstance70 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare20);
(ProtoInstance70.Field('vertex') as TMFString).Send(['../shaders/freewrl_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
(ProtoInstance70.Field('fragment') as TMFString).Send(['../shaders/freewrl.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs']);
Group16.FdChildren.Add(ProtoInstance70.Instantiate);
X3D0.AddChildren([Group16]);
end;

function Createflowerprotofreewrl: TX3DRootNode;
begin
  InitflowerprotofreewrlPart0;
  InitflowerprotofreewrlPart1;
  InitflowerprotofreewrlPart2;
  InitflowerprotofreewrlPart3;
  InitflowerprotofreewrlPart4;
  Result := X3D0;
end;

procedure RegisterflowerprotofreewrlScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript51 <> nil then
    CompiledScript51.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript51);
end.
