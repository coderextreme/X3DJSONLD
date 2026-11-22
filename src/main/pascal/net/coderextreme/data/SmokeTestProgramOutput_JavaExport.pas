unit SmokeTestProgramOutput_JavaExport;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
IS91: TIS;
connect92: Tconnect;
connect93: Tconnect;
X3DExternalPrototype94: TX3DExternalPrototype;
SFString95: TSFString;
Shape96: TShapeNode;
Appearance97: TAppearanceNode;
X3DPrototype98: TX3DPrototypeNode;
SFString99: TSFString;
Sphere100: TSphereNode;
Shape101: TShapeNode;
Appearance102: TAppearanceNode;
X3DPrototype103: TX3DPrototypeNode;
Cone104: TConeNode;
Shape105: TShapeNode;
Appearance106: TAppearanceNode;
X3DPrototype107: TX3DPrototypeNode;
Cylinder108: TCylinderNode;
Inline109: TInlineNode;
IMPORT110: TIMPORTNode;
EXPORT111: TEXPORTNode;
X3DPrototype112: TX3DPrototype;
X3DInterfaceDeclaration113: TX3DInterfaceDeclaration;
SFBool114: TSFBool;
SFColor115: TSFColor;
SFColor116: TSFColor;
SFColor117: TSFColor;
SFFloat118: TSFFloat;
SFFloat119: TSFFloat;
SFFloat120: TSFFloat;
X3DPrototype121: TX3DPrototype;
Material122: TMaterialNode;
IS123: TIS;
connect124: Tconnect;
connect125: Tconnect;
connect126: Tconnect;
connect127: Tconnect;
connect128: Tconnect;
connect129: Tconnect;
Script130: TScriptNode;
SFBool131: TSFBool;
SFColor132: TSFColor;
SFColor133: TSFColor;
SFTime134: TSFTime;
IS135: TIS;
connect136: Tconnect;
connect137: Tconnect;
Group138: TGroupNode;
Shape139: TShapeNode;
MetadataString140: TMetadataStringNode;
Appearance141: TAppearanceNode;
X3DPrototype142: TX3DPrototypeNode;
Cone143: TConeNode;
Group144: TGroupNode;
Sound145: TSoundNode;
AudioClip146: TAudioClipNode;
Sound147: TSoundNode;
MovieTexture148: TMovieTextureNode;
Shape149: TShapeNode;
Appearance150: TAppearanceNode;
Material151: TMaterialNode;
Extrusion152: TExtrusionNode;
Group153: TGroupNode;
X3DPrototype154: TX3DPrototype;
X3DInterfaceDeclaration155: TX3DInterfaceDeclaration;
SFString156: TSFString;
X3DPrototype157: TX3DPrototype;
WorldInfo158: TWorldInfoNode;
X3DPrototype159: TX3DPrototypeNode;
SFString160: TSFString;
Group161: TGroupNode;
X3DPrototype162: TX3DPrototypeNode;
Transform163: TTransformNode;
X3DPrototype164: TX3DPrototype;
X3DPrototype165: TX3DPrototype;
ProgramShader166: TProgramShaderNode;
Shape167: TShapeNode;
Appearance168: TAppearanceNode;
ProgramShader169: TProgramShaderNode;
ShaderProgram170: TShaderProgramNode;
X3DPrototype171: TX3DPrototypeNode;
ComposedShader172: TComposedShaderNode;
ShaderPart173: TShaderPartNode;
Transform174: TTransformNode;
CADLayer175: TCADLayerNode;
CADAssembly176: TCADAssemblyNode;
CADPart177: TCADPartNode;
CADFace178: TCADFaceNode;
EspduTransform179: TEspduTransformNode;
ReceiverPdu180: TReceiverPduNode;
SignalPdu181: TSignalPduNode;
TransmitterPdu182: TTransmitterPduNode;
DISEntityManager183: TDISEntityManagerNode;
DISEntityTypeMapping184: TDISEntityTypeMappingNode;
EspduTransform185: TEspduTransformNode;
WorldInfo186: TWorldInfoNode;
ReceiverPdu187: TReceiverPduNode;
SignalPdu188: TSignalPduNode;
TransmitterPdu189: TTransmitterPduNode;
DISEntityManager190: TDISEntityManagerNode;
DISEntityTypeMapping191: TDISEntityTypeMappingNode;
LoadSensor192: TLoadSensorNode;
Anchor193: TAnchorNode;
Inline194: TInlineNode;
DISEntityTypeMapping195: TDISEntityTypeMappingNode;
GeoMetadata196: TGeoMetadataNode;
AudioClip197: TAudioClipNode;
ImageCubeMapTexture198: TImageCubeMapTextureNode;
ImageTexture3D199: TImageTexture3DNode;
ImageTexture200: TImageTextureNode;
MovieTexture201: TMovieTextureNode;
Script202: TScriptNode;
PackagedShader203: TPackagedShaderNode;
ShaderPart204: TShaderPartNode;
ShaderProgram205: TShaderProgramNode;
OrthoViewpoint206: TOrthoViewpointNode;

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
unit9 := TunitNode.Create;
unit9.Category := 'angle';
unit9.ConversionFactor := 1;
{ METHOD .Unit }
head1.Unit := unit9;
unit10 := TunitNode.Create;
unit10.Category := 'length';
unit10.ConversionFactor := 1;
{ METHOD .Unit }
head1.Unit := unit10;
unit11 := TunitNode.Create;
unit11.Category := 'force';
unit11.ConversionFactor := 4.4482;
{ METHOD .Unit }
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
{ METHOD .Meta }
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.x3dv';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.wrl';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.html';
end;

procedure InitSmokeTestProgramOutput_JavaExportPart1;
begin

{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group32 := TGroupNode.Create;
ViewpointGroup33 := TViewpointGroupNode.Create;
ViewpointGroup33.Description := 'Available viewpoints';
Viewpoint34 := TViewpointNode.Create;
Viewpoint34.Description := 'Hello X3DJSAIL';
NavigationInfo35 := TNavigationInfoNode.Create;
{ METHOD .NavigationInfo }
Viewpoint34.NavigationInfo := NavigationInfo35;
{ METHOD .FdChildren.Add }
ViewpointGroup33.FdChildren.Add(Viewpoint34);
Viewpoint36 := TViewpointNode.Create;
Viewpoint36.Description := 'top-down view from above';
Viewpoint36.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint36.Position := Vector3(0,100,0);
{ METHOD .FdChildren.Add }
ViewpointGroup33.FdChildren.Add(Viewpoint36);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(ViewpointGroup33);
NavigationInfo37 := TNavigationInfoNode.Create;
NavigationInfo37.SetType(['EXAMINE','FLY','ANY']);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(NavigationInfo37);
WorldInfo38 := TWorldInfoNode.Create;
WorldInfo38.Title := 'SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(WorldInfo38);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(WorldInfo38);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(WorldInfo38);
MetadataString41 := TMetadataStringNode.Create;
MetadataString41.SetValue(['Top-level root Metadata node beneath Scene needs to be one of ''-children'' in JSON encoding']);
{ METHOD .Metadata }
Group32.Metadata := MetadataString41;
LayerSet42 := TLayerSetNode.Create;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(LayerSet42);
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(0,1.5,0);
Anchor44 := TAnchorNode.Create;
Anchor44.Description := 'select for X3D Java SAI Library (X3DJSAIL) description';
Anchor44.SetUrl(['../X3DJSAIL.html','https://www.web3d.org/specifications/java/X3DJSAIL.html']);
Shape45 := TShapeNode.Create;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0,1,1);
Material47.EmissiveColor := Vector3(0.8,0,0);
end;

procedure InitSmokeTestProgramOutput_JavaExportPart2;
begin

Material47.Transparency := 0.1;
{ METHOD .SetMaterial }
Appearance46.Material := Material47;
ImageTexture48 := TImageTextureNode.Create;
ImageTexture48.SetUrl(['images/X3dJavaSceneAccessInterfaceSaiLibrary.png','https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png']);
{ METHOD .Texture }
Appearance46.Texture := ImageTexture48;
{ METHOD .Appearance }
Shape45.Appearance := Appearance46;
Box49 := TBoxNode.Create;
{ METHOD .Geometry }
Shape45.Geometry := Box49;
{ METHOD .FdChildren.Add }
Anchor44.FdChildren.Add(Shape45);
{ METHOD .FdChildren.Add }
Transform43.FdChildren.Add(Anchor44);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform43);
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.EmissiveColor := Vector3(0.6,0.1961,0.8);
{ METHOD .SetMaterial }
Appearance51.Material := Material52;
{ METHOD .Appearance }
Shape50.Appearance := Appearance51;
IndexedLineSet53 := TIndexedLineSetNode.Create;
IndexedLineSet53.SetCoordIndex([0,1,2,3,4,0]);
{ Coordinate 3-tuple point count: 6 }
Coordinate54 := TCoordinateNode.Create;
Coordinate54.SetPoint([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ METHOD .Coord }
IndexedLineSet53.Coord := Coordinate54;
{ METHOD .Geometry }
Shape50.Geometry := IndexedLineSet53;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape50);
PositionInterpolator55 := TPositionInterpolatorNode.Create;
PositionInterpolator55.SetKey([0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator55.SetKeyValue([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(PositionInterpolator55);
TimeSensor56 := TTimeSensorNode.Create;
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
Transform59 := TTransformNode.Create;
Transform59.Translation := Vector3(0,-1.5,0);
Shape60 := TShapeNode.Create;
Appearance61 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance61.Material := Material47;
{ METHOD .Appearance }
Shape60.Appearance := Appearance61;
end;

procedure InitSmokeTestProgramOutput_JavaExportPart3;
begin

Text63 := TTextNode.Create;
Text63.SetText(['X3D Java','SAI Library','X3DJSAIL']);
{ Comment example A, plain quotation marks: He said, "Immel did it!" }
{ Comment example B, XML character entities: He said, &quot;Immel did it!&quot; }
MetadataSet64 := TMetadataSetNode.Create;
MetadataString65 := TMetadataStringNode.Create;
MetadataString65.SetValue(['checks MetadataSet addValue() method']);
{ METHOD .FdValue.Add }
MetadataSet64.FdValue.Add(MetadataString65);
{ METHOD .Metadata }
Text63.Metadata := MetadataSet64;
FontStyle66 := TFontStyleNode.Create;
FontStyle66.Justify := fjMIDDLE;
FontStyle66.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
Text63.FontStyle := FontStyle66;
{ METHOD .Geometry }
Shape60.Geometry := Text63;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Shape60);
Collision67 := TCollisionNode.Create;
{ test containerField='proxy' }
Shape68 := TShapeNode.Create;
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text69 := TTextNode.Create;
Text69.SetText(['One, Two, Text','He said, "Immel did it!" \"\"']);
{ METHOD .Geometry }
Shape68.Geometry := Text69;
{ METHOD .Proxy }
Collision67.Proxy := Shape68;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Collision67);
{ It's a beautiful world }
{ ... for you! }
{ https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform59);
{ repeatedly spin 180 degrees as a readable special effect }
OrientationInterpolator70 := TOrientationInterpolatorNode.Create;
OrientationInterpolator70.SetKey([0,0.5,1]);
OrientationInterpolator70.SetKeyValue([Vector4(0,1,0,4.7124),Vector4(0,1,0,0),Vector4(0,1,0,1.5708)]);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(OrientationInterpolator70);
TimeSensor71 := TTimeSensorNode.Create;
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
Group74 := TGroupNode.Create;
Background75 := TBackgroundNode.Create;
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(Background75);
Script76 := TScriptNode.Create;
SFColor77 := TSFColor.CreateUndefined(Script76, false, 'colorInput');
{ METHOD .Fd.AddCustomField }
Script76.AddCustomField(SFColor77);
MFColor78 := TMFColor.CreateUndefined(Script76, false, 'colorsOutput');
{ METHOD .Fd.AddCustomField }
Script76.AddCustomField(MFColor78);

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
ColorInterpolator79 := TColorInterpolatorNode.Create;
ColorInterpolator79.SetKey([0,0.5,1]);
ColorInterpolator79.SetKeyValue([Vector3(0.9412,1,1),Vector3(0.2941,0,0.5098),Vector3(0.9412,1,1)]);
{ AZURE to INDIGO and back again }
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(ColorInterpolator79);
TimeSensor80 := TTimeSensorNode.Create;
TimeSensor80.CycleInterval := 60;
TimeSensor80.Loop := True;
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(TimeSensor80);
{ Original "colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor }
{ Sample colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor}
Group74.AddRoute(colorTypeConversionScript.[object Object], Background75.skyColor);
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
X3DPrototype84 := TX3DPrototype.Create;
X3DPrototype84.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
X3DInterfaceDeclaration85 := TX3DInterfaceDeclaration.Create(nil);
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
X3DPrototype88 := TX3DPrototype.Create;
{ Initial node of ProtoBody determines prototype node type }
Material89 := TMaterialNode.Create;
Material89.AmbientIntensity := 0.25;
Material89.DiffuseColor := Vector3(0.2824,0.0852,0.1345);
Material89.Shininess := 0.1273;
Material89.SpecularColor := Vector3(0.2763,0.1143,0.1399);
{ METHOD .AddMaterial }
X3DPrototype88.AddMaterial([Material89]);
{ [SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
TouchSensor90 := TTouchSensorNode.Create;
TouchSensor90.Description := 'within ProtoBody';
IS91 := TIS.Create;
connect92 := Tconnect.Create;
connect92.NodeField := 'description';
connect92.ProtoField := 'description';
{ METHOD .Connect }
IS91.Connect := connect92;
connect93 := Tconnect.Create;
connect93.NodeField := 'enabled';
connect93.ProtoField := 'enabled';
{ METHOD .Connect }
IS91.Connect := connect93;
{ METHOD .IS }
TouchSensor90.IS := IS91;
{ METHOD .AddTouchSensor }
X3DPrototype88.AddTouchSensor([TouchSensor90]);
{ METHOD .AddX3DPrototype }
X3DPrototype84.AddX3DPrototype([X3DPrototype88]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype84]);
X3DExternalPrototype94 := TX3DExternalPrototype.Create;
X3DExternalPrototype94.Appinfo := 'this is a different Material node';
X3DExternalPrototype94.Url := '\"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02\"';
{ [SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
SFString95 := TSFString.CreateUndefined(X3DExternalPrototype94, false, 'description');
SFString95.Appinfo := 'tooltip for descriptionField';
{ METHOD .AddSFString }
X3DExternalPrototype94.AddSFString([SFString95]);
{ METHOD .AddX3DExternalPrototype }
Group32.AddX3DExternalPrototype([X3DExternalPrototype94]);
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape96 := TShapeNode.Create;
Appearance97 := TAppearanceNode.Create;
{ ArtDeco01Material prototype goes here... }
X3DPrototype98 := TX3DPrototypeNode.Create;
{ [SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
SFString99 := TSFString.CreateUndefined(X3DPrototype98, false, 'description');
SFString99.Value := 'ArtDeco01Material can substitute for a Material node';
{ METHOD .AddSFString }
X3DPrototype98.AddSFString([SFString99]);
{ METHOD .SetMaterial }
Appearance97.Material := X3DPrototype98;
{ METHOD .Appearance }
Shape96.Appearance := Appearance97;
Sphere100 := TSphereNode.Create;
Sphere100.Radius := 0.001;
{ METHOD .Geometry }
Shape96.Geometry := Sphere100;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape96);
Shape101 := TShapeNode.Create;
Appearance102 := TAppearanceNode.Create;
{ ArtDeco02Material ProtoInstance goes here... }
X3DPrototype103 := TX3DPrototypeNode.Create;
{ [SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
{ METHOD .SetMaterial }
Appearance102.Material := X3DPrototype103;
{ METHOD .Appearance }
Shape101.Appearance := Appearance102;
Cone104 := TConeNode.Create;
Cone104.BottomRadius := 0.001;
Cone104.Height := 0.001;
{ METHOD .Geometry }
Shape101.Geometry := Cone104;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape101);
Shape105 := TShapeNode.Create;
Appearance106 := TAppearanceNode.Create;
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE. }
{ METHOD .SetMaterial }
Appearance106.Material := X3DPrototype103;
{ METHOD .Appearance }
Shape105.Appearance := Appearance106;
Cylinder108 := TCylinderNode.Create;
Cylinder108.Height := 0.001;
Cylinder108.Radius := 0.001;
{ METHOD .Geometry }
Shape105.Geometry := Cylinder108;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape105);
Inline109 := TInlineNode.Create;
Inline109.SetUrl(['newScene.x3d','https://www.web3d.org/specifications/java/examples/newScene.x3d']);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Inline109);
IMPORT110 := TIMPORTNode.Create;
IMPORT110.AS := 'WorldInfoDEF2';
IMPORT110.ImportedDEF := 'WorldInfoDEF';
IMPORT110.InlineDEF := 'inlineScene';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(IMPORT110);
EXPORT111 := TEXPORTNode.Create;
EXPORT111.AS := 'WorldInfoDEF3';
EXPORT111.LocalDEF := 'WorldInfoDEF';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(EXPORT111);
X3DPrototype112 := TX3DPrototype.Create;
X3DPrototype112.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
X3DPrototype112.Documentation := 'https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
X3DInterfaceDeclaration113 := TX3DInterfaceDeclaration.Create(nil);
SFBool114 := TSFBool.CreateUndefined(X3DInterfaceDeclaration113, false, 'enabled');
SFBool114.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration113.AddSFBool([SFBool114]);
SFColor115 := TSFColor.CreateUndefined(X3DInterfaceDeclaration113, false, 'diffuseColor');
SFColor115.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration113.AddSFColor([SFColor115]);
SFColor116 := TSFColor.CreateUndefined(X3DInterfaceDeclaration113, false, 'emissiveColor');
SFColor116.Value := '0.05 0.05 0.5';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration113.AddSFColor([SFColor116]);
SFColor117 := TSFColor.CreateUndefined(X3DInterfaceDeclaration113, false, 'specularColor');
SFColor117.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration113.AddSFColor([SFColor117]);
SFFloat118 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration113, false, 'transparency');
SFFloat118.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration113.AddSFFloat([SFFloat118]);
SFFloat119 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration113, false, 'shininess');
SFFloat119.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration113.AddSFFloat([SFFloat119]);
SFFloat120 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration113, false, 'ambientIntensity');
SFFloat120.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration113.AddSFFloat([SFFloat120]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype112.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration113]);
X3DPrototype121 := TX3DPrototype.Create;
Material122 := TMaterialNode.Create;
IS123 := TIS.Create;
connect124 := Tconnect.Create;
connect124.NodeField := 'diffuseColor';
connect124.ProtoField := 'diffuseColor';
{ METHOD .Connect }
IS123.Connect := connect124;
connect125 := Tconnect.Create;
connect125.NodeField := 'emissiveColor';
connect125.ProtoField := 'emissiveColor';
{ METHOD .Connect }
IS123.Connect := connect125;
connect126 := Tconnect.Create;
connect126.NodeField := 'specularColor';
connect126.ProtoField := 'specularColor';
{ METHOD .Connect }
IS123.Connect := connect126;
connect127 := Tconnect.Create;
connect127.NodeField := 'transparency';
connect127.ProtoField := 'transparency';
{ METHOD .Connect }
IS123.Connect := connect127;
connect128 := Tconnect.Create;
connect128.NodeField := 'shininess';
connect128.ProtoField := 'shininess';
{ METHOD .Connect }
IS123.Connect := connect128;
connect129 := Tconnect.Create;
connect129.NodeField := 'ambientIntensity';
connect129.ProtoField := 'ambientIntensity';
{ METHOD .Connect }
IS123.Connect := connect129;
{ METHOD .IS }
Material122.IS := IS123;
{ METHOD .AddMaterial }
X3DPrototype121.AddMaterial([Material122]);
{ Only first node (the node type for the prototype) is renderable, others are along for the ride }
Script130 := TScriptNode.Create;
SFBool131 := TSFBool.CreateUndefined(Script130, false, 'enabled');
{ METHOD .Fd.AddCustomField }
Script130.AddCustomField(SFBool131);
SFColor132 := TSFColor.CreateUndefined(Script130, false, 'diffuseColor');
{ METHOD .Fd.AddCustomField }
Script130.AddCustomField(SFColor132);
SFColor133 := TSFColor.CreateUndefined(Script130, false, 'newColor');
{ METHOD .Fd.AddCustomField }
Script130.AddCustomField(SFColor133);
SFTime134 := TSFTime.CreateUndefined(Script130, false, 'clockTrigger');
{ METHOD .Fd.AddCustomField }
Script130.AddCustomField(SFTime134);
IS135 := TIS.Create;
connect136 := Tconnect.Create;
connect136.NodeField := 'enabled';
connect136.ProtoField := 'enabled';
{ METHOD .Connect }
IS135.Connect := connect136;
connect137 := Tconnect.Create;
connect137.NodeField := 'diffuseColor';
connect137.ProtoField := 'diffuseColor';
{ METHOD .Connect }
IS135.Connect := connect137;
{ METHOD .Fd.AddCustomField }
Script130.AddCustomField(IS135);

Script130.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype121.AddScript([Script130]);
{ METHOD .AddX3DPrototype }
X3DPrototype112.AddX3DPrototype([X3DPrototype121]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype112]);
{ Test success: declarative statement createDeclarativeShapeTests() }
Group138 := TGroupNode.Create;
Shape139 := TShapeNode.Create;
MetadataString140 := TMetadataStringNode.Create;
MetadataString140.SetValue(['test case']);
{ METHOD .SetValue }
Shape139.Value := MetadataString140;
Appearance141 := TAppearanceNode.Create;
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
X3DPrototype142 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance141.Material := X3DPrototype142;
{ METHOD .Appearance }
Shape139.Appearance := Appearance141;
Cone143 := TConeNode.Create;
Cone143.Bottom := False;
Cone143.BottomRadius := 0.05;
Cone143.Height := 0.1;
{ METHOD .Geometry }
Shape139.Geometry := Cone143;
{ METHOD .FdChildren.Add }
Group138.FdChildren.Add(Shape139);
{ Test success: declarativeGroup.addChild() singleton pipeline method }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group138);
{ Test success: declarative statement addChild() }
{ Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance> }
{ Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> }
{ Test success: x3dModel.findElementByNameValue("ArtDeco01", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found }
Group144 := TGroupNode.Create;
{ testFieldObjects() results }
{ SFBool default=false, true=true, false=false, negate()=true }
{ MFBool default=, initial=true false true, negate()=false true false }
{ SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4 }
{ MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 }
{ ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= }
{ SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true }
{ regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotation.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group144);
Sound145 := TSoundNode.Create;
Sound145.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip146 := TAudioClipNode.Create;
AudioClip146.Description := 'chimes';
AudioClip146.SetUrl(['chimes.wav','https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
{ METHOD .Source }
Sound145.Source := AudioClip146;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Sound145);
Sound147 := TSoundNode.Create;
Sound147.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture148 := TMovieTextureNode.Create;
MovieTexture148.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture148.SetUrl(['mpgsys.mpg','https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "children" }
{ METHOD .Source }
Sound147.Source := MovieTexture148;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Sound147);
{ Test success: Anchor.isNode()=true, siteAnchor.isNode()=true }
{ Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false }
{ Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false }
{ Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true }
{ Test success: CommentsBlock.isNode()=false, testComments.isNode()=false }
{ Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true }
Shape149 := TShapeNode.Create;
{ ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' }
{ ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' }
Appearance150 := TAppearanceNode.Create;
Material151 := TMaterialNode.Create;
Material151.Transparency := 1;
{ METHOD .SetMaterial }
Appearance150.Material := Material151;
{ METHOD .Appearance }
Shape149.Appearance := Appearance150;
Extrusion152 := TExtrusionNode.Create;
{ METHOD .Geometry }
Shape149.Geometry := Extrusion152;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape149);
Group153 := TGroupNode.Create;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
X3DPrototype154 := TX3DPrototype.Create;
X3DInterfaceDeclaration155 := TX3DInterfaceDeclaration.Create(nil);
SFString156 := TSFString.CreateUndefined(X3DInterfaceDeclaration155, false, 'description');
{ METHOD .AddSFString }
X3DInterfaceDeclaration155.AddSFString([SFString156]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype154.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration155]);
X3DPrototype157 := TX3DPrototype.Create;
WorldInfo158 := TWorldInfoNode.Create;
{ METHOD .AddWorldInfo }
X3DPrototype157.AddWorldInfo([WorldInfo158]);
{ METHOD .AddX3DPrototype }
X3DPrototype154.AddX3DPrototype([X3DPrototype157]);
{ METHOD .AddX3DPrototype }
Group153.AddX3DPrototype([X3DPrototype154]);
X3DPrototype159 := TX3DPrototypeNode.Create;
SFString160 := TSFString.CreateUndefined(X3DPrototype159, false, 'description');
SFString160.Value := 'testing 1 2 3';
{ METHOD .AddSFString }
X3DPrototype159.AddSFString([SFString160]);
{ METHOD .AddX3DPrototype }
Group153.AddX3DPrototype([X3DPrototype159]);
Group161 := TGroupNode.Create;
{ intentionally empty }
{ METHOD .FdChildren.Add }
Group153.FdChildren.Add(Group161);
X3DPrototype162 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group153.AddX3DPrototype([X3DPrototype162]);
Transform163 := TTransformNode.Create;
{ intentionally empty }
{ METHOD .FdChildren.Add }
Group153.FdChildren.Add(Transform163);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group153);
X3DPrototype164 := TX3DPrototype.Create;
X3DPrototype165 := TX3DPrototype.Create;
ProgramShader166 := TProgramShaderNode.Create;
{ METHOD .AddProgramShader }
X3DPrototype165.AddProgramShader([ProgramShader166]);
{ METHOD .AddX3DPrototype }
X3DPrototype164.AddX3DPrototype([X3DPrototype165]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype164]);
Shape167 := TShapeNode.Create;
Appearance168 := TAppearanceNode.Create;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader169 := TProgramShaderNode.Create;
ShaderProgram170 := TShaderProgramNode.Create;
{ METHOD .Programs }
ProgramShader169.Programs := ShaderProgram170;
{ METHOD .AddChildren }
Appearance168.AddChildren([ProgramShader169]);
X3DPrototype171 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Appearance168.AddX3DPrototype([X3DPrototype171]);
ComposedShader172 := TComposedShaderNode.Create;
ShaderPart173 := TShaderPartNode.Create;
ShaderPart173.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader172.Parts := ShaderPart173;
{ METHOD .AddChildren }
Appearance168.AddChildren([ComposedShader172]);
{ METHOD .Appearance }
Shape167.Appearance := Appearance168;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape167);
Transform174 := TTransformNode.Create;
CADLayer175 := TCADLayerNode.Create;
CADAssembly176 := TCADAssemblyNode.Create;
CADPart177 := TCADPartNode.Create;
CADFace178 := TCADFaceNode.Create;
{ METHOD .FdChildren.Add }
CADPart177.FdChildren.Add(CADFace178);
{ METHOD .FdChildren.Add }
CADAssembly176.FdChildren.Add(CADPart177);
{ METHOD .FdChildren.Add }
CADLayer175.FdChildren.Add(CADAssembly176);
{ METHOD .FdChildren.Add }
Transform174.FdChildren.Add(CADLayer175);
EspduTransform179 := TEspduTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform174.FdChildren.Add(EspduTransform179);
ReceiverPdu180 := TReceiverPduNode.Create;
{ METHOD .FdChildren.Add }
Transform174.FdChildren.Add(ReceiverPdu180);
SignalPdu181 := TSignalPduNode.Create;
{ METHOD .FdChildren.Add }
Transform174.FdChildren.Add(SignalPdu181);
TransmitterPdu182 := TTransmitterPduNode.Create;
{ METHOD .FdChildren.Add }
Transform174.FdChildren.Add(TransmitterPdu182);
DISEntityManager183 := TDISEntityManagerNode.Create;
DISEntityTypeMapping184 := TDISEntityTypeMappingNode.Create;
{ METHOD .FdChildren.Add }
DISEntityManager183.FdChildren.Add(DISEntityTypeMapping184);
{ METHOD .FdChildren.Add }
Transform174.FdChildren.Add(DISEntityManager183);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform174);
EspduTransform185 := TEspduTransformNode.Create;
WorldInfo186 := TWorldInfoNode.Create;
{ METHOD .FdChildren.Add }
EspduTransform185.FdChildren.Add(WorldInfo186);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(EspduTransform185);
ReceiverPdu187 := TReceiverPduNode.Create;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(ReceiverPdu187);
SignalPdu188 := TSignalPduNode.Create;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(SignalPdu188);
TransmitterPdu189 := TTransmitterPduNode.Create;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(TransmitterPdu189);
DISEntityManager190 := TDISEntityManagerNode.Create;
DISEntityTypeMapping191 := TDISEntityTypeMappingNode.Create;
{ METHOD .FdChildren.Add }
DISEntityManager190.FdChildren.Add(DISEntityTypeMapping191);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(DISEntityManager190);
LoadSensor192 := TLoadSensorNode.Create;
{ Contained nodes typically must be USE references for nodes previously DEFined in the scene }
{ The following nodes are test cases for all X3DUrlObject nodes }
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(Anchor44);
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(Inline109);
DISEntityTypeMapping195 := TDISEntityTypeMappingNode.Create;
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(DISEntityTypeMapping195);
GeoMetadata196 := TGeoMetadataNode.Create;
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(GeoMetadata196);
AudioClip197 := TAudioClipNode.Create;
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(AudioClip197);
ImageCubeMapTexture198 := TImageCubeMapTextureNode.Create;
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(ImageCubeMapTexture198);
ImageTexture3D199 := TImageTexture3DNode.Create;
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(ImageTexture3D199);
ImageTexture200 := TImageTextureNode.Create;
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(ImageTexture200);
MovieTexture201 := TMovieTextureNode.Create;
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(MovieTexture201);
Script202 := TScriptNode.Create;

Script202.SetSourceCode('''ecmascript:\n"+
"/* dummy test source code */''');
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(Script202);
PackagedShader203 := TPackagedShaderNode.Create;
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(PackagedShader203);
ShaderPart204 := TShaderPartNode.Create;
ShaderPart204.FdType.Value := 'VERTEX';
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(ShaderPart204);
ShaderProgram205 := TShaderProgramNode.Create;
{ METHOD .FdChildren.Add }
LoadSensor192.FdChildren.Add(ShaderProgram205);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(LoadSensor192);
OrthoViewpoint206 := TOrthoViewpointNode.Create;
OrthoViewpoint206.SetFieldOfView([1,3,2,4]);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(OrthoViewpoint206);
{ METHOD .AddGroup }
X3D0.AddChildren([Group32]);
end;

function CreateSmokeTestProgramOutput_JavaExport: TX3DRootNode;
begin
InitSmokeTestProgramOutput_JavaExportPart0;
InitSmokeTestProgramOutput_JavaExportPart1;
InitSmokeTestProgramOutput_JavaExportPart2;
InitSmokeTestProgramOutput_JavaExportPart3;
Result := X3D0;
end;

begin
end.
