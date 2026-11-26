unit flowers7;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createflowers7: TX3DRootNode;
procedure Registerflowers7Scripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript62Script = class
  private
    FfrontUrls: array of String;
    FbackUrls: array of String;
    FleftUrls: array of String;
    FrightUrls: array of String;
    FtopUrls: array of String;
    FbottomUrls: array of String;
    Ffront: array of String;
    FField_front: TMFString;
    FDirty_front: Boolean;
    Fback: array of String;
    FField_back: TMFString;
    FDirty_back: Boolean;
    Fleft: array of String;
    FField_left: TMFString;
    FDirty_left: Boolean;
    Fright: array of String;
    FField_right: TMFString;
    FDirty_right: Boolean;
    Ftop: array of String;
    FField_top: TMFString;
    FDirty_top: Boolean;
    Fbottom: array of String;
    FField_bottom: TMFString;
    FDirty_bottom: Boolean;
    Fold: Int32;
    FField_old: TSFInt32;
    FDirty_old: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_frontUrls: TMFString; const AField_backUrls: TMFString; const AField_leftUrls: TMFString; const AField_rightUrls: TMFString; const AField_topUrls: TMFString; const AField_bottomUrls: TMFString; const AField_front: TMFString; const AField_back: TMFString; const AField_left: TMFString; const AField_right: TMFString; const AField_top: TMFString; const AField_bottom: TMFString; const AField_old: TSFInt32);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript77Script = class
  private
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
    constructor Create(const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_tdelta: TSFFloat; const AField_pdelta: TSFFloat);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group16: TGroupNode;
  NavigationInfo17: TNavigationInfoNode;
  Background18: TBackgroundNode;
  Viewpoint19: TViewpointNode;
  Transform20: TTransformNode;
  Shape21: TShapeNode;
  Appearance22: TAppearanceNode;
  Material23: TMaterialNode;
  ComposedCubeMapTexture24: TComposedCubeMapTextureNode;
  ImageTexture25: TImageTextureNode;
  ImageTexture26: TImageTextureNode;
  ImageTexture27: TImageTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ImageTexture30: TImageTextureNode;
  ComposedShader31: TComposedShaderNode;
  FieldVal32: TSFNode;
  FieldVal34: TSFVec3f;
  FieldVal35: TSFFloat;
  FieldVal36: TSFFloat;
  FieldVal37: TSFFloat;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  FieldVal43: TSFFloat;
  ShaderPart44: TShaderPartNode;
  ShaderPart45: TShaderPartNode;
  ComposedShader46: TComposedShaderNode;
  FieldVal47: TSFNode;
  FieldVal49: TSFVec3f;
  FieldVal50: TX3DEvent;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  FieldVal53: TX3DEvent;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  FieldVal58: TX3DEvent;
  ShaderPart59: TShaderPartNode;
  ShaderPart60: TShaderPartNode;
  Sphere61: TSphereNode;
  Script62: TScriptNode;
  FieldVal63: TMFString;
  FieldVal64: TMFString;
  FieldVal65: TMFString;
  FieldVal66: TMFString;
  FieldVal67: TMFString;
  FieldVal68: TMFString;
  FieldVal69: TMFString;
  FieldVal70: TMFString;
  FieldVal71: TMFString;
  FieldVal72: TMFString;
  FieldVal73: TMFString;
  FieldVal74: TMFString;
  FieldVal75: TX3DEvent;
  FieldVal76: TSFInt32;
  CompiledScript62: TScript62Script;
  Script77: TScriptNode;
  FieldVal78: TX3DEvent;
  FieldVal79: TSFFloat;
  FieldVal80: TSFFloat;
  FieldVal81: TSFFloat;
  FieldVal82: TSFFloat;
  FieldVal83: TSFFloat;
  FieldVal84: TSFFloat;
  CompiledScript77: TScript77Script;
  TimeSensor85: TTimeSensorNode;

constructor TScript62Script.Create(const AField_frontUrls: TMFString; const AField_backUrls: TMFString; const AField_leftUrls: TMFString; const AField_rightUrls: TMFString; const AField_topUrls: TMFString; const AField_bottomUrls: TMFString; const AField_front: TMFString; const AField_back: TMFString; const AField_left: TMFString; const AField_right: TMFString; const AField_top: TMFString; const AField_bottom: TMFString; const AField_old: TSFInt32);
begin
  inherited Create;
  FfrontUrls := 0;
  FbackUrls := 0;
  FleftUrls := 0;
  FrightUrls := 0;
  FtopUrls := 0;
  FbottomUrls := 0;
  Ffront := 0;
  FField_front := nil;
  FDirty_front := False;
  Fback := 0;
  FField_back := nil;
  FDirty_back := False;
  Fleft := 0;
  FField_left := nil;
  FDirty_left := False;
  Fright := 0;
  FField_right := nil;
  FDirty_right := False;
  Ftop := 0;
  FField_top := nil;
  FDirty_top := False;
  Fbottom := 0;
  FField_bottom := nil;
  FDirty_bottom := False;
  Fold := 0;
  FField_old := nil;
  FDirty_old := False;
  if AField_frontUrls <> nil then FfrontUrls := AField_frontUrls.Value;
  if AField_backUrls <> nil then FbackUrls := AField_backUrls.Value;
  if AField_leftUrls <> nil then FleftUrls := AField_leftUrls.Value;
  if AField_rightUrls <> nil then FrightUrls := AField_rightUrls.Value;
  if AField_topUrls <> nil then FtopUrls := AField_topUrls.Value;
  if AField_bottomUrls <> nil then FbottomUrls := AField_bottomUrls.Value;
  FField_front := AField_front;
  if AField_front <> nil then Ffront := AField_front.Value;
  FField_back := AField_back;
  if AField_back <> nil then Fback := AField_back.Value;
  FField_left := AField_left;
  if AField_left <> nil then Fleft := AField_left.Value;
  FField_right := AField_right;
  if AField_right <> nil then Fright := AField_right.Value;
  FField_top := AField_top;
  if AField_top <> nil then Ftop := AField_top.Value;
  FField_bottom := AField_bottom;
  if AField_bottom <> nil then Fbottom := AField_bottom.Value;
  FField_old := AField_old;
  if AField_old <> nil then Fold := AField_old.Value;
end;

destructor TScript62Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript62Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_front then
  begin
    FDirty_front := False;
    if FField_front <> nil then
      FField_front.Send(Ffront, Time);
  end;
  if FDirty_back then
  begin
    FDirty_back := False;
    if FField_back <> nil then
      FField_back.Send(Fback, Time);
  end;
  if FDirty_left then
  begin
    FDirty_left := False;
    if FField_left <> nil then
      FField_left.Send(Fleft, Time);
  end;
  if FDirty_right then
  begin
    FDirty_right := False;
    if FField_right <> nil then
      FField_right.Send(Fright, Time);
  end;
  if FDirty_top then
  begin
    FDirty_top := False;
    if FField_top <> nil then
      FField_top.Send(Ftop, Time);
  end;
  if FDirty_bottom then
  begin
    FDirty_bottom := False;
    if FField_bottom <> nil then
      FField_bottom.Send(Fbottom, Time);
  end;
  if FDirty_old then
  begin
    FDirty_old := False;
    if FField_old <> nil then
      FField_old.Send(Fold, Time);
  end;
end;

procedure TScript62Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script62_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript62Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
var
  side: Integer;
begin
  side := Floor((Value as TSFFloat).Value * Length(FfrontUrls));
  if side > Length(FfrontUrls) - 1 then
  begin
    side := 0;
  end;
  if side <> Fold then
  begin
    Fold := side; FDirty_old := True;
    Ffront[0] := FfrontUrls[side]; FDirty_front := True;
    Fback[0] := FbackUrls[side]; FDirty_back := True;
    Fleft[0] := FleftUrls[side]; FDirty_left := True;
    Fright[0] := FrightUrls[side]; FDirty_right := True;
    Ftop[0] := FtopUrls[side]; FDirty_top := True;
    Fbottom[0] := FbottomUrls[side]; FDirty_bottom := True;
  end;
  FlushOutputs(Time);
end;

constructor TScript77Script.Create(const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_tdelta: TSFFloat; const AField_pdelta: TSFFloat);
begin
  inherited Create;
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

destructor TScript77Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript77Script.FlushOutputs(const Time: TX3DTime);
begin
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

procedure TScript77Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script77_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript77Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
var
  choice: Integer;
begin
  choice := Floor(Random * 4);
  case choice of
    0:
    begin
      Fa := Fa + Floor(Random * 2) * 2 - 1; FDirty_a := True;
    end;
    1:
    begin
      Fb := Fb + Floor(Random * 2) * 2 - 1; FDirty_b := True;
    end;
    2:
    begin
      Fc := Fc + Floor(Random * 2) * 2 - 1; FDirty_c := True;
    end;
    3:
    begin
      Fd := Fd + Floor(Random * 2) * 2 - 1; FDirty_d := True;
    end;
  end;
  Ftdelta := Ftdelta + 0.5; FDirty_tdelta := True;
  Fpdelta := Fpdelta + 0.5; FDirty_pdelta := True;
  if Fa < 1 then
  begin
    Fa := 10; FDirty_a := True;
  end;
  if Fb < 1 then
  begin
    Fb := 10; FDirty_b := True;
  end;
  if Fc < 1 then
  begin
    Fc := 4; FDirty_c := True;
  end;
  if Fc > 20 then
  begin
    Fc := 4; FDirty_c := True;
  end;
  if Fd < 1 then
  begin
    Fd := 4; FDirty_d := True;
  end;
  if Fd > 20 then
  begin
    Fd := 4; FDirty_d := True;
  end;
  FlushOutputs(Time);
end;

procedure Initflowers7Part0;
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
X3D0.Meta['title'] := 'flowers7.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d';
X3D0.Meta['description'] := 'a flower';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
Group16.FdChildren.Add(NavigationInfo17);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background18 := TBackgroundNode.Create;
Background18.X3DName := 'background';
Background18.SetBackUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
Group16.FdChildren.Add(Background18);
Viewpoint19 := TViewpointNode.Create;
Viewpoint19.Position := Vector3(0, 0, 40);
Viewpoint19.Description := 'Transparent rose';
Group16.FdChildren.Add(Viewpoint19);
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7, 0.7, 0.7);
end;

procedure Initflowers7Part1;
begin
Material23.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture24.X3DName := 'texture';
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.X3DName := 'backShader';
ImageTexture25.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
ComposedCubeMapTexture24.BackTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.X3DName := 'bottomShader';
ImageTexture26.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
ComposedCubeMapTexture24.BottomTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.X3DName := 'frontShader';
ImageTexture27.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
ComposedCubeMapTexture24.FrontTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.X3DName := 'leftShader';
ImageTexture28.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
ComposedCubeMapTexture24.LeftTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.X3DName := 'rightShader';
ImageTexture29.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
ComposedCubeMapTexture24.RightTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.X3DName := 'topShader';
ImageTexture30.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
ComposedCubeMapTexture24.TopTexture := ImageTexture30;
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.X3DName := 'x3dom';
ComposedShader31.Language := slGLSL;
{ TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
FieldVal32 := TSFNode.CreateUndefined(ComposedShader31, True, 'cube');
ComposedShader31.AddCustomFieldOrEvent(FieldVal32);
FieldVal32.Value := ComposedCubeMapTexture24;
FieldVal34 := TSFVec3f.Create(ComposedShader31, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader31.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFFloat.Create(ComposedShader31, True, 'bias', 0.5);
ComposedShader31.AddCustomFieldOrEvent(FieldVal35);
end;

procedure Initflowers7Part2;
begin
FieldVal36 := TSFFloat.Create(ComposedShader31, True, 'scale', 0.5);
ComposedShader31.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.Create(ComposedShader31, True, 'power', 2);
ComposedShader31.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.Create(ComposedShader31, True, 'a', 10);
ComposedShader31.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader31, True, 'b', 1);
ComposedShader31.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader31, True, 'c', 20);
ComposedShader31.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.Create(ComposedShader31, True, 'd', 20);
ComposedShader31.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.Create(ComposedShader31, True, 'tdelta', 0);
ComposedShader31.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.Create(ComposedShader31, True, 'pdelta', 0);
ComposedShader31.AddCustomFieldOrEvent(FieldVal43);
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs']);
ShaderPart44.ShaderType := stVertex;
ComposedShader31.FdParts.Add(ShaderPart44);
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart45.ShaderType := stFragment;
ComposedShader31.FdParts.Add(ShaderPart45);
Appearance22.FdShaders.Add(ComposedShader31);
ComposedShader46 := TComposedShaderNode.Create;
ComposedShader46.X3DName := 'x_ite';
ComposedShader46.Language := slGLSL;
FieldVal47 := TSFNode.CreateUndefined(ComposedShader46, True, 'cube');
ComposedShader46.AddCustomFieldOrEvent(FieldVal47);
FieldVal47.Value := ComposedCubeMapTexture24;
FieldVal49 := TSFVec3f.Create(ComposedShader46, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader46.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TSFFloat.CreateEvent(ComposedShader46, 'bias', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFFloat.CreateEvent(ComposedShader46, 'scale', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFFloat.CreateEvent(ComposedShader46, 'power', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFFloat.CreateEvent(ComposedShader46, 'a', True);
end;

procedure Initflowers7Part3;
begin
ComposedShader46.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.CreateEvent(ComposedShader46, 'b', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.CreateEvent(ComposedShader46, 'c', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.CreateEvent(ComposedShader46, 'd', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.CreateEvent(ComposedShader46, 'tdelta', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFFloat.CreateEvent(ComposedShader46, 'pdelta', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal58);
ShaderPart59 := TShaderPartNode.Create;
ShaderPart59.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart59.ShaderType := stVertex;
ComposedShader46.FdParts.Add(ShaderPart59);
ShaderPart60 := TShaderPartNode.Create;
ShaderPart60.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart60.ShaderType := stFragment;
ComposedShader46.FdParts.Add(ShaderPart60);
Appearance22.FdShaders.Add(ComposedShader46);
Shape21.Appearance := Appearance22;
Sphere61 := TSphereNode.Create;
Shape21.Geometry := Sphere61;
Transform20.FdChildren.Add(Shape21);
Group16.FdChildren.Add(Transform20);
Script62 := TScriptNode.Create;
Script62.X3DName := 'UrlSelector';
Script62.DirectOutput := True;
FieldVal63 := TMFString.Create(Script62, False, 'frontUrls', ['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png']);
Script62.AddCustomFieldOrEvent(FieldVal63);
FieldVal64 := TMFString.Create(Script62, False, 'backUrls', ['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png']);
Script62.AddCustomFieldOrEvent(FieldVal64);
FieldVal65 := TMFString.Create(Script62, False, 'leftUrls', ['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png']);
Script62.AddCustomFieldOrEvent(FieldVal65);
FieldVal66 := TMFString.Create(Script62, False, 'rightUrls', ['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png']);
Script62.AddCustomFieldOrEvent(FieldVal66);
FieldVal67 := TMFString.Create(Script62, False, 'topUrls', ['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png']);
Script62.AddCustomFieldOrEvent(FieldVal67);
FieldVal68 := TMFString.Create(Script62, False, 'bottomUrls', ['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png']);
Script62.AddCustomFieldOrEvent(FieldVal68);
end;

procedure Initflowers7Part4;
begin
FieldVal69 := TMFString.CreateUndefined(Script62, True, 'front');
Script62.AddCustomFieldOrEvent(FieldVal69);
FieldVal70 := TMFString.CreateUndefined(Script62, True, 'back');
Script62.AddCustomFieldOrEvent(FieldVal70);
FieldVal71 := TMFString.CreateUndefined(Script62, True, 'left');
Script62.AddCustomFieldOrEvent(FieldVal71);
FieldVal72 := TMFString.CreateUndefined(Script62, True, 'right');
Script62.AddCustomFieldOrEvent(FieldVal72);
FieldVal73 := TMFString.CreateUndefined(Script62, True, 'top');
Script62.AddCustomFieldOrEvent(FieldVal73);
FieldVal74 := TMFString.CreateUndefined(Script62, True, 'bottom');
Script62.AddCustomFieldOrEvent(FieldVal74);
FieldVal75 := TSFFloat.CreateEvent(Script62, 'set_fraction', True);
Script62.AddCustomFieldOrEvent(FieldVal75);
FieldVal76 := TSFInt32.Create(Script62, True, 'old', -1);
Script62.AddCustomFieldOrEvent(FieldVal76);
FreeAndNil(CompiledScript62);
CompiledScript62 := TScript62Script.Create(FieldVal63, FieldVal64, FieldVal65, FieldVal66, FieldVal67, FieldVal68, FieldVal69, FieldVal70, FieldVal71, FieldVal72, FieldVal73, FieldVal74, FieldVal76);
Script62.SetUrl(['compiled:' + LineEnding +
  'set_fraction=Script62_set_fraction']);
Group16.FdChildren.Add(Script62);
{ <TimeSensor DEF="Clock" cycleInterval="45" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/> }
Script77 := TScriptNode.Create;
Script77.X3DName := 'Animate';
Script77.DirectOutput := True;
FieldVal78 := TSFFloat.CreateEvent(Script77, 'set_fraction', True);
Script77.AddCustomFieldOrEvent(FieldVal78);
FieldVal79 := TSFFloat.Create(Script77, True, 'a', 10);
Script77.AddCustomFieldOrEvent(FieldVal79);
FieldVal80 := TSFFloat.Create(Script77, True, 'b', 1);
Script77.AddCustomFieldOrEvent(FieldVal80);
FieldVal81 := TSFFloat.Create(Script77, True, 'c', 20);
Script77.AddCustomFieldOrEvent(FieldVal81);
FieldVal82 := TSFFloat.Create(Script77, True, 'd', 20);
Script77.AddCustomFieldOrEvent(FieldVal82);
FieldVal83 := TSFFloat.Create(Script77, True, 'tdelta', 0);
Script77.AddCustomFieldOrEvent(FieldVal83);
FieldVal84 := TSFFloat.Create(Script77, True, 'pdelta', 0);
Script77.AddCustomFieldOrEvent(FieldVal84);
FreeAndNil(CompiledScript77);
CompiledScript77 := TScript77Script.Create(FieldVal79, FieldVal80, FieldVal81, FieldVal82, FieldVal83, FieldVal84);
end;

procedure Initflowers7Part5;
begin
Script77.SetUrl(['compiled:' + LineEnding +
  'set_fraction=Script77_set_fraction']);
Group16.FdChildren.Add(Script77);
TimeSensor85 := TTimeSensorNode.Create;
TimeSensor85.X3DName := 'TourTime';
TimeSensor85.CycleInterval := 5;
TimeSensor85.Loop := True;
Group16.FdChildren.Add(TimeSensor85);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Group16.AddRoute(TimeSensor85.EventFraction_changed, FieldVal78);
{ ROUTE Animate.a TO x_ite.a }
Group16.AddRoute(FieldVal79.EventOut, FieldVal53);
{ ROUTE Animate.b TO x_ite.b }
Group16.AddRoute(FieldVal80.EventOut, FieldVal54);
{ ROUTE Animate.c TO x_ite.c }
Group16.AddRoute(FieldVal81.EventOut, FieldVal55);
{ ROUTE Animate.d TO x_ite.d }
Group16.AddRoute(FieldVal82.EventOut, FieldVal56);
{ ROUTE Animate.pdelta TO x_ite.pdelta }
Group16.AddRoute(FieldVal84.EventOut, FieldVal58);
{ ROUTE Animate.tdelta TO x_ite.tdelta }
Group16.AddRoute(FieldVal83.EventOut, FieldVal57);
{ ROUTE Animate.a TO x3dom.a }
Group16.AddRoute(FieldVal79.EventOut, FieldVal38.EventIn);
{ ROUTE Animate.b TO x3dom.b }
Group16.AddRoute(FieldVal80.EventOut, FieldVal39.EventIn);
{ ROUTE Animate.c TO x3dom.c }
Group16.AddRoute(FieldVal81.EventOut, FieldVal40.EventIn);
{ ROUTE Animate.d TO x3dom.d }
Group16.AddRoute(FieldVal82.EventOut, FieldVal41.EventIn);
{ ROUTE Animate.pdelta TO x3dom.pdelta }
Group16.AddRoute(FieldVal84.EventOut, FieldVal43.EventIn);
{ ROUTE Animate.tdelta TO x3dom.tdelta }
Group16.AddRoute(FieldVal83.EventOut, FieldVal42.EventIn);
X3D0.AddChildren([Group16]);
end;

function Createflowers7: TX3DRootNode;
begin
  Initflowers7Part0;
  Initflowers7Part1;
  Initflowers7Part2;
  Initflowers7Part3;
  Initflowers7Part4;
  Initflowers7Part5;
  Result := X3D0;
end;

procedure Registerflowers7Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript62 <> nil then
    CompiledScript62.RegisterHandlers(Scene);
  if CompiledScript77 <> nil then
    CompiledScript77.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript62);
  FreeAndNil(CompiledScript77);
end.
