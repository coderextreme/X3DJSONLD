unit SmokeTestProgramOutputCanonical;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateSmokeTestProgramOutputCanonical: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

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

var
  X3D0: TX3DRootNode;
  Group26: TGroupNode;
  ViewpointGroup27: TViewpointGroupNode;
  Viewpoint28: TViewpointNode;
  Viewpoint29: TViewpointNode;
  NavigationInfo30: TNavigationInfoNode;
  WorldInfo31: TWorldInfoNode;
  MetadataString34: TMetadataStringNode;
  LayerSet35: TLayerSetNode;
  Transform36: TTransformNode;
  Anchor37: TAnchorNode;
  Shape38: TShapeNode;
  Appearance39: TAppearanceNode;
  Material40: TMaterialNode;
  ImageTexture41: TImageTextureNode;
  Box42: TBoxNode;
  Shape43: TShapeNode;
  Appearance44: TAppearanceNode;
  Material45: TMaterialNode;
  IndexedLineSet46: TIndexedLineSetNode;
  Coordinate47: TCoordinateNode;
  PositionInterpolator48: TPositionInterpolatorNode;
  TimeSensor49: TTimeSensorNode;
  Transform52: TTransformNode;
  Shape53: TShapeNode;
  Appearance54: TAppearanceNode;
  Text56: TTextNode;
  MetadataSet57: TMetadataSetNode;
  MetadataString58: TMetadataStringNode;
  MetadataString59: TMetadataStringNode;
  FontStyle60: TFontStyleNode;
  Collision61: TCollisionNode;
  Shape62: TShapeNode;
  Text63: TTextNode;
  OrientationInterpolator64: TOrientationInterpolatorNode;
  TimeSensor65: TTimeSensorNode;
  Group68: TGroupNode;
  Background69: TBackgroundNode;
  Script70: TScriptNode;
  FieldVal71: TX3DEvent;
  FieldVal72: TX3DEvent;
  ColorInterpolator73: TColorInterpolatorNode;
  TimeSensor74: TTimeSensorNode;
  ProtoDeclare78: TX3DPrototype;
  FieldDecl80: TX3DInterfaceDeclaration;
  FieldVal80: TSFString;
  FieldDecl81: TX3DInterfaceDeclaration;
  FieldVal81: TSFBool;
  Material83: TMaterialNode;
  TouchSensor84: TTouchSensorNode;
  X3DExternalPrototype85: TX3DExternalPrototype;
  FieldVal86: TSFString;
  Shape87: TShapeNode;
  Appearance88: TAppearanceNode;
  ProtoInstance89: TX3DPrototypeNode;
  Sphere91: TSphereNode;
  Shape92: TShapeNode;
  Appearance93: TAppearanceNode;
  ProtoInstance94: TX3DPrototypeNode;
  Cone96: TConeNode;
  Shape97: TShapeNode;
  Appearance98: TAppearanceNode;
  Cylinder100: TCylinderNode;
  Inline101: TInlineNode;
  Import102: TX3DImport;
  ProtoDeclare104: TX3DPrototype;
  FieldDecl106: TX3DInterfaceDeclaration;
  FieldVal106: TSFBool;
  FieldDecl107: TX3DInterfaceDeclaration;
  FieldVal107: TSFColor;
  FieldDecl108: TX3DInterfaceDeclaration;
  FieldVal108: TSFColor;
  FieldDecl109: TX3DInterfaceDeclaration;
  FieldVal109: TSFColor;
  FieldDecl110: TX3DInterfaceDeclaration;
  FieldVal110: TSFFloat;
  FieldDecl111: TX3DInterfaceDeclaration;
  FieldVal111: TSFFloat;
  FieldDecl112: TX3DInterfaceDeclaration;
  FieldVal112: TSFFloat;
  Material114: TMaterialNode;
  Script115: TScriptNode;
  FieldVal116: TSFBool;
  FieldVal117: TSFColor;
  FieldVal118: TX3DEvent;
  FieldVal119: TX3DEvent;
  Group120: TGroupNode;
  Shape121: TShapeNode;
  MetadataString122: TMetadataStringNode;
  Appearance123: TAppearanceNode;
  ProtoInstance124: TX3DPrototypeNode;
  Cone125: TConeNode;
  Group126: TGroupNode;
  Sound127: TSoundNode;
  AudioClip128: TAudioClipNode;
  Sound129: TSoundNode;
  MovieTexture130: TMovieTextureNode;
  Shape131: TShapeNode;
  Appearance132: TAppearanceNode;
  Material133: TMaterialNode;
  Extrusion134: TExtrusionNode;
  Group135: TGroupNode;
  ProtoDeclare136: TX3DPrototype;
  FieldDecl138: TX3DInterfaceDeclaration;
  FieldVal138: TSFString;
  WorldInfo140: TWorldInfoNode;
  ProtoInstance141: TX3DPrototypeNode;
  Group143: TGroupNode;
  ProtoInstance144: TX3DPrototypeNode;
  Transform145: TTransformNode;
  ProtoDeclare146: TX3DPrototype;
  ProgramShader148: TProgramShaderNode;
  Shape149: TShapeNode;
  Appearance150: TAppearanceNode;
  ProgramShader151: TProgramShaderNode;
  ShaderProgram152: TShaderProgramNode;
  ProtoInstance153: TX3DPrototypeNode;
  ComposedShader154: TComposedShaderNode;
  ShaderPart155: TShaderPartNode;

procedure InitSmokeTestProgramOutputCanonicalPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
{ x3dVersionComparisonTest for this model: supportsX3dVersion(X3DObject.VERSION_3_0)=true }
{ comment #1 }
{ comment #2 }
{ comment #3 }
{ comment #4 }
X3D0.Components['Navigation'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['Layering'] := 1;
X3D0.Meta['title'] := 'HelloWorldProgramOutput.x3d';
X3D0.Meta['description'] := 'Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)';
X3D0.Meta['reference'] := 'https://www.web3d.org/specifications/java/X3DJSAIL.html';
X3D0.Meta['generator'] := 'HelloWorldProgramOutput.java';
X3D0.Meta['created'] := '6 September 2016';
X3D0.Meta['modified'] := '27 December 2018';
X3D0.Meta['generator'] := 'X3D Java Scene Access Interface Library (X3DJSAIL)';
X3D0.Meta['generator'] := 'https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java';
X3D0.Meta['generator'] := 'Netbeans http://www.netbeans.org';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['reference'] := 'https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d';
X3D0.Meta['reference'] := 'Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:';
X3D0.Meta['reference'] := 'HelloWorldProgramOutput.txt';
X3D0.Meta['reference'] := 'HelloWorldProgramOutput.x3dv';
X3D0.Meta['reference'] := 'HelloWorldProgramOutput.wrl';
X3D0.Meta['reference'] := 'HelloWorldProgramOutput.html';
X3D0.Meta['reference'] := 'https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d';
X3D0.Meta['license'] := '../license.html';
Group26 := TGroupNode.Create;
ViewpointGroup27 := TViewpointGroupNode.Create;
ViewpointGroup27.Description := 'Available viewpoints';
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.X3DName := 'DefaultView';
Viewpoint28.Description := 'Hello X3DJSAIL';
ViewpointGroup27.FdChildren.Add(Viewpoint28);
Viewpoint29 := TViewpointNode.Create;
Viewpoint29.X3DName := 'TopDownView';
end;

procedure InitSmokeTestProgramOutputCanonicalPart1;
begin
Viewpoint29.Description := 'top-down view from above';
Viewpoint29.Orientation := Vector4(1, 0, 0, -1.570796);
Viewpoint29.Position := Vector3(0, 100, 0);
ViewpointGroup27.FdChildren.Add(Viewpoint29);
Group26.FdChildren.Add(ViewpointGroup27);
NavigationInfo30 := TNavigationInfoNode.Create;
NavigationInfo30.SetType(['EXAMINE', 'FLY', 'ANY']);
Group26.FdChildren.Add(NavigationInfo30);
WorldInfo31 := TWorldInfoNode.Create;
WorldInfo31.X3DName := 'WorldInfoDEF';
WorldInfo31.Title := 'HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)';
Group26.FdChildren.Add(WorldInfo31);
Group26.FdChildren.Add(WorldInfo31);
Group26.FdChildren.Add(WorldInfo31);
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.X3DName := 'test';
MetadataString34.X3DName := 'scene.addChildMetadata';
MetadataString34.SetValue(['Top-level root Metadata node beneath Scene needs to be one of ''-children'' in JSON encoding']);
Group26.Metadata := MetadataString34;
LayerSet35 := TLayerSetNode.Create;
LayerSet35.X3DName := 'scene.addChildLayerSetTest';
Group26.FdChildren.Add(LayerSet35);
Transform36 := TTransformNode.Create;
Transform36.X3DName := 'LogoGeometryTransform';
Transform36.Translation := Vector3(0, 1.5, 0);
Anchor37 := TAnchorNode.Create;
Anchor37.Description := 'select for X3D Java SAI Library (X3DJSAIL) description';
Anchor37.SetUrl(['../X3DJSAIL.html', 'https://www.web3d.org/specifications/java/X3DJSAIL.html']);
Shape38 := TShapeNode.Create;
Shape38.X3DName := 'BoxShape';
Appearance39 := TAppearanceNode.Create;
Material40 := TMaterialNode.Create;
Material40.X3DName := 'GreenMaterial';
Material40.DiffuseColor := Vector3(0, 1, 1);
Material40.EmissiveColor := Vector3(0.8, 0, 0);
Material40.Transparency := 0.1;
Appearance39.Material := Material40;
ImageTexture41 := TImageTextureNode.Create;
ImageTexture41.SetUrl(['images/X3dJavaSceneAccessInterfaceSaiLibrary.png', 'https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png']);
Appearance39.Texture := ImageTexture41;
end;

procedure InitSmokeTestProgramOutputCanonicalPart2;
begin
Shape38.Appearance := Appearance39;
Box42 := TBoxNode.Create;
Box42.X3DName := 'test-NMTOKEN_regex.0123456789';
Shape38.Geometry := Box42;
Anchor37.FdChildren.Add(Shape38);
Transform36.FdChildren.Add(Anchor37);
Group26.FdChildren.Add(Transform36);
Shape43 := TShapeNode.Create;
Shape43.X3DName := 'LineShape';
Appearance44 := TAppearanceNode.Create;
Material45 := TMaterialNode.Create;
Material45.EmissiveColor := Vector3(0.6, 0.19607843, 0.8);
Appearance44.Material := Material45;
Shape43.Appearance := Appearance44;
IndexedLineSet46 := TIndexedLineSetNode.Create;
IndexedLineSet46.SetCoordIndex([0, 1, 2, 3, 4, 0]);
{ Coordinate 3-tuple point count: 6 }
Coordinate47 := TCoordinateNode.Create;
Coordinate47.SetPoint([Vector3(0, 1.5, 0), Vector3(2, 1.5, 0), Vector3(2, 1.5, -2), Vector3(-2, 1.5, -2), Vector3(-2, 1.5, 0), Vector3(0, 1.5, 0)]);
IndexedLineSet46.Coord := Coordinate47;
Shape43.Geometry := IndexedLineSet46;
Group26.FdChildren.Add(Shape43);
PositionInterpolator48 := TPositionInterpolatorNode.Create;
PositionInterpolator48.X3DName := 'BoxPathAnimator';
PositionInterpolator48.SetKey([0, 0.125, 0.375, 0.625, 0.875, 1]);
PositionInterpolator48.SetKeyValue([Vector3(0, 1.5, 0), Vector3(2, 1.5, 0), Vector3(2, 1.5, -2), Vector3(-2, 1.5, -2), Vector3(-2, 1.5, 0), Vector3(0, 1.5, 0)]);
Group26.FdChildren.Add(PositionInterpolator48);
TimeSensor49 := TTimeSensorNode.Create;
TimeSensor49.X3DName := 'OrbitClock';
TimeSensor49.CycleInterval := 8;
TimeSensor49.Loop := True;
Group26.FdChildren.Add(TimeSensor49);
{ ROUTE OrbitClock.fraction_changed TO BoxPathAnimator.set_fraction }
Group26.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator48.EventSet_fraction);
{ ROUTE BoxPathAnimator.value_changed TO LogoGeometryTransform.set_translation }
Group26.AddRoute(PositionInterpolator48.EventValue_changed, Transform36.FdTranslation.EventIn);
Transform52 := TTransformNode.Create;
Transform52.X3DName := 'TextTransform';
Transform52.Translation := Vector3(0, -1.5, 0);
Shape53 := TShapeNode.Create;
end;

procedure InitSmokeTestProgramOutputCanonicalPart3;
begin
Appearance54 := TAppearanceNode.Create;
Appearance54.Material := Material40;
Shape53.Appearance := Appearance54;
Text56 := TTextNode.Create;
Text56.SetText(['X3D Java', 'SAI Library', 'X3DJSAIL']);
{ Comment example A, plain quotation marks: He said, "Immel did it!" }
{ Comment example B, XML character entities: He said, &quot;Immel did it!&quot; }
MetadataSet57 := TMetadataSetNode.Create;
MetadataSet57.X3DName := 'EscapedQuotationMarksMetadataSet';
MetadataString58 := TMetadataStringNode.Create;
MetadataString58.X3DName := 'quotesTestC';
MetadataString58.SetValue(['MFString example C, backslash-escaped quotes: He said, "Immel did it!"']);
MetadataSet57.FdValue.Add(MetadataString58);
MetadataString59 := TMetadataStringNode.Create;
MetadataString59.X3DName := 'extraChildTest';
MetadataString59.SetValue(['checks MetadataSetObject addValue() method']);
MetadataSet57.FdValue.Add(MetadataString59);
Text56.Metadata := MetadataSet57;
FontStyle60 := TFontStyleNode.Create;
FontStyle60.Justify := fjMiddle;
FontStyle60.JustifyMinor := fjMiddle;
Text56.FontStyle := FontStyle60;
Shape53.Geometry := Text56;
Transform52.FdChildren.Add(Shape53);
Collision61 := TCollisionNode.Create;
{ test containerField='proxy' }
Shape62 := TShapeNode.Create;
Shape62.X3DName := 'ProxyShape';
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text63 := TTextNode.Create;
Text63.SetText(['One, Two, Text', 'He said, "Immel did it!" ""']);
Shape62.Geometry := Text63;
Collision61.Proxy := Shape62;
Transform52.FdChildren.Add(Collision61);
{ It's a beautiful world }
{ ... for you! }
{ https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) }
end;

procedure InitSmokeTestProgramOutputCanonicalPart4;
begin
Group26.FdChildren.Add(Transform52);
{ repeatedly spin 180 degrees as a readable special effect }
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.X3DName := 'SpinInterpolator';
OrientationInterpolator64.SetKey([0, 0.5, 1]);
OrientationInterpolator64.SetKeyValue([Vector4(0, 1, 0, 4.712389), Vector4(0, 1, 0, 0), Vector4(0, 1, 0, 1.5707964)]);
Group26.FdChildren.Add(OrientationInterpolator64);
TimeSensor65 := TTimeSensorNode.Create;
TimeSensor65.X3DName := 'SpinClock';
TimeSensor65.CycleInterval := 5;
TimeSensor65.Loop := True;
Group26.FdChildren.Add(TimeSensor65);
{ ROUTE SpinClock.fraction_changed TO SpinInterpolator.set_fraction }
Group26.AddRoute(TimeSensor65.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ ROUTE SpinInterpolator.value_changed TO TextTransform.rotation }
Group26.AddRoute(OrientationInterpolator64.EventValue_changed, Transform52.rotation);
Group68 := TGroupNode.Create;
Group68.X3DName := 'BackgroundGroup';
Background69 := TBackgroundNode.Create;
Background69.X3DName := 'GradualBackground';
Group68.FdChildren.Add(Background69);
Script70 := TScriptNode.Create;
Script70.X3DName := 'colorTypeConversionScript';
FieldVal71 := TSFColor.CreateEvent(Script70, 'colorInput', True);
Script70.AddCustomFieldOrEvent(FieldVal71);
FieldVal72 := TMFColor.CreateEvent(Script70, 'colorsOutput', False);
Script70.AddCustomFieldOrEvent(FieldVal72);
Script70.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  'function colorInput (eventValue) // Example source code' + LineEnding +
  '{' + LineEnding +
  '   colorsOutput = new MFColor(eventValue); // assigning value sends output event' + LineEnding +
  '// Browser.print(''colorInput='' + eventValue + '', colorsOutput='' + colorsOutput + ''\n'');' + LineEnding +
  '}');
Group68.FdChildren.Add(Script70);
ColorInterpolator73 := TColorInterpolatorNode.Create;
ColorInterpolator73.X3DName := 'ColorAnimator';
ColorInterpolator73.SetKey([0, 0.5, 1]);
ColorInterpolator73.SetKeyValue([Vector3(0.9411765, 1, 1), Vector3(0.29411766, 0, 0.50980395), Vector3(0.9411765, 1, 1)]);
{ AZURE to INDIGO and back again }
Group68.FdChildren.Add(ColorInterpolator73);
TimeSensor74 := TTimeSensorNode.Create;
TimeSensor74.X3DName := 'ColorClock';
TimeSensor74.CycleInterval := 60;
TimeSensor74.Loop := True;
Group68.FdChildren.Add(TimeSensor74);
end;

procedure InitSmokeTestProgramOutputCanonicalPart5;
begin
{ ROUTE colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor }
Group68.AddRoute(FieldVal72, Background69.skyColor);
{ ROUTE ColorAnimator.value_changed TO colorTypeConversionScript.colorInput }
Group68.AddRoute(ColorInterpolator73.EventValue_changed, FieldVal71);
{ ROUTE ColorClock.fraction_changed TO ColorAnimator.set_fraction }
Group68.AddRoute(TimeSensor74.EventFraction_changed, ColorInterpolator73.EventSet_fraction);
Group26.FdChildren.Add(Group68);
ProtoDeclare78 := CreateEmptyPrototype('ArtDeco01Material');
ProtoDeclare78.X3DName := 'ArtDeco01Material';
ProtoDeclare78.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
FieldVal80 := TSFString.Create(nil, True, 'description', 'ArtDeco01Material prototype is a Material node');
FieldDecl80 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl80.FieldOrEvent := FieldVal80;
FieldVal80.ParentInterfaceDeclaration := FieldDecl80;
ProtoDeclare78.InterfaceDeclarations.Add(FieldDecl80);
FieldVal81 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl81 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl81.FieldOrEvent := FieldVal81;
FieldVal81.ParentInterfaceDeclaration := FieldDecl81;
ProtoDeclare78.InterfaceDeclarations.Add(FieldDecl81);
{ Initial node of ProtoBody determines prototype node type }
Material83 := TMaterialNode.Create;
Material83.AmbientIntensity := 0.25;
Material83.DiffuseColor := Vector3(0.282435, 0.085159, 0.134462);
Material83.Shininess := 0.127273;
Material83.SpecularColor := Vector3(0.276305, 0.11431, 0.139857);
ProtoDeclare78.Node.AddChildren([Material83]);
{ [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
TouchSensor84 := TTouchSensorNode.Create;
TouchSensor84.Description := 'within ProtoBody';
TouchSensor84.FieldOrEvent('description', True).IsClauseNamesAdd('description');
TouchSensor84.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
ProtoDeclare78.Node.AddChildren([TouchSensor84]);
X3D0.AddPrototype(ProtoDeclare78);
X3DExternalPrototype85 := TX3DExternalPrototype.Create;
X3DExternalPrototype85.X3DName := 'ArtDeco02Material';
X3DExternalPrototype85.Appinfo := 'this is a different Material node';
X3DExternalPrototype85.Url := '"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material" "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"';
{ [HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
end;

procedure InitSmokeTestProgramOutputCanonicalPart6;
begin
FieldVal86 := TSFString.CreateUndefined(X3DExternalPrototype85, True, 'description');
X3DExternalPrototype85.AddCustomFieldOrEvent(FieldVal86);
Group26.AddX3DExternalPrototype([X3DExternalPrototype85]);
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape87 := TShapeNode.Create;
Shape87.X3DName := 'TestShape1';
Appearance88 := TAppearanceNode.Create;
Appearance88.X3DName := 'TestAppearance1';
{ ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java }
ProtoInstance89 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare78);
{ [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
(ProtoInstance89.Field('description') as TSFString).Value := 'ArtDeco01Material can substitute for a Material node';
Appearance88.Material := ProtoInstance89.Instantiate;
Shape87.Appearance := Appearance88;
Sphere91 := TSphereNode.Create;
Sphere91.Radius := 0.001;
Shape87.Geometry := Sphere91;
Group26.FdChildren.Add(Shape87);
Shape92 := TShapeNode.Create;
Shape92.X3DName := 'TestShape2';
Appearance93 := TAppearanceNode.Create;
Appearance93.X3DName := 'TestAppearance2';
{ ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java }
ProtoInstance94 := TX3DPrototypeNode.CreatePrototypeNode('', '', X3DExternalPrototype85);
ProtoInstance94.X3DName := 'ArtDeco02MaterialDEF';
{ [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
(ProtoInstance94.Field('description') as TSFString).Value := 'ArtDeco02Material can substitute for another Material node';
Appearance93.Material := ProtoInstance94.Instantiate;
Shape92.Appearance := Appearance93;
Cone96 := TConeNode.Create;
Cone96.BottomRadius := 0.001;
Cone96.Height := 0.001;
Shape92.Geometry := Cone96;
Group26.FdChildren.Add(Shape92);
Shape97 := TShapeNode.Create;
Shape97.X3DName := 'TestShape3';
Appearance98 := TAppearanceNode.Create;
Appearance98.X3DName := 'TestAppearance3';
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE. }
Appearance98.Material := ProtoInstance94;
end;

procedure InitSmokeTestProgramOutputCanonicalPart7;
begin
Shape97.Appearance := Appearance98;
Cylinder100 := TCylinderNode.Create;
Cylinder100.Height := 0.001;
Cylinder100.Radius := 0.001;
Shape97.Geometry := Cylinder100;
Group26.FdChildren.Add(Shape97);
Inline101 := TInlineNode.Create;
Inline101.X3DName := 'inlineSceneDef';
Inline101.SetUrl(['someOtherScene.x3d', 'https://www.web3d.org/specifications/java/examples/someOtherScene.x3d']);
Group26.FdChildren.Add(Inline101);
Import102 := TX3DImport.Create;
Import102.InlineNodeName := 'inlineSceneDef';
Import102.ImportedNodeName := 'WorldInfoDEF';
Import102.ImportedNodeAlias := 'WorldInfoDEF2';
X3D0.AddImport(Import102);
X3D0.ExportNode(WorldInfo31, 'WorldInfoDEF3');
ProtoDeclare104 := CreateEmptyPrototype('MaterialModulator');
ProtoDeclare104.X3DName := 'MaterialModulator';
ProtoDeclare104.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
ProtoDeclare104.Documentation := 'http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
FieldVal106 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl106 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl106.FieldOrEvent := FieldVal106;
FieldVal106.ParentInterfaceDeclaration := FieldDecl106;
ProtoDeclare104.InterfaceDeclarations.Add(FieldDecl106);
FieldVal107 := TSFColor.Create(nil, True, 'diffuseColor', Vector3(0, 0, 0));
FieldDecl107 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl107.FieldOrEvent := FieldVal107;
FieldVal107.ParentInterfaceDeclaration := FieldDecl107;
ProtoDeclare104.InterfaceDeclarations.Add(FieldDecl107);
FieldVal108 := TSFColor.Create(nil, True, 'emissiveColor', Vector3(0.05, 0.05, 0.5));
FieldDecl108 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl108.FieldOrEvent := FieldVal108;
FieldVal108.ParentInterfaceDeclaration := FieldDecl108;
ProtoDeclare104.InterfaceDeclarations.Add(FieldDecl108);
FieldVal109 := TSFColor.Create(nil, True, 'specularColor', Vector3(0, 0, 0));
FieldDecl109 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl109.FieldOrEvent := FieldVal109;
FieldVal109.ParentInterfaceDeclaration := FieldDecl109;
ProtoDeclare104.InterfaceDeclarations.Add(FieldDecl109);
end;

procedure InitSmokeTestProgramOutputCanonicalPart8;
begin
FieldVal110 := TSFFloat.Create(nil, True, 'transparency', 0);
FieldDecl110 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl110.FieldOrEvent := FieldVal110;
FieldVal110.ParentInterfaceDeclaration := FieldDecl110;
ProtoDeclare104.InterfaceDeclarations.Add(FieldDecl110);
FieldVal111 := TSFFloat.Create(nil, True, 'shininess', 0);
FieldDecl111 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl111.FieldOrEvent := FieldVal111;
FieldVal111.ParentInterfaceDeclaration := FieldDecl111;
ProtoDeclare104.InterfaceDeclarations.Add(FieldDecl111);
FieldVal112 := TSFFloat.Create(nil, True, 'ambientIntensity', 0);
FieldDecl112 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl112.FieldOrEvent := FieldVal112;
FieldVal112.ParentInterfaceDeclaration := FieldDecl112;
ProtoDeclare104.InterfaceDeclarations.Add(FieldDecl112);
Material114 := TMaterialNode.Create;
Material114.X3DName := 'MaterialNode';
Material114.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('diffuseColor');
Material114.FieldOrEvent('emissiveColor', True).IsClauseNamesAdd('emissiveColor');
Material114.FieldOrEvent('specularColor', True).IsClauseNamesAdd('specularColor');
Material114.FieldOrEvent('transparency', True).IsClauseNamesAdd('transparency');
Material114.FieldOrEvent('shininess', True).IsClauseNamesAdd('shininess');
Material114.FieldOrEvent('ambientIntensity', True).IsClauseNamesAdd('ambientIntensity');
ProtoDeclare104.Node.AddChildren([Material114]);
{ Only first node (the node type) is renderable, others are along for the ride }
Script115 := TScriptNode.Create;
Script115.X3DName := 'MaterialModulatorScript';
FieldVal116 := TSFBool.CreateUndefined(Script115, True, 'enabled');
Script115.AddCustomFieldOrEvent(FieldVal116);
FieldVal117 := TSFColor.CreateUndefined(Script115, True, 'diffuseColor');
Script115.AddCustomFieldOrEvent(FieldVal117);
FieldVal118 := TSFColor.CreateEvent(Script115, 'newColor', False);
Script115.AddCustomFieldOrEvent(FieldVal118);
FieldVal119 := TSFTime.CreateEvent(Script115, 'clockTrigger', True);
Script115.AddCustomFieldOrEvent(FieldVal119);
Script115.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
Script115.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('diffuseColor');
Script115.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize ()' + LineEnding +
  '{' + LineEnding +
  '    newColor = diffuseColor; // start with correct color' + LineEnding +
  '}' + LineEnding +
  'function set_enabled (newValue)' + LineEnding +
  '{' + LineEnding +
  '	enabled = newValue;' + LineEnding +
  '}' + LineEnding +
  'function clockTrigger (timeValue)' + LineEnding +
  '{' + LineEnding +
  '    if (!enabled) return;' + LineEnding +
  '    red   = newColor.r;' + LineEnding +
  '    green = newColor.g;' + LineEnding +
  '    blue  = newColor.b;' + LineEnding +
  '' + LineEnding +
  '    // note different modulation rates for each color component, % is modulus operator' + LineEnding +
  '    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);' + LineEnding +
  '	if (enabled)' + LineEnding +
  '	{' + LineEnding +
  '		Browser.print (''diffuseColor=('' + red + '','' + green + '','' + blue + '') newColor='' + newColor.toString() + ''\n'');' + LineEnding +
  '	}' + LineEnding +
  '}');
ProtoDeclare104.Node.AddChildren([Script115]);
X3D0.AddPrototype(ProtoDeclare104);
end;

procedure InitSmokeTestProgramOutputCanonicalPart9;
begin
{ Test success: declarative statement createDeclarativeShapeTests() }
Group120 := TGroupNode.Create;
Group120.X3DName := 'DeclarativeGroupExample';
Shape121 := TShapeNode.Create;
MetadataString122 := TMetadataStringNode.Create;
MetadataString122.X3DName := 'findThisNameValue';
MetadataString122.X3DName := 'FindableMetadataStringTest';
MetadataString122.SetValue(['test case']);
Shape121.Metadata := MetadataString122;
Appearance123 := TAppearanceNode.Create;
Appearance123.X3DName := 'DeclarativeAppearanceExample';
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
ProtoInstance124 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare104);
ProtoInstance124.X3DName := 'MyMaterialModulator';
Appearance123.Material := ProtoInstance124.Instantiate;
Shape121.Appearance := Appearance123;
Cone125 := TConeNode.Create;
Cone125.Bottom := False;
Cone125.BottomRadius := 0.05;
Cone125.Height := 0.1;
Shape121.Geometry := Cone125;
Group120.FdChildren.Add(Shape121);
{ Test success: declarativeGroup.addChild() singleton pipeline method }
Group26.FdChildren.Add(Group120);
{ Test success: declarative statement addChild() }
{ Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> }
{ Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> }
{ Test success: x3dModel.findElementByNameValue("ArtDeco01Material", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found }
Group126 := TGroupNode.Create;
Group126.X3DName := 'TestFieldObjectsGroup';
{ testFieldObjects() results }
{ SFBool default=true, true=true, false=false, negate()=true }
{ MFBool default=, initial=true false true, negate()=false true false }
{ SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 }
{ MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 }
{ ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= }
{ SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true }
{ regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotationObject.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value }
end;

procedure InitSmokeTestProgramOutputCanonicalPart10;
begin
Group26.FdChildren.Add(Group126);
Sound127 := TSoundNode.Create;
Sound127.Location := Vector3(0, 1.6, 0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip128 := TAudioClipNode.Create;
AudioClip128.Description := 'chimes';
AudioClip128.SetUrl(['chimes.wav', 'https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
Sound127.Source := AudioClip128;
Group26.FdChildren.Add(Sound127);
Sound129 := TSoundNode.Create;
Sound129.Location := Vector3(0, 1.6, 0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture130 := TMovieTextureNode.Create;
MovieTexture130.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture130.SetUrl(['mpgsys.mpg', 'https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "watchList" }
Sound129.Source := MovieTexture130;
Group26.FdChildren.Add(Sound129);
{ Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true }
{ Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false }
{ Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false }
{ Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true }
{ Test success: CommentsBlock.isNode()=false, testComments.isNode()=false }
{ Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true }
Shape131 := TShapeNode.Create;
Shape131.X3DName := 'ExtrusionShape';
{ ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' }
{ ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' }
Appearance132 := TAppearanceNode.Create;
Appearance132.X3DName := 'TransparentAppearance';
Material133 := TMaterialNode.Create;
Material133.Transparency := 1;
Appearance132.Material := Material133;
Shape131.Appearance := Appearance132;
Extrusion134 := TExtrusionNode.Create;
Extrusion134.X3DName := 'ExampleExtrusion';
Shape131.Geometry := Extrusion134;
Group26.FdChildren.Add(Shape131);
end;

procedure InitSmokeTestProgramOutputCanonicalPart11;
begin
Group135 := TGroupNode.Create;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
ProtoDeclare136 := CreateEmptyPrototype('NewWorldInfo');
ProtoDeclare136.X3DName := 'NewWorldInfo';
FieldVal138 := TSFString.CreateUndefined(nil, False, 'description');
FieldDecl138 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl138.FieldOrEvent := FieldVal138;
FieldVal138.ParentInterfaceDeclaration := FieldDecl138;
ProtoDeclare136.InterfaceDeclarations.Add(FieldDecl138);
WorldInfo140 := TWorldInfoNode.Create;
ProtoDeclare136.Node.AddChildren([WorldInfo140]);
X3D0.AddPrototype(ProtoDeclare136);
ProtoInstance141 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare136);
ProtoInstance141.X3DName := 'Proto1';
(ProtoInstance141.Field('description') as TSFString).Value := 'testing 1 2 3';
Group135.FdChildren.Add(ProtoInstance141.Instantiate);
Group143 := TGroupNode.Create;
Group143.X3DName := 'Node2';
{ intentionally empty }
Group135.FdChildren.Add(Group143);
ProtoInstance144 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare136);
ProtoInstance144.X3DName := 'Proto3';
Group135.FdChildren.Add(ProtoInstance144.Instantiate);
Transform145 := TTransformNode.Create;
Transform145.X3DName := 'Node4';
{ intentionally empty }
Group135.FdChildren.Add(Transform145);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
Group26.FdChildren.Add(Group135);
ProtoDeclare146 := CreateEmptyPrototype('ShaderProto');
ProtoDeclare146.X3DName := 'ShaderProto';
ProgramShader148 := TProgramShaderNode.Create;
ProtoDeclare146.Node.AddChildren([ProgramShader148]);
X3D0.AddPrototype(ProtoDeclare146);
Shape149 := TShapeNode.Create;
Appearance150 := TAppearanceNode.Create;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader151 := TProgramShaderNode.Create;
ProgramShader151.X3DName := 'TestShader1';
end;

procedure InitSmokeTestProgramOutputCanonicalPart12;
begin
ShaderProgram152 := TShaderProgramNode.Create;
ShaderProgram152.X3DName := 'TestShader2';
ProgramShader151.Programs := ShaderProgram152;
Appearance150.AddChildren([ProgramShader151]);
ProtoInstance153 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare146);
ProtoInstance153.X3DName := 'TestShader3';
Appearance150.AddChildren([ProtoInstance153.Instantiate]);
ComposedShader154 := TComposedShaderNode.Create;
ComposedShader154.X3DName := 'TestShader4';
ShaderPart155 := TShaderPartNode.Create;
ShaderPart155.X3DName := 'TestShader5';
ShaderPart155.FdType.Value := 'VERTEX';
ComposedShader154.Parts := ShaderPart155;
Appearance150.AddChildren([ComposedShader154]);
Shape149.Appearance := Appearance150;
Group26.FdChildren.Add(Shape149);
X3D0.AddChildren([Group26]);
end;

function CreateSmokeTestProgramOutputCanonical: TX3DRootNode;
begin
  InitSmokeTestProgramOutputCanonicalPart0;
  InitSmokeTestProgramOutputCanonicalPart1;
  InitSmokeTestProgramOutputCanonicalPart2;
  InitSmokeTestProgramOutputCanonicalPart3;
  InitSmokeTestProgramOutputCanonicalPart4;
  InitSmokeTestProgramOutputCanonicalPart5;
  InitSmokeTestProgramOutputCanonicalPart6;
  InitSmokeTestProgramOutputCanonicalPart7;
  InitSmokeTestProgramOutputCanonicalPart8;
  InitSmokeTestProgramOutputCanonicalPart9;
  InitSmokeTestProgramOutputCanonicalPart10;
  InitSmokeTestProgramOutputCanonicalPart11;
  InitSmokeTestProgramOutputCanonicalPart12;
  Result := X3D0;
end;

begin
end.
