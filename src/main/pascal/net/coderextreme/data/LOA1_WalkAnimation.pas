unit LOA1_WalkAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateLOA1_WalkAnimation: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group17: TGroupNode;
  WorldInfo18: TWorldInfoNode;
  ProtoDeclare19: TX3DPrototype;
  FieldDecl21: TX3DInterfaceDeclaration;
  FieldVal21: TSFTime;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TSFBool;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TSFBool;
  FieldDecl24: TX3DInterfaceDeclaration;
  FieldVal24: TSFTime;
  FieldDecl25: TX3DInterfaceDeclaration;
  FieldVal25: TSFTime;
  FieldDecl26: TX3DInterfaceDeclaration;
  FieldVal26: TX3DEvent;
  FieldDecl27: TX3DInterfaceDeclaration;
  FieldVal27: TX3DEvent;
  FieldDecl28: TX3DInterfaceDeclaration;
  FieldVal28: TX3DEvent;
  FieldDecl29: TX3DInterfaceDeclaration;
  FieldVal29: TX3DEvent;
  FieldDecl30: TX3DInterfaceDeclaration;
  FieldVal30: TX3DEvent;
  FieldDecl31: TX3DInterfaceDeclaration;
  FieldVal31: TX3DEvent;
  FieldDecl32: TX3DInterfaceDeclaration;
  FieldVal32: TX3DEvent;
  FieldDecl33: TX3DInterfaceDeclaration;
  FieldVal33: TX3DEvent;
  FieldDecl34: TX3DInterfaceDeclaration;
  FieldVal34: TX3DEvent;
  FieldDecl35: TX3DInterfaceDeclaration;
  FieldVal35: TX3DEvent;
  FieldDecl36: TX3DInterfaceDeclaration;
  FieldVal36: TX3DEvent;
  FieldDecl37: TX3DInterfaceDeclaration;
  FieldVal37: TX3DEvent;
  FieldDecl38: TX3DInterfaceDeclaration;
  FieldVal38: TX3DEvent;
  FieldDecl39: TX3DInterfaceDeclaration;
  FieldVal39: TX3DEvent;
  FieldDecl40: TX3DInterfaceDeclaration;
  FieldVal40: TX3DEvent;
  FieldDecl41: TX3DInterfaceDeclaration;
  FieldVal41: TX3DEvent;
  FieldDecl42: TX3DInterfaceDeclaration;
  FieldVal42: TX3DEvent;
  FieldDecl43: TX3DInterfaceDeclaration;
  FieldVal43: TX3DEvent;
  FieldDecl44: TX3DInterfaceDeclaration;
  FieldVal44: TX3DEvent;
  FieldDecl45: TX3DInterfaceDeclaration;
  FieldVal45: TX3DEvent;
  FieldDecl46: TX3DInterfaceDeclaration;
  FieldVal46: TX3DEvent;
  Group48: TGroupNode;
  TimeSensor49: TTimeSensorNode;
  PositionInterpolator50: TPositionInterpolatorNode;
  OrientationInterpolator51: TOrientationInterpolatorNode;
  OrientationInterpolator52: TOrientationInterpolatorNode;
  OrientationInterpolator53: TOrientationInterpolatorNode;
  OrientationInterpolator54: TOrientationInterpolatorNode;
  OrientationInterpolator55: TOrientationInterpolatorNode;
  OrientationInterpolator56: TOrientationInterpolatorNode;
  OrientationInterpolator57: TOrientationInterpolatorNode;
  OrientationInterpolator58: TOrientationInterpolatorNode;
  OrientationInterpolator59: TOrientationInterpolatorNode;
  OrientationInterpolator60: TOrientationInterpolatorNode;
  OrientationInterpolator61: TOrientationInterpolatorNode;
  OrientationInterpolator62: TOrientationInterpolatorNode;
  OrientationInterpolator63: TOrientationInterpolatorNode;
  OrientationInterpolator64: TOrientationInterpolatorNode;
  OrientationInterpolator65: TOrientationInterpolatorNode;
  OrientationInterpolator66: TOrientationInterpolatorNode;
  OrientationInterpolator67: TOrientationInterpolatorNode;
  OrientationInterpolator68: TOrientationInterpolatorNode;
  Anchor88: TAnchorNode;
  Shape89: TShapeNode;
  Text90: TTextNode;
  FontStyle91: TFontStyleNode;
  Appearance92: TAppearanceNode;
  Material93: TMaterialNode;

procedure InitLOA1_WalkAnimationPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_WalkAnimation.x3d';
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
X3D0.Meta['creator'] := 'Cindy Ballreich cindy@ballreich.net 3Name3D';
X3D0.Meta['rights'] := '1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.';
X3D0.Meta['translator'] := 'Don Brutzman';
X3D0.Meta['translated'] := '1 October 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['reference'] := 'https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
X3D0.Meta['reference'] := 'https://HAnim.org/Specifications/HAnim2001';
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
X3D0.Meta['subject'] := 'Nancy Walk Animation HAnim 2001';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'LOA1_WalkAnimation.x3d';
Group17.FdChildren.Add(WorldInfo18);
ProtoDeclare19 := CreateEmptyPrototype('LOA1_WalkAnimation');
ProtoDeclare19.X3DName := 'LOA1_WalkAnimation';
FieldVal21 := TSFTime.Create(nil, True, 'cycleInterval', 2);
FieldDecl21 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl21.FieldOrEvent := FieldVal21;
FieldVal21.ParentInterfaceDeclaration := FieldDecl21;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl21);
FieldVal22 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl22);
FieldVal23 := TSFBool.Create(nil, True, 'loop', True);
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl23);
end;

procedure InitLOA1_WalkAnimationPart1;
begin
FieldVal24 := TSFTime.Create(nil, True, 'startTime', 0);
FieldDecl24 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl24.FieldOrEvent := FieldVal24;
FieldVal24.ParentInterfaceDeclaration := FieldDecl24;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl24);
FieldVal25 := TSFTime.Create(nil, True, 'stopTime', -1);
FieldDecl25 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl25.FieldOrEvent := FieldVal25;
FieldVal25.ParentInterfaceDeclaration := FieldDecl25;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl25);
FieldVal26 := TSFFloat.CreateEvent(nil, 'fraction_changed', False);
FieldDecl26 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl26.FieldOrEvent := FieldVal26;
FieldVal26.ParentInterfaceDeclaration := FieldDecl26;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl26);
FieldVal27 := TSFBool.CreateEvent(nil, 'isActive', False);
FieldDecl27 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl27.FieldOrEvent := FieldVal27;
FieldVal27.ParentInterfaceDeclaration := FieldDecl27;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl27);
FieldVal28 := TSFVec3f.CreateEvent(nil, 'HumanoidRoot_translation_changed', False);
FieldDecl28 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl28.FieldOrEvent := FieldVal28;
FieldVal28.ParentInterfaceDeclaration := FieldDecl28;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl28);
FieldVal29 := TSFRotation.CreateEvent(nil, 'HumanoidRoot_rotation_changed', False);
FieldDecl29 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl29.FieldOrEvent := FieldVal29;
FieldVal29.ParentInterfaceDeclaration := FieldDecl29;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl29);
FieldVal30 := TSFRotation.CreateEvent(nil, 'lower_body_rotation_changed', False);
FieldDecl30 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl30.FieldOrEvent := FieldVal30;
FieldVal30.ParentInterfaceDeclaration := FieldDecl30;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl30);
FieldVal31 := TSFRotation.CreateEvent(nil, 'l_hip_rotation_changed', False);
FieldDecl31 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl31.FieldOrEvent := FieldVal31;
FieldVal31.ParentInterfaceDeclaration := FieldDecl31;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl31);
end;

procedure InitLOA1_WalkAnimationPart2;
begin
FieldVal32 := TSFRotation.CreateEvent(nil, 'l_knee_rotation_changed', False);
FieldDecl32 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl32.FieldOrEvent := FieldVal32;
FieldVal32.ParentInterfaceDeclaration := FieldDecl32;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl32);
FieldVal33 := TSFRotation.CreateEvent(nil, 'l_ankle_rotation_changed', False);
FieldDecl33 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl33.FieldOrEvent := FieldVal33;
FieldVal33.ParentInterfaceDeclaration := FieldDecl33;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl33);
FieldVal34 := TSFRotation.CreateEvent(nil, 'l_midtarsal_rotation_changed', False);
FieldDecl34 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl34.FieldOrEvent := FieldVal34;
FieldVal34.ParentInterfaceDeclaration := FieldDecl34;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl34);
FieldVal35 := TSFRotation.CreateEvent(nil, 'r_hip_rotation_changed', False);
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl35);
FieldVal36 := TSFRotation.CreateEvent(nil, 'r_knee_rotation_changed', False);
FieldDecl36 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl36.FieldOrEvent := FieldVal36;
FieldVal36.ParentInterfaceDeclaration := FieldDecl36;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl36);
FieldVal37 := TSFRotation.CreateEvent(nil, 'r_ankle_rotation_changed', False);
FieldDecl37 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl37.FieldOrEvent := FieldVal37;
FieldVal37.ParentInterfaceDeclaration := FieldDecl37;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl37);
FieldVal38 := TSFRotation.CreateEvent(nil, 'r_midtarsal_rotation_changed', False);
FieldDecl38 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl38.FieldOrEvent := FieldVal38;
FieldVal38.ParentInterfaceDeclaration := FieldDecl38;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl38);
FieldVal39 := TSFRotation.CreateEvent(nil, 'vl5_rotation_changed', False);
FieldDecl39 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl39.FieldOrEvent := FieldVal39;
FieldVal39.ParentInterfaceDeclaration := FieldDecl39;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl39);
end;

procedure InitLOA1_WalkAnimationPart3;
begin
FieldVal40 := TSFRotation.CreateEvent(nil, 'skullbase_rotation_changed', False);
FieldDecl40 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl40.FieldOrEvent := FieldVal40;
FieldVal40.ParentInterfaceDeclaration := FieldDecl40;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl40);
FieldVal41 := TSFRotation.CreateEvent(nil, 'l_shoulder_rotation_changed', False);
FieldDecl41 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl41.FieldOrEvent := FieldVal41;
FieldVal41.ParentInterfaceDeclaration := FieldDecl41;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl41);
FieldVal42 := TSFRotation.CreateEvent(nil, 'l_elbow_rotation_changed', False);
FieldDecl42 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl42.FieldOrEvent := FieldVal42;
FieldVal42.ParentInterfaceDeclaration := FieldDecl42;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl42);
FieldVal43 := TSFRotation.CreateEvent(nil, 'l_wrist_rotation_changed', False);
FieldDecl43 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl43.FieldOrEvent := FieldVal43;
FieldVal43.ParentInterfaceDeclaration := FieldDecl43;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl43);
FieldVal44 := TSFRotation.CreateEvent(nil, 'r_shoulder_rotation_changed', False);
FieldDecl44 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl44.FieldOrEvent := FieldVal44;
FieldVal44.ParentInterfaceDeclaration := FieldDecl44;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl44);
FieldVal45 := TSFRotation.CreateEvent(nil, 'r_elbow_rotation_changed', False);
FieldDecl45 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl45.FieldOrEvent := FieldVal45;
FieldVal45.ParentInterfaceDeclaration := FieldDecl45;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl45);
FieldVal46 := TSFRotation.CreateEvent(nil, 'r_wrist_rotation_changed', False);
FieldDecl46 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl46.FieldOrEvent := FieldVal46;
FieldVal46.ParentInterfaceDeclaration := FieldDecl46;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl46);
Group48 := TGroupNode.Create;
TimeSensor49 := TTimeSensorNode.Create;
TimeSensor49.X3DName := 'TIMER';
TimeSensor49.FieldOrEvent('cycleInterval', True).IsClauseNamesAdd('cycleInterval');
TimeSensor49.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
end;

procedure InitLOA1_WalkAnimationPart4;
begin
TimeSensor49.FieldOrEvent('loop', True).IsClauseNamesAdd('loop');
TimeSensor49.FieldOrEvent('startTime', True).IsClauseNamesAdd('startTime');
TimeSensor49.FieldOrEvent('stopTime', True).IsClauseNamesAdd('stopTime');
TimeSensor49.FieldOrEvent('fraction_changed', True).IsClauseNamesAdd('fraction_changed');
TimeSensor49.FieldOrEvent('isActive', True).IsClauseNamesAdd('isActive');
Group48.FdChildren.Add(TimeSensor49);
PositionInterpolator50 := TPositionInterpolatorNode.Create;
PositionInterpolator50.X3DName := 'HUMANOIDROOT_POSITION_ANIMATOR';
PositionInterpolator50.SetKey([0, 0.04167, 0.125, 0.1667, 0.2083, 0.25, 0.2917, 0.375, 0.4583, 0.5, 0.5417, 0.5833, 0.625, 0.7083, 0.75, 0.7917, 0.875, 0.9167, 1]);
PositionInterpolator50.SetKeyValue([Vector3(0, -0.00928, 0), Vector3(0, -0.003858, 0), Vector3(0, -0.008847, 0), Vector3(0, -0.01486, 0), Vector3(0, -0.02641, 0), Vector3(0, -0.03934, 0), Vector3(0, -0.0502, 0), Vector3(0, -0.07469, 0), Vector3(0, -0.02732, 0), Vector3(0, -0.01608, 0), Vector3(0, -0.01129, 0), Vector3(0, -0.005819, 0), Vector3(0, -0.002004, 0), Vector3(0, -0.002579, 0), Vector3(0, -0.0143, 0), Vector3(0, -0.03799, 0), Vector3(0, -0.05648, 0), Vector3(0, -0.045, 0), Vector3(0, -0.00928, 0)]);
PositionInterpolator50.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_translation_changed');
Group48.FdChildren.Add(PositionInterpolator50);
OrientationInterpolator51 := TOrientationInterpolatorNode.Create;
OrientationInterpolator51.X3DName := 'HUMANOIDROOT_ANIMATOR';
OrientationInterpolator51.SetKey([0, 1]);
OrientationInterpolator51.SetKeyValue([Vector4(0, 1, 0, 0), Vector4(0, 1, 0, 0)]);
OrientationInterpolator51.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator51);
OrientationInterpolator52 := TOrientationInterpolatorNode.Create;
OrientationInterpolator52.X3DName := 'SACROILIAC_ANIMATOR';
OrientationInterpolator52.SetKey([0, 0.5, 1]);
OrientationInterpolator52.SetKeyValue([Vector4(0, 0, -1, 0.1056), Vector4(0, 0, 1, 0.09018), Vector4(0, 0, -1, 0.1056)]);
OrientationInterpolator52.FieldOrEvent('value_changed', True).IsClauseNamesAdd('lower_body_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator52);
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;
OrientationInterpolator53.X3DName := 'L_HIP_ANIMATOR';
OrientationInterpolator53.SetKey([0, 0.25, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1]);
OrientationInterpolator53.SetKeyValue([Vector4(-0.873, 0.06094, 0.484, 0.2865), Vector4(0.9963, -0.01057, 0.08481, 0.2488), Vector4(0.9965, 0.01591, -0.08222, 0.3836), Vector4(-0.7018, -0.03223, -0.7117, 0.1289), Vector4(-1, 0, 0, 0.5518), Vector4(-0.9964, 0.02231, 0.0817, 0.5351), Vector4(-0.9809, 0.04912, 0.1881, 0.5204), Vector4(-0.873, 0.06094, 0.484, 0.2865)]);
OrientationInterpolator53.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_hip_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator53);
OrientationInterpolator54 := TOrientationInterpolatorNode.Create;
OrientationInterpolator54.X3DName := 'L_KNEE_ANIMATOR';
OrientationInterpolator54.SetKey([0, 0.2083, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1]);
OrientationInterpolator54.SetKeyValue([Vector4(1, 0, 0, 0.3226), Vector4(1, 0, 0, 0.1556), Vector4(1, 0, 0, 0.08678), Vector4(1, 0, 0, 0.8751), Vector4(1, 0, 0, 1.131), Vector4(1, 0, 0, 0.09961), Vector4(1, 0, 0, 0.3942), Vector4(1, 0, 0, 0.3226)]);
OrientationInterpolator54.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_knee_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator54);
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;
OrientationInterpolator55.X3DName := 'L_ANKLE_ANIMATOR';
OrientationInterpolator55.SetKey([0, 0.125, 0.2083, 0.375, 0.6667, 0.9167, 1]);
OrientationInterpolator55.SetKeyValue([Vector4(-1, 0, 0, 0.06714), Vector4(-1, 0, 0, 0.2152), Vector4(-1, 0, 0, 0.3184), Vector4(-1, 0, 0, 0.4717), Vector4(-1, 0, 0, 0.2912), Vector4(1, 0, 0, 0.1222), Vector4(-1, 0, 0, 0.06714)]);
end;

procedure InitLOA1_WalkAnimationPart5;
begin
OrientationInterpolator55.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_ankle_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator55);
OrientationInterpolator56 := TOrientationInterpolatorNode.Create;
OrientationInterpolator56.X3DName := 'L_MIDTARSAL_ANIMATOR';
OrientationInterpolator56.SetKey([0, 0.5, 1]);
OrientationInterpolator56.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(1, 0, 0, -0.2), Vector4(1, 0, 0, 0)]);
OrientationInterpolator56.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_midtarsal_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator56);
OrientationInterpolator57 := TOrientationInterpolatorNode.Create;
OrientationInterpolator57.X3DName := 'R_HIP_ANIMATOR';
OrientationInterpolator57.SetKey([0, 0.125, 0.2083, 0.2917, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1]);
OrientationInterpolator57.SetKeyValue([Vector4(-0.5831, 0.03511, 0.8116, 0.1481), Vector4(-0.995, 0.02296, 0.09674, 0.4683), Vector4(-1, 0.00192, 0.007964, 0.4732), Vector4(-0.998, -0.0158, -0.06102, 0.5079), Vector4(-0.9911, -0.03541, -0.1286, 0.5419), Vector4(-0.9131, -0.06243, -0.403, 0.3361), Vector4(-0.4306, -0.07962, -0.899, 0.07038), Vector4(1, 0, 0, 0.2571), Vector4(0.9891, -0.02805, 0.1444, 0.3879), Vector4(-0.5831, 0.03511, 0.8116, 0.1481)]);
OrientationInterpolator57.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_hip_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator57);
OrientationInterpolator58 := TOrientationInterpolatorNode.Create;
OrientationInterpolator58.X3DName := 'R_KNEE_ANIMATOR';
OrientationInterpolator58.SetKey([0, 0.125, 0.2083, 0.2917, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1]);
OrientationInterpolator58.SetKeyValue([Vector4(1, 0, 0, 0.8573), Vector4(1, 0, 0, 0.8926), Vector4(1, 0, 0, 0.5351), Vector4(1, 0, 0, 0.1756), Vector4(1, 0, 0, 0.1194), Vector4(1, 0, 0, 0.3153), Vector4(1, -1.176e-8, -4.971e-9, 0.09354), Vector4(1, 0, 0, 0.08558), Vector4(1, 0, 0, 0.2475), Vector4(1, 0, 0, 0.8573)]);
OrientationInterpolator58.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_knee_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator58);
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;
OrientationInterpolator59.X3DName := 'R_ANKLE_ANIMATOR';
OrientationInterpolator59.SetKey([0, 0.125, 0.2083, 0.375, 0.4583, 0.5, 0.6667, 0.75, 0.7917, 0.9167, 1]);
OrientationInterpolator59.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.3533), Vector4(-1, 0, 0, 0.1072), Vector4(1, 0, 0, 0.2612), Vector4(1, -1.641e-7, 1.827e-8, 0.1268), Vector4(-1, 0, 0, 0.01793), Vector4(-1, 0, 0, 0.05824), Vector4(-1, 0, 0, 0.2398), Vector4(-1, 0, 0, 0.35), Vector4(-1, 0, 0, 0.3322), Vector4(0, 0, 1, 0)]);
OrientationInterpolator59.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_ankle_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator59);
OrientationInterpolator60 := TOrientationInterpolatorNode.Create;
OrientationInterpolator60.X3DName := 'R_MIDTARSAL_ANIMATOR';
OrientationInterpolator60.SetKey([0, 0.5, 1]);
OrientationInterpolator60.SetKeyValue([Vector4(1, 0, 0, -0.2), Vector4(1, 0, 0, 0), Vector4(1, 0, 0, -0.2)]);
OrientationInterpolator60.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_midtarsal_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator60);
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
OrientationInterpolator61.X3DName := 'VL5_ANIMATOR';
OrientationInterpolator61.SetKey([0, 0.2083, 0.375, 0.75, 0.8333, 1]);
OrientationInterpolator61.SetKeyValue([Vector4(0, 1, 0, 0.0826), Vector4(-0.01972, -0.5974, 0.8017, 0.08231), Vector4(0.009296, -0.9648, 0.2627, 0.1734), Vector4(-0.01238, 0.9549, -0.2968, 0.08732), Vector4(-0.008125, 0.9691, -0.2463, 0.158), Vector4(0, 1, 0, 0.0826)]);
OrientationInterpolator61.FieldOrEvent('value_changed', True).IsClauseNamesAdd('vl5_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator62 := TOrientationInterpolatorNode.Create;
OrientationInterpolator62.X3DName := 'SKULLBASE_ANIMATOR';
end;

procedure InitLOA1_WalkAnimationPart6;
begin
OrientationInterpolator62.SetKey([0, 0.375, 0.4167, 0.5, 0.5833, 0.6667, 0.75, 0.8333, 0.9167, 1]);
OrientationInterpolator62.SetKeyValue([Vector4(0, -1, 0, 0.08642), Vector4(0, 1, 0, 0.1825), Vector4(0, 1, 0, 0.1505), Vector4(0, 1, 0, 0.1053), Vector4(0, 1, 0, 0.04391), Vector4(0, -1, 0, 0.03119), Vector4(0, -1, 0, 0.07936), Vector4(0, -1, 0, 0.1616), Vector4(0, -1, 0, 0.155), Vector4(0, -1, 0, 0.08642)]);
OrientationInterpolator62.FieldOrEvent('value_changed', True).IsClauseNamesAdd('skullbase_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator62);
OrientationInterpolator63 := TOrientationInterpolatorNode.Create;
OrientationInterpolator63.X3DName := 'L_SHOULDER_ANIMATOR';
OrientationInterpolator63.SetKey([0, 0.375, 0.9167, 1]);
OrientationInterpolator63.SetKeyValue([Vector4(1, 0, 0, 0.1189), Vector4(-1, -5.928e-7, 1.525e-7, 0.1861), Vector4(1, -2.038e-7, -1.257e-7, 0.3357), Vector4(1, 0, 0, 0.1189)]);
OrientationInterpolator63.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_shoulder_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator63);
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.X3DName := 'L_ELBOW_ANIMATOR';
OrientationInterpolator64.SetKey([0, 0.375, 0.9167, 1]);
OrientationInterpolator64.SetKeyValue([Vector4(-1, -1.58298e-7, 8.15967e-8, 0.0659878), Vector4(-1, -3.28826e-8, -2.31665e-8, 0.488383), Vector4(-1, 0.00000306462, -0.00000311947, 0.0177536), Vector4(-1, -1.58298e-7, 8.15967e-8, 0.0659878)]);
OrientationInterpolator64.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_elbow_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator64);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;
OrientationInterpolator65.X3DName := 'L_WRIST_ANIMATOR';
OrientationInterpolator65.SetKey([0, 0.375, 0.9167, 1]);
OrientationInterpolator65.SetKeyValue([Vector4(0.00000151276, -1, 0.0000017724, 0.461076), Vector4(-0.330195, -0.927451, 0.175516, 0.538852), Vector4(0.0327774, -0.999314, -0.0172185, 0.492033), Vector4(0.00000151276, -1, 0.0000017724, 0.461076)]);
OrientationInterpolator65.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_wrist_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator65);
OrientationInterpolator66 := TOrientationInterpolatorNode.Create;
OrientationInterpolator66.X3DName := 'R_SHOULDER_ANIMATOR';
OrientationInterpolator66.SetKey([0, 0.375, 0.9167, 1]);
OrientationInterpolator66.SetKeyValue([Vector4(-1, -7.689e-7, -1.48e-7, 0.09346), Vector4(1, 5.004e-8, 2.254e-8, 0.3197), Vector4(-1, -1.104e-7, 5.267e-10, 0.1564), Vector4(-1, -7.689e-7, -1.48e-7, 0.09346)]);
OrientationInterpolator66.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_shoulder_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator66);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;
OrientationInterpolator67.X3DName := 'R_ELBOW_ANIMATOR';
OrientationInterpolator67.SetKey([0, 0.375, 0.9167, 1]);
OrientationInterpolator67.SetKeyValue([Vector4(-1, -4.45619e-8, 2.70318e-8, 0.411508), Vector4(-1, 8.16742e-7, -1.09556e-7, 0.0925011), Vector4(-1, -2.47628e-8, -7.02862e-9, 0.572568), Vector4(-1, -4.45619e-8, 2.70318e-8, 0.411508)]);
OrientationInterpolator67.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_elbow_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator67);
OrientationInterpolator68 := TOrientationInterpolatorNode.Create;
OrientationInterpolator68.X3DName := 'R_WRIST_ANIMATOR';
OrientationInterpolator68.SetKey([0, 0.375, 0.9167, 1]);
OrientationInterpolator68.SetKeyValue([Vector4(-0.8129, 0.4759, -0.3357, 0.1346), Vector4(0.1533, -0.9878, 0.02582, 0.3902), Vector4(-0.5701, 0.7604, -0.311, 0.366), Vector4(-0.8129, 0.4759, -0.3357, 0.1346)]);
OrientationInterpolator68.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_wrist_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator68);
end;

procedure InitLOA1_WalkAnimationPart7;
begin
ProtoDeclare19.Node.AddChildren([Group48]);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator50.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator51.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO SACROILIAC_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator52.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_HIP_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator53.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_KNEE_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator54.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ANKLE_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator55.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_MIDTARSAL_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator56.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_HIP_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator57.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_KNEE_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator58.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ANKLE_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator59.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_MIDTARSAL_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator60.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO VL5_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO SKULLBASE_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator62.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_SHOULDER_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator63.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ELBOW_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_WRIST_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator65.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_SHOULDER_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator66.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ELBOW_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_WRIST_ANIMATOR.set_fraction }
ProtoDeclare19.Node.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator68.EventSet_fraction);
X3D0.AddPrototype(ProtoDeclare19);
end;

procedure InitLOA1_WalkAnimationPart8;
begin
{ ====================================== }
{ Point to example use in case someone inspects this file }
Anchor88 := TAnchorNode.Create;
Anchor88.Description := 'InterchangableActorsViaDynamicRouting';
Anchor88.SetParameter(['target=_blank']);
Anchor88.SetUrl(['InterchangableActorsViaDynamicRouting.x3d', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d', 'InterchangableActorsViaDynamicRouting.wrl', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape89 := TShapeNode.Create;
Text90 := TTextNode.Create;
Text90.SetText(['LOA1_WalkAnimation.x3d', 'defines a prototype', 'for animating a humanoid.', 'Click this text to see', 'InterchangableActorsViaDynamicRouting example.']);
FontStyle91 := TFontStyleNode.Create;
FontStyle91.Justify := fjMiddle;
FontStyle91.JustifyMinor := fjMiddle;
FontStyle91.Size := 0.8;
Text90.FontStyle := FontStyle91;
Shape89.Geometry := Text90;
Appearance92 := TAppearanceNode.Create;
Material93 := TMaterialNode.Create;
Material93.DiffuseColor := Vector3(1, 1, 0.2);
Appearance92.Material := Material93;
Shape89.Appearance := Appearance92;
Anchor88.FdChildren.Add(Shape89);
Group17.FdChildren.Add(Anchor88);
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
  InitLOA1_WalkAnimationPart6;
  InitLOA1_WalkAnimationPart7;
  InitLOA1_WalkAnimationPart8;
  Result := X3D0;
end;

begin
end.
