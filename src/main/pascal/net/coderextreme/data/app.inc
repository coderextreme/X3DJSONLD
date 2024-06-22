function app: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group6: TGroupNode;
Group7: TGroupNode;
Shape8: TShapeNode;
Appearance9: TAppearanceNode;
Material10: TMaterialNode;
Box11: TBoxNode;
Transform12: TTransformNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'app.x3d';
X3D0.Meta['creator'] := 'Carlson, I';
X3D0.Meta['creator'] := 'Carlson, II';
X3D0.Meta['creator'] := 'Carlson, III';
Group6 := TGroupNode.Create;
Group7 := TGroupNode.Create;
Shape8 := TShapeNode.Create;
Appearance9 := TAppearanceNode.Create;
Material10 := TMaterialNode.Create;
Material10.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance9.Material := Material10;
{ .SetAppearance }
Shape8.Appearance := Appearance9;
Box11 := TBoxNode.Create;
{ .SetGeometry }
Shape8.Geometry := Box11;
{ .AddChildren }
Group7.AddChildren([Shape8]);
{ .AddChildren }
Group6.AddChildren([Group7]);
Transform12 := TTransformNode.Create;
Transform12.Rotation := Vector4(7,8,9,3.14);
Transform12.Scale := Vector3(4,5,6);
Transform12.Translation := Vector3(1,2,3);
{ .AddChildren }
Group6.AddChildren([Transform12]);
{ .AddGroup }
X3D0.AddChildren([Group6]);
Result := X3D0;
end;
