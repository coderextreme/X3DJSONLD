unit temp.exiInputTransformed;

interface

uses X3DNodes;

function Createtemp.exiInputTransformed: TX3DRootNode;

implementation

uses CastleVectors;

function Createtemp.exiInputTransformed: TX3DRootNode;
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
X3DField78: TX3DField;
X3DField79: TX3DField;
ColorInterpolator80: TColorInterpolatorNode;
TimeSensor81: TTimeSensorNode;
X3DPrototype85: TX3DPrototype;
X3DInterfaceDeclaration86: TX3DInterfaceDeclaration;
X3DField87: TX3DField;
X3DField88: TX3DField;
X3DPrototype89: TX3DPrototype;
Material90: TMaterialNode;
TouchSensor91: TTouchSensorNode;
IS92: TIS;
connect93: Tconnect;
connect94: Tconnect;
X3DExternalPrototype95: TX3DExternalPrototype;
X3DField96: TX3DField;
Shape97: TShapeNode;
Appearance98: TAppearanceNode;
X3DPrototype99: TX3DPrototypeNode;
SFString100: TSFString;
Sphere101: TSphereNode;
Shape102: TShapeNode;
Appearance103: TAppearanceNode;
X3DPrototype104: TX3DPrototypeNode;
Cone105: TConeNode;
Shape106: TShapeNode;
Appearance107: TAppearanceNode;
X3DPrototype108: TX3DPrototypeNode;
Cylinder109: TCylinderNode;
Inline110: TInlineNode;
IMPORT111: TIMPORTNode;
EXPORT112: TEXPORTNode;
X3DPrototype113: TX3DPrototype;
X3DInterfaceDeclaration114: TX3DInterfaceDeclaration;
X3DField115: TX3DField;
X3DField116: TX3DField;
X3DField117: TX3DField;
X3DField118: TX3DField;
X3DField119: TX3DField;
X3DField120: TX3DField;
X3DField121: TX3DField;
X3DPrototype122: TX3DPrototype;
Material123: TMaterialNode;
IS124: TIS;
connect125: Tconnect;
connect126: Tconnect;
connect127: Tconnect;
connect128: Tconnect;
connect129: Tconnect;
connect130: Tconnect;
Script131: TScriptNode;
X3DField132: TX3DField;
X3DField133: TX3DField;
X3DField134: TX3DField;
X3DField135: TX3DField;
IS136: TIS;
connect137: Tconnect;
connect138: Tconnect;
Group139: TGroupNode;
Shape140: TShapeNode;
MetadataString141: TMetadataStringNode;
Appearance142: TAppearanceNode;
X3DPrototype143: TX3DPrototypeNode;
Cone144: TConeNode;
Group145: TGroupNode;
Sound146: TSoundNode;
AudioClip147: TAudioClipNode;
Sound148: TSoundNode;
MovieTexture149: TMovieTextureNode;
Shape150: TShapeNode;
Appearance151: TAppearanceNode;
Material152: TMaterialNode;
Extrusion153: TExtrusionNode;
Group154: TGroupNode;
X3DPrototype155: TX3DPrototype;
X3DInterfaceDeclaration156: TX3DInterfaceDeclaration;
X3DField157: TX3DField;
X3DPrototype158: TX3DPrototype;
WorldInfo159: TWorldInfoNode;
X3DPrototype160: TX3DPrototypeNode;
SFString161: TSFString;
Group162: TGroupNode;
X3DPrototype163: TX3DPrototypeNode;
Transform164: TTransformNode;
X3DPrototype165: TX3DPrototype;
X3DPrototype166: TX3DPrototype;
ProgramShader167: TProgramShaderNode;
Shape168: TShapeNode;
Appearance169: TAppearanceNode;
ProgramShader170: TProgramShaderNode;
ShaderProgram171: TShaderProgramNode;
X3DPrototype172: TX3DPrototypeNode;
ComposedShader173: TComposedShaderNode;
ShaderPart174: TShaderPartNode;
Transform175: TTransformNode;
CADLayer176: TCADLayerNode;
CADAssembly177: TCADAssemblyNode;
CADPart178: TCADPartNode;
CADFace179: TCADFaceNode;
EspduTransform180: TEspduTransformNode;
ReceiverPdu181: TReceiverPduNode;
SignalPdu182: TSignalPduNode;
TransmitterPdu183: TTransmitterPduNode;
DISEntityManager184: TDISEntityManagerNode;
DISEntityTypeMapping185: TDISEntityTypeMappingNode;
EspduTransform186: TEspduTransformNode;
WorldInfo187: TWorldInfoNode;
ReceiverPdu188: TReceiverPduNode;
SignalPdu189: TSignalPduNode;
TransmitterPdu190: TTransmitterPduNode;
DISEntityManager191: TDISEntityManagerNode;
DISEntityTypeMapping192: TDISEntityTypeMappingNode;
LoadSensor193: TLoadSensorNode;
Anchor194: TAnchorNode;
Inline195: TInlineNode;
DISEntityTypeMapping196: TDISEntityTypeMappingNode;
GeoMetadata197: TGeoMetadataNode;
AudioClip198: TAudioClipNode;
ImageCubeMapTexture199: TImageCubeMapTextureNode;
ImageTexture3D200: TImageTexture3DNode;
ImageTexture201: TImageTextureNode;
MovieTexture202: TMovieTextureNode;
Script203: TScriptNode;
PackagedShader204: TPackagedShaderNode;
ShaderPart205: TShaderPartNode;
ShaderProgram206: TShaderProgramNode;
OrthoViewpoint207: TOrthoViewpointNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.P0:noNamespaceSchemaLocation := 'https://www.web3d.org/specifications/x3d-4.0.xsd';
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
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
X3D0.Meta['modified'] := '19 June 2026';
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
Viewpoint34.FarDistance := -1;
Viewpoint34.FieldOfView := 0.7854;
Viewpoint34.NearDistance := -1;
NavigationInfo35 := TNavigationInfoNode.Create;
NavigationInfo35.Speed := 1;
NavigationInfo35.TransitionTime := 1;
NavigationInfo35.VisibilityLimit := 0;
{ .SetNavigationInfo }
Viewpoint34.NavigationInfo := NavigationInfo35;
{ .AddChildren }
ViewpointGroup33.AddChildren([Viewpoint34]);
Viewpoint36 := TViewpointNode.Create;
Viewpoint36.Description := 'top-down view from above';
Viewpoint36.FarDistance := -1;
Viewpoint36.FieldOfView := 0.7854;
Viewpoint36.NearDistance := -1;
Viewpoint36.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint36.Position := Vector3(0,100,0);
{ .AddChildren }
ViewpointGroup33.AddChildren([Viewpoint36]);
{ .AddChildren }
Group32.AddChildren([ViewpointGroup33]);
NavigationInfo37 := TNavigationInfoNode.Create;
NavigationInfo37.Speed := 1;
NavigationInfo37.TransitionTime := 1;
NavigationInfo37.SetType(['EXAMINE','FLY','ANY']);
NavigationInfo37.VisibilityLimit := 0;
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
Anchor44.AutoRefresh := 0;
Anchor44.AutoRefreshTimeLimit := 3600;
Anchor44.Description := 'select for X3D Java SAI Library (X3DJSAIL) description';
Anchor44.SetUrl(['../X3DJSAIL.html','https://www.web3d.org/specifications/java/X3DJSAIL.html']);
Shape45 := TShapeNode.Create;
Appearance46 := TAppearanceNode.Create;
Appearance46.AlphaCutoff := 0.5;
Material47 := TMaterialNode.Create;
Material47.AmbientIntensity := 0.2;
Material47.DiffuseColor := Vector3(0,1,1);
Material47.EmissiveColor := Vector3(0.8,0,0);
Material47.NormalScale := 1;
Material47.OcclusionStrength := 1;
Material47.Shininess := 0.2;
Material47.Transparency := 0.1;
{ .SetMaterial }
Appearance46.Material := Material47;
ImageTexture48 := TImageTextureNode.Create;
ImageTexture48.AutoRefresh := 0;
ImageTexture48.AutoRefreshTimeLimit := 3600;
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
Appearance51.AlphaCutoff := 0.5;
Material52 := TMaterialNode.Create;
Material52.AmbientIntensity := 0.2;
Material52.EmissiveColor := Vector3(0.6,0.1961,0.8);
Material52.NormalScale := 1;
Material52.OcclusionStrength := 1;
Material52.Shininess := 0.2;
Material52.Transparency := 0;
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape50.Appearance := Appearance51;
IndexedLineSet53 := TIndexedLineSetNode.Create;
IndexedLineSet53.SetCoordIndex([0,1,2,3,4,0]);
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
TimeSensor56.PauseTime := 0;
TimeSensor56.ResumeTime := 0;
TimeSensor56.StartTime := 0;
TimeSensor56.StopTime := 0;
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
Appearance61.AlphaCutoff := 0.5;
Material62 := Material47;
{ .SetMaterial }
Appearance61.Material := Material62;
{ .SetAppearance }
Shape60.Appearance := Appearance61;
Text63 := TTextNode.Create;
Text63.MaxExtent := 0;
Text63.SetText(['X3D Java','SAI Library','X3DJSAIL']);
MetadataSet64 := TMetadataSetNode.Create;
MetadataSet64.NameField := 'EscapedQuotationMarksMetadataSet';
MetadataString65 := TMetadataStringNode.Create;
MetadataString65.NameField := 'quotesTestC';
MetadataString65.SetValue(['MFString example C, backslash-escaped quotes: He said, "Immel did it!"']);
{ .FdValue.Add }
MetadataSet64.FdValue.Add(MetadataString65);
MetadataString66 := TMetadataStringNode.Create;
MetadataString66.NameField := 'extraChildTest';
MetadataString66.SetValue(['checks MetadataSet addValue() method']);
{ .FdValue.Add }
MetadataSet64.FdValue.Add(MetadataString66);
{ .SetMetadata }
Text63.Metadata := MetadataSet64;
FontStyle67 := TFontStyleNode.Create;
FontStyle67.Justify := fjMiddle;
FontStyle67.JustifyMinor := fjMiddle;
FontStyle67.Size := 1;
FontStyle67.Spacing := 1;
{ .SetFontStyle }
Text63.FontStyle := FontStyle67;
{ .SetGeometry }
Shape60.Geometry := Text63;
{ .AddChild }
Transform59.AddChildren([Shape60]);
Collision68 := TCollisionNode.Create;
Shape69 := TShapeNode.Create;
Text70 := TTextNode.Create;
Text70.MaxExtent := 0;
Text70.SetText(['One, Two, Text','He said, "Immel did it!" \"\"']);
{ .SetGeometry }
Shape69.Geometry := Text70;
{ .SetProxy }
Collision68.Proxy := Shape69;
{ .AddChildren }
Transform59.AddChildren([Collision68]);
{ .AddChildren }
Group32.AddChildren([Transform59]);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;
OrientationInterpolator71.SetKey([0,0.5,1]);
OrientationInterpolator71.SetKeyValue([Vector4(0,1,0,4.7124),Vector4(0,1,0,0),Vector4(0,1,0,1.5708)]);
{ .AddChildren }
Group32.AddChildren([OrientationInterpolator71]);
TimeSensor72 := TTimeSensorNode.Create;
TimeSensor72.CycleInterval := 5;
TimeSensor72.Loop := True;
TimeSensor72.PauseTime := 0;
TimeSensor72.ResumeTime := 0;
TimeSensor72.StartTime := 0;
TimeSensor72.StopTime := 0;
{ .AddChildren }
Group32.AddChildren([TimeSensor72]);
Group32.AddRoute(TimeSensor72.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator71.EventValue_changed, Transform59.FdRotation);
{ .AddX3DRoute }
Group75 := TGroupNode.Create;
Background76 := TBackgroundNode.Create;
Background76.Transparency := 0;
{ .AddChildren }
Group75.AddChildren([Background76]);
Script77 := TScriptNode.Create;
Script77.AutoRefresh := 0;
Script77.AutoRefreshTimeLimit := 3600;
X3DField78 := TX3DField.Create;
X3DField78.NameField := 'colorInput';
X3DField78.AccessType := 'inputOnly';
X3DField78.Type := 'SFColor';
{ .SetX3DField }
Script77.X3DField := X3DField78;
X3DField79 := TX3DField.Create;
X3DField79.NameField := 'colorsOutput';
X3DField79.AccessType := 'outputOnly';
X3DField79.Type := 'MFColor';
{ .AddX3DField }
Script77.X3DField := X3DField79;

Script77.SetSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ',\\n//                colorsOutput=' + colorsOutput + '\\n');\n"+
"// TODO check line wrapping when exporting/converting\n"+
"}''');
{ .AddChildren }
Group75.AddChildren([Script77]);
ColorInterpolator80 := TColorInterpolatorNode.Create;
ColorInterpolator80.SetKey([0,0.5,1]);
ColorInterpolator80.SetKeyValue([Vector3(0.9412,1,1),Vector3(0.2941,0,0.5098),Vector3(0.9412,1,1)]);
{ .AddChildren }
Group75.AddChildren([ColorInterpolator80]);
TimeSensor81 := TTimeSensorNode.Create;
TimeSensor81.CycleInterval := 60;
TimeSensor81.Loop := True;
TimeSensor81.PauseTime := 0;
TimeSensor81.ResumeTime := 0;
TimeSensor81.StartTime := 0;
TimeSensor81.StopTime := 0;
{ .AddChildren }
Group75.AddChildren([TimeSensor81]);
Group75.AddRoute(Script77.FdColorsoutput, Background76.FdSkycolor);
{ .AddX3DRoute }
Group75.AddRoute(ColorInterpolator80.EventValue_changed, Script77.FdColorinput);
{ .AddX3DRoute }
Group75.AddRoute(TimeSensor81.EventFraction_changed, ColorInterpolator80.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group32.AddChildren([Group75]);
X3DPrototype85 := TX3DPrototype.Create;
X3DPrototype85.NameField := 'ArtDeco01';
X3DPrototype85.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
X3DInterfaceDeclaration86 := TX3DInterfaceDeclaration.Create(nil);
X3DField87 := TX3DField.Create;
X3DField87.NameField := 'description';
X3DField87.AccessType := 'inputOutput';
X3DField87.Appinfo := 'tooltip for descriptionField';
X3DField87.Type := 'SFString';
X3DField87.Value := 'ArtDeco01Material prototype is a Material node';
{ .SetX3DField }
X3DInterfaceDeclaration86.X3DField := X3DField87;
X3DField88 := TX3DField.Create;
X3DField88.NameField := 'enabled';
X3DField88.AccessType := 'inputOutput';
X3DField88.Type := 'SFBool';
X3DField88.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration86.X3DField := X3DField88;
{ .SetX3DInterfaceDeclaration }
X3DPrototype85.X3DInterfaceDeclaration := X3DInterfaceDeclaration86;
X3DPrototype89 := TX3DPrototype.Create;
Material90 := TMaterialNode.Create;
Material90.AmbientIntensity := 0.25;
Material90.DiffuseColor := Vector3(0.2824,0.0852,0.1345);
Material90.NormalScale := 1;
Material90.OcclusionStrength := 1;
Material90.Shininess := 0.1273;
Material90.SpecularColor := Vector3(0.2763,0.1143,0.1399);
Material90.Transparency := 0;
{ .SetMaterial }
X3DPrototype89.Material := Material90;
TouchSensor91 := TTouchSensorNode.Create;
TouchSensor91.Description := 'within ProtoBody';
IS92 := TIS.Create;
connect93 := Tconnect.Create;
connect93.NodeField := 'description';
connect93.ProtoField := 'description';
{ .AddConnect }
IS92.Connect := connect93;
connect94 := Tconnect.Create;
connect94.NodeField := 'enabled';
connect94.ProtoField := 'enabled';
{ .AddConnect }
IS92.Connect := connect94;
{ .SetIS }
TouchSensor91.IS := IS92;
{ .AddTouchSensor }
X3DPrototype89.TouchSensor := TouchSensor91;
{ .AddX3DPrototype }
X3DPrototype85.X3DPrototype := X3DPrototype89;
{ .AddX3DPrototype }
Group32.X3DPrototype := X3DPrototype85;
X3DExternalPrototype95 := TX3DExternalPrototype.Create;
X3DExternalPrototype95.NameField := 'ArtDeco02';
X3DExternalPrototype95.Appinfo := 'this is a different Material node';
X3DExternalPrototype95.Url := '\"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02\"';
X3DField96 := TX3DField.Create;
X3DField96.NameField := 'description';
X3DField96.AccessType := 'inputOutput';
X3DField96.Appinfo := 'tooltip for descriptionField';
X3DField96.Type := 'SFString';
{ .SetX3DField }
X3DExternalPrototype95.X3DField := X3DField96;
{ .AddX3DExternalPrototype }
Group32.X3DExternalPrototype := X3DExternalPrototype95;
Shape97 := TShapeNode.Create;
Appearance98 := TAppearanceNode.Create;
Appearance98.AlphaCutoff := 0.5;
X3DPrototype99 := TX3DPrototypeNode.Create;
X3DPrototype99.NameField := 'ArtDeco01';
SFString100 := TSFString.Create(ArtDeco012, false, 'description', 'ArtDeco01Material can substitute for a Material node');
SFString100.NameField := 'description';
SFString100.Value := 'ArtDeco01Material can substitute for a Material node';
{ .SetSFString }
X3DPrototype99.SFString := SFString100;
{ .SetMaterial }
Appearance98.Material := X3DPrototype99;
{ .SetAppearance }
Shape97.Appearance := Appearance98;
Sphere101 := TSphereNode.Create;
Sphere101.Radius := 0.001;
{ .SetGeometry }
Shape97.Geometry := Sphere101;
{ .AddChildren }
Group32.AddChildren([Shape97]);
Shape102 := TShapeNode.Create;
Appearance103 := TAppearanceNode.Create;
Appearance103.AlphaCutoff := 0.5;
X3DPrototype104 := TX3DPrototypeNode.Create;
X3DPrototype104.NameField := 'ArtDeco02';
{ .SetMaterial }
Appearance103.Material := X3DPrototype104;
{ .SetAppearance }
Shape102.Appearance := Appearance103;
Cone105 := TConeNode.Create;
Cone105.BottomRadius := 0.001;
Cone105.Height := 0.001;
{ .SetGeometry }
Shape102.Geometry := Cone105;
{ .AddChildren }
Group32.AddChildren([Shape102]);
Shape106 := TShapeNode.Create;
Appearance107 := TAppearanceNode.Create;
Appearance107.AlphaCutoff := 0.5;
X3DPrototype108.NameField := 'ArtDeco02';
X3DPrototype108 := X3DPrototype104;
{ .SetMaterial }
Appearance107.Material := X3DPrototype108;
{ .SetAppearance }
Shape106.Appearance := Appearance107;
Cylinder109 := TCylinderNode.Create;
Cylinder109.Height := 0.001;
Cylinder109.Radius := 0.001;
{ .SetGeometry }
Shape106.Geometry := Cylinder109;
{ .AddChildren }
Group32.AddChildren([Shape106]);
Inline110 := TInlineNode.Create;
Inline110.AutoRefresh := 0;
Inline110.AutoRefreshTimeLimit := 3600;
Inline110.SetUrl(['newScene.x3d','https://www.web3d.org/specifications/java/examples/newScene.x3d']);
{ .AddChildren }
Group32.AddChildren([Inline110]);
IMPORT111 := TIMPORTNode.Create;
IMPORT111.AS := 'WorldInfoDEF2';
IMPORT111.ImportedDEF := 'WorldInfoDEF';
IMPORT111.InlineDEF := 'inlineScene';
{ .AddChildren }
Group32.AddChildren([IMPORT111]);
EXPORT112 := TEXPORTNode.Create;
EXPORT112.AS := 'WorldInfoDEF3';
EXPORT112.LocalDEF := 'WorldInfoDEF';
{ .AddChildren }
Group32.AddChildren([EXPORT112]);
X3DPrototype113 := TX3DPrototype.Create;
X3DPrototype113.NameField := 'MaterialModulator';
X3DPrototype113.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
X3DPrototype113.Documentation := 'https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
X3DInterfaceDeclaration114 := TX3DInterfaceDeclaration.Create(nil);
X3DField115 := TX3DField.Create;
X3DField115.NameField := 'enabled';
X3DField115.AccessType := 'inputOutput';
X3DField115.Type := 'SFBool';
X3DField115.Value := 'true';
{ .SetX3DField }
X3DInterfaceDeclaration114.X3DField := X3DField115;
X3DField116 := TX3DField.Create;
X3DField116.NameField := 'diffuseColor';
X3DField116.AccessType := 'inputOutput';
X3DField116.Type := 'SFColor';
X3DField116.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration114.X3DField := X3DField116;
X3DField117 := TX3DField.Create;
X3DField117.NameField := 'emissiveColor';
X3DField117.AccessType := 'inputOutput';
X3DField117.Type := 'SFColor';
X3DField117.Value := '0.05 0.05 0.5';
{ .AddX3DField }
X3DInterfaceDeclaration114.X3DField := X3DField117;
X3DField118 := TX3DField.Create;
X3DField118.NameField := 'specularColor';
X3DField118.AccessType := 'inputOutput';
X3DField118.Type := 'SFColor';
X3DField118.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration114.X3DField := X3DField118;
X3DField119 := TX3DField.Create;
X3DField119.NameField := 'transparency';
X3DField119.AccessType := 'inputOutput';
X3DField119.Type := 'SFFloat';
X3DField119.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration114.X3DField := X3DField119;
X3DField120 := TX3DField.Create;
X3DField120.NameField := 'shininess';
X3DField120.AccessType := 'inputOutput';
X3DField120.Type := 'SFFloat';
X3DField120.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration114.X3DField := X3DField120;
X3DField121 := TX3DField.Create;
X3DField121.NameField := 'ambientIntensity';
X3DField121.AccessType := 'inputOutput';
X3DField121.Type := 'SFFloat';
X3DField121.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration114.X3DField := X3DField121;
{ .SetX3DInterfaceDeclaration }
X3DPrototype113.X3DInterfaceDeclaration := X3DInterfaceDeclaration114;
X3DPrototype122 := TX3DPrototype.Create;
Material123 := TMaterialNode.Create;
Material123.AmbientIntensity := 0.2;
Material123.NormalScale := 1;
Material123.OcclusionStrength := 1;
Material123.Shininess := 0.2;
Material123.Transparency := 0;
IS124 := TIS.Create;
connect125 := Tconnect.Create;
connect125.NodeField := 'diffuseColor';
connect125.ProtoField := 'diffuseColor';
{ .AddConnect }
IS124.Connect := connect125;
connect126 := Tconnect.Create;
connect126.NodeField := 'emissiveColor';
connect126.ProtoField := 'emissiveColor';
{ .AddConnect }
IS124.Connect := connect126;
connect127 := Tconnect.Create;
connect127.NodeField := 'specularColor';
connect127.ProtoField := 'specularColor';
{ .AddConnect }
IS124.Connect := connect127;
connect128 := Tconnect.Create;
connect128.NodeField := 'transparency';
connect128.ProtoField := 'transparency';
{ .AddConnect }
IS124.Connect := connect128;
connect129 := Tconnect.Create;
connect129.NodeField := 'shininess';
connect129.ProtoField := 'shininess';
{ .AddConnect }
IS124.Connect := connect129;
connect130 := Tconnect.Create;
connect130.NodeField := 'ambientIntensity';
connect130.ProtoField := 'ambientIntensity';
{ .AddConnect }
IS124.Connect := connect130;
{ .SetIS }
Material123.IS := IS124;
{ .SetMaterial }
X3DPrototype122.Material := Material123;
Script131 := TScriptNode.Create;
Script131.AutoRefresh := 0;
Script131.AutoRefreshTimeLimit := 3600;
X3DField132 := TX3DField.Create;
X3DField132.NameField := 'enabled';
X3DField132.AccessType := 'inputOutput';
X3DField132.Type := 'SFBool';
{ .SetX3DField }
Script131.X3DField := X3DField132;
X3DField133 := TX3DField.Create;
X3DField133.NameField := 'diffuseColor';
X3DField133.AccessType := 'inputOutput';
X3DField133.Type := 'SFColor';
{ .AddX3DField }
Script131.X3DField := X3DField133;
X3DField134 := TX3DField.Create;
X3DField134.NameField := 'newColor';
X3DField134.AccessType := 'outputOnly';
X3DField134.Type := 'SFColor';
{ .AddX3DField }
Script131.X3DField := X3DField134;
X3DField135 := TX3DField.Create;
X3DField135.NameField := 'clockTrigger';
X3DField135.AccessType := 'inputOnly';
X3DField135.Type := 'SFTime';
{ .AddX3DField }
Script131.X3DField := X3DField135;
IS136 := TIS.Create;
connect137 := Tconnect.Create;
connect137.NodeField := 'enabled';
connect137.ProtoField := 'enabled';
{ .AddConnect }
IS136.Connect := connect137;
connect138 := Tconnect.Create;
connect138.NodeField := 'diffuseColor';
connect138.ProtoField := 'diffuseColor';
{ .AddConnect }
IS136.Connect := connect138;
{ .SetIS }
Script131.IS := IS136;

Script131.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype122.Script := Script131;
{ .AddX3DPrototype }
X3DPrototype113.X3DPrototype := X3DPrototype122;
{ .AddX3DPrototype }
Group32.X3DPrototype := X3DPrototype113;
Group139 := TGroupNode.Create;
Shape140 := TShapeNode.Create;
MetadataString141 := TMetadataStringNode.Create;
MetadataString141.NameField := 'findThisNameValue';
MetadataString141.SetValue(['test case']);
{ .SetValue }
Shape140.Value := MetadataString141;
Appearance142 := TAppearanceNode.Create;
Appearance142.AlphaCutoff := 0.5;
X3DPrototype143 := TX3DPrototypeNode.Create;
X3DPrototype143.NameField := 'MaterialModulator';
{ .SetMaterial }
Appearance142.Material := X3DPrototype143;
{ .SetAppearance }
Shape140.Appearance := Appearance142;
Cone144 := TConeNode.Create;
Cone144.Bottom := False;
Cone144.BottomRadius := 0.05;
Cone144.Height := 0.1;
{ .SetGeometry }
Shape140.Geometry := Cone144;
{ .AddChildren }
Group139.AddChildren([Shape140]);
{ .AddChildren }
Group32.AddChildren([Group139]);
Group145 := TGroupNode.Create;
{ .AddChildren }
Group32.AddChildren([Group145]);
Sound146 := TSoundNode.Create;
Sound146.Intensity := 1;
Sound146.Location := Vector3(0,1.6,0);
Sound146.MaxBack := 10;
Sound146.MaxFront := 10;
Sound146.MinBack := 1;
Sound146.MinFront := 1;
Sound146.Priority := 0;
AudioClip147 := TAudioClipNode.Create;
AudioClip147.AutoRefresh := 0;
AudioClip147.AutoRefreshTimeLimit := 3600;
AudioClip147.Description := 'chimes';
AudioClip147.Gain := 1;
AudioClip147.PauseTime := 0;
AudioClip147.Pitch := 1;
AudioClip147.ResumeTime := 0;
AudioClip147.StartTime := 0;
AudioClip147.StopTime := 0;
AudioClip147.SetUrl(['chimes.wav','https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ .SetSource }
Sound146.Source := AudioClip147;
{ .AddChildren }
Group32.AddChildren([Sound146]);
Sound148 := TSoundNode.Create;
Sound148.Intensity := 1;
Sound148.Location := Vector3(0,1.6,0);
Sound148.MaxBack := 10;
Sound148.MaxFront := 10;
Sound148.MinBack := 1;
Sound148.MinFront := 1;
Sound148.Priority := 0;
MovieTexture149 := TMovieTextureNode.Create;
MovieTexture149.AutoRefresh := 0;
MovieTexture149.AutoRefreshTimeLimit := 3600;
MovieTexture149.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture149.PauseTime := 0;
MovieTexture149.Pitch := 1;
MovieTexture149.ResumeTime := 0;
MovieTexture149.Speed := 1;
MovieTexture149.StartTime := 0;
MovieTexture149.StopTime := 0;
MovieTexture149.SetUrl(['mpgsys.mpg','https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ .SetSource }
Sound148.Source := MovieTexture149;
{ .AddChildren }
Group32.AddChildren([Sound148]);
Shape150 := TShapeNode.Create;
Appearance151 := TAppearanceNode.Create;
Appearance151.AlphaCutoff := 0.5;
Material152 := TMaterialNode.Create;
Material152.AmbientIntensity := 0.2;
Material152.NormalScale := 1;
Material152.OcclusionStrength := 1;
Material152.Shininess := 0.2;
Material152.Transparency := 1;
{ .SetMaterial }
Appearance151.Material := Material152;
{ .SetAppearance }
Shape150.Appearance := Appearance151;
Extrusion153 := TExtrusionNode.Create;
Extrusion153.CreaseAngle := 0;
{ .SetGeometry }
Shape150.Geometry := Extrusion153;
{ .AddChildren }
Group32.AddChildren([Shape150]);
Group154 := TGroupNode.Create;
X3DPrototype155 := TX3DPrototype.Create;
X3DPrototype155.NameField := 'NewWorldInfo';
X3DInterfaceDeclaration156 := TX3DInterfaceDeclaration.Create(nil);
X3DField157 := TX3DField.Create;
X3DField157.NameField := 'description';
X3DField157.AccessType := 'initializeOnly';
X3DField157.Type := 'SFString';
{ .SetX3DField }
X3DInterfaceDeclaration156.X3DField := X3DField157;
{ .SetX3DInterfaceDeclaration }
X3DPrototype155.X3DInterfaceDeclaration := X3DInterfaceDeclaration156;
X3DPrototype158 := TX3DPrototype.Create;
WorldInfo159 := TWorldInfoNode.Create;
{ .SetWorldInfo }
X3DPrototype158.WorldInfo := WorldInfo159;
{ .AddX3DPrototype }
X3DPrototype155.X3DPrototype := X3DPrototype158;
{ .SetX3DPrototype }
Group154.X3DPrototype := X3DPrototype155;
X3DPrototype160 := TX3DPrototypeNode.Create;
X3DPrototype160.NameField := 'NewWorldInfo';
SFString161 := TSFString.Create(NewWorldInfo4, false, 'description', 'testing 1 2 3');
SFString161.NameField := 'description';
SFString161.Value := 'testing 1 2 3';
{ .SetSFString }
X3DPrototype160.SFString := SFString161;
{ .AddX3DPrototype }
Group154.X3DPrototype := X3DPrototype160;
Group162 := TGroupNode.Create;
{ .AddChildren }
Group154.AddChildren([Group162]);
X3DPrototype163 := TX3DPrototypeNode.Create;
X3DPrototype163.NameField := 'NewWorldInfo';
{ .AddX3DPrototype }
Group154.X3DPrototype := X3DPrototype163;
Transform164 := TTransformNode.Create;
{ .AddChildren }
Group154.AddChildren([Transform164]);
{ .AddChildren }
Group32.AddChildren([Group154]);
X3DPrototype165 := TX3DPrototype.Create;
X3DPrototype165.NameField := 'ShaderProto';
X3DPrototype166 := TX3DPrototype.Create;
ProgramShader167 := TProgramShaderNode.Create;
{ .SetProgramShader }
X3DPrototype166.ProgramShader := ProgramShader167;
{ .SetX3DPrototype }
X3DPrototype165.X3DPrototype := X3DPrototype166;
{ .AddX3DPrototype }
Group32.X3DPrototype := X3DPrototype165;
Shape168 := TShapeNode.Create;
Appearance169 := TAppearanceNode.Create;
Appearance169.AlphaCutoff := 0.5;
ProgramShader170 := TProgramShaderNode.Create;
ShaderProgram171 := TShaderProgramNode.Create;
ShaderProgram171.AutoRefresh := 0;
ShaderProgram171.AutoRefreshTimeLimit := 3600;
ShaderProgram171.Type := 'VERTEX';
{ .AddPrograms }
ProgramShader170.Programs := ShaderProgram171;
{ .AddShaders }
Appearance169.Shaders := ProgramShader170;
X3DPrototype172 := TX3DPrototypeNode.Create;
X3DPrototype172.NameField := 'ShaderProto';
{ .AddX3DPrototype }
Appearance169.X3DPrototype := X3DPrototype172;
ComposedShader173 := TComposedShaderNode.Create;
ShaderPart174 := TShaderPartNode.Create;
ShaderPart174.AutoRefresh := 0;
ShaderPart174.AutoRefreshTimeLimit := 3600;
ShaderPart174.Type := 'VERTEX';
{ .AddParts }
ComposedShader173.Parts := ShaderPart174;
{ .AddShaders }
Appearance169.Shaders := ComposedShader173;
{ .SetAppearance }
Shape168.Appearance := Appearance169;
{ .AddChildren }
Group32.AddChildren([Shape168]);
Transform175 := TTransformNode.Create;
CADLayer176 := TCADLayerNode.Create;
CADAssembly177 := TCADAssemblyNode.Create;
CADPart178 := TCADPartNode.Create;
CADFace179 := TCADFaceNode.Create;
{ .AddChildren }
CADPart178.AddChildren([CADFace179]);
{ .AddChildren }
CADAssembly177.AddChildren([CADPart178]);
{ .AddChildren }
CADLayer176.AddChildren([CADAssembly177]);
{ .AddChildren }
Transform175.AddChildren([CADLayer176]);
EspduTransform180 := TEspduTransformNode.Create;
EspduTransform180.FiringRange := 0;
EspduTransform180.ReadInterval := 0.1;
EspduTransform180.WriteInterval := 1;
{ .AddChildren }
Transform175.AddChildren([EspduTransform180]);
ReceiverPdu181 := TReceiverPduNode.Create;
ReceiverPdu181.ReadInterval := 0.1;
ReceiverPdu181.ReceivedPower := 0;
ReceiverPdu181.WriteInterval := 1;
{ .AddChildren }
Transform175.AddChildren([ReceiverPdu181]);
SignalPdu182 := TSignalPduNode.Create;
SignalPdu182.ReadInterval := 0.1;
SignalPdu182.WriteInterval := 1;
{ .AddChildren }
Transform175.AddChildren([SignalPdu182]);
TransmitterPdu183 := TTransmitterPduNode.Create;
TransmitterPdu183.Power := 0;
TransmitterPdu183.ReadInterval := 0.1;
TransmitterPdu183.TransmitFrequencyBandwidth := 0;
TransmitterPdu183.WriteInterval := 1;
{ .AddChildren }
Transform175.AddChildren([TransmitterPdu183]);
DISEntityManager184 := TDISEntityManagerNode.Create;
DISEntityTypeMapping185 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping185.AutoRefresh := 0;
DISEntityTypeMapping185.AutoRefreshTimeLimit := 3600;
{ .AddChildren }
DISEntityManager184.AddChildren([DISEntityTypeMapping185]);
{ .AddChildren }
Transform175.AddChildren([DISEntityManager184]);
{ .AddChildren }
Group32.AddChildren([Transform175]);
EspduTransform186 := TEspduTransformNode.Create;
EspduTransform186.FiringRange := 0;
EspduTransform186.ReadInterval := 0.1;
EspduTransform186.WriteInterval := 1;
WorldInfo187 := TWorldInfoNode.Create;
{ .AddChildren }
EspduTransform186.AddChildren([WorldInfo187]);
{ .AddChildren }
Group32.AddChildren([EspduTransform186]);
ReceiverPdu188 := TReceiverPduNode.Create;
ReceiverPdu188.ReadInterval := 0.1;
ReceiverPdu188.ReceivedPower := 0;
ReceiverPdu188.WriteInterval := 1;
{ .AddChildren }
Group32.AddChildren([ReceiverPdu188]);
SignalPdu189 := TSignalPduNode.Create;
SignalPdu189.ReadInterval := 0.1;
SignalPdu189.WriteInterval := 1;
{ .AddChildren }
Group32.AddChildren([SignalPdu189]);
TransmitterPdu190 := TTransmitterPduNode.Create;
TransmitterPdu190.Power := 0;
TransmitterPdu190.ReadInterval := 0.1;
TransmitterPdu190.TransmitFrequencyBandwidth := 0;
TransmitterPdu190.WriteInterval := 1;
{ .AddChildren }
Group32.AddChildren([TransmitterPdu190]);
DISEntityManager191 := TDISEntityManagerNode.Create;
DISEntityTypeMapping192 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping192.AutoRefresh := 0;
DISEntityTypeMapping192.AutoRefreshTimeLimit := 3600;
{ .AddChildren }
DISEntityManager191.AddChildren([DISEntityTypeMapping192]);
{ .AddChildren }
Group32.AddChildren([DISEntityManager191]);
LoadSensor193 := TLoadSensorNode.Create;
LoadSensor193.TimeOut := 0;
Anchor194 := Anchor44;
{ .AddChildren }
LoadSensor193.AddChildren([Anchor194]);
Inline195 := Inline110;
{ .AddChildren }
LoadSensor193.AddChildren([Inline195]);
DISEntityTypeMapping196 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping196.AutoRefresh := 0;
DISEntityTypeMapping196.AutoRefreshTimeLimit := 3600;
{ .AddChildren }
LoadSensor193.AddChildren([DISEntityTypeMapping196]);
GeoMetadata197 := TGeoMetadataNode.Create;
GeoMetadata197.AutoRefresh := 0;
GeoMetadata197.AutoRefreshTimeLimit := 3600;
{ .AddChildren }
LoadSensor193.AddChildren([GeoMetadata197]);
AudioClip198 := TAudioClipNode.Create;
AudioClip198.AutoRefresh := 0;
AudioClip198.AutoRefreshTimeLimit := 3600;
AudioClip198.Gain := 1;
AudioClip198.PauseTime := 0;
AudioClip198.Pitch := 1;
AudioClip198.ResumeTime := 0;
AudioClip198.StartTime := 0;
AudioClip198.StopTime := 0;
{ .AddChildren }
LoadSensor193.AddChildren([AudioClip198]);
ImageCubeMapTexture199 := TImageCubeMapTextureNode.Create;
ImageCubeMapTexture199.AutoRefresh := 0;
ImageCubeMapTexture199.AutoRefreshTimeLimit := 3600;
{ .AddChildren }
LoadSensor193.AddChildren([ImageCubeMapTexture199]);
ImageTexture3D200 := TImageTexture3DNode.Create;
ImageTexture3D200.AutoRefresh := 0;
ImageTexture3D200.AutoRefreshTimeLimit := 3600;
{ .AddChildren }
LoadSensor193.AddChildren([ImageTexture3D200]);
ImageTexture201 := TImageTextureNode.Create;
ImageTexture201.AutoRefresh := 0;
ImageTexture201.AutoRefreshTimeLimit := 3600;
{ .AddChildren }
LoadSensor193.AddChildren([ImageTexture201]);
MovieTexture202 := TMovieTextureNode.Create;
MovieTexture202.AutoRefresh := 0;
MovieTexture202.AutoRefreshTimeLimit := 3600;
MovieTexture202.PauseTime := 0;
MovieTexture202.Pitch := 1;
MovieTexture202.ResumeTime := 0;
MovieTexture202.Speed := 1;
MovieTexture202.StartTime := 0;
MovieTexture202.StopTime := 0;
{ .AddChildren }
LoadSensor193.AddChildren([MovieTexture202]);
Script203 := TScriptNode.Create;
Script203.AutoRefresh := 0;
Script203.AutoRefreshTimeLimit := 3600;

Script203.SetSourceCode('''ecmascript:\n"+
"/* dummy test source code */''');
{ .AddChildren }
LoadSensor193.AddChildren([Script203]);
PackagedShader204 := TPackagedShaderNode.Create;
PackagedShader204.AutoRefresh := 0;
PackagedShader204.AutoRefreshTimeLimit := 3600;
{ .AddChildren }
LoadSensor193.AddChildren([PackagedShader204]);
ShaderPart205 := TShaderPartNode.Create;
ShaderPart205.AutoRefresh := 0;
ShaderPart205.AutoRefreshTimeLimit := 3600;
ShaderPart205.Type := 'VERTEX';
{ .AddChildren }
LoadSensor193.AddChildren([ShaderPart205]);
ShaderProgram206 := TShaderProgramNode.Create;
ShaderProgram206.AutoRefresh := 0;
ShaderProgram206.AutoRefreshTimeLimit := 3600;
ShaderProgram206.Type := 'VERTEX';
{ .AddChildren }
LoadSensor193.AddChildren([ShaderProgram206]);
{ .AddChildren }
Group32.AddChildren([LoadSensor193]);
OrthoViewpoint207 := TOrthoViewpointNode.Create;
OrthoViewpoint207.FarDistance := -1;
OrthoViewpoint207.SetFieldOfView([1,3,2,4]);
OrthoViewpoint207.NearDistance := -1;
{ .AddChildren }
Group32.AddChildren([OrthoViewpoint207]);
{ .AddGroup }
X3D0.AddChildren([Group32]);
Result := X3D0;
end;

begin
end.
