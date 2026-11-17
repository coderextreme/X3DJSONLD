unit LOA1_KneelAnimation;

interface

uses X3DNodes;

function CreateLOA1_KneelAnimation: TX3DRootNode;

implementation

uses CastleVectors;

function CreateLOA1_KneelAnimation: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
X3DPrototype19: TX3DPrototype;
X3DInterfaceDeclaration20: TX3DInterfaceDeclaration;
X3DField21: TX3DField;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_KneelAnimation.x3d';
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
X3D0.Meta['creator'] := 'Tom Miller';
X3D0.Meta['translator'] := 'Curt Blais';
X3D0.Meta['translated'] := '1 December 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['reference'] := 'https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
X3D0.Meta['reference'] := 'https://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl';
X3D0.Meta['reference'] := 'https://www.HAnim.org';
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
X3D0.Meta['subject'] := 'Nancy kneel Animation HAnim 2001';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'LOA1_KneelAnimation.x3d';
{ .AddChildren }
Group17.AddChildren([WorldInfo18]);
X3DPrototype19 := TX3DPrototype.Create;
X3DPrototype19.NameField := 'LOA1_KneelAnimation';
X3DInterfaceDeclaration20 := TX3DInterfaceDeclaration.Create(nil);
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'cycleInterval';
X3DField21.AccessType := 'inputOutput';
X3DField21.Type := 'SFTime';
X3DField21.Value := '2';
{ .SetX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField21;
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'enabled';
X3DField22.AccessType := 'inputOutput';
X3DField22.Type := 'SFBool';
X3DField22.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'loop';
X3DField23.AccessType := 'inputOutput';
X3DField23.Type := 'SFBool';
X3DField23.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'startTime';
X3DField24.AccessType := 'inputOutput';
X3DField24.Type := 'SFTime';
X3DField24.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField24;
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'stopTime';
X3DField25.AccessType := 'inputOutput';
X3DField25.Type := 'SFTime';
X3DField25.Value := '-1';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'fraction_changed';
X3DField26.AccessType := 'outputOnly';
X3DField26.Type := 'SFFloat';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'isActive';
X3DField27.AccessType := 'outputOnly';
X3DField27.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField27;
X3DField28 := TX3DField.Create;
X3DField28.NameField := 'HumanoidRoot_translation_changed';
X3DField28.AccessType := 'outputOnly';
X3DField28.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField28;
X3DField29 := TX3DField.Create;
X3DField29.NameField := 'HumanoidRoot_rotation_changed';
X3DField29.AccessType := 'outputOnly';
X3DField29.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField29;
X3DField30 := TX3DField.Create;
X3DField30.NameField := 'lower_body_rotation_changed';
X3DField30.AccessType := 'outputOnly';
X3DField30.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField30;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'l_hip_rotation_changed';
X3DField31.AccessType := 'outputOnly';
X3DField31.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'l_knee_rotation_changed';
X3DField32.AccessType := 'outputOnly';
X3DField32.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'l_ankle_rotation_changed';
X3DField33.AccessType := 'outputOnly';
X3DField33.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'l_midtarsal_rotation_changed';
X3DField34.AccessType := 'outputOnly';
X3DField34.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'r_hip_rotation_changed';
X3DField35.AccessType := 'outputOnly';
X3DField35.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'r_knee_rotation_changed';
X3DField36.AccessType := 'outputOnly';
X3DField36.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'r_ankle_rotation_changed';
X3DField37.AccessType := 'outputOnly';
X3DField37.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'r_midtarsal_rotation_changed';
X3DField38.AccessType := 'outputOnly';
X3DField38.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'vl5_rotation_changed';
X3DField39.AccessType := 'outputOnly';
X3DField39.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'skullbase_rotation_changed';
X3DField40.AccessType := 'outputOnly';
X3DField40.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'l_shoulder_rotation_changed';
X3DField41.AccessType := 'outputOnly';
X3DField41.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'l_elbow_rotation_changed';
X3DField42.AccessType := 'outputOnly';
X3DField42.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'l_wrist_rotation_changed';
X3DField43.AccessType := 'outputOnly';
X3DField43.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'r_shoulder_rotation_changed';
X3DField44.AccessType := 'outputOnly';
X3DField44.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'r_elbow_rotation_changed';
X3DField45.AccessType := 'outputOnly';
X3DField45.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'r_wrist_rotation_changed';
X3DField46.AccessType := 'outputOnly';
X3DField46.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration20.X3DField := X3DField46;
{ .SetX3DInterfaceDeclaration }
X3DPrototype19.X3DInterfaceDeclaration := X3DInterfaceDeclaration20;
X3DPrototype47 := TX3DPrototype.Create;
Group48 := TGroupNode.Create;
TimeSensor49 := TTimeSensorNode.Create;
IS50 := TIS.Create;
connect51 := Tconnect.Create;
connect51.NodeField := 'cycleInterval';
connect51.ProtoField := 'cycleInterval';
{ .AddConnect }
IS50.Connect := connect51;
connect52 := Tconnect.Create;
connect52.NodeField := 'enabled';
connect52.ProtoField := 'enabled';
{ .AddConnect }
IS50.Connect := connect52;
connect53 := Tconnect.Create;
connect53.NodeField := 'loop';
connect53.ProtoField := 'loop';
{ .AddConnect }
IS50.Connect := connect53;
connect54 := Tconnect.Create;
connect54.NodeField := 'startTime';
connect54.ProtoField := 'startTime';
{ .AddConnect }
IS50.Connect := connect54;
connect55 := Tconnect.Create;
connect55.NodeField := 'stopTime';
connect55.ProtoField := 'stopTime';
{ .AddConnect }
IS50.Connect := connect55;
connect56 := Tconnect.Create;
connect56.NodeField := 'fraction_changed';
connect56.ProtoField := 'fraction_changed';
{ .AddConnect }
IS50.Connect := connect56;
connect57 := Tconnect.Create;
connect57.NodeField := 'isActive';
connect57.ProtoField := 'isActive';
{ .AddConnect }
IS50.Connect := connect57;
{ .SetIS }
TimeSensor49.IS := IS50;
{ .AddChildren }
Group48.AddChildren([TimeSensor49]);
PositionInterpolator58 := TPositionInterpolatorNode.Create;
PositionInterpolator58.SetKey([0,0.3125,0.625,1]);
PositionInterpolator58.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.049999,0),Vector3(0,-0.195,0),Vector3(0,-0.439997,0)]);
IS59 := TIS.Create;
connect60 := Tconnect.Create;
connect60.NodeField := 'value_changed';
connect60.ProtoField := 'HumanoidRoot_translation_changed';
{ .AddConnect }
IS59.Connect := connect60;
{ .SetIS }
PositionInterpolator58.IS := IS59;
{ .AddChildren }
Group48.AddChildren([PositionInterpolator58]);
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
OrientationInterpolator61.SetKey([0,1]);
OrientationInterpolator61.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
IS62 := TIS.Create;
connect63 := Tconnect.Create;
connect63.NodeField := 'value_changed';
connect63.ProtoField := 'HumanoidRoot_rotation_changed';
{ .AddConnect }
IS62.Connect := connect63;
{ .SetIS }
OrientationInterpolator61.IS := IS62;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator61]);
{ no SACROILIAC_ANIMATOR }
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator64.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.619393),Vector4(-1,0,0,1.069302),Vector4(-1,0,0,1.937315)]);
IS65 := TIS.Create;
connect66 := Tconnect.Create;
connect66.NodeField := 'value_changed';
connect66.ProtoField := 'l_hip_rotation_changed';
{ .AddConnect }
IS65.Connect := connect66;
{ .SetIS }
OrientationInterpolator64.IS := IS65;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator64]);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;
OrientationInterpolator67.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator67.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.615228),Vector4(1,0,0,0.984524),Vector4(1,0,0,2.076941)]);
IS68 := TIS.Create;
connect69 := Tconnect.Create;
connect69.NodeField := 'value_changed';
connect69.ProtoField := 'l_knee_rotation_changed';
{ .AddConnect }
IS68.Connect := connect69;
{ .SetIS }
OrientationInterpolator67.IS := IS68;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator67]);
OrientationInterpolator70 := TOrientationInterpolatorNode.Create;
OrientationInterpolator70.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator70.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.017453),Vector4(-1,0,0,0.069812),Vector4(1,0,0,0.261799)]);
IS71 := TIS.Create;
connect72 := Tconnect.Create;
connect72.NodeField := 'value_changed';
connect72.ProtoField := 'l_ankle_rotation_changed';
{ .AddConnect }
IS71.Connect := connect72;
{ .SetIS }
OrientationInterpolator70.IS := IS71;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator70]);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator73 := TOrientationInterpolatorNode.Create;
OrientationInterpolator73.SetKey([0,0.3125,1]);
OrientationInterpolator73.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.523598),Vector4(-1,0,0,0.157079)]);
IS74 := TIS.Create;
connect75 := Tconnect.Create;
connect75.NodeField := 'value_changed';
connect75.ProtoField := 'r_hip_rotation_changed';
{ .AddConnect }
IS74.Connect := connect75;
{ .SetIS }
OrientationInterpolator73.IS := IS74;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator73]);
OrientationInterpolator76 := TOrientationInterpolatorNode.Create;
OrientationInterpolator76.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator76.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.349065),Vector4(1,0,0,1.023397),Vector4(0.999934,0.008043,0.008185,1.727938)]);
IS77 := TIS.Create;
connect78 := Tconnect.Create;
connect78.NodeField := 'value_changed';
connect78.ProtoField := 'r_knee_rotation_changed';
{ .AddConnect }
IS77.Connect := connect78;
{ .SetIS }
OrientationInterpolator76.IS := IS77;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator76]);
OrientationInterpolator79 := TOrientationInterpolatorNode.Create;
OrientationInterpolator79.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator79.SetKeyValue([Vector4(1,0,0,0),Vector4(-0.991692,-0.072372,0.106338,0.205053),Vector4(-0.981083,-0.103267,0.163741,0.272231),Vector4(-1,0,0,0.349065)]);
IS80 := TIS.Create;
connect81 := Tconnect.Create;
connect81.NodeField := 'value_changed';
connect81.ProtoField := 'r_ankle_rotation_changed';
{ .AddConnect }
IS80.Connect := connect81;
{ .SetIS }
OrientationInterpolator79.IS := IS80;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator79]);
{ no R_MIDTARSAL_ANIMATOR }
OrientationInterpolator82 := TOrientationInterpolatorNode.Create;
OrientationInterpolator82.SetKey([0,1]);
OrientationInterpolator82.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.174533)]);
IS83 := TIS.Create;
connect84 := Tconnect.Create;
connect84.NodeField := 'value_changed';
connect84.ProtoField := 'vl5_rotation_changed';
{ .AddConnect }
IS83.Connect := connect84;
{ .SetIS }
OrientationInterpolator82.IS := IS83;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator82]);
{ no SKULLBASE_ANIMATOR }
OrientationInterpolator85 := TOrientationInterpolatorNode.Create;
OrientationInterpolator85.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator85.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.279252),Vector4(-1,0,0,0.506145),Vector4(-1,0,0,0.191986)]);
IS86 := TIS.Create;
connect87 := Tconnect.Create;
connect87.NodeField := 'value_changed';
connect87.ProtoField := 'l_shoulder_rotation_changed';
{ .AddConnect }
IS86.Connect := connect87;
{ .SetIS }
OrientationInterpolator85.IS := IS86;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator85]);
OrientationInterpolator88 := TOrientationInterpolatorNode.Create;
OrientationInterpolator88.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator88.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.052359),Vector4(-1,0,0,0.296706),Vector4(-1,0,0,1.431169)]);
IS89 := TIS.Create;
connect90 := Tconnect.Create;
connect90.NodeField := 'value_changed';
connect90.ProtoField := 'l_elbow_rotation_changed';
{ .AddConnect }
IS89.Connect := connect90;
{ .SetIS }
OrientationInterpolator88.IS := IS89;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator88]);
{ no L_WRIST_ANIMATOR }
OrientationInterpolator91 := TOrientationInterpolatorNode.Create;
OrientationInterpolator91.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator91.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.104719),Vector4(-1,0,0,0.157079),Vector4(1,0,0,0.314159)]);
IS92 := TIS.Create;
connect93 := Tconnect.Create;
connect93.NodeField := 'value_changed';
connect93.ProtoField := 'r_shoulder_rotation_changed';
{ .AddConnect }
IS92.Connect := connect93;
{ .SetIS }
OrientationInterpolator91.IS := IS92;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator91]);
OrientationInterpolator94 := TOrientationInterpolatorNode.Create;
OrientationInterpolator94.SetKey([0,0.3125,0.625,1]);
OrientationInterpolator94.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.837757),Vector4(-1,0,0,1.239183),Vector4(-1,0,0,1.500983)]);
IS95 := TIS.Create;
connect96 := Tconnect.Create;
connect96.NodeField := 'value_changed';
connect96.ProtoField := 'r_elbow_rotation_changed';
{ .AddConnect }
IS95.Connect := connect96;
{ .SetIS }
OrientationInterpolator94.IS := IS95;
{ .AddChildren }
Group48.AddChildren([OrientationInterpolator94]);
{ no R_WRIST_ANIMATOR }
{ .SetGroup }
X3DPrototype47.Group := Group48;
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator58.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator70.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator73.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator76.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator85.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator88.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator91.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator94.EventSet_fraction);
{ .AddX3DRoute }
{ .AddX3DPrototype }
X3DPrototype19.X3DPrototype := X3DPrototype47;
{ .AddX3DPrototype }
Group17.X3DPrototype := X3DPrototype19;
Anchor110 := TAnchorNode.Create;
Anchor110.Description := 'InterchangableActorsViaDynamicRouting';
Anchor110.SetParameter(['target=_blank']);
Anchor110.SetUrl(['InterchangableActorsViaDynamicRouting.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d','InterchangableActorsViaDynamicRouting.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape111 := TShapeNode.Create;
Text112 := TTextNode.Create;
Text112.SetText(['LOA1_KneelAnimation.x3d','defines a prototype','for animating a humanoid.','Click this text to see','InterchangableActorsViaDynamicRouting example.']);
FontStyle113 := TFontStyleNode.Create;
FontStyle113.Justify := fjMiddle;
FontStyle113.JustifyMinor := fjMiddle;
FontStyle113.Size := 0.8;
{ .SetFontStyle }
Text112.FontStyle := FontStyle113;
{ .SetGeometry }
Shape111.Geometry := Text112;
Appearance114 := TAppearanceNode.Create;
Material115 := TMaterialNode.Create;
Material115.DiffuseColor := Vector3(1,1,0.2);
{ .SetMaterial }
Appearance114.Material := Material115;
{ .SetAppearance }
Shape111.Appearance := Appearance114;
{ .AddChildren }
Anchor110.AddChildren([Shape111]);
{ .AddChildren }
Group17.AddChildren([Anchor110]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;

begin
end.
