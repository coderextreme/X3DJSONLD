unit temp.exiInputTransformed;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createtemp.exiInputTransformed: TX3DRootNode;

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
SFColor78: TSFColor;
MFColor79: TMFColor;
ColorInterpolator80: TColorInterpolatorNode;
TimeSensor81: TTimeSensorNode;
X3DPrototype85: TX3DPrototype;
X3DInterfaceDeclaration86: TX3DInterfaceDeclaration;
SFString87: TSFString;
SFBool88: TSFBool;
X3DPrototype89: TX3DPrototype;
Material90: TMaterialNode;
TouchSensor91: TTouchSensorNode;
IS92: TIS;
connect93: Tconnect;
connect94: Tconnect;
X3DExternalPrototype95: TX3DExternalPrototype;
SFString96: TSFString;
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
SFBool115: TSFBool;
SFColor116: TSFColor;
SFColor117: TSFColor;
SFColor118: TSFColor;
SFFloat119: TSFFloat;
SFFloat120: TSFFloat;
SFFloat121: TSFFloat;
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
SFBool132: TSFBool;
SFColor133: TSFColor;
SFColor134: TSFColor;
SFTime135: TSFTime;
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
SFString157: TSFString;
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

procedure Inittemp.exiInputTransformedPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.P0:noNamespaceSchemaLocation := 'https://www.web3d.org/specifications/x3d-4.0.xsd';
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
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
X3D0.Meta['modified'] := '19 June 2026';
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
end;

procedure Inittemp.exiInputTransformedPart1;
begin

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
{ METHOD .NavigationInfo }
Viewpoint34.NavigationInfo := NavigationInfo35;
{ METHOD .FdChildren.Add }
ViewpointGroup33.FdChildren.Add(Viewpoint34);
Viewpoint36 := TViewpointNode.Create;
Viewpoint36.Description := 'top-down view from above';
Viewpoint36.FarDistance := -1;
Viewpoint36.FieldOfView := 0.7854;
Viewpoint36.NearDistance := -1;
Viewpoint36.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint36.Position := Vector3(0,100,0);
{ METHOD .FdChildren.Add }
ViewpointGroup33.FdChildren.Add(Viewpoint36);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(ViewpointGroup33);
NavigationInfo37 := TNavigationInfoNode.Create;
NavigationInfo37.Speed := 1;
NavigationInfo37.TransitionTime := 1;
NavigationInfo37.SetType(['EXAMINE','FLY','ANY']);
NavigationInfo37.VisibilityLimit := 0;
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
end;

procedure Inittemp.exiInputTransformedPart2;
begin

{ METHOD .Metadata }
Group32.Metadata := MetadataString41;
LayerSet42 := TLayerSetNode.Create;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(LayerSet42);
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
{ METHOD .SetMaterial }
Appearance46.Material := Material47;
ImageTexture48 := TImageTextureNode.Create;
ImageTexture48.AutoRefresh := 0;
ImageTexture48.AutoRefreshTimeLimit := 3600;
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
Appearance51.AlphaCutoff := 0.5;
Material52 := TMaterialNode.Create;
Material52.AmbientIntensity := 0.2;
Material52.EmissiveColor := Vector3(0.6,0.1961,0.8);
Material52.NormalScale := 1;
end;

procedure Inittemp.exiInputTransformedPart3;
begin

Material52.OcclusionStrength := 1;
Material52.Shininess := 0.2;
Material52.Transparency := 0;
{ METHOD .SetMaterial }
Appearance51.Material := Material52;
{ METHOD .Appearance }
Shape50.Appearance := Appearance51;
IndexedLineSet53 := TIndexedLineSetNode.Create;
IndexedLineSet53.SetCoordIndex([0,1,2,3,4,0]);
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
TimeSensor56.PauseTime := 0;
TimeSensor56.ResumeTime := 0;
TimeSensor56.StartTime := 0;
TimeSensor56.StopTime := 0;
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
Appearance61.AlphaCutoff := 0.5;
{ METHOD .SetMaterial }
Appearance61.Material := Material47;
{ METHOD .Appearance }
Shape60.Appearance := Appearance61;
Text63 := TTextNode.Create;
Text63.MaxExtent := 0;
Text63.SetText(['X3D Java','SAI Library','X3DJSAIL']);
MetadataSet64 := TMetadataSetNode.Create;
MetadataString65 := TMetadataStringNode.Create;
MetadataString65.SetValue(['MFString example C, backslash-escaped quotes: He said, "Immel did it!"']);
{ METHOD .FdValue.Add }
MetadataSet64.FdValue.Add(MetadataString65);
end;

procedure Inittemp.exiInputTransformedPart4;
begin

MetadataString66 := TMetadataStringNode.Create;
MetadataString66.SetValue(['checks MetadataSet addValue() method']);
{ METHOD .FdValue.Add }
MetadataSet64.FdValue.Add(MetadataString66);
{ METHOD .Metadata }
Text63.Metadata := MetadataSet64;
FontStyle67 := TFontStyleNode.Create;
FontStyle67.Justify := fjMIDDLE;
FontStyle67.JustifyMinor := fjMIDDLE;
FontStyle67.Size := 1;
FontStyle67.Spacing := 1;
{ METHOD .FontStyle }
Text63.FontStyle := FontStyle67;
{ METHOD .Geometry }
Shape60.Geometry := Text63;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Shape60);
Collision68 := TCollisionNode.Create;
Shape69 := TShapeNode.Create;
Text70 := TTextNode.Create;
Text70.MaxExtent := 0;
Text70.SetText(['One, Two, Text','He said, "Immel did it!" \"\"']);
{ METHOD .Geometry }
Shape69.Geometry := Text70;
{ METHOD .Proxy }
Collision68.Proxy := Shape69;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Collision68);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform59);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;
OrientationInterpolator71.SetKey([0,0.5,1]);
OrientationInterpolator71.SetKeyValue([Vector4(0,1,0,4.7124),Vector4(0,1,0,0),Vector4(0,1,0,1.5708)]);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(OrientationInterpolator71);
TimeSensor72 := TTimeSensorNode.Create;
TimeSensor72.CycleInterval := 5;
TimeSensor72.Loop := True;
TimeSensor72.PauseTime := 0;
TimeSensor72.ResumeTime := 0;
TimeSensor72.StartTime := 0;
TimeSensor72.StopTime := 0;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(TimeSensor72);
{ Original "SpinClock.EventFraction_changed TO SpinInterpolator.EventSet_fraction }
{ Sample SpinClock.EventFraction_changed TO SpinInterpolator.EventSet_fraction}
Group32.AddRoute(TimeSensor72.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "SpinInterpolator.EventValue_changed TO TextTransform.rotation }
{ Sample SpinInterpolator.EventValue_changed TO TextTransform.rotation}
Group32.AddRoute(OrientationInterpolator71.EventValue_changed, Transform59.rotation);
{ METHOD .AddX3DROUTE }
Group75 := TGroupNode.Create;
Background76 := TBackgroundNode.Create;
Background76.Transparency := 0;
{ METHOD .FdChildren.Add }
Group75.FdChildren.Add(Background76);
Script77 := TScriptNode.Create;
end;

procedure Inittemp.exiInputTransformedPart5;
begin

Script77.AutoRefresh := 0;
Script77.AutoRefreshTimeLimit := 3600;
SFColor78 := TSFColor.CreateUndefined(Script77, false, 'colorInput');
{ METHOD .Fd.AddCustomField }
Script77.AddCustomField(SFColor78);
MFColor79 := TMFColor.CreateUndefined(Script77, false, 'colorsOutput');
{ METHOD .Fd.AddCustomField }
Script77.AddCustomField(MFColor79);

Script77.SetSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ',\\n//                colorsOutput=' + colorsOutput + '\\n');\n"+
"// TODO check line wrapping when exporting/converting\n"+
"}''');
{ METHOD .FdChildren.Add }
Group75.FdChildren.Add(Script77);
ColorInterpolator80 := TColorInterpolatorNode.Create;
ColorInterpolator80.SetKey([0,0.5,1]);
ColorInterpolator80.SetKeyValue([Vector3(0.9412,1,1),Vector3(0.2941,0,0.5098),Vector3(0.9412,1,1)]);
{ METHOD .FdChildren.Add }
Group75.FdChildren.Add(ColorInterpolator80);
TimeSensor81 := TTimeSensorNode.Create;
TimeSensor81.CycleInterval := 60;
TimeSensor81.Loop := True;
TimeSensor81.PauseTime := 0;
TimeSensor81.ResumeTime := 0;
TimeSensor81.StartTime := 0;
TimeSensor81.StopTime := 0;
{ METHOD .FdChildren.Add }
Group75.FdChildren.Add(TimeSensor81);
{ Original "colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor }
{ Sample colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor}
Group75.AddRoute(colorTypeConversionScript.[object Object], Background76.skyColor);
{ METHOD .AddX3DROUTE }
{ Original "ColorAnimator.EventValue_changed TO colorTypeConversionScript.colorInput }
{ Sample ColorAnimator.EventValue_changed TO colorTypeConversionScript.colorInput}
Group75.AddRoute(ColorInterpolator80.EventValue_changed, SFColor78);
{ METHOD .AddX3DROUTE }
{ Original "ColorClock.EventFraction_changed TO ColorAnimator.EventSet_fraction }
{ Sample ColorClock.EventFraction_changed TO ColorAnimator.EventSet_fraction}
Group75.AddRoute(TimeSensor81.EventFraction_changed, ColorInterpolator80.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group75);
X3DPrototype85 := TX3DPrototype.Create;
X3DPrototype85.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
X3DInterfaceDeclaration86 := TX3DInterfaceDeclaration.Create(nil);
SFString87 := TSFString.CreateUndefined(X3DInterfaceDeclaration86, false, 'description');
SFString87.Appinfo := 'tooltip for descriptionField';
SFString87.Value := 'ArtDeco01Material prototype is a Material node';
{ METHOD .AddSFString }
X3DInterfaceDeclaration86.AddSFString([SFString87]);
SFBool88 := TSFBool.CreateUndefined(X3DInterfaceDeclaration86, false, 'enabled');
SFBool88.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration86.AddSFBool([SFBool88]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype85.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration86]);
X3DPrototype89 := TX3DPrototype.Create;
Material90 := TMaterialNode.Create;
Material90.AmbientIntensity := 0.25;
Material90.DiffuseColor := Vector3(0.2824,0.0852,0.1345);
Material90.NormalScale := 1;
Material90.OcclusionStrength := 1;
Material90.Shininess := 0.1273;
Material90.SpecularColor := Vector3(0.2763,0.1143,0.1399);
Material90.Transparency := 0;
{ METHOD .AddMaterial }
X3DPrototype89.AddMaterial([Material90]);
TouchSensor91 := TTouchSensorNode.Create;
TouchSensor91.Description := 'within ProtoBody';
IS92 := TIS.Create;
connect93 := Tconnect.Create;
connect93.NodeField := 'description';
connect93.ProtoField := 'description';
{ METHOD .Connect }
IS92.Connect := connect93;
connect94 := Tconnect.Create;
connect94.NodeField := 'enabled';
connect94.ProtoField := 'enabled';
{ METHOD .Connect }
IS92.Connect := connect94;
{ METHOD .IS }
TouchSensor91.IS := IS92;
{ METHOD .AddTouchSensor }
X3DPrototype89.AddTouchSensor([TouchSensor91]);
{ METHOD .AddX3DPrototype }
X3DPrototype85.AddX3DPrototype([X3DPrototype89]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype85]);
X3DExternalPrototype95 := TX3DExternalPrototype.Create;
X3DExternalPrototype95.Appinfo := 'this is a different Material node';
X3DExternalPrototype95.Url := '\"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02\"';
SFString96 := TSFString.CreateUndefined(X3DExternalPrototype95, false, 'description');
SFString96.Appinfo := 'tooltip for descriptionField';
{ METHOD .AddSFString }
X3DExternalPrototype95.AddSFString([SFString96]);
{ METHOD .AddX3DExternalPrototype }
Group32.AddX3DExternalPrototype([X3DExternalPrototype95]);
Shape97 := TShapeNode.Create;
Appearance98 := TAppearanceNode.Create;
Appearance98.AlphaCutoff := 0.5;
X3DPrototype99 := TX3DPrototypeNode.Create;
SFString100 := TSFString.CreateUndefined(X3DPrototype99, false, 'description');
SFString100.Value := 'ArtDeco01Material can substitute for a Material node';
{ METHOD .AddSFString }
X3DPrototype99.AddSFString([SFString100]);
{ METHOD .SetMaterial }
Appearance98.Material := X3DPrototype99;
{ METHOD .Appearance }
Shape97.Appearance := Appearance98;
Sphere101 := TSphereNode.Create;
Sphere101.Radius := 0.001;
{ METHOD .Geometry }
Shape97.Geometry := Sphere101;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape97);
Shape102 := TShapeNode.Create;
Appearance103 := TAppearanceNode.Create;
Appearance103.AlphaCutoff := 0.5;
X3DPrototype104 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance103.Material := X3DPrototype104;
{ METHOD .Appearance }
Shape102.Appearance := Appearance103;
Cone105 := TConeNode.Create;
Cone105.BottomRadius := 0.001;
Cone105.Height := 0.001;
{ METHOD .Geometry }
Shape102.Geometry := Cone105;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape102);
Shape106 := TShapeNode.Create;
Appearance107 := TAppearanceNode.Create;
Appearance107.AlphaCutoff := 0.5;
{ METHOD .SetMaterial }
Appearance107.Material := X3DPrototype104;
{ METHOD .Appearance }
Shape106.Appearance := Appearance107;
Cylinder109 := TCylinderNode.Create;
Cylinder109.Height := 0.001;
Cylinder109.Radius := 0.001;
{ METHOD .Geometry }
Shape106.Geometry := Cylinder109;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape106);
Inline110 := TInlineNode.Create;
Inline110.AutoRefresh := 0;
Inline110.AutoRefreshTimeLimit := 3600;
Inline110.SetUrl(['newScene.x3d','https://www.web3d.org/specifications/java/examples/newScene.x3d']);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Inline110);
IMPORT111 := TIMPORTNode.Create;
IMPORT111.AS := 'WorldInfoDEF2';
IMPORT111.ImportedDEF := 'WorldInfoDEF';
IMPORT111.InlineDEF := 'inlineScene';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(IMPORT111);
EXPORT112 := TEXPORTNode.Create;
EXPORT112.AS := 'WorldInfoDEF3';
EXPORT112.LocalDEF := 'WorldInfoDEF';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(EXPORT112);
X3DPrototype113 := TX3DPrototype.Create;
X3DPrototype113.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
X3DPrototype113.Documentation := 'https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
X3DInterfaceDeclaration114 := TX3DInterfaceDeclaration.Create(nil);
SFBool115 := TSFBool.CreateUndefined(X3DInterfaceDeclaration114, false, 'enabled');
SFBool115.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration114.AddSFBool([SFBool115]);
SFColor116 := TSFColor.CreateUndefined(X3DInterfaceDeclaration114, false, 'diffuseColor');
SFColor116.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration114.AddSFColor([SFColor116]);
SFColor117 := TSFColor.CreateUndefined(X3DInterfaceDeclaration114, false, 'emissiveColor');
SFColor117.Value := '0.05 0.05 0.5';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration114.AddSFColor([SFColor117]);
SFColor118 := TSFColor.CreateUndefined(X3DInterfaceDeclaration114, false, 'specularColor');
SFColor118.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration114.AddSFColor([SFColor118]);
SFFloat119 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration114, false, 'transparency');
SFFloat119.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration114.AddSFFloat([SFFloat119]);
SFFloat120 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration114, false, 'shininess');
SFFloat120.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration114.AddSFFloat([SFFloat120]);
SFFloat121 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration114, false, 'ambientIntensity');
SFFloat121.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration114.AddSFFloat([SFFloat121]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype113.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration114]);
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
{ METHOD .Connect }
IS124.Connect := connect125;
connect126 := Tconnect.Create;
connect126.NodeField := 'emissiveColor';
connect126.ProtoField := 'emissiveColor';
{ METHOD .Connect }
IS124.Connect := connect126;
connect127 := Tconnect.Create;
connect127.NodeField := 'specularColor';
connect127.ProtoField := 'specularColor';
{ METHOD .Connect }
IS124.Connect := connect127;
connect128 := Tconnect.Create;
connect128.NodeField := 'transparency';
connect128.ProtoField := 'transparency';
{ METHOD .Connect }
IS124.Connect := connect128;
connect129 := Tconnect.Create;
connect129.NodeField := 'shininess';
connect129.ProtoField := 'shininess';
{ METHOD .Connect }
IS124.Connect := connect129;
connect130 := Tconnect.Create;
connect130.NodeField := 'ambientIntensity';
connect130.ProtoField := 'ambientIntensity';
{ METHOD .Connect }
IS124.Connect := connect130;
{ METHOD .IS }
Material123.IS := IS124;
{ METHOD .AddMaterial }
X3DPrototype122.AddMaterial([Material123]);
Script131 := TScriptNode.Create;
Script131.AutoRefresh := 0;
Script131.AutoRefreshTimeLimit := 3600;
SFBool132 := TSFBool.CreateUndefined(Script131, false, 'enabled');
{ METHOD .Fd.AddCustomField }
Script131.AddCustomField(SFBool132);
SFColor133 := TSFColor.CreateUndefined(Script131, false, 'diffuseColor');
{ METHOD .Fd.AddCustomField }
Script131.AddCustomField(SFColor133);
SFColor134 := TSFColor.CreateUndefined(Script131, false, 'newColor');
{ METHOD .Fd.AddCustomField }
Script131.AddCustomField(SFColor134);
SFTime135 := TSFTime.CreateUndefined(Script131, false, 'clockTrigger');
{ METHOD .Fd.AddCustomField }
Script131.AddCustomField(SFTime135);
IS136 := TIS.Create;
connect137 := Tconnect.Create;
connect137.NodeField := 'enabled';
connect137.ProtoField := 'enabled';
{ METHOD .Connect }
IS136.Connect := connect137;
connect138 := Tconnect.Create;
connect138.NodeField := 'diffuseColor';
connect138.ProtoField := 'diffuseColor';
{ METHOD .Connect }
IS136.Connect := connect138;
{ METHOD .Fd.AddCustomField }
Script131.AddCustomField(IS136);

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
{ METHOD .AddScript }
X3DPrototype122.AddScript([Script131]);
{ METHOD .AddX3DPrototype }
X3DPrototype113.AddX3DPrototype([X3DPrototype122]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype113]);
Group139 := TGroupNode.Create;
Shape140 := TShapeNode.Create;
MetadataString141 := TMetadataStringNode.Create;
MetadataString141.SetValue(['test case']);
{ METHOD .SetValue }
Shape140.Value := MetadataString141;
Appearance142 := TAppearanceNode.Create;
Appearance142.AlphaCutoff := 0.5;
X3DPrototype143 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance142.Material := X3DPrototype143;
{ METHOD .Appearance }
Shape140.Appearance := Appearance142;
Cone144 := TConeNode.Create;
Cone144.Bottom := False;
Cone144.BottomRadius := 0.05;
Cone144.Height := 0.1;
{ METHOD .Geometry }
Shape140.Geometry := Cone144;
{ METHOD .FdChildren.Add }
Group139.FdChildren.Add(Shape140);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group139);
Group145 := TGroupNode.Create;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group145);
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
{ METHOD .Source }
Sound146.Source := AudioClip147;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Sound146);
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
{ METHOD .Source }
Sound148.Source := MovieTexture149;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Sound148);
Shape150 := TShapeNode.Create;
Appearance151 := TAppearanceNode.Create;
Appearance151.AlphaCutoff := 0.5;
Material152 := TMaterialNode.Create;
Material152.AmbientIntensity := 0.2;
Material152.NormalScale := 1;
Material152.OcclusionStrength := 1;
Material152.Shininess := 0.2;
Material152.Transparency := 1;
{ METHOD .SetMaterial }
Appearance151.Material := Material152;
{ METHOD .Appearance }
Shape150.Appearance := Appearance151;
Extrusion153 := TExtrusionNode.Create;
Extrusion153.CreaseAngle := 0;
{ METHOD .Geometry }
Shape150.Geometry := Extrusion153;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape150);
Group154 := TGroupNode.Create;
X3DPrototype155 := TX3DPrototype.Create;
X3DInterfaceDeclaration156 := TX3DInterfaceDeclaration.Create(nil);
SFString157 := TSFString.CreateUndefined(X3DInterfaceDeclaration156, false, 'description');
{ METHOD .AddSFString }
X3DInterfaceDeclaration156.AddSFString([SFString157]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype155.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration156]);
X3DPrototype158 := TX3DPrototype.Create;
WorldInfo159 := TWorldInfoNode.Create;
{ METHOD .AddWorldInfo }
X3DPrototype158.AddWorldInfo([WorldInfo159]);
{ METHOD .AddX3DPrototype }
X3DPrototype155.AddX3DPrototype([X3DPrototype158]);
{ METHOD .AddX3DPrototype }
Group154.AddX3DPrototype([X3DPrototype155]);
X3DPrototype160 := TX3DPrototypeNode.Create;
SFString161 := TSFString.CreateUndefined(X3DPrototype160, false, 'description');
SFString161.Value := 'testing 1 2 3';
{ METHOD .AddSFString }
X3DPrototype160.AddSFString([SFString161]);
{ METHOD .AddX3DPrototype }
Group154.AddX3DPrototype([X3DPrototype160]);
Group162 := TGroupNode.Create;
{ METHOD .FdChildren.Add }
Group154.FdChildren.Add(Group162);
X3DPrototype163 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group154.AddX3DPrototype([X3DPrototype163]);
Transform164 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Group154.FdChildren.Add(Transform164);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group154);
X3DPrototype165 := TX3DPrototype.Create;
X3DPrototype166 := TX3DPrototype.Create;
ProgramShader167 := TProgramShaderNode.Create;
{ METHOD .AddProgramShader }
X3DPrototype166.AddProgramShader([ProgramShader167]);
{ METHOD .AddX3DPrototype }
X3DPrototype165.AddX3DPrototype([X3DPrototype166]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype165]);
Shape168 := TShapeNode.Create;
Appearance169 := TAppearanceNode.Create;
Appearance169.AlphaCutoff := 0.5;
ProgramShader170 := TProgramShaderNode.Create;
ShaderProgram171 := TShaderProgramNode.Create;
ShaderProgram171.AutoRefresh := 0;
ShaderProgram171.AutoRefreshTimeLimit := 3600;
{ METHOD .Programs }
ProgramShader170.Programs := ShaderProgram171;
{ METHOD .AddChildren }
Appearance169.AddChildren([ProgramShader170]);
X3DPrototype172 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Appearance169.AddX3DPrototype([X3DPrototype172]);
ComposedShader173 := TComposedShaderNode.Create;
ShaderPart174 := TShaderPartNode.Create;
ShaderPart174.AutoRefresh := 0;
ShaderPart174.AutoRefreshTimeLimit := 3600;
ShaderPart174.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader173.Parts := ShaderPart174;
{ METHOD .AddChildren }
Appearance169.AddChildren([ComposedShader173]);
{ METHOD .Appearance }
Shape168.Appearance := Appearance169;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape168);
Transform175 := TTransformNode.Create;
CADLayer176 := TCADLayerNode.Create;
CADAssembly177 := TCADAssemblyNode.Create;
CADPart178 := TCADPartNode.Create;
CADFace179 := TCADFaceNode.Create;
{ METHOD .FdChildren.Add }
CADPart178.FdChildren.Add(CADFace179);
{ METHOD .FdChildren.Add }
CADAssembly177.FdChildren.Add(CADPart178);
{ METHOD .FdChildren.Add }
CADLayer176.FdChildren.Add(CADAssembly177);
{ METHOD .FdChildren.Add }
Transform175.FdChildren.Add(CADLayer176);
EspduTransform180 := TEspduTransformNode.Create;
EspduTransform180.FiringRange := 0;
EspduTransform180.ReadInterval := 0.1;
EspduTransform180.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Transform175.FdChildren.Add(EspduTransform180);
ReceiverPdu181 := TReceiverPduNode.Create;
ReceiverPdu181.ReadInterval := 0.1;
ReceiverPdu181.ReceivedPower := 0;
ReceiverPdu181.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Transform175.FdChildren.Add(ReceiverPdu181);
SignalPdu182 := TSignalPduNode.Create;
SignalPdu182.ReadInterval := 0.1;
SignalPdu182.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Transform175.FdChildren.Add(SignalPdu182);
TransmitterPdu183 := TTransmitterPduNode.Create;
TransmitterPdu183.Power := 0;
TransmitterPdu183.ReadInterval := 0.1;
TransmitterPdu183.TransmitFrequencyBandwidth := 0;
TransmitterPdu183.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Transform175.FdChildren.Add(TransmitterPdu183);
DISEntityManager184 := TDISEntityManagerNode.Create;
DISEntityTypeMapping185 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping185.AutoRefresh := 0;
DISEntityTypeMapping185.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
DISEntityManager184.FdChildren.Add(DISEntityTypeMapping185);
{ METHOD .FdChildren.Add }
Transform175.FdChildren.Add(DISEntityManager184);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform175);
EspduTransform186 := TEspduTransformNode.Create;
EspduTransform186.FiringRange := 0;
EspduTransform186.ReadInterval := 0.1;
EspduTransform186.WriteInterval := 1;
WorldInfo187 := TWorldInfoNode.Create;
{ METHOD .FdChildren.Add }
EspduTransform186.FdChildren.Add(WorldInfo187);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(EspduTransform186);
ReceiverPdu188 := TReceiverPduNode.Create;
ReceiverPdu188.ReadInterval := 0.1;
ReceiverPdu188.ReceivedPower := 0;
ReceiverPdu188.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(ReceiverPdu188);
SignalPdu189 := TSignalPduNode.Create;
SignalPdu189.ReadInterval := 0.1;
SignalPdu189.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(SignalPdu189);
TransmitterPdu190 := TTransmitterPduNode.Create;
TransmitterPdu190.Power := 0;
TransmitterPdu190.ReadInterval := 0.1;
TransmitterPdu190.TransmitFrequencyBandwidth := 0;
TransmitterPdu190.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(TransmitterPdu190);
DISEntityManager191 := TDISEntityManagerNode.Create;
DISEntityTypeMapping192 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping192.AutoRefresh := 0;
DISEntityTypeMapping192.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
DISEntityManager191.FdChildren.Add(DISEntityTypeMapping192);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(DISEntityManager191);
LoadSensor193 := TLoadSensorNode.Create;
LoadSensor193.TimeOut := 0;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(Anchor44);
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(Inline110);
DISEntityTypeMapping196 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping196.AutoRefresh := 0;
DISEntityTypeMapping196.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(DISEntityTypeMapping196);
GeoMetadata197 := TGeoMetadataNode.Create;
GeoMetadata197.AutoRefresh := 0;
GeoMetadata197.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(GeoMetadata197);
AudioClip198 := TAudioClipNode.Create;
AudioClip198.AutoRefresh := 0;
AudioClip198.AutoRefreshTimeLimit := 3600;
AudioClip198.Gain := 1;
AudioClip198.PauseTime := 0;
AudioClip198.Pitch := 1;
AudioClip198.ResumeTime := 0;
AudioClip198.StartTime := 0;
AudioClip198.StopTime := 0;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(AudioClip198);
ImageCubeMapTexture199 := TImageCubeMapTextureNode.Create;
ImageCubeMapTexture199.AutoRefresh := 0;
ImageCubeMapTexture199.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(ImageCubeMapTexture199);
ImageTexture3D200 := TImageTexture3DNode.Create;
ImageTexture3D200.AutoRefresh := 0;
ImageTexture3D200.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(ImageTexture3D200);
ImageTexture201 := TImageTextureNode.Create;
ImageTexture201.AutoRefresh := 0;
ImageTexture201.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(ImageTexture201);
MovieTexture202 := TMovieTextureNode.Create;
MovieTexture202.AutoRefresh := 0;
MovieTexture202.AutoRefreshTimeLimit := 3600;
MovieTexture202.PauseTime := 0;
MovieTexture202.Pitch := 1;
MovieTexture202.ResumeTime := 0;
MovieTexture202.Speed := 1;
MovieTexture202.StartTime := 0;
MovieTexture202.StopTime := 0;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(MovieTexture202);
Script203 := TScriptNode.Create;
Script203.AutoRefresh := 0;
Script203.AutoRefreshTimeLimit := 3600;

Script203.SetSourceCode('''ecmascript:\n"+
"/* dummy test source code */''');
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(Script203);
PackagedShader204 := TPackagedShaderNode.Create;
PackagedShader204.AutoRefresh := 0;
PackagedShader204.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(PackagedShader204);
ShaderPart205 := TShaderPartNode.Create;
ShaderPart205.AutoRefresh := 0;
ShaderPart205.AutoRefreshTimeLimit := 3600;
ShaderPart205.FdType.Value := 'VERTEX';
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(ShaderPart205);
ShaderProgram206 := TShaderProgramNode.Create;
ShaderProgram206.AutoRefresh := 0;
ShaderProgram206.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor193.FdChildren.Add(ShaderProgram206);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(LoadSensor193);
OrthoViewpoint207 := TOrthoViewpointNode.Create;
OrthoViewpoint207.FarDistance := -1;
OrthoViewpoint207.SetFieldOfView([1,3,2,4]);
OrthoViewpoint207.NearDistance := -1;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(OrthoViewpoint207);
{ METHOD .AddGroup }
X3D0.AddChildren([Group32]);
end;

function Createtemp.exiInputTransformed: TX3DRootNode;
begin
Inittemp.exiInputTransformedPart0;
Inittemp.exiInputTransformedPart1;
Inittemp.exiInputTransformedPart2;
Inittemp.exiInputTransformedPart3;
Inittemp.exiInputTransformedPart4;
Inittemp.exiInputTransformedPart5;
Result := X3D0;
end;

begin
end.
