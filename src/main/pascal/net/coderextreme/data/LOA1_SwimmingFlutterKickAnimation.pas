unit LOA1_SwimmingFlutterKickAnimation;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateLOA1_SwimmingFlutterKickAnimation: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group15: TGroupNode;
WorldInfo16: TWorldInfoNode;
X3DPrototype17: TX3DPrototype;
X3DInterfaceDeclaration18: TX3DInterfaceDeclaration;
SFTime19: TSFTime;
SFBool20: TSFBool;
SFBool21: TSFBool;
SFTime22: TSFTime;
SFTime23: TSFTime;
SFFloat24: TSFFloat;
SFBool25: TSFBool;
SFVec3f26: TSFVec3f;
SFRotation27: TSFRotation;
SFRotation28: TSFRotation;
SFRotation29: TSFRotation;
SFRotation30: TSFRotation;
SFRotation31: TSFRotation;
SFRotation32: TSFRotation;
SFRotation33: TSFRotation;
SFRotation34: TSFRotation;
SFRotation35: TSFRotation;
SFRotation36: TSFRotation;
SFRotation37: TSFRotation;
SFRotation38: TSFRotation;
SFRotation39: TSFRotation;
SFRotation40: TSFRotation;
SFRotation41: TSFRotation;
SFRotation42: TSFRotation;
SFRotation43: TSFRotation;
SFRotation44: TSFRotation;
X3DPrototype45: TX3DPrototype;
Group46: TGroupNode;
TimeSensor47: TTimeSensorNode;
IS48: TIS;
connect49: Tconnect;
connect50: Tconnect;
connect51: Tconnect;
connect52: Tconnect;
connect53: Tconnect;
connect54: Tconnect;
connect55: Tconnect;
PositionInterpolator56: TPositionInterpolatorNode;
IS57: TIS;
connect58: Tconnect;
OrientationInterpolator59: TOrientationInterpolatorNode;
IS60: TIS;
connect61: Tconnect;
OrientationInterpolator62: TOrientationInterpolatorNode;
IS63: TIS;
connect64: Tconnect;
OrientationInterpolator65: TOrientationInterpolatorNode;
IS66: TIS;
connect67: Tconnect;
OrientationInterpolator68: TOrientationInterpolatorNode;
IS69: TIS;
connect70: Tconnect;
OrientationInterpolator71: TOrientationInterpolatorNode;
IS72: TIS;
connect73: Tconnect;
OrientationInterpolator74: TOrientationInterpolatorNode;
IS75: TIS;
connect76: Tconnect;
OrientationInterpolator77: TOrientationInterpolatorNode;
IS78: TIS;
connect79: Tconnect;
OrientationInterpolator80: TOrientationInterpolatorNode;
IS81: TIS;
connect82: Tconnect;
OrientationInterpolator83: TOrientationInterpolatorNode;
IS84: TIS;
connect85: Tconnect;
OrientationInterpolator86: TOrientationInterpolatorNode;
IS87: TIS;
connect88: Tconnect;
OrientationInterpolator89: TOrientationInterpolatorNode;
IS90: TIS;
connect91: Tconnect;
OrientationInterpolator92: TOrientationInterpolatorNode;
IS93: TIS;
connect94: Tconnect;
OrientationInterpolator95: TOrientationInterpolatorNode;
IS96: TIS;
connect97: Tconnect;
OrientationInterpolator98: TOrientationInterpolatorNode;
IS99: TIS;
connect100: Tconnect;
OrientationInterpolator101: TOrientationInterpolatorNode;
IS102: TIS;
connect103: Tconnect;
Viewpoint120: TViewpointNode;
Anchor121: TAnchorNode;
Shape122: TShapeNode;
Text123: TTextNode;
FontStyle124: TFontStyleNode;
Appearance125: TAppearanceNode;
Material126: TMaterialNode;

procedure InitLOA1_SwimmingFlutterKickAnimationPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_SwimmingFlutterKickAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Etsuko Lippi';
{ METHOD .Meta }
X3D0.Meta['created'] := '13 December 2001';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 May 2020';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'not yet tested, need to compare with NancyDivingExample interpolators';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.HAnim.org';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'Swimming flutter kick Animation HAnim 2001';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'LOA1_SwimmingFlutterKickAnimation.x3d';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(WorldInfo16);
X3DPrototype17 := TX3DPrototype.Create;
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);
SFTime19 := TSFTime.CreateUndefined(X3DInterfaceDeclaration18, false, 'cycleInterval');
SFTime19.Value := '7';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration18.AddSFTime([SFTime19]);
SFBool20 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'enabled');
SFBool20.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool20]);
SFBool21 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'loop');
SFBool21.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool21]);
SFTime22 := TSFTime.CreateUndefined(X3DInterfaceDeclaration18, false, 'startTime');
SFTime22.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration18.AddSFTime([SFTime22]);
SFTime23 := TSFTime.CreateUndefined(X3DInterfaceDeclaration18, false, 'stopTime');
SFTime23.Value := '-1';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration18.AddSFTime([SFTime23]);
SFFloat24 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'fraction_changed');
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat24]);
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart1;
begin

SFBool25 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'isActive');
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool25]);
SFVec3f26 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration18, false, 'HumanoidRoot_translation_changed');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration18.AddSFVec3f([SFVec3f26]);
SFRotation27 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'HumanoidRoot_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation27]);
SFRotation28 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'lower_body_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation28]);
SFRotation29 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'l_hip_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation29]);
SFRotation30 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'l_knee_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation30]);
SFRotation31 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'l_ankle_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation31]);
SFRotation32 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'l_midtarsal_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation32]);
SFRotation33 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'r_hip_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation33]);
SFRotation34 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'r_knee_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation34]);
SFRotation35 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'r_ankle_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation35]);
SFRotation36 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'r_midtarsal_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation36]);
SFRotation37 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'vl5_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation37]);
SFRotation38 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'skullbase_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation38]);
SFRotation39 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'l_shoulder_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation39]);
SFRotation40 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'l_elbow_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation40]);
SFRotation41 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'l_wrist_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation41]);
SFRotation42 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'r_shoulder_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation42]);
SFRotation43 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'r_elbow_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation43]);
SFRotation44 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'r_wrist_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation44]);
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart2;
begin

{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype17.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration18]);
X3DPrototype45 := TX3DPrototype.Create;
Group46 := TGroupNode.Create;
TimeSensor47 := TTimeSensorNode.Create;
TimeSensor47.Loop := True;
IS48 := TIS.Create;
connect49 := Tconnect.Create;
connect49.NodeField := 'cycleInterval';
connect49.ProtoField := 'cycleInterval';
{ METHOD .Connect }
IS48.Connect := connect49;
connect50 := Tconnect.Create;
connect50.NodeField := 'enabled';
connect50.ProtoField := 'enabled';
{ METHOD .Connect }
IS48.Connect := connect50;
connect51 := Tconnect.Create;
connect51.NodeField := 'loop';
connect51.ProtoField := 'loop';
{ METHOD .Connect }
IS48.Connect := connect51;
connect52 := Tconnect.Create;
connect52.NodeField := 'startTime';
connect52.ProtoField := 'startTime';
{ METHOD .Connect }
IS48.Connect := connect52;
connect53 := Tconnect.Create;
connect53.NodeField := 'stopTime';
connect53.ProtoField := 'stopTime';
{ METHOD .Connect }
IS48.Connect := connect53;
connect54 := Tconnect.Create;
connect54.NodeField := 'fraction_changed';
connect54.ProtoField := 'fraction_changed';
{ METHOD .Connect }
IS48.Connect := connect54;
connect55 := Tconnect.Create;
connect55.NodeField := 'isActive';
connect55.ProtoField := 'isActive';
{ METHOD .Connect }
IS48.Connect := connect55;
{ METHOD .IS }
TimeSensor47.IS := IS48;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(TimeSensor47);
PositionInterpolator56 := TPositionInterpolatorNode.Create;
PositionInterpolator56.SetKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator56.SetKeyValue([Vector3(0,-0.00928,0),Vector3(0,-0.003858,0),Vector3(0,-0.008847,0),Vector3(0,-0.01486,0),Vector3(0,-0.02641,0),Vector3(0,-0.03934,0),Vector3(0,-0.0502,0),Vector3(0,-0.07469,0),Vector3(0,-0.02732,0),Vector3(0,-0.01608,0),Vector3(0,-0.01129,0),Vector3(0,-0.005819,0),Vector3(0,-0.002004,0),Vector3(0,-0.002579,0),Vector3(0,-0.0143,0),Vector3(0,-0.03799,0),Vector3(0,-0.05648,0),Vector3(0,-0.045,0),Vector3(0,-0.00928,0)]);
IS57 := TIS.Create;
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart3;
begin

connect58 := Tconnect.Create;
connect58.NodeField := 'value_changed';
connect58.ProtoField := 'HumanoidRoot_translation_changed';
{ METHOD .Connect }
IS57.Connect := connect58;
{ METHOD .IS }
PositionInterpolator56.IS := IS57;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(PositionInterpolator56);
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;
OrientationInterpolator59.SetKey([0,1]);
OrientationInterpolator59.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS60 := TIS.Create;
connect61 := Tconnect.Create;
connect61.NodeField := 'value_changed';
connect61.ProtoField := 'HumanoidRoot_rotation_changed';
{ METHOD .Connect }
IS60.Connect := connect61;
{ METHOD .IS }
OrientationInterpolator59.IS := IS60;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator59);
{ no SACROILIAC_ANIMATOR }
OrientationInterpolator62 := TOrientationInterpolatorNode.Create;
OrientationInterpolator62.SetKey([0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator62.SetKeyValue([Vector4(-0.873,0.06094,0.484,0.2865),Vector4(0.9963,-0.01057,0.08481,0.2488),Vector4(0.9965,0.01591,-0.08222,0.3836),Vector4(-1,0,0,0.5518),Vector4(-0.9964,0.02231,0.0817,0.5351),Vector4(-0.9809,0.04912,0.1881,0.5204),Vector4(-0.873,0.06094,0.484,0.2865)]);
IS63 := TIS.Create;
connect64 := Tconnect.Create;
connect64.NodeField := 'value_changed';
connect64.ProtoField := 'l_hip_rotation_changed';
{ METHOD .Connect }
IS63.Connect := connect64;
{ METHOD .IS }
OrientationInterpolator62.IS := IS63;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator62);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;
OrientationInterpolator65.SetKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator65.SetKeyValue([Vector4(1,0,0,0.3226),Vector4(1,0,0,0.1556),Vector4(1,0,0,0.08678),Vector4(1,0,0,0.8751),Vector4(1,0,0,1.131),Vector4(1,0,0,0.09961),Vector4(1,0,0,0.3942),Vector4(1,0,0,0.3226)]);
IS66 := TIS.Create;
connect67 := Tconnect.Create;
connect67.NodeField := 'value_changed';
connect67.ProtoField := 'l_knee_rotation_changed';
{ METHOD .Connect }
IS66.Connect := connect67;
{ METHOD .IS }
OrientationInterpolator65.IS := IS66;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator65);
OrientationInterpolator68 := TOrientationInterpolatorNode.Create;
OrientationInterpolator68.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator68.SetKeyValue([Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.6001)]);
IS69 := TIS.Create;
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart4;
begin

connect70 := Tconnect.Create;
connect70.NodeField := 'value_changed';
connect70.ProtoField := 'l_ankle_rotation_changed';
{ METHOD .Connect }
IS69.Connect := connect70;
{ METHOD .IS }
OrientationInterpolator68.IS := IS69;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator68);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;
OrientationInterpolator71.SetKey([0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator71.SetKeyValue([Vector4(-0.5831,0.03511,0.8116,0.1481),Vector4(-0.995,0.02296,0.09674,0.4683),Vector4(-1,0.00192,0.007964,0.4732),Vector4(-0.998,-0.0158,-0.06102,0.5079),Vector4(-0.9131,-0.06243,-0.403,0.3361),Vector4(1,0,0,0.2571),Vector4(0.9891,-0.02805,0.1444,0.3879),Vector4(-0.5831,0.03511,0.8116,0.1481)]);
IS72 := TIS.Create;
connect73 := Tconnect.Create;
connect73.NodeField := 'value_changed';
connect73.ProtoField := 'r_hip_rotation_changed';
{ METHOD .Connect }
IS72.Connect := connect73;
{ METHOD .IS }
OrientationInterpolator71.IS := IS72;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator71);
OrientationInterpolator74 := TOrientationInterpolatorNode.Create;
OrientationInterpolator74.SetKey([0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator74.SetKeyValue([Vector4(1,0,0,0.8573),Vector4(1,0,0,0.5351),Vector4(1,0,0,0.1756),Vector4(1,0,0,0.1194),Vector4(1,0,0,0.3153),Vector4(1,0,0,0.09354),Vector4(1,0,0,0.08558),Vector4(1,0,0,0.8573)]);
IS75 := TIS.Create;
connect76 := Tconnect.Create;
connect76.NodeField := 'value_changed';
connect76.ProtoField := 'r_knee_rotation_changed';
{ METHOD .Connect }
IS75.Connect := connect76;
{ METHOD .IS }
OrientationInterpolator74.IS := IS75;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator74);
OrientationInterpolator77 := TOrientationInterpolatorNode.Create;
OrientationInterpolator77.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator77.SetKeyValue([Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8509),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8509),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8509),Vector4(1,0,0,0.86001)]);
IS78 := TIS.Create;
connect79 := Tconnect.Create;
connect79.NodeField := 'value_changed';
connect79.ProtoField := 'r_ankle_rotation_changed';
{ METHOD .Connect }
IS78.Connect := connect79;
{ METHOD .IS }
OrientationInterpolator77.IS := IS78;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator77);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator80 := TOrientationInterpolatorNode.Create;
OrientationInterpolator80.SetKey([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator80.SetKeyValue([Vector4(0,1,0,0.0826),Vector4(-0.01972,-0.5974,0.8017,0.08231),Vector4(0.009296,-0.9648,0.2627,0.1734),Vector4(-0.01238,0.9549,-0.2968,0.08732),Vector4(-0.008125,0.9691,-0.2463,0.158),Vector4(0,1,0,0.0826)]);
IS81 := TIS.Create;
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart5;
begin

connect82 := Tconnect.Create;
connect82.NodeField := 'value_changed';
connect82.ProtoField := 'vl5_rotation_changed';
{ METHOD .Connect }
IS81.Connect := connect82;
{ METHOD .IS }
OrientationInterpolator80.IS := IS81;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator80);
OrientationInterpolator83 := TOrientationInterpolatorNode.Create;
OrientationInterpolator83.SetKey([0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator83.SetKeyValue([Vector4(-1,0,0,1),Vector4(-1,0,0,1),Vector4(-1,0,0,0.999),Vector4(-1,0,0,0.99),Vector4(-1,0,0,0.99),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,1)]);
IS84 := TIS.Create;
connect85 := Tconnect.Create;
connect85.NodeField := 'value_changed';
connect85.ProtoField := 'skullbase_rotation_changed';
{ METHOD .Connect }
IS84.Connect := connect85;
{ METHOD .IS }
OrientationInterpolator83.IS := IS84;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator83);
OrientationInterpolator86 := TOrientationInterpolatorNode.Create;
OrientationInterpolator86.SetKey([0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator86.SetKeyValue([Vector4(0,0,1,0.1),Vector4(0,0,1,0.2),Vector4(0,0,1,0.2),Vector4(0.86,0.25,0.42,0.5),Vector4(0.86,0.25,0.42,0.8),Vector4(0.86,0.25,0.42,0.4),Vector4(0.86,0.25,0.42,0.2)]);
IS87 := TIS.Create;
connect88 := Tconnect.Create;
connect88.NodeField := 'value_changed';
connect88.ProtoField := 'l_shoulder_rotation_changed';
{ METHOD .Connect }
IS87.Connect := connect88;
{ METHOD .IS }
OrientationInterpolator86.IS := IS87;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator86);
OrientationInterpolator89 := TOrientationInterpolatorNode.Create;
OrientationInterpolator89.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator89.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.1229),Vector4(-1,0,0,0.1229),Vector4(-1,0,0,0.5976),Vector4(-1,0,0,0.3917),Vector4(0,0,1,0)]);
IS90 := TIS.Create;
connect91 := Tconnect.Create;
connect91.NodeField := 'value_changed';
connect91.ProtoField := 'l_elbow_rotation_changed';
{ METHOD .Connect }
IS90.Connect := connect91;
{ METHOD .IS }
OrientationInterpolator89.IS := IS90;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator89);
OrientationInterpolator92 := TOrientationInterpolatorNode.Create;
OrientationInterpolator92.SetKey([0,0.32,0.64,0.88,1]);
OrientationInterpolator92.SetKeyValue([Vector4(0,0,1,0),Vector4(0.067,0.98,-0.128,4.15),Vector4(0.067,0.98,-0.128,4.15),Vector4(0.067,0.98,-0.128,4.15),Vector4(0,0,1,0)]);
IS93 := TIS.Create;
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart6;
begin

connect94 := Tconnect.Create;
connect94.NodeField := 'value_changed';
connect94.ProtoField := 'l_wrist_rotation_changed';
{ METHOD .Connect }
IS93.Connect := connect94;
{ METHOD .IS }
OrientationInterpolator92.IS := IS93;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator92);
OrientationInterpolator95 := TOrientationInterpolatorNode.Create;
OrientationInterpolator95.SetKey([0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator95.SetKeyValue([Vector4(0,0,1,0),Vector4(0.9992,0.02042,0.03558,7.2),Vector4(0.9989,-0.04623,0.005159,4.079),Vector4(-0.8687,-0.2525,-0.4261,1.501),Vector4(-0.941,-0.2893,-0.1754,0.4788),Vector4(0,0,1,0)]);
IS96 := TIS.Create;
connect97 := Tconnect.Create;
connect97.NodeField := 'value_changed';
connect97.ProtoField := 'r_shoulder_rotation_changed';
{ METHOD .Connect }
IS96.Connect := connect97;
{ METHOD .IS }
OrientationInterpolator95.IS := IS96;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator95);
OrientationInterpolator98 := TOrientationInterpolatorNode.Create;
OrientationInterpolator98.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator98.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.5855),Vector4(-1,0,0,0.5852),Vector4(0,0,1,0)]);
IS99 := TIS.Create;
connect100 := Tconnect.Create;
connect100.NodeField := 'value_changed';
connect100.ProtoField := 'r_elbow_rotation_changed';
{ METHOD .Connect }
IS99.Connect := connect100;
{ METHOD .IS }
OrientationInterpolator98.IS := IS99;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator98);
OrientationInterpolator101 := TOrientationInterpolatorNode.Create;
OrientationInterpolator101.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator101.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.00222418,0.99801,-0.0630095,1.46072),Vector4(0,1,0,0.497349),Vector4(0,0,1,0)]);
IS102 := TIS.Create;
connect103 := Tconnect.Create;
connect103.NodeField := 'value_changed';
connect103.ProtoField := 'r_wrist_rotation_changed';
{ METHOD .Connect }
IS102.Connect := connect103;
{ METHOD .IS }
OrientationInterpolator101.IS := IS102;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator101);
{ METHOD .AddGroup }
X3DPrototype45.AddChildren([Group46]);
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, PositionInterpolator56.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator59.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator83.EventSet_fraction);
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart7;
begin

{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator80.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator62.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator65.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator68.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator74.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator77.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator86.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator89.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator92.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator95.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator98.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator101.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype17.AddX3DPrototype([X3DPrototype45]);
{ METHOD .AddX3DPrototype }
Group15.AddX3DPrototype([X3DPrototype17]);
Viewpoint120 := TViewpointNode.Create;
Viewpoint120.Description := 'LOA1_SwimmingFlutterKickAnimation scene';
Viewpoint120.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint120);
Anchor121 := TAnchorNode.Create;
Anchor121.Description := 'Nancy Diving';
Anchor121.SetParameter(['target=_blank']);
Anchor121.SetUrl(['NancyDiving.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d','NancyDiving.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl']);
Shape122 := TShapeNode.Create;
Text123 := TTextNode.Create;
Text123.SetText(['LOA1_SwimmingFlutterKickAnimation.x3d','defines a prototype','for animating a humanoid.','Click text to see example.']);
FontStyle124 := TFontStyleNode.Create;
FontStyle124.Justify := fjMIDDLE;
FontStyle124.JustifyMinor := fjMIDDLE;
FontStyle124.Size := 0.8;
{ METHOD .FontStyle }
Text123.FontStyle := FontStyle124;
{ METHOD .Geometry }
Shape122.Geometry := Text123;
Appearance125 := TAppearanceNode.Create;
Material126 := TMaterialNode.Create;
Material126.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance125.Material := Material126;
{ METHOD .Appearance }
Shape122.Appearance := Appearance125;
{ METHOD .FdChildren.Add }
Anchor121.FdChildren.Add(Shape122);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Anchor121);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function CreateLOA1_SwimmingFlutterKickAnimation: TX3DRootNode;
begin
InitLOA1_SwimmingFlutterKickAnimationPart0;
InitLOA1_SwimmingFlutterKickAnimationPart1;
InitLOA1_SwimmingFlutterKickAnimationPart2;
InitLOA1_SwimmingFlutterKickAnimationPart3;
InitLOA1_SwimmingFlutterKickAnimationPart4;
InitLOA1_SwimmingFlutterKickAnimationPart5;
InitLOA1_SwimmingFlutterKickAnimationPart6;
InitLOA1_SwimmingFlutterKickAnimationPart7;
Result := X3D0;
end;

begin
end.
