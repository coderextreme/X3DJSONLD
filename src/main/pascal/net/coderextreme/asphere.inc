function asphere: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group8: TGroupNode;
Group9: TGroupNode;
Shape10: TShapeNode;
Appearance11: TAppearanceNode;
Material12: TMaterialNode;
Sphere13: TSphereNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'asphere.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/asphere.x3d';
X3D0.Meta['description'] := 'a sphere';
Group8 := TGroupNode.Create;
Group9 := TGroupNode.Create;
Shape10 := TShapeNode.Create;
Appearance11 := TAppearanceNode.Create;
Material12 := TMaterialNode.Create;
Material12.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance11.Material := Material12;
{ .SetAppearance }
Shape10.Appearance := Appearance11;
Sphere13 := TSphereNode.Create;
{ .SetGeometry }
Shape10.Geometry := Sphere13;
{ .AddChildren }
Group9.AddChildren([Shape10]);
{ .AddChildren }
Group8.AddChildren([Group9]);
{ .AddGroup }
X3D0.AddChildren([Group8]);
Result := X3D0;
end;
