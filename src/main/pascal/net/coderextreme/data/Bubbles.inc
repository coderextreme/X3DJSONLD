function Bubbles: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
WorldInfo11: TWorldInfoNode;
Transform12: TTransformNode;
Group13: TGroupNode;
TimeSensor14: TTimeSensorNode;
PositionInterpolator15: TPositionInterpolatorNode;
PositionInterpolator16: TPositionInterpolatorNode;
PositionInterpolator17: TPositionInterpolatorNode;
PositionInterpolator18: TPositionInterpolatorNode;
PositionInterpolator19: TPositionInterpolatorNode;
PositionInterpolator20: TPositionInterpolatorNode;
PositionInterpolator21: TPositionInterpolatorNode;
PositionInterpolator22: TPositionInterpolatorNode;
PositionInterpolator23: TPositionInterpolatorNode;
PositionInterpolator24: TPositionInterpolatorNode;
Transform25: TTransformNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Appearance28: TAppearanceNode;
Material29: TMaterialNode;
Sphere30: TSphereNode;
Transform31: TTransformNode;
Shape32: TShapeNode;
Appearance33: TAppearanceNode;
Material34: TMaterialNode;
Sphere35: TSphereNode;
Transform36: TTransformNode;
Shape37: TShapeNode;
Appearance38: TAppearanceNode;
Material39: TMaterialNode;
Sphere40: TSphereNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
Sphere45: TSphereNode;
Transform46: TTransformNode;
Shape47: TShapeNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Sphere50: TSphereNode;
Transform51: TTransformNode;
Shape52: TShapeNode;
Appearance53: TAppearanceNode;
Material54: TMaterialNode;
Sphere55: TSphereNode;
Transform56: TTransformNode;
Shape57: TShapeNode;
Appearance58: TAppearanceNode;
Material59: TMaterialNode;
Sphere60: TSphereNode;
Transform61: TTransformNode;
Shape62: TShapeNode;
Appearance63: TAppearanceNode;
Material64: TMaterialNode;
Sphere65: TSphereNode;
Transform66: TTransformNode;
Shape67: TShapeNode;
Appearance68: TAppearanceNode;
Material69: TMaterialNode;
Sphere70: TSphereNode;
Transform71: TTransformNode;
Shape72: TShapeNode;
Appearance73: TAppearanceNode;
Material74: TMaterialNode;
Sphere75: TSphereNode;
Background96: TBackgroundNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'Bubbles.x3d';
X3D0.Meta['description'] := 'Bubble animation used by Nancy Diving example.';
X3D0.Meta['creator'] := 'Etsuko Lippi';
X3D0.Meta['created'] := '24 January 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group10 := TGroupNode.Create;
WorldInfo11 := TWorldInfoNode.Create;
WorldInfo11.Title := 'Bubbles.x3d';
{ .AddChildren }
Group10.AddChildren([WorldInfo11]);
Transform12 := TTransformNode.Create;
Group13 := TGroupNode.Create;
TimeSensor14 := TTimeSensorNode.Create;
TimeSensor14.CycleInterval := 6;
TimeSensor14.Loop := True;
{ .AddChildren }
Group13.AddChildren([TimeSensor14]);
PositionInterpolator15 := TPositionInterpolatorNode.Create;
PositionInterpolator15.SetKey([0,0.5,0.8,0.9,1]);
PositionInterpolator15.SetKeyValue([Vector3(0,0,0),Vector3(0.75,0.75,0.75),Vector3(0.86,0.86,0.86),Vector3(0.99,0.998,0.9876),Vector3(1.272,1.9044,0.9509)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator15]);
PositionInterpolator16 := TPositionInterpolatorNode.Create;
PositionInterpolator16.SetKey([0,0.3,0.64,0.85,1]);
PositionInterpolator16.SetKeyValue([Vector3(0.1,0.1,0.1),Vector3(0.2,0.4,0.25),Vector3(0.3,0.5,0.46),Vector3(0.75,0.5,0.575),Vector3(0.038483478,1.989,1.098373)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator16]);
PositionInterpolator17 := TPositionInterpolatorNode.Create;
PositionInterpolator17.SetKey([0,0.1,0.45,0.7,1]);
PositionInterpolator17.SetKeyValue([Vector3(0.01,0.01,0.01),Vector3(0.25,0.35,0.0045),Vector3(0.55,0.6,0.0055),Vector3(0.66,0.665,0.00655),Vector3(1.555,1.09043,0.005734)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator17]);
PositionInterpolator18 := TPositionInterpolatorNode.Create;
PositionInterpolator18.SetKey([0,0.5,0.6,0.8,1]);
PositionInterpolator18.SetKeyValue([Vector3(0,0,0),Vector3(0.5,0.5,0.005),Vector3(0.6,0.6,0.006),Vector3(0.75,0.75,0.0075),Vector3(1.948594,1.3983,0.009009349)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator18]);
PositionInterpolator19 := TPositionInterpolatorNode.Create;
PositionInterpolator19.SetKey([0,0.25,0.35,0.65,1]);
PositionInterpolator19.SetKeyValue([Vector3(0,0,0),Vector3(0.5,0.5,0.005),Vector3(0.6,0.6,0.006),Vector3(0.75,0.75,0.0075),Vector3(1.84444,1.22222,0.1)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator19]);
PositionInterpolator20 := TPositionInterpolatorNode.Create;
PositionInterpolator20.SetKey([0,0.15,0.22235,0.55565,1]);
PositionInterpolator20.SetKeyValue([Vector3(0,0,0),Vector3(0.235,0.3455,0.0055),Vector3(0.356,0.676,0.00456),Vector3(0.5675,0.75,0.0074565),Vector3(1.098,1.0343,0.14)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator20]);
PositionInterpolator21 := TPositionInterpolatorNode.Create;
PositionInterpolator21.SetKey([0,0.2425,0.4535,0.6775,1]);
PositionInterpolator21.SetKeyValue([Vector3(0,0,0),Vector3(0.12345,0.2225,0.00335),Vector3(0.786,0.456,0.00666),Vector3(0.74555,0.7335,0.00234575),Vector3(0.08787,1.022,0.12)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator21]);
PositionInterpolator22 := TPositionInterpolatorNode.Create;
PositionInterpolator22.SetKey([0,0.1125,0.5535,0.97865,1]);
PositionInterpolator22.SetKeyValue([Vector3(0,0,0),Vector3(0.1235,0.05,0.00125),Vector3(0.5666,0.4346,0.005556),Vector3(0.8975,0.34575,0.0098775),Vector3(1.8787,1.686,0.86)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator22]);
PositionInterpolator23 := TPositionInterpolatorNode.Create;
PositionInterpolator23.SetKey([0,0.0025,0.035,0.65,1]);
PositionInterpolator23.SetKeyValue([Vector3(0,0,0),Vector3(0.522,0.5445,0.0057),Vector3(0.6543,0.226,0.0055),Vector3(0.45575,0.4375,0.0067),Vector3(1.8787,2,0.1545)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator23]);
PositionInterpolator24 := TPositionInterpolatorNode.Create;
PositionInterpolator24.SetKey([0,0.00025,0.035,0.6895,1]);
PositionInterpolator24.SetKeyValue([Vector3(0,0,0),Vector3(0.8765,0.445,0.00335),Vector3(0.3336,0.4446,0.005556),Vector3(0.765,0.75,0.0075),Vector3(1,1,0.1)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator24]);
Transform25 := TTransformNode.Create;
Transform26 := TTransformNode.Create;
Shape27 := TShapeNode.Create;
Appearance28 := TAppearanceNode.Create;
Material29 := TMaterialNode.Create;
Material29.DiffuseColor := Vector3(1,1,1);
Material29.Transparency := 0.8;
{ .SetMaterial }
Appearance28.Material := Material29;
{ .SetAppearance }
Shape27.Appearance := Appearance28;
Sphere30 := TSphereNode.Create;
Sphere30.Radius := 0.025;
{ .SetGeometry }
Shape27.Geometry := Sphere30;
{ .AddChild }
Transform26.AddChildren([Shape27]);
{ .AddChildren }
Transform25.AddChildren([Transform26]);
Transform31 := TTransformNode.Create;
Shape32 := TShapeNode.Create;
Appearance33 := TAppearanceNode.Create;
Material34 := TMaterialNode.Create;
Material34.DiffuseColor := Vector3(1,1,1);
Material34.Transparency := 0.8;
{ .SetMaterial }
Appearance33.Material := Material34;
{ .SetAppearance }
Shape32.Appearance := Appearance33;
Sphere35 := TSphereNode.Create;
Sphere35.Radius := 0.055;
{ .SetGeometry }
Shape32.Geometry := Sphere35;
{ .AddChild }
Transform31.AddChildren([Shape32]);
{ .AddChildren }
Transform25.AddChildren([Transform31]);
Transform36 := TTransformNode.Create;
Shape37 := TShapeNode.Create;
Appearance38 := TAppearanceNode.Create;
Material39 := TMaterialNode.Create;
Material39.DiffuseColor := Vector3(1,1,1);
Material39.Transparency := 0.8;
{ .SetMaterial }
Appearance38.Material := Material39;
{ .SetAppearance }
Shape37.Appearance := Appearance38;
Sphere40 := TSphereNode.Create;
Sphere40.Radius := 0.065;
{ .SetGeometry }
Shape37.Geometry := Sphere40;
{ .AddChild }
Transform36.AddChildren([Shape37]);
{ .AddChildren }
Transform25.AddChildren([Transform36]);
Transform41 := TTransformNode.Create;
Shape42 := TShapeNode.Create;
Appearance43 := TAppearanceNode.Create;
Material44 := TMaterialNode.Create;
Material44.DiffuseColor := Vector3(1,1,1);
Material44.Transparency := 0.8;
{ .SetMaterial }
Appearance43.Material := Material44;
{ .SetAppearance }
Shape42.Appearance := Appearance43;
Sphere45 := TSphereNode.Create;
Sphere45.Radius := 0.015;
{ .SetGeometry }
Shape42.Geometry := Sphere45;
{ .AddChild }
Transform41.AddChildren([Shape42]);
{ .AddChildren }
Transform25.AddChildren([Transform41]);
Transform46 := TTransformNode.Create;
Shape47 := TShapeNode.Create;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(1,1,1);
Material49.Transparency := 0.8;
{ .SetMaterial }
Appearance48.Material := Material49;
{ .SetAppearance }
Shape47.Appearance := Appearance48;
Sphere50 := TSphereNode.Create;
Sphere50.Radius := 0.075;
{ .SetGeometry }
Shape47.Geometry := Sphere50;
{ .AddChild }
Transform46.AddChildren([Shape47]);
{ .AddChildren }
Transform25.AddChildren([Transform46]);
Transform51 := TTransformNode.Create;
Shape52 := TShapeNode.Create;
Appearance53 := TAppearanceNode.Create;
Material54 := TMaterialNode.Create;
Material54.DiffuseColor := Vector3(1,1,1);
Material54.Transparency := 0.8;
{ .SetMaterial }
Appearance53.Material := Material54;
{ .SetAppearance }
Shape52.Appearance := Appearance53;
Sphere55 := TSphereNode.Create;
Sphere55.Radius := 0.005;
{ .SetGeometry }
Shape52.Geometry := Sphere55;
{ .AddChild }
Transform51.AddChildren([Shape52]);
{ .AddChildren }
Transform25.AddChildren([Transform51]);
Transform56 := TTransformNode.Create;
Shape57 := TShapeNode.Create;
Appearance58 := TAppearanceNode.Create;
Material59 := TMaterialNode.Create;
Material59.DiffuseColor := Vector3(1,1,1);
Material59.Transparency := 0.8;
{ .SetMaterial }
Appearance58.Material := Material59;
{ .SetAppearance }
Shape57.Appearance := Appearance58;
Sphere60 := TSphereNode.Create;
Sphere60.Radius := 0.035;
{ .SetGeometry }
Shape57.Geometry := Sphere60;
{ .AddChild }
Transform56.AddChildren([Shape57]);
{ .AddChildren }
Transform25.AddChildren([Transform56]);
Transform61 := TTransformNode.Create;
Shape62 := TShapeNode.Create;
Appearance63 := TAppearanceNode.Create;
Material64 := TMaterialNode.Create;
Material64.DiffuseColor := Vector3(1,1,1);
Material64.Transparency := 0.8;
{ .SetMaterial }
Appearance63.Material := Material64;
{ .SetAppearance }
Shape62.Appearance := Appearance63;
Sphere65 := TSphereNode.Create;
Sphere65.Radius := 0.05;
{ .SetGeometry }
Shape62.Geometry := Sphere65;
{ .AddChild }
Transform61.AddChildren([Shape62]);
{ .AddChildren }
Transform25.AddChildren([Transform61]);
Transform66 := TTransformNode.Create;
Shape67 := TShapeNode.Create;
Appearance68 := TAppearanceNode.Create;
Material69 := TMaterialNode.Create;
Material69.DiffuseColor := Vector3(1,1,1);
Material69.Transparency := 0.8;
{ .SetMaterial }
Appearance68.Material := Material69;
{ .SetAppearance }
Shape67.Appearance := Appearance68;
Sphere70 := TSphereNode.Create;
Sphere70.Radius := 0.045;
{ .SetGeometry }
Shape67.Geometry := Sphere70;
{ .AddChild }
Transform66.AddChildren([Shape67]);
{ .AddChildren }
Transform25.AddChildren([Transform66]);
Transform71 := TTransformNode.Create;
Shape72 := TShapeNode.Create;
Appearance73 := TAppearanceNode.Create;
Material74 := TMaterialNode.Create;
Material74.DiffuseColor := Vector3(1,1,1);
Material74.Transparency := 0.8;
{ .SetMaterial }
Appearance73.Material := Material74;
{ .SetAppearance }
Shape72.Appearance := Appearance73;
Sphere75 := TSphereNode.Create;
Sphere75.Radius := 0.035;
{ .SetGeometry }
Shape72.Geometry := Sphere75;
{ .AddChild }
Transform71.AddChildren([Shape72]);
{ .AddChildren }
Transform25.AddChildren([Transform71]);
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator15.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator16.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator17.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator18.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator19.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator20.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator21.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator22.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator23.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator24.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator15.EventValue_changed, Transform26.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator16.EventValue_changed, Transform31.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator17.EventValue_changed, Transform36.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator18.EventValue_changed, Transform41.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator19.EventValue_changed, Transform46.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator20.EventValue_changed, Transform51.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator21.EventValue_changed, Transform56.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator22.EventValue_changed, Transform61.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator23.EventValue_changed, Transform66.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(PositionInterpolator24.EventValue_changed, Transform71.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group13.AddChildren([Transform25]);
{ .AddChildren }
Transform12.AddChildren([Group13]);
{ .AddChildren }
Group10.AddChildren([Transform12]);
Background96 := TBackgroundNode.Create;
Background96.SetSkyColor([Vector3(0,0,0.6)]);
{ .AddChildren }
Group10.AddChildren([Background96]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
