unit LOA1_KneelAnimation;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateLOA1_KneelAnimation: TX3DRootNode;

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
Anchor110: TAnchorNode;
Shape111: TShapeNode;
Text112: TTextNode;
FontStyle113: TFontStyleNode;
Appearance114: TAppearanceNode;
Material115: TMaterialNode;

procedure InitLOA1_KneelAnimationPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_KneelAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Tom Miller';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Curt Blais';
{ METHOD .Meta }
X3D0.Meta['translated'] := '1 December 2001';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 May 2020';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.HAnim.org';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'Nancy kneel Animation HAnim 2001';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'LOA1_KneelAnimation.x3d';
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
SFBool23.Value := 'false';
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

procedure InitLOA1_KneelAnimationPart1;
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

procedure InitLOA1_KneelAnimationPart2;
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
PositionInterpolator58.SetKey([0,0.3125,0.625,1]);
PositionInterpolator58.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.049999,0),Vector3(0,-0.195,0),Vector3(0,-0.439997,0)]);
end;

procedure InitLOA1_KneelAnimationPart3;
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
{ no SACROILIAC_ANIMATOR }
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator64.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.619393),Vector4(-1,0,0,1.069302),Vector4(-1,0,0,1.937315)]);
IS65 := TIS.Create;
connect66 := Tconnect.Create;
connect66.NodeField := 'value_changed';
connect66.ProtoField := 'l_hip_rotation_changed';
{ METHOD .Connect }
IS65.Connect := connect66;
{ METHOD .IS }
OrientationInterpolator64.IS := IS65;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator64);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;
OrientationInterpolator67.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator67.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.615228),Vector4(1,0,0,0.984524),Vector4(1,0,0,2.076941)]);
IS68 := TIS.Create;
connect69 := Tconnect.Create;
connect69.NodeField := 'value_changed';
connect69.ProtoField := 'l_knee_rotation_changed';
{ METHOD .Connect }
IS68.Connect := connect69;
{ METHOD .IS }
OrientationInterpolator67.IS := IS68;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator67);
OrientationInterpolator70 := TOrientationInterpolatorNode.Create;
OrientationInterpolator70.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator70.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.017453),Vector4(-1,0,0,0.069812),Vector4(1,0,0,0.261799)]);
end;

procedure InitLOA1_KneelAnimationPart4;
begin

IS71 := TIS.Create;
connect72 := Tconnect.Create;
connect72.NodeField := 'value_changed';
connect72.ProtoField := 'l_ankle_rotation_changed';
{ METHOD .Connect }
IS71.Connect := connect72;
{ METHOD .IS }
OrientationInterpolator70.IS := IS71;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator70);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator73 := TOrientationInterpolatorNode.Create;
OrientationInterpolator73.SetKey([0,0.3125,1]);
OrientationInterpolator73.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.523598),Vector4(-1,0,0,0.157079)]);
IS74 := TIS.Create;
connect75 := Tconnect.Create;
connect75.NodeField := 'value_changed';
connect75.ProtoField := 'r_hip_rotation_changed';
{ METHOD .Connect }
IS74.Connect := connect75;
{ METHOD .IS }
OrientationInterpolator73.IS := IS74;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator73);
OrientationInterpolator76 := TOrientationInterpolatorNode.Create;
OrientationInterpolator76.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator76.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.349065),Vector4(1,0,0,1.023397),Vector4(0.999934,0.008043,0.008185,1.727938)]);
IS77 := TIS.Create;
connect78 := Tconnect.Create;
connect78.NodeField := 'value_changed';
connect78.ProtoField := 'r_knee_rotation_changed';
{ METHOD .Connect }
IS77.Connect := connect78;
{ METHOD .IS }
OrientationInterpolator76.IS := IS77;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator76);
OrientationInterpolator79 := TOrientationInterpolatorNode.Create;
OrientationInterpolator79.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator79.SetKeyValue([Vector4(1,0,0,0),Vector4(-0.991692,-0.072372,0.106338,0.205053),Vector4(-0.981083,-0.103267,0.163741,0.272231),Vector4(-1,0,0,0.349065)]);
IS80 := TIS.Create;
connect81 := Tconnect.Create;
connect81.NodeField := 'value_changed';
connect81.ProtoField := 'r_ankle_rotation_changed';
{ METHOD .Connect }
IS80.Connect := connect81;
{ METHOD .IS }
OrientationInterpolator79.IS := IS80;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator79);
{ no R_MIDTARSAL_ANIMATOR }
OrientationInterpolator82 := TOrientationInterpolatorNode.Create;
OrientationInterpolator82.SetKey([0,1]);
OrientationInterpolator82.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.174533)]);
end;

procedure InitLOA1_KneelAnimationPart5;
begin

IS83 := TIS.Create;
connect84 := Tconnect.Create;
connect84.NodeField := 'value_changed';
connect84.ProtoField := 'vl5_rotation_changed';
{ METHOD .Connect }
IS83.Connect := connect84;
{ METHOD .IS }
OrientationInterpolator82.IS := IS83;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator82);
{ no SKULLBASE_ANIMATOR }
OrientationInterpolator85 := TOrientationInterpolatorNode.Create;
OrientationInterpolator85.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator85.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.279252),Vector4(-1,0,0,0.506145),Vector4(-1,0,0,0.191986)]);
IS86 := TIS.Create;
connect87 := Tconnect.Create;
connect87.NodeField := 'value_changed';
connect87.ProtoField := 'l_shoulder_rotation_changed';
{ METHOD .Connect }
IS86.Connect := connect87;
{ METHOD .IS }
OrientationInterpolator85.IS := IS86;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator85);
OrientationInterpolator88 := TOrientationInterpolatorNode.Create;
OrientationInterpolator88.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator88.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.052359),Vector4(-1,0,0,0.296706),Vector4(-1,0,0,1.431169)]);
IS89 := TIS.Create;
connect90 := Tconnect.Create;
connect90.NodeField := 'value_changed';
connect90.ProtoField := 'l_elbow_rotation_changed';
{ METHOD .Connect }
IS89.Connect := connect90;
{ METHOD .IS }
OrientationInterpolator88.IS := IS89;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator88);
{ no L_WRIST_ANIMATOR }
OrientationInterpolator91 := TOrientationInterpolatorNode.Create;
OrientationInterpolator91.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator91.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.104719),Vector4(-1,0,0,0.157079),Vector4(1,0,0,0.314159)]);
IS92 := TIS.Create;
connect93 := Tconnect.Create;
connect93.NodeField := 'value_changed';
connect93.ProtoField := 'r_shoulder_rotation_changed';
{ METHOD .Connect }
IS92.Connect := connect93;
{ METHOD .IS }
OrientationInterpolator91.IS := IS92;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator91);
OrientationInterpolator94 := TOrientationInterpolatorNode.Create;
OrientationInterpolator94.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator94.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.837757),Vector4(-1,0,0,1.239183),Vector4(-1,0,0,1.500983)]);
end;

procedure InitLOA1_KneelAnimationPart6;
begin

IS95 := TIS.Create;
connect96 := Tconnect.Create;
connect96.NodeField := 'value_changed';
connect96.ProtoField := 'r_elbow_rotation_changed';
{ METHOD .Connect }
IS95.Connect := connect96;
{ METHOD .IS }
OrientationInterpolator94.IS := IS95;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator94);
{ no R_WRIST_ANIMATOR }
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
{ Original "TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator70.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator73.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator76.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator79.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator82.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator85.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator88.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator91.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator94.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype19.AddX3DPrototype([X3DPrototype47]);
{ METHOD .AddX3DPrototype }
Group17.AddX3DPrototype([X3DPrototype19]);
Anchor110 := TAnchorNode.Create;
Anchor110.Description := 'InterchangableActorsViaDynamicRouting';
Anchor110.SetParameter(['target=_blank']);
Anchor110.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape111 := TShapeNode.Create;
Text112 := TTextNode.Create;
Text112.SetText(['LOA1_KneelAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
FontStyle113 := TFontStyleNode.Create;
FontStyle113.Justify := fjMIDDLE;
FontStyle113.JustifyMinor := fjMIDDLE;
FontStyle113.Size := 0.8;
{ METHOD .FontStyle }
Text112.FontStyle := FontStyle113;
{ METHOD .Geometry }
Shape111.Geometry := Text112;
Appearance114 := TAppearanceNode.Create;
Material115 := TMaterialNode.Create;
Material115.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance114.Material := Material115;
end;

procedure InitLOA1_KneelAnimationPart7;
begin

{ METHOD .Appearance }
Shape111.Appearance := Appearance114;
{ METHOD .FdChildren.Add }
Anchor110.FdChildren.Add(Shape111);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Anchor110);
{ METHOD .AddGroup }
X3D0.AddChildren([Group17]);
end;

function CreateLOA1_KneelAnimation: TX3DRootNode;
begin
InitLOA1_KneelAnimationPart0;
InitLOA1_KneelAnimationPart1;
InitLOA1_KneelAnimationPart2;
InitLOA1_KneelAnimationPart3;
InitLOA1_KneelAnimationPart4;
InitLOA1_KneelAnimationPart5;
InitLOA1_KneelAnimationPart6;
InitLOA1_KneelAnimationPart7;
Result := X3D0;
end;

begin
end.
