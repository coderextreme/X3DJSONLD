function Menu: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group4: TGroupNode;
Viewpoint5: TViewpointNode;
ProtoDeclare6: TProtoDeclareNode;
ProtoInterface7: TProtoInterfaceNode;
field8: TfieldNode;
ProtoBody9: TProtoBodyNode;
Group10: TGroupNode;
Transform11: TTransformNode;
TouchSensor12: TTouchSensorNode;
Shape13: TShapeNode;
Appearance14: TAppearanceNode;
Material15: TMaterialNode;
Text16: TTextNode;
IS17: TISNode;
connect18: TconnectNode;
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
field57: TfieldNode;
field58: TfieldNode;
field59: TfieldNode;
field60: TfieldNode;
field61: TfieldNode;
field62: TfieldNode;
field63: TfieldNode;
IS64: TISNode;
connect65: TconnectNode;
ProtoInstance68: TProtoInstanceNode;
fieldValue69: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Menu.x3d';
X3D0.Meta['description'] := 'X3D scene with a Switch of Inlines controlled by a menu';
Group4 := TGroupNode.Create;
{ Viewpoint and any other scene setup }
Viewpoint5 := TViewpointNode.Create;
Viewpoint5.Position := Vector3(0,20,110);
{ .AddChildren }
Group4.AddChildren([Viewpoint5]);
{ Menu prototype declaration }
ProtoDeclare6 := TProtoDeclareNode.Create;
ProtoDeclare6.NameField := 'Menu';
ProtoInterface7 := TProtoInterfaceNode.Create;
field8 := TfieldNode.Create;
field8.NameField := 'menuItems';
field8.Type := 'MFString';
field8.AccessType := 'initializeOnly';
{ .AddField }
ProtoInterface7.Field := field8;
{ .SetProtoInterface }
ProtoDeclare6.ProtoInterface := ProtoInterface7;
ProtoBody9 := TProtoBodyNode.Create;
Group10 := TGroupNode.Create;
Transform11 := TTransformNode.Create;
Transform11.Translation := Vector3(48,27,0);
TouchSensor12 := TTouchSensorNode.Create;
{ .AddChildren }
Transform11.AddChildren([TouchSensor12]);
Shape13 := TShapeNode.Create;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance14.Material := Material15;
{ .SetAppearance }
Shape13.Appearance := Appearance14;
Text16 := TTextNode.Create;
IS17 := TISNode.Create;
connect18 := TconnectNode.Create;
connect18.NodeField := 'string';
connect18.ProtoField := 'menuItems';
{ .AddConnect }
IS17.Connect := connect18;
{ .SetIS }
Text16.IS := IS17;
FontStyle19 := TFontStyleNode.Create;
FontStyle19.Size := 2.4;
FontStyle19.Spacing := 1.2;
FontStyle19.Justify := fjMiddle;
FontStyle19.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text16.FontStyle := FontStyle19;
{ .SetGeometry }
Shape13.Geometry := Text16;
{ .AddChild }
Transform11.AddChildren([Shape13]);
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape20.Appearance := Appearance21;
IndexedFaceSet23 := TIndexedFaceSetNode.Create;
IndexedFaceSet23.SetCoordIndex([0,1,2,3,-1]);
Coordinate24 := TCoordinateNode.Create;
Coordinate24.SetPoint([Vector3(25,36,-0.01),Vector3(-25,36,-0.01),Vector3(-25,-51,-0.01),Vector3(25,-51,-0.01)]);
{ .SetCoord }
IndexedFaceSet23.Coord := Coordinate24;
{ .SetGeometry }
Shape20.Geometry := IndexedFaceSet23;
{ .AddChild }
Transform11.AddChildren([Shape20]);
{ .AddChildren }
Group10.AddChildren([Transform11]);
Switch25 := TSwitchNode.Create;
Switch25.WhichChoice := 0;
Inline26 := TInlineNode.Create;
Inline26.SetUrl(['../resources/JinInnerBrowRaiser.x3d','JinInnerBrowRaiser.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline26]);
Inline27 := TInlineNode.Create;
Inline27.SetUrl(['../resources/JinOuterBrowRaiser.x3d','JinOuterBrowRaiser.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline27]);
Inline28 := TInlineNode.Create;
Inline28.SetUrl(['../resources/JinBrowLowerer.x3d','JinBrowLowerer.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline28]);
Inline29 := TInlineNode.Create;
Inline29.SetUrl(['../resources/JinUpperLidRaiser.x3d','JinUpperLidRaiser.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline29]);
Inline30 := TInlineNode.Create;
Inline30.SetUrl(['../resources/JinCheekRaiser.x3d','JinCheekRaiser.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline30]);
Inline31 := TInlineNode.Create;
Inline31.SetUrl(['../resources/JinLidTightener.x3d','JinLidTightener.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline31]);
Inline32 := TInlineNode.Create;
Inline32.SetUrl(['../resources/JinNoseWrinkler.x3d','JinNoseWrinkler.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline32]);
Inline33 := TInlineNode.Create;
Inline33.SetUrl(['../resources/JinUpperLipRaiser.x3d','JinUpperLipRaiser.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline33]);
Inline34 := TInlineNode.Create;
Inline34.SetUrl(['../resources/JinNasolabialDeepener.x3d','JinNasolabialDeepener.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline34]);
Inline35 := TInlineNode.Create;
Inline35.SetUrl(['../resources/JinLipCornerPuller.x3d','JinLipCornerPuller.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline35]);
Inline36 := TInlineNode.Create;
Inline36.SetUrl(['../resources/JinCheekPuffer.x3d','JinCheekPuffer.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline36]);
Inline37 := TInlineNode.Create;
Inline37.SetUrl(['../resources/JinDimpler.x3d','JinDimpler.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline37]);
Inline38 := TInlineNode.Create;
Inline38.SetUrl(['../resources/JinLipCornerDepressor.x3d','JinLipCornerDepressor.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline38]);
Inline39 := TInlineNode.Create;
Inline39.SetUrl(['../resources/JinLowerLipDepressor.x3d','JinLowerLipDepressor.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline39]);
Inline40 := TInlineNode.Create;
Inline40.SetUrl(['../resources/JinChinRaiser.x3d','JinChinRaiser.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline40]);
Inline41 := TInlineNode.Create;
Inline41.SetUrl(['../resources/JinLipPuckerer.x3d','JinLipPuckerer.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline41]);
Inline42 := TInlineNode.Create;
Inline42.SetUrl(['../resources/JinLipStretcher.x3d','JinLipStretcher.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline42]);
Inline43 := TInlineNode.Create;
Inline43.SetUrl(['../resources/JinLipFunneler.x3d','JinLipFunneler.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline43]);
Inline44 := TInlineNode.Create;
Inline44.SetUrl(['../resources/JinLipTightener.x3d','JinLipTightener.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline44]);
Inline45 := TInlineNode.Create;
Inline45.SetUrl(['../resources/JinLipPressor.x3d','JinLipPressor.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline45]);
Inline46 := TInlineNode.Create;
Inline46.SetUrl(['../resources/JinLipsPart.x3d','JinLipsPart.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline46]);
Inline47 := TInlineNode.Create;
Inline47.SetUrl(['../resources/JinJawDrop.x3d','JinJawDrop.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline47]);
Inline48 := TInlineNode.Create;
Inline48.SetUrl(['../resources/JinMouthStretch.x3d','JinMouthStretch.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline48]);
Inline49 := TInlineNode.Create;
Inline49.SetUrl(['../resources/JinLipSuck.x3d','JinLipSuck.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline49]);
Inline50 := TInlineNode.Create;
Inline50.SetUrl(['../resources/JinLidDroop.x3d','JinLidDroop.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline50]);
Inline51 := TInlineNode.Create;
Inline51.SetUrl(['../resources/JinSlit.x3d','JinSlit.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline51]);
Inline52 := TInlineNode.Create;
Inline52.SetUrl(['../resources/JinEyesClosed.x3d','JinEyesClosed.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline52]);
Inline53 := TInlineNode.Create;
Inline53.SetUrl(['../resources/JinSquint.x3d','JinSquint.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline53]);
Inline54 := TInlineNode.Create;
Inline54.SetUrl(['../resources/JinBlink.x3d','JinBlink.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline54]);
Inline55 := TInlineNode.Create;
Inline55.SetUrl(['../resources/JinWink.x3d','JinWink.x3d']);
{ .AddChildren }
Switch25.AddChildren([Inline55]);
{ .AddChildren }
Group10.AddChildren([Switch25]);
{ Script to handle selection logic }
Script56 := TScriptNode.Create;
field57 := TfieldNode.Create;
field57.NameField := 'menuItems';
field57.Type := 'MFString';
field57.AccessType := 'initializeOnly';
{ .AddField }
Script56.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'selection';
field58.Type := 'SFInt32';
field58.AccessType := 'outputOnly';
{ .AddField }
Script56.Field := field58;
field59 := TfieldNode.Create;
field59.NameField := 'touchPoint';
field59.Type := 'SFVec3f';
field59.AccessType := 'inputOnly';
{ .AddField }
Script56.Field := field59;
field60 := TfieldNode.Create;
field60.NameField := 'spacing';
field60.Type := 'SFFloat';
field60.AccessType := 'initializeOnly';
field60.Value := '1.2';
{ .AddField }
Script56.Field := field60;
field61 := TfieldNode.Create;
field61.NameField := 'size';
field61.Type := 'SFFloat';
field61.AccessType := 'initializeOnly';
field61.Value := '2.4';
{ .AddField }
Script56.Field := field61;
field62 := TfieldNode.Create;
field62.NameField := 'menuCenterY';
field62.Type := 'SFFloat';
field62.AccessType := 'initializeOnly';
{ .AddField }
Script56.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'itemHeight';
field63.Type := 'SFFloat';
field63.AccessType := 'initializeOnly';
{ .AddField }
Script56.Field := field63;
IS64 := TISNode.Create;
connect65 := TconnectNode.Create;
connect65.NodeField := 'menuItems';
connect65.ProtoField := 'menuItems';
{ .AddConnect }
IS64.Connect := connect65;
{ .SetIS }
Script56.IS := IS64;

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
{ .AddChildren }
Group10.AddChildren([Script56]);
{ ROUTEs to connect everything }
Group10.AddRoute(TouchSensor12.EventHitpoint_changed, Script56.FdTouchpoint);
{ .AddX3DRoute }
Group10.AddRoute(Script56.FdSelection, Switch25.FdWhichchoice);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody9.AddChildren([Group10]);
{ .SetProtoBody }
ProtoDeclare6.ProtoBody := ProtoBody9;
{ .AddChildren }
Group4.AddChildren([ProtoDeclare6]);
ProtoInstance68 := TProtoInstanceNode.Create;
ProtoInstance68.NameField := 'Menu';
fieldValue69 := TfieldValueNode.Create;
fieldValue69.NameField := 'menuItems';
fieldValue69.Value := '\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\"';
{ .AddFieldValue }
ProtoInstance68.FieldValue := fieldValue69;
{ .AddChildren }
Group4.AddChildren([ProtoInstance68]);
{ .AddGroup }
X3D0.AddChildren([Group4]);
Result := X3D0;
end;
