unit mirror2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createmirror2: TX3DRootNode;
procedure Registermirror2Scripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript46Script = class
  private
    FfrontUrls: array of String;
    FbackUrls: array of String;
    FleftUrls: array of String;
    FrightUrls: array of String;
    FtopUrls: array of String;
    FbottomUrls: array of String;
    Ffront_changed: array of String;
    FEvent_front_changed: TX3DEvent;
    FBack_front_changed: TMFString;
    FDirty_front_changed: Boolean;
    Fback_changed: array of String;
    FEvent_back_changed: TX3DEvent;
    FBack_back_changed: TMFString;
    FDirty_back_changed: Boolean;
    Fleft_changed: array of String;
    FEvent_left_changed: TX3DEvent;
    FBack_left_changed: TMFString;
    FDirty_left_changed: Boolean;
    Fright_changed: array of String;
    FEvent_right_changed: TX3DEvent;
    FBack_right_changed: TMFString;
    FDirty_right_changed: Boolean;
    Ftop_changed: array of String;
    FEvent_top_changed: TX3DEvent;
    FBack_top_changed: TMFString;
    FDirty_top_changed: Boolean;
    Fbottom_changed: array of String;
    FEvent_bottom_changed: TX3DEvent;
    FBack_bottom_changed: TMFString;
    FDirty_bottom_changed: Boolean;
    Fold: Int32;
    FField_old: TSFInt32;
    FDirty_old: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_frontUrls: TMFString; const AField_backUrls: TMFString; const AField_leftUrls: TMFString; const AField_rightUrls: TMFString; const AField_topUrls: TMFString; const AField_bottomUrls: TMFString; const AEvent_front_changed: TX3DEvent; const AEvent_back_changed: TX3DEvent; const AEvent_left_changed: TX3DEvent; const AEvent_right_changed: TX3DEvent; const AEvent_top_changed: TX3DEvent; const AEvent_bottom_changed: TX3DEvent; const AField_old: TSFInt32);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  Viewpoint16: TViewpointNode;
  Background17: TBackgroundNode;
  Transform18: TTransformNode;
  Shape19: TShapeNode;
  Appearance20: TAppearanceNode;
  Material21: TMaterialNode;
  ComposedCubeMapTexture22: TComposedCubeMapTextureNode;
  ImageTexture23: TImageTextureNode;
  ImageTexture24: TImageTextureNode;
  ImageTexture25: TImageTextureNode;
  ImageTexture26: TImageTextureNode;
  ImageTexture27: TImageTextureNode;
  ImageTexture28: TImageTextureNode;
  ComposedShader29: TComposedShaderNode;
  FieldVal30: TSFVec3f;
  FieldVal31: TSFInt32;
  FieldVal32: TSFFloat;
  FieldVal33: TSFFloat;
  FieldVal34: TSFFloat;
  ShaderPart35: TShaderPartNode;
  ShaderPart36: TShaderPartNode;
  ComposedShader37: TComposedShaderNode;
  FieldVal38: TSFVec3f;
  FieldVal39: TSFInt32;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  ShaderPart43: TShaderPartNode;
  ShaderPart44: TShaderPartNode;
  Sphere45: TSphereNode;
  Script46: TScriptNode;
  FieldVal47: TMFString;
  FieldVal48: TMFString;
  FieldVal49: TMFString;
  FieldVal50: TMFString;
  FieldVal51: TMFString;
  FieldVal52: TMFString;
  FieldVal53: TX3DEvent;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  FieldVal58: TX3DEvent;
  FieldVal59: TX3DEvent;
  FieldVal60: TSFInt32;
  CompiledScript46: TScript46Script;
  TimeSensor61: TTimeSensorNode;

constructor TScript46Script.Create(const AField_frontUrls: TMFString; const AField_backUrls: TMFString; const AField_leftUrls: TMFString; const AField_rightUrls: TMFString; const AField_topUrls: TMFString; const AField_bottomUrls: TMFString; const AEvent_front_changed: TX3DEvent; const AEvent_back_changed: TX3DEvent; const AEvent_left_changed: TX3DEvent; const AEvent_right_changed: TX3DEvent; const AEvent_top_changed: TX3DEvent; const AEvent_bottom_changed: TX3DEvent; const AField_old: TSFInt32);
begin
  inherited Create;
  FfrontUrls := 0;
  FbackUrls := 0;
  FleftUrls := 0;
  FrightUrls := 0;
  FtopUrls := 0;
  FbottomUrls := 0;
  Ffront_changed := 0;
  FEvent_front_changed := nil;
  FBack_front_changed := TMFString.Create(nil, False, 'front_changed', 0);
  FDirty_front_changed := False;
  Fback_changed := 0;
  FEvent_back_changed := nil;
  FBack_back_changed := TMFString.Create(nil, False, 'back_changed', 0);
  FDirty_back_changed := False;
  Fleft_changed := 0;
  FEvent_left_changed := nil;
  FBack_left_changed := TMFString.Create(nil, False, 'left_changed', 0);
  FDirty_left_changed := False;
  Fright_changed := 0;
  FEvent_right_changed := nil;
  FBack_right_changed := TMFString.Create(nil, False, 'right_changed', 0);
  FDirty_right_changed := False;
  Ftop_changed := 0;
  FEvent_top_changed := nil;
  FBack_top_changed := TMFString.Create(nil, False, 'top_changed', 0);
  FDirty_top_changed := False;
  Fbottom_changed := 0;
  FEvent_bottom_changed := nil;
  FBack_bottom_changed := TMFString.Create(nil, False, 'bottom_changed', 0);
  FDirty_bottom_changed := False;
  Fold := 0;
  FField_old := nil;
  FDirty_old := False;
  if AField_frontUrls <> nil then FfrontUrls := AField_frontUrls.Value;
  if AField_backUrls <> nil then FbackUrls := AField_backUrls.Value;
  if AField_leftUrls <> nil then FleftUrls := AField_leftUrls.Value;
  if AField_rightUrls <> nil then FrightUrls := AField_rightUrls.Value;
  if AField_topUrls <> nil then FtopUrls := AField_topUrls.Value;
  if AField_bottomUrls <> nil then FbottomUrls := AField_bottomUrls.Value;
  FEvent_front_changed := AEvent_front_changed;
  FEvent_back_changed := AEvent_back_changed;
  FEvent_left_changed := AEvent_left_changed;
  FEvent_right_changed := AEvent_right_changed;
  FEvent_top_changed := AEvent_top_changed;
  FEvent_bottom_changed := AEvent_bottom_changed;
  FField_old := AField_old;
  if AField_old <> nil then Fold := AField_old.Value;
end;

destructor TScript46Script.Destroy;
begin
  FreeAndNil(FBack_front_changed);
  FreeAndNil(FBack_back_changed);
  FreeAndNil(FBack_left_changed);
  FreeAndNil(FBack_right_changed);
  FreeAndNil(FBack_top_changed);
  FreeAndNil(FBack_bottom_changed);
  inherited Destroy;
end;

procedure TScript46Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_front_changed then
  begin
    FDirty_front_changed := False;
    if FEvent_front_changed <> nil then
    begin
      FBack_front_changed.Value := Ffront_changed;
      FEvent_front_changed.Send(FBack_front_changed, Time);
    end;
  end;
  if FDirty_back_changed then
  begin
    FDirty_back_changed := False;
    if FEvent_back_changed <> nil then
    begin
      FBack_back_changed.Value := Fback_changed;
      FEvent_back_changed.Send(FBack_back_changed, Time);
    end;
  end;
  if FDirty_left_changed then
  begin
    FDirty_left_changed := False;
    if FEvent_left_changed <> nil then
    begin
      FBack_left_changed.Value := Fleft_changed;
      FEvent_left_changed.Send(FBack_left_changed, Time);
    end;
  end;
  if FDirty_right_changed then
  begin
    FDirty_right_changed := False;
    if FEvent_right_changed <> nil then
    begin
      FBack_right_changed.Value := Fright_changed;
      FEvent_right_changed.Send(FBack_right_changed, Time);
    end;
  end;
  if FDirty_top_changed then
  begin
    FDirty_top_changed := False;
    if FEvent_top_changed <> nil then
    begin
      FBack_top_changed.Value := Ftop_changed;
      FEvent_top_changed.Send(FBack_top_changed, Time);
    end;
  end;
  if FDirty_bottom_changed then
  begin
    FDirty_bottom_changed := False;
    if FEvent_bottom_changed <> nil then
    begin
      FBack_bottom_changed.Value := Fbottom_changed;
      FEvent_bottom_changed.Send(FBack_bottom_changed, Time);
    end;
  end;
  if FDirty_old then
  begin
    FDirty_old := False;
    if FField_old <> nil then
      FField_old.Send(Fold, Time);
  end;
end;

procedure TScript46Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script46_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript46Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
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
    Ffront_changed[0] := FfrontUrls[side]; FDirty_front_changed := True;
    Fback_changed[0] := FbackUrls[side]; FDirty_back_changed := True;
    Fleft_changed[0] := FleftUrls[side]; FDirty_left_changed := True;
    Fright_changed[0] := FrightUrls[side]; FDirty_right_changed := True;
    Ftop_changed[0] := FtopUrls[side]; FDirty_top_changed := True;
    Fbottom_changed[0] := FbottomUrls[side]; FDirty_bottom_changed := True;
  end;
  FlushOutputs(Time);
end;

procedure Initmirror2Part0;
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
X3D0.Meta['title'] := 'mirror2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d';
X3D0.Meta['description'] := 'a mirrored sphere';
Group15 := TGroupNode.Create;
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.Position := Vector3(0, 5, 100);
Viewpoint16.Description := 'Switch background and images texture';
Group15.FdChildren.Add(Viewpoint16);
Background17 := TBackgroundNode.Create;
Background17.X3DName := 'cube';
Background17.SetLeftUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
Background17.SetBackUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
Background17.SetTopUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
Group15.FdChildren.Add(Background17);
Transform18 := TTransformNode.Create;
Shape19 := TShapeNode.Create;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material21.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance20.Material := Material21;
ComposedCubeMapTexture22 := TComposedCubeMapTextureNode.Create;
end;

procedure Initmirror2Part1;
begin
ImageTexture23 := TImageTextureNode.Create;
ImageTexture23.X3DName := 'backShader';
ImageTexture23.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
ComposedCubeMapTexture22.BackTexture := ImageTexture23;
ImageTexture24 := TImageTextureNode.Create;
ImageTexture24.X3DName := 'bottomShader';
ImageTexture24.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
ComposedCubeMapTexture22.BottomTexture := ImageTexture24;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.X3DName := 'frontShader';
ImageTexture25.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
ComposedCubeMapTexture22.FrontTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.X3DName := 'leftShader';
ImageTexture26.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
ComposedCubeMapTexture22.LeftTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.X3DName := 'rightShader';
ImageTexture27.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
ComposedCubeMapTexture22.RightTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.X3DName := 'topShader';
ImageTexture28.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
ComposedCubeMapTexture22.TopTexture := ImageTexture28;
Appearance20.Texture := ComposedCubeMapTexture22;
ComposedShader29 := TComposedShaderNode.Create;
ComposedShader29.X3DName := 'x_ite';
ComposedShader29.Language := slGLSL;
{ http://hypertextbook.com/facts/2005/JustinChe.shtml }
FieldVal30 := TSFVec3f.Create(ComposedShader29, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader29.AddCustomFieldOrEvent(FieldVal30);
FieldVal31 := TSFInt32.Create(ComposedShader29, True, 'cube', 0);
ComposedShader29.AddCustomFieldOrEvent(FieldVal31);
FieldVal32 := TSFFloat.Create(ComposedShader29, True, 'bias', 0.5);
ComposedShader29.AddCustomFieldOrEvent(FieldVal32);
FieldVal33 := TSFFloat.Create(ComposedShader29, True, 'scale', 0.5);
ComposedShader29.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFFloat.Create(ComposedShader29, True, 'power', 2);
ComposedShader29.AddCustomFieldOrEvent(FieldVal34);
ShaderPart35 := TShaderPartNode.Create;
end;

procedure Initmirror2Part2;
begin
ShaderPart35.SetUrl(['../shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart35.ShaderType := stVertex;
ComposedShader29.FdParts.Add(ShaderPart35);
ShaderPart36 := TShaderPartNode.Create;
ShaderPart36.SetUrl(['../shaders/x_itemix.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs']);
ShaderPart36.ShaderType := stFragment;
ComposedShader29.FdParts.Add(ShaderPart36);
Appearance20.FdShaders.Add(ComposedShader29);
ComposedShader37 := TComposedShaderNode.Create;
ComposedShader37.X3DName := 'x3dom';
ComposedShader37.Language := slGLSL;
FieldVal38 := TSFVec3f.Create(ComposedShader37, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader37.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFInt32.Create(ComposedShader37, True, 'cube', 0);
ComposedShader37.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader37, True, 'bias', 0.5);
ComposedShader37.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.Create(ComposedShader37, True, 'scale', 0.5);
ComposedShader37.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.Create(ComposedShader37, True, 'power', 2);
ComposedShader37.AddCustomFieldOrEvent(FieldVal42);
ShaderPart43 := TShaderPartNode.Create;
ShaderPart43.SetUrl(['../shaders/x3dom.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart43.ShaderType := stVertex;
ComposedShader37.FdParts.Add(ShaderPart43);
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['../shaders/mix.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs']);
ShaderPart44.ShaderType := stFragment;
ComposedShader37.FdParts.Add(ShaderPart44);
Appearance20.FdShaders.Add(ComposedShader37);
Shape19.Appearance := Appearance20;
Sphere45 := TSphereNode.Create;
Sphere45.Radius := 30;
Shape19.Geometry := Sphere45;
Transform18.FdChildren.Add(Shape19);
Script46 := TScriptNode.Create;
Script46.X3DName := 'UrlSelector';
Script46.DirectOutput := True;
FieldVal47 := TMFString.Create(Script46, False, 'frontUrls', ['../resources/images/all_probes/beach_cross/beach_front.png', '../resources/images/all_probes/building_cross/building_front.png', '../resources/images/all_probes/campus_cross/campus_front.png', '../resources/images/all_probes/galileo_cross/galileo_front.png', '../resources/images/all_probes/grace_cross/grace_front.png', '../resources/images/all_probes/kitchen_cross/kitchen_front.png', '../resources/images/all_probes/rnl_cross/rnl_front.png', '../resources/images/all_probes/stpeters_cross/stpeters_front.png', '../resources/images/all_probes/uffizi_cross/uffizi_front.png']);
Script46.AddCustomFieldOrEvent(FieldVal47);
end;

procedure Initmirror2Part3;
begin
FieldVal48 := TMFString.Create(Script46, False, 'backUrls', ['../resources/images/all_probes/beach_cross/beach_back.png', '../resources/images/all_probes/building_cross/building_back.png', '../resources/images/all_probes/campus_cross/campus_back.png', '../resources/images/all_probes/galileo_cross/galileo_back.png', '../resources/images/all_probes/grace_cross/grace_back.png', '../resources/images/all_probes/kitchen_cross/kitchen_back.png', '../resources/images/all_probes/rnl_cross/rnl_back.png', '../resources/images/all_probes/stpeters_cross/stpeters_back.png', '../resources/images/all_probes/uffizi_cross/uffizi_back.png']);
Script46.AddCustomFieldOrEvent(FieldVal48);
FieldVal49 := TMFString.Create(Script46, False, 'leftUrls', ['../resources/images/all_probes/beach_cross/beach_left.png', '../resources/images/all_probes/building_cross/building_left.png', '../resources/images/all_probes/campus_cross/campus_left.png', '../resources/images/all_probes/galileo_cross/galileo_left.png', '../resources/images/all_probes/grace_cross/grace_left.png', '../resources/images/all_probes/kitchen_cross/kitchen_left.png', '../resources/images/all_probes/rnl_cross/rnl_left.png', '../resources/images/all_probes/stpeters_cross/stpeters_left.png', '../resources/images/all_probes/uffizi_cross/uffizi_left.png']);
Script46.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TMFString.Create(Script46, False, 'rightUrls', ['../resources/images/all_probes/beach_cross/beach_right.png', '../resources/images/all_probes/building_cross/building_right.png', '../resources/images/all_probes/campus_cross/campus_right.png', '../resources/images/all_probes/galileo_cross/galileo_right.png', '../resources/images/all_probes/grace_cross/grace_right.png', '../resources/images/all_probes/kitchen_cross/kitchen_right.png', '../resources/images/all_probes/rnl_cross/rnl_right.png', '../resources/images/all_probes/stpeters_cross/stpeters_right.png', '../resources/images/all_probes/uffizi_cross/uffizi_right.png']);
Script46.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TMFString.Create(Script46, False, 'topUrls', ['../resources/images/all_probes/beach_cross/beach_top.png', '../resources/images/all_probes/building_cross/building_top.png', '../resources/images/all_probes/campus_cross/campus_top.png', '../resources/images/all_probes/galileo_cross/galileo_top.png', '../resources/images/all_probes/grace_cross/grace_top.png', '../resources/images/all_probes/kitchen_cross/kitchen_top.png', '../resources/images/all_probes/rnl_cross/rnl_top.png', '../resources/images/all_probes/stpeters_cross/stpeters_top.png', '../resources/images/all_probes/uffizi_cross/uffizi_top.png']);
Script46.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TMFString.Create(Script46, False, 'bottomUrls', ['../resources/images/all_probes/beach_cross/beach_bottom.png', '../resources/images/all_probes/building_cross/building_bottom.png', '../resources/images/all_probes/campus_cross/campus_bottom.png', '../resources/images/all_probes/galileo_cross/galileo_bottom.png', '../resources/images/all_probes/grace_cross/grace_bottom.png', '../resources/images/all_probes/kitchen_cross/kitchen_bottom.png', '../resources/images/all_probes/rnl_cross/rnl_bottom.png', '../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', '../resources/images/all_probes/uffizi_cross/uffizi_bottom.png']);
Script46.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TMFString.CreateEvent(Script46, 'front_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TMFString.CreateEvent(Script46, 'back_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TMFString.CreateEvent(Script46, 'left_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TMFString.CreateEvent(Script46, 'right_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TMFString.CreateEvent(Script46, 'top_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TMFString.CreateEvent(Script46, 'bottom_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFFloat.CreateEvent(Script46, 'set_fraction', True);
Script46.AddCustomFieldOrEvent(FieldVal59);
FieldVal60 := TSFInt32.Create(Script46, True, 'old', -1);
Script46.AddCustomFieldOrEvent(FieldVal60);
FreeAndNil(CompiledScript46);
CompiledScript46 := TScript46Script.Create(FieldVal47, FieldVal48, FieldVal49, FieldVal50, FieldVal51, FieldVal52, FieldVal53, FieldVal54, FieldVal55, FieldVal56, FieldVal57, FieldVal58, FieldVal60);
Script46.SetUrl(['compiled:' + LineEnding +
  'set_fraction=Script46_set_fraction']);
Transform18.FdChildren.Add(Script46);
TimeSensor61 := TTimeSensorNode.Create;
TimeSensor61.X3DName := 'Clock';
TimeSensor61.CycleInterval := 45;
TimeSensor61.Loop := True;
Transform18.FdChildren.Add(TimeSensor61);
{ ROUTE Clock.fraction_changed TO UrlSelector.set_fraction }
Transform18.AddRoute(TimeSensor61.EventFraction_changed, FieldVal59);
{ ROUTE UrlSelector.front_changed TO cube.frontUrl }
Transform18.AddRoute(FieldVal53, Background17.frontUrl);
{ ROUTE UrlSelector.back_changed TO cube.backUrl }
end;

procedure Initmirror2Part4;
begin
Transform18.AddRoute(FieldVal54, Background17.backUrl);
{ ROUTE UrlSelector.left_changed TO cube.leftUrl }
Transform18.AddRoute(FieldVal55, Background17.leftUrl);
{ ROUTE UrlSelector.right_changed TO cube.rightUrl }
Transform18.AddRoute(FieldVal56, Background17.rightUrl);
{ ROUTE UrlSelector.top_changed TO cube.topUrl }
Transform18.AddRoute(FieldVal57, Background17.topUrl);
{ ROUTE UrlSelector.bottom_changed TO cube.bottomUrl }
Transform18.AddRoute(FieldVal58, Background17.bottomUrl);
{ ROUTE UrlSelector.front_changed TO frontShader.url }
Transform18.AddRoute(FieldVal53, ImageTexture25.url);
{ ROUTE UrlSelector.back_changed TO backShader.url }
Transform18.AddRoute(FieldVal54, ImageTexture23.url);
{ ROUTE UrlSelector.left_changed TO leftShader.url }
Transform18.AddRoute(FieldVal55, ImageTexture26.url);
{ ROUTE UrlSelector.right_changed TO rightShader.url }
Transform18.AddRoute(FieldVal56, ImageTexture27.url);
{ ROUTE UrlSelector.top_changed TO topShader.url }
Transform18.AddRoute(FieldVal57, ImageTexture28.url);
{ ROUTE UrlSelector.bottom_changed TO bottomShader.url }
Transform18.AddRoute(FieldVal58, ImageTexture24.url);
Group15.FdChildren.Add(Transform18);
X3D0.AddChildren([Group15]);
end;

function Createmirror2: TX3DRootNode;
begin
  Initmirror2Part0;
  Initmirror2Part1;
  Initmirror2Part2;
  Initmirror2Part3;
  Initmirror2Part4;
  Result := X3D0;
end;

procedure Registermirror2Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript46 <> nil then
    CompiledScript46.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript46);
end.
