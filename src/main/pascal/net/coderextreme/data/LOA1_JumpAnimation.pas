unit LOA1_JumpAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
PositionInterpolator51: TPositionInterpolatorNode;
OrientationInterpolator53: TOrientationInterpolatorNode;
OrientationInterpolator55: TOrientationInterpolatorNode;
OrientationInterpolator57: TOrientationInterpolatorNode;
OrientationInterpolator59: TOrientationInterpolatorNode;
OrientationInterpolator61: TOrientationInterpolatorNode;
OrientationInterpolator63: TOrientationInterpolatorNode;
OrientationInterpolator65: TOrientationInterpolatorNode;
OrientationInterpolator67: TOrientationInterpolatorNode;
OrientationInterpolator69: TOrientationInterpolatorNode;
OrientationInterpolator71: TOrientationInterpolatorNode;
OrientationInterpolator73: TOrientationInterpolatorNode;
OrientationInterpolator75: TOrientationInterpolatorNode;
OrientationInterpolator77: TOrientationInterpolatorNode;
OrientationInterpolator79: TOrientationInterpolatorNode;
OrientationInterpolator81: TOrientationInterpolatorNode;
OrientationInterpolator83: TOrientationInterpolatorNode;
OrientationInterpolator85: TOrientationInterpolatorNode;
OrientationInterpolator87: TOrientationInterpolatorNode;
Anchor108: TAnchorNode;
Shape109: TShapeNode;
Text110: TTextNode;
FontStyle111: TFontStyleNode;
Appearance112: TAppearanceNode;
Material113: TMaterialNode;

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
Group17 := TGroupNode.Create;;
WorldInfo18 := TWorldInfoNode.Create;;
WorldInfo18.Title := 'LOA1_JumpAnimation.x3d';
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(WorldInfo18);
X3DPrototype19 := TX3DPrototype.Create;;
X3DInterfaceDeclaration20 := TX3DInterfaceDeclaration.Create(nil);;
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
end;

procedure InitLOA1_JumpAnimationPart1;
begin

{ METHOD .AddSFTime }
X3DInterfaceDeclaration20.AddSFTime([SFTime24]);
SFTime25 := TSFTime.CreateUndefined(X3DInterfaceDeclaration20, false, 'stopTime');
SFTime25.Value := '-1';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration20.AddSFTime([SFTime25]);
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
end;

procedure InitLOA1_JumpAnimationPart2;
begin

SFRotation44 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_shoulder_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation44]);
SFRotation45 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_elbow_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation45]);
SFRotation46 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration20, false, 'r_wrist_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration20.AddSFRotation([SFRotation46]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype19.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration20]);
X3DPrototype47 := TX3DPrototype.Create;;
Group48 := TGroupNode.Create;;
TimeSensor49 := TTimeSensorNode.Create;;
TimeSensor49.Loop := True;
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(TimeSensor49);
PositionInterpolator51 := TPositionInterpolatorNode.Create;;
PositionInterpolator51.SetKey([0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator51.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.01264,-0.01289),Vector3(0,-0.04712,-0.03738),Vector3(-0.0003345,-0.1049,-0.05353),Vector3(-0.0005712,-0.1892,-0.06561),Vector3(-0.0008233,-0.286,-0.06276),Vector3(-0.0009591,-0.3795,-0.05148),Vector3(-0.00106,-0.4484,-0.03656),Vector3(-0.00106,-0.4484,-0.03656),Vector3(-0.001122,-0.3269,-0.1499),Vector3(-0.0008616,-0.13,-0.06358),Vector3(-0.0005128,-0.03123,-0.05488),Vector3(0.0004779,0.053,0.02732),Vector3(0.0001728,0.4148,0.006873),Vector3(0,0.03045,0.02148),Vector3(0,-0.01299,-0.01057),Vector3(0,-0.06932,-0.01064),Vector3(0.0001365,-0.1037,-0.005059),Vector3(0.0001279,-0.07198,-0.007596),Vector3(0.000141,-0.01626,-0.004935),Vector3(0,0,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(PositionInterpolator51);
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator53.SetKey([0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator53.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.3273),Vector4(1,0,0,0.3273),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator53);
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator55.SetKey([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator55.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.1892),Vector4(1,0,0,0.1892),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator55);
OrientationInterpolator57 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator57.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator57.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,4.349),Vector4(1,0,0,4.349),Vector4(1,0,0,4.615),Vector4(-1,0,0,0.9136),Vector4(-1,0,0,0.3614),Vector4(0,0,1,0),Vector4(-1,0,0,0.7869),Vector4(-1,0,0,0.3918),Vector4(-1,0,0,0.5433),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator57);
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator59.SetKey([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator59.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,2.047),Vector4(1,0,0,2.047),Vector4(0,0,1,0),Vector4(1,0,0,1.566),Vector4(1,0,0,0.5913),Vector4(1,0,0,0.9235),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator59);
end;

procedure InitLOA1_JumpAnimationPart3;
begin

OrientationInterpolator61 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator61.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator61.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.625),Vector4(-1,0,0,0.625),Vector4(-1,0,0,0.3364),Vector4(-1,0,0,0.2742),Vector4(-1,0,0,0.05078),Vector4(1,0,0,0.2833),Vector4(1,0,0,0.6667),Vector4(1,0,0,0.2833),Vector4(-1,0,0,0.2108),Vector4(-1,0,0,0.375),Vector4(-1,0,0,0.3146),Vector4(-1,0,0,0.1174),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator63 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator63.SetKey([0,0.5,1]);
OrientationInterpolator63.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.2),Vector4(1,0,0,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator63);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator65.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator65.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,4.433),Vector4(1,0,0,4.433),Vector4(1,0,0,4.647),Vector4(-1,0,0,0.8943),Vector4(-1,0,0,0.3698),Vector4(0,0,1,0),Vector4(-1,0,0,0.4963),Vector4(-1,0,0,0.3829),Vector4(-1,0,0,0.5169),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator65);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator67.SetKey([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator67.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,2.005),Vector4(1,0,0,2.005),Vector4(0,0,1,0),Vector4(1,0,0,0.9507),Vector4(1,0,0,0.5845),Vector4(1,0,0,0.9054),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator67);
OrientationInterpolator69 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator69.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator69.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.6735),Vector4(-1,0,0,0.6735),Vector4(-1,0,0,0.3527),Vector4(-1,0,0,0.3038),Vector4(-1,0,0,0.07964),Vector4(1,0,0,0.3001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.3001),Vector4(-1,0,0,0.2087),Vector4(-1,0,0,0.3756),Vector4(-1,0,0,0.3279),Vector4(-1,0,0,0.1193),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator69);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator71.SetKey([0,0.5,1]);
OrientationInterpolator71.SetKeyValue([Vector4(1,0,0,-0.2),Vector4(1,0,0,0),Vector4(1,0,0,-0.2)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator71);
OrientationInterpolator73 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator73.SetKey([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator73.SetKeyValue([Vector4(0,1,0,0.0826),Vector4(-0.01972,-0.5974,0.8017,0.08231),Vector4(0.009296,-0.9648,0.2627,0.1734),Vector4(-0.01238,0.9549,-0.2968,0.08732),Vector4(-0.008125,0.9691,-0.2463,0.158),Vector4(0,1,0,0.0826)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator73);
OrientationInterpolator75 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator75.SetKey([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator75.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5989),Vector4(-1,0,0,0.5989),Vector4(-1,0,0,0.3216),Vector4(1,0,0,0.06503),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator75);
end;

procedure InitLOA1_JumpAnimationPart4;
begin

OrientationInterpolator77 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator77.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator77.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.9987,0.02554,0.04498,1.57),Vector4(-0.9987,0.02554,0.04498,1.57),Vector4(1,0.0004113,0.003055,4.114),Vector4(-0.8413,0.3238,0.4329,1.453),Vector4(-0.877,0.4198,0.2337,0.6009),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator77);
OrientationInterpolator79 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator79.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator79.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.1229),Vector4(-1,0,0,0.1229),Vector4(-1,0,0,0.5976),Vector4(-1,0,0,0.3917),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator79);
OrientationInterpolator81 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator81.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator81.SetKeyValue([Vector4(0,0,1,0),Vector4(0.0672928,0.989475,-0.128107,4.15574),Vector4(0.0672928,0.989475,-0.128107,4.15574),Vector4(0.00364942,0.999901,0.0135896,4.5822),Vector4(0,-1,0,0.655922),Vector4(-0.00050618,-0.999999,0.0012782,1.28397),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator81);
OrientationInterpolator83 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator83.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator83.SetKeyValue([Vector4(0,0,1,0),Vector4(0.9992,0.02042,0.03558,4.688),Vector4(0.9992,0.02042,0.03558,4.688),Vector4(0.9989,-0.04623,0.005159,4.079),Vector4(-0.8687,-0.2525,-0.4261,1.501),Vector4(-0.941,-0.2893,-0.1754,0.4788),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator83);
OrientationInterpolator85 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator85.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator85.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.5855),Vector4(-1,0,0,0.5852),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator85);
OrientationInterpolator87 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator87.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator87.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.00222418,0.99801,-0.0630095,1.46072),Vector4(0,1,0,0.497349),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator87);
{ METHOD .AddGroup }
X3DPrototype47.AddChildren([Group48]);
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator51.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator53.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SACROILIAC_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SACROILIAC_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator55.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator57.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator59.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator63.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator65.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
end;

procedure InitLOA1_JumpAnimationPart5;
begin

{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator69.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator73.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator75.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator77.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator79.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator81.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator83.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator85.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator87.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype19.AddX3DPrototype([X3DPrototype47]);
{ METHOD .AddX3DPrototype }
Group17.AddX3DPrototype([X3DPrototype19]);
Anchor108 := TAnchorNode.Create;;
Anchor108.Description := 'see InterchangableActorsViaDynamicRouting scene';
Anchor108.SetParameter(['target=_blank']);
Anchor108.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape109 := TShapeNode.Create;;
Text110 := TTextNode.Create;;
Text110.SetText(['LOA1_JumpAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
FontStyle111 := TFontStyleNode.Create;;
FontStyle111.Justify := fjMIDDLE;
FontStyle111.JustifyMinor := fjMIDDLE;
FontStyle111.Size := 0.8;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text110.FontStyle := FontStyle111;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape109.Geometry := Text110;
Appearance112 := TAppearanceNode.Create;;
Material113 := TMaterialNode.Create;;
Material113.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance112.Material := Material113;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape109.Appearance := Appearance112;
{ METHOD .FdChildren.Add }
Anchor108.FdChildren.Add(Shape109);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Anchor108);
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
Result := X3D0;
end;

begin
end.
