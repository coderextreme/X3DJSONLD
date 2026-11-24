unit temp.exiInputTransformed;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
X3DExternalPrototype93: TX3DExternalPrototype;
SFString94: TSFString;
Shape95: TShapeNode;
Appearance96: TAppearanceNode;
X3DPrototype97: TX3DPrototypeNode;
SFString98: TSFString;
Sphere99: TSphereNode;
Shape100: TShapeNode;
Appearance101: TAppearanceNode;
X3DPrototype102: TX3DPrototypeNode;
Cone103: TConeNode;
Shape104: TShapeNode;
Appearance105: TAppearanceNode;
X3DPrototype106: TX3DPrototypeNode;
Cylinder107: TCylinderNode;
Inline108: TInlineNode;
IMPORT109: TIMPORTNode;
EXPORT110: TEXPORTNode;
X3DPrototype111: TX3DPrototype;
X3DInterfaceDeclaration112: TX3DInterfaceDeclaration;
SFBool113: TSFBool;
SFColor114: TSFColor;
SFColor115: TSFColor;
SFColor116: TSFColor;
SFFloat117: TSFFloat;
SFFloat118: TSFFloat;
SFFloat119: TSFFloat;
X3DPrototype120: TX3DPrototype;
Material121: TMaterialNode;
Script123: TScriptNode;
SFBool124: TSFBool;
SFColor125: TSFColor;
SFColor126: TSFColor;
SFTime127: TSFTime;
Group129: TGroupNode;
Shape130: TShapeNode;
MetadataString131: TMetadataStringNode;
Appearance132: TAppearanceNode;
X3DPrototype133: TX3DPrototypeNode;
Cone134: TConeNode;
Group135: TGroupNode;
Sound136: TSoundNode;
AudioClip137: TAudioClipNode;
Sound138: TSoundNode;
MovieTexture139: TMovieTextureNode;
Shape140: TShapeNode;
Appearance141: TAppearanceNode;
Material142: TMaterialNode;
Extrusion143: TExtrusionNode;
Group144: TGroupNode;
X3DPrototype145: TX3DPrototype;
X3DInterfaceDeclaration146: TX3DInterfaceDeclaration;
SFString147: TSFString;
X3DPrototype148: TX3DPrototype;
WorldInfo149: TWorldInfoNode;
X3DPrototype150: TX3DPrototypeNode;
SFString151: TSFString;
Group152: TGroupNode;
X3DPrototype153: TX3DPrototypeNode;
Transform154: TTransformNode;
X3DPrototype155: TX3DPrototype;
X3DPrototype156: TX3DPrototype;
ProgramShader157: TProgramShaderNode;
Shape158: TShapeNode;
Appearance159: TAppearanceNode;
ProgramShader160: TProgramShaderNode;
ShaderProgram161: TShaderProgramNode;
X3DPrototype162: TX3DPrototypeNode;
ComposedShader163: TComposedShaderNode;
ShaderPart164: TShaderPartNode;
Transform165: TTransformNode;
CADLayer166: TCADLayerNode;
CADAssembly167: TCADAssemblyNode;
CADPart168: TCADPartNode;
CADFace169: TCADFaceNode;
EspduTransform170: TEspduTransformNode;
ReceiverPdu171: TReceiverPduNode;
SignalPdu172: TSignalPduNode;
TransmitterPdu173: TTransmitterPduNode;
DISEntityManager174: TDISEntityManagerNode;
DISEntityTypeMapping175: TDISEntityTypeMappingNode;
EspduTransform176: TEspduTransformNode;
WorldInfo177: TWorldInfoNode;
ReceiverPdu178: TReceiverPduNode;
SignalPdu179: TSignalPduNode;
TransmitterPdu180: TTransmitterPduNode;
DISEntityManager181: TDISEntityManagerNode;
DISEntityTypeMapping182: TDISEntityTypeMappingNode;
LoadSensor183: TLoadSensorNode;
Anchor184: TAnchorNode;
Inline185: TInlineNode;
DISEntityTypeMapping186: TDISEntityTypeMappingNode;
GeoMetadata187: TGeoMetadataNode;
AudioClip188: TAudioClipNode;
ImageCubeMapTexture189: TImageCubeMapTextureNode;
ImageTexture3D190: TImageTexture3DNode;
ImageTexture191: TImageTextureNode;
MovieTexture192: TMovieTextureNode;
Script193: TScriptNode;
PackagedShader194: TPackagedShaderNode;
ShaderPart195: TShaderPartNode;
ShaderProgram196: TShaderProgramNode;
OrthoViewpoint197: TOrthoViewpointNode;

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
end;

procedure Inittemp.exiInputTransformedPart1;
begin

{ METHOD .Meta }
X3D0.Meta['reference'] := 'SmokeTestProgramOutput.txt';
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
Viewpoint34.FarDistance := -1;
Viewpoint34.FieldOfView := 0.7854;
Viewpoint34.NearDistance := -1;
NavigationInfo35 := TNavigationInfoNode.Create;;
NavigationInfo35.Speed := 1;
NavigationInfo35.TransitionTime := 1;
NavigationInfo35.VisibilityLimit := 0;
{ METHOD .NavigationInfo }
{ METHOD.SET .NavigationInfo }
Viewpoint34.NavigationInfo := NavigationInfo35;
{ METHOD .FdChildren.Add }
ViewpointGroup33.FdChildren.Add(Viewpoint34);
Viewpoint36 := TViewpointNode.Create;;
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
NavigationInfo37 := TNavigationInfoNode.Create;;
NavigationInfo37.Speed := 1;
NavigationInfo37.TransitionTime := 1;
NavigationInfo37.SetType(['EXAMINE','FLY','ANY']);
end;

procedure Inittemp.exiInputTransformedPart2;
begin

NavigationInfo37.VisibilityLimit := 0;
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
LayerSet42 := TLayerSetNode.Create;;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(LayerSet42);
Transform43 := TTransformNode.Create;;
Transform43.Translation := Vector3(0,1.5,0);
Anchor44 := TAnchorNode.Create;;
Anchor44.AutoRefresh := 0;
Anchor44.AutoRefreshTimeLimit := 3600;
Anchor44.Description := 'select for X3D Java SAI Library (X3DJSAIL) description';
Anchor44.SetUrl(['../X3DJSAIL.html','https://www.web3d.org/specifications/java/X3DJSAIL.html']);
Shape45 := TShapeNode.Create;;
Appearance46 := TAppearanceNode.Create;;
Appearance46.AlphaCutoff := 0.5;
Material47 := TMaterialNode.Create;;
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
end;

procedure Inittemp.exiInputTransformedPart3;
begin
;
ImageTexture48.AutoRefresh := 0;
ImageTexture48.AutoRefreshTimeLimit := 3600;
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
Appearance51.AlphaCutoff := 0.5;
Material52 := TMaterialNode.Create;;
Material52.AmbientIntensity := 0.2;
Material52.EmissiveColor := Vector3(0.6,0.1961,0.8);
Material52.NormalScale := 1;
Material52.OcclusionStrength := 1;
Material52.Shininess := 0.2;
Material52.Transparency := 0;
{ METHOD .SetMaterial }
Appearance51.Material := Material52;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape50.Appearance := Appearance51;
IndexedLineSet53 := TIndexedLineSetNode.Create;;
IndexedLineSet53.SetCoordIndex([0,1,2,3,4,0]);
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
end;

procedure Inittemp.exiInputTransformedPart4;
begin

{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(PositionInterpolator55);
TimeSensor56 := TTimeSensorNode.Create;;
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
Transform59 := TTransformNode.Create;;
Transform59.Translation := Vector3(0,-1.5,0);
Shape60 := TShapeNode.Create;;
Appearance61 := TAppearanceNode.Create;;
Appearance61.AlphaCutoff := 0.5;
{ METHOD .SetMaterial }
Appearance61.Material := Material47;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape60.Appearance := Appearance61;
Text63 := TTextNode.Create;;
Text63.MaxExtent := 0;
Text63.SetText(['X3D Java','SAI Library','X3DJSAIL']);
MetadataSet64 := TMetadataSetNode.Create;;
MetadataString65 := TMetadataStringNode.Create;;
MetadataString65.SetValue(['MFString example C, backslash-escaped quotes: He said, "Immel did it!"']);
{ METHOD .FdValue.Add }
MetadataSet64.FdValue.Add(MetadataString65);
MetadataString66 := TMetadataStringNode.Create;;
MetadataString66.SetValue(['checks MetadataSet addValue() method']);
{ METHOD .FdValue.Add }
MetadataSet64.FdValue.Add(MetadataString66);
{ METHOD .Metadata }
{ METHOD.SET .Metadata }
Text63.Metadata := MetadataSet64;
FontStyle67 := TFontStyleNode.Create;;
FontStyle67.Justify := fjMIDDLE;
end;

procedure Inittemp.exiInputTransformedPart5;
begin

FontStyle67.JustifyMinor := fjMIDDLE;
FontStyle67.Size := 1;
FontStyle67.Spacing := 1;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text63.FontStyle := FontStyle67;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape60.Geometry := Text63;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Shape60);
Collision68 := TCollisionNode.Create;;
Shape69 := TShapeNode.Create;;
Text70 := TTextNode.Create;;
Text70.MaxExtent := 0;
Text70.SetText(['One, Two, Text','He said, "Immel did it!" \"\"']);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape69.Geometry := Text70;
{ METHOD .Proxy }
{ METHOD.SET .Proxy }
Collision68.Proxy := Shape69;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Collision68);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform59);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator71.SetKey([0,0.5,1]);
OrientationInterpolator71.SetKeyValue([Vector4(0,1,0,4.7124),Vector4(0,1,0,0),Vector4(0,1,0,1.5708)]);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(OrientationInterpolator71);
TimeSensor72 := TTimeSensorNode.Create;;
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
Group75 := TGroupNode.Create;;
Background76 := TBackgroundNode.Create;;
Background76.Transparency := 0;
{ METHOD .FdChildren.Add }
Group75.FdChildren.Add(Background76);
end;

procedure Inittemp.exiInputTransformedPart6;
begin

Script77 := TScriptNode.Create;;
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
ColorInterpolator80 := TColorInterpolatorNode.Create;;
ColorInterpolator80.SetKey([0,0.5,1]);
ColorInterpolator80.SetKeyValue([Vector3(0.9412,1,1),Vector3(0.2941,0,0.5098),Vector3(0.9412,1,1)]);
{ METHOD .FdChildren.Add }
Group75.FdChildren.Add(ColorInterpolator80);
TimeSensor81 := TTimeSensorNode.Create;;
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
Group75.AddRoute(colorTypeConversionScript.undefined, Background76.skyColor);
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
X3DPrototype85 := TX3DPrototype.Create;;
X3DPrototype85.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
X3DInterfaceDeclaration86 := TX3DInterfaceDeclaration.Create(nil);;
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
X3DPrototype89 := TX3DPrototype.Create;;
Material90 := TMaterialNode.Create;;
Material90.AmbientIntensity := 0.25;
Material90.DiffuseColor := Vector3(0.2824,0.0852,0.1345);
Material90.NormalScale := 1;
Material90.OcclusionStrength := 1;
Material90.Shininess := 0.1273;
Material90.SpecularColor := Vector3(0.2763,0.1143,0.1399);
Material90.Transparency := 0;
{ METHOD .AddMaterial }
X3DPrototype89.AddMaterial([Material90]);
TouchSensor91 := TTouchSensorNode.Create;;
TouchSensor91.Description := 'within ProtoBody';
{ METHOD .AddTouchSensor }
X3DPrototype89.AddTouchSensor([TouchSensor91]);
{ METHOD .AddX3DPrototype }
X3DPrototype85.AddX3DPrototype([X3DPrototype89]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype85]);
X3DExternalPrototype93 := TX3DExternalPrototype.Create;;
X3DExternalPrototype93.Appinfo := 'this is a different Material node';
X3DExternalPrototype93.Url := '\"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02\"';
SFString94 := TSFString.CreateUndefined(X3DExternalPrototype93, false, 'description');
SFString94.Appinfo := 'tooltip for descriptionField';
{ METHOD .AddSFString }
X3DExternalPrototype93.AddSFString([SFString94]);
{ METHOD .AddX3DExternalPrototype }
Group32.AddX3DExternalPrototype([X3DExternalPrototype93]);
Shape95 := TShapeNode.Create;;
Appearance96 := TAppearanceNode.Create;;
Appearance96.AlphaCutoff := 0.5;
X3DPrototype97 := TX3DPrototypeNode;
SFString98 := TSFString.CreateUndefined(X3DPrototype97, false, 'description');
SFString98.Value := 'ArtDeco01Material can substitute for a Material node';
{ METHOD .AddSFString }
X3DPrototype97.AddSFString([SFString98]);
{ METHOD .SetMaterial }
Appearance96.Material := X3DPrototype97;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape95.Appearance := Appearance96;
Sphere99 := TSphereNode.Create;;
Sphere99.Radius := 0.001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape95.Geometry := Sphere99;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape95);
Shape100 := TShapeNode.Create;;
Appearance101 := TAppearanceNode.Create;;
Appearance101.AlphaCutoff := 0.5;
X3DPrototype102 := TX3DPrototypeNode;
{ METHOD .SetMaterial }
Appearance101.Material := X3DPrototype102;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape100.Appearance := Appearance101;
Cone103 := TConeNode.Create;;
Cone103.BottomRadius := 0.001;
Cone103.Height := 0.001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape100.Geometry := Cone103;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape100);
Shape104 := TShapeNode.Create;;
Appearance105 := TAppearanceNode.Create;;
Appearance105.AlphaCutoff := 0.5;
{ METHOD .SetMaterial }
Appearance105.Material := X3DPrototype102;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape104.Appearance := Appearance105;
Cylinder107 := TCylinderNode.Create;;
Cylinder107.Height := 0.001;
Cylinder107.Radius := 0.001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape104.Geometry := Cylinder107;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape104);
Inline108 := TInlineNode.Create;;
Inline108.AutoRefresh := 0;
Inline108.AutoRefreshTimeLimit := 3600;
Inline108.SetUrl(['newScene.x3d','https://www.web3d.org/specifications/java/examples/newScene.x3d']);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Inline108);
IMPORT109 := TIMPORTNode.Create;;
IMPORT109.AS := 'WorldInfoDEF2';
IMPORT109.ImportedDEF := 'WorldInfoDEF';
IMPORT109.InlineDEF := 'inlineScene';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(IMPORT109);
EXPORT110 := TEXPORTNode.Create;;
EXPORT110.AS := 'WorldInfoDEF3';
EXPORT110.LocalDEF := 'WorldInfoDEF';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(EXPORT110);
X3DPrototype111 := TX3DPrototype.Create;;
X3DPrototype111.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
X3DPrototype111.Documentation := 'https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
X3DInterfaceDeclaration112 := TX3DInterfaceDeclaration.Create(nil);;
SFBool113 := TSFBool.CreateUndefined(X3DInterfaceDeclaration112, false, 'enabled');
SFBool113.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration112.AddSFBool([SFBool113]);
SFColor114 := TSFColor.CreateUndefined(X3DInterfaceDeclaration112, false, 'diffuseColor');
SFColor114.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration112.AddSFColor([SFColor114]);
SFColor115 := TSFColor.CreateUndefined(X3DInterfaceDeclaration112, false, 'emissiveColor');
SFColor115.Value := '0.05 0.05 0.5';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration112.AddSFColor([SFColor115]);
SFColor116 := TSFColor.CreateUndefined(X3DInterfaceDeclaration112, false, 'specularColor');
SFColor116.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration112.AddSFColor([SFColor116]);
SFFloat117 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration112, false, 'transparency');
SFFloat117.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration112.AddSFFloat([SFFloat117]);
SFFloat118 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration112, false, 'shininess');
SFFloat118.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration112.AddSFFloat([SFFloat118]);
SFFloat119 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration112, false, 'ambientIntensity');
SFFloat119.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration112.AddSFFloat([SFFloat119]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype111.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration112]);
X3DPrototype120 := TX3DPrototype.Create;;
Material121 := TMaterialNode.Create;;
Material121.AmbientIntensity := 0.2;
Material121.NormalScale := 1;
Material121.OcclusionStrength := 1;
Material121.Shininess := 0.2;
Material121.Transparency := 0;
{ METHOD .AddMaterial }
X3DPrototype120.AddMaterial([Material121]);
Script123 := TScriptNode.Create;;
Script123.AutoRefresh := 0;
Script123.AutoRefreshTimeLimit := 3600;
SFBool124 := TSFBool.CreateUndefined(Script123, false, 'enabled');
{ METHOD .Fd.AddCustomField }
Script123.AddCustomField(SFBool124);
SFColor125 := TSFColor.CreateUndefined(Script123, false, 'diffuseColor');
{ METHOD .Fd.AddCustomField }
Script123.AddCustomField(SFColor125);
SFColor126 := TSFColor.CreateUndefined(Script123, false, 'newColor');
{ METHOD .Fd.AddCustomField }
Script123.AddCustomField(SFColor126);
SFTime127 := TSFTime.CreateUndefined(Script123, false, 'clockTrigger');
{ METHOD .Fd.AddCustomField }
Script123.AddCustomField(SFTime127);

Script123.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype120.AddScript([Script123]);
{ METHOD .AddX3DPrototype }
X3DPrototype111.AddX3DPrototype([X3DPrototype120]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype111]);
Group129 := TGroupNode.Create;;
Shape130 := TShapeNode.Create;;
MetadataString131 := TMetadataStringNode.Create;;
MetadataString131.SetValue(['test case']);
{ METHOD .SetValue }
Shape130.Value := MetadataString131;
Appearance132 := TAppearanceNode.Create;;
Appearance132.AlphaCutoff := 0.5;
X3DPrototype133 := TX3DPrototypeNode;
{ METHOD .SetMaterial }
Appearance132.Material := X3DPrototype133;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape130.Appearance := Appearance132;
Cone134 := TConeNode.Create;;
Cone134.Bottom := False;
Cone134.BottomRadius := 0.05;
Cone134.Height := 0.1;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape130.Geometry := Cone134;
{ METHOD .FdChildren.Add }
Group129.FdChildren.Add(Shape130);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group129);
Group135 := TGroupNode.Create;;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group135);
Sound136 := TSoundNode.Create;;
Sound136.Intensity := 1;
Sound136.Location := Vector3(0,1.6,0);
Sound136.MaxBack := 10;
Sound136.MaxFront := 10;
Sound136.MinBack := 1;
Sound136.MinFront := 1;
Sound136.Priority := 0;
AudioClip137 := TAudioClipNode.Create;;
AudioClip137.AutoRefresh := 0;
AudioClip137.AutoRefreshTimeLimit := 3600;
AudioClip137.Description := 'chimes';
AudioClip137.Gain := 1;
AudioClip137.PauseTime := 0;
AudioClip137.Pitch := 1;
AudioClip137.ResumeTime := 0;
AudioClip137.StartTime := 0;
AudioClip137.StopTime := 0;
AudioClip137.SetUrl(['chimes.wav','https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ METHOD .Source }
{ METHOD.SET .Source }
Sound136.Source := AudioClip137;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Sound136);
Sound138 := TSoundNode.Create;;
Sound138.Intensity := 1;
Sound138.Location := Vector3(0,1.6,0);
Sound138.MaxBack := 10;
Sound138.MaxFront := 10;
Sound138.MinBack := 1;
Sound138.MinFront := 1;
Sound138.Priority := 0;
MovieTexture139 := TMovieTextureNode.Create;;
MovieTexture139.AutoRefresh := 0;
MovieTexture139.AutoRefreshTimeLimit := 3600;
MovieTexture139.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture139.PauseTime := 0;
MovieTexture139.Pitch := 1;
MovieTexture139.ResumeTime := 0;
MovieTexture139.Speed := 1;
MovieTexture139.StartTime := 0;
MovieTexture139.StopTime := 0;
MovieTexture139.SetUrl(['mpgsys.mpg','https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ METHOD .Source }
{ METHOD.SET .Source }
Sound138.Source := MovieTexture139;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Sound138);
Shape140 := TShapeNode.Create;;
Appearance141 := TAppearanceNode.Create;;
Appearance141.AlphaCutoff := 0.5;
Material142 := TMaterialNode.Create;;
Material142.AmbientIntensity := 0.2;
Material142.NormalScale := 1;
Material142.OcclusionStrength := 1;
Material142.Shininess := 0.2;
Material142.Transparency := 1;
{ METHOD .SetMaterial }
Appearance141.Material := Material142;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape140.Appearance := Appearance141;
Extrusion143 := TExtrusionNode.Create;;
Extrusion143.CreaseAngle := 0;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape140.Geometry := Extrusion143;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape140);
Group144 := TGroupNode.Create;;
X3DPrototype145 := TX3DPrototype.Create;;
X3DInterfaceDeclaration146 := TX3DInterfaceDeclaration.Create(nil);;
SFString147 := TSFString.CreateUndefined(X3DInterfaceDeclaration146, false, 'description');
{ METHOD .AddSFString }
X3DInterfaceDeclaration146.AddSFString([SFString147]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype145.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration146]);
X3DPrototype148 := TX3DPrototype.Create;;
WorldInfo149 := TWorldInfoNode.Create;;
{ METHOD .AddWorldInfo }
X3DPrototype148.AddWorldInfo([WorldInfo149]);
{ METHOD .AddX3DPrototype }
X3DPrototype145.AddX3DPrototype([X3DPrototype148]);
{ METHOD .AddX3DPrototype }
Group144.AddX3DPrototype([X3DPrototype145]);
X3DPrototype150 := TX3DPrototypeNode;
SFString151 := TSFString.CreateUndefined(X3DPrototype150, false, 'description');
SFString151.Value := 'testing 1 2 3';
{ METHOD .AddSFString }
X3DPrototype150.AddSFString([SFString151]);
{ METHOD .AddX3DPrototype }
Group144.AddX3DPrototype([X3DPrototype150]);
Group152 := TGroupNode.Create;;
{ METHOD .FdChildren.Add }
Group144.FdChildren.Add(Group152);
X3DPrototype153 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group144.AddX3DPrototype([X3DPrototype153]);
Transform154 := TTransformNode.Create;;
{ METHOD .FdChildren.Add }
Group144.FdChildren.Add(Transform154);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group144);
X3DPrototype155 := TX3DPrototype.Create;;
X3DPrototype156 := TX3DPrototype.Create;;
ProgramShader157 := TProgramShaderNode.Create;;
{ METHOD .AddProgramShader }
X3DPrototype156.AddProgramShader([ProgramShader157]);
{ METHOD .AddX3DPrototype }
X3DPrototype155.AddX3DPrototype([X3DPrototype156]);
{ METHOD .AddX3DPrototype }
Group32.AddX3DPrototype([X3DPrototype155]);
Shape158 := TShapeNode.Create;;
Appearance159 := TAppearanceNode.Create;;
Appearance159.AlphaCutoff := 0.5;
ProgramShader160 := TProgramShaderNode.Create;;
ShaderProgram161 := TShaderProgramNode.Create;;
ShaderProgram161.AutoRefresh := 0;
ShaderProgram161.AutoRefreshTimeLimit := 3600;
{ METHOD .Programs }
{ METHOD.SET .Programs }
ProgramShader160.Programs := ShaderProgram161;
{ METHOD .AddChildren }
Appearance159.AddChildren([ProgramShader160]);
X3DPrototype162 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Appearance159.AddX3DPrototype([X3DPrototype162]);
ComposedShader163 := TComposedShaderNode.Create;;
ShaderPart164 := TShaderPartNode.Create;;
ShaderPart164.AutoRefresh := 0;
ShaderPart164.AutoRefreshTimeLimit := 3600;
ShaderPart164.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader163.Parts := ShaderPart164;
{ METHOD .AddChildren }
Appearance159.AddChildren([ComposedShader163]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape158.Appearance := Appearance159;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Shape158);
Transform165 := TTransformNode.Create;;
CADLayer166 := TCADLayerNode.Create;;
CADAssembly167 := TCADAssemblyNode.Create;;
CADPart168 := TCADPartNode.Create;;
CADFace169 := TCADFaceNode.Create;;
{ METHOD .FdChildren.Add }
CADPart168.FdChildren.Add(CADFace169);
{ METHOD .FdChildren.Add }
CADAssembly167.FdChildren.Add(CADPart168);
{ METHOD .FdChildren.Add }
CADLayer166.FdChildren.Add(CADAssembly167);
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(CADLayer166);
EspduTransform170 := TEspduTransformNode.Create;;
EspduTransform170.FiringRange := 0;
EspduTransform170.ReadInterval := 0.1;
EspduTransform170.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(EspduTransform170);
ReceiverPdu171 := TReceiverPduNode.Create;;
ReceiverPdu171.ReadInterval := 0.1;
ReceiverPdu171.ReceivedPower := 0;
ReceiverPdu171.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(ReceiverPdu171);
SignalPdu172 := TSignalPduNode.Create;;
SignalPdu172.ReadInterval := 0.1;
SignalPdu172.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(SignalPdu172);
TransmitterPdu173 := TTransmitterPduNode.Create;;
TransmitterPdu173.Power := 0;
TransmitterPdu173.ReadInterval := 0.1;
TransmitterPdu173.TransmitFrequencyBandwidth := 0;
TransmitterPdu173.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(TransmitterPdu173);
DISEntityManager174 := TDISEntityManagerNode.Create;;
DISEntityTypeMapping175 := TDISEntityTypeMappingNode.Create;;
DISEntityTypeMapping175.AutoRefresh := 0;
DISEntityTypeMapping175.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
DISEntityManager174.FdChildren.Add(DISEntityTypeMapping175);
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(DISEntityManager174);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Transform165);
EspduTransform176 := TEspduTransformNode.Create;;
EspduTransform176.FiringRange := 0;
EspduTransform176.ReadInterval := 0.1;
EspduTransform176.WriteInterval := 1;
WorldInfo177 := TWorldInfoNode.Create;;
{ METHOD .FdChildren.Add }
EspduTransform176.FdChildren.Add(WorldInfo177);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(EspduTransform176);
ReceiverPdu178 := TReceiverPduNode.Create;;
ReceiverPdu178.ReadInterval := 0.1;
ReceiverPdu178.ReceivedPower := 0;
ReceiverPdu178.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(ReceiverPdu178);
SignalPdu179 := TSignalPduNode.Create;;
SignalPdu179.ReadInterval := 0.1;
SignalPdu179.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(SignalPdu179);
TransmitterPdu180 := TTransmitterPduNode.Create;;
TransmitterPdu180.Power := 0;
TransmitterPdu180.ReadInterval := 0.1;
TransmitterPdu180.TransmitFrequencyBandwidth := 0;
TransmitterPdu180.WriteInterval := 1;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(TransmitterPdu180);
DISEntityManager181 := TDISEntityManagerNode.Create;;
DISEntityTypeMapping182 := TDISEntityTypeMappingNode.Create;;
DISEntityTypeMapping182.AutoRefresh := 0;
DISEntityTypeMapping182.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
DISEntityManager181.FdChildren.Add(DISEntityTypeMapping182);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(DISEntityManager181);
LoadSensor183 := TLoadSensorNode.Create;;
LoadSensor183.TimeOut := 0;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(Anchor44);
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(Inline108);
DISEntityTypeMapping186 := TDISEntityTypeMappingNode.Create;;
DISEntityTypeMapping186.AutoRefresh := 0;
DISEntityTypeMapping186.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(DISEntityTypeMapping186);
GeoMetadata187 := TGeoMetadataNode.Create;;
GeoMetadata187.AutoRefresh := 0;
GeoMetadata187.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(GeoMetadata187);
AudioClip188 := TAudioClipNode.Create;;
AudioClip188.AutoRefresh := 0;
AudioClip188.AutoRefreshTimeLimit := 3600;
AudioClip188.Gain := 1;
AudioClip188.PauseTime := 0;
AudioClip188.Pitch := 1;
AudioClip188.ResumeTime := 0;
AudioClip188.StartTime := 0;
AudioClip188.StopTime := 0;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(AudioClip188);
ImageCubeMapTexture189 := TImageCubeMapTextureNode.Create;;
ImageCubeMapTexture189.AutoRefresh := 0;
ImageCubeMapTexture189.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(ImageCubeMapTexture189);
ImageTexture3D190 := TImageTexture3DNode.Create;;
ImageTexture3D190.AutoRefresh := 0;
ImageTexture3D190.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(ImageTexture3D190);
ImageTexture191 := TImageTextureNode.Create;;
ImageTexture191.AutoRefresh := 0;
ImageTexture191.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(ImageTexture191);
MovieTexture192 := TMovieTextureNode.Create;;
MovieTexture192.AutoRefresh := 0;
MovieTexture192.AutoRefreshTimeLimit := 3600;
MovieTexture192.PauseTime := 0;
MovieTexture192.Pitch := 1;
MovieTexture192.ResumeTime := 0;
MovieTexture192.Speed := 1;
MovieTexture192.StartTime := 0;
MovieTexture192.StopTime := 0;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(MovieTexture192);
Script193 := TScriptNode.Create;;
Script193.AutoRefresh := 0;
Script193.AutoRefreshTimeLimit := 3600;

Script193.SetSourceCode('''ecmascript:\n"+
"/* dummy test source code */''');
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(Script193);
PackagedShader194 := TPackagedShaderNode.Create;;
PackagedShader194.AutoRefresh := 0;
PackagedShader194.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(PackagedShader194);
ShaderPart195 := TShaderPartNode.Create;;
ShaderPart195.AutoRefresh := 0;
ShaderPart195.AutoRefreshTimeLimit := 3600;
ShaderPart195.FdType.Value := 'VERTEX';
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(ShaderPart195);
ShaderProgram196 := TShaderProgramNode.Create;;
ShaderProgram196.AutoRefresh := 0;
ShaderProgram196.AutoRefreshTimeLimit := 3600;
{ METHOD .FdChildren.Add }
LoadSensor183.FdChildren.Add(ShaderProgram196);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(LoadSensor183);
OrthoViewpoint197 := TOrthoViewpointNode.Create;;
OrthoViewpoint197.FarDistance := -1;
OrthoViewpoint197.SetFieldOfView([1,3,2,4]);
OrthoViewpoint197.NearDistance := -1;
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(OrthoViewpoint197);
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
Inittemp.exiInputTransformedPart6;
Result := X3D0;
end;

begin
end.
