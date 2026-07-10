function HAnimPoseExample: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
Background19: TBackgroundNode;
NavigationInfo20: TNavigationInfoNode;
Group21: TGroupNode;
Inline22: TInlineNode;
IMPORT23: TIMPORTNode;
LoadSensor24: TLoadSensorNode;
Inline25: TInlineNode;
Viewpoint26: TViewpointNode;
Group27: TGroupNode;
Transform28: TTransformNode;
Shape29: TShapeNode;
Text30: TTextNode;
FontStyle31: TFontStyleNode;
Appearance32: TAppearanceNode;
Material33: TMaterialNode;
Transform34: TTransformNode;
Shape35: TShapeNode;
Text36: TTextNode;
FontStyle37: TFontStyleNode;
Appearance38: TAppearanceNode;
Shape39: TShapeNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
Box42: TBoxNode;
TouchSensor43: TTouchSensorNode;
Transform45: TTransformNode;
Shape46: TShapeNode;
Text47: TTextNode;
FontStyle48: TFontStyleNode;
Appearance49: TAppearanceNode;
Shape50: TShapeNode;
Appearance51: TAppearanceNode;
Box52: TBoxNode;
TouchSensor53: TTouchSensorNode;
Transform55: TTransformNode;
Shape56: TShapeNode;
Text57: TTextNode;
FontStyle58: TFontStyleNode;
Appearance59: TAppearanceNode;
Shape60: TShapeNode;
Appearance61: TAppearanceNode;
Box62: TBoxNode;
TouchSensor63: TTouchSensorNode;
Transform65: TTransformNode;
Shape66: TShapeNode;
Text67: TTextNode;
FontStyle68: TFontStyleNode;
Appearance69: TAppearanceNode;
Shape70: TShapeNode;
Appearance71: TAppearanceNode;
Box72: TBoxNode;
TouchSensor73: TTouchSensorNode;
Transform75: TTransformNode;
Shape76: TShapeNode;
Text77: TTextNode;
FontStyle78: TFontStyleNode;
Appearance79: TAppearanceNode;
Shape80: TShapeNode;
Appearance81: TAppearanceNode;
Box82: TBoxNode;
TouchSensor83: TTouchSensorNode;
Transform85: TTransformNode;
Shape86: TShapeNode;
Text87: TTextNode;
FontStyle88: TFontStyleNode;
Appearance89: TAppearanceNode;
Shape90: TShapeNode;
Appearance91: TAppearanceNode;
Box92: TBoxNode;
TouchSensor93: TTouchSensorNode;
Transform95: TTransformNode;
Shape96: TShapeNode;
Text97: TTextNode;
FontStyle98: TFontStyleNode;
Appearance99: TAppearanceNode;
Material100: TMaterialNode;
Shape101: TShapeNode;
Appearance102: TAppearanceNode;
Box103: TBoxNode;
TouchSensor104: TTouchSensorNode;
TimeSensor105: TTimeSensorNode;
ScalarInterpolator106: TScalarInterpolatorNode;
Transform110: TTransformNode;
Shape111: TShapeNode;
Text112: TTextNode;
FontStyle113: TFontStyleNode;
Appearance114: TAppearanceNode;
Shape115: TShapeNode;
Appearance116: TAppearanceNode;
Box117: TBoxNode;
TouchSensor118: TTouchSensorNode;
Group120: TGroupNode;
HAnimHumanoid128: THAnimHumanoidNode;
HAnimPose129: THAnimPoseNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'HAnimPoseExample.x3d';
X3D0.Meta['description'] := 'Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.';
X3D0.Meta['created'] := '11 December 2025';
X3D0.Meta['modified'] := '14 December 2025';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['warning'] := 'under development for X3D 4.1';
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose';
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures';
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d';
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.SetInfo(['Example scene for HAnimPose node']);
WorldInfo18.Title := 'HAnimPoseExample.x3d';
{ .AddChildren }
Group17.AddChildren([WorldInfo18]);
Background19 := TBackgroundNode.Create;
Background19.SetSkyColor([Vector3(0.8,0.8,1)]);
{ .AddChildren }
Group17.AddChildren([Background19]);
NavigationInfo20 := TNavigationInfoNode.Create;
{ .AddChildren }
Group17.AddChildren([NavigationInfo20]);
Group21 := TGroupNode.Create;
{ Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2 }
{ Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun }
Inline22 := TInlineNode.Create;
Inline22.Description := 'remote HAnimHumanoid for IMPORT';
Inline22.SetUrl(['../Skin/JoeSkeletonSkinSite.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d']);
{ .AddChildren }
Group21.AddChildren([Inline22]);
{ Note that the following importedDEF must match the EXPORT name found in remote file }
IMPORT23 := TIMPORTNode.Create;
IMPORT23.AS := 'HumanoidImported';
IMPORT23.ImportedDEF := 'JoeSkeletonSkinSite';
IMPORT23.InlineDEF := 'HumanoidInline';
{ .AddChildren }
Group21.AddChildren([IMPORT23]);
LoadSensor24 := TLoadSensorNode.Create;
LoadSensor24.TimeOut := 2;
Inline25 := TInlineNode.Create;
Inline25 := Inline22;
{ .AddChildren }
LoadSensor24.AddChildren([Inline25]);
{ .AddChildren }
Group21.AddChildren([LoadSensor24]);
{ .AddChildren }
Group17.AddChildren([Group21]);
Viewpoint26 := TViewpointNode.Create;
Viewpoint26.Description := 'HAnimPose for HumanoidInline IMPORT model';
Viewpoint26.Position := Vector3(0,1,4);
{ .AddChildren }
Group17.AddChildren([Viewpoint26]);
{ no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc... }
Group27 := TGroupNode.Create;
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(0,2,0);
Shape29 := TShapeNode.Create;
Text30 := TTextNode.Create;
Text30.SetText(['HAnimPosePrototype example implementation']);
FontStyle31 := TFontStyleNode.Create;
FontStyle31.Family := ffSans;
FontStyle31.Justify := fjMiddle;
FontStyle31.JustifyMinor := fjMiddle;
FontStyle31.Size := 0.15;
FontStyle31.Style := 'BOLD';
{ .SetFontStyle }
Text30.FontStyle := FontStyle31;
{ .SetGeometry }
Shape29.Geometry := Text30;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33.DiffuseColor := Vector3(0.1,0.5,0.3);
{ .SetMaterial }
Appearance32.Material := Material33;
{ .SetAppearance }
Shape29.Appearance := Appearance32;
{ .AddChild }
Transform28.AddChildren([Shape29]);
{ .AddChildren }
Group27.AddChildren([Transform28]);
Transform34 := TTransformNode.Create;
Transform34.Translation := Vector3(-1.5,1.5,0);
Shape35 := TShapeNode.Create;
Text36 := TTextNode.Create;
Text36.SetText(['\"T\" Pose']);
FontStyle37 := TFontStyleNode.Create;
FontStyle37.Family := ffSans;
FontStyle37.Justify := fjMiddle;
FontStyle37.JustifyMinor := fjMiddle;
FontStyle37.Size := 0.1;
FontStyle37.Style := 'BOLD';
{ .SetFontStyle }
Text36.FontStyle := FontStyle37;
{ .SetGeometry }
Shape35.Geometry := Text36;
Appearance38 := TAppearanceNode.Create;
Appearance38 := Appearance32;
{ .SetAppearance }
Shape35.Appearance := Appearance38;
{ .AddChild }
Transform34.AddChildren([Shape35]);
Shape39 := TShapeNode.Create;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
Material41.Transparency := 0.8;
{ .SetMaterial }
Appearance40.Material := Material41;
{ .SetAppearance }
Shape39.Appearance := Appearance40;
Box42 := TBoxNode.Create;
Box42.Size := Vector3(0.45,0.2,0.001);
{ .SetGeometry }
Shape39.Geometry := Box42;
{ .AddChild }
Transform34.AddChildren([Shape39]);
TouchSensor43 := TTouchSensorNode.Create;
TouchSensor43.Description := 'select to move shoulders to \"T\" pose, leave other joints unchanged';
{ .AddChildren }
Transform34.AddChildren([TouchSensor43]);
Transform34.AddRoute(TouchSensor43.FdIsactive, 'T_Pose'.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group27.AddChildren([Transform34]);
Transform45 := TTransformNode.Create;
Transform45.Translation := Vector3(-1.5,1,0);
Shape46 := TShapeNode.Create;
Text47 := TTextNode.Create;
Text47.SetText(['\"A\" Pose']);
FontStyle48 := TFontStyleNode.Create;
FontStyle48 := FontStyle37;
{ .SetFontStyle }
Text47.FontStyle := FontStyle48;
{ .SetGeometry }
Shape46.Geometry := Text47;
Appearance49 := TAppearanceNode.Create;
Appearance49 := Appearance32;
{ .SetAppearance }
Shape46.Appearance := Appearance49;
{ .AddChild }
Transform45.AddChildren([Shape46]);
Shape50 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance51 := TAppearanceNode.Create;
Appearance51 := Appearance40;
{ .SetAppearance }
Shape50.Appearance := Appearance51;
Box52 := TBoxNode.Create;
Box52.Size := Vector3(0.45,0.2,0.001);
{ .SetGeometry }
Shape50.Geometry := Box52;
{ .AddChild }
Transform45.AddChildren([Shape50]);
TouchSensor53 := TTouchSensorNode.Create;
TouchSensor53.Description := 'select to move shoulders to \"A\" pose, leave other joints unchanged';
{ .AddChildren }
Transform45.AddChildren([TouchSensor53]);
Transform45.AddRoute(TouchSensor53.FdIsactive, 'A_Pose'.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group27.AddChildren([Transform45]);
Transform55 := TTransformNode.Create;
Transform55.Translation := Vector3(-1.5,0.5,0);
Shape56 := TShapeNode.Create;
Text57 := TTextNode.Create;
Text57.SetText(['TouchDown Pose']);
FontStyle58 := TFontStyleNode.Create;
FontStyle58 := FontStyle37;
{ .SetFontStyle }
Text57.FontStyle := FontStyle58;
{ .SetGeometry }
Shape56.Geometry := Text57;
Appearance59 := TAppearanceNode.Create;
Appearance59 := Appearance32;
{ .SetAppearance }
Shape56.Appearance := Appearance59;
{ .AddChild }
Transform55.AddChildren([Shape56]);
Shape60 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance61 := TAppearanceNode.Create;
Appearance61 := Appearance40;
{ .SetAppearance }
Shape60.Appearance := Appearance61;
Box62 := TBoxNode.Create;
Box62.Size := Vector3(0.85,0.2,0.001);
{ .SetGeometry }
Shape60.Geometry := Box62;
{ .AddChild }
Transform55.AddChildren([Shape60]);
TouchSensor63 := TTouchSensorNode.Create;
TouchSensor63.Description := 'select to transition all joints to TouchDown pose';
{ .AddChildren }
Transform55.AddChildren([TouchSensor63]);
Transform55.AddRoute(TouchSensor63.FdIsactive, 'TouchDown_Pose'.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group27.AddChildren([Transform55]);
Transform65 := TTransformNode.Create;
Transform65.Translation := Vector3(-1.5,0,0);
Shape66 := TShapeNode.Create;
Text67 := TTextNode.Create;
Text67.SetText(['\"I\" Pose']);
FontStyle68 := TFontStyleNode.Create;
FontStyle68 := FontStyle37;
{ .SetFontStyle }
Text67.FontStyle := FontStyle68;
{ .SetGeometry }
Shape66.Geometry := Text67;
Appearance69 := TAppearanceNode.Create;
Appearance69 := Appearance32;
{ .SetAppearance }
Shape66.Appearance := Appearance69;
{ .AddChild }
Transform65.AddChildren([Shape66]);
Shape70 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance71 := TAppearanceNode.Create;
Appearance71 := Appearance40;
{ .SetAppearance }
Shape70.Appearance := Appearance71;
Box72 := TBoxNode.Create;
Box72.Size := Vector3(0.45,0.2,0.001);
{ .SetGeometry }
Shape70.Geometry := Box72;
{ .AddChild }
Transform65.AddChildren([Shape70]);
TouchSensor73 := TTouchSensorNode.Create;
TouchSensor73.Description := 'select to transition all joints to \"I\" pose';
{ .AddChildren }
Transform65.AddChildren([TouchSensor73]);
Transform65.AddRoute(TouchSensor73.FdIsactive, 'I_Pose'.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group27.AddChildren([Transform65]);
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(1.5,1.5,0);
Shape76 := TShapeNode.Create;
Text77 := TTextNode.Create;
Text77.SetText(['Face Left Pose']);
FontStyle78 := TFontStyleNode.Create;
FontStyle78 := FontStyle37;
{ .SetFontStyle }
Text77.FontStyle := FontStyle78;
{ .SetGeometry }
Shape76.Geometry := Text77;
Appearance79 := TAppearanceNode.Create;
Appearance79 := Appearance32;
{ .SetAppearance }
Shape76.Appearance := Appearance79;
{ .AddChild }
Transform75.AddChildren([Shape76]);
Shape80 := TShapeNode.Create;
Appearance81 := TAppearanceNode.Create;
Appearance81 := Appearance40;
{ .SetAppearance }
Shape80.Appearance := Appearance81;
Box82 := TBoxNode.Create;
Box82.Size := Vector3(0.9,0.2,0.001);
{ .SetGeometry }
Shape80.Geometry := Box82;
{ .AddChild }
Transform75.AddChildren([Shape80]);
TouchSensor83 := TTouchSensorNode.Create;
TouchSensor83.Description := 'select to rotate body and Face Left, leave other joints unchanged';
{ .AddChildren }
Transform75.AddChildren([TouchSensor83]);
Transform75.AddRoute(TouchSensor83.FdIsactive, 'FaceLeft_Pose'.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group27.AddChildren([Transform75]);
Transform85 := TTransformNode.Create;
Transform85.Translation := Vector3(1.5,1,0);
Shape86 := TShapeNode.Create;
Text87 := TTextNode.Create;
Text87.SetText(['Face Right Pose']);
FontStyle88 := TFontStyleNode.Create;
FontStyle88 := FontStyle37;
{ .SetFontStyle }
Text87.FontStyle := FontStyle88;
{ .SetGeometry }
Shape86.Geometry := Text87;
Appearance89 := TAppearanceNode.Create;
Appearance89 := Appearance32;
{ .SetAppearance }
Shape86.Appearance := Appearance89;
{ .AddChild }
Transform85.AddChildren([Shape86]);
Shape90 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance91 := TAppearanceNode.Create;
Appearance91 := Appearance40;
{ .SetAppearance }
Shape90.Appearance := Appearance91;
Box92 := TBoxNode.Create;
Box92.Size := Vector3(0.9,0.2,0.001);
{ .SetGeometry }
Shape90.Geometry := Box92;
{ .AddChild }
Transform85.AddChildren([Shape90]);
TouchSensor93 := TTouchSensorNode.Create;
TouchSensor93.Description := 'select to rotate body and Face Right, leave other joints unchanged';
{ .AddChildren }
Transform85.AddChildren([TouchSensor93]);
Transform85.AddRoute(TouchSensor93.FdIsactive, 'FaceRight_Pose'.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group27.AddChildren([Transform85]);
Transform95 := TTransformNode.Create;
Transform95.Translation := Vector3(1.5,0.5,0);
Shape96 := TShapeNode.Create;
Text97 := TTextNode.Create;
Text97.SetText(['Direct animation','to, from \"I\" Pose']);
FontStyle98 := TFontStyleNode.Create;
FontStyle98 := FontStyle37;
{ .SetFontStyle }
Text97.FontStyle := FontStyle98;
{ .SetGeometry }
Shape96.Geometry := Text97;
Appearance99 := TAppearanceNode.Create;
Material100 := TMaterialNode.Create;
Material100.DiffuseColor := Vector3(0.1,0.2,0.3);
{ .SetMaterial }
Appearance99.Material := Material100;
{ .SetAppearance }
Shape96.Appearance := Appearance99;
{ .AddChild }
Transform95.AddChildren([Shape96]);
Shape101 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance102 := TAppearanceNode.Create;
Appearance102 := Appearance40;
{ .SetAppearance }
Shape101.Appearance := Appearance102;
Box103 := TBoxNode.Create;
Box103.Size := Vector3(0.9,0.25,0.001);
{ .SetGeometry }
Shape101.Geometry := Box103;
{ .AddChild }
Transform95.AddChildren([Shape101]);
TouchSensor104 := TTouchSensorNode.Create;
TouchSensor104.Description := 'select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events';
{ .AddChildren }
Transform95.AddChildren([TouchSensor104]);
{ cycleInterval=4 also hard-coded in script execution message }
TimeSensor105 := TTimeSensorNode.Create;
TimeSensor105.CycleInterval := 4;
TimeSensor105.Description := 'directly animate several poses';
{ .AddChildren }
Transform95.AddChildren([TimeSensor105]);
ScalarInterpolator106 := TScalarInterpolatorNode.Create;
ScalarInterpolator106.SetKey([0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator106.SetKeyValue([0,0,1,1,0,0]);
{ .AddChildren }
Transform95.AddChildren([ScalarInterpolator106]);
Transform95.AddRoute(TouchSensor104.EventTouchtime, TimeSensor105.FdStarttime);
{ .AddX3DRoute }
Transform95.AddRoute(TimeSensor105.EventFraction_changed, ScalarInterpolator106.EventSet_fraction);
{ .AddX3DRoute }
Transform95.AddRoute(ScalarInterpolator106.EventValue_changed, 'I_Pose'.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group27.AddChildren([Transform95]);
Transform110 := TTransformNode.Create;
Transform110.Translation := Vector3(1.5,0,0);
Shape111 := TShapeNode.Create;
Text112 := TTextNode.Create;
Text112.SetText(['Reset All Joints','to Default \"I\" Pose']);
FontStyle113 := TFontStyleNode.Create;
FontStyle113 := FontStyle37;
{ .SetFontStyle }
Text112.FontStyle := FontStyle113;
{ .SetGeometry }
Shape111.Geometry := Text112;
Appearance114 := TAppearanceNode.Create;
Appearance114 := Appearance99;
{ .SetAppearance }
Shape111.Appearance := Appearance114;
{ .AddChild }
Transform110.AddChildren([Shape111]);
Shape115 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance116 := TAppearanceNode.Create;
Appearance116 := Appearance40;
{ .SetAppearance }
Shape115.Appearance := Appearance116;
Box117 := TBoxNode.Create;
Box117.Size := Vector3(0.9,0.25,0.001);
{ .SetGeometry }
Shape115.Geometry := Box117;
{ .AddChild }
Transform110.AddChildren([Shape115]);
TouchSensor118 := TTouchSensorNode.Create;
TouchSensor118.Description := 'select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event';
{ .AddChildren }
Transform110.AddChildren([TouchSensor118]);
Transform110.AddRoute(TouchSensor118.FdIsactive, 'FaceLeft_Pose'.FdResetalljoints);
{ .AddX3DRoute }
{ .AddChildren }
Group27.AddChildren([Transform110]);
{ .AddChildren }
Group17.AddChildren([Group27]);
Group120 := TGroupNode.Create;
Group120.AddRoute(LoadSensor24.FdIsloaded, 'A_Pose'.FdIsloaded);
{ .SetX3DRoute }
Group120.AddRoute(LoadSensor24.FdIsloaded, 'H_Pose'.FdIsloaded);
{ .AddX3DRoute }
Group120.AddRoute(LoadSensor24.FdIsloaded, 'I_Pose'.FdIsloaded);
{ .AddX3DRoute }
Group120.AddRoute(LoadSensor24.FdIsloaded, 'T_Pose'.FdIsloaded);
{ .AddX3DRoute }
Group120.AddRoute(LoadSensor24.FdIsloaded, 'FaceLeft_Pose'.FdIsloaded);
{ .AddX3DRoute }
Group120.AddRoute(LoadSensor24.FdIsloaded, 'FaceRight_Pose'.FdIsloaded);
{ .AddX3DRoute }
Group120.AddRoute(LoadSensor24.FdIsloaded, 'TouchDown_Pose'.FdIsloaded);
{ .AddX3DRoute }
{ .AddChildren }
Group17.AddChildren([Group120]);
HAnimHumanoid128 := THAnimHumanoidNode.Create;
HAnimHumanoid128.NameField := 'HumanoidStub';
HAnimHumanoid128.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid128.Version := '2.0';
HAnimPose129 := THAnimPoseNode.Create;
HAnimPose129 := HAnimPose129;
{ .SetChildren }
HAnimHumanoid128.Children := HAnimPose129;
{ .AddChildren }
Group17.AddChildren([HAnimHumanoid128]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;
