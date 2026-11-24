unit Menu;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateMenu: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group5: TGroupNode;
Viewpoint6: TViewpointNode;
X3DPrototype7: TX3DPrototype;
X3DInterfaceDeclaration8: TX3DInterfaceDeclaration;
MFString9: TMFString;
X3DPrototype10: TX3DPrototype;
Group11: TGroupNode;
Transform12: TTransformNode;
TouchSensor13: TTouchSensorNode;
Shape14: TShapeNode;
Appearance15: TAppearanceNode;
Material16: TMaterialNode;
Text17: TTextNode;
FontStyle19: TFontStyleNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
IndexedFaceSet23: TIndexedFaceSetNode;
Coordinate24: TCoordinateNode;
Switch25: TSwitchNode;
Inline26: TInlineNode;
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
Script56: TScriptNode;
MFString57: TMFString;
SFInt3258: TSFInt32;
SFVec3f59: TSFVec3f;
SFFloat60: TSFFloat;
SFFloat61: TSFFloat;
SFFloat62: TSFFloat;
SFFloat63: TSFFloat;
X3DPrototype67: TX3DPrototypeNode;
MFString68: TMFString;

procedure InitMenuPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Menu.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'X3D scene with a Switch of Inlines controlled by a menu';
{ METHOD .Meta }
{ METHOD .Head }
Group5 := TGroupNode.Create;;
{ Viewpoint and any other scene setup }
Viewpoint6 := TViewpointNode.Create;;
Viewpoint6.Position := Vector3(0,20,110);
{ METHOD .FdChildren.Add }
Group5.FdChildren.Add(Viewpoint6);
{ Menu prototype declaration }
X3DPrototype7 := TX3DPrototype.Create;;
X3DInterfaceDeclaration8 := TX3DInterfaceDeclaration.Create(nil);;
MFString9 := TMFString.CreateUndefined(X3DInterfaceDeclaration8, false, 'menuItems');
{ METHOD .AddMFString }
X3DInterfaceDeclaration8.AddMFString([MFString9]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype7.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration8]);
X3DPrototype10 := TX3DPrototype.Create;;
Group11 := TGroupNode.Create;;
Transform12 := TTransformNode.Create;;
Transform12.Translation := Vector3(48,27,0);
TouchSensor13 := TTouchSensorNode.Create;;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(TouchSensor13);
Shape14 := TShapeNode.Create;;
Appearance15 := TAppearanceNode.Create;;
Material16 := TMaterialNode.Create;;
Material16.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance15.Material := Material16;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape14.Appearance := Appearance15;
Text17 := TTextNode.Create;
end;

procedure InitMenuPart1;
begin
;
FontStyle19 := TFontStyleNode.Create;;
FontStyle19.Size := 2.4;
FontStyle19.Spacing := 1.2;
FontStyle19.Justify := fjMIDDLE;
FontStyle19.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text17.FontStyle := FontStyle19;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape14.Geometry := Text17;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Shape14);
Shape20 := TShapeNode.Create;;
Appearance21 := TAppearanceNode.Create;;
Material22 := TMaterialNode.Create;;
Material22.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape20.Appearance := Appearance21;
IndexedFaceSet23 := TIndexedFaceSetNode.Create;;
IndexedFaceSet23.SetCoordIndex([0,1,2,3,-1]);
Coordinate24 := TCoordinateNode.Create;;
Coordinate24.SetPoint([Vector3(25,36,-0.01),Vector3(-25,36,-0.01),Vector3(-25,-51,-0.01),Vector3(25,-51,-0.01)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet23.Coord := Coordinate24;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape20.Geometry := IndexedFaceSet23;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Transform12);
Switch25 := TSwitchNode.Create;;
Switch25.WhichChoice := 0;
Inline26 := TInlineNode.Create;;
Inline26.SetUrl(['../resources/JinInnerBrowRaiser.x3d','JinInnerBrowRaiser.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline26);
Inline27 := TInlineNode.Create;;
Inline27.SetUrl(['../resources/JinOuterBrowRaiser.x3d','JinOuterBrowRaiser.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline27);
end;

procedure InitMenuPart2;
begin

Inline28 := TInlineNode.Create;;
Inline28.SetUrl(['../resources/JinBrowLowerer.x3d','JinBrowLowerer.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline28);
Inline29 := TInlineNode.Create;;
Inline29.SetUrl(['../resources/JinUpperLidRaiser.x3d','JinUpperLidRaiser.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline29);
Inline30 := TInlineNode.Create;;
Inline30.SetUrl(['../resources/JinCheekRaiser.x3d','JinCheekRaiser.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline30);
Inline31 := TInlineNode.Create;;
Inline31.SetUrl(['../resources/JinLidTightener.x3d','JinLidTightener.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline31);
Inline32 := TInlineNode.Create;;
Inline32.SetUrl(['../resources/JinNoseWrinkler.x3d','JinNoseWrinkler.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline32);
Inline33 := TInlineNode.Create;;
Inline33.SetUrl(['../resources/JinUpperLipRaiser.x3d','JinUpperLipRaiser.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline33);
Inline34 := TInlineNode.Create;;
Inline34.SetUrl(['../resources/JinNasolabialDeepener.x3d','JinNasolabialDeepener.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline34);
Inline35 := TInlineNode.Create;;
Inline35.SetUrl(['../resources/JinLipCornerPuller.x3d','JinLipCornerPuller.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline35);
Inline36 := TInlineNode.Create;;
Inline36.SetUrl(['../resources/JinCheekPuffer.x3d','JinCheekPuffer.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline36);
Inline37 := TInlineNode.Create;;
Inline37.SetUrl(['../resources/JinDimpler.x3d','JinDimpler.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline37);
end;

procedure InitMenuPart3;
begin

Inline38 := TInlineNode.Create;;
Inline38.SetUrl(['../resources/JinLipCornerDepressor.x3d','JinLipCornerDepressor.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline38);
Inline39 := TInlineNode.Create;;
Inline39.SetUrl(['../resources/JinLowerLipDepressor.x3d','JinLowerLipDepressor.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline39);
Inline40 := TInlineNode.Create;;
Inline40.SetUrl(['../resources/JinChinRaiser.x3d','JinChinRaiser.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline40);
Inline41 := TInlineNode.Create;;
Inline41.SetUrl(['../resources/JinLipPuckerer.x3d','JinLipPuckerer.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline41);
Inline42 := TInlineNode.Create;;
Inline42.SetUrl(['../resources/JinLipStretcher.x3d','JinLipStretcher.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline42);
Inline43 := TInlineNode.Create;;
Inline43.SetUrl(['../resources/JinLipFunneler.x3d','JinLipFunneler.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline43);
Inline44 := TInlineNode.Create;;
Inline44.SetUrl(['../resources/JinLipTightener.x3d','JinLipTightener.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline44);
Inline45 := TInlineNode.Create;;
Inline45.SetUrl(['../resources/JinLipPressor.x3d','JinLipPressor.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline45);
Inline46 := TInlineNode.Create;;
Inline46.SetUrl(['../resources/JinLipsPart.x3d','JinLipsPart.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline46);
Inline47 := TInlineNode.Create;;
Inline47.SetUrl(['../resources/JinJawDrop.x3d','JinJawDrop.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline47);
end;

procedure InitMenuPart4;
begin

Inline48 := TInlineNode.Create;;
Inline48.SetUrl(['../resources/JinMouthStretch.x3d','JinMouthStretch.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline48);
Inline49 := TInlineNode.Create;;
Inline49.SetUrl(['../resources/JinLipSuck.x3d','JinLipSuck.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline49);
Inline50 := TInlineNode.Create;;
Inline50.SetUrl(['../resources/JinLidDroop.x3d','JinLidDroop.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline50);
Inline51 := TInlineNode.Create;;
Inline51.SetUrl(['../resources/JinSlit.x3d','JinSlit.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline51);
Inline52 := TInlineNode.Create;;
Inline52.SetUrl(['../resources/JinEyesClosed.x3d','JinEyesClosed.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline52);
Inline53 := TInlineNode.Create;;
Inline53.SetUrl(['../resources/JinSquint.x3d','JinSquint.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline53);
Inline54 := TInlineNode.Create;;
Inline54.SetUrl(['../resources/JinBlink.x3d','JinBlink.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline54);
Inline55 := TInlineNode.Create;;
Inline55.SetUrl(['../resources/JinWink.x3d','JinWink.x3d']);
{ METHOD .FdChildren.Add }
Switch25.FdChildren.Add(Inline55);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Switch25);
{ Script to handle selection logic }
Script56 := TScriptNode.Create;;
MFString57 := TMFString.CreateUndefined(Script56, false, 'menuItems');
{ METHOD .Fd.AddCustomField }
Script56.AddCustomField(MFString57);
SFInt3258 := TSFInt32.CreateUndefined(Script56, false, 'selection');
{ METHOD .Fd.AddCustomField }
Script56.AddCustomField(SFInt3258);
SFVec3f59 := TSFVec3f.CreateUndefined(Script56, false, 'touchPoint');
end;

procedure InitMenuPart5;
begin

{ METHOD .Fd.AddCustomField }
Script56.AddCustomField(SFVec3f59);
SFFloat60 := TSFFloat.CreateUndefined(Script56, false, 'spacing');
SFFloat60.Value := '1.2';
{ METHOD .Fd.AddCustomField }
Script56.AddCustomField(SFFloat60);
SFFloat61 := TSFFloat.CreateUndefined(Script56, false, 'size');
SFFloat61.Value := '2.4';
{ METHOD .Fd.AddCustomField }
Script56.AddCustomField(SFFloat61);
SFFloat62 := TSFFloat.CreateUndefined(Script56, false, 'menuCenterY');
{ METHOD .Fd.AddCustomField }
Script56.AddCustomField(SFFloat62);
SFFloat63 := TSFFloat.CreateUndefined(Script56, false, 'itemHeight');
{ METHOD .Fd.AddCustomField }
Script56.AddCustomField(SFFloat63);

Script56.SetSourceCode('''ecmascript:\n"+
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
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Script56);
{ ROUTEs to connect everything }
{ Original "MenuTouchSensor.EventHitPoint_changed TO MenuScript.touchPoint }
{ Sample MenuTouchSensor.EventHitPoint_changed TO MenuScript.touchPoint}
Group11.AddRoute(TouchSensor13.EventHitPoint_changed, SFVec3f59);
{ METHOD .AddX3DROUTE }
{ Original "MenuScript.selection TO SceneSwitcher.whichChoice }
{ Sample MenuScript.selection TO SceneSwitcher.whichChoice}
Group11.AddRoute(MenuScript.undefined, Switch25.whichChoice);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype10.AddChildren([Group11]);
{ METHOD .AddX3DPrototype }
X3DPrototype7.AddX3DPrototype([X3DPrototype10]);
{ METHOD .AddX3DPrototype }
Group5.AddX3DPrototype([X3DPrototype7]);
X3DPrototype67 := TX3DPrototypeNode;
MFString68 := TMFString.CreateUndefined(X3DPrototype67, false, 'menuItems');
MFString68.Value := '\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\"';
{ METHOD .AddMFString }
X3DPrototype67.AddMFString([MFString68]);
{ METHOD .AddX3DPrototype }
Group5.AddX3DPrototype([X3DPrototype67]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group5]);
end;

function CreateMenu: TX3DRootNode;
begin
InitMenuPart0;
InitMenuPart1;
InitMenuPart2;
InitMenuPart3;
InitMenuPart4;
InitMenuPart5;
Result := X3D0;
end;

begin
end.
