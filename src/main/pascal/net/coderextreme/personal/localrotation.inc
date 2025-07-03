function localrotation: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
WorldInfo8: TWorldInfoNode;
NavigationInfo9: TNavigationInfoNode;
Viewpoint10: TViewpointNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
Box13: TBoxNode;
Transform14: TTransformNode;
Shape15: TShapeNode;
Box16: TBoxNode;
Transform17: TTransformNode;
Shape18: TShapeNode;
Box19: TBoxNode;
ProximitySensor20: TProximitySensorNode;
TimeSensor21: TTimeSensorNode;
OrientationInterpolator23: TOrientationInterpolatorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'localrotation.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d';
X3D0.Meta['description'] := 'chained boxes';
Group7 := TGroupNode.Create;
WorldInfo8 := TWorldInfoNode.Create;
WorldInfo8.Title := 'localrotation.x3d';
{ .AddChildren }
Group7.AddChildren([WorldInfo8]);
NavigationInfo9 := TNavigationInfoNode.Create;
NavigationInfo9.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo9]);
Viewpoint10 := TViewpointNode.Create;
Viewpoint10.Description := 'Tour Views';
Viewpoint10.Position := Vector3(0,0,20);
{ .AddChildren }
Group7.AddChildren([Viewpoint10]);
Transform11 := TTransformNode.Create;
Transform11.Translation := Vector3(-4,0,0);
Shape12 := TShapeNode.Create;
Box13 := TBoxNode.Create;
{ .SetGeometry }
Shape12.Geometry := Box13;
{ .AddChild }
Transform11.AddChildren([Shape12]);
Transform14 := TTransformNode.Create;
Transform14.Translation := Vector3(4,0,0);
Shape15 := TShapeNode.Create;
Box16 := TBoxNode.Create;
{ .SetGeometry }
Shape15.Geometry := Box16;
{ .AddChild }
Transform14.AddChildren([Shape15]);
Transform17 := TTransformNode.Create;
Transform17.Translation := Vector3(4,0,0);
Shape18 := TShapeNode.Create;
Box19 := TBoxNode.Create;
{ .SetGeometry }
Shape18.Geometry := Box19;
{ .AddChild }
Transform17.AddChildren([Shape18]);
{ .AddChildren }
Transform14.AddChildren([Transform17]);
{ .AddChildren }
Transform11.AddChildren([Transform14]);
{ .AddChildren }
Group7.AddChildren([Transform11]);
ProximitySensor20 := TProximitySensorNode.Create;
ProximitySensor20.Size := Vector3(1000000,1000000,1000000);
{ .AddChildren }
Group7.AddChildren([ProximitySensor20]);
TimeSensor21 := TTimeSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([TimeSensor21]);
Group7.AddRoute(ProximitySensor20.FdEntertime, TimeSensor21.FdStarttime);
{ .AddX3DRoute }
OrientationInterpolator23 := TOrientationInterpolatorNode.Create;
OrientationInterpolator23.SetKey([0,1]);
OrientationInterpolator23.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.57)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator23]);
Group7.AddRoute(TimeSensor21.EventFraction_changed, OrientationInterpolator23.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator23.EventValue_changed, Transform14.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator23.EventValue_changed, Transform17.FdRotation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
