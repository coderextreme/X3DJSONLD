unit LOA1_KneelAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
Anchor90: TAnchorNode;
Shape91: TShapeNode;
Text92: TTextNode;
FontStyle93: TFontStyleNode;
Appearance94: TAppearanceNode;
Material95: TMaterialNode;

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
Group17 := TGroupNode.Create;;
WorldInfo18 := TWorldInfoNode.Create;;
WorldInfo18.Title := 'LOA1_KneelAnimation.x3d';
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
SFBool23.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration20.AddSFBool([SFBool23]);
SFTime24 := TSFTime.CreateUndefined(X3DInterfaceDeclaration20, false, 'startTime');
SFTime24.Value := '0';
end;

procedure InitLOA1_KneelAnimationPart1;
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

procedure InitLOA1_KneelAnimationPart2;
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
PositionInterpolator51.SetKey([0,0.3125,0.625,1]);
PositionInterpolator51.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.049999,0),Vector3(0,-0.195,0),Vector3(0,-0.439997,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(PositionInterpolator51);
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator53.SetKey([0,1]);
OrientationInterpolator53.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator53);
{ no SACROILIAC_ANIMATOR }
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator55.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator55.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.619393),Vector4(-1,0,0,1.069302),Vector4(-1,0,0,1.937315)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator55);
OrientationInterpolator57 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator57.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator57.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.615228),Vector4(1,0,0,0.984524),Vector4(1,0,0,2.076941)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator57);
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator59.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator59.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.017453),Vector4(-1,0,0,0.069812),Vector4(1,0,0,0.261799)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator59);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
end;

procedure InitLOA1_KneelAnimationPart3;
begin
;
OrientationInterpolator61.SetKey([0,0.3125,1]);
OrientationInterpolator61.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.523598),Vector4(-1,0,0,0.157079)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator63 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator63.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator63.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.349065),Vector4(1,0,0,1.023397),Vector4(0.999934,0.008043,0.008185,1.727938)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator63);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator65.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator65.SetKeyValue([Vector4(1,0,0,0),Vector4(-0.991692,-0.072372,0.106338,0.205053),Vector4(-0.981083,-0.103267,0.163741,0.272231),Vector4(-1,0,0,0.349065)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator65);
{ no R_MIDTARSAL_ANIMATOR }
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator67.SetKey([0,1]);
OrientationInterpolator67.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.174533)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator67);
{ no SKULLBASE_ANIMATOR }
OrientationInterpolator69 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator69.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator69.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.279252),Vector4(-1,0,0,0.506145),Vector4(-1,0,0,0.191986)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator69);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator71.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator71.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.052359),Vector4(-1,0,0,0.296706),Vector4(-1,0,0,1.431169)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator71);
{ no L_WRIST_ANIMATOR }
OrientationInterpolator73 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator73.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator73.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.104719),Vector4(-1,0,0,0.157079),Vector4(1,0,0,0.314159)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator73);
OrientationInterpolator75 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator75.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator75.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.837757),Vector4(-1,0,0,1.239183),Vector4(-1,0,0,1.500983)]);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(OrientationInterpolator75);
{ no R_WRIST_ANIMATOR }
{ METHOD .AddGroup }
X3DPrototype47.AddChildren([Group48]);
end;

procedure InitLOA1_KneelAnimationPart4;
begin

{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator51.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator53.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator55.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator57.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator59.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator63.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator65.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator69.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator73.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator75.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype19.AddX3DPrototype([X3DPrototype47]);
{ METHOD .AddX3DPrototype }
Group17.AddX3DPrototype([X3DPrototype19]);
Anchor90 := TAnchorNode.Create;;
Anchor90.Description := 'InterchangableActorsViaDynamicRouting';
Anchor90.SetParameter(['target=_blank']);
Anchor90.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape91 := TShapeNode.Create;;
Text92 := TTextNode.Create;;
Text92.SetText(['LOA1_KneelAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
FontStyle93 := TFontStyleNode.Create;;
FontStyle93.Justify := fjMIDDLE;
FontStyle93.JustifyMinor := fjMIDDLE;
FontStyle93.Size := 0.8;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text92.FontStyle := FontStyle93;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape91.Geometry := Text92;
Appearance94 := TAppearanceNode.Create;;
Material95 := TMaterialNode.Create;;
Material95.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance94.Material := Material95;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape91.Appearance := Appearance94;
{ METHOD .FdChildren.Add }
Anchor90.FdChildren.Add(Shape91);
end;

procedure InitLOA1_KneelAnimationPart5;
begin

{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Anchor90);
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
Result := X3D0;
end;

begin
end.
