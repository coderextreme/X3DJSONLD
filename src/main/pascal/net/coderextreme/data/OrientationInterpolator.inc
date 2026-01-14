function OrientationInterpolator: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
WorldInfo8: TWorldInfoNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interactive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'OrientationInterpolator.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := '29 December 2025';
X3D0.Meta['license'] := 'license.html';
Group7 := TGroupNode.Create;
WorldInfo8 := TWorldInfoNode.Create;
WorldInfo8.Title := 'OrientationInterpolator.x3d';
{ .AddChildren }
Group7.AddChildren([WorldInfo8]);
{ <OrientationInterpolator DEF='Stop_l_midtarsal_RotationInterpolator' key='0 0.5 1' keyValue='0 0 1 0 0 0 1 0 0 0 1 0'/> }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
