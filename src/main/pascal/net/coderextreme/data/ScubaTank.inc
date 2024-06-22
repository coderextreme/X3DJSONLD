function ScubaTank: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
WorldInfo11: TWorldInfoNode;
Transform12: TTransformNode;
Transform13: TTransformNode;
Shape14: TShapeNode;
Appearance15: TAppearanceNode;
Material16: TMaterialNode;
Cylinder17: TCylinderNode;
Transform18: TTransformNode;
Shape19: TShapeNode;
Appearance20: TAppearanceNode;
Material21: TMaterialNode;
Sphere22: TSphereNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
Cylinder27: TCylinderNode;
Group28: TGroupNode;
Transform29: TTransformNode;
Transform30: TTransformNode;
Shape31: TShapeNode;
Appearance32: TAppearanceNode;
Material33: TMaterialNode;
Cylinder34: TCylinderNode;
Transform35: TTransformNode;
Shape36: TShapeNode;
Appearance37: TAppearanceNode;
Material38: TMaterialNode;
Cylinder39: TCylinderNode;
Transform40: TTransformNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
Cylinder45: TCylinderNode;
Transform46: TTransformNode;
Shape47: TShapeNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Cylinder50: TCylinderNode;
Transform51: TTransformNode;
Shape52: TShapeNode;
Appearance53: TAppearanceNode;
Material54: TMaterialNode;
Cylinder55: TCylinderNode;
Background56: TBackgroundNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'ScubaTank.x3d';
X3D0.Meta['description'] := 'Scuba gear used by Nancy Diving example.';
X3D0.Meta['creator'] := 'Etsuko Lippi';
X3D0.Meta['created'] := '24 January 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group10 := TGroupNode.Create;
WorldInfo11 := TWorldInfoNode.Create;
WorldInfo11.Title := 'ScubaTank.x3d';
{ .AddChildren }
Group10.AddChildren([WorldInfo11]);
Transform12 := TTransformNode.Create;
Transform13 := TTransformNode.Create;
Shape14 := TShapeNode.Create;
Appearance15 := TAppearanceNode.Create;
Material16 := TMaterialNode.Create;
Material16.AmbientIntensity := 0.3;
Material16.DiffuseColor := Vector3(0.3,0.3,0.5);
Material16.Shininess := 0.1;
Material16.SpecularColor := Vector3(0.7,0.7,0.8);
{ .SetMaterial }
Appearance15.Material := Material16;
{ .SetAppearance }
Shape14.Appearance := Appearance15;
Cylinder17 := TCylinderNode.Create;
Cylinder17.Height := 0.7;
Cylinder17.Radius := 0.1;
{ .SetGeometry }
Shape14.Geometry := Cylinder17;
{ .AddChild }
Transform13.AddChildren([Shape14]);
{ .AddChildren }
Transform12.AddChildren([Transform13]);
Transform18 := TTransformNode.Create;
Transform18.Translation := Vector3(0,0.35,0);
Shape19 := TShapeNode.Create;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21 := Material16;
{ .SetMaterial }
Appearance20.Material := Material21;
{ .SetAppearance }
Shape19.Appearance := Appearance20;
Sphere22 := TSphereNode.Create;
Sphere22.Radius := 0.098;
{ .SetGeometry }
Shape19.Geometry := Sphere22;
{ .AddChild }
Transform18.AddChildren([Shape19]);
{ .AddChildren }
Transform12.AddChildren([Transform18]);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(0,-0.35,0);
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.AmbientIntensity := 0.3;
Material26.DiffuseColor := Vector3(0,0,0);
{ .SetMaterial }
Appearance25.Material := Material26;
{ .SetAppearance }
Shape24.Appearance := Appearance25;
Cylinder27 := TCylinderNode.Create;
Cylinder27.Height := 0.06;
Cylinder27.Radius := 0.115;
{ .SetGeometry }
Shape24.Geometry := Cylinder27;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Transform12.AddChildren([Transform23]);
Group28 := TGroupNode.Create;
Transform29 := TTransformNode.Create;
Transform30 := TTransformNode.Create;
Transform30.Translation := Vector3(0,0.45,0);
Shape31 := TShapeNode.Create;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33.AmbientIntensity := 0.4;
Material33.DiffuseColor := Vector3(0.91,0.91,0.91);
Material33.Shininess := 0.16;
Material33.SpecularColor := Vector3(0.91,0.9,0.91);
{ .SetMaterial }
Appearance32.Material := Material33;
{ .SetAppearance }
Shape31.Appearance := Appearance32;
Cylinder34 := TCylinderNode.Create;
Cylinder34.Height := 0.1;
Cylinder34.Radius := 0.015;
{ .SetGeometry }
Shape31.Geometry := Cylinder34;
{ .AddChild }
Transform30.AddChildren([Shape31]);
{ .AddChildren }
Transform29.AddChildren([Transform30]);
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(0,0.5,0);
Shape36 := TShapeNode.Create;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38 := Material26;
{ .SetMaterial }
Appearance37.Material := Material38;
{ .SetAppearance }
Shape36.Appearance := Appearance37;
Cylinder39 := TCylinderNode.Create;
Cylinder39.Height := 0.02;
Cylinder39.Radius := 0.025;
{ .SetGeometry }
Shape36.Geometry := Cylinder39;
{ .AddChild }
Transform35.AddChildren([Shape36]);
{ .AddChildren }
Transform29.AddChildren([Transform35]);
Transform40 := TTransformNode.Create;
Transform40.Rotation := Vector4(0,0,1,1.57);
Transform40.Translation := Vector3(-0.028,0.462,0);
Transform41 := TTransformNode.Create;
Shape42 := TShapeNode.Create;
Appearance43 := TAppearanceNode.Create;
Material44 := TMaterialNode.Create;
Material44 := Material33;
{ .SetMaterial }
Appearance43.Material := Material44;
{ .SetAppearance }
Shape42.Appearance := Appearance43;
Cylinder45 := TCylinderNode.Create;
Cylinder45.Height := 0.03;
Cylinder45.Radius := 0.01;
{ .SetGeometry }
Shape42.Geometry := Cylinder45;
{ .AddChild }
Transform41.AddChildren([Shape42]);
{ .AddChildren }
Transform40.AddChildren([Transform41]);
Transform46 := TTransformNode.Create;
Transform46.Translation := Vector3(0,0.02,0);
Shape47 := TShapeNode.Create;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49 := Material26;
{ .SetMaterial }
Appearance48.Material := Material49;
{ .SetAppearance }
Shape47.Appearance := Appearance48;
Cylinder50 := TCylinderNode.Create;
Cylinder50.Height := 0.02;
Cylinder50.Radius := 0.02;
{ .SetGeometry }
Shape47.Geometry := Cylinder50;
{ .AddChild }
Transform46.AddChildren([Shape47]);
{ .AddChildren }
Transform40.AddChildren([Transform46]);
{ .AddChildren }
Transform29.AddChildren([Transform40]);
{ .AddChildren }
Group28.AddChildren([Transform29]);
{ .AddChildren }
Transform12.AddChildren([Group28]);
Transform51 := TTransformNode.Create;
Transform51.Translation := Vector3(0,0.2,0);
Shape52 := TShapeNode.Create;
Appearance53 := TAppearanceNode.Create;
Material54 := TMaterialNode.Create;
Material54 := Material26;
{ .SetMaterial }
Appearance53.Material := Material54;
{ .SetAppearance }
Shape52.Appearance := Appearance53;
Cylinder55 := TCylinderNode.Create;
Cylinder55.Height := 0.1;
Cylinder55.Radius := 0.115;
{ .SetGeometry }
Shape52.Geometry := Cylinder55;
{ .AddChild }
Transform51.AddChildren([Shape52]);
{ .AddChildren }
Transform12.AddChildren([Transform51]);
{ .AddChildren }
Group10.AddChildren([Transform12]);
Background56 := TBackgroundNode.Create;
Background56.SetSkyColor([Vector3(0.6,0.6,0.6)]);
{ .AddChildren }
Group10.AddChildren([Background56]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
