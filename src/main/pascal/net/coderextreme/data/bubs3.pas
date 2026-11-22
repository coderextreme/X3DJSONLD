unit bubs3;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createbubs3: TX3DRootNode;

implementation

uses CastleVectors;

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
SFVec3f17: TSFVec3f;
SFVec3f18: TSFVec3f;
SFVec3f19: TSFVec3f;
SFVec3f20: TSFVec3f;
SFFloat21: TSFFloat;
TimeSensor22: TTimeSensorNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Sphere28: TSphereNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
Script31: TScriptNode;
SFVec3f32: TSFVec3f;
SFVec3f33: TSFVec3f;
SFVec3f34: TSFVec3f;
SFVec3f35: TSFVec3f;
SFFloat36: TSFFloat;
TimeSensor37: TTimeSensorNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Sphere43: TSphereNode;
Appearance44: TAppearanceNode;
Material45: TMaterialNode;
Script46: TScriptNode;
SFVec3f47: TSFVec3f;
SFVec3f48: TSFVec3f;
SFVec3f49: TSFVec3f;
SFVec3f50: TSFVec3f;
SFFloat51: TSFFloat;
TimeSensor52: TTimeSensorNode;
Transform56: TTransformNode;
Shape57: TShapeNode;
Sphere58: TSphereNode;
Appearance59: TAppearanceNode;
Material60: TMaterialNode;
Script61: TScriptNode;
SFVec3f62: TSFVec3f;
SFVec3f63: TSFVec3f;
SFVec3f64: TSFVec3f;
SFVec3f65: TSFVec3f;
SFFloat66: TSFFloat;
TimeSensor67: TTimeSensorNode;

procedure Initbubs3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'bubs3.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Position := Vector3(0,0,4);
Viewpoint9.Orientation := Vector4(1,0,0,0);
Viewpoint9.Description := 'Bubbles in action';
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint9);
Background10 := TBackgroundNode.Create;
Background10.SetBackUrl(['../resources/images/BK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background10.SetBottomUrl(['../resources/images/BT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background10.SetFrontUrl(['../resources/images/FR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background10.SetLeftUrl(['../resources/images/LF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background10.SetRightUrl(['../resources/images/RT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background10.SetTopUrl(['../resources/images/TP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Background10);
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
Sphere13.Radius := 0.25;
{ METHOD .Geometry }
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(1,0,0);
Material15.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance14.Material := Material15;
{ METHOD .Appearance }
Shape12.Appearance := Appearance14;
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(Shape12);
Script16 := TScriptNode.Create;
SFVec3f17 := TSFVec3f.CreateUndefined(Script16, false, 'scale');
end;

procedure Initbubs3Part1;
begin

SFVec3f17.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(SFVec3f17);
SFVec3f18 := TSFVec3f.CreateUndefined(Script16, false, 'translation');
SFVec3f18.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(SFVec3f18);
SFVec3f19 := TSFVec3f.CreateUndefined(Script16, false, 'velocity');
SFVec3f19.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(SFVec3f19);
SFVec3f20 := TSFVec3f.CreateUndefined(Script16, false, 'scalvel');
SFVec3f20.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(SFVec3f20);
SFFloat21 := TSFFloat.CreateUndefined(Script16, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(SFFloat21);

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
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(Script16);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.CycleInterval := 10;
TimeSensor22.Loop := True;
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(TimeSensor22);
{ Original "DECLBubble_bubbleA_bounce.EventTranslation_changed TO DECLBubble_transformA.EventSet_translation }
{ Sample DECLBubble_bubbleA_bounce.EventTranslation_changed TO DECLBubble_transformA.EventSet_translation}
Transform11.AddRoute(Script16.EventTranslation_changed, Transform11.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "DECLBubble_bubbleA_bounce.EventScale_changed TO DECLBubble_transformA.scale }
{ Sample DECLBubble_bubbleA_bounce.EventScale_changed TO DECLBubble_transformA.scale}
Transform11.AddRoute(Script16.EventScale_changed, Transform11.set_scale);
{ METHOD .AddX3DROUTE }
{ Original "DECLBubble_bubbleA_bubbleClock.EventFraction_changed TO DECLBubble_bubbleA_bounce.EventSet_fraction }
{ Sample DECLBubble_bubbleA_bubbleClock.EventFraction_changed TO DECLBubble_bubbleA_bounce.EventSet_fraction}
Transform11.AddRoute(TimeSensor22.EventFraction_changed, Script16.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform11);
Transform26 := TTransformNode.Create;
Shape27 := TShapeNode.Create;
Sphere28 := TSphereNode.Create;
Sphere28.Radius := 0.25;
{ METHOD .Geometry }
Shape27.Geometry := Sphere28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1,0,0);
Material30.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance29.Material := Material30;
{ METHOD .Appearance }
Shape27.Appearance := Appearance29;
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(Shape27);
Script31 := TScriptNode.Create;
SFVec3f32 := TSFVec3f.CreateUndefined(Script31, false, 'scale');
SFVec3f32.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script31.AddCustomField(SFVec3f32);
SFVec3f33 := TSFVec3f.CreateUndefined(Script31, false, 'translation');
SFVec3f33.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script31.AddCustomField(SFVec3f33);
SFVec3f34 := TSFVec3f.CreateUndefined(Script31, false, 'velocity');
SFVec3f34.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script31.AddCustomField(SFVec3f34);
SFVec3f35 := TSFVec3f.CreateUndefined(Script31, false, 'scalvel');
SFVec3f35.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script31.AddCustomField(SFVec3f35);
SFFloat36 := TSFFloat.CreateUndefined(Script31, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script31.AddCustomField(SFFloat36);

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
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(Script31);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.CycleInterval := 10;
TimeSensor37.Loop := True;
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(TimeSensor37);
{ Original "DECLBubble_bubbleB_bounce.EventTranslation_changed TO DECLBubble_transformB.EventSet_translation }
{ Sample DECLBubble_bubbleB_bounce.EventTranslation_changed TO DECLBubble_transformB.EventSet_translation}
Transform26.AddRoute(Script31.EventTranslation_changed, Transform26.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "DECLBubble_bubbleB_bounce.EventScale_changed TO DECLBubble_transformB.scale }
{ Sample DECLBubble_bubbleB_bounce.EventScale_changed TO DECLBubble_transformB.scale}
Transform26.AddRoute(Script31.EventScale_changed, Transform26.set_scale);
{ METHOD .AddX3DROUTE }
{ Original "DECLBubble_bubbleB_bubbleClock.EventFraction_changed TO DECLBubble_bubbleB_bounce.EventSet_fraction }
{ Sample DECLBubble_bubbleB_bubbleClock.EventFraction_changed TO DECLBubble_bubbleB_bounce.EventSet_fraction}
Transform26.AddRoute(TimeSensor37.EventFraction_changed, Script31.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform26);
Transform41 := TTransformNode.Create;
Shape42 := TShapeNode.Create;
Sphere43 := TSphereNode.Create;
Sphere43.Radius := 0.25;
{ METHOD .Geometry }
Shape42.Geometry := Sphere43;
Appearance44 := TAppearanceNode.Create;
Material45 := TMaterialNode.Create;
Material45.DiffuseColor := Vector3(1,0,0);
Material45.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance44.Material := Material45;
{ METHOD .Appearance }
Shape42.Appearance := Appearance44;
{ METHOD .FdChildren.Add }
Transform41.FdChildren.Add(Shape42);
Script46 := TScriptNode.Create;
SFVec3f47 := TSFVec3f.CreateUndefined(Script46, false, 'scale');
SFVec3f47.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFVec3f47);
SFVec3f48 := TSFVec3f.CreateUndefined(Script46, false, 'translation');
SFVec3f48.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFVec3f48);
SFVec3f49 := TSFVec3f.CreateUndefined(Script46, false, 'velocity');
SFVec3f49.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFVec3f49);
SFVec3f50 := TSFVec3f.CreateUndefined(Script46, false, 'scalvel');
SFVec3f50.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFVec3f50);
SFFloat51 := TSFFloat.CreateUndefined(Script46, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFFloat51);

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
{ METHOD .FdChildren.Add }
Transform41.FdChildren.Add(Script46);
TimeSensor52 := TTimeSensorNode.Create;
TimeSensor52.CycleInterval := 10;
TimeSensor52.Loop := True;
{ METHOD .FdChildren.Add }
Transform41.FdChildren.Add(TimeSensor52);
{ Original "DECLBubble_bubbleC_bounce.EventTranslation_changed TO DECLBubble_transformC.EventSet_translation }
{ Sample DECLBubble_bubbleC_bounce.EventTranslation_changed TO DECLBubble_transformC.EventSet_translation}
Transform41.AddRoute(Script46.EventTranslation_changed, Transform41.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "DECLBubble_bubbleC_bounce.EventScale_changed TO DECLBubble_transformC.scale }
{ Sample DECLBubble_bubbleC_bounce.EventScale_changed TO DECLBubble_transformC.scale}
Transform41.AddRoute(Script46.EventScale_changed, Transform41.set_scale);
{ METHOD .AddX3DROUTE }
{ Original "DECLBubble_bubbleC_bubbleClock.EventFraction_changed TO DECLBubble_bubbleC_bounce.EventSet_fraction }
{ Sample DECLBubble_bubbleC_bubbleClock.EventFraction_changed TO DECLBubble_bubbleC_bounce.EventSet_fraction}
Transform41.AddRoute(TimeSensor52.EventFraction_changed, Script46.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform41);
Transform56 := TTransformNode.Create;
Shape57 := TShapeNode.Create;
Sphere58 := TSphereNode.Create;
Sphere58.Radius := 0.25;
{ METHOD .Geometry }
Shape57.Geometry := Sphere58;
Appearance59 := TAppearanceNode.Create;
Material60 := TMaterialNode.Create;
Material60.DiffuseColor := Vector3(1,0,0);
Material60.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance59.Material := Material60;
{ METHOD .Appearance }
Shape57.Appearance := Appearance59;
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(Shape57);
Script61 := TScriptNode.Create;
SFVec3f62 := TSFVec3f.CreateUndefined(Script61, false, 'scale');
SFVec3f62.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script61.AddCustomField(SFVec3f62);
SFVec3f63 := TSFVec3f.CreateUndefined(Script61, false, 'translation');
SFVec3f63.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script61.AddCustomField(SFVec3f63);
SFVec3f64 := TSFVec3f.CreateUndefined(Script61, false, 'velocity');
SFVec3f64.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script61.AddCustomField(SFVec3f64);
SFVec3f65 := TSFVec3f.CreateUndefined(Script61, false, 'scalvel');
SFVec3f65.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script61.AddCustomField(SFVec3f65);
SFFloat66 := TSFFloat.CreateUndefined(Script61, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script61.AddCustomField(SFFloat66);

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
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(Script61);
TimeSensor67 := TTimeSensorNode.Create;
TimeSensor67.CycleInterval := 10;
TimeSensor67.Loop := True;
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(TimeSensor67);
{ Original "DECLBubble_bubbleD_bounce.EventTranslation_changed TO DECLBubble_transformD.EventSet_translation }
{ Sample DECLBubble_bubbleD_bounce.EventTranslation_changed TO DECLBubble_transformD.EventSet_translation}
Transform56.AddRoute(Script61.EventTranslation_changed, Transform56.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "DECLBubble_bubbleD_bounce.EventScale_changed TO DECLBubble_transformD.scale }
{ Sample DECLBubble_bubbleD_bounce.EventScale_changed TO DECLBubble_transformD.scale}
Transform56.AddRoute(Script61.EventScale_changed, Transform56.set_scale);
{ METHOD .AddX3DROUTE }
{ Original "DECLBubble_bubbleD_bubbleClock.EventFraction_changed TO DECLBubble_bubbleD_bounce.EventSet_fraction }
{ Sample DECLBubble_bubbleD_bubbleClock.EventFraction_changed TO DECLBubble_bubbleD_bounce.EventSet_fraction}
Transform56.AddRoute(TimeSensor67.EventFraction_changed, Script61.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform56);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createbubs3: TX3DRootNode;
begin
Initbubs3Part0;
Initbubs3Part1;
Result := X3D0;
end;

begin
end.
