unit bumpyx_itesliders;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createbumpyx_itesliders: TX3DRootNode;
procedure Registerbumpyx_iteslidersScripts(const Scene: TCastleSceneCore);

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
  TScript84Script = class
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

var
  X3D0: TX3DRootNode;
  Group16: TGroupNode;
  LayerSet17: TLayerSetNode;
  Layer18: TLayerNode;
  NavigationInfo19: TNavigationInfoNode;
  DirectionalLight20: TDirectionalLightNode;
  DirectionalLight21: TDirectionalLightNode;
  Viewpoint22: TViewpointNode;
  Group23: TGroupNode;
  Transform24: TTransformNode;
  Shape25: TShapeNode;
  Cylinder26: TCylinderNode;
  Appearance27: TAppearanceNode;
  Material28: TMaterialNode;
  Transform29: TTransformNode;
  Shape30: TShapeNode;
  Cone31: TConeNode;
  Appearance32: TAppearanceNode;
  Transform34: TTransformNode;
  Shape35: TShapeNode;
  Appearance37: TAppearanceNode;
  Material38: TMaterialNode;
  Transform39: TTransformNode;
  Shape40: TShapeNode;
  Appearance42: TAppearanceNode;
  Transform44: TTransformNode;
  Shape45: TShapeNode;
  Appearance47: TAppearanceNode;
  Material48: TMaterialNode;
  Transform49: TTransformNode;
  Shape50: TShapeNode;
  Appearance52: TAppearanceNode;
  Transform54: TTransformNode;
  Background55: TBackgroundNode;
  Transform56: TTransformNode;
  Shape57: TShapeNode;
  IndexedFaceSet58: TIndexedFaceSetNode;
  Coordinate59: TCoordinateNode;
  Appearance60: TAppearanceNode;
  Material61: TMaterialNode;
  ComposedCubeMapTexture62: TComposedCubeMapTextureNode;
  ImageTexture63: TImageTextureNode;
  ImageTexture64: TImageTextureNode;
  ImageTexture65: TImageTextureNode;
  ImageTexture66: TImageTextureNode;
  ImageTexture67: TImageTextureNode;
  ImageTexture68: TImageTextureNode;
  ComposedShader69: TComposedShaderNode;
  FieldVal70: TX3DEvent;
  FieldVal71: TX3DEvent;
  FieldVal73: TX3DEvent;
  FieldVal74: TX3DEvent;
  FieldVal75: TX3DEvent;
  FieldVal76: TSFFloat;
  FieldVal77: TSFFloat;
  FieldVal78: TSFFloat;
  FieldVal79: TSFFloat;
  FieldVal80: TSFFloat;
  FieldVal81: TSFFloat;
  ShaderPart82: TShaderPartNode;
  ShaderPart83: TShaderPartNode;
  Script84: TScriptNode;
  FieldVal85: TMFVec3f;
  FieldVal86: TX3DEvent;
  FieldVal87: TSFFloat;
  FieldVal88: TSFFloat;
  FieldVal89: TSFFloat;
  FieldVal90: TSFFloat;
  FieldVal91: TSFFloat;
  FieldVal92: TSFFloat;
  CompiledScript84: TScript84Script;
  LayoutLayer95: TLayoutLayerNode;
  Layout96: TLayoutNode;
  Viewport97: TViewportNode;
  Transform98: TTransformNode;
  Shape99: TShapeNode;
  Appearance100: TAppearanceNode;
  Material101: TMaterialNode;
  Box102: TBoxNode;
  Transform103: TTransformNode;
  Transform104: TTransformNode;
  Shape105: TShapeNode;
  Text106: TTextNode;
  FontStyle107: TFontStyleNode;
  Appearance108: TAppearanceNode;
  Material109: TMaterialNode;
  ProtoDeclare110: TX3DPrototype;
  FieldDecl112: TX3DInterfaceDeclaration;
  FieldVal112: TSFVec3f;
  FieldDecl113: TX3DInterfaceDeclaration;
  FieldVal113: TSFVec3f;
  FieldDecl114: TX3DInterfaceDeclaration;
  FieldVal114: TSFVec3f;
  FieldDecl115: TX3DInterfaceDeclaration;
  FieldVal115: TMFString;
  FieldDecl116: TX3DInterfaceDeclaration;
  FieldVal116: TSFFloat;
  FieldDecl117: TX3DInterfaceDeclaration;
  FieldVal117: TSFString;
  FieldDecl118: TX3DInterfaceDeclaration;
  FieldVal118: TMFString;
  FieldDecl119: TX3DInterfaceDeclaration;
  FieldVal119: TSFNode;
  Group121: TGroupNode;
  Transform122: TTransformNode;
  Transform123: TTransformNode;
  PlaneSensor124: TPlaneSensorNode;
  Transform125: TTransformNode;
  TouchSensor126: TTouchSensorNode;
  Transform127: TTransformNode;
  Shape128: TShapeNode;
  Text129: TTextNode;
  FontStyle130: TFontStyleNode;
  Appearance131: TAppearanceNode;
  Material132: TMaterialNode;
  Script133: TScriptNode;
  FieldVal134: TSFFloat;
  FieldVal135: TMFString;
  FieldVal136: TSFString;
  FieldVal137: TSFNode;
  FieldVal138: TX3DEvent;
  FieldVal139: TX3DEvent;
  FieldVal140: TX3DEvent;
  ProtoInstance144: TX3DPrototypeNode;
  ProtoInstance154: TX3DPrototypeNode;
  ProtoInstance164: TX3DPrototypeNode;
  ProtoInstance174: TX3DPrototypeNode;
  ProtoInstance184: TX3DPrototypeNode;
  ProtoInstance194: TX3DPrototypeNode;
  Layer204: TLayerNode;
  Viewpoint205: TViewpointNode;
  Script206: TScriptNode;
  Group207: TGroupNode;
  Group208: TGroupNode;

constructor TScript84Script.Create(const AField_coordinates: TMFVec3f; const AEvent_coordIndexes: TX3DEvent; const AField_a: TSFFloat; const AField_b: TSFFloat; const AField_c: TSFFloat; const AField_d: TSFFloat; const AField_pdelta: TSFFloat; const AField_tdelta: TSFFloat);
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

destructor TScript84Script.Destroy;
begin
  FreeAndNil(FBack_coordIndexes);
  inherited Destroy;
end;

procedure TScript84Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript84Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script84_initialize', {$ifdef FPC}@{$endif}Initialize);
end;

procedure TScript84Script.Initialize(Value: TX3DField; const Time: TX3DTime);
var
  resolution: Integer;
  theta: Single;
  phi: Single;
  delta: Single;
  crds: array of TVector3;
  rho: Single;
  cis: array of Int32;
begin
  resolution := 300;
  theta := 0.0;
  phi := 0.0;
  delta := 2 * 3.141592653 / resolution - 1;
  crds := [];
  for i := 0 to (resolution) - 1 do
  begin
    for j := 0 to (resolution) - 1 do
    begin
      rho := Fa + Fb * Cos(Fc * theta + Ftdelta) * Cos(Fd * phi + Fpdelta);
      crds.push(Vector3(rho * Cos(phi) * Cos(theta), rho * Cos(phi) * Sin(theta), rho * Sin(phi)));
      theta := theta + (delta);
    end;
    phi := phi + (delta);
  end;
  Fcoordinates := crds; FDirty_coordinates := True;
  cis := [];
  for i := 0 to (resolution - 1) - 1 do
  begin
    for j := 0 to (resolution - 1) - 1 do
    begin
      cis.push(i * resolution + j);
      cis.push(i * resolution + j + 1);
      cis.push(i + 1 * resolution + j + 1);
      cis.push(i + 1 * resolution + j);
      cis.push(-1);
    end;
  end;
  FcoordIndexes := cis; FDirty_coordIndexes := True;
  FlushOutputs(Time);
end;

procedure Initbumpyx_iteslidersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
{ <component name='DIS' level='2'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'bumpyx_itesliders.x3d';
X3D0.Meta['description'] := '*Bumpy flower with prototype sliders*';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['identifier'] := 'https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d';
X3D0.Meta['generator'] := 'PSPad, http://www.pspad.com/';
X3D0.Meta['license'] := 'license.html';
{ "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution, }
{ It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) }
{ open for their "discussion about the teapot" }
Group16 := TGroupNode.Create;
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet17 := TLayerSetNode.Create;
LayerSet17.ActiveLayer := 1;
LayerSet17.SetOrder([1, 2, 3]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
Layer18 := TLayerNode.Create;
Layer18.Pickable := True;
Layer18.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo19 := TNavigationInfoNode.Create;
NavigationInfo19.SetType(['EXAMINE']);
NavigationInfo19.SetAvatarSize([0.25, 1.75, 0.75]);
Layer18.FdChildren.Add(NavigationInfo19);
DirectionalLight20 := TDirectionalLightNode.Create;
DirectionalLight20.AmbientIntensity := 0.2;
DirectionalLight20.Direction := Vector3(0, -1, 0);
end;

procedure Initbumpyx_iteslidersPart1;
begin
Layer18.FdChildren.Add(DirectionalLight20);
DirectionalLight21 := TDirectionalLightNode.Create;
DirectionalLight21.AmbientIntensity := 0.2;
DirectionalLight21.Direction := Vector3(-1, -0.1, -1);
Layer18.FdChildren.Add(DirectionalLight21);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.Description := 'My Overview';
Viewpoint22.FieldOfView := 1.570796;
Viewpoint22.Position := Vector3(0, 1.75, 60);
Layer18.FdChildren.Add(Viewpoint22);
{ this group contains the red/green/blue 3D crosshair }
Group23 := TGroupNode.Create;
{ Arrow X }
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(25, 0, 0);
Transform24.Rotation := Vector4(0, 0, -1, 1.57);
Shape25 := TShapeNode.Create;
Cylinder26 := TCylinderNode.Create;
Cylinder26.X3DName := 'Shaft';
Cylinder26.Radius := 0.35;
Cylinder26.Height := 50;
Shape25.Geometry := Cylinder26;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.X3DName := 'RED';
Material28.DiffuseColor := Vector3(1, 0, 0);
Material28.EmissiveColor := Vector3(1, 0, 0);
Appearance27.Material := Material28;
Shape25.Appearance := Appearance27;
Transform24.FdChildren.Add(Shape25);
Group23.FdChildren.Add(Transform24);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(50, 0, 0);
Transform29.Rotation := Vector4(0, 0, -1, 1.57);
Shape30 := TShapeNode.Create;
Cone31 := TConeNode.Create;
Cone31.X3DName := 'Tip';
Cone31.BottomRadius := 0.8;
Cone31.Height := 3;
Shape30.Geometry := Cone31;
end;

procedure Initbumpyx_iteslidersPart2;
begin
Appearance32 := TAppearanceNode.Create;
Appearance32.Material := Material28;
Shape30.Appearance := Appearance32;
Transform29.FdChildren.Add(Shape30);
Group23.FdChildren.Add(Transform29);
{ Arrow Y }
Transform34 := TTransformNode.Create;
Transform34.Translation := Vector3(0, 25, 0);
Shape35 := TShapeNode.Create;
Shape35.Geometry := Cylinder26;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.X3DName := 'GREEN';
Material38.DiffuseColor := Vector3(0, 1, 0);
Material38.EmissiveColor := Vector3(0, 1, 0);
Appearance37.Material := Material38;
Shape35.Appearance := Appearance37;
Transform34.FdChildren.Add(Shape35);
Group23.FdChildren.Add(Transform34);
Transform39 := TTransformNode.Create;
Transform39.Translation := Vector3(0, 50, 0);
Shape40 := TShapeNode.Create;
Shape40.Geometry := Cone31;
Appearance42 := TAppearanceNode.Create;
Appearance42.Material := Material38;
Shape40.Appearance := Appearance42;
Transform39.FdChildren.Add(Shape40);
Group23.FdChildren.Add(Transform39);
{ Arrow Z }
Transform44 := TTransformNode.Create;
Transform44.Translation := Vector3(0, 0, 25);
Transform44.Rotation := Vector4(1, 0, 0, 1.57);
Shape45 := TShapeNode.Create;
Shape45.Geometry := Cylinder26;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48.X3DName := 'BLUE';
Material48.DiffuseColor := Vector3(0, 0, 1);
Material48.EmissiveColor := Vector3(0, 0, 1);
Appearance47.Material := Material48;
end;

procedure Initbumpyx_iteslidersPart3;
begin
Shape45.Appearance := Appearance47;
Transform44.FdChildren.Add(Shape45);
Group23.FdChildren.Add(Transform44);
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0, 0, 50);
Transform49.Rotation := Vector4(1, 0, 0, 1.57);
Shape50 := TShapeNode.Create;
Shape50.Geometry := Cone31;
Appearance52 := TAppearanceNode.Create;
Appearance52.Material := Material48;
Shape50.Appearance := Appearance52;
Transform49.FdChildren.Add(Shape50);
Group23.FdChildren.Add(Transform49);
Layer18.FdChildren.Add(Group23);
{ the model that is being reviewed by the users of this scene }
Transform54 := TTransformNode.Create;
Transform54.X3DName := 'FlowerTransform';
{ <Inline DEF="Flower" url='"bumpyx_ite.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background55 := TBackgroundNode.Create;
Background55.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background55.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background55.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background55.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background55.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background55.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Transform54.FdChildren.Add(Background55);
Transform56 := TTransformNode.Create;
Shape57 := TShapeNode.Create;
{ <Sphere radius='40'></Sphere> }
IndexedFaceSet58 := TIndexedFaceSetNode.Create;
IndexedFaceSet58.Convex := False;
IndexedFaceSet58.X3DName := 'Orbit';
Coordinate59 := TCoordinateNode.Create;
Coordinate59.X3DName := 'OrbitCoordinates';
IndexedFaceSet58.Coord := Coordinate59;
Shape57.Geometry := IndexedFaceSet58;
Appearance60 := TAppearanceNode.Create;
Material61 := TMaterialNode.Create;
Material61.DiffuseColor := Vector3(0.7, 0.7, 0.7);
end;

procedure Initbumpyx_iteslidersPart4;
begin
Material61.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance60.Material := Material61;
ComposedCubeMapTexture62 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture62.X3DName := 'texture';
ImageTexture63 := TImageTextureNode.Create;
ImageTexture63.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture62.BackTexture := ImageTexture63;
ImageTexture64 := TImageTextureNode.Create;
ImageTexture64.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture62.BottomTexture := ImageTexture64;
ImageTexture65 := TImageTextureNode.Create;
ImageTexture65.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture62.FrontTexture := ImageTexture65;
ImageTexture66 := TImageTextureNode.Create;
ImageTexture66.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture62.LeftTexture := ImageTexture66;
ImageTexture67 := TImageTextureNode.Create;
ImageTexture67.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture62.RightTexture := ImageTexture67;
ImageTexture68 := TImageTextureNode.Create;
ImageTexture68.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture62.TopTexture := ImageTexture68;
Appearance60.Texture := ComposedCubeMapTexture62;
ComposedShader69 := TComposedShaderNode.Create;
ComposedShader69.X3DName := 'x_iteShader';
ComposedShader69.Language := slGLSL;
FieldVal70 := TSFVec3f.CreateEvent(ComposedShader69, 'chromaticDispertion', True);
ComposedShader69.AddCustomFieldOrEvent(FieldVal70);
FieldVal71 := TSFNode.CreateEvent(ComposedShader69, 'cube', True);
ComposedShader69.AddCustomFieldOrEvent(FieldVal71);
FieldVal71.Value := ComposedCubeMapTexture62;
FieldVal73 := TSFFloat.CreateEvent(ComposedShader69, 'bias', True);
ComposedShader69.AddCustomFieldOrEvent(FieldVal73);
FieldVal74 := TSFFloat.CreateEvent(ComposedShader69, 'scale', True);
ComposedShader69.AddCustomFieldOrEvent(FieldVal74);
FieldVal75 := TSFFloat.CreateEvent(ComposedShader69, 'power', True);
ComposedShader69.AddCustomFieldOrEvent(FieldVal75);
FieldVal76 := TSFFloat.Create(ComposedShader69, True, 'a', 15);
ComposedShader69.AddCustomFieldOrEvent(FieldVal76);
FieldVal77 := TSFFloat.Create(ComposedShader69, True, 'b', 5);
end;

procedure Initbumpyx_iteslidersPart5;
begin
ComposedShader69.AddCustomFieldOrEvent(FieldVal77);
FieldVal78 := TSFFloat.Create(ComposedShader69, True, 'c', 5);
ComposedShader69.AddCustomFieldOrEvent(FieldVal78);
FieldVal79 := TSFFloat.Create(ComposedShader69, True, 'd', 5);
ComposedShader69.AddCustomFieldOrEvent(FieldVal79);
FieldVal80 := TSFFloat.Create(ComposedShader69, True, 'tdelta', 0);
ComposedShader69.AddCustomFieldOrEvent(FieldVal80);
FieldVal81 := TSFFloat.Create(ComposedShader69, True, 'pdelta', 0);
ComposedShader69.AddCustomFieldOrEvent(FieldVal81);
ShaderPart82 := TShaderPartNode.Create;
ShaderPart82.SetUrl(['../shaders/x_ite_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart82.ShaderType := stVertex;
ComposedShader69.FdParts.Add(ShaderPart82);
ShaderPart83 := TShaderPartNode.Create;
ShaderPart83.SetUrl(['../shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart83.ShaderType := stFragment;
ComposedShader69.FdParts.Add(ShaderPart83);
{ TO CONVERT TO A SPHERE }
{ <ShaderPart url='"../shaders/x_ite.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"' type="VERTEX" containerField='parts'></ShaderPart> }
{ <ShaderPart url='"../shaders/x_itebubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs"' containerField='parts' type='FRAGMENT'></ShaderPart> }
Appearance60.FdShaders.Add(ComposedShader69);
Shape57.Appearance := Appearance60;
Transform56.FdChildren.Add(Shape57);
Transform54.FdChildren.Add(Transform56);
Layer18.FdChildren.Add(Transform54);
Script84 := TScriptNode.Create;
Script84.X3DName := 'OrbitScript';
FieldVal85 := TMFVec3f.CreateUndefined(Script84, True, 'coordinates');
Script84.AddCustomFieldOrEvent(FieldVal85);
FieldVal86 := TMFInt32.CreateEvent(Script84, 'coordIndexes', False);
Script84.AddCustomFieldOrEvent(FieldVal86);
FieldVal87 := TSFFloat.Create(Script84, True, 'a', 10);
Script84.AddCustomFieldOrEvent(FieldVal87);
FieldVal88 := TSFFloat.Create(Script84, True, 'b', 10);
Script84.AddCustomFieldOrEvent(FieldVal88);
FieldVal89 := TSFFloat.Create(Script84, True, 'c', 2);
Script84.AddCustomFieldOrEvent(FieldVal89);
FieldVal90 := TSFFloat.Create(Script84, True, 'd', 2);
Script84.AddCustomFieldOrEvent(FieldVal90);
FieldVal91 := TSFFloat.Create(Script84, True, 'pdelta', 0);
end;

procedure Initbumpyx_iteslidersPart6;
begin
Script84.AddCustomFieldOrEvent(FieldVal91);
FieldVal92 := TSFFloat.Create(Script84, True, 'tdelta', 0);
Script84.AddCustomFieldOrEvent(FieldVal92);
FreeAndNil(CompiledScript84);
CompiledScript84 := TScript84Script.Create(FieldVal85, FieldVal86, FieldVal87, FieldVal88, FieldVal89, FieldVal90, FieldVal91, FieldVal92);
Script84.SetUrl(['compiled:' + LineEnding +
  'initialize=Script84_initialize']);
Layer18.FdChildren.Add(Script84);
{ ROUTE OrbitScript.coordIndexes TO Orbit.set_coordIndex }
Layer18.AddRoute(FieldVal86, IndexedFaceSet58.EventSet_coordIndex);
{ ROUTE OrbitScript.coordinates TO OrbitCoordinates.set_point }
Layer18.AddRoute(FieldVal85.EventOut, Coordinate59.EventSet_point);
LayerSet17.FdLayers.Add(Layer18);
LayoutLayer95 := TLayoutLayerNode.Create;
LayoutLayer95.Pickable := True;
LayoutLayer95.SetObjectType(['ALL']);
Layout96 := TLayoutNode.Create;
Layout96.SetAlign(['LEFT', 'BOTTOM']);
Layout96.SetOffset([-0.2, 0.19]);
Layout96.SetSize([0.4, 0.6]);
LayoutLayer95.Layout := Layout96;
Viewport97 := TViewportNode.Create;
Viewport97.SetClipBoundary([0, 1, 0, 1]);
LayoutLayer95.Viewport := Viewport97;
Transform98 := TTransformNode.Create;
Transform98.Translation := Vector3(0, 0, -3);
Shape99 := TShapeNode.Create;
Appearance100 := TAppearanceNode.Create;
Material101 := TMaterialNode.Create;
Material101.DiffuseColor := Vector3(0, 0, 0);
Material101.Transparency := 0.7;
Appearance100.Material := Material101;
Shape99.Appearance := Appearance100;
Box102 := TBoxNode.Create;
Box102.Size := Vector3(100, 100, 0.02);
Shape99.Geometry := Box102;
Transform98.FdChildren.Add(Shape99);
LayoutLayer95.FdChildren.Add(Transform98);
Transform103 := TTransformNode.Create;
Transform103.X3DName := 'equationTransform';
Transform104 := TTransformNode.Create;
end;

procedure Initbumpyx_iteslidersPart7;
begin
Transform104.Translation := Vector3(0, 0, -20);
Shape105 := TShapeNode.Create;
Text106 := TTextNode.Create;
Text106.X3DName := 'equation';
Text106.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle107 := TFontStyleNode.Create;
FontStyle107.Size := 0.09;
Text106.FontStyle := FontStyle107;
Shape105.Geometry := Text106;
Appearance108 := TAppearanceNode.Create;
Material109 := TMaterialNode.Create;
Material109.DiffuseColor := Vector3(1, 1, 0);
Appearance108.Material := Material109;
Shape105.Appearance := Appearance108;
Transform104.FdChildren.Add(Shape105);
Transform103.FdChildren.Add(Transform104);
LayoutLayer95.FdChildren.Add(Transform103);
ProtoDeclare110 := CreateEmptyPrototype('SliderProto');
ProtoDeclare110.X3DName := 'SliderProto';
FieldVal112 := TSFVec3f.Create(nil, True, 'sliderTranslation', Vector3(0, 0.7, 0));
FieldDecl112 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl112.FieldOrEvent := FieldVal112;
FieldVal112.ParentInterfaceDeclaration := FieldDecl112;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl112);
FieldVal113 := TSFVec3f.Create(nil, True, 'transformTranslation', Vector3(0, 0, 0.1));
FieldDecl113 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl113.FieldOrEvent := FieldVal113;
FieldVal113.ParentInterfaceDeclaration := FieldDecl113;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl113);
FieldVal114 := TSFVec3f.Create(nil, True, 'sensorTranslation', Vector3(0, 0, 0));
FieldDecl114 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl114.FieldOrEvent := FieldVal114;
FieldVal114.ParentInterfaceDeclaration := FieldDecl114;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl114);
FieldVal115 := TMFString.Create(nil, True, 'textString', ['a=']);
FieldDecl115 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl115.FieldOrEvent := FieldVal115;
FieldVal115.ParentInterfaceDeclaration := FieldDecl115;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl115);
FieldVal116 := TSFFloat.Create(nil, True, 'parameterScale', 30);
end;

procedure Initbumpyx_iteslidersPart8;
begin
FieldDecl116 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl116.FieldOrEvent := FieldVal116;
FieldVal116.ParentInterfaceDeclaration := FieldDecl116;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl116);
FieldVal117 := TSFString.Create(nil, True, 'parameterName', 'a');
FieldDecl117 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl117.FieldOrEvent := FieldVal117;
FieldVal117.ParentInterfaceDeclaration := FieldDecl117;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl117);
FieldVal118 := TMFString.CreateUndefined(nil, True, 'petNames');
FieldDecl118 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl118.FieldOrEvent := FieldVal118;
FieldVal118.ParentInterfaceDeclaration := FieldDecl118;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl118);
FieldVal119 := TSFNode.CreateUndefined(nil, True, 'shaderNode');
FieldDecl119 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl119.FieldOrEvent := FieldVal119;
FieldVal119.ParentInterfaceDeclaration := FieldDecl119;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl119);
Group121 := TGroupNode.Create;
Transform122 := TTransformNode.Create;
Transform122.X3DName := 'protoSlider';
Transform122.Translation := Vector3(0, 0.7, 0);
Transform122.FieldOrEvent('translation', True).IsClauseNamesAdd('sliderTranslation');
Transform123 := TTransformNode.Create;
Transform123.X3DName := 'protoTransform';
Transform123.Translation := Vector3(0, 0, 0.1);
Transform123.FieldOrEvent('translation', True).IsClauseNamesAdd('sensorTranslation');
PlaneSensor124 := TPlaneSensorNode.Create;
PlaneSensor124.X3DName := 'protoSensor';
PlaneSensor124.Description := 'Grab with mouse to adjust slider';
PlaneSensor124.MaxPosition := Vector2(1, 0);
Transform123.FdChildren.Add(PlaneSensor124);
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(0, 0, 0);
TouchSensor126 := TTouchSensorNode.Create;
TouchSensor126.X3DName := 'protoTS';
Transform125.FdChildren.Add(TouchSensor126);
Transform123.FdChildren.Add(Transform125);
Transform127 := TTransformNode.Create;
end;

procedure Initbumpyx_iteslidersPart9;
begin
Shape128 := TShapeNode.Create;
Text129 := TTextNode.Create;
Text129.X3DName := 'protoText';
Text129.SetText(['a=']);
Text129.FieldOrEvent('string', True).IsClauseNamesAdd('textString');
FontStyle130 := TFontStyleNode.Create;
FontStyle130.Size := 0.23;
Text129.FontStyle := FontStyle130;
Shape128.Geometry := Text129;
Appearance131 := TAppearanceNode.Create;
Material132 := TMaterialNode.Create;
Appearance131.Material := Material132;
Shape128.Appearance := Appearance131;
Transform127.FdChildren.Add(Shape128);
Transform123.FdChildren.Add(Transform127);
Transform122.FdChildren.Add(Transform123);
Group121.FdChildren.Add(Transform122);
Script133 := TScriptNode.Create;
Script133.SetUrl(['../javascripts/X3DUser.js', 'https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js']);
Script133.X3DName := 'protoValueTransformerScript';
Script133.DirectOutput := True;
Script133.MustEvaluate := True;
FieldVal134 := TSFFloat.CreateUndefined(Script133, True, 'protoScale');
Script133.AddCustomFieldOrEvent(FieldVal134);
FieldVal135 := TMFString.CreateUndefined(Script133, True, 'petNames');
Script133.AddCustomFieldOrEvent(FieldVal135);
FieldVal136 := TSFString.CreateUndefined(Script133, True, 'protoParameterName');
Script133.AddCustomFieldOrEvent(FieldVal136);
FieldVal137 := TSFNode.CreateUndefined(Script133, True, 'shader');
Script133.AddCustomFieldOrEvent(FieldVal137);
FieldVal138 := TSFVec3f.CreateEvent(Script133, 'newTranslation', True);
Script133.AddCustomFieldOrEvent(FieldVal138);
FieldVal139 := TSFFloat.CreateEvent(Script133, 'protoValue_changed', False);
Script133.AddCustomFieldOrEvent(FieldVal139);
FieldVal140 := TMFString.CreateEvent(Script133, 'protoText_changed', False);
Script133.AddCustomFieldOrEvent(FieldVal140);
Script133.FieldOrEvent('protoScale', True).IsClauseNamesAdd('parameterScale');
Script133.FieldOrEvent('petNames', True).IsClauseNamesAdd('petNames');
Script133.FieldOrEvent('protoParameterName', True).IsClauseNamesAdd('parameterName');
Script133.FieldOrEvent('shader', True).IsClauseNamesAdd('shaderNode');
end;

procedure Initbumpyx_iteslidersPart10;
begin
Group121.FdChildren.Add(Script133);
{ ROUTE protoSensor.translation_changed TO protoTransform.set_translation }
Group121.AddRoute(PlaneSensor124.EventTranslation_changed, Transform123.FdTranslation.EventIn);
{ ROUTE protoSensor.translation_changed TO protoValueTransformerScript.newTranslation }
Group121.AddRoute(PlaneSensor124.EventTranslation_changed, FieldVal138);
{ ROUTE protoValueTransformerScript.protoText_changed TO protoText.string }
Group121.AddRoute(FieldVal140, Text129.string);
ProtoDeclare110.Node.AddChildren([Group121]);
X3D0.AddPrototype(ProtoDeclare110);
ProtoInstance144 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare110);
ProtoInstance144.X3DName := 'aPI';
(ProtoInstance144.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.7, 0);
(ProtoInstance144.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance144.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance144.Field('textString') as TMFString).Send(['a=']);
(ProtoInstance144.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance144.Field('parameterName') as TSFString).Value := 'a';
(ProtoInstance144.Field('petNames') as TMFString).Send(['yottzumm', 'group1-petname']);
(ProtoInstance144.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer95.FdChildren.Add(ProtoInstance144.Instantiate);
ProtoInstance154 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare110);
ProtoInstance154.X3DName := 'bPI';
(ProtoInstance154.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.4, 0);
(ProtoInstance154.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance154.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance154.Field('textString') as TMFString).Send(['b=']);
(ProtoInstance154.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance154.Field('parameterName') as TSFString).Value := 'b';
(ProtoInstance154.Field('petNames') as TMFString).Send(['yottzumm', 'group1-petname']);
(ProtoInstance154.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer95.FdChildren.Add(ProtoInstance154.Instantiate);
ProtoInstance164 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare110);
ProtoInstance164.X3DName := 'cPI';
(ProtoInstance164.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.1, 0);
(ProtoInstance164.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance164.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance164.Field('textString') as TMFString).Send(['c=']);
(ProtoInstance164.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance164.Field('parameterName') as TSFString).Value := 'c';
(ProtoInstance164.Field('petNames') as TMFString).Send(['yottzumm', 'yottzumm2', 'group1-petname']);
end;

procedure Initbumpyx_iteslidersPart11;
begin
(ProtoInstance164.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer95.FdChildren.Add(ProtoInstance164.Instantiate);
ProtoInstance174 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare110);
ProtoInstance174.X3DName := 'dPI';
(ProtoInstance174.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.2, 0);
(ProtoInstance174.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance174.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance174.Field('textString') as TMFString).Send(['d=']);
(ProtoInstance174.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance174.Field('parameterName') as TSFString).Value := 'd';
(ProtoInstance174.Field('petNames') as TMFString).Send(['yottzumm', 'yottzumm2', 'group1-petname']);
(ProtoInstance174.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer95.FdChildren.Add(ProtoInstance174.Instantiate);
ProtoInstance184 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare110);
ProtoInstance184.X3DName := 'tdeltaPI';
(ProtoInstance184.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.5, 0);
(ProtoInstance184.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance184.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance184.Field('textString') as TMFString).Send(['tdelta=']);
(ProtoInstance184.Field('parameterScale') as TSFFloat).Value := 6.28;
(ProtoInstance184.Field('parameterName') as TSFString).Value := 'tdelta';
(ProtoInstance184.Field('petNames') as TMFString).Send(['yottzumm2', 'group1-petname']);
(ProtoInstance184.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer95.FdChildren.Add(ProtoInstance184.Instantiate);
ProtoInstance194 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare110);
ProtoInstance194.X3DName := 'pdeltaPI';
(ProtoInstance194.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.8, 0);
(ProtoInstance194.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance194.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance194.Field('textString') as TMFString).Send(['pdelta=']);
(ProtoInstance194.Field('parameterScale') as TSFFloat).Value := 6.28;
(ProtoInstance194.Field('parameterName') as TSFString).Value := 'pdelta';
(ProtoInstance194.Field('petNames') as TMFString).Send(['yottzumm2', 'group1-petname']);
(ProtoInstance194.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer95.FdChildren.Add(ProtoInstance194.Instantiate);
LayerSet17.FdLayers.Add(LayoutLayer95);
Layer204 := TLayerNode.Create;
Layer204.Pickable := True;
Layer204.SetObjectType(['ALL']);
Viewpoint205 := TViewpointNode.Create;
end;

procedure Initbumpyx_iteslidersPart12;
begin
Viewpoint205.Description := 'My Humanoids';
Viewpoint205.FieldOfView := 1.570796;
Viewpoint205.Position := Vector3(0, 1.75, 80);
Layer204.FdChildren.Add(Viewpoint205);
Script206 := TScriptNode.Create;
Script206.SetUrl(['../javascripts/X3DAvatar.js', 'https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js']);
Script206.X3DName := 'HumanoidScript';
Script206.DirectOutput := True;
Script206.MustEvaluate := True;
Layer204.FdChildren.Add(Script206);
Group207 := TGroupNode.Create;
Group207.X3DName := 'humanoidGroup';
Group208 := TGroupNode.Create;
Group207.FdChildren.Add(Group208);
Layer204.FdChildren.Add(Group207);
LayerSet17.FdLayers.Add(Layer204);
Group16.FdChildren.Add(LayerSet17);
X3D0.AddChildren([Group16]);
end;

function Createbumpyx_itesliders: TX3DRootNode;
begin
  Initbumpyx_iteslidersPart0;
  Initbumpyx_iteslidersPart1;
  Initbumpyx_iteslidersPart2;
  Initbumpyx_iteslidersPart3;
  Initbumpyx_iteslidersPart4;
  Initbumpyx_iteslidersPart5;
  Initbumpyx_iteslidersPart6;
  Initbumpyx_iteslidersPart7;
  Initbumpyx_iteslidersPart8;
  Initbumpyx_iteslidersPart9;
  Initbumpyx_iteslidersPart10;
  Initbumpyx_iteslidersPart11;
  Initbumpyx_iteslidersPart12;
  Result := X3D0;
end;

procedure Registerbumpyx_iteslidersScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript84 <> nil then
    CompiledScript84.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript84);
end.
