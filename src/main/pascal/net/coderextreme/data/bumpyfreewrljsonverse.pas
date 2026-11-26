unit bumpyfreewrljsonverse;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createbumpyfreewrljsonverse: TX3DRootNode;
procedure RegisterbumpyfreewrljsonverseScripts(const Scene: TCastleSceneCore);

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
  TScript97Script = class
  private
    Fcoordinates: array of TVector3;
    FField_coordinates: TMFVec3f;
    FDirty_coordinates: Boolean;
    FcoordIndexes: array of Int32;
    FEvent_coordIndexes: TX3DEvent;
    FBack_coordIndexes: TMFInt32;
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
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_coordinates: TMFVec3f; const AEvent_coordIndexes: TX3DEvent; const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_pdelta: TSFFloat; const AField_tdelta: TSFFloat);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript152Script = class
  private
    FprotoScale: Single;
    FField_protoScale: TSFFloat;
    FDirty_protoScale: Boolean;
    FprotoParameterName: String;
    FField_protoParameterName: TSFString;
    FDirty_protoParameterName: Boolean;
    Fshader: TX3DNode;
    FField_shader: TSFNode;
    FDirty_shader: Boolean;
    FprotoValue_changed: Single;
    FEvent_protoValue_changed: TX3DEvent;
    FBack_protoValue_changed: TSFFloat;
    FDirty_protoValue_changed: Boolean;
    FprotoText_changed: array of String;
    FEvent_protoText_changed: TX3DEvent;
    FBack_protoText_changed: TMFString;
    FDirty_protoText_changed: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_protoScale: TSFFloat; const AField_protoParameterName: TSFString; const AField_shader: TSFNode; const AEvent_protoValue_changed: TX3DEvent; const AEvent_protoText_changed: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
  end;

var
  X3D0: TX3DRootNode;
  Group30: TGroupNode;
  NavigationInfo31: TNavigationInfoNode;
  DirectionalLight32: TDirectionalLightNode;
  DirectionalLight33: TDirectionalLightNode;
  Viewpoint34: TViewpointNode;
  LayerSet35: TLayerSetNode;
  Layer36: TLayerNode;
  Group37: TGroupNode;
  Transform38: TTransformNode;
  Shape39: TShapeNode;
  Cylinder40: TCylinderNode;
  Appearance41: TAppearanceNode;
  Material42: TMaterialNode;
  Transform43: TTransformNode;
  Shape44: TShapeNode;
  Cone45: TConeNode;
  Appearance46: TAppearanceNode;
  Transform48: TTransformNode;
  Shape49: TShapeNode;
  Appearance51: TAppearanceNode;
  Material52: TMaterialNode;
  Transform53: TTransformNode;
  Shape54: TShapeNode;
  Appearance56: TAppearanceNode;
  Transform58: TTransformNode;
  Shape59: TShapeNode;
  Appearance61: TAppearanceNode;
  Material62: TMaterialNode;
  Transform63: TTransformNode;
  Shape64: TShapeNode;
  Appearance66: TAppearanceNode;
  Transform68: TTransformNode;
  Background69: TBackgroundNode;
  Transform70: TTransformNode;
  Shape71: TShapeNode;
  IndexedFaceSet72: TIndexedFaceSetNode;
  Coordinate73: TCoordinateNode;
  Appearance74: TAppearanceNode;
  Material75: TMaterialNode;
  ComposedCubeMapTexture76: TComposedCubeMapTextureNode;
  ImageTexture77: TImageTextureNode;
  ImageTexture78: TImageTextureNode;
  ImageTexture79: TImageTextureNode;
  ImageTexture80: TImageTextureNode;
  ImageTexture81: TImageTextureNode;
  ImageTexture82: TImageTextureNode;
  ComposedShader83: TComposedShaderNode;
  FieldVal84: TX3DEvent;
  FieldVal85: TX3DEvent;
  FieldVal86: TX3DEvent;
  FieldVal87: TX3DEvent;
  FieldVal88: TX3DEvent;
  FieldVal89: TSFFloat;
  FieldVal90: TSFFloat;
  FieldVal91: TSFFloat;
  FieldVal92: TSFFloat;
  FieldVal93: TSFFloat;
  FieldVal94: TSFFloat;
  ShaderPart95: TShaderPartNode;
  ShaderPart96: TShaderPartNode;
  Script97: TScriptNode;
  FieldVal98: TMFVec3f;
  FieldVal99: TX3DEvent;
  FieldVal100: TSFFloat;
  FieldVal101: TSFFloat;
  FieldVal102: TSFFloat;
  FieldVal103: TSFFloat;
  FieldVal104: TSFFloat;
  FieldVal105: TSFFloat;
  CompiledScript97: TScript97Script;
  DISEntityManager108: TDISEntityManagerNode;
  DISEntityTypeMapping109: TDISEntityTypeMappingNode;
  DISEntityTypeMapping110: TDISEntityTypeMappingNode;
  DISEntityTypeMapping111: TDISEntityTypeMappingNode;
  DISEntityTypeMapping112: TDISEntityTypeMappingNode;
  Collision113: TCollisionNode;
  Group114: TGroupNode;
  LayoutLayer117: TLayoutLayerNode;
  Transform118: TTransformNode;
  Shape119: TShapeNode;
  Appearance120: TAppearanceNode;
  Material121: TMaterialNode;
  Box122: TBoxNode;
  Transform123: TTransformNode;
  Transform124: TTransformNode;
  Shape125: TShapeNode;
  Text126: TTextNode;
  FontStyle127: TFontStyleNode;
  Appearance128: TAppearanceNode;
  Material129: TMaterialNode;
  ProtoDeclare130: TX3DPrototype;
  FieldDecl132: TX3DInterfaceDeclaration;
  FieldVal132: TSFVec3f;
  FieldDecl133: TX3DInterfaceDeclaration;
  FieldVal133: TSFVec3f;
  FieldDecl134: TX3DInterfaceDeclaration;
  FieldVal134: TSFVec3f;
  FieldDecl135: TX3DInterfaceDeclaration;
  FieldVal135: TMFString;
  FieldDecl136: TX3DInterfaceDeclaration;
  FieldVal136: TSFFloat;
  FieldDecl137: TX3DInterfaceDeclaration;
  FieldVal137: TSFString;
  FieldDecl138: TX3DInterfaceDeclaration;
  FieldVal138: TSFNode;
  Group140: TGroupNode;
  Transform141: TTransformNode;
  Transform142: TTransformNode;
  PlaneSensor143: TPlaneSensorNode;
  Transform144: TTransformNode;
  TouchSensor145: TTouchSensorNode;
  Transform146: TTransformNode;
  Shape147: TShapeNode;
  Text148: TTextNode;
  FontStyle149: TFontStyleNode;
  Appearance150: TAppearanceNode;
  Material151: TMaterialNode;
  Script152: TScriptNode;
  FieldVal153: TSFFloat;
  FieldVal154: TSFString;
  FieldVal155: TSFNode;
  FieldVal156: TX3DEvent;
  FieldVal157: TX3DEvent;
  FieldVal158: TX3DEvent;
  CompiledScript152: TScript152Script;
  ProtoInstance162: TX3DPrototypeNode;
  ProtoInstance171: TX3DPrototypeNode;
  ProtoInstance180: TX3DPrototypeNode;
  ProtoInstance189: TX3DPrototypeNode;
  ProtoInstance198: TX3DPrototypeNode;
  ProtoInstance207: TX3DPrototypeNode;
  Layout216: TLayoutNode;
  Viewport217: TViewportNode;

constructor TScript97Script.Create(const AField_coordinates: TMFVec3f; const AEvent_coordIndexes: TX3DEvent; const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_pdelta: TSFFloat; const AField_tdelta: TSFFloat);
begin
  inherited Create;
  Fcoordinates := 0;
  FField_coordinates := nil;
  FDirty_coordinates := False;
  FcoordIndexes := 0;
  FEvent_coordIndexes := nil;
  FBack_coordIndexes := TMFInt32.Create(nil, False, 'coordIndexes', 0);
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
  FField_coordinates := AField_coordinates;
  if AField_coordinates <> nil then Fcoordinates := AField_coordinates.Value;
  FEvent_coordIndexes := AEvent_coordIndexes;
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
end;

destructor TScript97Script.Destroy;
begin
  FreeAndNil(FBack_coordIndexes);
  inherited Destroy;
end;

procedure TScript97Script.FlushOutputs(const Time: TX3DTime);
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
    if FEvent_coordIndexes <> nil then
    begin
      FBack_coordIndexes.Value := FcoordIndexes;
      FEvent_coordIndexes.Send(FBack_coordIndexes, Time);
    end;
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
end;

procedure TScript97Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script97_initialize', {$ifdef FPC}@{$endif}Initialize);
end;

procedure TScript97Script.Initialize(Value: TX3DField; const Time: TX3DTime);
var
  resolution: Integer;
  theta: Single;
  phi: Single;
  delta: Single;
  crds: array of TVector3;
  vecCount: Integer;
  rho: Single;
  cis: array of Int32;
  intCount: Integer;
begin
  resolution := 100;
  theta := 0.0;
  phi := 0.0;
  delta := 2 * 3.141592653 / resolution - 1;
  crds := [];
  vecCount := 0;
  for i := 0 to (resolution) - 1 do
  begin
    for j := 0 to (resolution) - 1 do
    begin
      rho := Fa + Fb * Cos(Fc * theta + Ftdelta) * Cos(Fd * phi + Fpdelta);
      crds[vecCount] := Vector3(rho * Cos(phi) * Cos(theta), rho * Cos(phi) * Sin(theta), rho * Sin(phi));
      vecCount := vecCount + 1;
      theta := theta + (delta);
    end;
    phi := phi + (delta);
  end;
  Fcoordinates := crds; FDirty_coordinates := True;
  cis := [];
  intCount := 0;
  for i := 0 to (resolution - 1) - 1 do
  begin
    for j := 0 to (resolution - 1) - 1 do
    begin
      cis[intCount := intCount + 1] := i * resolution + j;
      cis[intCount := intCount + 1] := i * resolution + j + 1;
      cis[intCount := intCount + 1] := i + 1 * resolution + j + 1;
      cis[intCount := intCount + 1] := i + 1 * resolution + j;
      cis[intCount := intCount + 1] := -1;
    end;
  end;
  FcoordIndexes := cis; FDirty_coordIndexes := True;
  FlushOutputs(Time);
end;

constructor TScript152Script.Create(const AField_protoScale: TSFFloat; const AField_protoParameterName: TSFString; const AField_shader: TSFNode; const AEvent_protoValue_changed: TX3DEvent; const AEvent_protoText_changed: TX3DEvent);
begin
  inherited Create;
  FprotoScale := 0.0;
  FField_protoScale := nil;
  FDirty_protoScale := False;
  FprotoParameterName := '';
  FField_protoParameterName := nil;
  FDirty_protoParameterName := False;
  Fshader := nil;
  FField_shader := nil;
  FDirty_shader := False;
  FprotoValue_changed := 0.0;
  FEvent_protoValue_changed := nil;
  FBack_protoValue_changed := TSFFloat.Create(nil, False, 'protoValue_changed', 0.0);
  FDirty_protoValue_changed := False;
  FprotoText_changed := 0;
  FEvent_protoText_changed := nil;
  FBack_protoText_changed := TMFString.Create(nil, False, 'protoText_changed', 0);
  FDirty_protoText_changed := False;
  FField_protoScale := AField_protoScale;
  if AField_protoScale <> nil then FprotoScale := AField_protoScale.Value;
  FField_protoParameterName := AField_protoParameterName;
  if AField_protoParameterName <> nil then FprotoParameterName := AField_protoParameterName.Value;
  FField_shader := AField_shader;
  if AField_shader <> nil then Fshader := AField_shader.Value;
  FEvent_protoValue_changed := AEvent_protoValue_changed;
  FEvent_protoText_changed := AEvent_protoText_changed;
end;

destructor TScript152Script.Destroy;
begin
  FreeAndNil(FBack_protoValue_changed);
  FreeAndNil(FBack_protoText_changed);
  inherited Destroy;
end;

procedure TScript152Script.FlushOutputs(const Time: TX3DTime);
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
  if FDirty_shader then
  begin
    FDirty_shader := False;
    if FField_shader <> nil then
      FField_shader.Send(Fshader, Time);
  end;
  if FDirty_protoValue_changed then
  begin
    FDirty_protoValue_changed := False;
    if FEvent_protoValue_changed <> nil then
    begin
      FBack_protoValue_changed.Value := FprotoValue_changed;
      FEvent_protoValue_changed.Send(FBack_protoValue_changed, Time);
    end;
  end;
  if FDirty_protoText_changed then
  begin
    FDirty_protoText_changed := False;
    if FEvent_protoText_changed <> nil then
    begin
      FBack_protoText_changed.Value := FprotoText_changed;
      FEvent_protoText_changed.Send(FBack_protoText_changed, Time);
    end;
  end;
end;

procedure TScript152Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
end;

procedure InitbumpyfreewrljsonversePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
{ Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces https://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Components['DIS'] := 2;
X3D0.Meta['title'] := 'bumpyfreewrljsonverse.x3d';
X3D0.Meta['description'] := '*enter description here, short-sentence summaries preferred*';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['translator'] := '*if manually translating VRML-to-X3D, enter name of person translating here*';
X3D0.Meta['created'] := '*enter date of initial version here*';
X3D0.Meta['translated'] := '*enter date of translation here*';
X3D0.Meta['modified'] := '*enter date of latest revision here*';
X3D0.Meta['version'] := '*enter version here, if any*';
X3D0.Meta['reference'] := '*enter reference citation or relative/online url here*';
X3D0.Meta['reference'] := '*enter additional url/bibliographic reference information here*';
X3D0.Meta['requires'] := '*enter reference resource here if required to support function, delivery, or coherence of content*';
X3D0.Meta['drawing'] := '*enter drawing filename/url here*';
X3D0.Meta['MovingImage'] := '*enter movie filename/url here*';
X3D0.Meta['photo'] := '*enter photo filename/url here*';
X3D0.Meta['subject'] := '*enter subject keywords here*';
X3D0.Meta['accessRights'] := '*enter permission statements or url here*';
X3D0.Meta['identifier'] := '*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*';
X3D0.Meta['generator'] := 'PSPad, http://www.pspad.com/';
X3D0.Meta['license'] := 'license.html';
{ "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution, }
{ It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) }
{ open for their "discussion about the teapot" }
Group30 := TGroupNode.Create;
{ basic nodes, which might be present in any scene }
NavigationInfo31 := TNavigationInfoNode.Create;
end;

procedure InitbumpyfreewrljsonversePart1;
begin
NavigationInfo31.SetType(['EXAMINE']);
NavigationInfo31.SetAvatarSize([0.25, 1.75, 0.75]);
Group30.FdChildren.Add(NavigationInfo31);
DirectionalLight32 := TDirectionalLightNode.Create;
DirectionalLight32.AmbientIntensity := 0.2;
DirectionalLight32.Direction := Vector3(0, -1, 0);
Group30.FdChildren.Add(DirectionalLight32);
DirectionalLight33 := TDirectionalLightNode.Create;
DirectionalLight33.AmbientIntensity := 0.2;
DirectionalLight33.Direction := Vector3(-1, -0.1, -1);
Group30.FdChildren.Add(DirectionalLight33);
Viewpoint34 := TViewpointNode.Create;
Viewpoint34.Description := 'My Overview';
Viewpoint34.FieldOfView := 1.570796;
Viewpoint34.Position := Vector3(0, 1.75, 60);
Group30.FdChildren.Add(Viewpoint34);
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet35 := TLayerSetNode.Create;
LayerSet35.ActiveLayer := 1;
LayerSet35.SetOrder([1, 2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display }
{ like a HUD (heads up display) }
Layer36 := TLayerNode.Create;
Layer36.Pickable := True;
Layer36.SetObjectType(['ALL']);
{ this group contains the red/green/blue 3D crosshair }
Group37 := TGroupNode.Create;
{ Arrow X }
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(25, 0, 0);
Transform38.Rotation := Vector4(0, 0, -1, 1.57);
Shape39 := TShapeNode.Create;
Cylinder40 := TCylinderNode.Create;
Cylinder40.X3DName := 'Shaft';
Cylinder40.Radius := 0.35;
Cylinder40.Height := 50;
Shape39.Geometry := Cylinder40;
Appearance41 := TAppearanceNode.Create;
Material42 := TMaterialNode.Create;
end;

procedure InitbumpyfreewrljsonversePart2;
begin
Material42.X3DName := 'RED';
Material42.DiffuseColor := Vector3(1, 0, 0);
Material42.EmissiveColor := Vector3(1, 0, 0);
Appearance41.Material := Material42;
Shape39.Appearance := Appearance41;
Transform38.FdChildren.Add(Shape39);
Group37.FdChildren.Add(Transform38);
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(50, 0, 0);
Transform43.Rotation := Vector4(0, 0, -1, 1.57);
Shape44 := TShapeNode.Create;
Cone45 := TConeNode.Create;
Cone45.X3DName := 'Tip';
Cone45.BottomRadius := 0.8;
Cone45.Height := 3;
Shape44.Geometry := Cone45;
Appearance46 := TAppearanceNode.Create;
Appearance46.Material := Material42;
Shape44.Appearance := Appearance46;
Transform43.FdChildren.Add(Shape44);
Group37.FdChildren.Add(Transform43);
{ Arrow Y }
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(0, 25, 0);
Shape49 := TShapeNode.Create;
Shape49.Geometry := Cylinder40;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.X3DName := 'GREEN';
Material52.DiffuseColor := Vector3(0, 1, 0);
Material52.EmissiveColor := Vector3(0, 1, 0);
Appearance51.Material := Material52;
Shape49.Appearance := Appearance51;
Transform48.FdChildren.Add(Shape49);
Group37.FdChildren.Add(Transform48);
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(0, 50, 0);
Shape54 := TShapeNode.Create;
Shape54.Geometry := Cone45;
Appearance56 := TAppearanceNode.Create;
end;

procedure InitbumpyfreewrljsonversePart3;
begin
Appearance56.Material := Material52;
Shape54.Appearance := Appearance56;
Transform53.FdChildren.Add(Shape54);
Group37.FdChildren.Add(Transform53);
{ Arrow Z }
Transform58 := TTransformNode.Create;
Transform58.Translation := Vector3(0, 0, 25);
Transform58.Rotation := Vector4(1, 0, 0, 1.57);
Shape59 := TShapeNode.Create;
Shape59.Geometry := Cylinder40;
Appearance61 := TAppearanceNode.Create;
Material62 := TMaterialNode.Create;
Material62.X3DName := 'BLUE';
Material62.DiffuseColor := Vector3(0, 0, 1);
Material62.EmissiveColor := Vector3(0, 0, 1);
Appearance61.Material := Material62;
Shape59.Appearance := Appearance61;
Transform58.FdChildren.Add(Shape59);
Group37.FdChildren.Add(Transform58);
Transform63 := TTransformNode.Create;
Transform63.Translation := Vector3(0, 0, 50);
Transform63.Rotation := Vector4(1, 0, 0, 1.57);
Shape64 := TShapeNode.Create;
Shape64.Geometry := Cone45;
Appearance66 := TAppearanceNode.Create;
Appearance66.Material := Material62;
Shape64.Appearance := Appearance66;
Transform63.FdChildren.Add(Shape64);
Group37.FdChildren.Add(Transform63);
Layer36.FdChildren.Add(Group37);
{ the model that is being reviewed by the users of this scene }
Transform68 := TTransformNode.Create;
Transform68.X3DName := 'FlowerTransform';
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background69 := TBackgroundNode.Create;
Background69.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background69.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background69.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background69.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
end;

procedure InitbumpyfreewrljsonversePart4;
begin
Background69.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background69.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Transform68.FdChildren.Add(Background69);
Transform70 := TTransformNode.Create;
Shape71 := TShapeNode.Create;
{ <Sphere radius='40'></Sphere> }
IndexedFaceSet72 := TIndexedFaceSetNode.Create;
IndexedFaceSet72.Convex := False;
IndexedFaceSet72.X3DName := 'Orbit';
Coordinate73 := TCoordinateNode.Create;
Coordinate73.X3DName := 'OrbitCoordinates';
IndexedFaceSet72.Coord := Coordinate73;
Shape71.Geometry := IndexedFaceSet72;
Appearance74 := TAppearanceNode.Create;
Material75 := TMaterialNode.Create;
Material75.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material75.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance74.Material := Material75;
ComposedCubeMapTexture76 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture76.X3DName := 'texture';
ImageTexture77 := TImageTextureNode.Create;
ImageTexture77.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture76.BackTexture := ImageTexture77;
ImageTexture78 := TImageTextureNode.Create;
ImageTexture78.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture76.BottomTexture := ImageTexture78;
ImageTexture79 := TImageTextureNode.Create;
ImageTexture79.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture76.FrontTexture := ImageTexture79;
ImageTexture80 := TImageTextureNode.Create;
ImageTexture80.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture76.LeftTexture := ImageTexture80;
ImageTexture81 := TImageTextureNode.Create;
ImageTexture81.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture76.RightTexture := ImageTexture81;
ImageTexture82 := TImageTextureNode.Create;
ImageTexture82.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture76.TopTexture := ImageTexture82;
Appearance74.Texture := ComposedCubeMapTexture76;
ComposedShader83 := TComposedShaderNode.Create;
end;

procedure InitbumpyfreewrljsonversePart5;
begin
ComposedShader83.X3DName := 'freewrlShader';
ComposedShader83.Language := slGLSL;
FieldVal84 := TSFVec3f.CreateEvent(ComposedShader83, 'chromaticDispertion', True);
ComposedShader83.AddCustomFieldOrEvent(FieldVal84);
FieldVal85 := TSFInt32.CreateEvent(ComposedShader83, 'fw_textureCoordGenType', True);
ComposedShader83.AddCustomFieldOrEvent(FieldVal85);
FieldVal86 := TSFFloat.CreateEvent(ComposedShader83, 'bias', True);
ComposedShader83.AddCustomFieldOrEvent(FieldVal86);
FieldVal87 := TSFFloat.CreateEvent(ComposedShader83, 'scale', True);
ComposedShader83.AddCustomFieldOrEvent(FieldVal87);
FieldVal88 := TSFFloat.CreateEvent(ComposedShader83, 'power', True);
ComposedShader83.AddCustomFieldOrEvent(FieldVal88);
FieldVal89 := TSFFloat.Create(ComposedShader83, True, 'a', 15);
ComposedShader83.AddCustomFieldOrEvent(FieldVal89);
FieldVal90 := TSFFloat.Create(ComposedShader83, True, 'b', 5);
ComposedShader83.AddCustomFieldOrEvent(FieldVal90);
FieldVal91 := TSFFloat.Create(ComposedShader83, True, 'c', 5);
ComposedShader83.AddCustomFieldOrEvent(FieldVal91);
FieldVal92 := TSFFloat.Create(ComposedShader83, True, 'd', 5);
ComposedShader83.AddCustomFieldOrEvent(FieldVal92);
FieldVal93 := TSFFloat.Create(ComposedShader83, True, 'tdelta', 0);
ComposedShader83.AddCustomFieldOrEvent(FieldVal93);
FieldVal94 := TSFFloat.Create(ComposedShader83, True, 'pdelta', 0);
ComposedShader83.AddCustomFieldOrEvent(FieldVal94);
ShaderPart95 := TShaderPartNode.Create;
ShaderPart95.SetUrl(['../shaders/freewrl_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
ShaderPart95.ShaderType := stVertex;
ComposedShader83.FdParts.Add(ShaderPart95);
ShaderPart96 := TShaderPartNode.Create;
ShaderPart96.SetUrl(['../shaders/freewrl.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs']);
ShaderPart96.ShaderType := stFragment;
ComposedShader83.FdParts.Add(ShaderPart96);
{ TO CONVERT TO A SPHERE }
{ <ShaderPart url='"../shaders/freewrl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/freewrl_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
Appearance74.FdShaders.Add(ComposedShader83);
Shape71.Appearance := Appearance74;
Transform70.FdChildren.Add(Shape71);
Transform68.FdChildren.Add(Transform70);
Layer36.FdChildren.Add(Transform68);
end;

procedure InitbumpyfreewrljsonversePart6;
begin
Script97 := TScriptNode.Create;
Script97.X3DName := 'OrbitScript';
FieldVal98 := TMFVec3f.CreateUndefined(Script97, True, 'coordinates');
Script97.AddCustomFieldOrEvent(FieldVal98);
FieldVal99 := TMFInt32.CreateEvent(Script97, 'coordIndexes', False);
Script97.AddCustomFieldOrEvent(FieldVal99);
FieldVal100 := TSFFloat.Create(Script97, True, 'a', 10);
Script97.AddCustomFieldOrEvent(FieldVal100);
FieldVal101 := TSFFloat.Create(Script97, True, 'b', 10);
Script97.AddCustomFieldOrEvent(FieldVal101);
FieldVal102 := TSFFloat.Create(Script97, True, 'c', 2);
Script97.AddCustomFieldOrEvent(FieldVal102);
FieldVal103 := TSFFloat.Create(Script97, True, 'd', 2);
Script97.AddCustomFieldOrEvent(FieldVal103);
FieldVal104 := TSFFloat.Create(Script97, True, 'pdelta', 0);
Script97.AddCustomFieldOrEvent(FieldVal104);
FieldVal105 := TSFFloat.Create(Script97, True, 'tdelta', 0);
Script97.AddCustomFieldOrEvent(FieldVal105);
FreeAndNil(CompiledScript97);
CompiledScript97 := TScript97Script.Create(FieldVal98, FieldVal99, FieldVal100, FieldVal101, FieldVal102, FieldVal103, FieldVal104, FieldVal105);
Script97.SetUrl(['compiled:' + LineEnding +
  'initialize=Script97_initialize']);
Layer36.FdChildren.Add(Script97);
{ ROUTE OrbitScript.coordIndexes TO Orbit.set_coordIndex }
Layer36.AddRoute(FieldVal99, IndexedFaceSet72.EventSet_coordIndex);
{ ROUTE OrbitScript.coordinates TO OrbitCoordinates.set_point }
Layer36.AddRoute(FieldVal98.EventOut, Coordinate73.EventSet_point);
{ DIS multiuser facilities }
DISEntityManager108 := TDISEntityManagerNode.Create;
DISEntityManager108.X3DName := 'EntityManager';
DISEntityTypeMapping109 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping109.Category := 77;
DISEntityTypeMapping109.Specific := 1;
DISEntityTypeMapping109.SetUrl(['../data/Gramps8Final.x3d', 'https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
DISEntityManager108.FdChildren.Add(DISEntityTypeMapping109);
DISEntityTypeMapping110 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping110.Category := 77;
DISEntityTypeMapping110.Specific := 2;
DISEntityTypeMapping110.SetUrl(['../data/Leif8Final.x3d', 'https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
DISEntityManager108.FdChildren.Add(DISEntityTypeMapping110);
DISEntityTypeMapping111 := TDISEntityTypeMappingNode.Create;
end;

procedure InitbumpyfreewrljsonversePart7;
begin
DISEntityTypeMapping111.Category := 77;
DISEntityTypeMapping111.Specific := 3;
DISEntityTypeMapping111.SetUrl(['../data/Lily8Final.x3d', 'https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
DISEntityManager108.FdChildren.Add(DISEntityTypeMapping111);
DISEntityTypeMapping112 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping112.Category := 77;
DISEntityTypeMapping112.Specific := 4;
DISEntityTypeMapping112.SetUrl(['../data/Tufani8Final.x3d', 'https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
DISEntityManager108.FdChildren.Add(DISEntityTypeMapping112);
Layer36.FdChildren.Add(DISEntityManager108);
Collision113 := TCollisionNode.Create;
Collision113.Enabled := False;
Group114 := TGroupNode.Create;
Group114.X3DName := 'AvatarHolder';
Collision113.Proxy := Group114;
Layer36.FdChildren.Add(Collision113);
{ ROUTE EntityManager.addedEntities TO AvatarHolder.addChildren }
Layer36.AddRoute(DISEntityManager108.EventAddedEntities, Group114.addChildren);
{ ROUTE EntityManager.removedEntities TO AvatarHolder.removeChildren }
Layer36.AddRoute(DISEntityManager108.EventRemovedEntities, Group114.removeChildren);
LayerSet35.FdLayers.Add(Layer36);
LayoutLayer117 := TLayoutLayerNode.Create;
LayoutLayer117.Pickable := True;
LayoutLayer117.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform118 := TTransformNode.Create;
Transform118.Translation := Vector3(0, 0, -3);
Shape119 := TShapeNode.Create;
Appearance120 := TAppearanceNode.Create;
Material121 := TMaterialNode.Create;
Material121.DiffuseColor := Vector3(0, 0, 0);
Material121.Transparency := 0.7;
Appearance120.Material := Material121;
Shape119.Appearance := Appearance120;
Box122 := TBoxNode.Create;
Box122.Size := Vector3(100, 100, 0.02);
Shape119.Geometry := Box122;
end;

procedure InitbumpyfreewrljsonversePart8;
begin
Transform118.FdChildren.Add(Shape119);
LayoutLayer117.FdChildren.Add(Transform118);
Transform123 := TTransformNode.Create;
Transform123.X3DName := 'equationTransform';
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(0, 0, -20);
Shape125 := TShapeNode.Create;
Text126 := TTextNode.Create;
Text126.X3DName := 'equation';
Text126.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle127 := TFontStyleNode.Create;
FontStyle127.Size := 0.09;
Text126.FontStyle := FontStyle127;
Shape125.Geometry := Text126;
Appearance128 := TAppearanceNode.Create;
Material129 := TMaterialNode.Create;
Material129.DiffuseColor := Vector3(1, 1, 0);
Appearance128.Material := Material129;
Shape125.Appearance := Appearance128;
Transform124.FdChildren.Add(Shape125);
Transform123.FdChildren.Add(Transform124);
LayoutLayer117.FdChildren.Add(Transform123);
ProtoDeclare130 := CreateEmptyPrototype('SliderProto');
ProtoDeclare130.X3DName := 'SliderProto';
FieldVal132 := TSFVec3f.Create(nil, True, 'sliderTranslation', Vector3(0, 0.7, 0));
FieldDecl132 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl132.FieldOrEvent := FieldVal132;
FieldVal132.ParentInterfaceDeclaration := FieldDecl132;
ProtoDeclare130.InterfaceDeclarations.Add(FieldDecl132);
FieldVal133 := TSFVec3f.Create(nil, True, 'transformTranslation', Vector3(0, 0, 0.1));
FieldDecl133 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl133.FieldOrEvent := FieldVal133;
FieldVal133.ParentInterfaceDeclaration := FieldDecl133;
ProtoDeclare130.InterfaceDeclarations.Add(FieldDecl133);
FieldVal134 := TSFVec3f.Create(nil, True, 'sensorTranslation', Vector3(0, 0, 0));
FieldDecl134 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl134.FieldOrEvent := FieldVal134;
FieldVal134.ParentInterfaceDeclaration := FieldDecl134;
ProtoDeclare130.InterfaceDeclarations.Add(FieldDecl134);
FieldVal135 := TMFString.Create(nil, True, 'textString', ['a=']);
end;

procedure InitbumpyfreewrljsonversePart9;
begin
FieldDecl135 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl135.FieldOrEvent := FieldVal135;
FieldVal135.ParentInterfaceDeclaration := FieldDecl135;
ProtoDeclare130.InterfaceDeclarations.Add(FieldDecl135);
FieldVal136 := TSFFloat.Create(nil, True, 'parameterScale', 30);
FieldDecl136 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl136.FieldOrEvent := FieldVal136;
FieldVal136.ParentInterfaceDeclaration := FieldDecl136;
ProtoDeclare130.InterfaceDeclarations.Add(FieldDecl136);
FieldVal137 := TSFString.Create(nil, True, 'parameterName', 'a');
FieldDecl137 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl137.FieldOrEvent := FieldVal137;
FieldVal137.ParentInterfaceDeclaration := FieldDecl137;
ProtoDeclare130.InterfaceDeclarations.Add(FieldDecl137);
FieldVal138 := TSFNode.CreateUndefined(nil, True, 'shaderNode');
FieldDecl138 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl138.FieldOrEvent := FieldVal138;
FieldVal138.ParentInterfaceDeclaration := FieldDecl138;
ProtoDeclare130.InterfaceDeclarations.Add(FieldDecl138);
Group140 := TGroupNode.Create;
Transform141 := TTransformNode.Create;
Transform141.X3DName := 'protoSlider';
Transform141.Translation := Vector3(0, 0.7, 0);
Transform141.FieldOrEvent('translation', True).IsClauseNamesAdd('sliderTranslation');
Transform142 := TTransformNode.Create;
Transform142.X3DName := 'protoTransform';
Transform142.Translation := Vector3(0, 0, 0.1);
Transform142.FieldOrEvent('translation', True).IsClauseNamesAdd('sensorTranslation');
PlaneSensor143 := TPlaneSensorNode.Create;
PlaneSensor143.X3DName := 'protoSensor';
PlaneSensor143.MaxPosition := Vector2(1, 0);
Transform142.FdChildren.Add(PlaneSensor143);
Transform144 := TTransformNode.Create;
Transform144.Translation := Vector3(0, 0, 0);
TouchSensor145 := TTouchSensorNode.Create;
TouchSensor145.X3DName := 'protoTS';
Transform144.FdChildren.Add(TouchSensor145);
Transform142.FdChildren.Add(Transform144);
Transform146 := TTransformNode.Create;
Shape147 := TShapeNode.Create;
end;

procedure InitbumpyfreewrljsonversePart10;
begin
Text148 := TTextNode.Create;
Text148.X3DName := 'protoText';
Text148.SetText(['a=']);
Text148.FieldOrEvent('string', True).IsClauseNamesAdd('textString');
FontStyle149 := TFontStyleNode.Create;
FontStyle149.Size := 0.23;
Text148.FontStyle := FontStyle149;
Shape147.Geometry := Text148;
Appearance150 := TAppearanceNode.Create;
Material151 := TMaterialNode.Create;
Appearance150.Material := Material151;
Shape147.Appearance := Appearance150;
Transform146.FdChildren.Add(Shape147);
Transform142.FdChildren.Add(Transform146);
Transform141.FdChildren.Add(Transform142);
Group140.FdChildren.Add(Transform141);
Script152 := TScriptNode.Create;
Script152.X3DName := 'protoValueTransformerScript';
Script152.DirectOutput := True;
Script152.MustEvaluate := True;
FieldVal153 := TSFFloat.Create(Script152, True, 'protoScale', 30);
Script152.AddCustomFieldOrEvent(FieldVal153);
FieldVal154 := TSFString.Create(Script152, True, 'protoParameterName', 'a');
Script152.AddCustomFieldOrEvent(FieldVal154);
FieldVal155 := TSFNode.CreateUndefined(Script152, True, 'shader');
Script152.AddCustomFieldOrEvent(FieldVal155);
FieldVal156 := TSFVec3f.CreateEvent(Script152, 'newTranslation', True);
Script152.AddCustomFieldOrEvent(FieldVal156);
FieldVal157 := TSFFloat.CreateEvent(Script152, 'protoValue_changed', False);
Script152.AddCustomFieldOrEvent(FieldVal157);
FieldVal158 := TMFString.CreateEvent(Script152, 'protoText_changed', False);
Script152.AddCustomFieldOrEvent(FieldVal158);
Script152.FieldOrEvent('protoScale', True).IsClauseNamesAdd('parameterScale');
Script152.FieldOrEvent('protoParameterName', True).IsClauseNamesAdd('parameterName');
Script152.FieldOrEvent('shader', True).IsClauseNamesAdd('shaderNode');
FreeAndNil(CompiledScript152);
CompiledScript152 := TScript152Script.Create(FieldVal153, FieldVal154, FieldVal155, FieldVal157, FieldVal158);
Script152.SetUrl(['compiled:' + LineEnding +
  '']);
Group140.FdChildren.Add(Script152);
{ ROUTE protoSensor.translation_changed TO protoTransform.set_translation }
end;

procedure InitbumpyfreewrljsonversePart11;
begin
Group140.AddRoute(PlaneSensor143.EventTranslation_changed, Transform142.FdTranslation.EventIn);
{ ROUTE protoSensor.translation_changed TO protoValueTransformerScript.newTranslation }
Group140.AddRoute(PlaneSensor143.EventTranslation_changed, FieldVal156);
{ ROUTE protoValueTransformerScript.protoText_changed TO protoText.string }
Group140.AddRoute(FieldVal158, Text148.string);
ProtoDeclare130.Node.AddChildren([Group140]);
X3D0.AddPrototype(ProtoDeclare130);
ProtoInstance162 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare130);
ProtoInstance162.X3DName := 'aPI';
(ProtoInstance162.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.7, 0);
(ProtoInstance162.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance162.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance162.Field('textString') as TMFString).Send(['a=']);
(ProtoInstance162.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance162.Field('parameterName') as TSFString).Value := 'a';
(ProtoInstance162.Field('shaderNode') as TSFNode).Value := ComposedShader83;
LayoutLayer117.FdChildren.Add(ProtoInstance162.Instantiate);
ProtoInstance171 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare130);
ProtoInstance171.X3DName := 'bPI';
(ProtoInstance171.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.4, 0);
(ProtoInstance171.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance171.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance171.Field('textString') as TMFString).Send(['b=']);
(ProtoInstance171.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance171.Field('parameterName') as TSFString).Value := 'b';
(ProtoInstance171.Field('shaderNode') as TSFNode).Value := ComposedShader83;
LayoutLayer117.FdChildren.Add(ProtoInstance171.Instantiate);
ProtoInstance180 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare130);
ProtoInstance180.X3DName := 'cPI';
(ProtoInstance180.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.1, 0);
(ProtoInstance180.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance180.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance180.Field('textString') as TMFString).Send(['c=']);
(ProtoInstance180.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance180.Field('parameterName') as TSFString).Value := 'c';
(ProtoInstance180.Field('shaderNode') as TSFNode).Value := ComposedShader83;
LayoutLayer117.FdChildren.Add(ProtoInstance180.Instantiate);
ProtoInstance189 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare130);
ProtoInstance189.X3DName := 'dPI';
(ProtoInstance189.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.2, 0);
end;

procedure InitbumpyfreewrljsonversePart12;
begin
(ProtoInstance189.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance189.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance189.Field('textString') as TMFString).Send(['d=']);
(ProtoInstance189.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance189.Field('parameterName') as TSFString).Value := 'd';
(ProtoInstance189.Field('shaderNode') as TSFNode).Value := ComposedShader83;
LayoutLayer117.FdChildren.Add(ProtoInstance189.Instantiate);
ProtoInstance198 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare130);
ProtoInstance198.X3DName := 'tdeltaPI';
(ProtoInstance198.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.5, 0);
(ProtoInstance198.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance198.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance198.Field('textString') as TMFString).Send(['tdelta=']);
(ProtoInstance198.Field('parameterScale') as TSFFloat).Value := 6.28;
(ProtoInstance198.Field('parameterName') as TSFString).Value := 'tdelta';
(ProtoInstance198.Field('shaderNode') as TSFNode).Value := ComposedShader83;
LayoutLayer117.FdChildren.Add(ProtoInstance198.Instantiate);
ProtoInstance207 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare130);
ProtoInstance207.X3DName := 'pdeltaPI';
(ProtoInstance207.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.8, 0);
(ProtoInstance207.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance207.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance207.Field('textString') as TMFString).Send(['pdelta=']);
(ProtoInstance207.Field('parameterScale') as TSFFloat).Value := 6.28;
(ProtoInstance207.Field('parameterName') as TSFString).Value := 'pdelta';
(ProtoInstance207.Field('shaderNode') as TSFNode).Value := ComposedShader83;
LayoutLayer117.FdChildren.Add(ProtoInstance207.Instantiate);
Layout216 := TLayoutNode.Create;
Layout216.SetAlign(['LEFT', 'BOTTOM']);
Layout216.SetOffset([-0.2, 0.19]);
Layout216.SetOffsetUnits(['WORLD', 'WORLD']);
Layout216.SetScaleMode(['NONE', 'NONE']);
Layout216.SetSize([0.4, 0.6]);
Layout216.SetSizeUnits(['WORLD', 'WORLD']);
LayoutLayer117.Layout := Layout216;
Viewport217 := TViewportNode.Create;
Viewport217.SetClipBoundary([0, 1, 0, 1]);
LayoutLayer117.Viewport := Viewport217;
LayerSet35.FdLayers.Add(LayoutLayer117);
Group30.FdChildren.Add(LayerSet35);
end;

procedure InitbumpyfreewrljsonversePart13;
begin
X3D0.AddChildren([Group30]);
end;

function Createbumpyfreewrljsonverse: TX3DRootNode;
begin
  InitbumpyfreewrljsonversePart0;
  InitbumpyfreewrljsonversePart1;
  InitbumpyfreewrljsonversePart2;
  InitbumpyfreewrljsonversePart3;
  InitbumpyfreewrljsonversePart4;
  InitbumpyfreewrljsonversePart5;
  InitbumpyfreewrljsonversePart6;
  InitbumpyfreewrljsonversePart7;
  InitbumpyfreewrljsonversePart8;
  InitbumpyfreewrljsonversePart9;
  InitbumpyfreewrljsonversePart10;
  InitbumpyfreewrljsonversePart11;
  InitbumpyfreewrljsonversePart12;
  InitbumpyfreewrljsonversePart13;
  Result := X3D0;
end;

procedure RegisterbumpyfreewrljsonverseScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript97 <> nil then
    CompiledScript97.RegisterHandlers(Scene);
  if CompiledScript152 <> nil then
    CompiledScript152.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript97);
  FreeAndNil(CompiledScript152);
end.
