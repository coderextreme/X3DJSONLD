unit SmokeTestProgramOutputCanonical;

interface

uses X3DNodes;

function CreateSmokeTestProgramOutputCanonical: TX3DRootNode;

implementation

uses CastleVectors;

function CreateSmokeTestProgramOutputCanonical: TX3DRootNode;
var
X3D0: TX3DRootNode;
unit5: TunitNode;
unit6: TunitNode;
Group26: TGroupNode;
ViewpointGroup27: TViewpointGroupNode;
Viewpoint28: TViewpointNode;
Viewpoint29: TViewpointNode;
NavigationInfo30: TNavigationInfoNode;
WorldInfo31: TWorldInfoNode;
WorldInfo32: TWorldInfoNode;
WorldInfo33: TWorldInfoNode;
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
Material55: TMaterialNode;
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
X3DField71: TX3DField;
X3DField72: TX3DField;
ColorInterpolator73: TColorInterpolatorNode;
TimeSensor74: TTimeSensorNode;
X3DPrototype78: TX3DPrototype;
X3DInterfaceDeclaration79: TX3DInterfaceDeclaration;
X3DField80: TX3DField;
X3DField81: TX3DField;
X3DPrototype82: TX3DPrototype;
Material83: TMaterialNode;
TouchSensor84: TTouchSensorNode;
IS85: TIS;
connect86: Tconnect;
connect87: Tconnect;
X3DExternalPrototype88: TX3DExternalPrototype;
X3DField89: TX3DField;
Shape90: TShapeNode;
Appearance91: TAppearanceNode;
X3DPrototype92: TX3DPrototypeNode;
SFString93: TSFString;
Sphere94: TSphereNode;
Shape95: TShapeNode;
Appearance96: TAppearanceNode;
X3DPrototype97: TX3DPrototypeNode;
SFString98: TSFString;
Cone99: TConeNode;
Shape100: TShapeNode;
Appearance101: TAppearanceNode;
X3DPrototype102: TX3DPrototypeNode;
Cylinder103: TCylinderNode;
Inline104: TInlineNode;
IMPORT105: TIMPORTNode;
EXPORT106: TEXPORTNode;
X3DPrototype107: TX3DPrototype;
X3DInterfaceDeclaration108: TX3DInterfaceDeclaration;
X3DField109: TX3DField;
X3DField110: TX3DField;
X3DField111: TX3DField;
X3DField112: TX3DField;
X3DField113: TX3DField;
X3DField114: TX3DField;
X3DField115: TX3DField;
X3DPrototype116: TX3DPrototype;
Material117: TMaterialNode;
IS118: TIS;
connect119: Tconnect;
connect120: Tconnect;
connect121: Tconnect;
connect122: Tconnect;
connect123: Tconnect;
connect124: Tconnect;
Script125: TScriptNode;
X3DField126: TX3DField;
X3DField127: TX3DField;
X3DField128: TX3DField;
X3DField129: TX3DField;
IS130: TIS;
connect131: Tconnect;
connect132: Tconnect;
Group133: TGroupNode;
Shape134: TShapeNode;
MetadataString135: TMetadataStringNode;
Appearance136: TAppearanceNode;
X3DPrototype137: TX3DPrototypeNode;
Cone138: TConeNode;
Group139: TGroupNode;
Sound140: TSoundNode;
AudioClip141: TAudioClipNode;
Sound142: TSoundNode;
MovieTexture143: TMovieTextureNode;
Shape144: TShapeNode;
Appearance145: TAppearanceNode;
Material146: TMaterialNode;
Extrusion147: TExtrusionNode;
Group148: TGroupNode;
X3DPrototype149: TX3DPrototype;
X3DInterfaceDeclaration150: TX3DInterfaceDeclaration;
X3DField151: TX3DField;
X3DPrototype152: TX3DPrototype;
WorldInfo153: TWorldInfoNode;
X3DPrototype154: TX3DPrototypeNode;
SFString155: TSFString;
Group156: TGroupNode;
X3DPrototype157: TX3DPrototypeNode;
Transform158: TTransformNode;
X3DPrototype159: TX3DPrototype;
X3DPrototype160: TX3DPrototype;
ProgramShader161: TProgramShaderNode;
Shape162: TShapeNode;
Appearance163: TAppearanceNode;
ProgramShader164: TProgramShaderNode;
ShaderProgram165: TShaderProgramNode;
X3DPrototype166: TX3DPrototypeNode;
ComposedShader167: TComposedShaderNode;
ShaderPart168: TShaderPartNode;
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
unit5 := TunitNode.Create;
unit5.NameField := 'AngleUnitConversion';
unit5.Category := 'angle';
unit5.ConversionFactor := 1;
{ .AddUnit }
head1.Unit := unit5;
unit6 := TunitNode.Create;
unit6.NameField := 'LengthUnitConversion';
unit6.Category := 'length';
unit6.ConversionFactor := 1;
{ .AddUnit }
head1.Unit := unit6;
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
Viewpoint28.Description := 'Hello X3DJSAIL';
{ .AddChildren }
ViewpointGroup27.AddChildren([Viewpoint28]);
Viewpoint29 := TViewpointNode.Create;
Viewpoint29.Description := 'top-down view from above';
Viewpoint29.Orientation := Vector4(1,0,0,-1.570796);
Viewpoint29.Position := Vector3(0,100,0);
{ .AddChildren }
ViewpointGroup27.AddChildren([Viewpoint29]);
{ .AddChildren }
Group26.AddChildren([ViewpointGroup27]);
NavigationInfo30 := TNavigationInfoNode.Create;
NavigationInfo30.SetType(['EXAMINE','FLY','ANY']);
{ .AddChildren }
Group26.AddChildren([NavigationInfo30]);
WorldInfo31 := TWorldInfoNode.Create;
WorldInfo31.Title := 'HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)';
{ .AddChildren }
Group26.AddChildren([WorldInfo31]);
WorldInfo32 := WorldInfo31;
{ .AddChildren }
Group26.AddChildren([WorldInfo32]);
WorldInfo33 := WorldInfo31;
{ .AddChildren }
Group26.AddChildren([WorldInfo33]);
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.NameField := 'test';
MetadataString34.SetValue(['Top-level root Metadata node beneath Scene needs to be one of ''-children'' in JSON encoding']);
{ .SetMetadata }
Group26.Metadata := MetadataString34;
LayerSet35 := TLayerSetNode.Create;
{ .AddChildren }
Group26.AddChildren([LayerSet35]);
Transform36 := TTransformNode.Create;
Transform36.Translation := Vector3(0,1.5,0);
Anchor37 := TAnchorNode.Create;
Anchor37.Description := 'select for X3D Java SAI Library (X3DJSAIL) description';
Anchor37.SetUrl(['../X3DJSAIL.html','https://www.web3d.org/specifications/java/X3DJSAIL.html']);
Shape38 := TShapeNode.Create;
Appearance39 := TAppearanceNode.Create;
Material40 := TMaterialNode.Create;
Material40.DiffuseColor := Vector3(0,1,1);
Material40.EmissiveColor := Vector3(0.8,0,0);
Material40.Transparency := 0.1;
{ .SetMaterial }
Appearance39.Material := Material40;
ImageTexture41 := TImageTextureNode.Create;
ImageTexture41.SetUrl(['images/X3dJavaSceneAccessInterfaceSaiLibrary.png','https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png']);
{ .SetTexture }
Appearance39.Texture := ImageTexture41;
{ .SetAppearance }
Shape38.Appearance := Appearance39;
Box42 := TBoxNode.Create;
{ .SetGeometry }
Shape38.Geometry := Box42;
{ .AddChildren }
Anchor37.AddChildren([Shape38]);
{ .AddChildren }
Transform36.AddChildren([Anchor37]);
{ .AddChildren }
Group26.AddChildren([Transform36]);
Shape43 := TShapeNode.Create;
Appearance44 := TAppearanceNode.Create;
Material45 := TMaterialNode.Create;
Material45.EmissiveColor := Vector3(0.6,0.19607843,0.8);
{ .SetMaterial }
Appearance44.Material := Material45;
{ .SetAppearance }
Shape43.Appearance := Appearance44;
IndexedLineSet46 := TIndexedLineSetNode.Create;
IndexedLineSet46.SetCoordIndex([0,1,2,3,4,0]);
{ Coordinate 3-tuple point count: 6 }
Coordinate47 := TCoordinateNode.Create;
Coordinate47.SetPoint([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ .SetCoord }
IndexedLineSet46.Coord := Coordinate47;
{ .SetGeometry }
Shape43.Geometry := IndexedLineSet46;
{ .AddChildren }
Group26.AddChildren([Shape43]);
PositionInterpolator48 := TPositionInterpolatorNode.Create;
PositionInterpolator48.SetKey([0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator48.SetKeyValue([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ .AddChildren }
Group26.AddChildren([PositionInterpolator48]);
TimeSensor49 := TTimeSensorNode.Create;
TimeSensor49.CycleInterval := 8;
TimeSensor49.Loop := True;
{ .AddChildren }
Group26.AddChildren([TimeSensor49]);
Group26.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator48.EventSet_fraction);
{ .AddX3DRoute }
Group26.AddRoute(PositionInterpolator48.EventValue_changed, Transform36.FdTranslation);
{ .AddX3DRoute }
Transform52 := TTransformNode.Create;
Transform52.Translation := Vector3(0,-1.5,0);
Shape53 := TShapeNode.Create;
Appearance54 := TAppearanceNode.Create;
Material55 := Material40;
{ .SetMaterial }
Appearance54.Material := Material55;
{ .SetAppearance }
Shape53.Appearance := Appearance54;
Text56 := TTextNode.Create;
Text56.SetText(['X3D Java','SAI Library','X3DJSAIL']);
{ Comment example A, plain quotation marks: He said, "Immel did it!" }
{ Comment example B, XML character entities: He said, &quot;Immel did it!&quot; }
MetadataSet57 := TMetadataSetNode.Create;
MetadataSet57.NameField := 'EscapedQuotationMarksMetadataSet';
MetadataString58 := TMetadataStringNode.Create;
MetadataString58.NameField := 'quotesTestC';
MetadataString58.SetValue(['MFString example C, backslash-escaped quotes: He said, "Immel did it!"']);
{ .FdValue.Add }
MetadataSet57.FdValue.Add(MetadataString58);
MetadataString59 := TMetadataStringNode.Create;
MetadataString59.NameField := 'extraChildTest';
MetadataString59.SetValue(['checks MetadataSetObject addValue() method']);
{ .FdValue.Add }
MetadataSet57.FdValue.Add(MetadataString59);
{ .SetMetadata }
Text56.Metadata := MetadataSet57;
FontStyle60 := TFontStyleNode.Create;
FontStyle60.Justify := fjMiddle;
FontStyle60.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text56.FontStyle := FontStyle60;
{ .SetGeometry }
Shape53.Geometry := Text56;
{ .AddChild }
Transform52.AddChildren([Shape53]);
Collision61 := TCollisionNode.Create;
{ test containerField='proxy' }
Shape62 := TShapeNode.Create;
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text63 := TTextNode.Create;
Text63.SetText(['One, Two, Text','He said, "Immel did it!" \"\"']);
{ .SetGeometry }
Shape62.Geometry := Text63;
{ .SetProxy }
Collision61.Proxy := Shape62;
{ .AddChildren }
Transform52.AddChildren([Collision61]);
{ It's a beautiful world }
{ ... for you! }
{ https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) }
{ .AddChildren }
Group26.AddChildren([Transform52]);
{ repeatedly spin 180 degrees as a readable special effect }
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.SetKey([0,0.5,1]);
OrientationInterpolator64.SetKeyValue([Vector4(0,1,0,4.712389),Vector4(0,1,0,0),Vector4(0,1,0,1.5707964)]);
{ .AddChildren }
Group26.AddChildren([OrientationInterpolator64]);
TimeSensor65 := TTimeSensorNode.Create;
TimeSensor65.CycleInterval := 5;
TimeSensor65.Loop := True;
{ .AddChildren }
Group26.AddChildren([TimeSensor65]);
Group26.AddRoute(TimeSensor65.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ .AddX3DRoute }
Group26.AddRoute(OrientationInterpolator64.EventValue_changed, Transform52.FdRotation);
{ .AddX3DRoute }
Group68 := TGroupNode.Create;
Background69 := TBackgroundNode.Create;
{ .AddChildren }
Group68.AddChildren([Background69]);
Script70 := TScriptNode.Create;
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'colorInput';
X3DField71.AccessType := 'inputOnly';
X3DField71.Type := 'SFColor';
{ .SetX3DField }
Script70.X3DField := X3DField71;
X3DField72 := TX3DField.Create;
X3DField72.NameField := 'colorsOutput';
X3DField72.AccessType := 'outputOnly';
X3DField72.Type := 'MFColor';
{ .AddX3DField }
Script70.X3DField := X3DField72;

Script70.SetSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}''');
{ .AddChildren }
Group68.AddChildren([Script70]);
ColorInterpolator73 := TColorInterpolatorNode.Create;
ColorInterpolator73.SetKey([0,0.5,1]);
ColorInterpolator73.SetKeyValue([Vector3(0.9411765,1,1),Vector3(0.29411766,0,0.50980395),Vector3(0.9411765,1,1)]);
{ AZURE to INDIGO and back again }
{ .AddChildren }
Group68.AddChildren([ColorInterpolator73]);
TimeSensor74 := TTimeSensorNode.Create;
TimeSensor74.CycleInterval := 60;
TimeSensor74.Loop := True;
{ .AddChildren }
Group68.AddChildren([TimeSensor74]);
Group68.AddRoute(Script70.FdColorsoutput, Background69.FdSkycolor);
{ .AddX3DRoute }
Group68.AddRoute(ColorInterpolator73.EventValue_changed, Script70.FdColorinput);
{ .AddX3DRoute }
Group68.AddRoute(TimeSensor74.EventFraction_changed, ColorInterpolator73.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group26.AddChildren([Group68]);
X3DPrototype78 := TX3DPrototype.Create;
X3DPrototype78.NameField := 'ArtDeco01Material';
X3DPrototype78.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
X3DInterfaceDeclaration79 := TX3DInterfaceDeclaration.Create(nil);
X3DField80 := TX3DField.Create;
X3DField80.NameField := 'description';
X3DField80.AccessType := 'inputOutput';
X3DField80.Appinfo := 'tooltip for descriptionField';
X3DField80.Type := 'SFString';
X3DField80.Value := 'ArtDeco01Material prototype is a Material node';
{ .SetX3DField }
X3DInterfaceDeclaration79.X3DField := X3DField80;
X3DField81 := TX3DField.Create;
X3DField81.NameField := 'enabled';
X3DField81.AccessType := 'inputOutput';
X3DField81.Type := 'SFBool';
X3DField81.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration79.X3DField := X3DField81;
{ .SetX3DInterfaceDeclaration }
X3DPrototype78.X3DInterfaceDeclaration := X3DInterfaceDeclaration79;
X3DPrototype82 := TX3DPrototype.Create;
{ Initial node of ProtoBody determines prototype node type }
Material83 := TMaterialNode.Create;
Material83.AmbientIntensity := 0.25;
Material83.DiffuseColor := Vector3(0.282435,0.085159,0.134462);
Material83.Shininess := 0.127273;
Material83.SpecularColor := Vector3(0.276305,0.11431,0.139857);
{ .AddMaterial }
X3DPrototype82.Material := Material83;
{ [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
TouchSensor84 := TTouchSensorNode.Create;
TouchSensor84.Description := 'within ProtoBody';
IS85 := TIS.Create;
connect86 := Tconnect.Create;
connect86.NodeField := 'description';
connect86.ProtoField := 'description';
{ .AddConnect }
IS85.Connect := connect86;
connect87 := Tconnect.Create;
connect87.NodeField := 'enabled';
connect87.ProtoField := 'enabled';
{ .AddConnect }
IS85.Connect := connect87;
{ .SetIS }
TouchSensor84.IS := IS85;
{ .AddTouchSensor }
X3DPrototype82.TouchSensor := TouchSensor84;
{ .AddX3DPrototype }
X3DPrototype78.X3DPrototype := X3DPrototype82;
{ .AddX3DPrototype }
Group26.X3DPrototype := X3DPrototype78;
X3DExternalPrototype88 := TX3DExternalPrototype.Create;
X3DExternalPrototype88.NameField := 'ArtDeco02Material';
X3DExternalPrototype88.Appinfo := 'this is a different Material node';
X3DExternalPrototype88.Url := '\"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material\"';
{ [HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
X3DField89 := TX3DField.Create;
X3DField89.NameField := 'description';
X3DField89.AccessType := 'inputOutput';
X3DField89.Appinfo := 'tooltip for descriptionField';
X3DField89.Type := 'SFString';
{ .AddX3DField }
X3DExternalPrototype88.X3DField := X3DField89;
{ .AddX3DExternalPrototype }
Group26.X3DExternalPrototype := X3DExternalPrototype88;
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape90 := TShapeNode.Create;
Appearance91 := TAppearanceNode.Create;
{ ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java }
X3DPrototype92 := TX3DPrototypeNode.Create;
X3DPrototype92.NameField := 'ArtDeco01Material';
{ [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
SFString93 := TSFString.Create(ArtDeco01Material2, false, 'description', 'ArtDeco01Material can substitute for a Material node');
SFString93.NameField := 'description';
SFString93.Value := 'ArtDeco01Material can substitute for a Material node';
{ .AddSFString }
X3DPrototype92.SFString := SFString93;
{ .SetMaterial }
Appearance91.Material := X3DPrototype92;
{ .SetAppearance }
Shape90.Appearance := Appearance91;
Sphere94 := TSphereNode.Create;
Sphere94.Radius := 0.001;
{ .SetGeometry }
Shape90.Geometry := Sphere94;
{ .AddChildren }
Group26.AddChildren([Shape90]);
Shape95 := TShapeNode.Create;
Appearance96 := TAppearanceNode.Create;
{ ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java }
X3DPrototype97 := TX3DPrototypeNode.Create;
X3DPrototype97.NameField := 'ArtDeco02Material';
{ [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
SFString98 := TSFString.Create(ArtDeco02Material2, false, 'description', 'ArtDeco02Material can substitute for another Material node');
SFString98.NameField := 'description';
SFString98.Value := 'ArtDeco02Material can substitute for another Material node';
{ .AddSFString }
X3DPrototype97.SFString := SFString98;
{ .SetMaterial }
Appearance96.Material := X3DPrototype97;
{ .SetAppearance }
Shape95.Appearance := Appearance96;
Cone99 := TConeNode.Create;
Cone99.BottomRadius := 0.001;
Cone99.Height := 0.001;
{ .SetGeometry }
Shape95.Geometry := Cone99;
{ .AddChildren }
Group26.AddChildren([Shape95]);
Shape100 := TShapeNode.Create;
Appearance101 := TAppearanceNode.Create;
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE. }
X3DPrototype102 := X3DPrototype97;
{ .SetMaterial }
Appearance101.Material := X3DPrototype102;
{ .SetAppearance }
Shape100.Appearance := Appearance101;
Cylinder103 := TCylinderNode.Create;
Cylinder103.Height := 0.001;
Cylinder103.Radius := 0.001;
{ .SetGeometry }
Shape100.Geometry := Cylinder103;
{ .AddChildren }
Group26.AddChildren([Shape100]);
Inline104 := TInlineNode.Create;
Inline104.SetUrl(['someOtherScene.x3d','https://www.web3d.org/specifications/java/examples/someOtherScene.x3d']);
{ .AddChildren }
Group26.AddChildren([Inline104]);
IMPORT105 := TIMPORTNode.Create;
IMPORT105.AS := 'WorldInfoDEF2';
IMPORT105.ImportedDEF := 'WorldInfoDEF';
IMPORT105.InlineDEF := 'inlineSceneDef';
{ .AddChildren }
Group26.AddChildren([IMPORT105]);
EXPORT106 := TEXPORTNode.Create;
EXPORT106.AS := 'WorldInfoDEF3';
EXPORT106.LocalDEF := 'WorldInfoDEF';
{ .AddChildren }
Group26.AddChildren([EXPORT106]);
X3DPrototype107 := TX3DPrototype.Create;
X3DPrototype107.NameField := 'MaterialModulator';
X3DPrototype107.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
X3DPrototype107.Documentation := 'http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
X3DInterfaceDeclaration108 := TX3DInterfaceDeclaration.Create(nil);
X3DField109 := TX3DField.Create;
X3DField109.NameField := 'enabled';
X3DField109.AccessType := 'inputOutput';
X3DField109.Type := 'SFBool';
X3DField109.Value := 'true';
{ .SetX3DField }
X3DInterfaceDeclaration108.X3DField := X3DField109;
X3DField110 := TX3DField.Create;
X3DField110.NameField := 'diffuseColor';
X3DField110.AccessType := 'inputOutput';
X3DField110.Type := 'SFColor';
X3DField110.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration108.X3DField := X3DField110;
X3DField111 := TX3DField.Create;
X3DField111.NameField := 'emissiveColor';
X3DField111.AccessType := 'inputOutput';
X3DField111.Type := 'SFColor';
X3DField111.Value := '0.05 0.05 0.5';
{ .AddX3DField }
X3DInterfaceDeclaration108.X3DField := X3DField111;
X3DField112 := TX3DField.Create;
X3DField112.NameField := 'specularColor';
X3DField112.AccessType := 'inputOutput';
X3DField112.Type := 'SFColor';
X3DField112.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration108.X3DField := X3DField112;
X3DField113 := TX3DField.Create;
X3DField113.NameField := 'transparency';
X3DField113.AccessType := 'inputOutput';
X3DField113.Type := 'SFFloat';
X3DField113.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration108.X3DField := X3DField113;
X3DField114 := TX3DField.Create;
X3DField114.NameField := 'shininess';
X3DField114.AccessType := 'inputOutput';
X3DField114.Type := 'SFFloat';
X3DField114.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration108.X3DField := X3DField114;
X3DField115 := TX3DField.Create;
X3DField115.NameField := 'ambientIntensity';
X3DField115.AccessType := 'inputOutput';
X3DField115.Type := 'SFFloat';
X3DField115.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration108.X3DField := X3DField115;
{ .SetX3DInterfaceDeclaration }
X3DPrototype107.X3DInterfaceDeclaration := X3DInterfaceDeclaration108;
X3DPrototype116 := TX3DPrototype.Create;
Material117 := TMaterialNode.Create;
IS118 := TIS.Create;
connect119 := Tconnect.Create;
connect119.NodeField := 'diffuseColor';
connect119.ProtoField := 'diffuseColor';
{ .AddConnect }
IS118.Connect := connect119;
connect120 := Tconnect.Create;
connect120.NodeField := 'emissiveColor';
connect120.ProtoField := 'emissiveColor';
{ .AddConnect }
IS118.Connect := connect120;
connect121 := Tconnect.Create;
connect121.NodeField := 'specularColor';
connect121.ProtoField := 'specularColor';
{ .AddConnect }
IS118.Connect := connect121;
connect122 := Tconnect.Create;
connect122.NodeField := 'transparency';
connect122.ProtoField := 'transparency';
{ .AddConnect }
IS118.Connect := connect122;
connect123 := Tconnect.Create;
connect123.NodeField := 'shininess';
connect123.ProtoField := 'shininess';
{ .AddConnect }
IS118.Connect := connect123;
connect124 := Tconnect.Create;
connect124.NodeField := 'ambientIntensity';
connect124.ProtoField := 'ambientIntensity';
{ .AddConnect }
IS118.Connect := connect124;
{ .SetIS }
Material117.IS := IS118;
{ .SetMaterial }
X3DPrototype116.Material := Material117;
{ Only first node (the node type) is renderable, others are along for the ride }
Script125 := TScriptNode.Create;
X3DField126 := TX3DField.Create;
X3DField126.NameField := 'enabled';
X3DField126.AccessType := 'inputOutput';
X3DField126.Type := 'SFBool';
{ .SetX3DField }
Script125.X3DField := X3DField126;
X3DField127 := TX3DField.Create;
X3DField127.NameField := 'diffuseColor';
X3DField127.AccessType := 'inputOutput';
X3DField127.Type := 'SFColor';
{ .AddX3DField }
Script125.X3DField := X3DField127;
X3DField128 := TX3DField.Create;
X3DField128.NameField := 'newColor';
X3DField128.AccessType := 'outputOnly';
X3DField128.Type := 'SFColor';
{ .AddX3DField }
Script125.X3DField := X3DField128;
X3DField129 := TX3DField.Create;
X3DField129.NameField := 'clockTrigger';
X3DField129.AccessType := 'inputOnly';
X3DField129.Type := 'SFTime';
{ .AddX3DField }
Script125.X3DField := X3DField129;
IS130 := TIS.Create;
connect131 := Tconnect.Create;
connect131.NodeField := 'enabled';
connect131.ProtoField := 'enabled';
{ .AddConnect }
IS130.Connect := connect131;
connect132 := Tconnect.Create;
connect132.NodeField := 'diffuseColor';
connect132.ProtoField := 'diffuseColor';
{ .AddConnect }
IS130.Connect := connect132;
{ .SetIS }
Script125.IS := IS130;

Script125.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype116.Script := Script125;
{ .AddX3DPrototype }
X3DPrototype107.X3DPrototype := X3DPrototype116;
{ .AddX3DPrototype }
Group26.X3DPrototype := X3DPrototype107;
{ Test success: declarative statement createDeclarativeShapeTests() }
Group133 := TGroupNode.Create;
Shape134 := TShapeNode.Create;
MetadataString135 := TMetadataStringNode.Create;
MetadataString135.NameField := 'findThisNameValue';
MetadataString135.SetValue(['test case']);
{ .AddMetadata }
Shape134.Metadata := MetadataString135;
Appearance136 := TAppearanceNode.Create;
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
X3DPrototype137 := TX3DPrototypeNode.Create;
X3DPrototype137.NameField := 'MaterialModulator';
{ .SetMaterial }
Appearance136.Material := X3DPrototype137;
{ .SetAppearance }
Shape134.Appearance := Appearance136;
Cone138 := TConeNode.Create;
Cone138.Bottom := False;
Cone138.BottomRadius := 0.05;
Cone138.Height := 0.1;
{ .SetGeometry }
Shape134.Geometry := Cone138;
{ .AddChildren }
Group133.AddChildren([Shape134]);
{ Test success: declarativeGroup.addChild() singleton pipeline method }
{ .AddChildren }
Group26.AddChildren([Group133]);
{ Test success: declarative statement addChild() }
{ Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> }
{ Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> }
{ Test success: x3dModel.findElementByNameValue("ArtDeco01Material", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found }
Group139 := TGroupNode.Create;
{ testFieldObjects() results }
{ SFBool default=true, true=true, false=false, negate()=true }
{ MFBool default=, initial=true false true, negate()=false true false }
{ SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 }
{ MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 }
{ ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= }
{ SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true }
{ regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotationObject.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value }
{ .AddChildren }
Group26.AddChildren([Group139]);
Sound140 := TSoundNode.Create;
Sound140.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip141 := TAudioClipNode.Create;
AudioClip141.Description := 'chimes';
AudioClip141.SetUrl(['chimes.wav','https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
{ .SetSource }
Sound140.Source := AudioClip141;
{ .AddChildren }
Group26.AddChildren([Sound140]);
Sound142 := TSoundNode.Create;
Sound142.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture143 := TMovieTextureNode.Create;
MovieTexture143.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture143.SetUrl(['mpgsys.mpg','https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "watchList" }
{ .SetSource }
Sound142.Source := MovieTexture143;
{ .AddChildren }
Group26.AddChildren([Sound142]);
{ Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true }
{ Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false }
{ Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false }
{ Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true }
{ Test success: CommentsBlock.isNode()=false, testComments.isNode()=false }
{ Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true }
Shape144 := TShapeNode.Create;
{ ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' }
{ ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' }
Appearance145 := TAppearanceNode.Create;
Material146 := TMaterialNode.Create;
Material146.Transparency := 1;
{ .SetMaterial }
Appearance145.Material := Material146;
{ .SetAppearance }
Shape144.Appearance := Appearance145;
Extrusion147 := TExtrusionNode.Create;
{ .SetGeometry }
Shape144.Geometry := Extrusion147;
{ .AddChildren }
Group26.AddChildren([Shape144]);
Group148 := TGroupNode.Create;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
X3DPrototype149 := TX3DPrototype.Create;
X3DPrototype149.NameField := 'NewWorldInfo';
X3DInterfaceDeclaration150 := TX3DInterfaceDeclaration.Create(nil);
X3DField151 := TX3DField.Create;
X3DField151.NameField := 'description';
X3DField151.AccessType := 'initializeOnly';
X3DField151.Type := 'SFString';
{ .SetX3DField }
X3DInterfaceDeclaration150.X3DField := X3DField151;
{ .SetX3DInterfaceDeclaration }
X3DPrototype149.X3DInterfaceDeclaration := X3DInterfaceDeclaration150;
X3DPrototype152 := TX3DPrototype.Create;
WorldInfo153 := TWorldInfoNode.Create;
{ .SetWorldInfo }
X3DPrototype152.WorldInfo := WorldInfo153;
{ .AddX3DPrototype }
X3DPrototype149.X3DPrototype := X3DPrototype152;
{ .AddX3DPrototype }
Group148.X3DPrototype := X3DPrototype149;
X3DPrototype154 := TX3DPrototypeNode.Create;
X3DPrototype154.NameField := 'NewWorldInfo';
SFString155 := TSFString.Create(NewWorldInfo4, false, 'description', 'testing 1 2 3');
SFString155.NameField := 'description';
SFString155.Value := 'testing 1 2 3';
{ .SetSFString }
X3DPrototype154.SFString := SFString155;
{ .AddX3DPrototype }
Group148.X3DPrototype := X3DPrototype154;
Group156 := TGroupNode.Create;
{ intentionally empty }
{ .AddChildren }
Group148.AddChildren([Group156]);
X3DPrototype157 := TX3DPrototypeNode.Create;
X3DPrototype157.NameField := 'NewWorldInfo';
{ .AddX3DPrototype }
Group148.X3DPrototype := X3DPrototype157;
Transform158 := TTransformNode.Create;
{ intentionally empty }
{ .AddChildren }
Group148.AddChildren([Transform158]);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
{ .AddChildren }
Group26.AddChildren([Group148]);
X3DPrototype159 := TX3DPrototype.Create;
X3DPrototype159.NameField := 'ShaderProto';
X3DPrototype160 := TX3DPrototype.Create;
ProgramShader161 := TProgramShaderNode.Create;
{ .SetProgramShader }
X3DPrototype160.ProgramShader := ProgramShader161;
{ .SetX3DPrototype }
X3DPrototype159.X3DPrototype := X3DPrototype160;
{ .AddX3DPrototype }
Group26.X3DPrototype := X3DPrototype159;
Shape162 := TShapeNode.Create;
Appearance163 := TAppearanceNode.Create;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader164 := TProgramShaderNode.Create;
ShaderProgram165 := TShaderProgramNode.Create;
ShaderProgram165.Type := 'VERTEX';
{ .AddPrograms }
ProgramShader164.Programs := ShaderProgram165;
{ .AddShaders }
Appearance163.Shaders := ProgramShader164;
X3DPrototype166 := TX3DPrototypeNode.Create;
X3DPrototype166.NameField := 'ShaderProto';
{ .AddX3DPrototype }
Appearance163.X3DPrototype := X3DPrototype166;
ComposedShader167 := TComposedShaderNode.Create;
ShaderPart168 := TShaderPartNode.Create;
ShaderPart168.Type := 'VERTEX';
{ .AddParts }
ComposedShader167.Parts := ShaderPart168;
{ .AddShaders }
Appearance163.Shaders := ComposedShader167;
{ .SetAppearance }
Shape162.Appearance := Appearance163;
{ .AddChildren }
Group26.AddChildren([Shape162]);
{ .AddGroup }
X3D0.AddChildren([Group26]);
Result := X3D0;
end;

begin
end.
