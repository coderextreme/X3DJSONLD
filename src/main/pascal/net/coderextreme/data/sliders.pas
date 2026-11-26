unit sliders;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createsliders: TX3DRootNode;
procedure RegisterslidersScripts(const Scene: TCastleSceneCore);

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
  TScript60Script = class
  private
    Fcoordinates: array of TVector3;
    FField_coordinates: TMFVec3f;
    FDirty_coordinates: Boolean;
    FcoordIndexes: array of Int32;
    FField_coordIndexes: TMFInt32;
    FDirty_coordIndexes: Boolean;
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
    Fpdelta: Single;
    FField_pdelta: TSFFloat;
    FDirty_pdelta: Boolean;
    Ftdelta: Single;
    FField_tdelta: TSFFloat;
    FDirty_tdelta: Boolean;
    Fresolution: Int32;
    FField_resolution: TSFInt32;
    FDirty_resolution: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_coordinates: TMFVec3f; const AField_coordIndexes: TMFInt32; const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_pdelta: TSFFloat; const AField_tdelta: TSFFloat; const AField_resolution: TSFInt32);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_a(Value: TX3DField; const Time: TX3DTime);
    procedure Set_b(Value: TX3DField; const Time: TX3DTime);
    procedure Set_c(Value: TX3DField; const Time: TX3DTime);
    procedure Set_d(Value: TX3DField; const Time: TX3DTime);
    procedure Set_pdelta(Value: TX3DField; const Time: TX3DTime);
    procedure Set_tdelta(Value: TX3DField; const Time: TX3DTime);
    procedure Resolution(Value: TX3DField; const Time: TX3DTime);
    procedure GenerateCoordinates(const Time: TX3DTime);
  end;

  TScript107Script = class
  private
    FprotoScale: Single;
    FField_protoScale: TSFFloat;
    FDirty_protoScale: Boolean;
    FprotoParameterName: String;
    FField_protoParameterName: TSFString;
    FDirty_protoParameterName: Boolean;
    FprotoScript: TX3DNode;
    FField_protoScript: TSFNode;
    FDirty_protoScript: Boolean;
    FprotoValue: Single;
    FField_protoValue: TSFFloat;
    FDirty_protoValue: Boolean;
    FprotoText: array of String;
    FField_protoText: TMFString;
    FDirty_protoText: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_protoScale: TSFFloat; const AField_protoParameterName: TSFString; const AField_protoScript: TSFNode; const AField_protoValue: TSFFloat; const AField_protoText: TMFString);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_protoScale(Value: TX3DField; const Time: TX3DTime);
    procedure Set_protoParameterName(Value: TX3DField; const Time: TX3DTime);
    procedure Set_protoScript(Value: TX3DField; const Time: TX3DTime);
    procedure Set_protoValue(Value: TX3DField; const Time: TX3DTime);
    procedure Set_protoText(Value: TX3DField; const Time: TX3DTime);
    procedure NewTranslation(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  LayerSet16: TLayerSetNode;
  Layer17: TLayerNode;
  NavigationInfo18: TNavigationInfoNode;
  DirectionalLight19: TDirectionalLightNode;
  DirectionalLight20: TDirectionalLightNode;
  Viewpoint21: TViewpointNode;
  Group22: TGroupNode;
  Transform23: TTransformNode;
  Shape24: TShapeNode;
  Cylinder25: TCylinderNode;
  Appearance26: TAppearanceNode;
  Material27: TMaterialNode;
  Transform28: TTransformNode;
  Shape29: TShapeNode;
  Cone30: TConeNode;
  Appearance31: TAppearanceNode;
  Transform33: TTransformNode;
  Shape34: TShapeNode;
  Appearance36: TAppearanceNode;
  Material37: TMaterialNode;
  Transform38: TTransformNode;
  Shape39: TShapeNode;
  Appearance41: TAppearanceNode;
  Transform43: TTransformNode;
  Shape44: TShapeNode;
  Appearance46: TAppearanceNode;
  Material47: TMaterialNode;
  Transform48: TTransformNode;
  Shape49: TShapeNode;
  Appearance51: TAppearanceNode;
  Transform53: TTransformNode;
  Transform54: TTransformNode;
  Shape55: TShapeNode;
  IndexedFaceSet56: TIndexedFaceSetNode;
  Coordinate57: TCoordinateNode;
  Appearance58: TAppearanceNode;
  Material59: TMaterialNode;
  Script60: TScriptNode;
  FieldVal61: TMFVec3f;
  FieldVal62: TMFInt32;
  FieldVal63: TSFFloat;
  FieldVal64: TSFFloat;
  FieldVal65: TSFFloat;
  FieldVal66: TSFFloat;
  FieldVal67: TSFFloat;
  FieldVal68: TSFFloat;
  FieldVal69: TSFInt32;
  CompiledScript60: TScript60Script;
  LayoutLayer72: TLayoutLayerNode;
  Layout73: TLayoutNode;
  Viewport74: TViewportNode;
  Transform75: TTransformNode;
  Shape76: TShapeNode;
  Appearance77: TAppearanceNode;
  Material78: TMaterialNode;
  Box79: TBoxNode;
  Transform80: TTransformNode;
  Transform81: TTransformNode;
  Shape82: TShapeNode;
  Text83: TTextNode;
  FontStyle84: TFontStyleNode;
  Appearance85: TAppearanceNode;
  Material86: TMaterialNode;
  ProtoDeclare87: TX3DPrototype;
  FieldDecl89: TX3DInterfaceDeclaration;
  FieldVal89: TSFVec3f;
  FieldDecl90: TX3DInterfaceDeclaration;
  FieldVal90: TMFString;
  FieldDecl91: TX3DInterfaceDeclaration;
  FieldVal91: TSFFloat;
  FieldDecl92: TX3DInterfaceDeclaration;
  FieldVal92: TSFString;
  FieldDecl93: TX3DInterfaceDeclaration;
  FieldVal93: TSFNode;
  Group95: TGroupNode;
  Transform96: TTransformNode;
  Transform97: TTransformNode;
  PlaneSensor98: TPlaneSensorNode;
  Transform99: TTransformNode;
  TouchSensor100: TTouchSensorNode;
  Transform101: TTransformNode;
  Shape102: TShapeNode;
  Text103: TTextNode;
  FontStyle104: TFontStyleNode;
  Appearance105: TAppearanceNode;
  Material106: TMaterialNode;
  Script107: TScriptNode;
  FieldVal108: TSFFloat;
  FieldVal109: TSFString;
  FieldVal110: TX3DEvent;
  FieldVal111: TSFNode;
  FieldVal112: TSFFloat;
  FieldVal113: TMFString;
  CompiledScript107: TScript107Script;
  ProtoInstance117: TX3DPrototypeNode;
  ProtoInstance124: TX3DPrototypeNode;
  ProtoInstance131: TX3DPrototypeNode;
  ProtoInstance138: TX3DPrototypeNode;
  ProtoInstance145: TX3DPrototypeNode;
  ProtoInstance152: TX3DPrototypeNode;
  Layer159: TLayerNode;
  Viewpoint160: TViewpointNode;

constructor TScript60Script.Create(const AField_coordinates: TMFVec3f; const AField_coordIndexes: TMFInt32; const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_pdelta: TSFFloat; const AField_tdelta: TSFFloat; const AField_resolution: TSFInt32);
begin
  inherited Create;
  Fcoordinates := 0;
  FField_coordinates := nil;
  FDirty_coordinates := False;
  FcoordIndexes := 0;
  FField_coordIndexes := nil;
  FDirty_coordIndexes := False;
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
  Fpdelta := 0.0;
  FField_pdelta := nil;
  FDirty_pdelta := False;
  Ftdelta := 0.0;
  FField_tdelta := nil;
  FDirty_tdelta := False;
  Fresolution := 0;
  FField_resolution := nil;
  FDirty_resolution := False;
  FField_coordinates := AField_coordinates;
  if AField_coordinates <> nil then Fcoordinates := AField_coordinates.Value;
  FField_coordIndexes := AField_coordIndexes;
  if AField_coordIndexes <> nil then FcoordIndexes := AField_coordIndexes.Value;
  FField_a := AField_a;
  if AField_a <> nil then Fa := AField_a.Value;
  FField_b := AField_b;
  if AField_b <> nil then Fb := AField_b.Value;
  FField_c := AField_c;
  if AField_c <> nil then Fc := AField_c.Value;
  FField_d := AField_d;
  if AField_d <> nil then Fd := AField_d.Value;
  FField_pdelta := AField_pdelta;
  if AField_pdelta <> nil then Fpdelta := AField_pdelta.Value;
  FField_tdelta := AField_tdelta;
  if AField_tdelta <> nil then Ftdelta := AField_tdelta.Value;
  FField_resolution := AField_resolution;
  if AField_resolution <> nil then Fresolution := AField_resolution.Value;
end;

destructor TScript60Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript60Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_coordinates then
  begin
    FDirty_coordinates := False;
    if FField_coordinates <> nil then
      FField_coordinates.Send(Fcoordinates, Time);
  end;
  if FDirty_coordIndexes then
  begin
    FDirty_coordIndexes := False;
    if FField_coordIndexes <> nil then
      FField_coordIndexes.Send(FcoordIndexes, Time);
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
  if FDirty_pdelta then
  begin
    FDirty_pdelta := False;
    if FField_pdelta <> nil then
      FField_pdelta.Send(Fpdelta, Time);
  end;
  if FDirty_tdelta then
  begin
    FDirty_tdelta := False;
    if FField_tdelta <> nil then
      FField_tdelta.Send(Ftdelta, Time);
  end;
  if FDirty_resolution then
  begin
    FDirty_resolution := False;
    if FField_resolution <> nil then
      FField_resolution.Send(Fresolution, Time);
  end;
end;

procedure TScript60Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script60_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script60_set_a', {$ifdef FPC}@{$endif}Set_a);
  Scene.RegisterCompiledScript('Script60_set_b', {$ifdef FPC}@{$endif}Set_b);
  Scene.RegisterCompiledScript('Script60_set_c', {$ifdef FPC}@{$endif}Set_c);
  Scene.RegisterCompiledScript('Script60_set_d', {$ifdef FPC}@{$endif}Set_d);
  Scene.RegisterCompiledScript('Script60_set_pdelta', {$ifdef FPC}@{$endif}Set_pdelta);
  Scene.RegisterCompiledScript('Script60_set_tdelta', {$ifdef FPC}@{$endif}Set_tdelta);
  Scene.RegisterCompiledScript('Script60_resolution', {$ifdef FPC}@{$endif}Resolution);
end;

procedure TScript60Script.Initialize(Value: TX3DField; const Time: TX3DTime);
var
  arrIndex: Integer;
  i: Integer;
  j: Integer;
begin
  GenerateCoordinates(Time);
  arrIndex := 0;
  for i := 0 to (Fresolution - 1) - 1 do
  begin
    for j := 0 to (Fresolution - 1) - 1 do
    begin
      FcoordIndexes[arrIndex := arrIndex + 1] := i * Fresolution + j; FDirty_coordIndexes := True;
      FcoordIndexes[arrIndex := arrIndex + 1] := i * Fresolution + j + 1; FDirty_coordIndexes := True;
      FcoordIndexes[arrIndex := arrIndex + 1] := i + 1 * Fresolution + j + 1; FDirty_coordIndexes := True;
      FcoordIndexes[arrIndex := arrIndex + 1] := i + 1 * Fresolution + j; FDirty_coordIndexes := True;
      FcoordIndexes[arrIndex := arrIndex + 1] := -1; FDirty_coordIndexes := True;
    end;
  end;
  FlushOutputs(Time);
end;

procedure TScript60Script.Set_a(Value: TX3DField; const Time: TX3DTime);
begin
  Fa := (Value as TSFFloat).Value; FDirty_a := True;
  GenerateCoordinates(Time);
  FlushOutputs(Time);
end;

procedure TScript60Script.Set_b(Value: TX3DField; const Time: TX3DTime);
begin
  Fb := (Value as TSFFloat).Value; FDirty_b := True;
  GenerateCoordinates(Time);
  FlushOutputs(Time);
end;

procedure TScript60Script.Set_c(Value: TX3DField; const Time: TX3DTime);
begin
  Fc := (Value as TSFFloat).Value; FDirty_c := True;
  GenerateCoordinates(Time);
  FlushOutputs(Time);
end;

procedure TScript60Script.Set_d(Value: TX3DField; const Time: TX3DTime);
begin
  Fd := (Value as TSFFloat).Value; FDirty_d := True;
  GenerateCoordinates(Time);
  FlushOutputs(Time);
end;

procedure TScript60Script.Set_pdelta(Value: TX3DField; const Time: TX3DTime);
begin
  Fpdelta := (Value as TSFFloat).Value; FDirty_pdelta := True;
  GenerateCoordinates(Time);
  FlushOutputs(Time);
end;

procedure TScript60Script.Set_tdelta(Value: TX3DField; const Time: TX3DTime);
begin
  Ftdelta := (Value as TSFFloat).Value; FDirty_tdelta := True;
  GenerateCoordinates(Time);
  FlushOutputs(Time);
end;

procedure TScript60Script.Resolution(Value: TX3DField; const Time: TX3DTime);
begin
  Fresolution := (Value as TSFInt32).Value; FDirty_resolution := True;
  Initialize(nil, Time);
  FlushOutputs(Time);
end;

procedure TScript60Script.GenerateCoordinates(const Time: TX3DTime);
var
  theta: Single;
  phi: Single;
  delta: Single;
  arrIndex: Integer;
  i: Integer;
  j: Integer;
  rho: Single;
begin
  theta := 0.0;
  phi := 0.0;
  delta := 2 * 3.141592653 / Fresolution - 1;
  arrIndex := 0;
  for i := 0 to (Fresolution) - 1 do
  begin
    for j := 0 to (Fresolution) - 1 do
    begin
      rho := Fa + Fb * Cos(Fc * theta + Ftdelta) * Cos(Fd * phi + Fpdelta);
      Fcoordinates[arrIndex := arrIndex + 1] := Vector3(rho * Cos(phi) * Cos(theta), rho * Cos(phi) * Sin(theta), rho * Sin(phi)); FDirty_coordinates := True;
      theta := theta + (delta);
    end;
    phi := phi + (delta);
  end;
end;

constructor TScript107Script.Create(const AField_protoScale: TSFFloat; const AField_protoParameterName: TSFString; const AField_protoScript: TSFNode; const AField_protoValue: TSFFloat; const AField_protoText: TMFString);
begin
  inherited Create;
  FprotoScale := 0.0;
  FField_protoScale := nil;
  FDirty_protoScale := False;
  FprotoParameterName := '';
  FField_protoParameterName := nil;
  FDirty_protoParameterName := False;
  FprotoScript := nil;
  FField_protoScript := nil;
  FDirty_protoScript := False;
  FprotoValue := 0.0;
  FField_protoValue := nil;
  FDirty_protoValue := False;
  FprotoText := 0;
  FField_protoText := nil;
  FDirty_protoText := False;
  FField_protoScale := AField_protoScale;
  if AField_protoScale <> nil then FprotoScale := AField_protoScale.Value;
  FField_protoParameterName := AField_protoParameterName;
  if AField_protoParameterName <> nil then FprotoParameterName := AField_protoParameterName.Value;
  FField_protoScript := AField_protoScript;
  if AField_protoScript <> nil then FprotoScript := AField_protoScript.Value;
  FField_protoValue := AField_protoValue;
  if AField_protoValue <> nil then FprotoValue := AField_protoValue.Value;
  FField_protoText := AField_protoText;
  if AField_protoText <> nil then FprotoText := AField_protoText.Value;
end;

destructor TScript107Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript107Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_protoScale then
  begin
    FDirty_protoScale := False;
    if FField_protoScale <> nil then
      FField_protoScale.Send(FprotoScale, Time);
  end;
  if FDirty_protoParameterName then
  begin
    FDirty_protoParameterName := False;
    if FField_protoParameterName <> nil then
      FField_protoParameterName.Send(FprotoParameterName, Time);
  end;
  if FDirty_protoScript then
  begin
    FDirty_protoScript := False;
    if FField_protoScript <> nil then
      FField_protoScript.Send(FprotoScript, Time);
  end;
  if FDirty_protoValue then
  begin
    FDirty_protoValue := False;
    if FField_protoValue <> nil then
      FField_protoValue.Send(FprotoValue, Time);
  end;
  if FDirty_protoText then
  begin
    FDirty_protoText := False;
    if FField_protoText <> nil then
      FField_protoText.Send(FprotoText, Time);
  end;
end;

procedure TScript107Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script107_set_protoScale', {$ifdef FPC}@{$endif}Set_protoScale);
  Scene.RegisterCompiledScript('Script107_set_protoParameterName', {$ifdef FPC}@{$endif}Set_protoParameterName);
  Scene.RegisterCompiledScript('Script107_set_protoScript', {$ifdef FPC}@{$endif}Set_protoScript);
  Scene.RegisterCompiledScript('Script107_set_protoValue', {$ifdef FPC}@{$endif}Set_protoValue);
  Scene.RegisterCompiledScript('Script107_set_protoText', {$ifdef FPC}@{$endif}Set_protoText);
  Scene.RegisterCompiledScript('Script107_newTranslation', {$ifdef FPC}@{$endif}NewTranslation);
end;

procedure TScript107Script.Set_protoScale(Value: TX3DField; const Time: TX3DTime);
begin
  FprotoScale := (Value as TSFFloat).Value; FDirty_protoScale := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_protoParameterName(Value: TX3DField; const Time: TX3DTime);
begin
  FprotoParameterName := (Value as TSFString).Value; FDirty_protoParameterName := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_protoScript(Value: TX3DField; const Time: TX3DTime);
begin
  FprotoScript := (Value as TSFNode).Value; FDirty_protoScript := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_protoValue(Value: TX3DField; const Time: TX3DTime);
begin
  FprotoValue := (Value as TSFFloat).Value; FDirty_protoValue := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_protoText(Value: TX3DField; const Time: TX3DTime);
begin
  FprotoText := (Value as TMFString).Value; FDirty_protoText := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.NewTranslation(Value: TX3DField; const Time: TX3DTime);
begin
  Set_protoValue(nil, Time);
  Set_protoText(nil, Time);
  FprotoScript[FprotoParameterName] := FprotoValue; FDirty_protoScript := True;
  FlushOutputs(Time);
end;

procedure InitslidersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'sliders.x3d';
X3D0.Meta['created'] := '8 August 2025';
X3D0.Meta['description'] := '*Bumpy flower with prototype sliders*';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['identifier'] := 'https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d';
X3D0.Meta['license'] := 'license.html';
X3D0.Meta['generator'] := 'Vim, VI Improved';
Group15 := TGroupNode.Create;
LayerSet16 := TLayerSetNode.Create;
LayerSet16.ActiveLayer := 1;
LayerSet16.SetOrder([1, 2, 3]);
Layer17 := TLayerNode.Create;
Layer17.Pickable := True;
Layer17.SetObjectType(['ALL']);
NavigationInfo18 := TNavigationInfoNode.Create;
NavigationInfo18.SetType(['EXAMINE']);
NavigationInfo18.SetAvatarSize([0.25, 1.75, 0.75]);
Layer17.FdChildren.Add(NavigationInfo18);
DirectionalLight19 := TDirectionalLightNode.Create;
DirectionalLight19.AmbientIntensity := 0.2;
DirectionalLight19.Direction := Vector3(0, -1, 0);
Layer17.FdChildren.Add(DirectionalLight19);
DirectionalLight20 := TDirectionalLightNode.Create;
DirectionalLight20.AmbientIntensity := 0.2;
DirectionalLight20.Direction := Vector3(-1, -0.1, -1);
Layer17.FdChildren.Add(DirectionalLight20);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'My Overview';
Viewpoint21.FieldOfView := 1.570796;
end;

procedure InitslidersPart1;
begin
Viewpoint21.Position := Vector3(0, 1.75, 60);
Layer17.FdChildren.Add(Viewpoint21);
Group22 := TGroupNode.Create;
{ Arrow X }
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(25, 0, 0);
Transform23.Rotation := Vector4(0, 0, -1, 1.57);
Shape24 := TShapeNode.Create;
Cylinder25 := TCylinderNode.Create;
Cylinder25.X3DName := 'Shaft';
Cylinder25.Radius := 0.35;
Cylinder25.Height := 50;
Shape24.Geometry := Cylinder25;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.X3DName := 'RED';
Material27.DiffuseColor := Vector3(1, 0, 0);
Material27.EmissiveColor := Vector3(1, 0, 0);
Appearance26.Material := Material27;
Shape24.Appearance := Appearance26;
Transform23.FdChildren.Add(Shape24);
Group22.FdChildren.Add(Transform23);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(50, 0, 0);
Transform28.Rotation := Vector4(0, 0, -1, 1.57);
Shape29 := TShapeNode.Create;
Cone30 := TConeNode.Create;
Cone30.X3DName := 'Tip';
Cone30.BottomRadius := 0.8;
Cone30.Height := 3;
Shape29.Geometry := Cone30;
Appearance31 := TAppearanceNode.Create;
Appearance31.Material := Material27;
Shape29.Appearance := Appearance31;
Transform28.FdChildren.Add(Shape29);
Group22.FdChildren.Add(Transform28);
{ Arrow Y }
Transform33 := TTransformNode.Create;
Transform33.Translation := Vector3(0, 25, 0);
Shape34 := TShapeNode.Create;
end;

procedure InitslidersPart2;
begin
Shape34.Geometry := Cylinder25;
Appearance36 := TAppearanceNode.Create;
Material37 := TMaterialNode.Create;
Material37.X3DName := 'GREEN';
Material37.DiffuseColor := Vector3(0, 1, 0);
Material37.EmissiveColor := Vector3(0, 1, 0);
Appearance36.Material := Material37;
Shape34.Appearance := Appearance36;
Transform33.FdChildren.Add(Shape34);
Group22.FdChildren.Add(Transform33);
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(0, 50, 0);
Shape39 := TShapeNode.Create;
Shape39.Geometry := Cone30;
Appearance41 := TAppearanceNode.Create;
Appearance41.Material := Material37;
Shape39.Appearance := Appearance41;
Transform38.FdChildren.Add(Shape39);
Group22.FdChildren.Add(Transform38);
{ Arrow Z }
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(0, 0, 25);
Transform43.Rotation := Vector4(1, 0, 0, 1.57);
Shape44 := TShapeNode.Create;
Shape44.Geometry := Cylinder25;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.X3DName := 'BLUE';
Material47.DiffuseColor := Vector3(0, 0, 1);
Material47.EmissiveColor := Vector3(0, 0, 1);
Appearance46.Material := Material47;
Shape44.Appearance := Appearance46;
Transform43.FdChildren.Add(Shape44);
Group22.FdChildren.Add(Transform43);
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(0, 0, 50);
Transform48.Rotation := Vector4(1, 0, 0, 1.57);
Shape49 := TShapeNode.Create;
Shape49.Geometry := Cone30;
Appearance51 := TAppearanceNode.Create;
end;

procedure InitslidersPart3;
begin
Appearance51.Material := Material47;
Shape49.Appearance := Appearance51;
Transform48.FdChildren.Add(Shape49);
Group22.FdChildren.Add(Transform48);
Layer17.FdChildren.Add(Group22);
{ the model that is being reviewed by the users of this scene }
Transform53 := TTransformNode.Create;
Transform53.X3DName := 'FlowerTransform';
Transform54 := TTransformNode.Create;
Shape55 := TShapeNode.Create;
IndexedFaceSet56 := TIndexedFaceSetNode.Create;
IndexedFaceSet56.Convex := False;
IndexedFaceSet56.X3DName := 'Orbit';
Coordinate57 := TCoordinateNode.Create;
Coordinate57.X3DName := 'OrbitCoordinates';
IndexedFaceSet56.Coord := Coordinate57;
Shape55.Geometry := IndexedFaceSet56;
Appearance58 := TAppearanceNode.Create;
Material59 := TMaterialNode.Create;
Material59.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material59.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance58.Material := Material59;
Shape55.Appearance := Appearance58;
Transform54.FdChildren.Add(Shape55);
Transform53.FdChildren.Add(Transform54);
Layer17.FdChildren.Add(Transform53);
Script60 := TScriptNode.Create;
Script60.X3DName := 'OrbitScript';
FieldVal61 := TMFVec3f.CreateUndefined(Script60, True, 'coordinates');
Script60.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TMFInt32.CreateUndefined(Script60, True, 'coordIndexes');
Script60.AddCustomFieldOrEvent(FieldVal62);
FieldVal63 := TSFFloat.Create(Script60, True, 'a', 5);
Script60.AddCustomFieldOrEvent(FieldVal63);
FieldVal64 := TSFFloat.Create(Script60, True, 'b', 5);
Script60.AddCustomFieldOrEvent(FieldVal64);
FieldVal65 := TSFFloat.Create(Script60, True, 'c', 5);
Script60.AddCustomFieldOrEvent(FieldVal65);
FieldVal66 := TSFFloat.Create(Script60, True, 'd', 5);
Script60.AddCustomFieldOrEvent(FieldVal66);
end;

procedure InitslidersPart4;
begin
FieldVal67 := TSFFloat.Create(Script60, True, 'pdelta', 0);
Script60.AddCustomFieldOrEvent(FieldVal67);
FieldVal68 := TSFFloat.Create(Script60, True, 'tdelta', 0);
Script60.AddCustomFieldOrEvent(FieldVal68);
FieldVal69 := TSFInt32.Create(Script60, True, 'resolution', 50);
Script60.AddCustomFieldOrEvent(FieldVal69);
FreeAndNil(CompiledScript60);
CompiledScript60 := TScript60Script.Create(FieldVal61, FieldVal62, FieldVal63, FieldVal64, FieldVal65, FieldVal66, FieldVal67, FieldVal68, FieldVal69);
Script60.SetUrl(['compiled:' + LineEnding +
  'initialize=Script60_initialize' + LineEnding +
  'set_a=Script60_set_a' + LineEnding +
  'set_b=Script60_set_b' + LineEnding +
  'set_c=Script60_set_c' + LineEnding +
  'set_d=Script60_set_d' + LineEnding +
  'set_pdelta=Script60_set_pdelta' + LineEnding +
  'set_tdelta=Script60_set_tdelta' + LineEnding +
  'resolution=Script60_resolution']);
Layer17.FdChildren.Add(Script60);
{ ROUTE OrbitScript.coordIndexes TO Orbit.set_coordIndex }
Layer17.AddRoute(FieldVal62.EventOut, IndexedFaceSet56.EventSet_coordIndex);
{ ROUTE OrbitScript.coordinates TO OrbitCoordinates.set_point }
Layer17.AddRoute(FieldVal61.EventOut, Coordinate57.EventSet_point);
LayerSet16.FdLayers.Add(Layer17);
LayoutLayer72 := TLayoutLayerNode.Create;
LayoutLayer72.Pickable := True;
LayoutLayer72.SetObjectType(['ALL']);
Layout73 := TLayoutNode.Create;
Layout73.SetAlign(['LEFT', 'BOTTOM']);
Layout73.SetOffset([-0.2, 0.19]);
Layout73.SetSize([0.4, 0.6]);
LayoutLayer72.Layout := Layout73;
Viewport74 := TViewportNode.Create;
Viewport74.SetClipBoundary([0, 1, 0, 1]);
LayoutLayer72.Viewport := Viewport74;
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(0, 0, -3);
Shape76 := TShapeNode.Create;
Appearance77 := TAppearanceNode.Create;
Material78 := TMaterialNode.Create;
Material78.DiffuseColor := Vector3(0, 0, 0);
Material78.Transparency := 0.7;
Appearance77.Material := Material78;
Shape76.Appearance := Appearance77;
Box79 := TBoxNode.Create;
Box79.Size := Vector3(100, 100, 0.02);
Shape76.Geometry := Box79;
Transform75.FdChildren.Add(Shape76);
LayoutLayer72.FdChildren.Add(Transform75);
end;

procedure InitslidersPart5;
begin
Transform80 := TTransformNode.Create;
Transform80.X3DName := 'equationTransform';
Transform81 := TTransformNode.Create;
Transform81.Translation := Vector3(0, 0, -20);
Shape82 := TShapeNode.Create;
Text83 := TTextNode.Create;
Text83.X3DName := 'equation';
Text83.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle84 := TFontStyleNode.Create;
FontStyle84.Size := 0.09;
Text83.FontStyle := FontStyle84;
Shape82.Geometry := Text83;
Appearance85 := TAppearanceNode.Create;
Material86 := TMaterialNode.Create;
Material86.DiffuseColor := Vector3(1, 1, 0);
Appearance85.Material := Material86;
Shape82.Appearance := Appearance85;
Transform81.FdChildren.Add(Shape82);
Transform80.FdChildren.Add(Transform81);
LayoutLayer72.FdChildren.Add(Transform80);
{ The slider parameters }
ProtoDeclare87 := CreateEmptyPrototype('SliderProto');
ProtoDeclare87.X3DName := 'SliderProto';
FieldVal89 := TSFVec3f.Create(nil, True, 'sliderTranslation', Vector3(0, 0, 0));
FieldDecl89 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl89.FieldOrEvent := FieldVal89;
FieldVal89.ParentInterfaceDeclaration := FieldDecl89;
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl89);
FieldVal90 := TMFString.Create(nil, True, 'textString', ['x=']);
FieldDecl90 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl90.FieldOrEvent := FieldVal90;
FieldVal90.ParentInterfaceDeclaration := FieldDecl90;
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl90);
FieldVal91 := TSFFloat.Create(nil, True, 'parameterScale', 15);
FieldDecl91 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl91.FieldOrEvent := FieldVal91;
FieldVal91.ParentInterfaceDeclaration := FieldDecl91;
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl91);
FieldVal92 := TSFString.Create(nil, True, 'parameterName', 'x');
FieldDecl92 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure InitslidersPart6;
begin
FieldDecl92.FieldOrEvent := FieldVal92;
FieldVal92.ParentInterfaceDeclaration := FieldDecl92;
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl92);
FieldVal93 := TSFNode.CreateUndefined(nil, True, 'orbScript');
FieldDecl93 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl93.FieldOrEvent := FieldVal93;
FieldVal93.ParentInterfaceDeclaration := FieldDecl93;
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl93);
Group95 := TGroupNode.Create;
Transform96 := TTransformNode.Create;
Transform96.X3DName := 'protoSlider';
Transform96.Translation := Vector3(0, 0.7, 0);
Transform96.FieldOrEvent('translation', True).IsClauseNamesAdd('sliderTranslation');
Transform97 := TTransformNode.Create;
Transform97.X3DName := 'protoTransform';
Transform97.Translation := Vector3(0, 0, 0.1);
PlaneSensor98 := TPlaneSensorNode.Create;
PlaneSensor98.X3DName := 'protoSensor';
PlaneSensor98.Description := 'Grab with mouse to adjust slider';
PlaneSensor98.MaxPosition := Vector2(1, 0);
Transform97.FdChildren.Add(PlaneSensor98);
Transform99 := TTransformNode.Create;
Transform99.Translation := Vector3(0, 0, 0);
TouchSensor100 := TTouchSensorNode.Create;
TouchSensor100.Description := 'Maybe start dragging this?';
TouchSensor100.X3DName := 'protoTS';
Transform99.FdChildren.Add(TouchSensor100);
Transform97.FdChildren.Add(Transform99);
Transform101 := TTransformNode.Create;
Shape102 := TShapeNode.Create;
Text103 := TTextNode.Create;
Text103.X3DName := 'protoText';
Text103.SetText(['a=']);
Text103.FieldOrEvent('string', True).IsClauseNamesAdd('textString');
FontStyle104 := TFontStyleNode.Create;
FontStyle104.Style := fsBold;
FontStyle104.Size := 0.23;
Text103.FontStyle := FontStyle104;
Shape102.Geometry := Text103;
Appearance105 := TAppearanceNode.Create;
end;

procedure InitslidersPart7;
begin
Material106 := TMaterialNode.Create;
Appearance105.Material := Material106;
Shape102.Appearance := Appearance105;
Transform101.FdChildren.Add(Shape102);
Transform97.FdChildren.Add(Transform101);
Transform96.FdChildren.Add(Transform97);
Group95.FdChildren.Add(Transform96);
Script107 := TScriptNode.Create;
Script107.X3DName := 'protoValueTransformerScript';
FieldVal108 := TSFFloat.CreateUndefined(Script107, True, 'protoScale');
Script107.AddCustomFieldOrEvent(FieldVal108);
FieldVal109 := TSFString.CreateUndefined(Script107, True, 'protoParameterName');
Script107.AddCustomFieldOrEvent(FieldVal109);
FieldVal110 := TSFVec3f.CreateEvent(Script107, 'newTranslation', True);
Script107.AddCustomFieldOrEvent(FieldVal110);
FieldVal111 := TSFNode.CreateUndefined(Script107, True, 'protoScript');
Script107.AddCustomFieldOrEvent(FieldVal111);
FieldVal112 := TSFFloat.Create(Script107, True, 'protoValue', 1);
Script107.AddCustomFieldOrEvent(FieldVal112);
FieldVal113 := TMFString.Create(Script107, True, 'protoText', ['1.0']);
Script107.AddCustomFieldOrEvent(FieldVal113);
Script107.FieldOrEvent('protoScale', True).IsClauseNamesAdd('parameterScale');
Script107.FieldOrEvent('protoParameterName', True).IsClauseNamesAdd('parameterName');
Script107.FieldOrEvent('protoScript', True).IsClauseNamesAdd('orbScript');
FreeAndNil(CompiledScript107);
CompiledScript107 := TScript107Script.Create(FieldVal108, FieldVal109, FieldVal111, FieldVal112, FieldVal113);
Script107.SetUrl(['compiled:' + LineEnding +
  'set_protoScale=Script107_set_protoScale' + LineEnding +
  'set_protoParameterName=Script107_set_protoParameterName' + LineEnding +
  'set_protoScript=Script107_set_protoScript' + LineEnding +
  'set_protoValue=Script107_set_protoValue' + LineEnding +
  'set_protoText=Script107_set_protoText' + LineEnding +
  'newTranslation=Script107_newTranslation']);
Group95.FdChildren.Add(Script107);
{ ROUTE protoSensor.translation_changed TO protoTransform.set_translation }
Group95.AddRoute(PlaneSensor98.EventTranslation_changed, Transform97.FdTranslation.EventIn);
{ ROUTE protoSensor.translation_changed TO protoValueTransformerScript.newTranslation }
Group95.AddRoute(PlaneSensor98.EventTranslation_changed, FieldVal110);
{ ROUTE protoValueTransformerScript.protoText TO protoText.string }
Group95.AddRoute(FieldVal113.EventOut, Text103.string);
ProtoDeclare87.Node.AddChildren([Group95]);
X3D0.AddPrototype(ProtoDeclare87);
ProtoInstance117 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance117.X3DName := 'aPI';
(ProtoInstance117.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.7, 0);
(ProtoInstance117.Field('textString') as TMFString).Send(['a=']);
end;

procedure InitslidersPart8;
begin
(ProtoInstance117.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance117.Field('parameterName') as TSFString).Value := 'a';
(ProtoInstance117.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance117.Instantiate);
ProtoInstance124 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance124.X3DName := 'bPI';
(ProtoInstance124.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.4, 0);
(ProtoInstance124.Field('textString') as TMFString).Send(['b=']);
(ProtoInstance124.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance124.Field('parameterName') as TSFString).Value := 'b';
(ProtoInstance124.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance124.Instantiate);
ProtoInstance131 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance131.X3DName := 'cPI';
(ProtoInstance131.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.1, 0);
(ProtoInstance131.Field('textString') as TMFString).Send(['c=']);
(ProtoInstance131.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance131.Field('parameterName') as TSFString).Value := 'c';
(ProtoInstance131.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance131.Instantiate);
ProtoInstance138 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance138.X3DName := 'dPI';
(ProtoInstance138.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.2, 0);
(ProtoInstance138.Field('textString') as TMFString).Send(['d=']);
(ProtoInstance138.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance138.Field('parameterName') as TSFString).Value := 'd';
(ProtoInstance138.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance138.Instantiate);
ProtoInstance145 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance145.X3DName := 'tdeltaPI';
(ProtoInstance145.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.5, 0);
(ProtoInstance145.Field('textString') as TMFString).Send(['tdelta=']);
(ProtoInstance145.Field('parameterScale') as TSFFloat).Value := 6.28;
(ProtoInstance145.Field('parameterName') as TSFString).Value := 'tdelta';
(ProtoInstance145.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance145.Instantiate);
ProtoInstance152 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance152.X3DName := 'pdeltaPI';
(ProtoInstance152.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.8, 0);
(ProtoInstance152.Field('textString') as TMFString).Send(['pdelta=']);
end;

procedure InitslidersPart9;
begin
(ProtoInstance152.Field('parameterScale') as TSFFloat).Value := 6.28;
(ProtoInstance152.Field('parameterName') as TSFString).Value := 'pdelta';
(ProtoInstance152.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance152.Instantiate);
LayerSet16.FdLayers.Add(LayoutLayer72);
Layer159 := TLayerNode.Create;
Layer159.Pickable := True;
Layer159.SetObjectType(['ALL']);
Viewpoint160 := TViewpointNode.Create;
Viewpoint160.Description := 'My Humanoids';
Viewpoint160.FieldOfView := 1.570796;
Viewpoint160.Position := Vector3(0, 1.75, 80);
Layer159.FdChildren.Add(Viewpoint160);
LayerSet16.FdLayers.Add(Layer159);
Group15.FdChildren.Add(LayerSet16);
X3D0.AddChildren([Group15]);
end;

function Createsliders: TX3DRootNode;
begin
  InitslidersPart0;
  InitslidersPart1;
  InitslidersPart2;
  InitslidersPart3;
  InitslidersPart4;
  InitslidersPart5;
  InitslidersPart6;
  InitslidersPart7;
  InitslidersPart8;
  InitslidersPart9;
  Result := X3D0;
end;

procedure RegisterslidersScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript60 <> nil then
    CompiledScript60.RegisterHandlers(Scene);
  if CompiledScript107 <> nil then
    CompiledScript107.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript60);
  FreeAndNil(CompiledScript107);
end.
