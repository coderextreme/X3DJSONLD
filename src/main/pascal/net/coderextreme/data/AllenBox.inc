function AllenBox: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group6: TGroupNode;
WorldInfo7: TWorldInfoNode;
NavigationInfo8: TNavigationInfoNode;
Transform9: TTransformNode;
Shape10: TShapeNode;
Box11: TBoxNode;
Appearance12: TAppearanceNode;
Material13: TMaterialNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'AllenBox.x3d';
X3D0.Meta['creator'] := 'Allen Box';
X3D0.Meta['created'] := '8 July 2025';
X3D0.Meta['license'] := '../license.html';
Group6 := TGroupNode.Create;
WorldInfo7 := TWorldInfoNode.Create;
WorldInfo7.Title := 'AllenBox.x3d';
{ .AddChildren }
Group6.AddChildren([WorldInfo7]);
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetAvatarSize([0.15,1.53,0.75]);
NavigationInfo8.Speed := 0.5;
NavigationInfo8.SetType(['EXAMINE']);
{ .AddChildren }
Group6.AddChildren([NavigationInfo8]);
Transform9 := TTransformNode.Create;
Transform9.Scale := Vector3(1,0.0125,1);
Transform9.Translation := Vector3(0,-0.0125,0);
Shape10 := TShapeNode.Create;
Box11 := TBoxNode.Create;
{ .SetGeometry }
Shape10.Geometry := Box11;
Appearance12 := TAppearanceNode.Create;
Material13 := TMaterialNode.Create;
{ .SetMaterial }
Appearance12.Material := Material13;
{ .SetAppearance }
Shape10.Appearance := Appearance12;
{ .AddChild }
Transform9.AddChildren([Shape10]);
{ .AddChildren }
Group6.AddChildren([Transform9]);
{ .AddGroup }
X3D0.AddChildren([Group6]);
Result := X3D0;
end;
