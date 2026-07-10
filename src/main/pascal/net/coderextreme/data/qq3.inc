function qq3: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
ProtoDeclare11: TProtoDeclareNode;
ProtoBody12: TProtoBodyNode;
Group13: TGroupNode;
Transform14: TTransformNode;
Shape15: TShapeNode;
Appearance16: TAppearanceNode;
Material17: TMaterialNode;
Extrusion18: TExtrusionNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Extrusion23: TExtrusionNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Viewpoint28: TViewpointNode;
Transform29: TTransformNode;
ProtoInstance30: TProtoInstanceNode;
Transform31: TTransformNode;
ProtoInstance32: TProtoInstanceNode;
Transform33: TTransformNode;
ProtoInstance34: TProtoInstanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'qq3.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['translator'] := 'John Carlson';
X3D0.Meta['created'] := '11 Jan 2015';
X3D0.Meta['modified'] := '05 May 2017';
X3D0.Meta['description'] := '12 extrusions';
X3D0.Meta['identifier'] := 'https://coderextreme.net/x3d/qq3.x3d';
X3D0.Meta['generator'] := 'manual';
Group10 := TGroupNode.Create;
ProtoDeclare11 := TProtoDeclareNode.Create;
ProtoDeclare11.NameField := 'Process';
ProtoBody12 := TProtoBodyNode.Create;
Group13 := TGroupNode.Create;
{ left }
Transform14 := TTransformNode.Create;
Transform14.Scale := Vector3(0.5,0.5,0.5);
Shape15 := TShapeNode.Create;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(0.7,1,0);
{ .SetMaterial }
Appearance16.Material := Material17;
{ .SetAppearance }
Shape15.Appearance := Appearance16;
Extrusion18 := TExtrusionNode.Create;
Extrusion18.SetSpine([Vector3(-2.5,0,0),Vector3(-2,0,0),Vector3(-1.5,0,0)]);
Extrusion18.CreaseAngle := 0.785;
Extrusion18.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
{ .SetGeometry }
Shape15.Geometry := Extrusion18;
{ .AddChild }
Transform14.AddChildren([Shape15]);
{ .AddChildren }
Group13.AddChildren([Transform14]);
{ right }
Transform19 := TTransformNode.Create;
Transform19.Scale := Vector3(0.5,0.5,0.5);
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0,0.7,1);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape20.Appearance := Appearance21;
Extrusion23 := TExtrusionNode.Create;
Extrusion23.SetSpine([Vector3(1.5,0,0),Vector3(2,0,0),Vector3(2.5,0,0)]);
Extrusion23.CreaseAngle := 0.785;
Extrusion23.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
{ .SetGeometry }
Shape20.Geometry := Extrusion23;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Group13.AddChildren([Transform19]);
{ up }
Transform24 := TTransformNode.Create;
Transform24.Scale := Vector3(0.5,0.5,0.5);
Shape25 := TShapeNode.Create;
Shape25 := Shape20;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Group13.AddChildren([Transform24]);
{ down }
Transform26 := TTransformNode.Create;
Transform26.Scale := Vector3(0.5,0.5,0.5);
Shape27 := TShapeNode.Create;
Shape27 := Shape15;
{ .AddChild }
Transform26.AddChildren([Shape27]);
{ .AddChildren }
Group13.AddChildren([Transform26]);
{ .AddChildren }
ProtoBody12.AddChildren([Group13]);
{ .SetProtoBody }
ProtoDeclare11.ProtoBody := ProtoBody12;
{ .AddChildren }
Group10.AddChildren([ProtoDeclare11]);
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.Description := 'Process pipes';
Viewpoint28.Orientation := Vector4(1,0,0,-0.4);
Viewpoint28.Position := Vector3(0,5,12);
{ .AddChildren }
Group10.AddChildren([Viewpoint28]);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(0,-2.5,0);
ProtoInstance30 := TProtoInstanceNode.Create;
ProtoInstance30.NameField := 'Process';
{ .AddChildren }
Transform29.AddChildren([ProtoInstance30]);
{ .AddChildren }
Group10.AddChildren([Transform29]);
Transform31 := TTransformNode.Create;
ProtoInstance32 := TProtoInstanceNode.Create;
ProtoInstance32.NameField := 'Process';
{ .AddChildren }
Transform31.AddChildren([ProtoInstance32]);
{ .AddChildren }
Group10.AddChildren([Transform31]);
Transform33 := TTransformNode.Create;
Transform33.Translation := Vector3(0,2.5,0);
ProtoInstance34 := TProtoInstanceNode.Create;
ProtoInstance34.NameField := 'Process';
{ .AddChildren }
Transform33.AddChildren([ProtoInstance34]);
{ .AddChildren }
Group10.AddChildren([Transform33]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
