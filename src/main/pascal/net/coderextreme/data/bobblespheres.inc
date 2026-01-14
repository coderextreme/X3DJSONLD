function bobblespheres: TX3DRootNode;
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
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
PhysicalMaterial45: TPhysicalMaterialNode;
Transform52: TTransformNode;
Shape53: TShapeNode;
Appearance54: TAppearanceNode;
PhysicalMaterial55: TPhysicalMaterialNode;
Sphere56: TSphereNode;
TimeSensor57: TTimeSensorNode;
PositionInterpolator58: TPositionInterpolatorNode;
ScalarInterpolator59: TScalarInterpolatorNode;
Script60: TScriptNode;
field61: TfieldNode;
field62: TfieldNode;
PhysicalMaterial63: TPhysicalMaterialNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['X_ITE'] := 1;
X3D0.Meta['title'] := 'Bobble Spheres Full Animation (Final Working)';
X3D0.Meta['description'] := 'Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions.';
X3D0.Meta['creator'] := 'Generated from Python script';
Group6 := TGroupNode.Create;
WorldInfo7 := TWorldInfoNode.Create;
WorldInfo7.Title := 'Bobble Spheres (PBR Full Animation)';
{ .AddChildren }
Group6.AddChildren([WorldInfo7]);
NavigationInfo8 := TNavigationInfoNode.Create;
{ .AddChildren }
Group6.AddChildren([NavigationInfo8]);
Background9 := TBackgroundNode.Create;
Background9.SetSkyAngle([1.57]);
Background9.SetSkyColor([Vector3(0.15,0.25,0.8),Vector3(0.9,0.9,0.9)]);
{ .AddChildren }
Group6.AddChildren([Background9]);
Viewpoint10 := TViewpointNode.Create;
Viewpoint10.Description := 'Initial Camera';
Viewpoint10.Position := Vector3(-70,15,-25);
Viewpoint10.Orientation := Vector4(0.147,0.989,0.005,-1.82);
Viewpoint10.FieldOfView := 0.349;
{ .AddChildren }
Group6.AddChildren([Viewpoint10]);
DirectionalLight11 := TDirectionalLightNode.Create;
DirectionalLight11.Direction := Vector3(-0.5,-1,-0.5);
DirectionalLight11.Intensity := 2;
{ .AddChildren }
Group6.AddChildren([DirectionalLight11]);
{ Static objects }
Transform12 := TTransformNode.Create;
Transform12.Translation := Vector3(0,-1000,-1);
Shape13 := TShapeNode.Create;
Appearance14 := TAppearanceNode.Create;
PhysicalMaterial15 := TPhysicalMaterialNode.Create;
PhysicalMaterial15.BaseColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance14.Material := PhysicalMaterial15;
{ .SetAppearance }
Shape13.Appearance := Appearance14;
Sphere16 := TSphereNode.Create;
Sphere16.Radius := 1000;
{ .SetGeometry }
Shape13.Geometry := Sphere16;
{ .AddChild }
Transform12.AddChildren([Shape13]);
{ .AddChildren }
Group6.AddChildren([Transform12]);
Transform17 := TTransformNode.Create;
Transform17.Translation := Vector3(0,1,0);
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
PhysicalMaterial20 := TPhysicalMaterialNode.Create;
PhysicalMaterial20.BaseColor := Vector3(0.9,0.9,0.9);
PhysicalMaterial20.TransmissionFactor := '0.9';
PhysicalMaterial20.Roughness := 0;
PhysicalMaterial20.IndexOfRefraction := '1.5';
{ .SetMaterial }
Appearance19.Material := PhysicalMaterial20;
{ .SetAppearance }
Shape18.Appearance := Appearance19;
Sphere21 := TSphereNode.Create;
{ .SetGeometry }
Shape18.Geometry := Sphere21;
{ .AddChild }
Transform17.AddChildren([Shape18]);
{ .AddChildren }
Group6.AddChildren([Transform17]);
Transform22 := TTransformNode.Create;
Transform22.Translation := Vector3(-4,1,0);
Shape23 := TShapeNode.Create;
Appearance24 := TAppearanceNode.Create;
PhysicalMaterial25 := TPhysicalMaterialNode.Create;
PhysicalMaterial25.BaseColor := Vector3(1,0.95,0.9);
PhysicalMaterial25.TransmissionFactor := '0.8';
PhysicalMaterial25.Roughness := 0.05;
PhysicalMaterial25.IndexOfRefraction := '1.1';
{ .SetMaterial }
Appearance24.Material := PhysicalMaterial25;
{ .SetAppearance }
Shape23.Appearance := Appearance24;
Sphere26 := TSphereNode.Create;
{ .SetGeometry }
Shape23.Geometry := Sphere26;
{ .AddChild }
Transform22.AddChildren([Shape23]);
{ .AddChildren }
Group6.AddChildren([Transform22]);
Transform27 := TTransformNode.Create;
Transform27.Translation := Vector3(4,1,0);
Shape28 := TShapeNode.Create;
Appearance29 := TAppearanceNode.Create;
PhysicalMaterial30 := TPhysicalMaterialNode.Create;
PhysicalMaterial30.BaseColor := Vector3(0.7,0.6,0.5);
PhysicalMaterial30.Roughness := 0.1;
{ .SetMaterial }
Appearance29.Material := PhysicalMaterial30;
{ .SetAppearance }
Shape28.Appearance := Appearance29;
Sphere31 := TSphereNode.Create;
{ .SetGeometry }
Shape28.Geometry := Sphere31;
{ .AddChild }
Transform27.AddChildren([Shape28]);
{ .AddChildren }
Group6.AddChildren([Transform27]);
{ === DYNAMICALLY GENERATED SPHERES === }
{ Example: Matte Sphere with animated color and roughness (Using initialize()) }
Transform32 := TTransformNode.Create;
Transform32.Translation := Vector3(-10.871,0.2,-10.453);
Shape33 := TShapeNode.Create;
Appearance34 := TAppearanceNode.Create;
PhysicalMaterial35 := TPhysicalMaterialNode.Create;
PhysicalMaterial35.BaseColor := Vector3(0.627,0.003,0.165);
{ .SetMaterial }
Appearance34.Material := PhysicalMaterial35;
{ .SetAppearance }
Shape33.Appearance := Appearance34;
Sphere36 := TSphereNode.Create;
Sphere36.Radius := 0.2;
{ .SetGeometry }
Shape33.Geometry := Sphere36;
{ .AddChild }
Transform32.AddChildren([Shape33]);
{ .AddChildren }
Group6.AddChildren([Transform32]);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.CycleInterval := 5.21;
TimeSensor37.Loop := True;
{ .AddChildren }
Group6.AddChildren([TimeSensor37]);
PositionInterpolator38 := TPositionInterpolatorNode.Create;
PositionInterpolator38.SetKey([0,0.5,1]);
PositionInterpolator38.SetKeyValue([Vector3(-10.871,0.2,-10.453),Vector3(-10.871,0.6,-10.453),Vector3(-10.871,0.2,-10.453)]);
{ .AddChildren }
Group6.AddChildren([PositionInterpolator38]);
ColorInterpolator39 := TColorInterpolatorNode.Create;
ColorInterpolator39.SetKey([0,0.5,1]);
ColorInterpolator39.SetKeyValue([Vector3(0.627,0.003,0.165),Vector3(0.011,0.583,0.443),Vector3(0.627,0.003,0.165)]);
{ .AddChildren }
Group6.AddChildren([ColorInterpolator39]);
ScalarInterpolator40 := TScalarInterpolatorNode.Create;
ScalarInterpolator40.SetKey([0,0.5,1]);
ScalarInterpolator40.SetKeyValue([1,0.4,1]);
{ .AddChildren }
Group6.AddChildren([ScalarInterpolator40]);
Script41 := TScriptNode.Create;
field42 := TfieldNode.Create;
field42.NameField := 'set_color';
field42.Type := 'SFColor';
field42.AccessType := 'inputOnly';
{ .AddField }
Script41.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'set_roughness';
field43.Type := 'SFFloat';
field43.AccessType := 'inputOnly';
{ .AddField }
Script41.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'targetMaterial';
field44.Type := 'SFNode';
field44.AccessType := 'initializeOnly';
PhysicalMaterial45 := TPhysicalMaterialNode.Create;
PhysicalMaterial45 := PhysicalMaterial35;
{ .AddChildren }
field44.AddChildren([PhysicalMaterial45]);
{ .AddField }
Script41.Field := field44;

Script41.SetSourceCode('''ecmascript:\n"+
"        var matNode = null; // Variable to hold the material node reference\n"+
"\n"+
"        function initialize() {\n"+
"          // This function runs AFTER the targetMaterial field is connected.\n"+
"          // We safely store the reference to the actual material node.\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_color(value, timestamp) {\n"+
"          if (matNode) { // Check if the node reference was stored\n"+
"            matNode.baseColor = value;\n"+
"          }\n"+
"        }\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }''');
{ .AddChildren }
Group6.AddChildren([Script41]);
Group6.AddRoute(TimeSensor37.EventFraction_changed, PositionInterpolator38.EventSet_fraction);
{ .AddX3DRoute }
Group6.AddRoute(PositionInterpolator38.EventValue_changed, Transform32.FdTranslation);
{ .AddX3DRoute }
Group6.AddRoute(TimeSensor37.EventFraction_changed, ColorInterpolator39.EventSet_fraction);
{ .AddX3DRoute }
Group6.AddRoute(ColorInterpolator39.EventValue_changed, Script41.EventSet_color);
{ .AddX3DRoute }
Group6.AddRoute(TimeSensor37.EventFraction_changed, ScalarInterpolator40.EventSet_fraction);
{ .AddX3DRoute }
Group6.AddRoute(ScalarInterpolator40.EventValue_changed, Script41.EventSet_roughness);
{ .AddX3DRoute }
{ Example: Metal Sphere with animated roughness (Using initialize()) }
Transform52 := TTransformNode.Create;
Transform52.Translation := Vector3(-10.411,0.2,-9.16);
Shape53 := TShapeNode.Create;
Appearance54 := TAppearanceNode.Create;
PhysicalMaterial55 := TPhysicalMaterialNode.Create;
PhysicalMaterial55.BaseColor := Vector3(0.707,0.888,0.536);
PhysicalMaterial55.Roughness := 0.2;
{ .SetMaterial }
Appearance54.Material := PhysicalMaterial55;
{ .SetAppearance }
Shape53.Appearance := Appearance54;
Sphere56 := TSphereNode.Create;
Sphere56.Radius := 0.2;
{ .SetGeometry }
Shape53.Geometry := Sphere56;
{ .AddChild }
Transform52.AddChildren([Shape53]);
{ .AddChildren }
Group6.AddChildren([Transform52]);
TimeSensor57 := TTimeSensorNode.Create;
TimeSensor57.CycleInterval := 4.15;
TimeSensor57.Loop := True;
{ .AddChildren }
Group6.AddChildren([TimeSensor57]);
PositionInterpolator58 := TPositionInterpolatorNode.Create;
PositionInterpolator58.SetKey([0,0.5,1]);
PositionInterpolator58.SetKeyValue([Vector3(-10.411,0.2,-9.16),Vector3(-10.411,0.6,-9.16),Vector3(-10.411,0.2,-9.16)]);
{ .AddChildren }
Group6.AddChildren([PositionInterpolator58]);
ScalarInterpolator59 := TScalarInterpolatorNode.Create;
ScalarInterpolator59.SetKey([0,0.5,1]);
ScalarInterpolator59.SetKeyValue([0.5,0,0.5]);
{ .AddChildren }
Group6.AddChildren([ScalarInterpolator59]);
Script60 := TScriptNode.Create;
field61 := TfieldNode.Create;
field61.NameField := 'set_roughness';
field61.Type := 'SFFloat';
field61.AccessType := 'inputOnly';
{ .AddField }
Script60.Field := field61;
field62 := TfieldNode.Create;
field62.NameField := 'targetMaterial';
field62.Type := 'SFNode';
field62.AccessType := 'initializeOnly';
PhysicalMaterial63 := TPhysicalMaterialNode.Create;
PhysicalMaterial63 := PhysicalMaterial55;
{ .AddChildren }
field62.AddChildren([PhysicalMaterial63]);
{ .AddField }
Script60.Field := field62;

Script60.SetSourceCode('''ecmascript:\n"+
"        var matNode = null;\n"+
"\n"+
"        function initialize() {\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }''');
{ .AddChildren }
Group6.AddChildren([Script60]);
Group6.AddRoute(TimeSensor57.EventFraction_changed, PositionInterpolator58.EventSet_fraction);
{ .AddX3DRoute }
Group6.AddRoute(PositionInterpolator58.EventValue_changed, Transform52.FdTranslation);
{ .AddX3DRoute }
Group6.AddRoute(TimeSensor57.EventFraction_changed, ScalarInterpolator59.EventSet_fraction);
{ .AddX3DRoute }
Group6.AddRoute(ScalarInterpolator59.EventValue_changed, Script60.EventSet_roughness);
{ .AddX3DRoute }
{ The extension-based spheres were already correct and need no changes }
Transform68 := TTransformNode.Create;
Transform68.Translation := Vector3(-10.155,0.2,-8.324);
Shape69 := TShapeNode.Create;
Appearance70 := TAppearanceNode.Create;
PhysicalMaterial71 := TPhysicalMaterialNode.Create;
PhysicalMaterial71.TransmissionFactor := '0.95';
PhysicalMaterial71.Roughness := 0.05;
IORMaterialExtension72 := TIORMaterialExtensionNode.Create;
IORMaterialExtension72.IndexOfRefraction := '1.5';
{ .SetIORMaterialExtension }
PhysicalMaterial71.IORMaterialExtension := IORMaterialExtension72;
{ .SetMaterial }
Appearance70.Material := PhysicalMaterial71;
{ .SetAppearance }
Shape69.Appearance := Appearance70;
Sphere73 := TSphereNode.Create;
Sphere73.Radius := 0.2;
{ .SetGeometry }
Shape69.Geometry := Sphere73;
{ .AddChild }
Transform68.AddChildren([Shape69]);
{ .AddChildren }
Group6.AddChildren([Transform68]);
TimeSensor74 := TTimeSensorNode.Create;
TimeSensor74.CycleInterval := 3.88;
TimeSensor74.Loop := True;
{ .AddChildren }
Group6.AddChildren([TimeSensor74]);
PositionInterpolator75 := TPositionInterpolatorNode.Create;
PositionInterpolator75.SetKey([0,0.5,1]);
PositionInterpolator75.SetKeyValue([Vector3(-10.155,0.2,-8.324),Vector3(-10.155,0.6,-8.324),Vector3(-10.155,0.2,-8.324)]);
{ .AddChildren }
Group6.AddChildren([PositionInterpolator75]);
ScalarInterpolator76 := TScalarInterpolatorNode.Create;
ScalarInterpolator76.SetKey([0,0.5,1]);
ScalarInterpolator76.SetKeyValue([1.4,1.7,1.4]);
{ .AddChildren }
Group6.AddChildren([ScalarInterpolator76]);
Group6.AddRoute(TimeSensor74.EventFraction_changed, PositionInterpolator75.EventSet_fraction);
{ .AddX3DRoute }
Group6.AddRoute(PositionInterpolator75.EventValue_changed, Transform68.FdTranslation);
{ .AddX3DRoute }
Group6.AddRoute(TimeSensor74.EventFraction_changed, ScalarInterpolator76.EventSet_fraction);
{ .AddX3DRoute }
Group6.AddRoute(ScalarInterpolator76.EventValue_changed, IORMaterialExtension72.EventSet_indexofrefraction);
{ .AddX3DRoute }
Transform81 := TTransformNode.Create;
Transform81.Translation := Vector3(-10.518,0.2,-7.283);
Shape82 := TShapeNode.Create;
Appearance83 := TAppearanceNode.Create;
PhysicalMaterial84 := TPhysicalMaterialNode.Create;
PhysicalMaterial84.TransmissionFactor := '0.95';
PhysicalMaterial84.Roughness := 0.05;
PhysicalMaterial84.IndexOfRefraction := '1.33';
IridescenceMaterialExtension85 := TIridescenceMaterialExtensionNode.Create;
IridescenceMaterialExtension85.Iridescence := '1';
IridescenceMaterialExtension85.IridescenceIndexOfRefraction := '1.3';
IridescenceMaterialExtension85.IridescenceThicknessMinimum := '100';
{ .SetIridescenceMaterialExtension }
PhysicalMaterial84.IridescenceMaterialExtension := IridescenceMaterialExtension85;
{ .SetMaterial }
Appearance83.Material := PhysicalMaterial84;
{ .SetAppearance }
Shape82.Appearance := Appearance83;
Sphere86 := TSphereNode.Create;
Sphere86.Radius := 0.2;
{ .SetGeometry }
Shape82.Geometry := Sphere86;
{ .AddChild }
Transform81.AddChildren([Shape82]);
{ .AddChildren }
Group6.AddChildren([Transform81]);
TimeSensor87 := TTimeSensorNode.Create;
TimeSensor87.CycleInterval := 6;
TimeSensor87.Loop := True;
{ .AddChildren }
Group6.AddChildren([TimeSensor87]);
PositionInterpolator88 := TPositionInterpolatorNode.Create;
PositionInterpolator88.SetKey([0,0.5,1]);
PositionInterpolator88.SetKeyValue([Vector3(-10.518,0.2,-7.283),Vector3(-10.518,0.6,-7.283),Vector3(-10.518,0.2,-7.283)]);
{ .AddChildren }
Group6.AddChildren([PositionInterpolator88]);
ScalarInterpolator89 := TScalarInterpolatorNode.Create;
ScalarInterpolator89.SetKey([0,0.5,1]);
ScalarInterpolator89.SetKeyValue([100,700,100]);
{ .AddChildren }
Group6.AddChildren([ScalarInterpolator89]);
Group6.AddRoute(TimeSensor87.EventFraction_changed, PositionInterpolator88.EventSet_fraction);
{ .AddX3DRoute }
Group6.AddRoute(PositionInterpolator88.EventValue_changed, Transform81.FdTranslation);
{ .AddX3DRoute }
Group6.AddRoute(TimeSensor87.EventFraction_changed, ScalarInterpolator89.EventSet_fraction);
{ .AddX3DRoute }
Group6.AddRoute(ScalarInterpolator89.EventValue_changed, IridescenceMaterialExtension85.EventSet_iridescencethicknessmaximum);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group6]);
Result := X3D0;
end;
