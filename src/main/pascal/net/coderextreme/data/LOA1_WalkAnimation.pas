unit LOA1_WalkAnimation;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateLOA1_WalkAnimation: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
X3DPrototype19: TX3DPrototype;
X3DInterfaceDeclaration20: TX3DInterfaceDeclaration;
SFTime21: TSFTime;
SFBool22: TSFBool;
SFBool23: TSFBool;
SFTime24: TSFTime;
SFTime25: TSFTime;
SFFloat26: TSFFloat;
SFBool27: TSFBool;
SFVec3f28: TSFVec3f;
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
SFRotation45: TSFRotation;
SFRotation46: TSFRotation;
X3DPrototype47: TX3DPrototype;
Group48: TGroupNode;
TimeSensor49: TTimeSensorNode;
IS50: TIS;
connect51: Tconnect;
connect52: Tconnect;
connect53: Tconnect;
connect54: Tconnect;
connect55: Tconnect;
connect56: Tconnect;
connect57: Tconnect;
PositionInterpolator58: TPositionInterpolatorNode;
IS59: TIS;
connect60: Tconnect;
OrientationInterpolator61: TOrientationInterpolatorNode;
IS62: TIS;
connect63: Tconnect;
OrientationInterpolator64: TOrientationInterpolatorNode;
IS65: TIS;
connect66: Tconnect;
OrientationInterpolator67: TOrientationInterpolatorNode;
IS68: TIS;
connect69: Tconnect;
OrientationInterpolator70: TOrientationInterpolatorNode;
IS71: TIS;
connect72: Tconnect;
OrientationInterpolator73: TOrientationInterpolatorNode;
IS74: TIS;
connect75: Tconnect;
OrientationInterpolator76: TOrientationInterpolatorNode;
IS77: TIS;
connect78: Tconnect;
OrientationInterpolator79: TOrientationInterpolatorNode;
IS80: TIS;
connect81: Tconnect;
OrientationInterpolator82: TOrientationInterpolatorNode;
IS83: TIS;
connect84: Tconnect;
OrientationInterpolator85: TOrientationInterpolatorNode;
IS86: TIS;
connect87: Tconnect;
OrientationInterpolator88: TOrientationInterpolatorNode;
IS89: TIS;
connect90: Tconnect;
OrientationInterpolator91: TOrientationInterpolatorNode;
IS92: TIS;
connect93: Tconnect;
OrientationInterpolator94: TOrientationInterpolatorNode;
IS95: TIS;
connect96: Tconnect;
OrientationInterpolator97: TOrientationInterpolatorNode;
IS98: TIS;
connect99: Tconnect;
OrientationInterpolator100: TOrientationInterpolatorNode;
IS101: TIS;
connect102: Tconnect;
OrientationInterpolator103: TOrientationInterpolatorNode;
IS104: TIS;
connect105: Tconnect;
OrientationInterpolator106: TOrientationInterpolatorNode;
IS107: TIS;
connect108: Tconnect;
OrientationInterpolator109: TOrientationInterpolatorNode;
IS110: TIS;
connect111: Tconnect;
OrientationInterpolator112: TOrientationInterpolatorNode;
IS113: TIS;
connect114: Tconnect;
Anchor134: TAnchorNode;
Shape135: TShapeNode;
Text136: TTextNode;
FontStyle137: TFontStyleNode;
Appearance138: TAppearanceNode;
Material139: TMaterialNode;

procedure InitLOA1_WalkAnimationPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_WalkAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Cindy Ballreich cindy@ballreich.net 3Name3D';
{ METHOD .Meta }
X3D0.Meta['rights'] := '1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['translated'] := '1 October 2001';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 May 2020';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Specifications/HAnim2001';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'Nancy Walk Animation HAnim 2001';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'LOA1_WalkAnimation.x3d';
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(WorldInfo18);
X3DPrototype19 := TX3DPrototype.Create;
X3DInterfaceDeclaration20 := TX3DInterfaceDeclaration.Create(nil);
SFTime21 := TSFTime.CreateUndefined(X3DInterfaceDeclaration20, false, 'cycleInterval');
SFTime21.Value := '2';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration20.AddSFTime([SFTime21]);
SFBool22 := TSFBool.CreateUndefined(X3DInterfaceDeclaration20, false, 'enabled');
SFBool22.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration20.AddSFBool([SFBool22]);
SFBool23 := TSFBool.CreateUndefined(X3DInterfaceDeclaration20, false, 'loop');
SFBool23.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration20.AddSFBool([SFBool23]);
SFTime24 := TSFTime.CreateUndefined(X3DInterfaceDeclaration20, false, 'startTime');
SFTime24.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration20.AddSFTime([SFTime24]);
SFTime25 := TSFTime.CreateUndefined(X3DInterfaceDeclaration20, false, 'stopTime');
SFTime25.Value := '-1';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration20.AddSFTime([SFTime25]);
end;

procedure InitLOA1_WalkAnimationPart1;
begin

SFFloat26 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration20, false, 'fraction_changed');
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration20.AddSFFloat([SFFloat26]);
SFBool27 := TSFBool.CreateUndefined(X3DInterfaceDeclaration20, false, 'isActive');
{ METHOD .AddSFBool }
X3DInterfaceDeclaration20.AddSFBool([SFBool27]);
SFVec3f28 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration20, false, 'HumanoidRoot_translation_changed');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration20.AddSFVec3f([SFVec3f28]);
SFRotation29 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'HumanoidRoot_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation29]);
SFRotation30 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'lower_body_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation30]);
SFRotation31 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'l_hip_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation31]);
SFRotation32 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'l_knee_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation32]);
SFRotation33 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'l_ankle_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation33]);
SFRotation34 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'l_midtarsal_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation34]);
SFRotation35 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_hip_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation35]);
SFRotation36 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_knee_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation36]);
SFRotation37 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_ankle_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation37]);
SFRotation38 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_midtarsal_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation38]);
SFRotation39 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'vl5_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation39]);
SFRotation40 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'skullbase_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation40]);
SFRotation41 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'l_shoulder_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation41]);
SFRotation42 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'l_elbow_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation42]);
SFRotation43 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'l_wrist_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation43]);
SFRotation44 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_shoulder_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation44]);
SFRotation45 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_elbow_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation45]);
end;

procedure InitLOA1_WalkAnimationPart2;
begin

SFRotation46 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_wrist_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation46]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype19.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration20]);
X3DPrototype47 := TX3DPrototype.Create;
Group48 := TGroupNode.Create;
TimeSensor49 := TTimeSensorNode.Create;
IS50 := TIS.Create;
connect51 := Tconnect.Create;
connect51.NodeField := 'cycleInterval';
connect51.ProtoField := 'cycleInterval';
{ METHOD .Connect }
IS50.Connect := connect51;
connect52 := Tconnect.Create;
connect52.NodeField := 'enabled';
connect52.ProtoField := 'enabled';
{ METHOD .Connect }
IS50.Connect := connect52;
connect53 := Tconnect.Create;
connect53.NodeField := 'loop';
connect53.ProtoField := 'loop';
{ METHOD .Connect }
IS50.Connect := connect53;
connect54 := Tconnect.Create;
connect54.NodeField := 'startTime';
connect54.ProtoField := 'startTime';
{ METHOD .Connect }
IS50.Connect := connect54;
connect55 := Tconnect.Create;
connect55.NodeField := 'stopTime';
connect55.ProtoField := 'stopTime';
{ METHOD .Connect }
IS50.Connect := connect55;
connect56 := Tconnect.Create;
connect56.NodeField := 'fraction_changed';
connect56.ProtoField := 'fraction_changed';
{ METHOD .Connect }
IS50.Connect := connect56;
connect57 := Tconnect.Create;
connect57.NodeField := 'isActive';
connect57.ProtoField := 'isActive';
{ METHOD .Connect }
IS50.Connect := connect57;
{ METHOD .IS }
TimeSensor49.IS := IS50;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(TimeSensor49);
PositionInterpolator58 := TPositionInterpolatorNode.Create;
PositionInterpolator58.SetKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator58.SetKeyValue([Vector3(0,-0.00928,0),Vector3(0,-0.003858,0),Vector3(0,-0.008847,0),Vector3(0,-0.01486,0),Vector3(0,-0.02641,0),Vector3(0,-0.03934,0),Vector3(0,-0.0502,0),Vector3(0,-0.07469,0),Vector3(0,-0.02732,0),Vector3(0,-0.01608,0),Vector3(0,-0.01129,0),Vector3(0,-0.005819,0),Vector3(0,-0.002004,0),Vector3(0,-0.002579,0),Vector3(0,-0.0143,0),Vector3(0,-0.03799,0),Vector3(0,-0.05648,0),Vector3(0,-0.045,0),Vector3(0,-0.00928,0)]);
end;

procedure InitLOA1_WalkAnimationPart3;
begin

IS59 := TIS.Create;
connect60 := Tconnect.Create;
connect60.NodeField := 'value_changed';
connect60.ProtoField := 'HumanoidRoot_translation_changed';
{ METHOD .Connect }
IS59.Connect := connect60;
{ METHOD .IS }
PositionInterpolator58.IS := IS59;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(PositionInterpolator58);
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
OrientationInterpolator61.SetKey([0,1]);
OrientationInterpolator61.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
IS62 := TIS.Create;
connect63 := Tconnect.Create;
connect63.NodeField := 'value_changed';
connect63.ProtoField := 'HumanoidRoot_rotation_changed';
{ METHOD .Connect }
IS62.Connect := connect63;
{ METHOD .IS }
OrientationInterpolator61.IS := IS62;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.SetKey([0,0.5,1]);
OrientationInterpolator64.SetKeyValue([Vector4(0,0,-1,0.1056),Vector4(0,0,1,0.09018),Vector4(0,0,-1,0.1056)]);
IS65 := TIS.Create;
connect66 := Tconnect.Create;
connect66.NodeField := 'value_changed';
connect66.ProtoField := 'lower_body_rotation_changed';
{ METHOD .Connect }
IS65.Connect := connect66;
{ METHOD .IS }
OrientationInterpolator64.IS := IS65;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator64);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;
OrientationInterpolator67.SetKey([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator67.SetKeyValue([Vector4(-0.873,0.06094,0.484,0.2865),Vector4(0.9963,-0.01057,0.08481,0.2488),Vector4(0.9965,0.01591,-0.08222,0.3836),Vector4(-0.7018,-0.03223,-0.7117,0.1289),Vector4(-1,0,0,0.5518),Vector4(-0.9964,0.02231,0.0817,0.5351),Vector4(-0.9809,0.04912,0.1881,0.5204),Vector4(-0.873,0.06094,0.484,0.2865)]);
IS68 := TIS.Create;
connect69 := Tconnect.Create;
connect69.NodeField := 'value_changed';
connect69.ProtoField := 'l_hip_rotation_changed';
{ METHOD .Connect }
IS68.Connect := connect69;
{ METHOD .IS }
OrientationInterpolator67.IS := IS68;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator67);
OrientationInterpolator70 := TOrientationInterpolatorNode.Create;
OrientationInterpolator70.SetKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator70.SetKeyValue([Vector4(1,0,0,0.3226),Vector4(1,0,0,0.1556),Vector4(1,0,0,0.08678),Vector4(1,0,0,0.8751),Vector4(1,0,0,1.131),Vector4(1,0,0,0.09961),Vector4(1,0,0,0.3942),Vector4(1,0,0,0.3226)]);
end;

procedure InitLOA1_WalkAnimationPart4;
begin

IS71 := TIS.Create;
connect72 := Tconnect.Create;
connect72.NodeField := 'value_changed';
connect72.ProtoField := 'l_knee_rotation_changed';
{ METHOD .Connect }
IS71.Connect := connect72;
{ METHOD .IS }
OrientationInterpolator70.IS := IS71;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator70);
OrientationInterpolator73 := TOrientationInterpolatorNode.Create;
OrientationInterpolator73.SetKey([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator73.SetKeyValue([Vector4(-1,0,0,0.06714),Vector4(-1,0,0,0.2152),Vector4(-1,0,0,0.3184),Vector4(-1,0,0,0.4717),Vector4(-1,0,0,0.2912),Vector4(1,0,0,0.1222),Vector4(-1,0,0,0.06714)]);
IS74 := TIS.Create;
connect75 := Tconnect.Create;
connect75.NodeField := 'value_changed';
connect75.ProtoField := 'l_ankle_rotation_changed';
{ METHOD .Connect }
IS74.Connect := connect75;
{ METHOD .IS }
OrientationInterpolator73.IS := IS74;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator73);
OrientationInterpolator76 := TOrientationInterpolatorNode.Create;
OrientationInterpolator76.SetKey([0,0.5,1]);
OrientationInterpolator76.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.2),Vector4(1,0,0,0)]);
IS77 := TIS.Create;
connect78 := Tconnect.Create;
connect78.NodeField := 'value_changed';
connect78.ProtoField := 'l_midtarsal_rotation_changed';
{ METHOD .Connect }
IS77.Connect := connect78;
{ METHOD .IS }
OrientationInterpolator76.IS := IS77;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator76);
OrientationInterpolator79 := TOrientationInterpolatorNode.Create;
OrientationInterpolator79.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator79.SetKeyValue([Vector4(-0.5831,0.03511,0.8116,0.1481),Vector4(-0.995,0.02296,0.09674,0.4683),Vector4(-1,0.00192,0.007964,0.4732),Vector4(-0.998,-0.0158,-0.06102,0.5079),Vector4(-0.9911,-0.03541,-0.1286,0.5419),Vector4(-0.9131,-0.06243,-0.403,0.3361),Vector4(-0.4306,-0.07962,-0.899,0.07038),Vector4(1,0,0,0.2571),Vector4(0.9891,-0.02805,0.1444,0.3879),Vector4(-0.5831,0.03511,0.8116,0.1481)]);
IS80 := TIS.Create;
connect81 := Tconnect.Create;
connect81.NodeField := 'value_changed';
connect81.ProtoField := 'r_hip_rotation_changed';
{ METHOD .Connect }
IS80.Connect := connect81;
{ METHOD .IS }
OrientationInterpolator79.IS := IS80;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator79);
OrientationInterpolator82 := TOrientationInterpolatorNode.Create;
OrientationInterpolator82.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator82.SetKeyValue([Vector4(1,0,0,0.8573),Vector4(1,0,0,0.8926),Vector4(1,0,0,0.5351),Vector4(1,0,0,0.1756),Vector4(1,0,0,0.1194),Vector4(1,0,0,0.3153),Vector4(1,-1.176e-8,-4.971e-9,0.09354),Vector4(1,0,0,0.08558),Vector4(1,0,0,0.2475),Vector4(1,0,0,0.8573)]);
end;

procedure InitLOA1_WalkAnimationPart5;
begin

IS83 := TIS.Create;
connect84 := Tconnect.Create;
connect84.NodeField := 'value_changed';
connect84.ProtoField := 'r_knee_rotation_changed';
{ METHOD .Connect }
IS83.Connect := connect84;
{ METHOD .IS }
OrientationInterpolator82.IS := IS83;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator82);
OrientationInterpolator85 := TOrientationInterpolatorNode.Create;
OrientationInterpolator85.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator85.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.3533),Vector4(-1,0,0,0.1072),Vector4(1,0,0,0.2612),Vector4(1,-1.641e-7,1.827e-8,0.1268),Vector4(-1,0,0,0.01793),Vector4(-1,0,0,0.05824),Vector4(-1,0,0,0.2398),Vector4(-1,0,0,0.35),Vector4(-1,0,0,0.3322),Vector4(0,0,1,0)]);
IS86 := TIS.Create;
connect87 := Tconnect.Create;
connect87.NodeField := 'value_changed';
connect87.ProtoField := 'r_ankle_rotation_changed';
{ METHOD .Connect }
IS86.Connect := connect87;
{ METHOD .IS }
OrientationInterpolator85.IS := IS86;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator85);
OrientationInterpolator88 := TOrientationInterpolatorNode.Create;
OrientationInterpolator88.SetKey([0,0.5,1]);
OrientationInterpolator88.SetKeyValue([Vector4(1,0,0,-0.2),Vector4(1,0,0,0),Vector4(1,0,0,-0.2)]);
IS89 := TIS.Create;
connect90 := Tconnect.Create;
connect90.NodeField := 'value_changed';
connect90.ProtoField := 'r_midtarsal_rotation_changed';
{ METHOD .Connect }
IS89.Connect := connect90;
{ METHOD .IS }
OrientationInterpolator88.IS := IS89;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator88);
OrientationInterpolator91 := TOrientationInterpolatorNode.Create;
OrientationInterpolator91.SetKey([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator91.SetKeyValue([Vector4(0,1,0,0.0826),Vector4(-0.01972,-0.5974,0.8017,0.08231),Vector4(0.009296,-0.9648,0.2627,0.1734),Vector4(-0.01238,0.9549,-0.2968,0.08732),Vector4(-0.008125,0.9691,-0.2463,0.158),Vector4(0,1,0,0.0826)]);
IS92 := TIS.Create;
connect93 := Tconnect.Create;
connect93.NodeField := 'value_changed';
connect93.ProtoField := 'vl5_rotation_changed';
{ METHOD .Connect }
IS92.Connect := connect93;
{ METHOD .IS }
OrientationInterpolator91.IS := IS92;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator91);
OrientationInterpolator94 := TOrientationInterpolatorNode.Create;
OrientationInterpolator94.SetKey([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator94.SetKeyValue([Vector4(0,-1,0,0.08642),Vector4(0,1,0,0.1825),Vector4(0,1,0,0.1505),Vector4(0,1,0,0.1053),Vector4(0,1,0,0.04391),Vector4(0,-1,0,0.03119),Vector4(0,-1,0,0.07936),Vector4(0,-1,0,0.1616),Vector4(0,-1,0,0.155),Vector4(0,-1,0,0.08642)]);
end;

procedure InitLOA1_WalkAnimationPart6;
begin

IS95 := TIS.Create;
connect96 := Tconnect.Create;
connect96.NodeField := 'value_changed';
connect96.ProtoField := 'skullbase_rotation_changed';
{ METHOD .Connect }
IS95.Connect := connect96;
{ METHOD .IS }
OrientationInterpolator94.IS := IS95;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator94);
OrientationInterpolator97 := TOrientationInterpolatorNode.Create;
OrientationInterpolator97.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator97.SetKeyValue([Vector4(1,0,0,0.1189),Vector4(-1,-5.928e-7,1.525e-7,0.1861),Vector4(1,-2.038e-7,-1.257e-7,0.3357),Vector4(1,0,0,0.1189)]);
IS98 := TIS.Create;
connect99 := Tconnect.Create;
connect99.NodeField := 'value_changed';
connect99.ProtoField := 'l_shoulder_rotation_changed';
{ METHOD .Connect }
IS98.Connect := connect99;
{ METHOD .IS }
OrientationInterpolator97.IS := IS98;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator97);
OrientationInterpolator100 := TOrientationInterpolatorNode.Create;
OrientationInterpolator100.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator100.SetKeyValue([Vector4(-1,-1.58298e-7,8.15967e-8,0.0659878),Vector4(-1,-3.28826e-8,-2.31665e-8,0.488383),Vector4(-1,0.00000306462,-0.00000311947,0.0177536),Vector4(-1,-1.58298e-7,8.15967e-8,0.0659878)]);
IS101 := TIS.Create;
connect102 := Tconnect.Create;
connect102.NodeField := 'value_changed';
connect102.ProtoField := 'l_elbow_rotation_changed';
{ METHOD .Connect }
IS101.Connect := connect102;
{ METHOD .IS }
OrientationInterpolator100.IS := IS101;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator100);
OrientationInterpolator103 := TOrientationInterpolatorNode.Create;
OrientationInterpolator103.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator103.SetKeyValue([Vector4(0.00000151276,-1,0.0000017724,0.461076),Vector4(-0.330195,-0.927451,0.175516,0.538852),Vector4(0.0327774,-0.999314,-0.0172185,0.492033),Vector4(0.00000151276,-1,0.0000017724,0.461076)]);
IS104 := TIS.Create;
connect105 := Tconnect.Create;
connect105.NodeField := 'value_changed';
connect105.ProtoField := 'l_wrist_rotation_changed';
{ METHOD .Connect }
IS104.Connect := connect105;
{ METHOD .IS }
OrientationInterpolator103.IS := IS104;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator103);
OrientationInterpolator106 := TOrientationInterpolatorNode.Create;
OrientationInterpolator106.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator106.SetKeyValue([Vector4(-1,-7.689e-7,-1.48e-7,0.09346),Vector4(1,5.004e-8,2.254e-8,0.3197),Vector4(-1,-1.104e-7,5.267e-10,0.1564),Vector4(-1,-7.689e-7,-1.48e-7,0.09346)]);
end;

procedure InitLOA1_WalkAnimationPart7;
begin

IS107 := TIS.Create;
connect108 := Tconnect.Create;
connect108.NodeField := 'value_changed';
connect108.ProtoField := 'r_shoulder_rotation_changed';
{ METHOD .Connect }
IS107.Connect := connect108;
{ METHOD .IS }
OrientationInterpolator106.IS := IS107;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator106);
OrientationInterpolator109 := TOrientationInterpolatorNode.Create;
OrientationInterpolator109.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator109.SetKeyValue([Vector4(-1,-4.45619e-8,2.70318e-8,0.411508),Vector4(-1,8.16742e-7,-1.09556e-7,0.0925011),Vector4(-1,-2.47628e-8,-7.02862e-9,0.572568),Vector4(-1,-4.45619e-8,2.70318e-8,0.411508)]);
IS110 := TIS.Create;
connect111 := Tconnect.Create;
connect111.NodeField := 'value_changed';
connect111.ProtoField := 'r_elbow_rotation_changed';
{ METHOD .Connect }
IS110.Connect := connect111;
{ METHOD .IS }
OrientationInterpolator109.IS := IS110;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator109);
OrientationInterpolator112 := TOrientationInterpolatorNode.Create;
OrientationInterpolator112.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator112.SetKeyValue([Vector4(-0.8129,0.4759,-0.3357,0.1346),Vector4(0.1533,-0.9878,0.02582,0.3902),Vector4(-0.5701,0.7604,-0.311,0.366),Vector4(-0.8129,0.4759,-0.3357,0.1346)]);
IS113 := TIS.Create;
connect114 := Tconnect.Create;
connect114.NodeField := 'value_changed';
connect114.ProtoField := 'r_wrist_rotation_changed';
{ METHOD .Connect }
IS113.Connect := connect114;
{ METHOD .IS }
OrientationInterpolator112.IS := IS113;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator112);
{ METHOD .AddGroup }
X3DPrototype47.AddChildren([Group48]);
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator58.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SACROILIAC_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SACROILIAC_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator70.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator73.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator76.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator79.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator82.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator85.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator88.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator91.EventSet_fraction);
end;

procedure InitLOA1_WalkAnimationPart8;
begin

{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator94.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator97.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator100.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator103.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator106.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator109.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator112.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype19.AddX3DPrototype([X3DPrototype47]);
{ METHOD .AddX3DPrototype }
Group17.AddX3DPrototype([X3DPrototype19]);
{ ====================================== }
{ Point to example use in case someone inspects this file }
Anchor134 := TAnchorNode.Create;
Anchor134.Description := 'InterchangableActorsViaDynamicRouting';
Anchor134.SetParameter(['target=_blank']);
Anchor134.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape135 := TShapeNode.Create;
Text136 := TTextNode.Create;
Text136.SetText(['LOA1_WalkAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
FontStyle137 := TFontStyleNode.Create;
FontStyle137.Justify := fjMIDDLE;
FontStyle137.JustifyMinor := fjMIDDLE;
FontStyle137.Size := 0.8;
{ METHOD .FontStyle }
Text136.FontStyle := FontStyle137;
{ METHOD .Geometry }
Shape135.Geometry := Text136;
Appearance138 := TAppearanceNode.Create;
Material139 := TMaterialNode.Create;
Material139.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance138.Material := Material139;
{ METHOD .Appearance }
Shape135.Appearance := Appearance138;
{ METHOD .FdChildren.Add }
Anchor134.FdChildren.Add(Shape135);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Anchor134);
{ METHOD .AddGroup }
X3D0.AddChildren([Group17]);
end;

function CreateLOA1_WalkAnimation: TX3DRootNode;
begin
InitLOA1_WalkAnimationPart0;
InitLOA1_WalkAnimationPart1;
InitLOA1_WalkAnimationPart2;
InitLOA1_WalkAnimationPart3;
InitLOA1_WalkAnimationPart4;
InitLOA1_WalkAnimationPart5;
InitLOA1_WalkAnimationPart6;
InitLOA1_WalkAnimationPart7;
InitLOA1_WalkAnimationPart8;
Result := X3D0;
end;

begin
end.
