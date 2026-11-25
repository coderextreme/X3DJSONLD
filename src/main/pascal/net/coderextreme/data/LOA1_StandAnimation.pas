unit LOA1_StandAnimation;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateLOA1_StandAnimation: TX3DRootNode;

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
  Group18: TGroupNode;
  WorldInfo19: TWorldInfoNode;
  ProtoDeclare20: TX3DPrototype;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TSFTime;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TSFBool;
  FieldDecl24: TX3DInterfaceDeclaration;
  FieldVal24: TSFBool;
  FieldDecl25: TX3DInterfaceDeclaration;
  FieldVal25: TSFTime;
  FieldDecl26: TX3DInterfaceDeclaration;
  FieldVal26: TSFTime;
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
  FieldDecl47: TX3DInterfaceDeclaration;
  FieldVal47: TX3DEvent;
  Group49: TGroupNode;
  TimeSensor50: TTimeSensorNode;
  PositionInterpolator51: TPositionInterpolatorNode;
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
  OrientationInterpolator69: TOrientationInterpolatorNode;
  Anchor89: TAnchorNode;
  Shape90: TShapeNode;
  Text91: TTextNode;
  FontStyle92: TFontStyleNode;
  Appearance93: TAppearanceNode;
  Material94: TMaterialNode;

procedure InitLOA1_StandAnimationPart0;
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
Group18.FdChildren.Add(WorldInfo19);
ProtoDeclare20 := CreateEmptyPrototype('LOA1_StandAnimation');
ProtoDeclare20.X3DName := 'LOA1_StandAnimation';
FieldVal22 := TSFTime.Create(nil, True, 'cycleInterval', 0.009999999776482582);
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl22);
FieldVal23 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl23);
FieldVal24 := TSFBool.Create(nil, True, 'loop', True);
FieldDecl24 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl24.FieldOrEvent := FieldVal24;
FieldVal24.ParentInterfaceDeclaration := FieldDecl24;
end;

procedure InitLOA1_StandAnimationPart1;
begin
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl24);
FieldVal25 := TSFTime.Create(nil, True, 'startTime', 0);
FieldDecl25 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl25.FieldOrEvent := FieldVal25;
FieldVal25.ParentInterfaceDeclaration := FieldDecl25;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl25);
FieldVal26 := TSFTime.Create(nil, True, 'stopTime', -1);
FieldDecl26 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl26.FieldOrEvent := FieldVal26;
FieldVal26.ParentInterfaceDeclaration := FieldDecl26;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl26);
FieldVal27 := TSFFloat.CreateEvent(nil, 'fraction_changed', False);
FieldDecl27 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl27.FieldOrEvent := FieldVal27;
FieldVal27.ParentInterfaceDeclaration := FieldDecl27;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl27);
FieldVal28 := TSFBool.CreateEvent(nil, 'isActive', False);
FieldDecl28 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl28.FieldOrEvent := FieldVal28;
FieldVal28.ParentInterfaceDeclaration := FieldDecl28;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl28);
FieldVal29 := TSFVec3f.CreateEvent(nil, 'HumanoidRoot_translation_changed', False);
FieldDecl29 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl29.FieldOrEvent := FieldVal29;
FieldVal29.ParentInterfaceDeclaration := FieldDecl29;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl29);
FieldVal30 := TSFRotation.CreateEvent(nil, 'HumanoidRoot_rotation_changed', False);
FieldDecl30 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl30.FieldOrEvent := FieldVal30;
FieldVal30.ParentInterfaceDeclaration := FieldDecl30;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl30);
FieldVal31 := TSFRotation.CreateEvent(nil, 'lower_body_rotation_changed', False);
FieldDecl31 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl31.FieldOrEvent := FieldVal31;
FieldVal31.ParentInterfaceDeclaration := FieldDecl31;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl31);
FieldVal32 := TSFRotation.CreateEvent(nil, 'l_hip_rotation_changed', False);
FieldDecl32 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl32.FieldOrEvent := FieldVal32;
FieldVal32.ParentInterfaceDeclaration := FieldDecl32;
end;

procedure InitLOA1_StandAnimationPart2;
begin
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl32);
FieldVal33 := TSFRotation.CreateEvent(nil, 'l_knee_rotation_changed', False);
FieldDecl33 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl33.FieldOrEvent := FieldVal33;
FieldVal33.ParentInterfaceDeclaration := FieldDecl33;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl33);
FieldVal34 := TSFRotation.CreateEvent(nil, 'l_ankle_rotation_changed', False);
FieldDecl34 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl34.FieldOrEvent := FieldVal34;
FieldVal34.ParentInterfaceDeclaration := FieldDecl34;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl34);
FieldVal35 := TSFRotation.CreateEvent(nil, 'l_midtarsal_rotation_changed', False);
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl35);
FieldVal36 := TSFRotation.CreateEvent(nil, 'r_hip_rotation_changed', False);
FieldDecl36 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl36.FieldOrEvent := FieldVal36;
FieldVal36.ParentInterfaceDeclaration := FieldDecl36;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl36);
FieldVal37 := TSFRotation.CreateEvent(nil, 'r_knee_rotation_changed', False);
FieldDecl37 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl37.FieldOrEvent := FieldVal37;
FieldVal37.ParentInterfaceDeclaration := FieldDecl37;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl37);
FieldVal38 := TSFRotation.CreateEvent(nil, 'r_ankle_rotation_changed', False);
FieldDecl38 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl38.FieldOrEvent := FieldVal38;
FieldVal38.ParentInterfaceDeclaration := FieldDecl38;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl38);
FieldVal39 := TSFRotation.CreateEvent(nil, 'r_midtarsal_rotation_changed', False);
FieldDecl39 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl39.FieldOrEvent := FieldVal39;
FieldVal39.ParentInterfaceDeclaration := FieldDecl39;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl39);
FieldVal40 := TSFRotation.CreateEvent(nil, 'vl5_rotation_changed', False);
FieldDecl40 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl40.FieldOrEvent := FieldVal40;
FieldVal40.ParentInterfaceDeclaration := FieldDecl40;
end;

procedure InitLOA1_StandAnimationPart3;
begin
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl40);
FieldVal41 := TSFRotation.CreateEvent(nil, 'skullbase_rotation_changed', False);
FieldDecl41 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl41.FieldOrEvent := FieldVal41;
FieldVal41.ParentInterfaceDeclaration := FieldDecl41;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl41);
FieldVal42 := TSFRotation.CreateEvent(nil, 'l_shoulder_rotation_changed', False);
FieldDecl42 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl42.FieldOrEvent := FieldVal42;
FieldVal42.ParentInterfaceDeclaration := FieldDecl42;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl42);
FieldVal43 := TSFRotation.CreateEvent(nil, 'l_elbow_rotation_changed', False);
FieldDecl43 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl43.FieldOrEvent := FieldVal43;
FieldVal43.ParentInterfaceDeclaration := FieldDecl43;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl43);
FieldVal44 := TSFRotation.CreateEvent(nil, 'l_wrist_rotation_changed', False);
FieldDecl44 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl44.FieldOrEvent := FieldVal44;
FieldVal44.ParentInterfaceDeclaration := FieldDecl44;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl44);
FieldVal45 := TSFRotation.CreateEvent(nil, 'r_shoulder_rotation_changed', False);
FieldDecl45 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl45.FieldOrEvent := FieldVal45;
FieldVal45.ParentInterfaceDeclaration := FieldDecl45;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl45);
FieldVal46 := TSFRotation.CreateEvent(nil, 'r_elbow_rotation_changed', False);
FieldDecl46 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl46.FieldOrEvent := FieldVal46;
FieldVal46.ParentInterfaceDeclaration := FieldDecl46;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl46);
FieldVal47 := TSFRotation.CreateEvent(nil, 'r_wrist_rotation_changed', False);
FieldDecl47 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl47.FieldOrEvent := FieldVal47;
FieldVal47.ParentInterfaceDeclaration := FieldDecl47;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl47);
Group49 := TGroupNode.Create;
TimeSensor50 := TTimeSensorNode.Create;
TimeSensor50.X3DName := 'TIMER';
TimeSensor50.FieldOrEvent('cycleInterval', True).IsClauseNamesAdd('cycleInterval');
end;

procedure InitLOA1_StandAnimationPart4;
begin
TimeSensor50.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
TimeSensor50.FieldOrEvent('loop', True).IsClauseNamesAdd('loop');
TimeSensor50.FieldOrEvent('startTime', True).IsClauseNamesAdd('startTime');
TimeSensor50.FieldOrEvent('stopTime', True).IsClauseNamesAdd('stopTime');
TimeSensor50.FieldOrEvent('fraction_changed', True).IsClauseNamesAdd('fraction_changed');
TimeSensor50.FieldOrEvent('isActive', True).IsClauseNamesAdd('isActive');
Group49.FdChildren.Add(TimeSensor50);
PositionInterpolator51 := TPositionInterpolatorNode.Create;
PositionInterpolator51.X3DName := 'HUMANOIDROOT_POSITION_ANIMATOR';
PositionInterpolator51.SetKey([0, 1]);
PositionInterpolator51.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 0, 0)]);
PositionInterpolator51.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_translation_changed');
Group49.FdChildren.Add(PositionInterpolator51);
OrientationInterpolator52 := TOrientationInterpolatorNode.Create;
OrientationInterpolator52.X3DName := 'HUMANOIDROOT_ANIMATOR';
OrientationInterpolator52.SetKey([0, 1]);
OrientationInterpolator52.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator52.FieldOrEvent('value_changed', True).IsClauseNamesAdd('HumanoidRoot_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator52);
OrientationInterpolator53 := TOrientationInterpolatorNode.Create;
OrientationInterpolator53.X3DName := 'SACROILIAC_ANIMATOR';
OrientationInterpolator53.SetKey([0, 1]);
OrientationInterpolator53.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator53.FieldOrEvent('value_changed', True).IsClauseNamesAdd('lower_body_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator53);
OrientationInterpolator54 := TOrientationInterpolatorNode.Create;
OrientationInterpolator54.X3DName := 'L_HIP_ANIMATOR';
OrientationInterpolator54.SetKey([0, 1]);
OrientationInterpolator54.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator54.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_hip_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator54);
OrientationInterpolator55 := TOrientationInterpolatorNode.Create;
OrientationInterpolator55.X3DName := 'L_KNEE_ANIMATOR';
OrientationInterpolator55.SetKey([0, 1]);
OrientationInterpolator55.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator55.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_knee_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator55);
OrientationInterpolator56 := TOrientationInterpolatorNode.Create;
OrientationInterpolator56.X3DName := 'L_ANKLE_ANIMATOR';
OrientationInterpolator56.SetKey([0, 1]);
end;

procedure InitLOA1_StandAnimationPart5;
begin
OrientationInterpolator56.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator56.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_ankle_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator56);
OrientationInterpolator57 := TOrientationInterpolatorNode.Create;
OrientationInterpolator57.X3DName := 'L_MIDTARSAL_ANIMATOR';
OrientationInterpolator57.SetKey([0, 1]);
OrientationInterpolator57.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(1, 0, 0, 0)]);
OrientationInterpolator57.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_midtarsal_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator57);
OrientationInterpolator58 := TOrientationInterpolatorNode.Create;
OrientationInterpolator58.X3DName := 'R_HIP_ANIMATOR';
OrientationInterpolator58.SetKey([0, 1]);
OrientationInterpolator58.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator58.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_hip_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator58);
OrientationInterpolator59 := TOrientationInterpolatorNode.Create;
OrientationInterpolator59.X3DName := 'R_KNEE_ANIMATOR';
OrientationInterpolator59.SetKey([0, 1]);
OrientationInterpolator59.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator59.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_knee_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator59);
OrientationInterpolator60 := TOrientationInterpolatorNode.Create;
OrientationInterpolator60.X3DName := 'R_ANKLE_ANIMATOR';
OrientationInterpolator60.SetKey([0, 1]);
OrientationInterpolator60.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator60.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_ankle_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator60);
OrientationInterpolator61 := TOrientationInterpolatorNode.Create;
OrientationInterpolator61.X3DName := 'R_MIDTARSAL_ANIMATOR';
OrientationInterpolator61.SetKey([0, 1]);
OrientationInterpolator61.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(1, 0, 0, 0)]);
OrientationInterpolator61.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_midtarsal_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator61);
OrientationInterpolator62 := TOrientationInterpolatorNode.Create;
OrientationInterpolator62.X3DName := 'VL5_ANIMATOR';
OrientationInterpolator62.SetKey([0, 1]);
OrientationInterpolator62.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator62.FieldOrEvent('value_changed', True).IsClauseNamesAdd('vl5_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator62);
OrientationInterpolator63 := TOrientationInterpolatorNode.Create;
end;

procedure InitLOA1_StandAnimationPart6;
begin
OrientationInterpolator63.X3DName := 'SKULLBASE_ANIMATOR';
OrientationInterpolator63.SetKey([0, 0.5, 1]);
OrientationInterpolator63.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(-1, 0, 0, 0.5), Vector4(0, 0, 1, 0)]);
OrientationInterpolator63.FieldOrEvent('value_changed', True).IsClauseNamesAdd('skullbase_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator63);
OrientationInterpolator64 := TOrientationInterpolatorNode.Create;
OrientationInterpolator64.X3DName := 'L_SHOULDER_ANIMATOR';
OrientationInterpolator64.SetKey([0, 1]);
OrientationInterpolator64.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator64.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_shoulder_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator64);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;
OrientationInterpolator65.X3DName := 'L_ELBOW_ANIMATOR';
OrientationInterpolator65.SetKey([0, 1]);
OrientationInterpolator65.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator65.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_elbow_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator65);
OrientationInterpolator66 := TOrientationInterpolatorNode.Create;
OrientationInterpolator66.X3DName := 'L_WRIST_ANIMATOR';
OrientationInterpolator66.SetKey([0, 1]);
OrientationInterpolator66.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator66.FieldOrEvent('value_changed', True).IsClauseNamesAdd('l_wrist_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator66);
OrientationInterpolator67 := TOrientationInterpolatorNode.Create;
OrientationInterpolator67.X3DName := 'R_SHOULDER_ANIMATOR';
OrientationInterpolator67.SetKey([0, 1]);
OrientationInterpolator67.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator67.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_shoulder_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator67);
OrientationInterpolator68 := TOrientationInterpolatorNode.Create;
OrientationInterpolator68.X3DName := 'R_ELBOW_ANIMATOR';
OrientationInterpolator68.SetKey([0, 1]);
OrientationInterpolator68.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator68.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_elbow_rotation_changed');
Group49.FdChildren.Add(OrientationInterpolator68);
OrientationInterpolator69 := TOrientationInterpolatorNode.Create;
OrientationInterpolator69.X3DName := 'R_WRIST_ANIMATOR';
OrientationInterpolator69.SetKey([0, 1]);
OrientationInterpolator69.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
OrientationInterpolator69.FieldOrEvent('value_changed', True).IsClauseNamesAdd('r_wrist_rotation_changed');
end;

procedure InitLOA1_StandAnimationPart7;
begin
Group49.FdChildren.Add(OrientationInterpolator69);
ProtoDeclare20.Node.AddChildren([Group49]);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, PositionInterpolator51.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO HUMANOIDROOT_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator52.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO SACROILIAC_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator53.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_HIP_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator54.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_KNEE_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator55.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ANKLE_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator56.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_MIDTARSAL_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator57.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_HIP_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator58.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_KNEE_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator59.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ANKLE_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator60.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_MIDTARSAL_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator61.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO VL5_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator62.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO SKULLBASE_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator63.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_SHOULDER_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator64.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_ELBOW_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator65.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO L_WRIST_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator66.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_SHOULDER_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator67.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_ELBOW_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator68.EventSet_fraction);
{ ROUTE TIMER.fraction_changed TO R_WRIST_ANIMATOR.set_fraction }
ProtoBody48.AddRoute(TimeSensor50.EventFraction_changed, OrientationInterpolator69.EventSet_fraction);
end;

procedure InitLOA1_StandAnimationPart8;
begin
X3D0.AddPrototype(ProtoDeclare20);
{ ====================================== }
{ Point to example use in case someone inspects this file }
Anchor89 := TAnchorNode.Create;
Anchor89.Description := 'InterchangableActorsViaDynamicRouting';
Anchor89.SetParameter(['target=_blank']);
Anchor89.SetUrl(['InterchangableActorsViaDynamicRouting.x3d', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d', 'InterchangableActorsViaDynamicRouting.wrl', 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl']);
Shape90 := TShapeNode.Create;
Text91 := TTextNode.Create;
Text91.SetText(['LOA1_StandAnimation.x3d', 'defines a prototype', 'for animating a humanoid.', 'Click this text to see', 'InterchangableActorsViaDynamicRouting example.']);
FontStyle92 := TFontStyleNode.Create;
FontStyle92.Justify := fjMiddle;
FontStyle92.JustifyMinor := fjMiddle;
FontStyle92.Size := 0.8;
Text91.FontStyle := FontStyle92;
Shape90.Geometry := Text91;
Appearance93 := TAppearanceNode.Create;
Material94 := TMaterialNode.Create;
Material94.DiffuseColor := Vector3(1, 1, 0.2);
Appearance93.Material := Material94;
Shape90.Appearance := Appearance93;
Anchor89.FdChildren.Add(Shape90);
Group18.FdChildren.Add(Anchor89);
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
