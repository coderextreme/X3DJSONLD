unit flowerproto;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createflowerproto: TX3DRootNode;
procedure RegisterflowerprotoScripts(const Scene: TCastleSceneCore);

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
  TScript49Script = class
  private
    Ftranslation: TVector3;
    FField_translation: TSFVec3f;
    FDirty_translation: Boolean;
    Fvelocity: TVector3;
    FEvent_velocity: TX3DEvent;
    FBack_velocity: TSFVec3f;
    FDirty_velocity: Boolean;
    Fa: Single;
    FEvent_a: TX3DEvent;
    FBack_a: TSFFloat;
    FDirty_a: Boolean;
    Fb: Single;
    FEvent_b: TX3DEvent;
    FBack_b: TSFFloat;
    FDirty_b: Boolean;
    Fc: Single;
    FEvent_c: TX3DEvent;
    FBack_c: TSFFloat;
    FDirty_c: Boolean;
    Fd: Single;
    FEvent_d: TX3DEvent;
    FBack_d: TSFFloat;
    FDirty_d: Boolean;
    Ftdelta: Single;
    FEvent_tdelta: TX3DEvent;
    FBack_tdelta: TSFFloat;
    FDirty_tdelta: Boolean;
    Fpdelta: Single;
    FEvent_pdelta: TX3DEvent;
    FBack_pdelta: TSFFloat;
    FDirty_pdelta: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_translation: TSFVec3f; const AEvent_velocity: TX3DEvent; const AEvent_a: TX3DEvent; const AEvent_b: TX3DEvent; const AEvent_c: TX3DEvent; const AEvent_d: TX3DEvent; const AEvent_tdelta: TX3DEvent; const AEvent_pdelta: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
    procedure Animate_flowers(const fraction: Single; const eventTime: Single; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group16: TGroupNode;
  ProtoDeclare17: TX3DPrototype;
  FieldDecl19: TX3DInterfaceDeclaration;
  FieldVal19: TX3DEvent;
  FieldDecl20: TX3DInterfaceDeclaration;
  FieldVal20: TX3DEvent;
  Transform22: TTransformNode;
  Shape23: TShapeNode;
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
  FieldVal34: TX3DEvent;
  FieldVal36: TSFVec3f;
  FieldVal37: TX3DEvent;
  FieldVal38: TX3DEvent;
  FieldVal39: TX3DEvent;
  FieldVal40: TX3DEvent;
  FieldVal41: TX3DEvent;
  FieldVal42: TX3DEvent;
  FieldVal43: TX3DEvent;
  FieldVal44: TX3DEvent;
  FieldVal45: TX3DEvent;
  ShaderPart46: TShaderPartNode;
  ShaderPart47: TShaderPartNode;
  Sphere48: TSphereNode;
  Script49: TScriptNode;
  FieldVal50: TSFVec3f;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  FieldVal53: TX3DEvent;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  FieldVal58: TX3DEvent;
  CompiledScript49: TScript49Script;
  TimeSensor59: TTimeSensorNode;

constructor TScript49Script.Create(const AField_translation: TSFVec3f; const AEvent_velocity: TX3DEvent; const AEvent_a: TX3DEvent; const AEvent_b: TX3DEvent; const AEvent_c: TX3DEvent; const AEvent_d: TX3DEvent; const AEvent_tdelta: TX3DEvent; const AEvent_pdelta: TX3DEvent);
begin
  inherited Create;
  Ftranslation := Vector3(0, 0, 0);
  FField_translation := nil;
  FDirty_translation := False;
  Fvelocity := Vector3(0, 0, 0);
  FEvent_velocity := nil;
  FBack_velocity := TSFVec3f.Create(nil, False, 'velocity', Vector3(0, 0, 0));
  FDirty_velocity := False;
  Fa := 0.0;
  FEvent_a := nil;
  FBack_a := TSFFloat.Create(nil, False, 'a', 0.0);
  FDirty_a := False;
  Fb := 0.0;
  FEvent_b := nil;
  FBack_b := TSFFloat.Create(nil, False, 'b', 0.0);
  FDirty_b := False;
  Fc := 0.0;
  FEvent_c := nil;
  FBack_c := TSFFloat.Create(nil, False, 'c', 0.0);
  FDirty_c := False;
  Fd := 0.0;
  FEvent_d := nil;
  FBack_d := TSFFloat.Create(nil, False, 'd', 0.0);
  FDirty_d := False;
  Ftdelta := 0.0;
  FEvent_tdelta := nil;
  FBack_tdelta := TSFFloat.Create(nil, False, 'tdelta', 0.0);
  FDirty_tdelta := False;
  Fpdelta := 0.0;
  FEvent_pdelta := nil;
  FBack_pdelta := TSFFloat.Create(nil, False, 'pdelta', 0.0);
  FDirty_pdelta := False;
  FField_translation := AField_translation;
  if AField_translation <> nil then Ftranslation := AField_translation.Value;
  FEvent_velocity := AEvent_velocity;
  FEvent_a := AEvent_a;
  FEvent_b := AEvent_b;
  FEvent_c := AEvent_c;
  FEvent_d := AEvent_d;
  FEvent_tdelta := AEvent_tdelta;
  FEvent_pdelta := AEvent_pdelta;
end;

destructor TScript49Script.Destroy;
begin
  FreeAndNil(FBack_velocity);
  FreeAndNil(FBack_a);
  FreeAndNil(FBack_b);
  FreeAndNil(FBack_c);
  FreeAndNil(FBack_d);
  FreeAndNil(FBack_tdelta);
  FreeAndNil(FBack_pdelta);
  inherited Destroy;
end;

procedure TScript49Script.FlushOutputs(const Time: TX3DTime);
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
    if FEvent_velocity <> nil then
    begin
      FBack_velocity.Value := Fvelocity;
      FEvent_velocity.Send(FBack_velocity, Time);
    end;
  end;
  if FDirty_a then
  begin
    FDirty_a := False;
    if FEvent_a <> nil then
    begin
      FBack_a.Value := Fa;
      FEvent_a.Send(FBack_a, Time);
    end;
  end;
  if FDirty_b then
  begin
    FDirty_b := False;
    if FEvent_b <> nil then
    begin
      FBack_b.Value := Fb;
      FEvent_b.Send(FBack_b, Time);
    end;
  end;
  if FDirty_c then
  begin
    FDirty_c := False;
    if FEvent_c <> nil then
    begin
      FBack_c.Value := Fc;
      FEvent_c.Send(FBack_c, Time);
    end;
  end;
  if FDirty_d then
  begin
    FDirty_d := False;
    if FEvent_d <> nil then
    begin
      FBack_d.Value := Fd;
      FEvent_d.Send(FBack_d, Time);
    end;
  end;
  if FDirty_tdelta then
  begin
    FDirty_tdelta := False;
    if FEvent_tdelta <> nil then
    begin
      FBack_tdelta.Value := Ftdelta;
      FEvent_tdelta.Send(FBack_tdelta, Time);
    end;
  end;
  if FDirty_pdelta then
  begin
    FDirty_pdelta := False;
    if FEvent_pdelta <> nil then
    begin
      FBack_pdelta.Value := Fpdelta;
      FEvent_pdelta.Send(FBack_pdelta, Time);
    end;
  end;
end;

procedure TScript49Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script49_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script49_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript49Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Ftranslation := Vector3(0, 0, 0); FDirty_translation := True;
  Fvelocity := Vector3(Random - 0.5, Random - 0.5, Random - 0.5); FDirty_velocity := True;
  FlushOutputs(Time);
end;

procedure TScript49Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
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

procedure TScript49Script.Animate_flowers(const fraction: Single; const eventTime: Single; const Time: TX3DTime);
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

procedure InitflowerprotoPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
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
ProtoDeclare17 := CreateEmptyPrototype('FlowerProto');
ProtoDeclare17.X3DName := 'FlowerProto';
FieldVal19 := TMFString.CreateEvent(nil, 'vertex', True);
FieldDecl19 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl19.FieldOrEvent := FieldVal19;
FieldVal19.ParentInterfaceDeclaration := FieldDecl19;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl19);
FieldVal20 := TMFString.CreateEvent(nil, 'fragment', True);
FieldDecl20 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl20.FieldOrEvent := FieldVal20;
FieldVal20.ParentInterfaceDeclaration := FieldDecl20;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl20);
Transform22 := TTransformNode.Create;
Transform22.X3DName := 'transform';
Shape23 := TShapeNode.Create;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material25.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance24.Material := Material25;
ComposedCubeMapTexture26 := TComposedCubeMapTextureNode.Create;
end;

procedure InitflowerprotoPart1;
begin
ComposedCubeMapTexture26.X3DName := 'texture';
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture26.BackTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture26.BottomTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture26.FrontTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture26.LeftTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture26.RightTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture26.TopTexture := ImageTexture32;
Appearance24.Texture := ComposedCubeMapTexture26;
ComposedShader33 := TComposedShaderNode.Create;
ComposedShader33.X3DName := 'shader';
ComposedShader33.Language := slGLSL;
{ <field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field> }
FieldVal34 := TSFNode.CreateEvent(ComposedShader33, 'cube', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal34);
FieldVal34.Value := ComposedCubeMapTexture26;
FieldVal36 := TSFVec3f.Create(ComposedShader33, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader33.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.CreateEvent(ComposedShader33, 'bias', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.CreateEvent(ComposedShader33, 'scale', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.CreateEvent(ComposedShader33, 'power', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.CreateEvent(ComposedShader33, 'a', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.CreateEvent(ComposedShader33, 'b', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.CreateEvent(ComposedShader33, 'c', True);
end;

procedure InitflowerprotoPart2;
begin
ComposedShader33.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.CreateEvent(ComposedShader33, 'd', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.CreateEvent(ComposedShader33, 'tdelta', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.CreateEvent(ComposedShader33, 'pdelta', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal45);
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.ShaderType := stVertex;
ShaderPart46.FieldOrEvent('url', True).IsClauseNamesAdd('vertex');
ComposedShader33.FdParts.Add(ShaderPart46);
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.ShaderType := stFragment;
ShaderPart47.FieldOrEvent('url', True).IsClauseNamesAdd('fragment');
ComposedShader33.FdParts.Add(ShaderPart47);
Appearance24.FdShaders.Add(ComposedShader33);
Shape23.Appearance := Appearance24;
Sphere48 := TSphereNode.Create;
Shape23.Geometry := Sphere48;
Transform22.FdChildren.Add(Shape23);
Script49 := TScriptNode.Create;
Script49.X3DName := 'Animate';
Script49.DirectOutput := True;
FieldVal50 := TSFVec3f.Create(Script49, True, 'translation', Vector3(0, 0, 0));
Script49.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFVec3f.CreateEvent(Script49, 'velocity', False);
Script49.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFFloat.CreateEvent(Script49, 'set_fraction', True);
Script49.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFFloat.CreateEvent(Script49, 'a', False);
Script49.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.CreateEvent(Script49, 'b', False);
Script49.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.CreateEvent(Script49, 'c', False);
Script49.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.CreateEvent(Script49, 'd', False);
Script49.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.CreateEvent(Script49, 'tdelta', False);
Script49.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFFloat.CreateEvent(Script49, 'pdelta', False);
end;

procedure InitflowerprotoPart3;
begin
Script49.AddCustomFieldOrEvent(FieldVal58);
FreeAndNil(CompiledScript49);
CompiledScript49 := TScript49Script.Create(FieldVal50, FieldVal51, FieldVal53, FieldVal54, FieldVal55, FieldVal56, FieldVal57, FieldVal58);
Script49.SetUrl(['compiled:' + LineEnding +
  'initialize=Script49_initialize' + LineEnding +
  'set_fraction=Script49_set_fraction']);
Transform22.FdChildren.Add(Script49);
TimeSensor59 := TTimeSensorNode.Create;
TimeSensor59.X3DName := 'TourTime';
TimeSensor59.CycleInterval := 5;
TimeSensor59.Loop := True;
Transform22.FdChildren.Add(TimeSensor59);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Transform22.AddRoute(TimeSensor59.EventFraction_changed, FieldVal52);
{ ROUTE Animate.translation_changed TO transform.set_translation }
Transform22.AddRoute(FieldVal50.EventOut, Transform22.FdTranslation.EventIn);
{ ROUTE Animate.a TO shader.a }
Transform22.AddRoute(FieldVal53, FieldVal40);
{ ROUTE Animate.b TO shader.b }
Transform22.AddRoute(FieldVal54, FieldVal41);
{ ROUTE Animate.c TO shader.c }
Transform22.AddRoute(FieldVal55, FieldVal42);
{ ROUTE Animate.d TO shader.d }
Transform22.AddRoute(FieldVal56, FieldVal43);
{ ROUTE Animate.tdelta TO shader.tdelta }
Transform22.AddRoute(FieldVal57, FieldVal44);
{ ROUTE Animate.pdelta TO shader.pdelta }
Transform22.AddRoute(FieldVal58, FieldVal45);
ProtoDeclare17.Node.AddChildren([Transform22]);
X3D0.AddPrototype(ProtoDeclare17);
X3D0.AddChildren([Group16]);
end;

function Createflowerproto: TX3DRootNode;
begin
  InitflowerprotoPart0;
  InitflowerprotoPart1;
  InitflowerprotoPart2;
  InitflowerprotoPart3;
  Result := X3D0;
end;

procedure RegisterflowerprotoScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript49 <> nil then
    CompiledScript49.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript49);
end.
