function bubs3: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
Background10: TBackgroundNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
Sphere13: TSphereNode;
Appearance14: TAppearanceNode;
Material15: TMaterialNode;
Script16: TScriptNode;
field17: TfieldNode;
field18: TfieldNode;
field19: TfieldNode;
field20: TfieldNode;
field21: TfieldNode;
TimeSensor22: TTimeSensorNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Sphere28: TSphereNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
Script31: TScriptNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
TimeSensor37: TTimeSensorNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Sphere43: TSphereNode;
Appearance44: TAppearanceNode;
Material45: TMaterialNode;
Script46: TScriptNode;
field47: TfieldNode;
field48: TfieldNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
TimeSensor52: TTimeSensorNode;
Transform56: TTransformNode;
Shape57: TShapeNode;
Sphere58: TSphereNode;
Appearance59: TAppearanceNode;
Material60: TMaterialNode;
Script61: TScriptNode;
field62: TfieldNode;
field63: TfieldNode;
field64: TfieldNode;
field65: TfieldNode;
field66: TfieldNode;
TimeSensor67: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'bubs3.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Position := Vector3(0,0,4);
Viewpoint9.Orientation := Vector4(1,0,0,0);
Viewpoint9.Description := 'Bubbles in action';
{ .AddChildren }
Group7.AddChildren([Viewpoint9]);
Background10 := TBackgroundNode.Create;
Background10.SetBackUrl(['../resources/images/BK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background10.SetBottomUrl(['../resources/images/BT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background10.SetFrontUrl(['../resources/images/FR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background10.SetLeftUrl(['../resources/images/LF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background10.SetRightUrl(['../resources/images/RT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background10.SetTopUrl(['../resources/images/TP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
{ .AddChildren }
Group7.AddChildren([Background10]);
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
Sphere13.Radius := 0.25;
{ .SetGeometry }
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(1,0,0);
Material15.Transparency := 0.2;
{ .SetMaterial }
Appearance14.Material := Material15;
{ .SetAppearance }
Shape12.Appearance := Appearance14;
{ .AddChild }
Transform11.AddChildren([Shape12]);
Script16 := TScriptNode.Create;
field17 := TfieldNode.Create;
field17.NameField := 'scale';
field17.AccessType := 'inputOutput';
field17.Type := 'SFVec3f';
field17.Value := '1 1 1';
{ .AddField }
Script16.Field := field17;
field18 := TfieldNode.Create;
field18.NameField := 'translation';
field18.AccessType := 'inputOutput';
field18.Type := 'SFVec3f';
field18.Value := '0 0 0';
{ .AddField }
Script16.Field := field18;
field19 := TfieldNode.Create;
field19.NameField := 'velocity';
field19.AccessType := 'inputOutput';
field19.Type := 'SFVec3f';
field19.Value := '0 0 0';
{ .AddField }
Script16.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'scalvel';
field20.AccessType := 'inputOutput';
field20.Type := 'SFVec3f';
field20.Value := '0 0 0';
{ .AddField }
Script16.Field := field20;
field21 := TfieldNode.Create;
field21.NameField := 'set_fraction';
field21.AccessType := 'inputOnly';
field21.Type := 'SFFloat';
{ .AddField }
Script16.Field := field21;

Script16.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}''');
{ .AddChildren }
Transform11.AddChildren([Script16]);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.CycleInterval := 10;
TimeSensor22.Loop := True;
{ .AddChildren }
Transform11.AddChildren([TimeSensor22]);
Transform11.AddRoute(Script16.EventTranslation_changed, 'DECLBubble_transform'.FdTranslation);
{ .AddX3DRoute }
Transform11.AddRoute(Script16.EventScale_changed, 'DECLBubble_transform'.FdScale);
{ .AddX3DRoute }
Transform11.AddRoute(TimeSensor22.EventFraction_changed, Script16.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform11]);
Transform26 := TTransformNode.Create;
Shape27 := TShapeNode.Create;
Sphere28 := TSphereNode.Create;
Sphere28.Radius := 0.25;
{ .SetGeometry }
Shape27.Geometry := Sphere28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1,0,0);
Material30.Transparency := 0.2;
{ .SetMaterial }
Appearance29.Material := Material30;
{ .SetAppearance }
Shape27.Appearance := Appearance29;
{ .AddChild }
Transform26.AddChildren([Shape27]);
Script31 := TScriptNode.Create;
field32 := TfieldNode.Create;
field32.NameField := 'scale';
field32.AccessType := 'inputOutput';
field32.Type := 'SFVec3f';
field32.Value := '1 1 1';
{ .AddField }
Script31.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'translation';
field33.AccessType := 'inputOutput';
field33.Type := 'SFVec3f';
field33.Value := '0 0 0';
{ .AddField }
Script31.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'velocity';
field34.AccessType := 'inputOutput';
field34.Type := 'SFVec3f';
field34.Value := '0 0 0';
{ .AddField }
Script31.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'scalvel';
field35.AccessType := 'inputOutput';
field35.Type := 'SFVec3f';
field35.Value := '0 0 0';
{ .AddField }
Script31.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'set_fraction';
field36.AccessType := 'inputOnly';
field36.Type := 'SFFloat';
{ .AddField }
Script31.Field := field36;

Script31.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}''');
{ .AddChildren }
Transform26.AddChildren([Script31]);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.CycleInterval := 10;
TimeSensor37.Loop := True;
{ .AddChildren }
Transform26.AddChildren([TimeSensor37]);
Transform26.AddRoute(Script31.EventTranslation_changed, 'DECLBubble_transform'.FdTranslation);
{ .AddX3DRoute }
Transform26.AddRoute(Script31.EventScale_changed, 'DECLBubble_transform'.FdScale);
{ .AddX3DRoute }
Transform26.AddRoute(TimeSensor37.EventFraction_changed, Script31.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform26]);
Transform41 := TTransformNode.Create;
Shape42 := TShapeNode.Create;
Sphere43 := TSphereNode.Create;
Sphere43.Radius := 0.25;
{ .SetGeometry }
Shape42.Geometry := Sphere43;
Appearance44 := TAppearanceNode.Create;
Material45 := TMaterialNode.Create;
Material45.DiffuseColor := Vector3(1,0,0);
Material45.Transparency := 0.2;
{ .SetMaterial }
Appearance44.Material := Material45;
{ .SetAppearance }
Shape42.Appearance := Appearance44;
{ .AddChild }
Transform41.AddChildren([Shape42]);
Script46 := TScriptNode.Create;
field47 := TfieldNode.Create;
field47.NameField := 'scale';
field47.AccessType := 'inputOutput';
field47.Type := 'SFVec3f';
field47.Value := '1 1 1';
{ .AddField }
Script46.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'translation';
field48.AccessType := 'inputOutput';
field48.Type := 'SFVec3f';
field48.Value := '0 0 0';
{ .AddField }
Script46.Field := field48;
field49 := TfieldNode.Create;
field49.NameField := 'velocity';
field49.AccessType := 'inputOutput';
field49.Type := 'SFVec3f';
field49.Value := '0 0 0';
{ .AddField }
Script46.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'scalvel';
field50.AccessType := 'inputOutput';
field50.Type := 'SFVec3f';
field50.Value := '0 0 0';
{ .AddField }
Script46.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'set_fraction';
field51.AccessType := 'inputOnly';
field51.Type := 'SFFloat';
{ .AddField }
Script46.Field := field51;

Script46.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}''');
{ .AddChildren }
Transform41.AddChildren([Script46]);
TimeSensor52 := TTimeSensorNode.Create;
TimeSensor52.CycleInterval := 10;
TimeSensor52.Loop := True;
{ .AddChildren }
Transform41.AddChildren([TimeSensor52]);
Transform41.AddRoute(Script46.EventTranslation_changed, 'DECLBubble_transform'.FdTranslation);
{ .AddX3DRoute }
Transform41.AddRoute(Script46.EventScale_changed, 'DECLBubble_transform'.FdScale);
{ .AddX3DRoute }
Transform41.AddRoute(TimeSensor52.EventFraction_changed, Script46.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform41]);
Transform56 := TTransformNode.Create;
Shape57 := TShapeNode.Create;
Sphere58 := TSphereNode.Create;
Sphere58.Radius := 0.25;
{ .SetGeometry }
Shape57.Geometry := Sphere58;
Appearance59 := TAppearanceNode.Create;
Material60 := TMaterialNode.Create;
Material60.DiffuseColor := Vector3(1,0,0);
Material60.Transparency := 0.2;
{ .SetMaterial }
Appearance59.Material := Material60;
{ .SetAppearance }
Shape57.Appearance := Appearance59;
{ .AddChild }
Transform56.AddChildren([Shape57]);
Script61 := TScriptNode.Create;
field62 := TfieldNode.Create;
field62.NameField := 'scale';
field62.AccessType := 'inputOutput';
field62.Type := 'SFVec3f';
field62.Value := '1 1 1';
{ .AddField }
Script61.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'translation';
field63.AccessType := 'inputOutput';
field63.Type := 'SFVec3f';
field63.Value := '0 0 0';
{ .AddField }
Script61.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'velocity';
field64.AccessType := 'inputOutput';
field64.Type := 'SFVec3f';
field64.Value := '0 0 0';
{ .AddField }
Script61.Field := field64;
field65 := TfieldNode.Create;
field65.NameField := 'scalvel';
field65.AccessType := 'inputOutput';
field65.Type := 'SFVec3f';
field65.Value := '0 0 0';
{ .AddField }
Script61.Field := field65;
field66 := TfieldNode.Create;
field66.NameField := 'set_fraction';
field66.AccessType := 'inputOnly';
field66.Type := 'SFFloat';
{ .AddField }
Script61.Field := field66;

Script61.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}''');
{ .AddChildren }
Transform56.AddChildren([Script61]);
TimeSensor67 := TTimeSensorNode.Create;
TimeSensor67.CycleInterval := 10;
TimeSensor67.Loop := True;
{ .AddChildren }
Transform56.AddChildren([TimeSensor67]);
Transform56.AddRoute(Script61.EventTranslation_changed, 'DECLBubble_transform'.FdTranslation);
{ .AddX3DRoute }
Transform56.AddRoute(Script61.EventScale_changed, 'DECLBubble_transform'.FdScale);
{ .AddX3DRoute }
Transform56.AddRoute(TimeSensor67.EventFraction_changed, Script61.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform56]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
