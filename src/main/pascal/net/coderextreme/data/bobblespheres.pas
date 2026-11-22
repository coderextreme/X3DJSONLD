unit bobblespheres;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createbobblespheres: TX3DRootNode;

implementation

uses CastleVectors;

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
SFColor42: TSFColor;
SFFloat43: TSFFloat;
SFNode44: TSFNode;
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
SFFloat61: TSFFloat;
SFNode62: TSFNode;
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

procedure InitbobblespheresPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['X_ITE'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'Bobble Spheres Full Animation (Final Working)';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Generated from Python script by John Carlson';
{ METHOD .Meta }
{ METHOD .Head }
Group6 := TGroupNode.Create;
WorldInfo7 := TWorldInfoNode.Create;
WorldInfo7.Title := 'Bobble Spheres (PBR Full Animation)';
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(WorldInfo7);
NavigationInfo8 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(NavigationInfo8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyAngle([1.57]);
Background9.SetSkyColor([Vector3(0.15,0.25,0.8),Vector3(0.9,0.9,0.9)]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Background9);
Viewpoint10 := TViewpointNode.Create;
Viewpoint10.Description := 'Initial Camera';
Viewpoint10.Position := Vector3(-70,15,-25);
Viewpoint10.Orientation := Vector4(0.147,0.989,0.005,-1.82);
Viewpoint10.FieldOfView := 0.349;
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Viewpoint10);
DirectionalLight11 := TDirectionalLightNode.Create;
DirectionalLight11.Direction := Vector3(-0.5,-1,-0.5);
DirectionalLight11.Intensity := 2;
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(DirectionalLight11);
{ Static objects }
Transform12 := TTransformNode.Create;
Transform12.Translation := Vector3(0,-1000,-1);
Shape13 := TShapeNode.Create;
Appearance14 := TAppearanceNode.Create;
PhysicalMaterial15 := TPhysicalMaterialNode.Create;
PhysicalMaterial15.BaseColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance14.Material := PhysicalMaterial15;
{ METHOD .Appearance }
Shape13.Appearance := Appearance14;
Sphere16 := TSphereNode.Create;
Sphere16.Radius := 1000;
{ METHOD .Geometry }
Shape13.Geometry := Sphere16;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Shape13);
end;

procedure InitbobblespheresPart1;
begin

{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform12);
Transform17 := TTransformNode.Create;
Transform17.Translation := Vector3(0,1,0);
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
PhysicalMaterial20 := TPhysicalMaterialNode.Create;
PhysicalMaterial20.BaseColor := Vector3(0.9,0.9,0.9);
PhysicalMaterial20.TransmissionFactor := '0.9';
PhysicalMaterial20.Roughness := 0;
PhysicalMaterial20.IndexOfRefraction := '1.5';
{ METHOD .SetMaterial }
Appearance19.Material := PhysicalMaterial20;
{ METHOD .Appearance }
Shape18.Appearance := Appearance19;
Sphere21 := TSphereNode.Create;
{ METHOD .Geometry }
Shape18.Geometry := Sphere21;
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Shape18);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform17);
Transform22 := TTransformNode.Create;
Transform22.Translation := Vector3(-4,1,0);
Shape23 := TShapeNode.Create;
Appearance24 := TAppearanceNode.Create;
PhysicalMaterial25 := TPhysicalMaterialNode.Create;
PhysicalMaterial25.BaseColor := Vector3(1,0.95,0.9);
PhysicalMaterial25.TransmissionFactor := '0.8';
PhysicalMaterial25.Roughness := 0.05;
PhysicalMaterial25.IndexOfRefraction := '1.1';
{ METHOD .SetMaterial }
Appearance24.Material := PhysicalMaterial25;
{ METHOD .Appearance }
Shape23.Appearance := Appearance24;
Sphere26 := TSphereNode.Create;
{ METHOD .Geometry }
Shape23.Geometry := Sphere26;
{ METHOD .FdChildren.Add }
Transform22.FdChildren.Add(Shape23);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform22);
Transform27 := TTransformNode.Create;
Transform27.Translation := Vector3(4,1,0);
Shape28 := TShapeNode.Create;
Appearance29 := TAppearanceNode.Create;
PhysicalMaterial30 := TPhysicalMaterialNode.Create;
PhysicalMaterial30.BaseColor := Vector3(0.7,0.6,0.5);
PhysicalMaterial30.Roughness := 0.1;
{ METHOD .SetMaterial }
Appearance29.Material := PhysicalMaterial30;
{ METHOD .Appearance }
Shape28.Appearance := Appearance29;
end;

procedure InitbobblespheresPart2;
begin

Sphere31 := TSphereNode.Create;
{ METHOD .Geometry }
Shape28.Geometry := Sphere31;
{ METHOD .FdChildren.Add }
Transform27.FdChildren.Add(Shape28);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform27);
{ === DYNAMICALLY GENERATED SPHERES === }
{ Example: Matte Sphere with animated color and roughness (Using initialize()) }
Transform32 := TTransformNode.Create;
Transform32.Translation := Vector3(-10.871,0.2,-10.453);
Shape33 := TShapeNode.Create;
Appearance34 := TAppearanceNode.Create;
PhysicalMaterial35 := TPhysicalMaterialNode.Create;
PhysicalMaterial35.BaseColor := Vector3(0.627,0.003,0.165);
{ METHOD .SetMaterial }
Appearance34.Material := PhysicalMaterial35;
{ METHOD .Appearance }
Shape33.Appearance := Appearance34;
Sphere36 := TSphereNode.Create;
Sphere36.Radius := 0.2;
{ METHOD .Geometry }
Shape33.Geometry := Sphere36;
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform32);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.CycleInterval := 5.21;
TimeSensor37.Loop := True;
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(TimeSensor37);
PositionInterpolator38 := TPositionInterpolatorNode.Create;
PositionInterpolator38.SetKey([0,0.5,1]);
PositionInterpolator38.SetKeyValue([Vector3(-10.871,0.2,-10.453),Vector3(-10.871,0.6,-10.453),Vector3(-10.871,0.2,-10.453)]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(PositionInterpolator38);
ColorInterpolator39 := TColorInterpolatorNode.Create;
ColorInterpolator39.SetKey([0,0.5,1]);
ColorInterpolator39.SetKeyValue([Vector3(0.627,0.003,0.165),Vector3(0.011,0.583,0.443),Vector3(0.627,0.003,0.165)]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(ColorInterpolator39);
ScalarInterpolator40 := TScalarInterpolatorNode.Create;
ScalarInterpolator40.SetKey([0,0.5,1]);
ScalarInterpolator40.SetKeyValue([1,0.4,1]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(ScalarInterpolator40);
Script41 := TScriptNode.Create;
SFColor42 := TSFColor.CreateUndefined(Script41, false, 'set_color');
{ METHOD .Fd.AddCustomField }
Script41.AddCustomField(SFColor42);
SFFloat43 := TSFFloat.CreateUndefined(Script41, false, 'set_roughness');
{ METHOD .Fd.AddCustomField }
Script41.AddCustomField(SFFloat43);
SFNode44 := TSFNode.CreateUndefined(Script41, false, 'targetMaterial');
{ METHOD .AddPhysicalMaterial }
SFNode44.AddPhysicalMaterial([PhysicalMaterial35]);
end;

procedure InitbobblespheresPart3;
begin

{ METHOD .Fd.AddCustomField }
Script41.AddCustomField(SFNode44);

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
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Script41);
{ Original "C_0.EventFraction_changed TO PI_0.EventSet_fraction }
{ Sample C_0.EventFraction_changed TO PI_0.EventSet_fraction}
Group6.AddRoute(TimeSensor37.EventFraction_changed, PositionInterpolator38.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "PI_0.EventValue_changed TO T_0.EventSet_translation }
{ Sample PI_0.EventValue_changed TO T_0.EventSet_translation}
Group6.AddRoute(PositionInterpolator38.EventValue_changed, Transform32.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "C_0.EventFraction_changed TO CI_0.EventSet_fraction }
{ Sample C_0.EventFraction_changed TO CI_0.EventSet_fraction}
Group6.AddRoute(TimeSensor37.EventFraction_changed, ColorInterpolator39.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "CI_0.EventValue_changed TO Animator_0.EventSet_color }
{ Sample CI_0.EventValue_changed TO Animator_0.EventSet_color}
Group6.AddRoute(ColorInterpolator39.EventValue_changed, Script41.set_EventSet_color);
{ METHOD .AddX3DROUTE }
{ Original "C_0.EventFraction_changed TO SI_0.EventSet_fraction }
{ Sample C_0.EventFraction_changed TO SI_0.EventSet_fraction}
Group6.AddRoute(TimeSensor37.EventFraction_changed, ScalarInterpolator40.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "SI_0.EventValue_changed TO Animator_0.EventSet_roughness }
{ Sample SI_0.EventValue_changed TO Animator_0.EventSet_roughness}
Group6.AddRoute(ScalarInterpolator40.EventValue_changed, Script41.set_EventSet_roughness);
{ METHOD .AddX3DROUTE }
{ Example: Metal Sphere with animated roughness (Using initialize()) }
Transform52 := TTransformNode.Create;
Transform52.Translation := Vector3(-10.411,0.2,-9.16);
Shape53 := TShapeNode.Create;
Appearance54 := TAppearanceNode.Create;
PhysicalMaterial55 := TPhysicalMaterialNode.Create;
PhysicalMaterial55.BaseColor := Vector3(0.707,0.888,0.536);
PhysicalMaterial55.Roughness := 0.2;
{ METHOD .SetMaterial }
Appearance54.Material := PhysicalMaterial55;
{ METHOD .Appearance }
Shape53.Appearance := Appearance54;
Sphere56 := TSphereNode.Create;
Sphere56.Radius := 0.2;
{ METHOD .Geometry }
Shape53.Geometry := Sphere56;
{ METHOD .FdChildren.Add }
Transform52.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform52);
TimeSensor57 := TTimeSensorNode.Create;
TimeSensor57.CycleInterval := 4.15;
TimeSensor57.Loop := True;
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(TimeSensor57);
PositionInterpolator58 := TPositionInterpolatorNode.Create;
PositionInterpolator58.SetKey([0,0.5,1]);
PositionInterpolator58.SetKeyValue([Vector3(-10.411,0.2,-9.16),Vector3(-10.411,0.6,-9.16),Vector3(-10.411,0.2,-9.16)]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(PositionInterpolator58);
ScalarInterpolator59 := TScalarInterpolatorNode.Create;
ScalarInterpolator59.SetKey([0,0.5,1]);
ScalarInterpolator59.SetKeyValue([0.5,0,0.5]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(ScalarInterpolator59);
Script60 := TScriptNode.Create;
SFFloat61 := TSFFloat.CreateUndefined(Script60, false, 'set_roughness');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat61);
SFNode62 := TSFNode.CreateUndefined(Script60, false, 'targetMaterial');
{ METHOD .AddPhysicalMaterial }
SFNode62.AddPhysicalMaterial([PhysicalMaterial55]);
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFNode62);

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
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Script60);
{ Original "C_1.EventFraction_changed TO PI_1.EventSet_fraction }
{ Sample C_1.EventFraction_changed TO PI_1.EventSet_fraction}
Group6.AddRoute(TimeSensor57.EventFraction_changed, PositionInterpolator58.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "PI_1.EventValue_changed TO T_1.EventSet_translation }
{ Sample PI_1.EventValue_changed TO T_1.EventSet_translation}
Group6.AddRoute(PositionInterpolator58.EventValue_changed, Transform52.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "C_1.EventFraction_changed TO SI_1.EventSet_fraction }
{ Sample C_1.EventFraction_changed TO SI_1.EventSet_fraction}
Group6.AddRoute(TimeSensor57.EventFraction_changed, ScalarInterpolator59.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "SI_1.EventValue_changed TO Animator_1.EventSet_roughness }
{ Sample SI_1.EventValue_changed TO Animator_1.EventSet_roughness}
Group6.AddRoute(ScalarInterpolator59.EventValue_changed, Script60.set_EventSet_roughness);
{ METHOD .AddX3DROUTE }
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
{ METHOD .AddIORMaterialExtension }
PhysicalMaterial71.AddIORMaterialExtension([IORMaterialExtension72]);
{ METHOD .SetMaterial }
Appearance70.Material := PhysicalMaterial71;
{ METHOD .Appearance }
Shape69.Appearance := Appearance70;
Sphere73 := TSphereNode.Create;
Sphere73.Radius := 0.2;
{ METHOD .Geometry }
Shape69.Geometry := Sphere73;
{ METHOD .FdChildren.Add }
Transform68.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform68);
TimeSensor74 := TTimeSensorNode.Create;
TimeSensor74.CycleInterval := 3.88;
TimeSensor74.Loop := True;
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(TimeSensor74);
PositionInterpolator75 := TPositionInterpolatorNode.Create;
PositionInterpolator75.SetKey([0,0.5,1]);
PositionInterpolator75.SetKeyValue([Vector3(-10.155,0.2,-8.324),Vector3(-10.155,0.6,-8.324),Vector3(-10.155,0.2,-8.324)]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(PositionInterpolator75);
ScalarInterpolator76 := TScalarInterpolatorNode.Create;
ScalarInterpolator76.SetKey([0,0.5,1]);
ScalarInterpolator76.SetKeyValue([1.4,1.7,1.4]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(ScalarInterpolator76);
{ Original "C_2.EventFraction_changed TO PI_2.EventSet_fraction }
{ Sample C_2.EventFraction_changed TO PI_2.EventSet_fraction}
Group6.AddRoute(TimeSensor74.EventFraction_changed, PositionInterpolator75.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "PI_2.EventValue_changed TO T_2.EventSet_translation }
{ Sample PI_2.EventValue_changed TO T_2.EventSet_translation}
Group6.AddRoute(PositionInterpolator75.EventValue_changed, Transform68.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "C_2.EventFraction_changed TO SI_2.EventSet_fraction }
{ Sample C_2.EventFraction_changed TO SI_2.EventSet_fraction}
Group6.AddRoute(TimeSensor74.EventFraction_changed, ScalarInterpolator76.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "SI_2.EventValue_changed TO IOR_2.EventSet_indexOfRefraction }
{ Sample SI_2.EventValue_changed TO IOR_2.EventSet_indexOfRefraction}
Group6.AddRoute(ScalarInterpolator76.EventValue_changed, IORMaterialExtension72.set_EventSet_indexOfRefraction);
{ METHOD .AddX3DROUTE }
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
{ METHOD .AddIridescenceMaterialExtension }
PhysicalMaterial84.AddIridescenceMaterialExtension([IridescenceMaterialExtension85]);
{ METHOD .SetMaterial }
Appearance83.Material := PhysicalMaterial84;
{ METHOD .Appearance }
Shape82.Appearance := Appearance83;
Sphere86 := TSphereNode.Create;
Sphere86.Radius := 0.2;
{ METHOD .Geometry }
Shape82.Geometry := Sphere86;
{ METHOD .FdChildren.Add }
Transform81.FdChildren.Add(Shape82);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform81);
TimeSensor87 := TTimeSensorNode.Create;
TimeSensor87.CycleInterval := 6;
TimeSensor87.Loop := True;
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(TimeSensor87);
PositionInterpolator88 := TPositionInterpolatorNode.Create;
PositionInterpolator88.SetKey([0,0.5,1]);
PositionInterpolator88.SetKeyValue([Vector3(-10.518,0.2,-7.283),Vector3(-10.518,0.6,-7.283),Vector3(-10.518,0.2,-7.283)]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(PositionInterpolator88);
ScalarInterpolator89 := TScalarInterpolatorNode.Create;
ScalarInterpolator89.SetKey([0,0.5,1]);
ScalarInterpolator89.SetKeyValue([100,700,100]);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(ScalarInterpolator89);
{ Original "C_3.EventFraction_changed TO PI_3.EventSet_fraction }
{ Sample C_3.EventFraction_changed TO PI_3.EventSet_fraction}
Group6.AddRoute(TimeSensor87.EventFraction_changed, PositionInterpolator88.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "PI_3.EventValue_changed TO T_3.EventSet_translation }
{ Sample PI_3.EventValue_changed TO T_3.EventSet_translation}
Group6.AddRoute(PositionInterpolator88.EventValue_changed, Transform81.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "C_3.EventFraction_changed TO SI_3.EventSet_fraction }
{ Sample C_3.EventFraction_changed TO SI_3.EventSet_fraction}
Group6.AddRoute(TimeSensor87.EventFraction_changed, ScalarInterpolator89.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "SI_3.EventValue_changed TO IRI_3.EventSet_iridescenceThicknessMaximum }
{ Sample SI_3.EventValue_changed TO IRI_3.EventSet_iridescenceThicknessMaximum}
Group6.AddRoute(ScalarInterpolator89.EventValue_changed, IridescenceMaterialExtension85.set_EventSet_iridescenceThicknessMaximum);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group6]);
end;

function Createbobblespheres: TX3DRootNode;
begin
InitbobblespheresPart0;
InitbobblespheresPart1;
InitbobblespheresPart2;
InitbobblespheresPart3;
Result := X3D0;
end;

begin
end.
