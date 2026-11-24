unit SmokeTestProgramOutput_JavaExport;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateSmokeTestProgramOutput_JavaExport: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
unit9: TunitNode;
unit10: TunitNode;
unit11: TunitNode;
Group32: TGroupNode;
ViewpointGroup33: TViewpointGroupNode;
Viewpoint34: TViewpointNode;
NavigationInfo35: TNavigationInfoNode;
Viewpoint36: TViewpointNode;
NavigationInfo37: TNavigationInfoNode;
WorldInfo38: TWorldInfoNode;
WorldInfo39: TWorldInfoNode;
WorldInfo40: TWorldInfoNode;
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
Material62: TMaterialNode;
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
SFColor77: TSFColor;
MFColor78: TMFColor;
ColorInterpolator79: TColorInterpolatorNode;
TimeSensor80: TTimeSensorNode;
X3DPrototype84: TX3DPrototype;
X3DInterfaceDeclaration85: TX3DInterfaceDeclaration;
SFString86: TSFString;
SFBool87: TSFBool;
X3DPrototype88: TX3DPrototype;
Material89: TMaterialNode;
TouchSensor90: TTouchSensorNode;
X3DExternalPrototype92: TX3DExternalPrototype;
SFString93: TSFString;
Shape94: TShapeNode;
Appearance95: TAppearanceNode;
X3DPrototype96: TX3DPrototypeNode;
SFString97: TSFString;
Sphere98: TSphereNode;
Shape99: TShapeNode;
Appearance100: TAppearanceNode;
X3DPrototype101: TX3DPrototypeNode;
Cone102: TConeNode;
Shape103: TShapeNode;
Appearance104: TAppearanceNode;
X3DPrototype105: TX3DPrototypeNode;
Cylinder106: TCylinderNode;
Inline107: TInlineNode;
IMPORT108: TIMPORTNode;
EXPORT109: TEXPORTNode;
X3DPrototype110: TX3DPrototype;
X3DInterfaceDeclaration111: TX3DInterfaceDeclaration;
SFBool112: TSFBool;
SFColor113: TSFColor;
SFColor114: TSFColor;
SFColor115: TSFColor;
SFFloat116: TSFFloat;
SFFloat117: TSFFloat;
SFFloat118: TSFFloat;
X3DPrototype119: TX3DPrototype;
Material120: TMaterialNode;
Script122: TScriptNode;
SFBool123: TSFBool;
SFColor124: TSFColor;
SFColor125: TSFColor;
SFTime126: TSFTime;
Group128: TGroupNode;
Shape129: TShapeNode;
MetadataString130: TMetadataStringNode;
Appearance131: TAppearanceNode;
X3DPrototype132: TX3DPrototypeNode;
Cone133: TConeNode;
Group134: TGroupNode;
Sound135: TSoundNode;
AudioClip136: TAudioClipNode;
Sound137: TSoundNode;
MovieTexture138: TMovieTextureNode;
Shape139: TShapeNode;
Appearance140: TAppearanceNode;
Material141: TMaterialNode;
Extrusion142: TExtrusionNode;
Group143: TGroupNode;
X3DPrototype144: TX3DPrototype;
X3DInterfaceDeclaration145: TX3DInterfaceDeclaration;
SFString146: TSFString;
X3DPrototype147: TX3DPrototype;
WorldInfo148: TWorldInfoNode;
X3DPrototype149: TX3DPrototypeNode;
SFString150: TSFString;
Group151: TGroupNode;
X3DPrototype152: TX3DPrototypeNode;
Transform153: TTransformNode;
X3DPrototype154: TX3DPrototype;
X3DPrototype155: TX3DPrototype;
ProgramShader156: TProgramShaderNode;
Shape157: TShapeNode;
Appearance158: TAppearanceNode;
ProgramShader159: TProgramShaderNode;
ShaderProgram160: TShaderProgramNode;
X3DPrototype161: TX3DPrototypeNode;
ComposedShader162: TComposedShaderNode;
ShaderPart163: TShaderPartNode;
Transform164: TTransformNode;
CADLayer165: TCADLayerNode;
CADAssembly166: TCADAssemblyNode;
CADPart167: TCADPartNode;
CADFace168: TCADFaceNode;
EspduTransform169: TEspduTransformNode;
ReceiverPdu170: TReceiverPduNode;
SignalPdu171: TSignalPduNode;
TransmitterPdu172: TTransmitterPduNode;
DISEntityManager173: TDISEntityManagerNode;
DISEntityTypeMapping174: TDISEntityTypeMappingNode;
EspduTransform175: TEspduTransformNode;
WorldInfo176: TWorldInfoNode;
ReceiverPdu177: TReceiverPduNode;
SignalPdu178: TSignalPduNode;
TransmitterPdu179: TTransmitterPduNode;
DISEntityManager180: TDISEntityManagerNode;
DISEntityTypeMapping181: TDISEntityTypeMappingNode;
LoadSensor182: TLoadSensorNode;
Anchor183: TAnchorNode;
Inline184: TInlineNode;
DISEntityTypeMapping185: TDISEntityTypeMappingNode;
GeoMetadata186: TGeoMetadataNode;
AudioClip187: TAudioClipNode;
ImageCubeMapTexture188: TImageCubeMapTextureNode;
ImageTexture3D189: TImageTexture3DNode;
ImageTexture190: TImageTextureNode;
MovieTexture191: TMovieTextureNode;
Script192: TScriptNode;
PackagedShader193: TPackagedShaderNode;
ShaderPart194: TShaderPartNode;
ShaderProgram195: TShaderProgramNode;
OrthoViewpoint196: TOrthoViewpointNode;

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
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['CADGeometry'] := 2;
{ METHOD .Component }
X3D0.Components['DIS'] := 2;
{ METHOD .Component }
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 1;
{ METHOD .Component }
X3D0.Components['Layering'] := 1;
{ METHOD .Component }
unit9 := TunitNode.Create;;
unit9.Category := 'angle';
unit9.ConversionFactor := 1;
{ METHOD .Unit }
{ METHOD.SET .Unit }
head1.Unit := unit9;
unit10 := TunitNode.Create;;
unit10.Category := 'length';
unit10.ConversionFactor := 1;
{ METHOD .Unit }
{ METHOD.SET .Unit }
head1.Unit := unit10;
unit11 := TunitNode.Create;;
unit11.Category := 'force';
unit11.ConversionFactor := 4.4482;
{ METHOD .Unit }
{ METHOD.SET .Unit }
head1.Unit := unit11;
X3D0.Meta['title'] := 'SmokeTestProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['info'] := 'continued development and testing in progress';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/specifications/java/X3DJSAIL.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'SmokeTestProgramOutput.java';
{ METHOD .Meta }
X3D0.Meta['created'] := '6 September 2016';
{ METHOD .Meta }
X3D0.Meta['modified'] := '27 September 2026';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D Java Scene Access Interface Library (X3DJSAIL)';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Netbeans https://www.netbeans.org';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/SmokeTestProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.txt';
end;

procedure InitSmokeTestProgramOutput_JavaExportPart1;
begin

{ METHOD .Meta }
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.x3dv';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.wrl';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group32 := TGroupNode.Create;;
ViewpointGroup33 := TViewpointGroupNode.Create;;
ViewpointGroup33.Description := 'Available viewpoints';
Viewpoint34 := TViewpointNode.Create;;
Viewpoint34.Description := 'Hello X3DJSAIL';
NavigationInfo35 := TNavigationInfoNode.Create;;
{ METHOD .NavigationInfo }
{ METHOD.SET .NavigationInfo }
Viewpoint34.NavigationInfo := NavigationInfo35;
{ METHOD .FdChildren.Add }
ViewpointGroup33.FdChildren.Add(Viewpoint34);
Viewpoint36 := TViewpointNode.Create;;
Viewpoint36.Description := 'top-down view from above';
Viewpoint36.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint36.Position := Vector3(0,100,0);
{ METHOD .FdChildren.Add }
ViewpointGroup33.FdChildren.Add(Viewpoint36);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(ViewpointGroup33);
NavigationInfo37 := TNavigationInfoNode.Create;;
NavigationInfo37.SetType(['EXAMINE','FLY','ANY']);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(NavigationInfo37);
WorldInfo38 := TWorldInfoNode.Create;;
WorldInfo38.Title := 'SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(WorldInfo38);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(WorldInfo38);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(WorldInfo38);
MetadataString41 := TMetadataStringNode.Create;;
MetadataString41.SetValue(['Top-level root Metadata node beneath Scene needs to be one of ''-children'' in JSON encoding']);
{ METHOD .Metadata }
{ METHOD.SET .Metadata }
Group32.Metadata := MetadataString41;
LayerSet42 := TLayerSetNode.Create;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart2;
begin
;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(LayerSet42);
Transform43 := TTransformNode.Create;;
Transform43.Translation := Vector3(0,1.5,0);
Anchor44 := TAnchorNode.Create;;
Anchor44.Description := 'select for X3D Java SAI Library (X3DJSAIL) description';
Anchor44.SetUrl(['../X3DJSAIL.html','https://www.web3d.org/specifications/java/X3DJSAIL.html']);
Shape45 := TShapeNode.Create;;
Appearance46 := TAppearanceNode.Create;;
Material47 := TMaterialNode.Create;;
Material47.DiffuseColor := Vector3(0,1,1);
Material47.EmissiveColor := Vector3(0.8,0,0);
Material47.Transparency := 0.1;
{ METHOD .SetMaterial }
Appearance46.Material := Material47;
ImageTexture48 := TImageTextureNode.Create;;
ImageTexture48.SetUrl(['images/X3dJavaSceneAccessInterfaceSaiLibrary.png','https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png']);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance46.Texture := ImageTexture48;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape45.Appearance := Appearance46;
Box49 := TBoxNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape45.Geometry := Box49;
{ METHOD .FdChildren.Add }
Anchor44.FdChildren.Add(Shape45);
{ METHOD .FdChildren.Add }
Transform43.FdChildren.Add(Anchor44);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform43);
Shape50 := TShapeNode.Create;;
Appearance51 := TAppearanceNode.Create;;
Material52 := TMaterialNode.Create;;
Material52.EmissiveColor := Vector3(0.6,0.1961,0.8);
{ METHOD .SetMaterial }
Appearance51.Material := Material52;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape50.Appearance := Appearance51;
IndexedLineSet53 := TIndexedLineSetNode.Create;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart3;
begin
;
IndexedLineSet53.SetCoordIndex([0,1,2,3,4,0]);
{ Coordinate 3-tuple point count: 6 }
Coordinate54 := TCoordinateNode.Create;;
Coordinate54.SetPoint([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet53.Coord := Coordinate54;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape50.Geometry := IndexedLineSet53;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape50);
PositionInterpolator55 := TPositionInterpolatorNode.Create;;
PositionInterpolator55.SetKey([0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator55.SetKeyValue([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(PositionInterpolator55);
TimeSensor56 := TTimeSensorNode.Create;;
TimeSensor56.CycleInterval := 8;
TimeSensor56.Loop := True;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(TimeSensor56);
{ Original "OrbitClock.EventFraction_changed TO BoxPathAnimator.EventSet_fraction }
{ Sample OrbitClock.EventFraction_changed TO BoxPathAnimator.EventSet_fraction}
Group32.AddRoute(TimeSensor56.EventFraction_changed, PositionInterpolator55.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "BoxPathAnimator.EventValue_changed TO LogoGeometryTransform.FdTranslation.EventIn }
{ Sample BoxPathAnimator.EventValue_changed TO LogoGeometryTransform.FdTranslation.EventIn}
Group32.AddRoute(PositionInterpolator55.EventValue_changed, Transform43.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
Transform59 := TTransformNode.Create;;
Transform59.Translation := Vector3(0,-1.5,0);
Shape60 := TShapeNode.Create;;
Appearance61 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance61.Material := Material47;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape60.Appearance := Appearance61;
Text63 := TTextNode.Create;;
Text63.SetText(['X3D Java','SAI Library','X3DJSAIL']);
{ Comment example A, plain quotation marks: He said, "Immel did it!" }
{ Comment example B, XML character entities: He said, &quot;Immel did it!&quot; }
MetadataSet64 := TMetadataSetNode.Create;;
MetadataString65 := TMetadataStringNode.Create;;
MetadataString65.SetValue(['checks MetadataSet addValue() method']);
{ METHOD .FdValue.Add }
MetadataSet64.FdValue.Add(MetadataString65);
{ METHOD .Metadata }
{ METHOD.SET .Metadata }
Text63.Metadata := MetadataSet64;
FontStyle66 := TFontStyleNode.Create;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart4;
begin
;
FontStyle66.Justify := fjMIDDLE;
FontStyle66.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text63.FontStyle := FontStyle66;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape60.Geometry := Text63;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Shape60);
Collision67 := TCollisionNode.Create;;
{ test containerField='proxy' }
Shape68 := TShapeNode.Create;;
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text69 := TTextNode.Create;;
Text69.SetText(['One, Two, Text','He said, "Immel did it!" \"\"']);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape68.Geometry := Text69;
{ METHOD .Proxy }
{ METHOD.SET .Proxy }
Collision67.Proxy := Shape68;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Collision67);
{ It's a beautiful world }
{ ... for you! }
{ https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform59);
{ repeatedly spin 180 degrees as a readable special effect }
OrientationInterpolator70 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator70.SetKey([0,0.5,1]);
OrientationInterpolator70.SetKeyValue([Vector4(0,1,0,4.7124),Vector4(0,1,0,0),Vector4(0,1,0,1.5708)]);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(OrientationInterpolator70);
TimeSensor71 := TTimeSensorNode.Create;;
TimeSensor71.CycleInterval := 5;
TimeSensor71.Loop := True;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(TimeSensor71);
{ Original "SpinClock.EventFraction_changed TO SpinInterpolator.EventSet_fraction }
{ Sample SpinClock.EventFraction_changed TO SpinInterpolator.EventSet_fraction}
Group32.AddRoute(TimeSensor71.EventFraction_changed, OrientationInterpolator70.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "SpinInterpolator.EventValue_changed TO TextTransform.rotation }
{ Sample SpinInterpolator.EventValue_changed TO TextTransform.rotation}
Group32.AddRoute(OrientationInterpolator70.EventValue_changed, Transform59.rotation);
{ METHOD .AddX3DROUTE }
Group74 := TGroupNode.Create;;
Background75 := TBackgroundNode.Create;;
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(Background75);
Script76 := TScriptNode.Create;;
SFColor77 := TSFColor.CreateUndefined(Script76, false, 'colorInput');
{ METHOD .Fd.AddCustomField }
Script76.AddCustomField(SFColor77);
MFColor78 := TMFColor.CreateUndefined(Script76, false, 'colorsOutput');
{ METHOD .Fd.AddCustomField }
Script76.AddCustomField(MFColor78);
end;

procedure InitSmokeTestProgramOutput_JavaExportPart5;
begin


Script76.SetSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ',\\n//                colorsOutput=' + colorsOutput + '\\n');\n"+
"// TODO check line wrapping when exporting/converting\n"+
"}''');
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(Script76);
ColorInterpolator79 := TColorInterpolatorNode.Create;;
ColorInterpolator79.SetKey([0,0.5,1]);
ColorInterpolator79.SetKeyValue([Vector3(0.9412,1,1),Vector3(0.2941,0,0.5098),Vector3(0.9412,1,1)]);
{ AZURE to INDIGO and back again }
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(ColorInterpolator79);
TimeSensor80 := TTimeSensorNode.Create;;
TimeSensor80.CycleInterval := 60;
TimeSensor80.Loop := True;
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(TimeSensor80);
{ Original "colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor }
{ Sample colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor}
Group74.AddRoute(colorTypeConversionScript.undefined, Background75.skyColor);
{ METHOD .AddX3DROUTE }
{ Original "ColorAnimator.EventValue_changed TO colorTypeConversionScript.colorInput }
{ Sample ColorAnimator.EventValue_changed TO colorTypeConversionScript.colorInput}
Group74.AddRoute(ColorInterpolator79.EventValue_changed, SFColor77);
{ METHOD .AddX3DROUTE }
{ Original "ColorClock.EventFraction_changed TO ColorAnimator.EventSet_fraction }
{ Sample ColorClock.EventFraction_changed TO ColorAnimator.EventSet_fraction}
Group74.AddRoute(TimeSensor80.EventFraction_changed, ColorInterpolator79.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group74);
X3DPrototype84 := TX3DPrototype.Create;;
X3DPrototype84.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
X3DInterfaceDeclaration85 := TX3DInterfaceDeclaration.Create(nil);;
SFString86 := TSFString.CreateUndefined(X3DInterfaceDeclaration85, false, 'description');
SFString86.Appinfo := 'tooltip for descriptionField';
SFString86.Value := 'ArtDeco01Material prototype is a Material node';
{ METHOD .AddSFString }
X3DInterfaceDeclaration85.AddSFString([SFString86]);
SFBool87 := TSFBool.CreateUndefined(X3DInterfaceDeclaration85, false, 'enabled');
SFBool87.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration85.AddSFBool([SFBool87]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype84.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration85]);
X3DPrototype88 := TX3DPrototype.Create;;
{ Initial node of ProtoBody determines prototype node type }
Material89 := TMaterialNode.Create;;
Material89.AmbientIntensity := 0.25;
Material89.DiffuseColor := Vector3(0.2824,0.0852,0.1345);
Material89.Shininess := 0.1273;
Material89.SpecularColor := Vector3(0.2763,0.1143,0.1399);
{ METHOD .AddMaterial }
X3DPrototype88.AddMaterial([Material89]);
{ [SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
TouchSensor90 := TTouchSensorNode.Create;;
TouchSensor90.Description := 'within ProtoBody';
{ METHOD .AddTouchSensor }
X3DPrototype88.AddTouchSensor([TouchSensor90]);
{ METHOD .AddX3DPrototype }
X3DPrototype84.AddX3DPrototype([X3DPrototype88]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype84]);
X3DExternalPrototype92 := TX3DExternalPrototype.Create;;
X3DExternalPrototype92.Appinfo := 'this is a different Material node';
X3DExternalPrototype92.Url := '\"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02\"';
{ [SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
SFString93 := TSFString.CreateUndefined(X3DExternalPrototype92, false, 'description');
SFString93.Appinfo := 'tooltip for descriptionField';
{ METHOD .AddSFString }
X3DExternalPrototype92.AddSFString([SFString93]);
{ METHOD .AddX3DExternalPrototype }
Group32.AddX3DExternalPrototype([X3DExternalPrototype92]);
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape94 := TShapeNode.Create;;
Appearance95 := TAppearanceNode.Create;;
{ ArtDeco01Material prototype goes here... }
X3DPrototype96 := TX3DPrototypeNode;
{ [SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
SFString97 := TSFString.CreateUndefined(X3DPrototype96, false, 'description');
SFString97.Value := 'ArtDeco01Material can substitute for a Material node';
{ METHOD .AddSFString }
X3DPrototype96.AddSFString([SFString97]);
{ METHOD .SetMaterial }
Appearance95.Material := X3DPrototype96;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape94.Appearance := Appearance95;
Sphere98 := TSphereNode.Create;;
Sphere98.Radius := 0.001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape94.Geometry := Sphere98;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape94);
Shape99 := TShapeNode.Create;;
Appearance100 := TAppearanceNode.Create;;
{ ArtDeco02Material ProtoInstance goes here... }
X3DPrototype101 := TX3DPrototypeNode;
{ [SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
{ METHOD .SetMaterial }
Appearance100.Material := X3DPrototype101;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape99.Appearance := Appearance100;
Cone102 := TConeNode.Create;;
Cone102.BottomRadius := 0.001;
Cone102.Height := 0.001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape99.Geometry := Cone102;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape99);
Shape103 := TShapeNode.Create;;
Appearance104 := TAppearanceNode.Create;;
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE. }
{ METHOD .SetMaterial }
Appearance104.Material := X3DPrototype101;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape103.Appearance := Appearance104;
Cylinder106 := TCylinderNode.Create;;
Cylinder106.Height := 0.001;
Cylinder106.Radius := 0.001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape103.Geometry := Cylinder106;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape103);
Inline107 := TInlineNode.Create;;
Inline107.SetUrl(['newScene.x3d','https://www.web3d.org/specifications/java/examples/newScene.x3d']);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Inline107);
IMPORT108 := TIMPORTNode.Create;;
IMPORT108.AS := 'WorldInfoDEF2';
IMPORT108.ImportedDEF := 'WorldInfoDEF';
IMPORT108.InlineDEF := 'inlineScene';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(IMPORT108);
EXPORT109 := TEXPORTNode.Create;;
EXPORT109.AS := 'WorldInfoDEF3';
EXPORT109.LocalDEF := 'WorldInfoDEF';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(EXPORT109);
X3DPrototype110 := TX3DPrototype.Create;;
X3DPrototype110.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
X3DPrototype110.Documentation := 'https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
X3DInterfaceDeclaration111 := TX3DInterfaceDeclaration.Create(nil);;
SFBool112 := TSFBool.CreateUndefined(X3DInterfaceDeclaration111, false, 'enabled');
SFBool112.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration111.AddSFBool([SFBool112]);
SFColor113 := TSFColor.CreateUndefined(X3DInterfaceDeclaration111, false, 'diffuseColor');
SFColor113.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration111.AddSFColor([SFColor113]);
SFColor114 := TSFColor.CreateUndefined(X3DInterfaceDeclaration111, false, 'emissiveColor');
SFColor114.Value := '0.05 0.05 0.5';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration111.AddSFColor([SFColor114]);
SFColor115 := TSFColor.CreateUndefined(X3DInterfaceDeclaration111, false, 'specularColor');
SFColor115.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration111.AddSFColor([SFColor115]);
SFFloat116 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration111, false, 'transparency');
SFFloat116.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration111.AddSFFloat([SFFloat116]);
SFFloat117 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration111, false, 'shininess');
SFFloat117.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration111.AddSFFloat([SFFloat117]);
SFFloat118 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration111, false, 'ambientIntensity');
SFFloat118.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration111.AddSFFloat([SFFloat118]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype110.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration111]);
X3DPrototype119 := TX3DPrototype.Create;;
Material120 := TMaterialNode.Create;;
{ METHOD .AddMaterial }
X3DPrototype119.AddMaterial([Material120]);
{ Only first node (the node type for the prototype) is renderable, others are along for the ride }
Script122 := TScriptNode.Create;;
SFBool123 := TSFBool.CreateUndefined(Script122, false, 'enabled');
{ METHOD .Fd.AddCustomField }
Script122.AddCustomField(SFBool123);
SFColor124 := TSFColor.CreateUndefined(Script122, false, 'diffuseColor');
{ METHOD .Fd.AddCustomField }
Script122.AddCustomField(SFColor124);
SFColor125 := TSFColor.CreateUndefined(Script122, false, 'newColor');
{ METHOD .Fd.AddCustomField }
Script122.AddCustomField(SFColor125);
SFTime126 := TSFTime.CreateUndefined(Script122, false, 'clockTrigger');
{ METHOD .Fd.AddCustomField }
Script122.AddCustomField(SFTime126);

Script122.SetSourceCode('''ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"    newColor = diffuseColor; // start with correct color\n"+
"}\n"+
"function set_enabled (newValue)\n"+
"{\n"+
"	enabled = newValue;\n"+
"}\n"+
"function clockTrigger (timeValue)\n"+
"{\n"+
"    if (!enabled) return;\n"+
"    red   = newColor.r;\n"+
"    green = newColor.g;\n"+
"    blue  = newColor.b;\n"+
"\n"+
"    // note different modulation rates for each color component, % is modulus operator\n"+
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n"+
"	if (enabled)\n"+
"	{\n"+
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n"+
"	}\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype119.AddScript([Script122]);
{ METHOD .AddX3DPrototype }
X3DPrototype110.AddX3DPrototype([X3DPrototype119]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype110]);
{ Test success: declarative statement createDeclarativeShapeTests() }
Group128 := TGroupNode.Create;;
Shape129 := TShapeNode.Create;;
MetadataString130 := TMetadataStringNode.Create;;
MetadataString130.SetValue(['test case']);
{ METHOD .SetValue }
Shape129.Value := MetadataString130;
Appearance131 := TAppearanceNode.Create;;
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
X3DPrototype132 := TX3DPrototypeNode;
{ METHOD .SetMaterial }
Appearance131.Material := X3DPrototype132;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape129.Appearance := Appearance131;
Cone133 := TConeNode.Create;;
Cone133.Bottom := False;
Cone133.BottomRadius := 0.05;
Cone133.Height := 0.1;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape129.Geometry := Cone133;
{ METHOD .FdChildren.Add }
Group128.FdChildren.Add(Shape129);
{ Test success: declarativeGroup.addChild() singleton pipeline method }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group128);
{ Test success: declarative statement addChild() }
{ Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance> }
{ Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> }
{ Test success: x3dModel.findElementByNameValue("ArtDeco01", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found }
Group134 := TGroupNode.Create;;
{ testFieldObjects() results }
{ SFBool default=false, true=true, false=false, negate()=true }
{ MFBool default=, initial=true false true, negate()=false true false }
{ SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4 }
{ MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 }
{ ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= }
{ SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true }
{ regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotation.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group134);
Sound135 := TSoundNode.Create;;
Sound135.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip136 := TAudioClipNode.Create;;
AudioClip136.Description := 'chimes';
AudioClip136.SetUrl(['chimes.wav','https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
{ METHOD .Source }
{ METHOD.SET .Source }
Sound135.Source := AudioClip136;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Sound135);
Sound137 := TSoundNode.Create;;
Sound137.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture138 := TMovieTextureNode.Create;;
MovieTexture138.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture138.SetUrl(['mpgsys.mpg','https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "children" }
{ METHOD .Source }
{ METHOD.SET .Source }
Sound137.Source := MovieTexture138;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Sound137);
{ Test success: Anchor.isNode()=true, siteAnchor.isNode()=true }
{ Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false }
{ Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false }
{ Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true }
{ Test success: CommentsBlock.isNode()=false, testComments.isNode()=false }
{ Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true }
Shape139 := TShapeNode.Create;;
{ ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' }
{ ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' }
Appearance140 := TAppearanceNode.Create;;
Material141 := TMaterialNode.Create;;
Material141.Transparency := 1;
{ METHOD .SetMaterial }
Appearance140.Material := Material141;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape139.Appearance := Appearance140;
Extrusion142 := TExtrusionNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape139.Geometry := Extrusion142;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape139);
Group143 := TGroupNode.Create;;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
X3DPrototype144 := TX3DPrototype.Create;;
X3DInterfaceDeclaration145 := TX3DInterfaceDeclaration.Create(nil);;
SFString146 := TSFString.CreateUndefined(X3DInterfaceDeclaration145, false, 'description');
{ METHOD .AddSFString }
X3DInterfaceDeclaration145.AddSFString([SFString146]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype144.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration145]);
X3DPrototype147 := TX3DPrototype.Create;;
WorldInfo148 := TWorldInfoNode.Create;;
{ METHOD .AddWorldInfo }
X3DPrototype147.AddWorldInfo([WorldInfo148]);
{ METHOD .AddX3DPrototype }
X3DPrototype144.AddX3DPrototype([X3DPrototype147]);
{ METHOD .AddX3DPrototype }
Group143.AddX3DPrototype([X3DPrototype144]);
X3DPrototype149 := TX3DPrototypeNode;
SFString150 := TSFString.CreateUndefined(X3DPrototype149, false, 'description');
SFString150.Value := 'testing 1 2 3';
{ METHOD .AddSFString }
X3DPrototype149.AddSFString([SFString150]);
{ METHOD .AddX3DPrototype }
Group143.AddX3DPrototype([X3DPrototype149]);
Group151 := TGroupNode.Create;;
{ intentionally empty }
{ METHOD .FdChildren.Add }
Group143.FdChildren.Add(Group151);
X3DPrototype152 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group143.AddX3DPrototype([X3DPrototype152]);
Transform153 := TTransformNode.Create;;
{ intentionally empty }
{ METHOD .FdChildren.Add }
Group143.FdChildren.Add(Transform153);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group143);
X3DPrototype154 := TX3DPrototype.Create;;
X3DPrototype155 := TX3DPrototype.Create;;
ProgramShader156 := TProgramShaderNode.Create;;
{ METHOD .AddProgramShader }
X3DPrototype155.AddProgramShader([ProgramShader156]);
{ METHOD .AddX3DPrototype }
X3DPrototype154.AddX3DPrototype([X3DPrototype155]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype154]);
Shape157 := TShapeNode.Create;;
Appearance158 := TAppearanceNode.Create;;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader159 := TProgramShaderNode.Create;;
ShaderProgram160 := TShaderProgramNode.Create;;
{ METHOD .Programs }
{ METHOD.SET .Programs }
ProgramShader159.Programs := ShaderProgram160;
{ METHOD .AddChildren }
Appearance158.AddChildren([ProgramShader159]);
X3DPrototype161 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Appearance158.AddX3DPrototype([X3DPrototype161]);
ComposedShader162 := TComposedShaderNode.Create;;
ShaderPart163 := TShaderPartNode.Create;;
ShaderPart163.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader162.Parts := ShaderPart163;
{ METHOD .AddChildren }
Appearance158.AddChildren([ComposedShader162]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape157.Appearance := Appearance158;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape157);
Transform164 := TTransformNode.Create;;
CADLayer165 := TCADLayerNode.Create;;
CADAssembly166 := TCADAssemblyNode.Create;;
CADPart167 := TCADPartNode.Create;;
CADFace168 := TCADFaceNode.Create;;
{ METHOD .FdChildren.Add }
CADPart167.FdChildren.Add(CADFace168);
{ METHOD .FdChildren.Add }
CADAssembly166.FdChildren.Add(CADPart167);
{ METHOD .FdChildren.Add }
CADLayer165.FdChildren.Add(CADAssembly166);
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(CADLayer165);
EspduTransform169 := TEspduTransformNode.Create;;
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(EspduTransform169);
ReceiverPdu170 := TReceiverPduNode.Create;;
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(ReceiverPdu170);
SignalPdu171 := TSignalPduNode.Create;;
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(SignalPdu171);
TransmitterPdu172 := TTransmitterPduNode.Create;;
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(TransmitterPdu172);
DISEntityManager173 := TDISEntityManagerNode.Create;;
DISEntityTypeMapping174 := TDISEntityTypeMappingNode.Create;;
{ METHOD .FdChildren.Add }
DISEntityManager173.FdChildren.Add(DISEntityTypeMapping174);
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(DISEntityManager173);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform164);
EspduTransform175 := TEspduTransformNode.Create;;
WorldInfo176 := TWorldInfoNode.Create;;
{ METHOD .FdChildren.Add }
EspduTransform175.FdChildren.Add(WorldInfo176);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(EspduTransform175);
ReceiverPdu177 := TReceiverPduNode.Create;;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(ReceiverPdu177);
SignalPdu178 := TSignalPduNode.Create;;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(SignalPdu178);
TransmitterPdu179 := TTransmitterPduNode.Create;;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(TransmitterPdu179);
DISEntityManager180 := TDISEntityManagerNode.Create;;
DISEntityTypeMapping181 := TDISEntityTypeMappingNode.Create;;
{ METHOD .FdChildren.Add }
DISEntityManager180.FdChildren.Add(DISEntityTypeMapping181);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(DISEntityManager180);
LoadSensor182 := TLoadSensorNode.Create;;
{ Contained nodes typically must be USE references for nodes previously DEFined in the scene }
{ The following nodes are test cases for all X3DUrlObject nodes }
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(Anchor44);
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(Inline107);
DISEntityTypeMapping185 := TDISEntityTypeMappingNode.Create;;
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(DISEntityTypeMapping185);
GeoMetadata186 := TGeoMetadataNode.Create;;
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(GeoMetadata186);
AudioClip187 := TAudioClipNode.Create;;
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(AudioClip187);
ImageCubeMapTexture188 := TImageCubeMapTextureNode.Create;;
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(ImageCubeMapTexture188);
ImageTexture3D189 := TImageTexture3DNode.Create;;
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(ImageTexture3D189);
ImageTexture190 := TImageTextureNode.Create;;
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(ImageTexture190);
MovieTexture191 := TMovieTextureNode.Create;;
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(MovieTexture191);
Script192 := TScriptNode.Create;;

Script192.SetSourceCode('''ecmascript:\n"+
"/* dummy test source code */''');
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(Script192);
PackagedShader193 := TPackagedShaderNode.Create;;
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(PackagedShader193);
ShaderPart194 := TShaderPartNode.Create;;
ShaderPart194.FdType.Value := 'VERTEX';
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(ShaderPart194);
ShaderProgram195 := TShaderProgramNode.Create;;
{ METHOD .FdChildren.Add }
LoadSensor182.FdChildren.Add(ShaderProgram195);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(LoadSensor182);
OrthoViewpoint196 := TOrthoViewpointNode.Create;;
OrthoViewpoint196.SetFieldOfView([1,3,2,4]);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(OrthoViewpoint196);
{ METHOD .AddGroup }
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
Result := X3D0;
end;

begin
end.
