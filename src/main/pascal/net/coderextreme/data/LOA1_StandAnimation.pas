unit LOA1_StandAnimation;

interface

uses X3DNodes;

function CreateLOA1_StandAnimation: TX3DRootNode;

implementation

uses CastleVectors;

function CreateLOA1_StandAnimation: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group18: TGroupNode;
WorldInfo19: TWorldInfoNode;
X3DPrototype20: TX3DPrototype;
X3DInterfaceDeclaration21: TX3DInterfaceDeclaration;
X3DField22: TX3DField;
X3DField23: TX3DField;
X3DField24: TX3DField;
X3DField25: TX3DField;
X3DField26: TX3DField;
X3DField27: TX3DField;
X3DField28: TX3DField;
X3DField29: TX3DField;
X3DField30: TX3DField;
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DField47: TX3DField;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_StandAnimation.x3d';
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
X3D0.Meta['creator'] := 'Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman';
X3D0.Meta['rights'] := '1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.';
X3D0.Meta['translator'] := 'Ozan APAYDIN';
X3D0.Meta['created'] := '1 December 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['TODO'] := 'consider adding eyeball animation';
X3D0.Meta['reference'] := 'https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
X3D0.Meta['reference'] := 'https://www.HAnim.org';
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
X3D0.Meta['subject'] := 'Nancy Stand Animation HAnim 2001';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group18 := TGroupNode.Create;
WorldInfo19 := TWorldInfoNode.Create;
WorldInfo19.Title := 'LOA1_StandAnimation.x3d';
{ .AddChildren }
Group18.AddChildren([WorldInfo19]);
X3DPrototype20 := TX3DPrototype.Create;
X3DPrototype20.NameField := 'LOA1_StandAnimation';
X3DInterfaceDeclaration21 := TX3DInterfaceDeclaration.Create(nil);
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'cycleInterval';
X3DField22.AccessType := 'inputOutput';
X3DField22.Type := 'SFTime';
X3DField22.Value := '0.009999999776482582';
{ .SetX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'enabled';
X3DField23.AccessType := 'inputOutput';
X3DField23.Type := 'SFBool';
X3DField23.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'loop';
X3DField24.AccessType := 'inputOutput';
X3DField24.Type := 'SFBool';
X3DField24.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField24;
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'startTime';
X3DField25.AccessType := 'inputOutput';
X3DField25.Type := 'SFTime';
X3DField25.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'stopTime';
X3DField26.AccessType := 'inputOutput';
X3DField26.Type := 'SFTime';
X3DField26.Value := '-1';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'fraction_changed';
X3DField27.AccessType := 'outputOnly';
X3DField27.Type := 'SFFloat';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField27;
X3DField28 := TX3DField.Create;
X3DField28.NameField := 'isActive';
X3DField28.AccessType := 'outputOnly';
X3DField28.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField28;
X3DField29 := TX3DField.Create;
X3DField29.NameField := 'HumanoidRoot_translation_changed';
X3DField29.AccessType := 'outputOnly';
X3DField29.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField29;
X3DField30 := TX3DField.Create;
X3DField30.NameField := 'HumanoidRoot_rotation_changed';
X3DField30.AccessType := 'outputOnly';
X3DField30.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField30;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'lower_body_rotation_changed';
X3DField31.AccessType := 'outputOnly';
X3DField31.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'l_hip_rotation_changed';
X3DField32.AccessType := 'outputOnly';
X3DField32.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'l_knee_rotation_changed';
X3DField33.AccessType := 'outputOnly';
X3DField33.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'l_ankle_rotation_changed';
X3DField34.AccessType := 'outputOnly';
X3DField34.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'l_midtarsal_rotation_changed';
X3DField35.AccessType := 'outputOnly';
X3DField35.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'r_hip_rotation_changed';
X3DField36.AccessType := 'outputOnly';
X3DField36.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'r_knee_rotation_changed';
X3DField37.AccessType := 'outputOnly';
X3DField37.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'r_ankle_rotation_changed';
X3DField38.AccessType := 'outputOnly';
X3DField38.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'r_midtarsal_rotation_changed';
X3DField39.AccessType := 'outputOnly';
X3DField39.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'vl5_rotation_changed';
X3DField40.AccessType := 'outputOnly';
X3DField40.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'skullbase_rotation_changed';
X3DField41.AccessType := 'outputOnly';
X3DField41.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'l_shoulder_rotation_changed';
X3DField42.AccessType := 'outputOnly';
X3DField42.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'l_elbow_rotation_changed';
X3DField43.AccessType := 'outputOnly';
X3DField43.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'l_wrist_rotation_changed';
X3DField44.AccessType := 'outputOnly';
X3DField44.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'r_shoulder_rotation_changed';
X3DField45.AccessType := 'outputOnly';
X3DField45.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'r_elbow_rotation_changed';
X3DField46.AccessType := 'outputOnly';
X3DField46.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'r_wrist_rotation_changed';
X3DField47.AccessType := 'outputOnly';
X3DField47.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField47;
{ .SetX3DInterfaceDeclaration }
X3DPrototype20.X3DInterfaceDeclaration := X3DInterfaceDeclaration21;
X3DPrototype48 := TX3DPrototype.Create;
Group49 := TGroupNode.Create;
TimeSensor50 := TTimeSensorNode.Create;
IS51 := TIS.Create;
connect52 := Tconnect.Create;
connect52.NodeField := 'cycleInterval';
connect52.ProtoField := 'cycleInterval';
{ .AddConnect }
IS51.Connect := connect52;
connect53 := Tconnect.Create;
connect53.NodeField := 'enabled';
connect53.ProtoField := 'enabled';
{ .AddConnect }
IS51.Connect := connect53;
connect54 := Tconnect.Create;
connect54.NodeField := 'loop';
connect54.ProtoField := 'loop';
{ .AddConnect }
IS51.Connect := connect54;
connect55 := Tconnect.Create;
connect55.NodeField := 'startTime';
connect55.ProtoField := 'startTime';
{ .AddConnect }
IS51.Connect := connect55;
connect56 := Tconnect.Create;
connect56.NodeField := 'stopTime';
connect56.ProtoField := 'stopTime';
{ .AddConnect }
IS51.Connect := connect56;
connect57 := Tconnect.Create;
connect57.NodeField := 'fraction_changed';
connect57.ProtoField := 'fraction_changed';
{ .AddConnect }
IS51.Connect := connect57;
connect58 := Tconnect.Create;
connect58.NodeField := 'isActive';
connect58.ProtoField := 'isActive';
{ .AddConnect }
IS51.Connect := connect58;
{ .SetIS }
TimeSensor50.IS := IS51;
{ .AddChildren }
Group49.AddChildren([TimeSensor50]);
PositionInterpolator59 := TPositionInterpolatorNode.Create;
PositionInterpolator59.SetKey([0,1]);
PositionInterpolator59.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0)]);
IS60 := TIS.Create;
connect61 := Tconnect.Create;
connect61.NodeField := 'value_changed';
connect61.ProtoField := 'HumanoidRoot_translation_changed';
{ .AddConnect }
IS60.Connect := connect61;
{ .SetIS }
PositionInterpolator59.IS := IS60;
{ .AddChildren }
Group49.AddChildren([PositionInterpolator59]);
OrientationInterpolator62 := TOrientationInterpolatorNode.Create;
OrientationInterpolator62.SetKey([0,1]);
OrientationInterpolator62.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS63 := TIS.Create;
connect64 := Tconnect.Create;
connect64.NodeField := 'value_changed';
connect64.ProtoField := 'HumanoidRoot_rotation_changed';
{ .AddConnect }
IS63.Connect := connect64;
{ .SetIS }
OrientationInterpolator62.IS := IS63;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator62]);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;
OrientationInterpolator65.SetKey([0,1]);
OrientationInterpolator65.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS66 := TIS.Create;
connect67 := Tconnect.Create;
connect67.NodeField := 'value_changed';
connect67.ProtoField := 'lower_body_rotation_changed';
{ .AddConnect }
IS66.Connect := connect67;
{ .SetIS }
OrientationInterpolator65.IS := IS66;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator65]);
OrientationInterpolator68 := TOrientationInterpolatorNode.Create;
OrientationInterpolator68.SetKey([0,1]);
OrientationInterpolator68.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS69 := TIS.Create;
connect70 := Tconnect.Create;
connect70.NodeField := 'value_changed';
connect70.ProtoField := 'l_hip_rotation_changed';
{ .AddConnect }
IS69.Connect := connect70;
{ .SetIS }
OrientationInterpolator68.IS := IS69;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator68]);
OrientationInterpolator71 := TOrientationInterpolatorNode.Create;
OrientationInterpolator71.SetKey([0,1]);
OrientationInterpolator71.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS72 := TIS.Create;
connect73 := Tconnect.Create;
connect73.NodeField := 'value_changed';
connect73.ProtoField := 'l_knee_rotation_changed';
{ .AddConnect }
IS72.Connect := connect73;
{ .SetIS }
OrientationInterpolator71.IS := IS72;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator71]);
OrientationInterpolator74 := TOrientationInterpolatorNode.Create;
OrientationInterpolator74.SetKey([0,1]);
OrientationInterpolator74.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS75 := TIS.Create;
connect76 := Tconnect.Create;
connect76.NodeField := 'value_changed';
connect76.ProtoField := 'l_ankle_rotation_changed';
{ .AddConnect }
IS75.Connect := connect76;
{ .SetIS }
OrientationInterpolator74.IS := IS75;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator74]);
OrientationInterpolator77 := TOrientationInterpolatorNode.Create;
OrientationInterpolator77.SetKey([0,1]);
OrientationInterpolator77.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0)]);
IS78 := TIS.Create;
connect79 := Tconnect.Create;
connect79.NodeField := 'value_changed';
connect79.ProtoField := 'l_midtarsal_rotation_changed';
{ .AddConnect }
IS78.Connect := connect79;
{ .SetIS }
OrientationInterpolator77.IS := IS78;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator77]);
OrientationInterpolator80 := TOrientationInterpolatorNode.Create;
OrientationInterpolator80.SetKey([0,1]);
OrientationInterpolator80.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS81 := TIS.Create;
connect82 := Tconnect.Create;
connect82.NodeField := 'value_changed';
connect82.ProtoField := 'r_hip_rotation_changed';
{ .AddConnect }
IS81.Connect := connect82;
{ .SetIS }
OrientationInterpolator80.IS := IS81;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator80]);
OrientationInterpolator83 := TOrientationInterpolatorNode.Create;
OrientationInterpolator83.SetKey([0,1]);
OrientationInterpolator83.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS84 := TIS.Create;
connect85 := Tconnect.Create;
connect85.NodeField := 'value_changed';
connect85.ProtoField := 'r_knee_rotation_changed';
{ .AddConnect }
IS84.Connect := connect85;
{ .SetIS }
OrientationInterpolator83.IS := IS84;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator83]);
OrientationInterpolator86 := TOrientationInterpolatorNode.Create;
OrientationInterpolator86.SetKey([0,1]);
OrientationInterpolator86.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS87 := TIS.Create;
connect88 := Tconnect.Create;
connect88.NodeField := 'value_changed';
connect88.ProtoField := 'r_ankle_rotation_changed';
{ .AddConnect }
IS87.Connect := connect88;
{ .SetIS }
OrientationInterpolator86.IS := IS87;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator86]);
OrientationInterpolator89 := TOrientationInterpolatorNode.Create;
OrientationInterpolator89.SetKey([0,1]);
OrientationInterpolator89.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0)]);
IS90 := TIS.Create;
connect91 := Tconnect.Create;
connect91.NodeField := 'value_changed';
connect91.ProtoField := 'r_midtarsal_rotation_changed';
{ .AddConnect }
IS90.Connect := connect91;
{ .SetIS }
OrientationInterpolator89.IS := IS90;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator89]);
OrientationInterpolator92 := TOrientationInterpolatorNode.Create;
OrientationInterpolator92.SetKey([0,1]);
OrientationInterpolator92.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS93 := TIS.Create;
connect94 := Tconnect.Create;
connect94.NodeField := 'value_changed';
connect94.ProtoField := 'vl5_rotation_changed';
{ .AddConnect }
IS93.Connect := connect94;
{ .SetIS }
OrientationInterpolator92.IS := IS93;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator92]);
OrientationInterpolator95 := TOrientationInterpolatorNode.Create;
OrientationInterpolator95.SetKey([0,0.5,1]);
OrientationInterpolator95.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(0,0,1,0)]);
IS96 := TIS.Create;
connect97 := Tconnect.Create;
connect97.NodeField := 'value_changed';
connect97.ProtoField := 'skullbase_rotation_changed';
{ .AddConnect }
IS96.Connect := connect97;
{ .SetIS }
OrientationInterpolator95.IS := IS96;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator95]);
OrientationInterpolator98 := TOrientationInterpolatorNode.Create;
OrientationInterpolator98.SetKey([0,1]);
OrientationInterpolator98.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS99 := TIS.Create;
connect100 := Tconnect.Create;
connect100.NodeField := 'value_changed';
connect100.ProtoField := 'l_shoulder_rotation_changed';
{ .AddConnect }
IS99.Connect := connect100;
{ .SetIS }
OrientationInterpolator98.IS := IS99;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator98]);
OrientationInterpolator101 := TOrientationInterpolatorNode.Create;
OrientationInterpolator101.SetKey([0,1]);
OrientationInterpolator101.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS102 := TIS.Create;
connect103 := Tconnect.Create;
connect103.NodeField := 'value_changed';
connect103.ProtoField := 'l_elbow_rotation_changed';
{ .AddConnect }
IS102.Connect := connect103;
{ .SetIS }
OrientationInterpolator101.IS := IS102;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator101]);
OrientationInterpolator104 := TOrientationInterpolatorNode.Create;
OrientationInterpolator104.SetKey([0,1]);
OrientationInterpolator104.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS105 := TIS.Create;
connect106 := Tconnect.Create;
connect106.NodeField := 'value_changed';
connect106.ProtoField := 'l_wrist_rotation_changed';
{ .AddConnect }
IS105.Connect := connect106;
{ .SetIS }
OrientationInterpolator104.IS := IS105;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator104]);
OrientationInterpolator107 := TOrientationInterpolatorNode.Create;
OrientationInterpolator107.SetKey([0,1]);
OrientationInterpolator107.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS108 := TIS.Create;
connect109 := Tconnect.Create;
connect109.NodeField := 'value_changed';
connect109.ProtoField := 'r_shoulder_rotation_changed';
{ .AddConnect }
IS108.Connect := connect109;
{ .SetIS }
OrientationInterpolator107.IS := IS108;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator107]);
OrientationInterpolator110 := TOrientationInterpolatorNode.Create;
OrientationInterpolator110.SetKey([0,1]);
OrientationInterpolator110.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS111 := TIS.Create;
connect112 := Tconnect.Create;
connect112.NodeField := 'value_changed';
connect112.ProtoField := 'r_elbow_rotation_changed';
{ .AddConnect }
IS111.Connect := connect112;
{ .SetIS }
OrientationInterpolator110.IS := IS111;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator110]);
OrientationInterpolator113 := TOrientationInterpolatorNode.Create;
OrientationInterpolator113.SetKey([0,1]);
OrientationInterpolator113.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
IS114 := TIS.Create;
connect115 := Tconnect.Create;
connect115.NodeField := 'value_changed';
connect115.ProtoField := 'r_wrist_rotation_changed';
{ .AddConnect }
IS114.Connect := connect115;
{ .SetIS }
OrientationInterpolator113.IS := IS114;
{ .AddChildren }
Group49.AddChildren([OrientationInterpolator113]);
{ .SetGroup }
X3DPrototype48.Group := Group49;
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, PositionInterpolator59.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator65.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator68.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator71.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator74.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator77.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator80.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator83.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator86.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator89.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator92.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator95.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator98.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator101.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator104.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator107.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator110.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator113.EventSet_fraction);
{ .AddX3DRoute }
{ .AddX3DPrototype }
X3DPrototype20.X3DPrototype := X3DPrototype48;
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype20;
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
FontStyle138.Justify := fjMiddle;
FontStyle138.JustifyMinor := fjMiddle;
FontStyle138.Size := 0.8;
{ .SetFontStyle }
Text137.FontStyle := FontStyle138;
{ .SetGeometry }
Shape136.Geometry := Text137;
Appearance139 := TAppearanceNode.Create;
Material140 := TMaterialNode.Create;
Material140.DiffuseColor := Vector3(1,1,0.2);
{ .SetMaterial }
Appearance139.Material := Material140;
{ .SetAppearance }
Shape136.Appearance := Appearance139;
{ .AddChildren }
Anchor135.AddChildren([Shape136]);
{ .AddChildren }
Group18.AddChildren([Anchor135]);
{ .AddGroup }
X3D0.AddChildren([Group18]);
Result := X3D0;
end;

begin
end.
