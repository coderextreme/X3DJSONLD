unit LOA1_SwimmingFlutterKickAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
PositionInterpolator49: TPositionInterpolatorNode;
OrientationInterpolator51: TOrientationInterpolatorNode;
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
Viewpoint97: TViewpointNode;
Anchor98: TAnchorNode;
Shape99: TShapeNode;
Text100: TTextNode;
FontStyle101: TFontStyleNode;
Appearance102: TAppearanceNode;
Material103: TMaterialNode;

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
Group15 := TGroupNode.Create;;
WorldInfo16 := TWorldInfoNode.Create;;
WorldInfo16.Title := 'LOA1_SwimmingFlutterKickAnimation.x3d';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(WorldInfo16);
X3DPrototype17 := TX3DPrototype.Create;;
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);;
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
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart1;
begin

SFTime23.Value := '-1';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration18.AddSFTime([SFTime23]);
SFFloat24 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'fraction_changed');
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat24]);
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
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart2;
begin

SFRotation43 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'r_elbow_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation43]);
SFRotation44 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'r_wrist_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation44]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype17.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration18]);
X3DPrototype45 := TX3DPrototype.Create;;
Group46 := TGroupNode.Create;;
TimeSensor47 := TTimeSensorNode.Create;;
TimeSensor47.Loop := True;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(TimeSensor47);
PositionInterpolator49 := TPositionInterpolatorNode.Create;;
PositionInterpolator49.SetKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator49.SetKeyValue([Vector3(0,-0.00928,0),Vector3(0,-0.003858,0),Vector3(0,-0.008847,0),Vector3(0,-0.01486,0),Vector3(0,-0.02641,0),Vector3(0,-0.03934,0),Vector3(0,-0.0502,0),Vector3(0,-0.07469,0),Vector3(0,-0.02732,0),Vector3(0,-0.01608,0),Vector3(0,-0.01129,0),Vector3(0,-0.005819,0),Vector3(0,-0.002004,0),Vector3(0,-0.002579,0),Vector3(0,-0.0143,0),Vector3(0,-0.03799,0),Vector3(0,-0.05648,0),Vector3(0,-0.045,0),Vector3(0,-0.00928,0)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(PositionInterpolator49);
OrientationInterpolator51 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator51.SetKey([0,1]);
OrientationInterpolator51.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator51);
{ no SACROILIAC_ANIMATOR }
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator53.SetKey([0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator53.SetKeyValue([Vector4(-0.873,0.06094,0.484,0.2865),Vector4(0.9963,-0.01057,0.08481,0.2488),Vector4(0.9965,0.01591,-0.08222,0.3836),Vector4(-1,0,0,0.5518),Vector4(-0.9964,0.02231,0.0817,0.5351),Vector4(-0.9809,0.04912,0.1881,0.5204),Vector4(-0.873,0.06094,0.484,0.2865)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator53);
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator55.SetKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator55.SetKeyValue([Vector4(1,0,0,0.3226),Vector4(1,0,0,0.1556),Vector4(1,0,0,0.08678),Vector4(1,0,0,0.8751),Vector4(1,0,0,1.131),Vector4(1,0,0,0.09961),Vector4(1,0,0,0.3942),Vector4(1,0,0,0.3226)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator55);
OrientationInterpolator57 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator57.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator57.SetKeyValue([Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.6001),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.6001)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator57);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;;
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart3;
begin

OrientationInterpolator59.SetKey([0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator59.SetKeyValue([Vector4(-0.5831,0.03511,0.8116,0.1481),Vector4(-0.995,0.02296,0.09674,0.4683),Vector4(-1,0.00192,0.007964,0.4732),Vector4(-0.998,-0.0158,-0.06102,0.5079),Vector4(-0.9131,-0.06243,-0.403,0.3361),Vector4(1,0,0,0.2571),Vector4(0.9891,-0.02805,0.1444,0.3879),Vector4(-0.5831,0.03511,0.8116,0.1481)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator59);
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator61.SetKey([0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator61.SetKeyValue([Vector4(1,0,0,0.8573),Vector4(1,0,0,0.5351),Vector4(1,0,0,0.1756),Vector4(1,0,0,0.1194),Vector4(1,0,0,0.3153),Vector4(1,0,0,0.09354),Vector4(1,0,0,0.08558),Vector4(1,0,0,0.8573)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator63 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator63.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator63.SetKeyValue([Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8509),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8509),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8001),Vector4(1,0,0,0.8509),Vector4(1,0,0,0.86001)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator63);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator65.SetKey([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator65.SetKeyValue([Vector4(0,1,0,0.0826),Vector4(-0.01972,-0.5974,0.8017,0.08231),Vector4(0.009296,-0.9648,0.2627,0.1734),Vector4(-0.01238,0.9549,-0.2968,0.08732),Vector4(-0.008125,0.9691,-0.2463,0.158),Vector4(0,1,0,0.0826)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator65);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator67.SetKey([0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator67.SetKeyValue([Vector4(-1,0,0,1),Vector4(-1,0,0,1),Vector4(-1,0,0,0.999),Vector4(-1,0,0,0.99),Vector4(-1,0,0,0.99),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.9),Vector4(-1,0,0,1)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator67);
OrientationInterpolator69 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator69.SetKey([0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator69.SetKeyValue([Vector4(0,0,1,0.1),Vector4(0,0,1,0.2),Vector4(0,0,1,0.2),Vector4(0.86,0.25,0.42,0.5),Vector4(0.86,0.25,0.42,0.8),Vector4(0.86,0.25,0.42,0.4),Vector4(0.86,0.25,0.42,0.2)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator69);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator71.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator71.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.1229),Vector4(-1,0,0,0.1229),Vector4(-1,0,0,0.5976),Vector4(-1,0,0,0.3917),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator71);
OrientationInterpolator73 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator73.SetKey([0,0.32,0.64,0.88,1]);
OrientationInterpolator73.SetKeyValue([Vector4(0,0,1,0),Vector4(0.067,0.98,-0.128,4.15),Vector4(0.067,0.98,-0.128,4.15),Vector4(0.067,0.98,-0.128,4.15),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator73);
OrientationInterpolator75 := TOrientationInterpolatorNode.Create;;
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart4;
begin

OrientationInterpolator75.SetKey([0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator75.SetKeyValue([Vector4(0,0,1,0),Vector4(0.9992,0.02042,0.03558,7.2),Vector4(0.9989,-0.04623,0.005159,4.079),Vector4(-0.8687,-0.2525,-0.4261,1.501),Vector4(-0.941,-0.2893,-0.1754,0.4788),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator75);
OrientationInterpolator77 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator77.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator77.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.5855),Vector4(-1,0,0,0.5852),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator77);
OrientationInterpolator79 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator79.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator79.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.00222418,0.99801,-0.0630095,1.46072),Vector4(0,1,0,0.497349),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(OrientationInterpolator79);
{ METHOD .AddGroup }
X3DPrototype45.AddChildren([Group46]);
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, PositionInterpolator49.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator51.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator65.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator53.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator55.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator57.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator59.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator63.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator69.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator73.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator75.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator77.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype45.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator79.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype17.AddX3DPrototype([X3DPrototype45]);
{ METHOD .AddX3DPrototype }
Group15.AddX3DPrototype([X3DPrototype17]);
Viewpoint97 := TViewpointNode.Create;;
Viewpoint97.Description := 'LOA1_SwimmingFlutterKickAnimation scene';
Viewpoint97.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint97);
Anchor98 := TAnchorNode.Create;;
Anchor98.Description := 'Nancy Diving';
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart5;
begin

Anchor98.SetParameter(['target=_blank']);
Anchor98.SetUrl(['NancyDiving.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d','NancyDiving.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl']);
Shape99 := TShapeNode.Create;;
Text100 := TTextNode.Create;;
Text100.SetText(['LOA1_SwimmingFlutterKickAnimation.x3d','defines a prototype','for animating a humanoid.','Click text to see example.']);
FontStyle101 := TFontStyleNode.Create;;
FontStyle101.Justify := fjMIDDLE;
FontStyle101.JustifyMinor := fjMIDDLE;
FontStyle101.Size := 0.8;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text100.FontStyle := FontStyle101;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape99.Geometry := Text100;
Appearance102 := TAppearanceNode.Create;;
Material103 := TMaterialNode.Create;;
Material103.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance102.Material := Material103;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape99.Appearance := Appearance102;
{ METHOD .FdChildren.Add }
Anchor98.FdChildren.Add(Shape99);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Anchor98);
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
Result := X3D0;
end;

begin
end.
