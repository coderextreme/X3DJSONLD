unit SmokeTestProgramOutput_JavaExport;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function CreateSmokeTestProgramOutput_JavaExport: TX3DRootNode;
procedure RegisterSmokeTestProgramOutput_JavaExportScripts(const Scene: TCastleSceneCore);

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
  TScript76Script = class
  private
    FcolorsOutput: array of TVector3;
    FEvent_colorsOutput: TX3DEvent;
    FBack_colorsOutput: TMFColor;
    FDirty_colorsOutput: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_colorsOutput: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure ColorInput(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript120Script = class
  private
    Fenabled: Boolean;
    FField_enabled: TSFBool;
    FDirty_enabled: Boolean;
    FdiffuseColor: TVector3;
    FField_diffuseColor: TSFColor;
    FDirty_diffuseColor: Boolean;
    FnewColor: TVector3;
    FEvent_newColor: TX3DEvent;
    FBack_newColor: TSFColor;
    FDirty_newColor: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_enabled: TSFBool; const AField_diffuseColor: TSFColor; const AEvent_newColor: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_enabled(Value: TX3DField; const Time: TX3DTime);
    procedure ClockTrigger(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript189Script = class
  private
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create;
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
  end;

var
  X3D0: TX3DRootNode;
  Group32: TGroupNode;
  ViewpointGroup33: TViewpointGroupNode;
  Viewpoint34: TViewpointNode;
  NavigationInfo35: TNavigationInfoNode;
  Viewpoint36: TViewpointNode;
  NavigationInfo37: TNavigationInfoNode;
  WorldInfo38: TWorldInfoNode;
  MetadataString41: TMetadataStringNode;
  LayerSet42: TLayerSetNode;
  Transform43: TTransformNode;
  Anchor44: TAnchorNode;
  Shape45: TShapeNode;
  Appearance46: TAppearanceNode;
  Material47: TMaterialNode;
  ImageTexture48: TImageTextureNode;
  Box49: TBoxNode;
  Shape50: TShapeNode;
  Appearance51: TAppearanceNode;
  Material52: TMaterialNode;
  IndexedLineSet53: TIndexedLineSetNode;
  Coordinate54: TCoordinateNode;
  PositionInterpolator55: TPositionInterpolatorNode;
  TimeSensor56: TTimeSensorNode;
  Transform59: TTransformNode;
  Shape60: TShapeNode;
  Appearance61: TAppearanceNode;
  Text63: TTextNode;
  MetadataSet64: TMetadataSetNode;
  MetadataString65: TMetadataStringNode;
  FontStyle66: TFontStyleNode;
  Collision67: TCollisionNode;
  Shape68: TShapeNode;
  Text69: TTextNode;
  OrientationInterpolator70: TOrientationInterpolatorNode;
  TimeSensor71: TTimeSensorNode;
  Group74: TGroupNode;
  Background75: TBackgroundNode;
  Script76: TScriptNode;
  FieldVal77: TX3DEvent;
  FieldVal78: TX3DEvent;
  CompiledScript76: TScript76Script;
  ColorInterpolator79: TColorInterpolatorNode;
  TimeSensor80: TTimeSensorNode;
  ProtoDeclare84: TX3DPrototype;
  FieldDecl86: TX3DInterfaceDeclaration;
  FieldVal86: TSFString;
  FieldDecl87: TX3DInterfaceDeclaration;
  FieldVal87: TSFBool;
  Material89: TMaterialNode;
  TouchSensor90: TTouchSensorNode;
  X3DExternalPrototype91: TX3DExternalPrototype;
  FieldVal92: TSFString;
  Shape93: TShapeNode;
  Appearance94: TAppearanceNode;
  ProtoInstance95: TX3DPrototypeNode;
  Sphere97: TSphereNode;
  Shape98: TShapeNode;
  Appearance99: TAppearanceNode;
  ProtoInstance100: TX3DPrototypeNode;
  Cone101: TConeNode;
  Shape102: TShapeNode;
  Appearance103: TAppearanceNode;
  Cylinder105: TCylinderNode;
  Inline106: TInlineNode;
  Import107: TX3DImport;
  ProtoDeclare109: TX3DPrototype;
  FieldDecl111: TX3DInterfaceDeclaration;
  FieldVal111: TSFBool;
  FieldDecl112: TX3DInterfaceDeclaration;
  FieldVal112: TSFColor;
  FieldDecl113: TX3DInterfaceDeclaration;
  FieldVal113: TSFColor;
  FieldDecl114: TX3DInterfaceDeclaration;
  FieldVal114: TSFColor;
  FieldDecl115: TX3DInterfaceDeclaration;
  FieldVal115: TSFFloat;
  FieldDecl116: TX3DInterfaceDeclaration;
  FieldVal116: TSFFloat;
  FieldDecl117: TX3DInterfaceDeclaration;
  FieldVal117: TSFFloat;
  Material119: TMaterialNode;
  Script120: TScriptNode;
  FieldVal121: TSFBool;
  FieldVal122: TSFColor;
  FieldVal123: TX3DEvent;
  FieldVal124: TX3DEvent;
  CompiledScript120: TScript120Script;
  Group125: TGroupNode;
  Shape126: TShapeNode;
  MetadataString127: TMetadataStringNode;
  Appearance128: TAppearanceNode;
  ProtoInstance129: TX3DPrototypeNode;
  Cone130: TConeNode;
  Group131: TGroupNode;
  Sound132: TSoundNode;
  AudioClip133: TAudioClipNode;
  Sound134: TSoundNode;
  MovieTexture135: TMovieTextureNode;
  Shape136: TShapeNode;
  Appearance137: TAppearanceNode;
  Material138: TMaterialNode;
  Extrusion139: TExtrusionNode;
  Group140: TGroupNode;
  ProtoDeclare141: TX3DPrototype;
  FieldDecl143: TX3DInterfaceDeclaration;
  FieldVal143: TSFString;
  WorldInfo145: TWorldInfoNode;
  ProtoInstance146: TX3DPrototypeNode;
  Group148: TGroupNode;
  ProtoInstance149: TX3DPrototypeNode;
  Transform150: TTransformNode;
  ProtoDeclare151: TX3DPrototype;
  ProgramShader153: TProgramShaderNode;
  Shape154: TShapeNode;
  Appearance155: TAppearanceNode;
  ProgramShader156: TProgramShaderNode;
  ShaderProgram157: TShaderProgramNode;
  ProtoInstance158: TX3DPrototypeNode;
  ComposedShader159: TComposedShaderNode;
  ShaderPart160: TShaderPartNode;
  Transform161: TTransformNode;
  CADLayer162: TCADLayerNode;
  CADAssembly163: TCADAssemblyNode;
  CADPart164: TCADPartNode;
  CADFace165: TCADFaceNode;
  EspduTransform166: TEspduTransformNode;
  ReceiverPdu167: TReceiverPduNode;
  SignalPdu168: TSignalPduNode;
  TransmitterPdu169: TTransmitterPduNode;
  DISEntityManager170: TDISEntityManagerNode;
  DISEntityTypeMapping171: TDISEntityTypeMappingNode;
  EspduTransform172: TEspduTransformNode;
  WorldInfo173: TWorldInfoNode;
  ReceiverPdu174: TReceiverPduNode;
  SignalPdu175: TSignalPduNode;
  TransmitterPdu176: TTransmitterPduNode;
  DISEntityManager177: TDISEntityManagerNode;
  DISEntityTypeMapping178: TDISEntityTypeMappingNode;
  LoadSensor179: TLoadSensorNode;
  DISEntityTypeMapping182: TDISEntityTypeMappingNode;
  GeoMetadata183: TGeoMetadataNode;
  AudioClip184: TAudioClipNode;
  ImageCubeMapTexture185: TImageCubeMapTextureNode;
  ImageTexture3D186: TImageTexture3DNode;
  ImageTexture187: TImageTextureNode;
  MovieTexture188: TMovieTextureNode;
  Script189: TScriptNode;
  CompiledScript189: TScript189Script;
  PackagedShader190: TPackagedShaderNode;
  ShaderPart191: TShaderPartNode;
  ShaderProgram192: TShaderProgramNode;
  OrthoViewpoint193: TOrthoViewpointNode;

constructor TScript76Script.Create(const AEvent_colorsOutput: TX3DEvent);
begin
  inherited Create;
  FcolorsOutput := 0;
  FEvent_colorsOutput := nil;
  FBack_colorsOutput := TMFColor.Create(nil, False, 'colorsOutput', 0);
  FDirty_colorsOutput := False;
  FEvent_colorsOutput := AEvent_colorsOutput;
end;

destructor TScript76Script.Destroy;
begin
  FreeAndNil(FBack_colorsOutput);
  inherited Destroy;
end;

procedure TScript76Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_colorsOutput then
  begin
    FDirty_colorsOutput := False;
    if FEvent_colorsOutput <> nil then
    begin
      FBack_colorsOutput.Value := FcolorsOutput;
      FEvent_colorsOutput.Send(FBack_colorsOutput, Time);
    end;
  end;
end;

procedure TScript76Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script76_colorInput', {$ifdef FPC}@{$endif}ColorInput);
end;

procedure TScript76Script.ColorInput(Value: TX3DField; const Time: TX3DTime);
begin
  FcolorsOutput := [(Value as TSFColor).Value]; FDirty_colorsOutput := True;
  FlushOutputs(Time);
end;

constructor TScript120Script.Create(const AField_enabled: TSFBool; const AField_diffuseColor: TSFColor; const AEvent_newColor: TX3DEvent);
begin
  inherited Create;
  Fenabled := False;
  FField_enabled := nil;
  FDirty_enabled := False;
  FdiffuseColor := Vector3(0, 0, 0);
  FField_diffuseColor := nil;
  FDirty_diffuseColor := False;
  FnewColor := Vector3(0, 0, 0);
  FEvent_newColor := nil;
  FBack_newColor := TSFColor.Create(nil, False, 'newColor', Vector3(0, 0, 0));
  FDirty_newColor := False;
  FField_enabled := AField_enabled;
  if AField_enabled <> nil then Fenabled := AField_enabled.Value;
  FField_diffuseColor := AField_diffuseColor;
  if AField_diffuseColor <> nil then FdiffuseColor := AField_diffuseColor.Value;
  FEvent_newColor := AEvent_newColor;
end;

destructor TScript120Script.Destroy;
begin
  FreeAndNil(FBack_newColor);
  inherited Destroy;
end;

procedure TScript120Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_enabled then
  begin
    FDirty_enabled := False;
    if FField_enabled <> nil then
      FField_enabled.Send(Fenabled, Time);
  end;
  if FDirty_diffuseColor then
  begin
    FDirty_diffuseColor := False;
    if FField_diffuseColor <> nil then
      FField_diffuseColor.Send(FdiffuseColor, Time);
  end;
  if FDirty_newColor then
  begin
    FDirty_newColor := False;
    if FEvent_newColor <> nil then
    begin
      FBack_newColor.Value := FnewColor;
      FEvent_newColor.Send(FBack_newColor, Time);
    end;
  end;
end;

procedure TScript120Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script120_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script120_set_enabled', {$ifdef FPC}@{$endif}Set_enabled);
  Scene.RegisterCompiledScript('Script120_clockTrigger', {$ifdef FPC}@{$endif}ClockTrigger);
end;

procedure TScript120Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  FnewColor := FdiffuseColor; FDirty_newColor := True;
  FlushOutputs(Time);
end;

procedure TScript120Script.Set_enabled(Value: TX3DField; const Time: TX3DTime);
begin
  Fenabled := (Value as TSFBool).Value; FDirty_enabled := True;
  FlushOutputs(Time);
end;

procedure TScript120Script.ClockTrigger(Value: TX3DField; const Time: TX3DTime);
begin
  if not (Fenabled) then
    Exit;
  red := FnewColor.X;
  green := FnewColor.Y;
  blue := FnewColor.Z;
  FnewColor := Vector3(red + 0.02 mod 1, green + 0.03 mod 1, blue + 0.04 mod 1); FDirty_newColor := True;
  if Fenabled then
  begin
    WriteLn('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + FnewColor.toString() + #10);
  end;
  FlushOutputs(Time);
end;

constructor TScript189Script.Create;
begin
  inherited Create;
end;

destructor TScript189Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript189Script.FlushOutputs(const Time: TX3DTime);
begin
end;

procedure TScript189Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
end;

procedure InitSmokeTestProgramOutput_JavaExportPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ X3D model top-level comment }
{ comment #1 }
{ comment #2 }
{ comment #3 }
{ comment #4 }
X3D0.Components['Navigation'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CADGeometry'] := 2;
X3D0.Components['DIS'] := 2;
X3D0.Components['HAnim'] := 1;
X3D0.Components['Grouping'] := 1;
X3D0.Components['Layering'] := 1;
X3D0.Meta['title'] := 'SmokeTestProgramOutput.x3d';
X3D0.Meta['info'] := 'continued development and testing in progress';
X3D0.Meta['description'] := 'Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)';
X3D0.Meta['reference'] := 'https://www.web3d.org/specifications/java/X3DJSAIL.html';
X3D0.Meta['generator'] := 'SmokeTestProgramOutput.java';
X3D0.Meta['created'] := '6 September 2016';
X3D0.Meta['modified'] := '31 October 2026';
X3D0.Meta['generator'] := 'X3D Java Scene Access Interface Library (X3DJSAIL)';
X3D0.Meta['generator'] := 'https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java';
X3D0.Meta['generator'] := 'Netbeans https://www.netbeans.org';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['reference'] := 'https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/SmokeTestProgramOutput.x3d';
X3D0.Meta['reference'] := 'Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:';
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.txt';
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.x3dv';
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.wrl';
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.html';
X3D0.Meta['reference'] := 'https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d';
X3D0.Meta['license'] := '../license.html';
Group32 := TGroupNode.Create;
ViewpointGroup33 := TViewpointGroupNode.Create;
ViewpointGroup33.Description := 'Available viewpoints';
Viewpoint34 := TViewpointNode.Create;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart1;
begin
Viewpoint34.X3DName := 'DefaultView';
Viewpoint34.Description := 'Hello X3DJSAIL';
NavigationInfo35 := TNavigationInfoNode.Create;
NavigationInfo35.X3DName := 'ViewpointChildNavigationInfo';
Viewpoint34.NavigationInfo := NavigationInfo35;
ViewpointGroup33.FdChildren.Add(Viewpoint34);
Viewpoint36 := TViewpointNode.Create;
Viewpoint36.X3DName := 'TopDownView';
Viewpoint36.Description := 'top-down view from above';
Viewpoint36.Orientation := Vector4(1, 0, 0, -1.5708);
Viewpoint36.Position := Vector3(0, 100, 0);
ViewpointGroup33.FdChildren.Add(Viewpoint36);
Group32.FdChildren.Add(ViewpointGroup33);
NavigationInfo37 := TNavigationInfoNode.Create;
NavigationInfo37.SetType(['EXAMINE', 'FLY', 'ANY']);
Group32.FdChildren.Add(NavigationInfo37);
WorldInfo38 := TWorldInfoNode.Create;
WorldInfo38.X3DName := 'WorldInfoDEF';
WorldInfo38.Title := 'SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)';
Group32.FdChildren.Add(WorldInfo38);
Group32.FdChildren.Add(WorldInfo38);
Group32.FdChildren.Add(WorldInfo38);
MetadataString41 := TMetadataStringNode.Create;
MetadataString41.X3DName := 'test';
MetadataString41.X3DName := 'scene.addChildMetadata';
MetadataString41.SetValue(['Top-level root Metadata node beneath Scene needs to be one of ''-children'' in JSON encoding']);
Group32.Metadata := MetadataString41;
LayerSet42 := TLayerSetNode.Create;
LayerSet42.X3DName := 'scene.addChildLayerSetTest';
Group32.FdChildren.Add(LayerSet42);
Transform43 := TTransformNode.Create;
Transform43.X3DName := 'LogoGeometryTransform';
Transform43.Translation := Vector3(0, 1.5, 0);
Anchor44 := TAnchorNode.Create;
Anchor44.X3DName := 'siteAnchor';
Anchor44.Description := 'select for X3D Java SAI Library (X3DJSAIL) description';
Anchor44.SetUrl(['../X3DJSAIL.html', 'https://www.web3d.org/specifications/java/X3DJSAIL.html']);
Shape45 := TShapeNode.Create;
Shape45.X3DName := 'BoxShape';
Appearance46 := TAppearanceNode.Create;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart2;
begin
Material47 := TMaterialNode.Create;
Material47.X3DName := 'GreenMaterial';
Material47.DiffuseColor := Vector3(0, 1, 1);
Material47.EmissiveColor := Vector3(0.8, 0, 0);
Material47.Transparency := 0.1;
Appearance46.Material := Material47;
ImageTexture48 := TImageTextureNode.Create;
ImageTexture48.SetUrl(['images/X3dJavaSceneAccessInterfaceSaiLibrary.png', 'https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png']);
Appearance46.Texture := ImageTexture48;
Shape45.Appearance := Appearance46;
Box49 := TBoxNode.Create;
Box49.X3DName := 'test-NMTOKEN_regex.0123456789';
Shape45.Geometry := Box49;
Anchor44.FdChildren.Add(Shape45);
Transform43.FdChildren.Add(Anchor44);
Group32.FdChildren.Add(Transform43);
Shape50 := TShapeNode.Create;
Shape50.X3DName := 'LineShape';
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.EmissiveColor := Vector3(0.6, 0.1961, 0.8);
Appearance51.Material := Material52;
Shape50.Appearance := Appearance51;
IndexedLineSet53 := TIndexedLineSetNode.Create;
IndexedLineSet53.SetCoordIndex([0, 1, 2, 3, 4, 0]);
{ Coordinate 3-tuple point count: 6 }
Coordinate54 := TCoordinateNode.Create;
Coordinate54.SetPoint([Vector3(0, 1.5, 0), Vector3(2, 1.5, 0), Vector3(2, 1.5, -2), Vector3(-2, 1.5, -2), Vector3(-2, 1.5, 0), Vector3(0, 1.5, 0)]);
IndexedLineSet53.Coord := Coordinate54;
Shape50.Geometry := IndexedLineSet53;
Group32.FdChildren.Add(Shape50);
PositionInterpolator55 := TPositionInterpolatorNode.Create;
PositionInterpolator55.X3DName := 'BoxPathAnimator';
PositionInterpolator55.SetKey([0, 0.125, 0.375, 0.625, 0.875, 1]);
PositionInterpolator55.SetKeyValue([Vector3(0, 1.5, 0), Vector3(2, 1.5, 0), Vector3(2, 1.5, -2), Vector3(-2, 1.5, -2), Vector3(-2, 1.5, 0), Vector3(0, 1.5, 0)]);
Group32.FdChildren.Add(PositionInterpolator55);
TimeSensor56 := TTimeSensorNode.Create;
TimeSensor56.X3DName := 'OrbitClock';
TimeSensor56.CycleInterval := 8;
TimeSensor56.Loop := True;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart3;
begin
Group32.FdChildren.Add(TimeSensor56);
{ ROUTE OrbitClock.fraction_changed TO BoxPathAnimator.set_fraction }
Group32.AddRoute(TimeSensor56.EventFraction_changed, PositionInterpolator55.EventSet_fraction);
{ ROUTE BoxPathAnimator.value_changed TO LogoGeometryTransform.set_translation }
Group32.AddRoute(PositionInterpolator55.EventValue_changed, Transform43.FdTranslation.EventIn);
Transform59 := TTransformNode.Create;
Transform59.X3DName := 'TextTransform';
Transform59.Translation := Vector3(0, -1.5, 0);
Shape60 := TShapeNode.Create;
Appearance61 := TAppearanceNode.Create;
Appearance61.Material := Material47;
Shape60.Appearance := Appearance61;
Text63 := TTextNode.Create;
Text63.SetText(['X3D Java', 'SAI Library', 'X3DJSAIL']);
{ Comment example A, plain quotation marks: He said, "Immel did it!" }
{ Comment example B, XML character entities: He said, &quot;Immel did it!&quot; }
MetadataSet64 := TMetadataSetNode.Create;
MetadataSet64.X3DName := 'EscapedQuotationMarksMetadataSet';
MetadataString65 := TMetadataStringNode.Create;
MetadataString65.X3DName := 'extraChildTest';
MetadataString65.SetValue(['checks MetadataSet addValue() method']);
MetadataSet64.FdValue.Add(MetadataString65);
Text63.Metadata := MetadataSet64;
FontStyle66 := TFontStyleNode.Create;
FontStyle66.Justify := fjMiddle;
FontStyle66.JustifyMinor := fjMiddle;
Text63.FontStyle := FontStyle66;
Shape60.Geometry := Text63;
Transform59.FdChildren.Add(Shape60);
Collision67 := TCollisionNode.Create;
{ test containerField='proxy' }
Shape68 := TShapeNode.Create;
Shape68.X3DName := 'ProxyShape';
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text69 := TTextNode.Create;
Text69.SetText(['One, Two, Text', 'He said, "Immel did it!" ""']);
Shape68.Geometry := Text69;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart4;
begin
Collision67.Proxy := Shape68;
Transform59.FdChildren.Add(Collision67);
{ It's a beautiful world }
{ ... for you! }
{ https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) }
Group32.FdChildren.Add(Transform59);
{ repeatedly spin 180 degrees as a readable special effect }
OrientationInterpolator70 := TOrientationInterpolatorNode.Create;
OrientationInterpolator70.X3DName := 'SpinInterpolator';
OrientationInterpolator70.SetKey([0, 0.5, 1]);
OrientationInterpolator70.SetKeyValue([Vector4(0, 1, 0, 4.7124), Vector4(0, 1, 0, 0), Vector4(0, 1, 0, 1.5708)]);
Group32.FdChildren.Add(OrientationInterpolator70);
TimeSensor71 := TTimeSensorNode.Create;
TimeSensor71.X3DName := 'SpinClock';
TimeSensor71.CycleInterval := 5;
TimeSensor71.Loop := True;
Group32.FdChildren.Add(TimeSensor71);
{ ROUTE SpinClock.fraction_changed TO SpinInterpolator.set_fraction }
Group32.AddRoute(TimeSensor71.EventFraction_changed, OrientationInterpolator70.EventSet_fraction);
{ ROUTE SpinInterpolator.value_changed TO TextTransform.rotation }
Group32.AddRoute(OrientationInterpolator70.EventValue_changed, Transform59.rotation);
Group74 := TGroupNode.Create;
Group74.X3DName := 'BackgroundGroup';
Background75 := TBackgroundNode.Create;
Background75.X3DName := 'GradualBackground';
Group74.FdChildren.Add(Background75);
Script76 := TScriptNode.Create;
Script76.X3DName := 'colorTypeConversionScript';
FieldVal77 := TSFColor.CreateEvent(Script76, 'colorInput', True);
Script76.AddCustomFieldOrEvent(FieldVal77);
FieldVal78 := TMFColor.CreateEvent(Script76, 'colorsOutput', False);
Script76.AddCustomFieldOrEvent(FieldVal78);
FreeAndNil(CompiledScript76);
CompiledScript76 := TScript76Script.Create(FieldVal78);
Script76.SetUrl(['compiled:' + LineEnding +
  'colorInput=Script76_colorInput']);
Group74.FdChildren.Add(Script76);
ColorInterpolator79 := TColorInterpolatorNode.Create;
ColorInterpolator79.X3DName := 'ColorAnimator';
ColorInterpolator79.SetKey([0, 0.5, 1]);
ColorInterpolator79.SetKeyValue([Vector3(0.9412, 1, 1), Vector3(0.2941, 0, 0.5098), Vector3(0.9412, 1, 1)]);
end;

procedure InitSmokeTestProgramOutput_JavaExportPart5;
begin
{ AZURE to INDIGO and back again }
Group74.FdChildren.Add(ColorInterpolator79);
TimeSensor80 := TTimeSensorNode.Create;
TimeSensor80.X3DName := 'ColorClock';
TimeSensor80.CycleInterval := 60;
TimeSensor80.Loop := True;
Group74.FdChildren.Add(TimeSensor80);
{ ROUTE colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor }
Group74.AddRoute(FieldVal78, Background75.skyColor);
{ ROUTE ColorAnimator.value_changed TO colorTypeConversionScript.colorInput }
Group74.AddRoute(ColorInterpolator79.EventValue_changed, FieldVal77);
{ ROUTE ColorClock.fraction_changed TO ColorAnimator.set_fraction }
Group74.AddRoute(TimeSensor80.EventFraction_changed, ColorInterpolator79.EventSet_fraction);
Group32.FdChildren.Add(Group74);
ProtoDeclare84 := CreateEmptyPrototype('ArtDeco01');
ProtoDeclare84.X3DName := 'ArtDeco01';
ProtoDeclare84.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
FieldVal86 := TSFString.Create(nil, True, 'description', 'ArtDeco01Material prototype is a Material node');
FieldDecl86 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl86.FieldOrEvent := FieldVal86;
FieldVal86.ParentInterfaceDeclaration := FieldDecl86;
ProtoDeclare84.InterfaceDeclarations.Add(FieldDecl86);
FieldVal87 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl87 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl87.FieldOrEvent := FieldVal87;
FieldVal87.ParentInterfaceDeclaration := FieldDecl87;
ProtoDeclare84.InterfaceDeclarations.Add(FieldDecl87);
{ Initial node of ProtoBody determines prototype node type }
Material89 := TMaterialNode.Create;
Material89.AmbientIntensity := 0.25;
Material89.DiffuseColor := Vector3(0.2824, 0.0852, 0.1345);
Material89.Shininess := 0.1273;
Material89.SpecularColor := Vector3(0.2763, 0.1143, 0.1399);
ProtoDeclare84.Node.AddChildren([Material89]);
{ [SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
TouchSensor90 := TTouchSensorNode.Create;
TouchSensor90.Description := 'within ProtoBody';
TouchSensor90.FieldOrEvent('description', True).IsClauseNamesAdd('description');
TouchSensor90.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
end;

procedure InitSmokeTestProgramOutput_JavaExportPart6;
begin
ProtoDeclare84.Node.AddChildren([TouchSensor90]);
X3D0.AddPrototype(ProtoDeclare84);
X3DExternalPrototype91 := TX3DExternalPrototype.Create;
X3DExternalPrototype91.X3DName := 'ArtDeco02';
X3DExternalPrototype91.Appinfo := 'this is a different Material node';
X3DExternalPrototype91.Url := '"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02" "https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02"';
{ [SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
FieldVal92 := TSFString.CreateUndefined(X3DExternalPrototype91, True, 'description');
X3DExternalPrototype91.AddCustomFieldOrEvent(FieldVal92);
Group32.AddX3DExternalPrototype([X3DExternalPrototype91]);
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape93 := TShapeNode.Create;
Shape93.X3DName := 'TestShape1';
Appearance94 := TAppearanceNode.Create;
Appearance94.X3DName := 'TestAppearance1';
{ ArtDeco01Material prototype goes here... }
ProtoInstance95 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare84);
{ [SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
(ProtoInstance95.Field('description') as TSFString).Value := 'ArtDeco01Material can substitute for a Material node';
Appearance94.Material := ProtoInstance95.Instantiate;
Shape93.Appearance := Appearance94;
Sphere97 := TSphereNode.Create;
Sphere97.Radius := 0.001;
Shape93.Geometry := Sphere97;
Group32.FdChildren.Add(Shape93);
Shape98 := TShapeNode.Create;
Shape98.X3DName := 'TestShape2';
Appearance99 := TAppearanceNode.Create;
Appearance99.X3DName := 'TestAppearance2';
{ ArtDeco02Material ProtoInstance goes here... }
ProtoInstance100 := TX3DPrototypeNode.CreatePrototypeNode('', '', X3DExternalPrototype91);
ProtoInstance100.X3DName := 'ArtDeco02MaterialDEF';
{ [SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
Appearance99.Material := ProtoInstance100.Instantiate;
Shape98.Appearance := Appearance99;
Cone101 := TConeNode.Create;
Cone101.BottomRadius := 0.001;
Cone101.Height := 0.001;
Shape98.Geometry := Cone101;
Group32.FdChildren.Add(Shape98);
end;

procedure InitSmokeTestProgramOutput_JavaExportPart7;
begin
Shape102 := TShapeNode.Create;
Shape102.X3DName := 'TestShape3';
Appearance103 := TAppearanceNode.Create;
Appearance103.X3DName := 'TestAppearance3';
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE. }
Appearance103.Material := ProtoInstance100;
Shape102.Appearance := Appearance103;
Cylinder105 := TCylinderNode.Create;
Cylinder105.Height := 0.001;
Cylinder105.Radius := 0.001;
Shape102.Geometry := Cylinder105;
Group32.FdChildren.Add(Shape102);
Inline106 := TInlineNode.Create;
Inline106.X3DName := 'inlineScene';
Inline106.SetUrl(['newScene.x3d', 'https://www.web3d.org/specifications/java/examples/newScene.x3d']);
Group32.FdChildren.Add(Inline106);
Import107 := TX3DImport.Create;
Import107.InlineNodeName := 'inlineScene';
Import107.ImportedNodeName := 'WorldInfoDEF';
Import107.ImportedNodeAlias := 'WorldInfoDEF2';
X3D0.AddImport(Import107);
X3D0.ExportNode(WorldInfo38, 'WorldInfoDEF3');
ProtoDeclare109 := CreateEmptyPrototype('MaterialModulator');
ProtoDeclare109.X3DName := 'MaterialModulator';
ProtoDeclare109.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
ProtoDeclare109.Documentation := 'https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
FieldVal111 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl111 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl111.FieldOrEvent := FieldVal111;
FieldVal111.ParentInterfaceDeclaration := FieldDecl111;
ProtoDeclare109.InterfaceDeclarations.Add(FieldDecl111);
FieldVal112 := TSFColor.Create(nil, True, 'diffuseColor', Vector3(0, 0, 0));
FieldDecl112 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl112.FieldOrEvent := FieldVal112;
FieldVal112.ParentInterfaceDeclaration := FieldDecl112;
ProtoDeclare109.InterfaceDeclarations.Add(FieldDecl112);
FieldVal113 := TSFColor.Create(nil, True, 'emissiveColor', Vector3(0.05, 0.05, 0.5));
FieldDecl113 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl113.FieldOrEvent := FieldVal113;
FieldVal113.ParentInterfaceDeclaration := FieldDecl113;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart8;
begin
ProtoDeclare109.InterfaceDeclarations.Add(FieldDecl113);
FieldVal114 := TSFColor.Create(nil, True, 'specularColor', Vector3(0, 0, 0));
FieldDecl114 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl114.FieldOrEvent := FieldVal114;
FieldVal114.ParentInterfaceDeclaration := FieldDecl114;
ProtoDeclare109.InterfaceDeclarations.Add(FieldDecl114);
FieldVal115 := TSFFloat.Create(nil, True, 'transparency', 0);
FieldDecl115 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl115.FieldOrEvent := FieldVal115;
FieldVal115.ParentInterfaceDeclaration := FieldDecl115;
ProtoDeclare109.InterfaceDeclarations.Add(FieldDecl115);
FieldVal116 := TSFFloat.Create(nil, True, 'shininess', 0);
FieldDecl116 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl116.FieldOrEvent := FieldVal116;
FieldVal116.ParentInterfaceDeclaration := FieldDecl116;
ProtoDeclare109.InterfaceDeclarations.Add(FieldDecl116);
FieldVal117 := TSFFloat.Create(nil, True, 'ambientIntensity', 0);
FieldDecl117 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl117.FieldOrEvent := FieldVal117;
FieldVal117.ParentInterfaceDeclaration := FieldDecl117;
ProtoDeclare109.InterfaceDeclarations.Add(FieldDecl117);
Material119 := TMaterialNode.Create;
Material119.X3DName := 'MaterialNode';
Material119.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('diffuseColor');
Material119.FieldOrEvent('emissiveColor', True).IsClauseNamesAdd('emissiveColor');
Material119.FieldOrEvent('specularColor', True).IsClauseNamesAdd('specularColor');
Material119.FieldOrEvent('transparency', True).IsClauseNamesAdd('transparency');
Material119.FieldOrEvent('shininess', True).IsClauseNamesAdd('shininess');
Material119.FieldOrEvent('ambientIntensity', True).IsClauseNamesAdd('ambientIntensity');
ProtoDeclare109.Node.AddChildren([Material119]);
{ Only first node (the node type for the prototype) is renderable, others are along for the ride }
Script120 := TScriptNode.Create;
Script120.X3DName := 'MaterialModulatorScript';
FieldVal121 := TSFBool.CreateUndefined(Script120, True, 'enabled');
Script120.AddCustomFieldOrEvent(FieldVal121);
FieldVal122 := TSFColor.CreateUndefined(Script120, True, 'diffuseColor');
Script120.AddCustomFieldOrEvent(FieldVal122);
FieldVal123 := TSFColor.CreateEvent(Script120, 'newColor', False);
Script120.AddCustomFieldOrEvent(FieldVal123);
FieldVal124 := TSFTime.CreateEvent(Script120, 'clockTrigger', True);
end;

procedure InitSmokeTestProgramOutput_JavaExportPart9;
begin
Script120.AddCustomFieldOrEvent(FieldVal124);
Script120.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
Script120.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('diffuseColor');
FreeAndNil(CompiledScript120);
CompiledScript120 := TScript120Script.Create(FieldVal121, FieldVal122, FieldVal123);
Script120.SetUrl(['compiled:' + LineEnding +
  'initialize=Script120_initialize' + LineEnding +
  'set_enabled=Script120_set_enabled' + LineEnding +
  'clockTrigger=Script120_clockTrigger']);
ProtoDeclare109.Node.AddChildren([Script120]);
X3D0.AddPrototype(ProtoDeclare109);
{ Test success: declarative statement createDeclarativeShapeTests() }
Group125 := TGroupNode.Create;
Group125.X3DName := 'DeclarativeGroupExample';
Shape126 := TShapeNode.Create;
MetadataString127 := TMetadataStringNode.Create;
MetadataString127.X3DName := 'findThisNameValue';
MetadataString127.X3DName := 'FindableMetadataStringTest';
MetadataString127.SetValue(['test case']);
Shape126.Value := MetadataString127;
Appearance128 := TAppearanceNode.Create;
Appearance128.X3DName := 'DeclarativeAppearanceExample';
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
ProtoInstance129 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare109);
ProtoInstance129.X3DName := 'MyMaterialModulator';
Appearance128.Material := ProtoInstance129.Instantiate;
Shape126.Appearance := Appearance128;
Cone130 := TConeNode.Create;
Cone130.Bottom := False;
Cone130.BottomRadius := 0.05;
Cone130.Height := 0.1;
Shape126.Geometry := Cone130;
Group125.FdChildren.Add(Shape126);
{ Test success: declarativeGroup.addChild() singleton pipeline method }
Group32.FdChildren.Add(Group125);
{ Test success: declarative statement addChild() }
{ Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance> }
{ Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> }
{ Test success: x3dModel.findElementByNameValue("ArtDeco01", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found }
Group131 := TGroupNode.Create;
Group131.X3DName := 'TestFieldObjectsGroup';
end;

procedure InitSmokeTestProgramOutput_JavaExportPart10;
begin
{ testFieldObjects() results }
{ SFBool default=false, true=true, false=false, negate()=true }
{ MFBool default=, initial=true false true, negate()=false true false }
{ SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4 }
{ MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 }
{ ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= }
{ SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true }
{ regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotation.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value }
Group32.FdChildren.Add(Group131);
Sound132 := TSoundNode.Create;
Sound132.Location := Vector3(0, 1.6, 0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip133 := TAudioClipNode.Create;
AudioClip133.Description := 'chimes';
AudioClip133.SetUrl(['chimes.wav', 'https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
Sound132.Source := AudioClip133;
Group32.FdChildren.Add(Sound132);
Sound134 := TSoundNode.Create;
Sound134.Location := Vector3(0, 1.6, 0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture135 := TMovieTextureNode.Create;
MovieTexture135.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture135.SetUrl(['mpgsys.mpg', 'https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "children" }
Sound134.Source := MovieTexture135;
Group32.FdChildren.Add(Sound134);
{ Test success: Anchor.isNode()=true, siteAnchor.isNode()=true }
{ Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false }
{ Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false }
{ Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true }
{ Test success: CommentsBlock.isNode()=false, testComments.isNode()=false }
{ Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true }
Shape136 := TShapeNode.Create;
Shape136.X3DName := 'ExtrusionShape';
{ ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' }
{ ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' }
Appearance137 := TAppearanceNode.Create;
Appearance137.X3DName := 'TransparentAppearance';
end;

procedure InitSmokeTestProgramOutput_JavaExportPart11;
begin
Material138 := TMaterialNode.Create;
Material138.Transparency := 1;
Appearance137.Material := Material138;
Shape136.Appearance := Appearance137;
Extrusion139 := TExtrusionNode.Create;
Extrusion139.X3DName := 'ExampleExtrusion';
Shape136.Geometry := Extrusion139;
Group32.FdChildren.Add(Shape136);
Group140 := TGroupNode.Create;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
ProtoDeclare141 := CreateEmptyPrototype('NewWorldInfo');
ProtoDeclare141.X3DName := 'NewWorldInfo';
FieldVal143 := TSFString.CreateUndefined(nil, False, 'description');
FieldDecl143 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl143.FieldOrEvent := FieldVal143;
FieldVal143.ParentInterfaceDeclaration := FieldDecl143;
ProtoDeclare141.InterfaceDeclarations.Add(FieldDecl143);
WorldInfo145 := TWorldInfoNode.Create;
ProtoDeclare141.Node.AddChildren([WorldInfo145]);
X3D0.AddPrototype(ProtoDeclare141);
ProtoInstance146 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare141);
ProtoInstance146.X3DName := 'Proto1';
(ProtoInstance146.Field('description') as TSFString).Value := 'testing 1 2 3';
Group140.FdChildren.Add(ProtoInstance146.Instantiate);
Group148 := TGroupNode.Create;
Group148.X3DName := 'Node2';
{ intentionally empty }
Group140.FdChildren.Add(Group148);
ProtoInstance149 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare141);
ProtoInstance149.X3DName := 'Proto3';
Group140.FdChildren.Add(ProtoInstance149.Instantiate);
Transform150 := TTransformNode.Create;
Transform150.X3DName := 'Node4';
{ intentionally empty }
Group140.FdChildren.Add(Transform150);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
Group32.FdChildren.Add(Group140);
ProtoDeclare151 := CreateEmptyPrototype('ShaderProto');
ProtoDeclare151.X3DName := 'ShaderProto';
ProgramShader153 := TProgramShaderNode.Create;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart12;
begin
ProtoDeclare151.Node.AddChildren([ProgramShader153]);
X3D0.AddPrototype(ProtoDeclare151);
Shape154 := TShapeNode.Create;
Appearance155 := TAppearanceNode.Create;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader156 := TProgramShaderNode.Create;
ProgramShader156.X3DName := 'TestShader1';
ShaderProgram157 := TShaderProgramNode.Create;
ShaderProgram157.X3DName := 'TestShader2';
ProgramShader156.Programs := ShaderProgram157;
Appearance155.FdShaders.Add(ProgramShader156);
ProtoInstance158 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare151);
ProtoInstance158.X3DName := 'TestShader3';
Appearance155.FdShaders.Add(ProtoInstance158.Instantiate);
ComposedShader159 := TComposedShaderNode.Create;
ComposedShader159.X3DName := 'TestShader4';
ShaderPart160 := TShaderPartNode.Create;
ShaderPart160.X3DName := 'TestShader5';
ShaderPart160.ShaderType := stVertex;
ComposedShader159.FdParts.Add(ShaderPart160);
Appearance155.FdShaders.Add(ComposedShader159);
Shape154.Appearance := Appearance155;
Group32.FdChildren.Add(Shape154);
Transform161 := TTransformNode.Create;
Transform161.X3DName := 'SpecialtyNodes';
CADLayer162 := TCADLayerNode.Create;
CADAssembly163 := TCADAssemblyNode.Create;
CADPart164 := TCADPartNode.Create;
CADFace165 := TCADFaceNode.Create;
CADPart164.FdChildren.Add(CADFace165);
CADAssembly163.FdChildren.Add(CADPart164);
CADLayer162.FdChildren.Add(CADAssembly163);
Transform161.FdChildren.Add(CADLayer162);
EspduTransform166 := TEspduTransformNode.Create;
Transform161.FdChildren.Add(EspduTransform166);
ReceiverPdu167 := TReceiverPduNode.Create;
Transform161.FdChildren.Add(ReceiverPdu167);
SignalPdu168 := TSignalPduNode.Create;
Transform161.FdChildren.Add(SignalPdu168);
end;

procedure InitSmokeTestProgramOutput_JavaExportPart13;
begin
TransmitterPdu169 := TTransmitterPduNode.Create;
Transform161.FdChildren.Add(TransmitterPdu169);
DISEntityManager170 := TDISEntityManagerNode.Create;
DISEntityTypeMapping171 := TDISEntityTypeMappingNode.Create;
DISEntityManager170.FdChildren.Add(DISEntityTypeMapping171);
Transform161.FdChildren.Add(DISEntityManager170);
Group32.FdChildren.Add(Transform161);
EspduTransform172 := TEspduTransformNode.Create;
WorldInfo173 := TWorldInfoNode.Create;
EspduTransform172.FdChildren.Add(WorldInfo173);
Group32.FdChildren.Add(EspduTransform172);
ReceiverPdu174 := TReceiverPduNode.Create;
Group32.FdChildren.Add(ReceiverPdu174);
SignalPdu175 := TSignalPduNode.Create;
Group32.FdChildren.Add(SignalPdu175);
TransmitterPdu176 := TTransmitterPduNode.Create;
Group32.FdChildren.Add(TransmitterPdu176);
DISEntityManager177 := TDISEntityManagerNode.Create;
DISEntityTypeMapping178 := TDISEntityTypeMappingNode.Create;
DISEntityManager177.FdChildren.Add(DISEntityTypeMapping178);
Group32.FdChildren.Add(DISEntityManager177);
LoadSensor179 := TLoadSensorNode.Create;
{ Contained nodes typically must be USE references for nodes previously DEFined in the scene }
{ The following nodes are test cases for all X3DUrlObject nodes }
LoadSensor179.FdChildren.Add(Anchor44);
LoadSensor179.FdChildren.Add(Inline106);
DISEntityTypeMapping182 := TDISEntityTypeMappingNode.Create;
LoadSensor179.FdChildren.Add(DISEntityTypeMapping182);
GeoMetadata183 := TGeoMetadataNode.Create;
LoadSensor179.FdChildren.Add(GeoMetadata183);
AudioClip184 := TAudioClipNode.Create;
LoadSensor179.FdChildren.Add(AudioClip184);
ImageCubeMapTexture185 := TImageCubeMapTextureNode.Create;
LoadSensor179.FdChildren.Add(ImageCubeMapTexture185);
ImageTexture3D186 := TImageTexture3DNode.Create;
LoadSensor179.FdChildren.Add(ImageTexture3D186);
ImageTexture187 := TImageTextureNode.Create;
LoadSensor179.FdChildren.Add(ImageTexture187);
MovieTexture188 := TMovieTextureNode.Create;
LoadSensor179.FdChildren.Add(MovieTexture188);
end;

procedure InitSmokeTestProgramOutput_JavaExportPart14;
begin
Script189 := TScriptNode.Create;
Script189.X3DName := 'DummyScript';
FreeAndNil(CompiledScript189);
CompiledScript189 := TScript189Script.Create;
Script189.SetUrl(['compiled:' + LineEnding +
  '']);
LoadSensor179.FdChildren.Add(Script189);
PackagedShader190 := TPackagedShaderNode.Create;
LoadSensor179.FdChildren.Add(PackagedShader190);
ShaderPart191 := TShaderPartNode.Create;
ShaderPart191.ShaderType := stVertex;
LoadSensor179.FdChildren.Add(ShaderPart191);
ShaderProgram192 := TShaderProgramNode.Create;
LoadSensor179.FdChildren.Add(ShaderProgram192);
Group32.FdChildren.Add(LoadSensor179);
OrthoViewpoint193 := TOrthoViewpointNode.Create;
OrthoViewpoint193.X3DName := 'SpecialTestOrthoViewpoint';
OrthoViewpoint193.SetFieldOfView([1, 3, 2, 4]);
Group32.FdChildren.Add(OrthoViewpoint193);
X3D0.AddChildren([Group32]);
end;

function CreateSmokeTestProgramOutput_JavaExport: TX3DRootNode;
begin
  InitSmokeTestProgramOutput_JavaExportPart0;
  InitSmokeTestProgramOutput_JavaExportPart1;
  InitSmokeTestProgramOutput_JavaExportPart2;
  InitSmokeTestProgramOutput_JavaExportPart3;
  InitSmokeTestProgramOutput_JavaExportPart4;
  InitSmokeTestProgramOutput_JavaExportPart5;
  InitSmokeTestProgramOutput_JavaExportPart6;
  InitSmokeTestProgramOutput_JavaExportPart7;
  InitSmokeTestProgramOutput_JavaExportPart8;
  InitSmokeTestProgramOutput_JavaExportPart9;
  InitSmokeTestProgramOutput_JavaExportPart10;
  InitSmokeTestProgramOutput_JavaExportPart11;
  InitSmokeTestProgramOutput_JavaExportPart12;
  InitSmokeTestProgramOutput_JavaExportPart13;
  InitSmokeTestProgramOutput_JavaExportPart14;
  Result := X3D0;
end;

procedure RegisterSmokeTestProgramOutput_JavaExportScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript76 <> nil then
    CompiledScript76.RegisterHandlers(Scene);
  if CompiledScript120 <> nil then
    CompiledScript120.RegisterHandlers(Scene);
  if CompiledScript189 <> nil then
    CompiledScript189.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript76);
  FreeAndNil(CompiledScript120);
  FreeAndNil(CompiledScript189);
end.
