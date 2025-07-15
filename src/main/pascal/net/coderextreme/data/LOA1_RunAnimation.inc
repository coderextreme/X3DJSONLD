function LOA1_RunAnimation: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
ProtoDeclare19: TProtoDeclareNode;
ProtoInterface20: TProtoInterfaceNode;
field21: TfieldNode;
field22: TfieldNode;
field23: TfieldNode;
field24: TfieldNode;
field25: TfieldNode;
field26: TfieldNode;
field27: TfieldNode;
field28: TfieldNode;
field29: TfieldNode;
field30: TfieldNode;
field31: TfieldNode;
field32: TfieldNode;
field33: TfieldNode;
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
ProtoBody47: TProtoBodyNode;
Group48: TGroupNode;
TimeSensor49: TTimeSensorNode;
IS50: TISNode;
connect51: TconnectNode;
connect52: TconnectNode;
connect53: TconnectNode;
connect54: TconnectNode;
connect55: TconnectNode;
connect56: TconnectNode;
connect57: TconnectNode;
PositionInterpolator58: TPositionInterpolatorNode;
IS59: TISNode;
connect60: TconnectNode;
OrientationInterpolator61: TOrientationInterpolatorNode;
IS62: TISNode;
connect63: TconnectNode;
OrientationInterpolator64: TOrientationInterpolatorNode;
IS65: TISNode;
connect66: TconnectNode;
OrientationInterpolator67: TOrientationInterpolatorNode;
IS68: TISNode;
connect69: TconnectNode;
OrientationInterpolator70: TOrientationInterpolatorNode;
IS71: TISNode;
connect72: TconnectNode;
OrientationInterpolator73: TOrientationInterpolatorNode;
IS74: TISNode;
connect75: TconnectNode;
OrientationInterpolator76: TOrientationInterpolatorNode;
IS77: TISNode;
connect78: TconnectNode;
OrientationInterpolator79: TOrientationInterpolatorNode;
IS80: TISNode;
connect81: TconnectNode;
OrientationInterpolator82: TOrientationInterpolatorNode;
IS83: TISNode;
connect84: TconnectNode;
OrientationInterpolator85: TOrientationInterpolatorNode;
IS86: TISNode;
connect87: TconnectNode;
OrientationInterpolator88: TOrientationInterpolatorNode;
IS89: TISNode;
connect90: TconnectNode;
OrientationInterpolator91: TOrientationInterpolatorNode;
IS92: TISNode;
connect93: TconnectNode;
OrientationInterpolator94: TOrientationInterpolatorNode;
IS95: TISNode;
connect96: TconnectNode;
OrientationInterpolator97: TOrientationInterpolatorNode;
IS98: TISNode;
connect99: TconnectNode;
OrientationInterpolator100: TOrientationInterpolatorNode;
IS101: TISNode;
connect102: TconnectNode;
OrientationInterpolator103: TOrientationInterpolatorNode;
IS104: TISNode;
connect105: TconnectNode;
OrientationInterpolator106: TOrientationInterpolatorNode;
IS107: TISNode;
connect108: TconnectNode;
OrientationInterpolator109: TOrientationInterpolatorNode;
IS110: TISNode;
connect111: TconnectNode;
OrientationInterpolator112: TOrientationInterpolatorNode;
IS113: TISNode;
connect114: TconnectNode;
Anchor134: TAnchorNode;
Shape135: TShapeNode;
Text136: TTextNode;
FontStyle137: TFontStyleNode;
Appearance138: TAppearanceNode;
Material139: TMaterialNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_RunAnimation.x3d';
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
X3D0.Meta['creator'] := 'Cindy Ballreich cindy@ballreich.net 3Name3D';
X3D0.Meta['rights'] := '1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.';
X3D0.Meta['translator'] := 'Ozan APAYDIN';
X3D0.Meta['translated'] := '30 October 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['reference'] := 'http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
X3D0.Meta['reference'] := 'http://www.HAnim.org';
X3D0.Meta['reference'] := 'http://HAnim.org/Models';
X3D0.Meta['reference'] := 'http://HAnim.org/Nodes';
X3D0.Meta['subject'] := 'Nancy Run Animation HAnim 2001';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'LOA1_RunAnimation.x3d';
{ .AddChildren }
Group17.AddChildren([WorldInfo18]);
ProtoDeclare19 := TProtoDeclareNode.Create;
ProtoDeclare19.NameField := 'LOA1_RunAnimation';
ProtoInterface20 := TProtoInterfaceNode.Create;
field21 := TfieldNode.Create;
field21.NameField := 'cycleInterval';
field21.AccessType := 'inputOutput';
field21.Type := 'SFTime';
field21.Value := '1';
{ .AddField }
ProtoInterface20.Field := field21;
field22 := TfieldNode.Create;
field22.NameField := 'enabled';
field22.AccessType := 'inputOutput';
field22.Type := 'SFBool';
field22.Value := 'true';
{ .AddField }
ProtoInterface20.Field := field22;
field23 := TfieldNode.Create;
field23.NameField := 'loop';
field23.AccessType := 'inputOutput';
field23.Type := 'SFBool';
field23.Value := 'true';
{ .AddField }
ProtoInterface20.Field := field23;
field24 := TfieldNode.Create;
field24.NameField := 'startTime';
field24.AccessType := 'inputOutput';
field24.Type := 'SFTime';
field24.Value := '0';
{ .AddField }
ProtoInterface20.Field := field24;
field25 := TfieldNode.Create;
field25.NameField := 'stopTime';
field25.AccessType := 'inputOutput';
field25.Type := 'SFTime';
field25.Value := '-1';
{ .AddField }
ProtoInterface20.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'fraction_changed';
field26.AccessType := 'outputOnly';
field26.Type := 'SFFloat';
{ .AddField }
ProtoInterface20.Field := field26;
field27 := TfieldNode.Create;
field27.NameField := 'isActive';
field27.AccessType := 'outputOnly';
field27.Type := 'SFBool';
{ .AddField }
ProtoInterface20.Field := field27;
field28 := TfieldNode.Create;
field28.NameField := 'HumanoidRoot_translation_changed';
field28.AccessType := 'outputOnly';
field28.Type := 'SFVec3f';
{ .AddField }
ProtoInterface20.Field := field28;
field29 := TfieldNode.Create;
field29.NameField := 'HumanoidRoot_rotation_changed';
field29.AccessType := 'outputOnly';
field29.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field29;
field30 := TfieldNode.Create;
field30.NameField := 'lower_body_rotation_changed';
field30.AccessType := 'outputOnly';
field30.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field30;
field31 := TfieldNode.Create;
field31.NameField := 'l_hip_rotation_changed';
field31.AccessType := 'outputOnly';
field31.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'l_knee_rotation_changed';
field32.AccessType := 'outputOnly';
field32.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'l_ankle_rotation_changed';
field33.AccessType := 'outputOnly';
field33.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'l_midtarsal_rotation_changed';
field34.AccessType := 'outputOnly';
field34.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'r_hip_rotation_changed';
field35.AccessType := 'outputOnly';
field35.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'r_knee_rotation_changed';
field36.AccessType := 'outputOnly';
field36.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'r_ankle_rotation_changed';
field37.AccessType := 'outputOnly';
field37.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'r_midtarsal_rotation_changed';
field38.AccessType := 'outputOnly';
field38.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'vl5_rotation_changed';
field39.AccessType := 'outputOnly';
field39.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'skullbase_rotation_changed';
field40.AccessType := 'outputOnly';
field40.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'l_shoulder_rotation_changed';
field41.AccessType := 'outputOnly';
field41.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'l_elbow_rotation_changed';
field42.AccessType := 'outputOnly';
field42.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'l_wrist_rotation_changed';
field43.AccessType := 'outputOnly';
field43.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'r_shoulder_rotation_changed';
field44.AccessType := 'outputOnly';
field44.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'r_elbow_rotation_changed';
field45.AccessType := 'outputOnly';
field45.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'r_wrist_rotation_changed';
field46.AccessType := 'outputOnly';
field46.Type := 'SFRotation';
{ .AddField }
ProtoInterface20.Field := field46;
{ .SetProtoInterface }
ProtoDeclare19.ProtoInterface := ProtoInterface20;
ProtoBody47 := TProtoBodyNode.Create;
Group48 := TGroupNode.Create;
TimeSensor49 := TTimeSensorNode.Create;
IS50 := TISNode.Create;
connect51 := TconnectNode.Create;
connect51.NodeField := 'cycleInterval';
connect51.ProtoField := 'cycleInterval';
{ .AddConnect }
IS50.Connect := connect51;
connect52 := TconnectNode.Create;
connect52.NodeField := 'enabled';
connect52.ProtoField := 'enabled';
{ .AddConnect }
IS50.Connect := connect52;
connect53 := TconnectNode.Create;
connect53.NodeField := 'loop';
connect53.ProtoField := 'loop';
{ .AddConnect }
IS50.Connect := connect53;
connect54 := TconnectNode.Create;
connect54.NodeField := 'startTime';
connect54.ProtoField := 'startTime';
{ .AddConnect }
IS50.Connect := connect54;
connect55 := TconnectNode.Create;
connect55.NodeField := 'stopTime';
connect55.ProtoField := 'stopTime';
{ .AddConnect }
IS50.Connect := connect55;
connect56 := TconnectNode.Create;
connect56.NodeField := 'fraction_changed';
connect56.ProtoField := 'fraction_changed';
{ .AddConnect }
IS50.Connect := connect56;
connect57 := TconnectNode.Create;
connect57.NodeField := 'isActive';
connect57.ProtoField := 'isActive';
{ .AddConnect }
IS50.Connect := connect57;
{ .SetIS }
TimeSensor49.IS := IS50;
{ .AddChildren }
Group48.AddChildren([TimeSensor49]);
PositionInterpolator58 := TPositionInterpolatorNode.Create;
PositionInterpolator58.SetKey([0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1]);
PositionInterpolator58.SetKeyValue([Vector3(0,-0.0351,0),Vector3(0,-0.0351,0),Vector3(0,-0.04087,0),Vector3(0,-0.04886,0),Vector3(0,-0.04051,0),Vector3(0,-0.03666,0),Vector3(0,-0.03666,0),Vector3(0,-0.0351,0)]);
IS59 := TISNode.Create;
connect60 := TconnectNode.Create;
connect60.NodeField := 'value_changed';
connect60.ProtoField := 'HumanoidRoot_translation_changed';
{ .AddConnect }
IS59.Connect := connect60;
{ .SetIS }
PositionInterpolator58.IS := IS59;
{ .AddChildren }
Group48.AddChildren([PositionInterpolator58]);
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
OrientationInterpolator61.SetKey([0,1]);
OrientationInterpolator61.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
IS62 := TISNode.Create;
connect63 := TconnectNode.Create;
connect63.NodeField := 'value_changed';
connect63.ProtoField := 'HumanoidRoot_rotation_changed';
{ .AddConnect }
IS62.Connect := connect63;
{ .SetIS }
OrientationInterpolator61.IS := IS62;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator61]);
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.SetKey([0,1]);
OrientationInterpolator64.SetKeyValue([Vector4(0.9969,-0.05444,0.05596,0.07687),Vector4(0.9969,-0.05444,0.05596,0.07687)]);
IS65 := TISNode.Create;
connect66 := TconnectNode.Create;
connect66.NodeField := 'value_changed';
connect66.ProtoField := 'lower_body_rotation_changed';
{ .AddConnect }
IS65.Connect := connect66;
{ .SetIS }
OrientationInterpolator64.IS := IS65;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator64]);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;
OrientationInterpolator67.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator67.SetKeyValue([Vector4(-0.9986,0.03354,0.04001,1.212),Vector4(-0.9889,0.1328,0.06696,0.4025),Vector4(0.9894,0.1453,0.009351,0.4114),Vector4(-0.9963,0.07032,0.05003,0.7035),Vector4(-0.9986,0.03354,0.04001,1.212)]);
IS68 := TISNode.Create;
connect69 := TconnectNode.Create;
connect69.NodeField := 'value_changed';
connect69.ProtoField := 'l_hip_rotation_changed';
{ .AddConnect }
IS68.Connect := connect69;
{ .SetIS }
OrientationInterpolator67.IS := IS68;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator67]);
OrientationInterpolator70 := TOrientationInterpolatorNode.Create;
OrientationInterpolator70.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator70.SetKeyValue([Vector4(1,0,0,1.108),Vector4(1,0,0,0.4265),Vector4(1,0,0,0.7052),Vector4(1,0,0,2.179),Vector4(1,0,0,1.108)]);
IS71 := TISNode.Create;
connect72 := TconnectNode.Create;
connect72.NodeField := 'value_changed';
connect72.ProtoField := 'l_knee_rotation_changed';
{ .AddConnect }
IS71.Connect := connect72;
{ .SetIS }
OrientationInterpolator70.IS := IS71;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator70]);
OrientationInterpolator73 := TOrientationInterpolatorNode.Create;
OrientationInterpolator73.SetKey([0,0.2182,0.3091,0.4909,1]);
OrientationInterpolator73.SetKeyValue([Vector4(1,0,0,0.03543),Vector4(-1,0,0,0.1037),Vector4(-1,0,0,0.4328),Vector4(1,0,0,0.1929),Vector4(1,0,0,0.03543)]);
IS74 := TISNode.Create;
connect75 := TconnectNode.Create;
connect75.NodeField := 'value_changed';
connect75.ProtoField := 'l_ankle_rotation_changed';
{ .AddConnect }
IS74.Connect := connect75;
{ .SetIS }
OrientationInterpolator73.IS := IS74;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator73]);
OrientationInterpolator76 := TOrientationInterpolatorNode.Create;
OrientationInterpolator76.SetKey([0,0.5,1]);
OrientationInterpolator76.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.2),Vector4(1,0,0,0)]);
IS77 := TISNode.Create;
connect78 := TconnectNode.Create;
connect78.NodeField := 'value_changed';
connect78.ProtoField := 'l_midtarsal_rotation_changed';
{ .AddConnect }
IS77.Connect := connect78;
{ .SetIS }
OrientationInterpolator76.IS := IS77;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator76]);
OrientationInterpolator79 := TOrientationInterpolatorNode.Create;
OrientationInterpolator79.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator79.SetKeyValue([Vector4(0.9999,0.00293,-0.00989,0.402),Vector4(-1,0.004977,-0.00497,0.5943),Vector4(-1,0.003265,-0.001752,1.178),Vector4(-0.9999,0.00815,-0.01093,0.3031),Vector4(0.9999,0.00293,-0.00989,0.402)]);
IS80 := TISNode.Create;
connect81 := TconnectNode.Create;
connect81.NodeField := 'value_changed';
connect81.ProtoField := 'r_hip_rotation_changed';
{ .AddConnect }
IS80.Connect := connect81;
{ .SetIS }
OrientationInterpolator79.IS := IS80;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator79]);
OrientationInterpolator82 := TOrientationInterpolatorNode.Create;
OrientationInterpolator82.SetKey([0,0.03636,0.2182,0.4909,0.7455,1]);
OrientationInterpolator82.SetKeyValue([Vector4(1,0,0,0.7004),Vector4(1,0,0,1.011),Vector4(1,0,0,1.892),Vector4(1,0,0,1.188),Vector4(1,0,0,0.3964),Vector4(1,0,0,0.7004)]);
IS83 := TISNode.Create;
connect84 := TconnectNode.Create;
connect84.NodeField := 'value_changed';
connect84.ProtoField := 'r_knee_rotation_changed';
{ .AddConnect }
IS83.Connect := connect84;
{ .SetIS }
OrientationInterpolator82.IS := IS83;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator82]);
OrientationInterpolator85 := TOrientationInterpolatorNode.Create;
OrientationInterpolator85.SetKey([0,0.4909,0.7091,0.8,0.8182,1]);
OrientationInterpolator85.SetKeyValue([Vector4(1,0,0,0.2323),Vector4(-1,0,0,0.07843),Vector4(-1,0,0,0.09676),Vector4(-1,0,0,0.3274),Vector4(-1,0,0,0.3278),Vector4(1,0,0,0.2323)]);
IS86 := TISNode.Create;
connect87 := TconnectNode.Create;
connect87.NodeField := 'value_changed';
connect87.ProtoField := 'r_ankle_rotation_changed';
{ .AddConnect }
IS86.Connect := connect87;
{ .SetIS }
OrientationInterpolator85.IS := IS86;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator85]);
OrientationInterpolator88 := TOrientationInterpolatorNode.Create;
OrientationInterpolator88.SetKey([0,0.5,1]);
OrientationInterpolator88.SetKeyValue([Vector4(1,0,0,-0.2),Vector4(1,0,0,0),Vector4(1,0,0,-0.2)]);
IS89 := TISNode.Create;
connect90 := TconnectNode.Create;
connect90.NodeField := 'value_changed';
connect90.ProtoField := 'r_midtarsal_rotation_changed';
{ .AddConnect }
IS89.Connect := connect90;
{ .SetIS }
OrientationInterpolator88.IS := IS89;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator88]);
OrientationInterpolator91 := TOrientationInterpolatorNode.Create;
OrientationInterpolator91.SetKey([0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator91.SetKeyValue([Vector4(0.7651,0.6382,0.08586,0.2712),Vector4(0.9999,0.002845,-0.01547,0.3756),Vector4(0.7459,-0.6505,-0.1432,0.2416),Vector4(0.9984,0.05536,-0.01154,0.3488),Vector4(0.7651,0.6382,0.08586,0.2712)]);
IS92 := TISNode.Create;
connect93 := TconnectNode.Create;
connect93.NodeField := 'value_changed';
connect93.ProtoField := 'vl5_rotation_changed';
{ .AddConnect }
IS92.Connect := connect93;
{ .SetIS }
OrientationInterpolator91.IS := IS92;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator91]);
OrientationInterpolator94 := TOrientationInterpolatorNode.Create;
OrientationInterpolator94.SetKey([0,0.4909,1]);
OrientationInterpolator94.SetKeyValue([Vector4(0.6517,-0.7559,0.06211,0.2508),Vector4(0.6467,0.7527,-0.1238,0.2344),Vector4(0.6517,-0.7559,0.06211,0.2508)]);
IS95 := TISNode.Create;
connect96 := TconnectNode.Create;
connect96.NodeField := 'value_changed';
connect96.ProtoField := 'skullbase_rotation_changed';
{ .AddConnect }
IS95.Connect := connect96;
{ .SetIS }
OrientationInterpolator94.IS := IS95;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator94]);
OrientationInterpolator97 := TOrientationInterpolatorNode.Create;
OrientationInterpolator97.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator97.SetKeyValue([Vector4(0.9907,-0.07264,0.115,1.135),Vector4(0.9291,-0.1222,0.349,0.1695),Vector4(-0.9892,0.1364,-0.05394,0.5112),Vector4(0.9942,-0.0002052,0.1073,0.4975),Vector4(0.9907,-0.07264,0.115,1.135)]);
IS98 := TISNode.Create;
connect99 := TconnectNode.Create;
connect99.NodeField := 'value_changed';
connect99.ProtoField := 'l_shoulder_rotation_changed';
{ .AddConnect }
IS98.Connect := connect99;
{ .SetIS }
OrientationInterpolator97.IS := IS98;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator97]);
OrientationInterpolator100 := TOrientationInterpolatorNode.Create;
OrientationInterpolator100.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator100.SetKeyValue([Vector4(0.9985,0.03887,0.03802,4.689),Vector4(-0.965,-0.1889,-0.1821,1.415),Vector4(0.9758,0.1563,0.1529,4.666),Vector4(-0.9956,-0.0936,0.009826,1.126),Vector4(0.9985,0.03887,0.03802,4.689)]);
IS101 := TISNode.Create;
connect102 := TconnectNode.Create;
connect102.NodeField := 'value_changed';
connect102.ProtoField := 'l_elbow_rotation_changed';
{ .AddConnect }
IS101.Connect := connect102;
{ .SetIS }
OrientationInterpolator100.IS := IS101;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator100]);
OrientationInterpolator103 := TOrientationInterpolatorNode.Create;
OrientationInterpolator103.SetKey([0,1]);
OrientationInterpolator103.SetKeyValue([Vector4(-0.0240995,-0.999682,0.00741506,0.120409),Vector4(-0.0240995,-0.999682,0.00741506,0.120409)]);
IS104 := TISNode.Create;
connect105 := TconnectNode.Create;
connect105.NodeField := 'value_changed';
connect105.ProtoField := 'l_wrist_rotation_changed';
{ .AddConnect }
IS104.Connect := connect105;
{ .SetIS }
OrientationInterpolator103.IS := IS104;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator103]);
OrientationInterpolator106 := TOrientationInterpolatorNode.Create;
OrientationInterpolator106.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator106.SetKeyValue([Vector4(-1,0,0,0.6979),Vector4(0.9094,0.2062,-0.3613,0.4157),Vector4(0.9637,0.1537,-0.2185,1.353),Vector4(0.4864,0.08841,-0.8693,0.1716),Vector4(-1,0,0,0.6979)]);
IS107 := TISNode.Create;
connect108 := TconnectNode.Create;
connect108.NodeField := 'value_changed';
connect108.ProtoField := 'r_shoulder_rotation_changed';
{ .AddConnect }
IS107.Connect := connect108;
{ .SetIS }
OrientationInterpolator106.IS := IS107;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator106]);
OrientationInterpolator109 := TOrientationInterpolatorNode.Create;
OrientationInterpolator109.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator109.SetKeyValue([Vector4(0.9353,-0.2978,-0.191,4.222),Vector4(-0.9362,0.2924,-0.1952,1.05),Vector4(0.9941,-0.09719,-0.04725,4.512),Vector4(-0.9594,0.2653,0.09579,1.525),Vector4(0.9353,-0.2978,-0.191,4.222)]);
IS110 := TISNode.Create;
connect111 := TconnectNode.Create;
connect111.NodeField := 'value_changed';
connect111.ProtoField := 'r_elbow_rotation_changed';
{ .AddConnect }
IS110.Connect := connect111;
{ .SetIS }
OrientationInterpolator109.IS := IS110;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator109]);
OrientationInterpolator112 := TOrientationInterpolatorNode.Create;
OrientationInterpolator112.SetKey([0,1]);
OrientationInterpolator112.SetKeyValue([Vector4(-0.917742,-0.237244,-0.318536,0.214273),Vector4(-0.917742,-0.237244,-0.318536,0.214273)]);
IS113 := TISNode.Create;
connect114 := TconnectNode.Create;
connect114.NodeField := 'value_changed';
connect114.ProtoField := 'r_wrist_rotation_changed';
{ .AddConnect }
IS113.Connect := connect114;
{ .SetIS }
OrientationInterpolator112.IS := IS113;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator112]);
{ .AddChildren }
ProtoBody47.AddChildren([Group48]);
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator58.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator70.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator73.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator76.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator85.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator88.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator91.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator94.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator97.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator100.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator103.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator106.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator109.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator112.EventSet_fraction);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare19.ProtoBody := ProtoBody47;
{ .AddChildren }
Group17.AddChildren([ProtoDeclare19]);
{ ====================================== }
{ Point to example use in case someone inspects this file }
Anchor134 := TAnchorNode.Create;
Anchor134.Description := 'InterchangableActorsViaDynamicRouting';
Anchor134.SetParameter(['target=_blank']);
Anchor134.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape135 := TShapeNode.Create;
Text136 := TTextNode.Create;
Text136.SetText(['LOA1_RunAnimation.x3d','defines a prototype','for animating a humanoid.','','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
FontStyle137 := TFontStyleNode.Create;
FontStyle137.Justify := fjMiddle;
FontStyle137.JustifyMinor := fjMiddle;
FontStyle137.Size := 0.8;
{ .SetFontStyle }
Text136.FontStyle := FontStyle137;
{ .SetGeometry }
Shape135.Geometry := Text136;
Appearance138 := TAppearanceNode.Create;
Material139 := TMaterialNode.Create;
Material139.DiffuseColor := Vector3(1,1,0.2);
{ .SetMaterial }
Appearance138.Material := Material139;
{ .SetAppearance }
Shape135.Appearance := Appearance138;
{ .AddChildren }
Anchor134.AddChildren([Shape135]);
{ .AddChildren }
Group17.AddChildren([Anchor134]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;
