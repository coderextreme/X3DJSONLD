function ThreeInARow: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
Transform10: TTransformNode;
Shape11: TShapeNode;
Sphere12: TSphereNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
Transform15: TTransformNode;
Shape16: TShapeNode;
Transform17: TTransformNode;
Shape18: TShapeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ThreeInARow.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d';
X3D0.Meta['description'] := '3 boxes';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Cubes';
Viewpoint9.Position := Vector3(0,0,12);
{ .AddChildren }
Group7.AddChildren([Viewpoint9]);
Transform10 := TTransformNode.Create;
Transform10.Translation := Vector3(0,2,0);
Shape11 := TShapeNode.Create;
Sphere12 := TSphereNode.Create;
{ .SetGeometry }
Shape11.Geometry := Sphere12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance13.Material := Material14;
{ .SetAppearance }
Shape11.Appearance := Appearance13;
{ .AddChild }
Transform10.AddChildren([Shape11]);
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform15 := TTransformNode.Create;
Shape16 := TShapeNode.Create;
Shape16 := Shape11;
{ .AddChild }
Transform15.AddChildren([Shape16]);
{ .AddChildren }
Group7.AddChildren([Transform15]);
Transform17 := TTransformNode.Create;
Transform17.Translation := Vector3(0,-2,0);
Shape18 := TShapeNode.Create;
Shape18 := Shape11;
{ .AddChild }
Transform17.AddChildren([Shape18]);
{ .AddChildren }
Group7.AddChildren([Transform17]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
