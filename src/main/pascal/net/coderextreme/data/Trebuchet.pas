unit Trebuchet;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function CreateTrebuchet: TX3DRootNode;
procedure RegisterTrebuchetScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript333Script = class
  private
    Fwhichchoice: Int32;
    FEvent_whichchoice: TX3DEvent;
    FBack_whichchoice: TSFInt32;
    FDirty_whichchoice: Boolean;
    FCounterWeight: Single;
    FEvent_CounterWeight: TX3DEvent;
    FBack_CounterWeight: TSFFloat;
    FDirty_CounterWeight: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_whichchoice: TX3DEvent; const AEvent_CounterWeight: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_boolean(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript337Script = class
  private
    Fwhichchoice: Int32;
    FEvent_whichchoice: TX3DEvent;
    FBack_whichchoice: TSFInt32;
    FDirty_whichchoice: Boolean;
    FProjectileWeight: Single;
    FEvent_ProjectileWeight: TX3DEvent;
    FBack_ProjectileWeight: TSFFloat;
    FDirty_ProjectileWeight: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_whichchoice: TX3DEvent; const AEvent_ProjectileWeight: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_boolean(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript341Script = class
  private
    Fwhichchoice: Int32;
    FEvent_whichchoice: TX3DEvent;
    FBack_whichchoice: TSFInt32;
    FDirty_whichchoice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_whichchoice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_boolean(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript344Script = class
  private
    FMassCounterWeight: Single;
    FMassProjectileWeight: Single;
    Ftransparent: TVector3;
    FEvent_transparent: TX3DEvent;
    FBack_transparent: TSFVec3f;
    FDirty_transparent: Boolean;
    Fvalue_changed: TVector3;
    FEvent_value_changed: TX3DEvent;
    FBack_value_changed: TSFVec3f;
    FDirty_value_changed: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_MassCounterWeight: TSFFloat; const AField_MassProjectileWeight: TSFFloat; const AEvent_transparent: TX3DEvent; const AEvent_value_changed: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_MassProjectileWeight(Value: TX3DField; const Time: TX3DTime);
    procedure Set_MassCounterWeight(Value: TX3DField; const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group17: TGroupNode;
  WorldInfo18: TWorldInfoNode;
  Background19: TBackgroundNode;
  Sound20: TSoundNode;
  AudioClip21: TAudioClipNode;
  Shape22: TShapeNode;
  Box23: TBoxNode;
  Appearance24: TAppearanceNode;
  ImageTexture25: TImageTextureNode;
  Transform26: TTransformNode;
  Shape27: TShapeNode;
  Appearance28: TAppearanceNode;
  Material29: TMaterialNode;
  Text30: TTextNode;
  FontStyle31: TFontStyleNode;
  Transform32: TTransformNode;
  Switch33: TSwitchNode;
  Group34: TGroupNode;
  Shape35: TShapeNode;
  Text37: TTextNode;
  Group38: TGroupNode;
  Shape39: TShapeNode;
  Text41: TTextNode;
  Group42: TGroupNode;
  Shape43: TShapeNode;
  Text45: TTextNode;
  Group46: TGroupNode;
  Shape47: TShapeNode;
  Text49: TTextNode;
  TouchSensor50: TTouchSensorNode;
  Transform51: TTransformNode;
  Shape52: TShapeNode;
  Box53: TBoxNode;
  Appearance54: TAppearanceNode;
  Material55: TMaterialNode;
  Transform56: TTransformNode;
  Transform57: TTransformNode;
  Billboard58: TBillboardNode;
  Shape59: TShapeNode;
  Appearance60: TAppearanceNode;
  Material61: TMaterialNode;
  Text62: TTextNode;
  FontStyle63: TFontStyleNode;
  Transform64: TTransformNode;
  Shape65: TShapeNode;
  Box66: TBoxNode;
  Appearance67: TAppearanceNode;
  Material68: TMaterialNode;
  Switch69: TSwitchNode;
  Group70: TGroupNode;
  Sound71: TSoundNode;
  AudioClip72: TAudioClipNode;
  Group73: TGroupNode;
  Sound74: TSoundNode;
  AudioClip75: TAudioClipNode;
  TouchSensor76: TTouchSensorNode;
  Transform77: TTransformNode;
  Switch78: TSwitchNode;
  Group79: TGroupNode;
  Shape80: TShapeNode;
  Text82: TTextNode;
  FontStyle83: TFontStyleNode;
  Sound84: TSoundNode;
  AudioClip85: TAudioClipNode;
  Group86: TGroupNode;
  Shape87: TShapeNode;
  Text89: TTextNode;
  FontStyle90: TFontStyleNode;
  Sound91: TSoundNode;
  AudioClip92: TAudioClipNode;
  Group93: TGroupNode;
  Shape94: TShapeNode;
  Text96: TTextNode;
  FontStyle97: TFontStyleNode;
  Sound98: TSoundNode;
  AudioClip99: TAudioClipNode;
  Transform100: TTransformNode;
  Transform101: TTransformNode;
  Transform102: TTransformNode;
  Transform104: TTransformNode;
  Shape105: TShapeNode;
  Box106: TBoxNode;
  Appearance107: TAppearanceNode;
  ImageTexture108: TImageTextureNode;
  Transform109: TTransformNode;
  Transform111: TTransformNode;
  Transform113: TTransformNode;
  Transform115: TTransformNode;
  Transform117: TTransformNode;
  Transform118: TTransformNode;
  Transform120: TTransformNode;
  Shape121: TShapeNode;
  Box122: TBoxNode;
  Transform124: TTransformNode;
  Transform125: TTransformNode;
  Shape126: TShapeNode;
  Extrusion127: TExtrusionNode;
  Transform129: TTransformNode;
  Transform130: TTransformNode;
  Shape131: TShapeNode;
  Box132: TBoxNode;
  Transform134: TTransformNode;
  Shape135: TShapeNode;
  Box136: TBoxNode;
  Transform138: TTransformNode;
  Shape139: TShapeNode;
  Appearance140: TAppearanceNode;
  Material141: TMaterialNode;
  Extrusion142: TExtrusionNode;
  Transform143: TTransformNode;
  Shape144: TShapeNode;
  Appearance145: TAppearanceNode;
  Sphere147: TSphereNode;
  Transform148: TTransformNode;
  Shape149: TShapeNode;
  Cylinder150: TCylinderNode;
  Appearance151: TAppearanceNode;
  Material152: TMaterialNode;
  Transform153: TTransformNode;
  Transform155: TTransformNode;
  Shape156: TShapeNode;
  Sphere157: TSphereNode;
  Transform159: TTransformNode;
  Transform160: TTransformNode;
  Shape161: TShapeNode;
  Extrusion163: TExtrusionNode;
  Transform164: TTransformNode;
  Transform165: TTransformNode;
  Transform167: TTransformNode;
  Shape168: TShapeNode;
  Sphere169: TSphereNode;
  Transform171: TTransformNode;
  Transform172: TTransformNode;
  Transform173: TTransformNode;
  Shape174: TShapeNode;
  Extrusion176: TExtrusionNode;
  Shape177: TShapeNode;
  Extrusion179: TExtrusionNode;
  Transform180: TTransformNode;
  Transform181: TTransformNode;
  Transform182: TTransformNode;
  Transform183: TTransformNode;
  Transform184: TTransformNode;
  Shape185: TShapeNode;
  Appearance186: TAppearanceNode;
  Material187: TMaterialNode;
  Extrusion188: TExtrusionNode;
  Transform189: TTransformNode;
  Transform191: TTransformNode;
  Shape192: TShapeNode;
  Sphere194: TSphereNode;
  Transform195: TTransformNode;
  Transform197: TTransformNode;
  Transform199: TTransformNode;
  Shape200: TShapeNode;
  Sphere202: TSphereNode;
  Transform203: TTransformNode;
  Shape204: TShapeNode;
  Extrusion205: TExtrusionNode;
  TouchSensor207: TTouchSensorNode;
  Transform208: TTransformNode;
  Switch209: TSwitchNode;
  Group210: TGroupNode;
  Transform211: TTransformNode;
  Shape212: TShapeNode;
  Sphere213: TSphereNode;
  Appearance214: TAppearanceNode;
  Material215: TMaterialNode;
  Group216: TGroupNode;
  Transform217: TTransformNode;
  Inline218: TInlineNode;
  Group219: TGroupNode;
  Transform220: TTransformNode;
  Inline221: TInlineNode;
  Transform222: TTransformNode;
  Shape223: TShapeNode;
  Cylinder224: TCylinderNode;
  Appearance225: TAppearanceNode;
  Material226: TMaterialNode;
  Transform227: TTransformNode;
  Transform228: TTransformNode;
  Shape229: TShapeNode;
  Box230: TBoxNode;
  Transform232: TTransformNode;
  Shape233: TShapeNode;
  Box234: TBoxNode;
  Transform236: TTransformNode;
  Shape237: TShapeNode;
  Cylinder238: TCylinderNode;
  Appearance239: TAppearanceNode;
  Material240: TMaterialNode;
  Transform241: TTransformNode;
  Shape242: TShapeNode;
  Cylinder243: TCylinderNode;
  Appearance244: TAppearanceNode;
  Material245: TMaterialNode;
  Transform246: TTransformNode;
  Transform247: TTransformNode;
  Transform249: TTransformNode;
  Shape250: TShapeNode;
  Cylinder251: TCylinderNode;
  Appearance252: TAppearanceNode;
  Material253: TMaterialNode;
  Transform254: TTransformNode;
  Transform256: TTransformNode;
  Transform258: TTransformNode;
  Transform264: TTransformNode;
  Transform266: TTransformNode;
  Transform267: TTransformNode;
  Transform269: TTransformNode;
  Transform271: TTransformNode;
  Shape272: TShapeNode;
  Box273: TBoxNode;
  Transform275: TTransformNode;
  Shape276: TShapeNode;
  Cylinder277: TCylinderNode;
  Shape279: TShapeNode;
  Sphere280: TSphereNode;
  Transform282: TTransformNode;
  Shape283: TShapeNode;
  Sphere284: TSphereNode;
  Transform286: TTransformNode;
  Transform289: TTransformNode;
  Transform291: TTransformNode;
  Transform293: TTransformNode;
  Transform296: TTransformNode;
  Transform298: TTransformNode;
  Transform301: TTransformNode;
  Transform303: TTransformNode;
  Transform304: TTransformNode;
  Viewpoint305: TViewpointNode;
  Transform307: TTransformNode;
  Transform310: TTransformNode;
  Shape311: TShapeNode;
  Box312: TBoxNode;
  Appearance313: TAppearanceNode;
  Material314: TMaterialNode;
  Transform315: TTransformNode;
  Transform318: TTransformNode;
  Shape319: TShapeNode;
  Box320: TBoxNode;
  Appearance321: TAppearanceNode;
  Material322: TMaterialNode;
  Transform323: TTransformNode;
  Transform325: TTransformNode;
  Viewpoint326: TViewpointNode;
  Transform327: TTransformNode;
  Transform328: TTransformNode;
  Viewpoint329: TViewpointNode;
  Transform330: TTransformNode;
  Transform331: TTransformNode;
  Viewpoint332: TViewpointNode;
  Script333: TScriptNode;
  FieldVal334: TX3DEvent;
  FieldVal335: TX3DEvent;
  FieldVal336: TX3DEvent;
  CompiledScript333: TScript333Script;
  Script337: TScriptNode;
  FieldVal338: TX3DEvent;
  FieldVal339: TX3DEvent;
  FieldVal340: TX3DEvent;
  CompiledScript337: TScript337Script;
  Script341: TScriptNode;
  FieldVal342: TX3DEvent;
  FieldVal343: TX3DEvent;
  CompiledScript341: TScript341Script;
  Script344: TScriptNode;
  FieldVal345: TX3DEvent;
  FieldVal346: TX3DEvent;
  FieldVal347: TX3DEvent;
  FieldVal348: TSFFloat;
  FieldVal349: TSFFloat;
  FieldVal350: TX3DEvent;
  FieldVal351: TX3DEvent;
  CompiledScript344: TScript344Script;
  TimeSensor352: TTimeSensorNode;
  PositionInterpolator353: TPositionInterpolatorNode;
  OrientationInterpolator354: TOrientationInterpolatorNode;
  PositionInterpolator355: TPositionInterpolatorNode;
  OrientationInterpolator356: TOrientationInterpolatorNode;
  PositionInterpolator357: TPositionInterpolatorNode;

constructor TScript333Script.Create(const AEvent_whichchoice: TX3DEvent; const AEvent_CounterWeight: TX3DEvent);
begin
  inherited Create;
  Fwhichchoice := 0;
  FEvent_whichchoice := nil;
  FBack_whichchoice := TSFInt32.Create(nil, False, 'whichchoice', 0);
  FDirty_whichchoice := False;
  FCounterWeight := 0.0;
  FEvent_CounterWeight := nil;
  FBack_CounterWeight := TSFFloat.Create(nil, False, 'CounterWeight', 0.0);
  FDirty_CounterWeight := False;
  FEvent_whichchoice := AEvent_whichchoice;
  FEvent_CounterWeight := AEvent_CounterWeight;
end;

destructor TScript333Script.Destroy;
begin
  FreeAndNil(FBack_whichchoice);
  FreeAndNil(FBack_CounterWeight);
  inherited Destroy;
end;

procedure TScript333Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_whichchoice then
  begin
    FDirty_whichchoice := False;
    if FEvent_whichchoice <> nil then
    begin
      FBack_whichchoice.Value := Fwhichchoice;
      FEvent_whichchoice.Send(FBack_whichchoice, Time);
    end;
  end;
  if FDirty_CounterWeight then
  begin
    FDirty_CounterWeight := False;
    if FEvent_CounterWeight <> nil then
    begin
      FBack_CounterWeight.Value := FCounterWeight;
      FEvent_CounterWeight.Send(FBack_CounterWeight, Time);
    end;
  end;
end;

procedure TScript333Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script333_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script333_set_boolean', {$ifdef FPC}@{$endif}Set_boolean);
end;

procedure TScript333Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Fwhichchoice := 0; FDirty_whichchoice := True;
  FCounterWeight := 100; FDirty_CounterWeight := True;
  FlushOutputs(Time);
end;

procedure TScript333Script.Set_boolean(Value: TX3DField; const Time: TX3DTime);
begin
  if (Value as TSFBool).Value = False then
  begin
    Exit;
  end;
  Fwhichchoice := Fwhichchoice + 1; FDirty_whichchoice := True;
  if Fwhichchoice = 0 then
    FCounterWeight := 50.00; FDirty_CounterWeight := True;
  if Fwhichchoice = 1 then
    FCounterWeight := 500.00; FDirty_CounterWeight := True;
  if Fwhichchoice = 2 then
    FCounterWeight := 1000.00; FDirty_CounterWeight := True;
  if Fwhichchoice = 3 then
    FCounterWeight := 10000.00; FDirty_CounterWeight := True;
  if Fwhichchoice = 4 then
  begin
    Fwhichchoice := 0; FDirty_whichchoice := True;
    FCounterWeight := 50; FDirty_CounterWeight := True;
  end;
  WriteLn('CounterWeight =' + FCounterWeight);
  FlushOutputs(Time);
end;

constructor TScript337Script.Create(const AEvent_whichchoice: TX3DEvent; const AEvent_ProjectileWeight: TX3DEvent);
begin
  inherited Create;
  Fwhichchoice := 0;
  FEvent_whichchoice := nil;
  FBack_whichchoice := TSFInt32.Create(nil, False, 'whichchoice', 0);
  FDirty_whichchoice := False;
  FProjectileWeight := 0.0;
  FEvent_ProjectileWeight := nil;
  FBack_ProjectileWeight := TSFFloat.Create(nil, False, 'ProjectileWeight', 0.0);
  FDirty_ProjectileWeight := False;
  FEvent_whichchoice := AEvent_whichchoice;
  FEvent_ProjectileWeight := AEvent_ProjectileWeight;
end;

destructor TScript337Script.Destroy;
begin
  FreeAndNil(FBack_whichchoice);
  FreeAndNil(FBack_ProjectileWeight);
  inherited Destroy;
end;

procedure TScript337Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_whichchoice then
  begin
    FDirty_whichchoice := False;
    if FEvent_whichchoice <> nil then
    begin
      FBack_whichchoice.Value := Fwhichchoice;
      FEvent_whichchoice.Send(FBack_whichchoice, Time);
    end;
  end;
  if FDirty_ProjectileWeight then
  begin
    FDirty_ProjectileWeight := False;
    if FEvent_ProjectileWeight <> nil then
    begin
      FBack_ProjectileWeight.Value := FProjectileWeight;
      FEvent_ProjectileWeight.Send(FBack_ProjectileWeight, Time);
    end;
  end;
end;

procedure TScript337Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script337_set_boolean', {$ifdef FPC}@{$endif}Set_boolean);
end;

procedure TScript337Script.Set_boolean(Value: TX3DField; const Time: TX3DTime);
begin
  if (Value as TSFBool).Value = False then
  begin
    Exit;
  end;
  Fwhichchoice := Fwhichchoice + 1; FDirty_whichchoice := True;
  if Fwhichchoice = 0 then
    FProjectileWeight := 10.00; FDirty_ProjectileWeight := True;
  if Fwhichchoice = 1 then
    FProjectileWeight := 1000.00; FDirty_ProjectileWeight := True;
  if Fwhichchoice = 2 then
    FProjectileWeight := 5; FDirty_ProjectileWeight := True;
  if Fwhichchoice = 3 then
  begin
    Fwhichchoice := 0; FDirty_whichchoice := True;
    FProjectileWeight := 10.00; FDirty_ProjectileWeight := True;
  end;
  WriteLn('Projectile Weight' + FProjectileWeight);
  FlushOutputs(Time);
end;

constructor TScript341Script.Create(const AEvent_whichchoice: TX3DEvent);
begin
  inherited Create;
  Fwhichchoice := 0;
  FEvent_whichchoice := nil;
  FBack_whichchoice := TSFInt32.Create(nil, False, 'whichchoice', 0);
  FDirty_whichchoice := False;
  FEvent_whichchoice := AEvent_whichchoice;
end;

destructor TScript341Script.Destroy;
begin
  FreeAndNil(FBack_whichchoice);
  inherited Destroy;
end;

procedure TScript341Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_whichchoice then
  begin
    FDirty_whichchoice := False;
    if FEvent_whichchoice <> nil then
    begin
      FBack_whichchoice.Value := Fwhichchoice;
      FEvent_whichchoice.Send(FBack_whichchoice, Time);
    end;
  end;
end;

procedure TScript341Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script341_set_boolean', {$ifdef FPC}@{$endif}Set_boolean);
end;

procedure TScript341Script.Set_boolean(Value: TX3DField; const Time: TX3DTime);
begin
  if (Value as TSFBool).Value = False then
  begin
    Exit;
  end;
  Fwhichchoice := Fwhichchoice + 1; FDirty_whichchoice := True;
  if Fwhichchoice = 2 then
    Fwhichchoice := 0; FDirty_whichchoice := True;
  FlushOutputs(Time);
end;

constructor TScript344Script.Create(const AField_MassCounterWeight: TSFFloat; const AField_MassProjectileWeight: TSFFloat; const AEvent_transparent: TX3DEvent; const AEvent_value_changed: TX3DEvent);
begin
  inherited Create;
  FMassCounterWeight := 0.0;
  FMassProjectileWeight := 0.0;
  Ftransparent := Vector3(0, 0, 0);
  FEvent_transparent := nil;
  FBack_transparent := TSFVec3f.Create(nil, False, 'transparent', Vector3(0, 0, 0));
  FDirty_transparent := False;
  Fvalue_changed := Vector3(0, 0, 0);
  FEvent_value_changed := nil;
  FBack_value_changed := TSFVec3f.Create(nil, False, 'value_changed', Vector3(0, 0, 0));
  FDirty_value_changed := False;
  if AField_MassCounterWeight <> nil then FMassCounterWeight := AField_MassCounterWeight.Value;
  if AField_MassProjectileWeight <> nil then FMassProjectileWeight := AField_MassProjectileWeight.Value;
  FEvent_transparent := AEvent_transparent;
  FEvent_value_changed := AEvent_value_changed;
end;

destructor TScript344Script.Destroy;
begin
  FreeAndNil(FBack_transparent);
  FreeAndNil(FBack_value_changed);
  inherited Destroy;
end;

procedure TScript344Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_transparent then
  begin
    FDirty_transparent := False;
    if FEvent_transparent <> nil then
    begin
      FBack_transparent.Value := Ftransparent;
      FEvent_transparent.Send(FBack_transparent, Time);
    end;
  end;
  if FDirty_value_changed then
  begin
    FDirty_value_changed := False;
    if FEvent_value_changed <> nil then
    begin
      FBack_value_changed.Value := Fvalue_changed;
      FEvent_value_changed.Send(FBack_value_changed, Time);
    end;
  end;
end;

procedure TScript344Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script344_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script344_set_MassProjectileWeight', {$ifdef FPC}@{$endif}Set_MassProjectileWeight);
  Scene.RegisterCompiledScript('Script344_set_MassCounterWeight', {$ifdef FPC}@{$endif}Set_MassCounterWeight);
  Scene.RegisterCompiledScript('Script344_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript344Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  FMassCounterWeight := 100;
  FMassProjectileWeight := 10;
  WriteLn('MassCounterWeight =' + FMassCounterWeight);
  WriteLn('MassProjectileWeight =' + FMassProjectileWeight);
  FlushOutputs(Time);
end;

procedure TScript344Script.Set_MassProjectileWeight(Value: TX3DField; const Time: TX3DTime);
begin
  FMassProjectileWeight := (Value as TSFFloat).Value;
  WriteLn('new MassProjectileWeight =' + FMassProjectileWeight);
  FlushOutputs(Time);
end;

procedure TScript344Script.Set_MassCounterWeight(Value: TX3DField; const Time: TX3DTime);
begin
  FMassCounterWeight := (Value as TSFFloat).Value;
  WriteLn('new MassCounterWeight =' + FMassCounterWeight);
  FlushOutputs(Time);
end;

procedure TScript344Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
var
  TrebuchetHeight: Integer;
  Height: Integer;
  x: Single;
  y: Single;
  z: Integer;
begin
  TrebuchetHeight := 45;
  Height := 25;
  x := 2 * FMassCounterWeight / FMassProjectileWeight * Height * (Value as TSFFloat).Value - .5 * TrebuchetHeight;
  y := FMassCounterWeight / FMassProjectileWeight * Height * Sin((Value as TSFFloat).Value * 3.14);
  z := 0;
  Ftransparent := Vector3(1, 1, 1); FDirty_transparent := True;
  if y < 1.5 * TrebuchetHeight then
    if x < TrebuchetHeight then
    begin
      x := x - 10;
      y := y + 1;
      Ftransparent := Vector3(.01, .01, .01); FDirty_transparent := True;
    end;
  Fvalue_changed := Vector3(x, y, z); FDirty_value_changed := True;
  WriteLn('x=' + Fvalue_changed[0] + ' y=' + Fvalue_changed[1] + ' z=' + Fvalue_changed[2]);
  FlushOutputs(Time);
end;

procedure InitTrebuchetPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Trebuchet.x3d';
X3D0.Meta['description'] := 'Working model of a 14th century Trebuchet Catapult.';
X3D0.Meta['creator'] := 'LT Joe Roth';
X3D0.Meta['created'] := '20 June 2001';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['version'] := '7.8';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d';
X3D0.Meta['reference'] := 'http://trebuchet.com';
X3D0.Meta['reference'] := 'http://members.home.net/dimona';
X3D0.Meta['subject'] := 'trebuchet catapult Monty Python';
X3D0.Meta['reference'] := 'Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under "Fair Use" clause of the DMCA';
X3D0.Meta['reference'] := 'https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm';
X3D0.Meta['reference'] := 'http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'Trebuchet.x3d';
Group17.FdChildren.Add(WorldInfo18);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg']);
Background19.SetBottomUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg']);
Background19.SetFrontUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg']);
Background19.SetGroundAngle([1.309, 1.570796]);
Background19.SetGroundColor([Vector3(0.1, 0.1, 0), Vector3(0.4, 0.25, 0.2), Vector3(0.6, 0.6, 0.6)]);
Background19.SetLeftUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg']);
Background19.SetRightUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg']);
Background19.SetSkyAngle([1.309, 1.57079]);
Background19.SetSkyColor([Vector3(0, 0.2, 0.7), Vector3(0, 0.5, 1), Vector3(1, 1, 1)]);
Background19.SetTopUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg']);
Group17.FdChildren.Add(Background19);
Sound20 := TSoundNode.Create;
Sound20.MaxBack := 1000;
Sound20.MaxFront := 1000;
AudioClip21 := TAudioClipNode.Create;
AudioClip21.X3DName := 'HolyGrail';
end;

procedure InitTrebuchetPart1;
begin
AudioClip21.Description := 'HolyGrail';
AudioClip21.Loop := True;
AudioClip21.SetUrl(['holygral.mp3', 'http://www.nps.navy.mil/code32/vrml/holygral.mp3']);
Sound20.Source := AudioClip21;
Group17.FdChildren.Add(Sound20);
Shape22 := TShapeNode.Create;
Box23 := TBoxNode.Create;
Box23.Size := Vector3(10000, 1, 10000);
Shape22.Geometry := Box23;
Appearance24 := TAppearanceNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['grass.jpg', 'https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg']);
Appearance24.Texture := ImageTexture25;
Shape22.Appearance := Appearance24;
Group17.FdChildren.Add(Shape22);
Transform26 := TTransformNode.Create;
Transform26.Rotation := Vector4(0, 1, 0, 1.57);
Transform26.Scale := Vector3(0.5, 0.5, 0.5);
Transform26.Translation := Vector3(10.5, 6.5, 4.5);
Shape27 := TShapeNode.Create;
Appearance28 := TAppearanceNode.Create;
Appearance28.X3DName := 'TextAppearance';
Material29 := TMaterialNode.Create;
Material29.DiffuseColor := Vector3(1, 0, 0);
Material29.EmissiveColor := Vector3(1, 1, 0);
Appearance28.Material := Material29;
Shape27.Appearance := Appearance28;
Text30 := TTextNode.Create;
Text30.SetText(['Click Sling to Select Projectile']);
FontStyle31 := TFontStyleNode.Create;
Text30.FontStyle := FontStyle31;
Shape27.Geometry := Text30;
Transform26.FdChildren.Add(Shape27);
Group17.FdChildren.Add(Transform26);
Transform32 := TTransformNode.Create;
Transform32.Rotation := Vector4(0, 1, 0, 1.57);
Transform32.Scale := Vector3(0.5, 0.5, 0.5);
Transform32.Translation := Vector3(11, 5.5, 6);
Switch33 := TSwitchNode.Create;
Switch33.X3DName := 'Weight';
end;

procedure InitTrebuchetPart2;
begin
Switch33.WhichChoice := 0;
Group34 := TGroupNode.Create;
Shape35 := TShapeNode.Create;
Shape35.Appearance := Appearance28;
Text37 := TTextNode.Create;
Text37.SetText(['Click Here to Change Counter Weight (50 lbs)']);
Shape35.Geometry := Text37;
Group34.FdChildren.Add(Shape35);
Switch33.FdChildren.Add(Group34);
Group38 := TGroupNode.Create;
Shape39 := TShapeNode.Create;
Shape39.Appearance := Appearance28;
Text41 := TTextNode.Create;
Text41.SetText(['Click Here to Change Counter Weight (500 lbs)']);
Shape39.Geometry := Text41;
Group38.FdChildren.Add(Shape39);
Switch33.FdChildren.Add(Group38);
Group42 := TGroupNode.Create;
Shape43 := TShapeNode.Create;
Shape43.Appearance := Appearance28;
Text45 := TTextNode.Create;
Text45.SetText(['Click Here to Change Counter Weight (1000 lbs)']);
Shape43.Geometry := Text45;
Group42.FdChildren.Add(Shape43);
Switch33.FdChildren.Add(Group42);
Group46 := TGroupNode.Create;
Shape47 := TShapeNode.Create;
Shape47.Appearance := Appearance28;
Text49 := TTextNode.Create;
Text49.SetText(['Click Here to Change Counter Weight (10000 lbs)']);
Shape47.Geometry := Text49;
Group46.FdChildren.Add(Shape47);
Switch33.FdChildren.Add(Group46);
Transform32.FdChildren.Add(Switch33);
TouchSensor50 := TTouchSensorNode.Create;
TouchSensor50.X3DName := 'weightselector';
TouchSensor50.Description := 'weight selector';
Transform32.FdChildren.Add(TouchSensor50);
Transform51 := TTransformNode.Create;
Transform51.Translation := Vector3(8, 0, 0);
end;

procedure InitTrebuchetPart3;
begin
Shape52 := TShapeNode.Create;
Box53 := TBoxNode.Create;
Box53.Size := Vector3(20, 1, 1);
Shape52.Geometry := Box53;
Appearance54 := TAppearanceNode.Create;
Material55 := TMaterialNode.Create;
Material55.Transparency := 1;
Appearance54.Material := Material55;
Shape52.Appearance := Appearance54;
Transform51.FdChildren.Add(Shape52);
Transform32.FdChildren.Add(Transform51);
Group17.FdChildren.Add(Transform32);
Transform56 := TTransformNode.Create;
Transform56.Rotation := Vector4(0, 1, 0, 1.57);
Transform56.Translation := Vector3(10, 0.5, 4.5);
Transform57 := TTransformNode.Create;
Transform57.X3DName := 'launch';
Transform57.Translation := Vector3(0, 2, 5);
Billboard58 := TBillboardNode.Create;
Shape59 := TShapeNode.Create;
Appearance60 := TAppearanceNode.Create;
Material61 := TMaterialNode.Create;
Material61.DiffuseColor := Vector3(1, 0, 0);
Appearance60.Material := Material61;
Shape59.Appearance := Appearance60;
Text62 := TTextNode.Create;
Text62.SetText(['LAUNCH']);
FontStyle63 := TFontStyleNode.Create;
Text62.FontStyle := FontStyle63;
Shape59.Geometry := Text62;
Billboard58.FdChildren.Add(Shape59);
Transform64 := TTransformNode.Create;
Transform64.Translation := Vector3(2, 0.3, 0);
Shape65 := TShapeNode.Create;
Box66 := TBoxNode.Create;
Box66.Size := Vector3(5, 1, 1);
Shape65.Geometry := Box66;
Appearance67 := TAppearanceNode.Create;
Material68 := TMaterialNode.Create;
Material68.Transparency := 1;
end;

procedure InitTrebuchetPart4;
begin
Appearance67.Material := Material68;
Shape65.Appearance := Appearance67;
Transform64.FdChildren.Add(Shape65);
Billboard58.FdChildren.Add(Transform64);
Switch69 := TSwitchNode.Create;
Switch69.X3DName := 'PigdogMonk';
Switch69.WhichChoice := -1;
Group70 := TGroupNode.Create;
Sound71 := TSoundNode.Create;
Sound71.MaxBack := 1000;
Sound71.MaxFront := 1000;
AudioClip72 := TAudioClipNode.Create;
AudioClip72.X3DName := 'PigDogSound';
AudioClip72.Description := 'PigDogSound';
AudioClip72.SetUrl(['pigdog.wav', 'http://www.nps.navy.mil/code32/vrml/pigdog.wav']);
Sound71.Source := AudioClip72;
Group70.FdChildren.Add(Sound71);
Switch69.FdChildren.Add(Group70);
Group73 := TGroupNode.Create;
Sound74 := TSoundNode.Create;
Sound74.MaxBack := 1000;
Sound74.MaxFront := 1000;
AudioClip75 := TAudioClipNode.Create;
AudioClip75.X3DName := 'MonkSound';
AudioClip75.Description := 'MonkSound';
AudioClip75.SetUrl(['monks.wav', 'http://www.nps.navy.mil/code32/vrml/monks.wav']);
Sound74.Source := AudioClip75;
Group73.FdChildren.Add(Sound74);
Switch69.FdChildren.Add(Group73);
Billboard58.FdChildren.Add(Switch69);
Transform57.FdChildren.Add(Billboard58);
TouchSensor76 := TTouchSensorNode.Create;
TouchSensor76.X3DName := 'Launch';
TouchSensor76.Description := 'launch!';
Transform57.FdChildren.Add(TouchSensor76);
Transform56.FdChildren.Add(Transform57);
Transform77 := TTransformNode.Create;
Switch78 := TSwitchNode.Create;
Switch78.X3DName := 'projectilename';
Switch78.WhichChoice := 0;
end;

procedure InitTrebuchetPart5;
begin
Group79 := TGroupNode.Create;
Shape80 := TShapeNode.Create;
Shape80.Appearance := Appearance28;
Text82 := TTextNode.Create;
Text82.SetText(['Bowling Ball (10 lbs)']);
FontStyle83 := TFontStyleNode.Create;
FontStyle83.Size := 0.5;
Text82.FontStyle := FontStyle83;
Shape80.Geometry := Text82;
Group79.FdChildren.Add(Shape80);
Sound84 := TSoundNode.Create;
Sound84.MaxBack := 1000;
Sound84.MaxFront := 1000;
Sound84.Priority := 1;
AudioClip85 := TAudioClipNode.Create;
AudioClip85.X3DName := 'HolyHandGrenadeSound';
AudioClip85.Description := 'HolyHandGrenadeSound';
AudioClip85.SetUrl(['grenade.wav', 'http://www.nps.navy.mil/code32/vrml/grenade.wav']);
Sound84.Source := AudioClip85;
Group79.FdChildren.Add(Sound84);
Switch78.FdChildren.Add(Group79);
Group86 := TGroupNode.Create;
Shape87 := TShapeNode.Create;
Shape87.Appearance := Appearance28;
Text89 := TTextNode.Create;
Text89.SetText(['Cow (1000 lbs)']);
FontStyle90 := TFontStyleNode.Create;
FontStyle90.Size := 0.5;
Text89.FontStyle := FontStyle90;
Shape87.Geometry := Text89;
Group86.FdChildren.Add(Shape87);
Sound91 := TSoundNode.Create;
Sound91.MaxBack := 1000;
Sound91.MaxFront := 1000;
AudioClip92 := TAudioClipNode.Create;
AudioClip92.X3DName := 'CowSound';
AudioClip92.Description := 'CowSound';
AudioClip92.SetUrl(['lavache.wav', 'http://www.nps.navy.mil/code32/vrml/lavache.wav']);
Sound91.Source := AudioClip92;
Group86.FdChildren.Add(Sound91);
end;

procedure InitTrebuchetPart6;
begin
Switch78.FdChildren.Add(Group86);
Group93 := TGroupNode.Create;
Shape94 := TShapeNode.Create;
Shape94.Appearance := Appearance28;
Text96 := TTextNode.Create;
Text96.SetText(['Chicken (5 lbs)']);
FontStyle97 := TFontStyleNode.Create;
FontStyle97.Size := 0.5;
Text96.FontStyle := FontStyle97;
Shape94.Geometry := Text96;
Group93.FdChildren.Add(Shape94);
Sound98 := TSoundNode.Create;
Sound98.MaxBack := 1000;
Sound98.MaxFront := 1000;
Sound98.Priority := 1;
AudioClip99 := TAudioClipNode.Create;
AudioClip99.X3DName := 'HamsterSound';
AudioClip99.Description := 'HamsterSound';
AudioClip99.SetUrl(['hamster.wav', 'http://www.nps.navy.mil/code32/vrml/hamster.wav']);
Sound98.Source := AudioClip99;
Group93.FdChildren.Add(Sound98);
Switch78.FdChildren.Add(Group93);
Transform77.FdChildren.Add(Switch78);
Transform56.FdChildren.Add(Transform77);
Group17.FdChildren.Add(Transform56);
Transform100 := TTransformNode.Create;
Transform100.Rotation := Vector4(0, 1, 0, -1.67);
Transform101 := TTransformNode.Create;
Transform101.X3DName := 'aft';
Transform101.Translation := Vector3(5, 5, 15);
Transform102 := TTransformNode.Create;
Transform102.Translation := Vector3(-2.5, -4.5, -2);
Transform102.FdChildren.Add(Transform57);
Transform101.FdChildren.Add(Transform102);
Transform100.FdChildren.Add(Transform101);
Group17.FdChildren.Add(Transform100);
Transform104 := TTransformNode.Create;
Transform104.Translation := Vector3(0, 3, 0);
Shape105 := TShapeNode.Create;
Shape105.X3DName := 'plank';
end;

procedure InitTrebuchetPart7;
begin
Box106 := TBoxNode.Create;
Box106.Size := Vector3(25, 1, 1);
Shape105.Geometry := Box106;
Appearance107 := TAppearanceNode.Create;
Appearance107.X3DName := 'wood';
ImageTexture108 := TImageTextureNode.Create;
ImageTexture108.X3DName := 'woodTexture';
ImageTexture108.SetUrl(['wood.gif', 'https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif']);
Appearance107.Texture := ImageTexture108;
Shape105.Appearance := Appearance107;
Transform104.FdChildren.Add(Shape105);
Transform109 := TTransformNode.Create;
Transform109.X3DName := 'angledsupport';
Transform109.Rotation := Vector4(0, 0, 1, 1);
Transform109.Translation := Vector3(-5, 10, 0);
Transform109.FdChildren.Add(Shape105);
Transform104.FdChildren.Add(Transform109);
Transform111 := TTransformNode.Create;
Transform111.X3DName := 'angledsupport2';
Transform111.Rotation := Vector4(0, 0, 1, -1);
Transform111.Translation := Vector3(5, 10, 0);
Transform111.FdChildren.Add(Shape105);
Transform104.FdChildren.Add(Transform111);
Transform113 := TTransformNode.Create;
Transform113.X3DName := 'verticalsupport';
Transform113.Rotation := Vector4(0, 0, 1, 1.57);
Transform113.Scale := Vector3(0.9, 1, 1);
Transform113.Translation := Vector3(0, 11, 0);
Transform113.FdChildren.Add(Shape105);
{ Main Verticle Support }
Transform104.FdChildren.Add(Transform113);
Transform115 := TTransformNode.Create;
Transform115.X3DName := 'horizontalsupport';
Transform115.Scale := Vector3(0.4, 1, 1);
Transform115.Translation := Vector3(0, 10, 0);
Transform115.FdChildren.Add(Shape105);
Transform104.FdChildren.Add(Transform115);
Transform117 := TTransformNode.Create;
Transform117.Rotation := Vector4(0, 0, 1, 1.57);
Transform117.Scale := Vector3(0.6, 1, 1);
end;

procedure InitTrebuchetPart8;
begin
Transform117.Translation := Vector3(0, 5, 10);
Transform118 := TTransformNode.Create;
Transform118.Rotation := Vector4(0, 1, 0, 0.4);
Transform118.FdChildren.Add(Shape105);
Transform117.FdChildren.Add(Transform118);
Transform104.FdChildren.Add(Transform117);
Transform120 := TTransformNode.Create;
Transform120.X3DName := 'panel';
Transform120.Translation := Vector3(0, 18.2, -0.3);
Shape121 := TShapeNode.Create;
Box122 := TBoxNode.Create;
Box122.Size := Vector3(5, 5, 0.5);
Shape121.Geometry := Box122;
Shape121.Appearance := Appearance107;
Transform120.FdChildren.Add(Shape121);
Transform104.FdChildren.Add(Transform120);
Transform124 := TTransformNode.Create;
Transform124.Rotation := Vector4(1, 0, 0, -1.57);
Transform124.Translation := Vector3(0, 0.6, 2.5);
Transform125 := TTransformNode.Create;
Transform125.Rotation := Vector4(0, 0, 1, 1.57);
Shape126 := TShapeNode.Create;
Extrusion127 := TExtrusionNode.Create;
Extrusion127.BeginCap := False;
Extrusion127.SetCrossSection([Vector2(1, -0.38), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, -0.38), Vector2(-1, -1.1), Vector2(1, -1.1), Vector2(1, -0.38)]);
Extrusion127.EndCap := False;
Extrusion127.Solid := False;
Extrusion127.SetSpine([Vector3(0, 6, 0), Vector3(0, -11, 0)]);
Shape126.Geometry := Extrusion127;
Shape126.Appearance := Appearance107;
Transform125.FdChildren.Add(Shape126);
Transform124.FdChildren.Add(Transform125);
Transform104.FdChildren.Add(Transform124);
Transform129 := TTransformNode.Create;
Transform129.X3DName := 'flinger';
Transform129.Center := Vector3(7, 0, 0);
Transform129.Rotation := Vector4(0, 0, 1, 0.82);
Transform129.Scale := Vector3(0.9, 1, 1);
Transform129.Translation := Vector3(-7, 18, 2.5);
Transform130 := TTransformNode.Create;
end;

procedure InitTrebuchetPart9;
begin
Shape131 := TShapeNode.Create;
Box132 := TBoxNode.Create;
Box132.Size := Vector3(35, 1, 1);
Shape131.Geometry := Box132;
Shape131.Appearance := Appearance107;
Transform130.FdChildren.Add(Shape131);
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(7, 0, 0);
Shape135 := TShapeNode.Create;
Box136 := TBoxNode.Create;
Box136.Size := Vector3(8, 2, 2);
Shape135.Geometry := Box136;
Shape135.Appearance := Appearance107;
Transform134.FdChildren.Add(Shape135);
Transform130.FdChildren.Add(Transform134);
Transform129.FdChildren.Add(Transform130);
Transform138 := TTransformNode.Create;
Transform138.Rotation := Vector4(1, 0, 0, 1.57);
Transform138.Scale := Vector3(0.2, 0.2, 0.2);
Transform138.Translation := Vector3(-15, -1, 0);
Shape139 := TShapeNode.Create;
Shape139.X3DName := 'Torus';
Appearance140 := TAppearanceNode.Create;
Material141 := TMaterialNode.Create;
Material141.SpecularColor := Vector3(1, 1, 1);
Appearance140.Material := Material141;
Shape139.Appearance := Appearance140;
Extrusion142 := TExtrusionNode.Create;
Extrusion142.BeginCap := False;
Extrusion142.Convex := False;
Extrusion142.CreaseAngle := 1.57;
Extrusion142.SetCrossSection([Vector2(0.9, 0), Vector2(0.81, -0.34), Vector2(0.63, -0.63), Vector2(0.34, -0.83), Vector2(0, -0.9), Vector2(-0.34, -0.81), Vector2(-0.63, -0.63), Vector2(-0.81, -0.34), Vector2(-0.9, 0), Vector2(-0.81, 0.34), Vector2(-0.63, 0.63), Vector2(-0.34, 0.81), Vector2(0, 0.9), Vector2(0.38, 0.81), Vector2(0.63, 0.63), Vector2(0.81, 0.34), Vector2(0.9, 0)]);
Extrusion142.EndCap := False;
Extrusion142.SetSpine([Vector3(2, 0, 0), Vector3(1.85, 0, 0.77), Vector3(1.41, 0, 1.41), Vector3(0.77, 0, 1.85), Vector3(0, 0, 2), Vector3(-0.77, 0, 1.85), Vector3(-1.41, 0, 1.41), Vector3(-1.85, 0, 0.77), Vector3(-2, 0, 0), Vector3(-1.85, 0, -0.77), Vector3(-1.41, 0, -1.41), Vector3(-0.77, 0, -1.85), Vector3(0, 0, -2), Vector3(0.77, 0, -1.85), Vector3(1.41, 0, -1.41), Vector3(1.85, 0, -0.77), Vector3(2, 0, 0)]);
Shape139.Geometry := Extrusion142;
Transform138.FdChildren.Add(Shape139);
Transform143 := TTransformNode.Create;
Transform143.Translation := Vector3(1, 0, 2);
Shape144 := TShapeNode.Create;
Appearance145 := TAppearanceNode.Create;
end;

procedure InitTrebuchetPart10;
begin
Appearance145.X3DName := 'rope';
Appearance145.Texture := ImageTexture108;
Shape144.Appearance := Appearance145;
Sphere147 := TSphereNode.Create;
Sphere147.Radius := 1.5;
Shape144.Geometry := Sphere147;
Transform143.FdChildren.Add(Shape144);
{ knott }
Transform138.FdChildren.Add(Transform143);
Transform129.FdChildren.Add(Transform138);
{ The Unicorn }
Transform148 := TTransformNode.Create;
Transform148.Rotation := Vector4(0, 0, 1, 1.2);
Transform148.Scale := Vector3(0.2, 0.2, 0.2);
Transform148.Translation := Vector3(-18.3, 0.3, 0);
Shape149 := TShapeNode.Create;
Cylinder150 := TCylinderNode.Create;
Cylinder150.Height := 10;
Shape149.Geometry := Cylinder150;
Appearance151 := TAppearanceNode.Create;
Material152 := TMaterialNode.Create;
Material152.SpecularColor := Vector3(1, 1, 1);
Appearance151.Material := Material152;
Shape149.Appearance := Appearance151;
Transform148.FdChildren.Add(Shape149);
Transform153 := TTransformNode.Create;
Transform153.Translation := Vector3(0, -2.5, 0);
{ The Unicorn }
Transform153.FdChildren.Add(Shape139);
Transform155 := TTransformNode.Create;
Transform155.Translation := Vector3(-2, 0, 0);
Shape156 := TShapeNode.Create;
Sphere157 := TSphereNode.Create;
Sphere157.Radius := 1.5;
Shape156.Geometry := Sphere157;
Shape156.Appearance := Appearance145;
Transform155.FdChildren.Add(Shape156);
{ Knott }
Transform153.FdChildren.Add(Transform155);
Transform148.FdChildren.Add(Transform153);
end;

procedure InitTrebuchetPart11;
begin
Transform159 := TTransformNode.Create;
Transform159.Rotation := Vector4(0, 0, 1, 1.2);
Transform159.Translation := Vector3(15, 55, -11);
Transform160 := TTransformNode.Create;
Transform160.Scale := Vector3(5, 5, 5);
Shape161 := TShapeNode.Create;
Shape161.Appearance := Appearance145;
Extrusion163 := TExtrusionNode.Create;
Extrusion163.BeginCap := False;
Extrusion163.CreaseAngle := 0.76;
Extrusion163.SetCrossSection([Vector2(0.1, 0), Vector2(0.092, -0.038), Vector2(0.071, -0.071), Vector2(0.038, -0.092), Vector2(0, -0.1), Vector2(-0.038, -0.092), Vector2(-0.071, -0.071), Vector2(-0.092, -0.038), Vector2(-0.1, 0), Vector2(-0.092, 0.038), Vector2(-0.071, 0.071), Vector2(-0.038, 0.092), Vector2(0, 0.1), Vector2(0.038, 0.092), Vector2(0.071, 0.071), Vector2(0.092, 0.038), Vector2(0.1, 0)]);
Extrusion163.EndCap := False;
Extrusion163.Solid := False;
Extrusion163.SetSpine([Vector3(-15.2, 1.4, 2.2), Vector3(-12, -0.8, 2.2)]);
Shape161.Geometry := Extrusion163;
Transform160.FdChildren.Add(Shape161);
Transform159.FdChildren.Add(Transform160);
Transform148.FdChildren.Add(Transform159);
Transform129.FdChildren.Add(Transform148);
Transform164 := TTransformNode.Create;
Transform164.Rotation := Vector4(1, 0, 0, -1.7);
Transform164.Translation := Vector3(-17, -4.5, 0);
Transform165 := TTransformNode.Create;
Transform165.Scale := Vector3(0.2, 0.2, 0.2);
{ Knot }
Transform165.FdChildren.Add(Shape139);
Transform167 := TTransformNode.Create;
Transform167.Translation := Vector3(-1, 0, 1.7);
Shape168 := TShapeNode.Create;
Sphere169 := TSphereNode.Create;
Sphere169.Radius := 1.5;
Shape168.Geometry := Sphere169;
Shape168.Appearance := Appearance145;
Transform167.FdChildren.Add(Shape168);
Transform165.FdChildren.Add(Transform167);
Transform164.FdChildren.Add(Transform165);
Transform129.FdChildren.Add(Transform164);
Transform171 := TTransformNode.Create;
Transform171.X3DName := 'RnS';
Transform172 := TTransformNode.Create;
end;

procedure InitTrebuchetPart12;
begin
Transform172.X3DName := 'ropes';
Transform173 := TTransformNode.Create;
Transform173.Rotation := Vector4(0, 0, 1, -0.82);
Transform173.Translation := Vector3(7, -26, -2.5);
Shape174 := TShapeNode.Create;
Shape174.Appearance := Appearance145;
Extrusion176 := TExtrusionNode.Create;
Extrusion176.BeginCap := False;
Extrusion176.CreaseAngle := 0.76;
Extrusion176.SetCrossSection([Vector2(0.1, 0), Vector2(0.092, -0.038), Vector2(0.071, -0.071), Vector2(0.038, -0.092), Vector2(0, -0.1), Vector2(-0.038, -0.092), Vector2(-0.071, -0.071), Vector2(-0.092, -0.038), Vector2(-0.1, 0), Vector2(-0.092, 0.038), Vector2(-0.071, 0.071), Vector2(-0.038, 0.092), Vector2(0, 0.1), Vector2(0.038, 0.092), Vector2(0.071, 0.071), Vector2(0.092, 0.038), Vector2(0.1, 0)]);
Extrusion176.EndCap := False;
Extrusion176.Solid := False;
Extrusion176.SetSpine([Vector3(-33, 0.9, 2.5), Vector3(-18.5, 1.9, 2.55)]);
Shape174.Geometry := Extrusion176;
Transform173.FdChildren.Add(Shape174);
Shape177 := TShapeNode.Create;
Shape177.Appearance := Appearance145;
Extrusion179 := TExtrusionNode.Create;
Extrusion179.BeginCap := False;
Extrusion179.CreaseAngle := 0.76;
Extrusion179.SetCrossSection([Vector2(0.1, 0), Vector2(0.092, -0.038), Vector2(0.071, -0.071), Vector2(0.038, -0.092), Vector2(0, -0.1), Vector2(-0.038, -0.092), Vector2(-0.071, -0.071), Vector2(-0.092, -0.038), Vector2(-0.1, 0), Vector2(-0.092, 0.038), Vector2(-0.071, 0.071), Vector2(-0.038, 0.092), Vector2(0, 0.1), Vector2(0.038, 0.092), Vector2(0.071, 0.071), Vector2(0.092, 0.038), Vector2(0.1, 0)]);
Extrusion179.EndCap := False;
Extrusion179.Solid := False;
Extrusion179.SetSpine([Vector3(-35.7, -0.8, 2.5), Vector3(-18.8, -0.8, 2.55)]);
Shape177.Geometry := Extrusion179;
Transform173.FdChildren.Add(Shape177);
Transform172.FdChildren.Add(Transform173);
Transform171.FdChildren.Add(Transform172);
Transform180 := TTransformNode.Create;
Transform180.X3DName := 'sling';
Transform180.Rotation := Vector4(0, 0, 1, -0.82);
Transform180.Translation := Vector3(-4, -15.3, 0);
Transform181 := TTransformNode.Create;
Transform182 := TTransformNode.Create;
Transform182.Rotation := Vector4(0, 1, 0, -1.57);
Transform182.Scale := Vector3(1, 1.3, 1);
Transform182.Translation := Vector3(0.5, 0, -1);
Transform183 := TTransformNode.Create;
Transform183.Rotation := Vector4(0, 0, 1, 1.57);
Transform184 := TTransformNode.Create;
end;

procedure InitTrebuchetPart13;
begin
Transform184.Scale := Vector3(0.3, 0.3, 0.3);
Shape185 := TShapeNode.Create;
Shape185.X3DName := 'halfsling';
Appearance186 := TAppearanceNode.Create;
Appearance186.X3DName := 'clear';
Material187 := TMaterialNode.Create;
Material187.Transparency := 0.5;
Appearance186.Material := Material187;
Shape185.Appearance := Appearance186;
Extrusion188 := TExtrusionNode.Create;
Extrusion188.SetCrossSection([Vector2(0, 0), Vector2(0, 5), Vector2(0.5, 7), Vector2(1, 8), Vector2(2, 9), Vector2(3, 11), Vector2(3.5, 11.2), Vector2(4, 11), Vector2(5, 9), Vector2(6, 8), Vector2(6.5, 7), Vector2(6.7, 5), Vector2(6.7, 0), Vector2(0, 0)]);
Extrusion188.SetSpine([Vector3(0, 0, 0), Vector3(0.1, 0, 0)]);
Shape185.Geometry := Extrusion188;
Transform184.FdChildren.Add(Shape185);
Transform189 := TTransformNode.Create;
Transform189.Scale := Vector3(0.3, 0.3, 0.3);
Transform189.Translation := Vector3(0, -3.5, 11.5);
Transform189.FdChildren.Add(Shape139);
Transform191 := TTransformNode.Create;
Transform191.Translation := Vector3(0, 0, 2);
Shape192 := TShapeNode.Create;
Shape192.Appearance := Appearance145;
Sphere194 := TSphereNode.Create;
Sphere194.Radius := 1.5;
Shape192.Geometry := Sphere194;
Transform191.FdChildren.Add(Shape192);
Transform189.FdChildren.Add(Transform191);
Transform184.FdChildren.Add(Transform189);
Transform183.FdChildren.Add(Transform184);
Transform195 := TTransformNode.Create;
Transform195.Scale := Vector3(0.3, 0.3, 0.3);
Transform195.Translation := Vector3(2, 0, 0);
Transform195.FdChildren.Add(Shape185);
Transform197 := TTransformNode.Create;
Transform197.Scale := Vector3(0.3, 0.3, 0.3);
Transform197.Translation := Vector3(0, -3.5, 11.3);
Transform197.FdChildren.Add(Shape139);
Transform199 := TTransformNode.Create;
Transform199.Translation := Vector3(0, 0, 2);
Shape200 := TShapeNode.Create;
end;

procedure InitTrebuchetPart14;
begin
Shape200.Appearance := Appearance145;
Sphere202 := TSphereNode.Create;
Sphere202.Radius := 1.5;
Shape200.Geometry := Sphere202;
Transform199.FdChildren.Add(Shape200);
Transform197.FdChildren.Add(Transform199);
Transform195.FdChildren.Add(Transform197);
Transform183.FdChildren.Add(Transform195);
Transform203 := TTransformNode.Create;
Transform203.Translation := Vector3(1, -1, 0);
Shape204 := TShapeNode.Create;
Extrusion205 := TExtrusionNode.Create;
Extrusion205.BeginCap := False;
Extrusion205.CreaseAngle := 0.785;
Extrusion205.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0)]);
Extrusion205.EndCap := False;
Extrusion205.Solid := False;
Extrusion205.SetSpine([Vector3(0, -1, 0), Vector3(0, 1, 0)]);
Shape204.Geometry := Extrusion205;
Shape204.Appearance := Appearance186;
Transform203.FdChildren.Add(Shape204);
Transform183.FdChildren.Add(Transform203);
Transform182.FdChildren.Add(Transform183);
TouchSensor207 := TTouchSensorNode.Create;
TouchSensor207.X3DName := 'LauncheeChoice';
TouchSensor207.Description := 'launcher choice';
Transform182.FdChildren.Add(TouchSensor207);
Transform181.FdChildren.Add(Transform182);
Transform208 := TTransformNode.Create;
Transform208.X3DName := 'projectiletransform';
Transform208.Scale := Vector3(0.01, 0.01, 0.01);
Switch209 := TSwitchNode.Create;
Switch209.X3DName := 'projectile';
Switch209.WhichChoice := 0;
Group210 := TGroupNode.Create;
Transform211 := TTransformNode.Create;
Transform211.Translation := Vector3(0, 0.7, 0);
Shape212 := TShapeNode.Create;
Sphere213 := TSphereNode.Create;
Sphere213.Radius := 0.7;
end;

procedure InitTrebuchetPart15;
begin
Shape212.Geometry := Sphere213;
Appearance214 := TAppearanceNode.Create;
Appearance214.X3DName := 'black';
Material215 := TMaterialNode.Create;
Material215.DiffuseColor := Vector3(0, 0, 0);
Material215.SpecularColor := Vector3(1, 1, 1);
Appearance214.Material := Material215;
Shape212.Appearance := Appearance214;
Transform211.FdChildren.Add(Shape212);
Group210.FdChildren.Add(Transform211);
Switch209.FdChildren.Add(Group210);
Group216 := TGroupNode.Create;
Transform217 := TTransformNode.Create;
Inline218 := TInlineNode.Create;
Inline218.SetUrl(['cow.wrl', 'http://www.uoguelph.ca/~dchiu/cow.wrl']);
Transform217.FdChildren.Add(Inline218);
Group216.FdChildren.Add(Transform217);
Switch209.FdChildren.Add(Group216);
Group219 := TGroupNode.Create;
Transform220 := TTransformNode.Create;
Transform220.Rotation := Vector4(0, 1, 0, 1.57);
Transform220.Scale := Vector3(0.4, 0.4, 0.4);
Transform220.Translation := Vector3(0, 0.7, 0);
Inline221 := TInlineNode.Create;
Inline221.SetUrl(['vrml_ginger.wrl', 'http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl']);
Transform220.FdChildren.Add(Inline221);
Group219.FdChildren.Add(Transform220);
Switch209.FdChildren.Add(Group219);
Transform208.FdChildren.Add(Switch209);
Transform181.FdChildren.Add(Transform208);
Transform180.FdChildren.Add(Transform181);
Transform171.FdChildren.Add(Transform180);
Transform129.FdChildren.Add(Transform171);
Transform104.FdChildren.Add(Transform129);
Transform222 := TTransformNode.Create;
Transform222.Rotation := Vector4(1, 0, 0, 1.57);
Transform222.Translation := Vector3(0, 18, 2.5);
Shape223 := TShapeNode.Create;
Cylinder224 := TCylinderNode.Create;
Cylinder224.Height := 8;
end;

procedure InitTrebuchetPart16;
begin
Cylinder224.Radius := 0.4;
Shape223.Geometry := Cylinder224;
Appearance225 := TAppearanceNode.Create;
Material226 := TMaterialNode.Create;
Material226.DiffuseColor := Vector3(0, 0, 0);
Material226.SpecularColor := Vector3(1, 1, 1);
Appearance225.Material := Material226;
Shape223.Appearance := Appearance225;
Transform222.FdChildren.Add(Shape223);
{ Top Pivot }
Transform104.FdChildren.Add(Transform222);
Transform227 := TTransformNode.Create;
Transform227.X3DName := 'verticalweight';
Transform228 := TTransformNode.Create;
Transform228.Translation := Vector3(4, 18, 1.8);
Shape229 := TShapeNode.Create;
Box230 := TBoxNode.Create;
Box230.Size := Vector3(1, 10, 0.5);
Shape229.Geometry := Box230;
Shape229.Appearance := Appearance107;
Transform228.FdChildren.Add(Shape229);
Transform227.FdChildren.Add(Transform228);
Transform232 := TTransformNode.Create;
Transform232.Translation := Vector3(4, 18, 3.2);
Shape233 := TShapeNode.Create;
Box234 := TBoxNode.Create;
Box234.Size := Vector3(1, 10, 0.5);
Shape233.Geometry := Box234;
Shape233.Appearance := Appearance107;
Transform232.FdChildren.Add(Shape233);
Transform227.FdChildren.Add(Transform232);
Transform236 := TTransformNode.Create;
Transform236.Translation := Vector3(4, 14, 2.5);
{ CounterWeight }
Shape237 := TShapeNode.Create;
Cylinder238 := TCylinderNode.Create;
Cylinder238.Height := 4;
Cylinder238.Radius := 1.5;
Shape237.Geometry := Cylinder238;
Appearance239 := TAppearanceNode.Create;
end;

procedure InitTrebuchetPart17;
begin
Material240 := TMaterialNode.Create;
Material240.DiffuseColor := Vector3(0, 0, 0);
Material240.SpecularColor := Vector3(1, 1, 1);
Appearance239.Material := Material240;
Shape237.Appearance := Appearance239;
Transform236.FdChildren.Add(Shape237);
Transform227.FdChildren.Add(Transform236);
Transform241 := TTransformNode.Create;
Transform241.Rotation := Vector4(1, 0, 0, 1.57);
Transform241.Translation := Vector3(4, 22, 2.5);
Shape242 := TShapeNode.Create;
Cylinder243 := TCylinderNode.Create;
Cylinder243.Height := 2.5;
Cylinder243.Radius := 0.3;
Shape242.Geometry := Cylinder243;
Appearance244 := TAppearanceNode.Create;
Material245 := TMaterialNode.Create;
Material245.DiffuseColor := Vector3(0, 0, 0);
Material245.SpecularColor := Vector3(1, 1, 1);
Appearance244.Material := Material245;
Shape242.Appearance := Appearance244;
Transform241.FdChildren.Add(Shape242);
Transform227.FdChildren.Add(Transform241);
Transform104.FdChildren.Add(Transform227);
Transform246 := TTransformNode.Create;
Transform246.Rotation := Vector4(0, 0, 1, 1.57);
Transform246.Scale := Vector3(0.2, 0.2, 0.2);
Transform246.Translation := Vector3(-11.5, -1, 2);
Transform247 := TTransformNode.Create;
Transform247.X3DName := 'screw';
Transform247.Rotation := Vector4(1, 0, 0, 1.57);
Transform247.FdChildren.Add(Shape139);
Transform249 := TTransformNode.Create;
Transform249.Rotation := Vector4(1, 0, 0, -1.57);
Transform249.Translation := Vector3(0, 0, 7);
Shape250 := TShapeNode.Create;
Cylinder251 := TCylinderNode.Create;
Cylinder251.Height := 10;
Cylinder251.Radius := 0.7;
Shape250.Geometry := Cylinder251;
end;

procedure InitTrebuchetPart18;
begin
Appearance252 := TAppearanceNode.Create;
Material253 := TMaterialNode.Create;
Material253.SpecularColor := Vector3(1, 1, 1);
Appearance252.Material := Material253;
Shape250.Appearance := Appearance252;
Transform249.FdChildren.Add(Shape250);
Transform247.FdChildren.Add(Transform249);
Transform246.FdChildren.Add(Transform247);
Transform254 := TTransformNode.Create;
Transform254.Translation := Vector3(0, 0, 7);
Transform254.FdChildren.Add(Transform247);
Transform246.FdChildren.Add(Transform254);
{ Release Pin }
Transform256 := TTransformNode.Create;
Transform256.X3DName := 'Pin';
Transform256.Rotation := Vector4(1, 0, 0, -1.57);
Transform256.Translation := Vector3(0, 0, -3);
Transform256.FdChildren.Add(Transform247);
Transform246.FdChildren.Add(Transform256);
Transform104.FdChildren.Add(Transform246);
Transform258 := TTransformNode.Create;
Transform258.Translation := Vector3(0, 0, 5);
Transform258.FdChildren.Add(Shape105);
Transform258.FdChildren.Add(Transform109);
Transform258.FdChildren.Add(Transform111);
Transform258.FdChildren.Add(Transform113);
Transform258.FdChildren.Add(Transform115);
Transform264 := TTransformNode.Create;
Transform264.Rotation := Vector4(0, 1, 0, 1.57);
Transform264.Scale := Vector3(0.6, 1, 1);
Transform264.Translation := Vector3(0, -11, -2.5);
Transform264.FdChildren.Add(Transform115);
Transform258.FdChildren.Add(Transform264);
Transform266 := TTransformNode.Create;
Transform266.Rotation := Vector4(0, 0, 1, -1.57);
Transform266.Scale := Vector3(0.6, 1, 1);
Transform266.Translation := Vector3(0, 5, -10);
Transform267 := TTransformNode.Create;
Transform267.Rotation := Vector4(0, 1, 0, 0.4);
Transform267.FdChildren.Add(Shape105);
end;

procedure InitTrebuchetPart19;
begin
Transform266.FdChildren.Add(Transform267);
Transform258.FdChildren.Add(Transform266);
Transform269 := TTransformNode.Create;
Transform269.Translation := Vector3(0, 0, 0.6);
Transform269.FdChildren.Add(Transform120);
Transform258.FdChildren.Add(Transform269);
Transform104.FdChildren.Add(Transform258);
Transform271 := TTransformNode.Create;
Transform271.Translation := Vector3(10, -1, 2.5);
Shape272 := TShapeNode.Create;
Shape272.X3DName := 'Axle';
Box273 := TBoxNode.Create;
Box273.Size := Vector3(1, 1, 8);
Shape272.Geometry := Box273;
Shape272.Appearance := Appearance107;
Transform271.FdChildren.Add(Shape272);
Transform275 := TTransformNode.Create;
Transform275.Rotation := Vector4(1, 0, 0, 1.57);
Transform275.Translation := Vector3(0, 0, 4.5);
Shape276 := TShapeNode.Create;
Shape276.X3DName := 'wheel';
Cylinder277 := TCylinderNode.Create;
Cylinder277.Radius := 2;
Shape276.Geometry := Cylinder277;
Shape276.Appearance := Appearance107;
Transform275.FdChildren.Add(Shape276);
Shape279 := TShapeNode.Create;
Shape279.X3DName := 'tracks';
Sphere280 := TSphereNode.Create;
Sphere280.Radius := 1.5;
Shape279.Geometry := Sphere280;
Shape279.Appearance := Appearance214;
Transform275.FdChildren.Add(Shape279);
Transform282 := TTransformNode.Create;
Transform282.Translation := Vector3(0, 0.55, 0);
Shape283 := TShapeNode.Create;
Shape283.X3DName := 'hub';
Sphere284 := TSphereNode.Create;
Sphere284.Radius := 1.5;
Shape283.Geometry := Sphere284;
end;

procedure InitTrebuchetPart20;
begin
Shape283.Appearance := Appearance214;
Transform282.FdChildren.Add(Shape283);
Transform275.FdChildren.Add(Transform282);
Transform271.FdChildren.Add(Transform275);
Transform286 := TTransformNode.Create;
Transform286.Rotation := Vector4(1, 0, 0, 1.57);
Transform286.Translation := Vector3(0, 0, -4.5);
Transform286.FdChildren.Add(Shape276);
Transform286.FdChildren.Add(Shape279);
Transform289 := TTransformNode.Create;
Transform289.Translation := Vector3(0, -0.55, 0);
Transform289.FdChildren.Add(Shape283);
Transform286.FdChildren.Add(Transform289);
Transform271.FdChildren.Add(Transform286);
Transform104.FdChildren.Add(Transform271);
Transform291 := TTransformNode.Create;
Transform291.Translation := Vector3(-10, -1, 2.5);
Transform291.FdChildren.Add(Shape272);
Transform293 := TTransformNode.Create;
Transform293.Rotation := Vector4(1, 0, 0, 1.57);
Transform293.Translation := Vector3(0, 0, 4.5);
Transform293.FdChildren.Add(Shape276);
Transform293.FdChildren.Add(Shape279);
Transform296 := TTransformNode.Create;
Transform296.Translation := Vector3(0, 0.55, 0);
Transform296.FdChildren.Add(Shape283);
Transform293.FdChildren.Add(Transform296);
Transform291.FdChildren.Add(Transform293);
Transform298 := TTransformNode.Create;
Transform298.Rotation := Vector4(1, 0, 0, 1.57);
Transform298.Translation := Vector3(0, 0, -4.5);
Transform298.FdChildren.Add(Shape276);
Transform298.FdChildren.Add(Shape279);
Transform301 := TTransformNode.Create;
Transform301.Translation := Vector3(0, -0.55, 0);
Transform301.FdChildren.Add(Shape283);
Transform298.FdChildren.Add(Transform301);
Transform291.FdChildren.Add(Transform298);
Transform303 := TTransformNode.Create;
Transform303.Rotation := Vector4(0, 1, 0, -0.6);
end;

procedure InitTrebuchetPart21;
begin
Transform303.Translation := Vector3(0, 100, 400);
Transform304 := TTransformNode.Create;
Transform304.Translation := Vector3(1, 3, 0);
Viewpoint305 := TViewpointNode.Create;
Viewpoint305.Description := 'Side';
Transform304.FdChildren.Add(Viewpoint305);
Transform303.FdChildren.Add(Transform304);
Transform303.FdChildren.Add(Transform57);
Transform307 := TTransformNode.Create;
Transform307.FdChildren.Add(TouchSensor207);
Transform307.FdChildren.Add(Switch78);
Transform310 := TTransformNode.Create;
Transform310.Translation := Vector3(2.5, 0, 0);
Shape311 := TShapeNode.Create;
Box312 := TBoxNode.Create;
Box312.Size := Vector3(5, 0.5, 0.5);
Shape311.Geometry := Box312;
Appearance313 := TAppearanceNode.Create;
Material314 := TMaterialNode.Create;
Material314.Transparency := 1;
Appearance313.Material := Material314;
Shape311.Appearance := Appearance313;
Transform310.FdChildren.Add(Shape311);
Transform307.FdChildren.Add(Transform310);
Transform303.FdChildren.Add(Transform307);
Transform315 := TTransformNode.Create;
Transform315.Scale := Vector3(0.5, 0.5, 0.5);
Transform315.Translation := Vector3(0, -1, 0);
Transform315.FdChildren.Add(TouchSensor50);
Transform315.FdChildren.Add(Switch33);
Transform318 := TTransformNode.Create;
Transform318.Translation := Vector3(8, 0, 0);
Shape319 := TShapeNode.Create;
Box320 := TBoxNode.Create;
Box320.Size := Vector3(17, 1, 0.5);
Shape319.Geometry := Box320;
Appearance321 := TAppearanceNode.Create;
Material322 := TMaterialNode.Create;
Material322.Transparency := 1;
Appearance321.Material := Material322;
end;

procedure InitTrebuchetPart22;
begin
Shape319.Appearance := Appearance321;
Transform318.FdChildren.Add(Shape319);
Transform315.FdChildren.Add(Transform318);
Transform303.FdChildren.Add(Transform315);
Transform291.FdChildren.Add(Transform303);
Transform323 := TTransformNode.Create;
Transform323.X3DName := 'ProjectileTransform';
Transform323.Translation := Vector3(14.25, 1.25, 0);
Transform323.FdChildren.Add(Switch209);
Transform325 := TTransformNode.Create;
Transform325.Rotation := Vector4(0, 1, 0, 1.57);
Transform325.Translation := Vector3(0, 1, 0);
Viewpoint326 := TViewpointNode.Create;
Viewpoint326.Description := 'Projectile Cam';
Viewpoint326.Position := Vector3(0, 0, 15);
Transform325.FdChildren.Add(Viewpoint326);
Transform323.FdChildren.Add(Transform325);
Transform291.FdChildren.Add(Transform323);
Transform327 := TTransformNode.Create;
Transform327.Translation := Vector3(20, 2, 0);
Transform328 := TTransformNode.Create;
Transform328.X3DName := 'Front';
Transform328.Rotation := Vector4(0, 1, 0, 1.57);
Viewpoint329 := TViewpointNode.Create;
Viewpoint329.Description := 'Fore';
Transform328.FdChildren.Add(Viewpoint329);
Transform327.FdChildren.Add(Transform328);
Transform291.FdChildren.Add(Transform327);
Transform330 := TTransformNode.Create;
Transform330.Translation := Vector3(-8, 4, 0);
Transform331 := TTransformNode.Create;
Transform331.Rotation := Vector4(0, 1, 0, -1.57);
Viewpoint332 := TViewpointNode.Create;
Viewpoint332.Description := 'Aft';
Transform331.FdChildren.Add(Viewpoint332);
Transform330.FdChildren.Add(Transform331);
Transform291.FdChildren.Add(Transform330);
Script333 := TScriptNode.Create;
Script333.X3DName := 'WeightScript';
FieldVal334 := TSFBool.CreateEvent(Script333, 'set_boolean', True);
end;

procedure InitTrebuchetPart23;
begin
Script333.AddCustomFieldOrEvent(FieldVal334);
FieldVal335 := TSFInt32.CreateEvent(Script333, 'whichchoice', False);
Script333.AddCustomFieldOrEvent(FieldVal335);
FieldVal336 := TSFFloat.CreateEvent(Script333, 'CounterWeight', False);
Script333.AddCustomFieldOrEvent(FieldVal336);
FreeAndNil(CompiledScript333);
CompiledScript333 := TScript333Script.Create(FieldVal335, FieldVal336);
Script333.SetUrl(['compiled:' + LineEnding +
  'initialize=Script333_initialize' + LineEnding +
  'set_boolean=Script333_set_boolean']);
Transform291.FdChildren.Add(Script333);
Script337 := TScriptNode.Create;
Script337.X3DName := 'LauncheeScript';
FieldVal338 := TSFBool.CreateEvent(Script337, 'set_boolean', True);
Script337.AddCustomFieldOrEvent(FieldVal338);
FieldVal339 := TSFInt32.CreateEvent(Script337, 'whichchoice', False);
Script337.AddCustomFieldOrEvent(FieldVal339);
FieldVal340 := TSFFloat.CreateEvent(Script337, 'ProjectileWeight', False);
Script337.AddCustomFieldOrEvent(FieldVal340);
FreeAndNil(CompiledScript337);
CompiledScript337 := TScript337Script.Create(FieldVal339, FieldVal340);
Script337.SetUrl(['compiled:' + LineEnding +
  'set_boolean=Script337_set_boolean']);
Transform291.FdChildren.Add(Script337);
Script341 := TScriptNode.Create;
Script341.X3DName := 'PigdogMonkScript';
FieldVal342 := TSFBool.CreateEvent(Script341, 'set_boolean', True);
Script341.AddCustomFieldOrEvent(FieldVal342);
FieldVal343 := TSFInt32.CreateEvent(Script341, 'whichchoice', False);
Script341.AddCustomFieldOrEvent(FieldVal343);
FreeAndNil(CompiledScript341);
CompiledScript341 := TScript341Script.Create(FieldVal343);
Script341.SetUrl(['compiled:' + LineEnding +
  'set_boolean=Script341_set_boolean']);
Transform291.FdChildren.Add(Script341);
Script344 := TScriptNode.Create;
Script344.X3DName := 'Mover';
FieldVal345 := TSFFloat.CreateEvent(Script344, 'set_fraction', True);
Script344.AddCustomFieldOrEvent(FieldVal345);
FieldVal346 := TSFFloat.CreateEvent(Script344, 'set_MassCounterWeight', True);
Script344.AddCustomFieldOrEvent(FieldVal346);
FieldVal347 := TSFFloat.CreateEvent(Script344, 'set_MassProjectileWeight', True);
Script344.AddCustomFieldOrEvent(FieldVal347);
FieldVal348 := TSFFloat.Create(Script344, False, 'MassCounterWeight', 1);
end;

procedure InitTrebuchetPart24;
begin
Script344.AddCustomFieldOrEvent(FieldVal348);
FieldVal349 := TSFFloat.Create(Script344, False, 'MassProjectileWeight', 1);
Script344.AddCustomFieldOrEvent(FieldVal349);
FieldVal350 := TSFVec3f.CreateEvent(Script344, 'transparent', False);
Script344.AddCustomFieldOrEvent(FieldVal350);
FieldVal351 := TSFVec3f.CreateEvent(Script344, 'value_changed', False);
Script344.AddCustomFieldOrEvent(FieldVal351);
FreeAndNil(CompiledScript344);
CompiledScript344 := TScript344Script.Create(FieldVal348, FieldVal349, FieldVal350, FieldVal351);
Script344.SetUrl(['compiled:' + LineEnding +
  'initialize=Script344_initialize' + LineEnding +
  'set_MassProjectileWeight=Script344_set_MassProjectileWeight' + LineEnding +
  'set_MassCounterWeight=Script344_set_MassCounterWeight' + LineEnding +
  'set_fraction=Script344_set_fraction']);
Transform291.FdChildren.Add(Script344);
Transform104.FdChildren.Add(Transform291);
Group17.FdChildren.Add(Transform104);
TimeSensor352 := TTimeSensorNode.Create;
TimeSensor352.X3DName := 'clock';
TimeSensor352.CycleInterval := 10;
Group17.FdChildren.Add(TimeSensor352);
PositionInterpolator353 := TPositionInterpolatorNode.Create;
PositionInterpolator353.X3DName := 'verticalweightpath';
PositionInterpolator353.SetKey([0, 0.1, 0.2, 0.2, 0.3, 0.9]);
PositionInterpolator353.SetKeyValue([Vector3(1.4, 1.6, 0), Vector3(1, -8, 0), Vector3(-3.5, -12, 0), Vector3(-3.5, -12, 0), Vector3(1.2, -8, 0), Vector3(1.4, 1.6, 0)]);
Group17.FdChildren.Add(PositionInterpolator353);
OrientationInterpolator354 := TOrientationInterpolatorNode.Create;
OrientationInterpolator354.X3DName := 'flingerangles';
OrientationInterpolator354.SetKey([0, 0.1, 0.2, 0.2, 0.3, 0.9]);
OrientationInterpolator354.SetKeyValue([Vector4(0, 0, 1, 0.82), Vector4(0, 0, 1, -0.77), Vector4(0, 0, 1, -1.57), Vector4(0, 0, 1, -1.57), Vector4(0, 0, 1, -0.77), Vector4(0, 0, 1, 0.82)]);
Group17.FdChildren.Add(OrientationInterpolator354);
PositionInterpolator355 := TPositionInterpolatorNode.Create;
PositionInterpolator355.X3DName := 'pinpath';
PositionInterpolator355.SetKey([0, 0.01, 0.95, 1]);
PositionInterpolator355.SetKeyValue([Vector3(0, 0, -3), Vector3(0, 0, -10), Vector3(0, 0, -10), Vector3(0, 0, -3)]);
Group17.FdChildren.Add(PositionInterpolator355);
OrientationInterpolator356 := TOrientationInterpolatorNode.Create;
OrientationInterpolator356.X3DName := 'RnSAngels';
OrientationInterpolator356.SetKey([0, 0.7, 1]);
OrientationInterpolator356.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, -3.14), Vector4(0, 0, 1, 0)]);
Group17.FdChildren.Add(OrientationInterpolator356);
PositionInterpolator357 := TPositionInterpolatorNode.Create;
PositionInterpolator357.X3DName := 'invisiable';
PositionInterpolator357.SetKey([0, 0.2, 0.98, 0.99]);
end;

procedure InitTrebuchetPart25;
begin
PositionInterpolator357.SetKeyValue([Vector3(1, 1, 1), Vector3(0.01, 0.01, 0.01), Vector3(0.01, 0.01, 0.01), Vector3(1, 1, 1)]);
Group17.FdChildren.Add(PositionInterpolator357);
{ ROUTE clock.fraction_changed TO invisiable.set_fraction }
Group17.AddRoute(TimeSensor352.EventFraction_changed, PositionInterpolator357.EventSet_fraction);
{ ROUTE invisiable.value_changed TO projectiletransform.set_scale }
Group17.AddRoute(PositionInterpolator357.EventValue_changed, Transform208.scale);
{ ROUTE WeightScript.CounterWeight TO Mover.set_MassCounterWeight }
Group17.AddRoute(FieldVal336, FieldVal346);
{ ROUTE LauncheeScript.ProjectileWeight TO Mover.set_MassProjectileWeight }
Group17.AddRoute(FieldVal340, FieldVal347);
{ ROUTE clock.fraction_changed TO Mover.set_fraction }
Group17.AddRoute(TimeSensor352.EventFraction_changed, FieldVal345);
{ ROUTE Mover.value_changed TO ProjectileTransform.set_translation }
Group17.AddRoute(FieldVal351, Transform323.FdTranslation.EventIn);
{ ROUTE Mover.transparent TO ProjectileTransform.set_scale }
Group17.AddRoute(FieldVal350, Transform323.scale);
{ ROUTE Launch.touchTime TO clock.set_startTime }
Group17.AddRoute(TouchSensor76.EventTouchTime, TimeSensor352.FdStartTime.EventIn);
{ ROUTE Launch.isActive TO PigdogMonkScript.set_boolean }
Group17.AddRoute(TouchSensor76.EventIsActive, FieldVal342);
{ ROUTE Launch.touchTime TO PigDogSound.set_startTime }
Group17.AddRoute(TouchSensor76.EventTouchTime, AudioClip72.FdStartTime.EventIn);
{ ROUTE Launch.touchTime TO MonkSound.set_startTime }
Group17.AddRoute(TouchSensor76.EventTouchTime, AudioClip75.FdStartTime.EventIn);
{ ROUTE PigdogMonkScript.whichchoice TO PigdogMonk.whichChoice }
Group17.AddRoute(FieldVal343, Switch69.whichChoice);
{ ROUTE LauncheeChoice.touchTime TO HolyHandGrenadeSound.set_startTime }
Group17.AddRoute(TouchSensor207.EventTouchTime, AudioClip85.FdStartTime.EventIn);
{ ROUTE LauncheeChoice.touchTime TO CowSound.set_startTime }
Group17.AddRoute(TouchSensor207.EventTouchTime, AudioClip92.FdStartTime.EventIn);
{ ROUTE LauncheeChoice.touchTime TO HamsterSound.set_startTime }
Group17.AddRoute(TouchSensor207.EventTouchTime, AudioClip99.FdStartTime.EventIn);
{ ROUTE LauncheeChoice.isActive TO LauncheeScript.set_boolean }
Group17.AddRoute(TouchSensor207.EventIsActive, FieldVal338);
{ ROUTE LauncheeScript.whichchoice TO projectile.whichChoice }
Group17.AddRoute(FieldVal339, Switch209.whichChoice);
{ ROUTE LauncheeScript.whichchoice TO projectilename.whichChoice }
Group17.AddRoute(FieldVal339, Switch78.whichChoice);
{ ROUTE weightselector.isActive TO WeightScript.set_boolean }
Group17.AddRoute(TouchSensor50.EventIsActive, FieldVal334);
end;

procedure InitTrebuchetPart26;
begin
{ ROUTE WeightScript.whichchoice TO Weight.whichChoice }
Group17.AddRoute(FieldVal335, Switch33.whichChoice);
{ ROUTE clock.fraction_changed TO flingerangles.set_fraction }
Group17.AddRoute(TimeSensor352.EventFraction_changed, OrientationInterpolator354.EventSet_fraction);
{ ROUTE flingerangles.value_changed TO flinger.set_rotation }
Group17.AddRoute(OrientationInterpolator354.EventValue_changed, Transform129.FdRotation.EventIn);
{ ROUTE clock.fraction_changed TO verticalweightpath.set_fraction }
Group17.AddRoute(TimeSensor352.EventFraction_changed, PositionInterpolator353.EventSet_fraction);
{ ROUTE verticalweightpath.value_changed TO verticalweight.set_translation }
Group17.AddRoute(PositionInterpolator353.EventValue_changed, Transform227.FdTranslation.EventIn);
{ ROUTE clock.fraction_changed TO pinpath.set_fraction }
Group17.AddRoute(TimeSensor352.EventFraction_changed, PositionInterpolator355.EventSet_fraction);
{ ROUTE pinpath.value_changed TO Pin.set_translation }
Group17.AddRoute(PositionInterpolator355.EventValue_changed, Transform256.FdTranslation.EventIn);
X3D0.AddChildren([Group17]);
end;

function CreateTrebuchet: TX3DRootNode;
begin
  InitTrebuchetPart0;
  InitTrebuchetPart1;
  InitTrebuchetPart2;
  InitTrebuchetPart3;
  InitTrebuchetPart4;
  InitTrebuchetPart5;
  InitTrebuchetPart6;
  InitTrebuchetPart7;
  InitTrebuchetPart8;
  InitTrebuchetPart9;
  InitTrebuchetPart10;
  InitTrebuchetPart11;
  InitTrebuchetPart12;
  InitTrebuchetPart13;
  InitTrebuchetPart14;
  InitTrebuchetPart15;
  InitTrebuchetPart16;
  InitTrebuchetPart17;
  InitTrebuchetPart18;
  InitTrebuchetPart19;
  InitTrebuchetPart20;
  InitTrebuchetPart21;
  InitTrebuchetPart22;
  InitTrebuchetPart23;
  InitTrebuchetPart24;
  InitTrebuchetPart25;
  InitTrebuchetPart26;
  Result := X3D0;
end;

procedure RegisterTrebuchetScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript333 <> nil then
    CompiledScript333.RegisterHandlers(Scene);
  if CompiledScript337 <> nil then
    CompiledScript337.RegisterHandlers(Scene);
  if CompiledScript341 <> nil then
    CompiledScript341.RegisterHandlers(Scene);
  if CompiledScript344 <> nil then
    CompiledScript344.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript333);
  FreeAndNil(CompiledScript337);
  FreeAndNil(CompiledScript341);
  FreeAndNil(CompiledScript344);
end.
