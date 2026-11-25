unit LOA1_JumpAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateLOA1_JumpAnimation: TX3DRootNode;

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

procedure InitLOA1_JumpAnimationPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'LOA1_JumpAnimation.x3d';
X3D0.Meta['description'] := 'Humanoid animation prototype reusable by any Humanoid.';
X3D0.Meta['creator'] := 'Cindy Ballreich cindy@ballreich.net 3Name3D';
X3D0.Meta['rights'] := '1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.';
X3D0.Meta['translator'] := 'Scott Tufts';
X3D0.Meta['translated'] := '1 December 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['reference'] := 'https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl';
X3D0.Meta['reference'] := 'https://www.HAnim.org';
X3D0.Meta['reference'] := 'https://HAnim.org/Models';
X3D0.Meta['reference'] := 'https://HAnim.org/Nodes';
X3D0.Meta['subject'] := 'InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'LOA1_JumpAnimation.x3d';
Group17.FdChildren.Add(WorldInfo18);
ProtoDeclare19 := CreateEmptyPrototype('LOA1_JumpAnimation');
ProtoDeclare19.X3DName := 'LOA1_JumpAnimation';
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

procedure InitLOA1_JumpAnimationPart1;
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

procedure InitLOA1_JumpAnimationPart2;
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

procedure InitLOA1_JumpAnimationPart3;
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
TimeSensor49.Loop := True;
TimeSensor49.FieldOrEvent('cycleInterval', True).IsClauseNamesAdd('cycleInterval');
end;

procedure InitLOA1_JumpAnimationPart4;
begin
TimeSensor49.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
TimeSensor49.FieldOrEvent('loop', True).IsClauseNamesAdd('loop');
TimeSensor49.FieldOrEvent('startTime', True).IsClauseNamesAdd('startTime');
TimeSensor49.FieldOrEvent('stopTime', True).IsClauseNamesAdd('stopTime');
TimeSensor49.FieldOrEvent('fraction_changed', True).IsClauseNamesAdd('fraction_changed');
TimeSensor49.FieldOrEvent('isActive', True).IsClauseNamesAdd('isActive');
Group48.FdChildren.Add(TimeSensor49);
PositionInterpolator50 := TPositionInterpolatorNode.Create;
PositionInterpolator50.X3DName := 'HUMANOIDROOT_POSITION_ANIMATOR';
PositionInterpolator50.SetKey([0, 0.04, 0.08, 0.12, 0.16, 0.2, 0.24, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.8, 0.84, 0.88, 0.92, 0.96, 1]);
PositionInterpolator50.SetKeyValue([Vector3(0, 0, 0), Vector3(0, -0.01264, -0.01289), Vector3(0, -0.04712, -0.03738), Vector3(-0.0003345, -0.1049, -0.05353), Vector3(-0.0005712, -0.1892, -0.06561), Vector3(-0.0008233, -0.286, -0.06276), Vector3(-0.0009591, -0.3795, -0.05148), Vector3(-0.00106, -0.4484, -0.03656), Vector3(-0.00106, -0.4484, -0.03656), Vector3(-0.001122, -0.3269, -0.1499), Vector3(-0.0008616, -0.13, -0.06358), Vector3(-0.0005128, -0.03123, -0.05488), Vector3(0.0004779, 0.053, 0.02732), Vector3(0.0001728, 0.4148, 0.006873), Vector3(0, 0.03045, 0.02148), Vector3(0, -0.01299, -0.01057), Vector3(0, -0.06932, -0.01064), Vector3(0.0001365, -0.1037, -0.005059), Vector3(0.0001279, -0.07198, -0.007596), Vector3(0.000141, -0.01626, -0.004935), Vector3(0, 0, 0)]);
PositionInterpolator50.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_translation_changed');
Group48.FdChildren.Add(PositionInterpolator50);
OrientationInterpolator51 := TOrientationInterpolatorNode.Create;
OrientationInterpolator51.X3DName := 'HUMANOIDROOT_ANIMATOR';
OrientationInterpolator51.SetKey([0, 0.28, 0.32, 0.48, 0.64, 0.76, 1]);
OrientationInterpolator51.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 0.3273), Vector4(1, 0, 0, 0.3273), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator51.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator51);
OrientationInterpolator52 := TOrientationInterpolatorNode.Create;
OrientationInterpolator52.X3DName := 'SACROILIAC_ANIMATOR';
OrientationInterpolator52.SetKey([0, 0.28, 0.32, 0.48, 0.76, 1]);
OrientationInterpolator52.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 0.1892), Vector4(1, 0, 0, 0.1892), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator52.FieldOrEvent('value_changed', True).IsClauseNamesAdd('lower_body_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator52);
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;
OrientationInterpolator53.X3DName := 'L_HIP_ANIMATOR';
OrientationInterpolator53.SetKey([0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.88, 1]);
OrientationInterpolator53.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 4.349), Vector4(1, 0, 0, 4.349), Vector4(1, 0, 0, 4.615), Vector4(-1, 0, 0, 0.9136), Vector4(-1, 0, 0, 0.3614), Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.7869), Vector4(-1, 0, 0, 0.3918), Vector4(-1, 0, 0, 0.5433), Vector4(0, 0, 1, 0)]);
OrientationInterpolator53.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_hip_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator53);
OrientationInterpolator54 := TOrientationInterpolatorNode.Create;
OrientationInterpolator54.X3DName := 'L_KNEE_ANIMATOR';
OrientationInterpolator54.SetKey([0, 0.28, 0.32, 0.48, 0.64, 0.76, 0.88, 1]);
OrientationInterpolator54.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 2.047), Vector4(1, 0, 0, 2.047), Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 1.566), Vector4(1, 0, 0, 0.5913), Vector4(1, 0, 0, 0.9235), Vector4(0, 0, 1, 0)]);
OrientationInterpolator54.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_knee_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator54);
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;
OrientationInterpolator55.X3DName := 'L_ANKLE_ANIMATOR';
OrientationInterpolator55.SetKey([0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.84, 0.88, 0.92, 0.96, 1]);
end;

procedure InitLOA1_JumpAnimationPart5;
begin
OrientationInterpolator55.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.625), Vector4(-1, 0, 0, 0.625), Vector4(-1, 0, 0, 0.3364), Vector4(-1, 0, 0, 0.2742), Vector4(-1, 0, 0, 0.05078), Vector4(1, 0, 0, 0.2833), Vector4(1, 0, 0, 0.6667), Vector4(1, 0, 0, 0.2833), Vector4(-1, 0, 0, 0.2108), Vector4(-1, 0, 0, 0.375), Vector4(-1, 0, 0, 0.3146), Vector4(-1, 0, 0, 0.1174), Vector4(0, 0, 1, 0)]);
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
OrientationInterpolator57.SetKey([0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.88, 1]);
OrientationInterpolator57.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 4.433), Vector4(1, 0, 0, 4.433), Vector4(1, 0, 0, 4.647), Vector4(-1, 0, 0, 0.8943), Vector4(-1, 0, 0, 0.3698), Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.4963), Vector4(-1, 0, 0, 0.3829), Vector4(-1, 0, 0, 0.5169), Vector4(0, 0, 1, 0)]);
OrientationInterpolator57.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_hip_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator57);
OrientationInterpolator58 := TOrientationInterpolatorNode.Create;
OrientationInterpolator58.X3DName := 'R_KNEE_ANIMATOR';
OrientationInterpolator58.SetKey([0, 0.28, 0.32, 0.48, 0.64, 0.76, 0.88, 1]);
OrientationInterpolator58.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 2.005), Vector4(1, 0, 0, 2.005), Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 0.9507), Vector4(1, 0, 0, 0.5845), Vector4(1, 0, 0, 0.9054), Vector4(0, 0, 1, 0)]);
OrientationInterpolator58.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_knee_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator58);
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;
OrientationInterpolator59.X3DName := 'R_ANKLE_ANIMATOR';
OrientationInterpolator59.SetKey([0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.84, 0.88, 0.92, 0.96, 1]);
OrientationInterpolator59.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.6735), Vector4(-1, 0, 0, 0.6735), Vector4(-1, 0, 0, 0.3527), Vector4(-1, 0, 0, 0.3038), Vector4(-1, 0, 0, 0.07964), Vector4(1, 0, 0, 0.3001), Vector4(1, 0, 0, 0.6509), Vector4(1, 0, 0, 0.3001), Vector4(-1, 0, 0, 0.2087), Vector4(-1, 0, 0, 0.3756), Vector4(-1, 0, 0, 0.3279), Vector4(-1, 0, 0, 0.1193), Vector4(0, 0, 1, 0)]);
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
end;

procedure InitLOA1_JumpAnimationPart6;
begin
OrientationInterpolator62.X3DName := 'SKULLBASE_ANIMATOR';
OrientationInterpolator62.SetKey([0, 0.28, 0.32, 0.48, 0.76, 1]);
OrientationInterpolator62.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.5989), Vector4(-1, 0, 0, 0.5989), Vector4(-1, 0, 0, 0.3216), Vector4(1, 0, 0, 0.06503), Vector4(0, 0, 1, 0)]);
OrientationInterpolator62.FieldOrEvent('value_changed', True).IsClauseNamesAdd('skullbase_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator62);
OrientationInterpolator63 := TOrientationInterpolatorNode.Create;
OrientationInterpolator63.X3DName := 'L_SHOULDER_ANIMATOR';
OrientationInterpolator63.SetKey([0, 0.28, 0.32, 0.64, 0.76, 0.88, 1]);
OrientationInterpolator63.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-0.9987, 0.02554, 0.04498, 1.57), Vector4(-0.9987, 0.02554, 0.04498, 1.57), Vector4(1, 0.0004113, 0.003055, 4.114), Vector4(-0.8413, 0.3238, 0.4329, 1.453), Vector4(-0.877, 0.4198, 0.2337, 0.6009), Vector4(0, 0, 1, 0)]);
OrientationInterpolator63.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_shoulder_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator63);
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.X3DName := 'L_ELBOW_ANIMATOR';
OrientationInterpolator64.SetKey([0, 0.28, 0.32, 0.64, 0.76, 1]);
OrientationInterpolator64.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.1229), Vector4(-1, 0, 0, 0.1229), Vector4(-1, 0, 0, 0.5976), Vector4(-1, 0, 0, 0.3917), Vector4(0, 0, 1, 0)]);
OrientationInterpolator64.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_elbow_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator64);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;
OrientationInterpolator65.X3DName := 'L_WRIST_ANIMATOR';
OrientationInterpolator65.SetKey([0, 0.28, 0.32, 0.64, 0.76, 0.88, 1]);
OrientationInterpolator65.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0.0672928, 0.989475, -0.128107, 4.15574), Vector4(0.0672928, 0.989475, -0.128107, 4.15574), Vector4(0.00364942, 0.999901, 0.0135896, 4.5822), Vector4(0, -1, 0, 0.655922), Vector4(-0.00050618, -0.999999, 0.0012782, 1.28397), Vector4(0, 0, 1, 0)]);
OrientationInterpolator65.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_wrist_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator65);
OrientationInterpolator66 := TOrientationInterpolatorNode.Create;
OrientationInterpolator66.X3DName := 'R_SHOULDER_ANIMATOR';
OrientationInterpolator66.SetKey([0, 0.28, 0.32, 0.64, 0.76, 0.88, 1]);
OrientationInterpolator66.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0.9992, 0.02042, 0.03558, 4.688), Vector4(0.9992, 0.02042, 0.03558, 4.688), Vector4(0.9989, -0.04623, 0.005159, 4.079), Vector4(-0.8687, -0.2525, -0.4261, 1.501), Vector4(-0.941, -0.2893, -0.1754, 0.4788), Vector4(0, 0, 1, 0)]);
OrientationInterpolator66.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_shoulder_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator66);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;
OrientationInterpolator67.X3DName := 'R_ELBOW_ANIMATOR';
OrientationInterpolator67.SetKey([0, 0.28, 0.32, 0.64, 0.76, 1]);
OrientationInterpolator67.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.04151), Vector4(-1, 0, 0, 0.04151), Vector4(-1, 0, 0, 0.5855), Vector4(-1, 0, 0, 0.5852), Vector4(0, 0, 1, 0)]);
OrientationInterpolator67.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_elbow_rotation_changed');
Group48.FdChildren.Add(OrientationInterpolator67);
OrientationInterpolator68 := TOrientationInterpolatorNode.Create;
OrientationInterpolator68.X3DName := 'R_WRIST_ANIMATOR';
OrientationInterpolator68.SetKey([0, 0.28, 0.32, 0.64, 0.76, 1]);
OrientationInterpolator68.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-0.0585279, 0.983903, -0.168849, 1.85956), Vector4(-0.0585279, 0.983903, -0.168849, 1.85956), Vector4(-0.00222418, 0.99801, -0.0630095, 1.46072), Vector4(0, 1, 0, 0.497349), Vector4(0, 0, 1, 0)]);
OrientationInterpolator68.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_wrist_rotation_changed');
end;

procedure InitLOA1_JumpAnimationPart7;
begin
Group48.FdChildren.Add(OrientationInterpolator68);
ProtoDeclare19.Node.AddChildren([Group48]);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, PositionInterpolator50.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator51.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO SACROILIAC_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator52.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_HIP_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator53.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_KNEE_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator54.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ANKLE_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator55.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_MIDTARSAL_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator56.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_HIP_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator57.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_KNEE_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator58.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ANKLE_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator59.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_MIDTARSAL_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator60.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO VL5_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO SKULLBASE_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator62.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_SHOULDER_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator63.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ELBOW_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_WRIST_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator65.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_SHOULDER_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator66.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ELBOW_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_WRIST_ANIMATOR.set_fraction }
ProtoBody47.AddRoute(TimeSensor49.EventFraction_changed, OrientationInterpolator68.EventSet_fraction);
end;

procedure InitLOA1_JumpAnimationPart8;
begin
X3D0.AddPrototype(ProtoDeclare19);
Anchor88 := TAnchorNode.Create;
Anchor88.Description := 'see InterchangableActorsViaDynamicRouting scene';
Anchor88.SetParameter(['target=_blank']);
Anchor88.SetUrl(['InterchangableActorsViaDynamicRouting.x3d', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d', 'InterchangableActorsViaDynamicRouting.wrl', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape89 := TShapeNode.Create;
Text90 := TTextNode.Create;
Text90.SetText(['LOA1_JumpAnimation.x3d', 'defines a prototype', 'for animating a humanoid.', 'Click this text to see', 'InterchangableActorsViaDynamicRouting example.']);
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

function CreateLOA1_JumpAnimation: TX3DRootNode;
begin
  InitLOA1_JumpAnimationPart0;
  InitLOA1_JumpAnimationPart1;
  InitLOA1_JumpAnimationPart2;
  InitLOA1_JumpAnimationPart3;
  InitLOA1_JumpAnimationPart4;
  InitLOA1_JumpAnimationPart5;
  InitLOA1_JumpAnimationPart6;
  InitLOA1_JumpAnimationPart7;
  InitLOA1_JumpAnimationPart8;
  Result := X3D0;
end;

begin
end.
