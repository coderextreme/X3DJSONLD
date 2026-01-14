function BoxMan4: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group32: TGroupNode;
ExternProtoDeclare33: TExternProtoDeclareNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
field48: TfieldNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
WorldInfo59: TWorldInfoNode;
Background60: TBackgroundNode;
HAnimHumanoid61: THAnimHumanoidNode;
HAnimJoint62: THAnimJointNode;
HAnimSegment63: THAnimSegmentNode;
Transform64: TTransformNode;
Shape65: TShapeNode;
Appearance66: TAppearanceNode;
Material67: TMaterialNode;
Sphere68: TSphereNode;
HAnimJoint69: THAnimJointNode;
HAnimSegment70: THAnimSegmentNode;
Transform71: TTransformNode;
Shape72: TShapeNode;
HAnimJoint73: THAnimJointNode;
HAnimSegment74: THAnimSegmentNode;
Transform75: TTransformNode;
Shape76: TShapeNode;
HAnimJoint77: THAnimJointNode;
HAnimSegment78: THAnimSegmentNode;
Transform79: TTransformNode;
Shape80: TShapeNode;
HAnimJoint81: THAnimJointNode;
HAnimSegment82: THAnimSegmentNode;
Transform83: TTransformNode;
Shape84: TShapeNode;
HAnimSite85: THAnimSiteNode;
Shape86: TShapeNode;
Appearance87: TAppearanceNode;
Material88: TMaterialNode;
Sphere89: TSphereNode;
HAnimJoint90: THAnimJointNode;
HAnimSegment91: THAnimSegmentNode;
Transform92: TTransformNode;
Shape93: TShapeNode;
HAnimJoint94: THAnimJointNode;
HAnimSegment95: THAnimSegmentNode;
Transform96: TTransformNode;
Shape97: TShapeNode;
HAnimJoint98: THAnimJointNode;
HAnimSegment99: THAnimSegmentNode;
Transform100: TTransformNode;
Shape101: TShapeNode;
HAnimJoint102: THAnimJointNode;
HAnimSegment103: THAnimSegmentNode;
Transform104: TTransformNode;
Shape105: TShapeNode;
HAnimSite106: THAnimSiteNode;
Shape107: TShapeNode;
HAnimJoint108: THAnimJointNode;
HAnimSegment109: THAnimSegmentNode;
Transform110: TTransformNode;
Shape111: TShapeNode;
HAnimJoint112: THAnimJointNode;
HAnimSegment113: THAnimSegmentNode;
Transform114: TTransformNode;
Shape115: TShapeNode;
HAnimSite116: THAnimSiteNode;
Shape117: TShapeNode;
HAnimJoint118: THAnimJointNode;
HAnimSegment119: THAnimSegmentNode;
Transform120: TTransformNode;
Shape121: TShapeNode;
HAnimJoint122: THAnimJointNode;
HAnimSegment123: THAnimSegmentNode;
Transform124: TTransformNode;
Shape125: TShapeNode;
HAnimJoint126: THAnimJointNode;
HAnimSegment127: THAnimSegmentNode;
Transform128: TTransformNode;
Shape129: TShapeNode;
HAnimSite130: THAnimSiteNode;
Shape131: TShapeNode;
HAnimJoint132: THAnimJointNode;
HAnimSegment133: THAnimSegmentNode;
Transform134: TTransformNode;
Shape135: TShapeNode;
HAnimJoint136: THAnimJointNode;
HAnimSegment137: THAnimSegmentNode;
Transform138: TTransformNode;
Shape139: TShapeNode;
HAnimJoint140: THAnimJointNode;
HAnimSegment141: THAnimSegmentNode;
Transform142: TTransformNode;
Shape143: TShapeNode;
HAnimSite144: THAnimSiteNode;
Shape145: TShapeNode;
HAnimJoint146: THAnimJointNode;
HAnimJoint147: THAnimJointNode;
HAnimJoint148: THAnimJointNode;
HAnimJoint149: THAnimJointNode;
HAnimJoint150: THAnimJointNode;
HAnimJoint151: THAnimJointNode;
HAnimJoint152: THAnimJointNode;
HAnimJoint153: THAnimJointNode;
HAnimJoint154: THAnimJointNode;
HAnimJoint155: THAnimJointNode;
HAnimJoint156: THAnimJointNode;
HAnimJoint157: THAnimJointNode;
HAnimJoint158: THAnimJointNode;
HAnimJoint159: THAnimJointNode;
HAnimJoint160: THAnimJointNode;
HAnimJoint161: THAnimJointNode;
HAnimJoint162: THAnimJointNode;
HAnimSegment163: THAnimSegmentNode;
HAnimSegment164: THAnimSegmentNode;
HAnimSegment165: THAnimSegmentNode;
HAnimSegment166: THAnimSegmentNode;
HAnimSegment167: THAnimSegmentNode;
HAnimSegment168: THAnimSegmentNode;
HAnimSegment169: THAnimSegmentNode;
HAnimSegment170: THAnimSegmentNode;
HAnimSegment171: THAnimSegmentNode;
HAnimSegment172: THAnimSegmentNode;
HAnimSegment173: THAnimSegmentNode;
HAnimSegment174: THAnimSegmentNode;
HAnimSegment175: THAnimSegmentNode;
HAnimSegment176: THAnimSegmentNode;
HAnimSegment177: THAnimSegmentNode;
HAnimSegment178: THAnimSegmentNode;
HAnimSegment179: THAnimSegmentNode;
HAnimSite180: THAnimSiteNode;
HAnimSite181: THAnimSiteNode;
HAnimSite182: THAnimSiteNode;
HAnimSite183: THAnimSiteNode;
HAnimSite184: THAnimSiteNode;
HAnimSite185: THAnimSiteNode;
Viewpoint186: TViewpointNode;
Viewpoint187: TViewpointNode;
Viewpoint188: TViewpointNode;
Viewpoint189: TViewpointNode;
Viewpoint190: TViewpointNode;
Coordinate191: TCoordinateNode;
Group192: TGroupNode;
Shape193: TShapeNode;
Appearance194: TAppearanceNode;
Material195: TMaterialNode;
IndexedFaceSet196: TIndexedFaceSetNode;
Coordinate197: TCoordinateNode;
Shape198: TShapeNode;
Appearance199: TAppearanceNode;
Material200: TMaterialNode;
IndexedFaceSet201: TIndexedFaceSetNode;
Coordinate202: TCoordinateNode;
Shape203: TShapeNode;
Appearance204: TAppearanceNode;
Material205: TMaterialNode;
IndexedFaceSet206: TIndexedFaceSetNode;
Coordinate207: TCoordinateNode;
Shape208: TShapeNode;
Appearance209: TAppearanceNode;
Material210: TMaterialNode;
IndexedFaceSet211: TIndexedFaceSetNode;
Coordinate212: TCoordinateNode;
Shape213: TShapeNode;
Appearance214: TAppearanceNode;
Material215: TMaterialNode;
IndexedLineSet216: TIndexedLineSetNode;
Coordinate217: TCoordinateNode;
ProtoInstance218: TProtoInstanceNode;
Script219: TScriptNode;
field220: TfieldNode;
field221: TfieldNode;
HAnimHumanoid222: THAnimHumanoidNode;
field223: TfieldNode;
field224: TfieldNode;
field225: TfieldNode;
field226: TfieldNode;
field227: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'BoxMan.x3d';
X3D0.Meta['description'] := 'A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare).';
X3D0.Meta['creator'] := 'James Smith - james@vapourtech.com';
X3D0.Meta['translator'] := 'Don Brutzman and Matt Beitler';
X3D0.Meta['created'] := '1 March 2001';
X3D0.Meta['translated'] := '19 October 2001';
X3D0.Meta['modified'] := 'Tue, 09 Sep 2025 19:37:51 GMT';
X3D0.Meta['reference'] := 'Original site http://HAnim.org';
X3D0.Meta['reference'] := '../Legacy/originals/boxman.wrl';
X3D0.Meta['reference'] := 'BoxMan.js';
X3D0.Meta['reference'] := 'BoxManAnimationPanel.x3d';
X3D0.Meta['reference'] := 'http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl';
X3D0.Meta['reference'] := 'http://www.vapourtech.com/team/james/boxman.wrl';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim2001';
X3D0.Meta['reference'] := 'http://HAnim.org/Models';
X3D0.Meta['reference'] := 'http://HAnim.org/Nodes';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/X3dToVrml97.xslt';
X3D0.Meta['reference'] := 'http://www.vapourtech.com';
X3D0.Meta['warning'] := 'Skin mesh is split across multiple shapes within a Group, should that be allowed?';
X3D0.Meta['TODO'] := 'What does the original animation script accomplish? It is not hooked up, script source contains errors...';
X3D0.Meta['TODO'] := 'InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org';
X3D0.Meta['Image'] := 'BoxManViewInclined.png';
X3D0.Meta['Image'] := 'BoxManViewFront.png';
X3D0.Meta['Image'] := 'BoxManViewRight.png';
X3D0.Meta['Image'] := 'BoxManViewLeft.png';
X3D0.Meta['Image'] := 'BoxManViewTop.png';
X3D0.Meta['rights'] := '(C) 2000 James Smith - james@vapourtech.com';
X3D0.Meta['subject'] := 'BoxMan HAnim 2.0';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d';
Group32 := TGroupNode.Create;
ExternProtoDeclare33 := TExternProtoDeclareNode.Create;
ExternProtoDeclare33.NameField := 'LOA1_WalkAnimation';
ExternProtoDeclare33.SetUrl(['../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation','../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation']);
field34 := TfieldNode.Create;
field34.AccessType := 'inputOutput';
field34.Type := 'SFTime';
field34.NameField := 'cycleInterval';
{ .AddField }
ExternProtoDeclare33.Field := field34;
field35 := TfieldNode.Create;
field35.AccessType := 'inputOutput';
field35.Type := 'SFBool';
field35.NameField := 'enabled';
{ .AddField }
ExternProtoDeclare33.Field := field35;
field36 := TfieldNode.Create;
field36.AccessType := 'inputOutput';
field36.Type := 'SFBool';
field36.NameField := 'loop';
{ .AddField }
ExternProtoDeclare33.Field := field36;
field37 := TfieldNode.Create;
field37.AccessType := 'inputOutput';
field37.Type := 'SFTime';
field37.NameField := 'startTime';
{ .AddField }
ExternProtoDeclare33.Field := field37;
field38 := TfieldNode.Create;
field38.AccessType := 'inputOutput';
field38.Type := 'SFTime';
field38.NameField := 'stopTime';
{ .AddField }
ExternProtoDeclare33.Field := field38;
field39 := TfieldNode.Create;
field39.AccessType := 'outputOnly';
field39.Type := 'SFFloat';
field39.NameField := 'fraction_changed';
{ .AddField }
ExternProtoDeclare33.Field := field39;
field40 := TfieldNode.Create;
field40.AccessType := 'outputOnly';
field40.Type := 'SFVec3f';
field40.NameField := 'HumanoidRoot_translation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field40;
field41 := TfieldNode.Create;
field41.AccessType := 'outputOnly';
field41.Type := 'SFRotation';
field41.NameField := 'HumanoidRoot_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field41;
field42 := TfieldNode.Create;
field42.AccessType := 'outputOnly';
field42.Type := 'SFRotation';
field42.NameField := 'l_hip_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field42;
field43 := TfieldNode.Create;
field43.AccessType := 'outputOnly';
field43.Type := 'SFRotation';
field43.NameField := 'l_knee_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field43;
field44 := TfieldNode.Create;
field44.AccessType := 'outputOnly';
field44.Type := 'SFRotation';
field44.NameField := 'l_ankle_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field44;
field45 := TfieldNode.Create;
field45.AccessType := 'outputOnly';
field45.Type := 'SFRotation';
field45.NameField := 'l_midtarsal_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field45;
field46 := TfieldNode.Create;
field46.AccessType := 'outputOnly';
field46.Type := 'SFRotation';
field46.NameField := 'r_hip_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field46;
field47 := TfieldNode.Create;
field47.AccessType := 'outputOnly';
field47.Type := 'SFRotation';
field47.NameField := 'r_knee_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field47;
field48 := TfieldNode.Create;
field48.AccessType := 'outputOnly';
field48.Type := 'SFRotation';
field48.NameField := 'r_ankle_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field48;
field49 := TfieldNode.Create;
field49.AccessType := 'outputOnly';
field49.Type := 'SFRotation';
field49.NameField := 'r_midtarsal_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field49;
field50 := TfieldNode.Create;
field50.AccessType := 'outputOnly';
field50.Type := 'SFRotation';
field50.NameField := 'vl5_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field50;
field51 := TfieldNode.Create;
field51.AccessType := 'outputOnly';
field51.Type := 'SFRotation';
field51.NameField := 'skullbase_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field51;
field52 := TfieldNode.Create;
field52.AccessType := 'outputOnly';
field52.Type := 'SFRotation';
field52.NameField := 'l_shoulder_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field52;
field53 := TfieldNode.Create;
field53.AccessType := 'outputOnly';
field53.Type := 'SFRotation';
field53.NameField := 'l_elbow_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field53;
field54 := TfieldNode.Create;
field54.AccessType := 'outputOnly';
field54.Type := 'SFRotation';
field54.NameField := 'l_wrist_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field54;
field55 := TfieldNode.Create;
field55.AccessType := 'outputOnly';
field55.Type := 'SFRotation';
field55.NameField := 'r_shoulder_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field55;
field56 := TfieldNode.Create;
field56.AccessType := 'outputOnly';
field56.Type := 'SFRotation';
field56.NameField := 'r_elbow_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field56;
field57 := TfieldNode.Create;
field57.AccessType := 'outputOnly';
field57.Type := 'SFRotation';
field57.NameField := 'r_wrist_rotation_changed';
{ .AddField }
ExternProtoDeclare33.Field := field57;
field58 := TfieldNode.Create;
field58.AccessType := 'outputOnly';
field58.Type := 'SFBool';
field58.NameField := 'isActive';
{ .AddField }
ExternProtoDeclare33.Field := field58;
{ .AddChildren }
Group32.AddChildren([ExternProtoDeclare33]);
WorldInfo59 := TWorldInfoNode.Create;
WorldInfo59.Title := 'BoxMan - A Seamless VRML Human';
WorldInfo59.SetInfo(['(C) 2000 James Smith - james@vapourtech.com','http://www.vapourtech.com/team/james/boxman.wrl','Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com']);
{ .AddChildren }
Group32.AddChildren([WorldInfo59]);
Background60 := TBackgroundNode.Create;
Background60.SetSkyColor([Vector3(0.75,0.75,0.75)]);
Background60.SetGroundColor([Vector3(0.6,0.6,0.6)]);
{ .AddChildren }
Group32.AddChildren([Background60]);
HAnimHumanoid61 := THAnimHumanoidNode.Create;
HAnimHumanoid61.NameField := 'Humanoid';
HAnimHumanoid61.SetInfo(['authorName=James Smith','authorEmail=james@vapourtech.com','copyright=(C) 2000 James Smith - james@vapourtech.com','humanoidVersion=1.0']);
HAnimHumanoid61.Version := '1.0';
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.NameField := 'humanoid_root';
HAnimJoint62.Center := Vector3(0,0.9723,-0.0728);
HAnimJoint62.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint62.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment63 := THAnimSegmentNode.Create;
HAnimSegment63.NameField := 'sacrum';
Transform64 := TTransformNode.Create;
Transform64.Translation := Vector3(0,0.9723,-0.0728);
Shape65 := TShapeNode.Create;
Appearance66 := TAppearanceNode.Create;
Material67 := TMaterialNode.Create;
Material67.DiffuseColor := Vector3(1,1,0);
{ .SetMaterial }
Appearance66.Material := Material67;
{ .SetAppearance }
Shape65.Appearance := Appearance66;
Sphere68 := TSphereNode.Create;
Sphere68.Radius := 0.02;
{ .SetGeometry }
Shape65.Geometry := Sphere68;
{ .AddChild }
Transform64.AddChildren([Shape65]);
{ .AddChildren }
HAnimSegment63.AddChildren([Transform64]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimSegment63]);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.NameField := 'l_hip';
HAnimJoint69.Center := Vector3(0.0956,0.9364,0);
HAnimJoint69.SetSkinCoordIndex([12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint69.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment70 := THAnimSegmentNode.Create;
HAnimSegment70.NameField := 'l_thigh';
Transform71 := TTransformNode.Create;
Transform71.Translation := Vector3(0.0956,0.9364,0);
Shape72 := TShapeNode.Create;
Shape72 := Shape65;
{ .AddChild }
Transform71.AddChildren([Shape72]);
{ .AddChildren }
HAnimSegment70.AddChildren([Transform71]);
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimSegment70]);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.NameField := 'l_knee';
HAnimJoint73.Center := Vector3(0.0956,0.5095,-0.0036);
HAnimJoint73.SetSkinCoordIndex([36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint73.SetSkinCoordWeight([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment74 := THAnimSegmentNode.Create;
HAnimSegment74.NameField := 'l_calf';
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(0.0956,0.5095,-0.0036);
Shape76 := TShapeNode.Create;
Shape76 := Shape65;
{ .AddChild }
Transform75.AddChildren([Shape76]);
{ .AddChildren }
HAnimSegment74.AddChildren([Transform75]);
{ .AddChildren }
HAnimJoint73.AddChildren([HAnimSegment74]);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.NameField := 'l_ankle';
HAnimJoint77.Center := Vector3(0.0946,0.0762,-0.0261);
HAnimJoint77.SetSkinCoordIndex([64,65,66,67,68,69,70,71]);
HAnimJoint77.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment78 := THAnimSegmentNode.Create;
HAnimSegment78.NameField := 'l_hindfoot';
Transform79 := TTransformNode.Create;
Transform79.Translation := Vector3(0.0946,0.0762,-0.0261);
Shape80 := TShapeNode.Create;
Shape80 := Shape65;
{ .AddChild }
Transform79.AddChildren([Shape80]);
{ .AddChildren }
HAnimSegment78.AddChildren([Transform79]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimSegment78]);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'l_midtarsal';
HAnimJoint81.Center := Vector3(0.1079,0.0317,0.067);
HAnimJoint81.SetSkinCoordIndex([72,73,74,75,76,77,78,79]);
HAnimJoint81.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment82 := THAnimSegmentNode.Create;
HAnimSegment82.NameField := 'l_middistal';
Transform83 := TTransformNode.Create;
Transform83.Translation := Vector3(0.1079,0.0317,0.067);
Shape84 := TShapeNode.Create;
Shape84 := Shape65;
{ .AddChild }
Transform83.AddChildren([Shape84]);
{ .AddChildren }
HAnimSegment82.AddChildren([Transform83]);
HAnimSite85 := THAnimSiteNode.Create;
HAnimSite85.NameField := 'l_middistal_tip';
HAnimSite85.Translation := Vector3(0.095,0.0005,0.1924);
Shape86 := TShapeNode.Create;
Appearance87 := TAppearanceNode.Create;
Material88 := TMaterialNode.Create;
Material88.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance87.Material := Material88;
{ .SetAppearance }
Shape86.Appearance := Appearance87;
Sphere89 := TSphereNode.Create;
Sphere89.Radius := 0.02;
{ .SetGeometry }
Shape86.Geometry := Sphere89;
{ .AddChildren }
HAnimSite85.AddChildren([Shape86]);
{ .AddChildren }
HAnimSegment82.AddChildren([HAnimSite85]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimSegment82]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint81]);
{ .AddChildren }
HAnimJoint73.AddChildren([HAnimJoint77]);
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimJoint73]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint69]);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.NameField := 'r_hip';
HAnimJoint90.Center := Vector3(-0.0956,0.9364,0);
HAnimJoint90.SetSkinCoordIndex([80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint90.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment91 := THAnimSegmentNode.Create;
HAnimSegment91.NameField := 'r_thigh';
Transform92 := TTransformNode.Create;
Transform92.Translation := Vector3(-0.0956,0.9364,0);
Shape93 := TShapeNode.Create;
Shape93 := Shape65;
{ .AddChild }
Transform92.AddChildren([Shape93]);
{ .AddChildren }
HAnimSegment91.AddChildren([Transform92]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimSegment91]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.NameField := 'r_knee';
HAnimJoint94.Center := Vector3(-0.0956,0.5095,-0.0036);
HAnimJoint94.SetSkinCoordIndex([104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint94.SetSkinCoordWeight([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment95 := THAnimSegmentNode.Create;
HAnimSegment95.NameField := 'r_calf';
Transform96 := TTransformNode.Create;
Transform96.Translation := Vector3(-0.0956,0.5095,-0.0036);
Shape97 := TShapeNode.Create;
Shape97 := Shape65;
{ .AddChild }
Transform96.AddChildren([Shape97]);
{ .AddChildren }
HAnimSegment95.AddChildren([Transform96]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimSegment95]);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.NameField := 'r_ankle';
HAnimJoint98.Center := Vector3(-0.0946,0.0762,-0.0261);
HAnimJoint98.SetSkinCoordIndex([132,133,134,135,136,137,138,139]);
HAnimJoint98.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment99 := THAnimSegmentNode.Create;
HAnimSegment99.NameField := 'r_hindfoot';
Transform100 := TTransformNode.Create;
Transform100.Translation := Vector3(-0.0946,0.0762,-0.0261);
Shape101 := TShapeNode.Create;
Shape101 := Shape65;
{ .AddChild }
Transform100.AddChildren([Shape101]);
{ .AddChildren }
HAnimSegment99.AddChildren([Transform100]);
{ .AddChildren }
HAnimJoint98.AddChildren([HAnimSegment99]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.NameField := 'r_midtarsal';
HAnimJoint102.Center := Vector3(-0.1079,0.0317,0.067);
HAnimJoint102.SetSkinCoordIndex([140,141,142,143,144,145,146,147]);
HAnimJoint102.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment103 := THAnimSegmentNode.Create;
HAnimSegment103.NameField := 'r_middistal';
Transform104 := TTransformNode.Create;
Transform104.Translation := Vector3(-0.1079,0.0317,0.067);
Shape105 := TShapeNode.Create;
Shape105 := Shape65;
{ .AddChild }
Transform104.AddChildren([Shape105]);
{ .AddChildren }
HAnimSegment103.AddChildren([Transform104]);
HAnimSite106 := THAnimSiteNode.Create;
HAnimSite106.NameField := 'r_middistal_tip';
HAnimSite106.Translation := Vector3(-0.095,0.0005,0.1924);
Shape107 := TShapeNode.Create;
Shape107 := Shape86;
{ .AddChildren }
HAnimSite106.AddChildren([Shape107]);
{ .AddChildren }
HAnimSegment103.AddChildren([HAnimSite106]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimSegment103]);
{ .AddChildren }
HAnimJoint98.AddChildren([HAnimJoint102]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimJoint98]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint94]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint90]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.NameField := 'vl5';
HAnimJoint108.Center := Vector3(0,1.0817,-0.0728);
HAnimJoint108.SetSkinCoordIndex([148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint108.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment109 := THAnimSegmentNode.Create;
HAnimSegment109.NameField := 'l5';
Transform110 := TTransformNode.Create;
Transform110.Translation := Vector3(0,1.0817,-0.0728);
Shape111 := TShapeNode.Create;
Shape111 := Shape65;
{ .AddChild }
Transform110.AddChildren([Shape111]);
{ .AddChildren }
HAnimSegment109.AddChildren([Transform110]);
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimSegment109]);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.NameField := 'skullbase';
HAnimJoint112.Center := Vector3(0,1.644,0.036);
HAnimJoint112.SetSkinCoordIndex([168,169,170,171,172,173,174,175]);
HAnimJoint112.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment113 := THAnimSegmentNode.Create;
HAnimSegment113.NameField := 'skull';
Transform114 := TTransformNode.Create;
Transform114.Translation := Vector3(0,1.644,0.036);
Shape115 := TShapeNode.Create;
Shape115 := Shape65;
{ .AddChild }
Transform114.AddChildren([Shape115]);
{ .AddChildren }
HAnimSegment113.AddChildren([Transform114]);
HAnimSite116 := THAnimSiteNode.Create;
HAnimSite116.NameField := 'skull_tip';
HAnimSite116.Translation := Vector3(-0.0029,1.7771,0.0274);
Shape117 := TShapeNode.Create;
Shape117 := Shape65;
{ .AddChildren }
HAnimSite116.AddChildren([Shape117]);
{ .AddChildren }
HAnimSegment113.AddChildren([HAnimSite116]);
{ .AddChildren }
HAnimJoint112.AddChildren([HAnimSegment113]);
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimJoint112]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.NameField := 'l_shoulder';
HAnimJoint118.Center := Vector3(0.1968,1.4642,-0.0265);
HAnimJoint118.SetSkinCoordIndex([176,177,178,179,180,181,182,183]);
HAnimJoint118.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment119 := THAnimSegmentNode.Create;
HAnimSegment119.NameField := 'l_upperarm';
Transform120 := TTransformNode.Create;
Transform120.Translation := Vector3(0.1968,1.4642,-0.0265);
Shape121 := TShapeNode.Create;
Shape121 := Shape65;
{ .AddChild }
Transform120.AddChildren([Shape121]);
{ .AddChildren }
HAnimSegment119.AddChildren([Transform120]);
{ .AddChildren }
HAnimJoint118.AddChildren([HAnimSegment119]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.NameField := 'l_elbow';
HAnimJoint122.Center := Vector3(0.1982,1.1622,-0.0557);
HAnimJoint122.SetSkinCoordIndex([184,185,186,187,188,189,190,191]);
HAnimJoint122.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment123 := THAnimSegmentNode.Create;
HAnimSegment123.NameField := 'l_forearm';
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(0.1982,1.1622,-0.0557);
Shape125 := TShapeNode.Create;
Shape125 := Shape65;
{ .AddChild }
Transform124.AddChildren([Shape125]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform124]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimSegment123]);
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.NameField := 'l_wrist';
HAnimJoint126.Center := Vector3(0.1972,0.8929,-0.069);
HAnimJoint126.SetSkinCoordIndex([192,193,194,195,196,197,198,199]);
HAnimJoint126.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment127 := THAnimSegmentNode.Create;
HAnimSegment127.NameField := 'l_hand';
Transform128 := TTransformNode.Create;
Transform128.Translation := Vector3(0.1972,0.8929,-0.069);
Shape129 := TShapeNode.Create;
Shape129 := Shape65;
{ .AddChild }
Transform128.AddChildren([Shape129]);
{ .AddChildren }
HAnimSegment127.AddChildren([Transform128]);
HAnimSite130 := THAnimSiteNode.Create;
HAnimSite130.NameField := 'l_hand_tip';
HAnimSite130.Translation := Vector3(0.1912,0.6976,-0.071);
Shape131 := TShapeNode.Create;
Shape131 := Shape86;
{ .AddChildren }
HAnimSite130.AddChildren([Shape131]);
{ .AddChildren }
HAnimSegment127.AddChildren([HAnimSite130]);
{ .AddChildren }
HAnimJoint126.AddChildren([HAnimSegment127]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint126]);
{ .AddChildren }
HAnimJoint118.AddChildren([HAnimJoint122]);
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimJoint118]);
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.NameField := 'r_shoulder';
HAnimJoint132.Center := Vector3(-0.1968,1.4642,-0.0265);
HAnimJoint132.SetSkinCoordIndex([200,201,202,203,204,205,206,207]);
HAnimJoint132.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment133 := THAnimSegmentNode.Create;
HAnimSegment133.NameField := 'r_upperarm';
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(-0.1968,1.4642,-0.0265);
Shape135 := TShapeNode.Create;
Shape135 := Shape65;
{ .AddChild }
Transform134.AddChildren([Shape135]);
{ .AddChildren }
HAnimSegment133.AddChildren([Transform134]);
{ .AddChildren }
HAnimJoint132.AddChildren([HAnimSegment133]);
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136.NameField := 'r_elbow';
HAnimJoint136.Center := Vector3(-0.1982,1.1622,-0.0557);
HAnimJoint136.SetSkinCoordIndex([208,209,210,211,212,213,214,215]);
HAnimJoint136.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment137 := THAnimSegmentNode.Create;
HAnimSegment137.NameField := 'r_forearm';
Transform138 := TTransformNode.Create;
Transform138.Translation := Vector3(-0.1982,1.1622,-0.0557);
Shape139 := TShapeNode.Create;
Shape139 := Shape65;
{ .AddChild }
Transform138.AddChildren([Shape139]);
{ .AddChildren }
HAnimSegment137.AddChildren([Transform138]);
{ .AddChildren }
HAnimJoint136.AddChildren([HAnimSegment137]);
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140.NameField := 'r_wrist';
HAnimJoint140.Center := Vector3(-0.1972,0.8929,-0.069);
HAnimJoint140.SetSkinCoordIndex([216,217,218,219,220,221,222,223]);
HAnimJoint140.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment141 := THAnimSegmentNode.Create;
HAnimSegment141.NameField := 'r_hand';
Transform142 := TTransformNode.Create;
Transform142.Translation := Vector3(-0.1972,0.8929,-0.069);
Shape143 := TShapeNode.Create;
Shape143 := Shape65;
{ .AddChild }
Transform142.AddChildren([Shape143]);
{ .AddChildren }
HAnimSegment141.AddChildren([Transform142]);
HAnimSite144 := THAnimSiteNode.Create;
HAnimSite144.NameField := 'r_hand_tip';
HAnimSite144.Translation := Vector3(-0.1912,0.6976,-0.071);
Shape145 := TShapeNode.Create;
Shape145 := Shape86;
{ .AddChildren }
HAnimSite144.AddChildren([Shape145]);
{ .AddChildren }
HAnimSegment141.AddChildren([HAnimSite144]);
{ .AddChildren }
HAnimJoint140.AddChildren([HAnimSegment141]);
{ .AddChildren }
HAnimJoint136.AddChildren([HAnimJoint140]);
{ .AddChildren }
HAnimJoint132.AddChildren([HAnimJoint136]);
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimJoint132]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint108]);
{ .AddSkeleton }
HAnimHumanoid61.SetSkeleton([HAnimJoint62]);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146 := HAnimJoint62;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint146;
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147 := HAnimJoint112;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint147;
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148 := HAnimJoint108;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint148;
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149 := HAnimJoint77;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint149;
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150 := HAnimJoint98;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint150;
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151 := HAnimJoint122;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint151;
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152 := HAnimJoint136;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint152;
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153 := HAnimJoint69;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint153;
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154 := HAnimJoint90;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint154;
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155 := HAnimJoint73;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint155;
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156 := HAnimJoint94;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint156;
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157 := HAnimJoint81;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint157;
HAnimJoint158 := THAnimJointNode.Create;
HAnimJoint158 := HAnimJoint102;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint158;
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159 := HAnimJoint118;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint159;
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160 := HAnimJoint132;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint160;
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161 := HAnimJoint126;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint161;
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162 := HAnimJoint140;
{ .AddJoints }
HAnimHumanoid61.Joints := HAnimJoint162;
HAnimSegment163 := THAnimSegmentNode.Create;
HAnimSegment163 := HAnimSegment109;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment163;
HAnimSegment164 := THAnimSegmentNode.Create;
HAnimSegment164 := HAnimSegment63;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment164;
HAnimSegment165 := THAnimSegmentNode.Create;
HAnimSegment165 := HAnimSegment113;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment165;
HAnimSegment166 := THAnimSegmentNode.Create;
HAnimSegment166 := HAnimSegment74;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment166;
HAnimSegment167 := THAnimSegmentNode.Create;
HAnimSegment167 := HAnimSegment95;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment167;
HAnimSegment168 := THAnimSegmentNode.Create;
HAnimSegment168 := HAnimSegment123;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment168;
HAnimSegment169 := THAnimSegmentNode.Create;
HAnimSegment169 := HAnimSegment137;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment169;
HAnimSegment170 := THAnimSegmentNode.Create;
HAnimSegment170 := HAnimSegment127;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment170;
HAnimSegment171 := THAnimSegmentNode.Create;
HAnimSegment171 := HAnimSegment141;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment171;
HAnimSegment172 := THAnimSegmentNode.Create;
HAnimSegment172 := HAnimSegment78;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment172;
HAnimSegment173 := THAnimSegmentNode.Create;
HAnimSegment173 := HAnimSegment99;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment173;
HAnimSegment174 := THAnimSegmentNode.Create;
HAnimSegment174 := HAnimSegment82;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment174;
HAnimSegment175 := THAnimSegmentNode.Create;
HAnimSegment175 := HAnimSegment103;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment175;
HAnimSegment176 := THAnimSegmentNode.Create;
HAnimSegment176 := HAnimSegment70;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment176;
HAnimSegment177 := THAnimSegmentNode.Create;
HAnimSegment177 := HAnimSegment91;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment177;
HAnimSegment178 := THAnimSegmentNode.Create;
HAnimSegment178 := HAnimSegment119;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment178;
HAnimSegment179 := THAnimSegmentNode.Create;
HAnimSegment179 := HAnimSegment133;
{ .AddSegments }
HAnimHumanoid61.Segments := HAnimSegment179;
HAnimSite180 := THAnimSiteNode.Create;
HAnimSite180 := HAnimSite116;
{ .AddSites }
HAnimHumanoid61.Sites := HAnimSite180;
HAnimSite181 := THAnimSiteNode.Create;
HAnimSite181 := HAnimSite130;
{ .AddSites }
HAnimHumanoid61.Sites := HAnimSite181;
HAnimSite182 := THAnimSiteNode.Create;
HAnimSite182 := HAnimSite144;
{ .AddSites }
HAnimHumanoid61.Sites := HAnimSite182;
HAnimSite183 := THAnimSiteNode.Create;
HAnimSite183 := HAnimSite85;
{ .AddSites }
HAnimHumanoid61.Sites := HAnimSite183;
HAnimSite184 := THAnimSiteNode.Create;
HAnimSite184 := HAnimSite106;
{ .AddSites }
HAnimHumanoid61.Sites := HAnimSite184;
HAnimSite185 := THAnimSiteNode.Create;
HAnimSite185.NameField := 'BoxMan_view';
Viewpoint186 := TViewpointNode.Create;
Viewpoint186.Description := 'Inclined View';
Viewpoint186.Position := Vector3(2,0.9,2);
Viewpoint186.Orientation := Vector4(0,1,0,0.78);
{ .AddChildren }
HAnimSite185.AddChildren([Viewpoint186]);
Viewpoint187 := TViewpointNode.Create;
Viewpoint187.Description := 'Front View';
Viewpoint187.Position := Vector3(0,1,3);
{ .AddChildren }
HAnimSite185.AddChildren([Viewpoint187]);
Viewpoint188 := TViewpointNode.Create;
Viewpoint188.Description := 'Right-side View';
Viewpoint188.Position := Vector3(-3,1,0);
Viewpoint188.Orientation := Vector4(0,1,0,-1.57);
{ .AddChildren }
HAnimSite185.AddChildren([Viewpoint188]);
Viewpoint189 := TViewpointNode.Create;
Viewpoint189.Description := 'Left-side View';
Viewpoint189.Position := Vector3(3,1,0);
Viewpoint189.Orientation := Vector4(0,1,0,1.57);
{ .AddChildren }
HAnimSite185.AddChildren([Viewpoint189]);
Viewpoint190 := TViewpointNode.Create;
Viewpoint190.Description := 'Top View';
Viewpoint190.Position := Vector3(0,3,0);
Viewpoint190.Orientation := Vector4(1,0,0,-1.57);
{ .AddChildren }
HAnimSite185.AddChildren([Viewpoint190]);
{ .SetViewpoints }
HAnimHumanoid61.Viewpoints := HAnimSite185;
Coordinate191 := TCoordinateNode.Create;
Coordinate191.SetPoint([Vector3(-0.05,1,0.05),Vector3(0.05,1,0.05),Vector3(0.03,0.97,-0.1),Vector3(-0.03,0.97,-0.1),Vector3(0.03,0.94,-0.075),Vector3(-0.03,0.94,-0.075),Vector3(0,0.92,0),Vector3(0,0.94,0.03),Vector3(-0.12,1.06,0.05),Vector3(0.12,1.06,0.05),Vector3(0.12,1.06,-0.1),Vector3(-0.12,1.06,-0.1),Vector3(0.0456,0.9364,0.05),Vector3(0.1456,0.9364,0.05),Vector3(0.1456,0.9364,-0.05),Vector3(0.0456,0.9364,-0.05),Vector3(0.0456,0.9,0.05),Vector3(0.1456,0.9,0.05),Vector3(0.1456,0.9,-0.05),Vector3(0.0456,0.9,-0.05),Vector3(0.0456,0.8,0.05),Vector3(0.1456,0.8,0.05),Vector3(0.1456,0.8,-0.05),Vector3(0.0456,0.8,-0.05),Vector3(0.0456,0.7,0.05),Vector3(0.1456,0.7,0.05),Vector3(0.1456,0.7,-0.05),Vector3(0.0456,0.7,-0.05),Vector3(0.0456,0.6,0.05),Vector3(0.1456,0.6,0.05),Vector3(0.1456,0.6,-0.05),Vector3(0.0456,0.6,-0.05),Vector3(0.0456,0.55,0.05),Vector3(0.1456,0.55,0.05),Vector3(0.1456,0.55,-0.05),Vector3(0.0456,0.55,-0.05),Vector3(0.0456,0.52,0.05),Vector3(0.1456,0.52,0.05),Vector3(0.1456,0.52,-0.05),Vector3(0.0456,0.52,-0.05),Vector3(0.0456,0.5,0.05),Vector3(0.1456,0.5,0.05),Vector3(0.1456,0.5,-0.05),Vector3(0.0456,0.5,-0.05),Vector3(0.0454,0.43,0.045),Vector3(0.1454,0.43,0.045),Vector3(0.1454,0.43,-0.055),Vector3(0.0454,0.43,-0.055),Vector3(0.0452,0.36,0.04),Vector3(0.1452,0.36,0.04),Vector3(0.1452,0.36,-0.06),Vector3(0.0452,0.36,-0.06),Vector3(0.045,0.29,0.035),Vector3(0.145,0.29,0.035),Vector3(0.145,0.29,-0.065),Vector3(0.045,0.29,-0.065),Vector3(0.0448,0.21,0.03),Vector3(0.1448,0.21,0.03),Vector3(0.1448,0.21,-0.07),Vector3(0.0448,0.21,-0.07),Vector3(0.0446,0.1262,0.025),Vector3(0.1446,0.1262,0.025),Vector3(0.1446,0.1262,-0.075),Vector3(0.0446,0.1262,-0.075),Vector3(0.0446,0.0762,0.025),Vector3(0.1446,0.0762,0.025),Vector3(0.1446,0,-0.075),Vector3(0.0446,0,-0.075),Vector3(0.0446,0.0562,0.057),Vector3(0.1446,0.0562,0.057),Vector3(0.1446,0,0.057),Vector3(0.0446,0,0.057),Vector3(0.0446,0.0562,0.087),Vector3(0.1446,0.0562,0.087),Vector3(0.1446,0,0.087),Vector3(0.0446,0,0.087),Vector3(0.0446,0.0562,0.1924),Vector3(0.1446,0.0562,0.1924),Vector3(0.1446,0,0.1924),Vector3(0.0446,0,0.1924),Vector3(-0.0456,0.9364,0.05),Vector3(-0.1456,0.9364,0.05),Vector3(-0.1456,0.9364,-0.05),Vector3(-0.0456,0.9364,-0.05),Vector3(-0.0456,0.9,0.05),Vector3(-0.1456,0.9,0.05),Vector3(-0.1456,0.9,-0.05),Vector3(-0.0456,0.9,-0.05),Vector3(-0.0456,0.8,0.05),Vector3(-0.1456,0.8,0.05),Vector3(-0.1456,0.8,-0.05),Vector3(-0.0456,0.8,-0.05),Vector3(-0.0456,0.7,0.05),Vector3(-0.1456,0.7,0.05),Vector3(-0.1456,0.7,-0.05),Vector3(-0.0456,0.7,-0.05),Vector3(-0.0456,0.6,0.05),Vector3(-0.1456,0.6,0.05),Vector3(-0.1456,0.6,-0.05),Vector3(-0.0456,0.6,-0.05),Vector3(-0.0456,0.55,0.05),Vector3(-0.1456,0.55,0.05),Vector3(-0.1456,0.55,-0.05),Vector3(-0.0456,0.55,-0.05),Vector3(-0.0456,0.52,0.05),Vector3(-0.1456,0.52,0.05),Vector3(-0.1456,0.52,-0.05),Vector3(-0.0456,0.52,-0.05),Vector3(-0.0456,0.5,0.05),Vector3(-0.1456,0.5,0.05),Vector3(-0.1456,0.5,-0.05),Vector3(-0.0456,0.5,-0.05),Vector3(-0.0454,0.43,0.045),Vector3(-0.1454,0.43,0.045),Vector3(-0.1454,0.43,-0.055),Vector3(-0.0454,0.43,-0.055),Vector3(-0.0452,0.36,0.04),Vector3(-0.1452,0.36,0.04),Vector3(-0.1452,0.36,-0.06),Vector3(-0.0452,0.36,-0.06),Vector3(-0.045,0.29,0.035),Vector3(-0.145,0.29,0.035),Vector3(-0.145,0.29,-0.065),Vector3(-0.045,0.29,-0.065),Vector3(-0.0448,0.21,0.03),Vector3(-0.1448,0.21,0.03),Vector3(-0.1448,0.21,-0.07),Vector3(-0.0448,0.21,-0.07),Vector3(-0.0446,0.1262,0.025),Vector3(-0.1446,0.1262,0.025),Vector3(-0.1446,0.1262,-0.075),Vector3(-0.0446,0.1262,-0.075),Vector3(-0.0446,0.0762,0.025),Vector3(-0.1446,0.0762,0.025),Vector3(-0.1446,0,-0.075),Vector3(-0.0446,0,-0.075),Vector3(-0.0446,0.0562,0.057),Vector3(-0.1446,0.0562,0.057),Vector3(-0.1446,0,0.057),Vector3(-0.0446,0,0.057),Vector3(-0.0446,0.0562,0.087),Vector3(-0.1446,0.0562,0.087),Vector3(-0.1446,0,0.087),Vector3(-0.0446,0,0.087),Vector3(-0.0446,0.0562,0.1924),Vector3(-0.1446,0.0562,0.1924),Vector3(-0.1446,0,0.1924),Vector3(-0.0446,0,0.1924),Vector3(-0.12,1.1,0.05),Vector3(0.12,1.1,0.05),Vector3(0.12,1.1,-0.1),Vector3(-0.12,1.1,-0.1),Vector3(-0.14,1.42,0.045),Vector3(0.14,1.42,0.045),Vector3(0.14,1.42,-0.09),Vector3(-0.14,1.42,-0.09),Vector3(-0.24,1.52,0.035),Vector3(0.24,1.52,0.035),Vector3(0.24,1.52,-0.09),Vector3(-0.24,1.52,-0.09),Vector3(-0.05,1.56,0.03),Vector3(0.05,1.56,0.03),Vector3(0.05,1.56,-0.06),Vector3(-0.05,1.56,-0.06),Vector3(-0.05,1.6,0.06),Vector3(0.05,1.6,0.06),Vector3(0.05,1.62,-0.03),Vector3(-0.05,1.62,-0.03),Vector3(-0.07,1.777,0.13),Vector3(0.07,1.777,0.13),Vector3(0.07,1.777,-0.03),Vector3(-0.07,1.777,-0.03),Vector3(-0.07,1.6,0.13),Vector3(0.07,1.6,0.13),Vector3(0.07,1.66,-0.03),Vector3(-0.07,1.66,-0.03),Vector3(0.16,1.42,0.015),Vector3(0.24,1.5,0.015),Vector3(0.24,1.5,-0.075),Vector3(0.16,1.42,-0.075),Vector3(0.17,1.18,-0.025),Vector3(0.23,1.18,-0.025),Vector3(0.23,1.18,-0.085),Vector3(0.17,1.18,-0.085),Vector3(0.17,1.14,-0.025),Vector3(0.23,1.14,-0.025),Vector3(0.23,1.14,-0.085),Vector3(0.17,1.14,-0.085),Vector3(0.18,0.91,-0.05),Vector3(0.22,0.91,-0.05),Vector3(0.22,0.91,-0.09),Vector3(0.18,0.91,-0.09),Vector3(0.18,0.87,-0.02),Vector3(0.22,0.87,-0.02),Vector3(0.22,0.87,-0.1),Vector3(0.18,0.87,-0.1),Vector3(0.18,0.6976,-0.02),Vector3(0.22,0.6976,-0.02),Vector3(0.22,0.6976,-0.1),Vector3(0.18,0.6976,-0.1),Vector3(-0.16,1.42,0.015),Vector3(-0.24,1.5,0.015),Vector3(-0.24,1.5,-0.075),Vector3(-0.16,1.42,-0.075),Vector3(-0.17,1.18,-0.025),Vector3(-0.23,1.18,-0.025),Vector3(-0.23,1.18,-0.085),Vector3(-0.17,1.18,-0.085),Vector3(-0.17,1.14,-0.025),Vector3(-0.23,1.14,-0.025),Vector3(-0.23,1.14,-0.085),Vector3(-0.17,1.14,-0.085),Vector3(-0.18,0.91,-0.05),Vector3(-0.22,0.91,-0.05),Vector3(-0.22,0.91,-0.09),Vector3(-0.18,0.91,-0.09),Vector3(-0.18,0.87,-0.02),Vector3(-0.22,0.87,-0.02),Vector3(-0.22,0.87,-0.1),Vector3(-0.18,0.87,-0.1),Vector3(-0.18,0.6976,-0.02),Vector3(-0.22,0.6976,-0.02),Vector3(-0.22,0.6976,-0.1),Vector3(-0.18,0.6976,-0.1)]);
{ .SetSkinCoord }
HAnimHumanoid61.SetSkinCoord(Coordinate191);
Group192 := TGroupNode.Create;
Shape193 := TShapeNode.Create;
Appearance194 := TAppearanceNode.Create;
Material195 := TMaterialNode.Create;
Material195.DiffuseColor := Vector3(0,0,1);
Material195.Transparency := 0.5;
{ .SetMaterial }
Appearance194.Material := Material195;
{ .SetAppearance }
Shape193.Appearance := Appearance194;
IndexedFaceSet196 := TIndexedFaceSetNode.Create;
IndexedFaceSet196.SetCoordIndex([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
Coordinate197 := TCoordinateNode.Create;
Coordinate197 := Coordinate191;
{ .SetCoord }
IndexedFaceSet196.Coord := Coordinate197;
{ .SetGeometry }
Shape193.Geometry := IndexedFaceSet196;
{ .AddChildren }
Group192.AddChildren([Shape193]);
Shape198 := TShapeNode.Create;
Appearance199 := TAppearanceNode.Create;
Material200 := TMaterialNode.Create;
Material200.DiffuseColor := Vector3(0,0,0);
Material200.Transparency := 0.5;
{ .SetMaterial }
Appearance199.Material := Material200;
{ .SetAppearance }
Shape198.Appearance := Appearance199;
IndexedFaceSet201 := TIndexedFaceSetNode.Create;
IndexedFaceSet201.SetCoordIndex([60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
Coordinate202 := TCoordinateNode.Create;
Coordinate202 := Coordinate191;
{ .SetCoord }
IndexedFaceSet201.Coord := Coordinate202;
{ .SetGeometry }
Shape198.Geometry := IndexedFaceSet201;
{ .AddChildren }
Group192.AddChildren([Shape198]);
Shape203 := TShapeNode.Create;
Appearance204 := TAppearanceNode.Create;
Material205 := TMaterialNode.Create;
Material205.DiffuseColor := Vector3(1,1,0);
Material205.Transparency := 0.5;
{ .SetMaterial }
Appearance204.Material := Material205;
{ .SetAppearance }
Shape203.Appearance := Appearance204;
IndexedFaceSet206 := TIndexedFaceSetNode.Create;
IndexedFaceSet206.SetCoordIndex([148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
Coordinate207 := TCoordinateNode.Create;
Coordinate207 := Coordinate191;
{ .SetCoord }
IndexedFaceSet206.Coord := Coordinate207;
{ .SetGeometry }
Shape203.Geometry := IndexedFaceSet206;
{ .AddChildren }
Group192.AddChildren([Shape203]);
Shape208 := TShapeNode.Create;
Appearance209 := TAppearanceNode.Create;
Material210 := TMaterialNode.Create;
Material210.DiffuseColor := Vector3(1,0.75,0.75);
Material210.Transparency := 0.5;
{ .SetMaterial }
Appearance209.Material := Material210;
{ .SetAppearance }
Shape208.Appearance := Appearance209;
IndexedFaceSet211 := TIndexedFaceSetNode.Create;
IndexedFaceSet211.SetCoordIndex([172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate212 := TCoordinateNode.Create;
Coordinate212 := Coordinate191;
{ .SetCoord }
IndexedFaceSet211.Coord := Coordinate212;
{ .SetGeometry }
Shape208.Geometry := IndexedFaceSet211;
{ .AddChildren }
Group192.AddChildren([Shape208]);
Shape213 := TShapeNode.Create;
Appearance214 := TAppearanceNode.Create;
Material215 := TMaterialNode.Create;
Material215.DiffuseColor := Vector3(0,0,0);
{ .SetMaterial }
Appearance214.Material := Material215;
{ .SetAppearance }
Shape213.Appearance := Appearance214;
IndexedLineSet216 := TIndexedLineSetNode.Create;
IndexedLineSet216.SetCoordIndex([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate217 := TCoordinateNode.Create;
Coordinate217 := Coordinate191;
{ .SetCoord }
IndexedLineSet216.Coord := Coordinate217;
{ .SetGeometry }
Shape213.Geometry := IndexedLineSet216;
{ .AddChildren }
Group192.AddChildren([Shape213]);
{ .SetSkin }
HAnimHumanoid61.SetSkin([Group192]);
{ .AddChildren }
Group32.AddChildren([HAnimHumanoid61]);
ProtoInstance218 := TProtoInstanceNode.Create;
ProtoInstance218.NameField := 'LOA1_WalkAnimation';
{ .AddChildren }
Group32.AddChildren([ProtoInstance218]);
Script219 := TScriptNode.Create;
Script219.SetUrl(['BoxMan.js','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js']);
Script219.DirectOutput := True;
field220 := TfieldNode.Create;
field220.AccessType := 'inputOnly';
field220.Type := 'SFRotation';
field220.NameField := 'update';
{ .AddField }
Script219.Field := field220;
field221 := TfieldNode.Create;
field221.AccessType := 'initializeOnly';
field221.Type := 'SFNode';
field221.NameField := 'humanoid';
HAnimHumanoid222 := THAnimHumanoidNode.Create;
HAnimHumanoid222 := HAnimHumanoid61;
{ .AddChildren }
field221.AddChildren([HAnimHumanoid222]);
{ .AddField }
Script219.Field := field221;
field223 := TfieldNode.Create;
field223.AccessType := 'initializeOnly';
field223.Type := 'MFVec3f';
field223.NameField := 'coordList';
{ .AddField }
Script219.Field := field223;
field224 := TfieldNode.Create;
field224.AccessType := 'initializeOnly';
field224.Type := 'SFNode';
field224.NameField := 'joint';
{ .AddField }
Script219.Field := field224;
field225 := TfieldNode.Create;
field225.AccessType := 'initializeOnly';
field225.Type := 'SFVec3f';
field225.NameField := 'translation';
{ .AddField }
Script219.Field := field225;
field226 := TfieldNode.Create;
field226.AccessType := 'initializeOnly';
field226.Type := 'SFRotation';
field226.NameField := 'rotation';
{ .AddField }
Script219.Field := field226;
field227 := TfieldNode.Create;
field227.AccessType := 'initializeOnly';
field227.Type := 'SFVec3f';
field227.NameField := 'scale';
field227.Value := '1 1 1';
{ .AddField }
Script219.Field := field227;
{ .AddChildren }
Group32.AddChildren([Script219]);
Group32.AddRoute(ProtoInstance218.EventHumanoidroot_translation_changed, HAnimJoint62.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventHumanoidroot_rotation_changed, HAnimJoint62.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventL_hip_rotation_changed, HAnimJoint69.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventL_knee_rotation_changed, HAnimJoint73.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventL_ankle_rotation_changed, HAnimJoint77.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventL_midtarsal_rotation_changed, HAnimJoint81.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventR_hip_rotation_changed, HAnimJoint90.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventR_knee_rotation_changed, HAnimJoint94.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventR_ankle_rotation_changed, HAnimJoint98.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventR_midtarsal_rotation_changed, HAnimJoint102.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventVl5_rotation_changed, HAnimJoint108.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventSkullbase_rotation_changed, HAnimJoint112.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventL_shoulder_rotation_changed, HAnimJoint118.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventL_elbow_rotation_changed, HAnimJoint122.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventL_wrist_rotation_changed, HAnimJoint126.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventR_shoulder_rotation_changed, HAnimJoint132.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventR_elbow_rotation_changed, HAnimJoint136.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(ProtoInstance218.EventR_wrist_rotation_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group32]);
Result := X3D0;
end;
