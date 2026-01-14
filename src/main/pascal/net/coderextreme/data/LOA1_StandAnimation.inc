function LOA1_StandAnimation: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group18: TGroupNode;
WorldInfo19: TWorldInfoNode;
ProtoDeclare20: TProtoDeclareNode;
ProtoInterface21: TProtoInterfaceNode;
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
field47: TfieldNode;
ProtoBody48: TProtoBodyNode;
Group49: TGroupNode;
TimeSensor50: TTimeSensorNode;
IS51: TISNode;
connect52: TconnectNode;
connect53: TconnectNode;
connect54: TconnectNode;
connect55: TconnectNode;
connect56: TconnectNode;
connect57: TconnectNode;
connect58: TconnectNode;
PositionInterpolator59: TPositionInterpolatorNode;
IS60: TISNode;
connect61: TconnectNode;
OrientationInterpolator62: TOrientationInterpolatorNode;
IS63: TISNode;
connect64: TconnectNode;
OrientationInterpolator65: TOrientationInterpolatorNode;
IS66: TISNode;
connect67: TconnectNode;
OrientationInterpolator68: TOrientationInterpolatorNode;
IS69: TISNode;
connect70: TconnectNode;
OrientationInterpolator71: TOrientationInterpolatorNode;
IS72: TISNode;
connect73: TconnectNode;
OrientationInterpolator74: TOrientationInterpolatorNode;
IS75: TISNode;
connect76: TconnectNode;
OrientationInterpolator77: TOrientationInterpolatorNode;
IS78: TISNode;
connect79: TconnectNode;
OrientationInterpolator80: TOrientationInterpolatorNode;
IS81: TISNode;
connect82: TconnectNode;
OrientationInterpolator83: TOrientationInterpolatorNode;
IS84: TISNode;
connect85: TconnectNode;
OrientationInterpolator86: TOrientationInterpolatorNode;
IS87: TISNode;
connect88: TconnectNode;
OrientationInterpolator89: TOrientationInterpolatorNode;
IS90: TISNode;
connect91: TconnectNode;
OrientationInterpolator92: TOrientationInterpolatorNode;
IS93: TISNode;
connect94: TconnectNode;
OrientationInterpolator95: TOrientationInterpolatorNode;
IS96: TISNode;
connect97: TconnectNode;
OrientationInterpolator98: TOrientationInterpolatorNode;
IS99: TISNode;
connect100: TconnectNode;
OrientationInterpolator101: TOrientationInterpolatorNode;
IS102: TISNode;
connect103: TconnectNode;
OrientationInterpolator104: TOrientationInterpolatorNode;
IS105: TISNode;
connect106: TconnectNode;
OrientationInterpolator107: TOrientationInterpolatorNode;
IS108: TISNode;
connect109: TconnectNode;
OrientationInterpolator110: TOrientationInterpolatorNode;
IS111: TISNode;
connect112: TconnectNode;
OrientationInterpolator113: TOrientationInterpolatorNode;
IS114: TISNode;
connect115: TconnectNode;
Anchor135: TAnchorNode;
Shape136: TShapeNode;
Text137: TTextNode;
FontStyle138: TFontStyleNode;
Appearance139: TAppearanceNode;
Material140: TMaterialNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_StandAnimation.x3d';
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
X3D0.Meta['creator'] := 'Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman';
X3D0.Meta['rights'] := '1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.';
X3D0.Meta['translator'] := 'Ozan APAYDIN';
X3D0.Meta['created'] := '1 December 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['TODO'] := 'consider adding eyeball animation';
X3D0.Meta['reference'] := 'https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
X3D0.Meta['reference'] := 'https://www.HAnim.org';
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
X3D0.Meta['subject'] := 'Nancy Stand Animation HAnim 2001';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group18 := TGroupNode.Create;
WorldInfo19 := TWorldInfoNode.Create;
WorldInfo19.Title := 'LOA1_StandAnimation.x3d';
{ .AddChildren }
Group18.AddChildren([WorldInfo19]);
ProtoDeclare20 := TProtoDeclareNode.Create;
ProtoDeclare20.NameField := 'LOA1_StandAnimation';
ProtoInterface21 := TProtoInterfaceNode.Create;
field22 := TfieldNode.Create;
field22.NameField := 'cycleInterval';
field22.AccessType := 'inputOutput';
field22.Type := 'SFTime';
field22.Value := '0.009999999776482582';
{ .AddField }
ProtoInterface21.Field := field22;
field23 := TfieldNode.Create;
field23.NameField := 'enabled';
field23.AccessType := 'inputOutput';
field23.Type := 'SFBool';
field23.Value := 'true';
{ .AddField }
ProtoInterface21.Field := field23;
field24 := TfieldNode.Create;
field24.NameField := 'loop';
field24.AccessType := 'inputOutput';
field24.Type := 'SFBool';
field24.Value := 'true';
{ .AddField }
ProtoInterface21.Field := field24;
field25 := TfieldNode.Create;
field25.NameField := 'startTime';
field25.AccessType := 'inputOutput';
field25.Type := 'SFTime';
field25.Value := '0';
{ .AddField }
ProtoInterface21.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'stopTime';
field26.AccessType := 'inputOutput';
field26.Type := 'SFTime';
field26.Value := '-1';
{ .AddField }
ProtoInterface21.Field := field26;
field27 := TfieldNode.Create;
field27.NameField := 'fraction_changed';
field27.AccessType := 'outputOnly';
field27.Type := 'SFFloat';
{ .AddField }
ProtoInterface21.Field := field27;
field28 := TfieldNode.Create;
field28.NameField := 'isActive';
field28.AccessType := 'outputOnly';
field28.Type := 'SFBool';
{ .AddField }
ProtoInterface21.Field := field28;
field29 := TfieldNode.Create;
field29.NameField := 'HumanoidRoot_translation_changed';
field29.AccessType := 'outputOnly';
field29.Type := 'SFVec3f';
{ .AddField }
ProtoInterface21.Field := field29;
field30 := TfieldNode.Create;
field30.NameField := 'HumanoidRoot_rotation_changed';
field30.AccessType := 'outputOnly';
field30.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field30;
field31 := TfieldNode.Create;
field31.NameField := 'lower_body_rotation_changed';
field31.AccessType := 'outputOnly';
field31.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'l_hip_rotation_changed';
field32.AccessType := 'outputOnly';
field32.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'l_knee_rotation_changed';
field33.AccessType := 'outputOnly';
field33.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'l_ankle_rotation_changed';
field34.AccessType := 'outputOnly';
field34.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'l_midtarsal_rotation_changed';
field35.AccessType := 'outputOnly';
field35.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'r_hip_rotation_changed';
field36.AccessType := 'outputOnly';
field36.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'r_knee_rotation_changed';
field37.AccessType := 'outputOnly';
field37.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'r_ankle_rotation_changed';
field38.AccessType := 'outputOnly';
field38.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'r_midtarsal_rotation_changed';
field39.AccessType := 'outputOnly';
field39.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'vl5_rotation_changed';
field40.AccessType := 'outputOnly';
field40.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'skullbase_rotation_changed';
field41.AccessType := 'outputOnly';
field41.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'l_shoulder_rotation_changed';
field42.AccessType := 'outputOnly';
field42.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'l_elbow_rotation_changed';
field43.AccessType := 'outputOnly';
field43.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'l_wrist_rotation_changed';
field44.AccessType := 'outputOnly';
field44.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'r_shoulder_rotation_changed';
field45.AccessType := 'outputOnly';
field45.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'r_elbow_rotation_changed';
field46.AccessType := 'outputOnly';
field46.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'r_wrist_rotation_changed';
field47.AccessType := 'outputOnly';
field47.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field47;
{ .SetProtoInterface }
ProtoDeclare20.ProtoInterface := ProtoInterface21;
ProtoBody48 := TProtoBodyNode.Create;
Group49 := TGroupNode.Create;
TimeSensor50 := TTimeSensorNode.Create;
IS51 := TISNode.Create;
connect52 := TconnectNode.Create;
connect52.NodeField := 'cycleInterval';
connect52.ProtoField := 'cycleInterval';
{ .AddConnect }
IS51.Connect := connect52;
connect53 := TconnectNode.Create;
connect53.NodeField := 'enabled';
connect53.ProtoField := 'enabled';
{ .AddConnect }
IS51.Connect := connect53;
connect54 := TconnectNode.Create;
connect54.NodeField := 'loop';
connect54.ProtoField := 'loop';
{ .AddConnect }
IS51.Connect := connect54;
connect55 := TconnectNode.Create;
connect55.NodeField := 'startTime';
connect55.ProtoField := 'startTime';
{ .AddConnect }
IS51.Connect := connect55;
connect56 := TconnectNode.Create;
connect56.NodeField := 'stopTime';
connect56.ProtoField := 'stopTime';
{ .AddConnect }
IS51.Connect := connect56;
connect57 := TconnectNode.Create;
connect57.NodeField := 'fraction_changed';
connect57.ProtoField := 'fraction_changed';
{ .AddConnect }
IS51.Connect := connect57;
connect58 := TconnectNode.Create;
connect58.NodeField := 'isActive';
connect58.ProtoField := 'isActive';
{ .AddConnect }
IS51.Connect := connect58;
{ .SetIS }
TimeSensor50.IS := IS51;
{ .AddChildren }
Group49.AddChildren([TimeSensor50]);
PositionInterpolator59 := TPositionInterpolatorNode.Create;
PositionInterpolator59.SetKey([0,1]);
PositionInterpolator59.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0)]);
IS60 := TISNode.Create;
connect61 := TconnectNode.Create;
connect61.NodeField := 'value_changed';
connect61.ProtoField := 'HumanoidRoot_translation_changed';
{ .AddConnect }
IS60.Connect := connect61;
{ .SetIS }
PositionInterpolator59.IS := IS60;
{ .AddChildren }
Group49.AddChildren([PositionInterpolator59]);
OrientationInterpolator62 := TOrientationInterpolatorNode.Create;
OrientationInterpolator62.SetKey([0,1]);
OrientationInterpolator62.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS63 := TISNode.Create;
connect64 := TconnectNode.Create;
connect64.NodeField := 'value_changed';
connect64.ProtoField := 'HumanoidRoot_rotation_changed';
{ .AddConnect }
IS63.Connect := connect64;
{ .SetIS }
OrientationInterpolator62.IS := IS63;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator62]);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;
OrientationInterpolator65.SetKey([0,1]);
OrientationInterpolator65.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS66 := TISNode.Create;
connect67 := TconnectNode.Create;
connect67.NodeField := 'value_changed';
connect67.ProtoField := 'lower_body_rotation_changed';
{ .AddConnect }
IS66.Connect := connect67;
{ .SetIS }
OrientationInterpolator65.IS := IS66;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator65]);
OrientationInterpolator68 := TOrientationInterpolatorNode.Create;
OrientationInterpolator68.SetKey([0,1]);
OrientationInterpolator68.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS69 := TISNode.Create;
connect70 := TconnectNode.Create;
connect70.NodeField := 'value_changed';
connect70.ProtoField := 'l_hip_rotation_changed';
{ .AddConnect }
IS69.Connect := connect70;
{ .SetIS }
OrientationInterpolator68.IS := IS69;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator68]);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;
OrientationInterpolator71.SetKey([0,1]);
OrientationInterpolator71.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS72 := TISNode.Create;
connect73 := TconnectNode.Create;
connect73.NodeField := 'value_changed';
connect73.ProtoField := 'l_knee_rotation_changed';
{ .AddConnect }
IS72.Connect := connect73;
{ .SetIS }
OrientationInterpolator71.IS := IS72;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator71]);
OrientationInterpolator74 := TOrientationInterpolatorNode.Create;
OrientationInterpolator74.SetKey([0,1]);
OrientationInterpolator74.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS75 := TISNode.Create;
connect76 := TconnectNode.Create;
connect76.NodeField := 'value_changed';
connect76.ProtoField := 'l_ankle_rotation_changed';
{ .AddConnect }
IS75.Connect := connect76;
{ .SetIS }
OrientationInterpolator74.IS := IS75;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator74]);
OrientationInterpolator77 := TOrientationInterpolatorNode.Create;
OrientationInterpolator77.SetKey([0,1]);
OrientationInterpolator77.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0)]);
IS78 := TISNode.Create;
connect79 := TconnectNode.Create;
connect79.NodeField := 'value_changed';
connect79.ProtoField := 'l_midtarsal_rotation_changed';
{ .AddConnect }
IS78.Connect := connect79;
{ .SetIS }
OrientationInterpolator77.IS := IS78;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator77]);
OrientationInterpolator80 := TOrientationInterpolatorNode.Create;
OrientationInterpolator80.SetKey([0,1]);
OrientationInterpolator80.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS81 := TISNode.Create;
connect82 := TconnectNode.Create;
connect82.NodeField := 'value_changed';
connect82.ProtoField := 'r_hip_rotation_changed';
{ .AddConnect }
IS81.Connect := connect82;
{ .SetIS }
OrientationInterpolator80.IS := IS81;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator80]);
OrientationInterpolator83 := TOrientationInterpolatorNode.Create;
OrientationInterpolator83.SetKey([0,1]);
OrientationInterpolator83.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS84 := TISNode.Create;
connect85 := TconnectNode.Create;
connect85.NodeField := 'value_changed';
connect85.ProtoField := 'r_knee_rotation_changed';
{ .AddConnect }
IS84.Connect := connect85;
{ .SetIS }
OrientationInterpolator83.IS := IS84;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator83]);
OrientationInterpolator86 := TOrientationInterpolatorNode.Create;
OrientationInterpolator86.SetKey([0,1]);
OrientationInterpolator86.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS87 := TISNode.Create;
connect88 := TconnectNode.Create;
connect88.NodeField := 'value_changed';
connect88.ProtoField := 'r_ankle_rotation_changed';
{ .AddConnect }
IS87.Connect := connect88;
{ .SetIS }
OrientationInterpolator86.IS := IS87;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator86]);
OrientationInterpolator89 := TOrientationInterpolatorNode.Create;
OrientationInterpolator89.SetKey([0,1]);
OrientationInterpolator89.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0)]);
IS90 := TISNode.Create;
connect91 := TconnectNode.Create;
connect91.NodeField := 'value_changed';
connect91.ProtoField := 'r_midtarsal_rotation_changed';
{ .AddConnect }
IS90.Connect := connect91;
{ .SetIS }
OrientationInterpolator89.IS := IS90;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator89]);
OrientationInterpolator92 := TOrientationInterpolatorNode.Create;
OrientationInterpolator92.SetKey([0,1]);
OrientationInterpolator92.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS93 := TISNode.Create;
connect94 := TconnectNode.Create;
connect94.NodeField := 'value_changed';
connect94.ProtoField := 'vl5_rotation_changed';
{ .AddConnect }
IS93.Connect := connect94;
{ .SetIS }
OrientationInterpolator92.IS := IS93;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator92]);
OrientationInterpolator95 := TOrientationInterpolatorNode.Create;
OrientationInterpolator95.SetKey([0,0.5,1]);
OrientationInterpolator95.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(0,0,1,0)]);
IS96 := TISNode.Create;
connect97 := TconnectNode.Create;
connect97.NodeField := 'value_changed';
connect97.ProtoField := 'skullbase_rotation_changed';
{ .AddConnect }
IS96.Connect := connect97;
{ .SetIS }
OrientationInterpolator95.IS := IS96;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator95]);
OrientationInterpolator98 := TOrientationInterpolatorNode.Create;
OrientationInterpolator98.SetKey([0,1]);
OrientationInterpolator98.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS99 := TISNode.Create;
connect100 := TconnectNode.Create;
connect100.NodeField := 'value_changed';
connect100.ProtoField := 'l_shoulder_rotation_changed';
{ .AddConnect }
IS99.Connect := connect100;
{ .SetIS }
OrientationInterpolator98.IS := IS99;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator98]);
OrientationInterpolator101 := TOrientationInterpolatorNode.Create;
OrientationInterpolator101.SetKey([0,1]);
OrientationInterpolator101.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS102 := TISNode.Create;
connect103 := TconnectNode.Create;
connect103.NodeField := 'value_changed';
connect103.ProtoField := 'l_elbow_rotation_changed';
{ .AddConnect }
IS102.Connect := connect103;
{ .SetIS }
OrientationInterpolator101.IS := IS102;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator101]);
OrientationInterpolator104 := TOrientationInterpolatorNode.Create;
OrientationInterpolator104.SetKey([0,1]);
OrientationInterpolator104.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS105 := TISNode.Create;
connect106 := TconnectNode.Create;
connect106.NodeField := 'value_changed';
connect106.ProtoField := 'l_wrist_rotation_changed';
{ .AddConnect }
IS105.Connect := connect106;
{ .SetIS }
OrientationInterpolator104.IS := IS105;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator104]);
OrientationInterpolator107 := TOrientationInterpolatorNode.Create;
OrientationInterpolator107.SetKey([0,1]);
OrientationInterpolator107.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS108 := TISNode.Create;
connect109 := TconnectNode.Create;
connect109.NodeField := 'value_changed';
connect109.ProtoField := 'r_shoulder_rotation_changed';
{ .AddConnect }
IS108.Connect := connect109;
{ .SetIS }
OrientationInterpolator107.IS := IS108;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator107]);
OrientationInterpolator110 := TOrientationInterpolatorNode.Create;
OrientationInterpolator110.SetKey([0,1]);
OrientationInterpolator110.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS111 := TISNode.Create;
connect112 := TconnectNode.Create;
connect112.NodeField := 'value_changed';
connect112.ProtoField := 'r_elbow_rotation_changed';
{ .AddConnect }
IS111.Connect := connect112;
{ .SetIS }
OrientationInterpolator110.IS := IS111;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator110]);
OrientationInterpolator113 := TOrientationInterpolatorNode.Create;
OrientationInterpolator113.SetKey([0,1]);
OrientationInterpolator113.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS114 := TISNode.Create;
connect115 := TconnectNode.Create;
connect115.NodeField := 'value_changed';
connect115.ProtoField := 'r_wrist_rotation_changed';
{ .AddConnect }
IS114.Connect := connect115;
{ .SetIS }
OrientationInterpolator113.IS := IS114;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator113]);
{ .AddChildren }
ProtoBody48.AddChildren([Group49]);
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, PositionInterpolator59.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator65.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator68.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator74.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator77.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator80.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator83.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator86.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator89.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator92.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator95.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator98.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator101.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator104.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator107.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator110.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator113.EventSet_fraction);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare20.ProtoBody := ProtoBody48;
{ .AddChildren }
Group18.AddChildren([ProtoDeclare20]);
{ ====================================== }
{ Point to example use in case someone inspects this file }
Anchor135 := TAnchorNode.Create;
Anchor135.Description := 'InterchangableActorsViaDynamicRouting';
Anchor135.SetParameter(['target=_blank']);
Anchor135.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape136 := TShapeNode.Create;
Text137 := TTextNode.Create;
Text137.SetText(['LOA1_StandAnimation.x3d','defines a prototype','for animating a humanoid.','','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
FontStyle138 := TFontStyleNode.Create;
FontStyle138.Justify := fjMiddle;
FontStyle138.JustifyMinor := fjMiddle;
FontStyle138.Size := 0.8;
{ .SetFontStyle }
Text137.FontStyle := FontStyle138;
{ .SetGeometry }
Shape136.Geometry := Text137;
Appearance139 := TAppearanceNode.Create;
Material140 := TMaterialNode.Create;
Material140.DiffuseColor := Vector3(1,1,0.2);
{ .SetMaterial }
Appearance139.Material := Material140;
{ .SetAppearance }
Shape136.Appearance := Appearance139;
{ .AddChildren }
Anchor135.AddChildren([Shape136]);
{ .AddChildren }
Group18.AddChildren([Anchor135]);
{ .AddGroup }
X3D0.AddChildren([Group18]);
Result := X3D0;
end;
