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
HAnimPose27: THAnimPoseNode;
MetadataString28: TMetadataStringNode;
HAnimJoint29: THAnimJointNode;
HAnimJoint30: THAnimJointNode;
HAnimPose31: THAnimPoseNode;
HAnimJoint32: THAnimJointNode;
HAnimJoint33: THAnimJointNode;
HAnimPose34: THAnimPoseNode;
HAnimJoint35: THAnimJointNode;
HAnimJoint36: THAnimJointNode;
HAnimJoint37: THAnimJointNode;
HAnimJoint38: THAnimJointNode;
HAnimJoint39: THAnimJointNode;
HAnimJoint40: THAnimJointNode;
HAnimJoint41: THAnimJointNode;
HAnimJoint42: THAnimJointNode;
HAnimJoint43: THAnimJointNode;
HAnimJoint44: THAnimJointNode;
HAnimJoint45: THAnimJointNode;
HAnimJoint46: THAnimJointNode;
HAnimJoint47: THAnimJointNode;
HAnimJoint48: THAnimJointNode;
HAnimJoint49: THAnimJointNode;
HAnimJoint50: THAnimJointNode;
HAnimPose51: THAnimPoseNode;
HAnimPose52: THAnimPoseNode;
HAnimPose53: THAnimPoseNode;
HAnimJoint54: THAnimJointNode;
HAnimPose55: THAnimPoseNode;
HAnimJoint56: THAnimJointNode;
Group57: TGroupNode;
Transform58: TTransformNode;
Shape59: TShapeNode;
Text60: TTextNode;
FontStyle61: TFontStyleNode;
Appearance62: TAppearanceNode;
Material63: TMaterialNode;
Transform64: TTransformNode;
Shape65: TShapeNode;
Text66: TTextNode;
FontStyle67: TFontStyleNode;
Appearance68: TAppearanceNode;
Shape69: TShapeNode;
Appearance70: TAppearanceNode;
Material71: TMaterialNode;
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
Shape100: TShapeNode;
Appearance101: TAppearanceNode;
Box102: TBoxNode;
TouchSensor103: TTouchSensorNode;
Transform105: TTransformNode;
Shape106: TShapeNode;
Text107: TTextNode;
FontStyle108: TFontStyleNode;
Appearance109: TAppearanceNode;
Shape110: TShapeNode;
Appearance111: TAppearanceNode;
Box112: TBoxNode;
TouchSensor113: TTouchSensorNode;
Transform115: TTransformNode;
Shape116: TShapeNode;
Text117: TTextNode;
FontStyle118: TFontStyleNode;
Appearance119: TAppearanceNode;
Shape120: TShapeNode;
Appearance121: TAppearanceNode;
Box122: TBoxNode;
TouchSensor123: TTouchSensorNode;
Transform125: TTransformNode;
Shape126: TShapeNode;
Text127: TTextNode;
FontStyle128: TFontStyleNode;
Appearance129: TAppearanceNode;
Material130: TMaterialNode;
Shape131: TShapeNode;
Appearance132: TAppearanceNode;
Box133: TBoxNode;
TouchSensor134: TTouchSensorNode;
TimeSensor135: TTimeSensorNode;
ScalarInterpolator136: TScalarInterpolatorNode;
Transform140: TTransformNode;
Shape141: TShapeNode;
Text142: TTextNode;
FontStyle143: TFontStyleNode;
Appearance144: TAppearanceNode;
Shape145: TShapeNode;
Appearance146: TAppearanceNode;
Box147: TBoxNode;
TouchSensor148: TTouchSensorNode;
Group150: TGroupNode;
HAnimHumanoid158: THAnimHumanoidNode;
HAnimPose159: THAnimPoseNode;
HAnimPose160: THAnimPoseNode;
HAnimPose161: THAnimPoseNode;
HAnimPose162: THAnimPoseNode;
HAnimPose163: THAnimPoseNode;
HAnimPose164: THAnimPoseNode;
HAnimPose165: THAnimPoseNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
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
HAnimPose27 := THAnimPoseNode.Create;
HAnimPose27.NameField := 'T';
HAnimPose27.Description := 'arms stretched outward and level similar to letter T';
HAnimPose27.Loa := 1;
HAnimPose27.TransitionDuration := 1.3;
MetadataString28 := TMetadataStringNode.Create;
MetadataString28.NameField := 'metadataTest';
MetadataString28.SetValue(['hello HAnimPose metadata']);
{ .SetMetadata }
HAnimPose27.Metadata := MetadataString28;
{ test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/ }
HAnimJoint29 := THAnimJointNode.Create;
HAnimJoint29.NameField := 'l_shoulder';
HAnimJoint29.Description := 'left shoulder';
HAnimJoint29.Rotation := Vector4(0,0,1,1.57);
HAnimJoint29.SetUlimit([0,0,0]);
HAnimJoint29.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose27.AddChildren([HAnimJoint29]);
HAnimJoint30 := THAnimJointNode.Create;
HAnimJoint30.NameField := 'r_shoulder';
HAnimJoint30.Description := 'right shoulder';
HAnimJoint30.Rotation := Vector4(0,0,-1,1.57);
HAnimJoint30.SetUlimit([0,0,0]);
HAnimJoint30.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose27.AddChildren([HAnimJoint30]);
{ .AddChildren }
Group17.AddChildren([HAnimPose27]);
HAnimPose31 := THAnimPoseNode.Create;
HAnimPose31.NameField := 'A';
HAnimPose31.Description := 'arms stretched outward and downward similar to letter A';
HAnimPose31.Loa := 1;
HAnimPose31.TransitionDuration := 1.2;
HAnimJoint32 := THAnimJointNode.Create;
HAnimJoint32.NameField := 'l_shoulder';
HAnimJoint32.Description := 'left shoulder';
HAnimJoint32.Rotation := Vector4(0,0,1,0.5);
HAnimJoint32.SetUlimit([0,0,0]);
HAnimJoint32.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose31.AddChildren([HAnimJoint32]);
HAnimJoint33 := THAnimJointNode.Create;
HAnimJoint33.NameField := 'r_shoulder';
HAnimJoint33.Description := 'right shoulder';
HAnimJoint33.Rotation := Vector4(0,0,-1,0.5);
HAnimJoint33.SetUlimit([0,0,0]);
HAnimJoint33.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose31.AddChildren([HAnimJoint33]);
{ .AddChildren }
Group17.AddChildren([HAnimPose31]);
HAnimPose34 := THAnimPoseNode.Create;
HAnimPose34.NameField := 'TouchDown';
HAnimPose34.Description := 'arms and legs stretched outward providing a TouchDown gesture';
HAnimPose34.Loa := 1;
HAnimPose34.TransitionDuration := 1.2;
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.NameField := 'humanoid_root';
HAnimJoint35.Rotation := Vector4(0,1,0,-0.698132);
HAnimJoint35.SetUlimit([0,0,0]);
HAnimJoint35.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint35]);
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.NameField := 'l_hip';
HAnimJoint36.Rotation := Vector4(-1,1,1,1);
HAnimJoint36.SetUlimit([0,0,0]);
HAnimJoint36.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint36]);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.NameField := 'l_knee';
HAnimJoint37.Rotation := Vector4(1,0,0,1);
HAnimJoint37.SetUlimit([0,0,0]);
HAnimJoint37.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint37]);
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.NameField := 'l_talocrural';
HAnimJoint38.Rotation := Vector4(-0.2,0,0.1,0.225);
HAnimJoint38.SetUlimit([0,0,0]);
HAnimJoint38.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint38]);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.NameField := 'r_hip';
HAnimJoint39.Rotation := Vector4(-1,-1,-1,1);
HAnimJoint39.SetUlimit([0,0,0]);
HAnimJoint39.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint39]);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.NameField := 'r_knee';
HAnimJoint40.Rotation := Vector4(1,0,0,1);
HAnimJoint40.SetUlimit([0,0,0]);
HAnimJoint40.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint40]);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.NameField := 'r_talocrural';
HAnimJoint41.Rotation := Vector4(-0.2,0,0.1,0.25);
HAnimJoint41.SetUlimit([0,0,0]);
HAnimJoint41.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint41]);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.NameField := 'vl5';
HAnimJoint42.Rotation := Vector4(0,0,0.01,0.2);
HAnimJoint42.SetUlimit([0,0,0]);
HAnimJoint42.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint42]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.NameField := 'vt10';
HAnimJoint43.Rotation := Vector4(0,0,0.01,0.1);
HAnimJoint43.SetUlimit([0,0,0]);
HAnimJoint43.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint43]);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.NameField := 'vc4';
HAnimJoint44.Rotation := Vector4(0,0,-0.01,0.15);
HAnimJoint44.SetUlimit([0,0,0]);
HAnimJoint44.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint44]);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.NameField := 'l_shoulder';
HAnimJoint45.Rotation := Vector4(-1,0.5,1,2);
HAnimJoint45.SetUlimit([0,0,0]);
HAnimJoint45.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint45]);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.NameField := 'l_elbow';
HAnimJoint46.Rotation := Vector4(-1,0,0,1);
HAnimJoint46.SetUlimit([0,0,0]);
HAnimJoint46.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint46]);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.NameField := 'l_radiocarpal';
HAnimJoint47.SetUlimit([0,0,0]);
HAnimJoint47.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint47]);
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.NameField := 'r_shoulder';
HAnimJoint48.Rotation := Vector4(-1,-0.5,-1,2.6);
HAnimJoint48.SetUlimit([0,0,0]);
HAnimJoint48.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint48]);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.NameField := 'r_elbow';
HAnimJoint49.Rotation := Vector4(-1,0,0,1);
HAnimJoint49.SetUlimit([0,0,0]);
HAnimJoint49.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint49]);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.NameField := 'r_radiocarpal';
HAnimJoint50.SetUlimit([0,0,0]);
HAnimJoint50.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose34.AddChildren([HAnimJoint50]);
{ .AddChildren }
Group17.AddChildren([HAnimPose34]);
HAnimPose51 := THAnimPoseNode.Create;
HAnimPose51.NameField := 'I';
HAnimPose51.Description := 'arms and legs straight down default binding pose for baseline Humanoid';
HAnimPose51.Loa := 1;
HAnimPose51.TransitionDuration := 1.5;
{ not defining any poseJoint HAnimJoint nodes equals the default "I" pose }
{ .AddChildren }
Group17.AddChildren([HAnimPose51]);
HAnimPose52 := THAnimPoseNode.Create;
HAnimPose52.NameField := 'H';
HAnimPose52.Description := 'TODO experimental pose not yet implemented';
HAnimPose52.Enabled := False;
HAnimPose52.TransitionDuration := 1.4;
HAnimPose52.Loa := -1;
{ TODO define poseJoint HAnimJoint nodes }
{ .AddChildren }
Group17.AddChildren([HAnimPose52]);
HAnimPose53 := THAnimPoseNode.Create;
HAnimPose53.NameField := 'FaceLeft';
HAnimPose53.Description := 'Only modify humanoid_root Joint node to face left';
HAnimPose53.Loa := 0;
HAnimPose53.TransitionDuration := 1.1;
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.NameField := 'humanoid_root';
HAnimJoint54.Description := 'Only rotate the model';
HAnimJoint54.Rotation := Vector4(0,1,0,1.570796);
HAnimJoint54.SetUlimit([0,0,0]);
HAnimJoint54.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose53.AddChildren([HAnimJoint54]);
{ .AddChildren }
Group17.AddChildren([HAnimPose53]);
HAnimPose55 := THAnimPoseNode.Create;
HAnimPose55.NameField := 'FaceRight';
HAnimPose55.Description := 'Only modify humanoid_root Joint node to face right';
HAnimPose55.Loa := 0;
HAnimPose55.TransitionDuration := 1.1;
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.NameField := 'humanoid_root';
HAnimJoint56.Description := 'Only rotate the model';
HAnimJoint56.Rotation := Vector4(0,1,0,-1.570796);
HAnimJoint56.SetUlimit([0,0,0]);
HAnimJoint56.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimPose55.AddChildren([HAnimJoint56]);
{ .AddChildren }
Group17.AddChildren([HAnimPose55]);
Group57 := TGroupNode.Create;
Transform58 := TTransformNode.Create;
Transform58.Translation := Vector3(0,2,0);
Shape59 := TShapeNode.Create;
Text60 := TTextNode.Create;
Text60.SetText(['HAnimPosePrototype example implementation']);
FontStyle61 := TFontStyleNode.Create;
FontStyle61.Family := ffSans;
FontStyle61.Justify := fjMiddle;
FontStyle61.JustifyMinor := fjMiddle;
FontStyle61.Size := 0.15;
FontStyle61.Style := 'BOLD';
{ .SetFontStyle }
Text60.FontStyle := FontStyle61;
{ .SetGeometry }
Shape59.Geometry := Text60;
Appearance62 := TAppearanceNode.Create;
Material63 := TMaterialNode.Create;
Material63.DiffuseColor := Vector3(0.1,0.5,0.3);
{ .SetMaterial }
Appearance62.Material := Material63;
{ .SetAppearance }
Shape59.Appearance := Appearance62;
{ .AddChild }
Transform58.AddChildren([Shape59]);
{ .AddChildren }
Group57.AddChildren([Transform58]);
Transform64 := TTransformNode.Create;
Transform64.Translation := Vector3(-1.5,1.5,0);
Shape65 := TShapeNode.Create;
Text66 := TTextNode.Create;
Text66.SetText(['\"T\" Pose']);
FontStyle67 := TFontStyleNode.Create;
FontStyle67.Family := ffSans;
FontStyle67.Justify := fjMiddle;
FontStyle67.JustifyMinor := fjMiddle;
FontStyle67.Size := 0.1;
FontStyle67.Style := 'BOLD';
{ .SetFontStyle }
Text66.FontStyle := FontStyle67;
{ .SetGeometry }
Shape65.Geometry := Text66;
Appearance68 := TAppearanceNode.Create;
Appearance68 := Appearance62;
{ .SetAppearance }
Shape65.Appearance := Appearance68;
{ .AddChild }
Transform64.AddChildren([Shape65]);
Shape69 := TShapeNode.Create;
Appearance70 := TAppearanceNode.Create;
Material71 := TMaterialNode.Create;
Material71.Transparency := 0.8;
{ .SetMaterial }
Appearance70.Material := Material71;
{ .SetAppearance }
Shape69.Appearance := Appearance70;
Box72 := TBoxNode.Create;
Box72.Size := Vector3(0.45,0.2,0.001);
{ .SetGeometry }
Shape69.Geometry := Box72;
{ .AddChild }
Transform64.AddChildren([Shape69]);
TouchSensor73 := TTouchSensorNode.Create;
TouchSensor73.Description := 'select to move shoulders to \"T\" pose, leave other joints unchanged';
{ .AddChildren }
Transform64.AddChildren([TouchSensor73]);
Transform64.AddRoute(TouchSensor73.FdIsactive, HAnimPose27.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group57.AddChildren([Transform64]);
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(-1.5,1,0);
Shape76 := TShapeNode.Create;
Text77 := TTextNode.Create;
Text77.SetText(['\"A\" Pose']);
FontStyle78 := TFontStyleNode.Create;
FontStyle78 := FontStyle67;
{ .SetFontStyle }
Text77.FontStyle := FontStyle78;
{ .SetGeometry }
Shape76.Geometry := Text77;
Appearance79 := TAppearanceNode.Create;
Appearance79 := Appearance62;
{ .SetAppearance }
Shape76.Appearance := Appearance79;
{ .AddChild }
Transform75.AddChildren([Shape76]);
Shape80 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance81 := TAppearanceNode.Create;
Appearance81 := Appearance70;
{ .SetAppearance }
Shape80.Appearance := Appearance81;
Box82 := TBoxNode.Create;
Box82.Size := Vector3(0.45,0.2,0.001);
{ .SetGeometry }
Shape80.Geometry := Box82;
{ .AddChild }
Transform75.AddChildren([Shape80]);
TouchSensor83 := TTouchSensorNode.Create;
TouchSensor83.Description := 'select to move shoulders to \"A\" pose, leave other joints unchanged';
{ .AddChildren }
Transform75.AddChildren([TouchSensor83]);
Transform75.AddRoute(TouchSensor83.FdIsactive, HAnimPose31.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group57.AddChildren([Transform75]);
Transform85 := TTransformNode.Create;
Transform85.Translation := Vector3(-1.5,0.5,0);
Shape86 := TShapeNode.Create;
Text87 := TTextNode.Create;
Text87.SetText(['TouchDown Pose']);
FontStyle88 := TFontStyleNode.Create;
FontStyle88 := FontStyle67;
{ .SetFontStyle }
Text87.FontStyle := FontStyle88;
{ .SetGeometry }
Shape86.Geometry := Text87;
Appearance89 := TAppearanceNode.Create;
Appearance89 := Appearance62;
{ .SetAppearance }
Shape86.Appearance := Appearance89;
{ .AddChild }
Transform85.AddChildren([Shape86]);
Shape90 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance91 := TAppearanceNode.Create;
Appearance91 := Appearance70;
{ .SetAppearance }
Shape90.Appearance := Appearance91;
Box92 := TBoxNode.Create;
Box92.Size := Vector3(0.85,0.2,0.001);
{ .SetGeometry }
Shape90.Geometry := Box92;
{ .AddChild }
Transform85.AddChildren([Shape90]);
TouchSensor93 := TTouchSensorNode.Create;
TouchSensor93.Description := 'select to transition all joints to TouchDown pose';
{ .AddChildren }
Transform85.AddChildren([TouchSensor93]);
Transform85.AddRoute(TouchSensor93.FdIsactive, HAnimPose34.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group57.AddChildren([Transform85]);
Transform95 := TTransformNode.Create;
Transform95.Translation := Vector3(-1.5,0,0);
Shape96 := TShapeNode.Create;
Text97 := TTextNode.Create;
Text97.SetText(['\"I\" Pose']);
FontStyle98 := TFontStyleNode.Create;
FontStyle98 := FontStyle67;
{ .SetFontStyle }
Text97.FontStyle := FontStyle98;
{ .SetGeometry }
Shape96.Geometry := Text97;
Appearance99 := TAppearanceNode.Create;
Appearance99 := Appearance62;
{ .SetAppearance }
Shape96.Appearance := Appearance99;
{ .AddChild }
Transform95.AddChildren([Shape96]);
Shape100 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance101 := TAppearanceNode.Create;
Appearance101 := Appearance70;
{ .SetAppearance }
Shape100.Appearance := Appearance101;
Box102 := TBoxNode.Create;
Box102.Size := Vector3(0.45,0.2,0.001);
{ .SetGeometry }
Shape100.Geometry := Box102;
{ .AddChild }
Transform95.AddChildren([Shape100]);
TouchSensor103 := TTouchSensorNode.Create;
TouchSensor103.Description := 'select to transition all joints to \"I\" pose';
{ .AddChildren }
Transform95.AddChildren([TouchSensor103]);
Transform95.AddRoute(TouchSensor103.FdIsactive, HAnimPose51.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group57.AddChildren([Transform95]);
Transform105 := TTransformNode.Create;
Transform105.Translation := Vector3(1.5,1.5,0);
Shape106 := TShapeNode.Create;
Text107 := TTextNode.Create;
Text107.SetText(['Face Left Pose']);
FontStyle108 := TFontStyleNode.Create;
FontStyle108 := FontStyle67;
{ .SetFontStyle }
Text107.FontStyle := FontStyle108;
{ .SetGeometry }
Shape106.Geometry := Text107;
Appearance109 := TAppearanceNode.Create;
Appearance109 := Appearance62;
{ .SetAppearance }
Shape106.Appearance := Appearance109;
{ .AddChild }
Transform105.AddChildren([Shape106]);
Shape110 := TShapeNode.Create;
Appearance111 := TAppearanceNode.Create;
Appearance111 := Appearance70;
{ .SetAppearance }
Shape110.Appearance := Appearance111;
Box112 := TBoxNode.Create;
Box112.Size := Vector3(0.9,0.2,0.001);
{ .SetGeometry }
Shape110.Geometry := Box112;
{ .AddChild }
Transform105.AddChildren([Shape110]);
TouchSensor113 := TTouchSensorNode.Create;
TouchSensor113.Description := 'select to rotate body and Face Left, leave other joints unchanged';
{ .AddChildren }
Transform105.AddChildren([TouchSensor113]);
Transform105.AddRoute(TouchSensor113.FdIsactive, HAnimPose53.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group57.AddChildren([Transform105]);
Transform115 := TTransformNode.Create;
Transform115.Translation := Vector3(1.5,1,0);
Shape116 := TShapeNode.Create;
Text117 := TTextNode.Create;
Text117.SetText(['Face Right Pose']);
FontStyle118 := TFontStyleNode.Create;
FontStyle118 := FontStyle67;
{ .SetFontStyle }
Text117.FontStyle := FontStyle118;
{ .SetGeometry }
Shape116.Geometry := Text117;
Appearance119 := TAppearanceNode.Create;
Appearance119 := Appearance62;
{ .SetAppearance }
Shape116.Appearance := Appearance119;
{ .AddChild }
Transform115.AddChildren([Shape116]);
Shape120 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance121 := TAppearanceNode.Create;
Appearance121 := Appearance70;
{ .SetAppearance }
Shape120.Appearance := Appearance121;
Box122 := TBoxNode.Create;
Box122.Size := Vector3(0.9,0.2,0.001);
{ .SetGeometry }
Shape120.Geometry := Box122;
{ .AddChild }
Transform115.AddChildren([Shape120]);
TouchSensor123 := TTouchSensorNode.Create;
TouchSensor123.Description := 'select to rotate body and Face Right, leave other joints unchanged';
{ .AddChildren }
Transform115.AddChildren([TouchSensor123]);
Transform115.AddRoute(TouchSensor123.FdIsactive, HAnimPose55.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group57.AddChildren([Transform115]);
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(1.5,0.5,0);
Shape126 := TShapeNode.Create;
Text127 := TTextNode.Create;
Text127.SetText(['Direct animation','to, from \"I\" Pose']);
FontStyle128 := TFontStyleNode.Create;
FontStyle128 := FontStyle67;
{ .SetFontStyle }
Text127.FontStyle := FontStyle128;
{ .SetGeometry }
Shape126.Geometry := Text127;
Appearance129 := TAppearanceNode.Create;
Material130 := TMaterialNode.Create;
Material130.DiffuseColor := Vector3(0.1,0.2,0.3);
{ .SetMaterial }
Appearance129.Material := Material130;
{ .SetAppearance }
Shape126.Appearance := Appearance129;
{ .AddChild }
Transform125.AddChildren([Shape126]);
Shape131 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance132 := TAppearanceNode.Create;
Appearance132 := Appearance70;
{ .SetAppearance }
Shape131.Appearance := Appearance132;
Box133 := TBoxNode.Create;
Box133.Size := Vector3(0.9,0.25,0.001);
{ .SetGeometry }
Shape131.Geometry := Box133;
{ .AddChild }
Transform125.AddChildren([Shape131]);
TouchSensor134 := TTouchSensorNode.Create;
TouchSensor134.Description := 'select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events';
{ .AddChildren }
Transform125.AddChildren([TouchSensor134]);
{ cycleInterval=4 also hard-coded in script execution message }
TimeSensor135 := TTimeSensorNode.Create;
TimeSensor135.CycleInterval := 4;
TimeSensor135.Description := 'directly animate several poses';
{ .AddChildren }
Transform125.AddChildren([TimeSensor135]);
ScalarInterpolator136 := TScalarInterpolatorNode.Create;
ScalarInterpolator136.SetKey([0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator136.SetKeyValue([0,0,1,1,0,0]);
{ .AddChildren }
Transform125.AddChildren([ScalarInterpolator136]);
Transform125.AddRoute(TouchSensor134.EventTouchtime, TimeSensor135.FdStarttime);
{ .AddX3DRoute }
Transform125.AddRoute(TimeSensor135.EventFraction_changed, ScalarInterpolator136.EventSet_fraction);
{ .AddX3DRoute }
Transform125.AddRoute(ScalarInterpolator136.EventValue_changed, HAnimPose51.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group57.AddChildren([Transform125]);
Transform140 := TTransformNode.Create;
Transform140.Translation := Vector3(1.5,0,0);
Shape141 := TShapeNode.Create;
Text142 := TTextNode.Create;
Text142.SetText(['Reset All Joints','to Default \"I\" Pose']);
FontStyle143 := TFontStyleNode.Create;
FontStyle143 := FontStyle67;
{ .SetFontStyle }
Text142.FontStyle := FontStyle143;
{ .SetGeometry }
Shape141.Geometry := Text142;
Appearance144 := TAppearanceNode.Create;
Appearance144 := Appearance129;
{ .SetAppearance }
Shape141.Appearance := Appearance144;
{ .AddChild }
Transform140.AddChildren([Shape141]);
Shape145 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance146 := TAppearanceNode.Create;
Appearance146 := Appearance70;
{ .SetAppearance }
Shape145.Appearance := Appearance146;
Box147 := TBoxNode.Create;
Box147.Size := Vector3(0.9,0.25,0.001);
{ .SetGeometry }
Shape145.Geometry := Box147;
{ .AddChild }
Transform140.AddChildren([Shape145]);
TouchSensor148 := TTouchSensorNode.Create;
TouchSensor148.Description := 'select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event';
{ .AddChildren }
Transform140.AddChildren([TouchSensor148]);
Transform140.AddRoute(TouchSensor148.FdIsactive, HAnimPose53.FdResetalljoints);
{ .AddX3DRoute }
{ .AddChildren }
Group57.AddChildren([Transform140]);
{ .AddChildren }
Group17.AddChildren([Group57]);
Group150 := TGroupNode.Create;
Group150.AddRoute(LoadSensor24.FdIsloaded, HAnimPose31.FdIsloaded);
{ .SetX3DRoute }
Group150.AddRoute(LoadSensor24.FdIsloaded, HAnimPose52.FdIsloaded);
{ .AddX3DRoute }
Group150.AddRoute(LoadSensor24.FdIsloaded, HAnimPose51.FdIsloaded);
{ .AddX3DRoute }
Group150.AddRoute(LoadSensor24.FdIsloaded, HAnimPose27.FdIsloaded);
{ .AddX3DRoute }
Group150.AddRoute(LoadSensor24.FdIsloaded, HAnimPose53.FdIsloaded);
{ .AddX3DRoute }
Group150.AddRoute(LoadSensor24.FdIsloaded, HAnimPose55.FdIsloaded);
{ .AddX3DRoute }
Group150.AddRoute(LoadSensor24.FdIsloaded, HAnimPose34.FdIsloaded);
{ .AddX3DRoute }
{ .AddChildren }
Group17.AddChildren([Group150]);
HAnimHumanoid158 := THAnimHumanoidNode.Create;
HAnimHumanoid158.NameField := 'HumanoidStub';
HAnimHumanoid158.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid158.Version := '2.0';
HAnimPose159 := THAnimPoseNode.Create;
HAnimPose159 := HAnimPose31;
{ .SetPoses }
HAnimHumanoid158.Poses := HAnimPose159;
HAnimPose160 := THAnimPoseNode.Create;
HAnimPose160 := HAnimPose27;
{ .SetPoses }
HAnimHumanoid158.Poses := HAnimPose160;
HAnimPose161 := THAnimPoseNode.Create;
HAnimPose161 := HAnimPose51;
{ .SetPoses }
HAnimHumanoid158.Poses := HAnimPose161;
HAnimPose162 := THAnimPoseNode.Create;
HAnimPose162 := HAnimPose52;
{ .SetPoses }
HAnimHumanoid158.Poses := HAnimPose162;
HAnimPose163 := THAnimPoseNode.Create;
HAnimPose163 := HAnimPose53;
{ .SetPoses }
HAnimHumanoid158.Poses := HAnimPose163;
HAnimPose164 := THAnimPoseNode.Create;
HAnimPose164 := HAnimPose55;
{ .SetPoses }
HAnimHumanoid158.Poses := HAnimPose164;
HAnimPose165 := THAnimPoseNode.Create;
HAnimPose165 := HAnimPose34;
{ .SetPoses }
HAnimHumanoid158.Poses := HAnimPose165;
{ .AddChildren }
Group17.AddChildren([HAnimHumanoid158]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;
