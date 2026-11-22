unit LOA1_StandAnimation;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
IS51: TIS;
connect52: Tconnect;
connect53: Tconnect;
connect54: Tconnect;
connect55: Tconnect;
connect56: Tconnect;
connect57: Tconnect;
connect58: Tconnect;
PositionInterpolator59: TPositionInterpolatorNode;
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
OrientationInterpolator104: TOrientationInterpolatorNode;
IS105: TIS;
connect106: Tconnect;
OrientationInterpolator107: TOrientationInterpolatorNode;
IS108: TIS;
connect109: Tconnect;
OrientationInterpolator110: TOrientationInterpolatorNode;
IS111: TIS;
connect112: Tconnect;
OrientationInterpolator113: TOrientationInterpolatorNode;
IS114: TIS;
connect115: Tconnect;
Anchor135: TAnchorNode;
Shape136: TShapeNode;
Text137: TTextNode;
FontStyle138: TFontStyleNode;
Appearance139: TAppearanceNode;
Material140: TMaterialNode;

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
Group18 := TGroupNode.Create;
WorldInfo19 := TWorldInfoNode.Create;
WorldInfo19.Title := 'LOA1_StandAnimation.x3d';
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(WorldInfo19);
X3DPrototype20 := TX3DPrototype.Create;
X3DInterfaceDeclaration21 := TX3DInterfaceDeclaration.Create(nil);
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
SFTime25.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime25]);
SFTime26 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'stopTime');
SFTime26.Value := '-1';
end;

procedure InitLOA1_StandAnimationPart1;
begin

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
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation44]);
SFRotation45 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_shoulder_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation45]);
SFRotation46 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_elbow_rotation_changed');
end;

procedure InitLOA1_StandAnimationPart2;
begin

{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation46]);
SFRotation47 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_wrist_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation47]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype20.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration21]);
X3DPrototype48 := TX3DPrototype.Create;
Group49 := TGroupNode.Create;
TimeSensor50 := TTimeSensorNode.Create;
IS51 := TIS.Create;
connect52 := Tconnect.Create;
connect52.NodeField := 'cycleInterval';
connect52.ProtoField := 'cycleInterval';
{ METHOD .Connect }
IS51.Connect := connect52;
connect53 := Tconnect.Create;
connect53.NodeField := 'enabled';
connect53.ProtoField := 'enabled';
{ METHOD .Connect }
IS51.Connect := connect53;
connect54 := Tconnect.Create;
connect54.NodeField := 'loop';
connect54.ProtoField := 'loop';
{ METHOD .Connect }
IS51.Connect := connect54;
connect55 := Tconnect.Create;
connect55.NodeField := 'startTime';
connect55.ProtoField := 'startTime';
{ METHOD .Connect }
IS51.Connect := connect55;
connect56 := Tconnect.Create;
connect56.NodeField := 'stopTime';
connect56.ProtoField := 'stopTime';
{ METHOD .Connect }
IS51.Connect := connect56;
connect57 := Tconnect.Create;
connect57.NodeField := 'fraction_changed';
connect57.ProtoField := 'fraction_changed';
{ METHOD .Connect }
IS51.Connect := connect57;
connect58 := Tconnect.Create;
connect58.NodeField := 'isActive';
connect58.ProtoField := 'isActive';
{ METHOD .Connect }
IS51.Connect := connect58;
{ METHOD .IS }
TimeSensor50.IS := IS51;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(TimeSensor50);
PositionInterpolator59 := TPositionInterpolatorNode.Create;
PositionInterpolator59.SetKey([0,1]);
end;

procedure InitLOA1_StandAnimationPart3;
begin

PositionInterpolator59.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0)]);
IS60 := TIS.Create;
connect61 := Tconnect.Create;
connect61.NodeField := 'value_changed';
connect61.ProtoField := 'HumanoidRoot_translation_changed';
{ METHOD .Connect }
IS60.Connect := connect61;
{ METHOD .IS }
PositionInterpolator59.IS := IS60;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(PositionInterpolator59);
OrientationInterpolator62 := TOrientationInterpolatorNode.Create;
OrientationInterpolator62.SetKey([0,1]);
OrientationInterpolator62.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS63 := TIS.Create;
connect64 := Tconnect.Create;
connect64.NodeField := 'value_changed';
connect64.ProtoField := 'HumanoidRoot_rotation_changed';
{ METHOD .Connect }
IS63.Connect := connect64;
{ METHOD .IS }
OrientationInterpolator62.IS := IS63;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator62);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;
OrientationInterpolator65.SetKey([0,1]);
OrientationInterpolator65.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS66 := TIS.Create;
connect67 := Tconnect.Create;
connect67.NodeField := 'value_changed';
connect67.ProtoField := 'lower_body_rotation_changed';
{ METHOD .Connect }
IS66.Connect := connect67;
{ METHOD .IS }
OrientationInterpolator65.IS := IS66;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator65);
OrientationInterpolator68 := TOrientationInterpolatorNode.Create;
OrientationInterpolator68.SetKey([0,1]);
OrientationInterpolator68.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS69 := TIS.Create;
connect70 := Tconnect.Create;
connect70.NodeField := 'value_changed';
connect70.ProtoField := 'l_hip_rotation_changed';
{ METHOD .Connect }
IS69.Connect := connect70;
{ METHOD .IS }
OrientationInterpolator68.IS := IS69;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator68);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;
OrientationInterpolator71.SetKey([0,1]);
end;

procedure InitLOA1_StandAnimationPart4;
begin

OrientationInterpolator71.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS72 := TIS.Create;
connect73 := Tconnect.Create;
connect73.NodeField := 'value_changed';
connect73.ProtoField := 'l_knee_rotation_changed';
{ METHOD .Connect }
IS72.Connect := connect73;
{ METHOD .IS }
OrientationInterpolator71.IS := IS72;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator71);
OrientationInterpolator74 := TOrientationInterpolatorNode.Create;
OrientationInterpolator74.SetKey([0,1]);
OrientationInterpolator74.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS75 := TIS.Create;
connect76 := Tconnect.Create;
connect76.NodeField := 'value_changed';
connect76.ProtoField := 'l_ankle_rotation_changed';
{ METHOD .Connect }
IS75.Connect := connect76;
{ METHOD .IS }
OrientationInterpolator74.IS := IS75;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator74);
OrientationInterpolator77 := TOrientationInterpolatorNode.Create;
OrientationInterpolator77.SetKey([0,1]);
OrientationInterpolator77.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0)]);
IS78 := TIS.Create;
connect79 := Tconnect.Create;
connect79.NodeField := 'value_changed';
connect79.ProtoField := 'l_midtarsal_rotation_changed';
{ METHOD .Connect }
IS78.Connect := connect79;
{ METHOD .IS }
OrientationInterpolator77.IS := IS78;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator77);
OrientationInterpolator80 := TOrientationInterpolatorNode.Create;
OrientationInterpolator80.SetKey([0,1]);
OrientationInterpolator80.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS81 := TIS.Create;
connect82 := Tconnect.Create;
connect82.NodeField := 'value_changed';
connect82.ProtoField := 'r_hip_rotation_changed';
{ METHOD .Connect }
IS81.Connect := connect82;
{ METHOD .IS }
OrientationInterpolator80.IS := IS81;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator80);
OrientationInterpolator83 := TOrientationInterpolatorNode.Create;
OrientationInterpolator83.SetKey([0,1]);
end;

procedure InitLOA1_StandAnimationPart5;
begin

OrientationInterpolator83.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS84 := TIS.Create;
connect85 := Tconnect.Create;
connect85.NodeField := 'value_changed';
connect85.ProtoField := 'r_knee_rotation_changed';
{ METHOD .Connect }
IS84.Connect := connect85;
{ METHOD .IS }
OrientationInterpolator83.IS := IS84;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator83);
OrientationInterpolator86 := TOrientationInterpolatorNode.Create;
OrientationInterpolator86.SetKey([0,1]);
OrientationInterpolator86.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS87 := TIS.Create;
connect88 := Tconnect.Create;
connect88.NodeField := 'value_changed';
connect88.ProtoField := 'r_ankle_rotation_changed';
{ METHOD .Connect }
IS87.Connect := connect88;
{ METHOD .IS }
OrientationInterpolator86.IS := IS87;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator86);
OrientationInterpolator89 := TOrientationInterpolatorNode.Create;
OrientationInterpolator89.SetKey([0,1]);
OrientationInterpolator89.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0)]);
IS90 := TIS.Create;
connect91 := Tconnect.Create;
connect91.NodeField := 'value_changed';
connect91.ProtoField := 'r_midtarsal_rotation_changed';
{ METHOD .Connect }
IS90.Connect := connect91;
{ METHOD .IS }
OrientationInterpolator89.IS := IS90;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator89);
OrientationInterpolator92 := TOrientationInterpolatorNode.Create;
OrientationInterpolator92.SetKey([0,1]);
OrientationInterpolator92.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS93 := TIS.Create;
connect94 := Tconnect.Create;
connect94.NodeField := 'value_changed';
connect94.ProtoField := 'vl5_rotation_changed';
{ METHOD .Connect }
IS93.Connect := connect94;
{ METHOD .IS }
OrientationInterpolator92.IS := IS93;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator92);
OrientationInterpolator95 := TOrientationInterpolatorNode.Create;
OrientationInterpolator95.SetKey([0,0.5,1]);
end;

procedure InitLOA1_StandAnimationPart6;
begin

OrientationInterpolator95.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(0,0,1,0)]);
IS96 := TIS.Create;
connect97 := Tconnect.Create;
connect97.NodeField := 'value_changed';
connect97.ProtoField := 'skullbase_rotation_changed';
{ METHOD .Connect }
IS96.Connect := connect97;
{ METHOD .IS }
OrientationInterpolator95.IS := IS96;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator95);
OrientationInterpolator98 := TOrientationInterpolatorNode.Create;
OrientationInterpolator98.SetKey([0,1]);
OrientationInterpolator98.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS99 := TIS.Create;
connect100 := Tconnect.Create;
connect100.NodeField := 'value_changed';
connect100.ProtoField := 'l_shoulder_rotation_changed';
{ METHOD .Connect }
IS99.Connect := connect100;
{ METHOD .IS }
OrientationInterpolator98.IS := IS99;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator98);
OrientationInterpolator101 := TOrientationInterpolatorNode.Create;
OrientationInterpolator101.SetKey([0,1]);
OrientationInterpolator101.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS102 := TIS.Create;
connect103 := Tconnect.Create;
connect103.NodeField := 'value_changed';
connect103.ProtoField := 'l_elbow_rotation_changed';
{ METHOD .Connect }
IS102.Connect := connect103;
{ METHOD .IS }
OrientationInterpolator101.IS := IS102;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator101);
OrientationInterpolator104 := TOrientationInterpolatorNode.Create;
OrientationInterpolator104.SetKey([0,1]);
OrientationInterpolator104.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS105 := TIS.Create;
connect106 := Tconnect.Create;
connect106.NodeField := 'value_changed';
connect106.ProtoField := 'l_wrist_rotation_changed';
{ METHOD .Connect }
IS105.Connect := connect106;
{ METHOD .IS }
OrientationInterpolator104.IS := IS105;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator104);
OrientationInterpolator107 := TOrientationInterpolatorNode.Create;
OrientationInterpolator107.SetKey([0,1]);
end;

procedure InitLOA1_StandAnimationPart7;
begin

OrientationInterpolator107.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS108 := TIS.Create;
connect109 := Tconnect.Create;
connect109.NodeField := 'value_changed';
connect109.ProtoField := 'r_shoulder_rotation_changed';
{ METHOD .Connect }
IS108.Connect := connect109;
{ METHOD .IS }
OrientationInterpolator107.IS := IS108;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator107);
OrientationInterpolator110 := TOrientationInterpolatorNode.Create;
OrientationInterpolator110.SetKey([0,1]);
OrientationInterpolator110.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS111 := TIS.Create;
connect112 := Tconnect.Create;
connect112.NodeField := 'value_changed';
connect112.ProtoField := 'r_elbow_rotation_changed';
{ METHOD .Connect }
IS111.Connect := connect112;
{ METHOD .IS }
OrientationInterpolator110.IS := IS111;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator110);
OrientationInterpolator113 := TOrientationInterpolatorNode.Create;
OrientationInterpolator113.SetKey([0,1]);
OrientationInterpolator113.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS114 := TIS.Create;
connect115 := Tconnect.Create;
connect115.NodeField := 'value_changed';
connect115.ProtoField := 'r_wrist_rotation_changed';
{ METHOD .Connect }
IS114.Connect := connect115;
{ METHOD .IS }
OrientationInterpolator113.IS := IS114;
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(OrientationInterpolator113);
{ METHOD .AddGroup }
X3DPrototype48.AddChildren([Group49]);
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, PositionInterpolator59.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator62.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SACROILIAC_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SACROILIAC_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator65.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator68.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator71.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator74.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator77.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator80.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator83.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator86.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator89.set_EventSet_fraction);
end;

procedure InitLOA1_StandAnimationPart8;
begin

{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator92.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator95.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator98.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator101.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator104.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_SHOULDER_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator107.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_ELBOW_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator110.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction }
{ Sample TIMER.EventFraction_changed TO R_WRIST_ANIMATOR.EventSet_fraction}
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator113.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype20.AddX3DPrototype([X3DPrototype48]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype20]);
{ ====================================== }
{ Point to example use in case someone inspects this file }
Anchor135 := TAnchorNode.Create;
Anchor135.Description := 'InterchangableActorsViaDynamicRouting';
Anchor135.SetParameter(['target=_blank']);
Anchor135.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape136 := TShapeNode.Create;
Text137 := TTextNode.Create;
Text137.SetText(['LOA1_StandAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
FontStyle138 := TFontStyleNode.Create;
FontStyle138.Justify := fjMIDDLE;
FontStyle138.JustifyMinor := fjMIDDLE;
FontStyle138.Size := 0.8;
{ METHOD .FontStyle }
Text137.FontStyle := FontStyle138;
{ METHOD .Geometry }
Shape136.Geometry := Text137;
Appearance139 := TAppearanceNode.Create;
Material140 := TMaterialNode.Create;
Material140.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance139.Material := Material140;
{ METHOD .Appearance }
Shape136.Appearance := Appearance139;
{ METHOD .FdChildren.Add }
Anchor135.FdChildren.Add(Shape136);
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(Anchor135);
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
InitLOA1_StandAnimationPart6;
InitLOA1_StandAnimationPart7;
InitLOA1_StandAnimationPart8;
Result := X3D0;
end;

begin
end.
