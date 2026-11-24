unit LOA1_StandAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateLOA1_StandAnimation: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group18: TGroupNode;
WorldInfo19: TWorldInfoNode;
X3DPrototype20: TX3DPrototype;
X3DInterfaceDeclaration21: TX3DInterfaceDeclaration;
SFTime22: TSFTime;
SFBool23: TSFBool;
SFBool24: TSFBool;
SFTime25: TSFTime;
SFTime26: TSFTime;
SFFloat27: TSFFloat;
SFBool28: TSFBool;
SFVec3f29: TSFVec3f;
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
SFRotation47: TSFRotation;
X3DPrototype48: TX3DPrototype;
Group49: TGroupNode;
TimeSensor50: TTimeSensorNode;
PositionInterpolator52: TPositionInterpolatorNode;
OrientationInterpolator54: TOrientationInterpolatorNode;
OrientationInterpolator56: TOrientationInterpolatorNode;
OrientationInterpolator58: TOrientationInterpolatorNode;
OrientationInterpolator60: TOrientationInterpolatorNode;
OrientationInterpolator62: TOrientationInterpolatorNode;
OrientationInterpolator64: TOrientationInterpolatorNode;
OrientationInterpolator66: TOrientationInterpolatorNode;
OrientationInterpolator68: TOrientationInterpolatorNode;
OrientationInterpolator70: TOrientationInterpolatorNode;
OrientationInterpolator72: TOrientationInterpolatorNode;
OrientationInterpolator74: TOrientationInterpolatorNode;
OrientationInterpolator76: TOrientationInterpolatorNode;
OrientationInterpolator78: TOrientationInterpolatorNode;
OrientationInterpolator80: TOrientationInterpolatorNode;
OrientationInterpolator82: TOrientationInterpolatorNode;
OrientationInterpolator84: TOrientationInterpolatorNode;
OrientationInterpolator86: TOrientationInterpolatorNode;
OrientationInterpolator88: TOrientationInterpolatorNode;
Anchor109: TAnchorNode;
Shape110: TShapeNode;
Text111: TTextNode;
FontStyle112: TFontStyleNode;
Appearance113: TAppearanceNode;
Material114: TMaterialNode;

procedure InitLOA1_StandAnimationPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_StandAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['rights'] := '1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Ozan APAYDIN';
{ METHOD .Meta }
X3D0.Meta['created'] := '1 December 2001';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 May 2020';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'consider adding eyeball animation';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.HAnim.org';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'Nancy Stand Animation HAnim 2001';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group18 := TGroupNode.Create;;
WorldInfo19 := TWorldInfoNode.Create;;
WorldInfo19.Title := 'LOA1_StandAnimation.x3d';
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(WorldInfo19);
X3DPrototype20 := TX3DPrototype.Create;;
X3DInterfaceDeclaration21 := TX3DInterfaceDeclaration.Create(nil);;
SFTime22 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'cycleInterval');
SFTime22.Value := '0.009999999776482582';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime22]);
SFBool23 := TSFBool.CreateUndefined(X3DInterfaceDeclaration21, false, 'enabled');
SFBool23.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration21.AddSFBool([SFBool23]);
SFBool24 := TSFBool.CreateUndefined(X3DInterfaceDeclaration21, false, 'loop');
SFBool24.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration21.AddSFBool([SFBool24]);
SFTime25 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'startTime');
end;

procedure InitLOA1_StandAnimationPart1;
begin

SFTime25.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime25]);
SFTime26 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'stopTime');
SFTime26.Value := '-1';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime26]);
SFFloat27 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'fraction_changed');
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration21.AddSFFloat([SFFloat27]);
SFBool28 := TSFBool.CreateUndefined(X3DInterfaceDeclaration21, false, 'isActive');
{ METHOD .AddSFBool }
X3DInterfaceDeclaration21.AddSFBool([SFBool28]);
SFVec3f29 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration21, false, 'HumanoidRoot_translation_changed');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration21.AddSFVec3f([SFVec3f29]);
SFRotation30 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'HumanoidRoot_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation30]);
SFRotation31 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'lower_body_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation31]);
SFRotation32 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hip_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation32]);
SFRotation33 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_knee_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation33]);
SFRotation34 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ankle_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation34]);
SFRotation35 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_midtarsal_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation35]);
SFRotation36 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hip_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation36]);
SFRotation37 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_knee_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation37]);
SFRotation38 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ankle_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation38]);
SFRotation39 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_midtarsal_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation39]);
SFRotation40 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl5_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation40]);
SFRotation41 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'skullbase_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation41]);
SFRotation42 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_shoulder_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation42]);
SFRotation43 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_elbow_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation43]);
SFRotation44 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_wrist_rotation_changed');
end;

procedure InitLOA1_StandAnimationPart2;
begin

{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation44]);
SFRotation45 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_shoulder_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation45]);
SFRotation46 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_elbow_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation46]);
SFRotation47 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_wrist_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation47]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype20.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration21]);
X3DPrototype48 := TX3DPrototype.Create;;
Group49 := TGroupNode.Create;;
TimeSensor50 := TTimeSensorNode.Create;;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(TimeSensor50);
PositionInterpolator52 := TPositionInterpolatorNode.Create;;
PositionInterpolator52.SetKey([0,1]);
PositionInterpolator52.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(PositionInterpolator52);
OrientationInterpolator54 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator54.SetKey([0,1]);
OrientationInterpolator54.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator54);
OrientationInterpolator56 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator56.SetKey([0,1]);
OrientationInterpolator56.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator56);
OrientationInterpolator58 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator58.SetKey([0,1]);
OrientationInterpolator58.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator58);
OrientationInterpolator60 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator60.SetKey([0,1]);
OrientationInterpolator60.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator60);
end;

procedure InitLOA1_StandAnimationPart3;
begin

OrientationInterpolator62 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator62.SetKey([0,1]);
OrientationInterpolator62.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator62);
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator64.SetKey([0,1]);
OrientationInterpolator64.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator64);
OrientationInterpolator66 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator66.SetKey([0,1]);
OrientationInterpolator66.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator66);
OrientationInterpolator68 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator68.SetKey([0,1]);
OrientationInterpolator68.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator68);
OrientationInterpolator70 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator70.SetKey([0,1]);
OrientationInterpolator70.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator70);
OrientationInterpolator72 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator72.SetKey([0,1]);
OrientationInterpolator72.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator72);
OrientationInterpolator74 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator74.SetKey([0,1]);
OrientationInterpolator74.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator74);
OrientationInterpolator76 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator76.SetKey([0,0.5,1]);
OrientationInterpolator76.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator76);
end;

procedure InitLOA1_StandAnimationPart4;
begin

OrientationInterpolator78 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator78.SetKey([0,1]);
OrientationInterpolator78.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator78);
OrientationInterpolator80 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator80.SetKey([0,1]);
OrientationInterpolator80.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator80);
OrientationInterpolator82 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator82.SetKey([0,1]);
OrientationInterpolator82.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator82);
OrientationInterpolator84 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator84.SetKey([0,1]);
OrientationInterpolator84.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator84);
OrientationInterpolator86 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator86.SetKey([0,1]);
OrientationInterpolator86.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator86);
OrientationInterpolator88 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator88.SetKey([0,1]);
OrientationInterpolator88.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator88);
{ METHOD .AddGroup }
X3DPrototype48.AddChildren([Group49]);
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, PositionInterpolator52.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator54.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SACROILIAC_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SACROILIAC_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator56.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator58.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator60.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator62.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator66.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator68.EventSet_fraction);
end;

procedure InitLOA1_StandAnimationPart5;
begin

{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator70.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator72.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator74.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator76.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator78.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator80.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator82.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator84.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator86.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator88.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype20.AddX3DPrototype([X3DPrototype48]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype20]);
{ ====================================== }
{ Point to example use in case someone inspects this file }
Anchor109 := TAnchorNode.Create;;
Anchor109.Description := 'InterchangableActorsViaDynamicRouting';
Anchor109.SetParameter(['target=_blank']);
Anchor109.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape110 := TShapeNode.Create;;
Text111 := TTextNode.Create;;
Text111.SetText(['LOA1_StandAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
FontStyle112 := TFontStyleNode.Create;;
FontStyle112.Justify := fjMIDDLE;
FontStyle112.JustifyMinor := fjMIDDLE;
FontStyle112.Size := 0.8;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text111.FontStyle := FontStyle112;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape110.Geometry := Text111;
Appearance113 := TAppearanceNode.Create;;
Material114 := TMaterialNode.Create;;
Material114.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance113.Material := Material114;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape110.Appearance := Appearance113;
{ METHOD .FdChildren.Add }
Anchor109.FdChildren.Add(Shape110);
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(Anchor109);
{ METHOD .AddGroup }
X3D0.AddChildren([Group18]);
end;

function CreateLOA1_StandAnimation: TX3DRootNode;
begin
InitLOA1_StandAnimationPart0;
InitLOA1_StandAnimationPart1;
InitLOA1_StandAnimationPart2;
InitLOA1_StandAnimationPart3;
InitLOA1_StandAnimationPart4;
InitLOA1_StandAnimationPart5;
Result := X3D0;
end;

begin
end.
