unit SmokeTestProgramOutputCanonical;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
X3DExternalPrototype86: TX3DExternalPrototype;
SFString87: TSFString;
Shape88: TShapeNode;
Appearance89: TAppearanceNode;
X3DPrototype90: TX3DPrototypeNode;
SFString91: TSFString;
Sphere92: TSphereNode;
Shape93: TShapeNode;
Appearance94: TAppearanceNode;
X3DPrototype95: TX3DPrototypeNode;
SFString96: TSFString;
Cone97: TConeNode;
Shape98: TShapeNode;
Appearance99: TAppearanceNode;
X3DPrototype100: TX3DPrototypeNode;
Cylinder101: TCylinderNode;
Inline102: TInlineNode;
IMPORT103: TIMPORTNode;
EXPORT104: TEXPORTNode;
X3DPrototype105: TX3DPrototype;
X3DInterfaceDeclaration106: TX3DInterfaceDeclaration;
SFBool107: TSFBool;
SFColor108: TSFColor;
SFColor109: TSFColor;
SFColor110: TSFColor;
SFFloat111: TSFFloat;
SFFloat112: TSFFloat;
SFFloat113: TSFFloat;
X3DPrototype114: TX3DPrototype;
Material115: TMaterialNode;
Script117: TScriptNode;
SFBool118: TSFBool;
SFColor119: TSFColor;
SFColor120: TSFColor;
SFTime121: TSFTime;
Group123: TGroupNode;
Shape124: TShapeNode;
MetadataString125: TMetadataStringNode;
Appearance126: TAppearanceNode;
X3DPrototype127: TX3DPrototypeNode;
Cone128: TConeNode;
Group129: TGroupNode;
Sound130: TSoundNode;
AudioClip131: TAudioClipNode;
Sound132: TSoundNode;
MovieTexture133: TMovieTextureNode;
Shape134: TShapeNode;
Appearance135: TAppearanceNode;
Material136: TMaterialNode;
Extrusion137: TExtrusionNode;
Group138: TGroupNode;
X3DPrototype139: TX3DPrototype;
X3DInterfaceDeclaration140: TX3DInterfaceDeclaration;
SFString141: TSFString;
X3DPrototype142: TX3DPrototype;
WorldInfo143: TWorldInfoNode;
X3DPrototype144: TX3DPrototypeNode;
SFString145: TSFString;
Group146: TGroupNode;
X3DPrototype147: TX3DPrototypeNode;
Transform148: TTransformNode;
X3DPrototype149: TX3DPrototype;
X3DPrototype150: TX3DPrototype;
ProgramShader151: TProgramShaderNode;
Shape152: TShapeNode;
Appearance153: TAppearanceNode;
ProgramShader154: TProgramShaderNode;
ShaderProgram155: TShaderProgramNode;
X3DPrototype156: TX3DPrototypeNode;
ComposedShader157: TComposedShaderNode;
ShaderPart158: TShaderPartNode;

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
unit5 := TunitNode.Create;;
unit5.Category := 'angle';
unit5.ConversionFactor := 1;
{ METHOD .Unit }
{ METHOD.SET .Unit }
head1.Unit := unit5;
unit6 := TunitNode.Create;;
unit6.Category := 'length';
unit6.ConversionFactor := 1;
{ METHOD .Unit }
{ METHOD.SET .Unit }
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
Group26 := TGroupNode.Create;;
ViewpointGroup27 := TViewpointGroupNode.Create;;
end;

procedure InitSmokeTestProgramOutputCanonicalPart1;
begin

ViewpointGroup27.Description := 'Available viewpoints';
Viewpoint28 := TViewpointNode.Create;;
Viewpoint28.Description := 'Hello X3DJSAIL';
{ METHOD .FdChildren.Add }
ViewpointGroup27.FdChildren.Add(Viewpoint28);
Viewpoint29 := TViewpointNode.Create;;
Viewpoint29.Description := 'top-down view from above';
Viewpoint29.Orientation := Vector4(1,0,0,-1.570796);
Viewpoint29.Position := Vector3(0,100,0);
{ METHOD .FdChildren.Add }
ViewpointGroup27.FdChildren.Add(Viewpoint29);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(ViewpointGroup27);
NavigationInfo30 := TNavigationInfoNode.Create;;
NavigationInfo30.SetType(['EXAMINE','FLY','ANY']);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(NavigationInfo30);
WorldInfo31 := TWorldInfoNode.Create;;
WorldInfo31.Title := 'HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)';
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(WorldInfo31);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(WorldInfo31);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(WorldInfo31);
MetadataString34 := TMetadataStringNode.Create;;
MetadataString34.SetValue(['Top-level root Metadata node beneath Scene needs to be one of ''-children'' in JSON encoding']);
{ METHOD .Metadata }
{ METHOD.SET .Metadata }
Group26.Metadata := MetadataString34;
LayerSet35 := TLayerSetNode.Create;;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(LayerSet35);
Transform36 := TTransformNode.Create;;
Transform36.Translation := Vector3(0,1.5,0);
Anchor37 := TAnchorNode.Create;;
Anchor37.Description := 'select for X3D Java SAI Library (X3DJSAIL) description';
Anchor37.SetUrl(['../X3DJSAIL.html','https://www.web3d.org/specifications/java/X3DJSAIL.html']);
Shape38 := TShapeNode.Create;;
Appearance39 := TAppearanceNode.Create;;
end;

procedure InitSmokeTestProgramOutputCanonicalPart2;
begin

Material40 := TMaterialNode.Create;;
Material40.DiffuseColor := Vector3(0,1,1);
Material40.EmissiveColor := Vector3(0.8,0,0);
Material40.Transparency := 0.1;
{ METHOD .SetMaterial }
Appearance39.Material := Material40;
ImageTexture41 := TImageTextureNode.Create;;
ImageTexture41.SetUrl(['images/X3dJavaSceneAccessInterfaceSaiLibrary.png','https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png']);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance39.Texture := ImageTexture41;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape38.Appearance := Appearance39;
Box42 := TBoxNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape38.Geometry := Box42;
{ METHOD .FdChildren.Add }
Anchor37.FdChildren.Add(Shape38);
{ METHOD .FdChildren.Add }
Transform36.FdChildren.Add(Anchor37);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Transform36);
Shape43 := TShapeNode.Create;;
Appearance44 := TAppearanceNode.Create;;
Material45 := TMaterialNode.Create;;
Material45.EmissiveColor := Vector3(0.6,0.19607843,0.8);
{ METHOD .SetMaterial }
Appearance44.Material := Material45;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape43.Appearance := Appearance44;
IndexedLineSet46 := TIndexedLineSetNode.Create;;
IndexedLineSet46.SetCoordIndex([0,1,2,3,4,0]);
{ Coordinate 3-tuple point count: 6 }
Coordinate47 := TCoordinateNode.Create;;
Coordinate47.SetPoint([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet46.Coord := Coordinate47;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape43.Geometry := IndexedLineSet46;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape43);
PositionInterpolator48 := TPositionInterpolatorNode.Create;;
PositionInterpolator48.SetKey([0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator48.SetKeyValue([Vector3(0,1.5,0),Vector3(2,1.5,0),Vector3(2,1.5,-2),Vector3(-2,1.5,-2),Vector3(-2,1.5,0),Vector3(0,1.5,0)]);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(PositionInterpolator48);
end;

procedure InitSmokeTestProgramOutputCanonicalPart3;
begin

TimeSensor49 := TTimeSensorNode.Create;;
TimeSensor49.CycleInterval := 8;
TimeSensor49.Loop := True;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(TimeSensor49);
{ Original "OrbitClock.EventFraction_changed TO BoxPathAnimator.EventSet_fraction }
{ Sample OrbitClock.EventFraction_changed TO BoxPathAnimator.EventSet_fraction}
Group26.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator48.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "BoxPathAnimator.EventValue_changed TO LogoGeometryTransform.FdTranslation.EventIn }
{ Sample BoxPathAnimator.EventValue_changed TO LogoGeometryTransform.FdTranslation.EventIn}
Group26.AddRoute(PositionInterpolator48.EventValue_changed, Transform36.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
Transform52 := TTransformNode.Create;;
Transform52.Translation := Vector3(0,-1.5,0);
Shape53 := TShapeNode.Create;;
Appearance54 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance54.Material := Material40;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape53.Appearance := Appearance54;
Text56 := TTextNode.Create;;
Text56.SetText(['X3D Java','SAI Library','X3DJSAIL']);
{ Comment example A, plain quotation marks: He said, "Immel did it!" }
{ Comment example B, XML character entities: He said, &quot;Immel did it!&quot; }
MetadataSet57 := TMetadataSetNode.Create;;
MetadataString58 := TMetadataStringNode.Create;;
MetadataString58.SetValue(['MFString example C, backslash-escaped quotes: He said, "Immel did it!"']);
{ METHOD .FdValue.Add }
MetadataSet57.FdValue.Add(MetadataString58);
MetadataString59 := TMetadataStringNode.Create;;
MetadataString59.SetValue(['checks MetadataSetObject addValue() method']);
{ METHOD .FdValue.Add }
MetadataSet57.FdValue.Add(MetadataString59);
{ METHOD .Metadata }
{ METHOD.SET .Metadata }
Text56.Metadata := MetadataSet57;
FontStyle60 := TFontStyleNode.Create;;
FontStyle60.Justify := fjMIDDLE;
FontStyle60.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text56.FontStyle := FontStyle60;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape53.Geometry := Text56;
{ METHOD .FdChildren.Add }
Transform52.FdChildren.Add(Shape53);
Collision61 := TCollisionNode.Create;;
{ test containerField='proxy' }
Shape62 := TShapeNode.Create;
end;

procedure InitSmokeTestProgramOutputCanonicalPart4;
begin
;
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' }
{ alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' }
(* alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \""Immel did it!\"""}) *)
{ reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html }
Text63 := TTextNode.Create;;
Text63.SetText(['One, Two, Text','He said, "Immel did it!" \"\"']);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
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
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator64.SetKey([0,0.5,1]);
OrientationInterpolator64.SetKeyValue([Vector4(0,1,0,4.712389),Vector4(0,1,0,0),Vector4(0,1,0,1.5707964)]);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(OrientationInterpolator64);
TimeSensor65 := TTimeSensorNode.Create;;
TimeSensor65.CycleInterval := 5;
TimeSensor65.Loop := True;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(TimeSensor65);
{ Original "SpinClock.EventFraction_changed TO SpinInterpolator.EventSet_fraction }
{ Sample SpinClock.EventFraction_changed TO SpinInterpolator.EventSet_fraction}
Group26.AddRoute(TimeSensor65.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "SpinInterpolator.EventValue_changed TO TextTransform.rotation }
{ Sample SpinInterpolator.EventValue_changed TO TextTransform.rotation}
Group26.AddRoute(OrientationInterpolator64.EventValue_changed, Transform52.rotation);
{ METHOD .AddX3DROUTE }
Group68 := TGroupNode.Create;;
Background69 := TBackgroundNode.Create;;
{ METHOD .FdChildren.Add }
Group68.FdChildren.Add(Background69);
Script70 := TScriptNode.Create;;
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
ColorInterpolator73 := TColorInterpolatorNode.Create;;
ColorInterpolator73.SetKey([0,0.5,1]);
ColorInterpolator73.SetKeyValue([Vector3(0.9411765,1,1),Vector3(0.29411766,0,0.50980395),Vector3(0.9411765,1,1)]);
{ AZURE to INDIGO and back again }
{ METHOD .FdChildren.Add }
Group68.FdChildren.Add(ColorInterpolator73);
TimeSensor74 := TTimeSensorNode.Create;;
TimeSensor74.CycleInterval := 60;
TimeSensor74.Loop := True;
{ METHOD .FdChildren.Add }
Group68.FdChildren.Add(TimeSensor74);
{ Original "colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor }
{ Sample colorTypeConversionScript.colorsOutput TO GradualBackground.skyColor}
Group68.AddRoute(colorTypeConversionScript.undefined, Background69.skyColor);
{ METHOD .AddX3DROUTE }
{ Original "ColorAnimator.EventValue_changed TO colorTypeConversionScript.colorInput }
{ Sample ColorAnimator.EventValue_changed TO colorTypeConversionScript.colorInput}
Group68.AddRoute(ColorInterpolator73.EventValue_changed, SFColor71);
{ METHOD .AddX3DROUTE }
{ Original "ColorClock.EventFraction_changed TO ColorAnimator.EventSet_fraction }
{ Sample ColorClock.EventFraction_changed TO ColorAnimator.EventSet_fraction}
Group68.AddRoute(TimeSensor74.EventFraction_changed, ColorInterpolator73.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Group68);
X3DPrototype78 := TX3DPrototype.Create;;
X3DPrototype78.Appinfo := 'tooltip: ArtDeco01Material prototype is a Material node';
X3DInterfaceDeclaration79 := TX3DInterfaceDeclaration.Create(nil);;
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
X3DPrototype82 := TX3DPrototype.Create;;
{ Initial node of ProtoBody determines prototype node type }
Material83 := TMaterialNode.Create;;
Material83.AmbientIntensity := 0.25;
Material83.DiffuseColor := Vector3(0.282435,0.085159,0.134462);
Material83.Shininess := 0.127273;
Material83.SpecularColor := Vector3(0.276305,0.11431,0.139857);
{ METHOD .AddMaterial }
X3DPrototype82.AddMaterial([Material83]);
{ [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" }
{ presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types }
TouchSensor84 := TTouchSensorNode.Create;;
TouchSensor84.Description := 'within ProtoBody';
{ METHOD .AddTouchSensor }
X3DPrototype82.AddTouchSensor([TouchSensor84]);
{ METHOD .AddX3DPrototype }
X3DPrototype78.AddX3DPrototype([X3DPrototype82]);
{ METHOD .AddX3DPrototype }
Group26.AddX3DPrototype([X3DPrototype78]);
X3DExternalPrototype86 := TX3DExternalPrototype.Create;;
X3DExternalPrototype86.Appinfo := 'this is a different Material node';
X3DExternalPrototype86.Url := '\"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material\"';
{ [HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
SFString87 := TSFString.CreateUndefined(X3DExternalPrototype86, false, 'description');
SFString87.Appinfo := 'tooltip for descriptionField';
{ METHOD .AddSFString }
X3DExternalPrototype86.AddSFString([SFString87]);
{ METHOD .AddX3DExternalPrototype }
Group26.AddX3DExternalPrototype([X3DExternalPrototype86]);
{ Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place }
Shape88 := TShapeNode.Create;;
Appearance89 := TAppearanceNode.Create;;
{ ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java }
X3DPrototype90 := TX3DPrototypeNode;
{ [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" }
SFString91 := TSFString.CreateUndefined(X3DPrototype90, false, 'description');
SFString91.Value := 'ArtDeco01Material can substitute for a Material node';
{ METHOD .AddSFString }
X3DPrototype90.AddSFString([SFString91]);
{ METHOD .SetMaterial }
Appearance89.Material := X3DPrototype90;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape88.Appearance := Appearance89;
Sphere92 := TSphereNode.Create;;
Sphere92.Radius := 0.001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape88.Geometry := Sphere92;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape88);
Shape93 := TShapeNode.Create;;
Appearance94 := TAppearanceNode.Create;;
{ ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java }
X3DPrototype95 := TX3DPrototypeNode;
{ [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." }
SFString96 := TSFString.CreateUndefined(X3DPrototype95, false, 'description');
SFString96.Value := 'ArtDeco02Material can substitute for another Material node';
{ METHOD .AddSFString }
X3DPrototype95.AddSFString([SFString96]);
{ METHOD .SetMaterial }
Appearance94.Material := X3DPrototype95;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape93.Appearance := Appearance94;
Cone97 := TConeNode.Create;;
Cone97.BottomRadius := 0.001;
Cone97.Height := 0.001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape93.Geometry := Cone97;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape93);
Shape98 := TShapeNode.Create;;
Appearance99 := TAppearanceNode.Create;;
{ ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE. }
{ METHOD .SetMaterial }
Appearance99.Material := X3DPrototype95;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape98.Appearance := Appearance99;
Cylinder101 := TCylinderNode.Create;;
Cylinder101.Height := 0.001;
Cylinder101.Radius := 0.001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape98.Geometry := Cylinder101;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape98);
Inline102 := TInlineNode.Create;;
Inline102.SetUrl(['someOtherScene.x3d','https://www.web3d.org/specifications/java/examples/someOtherScene.x3d']);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Inline102);
IMPORT103 := TIMPORTNode.Create;;
IMPORT103.AS := 'WorldInfoDEF2';
IMPORT103.ImportedDEF := 'WorldInfoDEF';
IMPORT103.InlineDEF := 'inlineSceneDef';
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(IMPORT103);
EXPORT104 := TEXPORTNode.Create;;
EXPORT104.AS := 'WorldInfoDEF3';
EXPORT104.LocalDEF := 'WorldInfoDEF';
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(EXPORT104);
X3DPrototype105 := TX3DPrototype.Create;;
X3DPrototype105.Appinfo := 'mimic a Material node and modulate fields as an animation effect';
X3DPrototype105.Documentation := 'http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html';
X3DInterfaceDeclaration106 := TX3DInterfaceDeclaration.Create(nil);;
SFBool107 := TSFBool.CreateUndefined(X3DInterfaceDeclaration106, false, 'enabled');
SFBool107.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration106.AddSFBool([SFBool107]);
SFColor108 := TSFColor.CreateUndefined(X3DInterfaceDeclaration106, false, 'diffuseColor');
SFColor108.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration106.AddSFColor([SFColor108]);
SFColor109 := TSFColor.CreateUndefined(X3DInterfaceDeclaration106, false, 'emissiveColor');
SFColor109.Value := '0.05 0.05 0.5';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration106.AddSFColor([SFColor109]);
SFColor110 := TSFColor.CreateUndefined(X3DInterfaceDeclaration106, false, 'specularColor');
SFColor110.Value := '0 0 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration106.AddSFColor([SFColor110]);
SFFloat111 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration106, false, 'transparency');
SFFloat111.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration106.AddSFFloat([SFFloat111]);
SFFloat112 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration106, false, 'shininess');
SFFloat112.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration106.AddSFFloat([SFFloat112]);
SFFloat113 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration106, false, 'ambientIntensity');
SFFloat113.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration106.AddSFFloat([SFFloat113]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype105.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration106]);
X3DPrototype114 := TX3DPrototype.Create;;
Material115 := TMaterialNode.Create;;
{ METHOD .AddMaterial }
X3DPrototype114.AddMaterial([Material115]);
{ Only first node (the node type) is renderable, others are along for the ride }
Script117 := TScriptNode.Create;;
SFBool118 := TSFBool.CreateUndefined(Script117, false, 'enabled');
{ METHOD .Fd.AddCustomField }
Script117.AddCustomField(SFBool118);
SFColor119 := TSFColor.CreateUndefined(Script117, false, 'diffuseColor');
{ METHOD .Fd.AddCustomField }
Script117.AddCustomField(SFColor119);
SFColor120 := TSFColor.CreateUndefined(Script117, false, 'newColor');
{ METHOD .Fd.AddCustomField }
Script117.AddCustomField(SFColor120);
SFTime121 := TSFTime.CreateUndefined(Script117, false, 'clockTrigger');
{ METHOD .Fd.AddCustomField }
Script117.AddCustomField(SFTime121);

Script117.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype114.AddScript([Script117]);
{ METHOD .AddX3DPrototype }
X3DPrototype105.AddX3DPrototype([X3DPrototype114]);
{ METHOD .AddX3DPrototype }
Group26.AddX3DPrototype([X3DPrototype105]);
{ Test success: declarative statement createDeclarativeShapeTests() }
Group123 := TGroupNode.Create;;
Shape124 := TShapeNode.Create;;
MetadataString125 := TMetadataStringNode.Create;;
MetadataString125.SetValue(['test case']);
{ METHOD .Metadata }
{ METHOD.SET .Metadata }
Shape124.Metadata := MetadataString125;
Appearance126 := TAppearanceNode.Create;;
{ DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance }
X3DPrototype127 := TX3DPrototypeNode;
{ METHOD .SetMaterial }
Appearance126.Material := X3DPrototype127;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape124.Appearance := Appearance126;
Cone128 := TConeNode.Create;;
Cone128.Bottom := False;
Cone128.BottomRadius := 0.05;
Cone128.Height := 0.1;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape124.Geometry := Cone128;
{ METHOD .FdChildren.Add }
Group123.FdChildren.Add(Shape124);
{ Test success: declarativeGroup.addChild() singleton pipeline method }
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Group123);
{ Test success: declarative statement addChild() }
{ Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> }
{ Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> }
{ Test success: x3dModel.findElementByNameValue("ArtDeco01Material", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found }
{ Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found }
Group129 := TGroupNode.Create;;
{ testFieldObjects() results }
{ SFBool default=true, true=true, false=false, negate()=true }
{ MFBool default=, initial=true false true, negate()=false true false }
{ SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 }
{ MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 }
{ ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= }
{ SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true }
{ regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotationObject.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value }
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Group129);
Sound130 := TSoundNode.Create;;
Sound130.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
AudioClip131 := TAudioClipNode.Create;;
AudioClip131.Description := 'chimes';
AudioClip131.SetUrl(['chimes.wav','https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d }
{ METHOD .Source }
{ METHOD.SET .Source }
Sound130.Source := AudioClip131;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Sound130);
Sound132 := TSoundNode.Create;;
Sound132.Location := Vector3(0,1.6,0);
{ set sound-ellipsoid location height at 1.6m to match typical avatar height }
MovieTexture133 := TMovieTextureNode.Create;;
MovieTexture133.Description := 'mpgsys.mpg from ConformanceNist suite';
MovieTexture133.SetUrl(['mpgsys.mpg','https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg']);
{ Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d }
{ Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "watchList" }
{ METHOD .Source }
{ METHOD.SET .Source }
Sound132.Source := MovieTexture133;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Sound132);
{ Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true }
{ Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false }
{ Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false }
{ Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true }
{ Test success: CommentsBlock.isNode()=false, testComments.isNode()=false }
{ Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true }
Shape134 := TShapeNode.Create;;
{ ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' }
{ ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' }
Appearance135 := TAppearanceNode.Create;;
Material136 := TMaterialNode.Create;;
Material136.Transparency := 1;
{ METHOD .SetMaterial }
Appearance135.Material := Material136;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape134.Appearance := Appearance135;
Extrusion137 := TExtrusionNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape134.Geometry := Extrusion137;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape134);
Group138 := TGroupNode.Create;;
{ Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes }
X3DPrototype139 := TX3DPrototype.Create;;
X3DInterfaceDeclaration140 := TX3DInterfaceDeclaration.Create(nil);;
SFString141 := TSFString.CreateUndefined(X3DInterfaceDeclaration140, false, 'description');
{ METHOD .AddSFString }
X3DInterfaceDeclaration140.AddSFString([SFString141]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype139.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration140]);
X3DPrototype142 := TX3DPrototype.Create;;
WorldInfo143 := TWorldInfoNode.Create;;
{ METHOD .AddWorldInfo }
X3DPrototype142.AddWorldInfo([WorldInfo143]);
{ METHOD .AddX3DPrototype }
X3DPrototype139.AddX3DPrototype([X3DPrototype142]);
{ METHOD .AddX3DPrototype }
Group138.AddX3DPrototype([X3DPrototype139]);
X3DPrototype144 := TX3DPrototypeNode;
SFString145 := TSFString.CreateUndefined(X3DPrototype144, false, 'description');
SFString145.Value := 'testing 1 2 3';
{ METHOD .AddSFString }
X3DPrototype144.AddSFString([SFString145]);
{ METHOD .AddX3DPrototype }
Group138.AddX3DPrototype([X3DPrototype144]);
Group146 := TGroupNode.Create;;
{ intentionally empty }
{ METHOD .FdChildren.Add }
Group138.FdChildren.Add(Group146);
X3DPrototype147 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group138.AddX3DPrototype([X3DPrototype147]);
Transform148 := TTransformNode.Create;;
{ intentionally empty }
{ METHOD .FdChildren.Add }
Group138.FdChildren.Add(Transform148);
{ Test satisfactorily creates MFNode children array as an ordered list with mixed content }
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Group138);
X3DPrototype149 := TX3DPrototype.Create;;
X3DPrototype150 := TX3DPrototype.Create;;
ProgramShader151 := TProgramShaderNode.Create;;
{ METHOD .AddProgramShader }
X3DPrototype150.AddProgramShader([ProgramShader151]);
{ METHOD .AddX3DPrototype }
X3DPrototype149.AddX3DPrototype([X3DPrototype150]);
{ METHOD .AddX3DPrototype }
Group26.AddX3DPrototype([X3DPrototype149]);
Shape152 := TShapeNode.Create;;
Appearance153 := TAppearanceNode.Create;;
{ Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes }
{ Test satisfactorily creates MFNode shaders array as an ordered list with mixed content }
ProgramShader154 := TProgramShaderNode.Create;;
ShaderProgram155 := TShaderProgramNode.Create;;
{ METHOD .Programs }
{ METHOD.SET .Programs }
ProgramShader154.Programs := ShaderProgram155;
{ METHOD .AddChildren }
Appearance153.AddChildren([ProgramShader154]);
X3DPrototype156 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Appearance153.AddX3DPrototype([X3DPrototype156]);
ComposedShader157 := TComposedShaderNode.Create;;
ShaderPart158 := TShaderPartNode.Create;;
ShaderPart158.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader157.Parts := ShaderPart158;
{ METHOD .AddChildren }
Appearance153.AddChildren([ComposedShader157]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape152.Appearance := Appearance153;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Shape152);
{ METHOD .AddGroup }
X3D0.AddChildren([Group26]);
end;

function CreateSmokeTestProgramOutputCanonical: TX3DRootNode;
begin
InitSmokeTestProgramOutputCanonicalPart0;
InitSmokeTestProgramOutputCanonicalPart1;
InitSmokeTestProgramOutputCanonicalPart2;
InitSmokeTestProgramOutputCanonicalPart3;
InitSmokeTestProgramOutputCanonicalPart4;
Result := X3D0;
end;

begin
end.
