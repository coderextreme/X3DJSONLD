unit LOA1_KneelAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateLOA1_KneelAnimation: TX3DRootNode;

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
  Anchor76: TAnchorNode;
  Shape77: TShapeNode;
  Text78: TTextNode;
  FontStyle79: TFontStyleNode;
  Appearance80: TAppearanceNode;
  Material81: TMaterialNode;

procedure InitLOA1_KneelAnimationPart0;
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
Group17.FdChildren.Add(WorldInfo18);
ProtoDeclare19 := CreateEmptyPrototype('LOA1_KneelAnimation');
ProtoDeclare19.X3DName := 'LOA1_KneelAnimation';
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
FieldVal23 := TSFBool.Create(nil, True, 'loop', False);
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl23);
end;

procedure InitLOA1_KneelAnimationPart1;
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

procedure InitLOA1_KneelAnimationPart2;
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

procedure InitLOA1_KneelAnimationPart3;
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

procedure InitLOA1_KneelAnimationPart4;
begin
TimeSensor49.FieldOrEvent('loop', True).IsClauseNamesAdd('loop');
TimeSensor49.FieldOrEvent('startTime', True).IsClauseNamesAdd('startTime');
TimeSensor49.FieldOrEvent('stopTime', True).IsClauseNamesAdd('stopTime');
TimeSensor49.FieldOrEvent('fraction_changed', True).IsClauseNamesAdd('fraction_changed');
TimeSensor49.FieldOrEvent('isActive', True).IsClauseNamesAdd('isActive');
Group48.FdChildren.Add(TimeSensor49);
PositionInterpolator50 := TPositionInterpolatorNode.Create;
PositionInterpolator50.X3DName := 'HUMANOIDROOT_POSITION_ANIMATOR';
PositionInterpolator50.SetKey([0, 0.3125, 0.625, 1]);
PositionInterpolator50.SetKeyValue([Vector3(0, 0, 0), Vector3(0, -0.049999, 0), Vector3(0, -0.195, 0), Vector3(0, -0.439997, 0)]);
PositionInterpolator50.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_translation_changed');
Group48.FdChildren.Add(PositionInterpolator50);
OrientationInterpolator51 := TOrientationInterpolatorNode.Create;
OrientationInterpolator51.X3DName := 'HUMANOIDROOT_ANIMATOR';
OrientationInterpolator51.SetKey([0, 1]);
OrientationInterpolator51.SetKeyValue([Vector4(0, 1, 0, 0), Vector4(0, 1, 0, 0)]);
OrientationInterpolator51.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator51);
{ no SACROILIAC_ANIMATOR }
OrientationInterpolator52 := TOrientationInterpolatorNode.Create;
OrientationInterpolator52.X3DName := 'L_HIP_ANIMATOR';
OrientationInterpolator52.SetKey([0, 0.3125, 0.625, 1]);
OrientationInterpolator52.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(-1, 0, 0, 0.619393), Vector4(-1, 0, 0, 1.069302), Vector4(-1, 0, 0, 1.937315)]);
OrientationInterpolator52.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_hip_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator52);
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;
OrientationInterpolator53.X3DName := 'L_KNEE_ANIMATOR';
OrientationInterpolator53.SetKey([0, 0.3125, 0.625, 1]);
OrientationInterpolator53.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(1, 0, 0, 0.615228), Vector4(1, 0, 0, 0.984524), Vector4(1, 0, 0, 2.076941)]);
OrientationInterpolator53.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_knee_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator53);
OrientationInterpolator54 := TOrientationInterpolatorNode.Create;
OrientationInterpolator54.X3DName := 'L_ANKLE_ANIMATOR';
OrientationInterpolator54.SetKey([0, 0.3125, 0.625, 1]);
OrientationInterpolator54.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(-1, 0, 0, 0.017453), Vector4(-1, 0, 0, 0.069812), Vector4(1, 0, 0, 0.261799)]);
OrientationInterpolator54.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_ankle_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator54);
{ no L_MIDTARSAL_ANIMATOR }
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;
OrientationInterpolator55.X3DName := 'R_HIP_ANIMATOR';
end;

procedure InitLOA1_KneelAnimationPart5;
begin
OrientationInterpolator55.SetKey([0, 0.3125, 1]);
OrientationInterpolator55.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(1, 0, 0, 0.523598), Vector4(-1, 0, 0, 0.157079)]);
OrientationInterpolator55.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_hip_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator55);
OrientationInterpolator56 := TOrientationInterpolatorNode.Create;
OrientationInterpolator56.X3DName := 'R_KNEE_ANIMATOR';
OrientationInterpolator56.SetKey([0, 0.3125, 0.625, 1]);
OrientationInterpolator56.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(1, 0, 0, 0.349065), Vector4(1, 0, 0, 1.023397), Vector4(0.999934, 0.008043, 0.008185, 1.727938)]);
OrientationInterpolator56.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_knee_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator56);
OrientationInterpolator57 := TOrientationInterpolatorNode.Create;
OrientationInterpolator57.X3DName := 'R_ANKLE_ANIMATOR';
OrientationInterpolator57.SetKey([0, 0.3125, 0.625, 1]);
OrientationInterpolator57.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(-0.991692, -0.072372, 0.106338, 0.205053), Vector4(-0.981083, -0.103267, 0.163741, 0.272231), Vector4(-1, 0, 0, 0.349065)]);
OrientationInterpolator57.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_ankle_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator57);
{ no R_MIDTARSAL_ANIMATOR }
OrientationInterpolator58 := TOrientationInterpolatorNode.Create;
OrientationInterpolator58.X3DName := 'VL5_ANIMATOR';
OrientationInterpolator58.SetKey([0, 1]);
OrientationInterpolator58.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(1, 0, 0, 0.174533)]);
OrientationInterpolator58.FieldOrEvent('value_changed', True).IsClauseNamesAdd('vl5_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator58);
{ no SKULLBASE_ANIMATOR }
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;
OrientationInterpolator59.X3DName := 'L_SHOULDER_ANIMATOR';
OrientationInterpolator59.SetKey([0, 0.3125, 0.625, 1]);
OrientationInterpolator59.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(-1, 0, 0, 0.279252), Vector4(-1, 0, 0, 0.506145), Vector4(-1, 0, 0, 0.191986)]);
OrientationInterpolator59.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_shoulder_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator59);
OrientationInterpolator60 := TOrientationInterpolatorNode.Create;
OrientationInterpolator60.X3DName := 'L_ELBOW_ANIMATOR';
OrientationInterpolator60.SetKey([0, 0.3125, 0.625, 1]);
OrientationInterpolator60.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(-1, 0, 0, 0.052359), Vector4(-1, 0, 0, 0.296706), Vector4(-1, 0, 0, 1.431169)]);
OrientationInterpolator60.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_elbow_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator60);
{ no L_WRIST_ANIMATOR }
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
OrientationInterpolator61.X3DName := 'R_SHOULDER_ANIMATOR';
OrientationInterpolator61.SetKey([0, 0.3125, 0.625, 1]);
end;

procedure InitLOA1_KneelAnimationPart6;
begin
OrientationInterpolator61.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(-1, 0, 0, 0.104719), Vector4(-1, 0, 0, 0.157079), Vector4(1, 0, 0, 0.314159)]);
OrientationInterpolator61.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_shoulder_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator62 := TOrientationInterpolatorNode.Create;
OrientationInterpolator62.X3DName := 'R_ELBOW_ANIMATOR';
OrientationInterpolator62.SetKey([0, 0.3125, 0.625, 1]);
OrientationInterpolator62.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(-1, 0, 0, 0.837757), Vector4(-1, 0, 0, 1.239183), Vector4(-1, 0, 0, 1.500983)]);
OrientationInterpolator62.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_elbow_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator62);
{ no R_WRIST_ANIMATOR }
ProtoDeclare19.Node.AddChildren([Group48]);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator50.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator51.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_HIP_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator52.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_KNEE_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator53.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ANKLE_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator54.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_HIP_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator55.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_KNEE_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator56.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ANKLE_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator57.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO VL5_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator58.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_SHOULDER_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator59.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ELBOW_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator60.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_SHOULDER_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ELBOW_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator62.EventSet_fraction);
X3D0.AddPrototype(ProtoDeclare19);
Anchor76 := TAnchorNode.Create;
Anchor76.Description := 'InterchangableActorsViaDynamicRouting';
end;

procedure InitLOA1_KneelAnimationPart7;
begin
Anchor76.SetParameter(['target=_blank']);
Anchor76.SetUrl(['InterchangableActorsViaDynamicRouting.x3d', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d', 'InterchangableActorsViaDynamicRouting.wrl', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape77 := TShapeNode.Create;
Text78 := TTextNode.Create;
Text78.SetText(['LOA1_KneelAnimation.x3d', 'defines a prototype', 'for animating a humanoid.', 'Click this text to see', 'InterchangableActorsViaDynamicRouting example.']);
FontStyle79 := TFontStyleNode.Create;
FontStyle79.Justify := fjMiddle;
FontStyle79.JustifyMinor := fjMiddle;
FontStyle79.Size := 0.8;
Text78.FontStyle := FontStyle79;
Shape77.Geometry := Text78;
Appearance80 := TAppearanceNode.Create;
Material81 := TMaterialNode.Create;
Material81.DiffuseColor := Vector3(1, 1, 0.2);
Appearance80.Material := Material81;
Shape77.Appearance := Appearance80;
Anchor76.FdChildren.Add(Shape77);
Group17.FdChildren.Add(Anchor76);
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
  InitLOA1_KneelAnimationPart6;
  InitLOA1_KneelAnimationPart7;
  Result := X3D0;
end;

begin
end.
