unit bubs3;

interface

uses X3DNodes;

function Createbubs3: TX3DRootNode;

implementation

uses CastleVectors;

function Createbubs3: TX3DRootNode;
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
X3DField17: TX3DField;
X3DField18: TX3DField;
X3DField19: TX3DField;
X3DField20: TX3DField;
X3DField21: TX3DField;
TimeSensor22: TTimeSensorNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Sphere28: TSphereNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
Script31: TScriptNode;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
TimeSensor37: TTimeSensorNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Sphere43: TSphereNode;
Appearance44: TAppearanceNode;
Material45: TMaterialNode;
Script46: TScriptNode;
X3DField47: TX3DField;
X3DField48: TX3DField;
X3DField49: TX3DField;
X3DField50: TX3DField;
X3DField51: TX3DField;
TimeSensor52: TTimeSensorNode;
Transform56: TTransformNode;
Shape57: TShapeNode;
Sphere58: TSphereNode;
Appearance59: TAppearanceNode;
Material60: TMaterialNode;
Script61: TScriptNode;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
X3DField66: TX3DField;
TimeSensor67: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
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
X3DField17 := TX3DField.Create;
X3DField17.NameField := 'scale';
X3DField17.AccessType := 'inputOutput';
X3DField17.Type := 'SFVec3f';
X3DField17.Value := '1 1 1';
{ .SetX3DField }
Script16.X3DField := X3DField17;
X3DField18 := TX3DField.Create;
X3DField18.NameField := 'translation';
X3DField18.AccessType := 'inputOutput';
X3DField18.Type := 'SFVec3f';
X3DField18.Value := '0 0 0';
{ .AddX3DField }
Script16.X3DField := X3DField18;
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'velocity';
X3DField19.AccessType := 'inputOutput';
X3DField19.Type := 'SFVec3f';
X3DField19.Value := '0 0 0';
{ .AddX3DField }
Script16.X3DField := X3DField19;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'scalvel';
X3DField20.AccessType := 'inputOutput';
X3DField20.Type := 'SFVec3f';
X3DField20.Value := '0 0 0';
{ .AddX3DField }
Script16.X3DField := X3DField20;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'set_fraction';
X3DField21.AccessType := 'inputOnly';
X3DField21.Type := 'SFFloat';
{ .AddX3DField }
Script16.X3DField := X3DField21;

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
Transform11.AddRoute(Script16.EventTranslation_changed, Transform11.FdTranslation);
{ .AddX3DRoute }
Transform11.AddRoute(Script16.EventScale_changed, Transform11.FdScale);
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
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'scale';
X3DField32.AccessType := 'inputOutput';
X3DField32.Type := 'SFVec3f';
X3DField32.Value := '1 1 1';
{ .SetX3DField }
Script31.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'translation';
X3DField33.AccessType := 'inputOutput';
X3DField33.Type := 'SFVec3f';
X3DField33.Value := '0 0 0';
{ .AddX3DField }
Script31.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'velocity';
X3DField34.AccessType := 'inputOutput';
X3DField34.Type := 'SFVec3f';
X3DField34.Value := '0 0 0';
{ .AddX3DField }
Script31.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'scalvel';
X3DField35.AccessType := 'inputOutput';
X3DField35.Type := 'SFVec3f';
X3DField35.Value := '0 0 0';
{ .AddX3DField }
Script31.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'set_fraction';
X3DField36.AccessType := 'inputOnly';
X3DField36.Type := 'SFFloat';
{ .AddX3DField }
Script31.X3DField := X3DField36;

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
Transform26.AddRoute(Script31.EventTranslation_changed, Transform26.FdTranslation);
{ .AddX3DRoute }
Transform26.AddRoute(Script31.EventScale_changed, Transform26.FdScale);
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
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'scale';
X3DField47.AccessType := 'inputOutput';
X3DField47.Type := 'SFVec3f';
X3DField47.Value := '1 1 1';
{ .SetX3DField }
Script46.X3DField := X3DField47;
X3DField48 := TX3DField.Create;
X3DField48.NameField := 'translation';
X3DField48.AccessType := 'inputOutput';
X3DField48.Type := 'SFVec3f';
X3DField48.Value := '0 0 0';
{ .AddX3DField }
Script46.X3DField := X3DField48;
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'velocity';
X3DField49.AccessType := 'inputOutput';
X3DField49.Type := 'SFVec3f';
X3DField49.Value := '0 0 0';
{ .AddX3DField }
Script46.X3DField := X3DField49;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'scalvel';
X3DField50.AccessType := 'inputOutput';
X3DField50.Type := 'SFVec3f';
X3DField50.Value := '0 0 0';
{ .AddX3DField }
Script46.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'set_fraction';
X3DField51.AccessType := 'inputOnly';
X3DField51.Type := 'SFFloat';
{ .AddX3DField }
Script46.X3DField := X3DField51;

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
Transform41.AddRoute(Script46.EventTranslation_changed, Transform41.FdTranslation);
{ .AddX3DRoute }
Transform41.AddRoute(Script46.EventScale_changed, Transform41.FdScale);
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
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'scale';
X3DField62.AccessType := 'inputOutput';
X3DField62.Type := 'SFVec3f';
X3DField62.Value := '1 1 1';
{ .SetX3DField }
Script61.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'translation';
X3DField63.AccessType := 'inputOutput';
X3DField63.Type := 'SFVec3f';
X3DField63.Value := '0 0 0';
{ .AddX3DField }
Script61.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'velocity';
X3DField64.AccessType := 'inputOutput';
X3DField64.Type := 'SFVec3f';
X3DField64.Value := '0 0 0';
{ .AddX3DField }
Script61.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'scalvel';
X3DField65.AccessType := 'inputOutput';
X3DField65.Type := 'SFVec3f';
X3DField65.Value := '0 0 0';
{ .AddX3DField }
Script61.X3DField := X3DField65;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'set_fraction';
X3DField66.AccessType := 'inputOnly';
X3DField66.Type := 'SFFloat';
{ .AddX3DField }
Script61.X3DField := X3DField66;

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
Transform56.AddRoute(Script61.EventTranslation_changed, Transform56.FdTranslation);
{ .AddX3DRoute }
Transform56.AddRoute(Script61.EventScale_changed, Transform56.FdScale);
{ .AddX3DRoute }
Transform56.AddRoute(TimeSensor67.EventFraction_changed, Script61.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform56]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
