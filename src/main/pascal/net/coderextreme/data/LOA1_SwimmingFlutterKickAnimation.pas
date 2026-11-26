unit LOA1_SwimmingFlutterKickAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateLOA1_SwimmingFlutterKickAnimation: TX3DRootNode;

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
  Group15: TGroupNode;
  WorldInfo16: TWorldInfoNode;
  ProtoDeclare17: TX3DPrototype;
  FieldDecl19: TX3DInterfaceDeclaration;
  FieldVal19: TSFTime;
  FieldDecl20: TX3DInterfaceDeclaration;
  FieldVal20: TSFBool;
  FieldDecl21: TX3DInterfaceDeclaration;
  FieldVal21: TSFBool;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TSFTime;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TSFTime;
  FieldDecl24: TX3DInterfaceDeclaration;
  FieldVal24: TX3DEvent;
  FieldDecl25: TX3DInterfaceDeclaration;
  FieldVal25: TX3DEvent;
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
  Group46: TGroupNode;
  TimeSensor47: TTimeSensorNode;
  PositionInterpolator48: TPositionInterpolatorNode;
  OrientationInterpolator49: TOrientationInterpolatorNode;
  OrientationInterpolator50: TOrientationInterpolatorNode;
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
  Viewpoint80: TViewpointNode;
  Anchor81: TAnchorNode;
  Shape82: TShapeNode;
  Text83: TTextNode;
  FontStyle84: TFontStyleNode;
  Appearance85: TAppearanceNode;
  Material86: TMaterialNode;

procedure InitLOA1_SwimmingFlutterKickAnimationPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_SwimmingFlutterKickAnimation.x3d';
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
X3D0.Meta['creator'] := 'Etsuko Lippi';
X3D0.Meta['created'] := '13 December 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['warning'] := 'not yet tested, need to compare with NancyDivingExample interpolators';
X3D0.Meta['reference'] := 'https://www.HAnim.org';
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
X3D0.Meta['subject'] := 'Swimming flutter kick Animation HAnim 2001';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'LOA1_SwimmingFlutterKickAnimation.x3d';
Group15.FdChildren.Add(WorldInfo16);
ProtoDeclare17 := CreateEmptyPrototype('LOA1_DivingAnimation');
ProtoDeclare17.X3DName := 'LOA1_DivingAnimation';
FieldVal19 := TSFTime.Create(nil, True, 'cycleInterval', 7);
FieldDecl19 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl19.FieldOrEvent := FieldVal19;
FieldVal19.ParentInterfaceDeclaration := FieldDecl19;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl19);
FieldVal20 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl20 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl20.FieldOrEvent := FieldVal20;
FieldVal20.ParentInterfaceDeclaration := FieldDecl20;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl20);
FieldVal21 := TSFBool.Create(nil, True, 'loop', True);
FieldDecl21 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl21.FieldOrEvent := FieldVal21;
FieldVal21.ParentInterfaceDeclaration := FieldDecl21;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl21);
FieldVal22 := TSFTime.Create(nil, True, 'startTime', 0);
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart1;
begin
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl22);
FieldVal23 := TSFTime.Create(nil, True, 'stopTime', -1);
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl23);
FieldVal24 := TSFFloat.CreateEvent(nil, 'fraction_changed', False);
FieldDecl24 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl24.FieldOrEvent := FieldVal24;
FieldVal24.ParentInterfaceDeclaration := FieldDecl24;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl24);
FieldVal25 := TSFBool.CreateEvent(nil, 'isActive', False);
FieldDecl25 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl25.FieldOrEvent := FieldVal25;
FieldVal25.ParentInterfaceDeclaration := FieldDecl25;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl25);
FieldVal26 := TSFVec3f.CreateEvent(nil, 'HumanoidRoot_translation_changed', False);
FieldDecl26 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl26.FieldOrEvent := FieldVal26;
FieldVal26.ParentInterfaceDeclaration := FieldDecl26;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl26);
FieldVal27 := TSFRotation.CreateEvent(nil, 'HumanoidRoot_rotation_changed', False);
FieldDecl27 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl27.FieldOrEvent := FieldVal27;
FieldVal27.ParentInterfaceDeclaration := FieldDecl27;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl27);
FieldVal28 := TSFRotation.CreateEvent(nil, 'lower_body_rotation_changed', False);
FieldDecl28 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl28.FieldOrEvent := FieldVal28;
FieldVal28.ParentInterfaceDeclaration := FieldDecl28;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl28);
FieldVal29 := TSFRotation.CreateEvent(nil, 'l_hip_rotation_changed', False);
FieldDecl29 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl29.FieldOrEvent := FieldVal29;
FieldVal29.ParentInterfaceDeclaration := FieldDecl29;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl29);
FieldVal30 := TSFRotation.CreateEvent(nil, 'l_knee_rotation_changed', False);
FieldDecl30 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart2;
begin
FieldDecl30.FieldOrEvent := FieldVal30;
FieldVal30.ParentInterfaceDeclaration := FieldDecl30;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl30);
FieldVal31 := TSFRotation.CreateEvent(nil, 'l_ankle_rotation_changed', False);
FieldDecl31 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl31.FieldOrEvent := FieldVal31;
FieldVal31.ParentInterfaceDeclaration := FieldDecl31;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl31);
FieldVal32 := TSFRotation.CreateEvent(nil, 'l_midtarsal_rotation_changed', False);
FieldDecl32 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl32.FieldOrEvent := FieldVal32;
FieldVal32.ParentInterfaceDeclaration := FieldDecl32;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl32);
FieldVal33 := TSFRotation.CreateEvent(nil, 'r_hip_rotation_changed', False);
FieldDecl33 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl33.FieldOrEvent := FieldVal33;
FieldVal33.ParentInterfaceDeclaration := FieldDecl33;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl33);
FieldVal34 := TSFRotation.CreateEvent(nil, 'r_knee_rotation_changed', False);
FieldDecl34 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl34.FieldOrEvent := FieldVal34;
FieldVal34.ParentInterfaceDeclaration := FieldDecl34;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl34);
FieldVal35 := TSFRotation.CreateEvent(nil, 'r_ankle_rotation_changed', False);
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl35);
FieldVal36 := TSFRotation.CreateEvent(nil, 'r_midtarsal_rotation_changed', False);
FieldDecl36 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl36.FieldOrEvent := FieldVal36;
FieldVal36.ParentInterfaceDeclaration := FieldDecl36;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl36);
FieldVal37 := TSFRotation.CreateEvent(nil, 'vl5_rotation_changed', False);
FieldDecl37 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl37.FieldOrEvent := FieldVal37;
FieldVal37.ParentInterfaceDeclaration := FieldDecl37;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl37);
FieldVal38 := TSFRotation.CreateEvent(nil, 'skullbase_rotation_changed', False);
FieldDecl38 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart3;
begin
FieldDecl38.FieldOrEvent := FieldVal38;
FieldVal38.ParentInterfaceDeclaration := FieldDecl38;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl38);
FieldVal39 := TSFRotation.CreateEvent(nil, 'l_shoulder_rotation_changed', False);
FieldDecl39 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl39.FieldOrEvent := FieldVal39;
FieldVal39.ParentInterfaceDeclaration := FieldDecl39;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl39);
FieldVal40 := TSFRotation.CreateEvent(nil, 'l_elbow_rotation_changed', False);
FieldDecl40 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl40.FieldOrEvent := FieldVal40;
FieldVal40.ParentInterfaceDeclaration := FieldDecl40;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl40);
FieldVal41 := TSFRotation.CreateEvent(nil, 'l_wrist_rotation_changed', False);
FieldDecl41 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl41.FieldOrEvent := FieldVal41;
FieldVal41.ParentInterfaceDeclaration := FieldDecl41;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl41);
FieldVal42 := TSFRotation.CreateEvent(nil, 'r_shoulder_rotation_changed', False);
FieldDecl42 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl42.FieldOrEvent := FieldVal42;
FieldVal42.ParentInterfaceDeclaration := FieldDecl42;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl42);
FieldVal43 := TSFRotation.CreateEvent(nil, 'r_elbow_rotation_changed', False);
FieldDecl43 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl43.FieldOrEvent := FieldVal43;
FieldVal43.ParentInterfaceDeclaration := FieldDecl43;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl43);
FieldVal44 := TSFRotation.CreateEvent(nil, 'r_wrist_rotation_changed', False);
FieldDecl44 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl44.FieldOrEvent := FieldVal44;
FieldVal44.ParentInterfaceDeclaration := FieldDecl44;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl44);
Group46 := TGroupNode.Create;
TimeSensor47 := TTimeSensorNode.Create;
TimeSensor47.X3DName := 'TIMER';
TimeSensor47.Loop := True;
TimeSensor47.FieldOrEvent('cycleInterval', True).IsClauseNamesAdd('cycleInterval');
TimeSensor47.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
TimeSensor47.FieldOrEvent('loop', True).IsClauseNamesAdd('loop');
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart4;
begin
TimeSensor47.FieldOrEvent('startTime', True).IsClauseNamesAdd('startTime');
TimeSensor47.FieldOrEvent('stopTime', True).IsClauseNamesAdd('stopTime');
TimeSensor47.FieldOrEvent('fraction_changed', True).IsClauseNamesAdd('fraction_changed');
TimeSensor47.FieldOrEvent('isActive', True).IsClauseNamesAdd('isActive');
Group46.FdChildren.Add(TimeSensor47);
PositionInterpolator48 := TPositionInterpolatorNode.Create;
PositionInterpolator48.X3DName := 'HUMANOIDROOT_POSITION_ANIMATOR';
PositionInterpolator48.SetKey([0, 0.04167, 0.125, 0.1667, 0.2083, 0.25, 0.2917, 0.375, 0.4583, 0.5, 0.5417, 0.5833, 0.625, 0.7083, 0.75, 0.7917, 0.875, 0.9167, 1]);
PositionInterpolator48.SetKeyValue([Vector3(0, -0.00928, 0), Vector3(0, -0.003858, 0), Vector3(0, -0.008847, 0), Vector3(0, -0.01486, 0), Vector3(0, -0.02641, 0), Vector3(0, -0.03934, 0), Vector3(0, -0.0502, 0), Vector3(0, -0.07469, 0), Vector3(0, -0.02732, 0), Vector3(0, -0.01608, 0), Vector3(0, -0.01129, 0), Vector3(0, -0.005819, 0), Vector3(0, -0.002004, 0), Vector3(0, -0.002579, 0), Vector3(0, -0.0143, 0), Vector3(0, -0.03799, 0), Vector3(0, -0.05648, 0), Vector3(0, -0.045, 0), Vector3(0, -0.00928, 0)]);
PositionInterpolator48.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_translation_changed');
Group46.FdChildren.Add(PositionInterpolator48);
OrientationInterpolator49 := TOrientationInterpolatorNode.Create;
OrientationInterpolator49.X3DName := 'HUMANOIDROOT_ANIMATOR';
OrientationInterpolator49.SetKey([0, 1]);
OrientationInterpolator49.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator49.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator49);
{ no SACROILIAC_ANIMATOR }
OrientationInterpolator50 := TOrientationInterpolatorNode.Create;
OrientationInterpolator50.X3DName := 'L_HIP_ANIMATOR';
OrientationInterpolator50.SetKey([0, 0.25, 0.375, 0.6667, 0.7917, 0.9167, 1]);
OrientationInterpolator50.SetKeyValue([Vector4(-0.873, 0.06094, 0.484, 0.2865), Vector4(0.9963, -0.01057, 0.08481, 0.2488), Vector4(0.9965, 0.01591, -0.08222, 0.3836), Vector4(-1, 0, 0, 0.5518), Vector4(-0.9964, 0.02231, 0.0817, 0.5351), Vector4(-0.9809, 0.04912, 0.1881, 0.5204), Vector4(-0.873, 0.06094, 0.484, 0.2865)]);
OrientationInterpolator50.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_hip_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator50);
OrientationInterpolator51 := TOrientationInterpolatorNode.Create;
OrientationInterpolator51.X3DName := 'L_KNEE_ANIMATOR';
OrientationInterpolator51.SetKey([0, 0.2083, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1]);
OrientationInterpolator51.SetKeyValue([Vector4(1, 0, 0, 0.3226), Vector4(1, 0, 0, 0.1556), Vector4(1, 0, 0, 0.08678), Vector4(1, 0, 0, 0.8751), Vector4(1, 0, 0, 1.131), Vector4(1, 0, 0, 0.09961), Vector4(1, 0, 0, 0.3942), Vector4(1, 0, 0, 0.3226)]);
OrientationInterpolator51.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_knee_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator51);
OrientationInterpolator52 := TOrientationInterpolatorNode.Create;
OrientationInterpolator52.X3DName := 'L_ANKLE_ANIMATOR';
OrientationInterpolator52.SetKey([0, 0.125, 0.2083, 0.375, 0.4583, 0.5, 0.6667, 0.75, 0.7917, 0.9167, 1]);
OrientationInterpolator52.SetKeyValue([Vector4(1, 0, 0, 0.6001), Vector4(1, 0, 0, 0.6509), Vector4(1, 0, 0, 0.6001), Vector4(1, 0, 0, 0.6001), Vector4(1, 0, 0, 0.6509), Vector4(1, 0, 0, 0.6001), Vector4(1, 0, 0, 0.6001), Vector4(1, 0, 0, 0.6509), Vector4(1, 0, 0, 0.6001), Vector4(1, 0, 0, 0.6509), Vector4(1, 0, 0, 0.6001)]);
OrientationInterpolator52.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_ankle_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator52);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;
OrientationInterpolator53.X3DName := 'R_HIP_ANIMATOR';
OrientationInterpolator53.SetKey([0, 0.125, 0.2083, 0.2917, 0.5, 0.7917, 0.9167, 1]);
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart5;
begin
OrientationInterpolator53.SetKeyValue([Vector4(-0.5831, 0.03511, 0.8116, 0.1481), Vector4(-0.995, 0.02296, 0.09674, 0.4683), Vector4(-1, 0.00192, 0.007964, 0.4732), Vector4(-0.998, -0.0158, -0.06102, 0.5079), Vector4(-0.9131, -0.06243, -0.403, 0.3361), Vector4(1, 0, 0, 0.2571), Vector4(0.9891, -0.02805, 0.1444, 0.3879), Vector4(-0.5831, 0.03511, 0.8116, 0.1481)]);
OrientationInterpolator53.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_hip_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator53);
OrientationInterpolator54 := TOrientationInterpolatorNode.Create;
OrientationInterpolator54.X3DName := 'R_KNEE_ANIMATOR';
OrientationInterpolator54.SetKey([0, 0.125, 0.2083, 0.375, 0.5, 0.6667, 0.9167, 1]);
OrientationInterpolator54.SetKeyValue([Vector4(1, 0, 0, 0.8573), Vector4(1, 0, 0, 0.5351), Vector4(1, 0, 0, 0.1756), Vector4(1, 0, 0, 0.1194), Vector4(1, 0, 0, 0.3153), Vector4(1, 0, 0, 0.09354), Vector4(1, 0, 0, 0.08558), Vector4(1, 0, 0, 0.8573)]);
OrientationInterpolator54.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_knee_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator54);
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;
OrientationInterpolator55.X3DName := 'R_ANKLE_ANIMATOR';
OrientationInterpolator55.SetKey([0, 0.125, 0.2083, 0.375, 0.4583, 0.5, 0.6667, 0.75, 0.7917, 0.9167, 1]);
OrientationInterpolator55.SetKeyValue([Vector4(1, 0, 0, 0.8001), Vector4(1, 0, 0, 0.8509), Vector4(1, 0, 0, 0.8001), Vector4(1, 0, 0, 0.8001), Vector4(1, 0, 0, 0.8509), Vector4(1, 0, 0, 0.8001), Vector4(1, 0, 0, 0.8001), Vector4(1, 0, 0, 0.8001), Vector4(1, 0, 0, 0.8001), Vector4(1, 0, 0, 0.8509), Vector4(1, 0, 0, 0.86001)]);
OrientationInterpolator55.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_ankle_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator55);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator56 := TOrientationInterpolatorNode.Create;
OrientationInterpolator56.X3DName := 'VL5_ANIMATOR';
OrientationInterpolator56.SetKey([0, 0.2083, 0.375, 0.75, 0.8333, 1]);
OrientationInterpolator56.SetKeyValue([Vector4(0, 1, 0, 0.0826), Vector4(-0.01972, -0.5974, 0.8017, 0.08231), Vector4(0.009296, -0.9648, 0.2627, 0.1734), Vector4(-0.01238, 0.9549, -0.2968, 0.08732), Vector4(-0.008125, 0.9691, -0.2463, 0.158), Vector4(0, 1, 0, 0.0826)]);
OrientationInterpolator56.FieldOrEvent('value_changed', True).IsClauseNamesAdd('vl5_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator56);
OrientationInterpolator57 := TOrientationInterpolatorNode.Create;
OrientationInterpolator57.X3DName := 'SKULLBASE_ANIMATOR';
OrientationInterpolator57.SetKey([0, 0.28, 0.3, 0.32, 0.4, 0.45, 0.6, 0.65, 0.7, 0.75, 0.85, 0.9, 0.95, 1]);
OrientationInterpolator57.SetKeyValue([Vector4(-1, 0, 0, 1), Vector4(-1, 0, 0, 1), Vector4(-1, 0, 0, 0.999), Vector4(-1, 0, 0, 0.99), Vector4(-1, 0, 0, 0.99), Vector4(-1, 0, 0, 0.9), Vector4(-1, 0, 0, 0.9), Vector4(-1, 0, 0, 0.9), Vector4(-1, 0, 0, 0.9), Vector4(-1, 0, 0, 0.9), Vector4(-1, 0, 0, 0.9), Vector4(-1, 0, 0, 0.9), Vector4(-1, 0, 0, 0.9), Vector4(-1, 0, 0, 1)]);
OrientationInterpolator57.FieldOrEvent('value_changed', True).IsClauseNamesAdd('skullbase_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator57);
OrientationInterpolator58 := TOrientationInterpolatorNode.Create;
OrientationInterpolator58.X3DName := 'L_SHOULDER_ANIMATOR';
OrientationInterpolator58.SetKey([0, 0.25, 0.375, 0.6667, 0.7917, 0.9167, 1]);
OrientationInterpolator58.SetKeyValue([Vector4(0, 0, 1, 0.1), Vector4(0, 0, 1, 0.2), Vector4(0, 0, 1, 0.2), Vector4(0.86, 0.25, 0.42, 0.5), Vector4(0.86, 0.25, 0.42, 0.8), Vector4(0.86, 0.25, 0.42, 0.4), Vector4(0.86, 0.25, 0.42, 0.2)]);
OrientationInterpolator58.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_shoulder_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator58);
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;
OrientationInterpolator59.X3DName := 'L_ELBOW_ANIMATOR';
OrientationInterpolator59.SetKey([0, 0.28, 0.32, 0.64, 0.76, 1]);
OrientationInterpolator59.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.1229), Vector4(-1, 0, 0, 0.1229), Vector4(-1, 0, 0, 0.5976), Vector4(-1, 0, 0, 0.3917), Vector4(0, 0, 1, 0)]);
OrientationInterpolator59.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_elbow_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator59);
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart6;
begin
OrientationInterpolator60 := TOrientationInterpolatorNode.Create;
OrientationInterpolator60.X3DName := 'L_WRIST_ANIMATOR';
OrientationInterpolator60.SetKey([0, 0.32, 0.64, 0.88, 1]);
OrientationInterpolator60.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0.067, 0.98, -0.128, 4.15), Vector4(0.067, 0.98, -0.128, 4.15), Vector4(0.067, 0.98, -0.128, 4.15), Vector4(0, 0, 1, 0)]);
OrientationInterpolator60.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_wrist_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator60);
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
OrientationInterpolator61.X3DName := 'R_SHOULDER_ANIMATOR';
OrientationInterpolator61.SetKey([0, 0.45, 0.64, 0.76, 0.88, 1]);
OrientationInterpolator61.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0.9992, 0.02042, 0.03558, 7.2), Vector4(0.9989, -0.04623, 0.005159, 4.079), Vector4(-0.8687, -0.2525, -0.4261, 1.501), Vector4(-0.941, -0.2893, -0.1754, 0.4788), Vector4(0, 0, 1, 0)]);
OrientationInterpolator61.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_shoulder_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator62 := TOrientationInterpolatorNode.Create;
OrientationInterpolator62.X3DName := 'R_ELBOW_ANIMATOR';
OrientationInterpolator62.SetKey([0, 0.28, 0.32, 0.64, 0.76, 1]);
OrientationInterpolator62.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.04151), Vector4(-1, 0, 0, 0.04151), Vector4(-1, 0, 0, 0.5855), Vector4(-1, 0, 0, 0.5852), Vector4(0, 0, 1, 0)]);
OrientationInterpolator62.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_elbow_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator62);
OrientationInterpolator63 := TOrientationInterpolatorNode.Create;
OrientationInterpolator63.X3DName := 'R_WRIST_ANIMATOR';
OrientationInterpolator63.SetKey([0, 0.28, 0.32, 0.64, 0.76, 1]);
OrientationInterpolator63.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-0.0585279, 0.983903, -0.168849, 1.85956), Vector4(-0.0585279, 0.983903, -0.168849, 1.85956), Vector4(-0.00222418, 0.99801, -0.0630095, 1.46072), Vector4(0, 1, 0, 0.497349), Vector4(0, 0, 1, 0)]);
OrientationInterpolator63.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_wrist_rotation_changed');
Group46.FdChildren.Add(OrientationInterpolator63);
ProtoDeclare17.Node.AddChildren([Group46]);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, PositionInterpolator48.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator49.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO SKULLBASE_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator57.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO VL5_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator56.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_HIP_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator50.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_KNEE_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator51.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ANKLE_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator52.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_HIP_ANIMATOR.set_fraction }
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart7;
begin
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator53.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_KNEE_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator54.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ANKLE_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator55.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_SHOULDER_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator58.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ELBOW_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator59.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_WRIST_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator60.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_SHOULDER_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ELBOW_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator62.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_WRIST_ANIMATOR.set_fraction }
ProtoDeclare17.Node.AddRoute(TimeSensor47.EventFraction_changed, OrientationInterpolator63.EventSet_fraction);
X3D0.AddPrototype(ProtoDeclare17);
Viewpoint80 := TViewpointNode.Create;
Viewpoint80.Description := 'LOA1_SwimmingFlutterKickAnimation scene';
Viewpoint80.Position := Vector3(0, 0, 12);
Group15.FdChildren.Add(Viewpoint80);
Anchor81 := TAnchorNode.Create;
Anchor81.Description := 'Nancy Diving';
Anchor81.SetParameter(['target=_blank']);
Anchor81.SetUrl(['NancyDiving.x3d', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d', 'NancyDiving.wrl', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl']);
Shape82 := TShapeNode.Create;
Text83 := TTextNode.Create;
Text83.SetText(['LOA1_SwimmingFlutterKickAnimation.x3d', 'defines a prototype', 'for animating a humanoid.', 'Click text to see example.']);
FontStyle84 := TFontStyleNode.Create;
FontStyle84.Justify := fjMiddle;
FontStyle84.JustifyMinor := fjMiddle;
FontStyle84.Size := 0.8;
Text83.FontStyle := FontStyle84;
Shape82.Geometry := Text83;
Appearance85 := TAppearanceNode.Create;
Material86 := TMaterialNode.Create;
Material86.DiffuseColor := Vector3(1, 1, 0.2);
Appearance85.Material := Material86;
Shape82.Appearance := Appearance85;
end;

procedure InitLOA1_SwimmingFlutterKickAnimationPart8;
begin
Anchor81.FdChildren.Add(Shape82);
Group15.FdChildren.Add(Anchor81);
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
  InitLOA1_SwimmingFlutterKickAnimationPart6;
  InitLOA1_SwimmingFlutterKickAnimationPart7;
  InitLOA1_SwimmingFlutterKickAnimationPart8;
  Result := X3D0;
end;

begin
end.
