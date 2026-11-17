unit Menu;

interface

uses X3DNodes;

function CreateMenu: TX3DRootNode;

implementation

uses CastleVectors;

function CreateMenu: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group5: TGroupNode;
Viewpoint6: TViewpointNode;
X3DPrototype7: TX3DPrototype;
X3DInterfaceDeclaration8: TX3DInterfaceDeclaration;
X3DField9: TX3DField;
X3DPrototype10: TX3DPrototype;
Group11: TGroupNode;
Transform12: TTransformNode;
TouchSensor13: TTouchSensorNode;
Shape14: TShapeNode;
Appearance15: TAppearanceNode;
Material16: TMaterialNode;
Text17: TTextNode;
IS18: TIS;
connect19: Tconnect;
FontStyle20: TFontStyleNode;
Shape21: TShapeNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
IndexedFaceSet24: TIndexedFaceSetNode;
Coordinate25: TCoordinateNode;
Switch26: TSwitchNode;
Inline27: TInlineNode;
Inline28: TInlineNode;
Inline29: TInlineNode;
Inline30: TInlineNode;
Inline31: TInlineNode;
Inline32: TInlineNode;
Inline33: TInlineNode;
Inline34: TInlineNode;
Inline35: TInlineNode;
Inline36: TInlineNode;
Inline37: TInlineNode;
Inline38: TInlineNode;
Inline39: TInlineNode;
Inline40: TInlineNode;
Inline41: TInlineNode;
Inline42: TInlineNode;
Inline43: TInlineNode;
Inline44: TInlineNode;
Inline45: TInlineNode;
Inline46: TInlineNode;
Inline47: TInlineNode;
Inline48: TInlineNode;
Inline49: TInlineNode;
Inline50: TInlineNode;
Inline51: TInlineNode;
Inline52: TInlineNode;
Inline53: TInlineNode;
Inline54: TInlineNode;
Inline55: TInlineNode;
Inline56: TInlineNode;
Script57: TScriptNode;
X3DField58: TX3DField;
X3DField59: TX3DField;
X3DField60: TX3DField;
X3DField61: TX3DField;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
IS65: TIS;
connect66: Tconnect;
X3DPrototype69: TX3DPrototypeNode;
MFString70: TMFString;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Menu.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'X3D scene with a Switch of Inlines controlled by a menu';
Group5 := TGroupNode.Create;
{ Viewpoint and any other scene setup }
Viewpoint6 := TViewpointNode.Create;
Viewpoint6.Position := Vector3(0,20,110);
{ .AddChildren }
Group5.AddChildren([Viewpoint6]);
{ Menu prototype declaration }
X3DPrototype7 := TX3DPrototype.Create;
X3DPrototype7.NameField := 'Menu';
X3DInterfaceDeclaration8 := TX3DInterfaceDeclaration.Create(nil);
X3DField9 := TX3DField.Create;
X3DField9.NameField := 'menuItems';
X3DField9.Type := 'MFString';
X3DField9.AccessType := 'initializeOnly';
{ .SetX3DField }
X3DInterfaceDeclaration8.X3DField := X3DField9;
{ .SetX3DInterfaceDeclaration }
X3DPrototype7.X3DInterfaceDeclaration := X3DInterfaceDeclaration8;
X3DPrototype10 := TX3DPrototype.Create;
Group11 := TGroupNode.Create;
Transform12 := TTransformNode.Create;
Transform12.Translation := Vector3(48,27,0);
TouchSensor13 := TTouchSensorNode.Create;
{ .AddChildren }
Transform12.AddChildren([TouchSensor13]);
Shape14 := TShapeNode.Create;
Appearance15 := TAppearanceNode.Create;
Material16 := TMaterialNode.Create;
Material16.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance15.Material := Material16;
{ .SetAppearance }
Shape14.Appearance := Appearance15;
Text17 := TTextNode.Create;
IS18 := TIS.Create;
connect19 := Tconnect.Create;
connect19.NodeField := 'string';
connect19.ProtoField := 'menuItems';
{ .AddConnect }
IS18.Connect := connect19;
{ .SetIS }
Text17.IS := IS18;
FontStyle20 := TFontStyleNode.Create;
FontStyle20.Size := 2.4;
FontStyle20.Spacing := 1.2;
FontStyle20.Justify := fjMiddle;
FontStyle20.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text17.FontStyle := FontStyle20;
{ .SetGeometry }
Shape14.Geometry := Text17;
{ .AddChild }
Transform12.AddChildren([Shape14]);
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape21.Appearance := Appearance22;
IndexedFaceSet24 := TIndexedFaceSetNode.Create;
IndexedFaceSet24.SetCoordIndex([0,1,2,3,-1]);
Coordinate25 := TCoordinateNode.Create;
Coordinate25.SetPoint([Vector3(25,36,-0.01),Vector3(-25,36,-0.01),Vector3(-25,-51,-0.01),Vector3(25,-51,-0.01)]);
{ .SetCoord }
IndexedFaceSet24.Coord := Coordinate25;
{ .SetGeometry }
Shape21.Geometry := IndexedFaceSet24;
{ .AddChild }
Transform12.AddChildren([Shape21]);
{ .AddChildren }
Group11.AddChildren([Transform12]);
Switch26 := TSwitchNode.Create;
Switch26.WhichChoice := 0;
Inline27 := TInlineNode.Create;
Inline27.SetUrl(['../resources/JinInnerBrowRaiser.x3d','JinInnerBrowRaiser.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline27]);
Inline28 := TInlineNode.Create;
Inline28.SetUrl(['../resources/JinOuterBrowRaiser.x3d','JinOuterBrowRaiser.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline28]);
Inline29 := TInlineNode.Create;
Inline29.SetUrl(['../resources/JinBrowLowerer.x3d','JinBrowLowerer.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline29]);
Inline30 := TInlineNode.Create;
Inline30.SetUrl(['../resources/JinUpperLidRaiser.x3d','JinUpperLidRaiser.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline30]);
Inline31 := TInlineNode.Create;
Inline31.SetUrl(['../resources/JinCheekRaiser.x3d','JinCheekRaiser.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline31]);
Inline32 := TInlineNode.Create;
Inline32.SetUrl(['../resources/JinLidTightener.x3d','JinLidTightener.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline32]);
Inline33 := TInlineNode.Create;
Inline33.SetUrl(['../resources/JinNoseWrinkler.x3d','JinNoseWrinkler.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline33]);
Inline34 := TInlineNode.Create;
Inline34.SetUrl(['../resources/JinUpperLipRaiser.x3d','JinUpperLipRaiser.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline34]);
Inline35 := TInlineNode.Create;
Inline35.SetUrl(['../resources/JinNasolabialDeepener.x3d','JinNasolabialDeepener.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline35]);
Inline36 := TInlineNode.Create;
Inline36.SetUrl(['../resources/JinLipCornerPuller.x3d','JinLipCornerPuller.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline36]);
Inline37 := TInlineNode.Create;
Inline37.SetUrl(['../resources/JinCheekPuffer.x3d','JinCheekPuffer.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline37]);
Inline38 := TInlineNode.Create;
Inline38.SetUrl(['../resources/JinDimpler.x3d','JinDimpler.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline38]);
Inline39 := TInlineNode.Create;
Inline39.SetUrl(['../resources/JinLipCornerDepressor.x3d','JinLipCornerDepressor.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline39]);
Inline40 := TInlineNode.Create;
Inline40.SetUrl(['../resources/JinLowerLipDepressor.x3d','JinLowerLipDepressor.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline40]);
Inline41 := TInlineNode.Create;
Inline41.SetUrl(['../resources/JinChinRaiser.x3d','JinChinRaiser.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline41]);
Inline42 := TInlineNode.Create;
Inline42.SetUrl(['../resources/JinLipPuckerer.x3d','JinLipPuckerer.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline42]);
Inline43 := TInlineNode.Create;
Inline43.SetUrl(['../resources/JinLipStretcher.x3d','JinLipStretcher.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline43]);
Inline44 := TInlineNode.Create;
Inline44.SetUrl(['../resources/JinLipFunneler.x3d','JinLipFunneler.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline44]);
Inline45 := TInlineNode.Create;
Inline45.SetUrl(['../resources/JinLipTightener.x3d','JinLipTightener.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline45]);
Inline46 := TInlineNode.Create;
Inline46.SetUrl(['../resources/JinLipPressor.x3d','JinLipPressor.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline46]);
Inline47 := TInlineNode.Create;
Inline47.SetUrl(['../resources/JinLipsPart.x3d','JinLipsPart.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline47]);
Inline48 := TInlineNode.Create;
Inline48.SetUrl(['../resources/JinJawDrop.x3d','JinJawDrop.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline48]);
Inline49 := TInlineNode.Create;
Inline49.SetUrl(['../resources/JinMouthStretch.x3d','JinMouthStretch.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline49]);
Inline50 := TInlineNode.Create;
Inline50.SetUrl(['../resources/JinLipSuck.x3d','JinLipSuck.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline50]);
Inline51 := TInlineNode.Create;
Inline51.SetUrl(['../resources/JinLidDroop.x3d','JinLidDroop.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline51]);
Inline52 := TInlineNode.Create;
Inline52.SetUrl(['../resources/JinSlit.x3d','JinSlit.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline52]);
Inline53 := TInlineNode.Create;
Inline53.SetUrl(['../resources/JinEyesClosed.x3d','JinEyesClosed.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline53]);
Inline54 := TInlineNode.Create;
Inline54.SetUrl(['../resources/JinSquint.x3d','JinSquint.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline54]);
Inline55 := TInlineNode.Create;
Inline55.SetUrl(['../resources/JinBlink.x3d','JinBlink.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline55]);
Inline56 := TInlineNode.Create;
Inline56.SetUrl(['../resources/JinWink.x3d','JinWink.x3d']);
{ .AddChildren }
Switch26.AddChildren([Inline56]);
{ .AddChildren }
Group11.AddChildren([Switch26]);
{ Script to handle selection logic }
Script57 := TScriptNode.Create;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'menuItems';
X3DField58.Type := 'MFString';
X3DField58.AccessType := 'initializeOnly';
{ .SetX3DField }
Script57.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'selection';
X3DField59.Type := 'SFInt32';
X3DField59.AccessType := 'outputOnly';
{ .AddX3DField }
Script57.X3DField := X3DField59;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'touchPoint';
X3DField60.Type := 'SFVec3f';
X3DField60.AccessType := 'inputOnly';
{ .AddX3DField }
Script57.X3DField := X3DField60;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'spacing';
X3DField61.Type := 'SFFloat';
X3DField61.AccessType := 'initializeOnly';
X3DField61.Value := '1.2';
{ .AddX3DField }
Script57.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'size';
X3DField62.Type := 'SFFloat';
X3DField62.AccessType := 'initializeOnly';
X3DField62.Value := '2.4';
{ .AddX3DField }
Script57.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'menuCenterY';
X3DField63.Type := 'SFFloat';
X3DField63.AccessType := 'initializeOnly';
{ .AddX3DField }
Script57.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'itemHeight';
X3DField64.Type := 'SFFloat';
X3DField64.AccessType := 'initializeOnly';
{ .AddX3DField }
Script57.X3DField := X3DField64;
IS65 := TIS.Create;
connect66 := Tconnect.Create;
connect66.NodeField := 'menuItems';
connect66.ProtoField := 'menuItems';
{ .AddConnect }
IS65.Connect := connect66;
{ .SetIS }
Script57.IS := IS65;

Script57.SetSourceCode('''ecmascript:\n"+
"        function initialize() {\n"+
"          selection = 0;\n"+
"          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation\n"+
"          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;\n"+
"          menuCenterY = menuHeight / 2;\n"+
"          itemHeight = menuHeight / menuItems.length;\n"+
"        }\n"+
"\n"+
"        function touchPoint(value) {\n"+
"          Browser.print(\"Hit \"+value+\" \"+selection+\"\n"+
"\");\n"+
"          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);\n"+
"\n"+
"          selection = index - 2;\n"+
"          if (selection >= 0 && selection < menuItems.length) {\n"+
"            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"\n"+
"\");\n"+
"          }\n"+
"        }''');
{ .AddChildren }
Group11.AddChildren([Script57]);
{ ROUTEs to connect everything }
Group11.AddRoute(TouchSensor13.EventHitpoint_changed, Script57.FdTouchpoint);
{ .AddX3DRoute }
Group11.AddRoute(Script57.FdSelection, Switch26.FdWhichchoice);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype10.Group := Group11;
{ .AddX3DPrototype }
X3DPrototype7.X3DPrototype := X3DPrototype10;
{ .AddX3DPrototype }
Group5.X3DPrototype := X3DPrototype7;
X3DPrototype69 := TX3DPrototypeNode.Create;
X3DPrototype69.NameField := 'Menu';
MFString70 := TMFString.Create(Menu1, false, 'menuItems', (['JinInnerBrowRaiser.x3d','JinOuterBrowRaiser.x3d','JinBrowLowerer.x3d','JinUpperLidRaiser.x3d','JinCheekRaiser.x3d','JinLidTightener.x3d','JinNoseWrinkler.x3d','JinUpperLipRaiser.x3d','JinNasolabialDeepener.x3d','JinLipCornerPuller.x3d','JinCheekPuffer.x3d','JinDimpler.x3d','JinLipCornerDepressor.x3d','JinLowerLipDepressor.x3d','JinChinRaiser.x3d','JinLipPuckerer.x3d','JinLipStretcher.x3d','JinLipFunneler.x3d','JinLipTightener.x3d','JinLipPressor.x3d','JinLipsPart.x3d','JinJawDrop.x3d','JinMouthStretch.x3d','JinLipSuck.x3d','JinLidDroop.x3d','JinSlit.x3d','JinEyesClosed.x3d','JinSquint.x3d','JinBlink.x3d','JinWink.x3d']));
MFString70.NameField := 'menuItems';
MFString70.Value := '\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\"';
{ .SetMFString }
X3DPrototype69.MFString := MFString70;
{ .AddX3DPrototype }
Group5.X3DPrototype := X3DPrototype69;
{ .AddGroup }
X3D0.AddChildren([Group5]);
Result := X3D0;
end;

begin
end.
