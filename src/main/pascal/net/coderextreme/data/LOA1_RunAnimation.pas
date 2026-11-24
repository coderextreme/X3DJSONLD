unit LOA1_RunAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateLOA1_RunAnimation: TX3DRootNode;

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

procedure InitLOA1_RunAnimationPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_RunAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Cindy Ballreich cindy@ballreich.net 3Name3D';
{ METHOD .Meta }
X3D0.Meta['rights'] := '1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Ozan APAYDIN';
{ METHOD .Meta }
X3D0.Meta['translated'] := '30 October 2001';
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
X3D0.Meta['subject'] := 'Nancy Run Animation HAnim 2001';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;;
WorldInfo18 := TWorldInfoNode.Create;;
WorldInfo18.Title := 'LOA1_RunAnimation.x3d';
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(WorldInfo18);
X3DPrototype19 := TX3DPrototype.Create;;
X3DInterfaceDeclaration20 := TX3DInterfaceDeclaration.Create(nil);;
SFTime21 := TSFTime.CreateUndefined(X3DInterfaceDeclaration20, false, 'cycleInterval');
SFTime21.Value := '1';
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

procedure InitLOA1_RunAnimationPart1;
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

procedure InitLOA1_RunAnimationPart2;
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
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(TimeSensor49);
PositionInterpolator51 := TPositionInterpolatorNode.Create;;
PositionInterpolator51.SetKey([0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1]);
PositionInterpolator51.SetKeyValue([Vector3(0,-0.0351,0),Vector3(0,-0.0351,0),Vector3(0,-0.04087,0),Vector3(0,-0.04886,0),Vector3(0,-0.04051,0),Vector3(0,-0.03666,0),Vector3(0,-0.03666,0),Vector3(0,-0.0351,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(PositionInterpolator51);
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator53.SetKey([0,1]);
OrientationInterpolator53.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator53);
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator55.SetKey([0,1]);
OrientationInterpolator55.SetKeyValue([Vector4(0.9969,-0.05444,0.05596,0.07687),Vector4(0.9969,-0.05444,0.05596,0.07687)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator55);
OrientationInterpolator57 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator57.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator57.SetKeyValue([Vector4(-0.9986,0.03354,0.04001,1.212),Vector4(-0.9889,0.1328,0.06696,0.4025),Vector4(0.9894,0.1453,0.009351,0.4114),Vector4(-0.9963,0.07032,0.05003,0.7035),Vector4(-0.9986,0.03354,0.04001,1.212)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator57);
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator59.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator59.SetKeyValue([Vector4(1,0,0,1.108),Vector4(1,0,0,0.4265),Vector4(1,0,0,0.7052),Vector4(1,0,0,2.179),Vector4(1,0,0,1.108)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator59);
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
end;

procedure InitLOA1_RunAnimationPart3;
begin
;
OrientationInterpolator61.SetKey([0,0.2182,0.3091,0.4909,1]);
OrientationInterpolator61.SetKeyValue([Vector4(1,0,0,0.03543),Vector4(-1,0,0,0.1037),Vector4(-1,0,0,0.4328),Vector4(1,0,0,0.1929),Vector4(1,0,0,0.03543)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator63 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator63.SetKey([0,0.5,1]);
OrientationInterpolator63.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.2),Vector4(1,0,0,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator63);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator65.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator65.SetKeyValue([Vector4(0.9999,0.00293,-0.00989,0.402),Vector4(-1,0.004977,-0.00497,0.5943),Vector4(-1,0.003265,-0.001752,1.178),Vector4(-0.9999,0.00815,-0.01093,0.3031),Vector4(0.9999,0.00293,-0.00989,0.402)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator65);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator67.SetKey([0,0.03636,0.2182,0.4909,0.7455,1]);
OrientationInterpolator67.SetKeyValue([Vector4(1,0,0,0.7004),Vector4(1,0,0,1.011),Vector4(1,0,0,1.892),Vector4(1,0,0,1.188),Vector4(1,0,0,0.3964),Vector4(1,0,0,0.7004)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator67);
OrientationInterpolator69 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator69.SetKey([0,0.4909,0.7091,0.8,0.8182,1]);
OrientationInterpolator69.SetKeyValue([Vector4(1,0,0,0.2323),Vector4(-1,0,0,0.07843),Vector4(-1,0,0,0.09676),Vector4(-1,0,0,0.3274),Vector4(-1,0,0,0.3278),Vector4(1,0,0,0.2323)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator69);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator71.SetKey([0,0.5,1]);
OrientationInterpolator71.SetKeyValue([Vector4(1,0,0,-0.2),Vector4(1,0,0,0),Vector4(1,0,0,-0.2)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator71);
OrientationInterpolator73 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator73.SetKey([0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator73.SetKeyValue([Vector4(0.7651,0.6382,0.08586,0.2712),Vector4(0.9999,0.002845,-0.01547,0.3756),Vector4(0.7459,-0.6505,-0.1432,0.2416),Vector4(0.9984,0.05536,-0.01154,0.3488),Vector4(0.7651,0.6382,0.08586,0.2712)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator73);
OrientationInterpolator75 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator75.SetKey([0,0.4909,1]);
OrientationInterpolator75.SetKeyValue([Vector4(0.6517,-0.7559,0.06211,0.2508),Vector4(0.6467,0.7527,-0.1238,0.2344),Vector4(0.6517,-0.7559,0.06211,0.2508)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator75);
OrientationInterpolator77 := TOrientationInterpolatorNode.Create;
end;

procedure InitLOA1_RunAnimationPart4;
begin
;
OrientationInterpolator77.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator77.SetKeyValue([Vector4(0.9907,-0.07264,0.115,1.135),Vector4(0.9291,-0.1222,0.349,0.1695),Vector4(-0.9892,0.1364,-0.05394,0.5112),Vector4(0.9942,-0.0002052,0.1073,0.4975),Vector4(0.9907,-0.07264,0.115,1.135)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator77);
OrientationInterpolator79 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator79.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator79.SetKeyValue([Vector4(0.9985,0.03887,0.03802,4.689),Vector4(-0.965,-0.1889,-0.1821,1.415),Vector4(0.9758,0.1563,0.1529,4.666),Vector4(-0.9956,-0.0936,0.009826,1.126),Vector4(0.9985,0.03887,0.03802,4.689)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator79);
OrientationInterpolator81 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator81.SetKey([0,1]);
OrientationInterpolator81.SetKeyValue([Vector4(-0.0240995,-0.999682,0.00741506,0.120409),Vector4(-0.0240995,-0.999682,0.00741506,0.120409)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator81);
OrientationInterpolator83 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator83.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator83.SetKeyValue([Vector4(-1,0,0,0.6979),Vector4(0.9094,0.2062,-0.3613,0.4157),Vector4(0.9637,0.1537,-0.2185,1.353),Vector4(0.4864,0.08841,-0.8693,0.1716),Vector4(-1,0,0,0.6979)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator83);
OrientationInterpolator85 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator85.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator85.SetKeyValue([Vector4(0.9353,-0.2978,-0.191,4.222),Vector4(-0.9362,0.2924,-0.1952,1.05),Vector4(0.9941,-0.09719,-0.04725,4.512),Vector4(-0.9594,0.2653,0.09579,1.525),Vector4(0.9353,-0.2978,-0.191,4.222)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator85);
OrientationInterpolator87 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator87.SetKey([0,1]);
OrientationInterpolator87.SetKeyValue([Vector4(-0.917742,-0.237244,-0.318536,0.214273),Vector4(-0.917742,-0.237244,-0.318536,0.214273)]);
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
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator69.EventSet_fraction);
end;

procedure InitLOA1_RunAnimationPart5;
begin

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
{ ====================================== }
{ Point to example use in case someone inspects this file }
Anchor108 := TAnchorNode.Create;;
Anchor108.Description := 'InterchangableActorsViaDynamicRouting';
Anchor108.SetParameter(['target=_blank']);
Anchor108.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape109 := TShapeNode.Create;;
Text110 := TTextNode.Create;;
Text110.SetText(['LOA1_RunAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
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

function CreateLOA1_RunAnimation: TX3DRootNode;
begin
InitLOA1_RunAnimationPart0;
InitLOA1_RunAnimationPart1;
InitLOA1_RunAnimationPart2;
InitLOA1_RunAnimationPart3;
InitLOA1_RunAnimationPart4;
InitLOA1_RunAnimationPart5;
Result := X3D0;
end;

begin
end.
