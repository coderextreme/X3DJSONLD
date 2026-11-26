unit SmokeTestProgramOutput_ReloadedDOM;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function CreateSmokeTestProgramOutput_ReloadedDOM: TX3DRootNode;
procedure RegisterSmokeTestProgramOutput_ReloadedDOMScripts(const Scene: TCastleSceneCore);

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
  TScript77Script = class
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

  TScript121Script = class
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

  TScript190Script = class
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
  MetadataString66: TMetadataStringNode;
  FontStyle67: TFontStyleNode;
  Collision68: TCollisionNode;
  Shape69: TShapeNode;
  Text70: TTextNode;
  OrientationInterpolator71: TOrientationInterpolatorNode;
  TimeSensor72: TTimeSensorNode;
  Group75: TGroupNode;
  Background76: TBackgroundNode;
  Script77: TScriptNode;
  FieldVal78: TX3DEvent;
  FieldVal79: TX3DEvent;
  CompiledScript77: TScript77Script;
  ColorInterpolator80: TColorInterpolatorNode;
  TimeSensor81: TTimeSensorNode;
  ProtoDeclare85: TX3DPrototype;
  FieldDecl87: TX3DInterfaceDeclaration;
  FieldVal87: TSFString;
  FieldDecl88: TX3DInterfaceDeclaration;
  FieldVal88: TSFBool;
  Material90: TMaterialNode;
  TouchSensor91: TTouchSensorNode;
  X3DExternalPrototype92: TX3DExternalPrototype;
  FieldVal93: TSFString;
  Shape94: TShapeNode;
  Appearance95: TAppearanceNode;
  ProtoInstance96: TX3DPrototypeNode;
  Sphere98: TSphereNode;
  Shape99: TShapeNode;
  Appearance100: TAppearanceNode;
  ProtoInstance101: TX3DPrototypeNode;
  Cone102: TConeNode;
  Shape103: TShapeNode;
  Appearance104: TAppearanceNode;
  Cylinder106: TCylinderNode;
  Inline107: TInlineNode;
  Import108: TX3DImport;
  ProtoDeclare110: TX3DPrototype;
  FieldDecl112: TX3DInterfaceDeclaration;
  FieldVal112: TSFBool;
  FieldDecl113: TX3DInterfaceDeclaration;
  FieldVal113: TSFColor;
  FieldDecl114: TX3DInterfaceDeclaration;
  FieldVal114: TSFColor;
  FieldDecl115: TX3DInterfaceDeclaration;
  FieldVal115: TSFColor;
  FieldDecl116: TX3DInterfaceDeclaration;
  FieldVal116: TSFFloat;
  FieldDecl117: TX3DInterfaceDeclaration;
  FieldVal117: TSFFloat;
  FieldDecl118: TX3DInterfaceDeclaration;
  FieldVal118: TSFFloat;
  Material120: TMaterialNode;
  Script121: TScriptNode;
  FieldVal122: TSFBool;
  FieldVal123: TSFColor;
  FieldVal124: TX3DEvent;
  FieldVal125: TX3DEvent;
  CompiledScript121: TScript121Script;
  Group126: TGroupNode;
  Shape127: TShapeNode;
  MetadataString128: TMetadataStringNode;
  Appearance129: TAppearanceNode;
  ProtoInstance130: TX3DPrototypeNode;
  Cone131: TConeNode;
  Group132: TGroupNode;
  Sound133: TSoundNode;
  AudioClip134: TAudioClipNode;
  Sound135: TSoundNode;
  MovieTexture136: TMovieTextureNode;
  Shape137: TShapeNode;
  Appearance138: TAppearanceNode;
  Material139: TMaterialNode;
  Extrusion140: TExtrusionNode;
  Group141: TGroupNode;
  ProtoDeclare142: TX3DPrototype;
  FieldDecl144: TX3DInterfaceDeclaration;
  FieldVal144: TSFString;
  WorldInfo146: TWorldInfoNode;
  ProtoInstance147: TX3DPrototypeNode;
  Group149: TGroupNode;
  ProtoInstance150: TX3DPrototypeNode;
  Transform151: TTransformNode;
  ProtoDeclare152: TX3DPrototype;
  ProgramShader154: TProgramShaderNode;
  Shape155: TShapeNode;
  Appearance156: TAppearanceNode;
  ProgramShader157: TProgramShaderNode;
  ShaderProgram158: TShaderProgramNode;
  ProtoInstance159: TX3DPrototypeNode;
  ComposedShader160: TComposedShaderNode;
  ShaderPart161: TShaderPartNode;
  Transform162: TTransformNode;
  CADLayer163: TCADLayerNode;
  CADAssembly164: TCADAssemblyNode;
  CADPart165: TCADPartNode;
  CADFace166: TCADFaceNode;
  EspduTransform167: TEspduTransformNode;
  ReceiverPdu168: TReceiverPduNode;
  SignalPdu169: TSignalPduNode;
  TransmitterPdu170: TTransmitterPduNode;
  DISEntityManager171: TDISEntityManagerNode;
  DISEntityTypeMapping172: TDISEntityTypeMappingNode;
  EspduTransform173: TEspduTransformNode;
  WorldInfo174: TWorldInfoNode;
  ReceiverPdu175: TReceiverPduNode;
  SignalPdu176: TSignalPduNode;
  TransmitterPdu177: TTransmitterPduNode;
  DISEntityManager178: TDISEntityManagerNode;
  DISEntityTypeMapping179: TDISEntityTypeMappingNode;
  LoadSensor180: TLoadSensorNode;
  DISEntityTypeMapping183: TDISEntityTypeMappingNode;
  GeoMetadata184: TGeoMetadataNode;
  AudioClip185: TAudioClipNode;
  ImageCubeMapTexture186: TImageCubeMapTextureNode;
  ImageTexture3D187: TImageTexture3DNode;
  ImageTexture188: TImageTextureNode;
  MovieTexture189: TMovieTextureNode;
  Script190: TScriptNode;
  CompiledScript190: TScript190Script;
  PackagedShader191: TPackagedShaderNode;
  ShaderPart192: TShaderPartNode;
  ShaderProgram193: TShaderProgramNode;
  OrthoViewpoint194: TOrthoViewpointNode;

constructor TScript77Script.Create(const AEvent_colorsOutput: TX3DEvent);
begin
  inherited Create;
  FcolorsOutput := 0;
  FEvent_colorsOutput := nil;
  FBack_colorsOutput := TMFColor.Create(nil, False, 'colorsOutput', 0);
  FDirty_colorsOutput := False;
  FEvent_colorsOutput := AEvent_colorsOutput;
end;

destructor TScript77Script.Destroy;
begin
  FreeAndNil(FBack_colorsOutput);
  inherited Destroy;
end;

procedure TScript77Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript77Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script77_colorInput', {$ifdef FPC}@{$endif}ColorInput);
end;

procedure TScript77Script.ColorInput(Value: TX3DField; const Time: TX3DTime);
begin
  FcolorsOutput := [(Value as TSFColor).Value]; FDirty_colorsOutput := True;
  FlushOutputs(Time);
end;

constructor TScript121Script.Create(const AField_enabled: TSFBool; const AField_diffuseColor: TSFColor; const AEvent_newColor: TX3DEvent);
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

destructor TScript121Script.Destroy;
begin
  FreeAndNil(FBack_newColor);
  inherited Destroy;
end;

procedure TScript121Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript121Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script121_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script121_set_enabled', {$ifdef FPC}@{$endif}Set_enabled);
  Scene.RegisterCompiledScript('Script121_clockTrigger', {$ifdef FPC}@{$endif}ClockTrigger);
end;

procedure TScript121Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  FnewColor := FdiffuseColor; FDirty_newColor := True;
  FlushOutputs(Time);
end;

procedure TScript121Script.Set_enabled(Value: TX3DField; const Time: TX3DTime);
begin
  Fenabled := (Value as TSFBool).Value; FDirty_enabled := True;
  FlushOutputs(Time);
end;

procedure TScript121Script.ClockTrigger(Value: TX3DField; const Time: TX3DTime);
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

constructor TScript190Script.Create;
begin
  inherited Create;
end;

destructor TScript190Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript190Script.FlushOutputs(const Time: TX3DTime);
begin
end;

procedure TScript190Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart0;
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

procedure InitSmokeTestProgramOutput_ReloadedDOMPart1;
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

procedure InitSmokeTestProgramOutput_ReloadedDOMPart2;
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

procedure InitSmokeTestProgramOutput_ReloadedDOMPart3;
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
MetadataString65.X3DName := 'quotesTestC';
MetadataString65.SetValue(['MFString example C, backslash-escaped quotes: He said, "Immel did it!"']);
MetadataSet64.FdValue.Add(MetadataString65);
MetadataString66 := TMetadataStringNode.Create;
MetadataString66.X3DName := 'extraChildTest';
MetadataString66.SetValue(['checks MetadataSet addValue() method']);
MetadataSet64.FdValue.Add(MetadataString66);
Text63.Metadata := MetadataSet64;
FontStyle67 := TFontStyleNode.Create;
FontStyle67.Justify := fjMiddle;
FontStyle67.JustifyMinor := fjMiddle;
Text63.FontStyle := FontStyle67;
Shape60.Geometry := Text63;
Transform59.FdChildren.Add(Shape60);
Collision68 := TCollisionNode.Create;
{ test containerField='proxy' }
Shape69 := TShapeNode.Create;
Shape69.X3DName := 'ProxyShape';
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart4;
begin
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text70 := TTextNode.Create;
Text70.SetText(['One, Two, Text', 'He said, "Immel did it!" ""']);
Shape69.Geometry := Text70;
Collision68.Proxy := Shape69;
Transform59.FdChildren.Add(Collision68);
{ It's a beautiful world }
{ ... for you! }
{ https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) }
Group32.FdChildren.Add(Transform59);
{ repeatedly spin 180 degrees as a readable special effect }
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;
OrientationInterpolator71.X3DName := 'SpinInterpolator';
OrientationInterpolator71.SetKey([0, 0.5, 1]);
OrientationInterpolator71.SetKeyValue([Vector4(0, 1, 0, 4.7124), Vector4(0, 1, 0, 0), Vector4(0, 1, 0, 1.5708)]);
Group32.FdChildren.Add(OrientationInterpolator71);
TimeSensor72 := TTimeSensorNode.Create;
TimeSensor72.X3DName := 'SpinClock';
TimeSensor72.CycleInterval := 5;
TimeSensor72.Loop := True;
Group32.FdChildren.Add(TimeSensor72);
{ ROUTE SpinClock.fraction_changed TO SpinInterpolator.set_fraction }
Group32.AddRoute(TimeSensor72.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ ROUTE SpinInterpolator.value_changed TO TextTransform.rotation }
Group32.AddRoute(OrientationInterpolator71.EventValue_changed, Transform59.rotation);
Group75 := TGroupNode.Create;
Group75.X3DName := 'BackgroundGroup';
Background76 := TBackgroundNode.Create;
Background76.X3DName := 'GradualBackground';
Group75.FdChildren.Add(Background76);
Script77 := TScriptNode.Create;
Script77.X3DName := 'colorTypeConversionScript';
FieldVal78 := TSFColor.CreateEvent(Script77, 'colorInput', True);
Script77.AddCustomFieldOrEvent(FieldVal78);
FieldVal79 := TMFColor.CreateEvent(Script77, 'colorsOutput', False);
Script77.AddCustomFieldOrEvent(FieldVal79);
FreeAndNil(CompiledScript77);
CompiledScript77 := TScript77Script.Create(FieldVal79);
Script77.SetUrl(['compiled:' + LineEnding +
  'colorInput=Script77_colorInput']);
Group75.FdChildren.Add(Script77);
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart5;
begin
ColorInterpolator80 := TColorInterpolatorNode.Create;
ColorInterpolator80.X3DName := 'ColorAnimator';
ColorInterpolator80.SetKey([0, 0.5, 1]);
ColorInterpolator80.SetKeyValue([Vector3(0.9412, 1, 1), Vector3(0.2941, 0, 0.5098), Vector3(0.9412, 1, 1)]);
{ AZURE to INDIGO and back again }
Group75.FdChildren.Add(ColorInterpolator80);
TimeSensor81 := TTimeSensorNode.Create;
TimeSensor81.X3DName := 'ColorClock';
TimeSensor81.CycleInterval := 60;
TimeSensor81.Loop := True;
Group75.FdChildren.Add(TimeSensor81);
{ ROUTE colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor }
Group75.AddRoute(FieldVal79, Background76.skyColor);
{ ROUTE ColorAnimator.value_changed TO colorTypeConversionScript.colorInput }
Group75.AddRoute(ColorInterpolator80.EventValue_changed, FieldVal78);
{ ROUTE ColorClock.fraction_changed TO ColorAnimator.set_fraction }
Group75.AddRoute(TimeSensor81.EventFraction_changed, ColorInterpolator80.EventSet_fraction);
Group32.FdChildren.Add(Group75);
ProtoDeclare85 := CreateEmptyPrototype('ArtDeco01');
ProtoDeclare85.X3DName := 'ArtDeco01';
ProtoDeclare85.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
FieldVal87 := TSFString.Create(nil, True, 'description', 'ArtDeco01Material prototype is a Material node');
FieldDecl87 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl87.FieldOrEvent := FieldVal87;
FieldVal87.ParentInterfaceDeclaration := FieldDecl87;
ProtoDeclare85.InterfaceDeclarations.Add(FieldDecl87);
FieldVal88 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl88 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl88.FieldOrEvent := FieldVal88;
FieldVal88.ParentInterfaceDeclaration := FieldDecl88;
ProtoDeclare85.InterfaceDeclarations.Add(FieldDecl88);
{ Initial node of ProtoBody determines prototype node type }
Material90 := TMaterialNode.Create;
Material90.AmbientIntensity := 0.25;
Material90.DiffuseColor := Vector3(0.2824, 0.0852, 0.1345);
Material90.Shininess := 0.1273;
Material90.SpecularColor := Vector3(0.2763, 0.1143, 0.1399);
ProtoDeclare85.Node.AddChildren([Material90]);
{ [SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart6;
begin
TouchSensor91 := TTouchSensorNode.Create;
TouchSensor91.Description := 'within ProtoBody';
TouchSensor91.FieldOrEvent('description', True).IsClauseNamesAdd('description');
TouchSensor91.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
ProtoDeclare85.Node.AddChildren([TouchSensor91]);
X3D0.AddPrototype(ProtoDeclare85);
X3DExternalPrototype92 := TX3DExternalPrototype.Create;
X3DExternalPrototype92.X3DName := 'ArtDeco02';
X3DExternalPrototype92.Appinfo := 'this is a different Material node';
X3DExternalPrototype92.Url := '"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02" "https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02"';
{ [SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
FieldVal93 := TSFString.CreateUndefined(X3DExternalPrototype92, True, 'description');
X3DExternalPrototype92.AddCustomFieldOrEvent(FieldVal93);
Group32.AddX3DExternalPrototype([X3DExternalPrototype92]);
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape94 := TShapeNode.Create;
Shape94.X3DName := 'TestShape1';
Appearance95 := TAppearanceNode.Create;
Appearance95.X3DName := 'TestAppearance1';
{ ArtDeco01Material prototype goes here... }
ProtoInstance96 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare85);
{ [SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
(ProtoInstance96.Field('description') as TSFString).Value := 'ArtDeco01Material can substitute for a Material node';
Appearance95.Material := ProtoInstance96.Instantiate;
Shape94.Appearance := Appearance95;
Sphere98 := TSphereNode.Create;
Sphere98.Radius := 0.001;
Shape94.Geometry := Sphere98;
Group32.FdChildren.Add(Shape94);
Shape99 := TShapeNode.Create;
Shape99.X3DName := 'TestShape2';
Appearance100 := TAppearanceNode.Create;
Appearance100.X3DName := 'TestAppearance2';
{ ArtDeco02Material ProtoInstance goes here... }
ProtoInstance101 := TX3DPrototypeNode.CreatePrototypeNode('', '', X3DExternalPrototype92);
ProtoInstance101.X3DName := 'ArtDeco02MaterialDEF';
{ [SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
Appearance100.Material := ProtoInstance101.Instantiate;
Shape99.Appearance := Appearance100;
Cone102 := TConeNode.Create;
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart7;
begin
Cone102.BottomRadius := 0.001;
Cone102.Height := 0.001;
Shape99.Geometry := Cone102;
Group32.FdChildren.Add(Shape99);
Shape103 := TShapeNode.Create;
Shape103.X3DName := 'TestShape3';
Appearance104 := TAppearanceNode.Create;
Appearance104.X3DName := 'TestAppearance3';
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE. }
Appearance104.Material := ProtoInstance101;
Shape103.Appearance := Appearance104;
Cylinder106 := TCylinderNode.Create;
Cylinder106.Height := 0.001;
Cylinder106.Radius := 0.001;
Shape103.Geometry := Cylinder106;
Group32.FdChildren.Add(Shape103);
Inline107 := TInlineNode.Create;
Inline107.X3DName := 'inlineScene';
Inline107.SetUrl(['newScene.x3d', 'https://www.web3d.org/specifications/java/examples/newScene.x3d']);
Group32.FdChildren.Add(Inline107);
Import108 := TX3DImport.Create;
Import108.InlineNodeName := 'inlineScene';
Import108.ImportedNodeName := 'WorldInfoDEF';
Import108.ImportedNodeAlias := 'WorldInfoDEF2';
X3D0.AddImport(Import108);
X3D0.ExportNode(WorldInfo38, 'WorldInfoDEF3');
ProtoDeclare110 := CreateEmptyPrototype('MaterialModulator');
ProtoDeclare110.X3DName := 'MaterialModulator';
ProtoDeclare110.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
ProtoDeclare110.Documentation := 'https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
FieldVal112 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl112 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl112.FieldOrEvent := FieldVal112;
FieldVal112.ParentInterfaceDeclaration := FieldDecl112;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl112);
FieldVal113 := TSFColor.Create(nil, True, 'diffuseColor', Vector3(0, 0, 0));
FieldDecl113 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl113.FieldOrEvent := FieldVal113;
FieldVal113.ParentInterfaceDeclaration := FieldDecl113;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl113);
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart8;
begin
FieldVal114 := TSFColor.Create(nil, True, 'emissiveColor', Vector3(0.05, 0.05, 0.5));
FieldDecl114 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl114.FieldOrEvent := FieldVal114;
FieldVal114.ParentInterfaceDeclaration := FieldDecl114;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl114);
FieldVal115 := TSFColor.Create(nil, True, 'specularColor', Vector3(0, 0, 0));
FieldDecl115 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl115.FieldOrEvent := FieldVal115;
FieldVal115.ParentInterfaceDeclaration := FieldDecl115;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl115);
FieldVal116 := TSFFloat.Create(nil, True, 'transparency', 0);
FieldDecl116 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl116.FieldOrEvent := FieldVal116;
FieldVal116.ParentInterfaceDeclaration := FieldDecl116;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl116);
FieldVal117 := TSFFloat.Create(nil, True, 'shininess', 0);
FieldDecl117 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl117.FieldOrEvent := FieldVal117;
FieldVal117.ParentInterfaceDeclaration := FieldDecl117;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl117);
FieldVal118 := TSFFloat.Create(nil, True, 'ambientIntensity', 0);
FieldDecl118 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl118.FieldOrEvent := FieldVal118;
FieldVal118.ParentInterfaceDeclaration := FieldDecl118;
ProtoDeclare110.InterfaceDeclarations.Add(FieldDecl118);
Material120 := TMaterialNode.Create;
Material120.X3DName := 'MaterialNode';
Material120.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('diffuseColor');
Material120.FieldOrEvent('emissiveColor', True).IsClauseNamesAdd('emissiveColor');
Material120.FieldOrEvent('specularColor', True).IsClauseNamesAdd('specularColor');
Material120.FieldOrEvent('transparency', True).IsClauseNamesAdd('transparency');
Material120.FieldOrEvent('shininess', True).IsClauseNamesAdd('shininess');
Material120.FieldOrEvent('ambientIntensity', True).IsClauseNamesAdd('ambientIntensity');
ProtoDeclare110.Node.AddChildren([Material120]);
{ Only first node (the node type for the prototype) is renderable, others are along for the ride }
Script121 := TScriptNode.Create;
Script121.X3DName := 'MaterialModulatorScript';
FieldVal122 := TSFBool.CreateUndefined(Script121, True, 'enabled');
Script121.AddCustomFieldOrEvent(FieldVal122);
FieldVal123 := TSFColor.CreateUndefined(Script121, True, 'diffuseColor');
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart9;
begin
Script121.AddCustomFieldOrEvent(FieldVal123);
FieldVal124 := TSFColor.CreateEvent(Script121, 'newColor', False);
Script121.AddCustomFieldOrEvent(FieldVal124);
FieldVal125 := TSFTime.CreateEvent(Script121, 'clockTrigger', True);
Script121.AddCustomFieldOrEvent(FieldVal125);
Script121.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
Script121.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('diffuseColor');
FreeAndNil(CompiledScript121);
CompiledScript121 := TScript121Script.Create(FieldVal122, FieldVal123, FieldVal124);
Script121.SetUrl(['compiled:' + LineEnding +
  'initialize=Script121_initialize' + LineEnding +
  'set_enabled=Script121_set_enabled' + LineEnding +
  'clockTrigger=Script121_clockTrigger']);
ProtoDeclare110.Node.AddChildren([Script121]);
X3D0.AddPrototype(ProtoDeclare110);
{ Test success: declarative statement createDeclarativeShapeTests() }
Group126 := TGroupNode.Create;
Group126.X3DName := 'DeclarativeGroupExample';
Shape127 := TShapeNode.Create;
MetadataString128 := TMetadataStringNode.Create;
MetadataString128.X3DName := 'findThisNameValue';
MetadataString128.X3DName := 'FindableMetadataStringTest';
MetadataString128.SetValue(['test case']);
Shape127.Value := MetadataString128;
Appearance129 := TAppearanceNode.Create;
Appearance129.X3DName := 'DeclarativeAppearanceExample';
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
ProtoInstance130 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare110);
ProtoInstance130.X3DName := 'MyMaterialModulator';
Appearance129.Material := ProtoInstance130.Instantiate;
Shape127.Appearance := Appearance129;
Cone131 := TConeNode.Create;
Cone131.Bottom := False;
Cone131.BottomRadius := 0.05;
Cone131.Height := 0.1;
Shape127.Geometry := Cone131;
Group126.FdChildren.Add(Shape127);
{ Test success: declarativeGroup.addChild() singleton pipeline method }
Group32.FdChildren.Add(Group126);
{ Test success: declarative statement addChild() }
{ Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance> }
{ Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> }
{ Test success: x3dModel.findElementByNameValue("ArtDeco01", "ProtoDeclare") found }
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart10;
begin
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found }
Group132 := TGroupNode.Create;
Group132.X3DName := 'TestFieldObjectsGroup';
{ testFieldObjects() results }
{ SFBool default=false, true=true, false=false, negate()=true }
{ MFBool default=, initial=true false true, negate()=false true false }
{ SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4 }
{ MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 }
{ ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= }
{ SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true }
{ regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotation.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value }
Group32.FdChildren.Add(Group132);
Sound133 := TSoundNode.Create;
Sound133.Location := Vector3(0, 1.6, 0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip134 := TAudioClipNode.Create;
AudioClip134.Description := 'chimes';
AudioClip134.SetUrl(['chimes.wav', 'https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
Sound133.Source := AudioClip134;
Group32.FdChildren.Add(Sound133);
Sound135 := TSoundNode.Create;
Sound135.Location := Vector3(0, 1.6, 0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture136 := TMovieTextureNode.Create;
MovieTexture136.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture136.SetUrl(['mpgsys.mpg', 'https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "children" }
Sound135.Source := MovieTexture136;
Group32.FdChildren.Add(Sound135);
{ Test success: Anchor.isNode()=true, siteAnchor.isNode()=true }
{ Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false }
{ Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false }
{ Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true }
{ Test success: CommentsBlock.isNode()=false, testComments.isNode()=false }
{ Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true }
Shape137 := TShapeNode.Create;
Shape137.X3DName := 'ExtrusionShape';
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart11;
begin
{ ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' }
{ ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' }
Appearance138 := TAppearanceNode.Create;
Appearance138.X3DName := 'TransparentAppearance';
Material139 := TMaterialNode.Create;
Material139.Transparency := 1;
Appearance138.Material := Material139;
Shape137.Appearance := Appearance138;
Extrusion140 := TExtrusionNode.Create;
Extrusion140.X3DName := 'ExampleExtrusion';
Shape137.Geometry := Extrusion140;
Group32.FdChildren.Add(Shape137);
Group141 := TGroupNode.Create;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
ProtoDeclare142 := CreateEmptyPrototype('NewWorldInfo');
ProtoDeclare142.X3DName := 'NewWorldInfo';
FieldVal144 := TSFString.CreateUndefined(nil, False, 'description');
FieldDecl144 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl144.FieldOrEvent := FieldVal144;
FieldVal144.ParentInterfaceDeclaration := FieldDecl144;
ProtoDeclare142.InterfaceDeclarations.Add(FieldDecl144);
WorldInfo146 := TWorldInfoNode.Create;
ProtoDeclare142.Node.AddChildren([WorldInfo146]);
X3D0.AddPrototype(ProtoDeclare142);
ProtoInstance147 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare142);
ProtoInstance147.X3DName := 'Proto1';
(ProtoInstance147.Field('description') as TSFString).Value := 'testing 1 2 3';
Group141.FdChildren.Add(ProtoInstance147.Instantiate);
Group149 := TGroupNode.Create;
Group149.X3DName := 'Node2';
{ intentionally empty }
Group141.FdChildren.Add(Group149);
ProtoInstance150 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare142);
ProtoInstance150.X3DName := 'Proto3';
Group141.FdChildren.Add(ProtoInstance150.Instantiate);
Transform151 := TTransformNode.Create;
Transform151.X3DName := 'Node4';
{ intentionally empty }
Group141.FdChildren.Add(Transform151);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart12;
begin
Group32.FdChildren.Add(Group141);
ProtoDeclare152 := CreateEmptyPrototype('ShaderProto');
ProtoDeclare152.X3DName := 'ShaderProto';
ProgramShader154 := TProgramShaderNode.Create;
ProtoDeclare152.Node.AddChildren([ProgramShader154]);
X3D0.AddPrototype(ProtoDeclare152);
Shape155 := TShapeNode.Create;
Appearance156 := TAppearanceNode.Create;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader157 := TProgramShaderNode.Create;
ProgramShader157.X3DName := 'TestShader1';
ShaderProgram158 := TShaderProgramNode.Create;
ShaderProgram158.X3DName := 'TestShader2';
ProgramShader157.Programs := ShaderProgram158;
Appearance156.FdShaders.Add(ProgramShader157);
ProtoInstance159 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare152);
ProtoInstance159.X3DName := 'TestShader3';
Appearance156.FdShaders.Add(ProtoInstance159.Instantiate);
ComposedShader160 := TComposedShaderNode.Create;
ComposedShader160.X3DName := 'TestShader4';
ShaderPart161 := TShaderPartNode.Create;
ShaderPart161.X3DName := 'TestShader5';
ShaderPart161.ShaderType := stVertex;
ComposedShader160.FdParts.Add(ShaderPart161);
Appearance156.FdShaders.Add(ComposedShader160);
Shape155.Appearance := Appearance156;
Group32.FdChildren.Add(Shape155);
Transform162 := TTransformNode.Create;
Transform162.X3DName := 'SpecialtyNodes';
CADLayer163 := TCADLayerNode.Create;
CADAssembly164 := TCADAssemblyNode.Create;
CADPart165 := TCADPartNode.Create;
CADFace166 := TCADFaceNode.Create;
CADPart165.FdChildren.Add(CADFace166);
CADAssembly164.FdChildren.Add(CADPart165);
CADLayer163.FdChildren.Add(CADAssembly164);
Transform162.FdChildren.Add(CADLayer163);
EspduTransform167 := TEspduTransformNode.Create;
Transform162.FdChildren.Add(EspduTransform167);
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart13;
begin
ReceiverPdu168 := TReceiverPduNode.Create;
Transform162.FdChildren.Add(ReceiverPdu168);
SignalPdu169 := TSignalPduNode.Create;
Transform162.FdChildren.Add(SignalPdu169);
TransmitterPdu170 := TTransmitterPduNode.Create;
Transform162.FdChildren.Add(TransmitterPdu170);
DISEntityManager171 := TDISEntityManagerNode.Create;
DISEntityTypeMapping172 := TDISEntityTypeMappingNode.Create;
DISEntityManager171.FdChildren.Add(DISEntityTypeMapping172);
Transform162.FdChildren.Add(DISEntityManager171);
Group32.FdChildren.Add(Transform162);
EspduTransform173 := TEspduTransformNode.Create;
WorldInfo174 := TWorldInfoNode.Create;
EspduTransform173.FdChildren.Add(WorldInfo174);
Group32.FdChildren.Add(EspduTransform173);
ReceiverPdu175 := TReceiverPduNode.Create;
Group32.FdChildren.Add(ReceiverPdu175);
SignalPdu176 := TSignalPduNode.Create;
Group32.FdChildren.Add(SignalPdu176);
TransmitterPdu177 := TTransmitterPduNode.Create;
Group32.FdChildren.Add(TransmitterPdu177);
DISEntityManager178 := TDISEntityManagerNode.Create;
DISEntityTypeMapping179 := TDISEntityTypeMappingNode.Create;
DISEntityManager178.FdChildren.Add(DISEntityTypeMapping179);
Group32.FdChildren.Add(DISEntityManager178);
LoadSensor180 := TLoadSensorNode.Create;
{ Contained nodes typically must be USE references for nodes previously DEFined in the scene }
{ The following nodes are test cases for all X3DUrlObject nodes }
LoadSensor180.FdChildren.Add(Anchor44);
LoadSensor180.FdChildren.Add(Inline107);
DISEntityTypeMapping183 := TDISEntityTypeMappingNode.Create;
LoadSensor180.FdChildren.Add(DISEntityTypeMapping183);
GeoMetadata184 := TGeoMetadataNode.Create;
LoadSensor180.FdChildren.Add(GeoMetadata184);
AudioClip185 := TAudioClipNode.Create;
LoadSensor180.FdChildren.Add(AudioClip185);
ImageCubeMapTexture186 := TImageCubeMapTextureNode.Create;
LoadSensor180.FdChildren.Add(ImageCubeMapTexture186);
ImageTexture3D187 := TImageTexture3DNode.Create;
LoadSensor180.FdChildren.Add(ImageTexture3D187);
end;

procedure InitSmokeTestProgramOutput_ReloadedDOMPart14;
begin
ImageTexture188 := TImageTextureNode.Create;
LoadSensor180.FdChildren.Add(ImageTexture188);
MovieTexture189 := TMovieTextureNode.Create;
LoadSensor180.FdChildren.Add(MovieTexture189);
Script190 := TScriptNode.Create;
Script190.X3DName := 'DummyScript';
FreeAndNil(CompiledScript190);
CompiledScript190 := TScript190Script.Create;
Script190.SetUrl(['compiled:' + LineEnding +
  '']);
LoadSensor180.FdChildren.Add(Script190);
PackagedShader191 := TPackagedShaderNode.Create;
LoadSensor180.FdChildren.Add(PackagedShader191);
ShaderPart192 := TShaderPartNode.Create;
ShaderPart192.ShaderType := stVertex;
LoadSensor180.FdChildren.Add(ShaderPart192);
ShaderProgram193 := TShaderProgramNode.Create;
LoadSensor180.FdChildren.Add(ShaderProgram193);
Group32.FdChildren.Add(LoadSensor180);
OrthoViewpoint194 := TOrthoViewpointNode.Create;
OrthoViewpoint194.X3DName := 'SpecialTestOrthoViewpoint';
OrthoViewpoint194.SetFieldOfView([1, 3, 2, 4]);
Group32.FdChildren.Add(OrthoViewpoint194);
X3D0.AddChildren([Group32]);
end;

function CreateSmokeTestProgramOutput_ReloadedDOM: TX3DRootNode;
begin
  InitSmokeTestProgramOutput_ReloadedDOMPart0;
  InitSmokeTestProgramOutput_ReloadedDOMPart1;
  InitSmokeTestProgramOutput_ReloadedDOMPart2;
  InitSmokeTestProgramOutput_ReloadedDOMPart3;
  InitSmokeTestProgramOutput_ReloadedDOMPart4;
  InitSmokeTestProgramOutput_ReloadedDOMPart5;
  InitSmokeTestProgramOutput_ReloadedDOMPart6;
  InitSmokeTestProgramOutput_ReloadedDOMPart7;
  InitSmokeTestProgramOutput_ReloadedDOMPart8;
  InitSmokeTestProgramOutput_ReloadedDOMPart9;
  InitSmokeTestProgramOutput_ReloadedDOMPart10;
  InitSmokeTestProgramOutput_ReloadedDOMPart11;
  InitSmokeTestProgramOutput_ReloadedDOMPart12;
  InitSmokeTestProgramOutput_ReloadedDOMPart13;
  InitSmokeTestProgramOutput_ReloadedDOMPart14;
  Result := X3D0;
end;

procedure RegisterSmokeTestProgramOutput_ReloadedDOMScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript77 <> nil then
    CompiledScript77.RegisterHandlers(Scene);
  if CompiledScript121 <> nil then
    CompiledScript121.RegisterHandlers(Scene);
  if CompiledScript190 <> nil then
    CompiledScript190.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript77);
  FreeAndNil(CompiledScript121);
  FreeAndNil(CompiledScript190);
end.
