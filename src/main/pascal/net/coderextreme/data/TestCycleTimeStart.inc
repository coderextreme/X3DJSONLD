function TestCycleTimeStart: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group11: TGroupNode;
WorldInfo12: TWorldInfoNode;
Viewpoint13: TViewpointNode;
TimeSensor14: TTimeSensorNode;
TimeSensor15: TTimeSensorNode;
TimeSensor16: TTimeSensorNode;
BooleanFilter17: TBooleanFilterNode;
TimeTrigger18: TTimeTriggerNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Sphere23: TSphereNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
Sphere28: TSphereNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
Appearance31: TAppearanceNode;
Material32: TMaterialNode;
Sphere33: TSphereNode;
PositionInterpolator34: TPositionInterpolatorNode;
PositionInterpolator35: TPositionInterpolatorNode;
PositionInterpolator36: TPositionInterpolatorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interactive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'TestCycleTimeStart.x3d';
X3D0.Meta['creator'] := 'Andreas';
X3D0.Meta['creator'] := 'Joe D. Williams';
X3D0.Meta['description'] := 'Test design patterns for animation control.';
X3D0.Meta['created'] := '10 September 2023';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:20:59 GMT';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html';
X3D0.Meta['reference'] := 'https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d';
Group11 := TGroupNode.Create;
WorldInfo12 := TWorldInfoNode.Create;
WorldInfo12.Title := 'TestCycleTimeStart.x3d';
{ .AddChildren }
Group11.AddChildren([WorldInfo12]);
Viewpoint13 := TViewpointNode.Create;
Viewpoint13.Description := 'hello in there';
{ .AddChildren }
Group11.AddChildren([Viewpoint13]);
TimeSensor14 := TTimeSensorNode.Create;
TimeSensor14.Loop := True;
TimeSensor14.StopTime := 1757913659.298;
{ .AddChildren }
Group11.AddChildren([TimeSensor14]);
TimeSensor15 := TTimeSensorNode.Create;
TimeSensor15.CycleInterval := 5;
TimeSensor15.StartTime := 1757913659.298;
{ .AddChildren }
Group11.AddChildren([TimeSensor15]);
TimeSensor16 := TTimeSensorNode.Create;
TimeSensor16.CycleInterval := 10;
{ .AddChildren }
Group11.AddChildren([TimeSensor16]);
BooleanFilter17 := TBooleanFilterNode.Create;
{ .AddChildren }
Group11.AddChildren([BooleanFilter17]);
TimeTrigger18 := TTimeTriggerNode.Create;
{ .AddChildren }
Group11.AddChildren([TimeTrigger18]);
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(1.615999,0,0);
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape20.Appearance := Appearance21;
Sphere23 := TSphereNode.Create;
{ .SetGeometry }
Shape20.Geometry := Sphere23;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Group11.AddChildren([Transform19]);
Transform24 := TTransformNode.Create;
Shape25 := TShapeNode.Create;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance26.Material := Material27;
{ .SetAppearance }
Shape25.Appearance := Appearance26;
Sphere28 := TSphereNode.Create;
{ .SetGeometry }
Shape25.Geometry := Sphere28;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Group11.AddChildren([Transform24]);
Transform29 := TTransformNode.Create;
Shape30 := TShapeNode.Create;
Appearance31 := TAppearanceNode.Create;
Material32 := TMaterialNode.Create;
Material32.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance31.Material := Material32;
{ .SetAppearance }
Shape30.Appearance := Appearance31;
Sphere33 := TSphereNode.Create;
{ .SetGeometry }
Shape30.Geometry := Sphere33;
{ .AddChild }
Transform29.AddChildren([Shape30]);
{ .AddChildren }
Group11.AddChildren([Transform29]);
PositionInterpolator34 := TPositionInterpolatorNode.Create;
PositionInterpolator34.SetKey([0,0.25,0.5,0.75,1]);
PositionInterpolator34.SetKeyValue([Vector3(0,0,0),Vector3(2,0,0),Vector3(0,0,0),Vector3(-2,0,0),Vector3(0,0,0)]);
{ .AddChildren }
Group11.AddChildren([PositionInterpolator34]);
PositionInterpolator35 := TPositionInterpolatorNode.Create;
PositionInterpolator35.SetKey([0,0.25,0.5,0.75,1]);
PositionInterpolator35.SetKeyValue([Vector3(0,0,0),Vector3(0,2,0),Vector3(0,0,0),Vector3(0,-2,0),Vector3(0,0,0)]);
{ .AddChildren }
Group11.AddChildren([PositionInterpolator35]);
PositionInterpolator36 := TPositionInterpolatorNode.Create;
PositionInterpolator36.SetKey([0,0.25,0.5,0.75,1]);
PositionInterpolator36.SetKeyValue([Vector3(0,0,0),Vector3(0,-2,0),Vector3(0,0,0),Vector3(0,2,0),Vector3(0,0,0)]);
{ .AddChildren }
Group11.AddChildren([PositionInterpolator36]);
Group11.AddRoute(TimeSensor14.FdCycletime, TimeSensor14.FdStoptime);
{ .AddX3DRoute }
Group11.AddRoute(TimeSensor14.EventStoptime_changed, TimeSensor15.FdStarttime);
{ .AddX3DRoute }
Group11.AddRoute(TimeSensor15.FdIsactive, BooleanFilter17.EventSet_boolean);
{ .AddX3DRoute }
Group11.AddRoute(BooleanFilter17.FdInputfalse, TimeTrigger18.EventSet_boolean);
{ .AddX3DRoute }
Group11.AddRoute(TimeTrigger18.FdTriggertime, TimeSensor16.FdStarttime);
{ .AddX3DRoute }
Group11.AddRoute(TimeSensor14.EventFraction_changed, PositionInterpolator34.EventSet_fraction);
{ .AddX3DRoute }
Group11.AddRoute(PositionInterpolator34.EventValue_changed, Transform19.FdTranslation);
{ .AddX3DRoute }
Group11.AddRoute(TimeSensor15.EventFraction_changed, PositionInterpolator35.EventSet_fraction);
{ .AddX3DRoute }
Group11.AddRoute(PositionInterpolator35.EventValue_changed, Transform24.FdTranslation);
{ .AddX3DRoute }
Group11.AddRoute(TimeSensor16.EventFraction_changed, PositionInterpolator36.EventSet_fraction);
{ .AddX3DRoute }
Group11.AddRoute(PositionInterpolator36.EventValue_changed, Transform29.FdTranslation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
