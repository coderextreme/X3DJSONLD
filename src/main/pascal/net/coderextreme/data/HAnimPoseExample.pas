unit HAnimPoseExample;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHAnimPoseExample: TX3DRootNode;

implementation

uses CastleVectors;

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
HAnimHumanoid150: THAnimHumanoidNode;
HAnimPose151: THAnimPoseNode;
HAnimPose152: THAnimPoseNode;
HAnimPose153: THAnimPoseNode;
HAnimPose154: THAnimPoseNode;
HAnimPose155: THAnimPoseNode;
HAnimPose156: THAnimPoseNode;
HAnimPose157: THAnimPoseNode;

procedure InitHAnimPoseExamplePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
X3D0.Meta['title'] := 'HAnimPoseExample.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.';
{ METHOD .Meta }
X3D0.Meta['created'] := '11 December 2025';
{ METHOD .Meta }
X3D0.Meta['modified'] := '19 July 2026';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'under development for X3D 4.1';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.SetInfo(['Example scene for HAnimPose node']);
WorldInfo18.Title := 'HAnimPoseExample.x3d';
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(WorldInfo18);
Background19 := TBackgroundNode.Create;
Background19.SetSkyColor([Vector3(0.8,0.8,1)]);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Background19);
NavigationInfo20 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(NavigationInfo20);
Group21 := TGroupNode.Create;
{ Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2 }
{ Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun }
Inline22 := TInlineNode.Create;
Inline22.Description := 'remote HAnimHumanoid for IMPORT';
Inline22.SetUrl(['../Skin/JoeSkeletonSkinSite.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d']);
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(Inline22);
{ Note that the following importedDEF must match the EXPORT name found in remote file }
IMPORT23 := TIMPORTNode.Create;
IMPORT23.AS := 'HumanoidImported';
IMPORT23.ImportedDEF := 'JoeSkeletonSkinSite';
IMPORT23.InlineDEF := 'HumanoidInline';
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(IMPORT23);
LoadSensor24 := TLoadSensorNode.Create;
end;

procedure InitHAnimPoseExamplePart1;
begin

LoadSensor24.TimeOut := 2;
{ METHOD .FdChildren.Add }
LoadSensor24.FdChildren.Add(Inline22);
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(LoadSensor24);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Group21);
Viewpoint26 := TViewpointNode.Create;
Viewpoint26.Description := 'HAnimPose for HumanoidInline IMPORT model';
Viewpoint26.Position := Vector3(0,1,4);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Viewpoint26);
{ no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc... }
HAnimPose27 := THAnimPoseNode.Create;
HAnimPose27.Description := 'arms stretched outward and level similar to letter T';
HAnimPose27.Loa := 1;
HAnimPose27.TransitionDuration := 1.3;
MetadataString28 := TMetadataStringNode.Create;
MetadataString28.SetValue(['hello HAnimPose metadata']);
{ METHOD .Metadata }
HAnimPose27.Metadata := MetadataString28;
{ test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/ }
HAnimJoint29 := THAnimJointNode.Create;
HAnimJoint29.Description := 'left shoulder';
HAnimJoint29.Rotation := Vector4(0,0,1,1.57);
{ METHOD .FdChildren.Add }
HAnimPose27.FdChildren.Add(HAnimJoint29);
HAnimJoint30 := THAnimJointNode.Create;
HAnimJoint30.Description := 'right shoulder';
HAnimJoint30.Rotation := Vector4(0,0,-1,1.57);
{ METHOD .FdChildren.Add }
HAnimPose27.FdChildren.Add(HAnimJoint30);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(HAnimPose27);
HAnimPose31 := THAnimPoseNode.Create;
HAnimPose31.Description := 'arms stretched outward and downward similar to letter A';
HAnimPose31.Loa := 1;
HAnimPose31.TransitionDuration := 1.2;
HAnimJoint32 := THAnimJointNode.Create;
HAnimJoint32.Description := 'left shoulder';
HAnimJoint32.Rotation := Vector4(0,0,1,0.5);
{ METHOD .FdChildren.Add }
HAnimPose31.FdChildren.Add(HAnimJoint32);
HAnimJoint33 := THAnimJointNode.Create;
HAnimJoint33.Description := 'right shoulder';
HAnimJoint33.Rotation := Vector4(0,0,-1,0.5);
{ METHOD .FdChildren.Add }
HAnimPose31.FdChildren.Add(HAnimJoint33);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(HAnimPose31);
HAnimPose34 := THAnimPoseNode.Create;
HAnimPose34.Description := 'arms and legs stretched outward providing a TouchDown gesture';
HAnimPose34.Loa := 1;
end;

procedure InitHAnimPoseExamplePart2;
begin

HAnimPose34.TransitionDuration := 1.2;
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.Rotation := Vector4(0,1,0,-0.698132);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint35);
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.Rotation := Vector4(-1,1,1,1);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint36);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.Rotation := Vector4(1,0,0,1);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint37);
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.Rotation := Vector4(-0.2,0,0.1,0.225);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint38);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.Rotation := Vector4(-1,-1,-1,1);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint39);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.Rotation := Vector4(1,0,0,1);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint40);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.Rotation := Vector4(-0.2,0,0.1,0.25);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint41);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.Rotation := Vector4(0,0,0.01,0.2);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint42);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.Rotation := Vector4(0,0,0.01,0.1);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint43);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.Rotation := Vector4(0,0,-0.01,0.15);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint44);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.Rotation := Vector4(-1,0.5,1,2);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint45);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.Rotation := Vector4(-1,0,0,1);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint46);
HAnimJoint47 := THAnimJointNode.Create;
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint47);
HAnimJoint48 := THAnimJointNode.Create;
end;

procedure InitHAnimPoseExamplePart3;
begin

HAnimJoint48.Rotation := Vector4(-1,-0.5,-1,2.6);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint48);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.Rotation := Vector4(-1,0,0,1);
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint49);
HAnimJoint50 := THAnimJointNode.Create;
{ METHOD .FdChildren.Add }
HAnimPose34.FdChildren.Add(HAnimJoint50);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(HAnimPose34);
HAnimPose51 := THAnimPoseNode.Create;
HAnimPose51.Description := 'arms and legs straight down default binding pose for baseline Humanoid';
HAnimPose51.Loa := 1;
HAnimPose51.TransitionDuration := 1.5;
{ not defining any poseJoint HAnimJoint nodes equals the default "I" pose }
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(HAnimPose51);
HAnimPose52 := THAnimPoseNode.Create;
HAnimPose52.Description := 'TODO experimental pose not yet implemented';
HAnimPose52.Enabled := False;
HAnimPose52.TransitionDuration := 1.4;
HAnimPose52.Loa := -1;
{ TODO define poseJoint HAnimJoint nodes }
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(HAnimPose52);
HAnimPose53 := THAnimPoseNode.Create;
HAnimPose53.Description := 'Only modify humanoid_root Joint node to face left';
HAnimPose53.Loa := 0;
HAnimPose53.TransitionDuration := 1.1;
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.Description := 'Only rotate the model';
HAnimJoint54.Rotation := Vector4(0,1,0,1.570796);
{ METHOD .FdChildren.Add }
HAnimPose53.FdChildren.Add(HAnimJoint54);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(HAnimPose53);
HAnimPose55 := THAnimPoseNode.Create;
HAnimPose55.Description := 'Only modify humanoid_root Joint node to face right';
HAnimPose55.Loa := 0;
HAnimPose55.TransitionDuration := 1.1;
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.Description := 'Only rotate the model';
HAnimJoint56.Rotation := Vector4(0,1,0,-1.570796);
{ METHOD .FdChildren.Add }
HAnimPose55.FdChildren.Add(HAnimJoint56);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(HAnimPose55);
Group57 := TGroupNode.Create;
Transform58 := TTransformNode.Create;
Transform58.Translation := Vector3(0,2,0);
end;

procedure InitHAnimPoseExamplePart4;
begin

Shape59 := TShapeNode.Create;
Text60 := TTextNode.Create;
Text60.SetText(['HAnimPosePrototype example implementation']);
FontStyle61 := TFontStyleNode.Create;
FontStyle61.Family := ffSANS;
FontStyle61.Justify := fjMIDDLE;
FontStyle61.JustifyMinor := fjMIDDLE;
FontStyle61.Size := 0.15;
FontStyle61.Style := fsBOLD;
{ METHOD .FontStyle }
Text60.FontStyle := FontStyle61;
{ METHOD .Geometry }
Shape59.Geometry := Text60;
Appearance62 := TAppearanceNode.Create;
Material63 := TMaterialNode.Create;
Material63.DiffuseColor := Vector3(0.1,0.5,0.3);
{ METHOD .SetMaterial }
Appearance62.Material := Material63;
{ METHOD .Appearance }
Shape59.Appearance := Appearance62;
{ METHOD .FdChildren.Add }
Transform58.FdChildren.Add(Shape59);
{ METHOD .FdChildren.Add }
Group57.FdChildren.Add(Transform58);
Transform64 := TTransformNode.Create;
Transform64.Translation := Vector3(-1.5,1.5,0);
Shape65 := TShapeNode.Create;
Text66 := TTextNode.Create;
Text66.SetText(['"T" Pose']);
FontStyle67 := TFontStyleNode.Create;
FontStyle67.Family := ffSANS;
FontStyle67.Justify := fjMIDDLE;
FontStyle67.JustifyMinor := fjMIDDLE;
FontStyle67.Size := 0.1;
FontStyle67.Style := fsBOLD;
{ METHOD .FontStyle }
Text66.FontStyle := FontStyle67;
{ METHOD .Geometry }
Shape65.Geometry := Text66;
{ METHOD .Appearance }
Shape65.Appearance := Appearance62;
{ METHOD .FdChildren.Add }
Transform64.FdChildren.Add(Shape65);
Shape69 := TShapeNode.Create;
Appearance70 := TAppearanceNode.Create;
Material71 := TMaterialNode.Create;
Material71.Transparency := 0.8;
{ METHOD .SetMaterial }
Appearance70.Material := Material71;
{ METHOD .Appearance }
Shape69.Appearance := Appearance70;
Box72 := TBoxNode.Create;
end;

procedure InitHAnimPoseExamplePart5;
begin

Box72.Size := Vector3(0.45,0.2,0.001);
{ METHOD .Geometry }
Shape69.Geometry := Box72;
{ METHOD .FdChildren.Add }
Transform64.FdChildren.Add(Shape69);
TouchSensor73 := TTouchSensorNode.Create;
TouchSensor73.Description := 'select to move shoulders to \"T\" pose, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform64.FdChildren.Add(TouchSensor73);
{ Original "T_PoseTouchSensor.EventIsActive TO T_Pose.commencePose }
{ Sample T_PoseTouchSensor.EventIsActive TO T_Pose.commencePose}
Transform64.AddRoute(TouchSensor73.EventIsActive, HAnimPose27.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group57.FdChildren.Add(Transform64);
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(-1.5,1,0);
Shape76 := TShapeNode.Create;
Text77 := TTextNode.Create;
Text77.SetText(['"A" Pose']);
{ METHOD .FontStyle }
Text77.FontStyle := FontStyle67;
{ METHOD .Geometry }
Shape76.Geometry := Text77;
{ METHOD .Appearance }
Shape76.Appearance := Appearance62;
{ METHOD .FdChildren.Add }
Transform75.FdChildren.Add(Shape76);
Shape80 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape80.Appearance := Appearance70;
Box82 := TBoxNode.Create;
Box82.Size := Vector3(0.45,0.2,0.001);
{ METHOD .Geometry }
Shape80.Geometry := Box82;
{ METHOD .FdChildren.Add }
Transform75.FdChildren.Add(Shape80);
TouchSensor83 := TTouchSensorNode.Create;
TouchSensor83.Description := 'select to move shoulders to \"A\" pose, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform75.FdChildren.Add(TouchSensor83);
{ Original "A_PoseTouchSensor.EventIsActive TO A_Pose.commencePose }
{ Sample A_PoseTouchSensor.EventIsActive TO A_Pose.commencePose}
Transform75.AddRoute(TouchSensor83.EventIsActive, HAnimPose31.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group57.FdChildren.Add(Transform75);
Transform85 := TTransformNode.Create;
Transform85.Translation := Vector3(-1.5,0.5,0);
Shape86 := TShapeNode.Create;
Text87 := TTextNode.Create;
Text87.SetText(['TouchDown Pose']);
{ METHOD .FontStyle }
Text87.FontStyle := FontStyle67;
{ METHOD .Geometry }
Shape86.Geometry := Text87;
{ METHOD .Appearance }
Shape86.Appearance := Appearance62;
{ METHOD .FdChildren.Add }
Transform85.FdChildren.Add(Shape86);
Shape90 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape90.Appearance := Appearance70;
Box92 := TBoxNode.Create;
end;

procedure InitHAnimPoseExamplePart6;
begin

Box92.Size := Vector3(0.85,0.2,0.001);
{ METHOD .Geometry }
Shape90.Geometry := Box92;
{ METHOD .FdChildren.Add }
Transform85.FdChildren.Add(Shape90);
TouchSensor93 := TTouchSensorNode.Create;
TouchSensor93.Description := 'select to transition all joints to TouchDown pose';
{ METHOD .FdChildren.Add }
Transform85.FdChildren.Add(TouchSensor93);
{ Original "TouchDown_PoseTouchSensor.EventIsActive TO TouchDown_Pose.commencePose }
{ Sample TouchDown_PoseTouchSensor.EventIsActive TO TouchDown_Pose.commencePose}
Transform85.AddRoute(TouchSensor93.EventIsActive, HAnimPose34.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group57.FdChildren.Add(Transform85);
Transform95 := TTransformNode.Create;
Transform95.Translation := Vector3(-1.5,0,0);
Shape96 := TShapeNode.Create;
Text97 := TTextNode.Create;
Text97.SetText(['"I" Pose']);
{ METHOD .FontStyle }
Text97.FontStyle := FontStyle67;
{ METHOD .Geometry }
Shape96.Geometry := Text97;
{ METHOD .Appearance }
Shape96.Appearance := Appearance62;
{ METHOD .FdChildren.Add }
Transform95.FdChildren.Add(Shape96);
Shape100 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape100.Appearance := Appearance70;
Box102 := TBoxNode.Create;
Box102.Size := Vector3(0.45,0.2,0.001);
{ METHOD .Geometry }
Shape100.Geometry := Box102;
{ METHOD .FdChildren.Add }
Transform95.FdChildren.Add(Shape100);
TouchSensor103 := TTouchSensorNode.Create;
TouchSensor103.Description := 'select to transition all joints to \"I\" pose';
{ METHOD .FdChildren.Add }
Transform95.FdChildren.Add(TouchSensor103);
{ Original "I_PoseTouchSensor.EventIsActive TO I_Pose.commencePose }
{ Sample I_PoseTouchSensor.EventIsActive TO I_Pose.commencePose}
Transform95.AddRoute(TouchSensor103.EventIsActive, HAnimPose51.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group57.FdChildren.Add(Transform95);
Transform105 := TTransformNode.Create;
Transform105.Translation := Vector3(1.5,1.5,0);
Shape106 := TShapeNode.Create;
Text107 := TTextNode.Create;
Text107.SetText(['Face Left Pose']);
{ METHOD .FontStyle }
Text107.FontStyle := FontStyle67;
{ METHOD .Geometry }
Shape106.Geometry := Text107;
{ METHOD .Appearance }
Shape106.Appearance := Appearance62;
{ METHOD .FdChildren.Add }
Transform105.FdChildren.Add(Shape106);
Shape110 := TShapeNode.Create;
{ METHOD .Appearance }
Shape110.Appearance := Appearance70;
Box112 := TBoxNode.Create;
end;

procedure InitHAnimPoseExamplePart7;
begin

Box112.Size := Vector3(0.9,0.2,0.001);
{ METHOD .Geometry }
Shape110.Geometry := Box112;
{ METHOD .FdChildren.Add }
Transform105.FdChildren.Add(Shape110);
TouchSensor113 := TTouchSensorNode.Create;
TouchSensor113.Description := 'select to rotate body and Face Left, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform105.FdChildren.Add(TouchSensor113);
{ Original "FaceLeftTouchSensor.EventIsActive TO FaceLeft_Pose.commencePose }
{ Sample FaceLeftTouchSensor.EventIsActive TO FaceLeft_Pose.commencePose}
Transform105.AddRoute(TouchSensor113.EventIsActive, HAnimPose53.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group57.FdChildren.Add(Transform105);
Transform115 := TTransformNode.Create;
Transform115.Translation := Vector3(1.5,1,0);
Shape116 := TShapeNode.Create;
Text117 := TTextNode.Create;
Text117.SetText(['Face Right Pose']);
{ METHOD .FontStyle }
Text117.FontStyle := FontStyle67;
{ METHOD .Geometry }
Shape116.Geometry := Text117;
{ METHOD .Appearance }
Shape116.Appearance := Appearance62;
{ METHOD .FdChildren.Add }
Transform115.FdChildren.Add(Shape116);
Shape120 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape120.Appearance := Appearance70;
Box122 := TBoxNode.Create;
Box122.Size := Vector3(0.9,0.2,0.001);
{ METHOD .Geometry }
Shape120.Geometry := Box122;
{ METHOD .FdChildren.Add }
Transform115.FdChildren.Add(Shape120);
TouchSensor123 := TTouchSensorNode.Create;
TouchSensor123.Description := 'select to rotate body and Face Right, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform115.FdChildren.Add(TouchSensor123);
{ Original "FaceRightTouchSensor.EventIsActive TO FaceRight_Pose.commencePose }
{ Sample FaceRightTouchSensor.EventIsActive TO FaceRight_Pose.commencePose}
Transform115.AddRoute(TouchSensor123.EventIsActive, HAnimPose55.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group57.FdChildren.Add(Transform115);
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(1.5,0.5,0);
Shape126 := TShapeNode.Create;
Text127 := TTextNode.Create;
Text127.SetText(['Direct animation','to, from "I" Pose']);
{ METHOD .FontStyle }
Text127.FontStyle := FontStyle67;
{ METHOD .Geometry }
Shape126.Geometry := Text127;
Appearance129 := TAppearanceNode.Create;
Material130 := TMaterialNode.Create;
Material130.DiffuseColor := Vector3(0.1,0.2,0.3);
{ METHOD .SetMaterial }
Appearance129.Material := Material130;
{ METHOD .Appearance }
Shape126.Appearance := Appearance129;
end;

procedure InitHAnimPoseExamplePart8;
begin

{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(Shape126);
Shape131 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape131.Appearance := Appearance70;
Box133 := TBoxNode.Create;
Box133.Size := Vector3(0.9,0.25,0.001);
{ METHOD .Geometry }
Shape131.Geometry := Box133;
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(Shape131);
TouchSensor134 := TTouchSensorNode.Create;
TouchSensor134.Description := 'select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events';
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(TouchSensor134);
{ cycleInterval=4 also hard-coded in script execution message }
TimeSensor135 := TTimeSensorNode.Create;
TimeSensor135.CycleInterval := 4;
TimeSensor135.Description := 'directly animate several poses';
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(TimeSensor135);
ScalarInterpolator136 := TScalarInterpolatorNode.Create;
ScalarInterpolator136.SetKey([0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator136.SetKeyValue([0,0,1,1,0,0]);
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(ScalarInterpolator136);
{ Original "AnimatePosesTouchSensor.EventTouchTime TO AnimatePosesClock.startTime }
{ Sample AnimatePosesTouchSensor.EventTouchTime TO AnimatePosesClock.startTime}
Transform125.AddRoute(TouchSensor134.EventTouchTime, TimeSensor135.startTime);
{ METHOD .AddX3DROUTE }
{ Original "AnimatePosesClock.EventFraction_changed TO AnimatePosesLoopInterpolator.EventSet_fraction }
{ Sample AnimatePosesClock.EventFraction_changed TO AnimatePosesLoopInterpolator.EventSet_fraction}
Transform125.AddRoute(TimeSensor135.EventFraction_changed, ScalarInterpolator136.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "AnimatePosesLoopInterpolator.EventValue_changed TO I_Pose.EventSet_fraction }
{ Sample AnimatePosesLoopInterpolator.EventValue_changed TO I_Pose.EventSet_fraction}
Transform125.AddRoute(ScalarInterpolator136.EventValue_changed, HAnimPose51.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group57.FdChildren.Add(Transform125);
Transform140 := TTransformNode.Create;
Transform140.Translation := Vector3(1.5,0,0);
Shape141 := TShapeNode.Create;
Text142 := TTextNode.Create;
Text142.SetText(['Reset All Joints','to Default "I" Pose']);
{ METHOD .FontStyle }
Text142.FontStyle := FontStyle67;
{ METHOD .Geometry }
Shape141.Geometry := Text142;
{ METHOD .Appearance }
Shape141.Appearance := Appearance129;
{ METHOD .FdChildren.Add }
Transform140.FdChildren.Add(Shape141);
Shape145 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape145.Appearance := Appearance70;
Box147 := TBoxNode.Create;
Box147.Size := Vector3(0.9,0.25,0.001);
{ METHOD .Geometry }
Shape145.Geometry := Box147;
{ METHOD .FdChildren.Add }
Transform140.FdChildren.Add(Shape145);
TouchSensor148 := TTouchSensorNode.Create;
TouchSensor148.Description := 'select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event';
{ METHOD .FdChildren.Add }
Transform140.FdChildren.Add(TouchSensor148);
end;

procedure InitHAnimPoseExamplePart9;
begin

{ Original "ResetPoseTouchSensor.EventIsActive TO FaceLeft_Pose.resetAllJoints }
{ Sample ResetPoseTouchSensor.EventIsActive TO FaceLeft_Pose.resetAllJoints}
Transform140.AddRoute(TouchSensor148.EventIsActive, HAnimPose53.resetAllJoints);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group57.FdChildren.Add(Transform140);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Group57);
{ not needed for native node implementation <Group DEF='HandleInlineLoadsensorRouting'> <ROUTE fromField='isLoaded' fromNode='HumanoidInlineLoadSensor' toField='commencePose' toNode='A_Pose'/> <ROUTE fromField='isLoaded' fromNode='HumanoidInlineLoadSensor' toField='commencePose' toNode='H_Pose'/> <ROUTE fromField='isLoaded' fromNode='HumanoidInlineLoadSensor' toField='commencePose' toNode='I_Pose'/> <ROUTE fromField='isLoaded' fromNode='HumanoidInlineLoadSensor' toField='commencePose' toNode='T_Pose'/> <ROUTE fromField='isLoaded' fromNode='HumanoidInlineLoadSensor' toField='commencePose' toNode='FaceLeft_Pose'/> <ROUTE fromField='isLoaded' fromNode='HumanoidInlineLoadSensor' toField='commencePose' toNode='FaceRight_Pose'/> <ROUTE fromField='isLoaded' fromNode='HumanoidInlineLoadSensor' toField='commencePose' toNode='TouchDown_Pose'/> </Group> }
HAnimHumanoid150 := THAnimHumanoidNode.Create;
HAnimHumanoid150.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid150.Version := '2.1';
{ METHOD .FdChildren.Add }
HAnimHumanoid150.FdChildren.Add(HAnimPose31);
{ METHOD .FdChildren.Add }
HAnimHumanoid150.FdChildren.Add(HAnimPose27);
{ METHOD .FdChildren.Add }
HAnimHumanoid150.FdChildren.Add(HAnimPose51);
{ METHOD .FdChildren.Add }
HAnimHumanoid150.FdChildren.Add(HAnimPose52);
{ METHOD .FdChildren.Add }
HAnimHumanoid150.FdChildren.Add(HAnimPose53);
{ METHOD .FdChildren.Add }
HAnimHumanoid150.FdChildren.Add(HAnimPose55);
{ METHOD .FdChildren.Add }
HAnimHumanoid150.FdChildren.Add(HAnimPose34);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(HAnimHumanoid150);
{ METHOD .AddGroup }
X3D0.AddChildren([Group17]);
end;

function CreateHAnimPoseExample: TX3DRootNode;
begin
InitHAnimPoseExamplePart0;
InitHAnimPoseExamplePart1;
InitHAnimPoseExamplePart2;
InitHAnimPoseExamplePart3;
InitHAnimPoseExamplePart4;
InitHAnimPoseExamplePart5;
InitHAnimPoseExamplePart6;
InitHAnimPoseExamplePart7;
InitHAnimPoseExamplePart8;
InitHAnimPoseExamplePart9;
Result := X3D0;
end;

begin
end.
