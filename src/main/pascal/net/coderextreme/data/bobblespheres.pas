unit bobblespheres;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createbobblespheres: TX3DRootNode;
procedure RegisterbobblespheresScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript41Script = class
  private
    FtargetMaterial: TX3DNode;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_targetMaterial: TSFNode);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_color(Value: TX3DField; const Time: TX3DTime);
    procedure Set_roughness(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript60Script = class
  private
    FtargetMaterial: TX3DNode;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_targetMaterial: TSFNode);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_roughness(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group6: TGroupNode;
  WorldInfo7: TWorldInfoNode;
  NavigationInfo8: TNavigationInfoNode;
  Background9: TBackgroundNode;
  Viewpoint10: TViewpointNode;
  DirectionalLight11: TDirectionalLightNode;
  Transform12: TTransformNode;
  Shape13: TShapeNode;
  Appearance14: TAppearanceNode;
  PhysicalMaterial15: TPhysicalMaterialNode;
  Sphere16: TSphereNode;
  Transform17: TTransformNode;
  Shape18: TShapeNode;
  Appearance19: TAppearanceNode;
  PhysicalMaterial20: TPhysicalMaterialNode;
  Sphere21: TSphereNode;
  Transform22: TTransformNode;
  Shape23: TShapeNode;
  Appearance24: TAppearanceNode;
  PhysicalMaterial25: TPhysicalMaterialNode;
  Sphere26: TSphereNode;
  Transform27: TTransformNode;
  Shape28: TShapeNode;
  Appearance29: TAppearanceNode;
  PhysicalMaterial30: TPhysicalMaterialNode;
  Sphere31: TSphereNode;
  Transform32: TTransformNode;
  Shape33: TShapeNode;
  Appearance34: TAppearanceNode;
  PhysicalMaterial35: TPhysicalMaterialNode;
  Sphere36: TSphereNode;
  TimeSensor37: TTimeSensorNode;
  PositionInterpolator38: TPositionInterpolatorNode;
  ColorInterpolator39: TColorInterpolatorNode;
  ScalarInterpolator40: TScalarInterpolatorNode;
  Script41: TScriptNode;
  FieldVal42: TX3DEvent;
  FieldVal43: TX3DEvent;
  FieldVal44: TSFNode;
  CompiledScript41: TScript41Script;
  Transform52: TTransformNode;
  Shape53: TShapeNode;
  Appearance54: TAppearanceNode;
  PhysicalMaterial55: TPhysicalMaterialNode;
  Sphere56: TSphereNode;
  TimeSensor57: TTimeSensorNode;
  PositionInterpolator58: TPositionInterpolatorNode;
  ScalarInterpolator59: TScalarInterpolatorNode;
  Script60: TScriptNode;
  FieldVal61: TX3DEvent;
  FieldVal62: TSFNode;
  CompiledScript60: TScript60Script;
  Transform68: TTransformNode;
  Shape69: TShapeNode;
  Appearance70: TAppearanceNode;
  PhysicalMaterial71: TPhysicalMaterialNode;
  IORMaterialExtension72: TIORMaterialExtensionNode;
  Sphere73: TSphereNode;
  TimeSensor74: TTimeSensorNode;
  PositionInterpolator75: TPositionInterpolatorNode;
  ScalarInterpolator76: TScalarInterpolatorNode;
  Transform81: TTransformNode;
  Shape82: TShapeNode;
  Appearance83: TAppearanceNode;
  PhysicalMaterial84: TPhysicalMaterialNode;
  IridescenceMaterialExtension85: TIridescenceMaterialExtensionNode;
  Sphere86: TSphereNode;
  TimeSensor87: TTimeSensorNode;
  PositionInterpolator88: TPositionInterpolatorNode;
  ScalarInterpolator89: TScalarInterpolatorNode;

constructor TScript41Script.Create(const AField_targetMaterial: TSFNode);
begin
  inherited Create;
  FtargetMaterial := nil;
  if AField_targetMaterial <> nil then FtargetMaterial := AField_targetMaterial.Value;
end;

destructor TScript41Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript41Script.FlushOutputs(const Time: TX3DTime);
begin
end;

procedure TScript41Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script41_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script41_set_color', {$ifdef FPC}@{$endif}Set_color);
  Scene.RegisterCompiledScript('Script41_set_roughness', {$ifdef FPC}@{$endif}Set_roughness);
end;

procedure TScript41Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  matNode := FtargetMaterial.value;
end;

procedure TScript41Script.Set_color(Value: TX3DField; const Time: TX3DTime);
begin
  if matNode then
  begin
    matNode.baseColor := (Value as TSFColor).Value;
  end;
end;

procedure TScript41Script.Set_roughness(Value: TX3DField; const Time: TX3DTime);
begin
  if matNode then
  begin
    matNode.roughness := (Value as TSFFloat).Value;
  end;
end;

constructor TScript60Script.Create(const AField_targetMaterial: TSFNode);
begin
  inherited Create;
  FtargetMaterial := nil;
  if AField_targetMaterial <> nil then FtargetMaterial := AField_targetMaterial.Value;
end;

destructor TScript60Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript60Script.FlushOutputs(const Time: TX3DTime);
begin
end;

procedure TScript60Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script60_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script60_set_roughness', {$ifdef FPC}@{$endif}Set_roughness);
end;

procedure TScript60Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  matNode := FtargetMaterial.value;
end;

procedure TScript60Script.Set_roughness(Value: TX3DField; const Time: TX3DTime);
begin
  if matNode then
  begin
    matNode.roughness := (Value as TSFFloat).Value;
  end;
end;

procedure InitbobblespheresPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['X_ITE'] := 1;
X3D0.Meta['title'] := 'Bobble Spheres Full Animation (Final Working)';
X3D0.Meta['description'] := 'Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions.';
X3D0.Meta['creator'] := 'Generated from Python script by John Carlson';
Group6 := TGroupNode.Create;
WorldInfo7 := TWorldInfoNode.Create;
WorldInfo7.Title := 'Bobble Spheres (PBR Full Animation)';
Group6.FdChildren.Add(WorldInfo7);
NavigationInfo8 := TNavigationInfoNode.Create;
Group6.FdChildren.Add(NavigationInfo8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyAngle([1.57]);
Background9.SetSkyColor([Vector3(0.15, 0.25, 0.8), Vector3(0.9, 0.9, 0.9)]);
Group6.FdChildren.Add(Background9);
Viewpoint10 := TViewpointNode.Create;
Viewpoint10.Description := 'Initial Camera';
Viewpoint10.Position := Vector3(-70, 15, -25);
Viewpoint10.Orientation := Vector4(0.147, 0.989, 0.005, -1.82);
Viewpoint10.FieldOfView := 0.349;
Group6.FdChildren.Add(Viewpoint10);
DirectionalLight11 := TDirectionalLightNode.Create;
DirectionalLight11.Direction := Vector3(-0.5, -1, -0.5);
DirectionalLight11.Intensity := 2;
Group6.FdChildren.Add(DirectionalLight11);
{ Static objects }
Transform12 := TTransformNode.Create;
Transform12.Translation := Vector3(0, -1000, -1);
Shape13 := TShapeNode.Create;
Appearance14 := TAppearanceNode.Create;
PhysicalMaterial15 := TPhysicalMaterialNode.Create;
PhysicalMaterial15.BaseColor := Vector3(0.5, 0.5, 0.5);
Appearance14.Material := PhysicalMaterial15;
Shape13.Appearance := Appearance14;
Sphere16 := TSphereNode.Create;
Sphere16.Radius := 1000;
Shape13.Geometry := Sphere16;
end;

procedure InitbobblespheresPart1;
begin
Transform12.FdChildren.Add(Shape13);
Group6.FdChildren.Add(Transform12);
Transform17 := TTransformNode.Create;
Transform17.Translation := Vector3(0, 1, 0);
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
PhysicalMaterial20 := TPhysicalMaterialNode.Create;
PhysicalMaterial20.BaseColor := Vector3(0.9, 0.9, 0.9);
PhysicalMaterial20.TransmissionFactor := '0.9';
PhysicalMaterial20.Roughness := 0;
PhysicalMaterial20.IndexOfRefraction := '1.5';
Appearance19.Material := PhysicalMaterial20;
Shape18.Appearance := Appearance19;
Sphere21 := TSphereNode.Create;
Shape18.Geometry := Sphere21;
Transform17.FdChildren.Add(Shape18);
Group6.FdChildren.Add(Transform17);
Transform22 := TTransformNode.Create;
Transform22.Translation := Vector3(-4, 1, 0);
Shape23 := TShapeNode.Create;
Appearance24 := TAppearanceNode.Create;
PhysicalMaterial25 := TPhysicalMaterialNode.Create;
PhysicalMaterial25.BaseColor := Vector3(1, 0.95, 0.9);
PhysicalMaterial25.TransmissionFactor := '0.8';
PhysicalMaterial25.Roughness := 0.05;
PhysicalMaterial25.IndexOfRefraction := '1.1';
Appearance24.Material := PhysicalMaterial25;
Shape23.Appearance := Appearance24;
Sphere26 := TSphereNode.Create;
Shape23.Geometry := Sphere26;
Transform22.FdChildren.Add(Shape23);
Group6.FdChildren.Add(Transform22);
Transform27 := TTransformNode.Create;
Transform27.Translation := Vector3(4, 1, 0);
Shape28 := TShapeNode.Create;
Appearance29 := TAppearanceNode.Create;
PhysicalMaterial30 := TPhysicalMaterialNode.Create;
PhysicalMaterial30.BaseColor := Vector3(0.7, 0.6, 0.5);
PhysicalMaterial30.Roughness := 0.1;
Appearance29.Material := PhysicalMaterial30;
end;

procedure InitbobblespheresPart2;
begin
Shape28.Appearance := Appearance29;
Sphere31 := TSphereNode.Create;
Shape28.Geometry := Sphere31;
Transform27.FdChildren.Add(Shape28);
Group6.FdChildren.Add(Transform27);
{ === DYNAMICALLY GENERATED SPHERES === }
{ Example: Matte Sphere with animated color and roughness (Using initialize()) }
Transform32 := TTransformNode.Create;
Transform32.X3DName := 'T_0';
Transform32.Translation := Vector3(-10.871, 0.2, -10.453);
Shape33 := TShapeNode.Create;
Appearance34 := TAppearanceNode.Create;
PhysicalMaterial35 := TPhysicalMaterialNode.Create;
PhysicalMaterial35.X3DName := 'M_0';
PhysicalMaterial35.BaseColor := Vector3(0.627, 0.003, 0.165);
Appearance34.Material := PhysicalMaterial35;
Shape33.Appearance := Appearance34;
Sphere36 := TSphereNode.Create;
Sphere36.Radius := 0.2;
Shape33.Geometry := Sphere36;
Transform32.FdChildren.Add(Shape33);
Group6.FdChildren.Add(Transform32);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.X3DName := 'C_0';
TimeSensor37.CycleInterval := 5.21;
TimeSensor37.Loop := True;
Group6.FdChildren.Add(TimeSensor37);
PositionInterpolator38 := TPositionInterpolatorNode.Create;
PositionInterpolator38.X3DName := 'PI_0';
PositionInterpolator38.SetKey([0, 0.5, 1]);
PositionInterpolator38.SetKeyValue([Vector3(-10.871, 0.2, -10.453), Vector3(-10.871, 0.6, -10.453), Vector3(-10.871, 0.2, -10.453)]);
Group6.FdChildren.Add(PositionInterpolator38);
ColorInterpolator39 := TColorInterpolatorNode.Create;
ColorInterpolator39.X3DName := 'CI_0';
ColorInterpolator39.SetKey([0, 0.5, 1]);
ColorInterpolator39.SetKeyValue([Vector3(0.627, 0.003, 0.165), Vector3(0.011, 0.583, 0.443), Vector3(0.627, 0.003, 0.165)]);
Group6.FdChildren.Add(ColorInterpolator39);
ScalarInterpolator40 := TScalarInterpolatorNode.Create;
ScalarInterpolator40.X3DName := 'SI_0';
ScalarInterpolator40.SetKey([0, 0.5, 1]);
end;

procedure InitbobblespheresPart3;
begin
ScalarInterpolator40.SetKeyValue([1, 0.4, 1]);
Group6.FdChildren.Add(ScalarInterpolator40);
Script41 := TScriptNode.Create;
Script41.X3DName := 'Animator_0';
FieldVal42 := TSFColor.CreateEvent(Script41, 'set_color', True);
Script41.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.CreateEvent(Script41, 'set_roughness', True);
Script41.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFNode.CreateUndefined(Script41, False, 'targetMaterial');
Script41.AddCustomFieldOrEvent(FieldVal44);
FieldVal44.Value := PhysicalMaterial35;
FreeAndNil(CompiledScript41);
CompiledScript41 := TScript41Script.Create(FieldVal44);
Script41.SetUrl(['compiled:' + LineEnding +
  'initialize=Script41_initialize' + LineEnding +
  'set_color=Script41_set_color' + LineEnding +
  'set_roughness=Script41_set_roughness']);
Group6.FdChildren.Add(Script41);
{ ROUTE C_0.fraction_changed TO PI_0.set_fraction }
Group6.AddRoute(TimeSensor37.EventFraction_changed, PositionInterpolator38.EventSet_fraction);
{ ROUTE PI_0.value_changed TO T_0.set_translation }
Group6.AddRoute(PositionInterpolator38.EventValue_changed, Transform32.FdTranslation.EventIn);
{ ROUTE C_0.fraction_changed TO CI_0.set_fraction }
Group6.AddRoute(TimeSensor37.EventFraction_changed, ColorInterpolator39.EventSet_fraction);
{ ROUTE CI_0.value_changed TO Animator_0.set_color }
Group6.AddRoute(ColorInterpolator39.EventValue_changed, FieldVal42);
{ ROUTE C_0.fraction_changed TO SI_0.set_fraction }
Group6.AddRoute(TimeSensor37.EventFraction_changed, ScalarInterpolator40.EventSet_fraction);
{ ROUTE SI_0.value_changed TO Animator_0.set_roughness }
Group6.AddRoute(ScalarInterpolator40.EventValue_changed, FieldVal43);
{ Example: Metal Sphere with animated roughness (Using initialize()) }
Transform52 := TTransformNode.Create;
Transform52.X3DName := 'T_1';
Transform52.Translation := Vector3(-10.411, 0.2, -9.16);
Shape53 := TShapeNode.Create;
Appearance54 := TAppearanceNode.Create;
PhysicalMaterial55 := TPhysicalMaterialNode.Create;
PhysicalMaterial55.X3DName := 'M_1';
PhysicalMaterial55.BaseColor := Vector3(0.707, 0.888, 0.536);
PhysicalMaterial55.Roughness := 0.2;
Appearance54.Material := PhysicalMaterial55;
Shape53.Appearance := Appearance54;
Sphere56 := TSphereNode.Create;
end;

procedure InitbobblespheresPart4;
begin
Sphere56.Radius := 0.2;
Shape53.Geometry := Sphere56;
Transform52.FdChildren.Add(Shape53);
Group6.FdChildren.Add(Transform52);
TimeSensor57 := TTimeSensorNode.Create;
TimeSensor57.X3DName := 'C_1';
TimeSensor57.CycleInterval := 4.15;
TimeSensor57.Loop := True;
Group6.FdChildren.Add(TimeSensor57);
PositionInterpolator58 := TPositionInterpolatorNode.Create;
PositionInterpolator58.X3DName := 'PI_1';
PositionInterpolator58.SetKey([0, 0.5, 1]);
PositionInterpolator58.SetKeyValue([Vector3(-10.411, 0.2, -9.16), Vector3(-10.411, 0.6, -9.16), Vector3(-10.411, 0.2, -9.16)]);
Group6.FdChildren.Add(PositionInterpolator58);
ScalarInterpolator59 := TScalarInterpolatorNode.Create;
ScalarInterpolator59.X3DName := 'SI_1';
ScalarInterpolator59.SetKey([0, 0.5, 1]);
ScalarInterpolator59.SetKeyValue([0.5, 0, 0.5]);
Group6.FdChildren.Add(ScalarInterpolator59);
Script60 := TScriptNode.Create;
Script60.X3DName := 'Animator_1';
FieldVal61 := TSFFloat.CreateEvent(Script60, 'set_roughness', True);
Script60.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TSFNode.CreateUndefined(Script60, False, 'targetMaterial');
Script60.AddCustomFieldOrEvent(FieldVal62);
FieldVal62.Value := PhysicalMaterial55;
FreeAndNil(CompiledScript60);
CompiledScript60 := TScript60Script.Create(FieldVal62);
Script60.SetUrl(['compiled:' + LineEnding +
  'initialize=Script60_initialize' + LineEnding +
  'set_roughness=Script60_set_roughness']);
Group6.FdChildren.Add(Script60);
{ ROUTE C_1.fraction_changed TO PI_1.set_fraction }
Group6.AddRoute(TimeSensor57.EventFraction_changed, PositionInterpolator58.EventSet_fraction);
{ ROUTE PI_1.value_changed TO T_1.set_translation }
Group6.AddRoute(PositionInterpolator58.EventValue_changed, Transform52.FdTranslation.EventIn);
{ ROUTE C_1.fraction_changed TO SI_1.set_fraction }
Group6.AddRoute(TimeSensor57.EventFraction_changed, ScalarInterpolator59.EventSet_fraction);
{ ROUTE SI_1.value_changed TO Animator_1.set_roughness }
Group6.AddRoute(ScalarInterpolator59.EventValue_changed, FieldVal61);
{ The extension-based spheres were already correct and need no changes }
Transform68 := TTransformNode.Create;
end;

procedure InitbobblespheresPart5;
begin
Transform68.X3DName := 'T_2';
Transform68.Translation := Vector3(-10.155, 0.2, -8.324);
Shape69 := TShapeNode.Create;
Appearance70 := TAppearanceNode.Create;
PhysicalMaterial71 := TPhysicalMaterialNode.Create;
PhysicalMaterial71.TransmissionFactor := '0.95';
PhysicalMaterial71.Roughness := 0.05;
IORMaterialExtension72 := TIORMaterialExtensionNode.Create;
IORMaterialExtension72.X3DName := 'IOR_2';
IORMaterialExtension72.IndexOfRefraction := '1.5';
PhysicalMaterial71.AddIORMaterialExtension([IORMaterialExtension72]);
Appearance70.Material := PhysicalMaterial71;
Shape69.Appearance := Appearance70;
Sphere73 := TSphereNode.Create;
Sphere73.Radius := 0.2;
Shape69.Geometry := Sphere73;
Transform68.FdChildren.Add(Shape69);
Group6.FdChildren.Add(Transform68);
TimeSensor74 := TTimeSensorNode.Create;
TimeSensor74.X3DName := 'C_2';
TimeSensor74.CycleInterval := 3.88;
TimeSensor74.Loop := True;
Group6.FdChildren.Add(TimeSensor74);
PositionInterpolator75 := TPositionInterpolatorNode.Create;
PositionInterpolator75.X3DName := 'PI_2';
PositionInterpolator75.SetKey([0, 0.5, 1]);
PositionInterpolator75.SetKeyValue([Vector3(-10.155, 0.2, -8.324), Vector3(-10.155, 0.6, -8.324), Vector3(-10.155, 0.2, -8.324)]);
Group6.FdChildren.Add(PositionInterpolator75);
ScalarInterpolator76 := TScalarInterpolatorNode.Create;
ScalarInterpolator76.X3DName := 'SI_2';
ScalarInterpolator76.SetKey([0, 0.5, 1]);
ScalarInterpolator76.SetKeyValue([1.4, 1.7, 1.4]);
Group6.FdChildren.Add(ScalarInterpolator76);
{ ROUTE C_2.fraction_changed TO PI_2.set_fraction }
Group6.AddRoute(TimeSensor74.EventFraction_changed, PositionInterpolator75.EventSet_fraction);
{ ROUTE PI_2.value_changed TO T_2.set_translation }
Group6.AddRoute(PositionInterpolator75.EventValue_changed, Transform68.FdTranslation.EventIn);
{ ROUTE C_2.fraction_changed TO SI_2.set_fraction }
Group6.AddRoute(TimeSensor74.EventFraction_changed, ScalarInterpolator76.EventSet_fraction);
{ ROUTE SI_2.value_changed TO IOR_2.set_indexOfRefraction }
end;

procedure InitbobblespheresPart6;
begin
Group6.AddRoute(ScalarInterpolator76.EventValue_changed, IORMaterialExtension72.EventSet_indexOfRefraction);
Transform81 := TTransformNode.Create;
Transform81.X3DName := 'T_3';
Transform81.Translation := Vector3(-10.518, 0.2, -7.283);
Shape82 := TShapeNode.Create;
Appearance83 := TAppearanceNode.Create;
PhysicalMaterial84 := TPhysicalMaterialNode.Create;
PhysicalMaterial84.TransmissionFactor := '0.95';
PhysicalMaterial84.Roughness := 0.05;
PhysicalMaterial84.IndexOfRefraction := '1.33';
IridescenceMaterialExtension85 := TIridescenceMaterialExtensionNode.Create;
IridescenceMaterialExtension85.X3DName := 'IRI_3';
IridescenceMaterialExtension85.Iridescence := '1';
IridescenceMaterialExtension85.IridescenceIndexOfRefraction := '1.3';
IridescenceMaterialExtension85.IridescenceThicknessMinimum := '100';
PhysicalMaterial84.AddIridescenceMaterialExtension([IridescenceMaterialExtension85]);
Appearance83.Material := PhysicalMaterial84;
Shape82.Appearance := Appearance83;
Sphere86 := TSphereNode.Create;
Sphere86.Radius := 0.2;
Shape82.Geometry := Sphere86;
Transform81.FdChildren.Add(Shape82);
Group6.FdChildren.Add(Transform81);
TimeSensor87 := TTimeSensorNode.Create;
TimeSensor87.X3DName := 'C_3';
TimeSensor87.CycleInterval := 6;
TimeSensor87.Loop := True;
Group6.FdChildren.Add(TimeSensor87);
PositionInterpolator88 := TPositionInterpolatorNode.Create;
PositionInterpolator88.X3DName := 'PI_3';
PositionInterpolator88.SetKey([0, 0.5, 1]);
PositionInterpolator88.SetKeyValue([Vector3(-10.518, 0.2, -7.283), Vector3(-10.518, 0.6, -7.283), Vector3(-10.518, 0.2, -7.283)]);
Group6.FdChildren.Add(PositionInterpolator88);
ScalarInterpolator89 := TScalarInterpolatorNode.Create;
ScalarInterpolator89.X3DName := 'SI_3';
ScalarInterpolator89.SetKey([0, 0.5, 1]);
ScalarInterpolator89.SetKeyValue([100, 700, 100]);
Group6.FdChildren.Add(ScalarInterpolator89);
{ ROUTE C_3.fraction_changed TO PI_3.set_fraction }
Group6.AddRoute(TimeSensor87.EventFraction_changed, PositionInterpolator88.EventSet_fraction);
end;

procedure InitbobblespheresPart7;
begin
{ ROUTE PI_3.value_changed TO T_3.set_translation }
Group6.AddRoute(PositionInterpolator88.EventValue_changed, Transform81.FdTranslation.EventIn);
{ ROUTE C_3.fraction_changed TO SI_3.set_fraction }
Group6.AddRoute(TimeSensor87.EventFraction_changed, ScalarInterpolator89.EventSet_fraction);
{ ROUTE SI_3.value_changed TO IRI_3.set_iridescenceThicknessMaximum }
Group6.AddRoute(ScalarInterpolator89.EventValue_changed, IridescenceMaterialExtension85.EventSet_iridescenceThicknessMaximum);
X3D0.AddChildren([Group6]);
end;

function Createbobblespheres: TX3DRootNode;
begin
  InitbobblespheresPart0;
  InitbobblespheresPart1;
  InitbobblespheresPart2;
  InitbobblespheresPart3;
  InitbobblespheresPart4;
  InitbobblespheresPart5;
  InitbobblespheresPart6;
  InitbobblespheresPart7;
  Result := X3D0;
end;

procedure RegisterbobblespheresScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript41 <> nil then
    CompiledScript41.RegisterHandlers(Scene);
  if CompiledScript60 <> nil then
    CompiledScript60.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript41);
  FreeAndNil(CompiledScript60);
end.
