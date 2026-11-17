unit SmokeTestProgramOutput_JavaExport;

interface

uses X3DNodes;

function CreateSmokeTestProgramOutput_JavaExport: TX3DRootNode;

implementation

uses CastleVectors;

function CreateSmokeTestProgramOutput_JavaExport: TX3DRootNode;
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
X3DField77: TX3DField;
X3DField78: TX3DField;
ColorInterpolator79: TColorInterpolatorNode;
TimeSensor80: TTimeSensorNode;
X3DPrototype84: TX3DPrototype;
X3DInterfaceDeclaration85: TX3DInterfaceDeclaration;
X3DField86: TX3DField;
X3DField87: TX3DField;
X3DPrototype88: TX3DPrototype;
Material89: TMaterialNode;
TouchSensor90: TTouchSensorNode;
IS91: TIS;
connect92: Tconnect;
connect93: Tconnect;
X3DExternalPrototype94: TX3DExternalPrototype;
X3DField95: TX3DField;
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
X3DField114: TX3DField;
X3DField115: TX3DField;
X3DField116: TX3DField;
X3DField117: TX3DField;
X3DField118: TX3DField;
X3DField119: TX3DField;
X3DField120: TX3DField;
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
X3DField131: TX3DField;
X3DField132: TX3DField;
X3DField133: TX3DField;
X3DField134: TX3DField;
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
X3DField156: TX3DField;
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
unit9 := TunitNode.Create;
unit9.NameField := 'AngleUnitConversion';
unit9.Category := 'angle';
unit9.ConversionFactor := 1;
{ .AddUnit }
head1.Unit := unit9;
unit10 := TunitNode.Create;
unit10.NameField := 'LengthUnitConversion';
unit10.Category := 'length';
unit10.ConversionFactor := 1;
{ .AddUnit }
head1.Unit := unit10;
unit11 := TunitNode.Create;
unit11.NameField := 'ForceFromPoundsToNewtons';
unit11.Category := 'force';
unit11.ConversionFactor := 4.4482;
{ .AddUnit }
head1.Unit := unit11;
X3D0.Meta['title'] := 'SmokeTestProgramOutput.x3d';
X3D0.Meta['info'] := 'continued development and testing in progress';
X3D0.Meta['description'] := 'Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)';
X3D0.Meta['reference'] := 'https://www.web3d.org/specifications/java/X3DJSAIL.html';
X3D0.Meta['generator'] := 'SmokeTestProgramOutput.java';
X3D0.Meta['created'] := '6 September 2016';
X3D0.Meta['modified'] := '27 September 2026';
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
Viewpoint34.Description := 'Hello X3DJSAIL';
NavigationInfo35 := TNavigationInfoNode.Create;
{ .SetNavigationInfo }
Viewpoint34.NavigationInfo := NavigationInfo35;
{ .AddChildren }
ViewpointGroup33.AddChildren([Viewpoint34]);
Viewpoint36 := TViewpointNode.Create;
Viewpoint36.Description := 'top-down view from above';
Viewpoint36.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint36.Position := Vector3(0,100,0);
{ .AddChildren }
ViewpointGroup33.AddChildren([Viewpoint36]);
{ .AddChildren }
Group32.AddChildren([ViewpointGroup33]);
NavigationInfo37 := TNavigationInfoNode.Create;
NavigationInfo37.SetType(['EXAMINE','FLY','ANY']);
{ .AddChildren }
Group32.AddChildren([NavigationInfo37]);
WorldInfo38 := TWorldInfoNode.Create;
WorldInfo38.Title := 'SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)';
{ .AddChildren }
Group32.AddChildren([WorldInfo38]);
WorldInfo39 := WorldInfo38;
{ .AddChildren }
Group32.AddChildren([WorldInfo39]);
WorldInfo40 := WorldInfo38;
{ .AddChildren }
Group32.AddChildren([WorldInfo40]);
MetadataString41 := TMetadataStringNode.Create;
MetadataString41.NameField := 'test';
MetadataString41.SetValue(['Top-level root Metadata node beneath Scene needs to be one of ''-children'' in JSON encoding']);
{ .SetMetadata }
Group32.Metadata := MetadataString41;
LayerSet42 := TLayerSetNode.Create;
{ .AddChildren }
Group32.AddChildren([LayerSet42]);
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
Material47.Transparency := 0.1;
{ .SetMaterial }
Appearance46.Material := Material47;
ImageTexture48 := TImageTextureNode.Create;
ImageTexture48.SetUrl(['images/X3dJavaSceneAccessInterfaceSaiLibrary.png','https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png']);
{ .SetTexture }
Appearance46.Texture := ImageTexture48;
{ .SetAppearance }
Shape45.Appearance := Appearance46;
Box49 := TBoxNode.Create;
{ .SetGeometry }
Shape45.Geometry := Box49;
{ .AddChildren }
Anchor44.AddChildren([Shape45]);
{ .AddChildren }
Transform43.AddChildren([Anchor44]);
{ .AddChildren }
Group32.AddChildren([Transform43]);
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.EmissiveColor := Vector3(0.6,0.1961,0.8);
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape50.Appearance := Appearance51;
IndexedLineSet53 := TIndexedLineSetNode.Create;
IndexedLineSet53.SetCoordIndex([0,1,2,3,4,0]);
{ Coordinate 3-tuple point count: 6 }
Coordinate54 := TCoordinateNode.Create;
Coordinate54.SetPoint([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ .SetCoord }
IndexedLineSet53.Coord := Coordinate54;
{ .SetGeometry }
Shape50.Geometry := IndexedLineSet53;
{ .AddChildren }
Group32.AddChildren([Shape50]);
PositionInterpolator55 := TPositionInterpolatorNode.Create;
PositionInterpolator55.SetKey([0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator55.SetKeyValue([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ .AddChildren }
Group32.AddChildren([PositionInterpolator55]);
TimeSensor56 := TTimeSensorNode.Create;
TimeSensor56.CycleInterval := 8;
TimeSensor56.Loop := True;
{ .AddChildren }
Group32.AddChildren([TimeSensor56]);
Group32.AddRoute(TimeSensor56.EventFraction_changed, PositionInterpolator55.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator55.EventValue_changed, Transform43.FdTranslation);
{ .AddX3DRoute }
Transform59 := TTransformNode.Create;
Transform59.Translation := Vector3(0,-1.5,0);
Shape60 := TShapeNode.Create;
Appearance61 := TAppearanceNode.Create;
Material62 := Material47;
{ .SetMaterial }
Appearance61.Material := Material62;
{ .SetAppearance }
Shape60.Appearance := Appearance61;
Text63 := TTextNode.Create;
Text63.SetText(['X3D Java','SAI Library','X3DJSAIL']);
{ Comment example A, plain quotation marks: He said, "Immel did it!" }
{ Comment example B, XML character entities: He said, &quot;Immel did it!&quot; }
MetadataSet64 := TMetadataSetNode.Create;
MetadataSet64.NameField := 'EscapedQuotationMarksMetadataSet';
MetadataString65 := TMetadataStringNode.Create;
MetadataString65.NameField := 'extraChildTest';
MetadataString65.SetValue(['checks MetadataSet addValue() method']);
{ .FdValue.Add }
MetadataSet64.FdValue.Add(MetadataString65);
{ .SetMetadata }
Text63.Metadata := MetadataSet64;
FontStyle66 := TFontStyleNode.Create;
FontStyle66.Justify := fjMiddle;
FontStyle66.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text63.FontStyle := FontStyle66;
{ .SetGeometry }
Shape60.Geometry := Text63;
{ .AddChild }
Transform59.AddChildren([Shape60]);
Collision67 := TCollisionNode.Create;
{ test containerField='proxy' }
Shape68 := TShapeNode.Create;
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text69 := TTextNode.Create;
Text69.SetText(['One, Two, Text','He said, "Immel did it!" \"\"']);
{ .SetGeometry }
Shape68.Geometry := Text69;
{ .SetProxy }
Collision67.Proxy := Shape68;
{ .AddChildren }
Transform59.AddChildren([Collision67]);
{ It's a beautiful world }
{ ... for you! }
{ https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) }
{ .AddChildren }
Group32.AddChildren([Transform59]);
{ repeatedly spin 180 degrees as a readable special effect }
OrientationInterpolator70 := TOrientationInterpolatorNode.Create;
OrientationInterpolator70.SetKey([0,0.5,1]);
OrientationInterpolator70.SetKeyValue([Vector4(0,1,0,4.7124),Vector4(0,1,0,0),Vector4(0,1,0,1.5708)]);
{ .AddChildren }
Group32.AddChildren([OrientationInterpolator70]);
TimeSensor71 := TTimeSensorNode.Create;
TimeSensor71.CycleInterval := 5;
TimeSensor71.Loop := True;
{ .AddChildren }
Group32.AddChildren([TimeSensor71]);
Group32.AddRoute(TimeSensor71.EventFraction_changed, OrientationInterpolator70.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator70.EventValue_changed, Transform59.FdRotation);
{ .AddX3DRoute }
Group74 := TGroupNode.Create;
Background75 := TBackgroundNode.Create;
{ .AddChildren }
Group74.AddChildren([Background75]);
Script76 := TScriptNode.Create;
X3DField77 := TX3DField.Create;
X3DField77.NameField := 'colorInput';
X3DField77.AccessType := 'inputOnly';
X3DField77.Type := 'SFColor';
{ .SetX3DField }
Script76.X3DField := X3DField77;
X3DField78 := TX3DField.Create;
X3DField78.NameField := 'colorsOutput';
X3DField78.AccessType := 'outputOnly';
X3DField78.Type := 'MFColor';
{ .AddX3DField }
Script76.X3DField := X3DField78;

Script76.SetSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ',\\n//                colorsOutput=' + colorsOutput + '\\n');\n"+
"// TODO check line wrapping when exporting/converting\n"+
"}''');
{ .AddChildren }
Group74.AddChildren([Script76]);
ColorInterpolator79 := TColorInterpolatorNode.Create;
ColorInterpolator79.SetKey([0,0.5,1]);
ColorInterpolator79.SetKeyValue([Vector3(0.9412,1,1),Vector3(0.2941,0,0.5098),Vector3(0.9412,1,1)]);
{ AZURE to INDIGO and back again }
{ .AddChildren }
Group74.AddChildren([ColorInterpolator79]);
TimeSensor80 := TTimeSensorNode.Create;
TimeSensor80.CycleInterval := 60;
TimeSensor80.Loop := True;
{ .AddChildren }
Group74.AddChildren([TimeSensor80]);
Group74.AddRoute(Script76.FdColorsoutput, Background75.FdSkycolor);
{ .AddX3DRoute }
Group74.AddRoute(ColorInterpolator79.EventValue_changed, Script76.FdColorinput);
{ .AddX3DRoute }
Group74.AddRoute(TimeSensor80.EventFraction_changed, ColorInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group32.AddChildren([Group74]);
X3DPrototype84 := TX3DPrototype.Create;
X3DPrototype84.NameField := 'ArtDeco01';
X3DPrototype84.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
X3DInterfaceDeclaration85 := TX3DInterfaceDeclaration.Create(nil);
X3DField86 := TX3DField.Create;
X3DField86.NameField := 'description';
X3DField86.AccessType := 'inputOutput';
X3DField86.Appinfo := 'tooltip for descriptionField';
X3DField86.Type := 'SFString';
X3DField86.Value := 'ArtDeco01Material prototype is a Material node';
{ .SetX3DField }
X3DInterfaceDeclaration85.X3DField := X3DField86;
X3DField87 := TX3DField.Create;
X3DField87.NameField := 'enabled';
X3DField87.AccessType := 'inputOutput';
X3DField87.Type := 'SFBool';
X3DField87.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration85.X3DField := X3DField87;
{ .SetX3DInterfaceDeclaration }
X3DPrototype84.X3DInterfaceDeclaration := X3DInterfaceDeclaration85;
X3DPrototype88 := TX3DPrototype.Create;
{ Initial node of ProtoBody determines prototype node type }
Material89 := TMaterialNode.Create;
Material89.AmbientIntensity := 0.25;
Material89.DiffuseColor := Vector3(0.2824,0.0852,0.1345);
Material89.Shininess := 0.1273;
Material89.SpecularColor := Vector3(0.2763,0.1143,0.1399);
{ .AddMaterial }
X3DPrototype88.Material := Material89;
{ [SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
TouchSensor90 := TTouchSensorNode.Create;
TouchSensor90.Description := 'within ProtoBody';
IS91 := TIS.Create;
connect92 := Tconnect.Create;
connect92.NodeField := 'description';
connect92.ProtoField := 'description';
{ .AddConnect }
IS91.Connect := connect92;
connect93 := Tconnect.Create;
connect93.NodeField := 'enabled';
connect93.ProtoField := 'enabled';
{ .AddConnect }
IS91.Connect := connect93;
{ .SetIS }
TouchSensor90.IS := IS91;
{ .AddTouchSensor }
X3DPrototype88.TouchSensor := TouchSensor90;
{ .AddX3DPrototype }
X3DPrototype84.X3DPrototype := X3DPrototype88;
{ .AddX3DPrototype }
Group32.X3DPrototype := X3DPrototype84;
X3DExternalPrototype94 := TX3DExternalPrototype.Create;
X3DExternalPrototype94.NameField := 'ArtDeco02';
X3DExternalPrototype94.Appinfo := 'this is a different Material node';
X3DExternalPrototype94.Url := '\"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02\"';
{ [SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
X3DField95 := TX3DField.Create;
X3DField95.NameField := 'description';
X3DField95.AccessType := 'inputOutput';
X3DField95.Appinfo := 'tooltip for descriptionField';
X3DField95.Type := 'SFString';
{ .AddX3DField }
X3DExternalPrototype94.X3DField := X3DField95;
{ .AddX3DExternalPrototype }
Group32.X3DExternalPrototype := X3DExternalPrototype94;
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape96 := TShapeNode.Create;
Appearance97 := TAppearanceNode.Create;
{ ArtDeco01Material prototype goes here... }
X3DPrototype98 := TX3DPrototypeNode.Create;
X3DPrototype98.NameField := 'ArtDeco01';
{ [SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
SFString99 := TSFString.Create(ArtDeco012, false, 'description', 'ArtDeco01Material can substitute for a Material node');
SFString99.NameField := 'description';
SFString99.Value := 'ArtDeco01Material can substitute for a Material node';
{ .AddSFString }
X3DPrototype98.SFString := SFString99;
{ .SetMaterial }
Appearance97.Material := X3DPrototype98;
{ .SetAppearance }
Shape96.Appearance := Appearance97;
Sphere100 := TSphereNode.Create;
Sphere100.Radius := 0.001;
{ .SetGeometry }
Shape96.Geometry := Sphere100;
{ .AddChildren }
Group32.AddChildren([Shape96]);
Shape101 := TShapeNode.Create;
Appearance102 := TAppearanceNode.Create;
{ ArtDeco02Material ProtoInstance goes here... }
X3DPrototype103 := TX3DPrototypeNode.Create;
X3DPrototype103.NameField := 'ArtDeco02';
{ [SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
{ .SetMaterial }
Appearance102.Material := X3DPrototype103;
{ .SetAppearance }
Shape101.Appearance := Appearance102;
Cone104 := TConeNode.Create;
Cone104.BottomRadius := 0.001;
Cone104.Height := 0.001;
{ .SetGeometry }
Shape101.Geometry := Cone104;
{ .AddChildren }
Group32.AddChildren([Shape101]);
Shape105 := TShapeNode.Create;
Appearance106 := TAppearanceNode.Create;
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE. }
X3DPrototype107.NameField := 'ArtDeco02';
X3DPrototype107 := X3DPrototype103;
{ .SetMaterial }
Appearance106.Material := X3DPrototype107;
{ .SetAppearance }
Shape105.Appearance := Appearance106;
Cylinder108 := TCylinderNode.Create;
Cylinder108.Height := 0.001;
Cylinder108.Radius := 0.001;
{ .SetGeometry }
Shape105.Geometry := Cylinder108;
{ .AddChildren }
Group32.AddChildren([Shape105]);
Inline109 := TInlineNode.Create;
Inline109.SetUrl(['newScene.x3d','https://www.web3d.org/specifications/java/examples/newScene.x3d']);
{ .AddChildren }
Group32.AddChildren([Inline109]);
IMPORT110 := TIMPORTNode.Create;
IMPORT110.AS := 'WorldInfoDEF2';
IMPORT110.ImportedDEF := 'WorldInfoDEF';
IMPORT110.InlineDEF := 'inlineScene';
{ .AddChildren }
Group32.AddChildren([IMPORT110]);
EXPORT111 := TEXPORTNode.Create;
EXPORT111.AS := 'WorldInfoDEF3';
EXPORT111.LocalDEF := 'WorldInfoDEF';
{ .AddChildren }
Group32.AddChildren([EXPORT111]);
X3DPrototype112 := TX3DPrototype.Create;
X3DPrototype112.NameField := 'MaterialModulator';
X3DPrototype112.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
X3DPrototype112.Documentation := 'https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
X3DInterfaceDeclaration113 := TX3DInterfaceDeclaration.Create(nil);
X3DField114 := TX3DField.Create;
X3DField114.NameField := 'enabled';
X3DField114.AccessType := 'inputOutput';
X3DField114.Type := 'SFBool';
X3DField114.Value := 'true';
{ .SetX3DField }
X3DInterfaceDeclaration113.X3DField := X3DField114;
X3DField115 := TX3DField.Create;
X3DField115.NameField := 'diffuseColor';
X3DField115.AccessType := 'inputOutput';
X3DField115.Type := 'SFColor';
X3DField115.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration113.X3DField := X3DField115;
X3DField116 := TX3DField.Create;
X3DField116.NameField := 'emissiveColor';
X3DField116.AccessType := 'inputOutput';
X3DField116.Type := 'SFColor';
X3DField116.Value := '0.05 0.05 0.5';
{ .AddX3DField }
X3DInterfaceDeclaration113.X3DField := X3DField116;
X3DField117 := TX3DField.Create;
X3DField117.NameField := 'specularColor';
X3DField117.AccessType := 'inputOutput';
X3DField117.Type := 'SFColor';
X3DField117.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration113.X3DField := X3DField117;
X3DField118 := TX3DField.Create;
X3DField118.NameField := 'transparency';
X3DField118.AccessType := 'inputOutput';
X3DField118.Type := 'SFFloat';
X3DField118.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration113.X3DField := X3DField118;
X3DField119 := TX3DField.Create;
X3DField119.NameField := 'shininess';
X3DField119.AccessType := 'inputOutput';
X3DField119.Type := 'SFFloat';
X3DField119.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration113.X3DField := X3DField119;
X3DField120 := TX3DField.Create;
X3DField120.NameField := 'ambientIntensity';
X3DField120.AccessType := 'inputOutput';
X3DField120.Type := 'SFFloat';
X3DField120.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration113.X3DField := X3DField120;
{ .SetX3DInterfaceDeclaration }
X3DPrototype112.X3DInterfaceDeclaration := X3DInterfaceDeclaration113;
X3DPrototype121 := TX3DPrototype.Create;
Material122 := TMaterialNode.Create;
IS123 := TIS.Create;
connect124 := Tconnect.Create;
connect124.NodeField := 'diffuseColor';
connect124.ProtoField := 'diffuseColor';
{ .AddConnect }
IS123.Connect := connect124;
connect125 := Tconnect.Create;
connect125.NodeField := 'emissiveColor';
connect125.ProtoField := 'emissiveColor';
{ .AddConnect }
IS123.Connect := connect125;
connect126 := Tconnect.Create;
connect126.NodeField := 'specularColor';
connect126.ProtoField := 'specularColor';
{ .AddConnect }
IS123.Connect := connect126;
connect127 := Tconnect.Create;
connect127.NodeField := 'transparency';
connect127.ProtoField := 'transparency';
{ .AddConnect }
IS123.Connect := connect127;
connect128 := Tconnect.Create;
connect128.NodeField := 'shininess';
connect128.ProtoField := 'shininess';
{ .AddConnect }
IS123.Connect := connect128;
connect129 := Tconnect.Create;
connect129.NodeField := 'ambientIntensity';
connect129.ProtoField := 'ambientIntensity';
{ .AddConnect }
IS123.Connect := connect129;
{ .SetIS }
Material122.IS := IS123;
{ .SetMaterial }
X3DPrototype121.Material := Material122;
{ Only first node (the node type for the prototype) is renderable, others are along for the ride }
Script130 := TScriptNode.Create;
X3DField131 := TX3DField.Create;
X3DField131.NameField := 'enabled';
X3DField131.AccessType := 'inputOutput';
X3DField131.Type := 'SFBool';
{ .SetX3DField }
Script130.X3DField := X3DField131;
X3DField132 := TX3DField.Create;
X3DField132.NameField := 'diffuseColor';
X3DField132.AccessType := 'inputOutput';
X3DField132.Type := 'SFColor';
{ .AddX3DField }
Script130.X3DField := X3DField132;
X3DField133 := TX3DField.Create;
X3DField133.NameField := 'newColor';
X3DField133.AccessType := 'outputOnly';
X3DField133.Type := 'SFColor';
{ .AddX3DField }
Script130.X3DField := X3DField133;
X3DField134 := TX3DField.Create;
X3DField134.NameField := 'clockTrigger';
X3DField134.AccessType := 'inputOnly';
X3DField134.Type := 'SFTime';
{ .AddX3DField }
Script130.X3DField := X3DField134;
IS135 := TIS.Create;
connect136 := Tconnect.Create;
connect136.NodeField := 'enabled';
connect136.ProtoField := 'enabled';
{ .AddConnect }
IS135.Connect := connect136;
connect137 := Tconnect.Create;
connect137.NodeField := 'diffuseColor';
connect137.ProtoField := 'diffuseColor';
{ .AddConnect }
IS135.Connect := connect137;
{ .SetIS }
Script130.IS := IS135;

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
{ .AddScript }
X3DPrototype121.Script := Script130;
{ .AddX3DPrototype }
X3DPrototype112.X3DPrototype := X3DPrototype121;
{ .AddX3DPrototype }
Group32.X3DPrototype := X3DPrototype112;
{ Test success: declarative statement createDeclarativeShapeTests() }
Group138 := TGroupNode.Create;
Shape139 := TShapeNode.Create;
MetadataString140 := TMetadataStringNode.Create;
MetadataString140.NameField := 'findThisNameValue';
MetadataString140.SetValue(['test case']);
{ .SetValue }
Shape139.Value := MetadataString140;
Appearance141 := TAppearanceNode.Create;
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
X3DPrototype142 := TX3DPrototypeNode.Create;
X3DPrototype142.NameField := 'MaterialModulator';
{ .SetMaterial }
Appearance141.Material := X3DPrototype142;
{ .SetAppearance }
Shape139.Appearance := Appearance141;
Cone143 := TConeNode.Create;
Cone143.Bottom := False;
Cone143.BottomRadius := 0.05;
Cone143.Height := 0.1;
{ .SetGeometry }
Shape139.Geometry := Cone143;
{ .AddChildren }
Group138.AddChildren([Shape139]);
{ Test success: declarativeGroup.addChild() singleton pipeline method }
{ .AddChildren }
Group32.AddChildren([Group138]);
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
{ .AddChildren }
Group32.AddChildren([Group144]);
Sound145 := TSoundNode.Create;
Sound145.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip146 := TAudioClipNode.Create;
AudioClip146.Description := 'chimes';
AudioClip146.SetUrl(['chimes.wav','https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
{ .SetSource }
Sound145.Source := AudioClip146;
{ .AddChildren }
Group32.AddChildren([Sound145]);
Sound147 := TSoundNode.Create;
Sound147.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture148 := TMovieTextureNode.Create;
MovieTexture148.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture148.SetUrl(['mpgsys.mpg','https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "children" }
{ .SetSource }
Sound147.Source := MovieTexture148;
{ .AddChildren }
Group32.AddChildren([Sound147]);
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
{ .SetMaterial }
Appearance150.Material := Material151;
{ .SetAppearance }
Shape149.Appearance := Appearance150;
Extrusion152 := TExtrusionNode.Create;
{ .SetGeometry }
Shape149.Geometry := Extrusion152;
{ .AddChildren }
Group32.AddChildren([Shape149]);
Group153 := TGroupNode.Create;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
X3DPrototype154 := TX3DPrototype.Create;
X3DPrototype154.NameField := 'NewWorldInfo';
X3DInterfaceDeclaration155 := TX3DInterfaceDeclaration.Create(nil);
X3DField156 := TX3DField.Create;
X3DField156.NameField := 'description';
X3DField156.AccessType := 'initializeOnly';
X3DField156.Type := 'SFString';
{ .SetX3DField }
X3DInterfaceDeclaration155.X3DField := X3DField156;
{ .SetX3DInterfaceDeclaration }
X3DPrototype154.X3DInterfaceDeclaration := X3DInterfaceDeclaration155;
X3DPrototype157 := TX3DPrototype.Create;
WorldInfo158 := TWorldInfoNode.Create;
{ .SetWorldInfo }
X3DPrototype157.WorldInfo := WorldInfo158;
{ .AddX3DPrototype }
X3DPrototype154.X3DPrototype := X3DPrototype157;
{ .AddX3DPrototype }
Group153.X3DPrototype := X3DPrototype154;
X3DPrototype159 := TX3DPrototypeNode.Create;
X3DPrototype159.NameField := 'NewWorldInfo';
SFString160 := TSFString.Create(NewWorldInfo4, false, 'description', 'testing 1 2 3');
SFString160.NameField := 'description';
SFString160.Value := 'testing 1 2 3';
{ .SetSFString }
X3DPrototype159.SFString := SFString160;
{ .AddX3DPrototype }
Group153.X3DPrototype := X3DPrototype159;
Group161 := TGroupNode.Create;
{ intentionally empty }
{ .AddChildren }
Group153.AddChildren([Group161]);
X3DPrototype162 := TX3DPrototypeNode.Create;
X3DPrototype162.NameField := 'NewWorldInfo';
{ .AddX3DPrototype }
Group153.X3DPrototype := X3DPrototype162;
Transform163 := TTransformNode.Create;
{ intentionally empty }
{ .AddChildren }
Group153.AddChildren([Transform163]);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
{ .AddChildren }
Group32.AddChildren([Group153]);
X3DPrototype164 := TX3DPrototype.Create;
X3DPrototype164.NameField := 'ShaderProto';
X3DPrototype165 := TX3DPrototype.Create;
ProgramShader166 := TProgramShaderNode.Create;
{ .SetProgramShader }
X3DPrototype165.ProgramShader := ProgramShader166;
{ .SetX3DPrototype }
X3DPrototype164.X3DPrototype := X3DPrototype165;
{ .AddX3DPrototype }
Group32.X3DPrototype := X3DPrototype164;
Shape167 := TShapeNode.Create;
Appearance168 := TAppearanceNode.Create;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader169 := TProgramShaderNode.Create;
ShaderProgram170 := TShaderProgramNode.Create;
ShaderProgram170.Type := 'VERTEX';
{ .AddPrograms }
ProgramShader169.Programs := ShaderProgram170;
{ .AddShaders }
Appearance168.Shaders := ProgramShader169;
X3DPrototype171 := TX3DPrototypeNode.Create;
X3DPrototype171.NameField := 'ShaderProto';
{ .AddX3DPrototype }
Appearance168.X3DPrototype := X3DPrototype171;
ComposedShader172 := TComposedShaderNode.Create;
ShaderPart173 := TShaderPartNode.Create;
ShaderPart173.Type := 'VERTEX';
{ .AddParts }
ComposedShader172.Parts := ShaderPart173;
{ .AddShaders }
Appearance168.Shaders := ComposedShader172;
{ .SetAppearance }
Shape167.Appearance := Appearance168;
{ .AddChildren }
Group32.AddChildren([Shape167]);
Transform174 := TTransformNode.Create;
CADLayer175 := TCADLayerNode.Create;
CADAssembly176 := TCADAssemblyNode.Create;
CADPart177 := TCADPartNode.Create;
CADFace178 := TCADFaceNode.Create;
{ .AddChildren }
CADPart177.AddChildren([CADFace178]);
{ .AddChildren }
CADAssembly176.AddChildren([CADPart177]);
{ .AddChildren }
CADLayer175.AddChildren([CADAssembly176]);
{ .AddChildren }
Transform174.AddChildren([CADLayer175]);
EspduTransform179 := TEspduTransformNode.Create;
{ .AddChildren }
Transform174.AddChildren([EspduTransform179]);
ReceiverPdu180 := TReceiverPduNode.Create;
{ .AddChildren }
Transform174.AddChildren([ReceiverPdu180]);
SignalPdu181 := TSignalPduNode.Create;
{ .AddChildren }
Transform174.AddChildren([SignalPdu181]);
TransmitterPdu182 := TTransmitterPduNode.Create;
{ .AddChildren }
Transform174.AddChildren([TransmitterPdu182]);
DISEntityManager183 := TDISEntityManagerNode.Create;
DISEntityTypeMapping184 := TDISEntityTypeMappingNode.Create;
{ .AddChildren }
DISEntityManager183.AddChildren([DISEntityTypeMapping184]);
{ .AddChildren }
Transform174.AddChildren([DISEntityManager183]);
{ .AddChildren }
Group32.AddChildren([Transform174]);
EspduTransform185 := TEspduTransformNode.Create;
WorldInfo186 := TWorldInfoNode.Create;
{ .AddChildren }
EspduTransform185.AddChildren([WorldInfo186]);
{ .AddChildren }
Group32.AddChildren([EspduTransform185]);
ReceiverPdu187 := TReceiverPduNode.Create;
{ .AddChildren }
Group32.AddChildren([ReceiverPdu187]);
SignalPdu188 := TSignalPduNode.Create;
{ .AddChildren }
Group32.AddChildren([SignalPdu188]);
TransmitterPdu189 := TTransmitterPduNode.Create;
{ .AddChildren }
Group32.AddChildren([TransmitterPdu189]);
DISEntityManager190 := TDISEntityManagerNode.Create;
DISEntityTypeMapping191 := TDISEntityTypeMappingNode.Create;
{ .AddChildren }
DISEntityManager190.AddChildren([DISEntityTypeMapping191]);
{ .AddChildren }
Group32.AddChildren([DISEntityManager190]);
LoadSensor192 := TLoadSensorNode.Create;
{ Contained nodes typically must be USE references for nodes previously DEFined in the scene }
{ The following nodes are test cases for all X3DUrlObject nodes }
Anchor193 := Anchor44;
{ .AddChildren }
LoadSensor192.AddChildren([Anchor193]);
Inline194 := Inline109;
{ .AddChildren }
LoadSensor192.AddChildren([Inline194]);
DISEntityTypeMapping195 := TDISEntityTypeMappingNode.Create;
{ .AddChildren }
LoadSensor192.AddChildren([DISEntityTypeMapping195]);
GeoMetadata196 := TGeoMetadataNode.Create;
{ .AddChildren }
LoadSensor192.AddChildren([GeoMetadata196]);
AudioClip197 := TAudioClipNode.Create;
{ .AddChildren }
LoadSensor192.AddChildren([AudioClip197]);
ImageCubeMapTexture198 := TImageCubeMapTextureNode.Create;
{ .AddChildren }
LoadSensor192.AddChildren([ImageCubeMapTexture198]);
ImageTexture3D199 := TImageTexture3DNode.Create;
{ .AddChildren }
LoadSensor192.AddChildren([ImageTexture3D199]);
ImageTexture200 := TImageTextureNode.Create;
{ .AddChildren }
LoadSensor192.AddChildren([ImageTexture200]);
MovieTexture201 := TMovieTextureNode.Create;
{ .AddChildren }
LoadSensor192.AddChildren([MovieTexture201]);
Script202 := TScriptNode.Create;

Script202.SetSourceCode('''ecmascript:\n"+
"/* dummy test source code */''');
{ .AddChildren }
LoadSensor192.AddChildren([Script202]);
PackagedShader203 := TPackagedShaderNode.Create;
{ .AddChildren }
LoadSensor192.AddChildren([PackagedShader203]);
ShaderPart204 := TShaderPartNode.Create;
ShaderPart204.Type := 'VERTEX';
{ .AddChildren }
LoadSensor192.AddChildren([ShaderPart204]);
ShaderProgram205 := TShaderProgramNode.Create;
ShaderProgram205.Type := 'VERTEX';
{ .AddChildren }
LoadSensor192.AddChildren([ShaderProgram205]);
{ .AddChildren }
Group32.AddChildren([LoadSensor192]);
OrthoViewpoint206 := TOrthoViewpointNode.Create;
OrthoViewpoint206.SetFieldOfView([1,3,2,4]);
{ .AddChildren }
Group32.AddChildren([OrthoViewpoint206]);
{ .AddGroup }
X3D0.AddChildren([Group32]);
Result := X3D0;
end;

begin
end.
