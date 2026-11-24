unit LOA1_WalkAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
Group17 := TGroupNode.Create;;
WorldInfo18 := TWorldInfoNode.Create;;
WorldInfo18.Title := 'LOA1_WalkAnimation.x3d';
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

procedure InitLOA1_WalkAnimationPart1;
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

procedure InitLOA1_WalkAnimationPart2;
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
PositionInterpolator51.SetKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator51.SetKeyValue([Vector3(0,-0.00928,0),Vector3(0,-0.003858,0),Vector3(0,-0.008847,0),Vector3(0,-0.01486,0),Vector3(0,-0.02641,0),Vector3(0,-0.03934,0),Vector3(0,-0.0502,0),Vector3(0,-0.07469,0),Vector3(0,-0.02732,0),Vector3(0,-0.01608,0),Vector3(0,-0.01129,0),Vector3(0,-0.005819,0),Vector3(0,-0.002004,0),Vector3(0,-0.002579,0),Vector3(0,-0.0143,0),Vector3(0,-0.03799,0),Vector3(0,-0.05648,0),Vector3(0,-0.045,0),Vector3(0,-0.00928,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(PositionInterpolator51);
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator53.SetKey([0,1]);
OrientationInterpolator53.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator53);
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator55.SetKey([0,0.5,1]);
OrientationInterpolator55.SetKeyValue([Vector4(0,0,-1,0.1056),Vector4(0,0,1,0.09018),Vector4(0,0,-1,0.1056)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator55);
OrientationInterpolator57 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator57.SetKey([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator57.SetKeyValue([Vector4(-0.873,0.06094,0.484,0.2865),Vector4(0.9963,-0.01057,0.08481,0.2488),Vector4(0.9965,0.01591,-0.08222,0.3836),Vector4(-0.7018,-0.03223,-0.7117,0.1289),Vector4(-1,0,0,0.5518),Vector4(-0.9964,0.02231,0.0817,0.5351),Vector4(-0.9809,0.04912,0.1881,0.5204),Vector4(-0.873,0.06094,0.484,0.2865)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator57);
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator59.SetKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator59.SetKeyValue([Vector4(1,0,0,0.3226),Vector4(1,0,0,0.1556),Vector4(1,0,0,0.08678),Vector4(1,0,0,0.8751),Vector4(1,0,0,1.131),Vector4(1,0,0,0.09961),Vector4(1,0,0,0.3942),Vector4(1,0,0,0.3226)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator59);
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
end;

procedure InitLOA1_WalkAnimationPart3;
begin
;
OrientationInterpolator61.SetKey([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator61.SetKeyValue([Vector4(-1,0,0,0.06714),Vector4(-1,0,0,0.2152),Vector4(-1,0,0,0.3184),Vector4(-1,0,0,0.4717),Vector4(-1,0,0,0.2912),Vector4(1,0,0,0.1222),Vector4(-1,0,0,0.06714)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator63 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator63.SetKey([0,0.5,1]);
OrientationInterpolator63.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.2),Vector4(1,0,0,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator63);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator65.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator65.SetKeyValue([Vector4(-0.5831,0.03511,0.8116,0.1481),Vector4(-0.995,0.02296,0.09674,0.4683),Vector4(-1,0.00192,0.007964,0.4732),Vector4(-0.998,-0.0158,-0.06102,0.5079),Vector4(-0.9911,-0.03541,-0.1286,0.5419),Vector4(-0.9131,-0.06243,-0.403,0.3361),Vector4(-0.4306,-0.07962,-0.899,0.07038),Vector4(1,0,0,0.2571),Vector4(0.9891,-0.02805,0.1444,0.3879),Vector4(-0.5831,0.03511,0.8116,0.1481)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator65);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator67.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator67.SetKeyValue([Vector4(1,0,0,0.8573),Vector4(1,0,0,0.8926),Vector4(1,0,0,0.5351),Vector4(1,0,0,0.1756),Vector4(1,0,0,0.1194),Vector4(1,0,0,0.3153),Vector4(1,-1.176e-8,-4.971e-9,0.09354),Vector4(1,0,0,0.08558),Vector4(1,0,0,0.2475),Vector4(1,0,0,0.8573)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator67);
OrientationInterpolator69 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator69.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator69.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.3533),Vector4(-1,0,0,0.1072),Vector4(1,0,0,0.2612),Vector4(1,-1.641e-7,1.827e-8,0.1268),Vector4(-1,0,0,0.01793),Vector4(-1,0,0,0.05824),Vector4(-1,0,0,0.2398),Vector4(-1,0,0,0.35),Vector4(-1,0,0,0.3322),Vector4(0,0,1,0)]);
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
OrientationInterpolator75.SetKey([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator75.SetKeyValue([Vector4(0,-1,0,0.08642),Vector4(0,1,0,0.1825),Vector4(0,1,0,0.1505),Vector4(0,1,0,0.1053),Vector4(0,1,0,0.04391),Vector4(0,-1,0,0.03119),Vector4(0,-1,0,0.07936),Vector4(0,-1,0,0.1616),Vector4(0,-1,0,0.155),Vector4(0,-1,0,0.08642)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator75);
OrientationInterpolator77 := TOrientationInterpolatorNode.Create;
end;

procedure InitLOA1_WalkAnimationPart4;
begin
;
OrientationInterpolator77.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator77.SetKeyValue([Vector4(1,0,0,0.1189),Vector4(-1,-5.928e-7,1.525e-7,0.1861),Vector4(1,-2.038e-7,-1.257e-7,0.3357),Vector4(1,0,0,0.1189)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator77);
OrientationInterpolator79 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator79.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator79.SetKeyValue([Vector4(-1,-1.58298e-7,8.15967e-8,0.0659878),Vector4(-1,-3.28826e-8,-2.31665e-8,0.488383),Vector4(-1,0.00000306462,-0.00000311947,0.0177536),Vector4(-1,-1.58298e-7,8.15967e-8,0.0659878)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator79);
OrientationInterpolator81 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator81.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator81.SetKeyValue([Vector4(0.00000151276,-1,0.0000017724,0.461076),Vector4(-0.330195,-0.927451,0.175516,0.538852),Vector4(0.0327774,-0.999314,-0.0172185,0.492033),Vector4(0.00000151276,-1,0.0000017724,0.461076)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator81);
OrientationInterpolator83 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator83.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator83.SetKeyValue([Vector4(-1,-7.689e-7,-1.48e-7,0.09346),Vector4(1,5.004e-8,2.254e-8,0.3197),Vector4(-1,-1.104e-7,5.267e-10,0.1564),Vector4(-1,-7.689e-7,-1.48e-7,0.09346)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator83);
OrientationInterpolator85 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator85.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator85.SetKeyValue([Vector4(-1,-4.45619e-8,2.70318e-8,0.411508),Vector4(-1,8.16742e-7,-1.09556e-7,0.0925011),Vector4(-1,-2.47628e-8,-7.02862e-9,0.572568),Vector4(-1,-4.45619e-8,2.70318e-8,0.411508)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator85);
OrientationInterpolator87 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator87.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator87.SetKeyValue([Vector4(-0.8129,0.4759,-0.3357,0.1346),Vector4(0.1533,-0.9878,0.02582,0.3902),Vector4(-0.5701,0.7604,-0.311,0.366),Vector4(-0.8129,0.4759,-0.3357,0.1346)]);
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

procedure InitLOA1_WalkAnimationPart5;
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
Text110.SetText(['LOA1_WalkAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
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

function CreateLOA1_WalkAnimation: TX3DRootNode;
begin
InitLOA1_WalkAnimationPart0;
InitLOA1_WalkAnimationPart1;
InitLOA1_WalkAnimationPart2;
InitLOA1_WalkAnimationPart3;
InitLOA1_WalkAnimationPart4;
InitLOA1_WalkAnimationPart5;
Result := X3D0;
end;

begin
end.
