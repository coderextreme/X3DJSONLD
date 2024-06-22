function asteroids: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
ProtoDeclare8: TProtoDeclareNode;
ProtoInterface9: TProtoInterfaceNode;
field10: TfieldNode;
Shape11: TShapeNode;
Sphere12: TSphereNode;
ProtoBody13: TProtoBodyNode;
Transform14: TTransformNode;
IS15: TISNode;
connect16: TconnectNode;
ProtoInstance17: TProtoInstanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'asteroids.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d';
X3D0.Meta['description'] := 'asteroids';
Group7 := TGroupNode.Create;
ProtoDeclare8 := TProtoDeclareNode.Create;
ProtoDeclare8.NameField := 'anyShape';
ProtoInterface9 := TProtoInterfaceNode.Create;
field10 := TfieldNode.Create;
field10.NameField := 'myShape';
field10.AccessType := 'inputOutput';
field10.Type := 'MFNode';
Shape11 := TShapeNode.Create;
Sphere12 := TSphereNode.Create;
{ .SetGeometry }
Shape11.Geometry := Sphere12;
{ .AddChildren }
field10.AddChildren([Shape11]);
{ .AddField }
ProtoInterface9.Field := field10;
{ .SetProtoInterface }
ProtoDeclare8.ProtoInterface := ProtoInterface9;
ProtoBody13 := TProtoBodyNode.Create;
Transform14 := TTransformNode.Create;
IS15 := TISNode.Create;
connect16 := TconnectNode.Create;
connect16.NodeField := 'children';
connect16.ProtoField := 'myShape';
{ .AddConnect }
IS15.Connect := connect16;
{ .SetIS }
Transform14.IS := IS15;
{ .AddChildren }
ProtoBody13.AddChildren([Transform14]);
{ .SetProtoBody }
ProtoDeclare8.ProtoBody := ProtoBody13;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare8]);
ProtoInstance17 := TProtoInstanceNode.Create;
ProtoInstance17.NameField := 'anyShape';
{ .AddChildren }
Group7.AddChildren([ProtoInstance17]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
