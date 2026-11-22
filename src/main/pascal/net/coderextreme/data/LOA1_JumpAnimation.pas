unit LOA1_JumpAnimation;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateLOA1_JumpAnimation: TX3DRootNode;

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

procedure InitLOA1_JumpAnimationPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_JumpAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Cindy Ballreich cindy@ballreich.net 3Name3D';
{ METHOD .Meta }
X3D0.Meta['rights'] := '1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Scott Tufts';
{ METHOD .Meta }
X3D0.Meta['translated'] := '1 December 2001';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 May 2020';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.HAnim.org';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'LOA1_JumpAnimation.x3d';
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

procedure InitLOA1_JumpAnimationPart1;
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

procedure InitLOA1_JumpAnimationPart2;
begin

SFRotation46 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_wrist_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation46]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype19.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration20]);
X3DPrototype47 := TX3DPrototype.Create;
Group48 := TGroupNode.Create;
TimeSensor49 := TTimeSensorNode.Create;
TimeSensor49.Loop := True;
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
PositionInterpolator58.SetKey([0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1]);
end;

procedure InitLOA1_JumpAnimationPart3;
begin

PositionInterpolator58.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.01264,-0.01289),Vector3(0,-0.04712,-0.03738),Vector3(-0.0003345,-0.1049,-0.05353),Vector3(-0.0005712,-0.1892,-0.06561),Vector3(-0.0008233,-0.286,-0.06276),Vector3(-0.0009591,-0.3795,-0.05148),Vector3(-0.00106,-0.4484,-0.03656),Vector3(-0.00106,-0.4484,-0.03656),Vector3(-0.001122,-0.3269,-0.1499),Vector3(-0.0008616,-0.13,-0.06358),Vector3(-0.0005128,-0.03123,-0.05488),Vector3(0.0004779,0.053,0.02732),Vector3(0.0001728,0.4148,0.006873),Vector3(0,0.03045,0.02148),Vector3(0,-0.01299,-0.01057),Vector3(0,-0.06932,-0.01064),Vector3(0.0001365,-0.1037,-0.005059),Vector3(0.0001279,-0.07198,-0.007596),Vector3(0.000141,-0.01626,-0.004935),Vector3(0,0,0)]);
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
OrientationInterpolator61.SetKey([0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator61.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.3273),Vector4(1,0,0,0.3273),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
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
OrientationInterpolator64.SetKey([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator64.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.1892),Vector4(1,0,0,0.1892),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
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
OrientationInterpolator67.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator67.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,4.349),Vector4(1,0,0,4.349),Vector4(1,0,0,4.615),Vector4(-1,0,0,0.9136),Vector4(-1,0,0,0.3614),Vector4(0,0,1,0),Vector4(-1,0,0,0.7869),Vector4(-1,0,0,0.3918),Vector4(-1,0,0,0.5433),Vector4(0,0,1,0)]);
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
OrientationInterpolator70.SetKey([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
end;

procedure InitLOA1_JumpAnimationPart4;
begin

OrientationInterpolator70.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,2.047),Vector4(1,0,0,2.047),Vector4(0,0,1,0),Vector4(1,0,0,1.566),Vector4(1,0,0,0.5913),Vector4(1,0,0,0.9235),Vector4(0,0,1,0)]);
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
OrientationInterpolator73.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator73.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.625),Vector4(-1,0,0,0.625),Vector4(-1,0,0,0.3364),Vector4(-1,0,0,0.2742),Vector4(-1,0,0,0.05078),Vector4(1,0,0,0.2833),Vector4(1,0,0,0.6667),Vector4(1,0,0,0.2833),Vector4(-1,0,0,0.2108),Vector4(-1,0,0,0.375),Vector4(-1,0,0,0.3146),Vector4(-1,0,0,0.1174),Vector4(0,0,1,0)]);
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
OrientationInterpolator79.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator79.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,4.433),Vector4(1,0,0,4.433),Vector4(1,0,0,4.647),Vector4(-1,0,0,0.8943),Vector4(-1,0,0,0.3698),Vector4(0,0,1,0),Vector4(-1,0,0,0.4963),Vector4(-1,0,0,0.3829),Vector4(-1,0,0,0.5169),Vector4(0,0,1,0)]);
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
OrientationInterpolator82.SetKey([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
end;

procedure InitLOA1_JumpAnimationPart5;
begin

OrientationInterpolator82.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,2.005),Vector4(1,0,0,2.005),Vector4(0,0,1,0),Vector4(1,0,0,0.9507),Vector4(1,0,0,0.5845),Vector4(1,0,0,0.9054),Vector4(0,0,1,0)]);
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
OrientationInterpolator85.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator85.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.6735),Vector4(-1,0,0,0.6735),Vector4(-1,0,0,0.3527),Vector4(-1,0,0,0.3038),Vector4(-1,0,0,0.07964),Vector4(1,0,0,0.3001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.3001),Vector4(-1,0,0,0.2087),Vector4(-1,0,0,0.3756),Vector4(-1,0,0,0.3279),Vector4(-1,0,0,0.1193),Vector4(0,0,1,0)]);
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
OrientationInterpolator94.SetKey([0,0.28,0.32,0.48,0.76,1]);
end;

procedure InitLOA1_JumpAnimationPart6;
begin

OrientationInterpolator94.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5989),Vector4(-1,0,0,0.5989),Vector4(-1,0,0,0.3216),Vector4(1,0,0,0.06503),Vector4(0,0,1,0)]);
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
OrientationInterpolator97.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator97.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.9987,0.02554,0.04498,1.57),Vector4(-0.9987,0.02554,0.04498,1.57),Vector4(1,0.0004113,0.003055,4.114),Vector4(-0.8413,0.3238,0.4329,1.453),Vector4(-0.877,0.4198,0.2337,0.6009),Vector4(0,0,1,0)]);
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
OrientationInterpolator100.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator100.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.1229),Vector4(-1,0,0,0.1229),Vector4(-1,0,0,0.5976),Vector4(-1,0,0,0.3917),Vector4(0,0,1,0)]);
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
OrientationInterpolator103.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator103.SetKeyValue([Vector4(0,0,1,0),Vector4(0.0672928,0.989475,-0.128107,4.15574),Vector4(0.0672928,0.989475,-0.128107,4.15574),Vector4(0.00364942,0.999901,0.0135896,4.5822),Vector4(0,-1,0,0.655922),Vector4(-0.00050618,-0.999999,0.0012782,1.28397),Vector4(0,0,1,0)]);
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
OrientationInterpolator106.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
end;

procedure InitLOA1_JumpAnimationPart7;
begin

OrientationInterpolator106.SetKeyValue([Vector4(0,0,1,0),Vector4(0.9992,0.02042,0.03558,4.688),Vector4(0.9992,0.02042,0.03558,4.688),Vector4(0.9989,-0.04623,0.005159,4.079),Vector4(-0.8687,-0.2525,-0.4261,1.501),Vector4(-0.941,-0.2893,-0.1754,0.4788),Vector4(0,0,1,0)]);
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
OrientationInterpolator109.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator109.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.5855),Vector4(-1,0,0,0.5852),Vector4(0,0,1,0)]);
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
OrientationInterpolator112.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator112.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.00222418,0.99801,-0.0630095,1.46072),Vector4(0,1,0,0.497349),Vector4(0,0,1,0)]);
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
end;

procedure InitLOA1_JumpAnimationPart8;
begin

{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator91.EventSet_fraction);
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
Anchor134 := TAnchorNode.Create;
Anchor134.Description := 'see InterchangableActorsViaDynamicRouting scene';
Anchor134.SetParameter(['target=_blank']);
Anchor134.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape135 := TShapeNode.Create;
Text136 := TTextNode.Create;
Text136.SetText(['LOA1_JumpAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
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

function CreateLOA1_JumpAnimation: TX3DRootNode;
begin
InitLOA1_JumpAnimationPart0;
InitLOA1_JumpAnimationPart1;
InitLOA1_JumpAnimationPart2;
InitLOA1_JumpAnimationPart3;
InitLOA1_JumpAnimationPart4;
InitLOA1_JumpAnimationPart5;
InitLOA1_JumpAnimationPart6;
InitLOA1_JumpAnimationPart7;
InitLOA1_JumpAnimationPart8;
Result := X3D0;
end;

begin
end.
