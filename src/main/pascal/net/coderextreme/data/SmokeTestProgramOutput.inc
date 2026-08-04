function SmokeTestProgramOutput: TX3DRootNode;
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
field78: TfieldNode;
field79: TfieldNode;
ColorInterpolator80: TColorInterpolatorNode;
TimeSensor81: TTimeSensorNode;
ProtoDeclare85: TProtoDeclareNode;
ProtoInterface86: TProtoInterfaceNode;
field87: TfieldNode;
field88: TfieldNode;
ProtoBody89: TProtoBodyNode;
Material90: TMaterialNode;
TouchSensor91: TTouchSensorNode;
IS92: TISNode;
connect93: TconnectNode;
connect94: TconnectNode;
ExternProtoDeclare95: TExternProtoDeclareNode;
field96: TfieldNode;
Shape97: TShapeNode;
Appearance98: TAppearanceNode;
ProtoInstance99: TProtoInstanceNode;
fieldValue100: TfieldValueNode;
Sphere101: TSphereNode;
Shape102: TShapeNode;
Appearance103: TAppearanceNode;
ProtoInstance104: TProtoInstanceNode;
Cone105: TConeNode;
Shape106: TShapeNode;
Appearance107: TAppearanceNode;
ProtoInstance108: TProtoInstanceNode;
Cylinder109: TCylinderNode;
Inline110: TInlineNode;
IMPORT111: TIMPORTNode;
EXPORT112: TEXPORTNode;
ProtoDeclare113: TProtoDeclareNode;
ProtoInterface114: TProtoInterfaceNode;
field115: TfieldNode;
field116: TfieldNode;
field117: TfieldNode;
field118: TfieldNode;
field119: TfieldNode;
field120: TfieldNode;
field121: TfieldNode;
ProtoBody122: TProtoBodyNode;
Material123: TMaterialNode;
IS124: TISNode;
connect125: TconnectNode;
connect126: TconnectNode;
connect127: TconnectNode;
connect128: TconnectNode;
connect129: TconnectNode;
connect130: TconnectNode;
Script131: TScriptNode;
field132: TfieldNode;
field133: TfieldNode;
field134: TfieldNode;
field135: TfieldNode;
IS136: TISNode;
connect137: TconnectNode;
connect138: TconnectNode;
Group139: TGroupNode;
Shape140: TShapeNode;
MetadataString141: TMetadataStringNode;
Appearance142: TAppearanceNode;
ProtoInstance143: TProtoInstanceNode;
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
ProtoDeclare155: TProtoDeclareNode;
ProtoInterface156: TProtoInterfaceNode;
field157: TfieldNode;
ProtoBody158: TProtoBodyNode;
WorldInfo159: TWorldInfoNode;
ProtoInstance160: TProtoInstanceNode;
fieldValue161: TfieldValueNode;
Group162: TGroupNode;
ProtoInstance163: TProtoInstanceNode;
Transform164: TTransformNode;
ProtoDeclare165: TProtoDeclareNode;
ProtoBody166: TProtoBodyNode;
ProgramShader167: TProgramShaderNode;
Shape168: TShapeNode;
Appearance169: TAppearanceNode;
ProgramShader170: TProgramShaderNode;
ShaderProgram171: TShaderProgramNode;
ProtoInstance172: TProtoInstanceNode;
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
X3D0.CssClass := 'x3dModel.class';
X3D0.Profile := 'Full';
X3D0.Style := 'x3dModel.style';
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
X3D0.Meta['modified'] := '20 June 2026';
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
WorldInfo38.CssClass := 'worldInfoNode.class';
WorldInfo38.Style := 'worldInfoNode.style';
WorldInfo38.Title := 'SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)';
{ .AddChildren }
Group32.AddChildren([WorldInfo38]);
WorldInfo39 := TWorldInfoNode.Create;
WorldInfo39 := WorldInfo38;
{ .AddChildren }
Group32.AddChildren([WorldInfo39]);
WorldInfo40 := TWorldInfoNode.Create;
WorldInfo40 := WorldInfo38;
{ .AddChildren }
Group32.AddChildren([WorldInfo40]);
MetadataString41 := TMetadataStringNode.Create;
MetadataString41.NameField := 'test';
MetadataString41.SetValue(['Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding']);
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
Box49.CssClass := 'untextured';
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
Material62 := TMaterialNode.Create;
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
MetadataString65.NameField := 'quotesTestC';
MetadataString65.SetValue(['MFString example C, backslash-escaped quotes: He said, \"Immel did it!\"']);
{ .SetValue }
MetadataSet64.Value := MetadataString65;
MetadataString66 := TMetadataStringNode.Create;
MetadataString66.NameField := 'extraChildTest';
MetadataString66.SetValue(['checks MetadataSet addValue() method']);
{ .SetValue }
MetadataSet64.Value := MetadataString66;
{ .SetMetadata }
Text63.Metadata := MetadataSet64;
FontStyle67 := TFontStyleNode.Create;
FontStyle67.Justify := fjMiddle;
FontStyle67.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text63.FontStyle := FontStyle67;
{ .SetGeometry }
Shape60.Geometry := Text63;
{ .AddChild }
Transform59.AddChildren([Shape60]);
Collision68 := TCollisionNode.Create;
{ test containerField='proxy' }
Shape69 := TShapeNode.Create;
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text70 := TTextNode.Create;
Text70.SetText(['One, Two, Text','He said, \"Immel did it!\" \"\"']);
{ .SetGeometry }
Shape69.Geometry := Text70;
{ .SetProxy }
Collision68.Proxy := Shape69;
{ .AddChildren }
Transform59.AddChildren([Collision68]);
{ It's a beautiful world }
{ ... for you! }
{ https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) }
{ .AddChildren }
Group32.AddChildren([Transform59]);
{ repeatedly spin 180 degrees as a readable special effect }
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;
OrientationInterpolator71.SetKey([0,0.5,1]);
OrientationInterpolator71.SetKeyValue([Vector4(0,1,0,4.7124),Vector4(0,1,0,0),Vector4(0,1,0,1.5708)]);
{ .AddChildren }
Group32.AddChildren([OrientationInterpolator71]);
TimeSensor72 := TTimeSensorNode.Create;
TimeSensor72.CycleInterval := 5;
TimeSensor72.Loop := True;
{ .AddChildren }
Group32.AddChildren([TimeSensor72]);
Group32.AddRoute(TimeSensor72.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator71.EventValue_changed, Transform59.FdRotation);
{ .AddX3DRoute }
Group75 := TGroupNode.Create;
Background76 := TBackgroundNode.Create;
{ .AddChildren }
Group75.AddChildren([Background76]);
Script77 := TScriptNode.Create;
field78 := TfieldNode.Create;
field78.NameField := 'colorInput';
field78.AccessType := 'inputOnly';
field78.Type := 'SFColor';
{ .AddField }
Script77.Field := field78;
field79 := TfieldNode.Create;
field79.NameField := 'colorsOutput';
field79.AccessType := 'outputOnly';
field79.Type := 'MFColor';
{ .AddField }
Script77.Field := field79;

Script77.SetSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ',\n"+
"//                colorsOutput=' + colorsOutput + '\n"+
"');\n"+
"// TODO check line wrapping when exporting/converting\n"+
"}''');
{ .AddChildren }
Group75.AddChildren([Script77]);
ColorInterpolator80 := TColorInterpolatorNode.Create;
ColorInterpolator80.SetKey([0,0.5,1]);
ColorInterpolator80.SetKeyValue([Vector3(0.9412,1,1),Vector3(0.2941,0,0.5098),Vector3(0.9412,1,1)]);
{ AZURE to INDIGO and back again }
{ .AddChildren }
Group75.AddChildren([ColorInterpolator80]);
TimeSensor81 := TTimeSensorNode.Create;
TimeSensor81.CycleInterval := 60;
TimeSensor81.Loop := True;
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
ProtoDeclare85 := TProtoDeclareNode.Create;
ProtoDeclare85.NameField := 'ArtDeco01';
ProtoDeclare85.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
ProtoInterface86 := TProtoInterfaceNode.Create;
field87 := TfieldNode.Create;
field87.NameField := 'description';
field87.AccessType := 'inputOutput';
field87.Appinfo := 'tooltip for descriptionField';
field87.Type := 'SFString';
field87.Value := 'ArtDeco01Material prototype is a Material node';
{ .AddField }
ProtoInterface86.Field := field87;
field88 := TfieldNode.Create;
field88.NameField := 'enabled';
field88.AccessType := 'inputOutput';
field88.Type := 'SFBool';
field88.Value := 'true';
{ .AddField }
ProtoInterface86.Field := field88;
{ .SetProtoInterface }
ProtoDeclare85.ProtoInterface := ProtoInterface86;
ProtoBody89 := TProtoBodyNode.Create;
{ Initial node of ProtoBody determines prototype node type }
Material90 := TMaterialNode.Create;
Material90.AmbientIntensity := 0.25;
Material90.DiffuseColor := Vector3(0.2824,0.0852,0.1345);
Material90.Shininess := 0.1273;
Material90.SpecularColor := Vector3(0.2763,0.1143,0.1399);
{ .AddChildren }
ProtoBody89.AddChildren([Material90]);
{ [SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
TouchSensor91 := TTouchSensorNode.Create;
TouchSensor91.Description := 'within ProtoBody';
IS92 := TISNode.Create;
connect93 := TconnectNode.Create;
connect93.NodeField := 'description';
connect93.ProtoField := 'description';
{ .AddConnect }
IS92.Connect := connect93;
connect94 := TconnectNode.Create;
connect94.NodeField := 'enabled';
connect94.ProtoField := 'enabled';
{ .AddConnect }
IS92.Connect := connect94;
{ .SetIS }
TouchSensor91.IS := IS92;
{ .AddChildren }
ProtoBody89.AddChildren([TouchSensor91]);
{ .SetProtoBody }
ProtoDeclare85.ProtoBody := ProtoBody89;
{ .AddChildren }
Group32.AddChildren([ProtoDeclare85]);
ExternProtoDeclare95 := TExternProtoDeclareNode.Create;
ExternProtoDeclare95.NameField := 'ArtDeco02';
ExternProtoDeclare95.Appinfo := 'this is a different Material node';
ExternProtoDeclare95.SetUrl(['https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02']);
{ [SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
field96 := TfieldNode.Create;
field96.NameField := 'description';
field96.AccessType := 'inputOutput';
field96.Appinfo := 'tooltip for descriptionField';
field96.Type := 'SFString';
{ .AddField }
ExternProtoDeclare95.Field := field96;
{ .AddChildren }
Group32.AddChildren([ExternProtoDeclare95]);
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape97 := TShapeNode.Create;
Appearance98 := TAppearanceNode.Create;
{ ArtDeco01Material prototype goes here... }
ProtoInstance99 := TProtoInstanceNode.Create;
ProtoInstance99.NameField := 'ArtDeco01';
{ [SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
fieldValue100 := TfieldValueNode.Create;
fieldValue100.NameField := 'description';
fieldValue100.Value := 'ArtDeco01Material can substitute for a Material node';
{ .AddFieldValue }
ProtoInstance99.FieldValue := fieldValue100;
{ .SetMaterial }
Appearance98.Material := ProtoInstance99;
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
{ ArtDeco02Material ProtoInstance goes here... }
ProtoInstance104 := TProtoInstanceNode.Create;
ProtoInstance104.NameField := 'ArtDeco02';
{ [SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
{ .SetMaterial }
Appearance103.Material := ProtoInstance104;
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
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE. }
ProtoInstance108 := TProtoInstanceNode.Create;
ProtoInstance108.NameField := 'ArtDeco02';
ProtoInstance108 := ProtoInstance104;
{ .SetMaterial }
Appearance107.Material := ProtoInstance108;
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
ProtoDeclare113 := TProtoDeclareNode.Create;
ProtoDeclare113.NameField := 'MaterialModulator';
ProtoDeclare113.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
ProtoDeclare113.Documentation := 'https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
ProtoInterface114 := TProtoInterfaceNode.Create;
field115 := TfieldNode.Create;
field115.NameField := 'enabled';
field115.AccessType := 'inputOutput';
field115.Type := 'SFBool';
field115.Value := 'true';
{ .AddField }
ProtoInterface114.Field := field115;
field116 := TfieldNode.Create;
field116.NameField := 'diffuseColor';
field116.AccessType := 'inputOutput';
field116.Type := 'SFColor';
field116.Value := '0 0 0';
{ .AddField }
ProtoInterface114.Field := field116;
field117 := TfieldNode.Create;
field117.NameField := 'emissiveColor';
field117.AccessType := 'inputOutput';
field117.Type := 'SFColor';
field117.Value := '0.05 0.05 0.5';
{ .AddField }
ProtoInterface114.Field := field117;
field118 := TfieldNode.Create;
field118.NameField := 'specularColor';
field118.AccessType := 'inputOutput';
field118.Type := 'SFColor';
field118.Value := '0 0 0';
{ .AddField }
ProtoInterface114.Field := field118;
field119 := TfieldNode.Create;
field119.NameField := 'transparency';
field119.AccessType := 'inputOutput';
field119.Type := 'SFFloat';
field119.Value := '0';
{ .AddField }
ProtoInterface114.Field := field119;
field120 := TfieldNode.Create;
field120.NameField := 'shininess';
field120.AccessType := 'inputOutput';
field120.Type := 'SFFloat';
field120.Value := '0';
{ .AddField }
ProtoInterface114.Field := field120;
field121 := TfieldNode.Create;
field121.NameField := 'ambientIntensity';
field121.AccessType := 'inputOutput';
field121.Type := 'SFFloat';
field121.Value := '0';
{ .AddField }
ProtoInterface114.Field := field121;
{ .SetProtoInterface }
ProtoDeclare113.ProtoInterface := ProtoInterface114;
ProtoBody122 := TProtoBodyNode.Create;
Material123 := TMaterialNode.Create;
IS124 := TISNode.Create;
connect125 := TconnectNode.Create;
connect125.NodeField := 'diffuseColor';
connect125.ProtoField := 'diffuseColor';
{ .AddConnect }
IS124.Connect := connect125;
connect126 := TconnectNode.Create;
connect126.NodeField := 'emissiveColor';
connect126.ProtoField := 'emissiveColor';
{ .AddConnect }
IS124.Connect := connect126;
connect127 := TconnectNode.Create;
connect127.NodeField := 'specularColor';
connect127.ProtoField := 'specularColor';
{ .AddConnect }
IS124.Connect := connect127;
connect128 := TconnectNode.Create;
connect128.NodeField := 'transparency';
connect128.ProtoField := 'transparency';
{ .AddConnect }
IS124.Connect := connect128;
connect129 := TconnectNode.Create;
connect129.NodeField := 'shininess';
connect129.ProtoField := 'shininess';
{ .AddConnect }
IS124.Connect := connect129;
connect130 := TconnectNode.Create;
connect130.NodeField := 'ambientIntensity';
connect130.ProtoField := 'ambientIntensity';
{ .AddConnect }
IS124.Connect := connect130;
{ .SetIS }
Material123.IS := IS124;
{ .AddChildren }
ProtoBody122.AddChildren([Material123]);
{ Only first node (the node type for the prototype) is renderable, others are along for the ride }
Script131 := TScriptNode.Create;
field132 := TfieldNode.Create;
field132.NameField := 'enabled';
field132.AccessType := 'inputOutput';
field132.Type := 'SFBool';
{ .AddField }
Script131.Field := field132;
field133 := TfieldNode.Create;
field133.NameField := 'diffuseColor';
field133.AccessType := 'inputOutput';
field133.Type := 'SFColor';
{ .AddField }
Script131.Field := field133;
field134 := TfieldNode.Create;
field134.NameField := 'newColor';
field134.AccessType := 'outputOnly';
field134.Type := 'SFColor';
{ .AddField }
Script131.Field := field134;
field135 := TfieldNode.Create;
field135.NameField := 'clockTrigger';
field135.AccessType := 'inputOnly';
field135.Type := 'SFTime';
{ .AddField }
Script131.Field := field135;
IS136 := TISNode.Create;
connect137 := TconnectNode.Create;
connect137.NodeField := 'enabled';
connect137.ProtoField := 'enabled';
{ .AddConnect }
IS136.Connect := connect137;
connect138 := TconnectNode.Create;
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
{ .AddChildren }
ProtoBody122.AddChildren([Script131]);
{ .SetProtoBody }
ProtoDeclare113.ProtoBody := ProtoBody122;
{ .AddChildren }
Group32.AddChildren([ProtoDeclare113]);
{ Test success: declarative statement createDeclarativeShapeTests() }
Group139 := TGroupNode.Create;
Shape140 := TShapeNode.Create;
MetadataString141 := TMetadataStringNode.Create;
MetadataString141.NameField := 'findThisNameValue';
MetadataString141.SetValue(['test case']);
{ .SetValue }
Shape140.Value := MetadataString141;
Appearance142 := TAppearanceNode.Create;
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
ProtoInstance143 := TProtoInstanceNode.Create;
ProtoInstance143.NameField := 'MaterialModulator';
{ .SetMaterial }
Appearance142.Material := ProtoInstance143;
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
{ Test success: declarativeGroup.addChild() singleton pipeline method }
{ .AddChildren }
Group32.AddChildren([Group139]);
{ Test success: declarative statement addChild() }
{ Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance> }
{ Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> }
{ Test success: x3dModel.findElementByNameValue("ArtDeco01", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found }
Group145 := TGroupNode.Create;
{ testFieldObjects() results }
{ SFBool default=false, true=true, false=false, negate()=true }
{ MFBool default=, initial=true false true, negate()=false true false }
{ SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4 }
{ MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 }
{ ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= }
{ SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true }
{ regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotation.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value }
{ .AddChildren }
Group32.AddChildren([Group145]);
Sound146 := TSoundNode.Create;
Sound146.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip147 := TAudioClipNode.Create;
AudioClip147.Description := 'chimes';
AudioClip147.SetUrl(['chimes.wav','https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
{ .SetSource }
Sound146.Source := AudioClip147;
{ .AddChildren }
Group32.AddChildren([Sound146]);
Sound148 := TSoundNode.Create;
Sound148.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture149 := TMovieTextureNode.Create;
MovieTexture149.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture149.SetUrl(['mpgsys.mpg','https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "children" }
{ .SetSource }
Sound148.Source := MovieTexture149;
{ .AddChildren }
Group32.AddChildren([Sound148]);
{ Test success: Anchor.isNode()=true, siteAnchor.isNode()=true }
{ Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false }
{ Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false }
{ Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true }
{ Test success: CommentsBlock.isNode()=false, testComments.isNode()=false }
{ Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true }
Shape150 := TShapeNode.Create;
{ ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' }
{ ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' }
Appearance151 := TAppearanceNode.Create;
Material152 := TMaterialNode.Create;
Material152.Transparency := 1;
{ .SetMaterial }
Appearance151.Material := Material152;
{ .SetAppearance }
Shape150.Appearance := Appearance151;
Extrusion153 := TExtrusionNode.Create;
{ .SetGeometry }
Shape150.Geometry := Extrusion153;
{ .AddChildren }
Group32.AddChildren([Shape150]);
Group154 := TGroupNode.Create;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
ProtoDeclare155 := TProtoDeclareNode.Create;
ProtoDeclare155.NameField := 'NewWorldInfo';
ProtoInterface156 := TProtoInterfaceNode.Create;
field157 := TfieldNode.Create;
field157.NameField := 'description';
field157.AccessType := 'initializeOnly';
field157.Type := 'SFString';
{ .AddField }
ProtoInterface156.Field := field157;
{ .SetProtoInterface }
ProtoDeclare155.ProtoInterface := ProtoInterface156;
ProtoBody158 := TProtoBodyNode.Create;
WorldInfo159 := TWorldInfoNode.Create;
{ .AddChildren }
ProtoBody158.AddChildren([WorldInfo159]);
{ .SetProtoBody }
ProtoDeclare155.ProtoBody := ProtoBody158;
{ .AddChildren }
Group154.AddChildren([ProtoDeclare155]);
ProtoInstance160 := TProtoInstanceNode.Create;
ProtoInstance160.NameField := 'NewWorldInfo';
fieldValue161 := TfieldValueNode.Create;
fieldValue161.NameField := 'description';
fieldValue161.Value := 'testing 1 2 3';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue161;
{ .AddChildren }
Group154.AddChildren([ProtoInstance160]);
Group162 := TGroupNode.Create;
{ intentionally empty }
{ .AddChildren }
Group154.AddChildren([Group162]);
ProtoInstance163 := TProtoInstanceNode.Create;
ProtoInstance163.NameField := 'NewWorldInfo';
{ .AddChildren }
Group154.AddChildren([ProtoInstance163]);
Transform164 := TTransformNode.Create;
{ intentionally empty }
{ .AddChildren }
Group154.AddChildren([Transform164]);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
{ .AddChildren }
Group32.AddChildren([Group154]);
ProtoDeclare165 := TProtoDeclareNode.Create;
ProtoDeclare165.NameField := 'ShaderProto';
ProtoBody166 := TProtoBodyNode.Create;
ProgramShader167 := TProgramShaderNode.Create;
{ .AddChildren }
ProtoBody166.AddChildren([ProgramShader167]);
{ .SetProtoBody }
ProtoDeclare165.ProtoBody := ProtoBody166;
{ .AddChildren }
Group32.AddChildren([ProtoDeclare165]);
Shape168 := TShapeNode.Create;
Appearance169 := TAppearanceNode.Create;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader170 := TProgramShaderNode.Create;
ShaderProgram171 := TShaderProgramNode.Create;
ShaderProgram171.Type := 'VERTEX';
{ .AddPrograms }
ProgramShader170.Programs := ShaderProgram171;
{ .AddShaders }
Appearance169.Shaders := ProgramShader170;
ProtoInstance172 := TProtoInstanceNode.Create;
ProtoInstance172.NameField := 'ShaderProto';
{ .AddShaders }
Appearance169.Shaders := ProtoInstance172;
ComposedShader173 := TComposedShaderNode.Create;
ShaderPart174 := TShaderPartNode.Create;
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
{ .AddChildren }
Transform175.AddChildren([EspduTransform180]);
ReceiverPdu181 := TReceiverPduNode.Create;
{ .AddChildren }
Transform175.AddChildren([ReceiverPdu181]);
SignalPdu182 := TSignalPduNode.Create;
{ .AddChildren }
Transform175.AddChildren([SignalPdu182]);
TransmitterPdu183 := TTransmitterPduNode.Create;
{ .AddChildren }
Transform175.AddChildren([TransmitterPdu183]);
DISEntityManager184 := TDISEntityManagerNode.Create;
DISEntityTypeMapping185 := TDISEntityTypeMappingNode.Create;
{ .AddChildren }
DISEntityManager184.AddChildren([DISEntityTypeMapping185]);
{ .AddChildren }
Transform175.AddChildren([DISEntityManager184]);
{ .AddChildren }
Group32.AddChildren([Transform175]);
EspduTransform186 := TEspduTransformNode.Create;
WorldInfo187 := TWorldInfoNode.Create;
{ .AddChildren }
EspduTransform186.AddChildren([WorldInfo187]);
{ .AddChildren }
Group32.AddChildren([EspduTransform186]);
ReceiverPdu188 := TReceiverPduNode.Create;
{ .AddChildren }
Group32.AddChildren([ReceiverPdu188]);
SignalPdu189 := TSignalPduNode.Create;
{ .AddChildren }
Group32.AddChildren([SignalPdu189]);
TransmitterPdu190 := TTransmitterPduNode.Create;
{ .AddChildren }
Group32.AddChildren([TransmitterPdu190]);
DISEntityManager191 := TDISEntityManagerNode.Create;
DISEntityTypeMapping192 := TDISEntityTypeMappingNode.Create;
{ .AddChildren }
DISEntityManager191.AddChildren([DISEntityTypeMapping192]);
{ .AddChildren }
Group32.AddChildren([DISEntityManager191]);
LoadSensor193 := TLoadSensorNode.Create;
{ Contained nodes typically must be USE references for nodes previously DEFined in the scene }
{ The following nodes are test cases for all X3DUrlObject nodes }
Anchor194 := TAnchorNode.Create;
Anchor194 := Anchor44;
{ .AddChildren }
LoadSensor193.AddChildren([Anchor194]);
Inline195 := TInlineNode.Create;
Inline195 := Inline110;
{ .AddChildren }
LoadSensor193.AddChildren([Inline195]);
DISEntityTypeMapping196 := TDISEntityTypeMappingNode.Create;
{ .AddChildren }
LoadSensor193.AddChildren([DISEntityTypeMapping196]);
GeoMetadata197 := TGeoMetadataNode.Create;
{ .AddChildren }
LoadSensor193.AddChildren([GeoMetadata197]);
AudioClip198 := TAudioClipNode.Create;
{ .AddChildren }
LoadSensor193.AddChildren([AudioClip198]);
ImageCubeMapTexture199 := TImageCubeMapTextureNode.Create;
{ .AddChildren }
LoadSensor193.AddChildren([ImageCubeMapTexture199]);
ImageTexture3D200 := TImageTexture3DNode.Create;
{ .AddChildren }
LoadSensor193.AddChildren([ImageTexture3D200]);
ImageTexture201 := TImageTextureNode.Create;
{ .AddChildren }
LoadSensor193.AddChildren([ImageTexture201]);
MovieTexture202 := TMovieTextureNode.Create;
{ .AddChildren }
LoadSensor193.AddChildren([MovieTexture202]);
Script203 := TScriptNode.Create;

Script203.SetSourceCode('''ecmascript:\n"+
"/* dummy test source code */''');
{ .AddChildren }
LoadSensor193.AddChildren([Script203]);
PackagedShader204 := TPackagedShaderNode.Create;
{ .AddChildren }
LoadSensor193.AddChildren([PackagedShader204]);
ShaderPart205 := TShaderPartNode.Create;
ShaderPart205.Type := 'VERTEX';
{ .AddChildren }
LoadSensor193.AddChildren([ShaderPart205]);
ShaderProgram206 := TShaderProgramNode.Create;
ShaderProgram206.Type := 'VERTEX';
{ .AddChildren }
LoadSensor193.AddChildren([ShaderProgram206]);
{ .AddChildren }
Group32.AddChildren([LoadSensor193]);
OrthoViewpoint207 := TOrthoViewpointNode.Create;
OrthoViewpoint207.SetFieldOfView([1,3,2,4]);
{ .AddChildren }
Group32.AddChildren([OrthoViewpoint207]);
{ .AddGroup }
X3D0.AddChildren([Group32]);
Result := X3D0;
end;
