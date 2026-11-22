unit SmokeTestProgramOutputCanonical;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateSmokeTestProgramOutputCanonical: TX3DRootNode;

implementation

uses CastleVectors;

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
SFColor71: TSFColor;
MFColor72: TMFColor;
ColorInterpolator73: TColorInterpolatorNode;
TimeSensor74: TTimeSensorNode;
X3DPrototype78: TX3DPrototype;
X3DInterfaceDeclaration79: TX3DInterfaceDeclaration;
SFString80: TSFString;
SFBool81: TSFBool;
X3DPrototype82: TX3DPrototype;
Material83: TMaterialNode;
TouchSensor84: TTouchSensorNode;
IS85: TIS;
connect86: Tconnect;
connect87: Tconnect;
X3DExternalPrototype88: TX3DExternalPrototype;
SFString89: TSFString;
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
SFBool109: TSFBool;
SFColor110: TSFColor;
SFColor111: TSFColor;
SFColor112: TSFColor;
SFFloat113: TSFFloat;
SFFloat114: TSFFloat;
SFFloat115: TSFFloat;
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
SFBool126: TSFBool;
SFColor127: TSFColor;
SFColor128: TSFColor;
SFTime129: TSFTime;
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
SFString151: TSFString;
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
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['Layering'] := 1;
{ METHOD .Component }
unit5 := TunitNode.Create;
unit5.Category := 'angle';
unit5.ConversionFactor := 1;
{ METHOD .Unit }
head1.Unit := unit5;
unit6 := TunitNode.Create;
unit6.Category := 'length';
unit6.ConversionFactor := 1;
{ METHOD .Unit }
head1.Unit := unit6;
X3D0.Meta['title'] := 'HelloWorldProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/specifications/java/X3DJSAIL.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'HelloWorldProgramOutput.java';
{ METHOD .Meta }
X3D0.Meta['created'] := '6 September 2016';
{ METHOD .Meta }
X3D0.Meta['modified'] := '27 December 2018';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D Java Scene Access Interface Library (X3DJSAIL)';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Netbeans http://www.netbeans.org';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorldProgramOutput.txt';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorldProgramOutput.x3dv';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorldProgramOutput.wrl';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorldProgramOutput.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group26 := TGroupNode.Create;
ViewpointGroup27 := TViewpointGroupNode.Create;
ViewpointGroup27.Description := 'Available viewpoints';
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.Description := 'Hello X3DJSAIL';
{ METHOD .FdChildren.Add }
ViewpointGroup27.FdChildren.Add(Viewpoint28);
end;

procedure InitSmokeTestProgramOutputCanonicalPart1;
begin

Viewpoint29 := TViewpointNode.Create;
Viewpoint29.Description := 'top-down view from above';
Viewpoint29.Orientation := Vector4(1,0,0,-1.570796);
Viewpoint29.Position := Vector3(0,100,0);
{ METHOD .FdChildren.Add }
ViewpointGroup27.FdChildren.Add(Viewpoint29);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(ViewpointGroup27);
NavigationInfo30 := TNavigationInfoNode.Create;
NavigationInfo30.SetType(['EXAMINE','FLY','ANY']);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(NavigationInfo30);
WorldInfo31 := TWorldInfoNode.Create;
WorldInfo31.Title := 'HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)';
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(WorldInfo31);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(WorldInfo31);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(WorldInfo31);
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.SetValue(['Top-level root Metadata node beneath Scene needs to be one of ''-children'' in JSON encoding']);
{ METHOD .Metadata }
Group26.Metadata := MetadataString34;
LayerSet35 := TLayerSetNode.Create;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(LayerSet35);
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
{ METHOD .SetMaterial }
Appearance39.Material := Material40;
ImageTexture41 := TImageTextureNode.Create;
ImageTexture41.SetUrl(['images/X3dJavaSceneAccessInterfaceSaiLibrary.png','https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png']);
{ METHOD .Texture }
Appearance39.Texture := ImageTexture41;
{ METHOD .Appearance }
Shape38.Appearance := Appearance39;
Box42 := TBoxNode.Create;
{ METHOD .Geometry }
Shape38.Geometry := Box42;
{ METHOD .FdChildren.Add }
Anchor37.FdChildren.Add(Shape38);
{ METHOD .FdChildren.Add }
Transform36.FdChildren.Add(Anchor37);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Transform36);
end;

procedure InitSmokeTestProgramOutputCanonicalPart2;
begin

Shape43 := TShapeNode.Create;
Appearance44 := TAppearanceNode.Create;
Material45 := TMaterialNode.Create;
Material45.EmissiveColor := Vector3(0.6,0.19607843,0.8);
{ METHOD .SetMaterial }
Appearance44.Material := Material45;
{ METHOD .Appearance }
Shape43.Appearance := Appearance44;
IndexedLineSet46 := TIndexedLineSetNode.Create;
IndexedLineSet46.SetCoordIndex([0,1,2,3,4,0]);
{ Coordinate 3-tuple point count: 6 }
Coordinate47 := TCoordinateNode.Create;
Coordinate47.SetPoint([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ METHOD .Coord }
IndexedLineSet46.Coord := Coordinate47;
{ METHOD .Geometry }
Shape43.Geometry := IndexedLineSet46;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape43);
PositionInterpolator48 := TPositionInterpolatorNode.Create;
PositionInterpolator48.SetKey([0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator48.SetKeyValue([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(PositionInterpolator48);
TimeSensor49 := TTimeSensorNode.Create;
TimeSensor49.CycleInterval := 8;
TimeSensor49.Loop := True;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(TimeSensor49);
{ Original "OrbitClock.EventFraction_changed TO BoxPathAnimator.EventSet_fraction }
{ Sample OrbitClock.EventFraction_changed TO BoxPathAnimator.EventSet_fraction}
Group26.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator48.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "BoxPathAnimator.EventValue_changed TO LogoGeometryTransform.EventSet_translation }
{ Sample BoxPathAnimator.EventValue_changed TO LogoGeometryTransform.EventSet_translation}
Group26.AddRoute(PositionInterpolator48.EventValue_changed, Transform36.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
Transform52 := TTransformNode.Create;
Transform52.Translation := Vector3(0,-1.5,0);
Shape53 := TShapeNode.Create;
Appearance54 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance54.Material := Material40;
{ METHOD .Appearance }
Shape53.Appearance := Appearance54;
Text56 := TTextNode.Create;
Text56.SetText(['X3D Java','SAI Library','X3DJSAIL']);
{ Comment example A, plain quotation marks: He said, "Immel did it!" }
{ Comment example B, XML character entities: He said, &quot;Immel did it!&quot; }
MetadataSet57 := TMetadataSetNode.Create;
MetadataString58 := TMetadataStringNode.Create;
MetadataString58.SetValue(['MFString example C, backslash-escaped quotes: He said, "Immel did it!"']);
{ METHOD .FdValue.Add }
MetadataSet57.FdValue.Add(MetadataString58);
MetadataString59 := TMetadataStringNode.Create;
MetadataString59.SetValue(['checks MetadataSetObject addValue() method']);
{ METHOD .FdValue.Add }
MetadataSet57.FdValue.Add(MetadataString59);
{ METHOD .Metadata }
Text56.Metadata := MetadataSet57;
FontStyle60 := TFontStyleNode.Create;
end;

procedure InitSmokeTestProgramOutputCanonicalPart3;
begin

FontStyle60.Justify := fjMIDDLE;
FontStyle60.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
Text56.FontStyle := FontStyle60;
{ METHOD .Geometry }
Shape53.Geometry := Text56;
{ METHOD .FdChildren.Add }
Transform52.FdChildren.Add(Shape53);
Collision61 := TCollisionNode.Create;
{ test containerField='proxy' }
Shape62 := TShapeNode.Create;
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text63 := TTextNode.Create;
Text63.SetText(['One, Two, Text','He said, "Immel did it!" \"\"']);
{ METHOD .Geometry }
Shape62.Geometry := Text63;
{ METHOD .SetProxy }
Collision61.Proxy := Shape62;
{ METHOD .FdChildren.Add }
Transform52.FdChildren.Add(Collision61);
{ It's a beautiful world }
{ ... for you! }
{ https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) }
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Transform52);
{ repeatedly spin 180 degrees as a readable special effect }
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.SetKey([0,0.5,1]);
OrientationInterpolator64.SetKeyValue([Vector4(0,1,0,4.712389),Vector4(0,1,0,0),Vector4(0,1,0,1.5707964)]);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(OrientationInterpolator64);
TimeSensor65 := TTimeSensorNode.Create;
TimeSensor65.CycleInterval := 5;
TimeSensor65.Loop := True;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(TimeSensor65);
{ Original "SpinClock.EventFraction_changed TO SpinInterpolator.EventSet_fraction }
{ Sample SpinClock.EventFraction_changed TO SpinInterpolator.EventSet_fraction}
Group26.AddRoute(TimeSensor65.EventFraction_changed, OrientationInterpolator64.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "SpinInterpolator.EventValue_changed TO TextTransform.rotation }
{ Sample SpinInterpolator.EventValue_changed TO TextTransform.rotation}
Group26.AddRoute(OrientationInterpolator64.EventValue_changed, Transform52.set_rotation);
{ METHOD .AddX3DROUTE }
Group68 := TGroupNode.Create;
Background69 := TBackgroundNode.Create;
{ METHOD .FdChildren.Add }
Group68.FdChildren.Add(Background69);
Script70 := TScriptNode.Create;
SFColor71 := TSFColor.CreateUndefined(Script70, false, 'colorInput');
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFColor71);
MFColor72 := TMFColor.CreateUndefined(Script70, false, 'colorsOutput');
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(MFColor72);

Script70.SetSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}''');
{ METHOD .FdChildren.Add }
Group68.FdChildren.Add(Script70);
ColorInterpolator73 := TColorInterpolatorNode.Create;
ColorInterpolator73.SetKey([0,0.5,1]);
ColorInterpolator73.SetKeyValue([Vector3(0.9411765,1,1),Vector3(0.29411766,0,0.50980395),Vector3(0.9411765,1,1)]);
{ AZURE to INDIGO and back again }
{ METHOD .FdChildren.Add }
Group68.FdChildren.Add(ColorInterpolator73);
TimeSensor74 := TTimeSensorNode.Create;
TimeSensor74.CycleInterval := 60;
TimeSensor74.Loop := True;
{ METHOD .FdChildren.Add }
Group68.FdChildren.Add(TimeSensor74);
{ Original "colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor }
{ Sample colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor}
Group68.AddRoute(colorTypeConversionScript.[object Object], Background69.set_skyColor);
{ METHOD .AddX3DROUTE }
{ Original "ColorAnimator.EventValue_changed TO colorTypeConversionScript.colorInput }
{ Sample ColorAnimator.EventValue_changed TO colorTypeConversionScript.colorInput}
Group68.AddRoute(ColorInterpolator73.EventValue_changed, SFColor71);
{ METHOD .AddX3DROUTE }
{ Original "ColorClock.EventFraction_changed TO ColorAnimator.EventSet_fraction }
{ Sample ColorClock.EventFraction_changed TO ColorAnimator.EventSet_fraction}
Group68.AddRoute(TimeSensor74.EventFraction_changed, ColorInterpolator73.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Group68);
X3DPrototype78 := TX3DPrototype.Create;
X3DPrototype78.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
X3DInterfaceDeclaration79 := TX3DInterfaceDeclaration.Create(nil);
SFString80 := TSFString.CreateUndefined(X3DInterfaceDeclaration79, false, 'description');
SFString80.Appinfo := 'tooltip for descriptionField';
SFString80.Value := 'ArtDeco01Material prototype is a Material node';
{ METHOD .AddSFString }
X3DInterfaceDeclaration79.AddSFString([SFString80]);
SFBool81 := TSFBool.CreateUndefined(X3DInterfaceDeclaration79, false, 'enabled');
SFBool81.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration79.AddSFBool([SFBool81]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype78.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration79]);
X3DPrototype82 := TX3DPrototype.Create;
{ Initial node of ProtoBody determines prototype node type }
Material83 := TMaterialNode.Create;
Material83.AmbientIntensity := 0.25;
Material83.DiffuseColor := Vector3(0.282435,0.085159,0.134462);
Material83.Shininess := 0.127273;
Material83.SpecularColor := Vector3(0.276305,0.11431,0.139857);
{ METHOD .AddMaterial }
X3DPrototype82.AddMaterial([Material83]);
{ [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
TouchSensor84 := TTouchSensorNode.Create;
TouchSensor84.Description := 'within ProtoBody';
IS85 := TIS.Create;
connect86 := Tconnect.Create;
connect86.NodeField := 'description';
connect86.ProtoField := 'description';
{ METHOD .Connect }
IS85.Connect := connect86;
connect87 := Tconnect.Create;
connect87.NodeField := 'enabled';
connect87.ProtoField := 'enabled';
{ METHOD .Connect }
IS85.Connect := connect87;
{ METHOD .IS }
TouchSensor84.IS := IS85;
{ METHOD .AddTouchSensor }
X3DPrototype82.AddTouchSensor([TouchSensor84]);
{ METHOD .AddX3DPrototype }
X3DPrototype78.AddX3DPrototype([X3DPrototype82]);
{ METHOD .AddX3DPrototype }
Group26.AddX3DPrototype([X3DPrototype78]);
X3DExternalPrototype88 := TX3DExternalPrototype.Create;
X3DExternalPrototype88.Appinfo := 'this is a different Material node';
X3DExternalPrototype88.Url := '\"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material\"';
{ [HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
SFString89 := TSFString.CreateUndefined(X3DExternalPrototype88, false, 'description');
SFString89.Appinfo := 'tooltip for descriptionField';
{ METHOD .AddSFString }
X3DExternalPrototype88.AddSFString([SFString89]);
{ METHOD .AddX3DExternalPrototype }
Group26.AddX3DExternalPrototype([X3DExternalPrototype88]);
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape90 := TShapeNode.Create;
Appearance91 := TAppearanceNode.Create;
{ ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java }
X3DPrototype92 := TX3DPrototypeNode.Create;
{ [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
SFString93 := TSFString.CreateUndefined(X3DPrototype92, false, 'description');
SFString93.Value := 'ArtDeco01Material can substitute for a Material node';
{ METHOD .AddSFString }
X3DPrototype92.AddSFString([SFString93]);
{ METHOD .SetMaterial }
Appearance91.Material := X3DPrototype92;
{ METHOD .Appearance }
Shape90.Appearance := Appearance91;
Sphere94 := TSphereNode.Create;
Sphere94.Radius := 0.001;
{ METHOD .Geometry }
Shape90.Geometry := Sphere94;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape90);
Shape95 := TShapeNode.Create;
Appearance96 := TAppearanceNode.Create;
{ ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java }
X3DPrototype97 := TX3DPrototypeNode.Create;
{ [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
SFString98 := TSFString.CreateUndefined(X3DPrototype97, false, 'description');
SFString98.Value := 'ArtDeco02Material can substitute for another Material node';
{ METHOD .AddSFString }
X3DPrototype97.AddSFString([SFString98]);
{ METHOD .SetMaterial }
Appearance96.Material := X3DPrototype97;
{ METHOD .Appearance }
Shape95.Appearance := Appearance96;
Cone99 := TConeNode.Create;
Cone99.BottomRadius := 0.001;
Cone99.Height := 0.001;
{ METHOD .Geometry }
Shape95.Geometry := Cone99;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape95);
Shape100 := TShapeNode.Create;
Appearance101 := TAppearanceNode.Create;
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE. }
{ METHOD .SetMaterial }
Appearance101.Material := X3DPrototype97;
{ METHOD .Appearance }
Shape100.Appearance := Appearance101;
Cylinder103 := TCylinderNode.Create;
Cylinder103.Height := 0.001;
Cylinder103.Radius := 0.001;
{ METHOD .Geometry }
Shape100.Geometry := Cylinder103;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape100);
Inline104 := TInlineNode.Create;
Inline104.SetUrl(['someOtherScene.x3d','https://www.web3d.org/specifications/java/examples/someOtherScene.x3d']);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Inline104);
IMPORT105 := TIMPORTNode.Create;
IMPORT105.AS := 'WorldInfoDEF2';
IMPORT105.ImportedDEF := 'WorldInfoDEF';
IMPORT105.InlineDEF := 'inlineSceneDef';
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(IMPORT105);
EXPORT106 := TEXPORTNode.Create;
EXPORT106.AS := 'WorldInfoDEF3';
EXPORT106.LocalDEF := 'WorldInfoDEF';
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(EXPORT106);
X3DPrototype107 := TX3DPrototype.Create;
X3DPrototype107.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
X3DPrototype107.Documentation := 'http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
X3DInterfaceDeclaration108 := TX3DInterfaceDeclaration.Create(nil);
SFBool109 := TSFBool.CreateUndefined(X3DInterfaceDeclaration108, false, 'enabled');
SFBool109.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration108.AddSFBool([SFBool109]);
SFColor110 := TSFColor.CreateUndefined(X3DInterfaceDeclaration108, false, 'diffuseColor');
SFColor110.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration108.AddSFColor([SFColor110]);
SFColor111 := TSFColor.CreateUndefined(X3DInterfaceDeclaration108, false, 'emissiveColor');
SFColor111.Value := '0.05 0.05 0.5';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration108.AddSFColor([SFColor111]);
SFColor112 := TSFColor.CreateUndefined(X3DInterfaceDeclaration108, false, 'specularColor');
SFColor112.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration108.AddSFColor([SFColor112]);
SFFloat113 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration108, false, 'transparency');
SFFloat113.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration108.AddSFFloat([SFFloat113]);
SFFloat114 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration108, false, 'shininess');
SFFloat114.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration108.AddSFFloat([SFFloat114]);
SFFloat115 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration108, false, 'ambientIntensity');
SFFloat115.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration108.AddSFFloat([SFFloat115]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype107.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration108]);
X3DPrototype116 := TX3DPrototype.Create;
Material117 := TMaterialNode.Create;
IS118 := TIS.Create;
connect119 := Tconnect.Create;
connect119.NodeField := 'diffuseColor';
connect119.ProtoField := 'diffuseColor';
{ METHOD .Connect }
IS118.Connect := connect119;
connect120 := Tconnect.Create;
connect120.NodeField := 'emissiveColor';
connect120.ProtoField := 'emissiveColor';
{ METHOD .Connect }
IS118.Connect := connect120;
connect121 := Tconnect.Create;
connect121.NodeField := 'specularColor';
connect121.ProtoField := 'specularColor';
{ METHOD .Connect }
IS118.Connect := connect121;
connect122 := Tconnect.Create;
connect122.NodeField := 'transparency';
connect122.ProtoField := 'transparency';
{ METHOD .Connect }
IS118.Connect := connect122;
connect123 := Tconnect.Create;
connect123.NodeField := 'shininess';
connect123.ProtoField := 'shininess';
{ METHOD .Connect }
IS118.Connect := connect123;
connect124 := Tconnect.Create;
connect124.NodeField := 'ambientIntensity';
connect124.ProtoField := 'ambientIntensity';
{ METHOD .Connect }
IS118.Connect := connect124;
{ METHOD .IS }
Material117.IS := IS118;
{ METHOD .AddMaterial }
X3DPrototype116.AddMaterial([Material117]);
{ Only first node (the node type) is renderable, others are along for the ride }
Script125 := TScriptNode.Create;
SFBool126 := TSFBool.CreateUndefined(Script125, false, 'enabled');
{ METHOD .Fd.AddCustomField }
Script125.AddCustomField(SFBool126);
SFColor127 := TSFColor.CreateUndefined(Script125, false, 'diffuseColor');
{ METHOD .Fd.AddCustomField }
Script125.AddCustomField(SFColor127);
SFColor128 := TSFColor.CreateUndefined(Script125, false, 'newColor');
{ METHOD .Fd.AddCustomField }
Script125.AddCustomField(SFColor128);
SFTime129 := TSFTime.CreateUndefined(Script125, false, 'clockTrigger');
{ METHOD .Fd.AddCustomField }
Script125.AddCustomField(SFTime129);
IS130 := TIS.Create;
connect131 := Tconnect.Create;
connect131.NodeField := 'enabled';
connect131.ProtoField := 'enabled';
{ METHOD .Connect }
IS130.Connect := connect131;
connect132 := Tconnect.Create;
connect132.NodeField := 'diffuseColor';
connect132.ProtoField := 'diffuseColor';
{ METHOD .Connect }
IS130.Connect := connect132;
{ METHOD .Fd.AddCustomField }
Script125.AddCustomField(IS130);

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
{ METHOD .AddScript }
X3DPrototype116.AddScript([Script125]);
{ METHOD .AddX3DPrototype }
X3DPrototype107.AddX3DPrototype([X3DPrototype116]);
{ METHOD .AddX3DPrototype }
Group26.AddX3DPrototype([X3DPrototype107]);
{ Test success: declarative statement createDeclarativeShapeTests() }
Group133 := TGroupNode.Create;
Shape134 := TShapeNode.Create;
MetadataString135 := TMetadataStringNode.Create;
MetadataString135.SetValue(['test case']);
{ METHOD .Metadata }
Shape134.Metadata := MetadataString135;
Appearance136 := TAppearanceNode.Create;
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
X3DPrototype137 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance136.Material := X3DPrototype137;
{ METHOD .Appearance }
Shape134.Appearance := Appearance136;
Cone138 := TConeNode.Create;
Cone138.Bottom := False;
Cone138.BottomRadius := 0.05;
Cone138.Height := 0.1;
{ METHOD .Geometry }
Shape134.Geometry := Cone138;
{ METHOD .FdChildren.Add }
Group133.FdChildren.Add(Shape134);
{ Test success: declarativeGroup.addChild() singleton pipeline method }
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Group133);
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
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Group139);
Sound140 := TSoundNode.Create;
Sound140.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip141 := TAudioClipNode.Create;
AudioClip141.Description := 'chimes';
AudioClip141.SetUrl(['chimes.wav','https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
{ METHOD .Source }
Sound140.Source := AudioClip141;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Sound140);
Sound142 := TSoundNode.Create;
Sound142.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture143 := TMovieTextureNode.Create;
MovieTexture143.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture143.SetUrl(['mpgsys.mpg','https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "watchList" }
{ METHOD .Source }
Sound142.Source := MovieTexture143;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Sound142);
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
{ METHOD .SetMaterial }
Appearance145.Material := Material146;
{ METHOD .Appearance }
Shape144.Appearance := Appearance145;
Extrusion147 := TExtrusionNode.Create;
{ METHOD .Geometry }
Shape144.Geometry := Extrusion147;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape144);
Group148 := TGroupNode.Create;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
X3DPrototype149 := TX3DPrototype.Create;
X3DInterfaceDeclaration150 := TX3DInterfaceDeclaration.Create(nil);
SFString151 := TSFString.CreateUndefined(X3DInterfaceDeclaration150, false, 'description');
{ METHOD .AddSFString }
X3DInterfaceDeclaration150.AddSFString([SFString151]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype149.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration150]);
X3DPrototype152 := TX3DPrototype.Create;
WorldInfo153 := TWorldInfoNode.Create;
{ METHOD .AddWorldInfo }
X3DPrototype152.AddWorldInfo([WorldInfo153]);
{ METHOD .AddX3DPrototype }
X3DPrototype149.AddX3DPrototype([X3DPrototype152]);
{ METHOD .AddX3DPrototype }
Group148.AddX3DPrototype([X3DPrototype149]);
X3DPrototype154 := TX3DPrototypeNode.Create;
SFString155 := TSFString.CreateUndefined(X3DPrototype154, false, 'description');
SFString155.Value := 'testing 1 2 3';
{ METHOD .AddSFString }
X3DPrototype154.AddSFString([SFString155]);
{ METHOD .AddX3DPrototype }
Group148.AddX3DPrototype([X3DPrototype154]);
Group156 := TGroupNode.Create;
{ intentionally empty }
{ METHOD .FdChildren.Add }
Group148.FdChildren.Add(Group156);
X3DPrototype157 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group148.AddX3DPrototype([X3DPrototype157]);
Transform158 := TTransformNode.Create;
{ intentionally empty }
{ METHOD .FdChildren.Add }
Group148.FdChildren.Add(Transform158);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Group148);
X3DPrototype159 := TX3DPrototype.Create;
X3DPrototype160 := TX3DPrototype.Create;
ProgramShader161 := TProgramShaderNode.Create;
{ METHOD .AddProgramShader }
X3DPrototype160.AddProgramShader([ProgramShader161]);
{ METHOD .AddX3DPrototype }
X3DPrototype159.AddX3DPrototype([X3DPrototype160]);
{ METHOD .AddX3DPrototype }
Group26.AddX3DPrototype([X3DPrototype159]);
Shape162 := TShapeNode.Create;
Appearance163 := TAppearanceNode.Create;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader164 := TProgramShaderNode.Create;
ShaderProgram165 := TShaderProgramNode.Create;
{ METHOD .Programs }
ProgramShader164.Programs := ShaderProgram165;
{ METHOD .AddChildren }
Appearance163.AddChildren([ProgramShader164]);
X3DPrototype166 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Appearance163.AddX3DPrototype([X3DPrototype166]);
ComposedShader167 := TComposedShaderNode.Create;
ShaderPart168 := TShaderPartNode.Create;
ShaderPart168.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader167.Parts := ShaderPart168;
{ METHOD .AddChildren }
Appearance163.AddChildren([ComposedShader167]);
{ METHOD .Appearance }
Shape162.Appearance := Appearance163;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape162);
{ METHOD .AddGroup }
X3D0.AddChildren([Group26]);
end;

function CreateSmokeTestProgramOutputCanonical: TX3DRootNode;
begin
InitSmokeTestProgramOutputCanonicalPart0;
InitSmokeTestProgramOutputCanonicalPart1;
InitSmokeTestProgramOutputCanonicalPart2;
InitSmokeTestProgramOutputCanonicalPart3;
Result := X3D0;
end;

begin
end.
