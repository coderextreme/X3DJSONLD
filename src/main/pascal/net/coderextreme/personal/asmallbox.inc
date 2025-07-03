function asmallbox: TX3DRootNode;
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
ProtoDeclare17: TProtoDeclareNode;
ProtoInterface18: TProtoInterfaceNode;
field19: TfieldNode;
Shape20: TShapeNode;
Cylinder21: TCylinderNode;
ProtoBody22: TProtoBodyNode;
Transform23: TTransformNode;
ProtoInstance24: TProtoInstanceNode;
IS25: TISNode;
connect26: TconnectNode;
ProtoInstance27: TProtoInstanceNode;
fieldValue28: TfieldValueNode;
Shape29: TShapeNode;
Box30: TBoxNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'asmallbox.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/abox.x3d';
X3D0.Meta['description'] := 'a box';
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
ProtoDeclare17 := TProtoDeclareNode.Create;
ProtoDeclare17.NameField := 'one';
ProtoInterface18 := TProtoInterfaceNode.Create;
field19 := TfieldNode.Create;
field19.NameField := 'myShape';
field19.AccessType := 'inputOutput';
field19.Type := 'MFNode';
Shape20 := TShapeNode.Create;
Cylinder21 := TCylinderNode.Create;
{ .SetGeometry }
Shape20.Geometry := Cylinder21;
{ .AddChildren }
field19.AddChildren([Shape20]);
{ .AddField }
ProtoInterface18.Field := field19;
{ .SetProtoInterface }
ProtoDeclare17.ProtoInterface := ProtoInterface18;
ProtoBody22 := TProtoBodyNode.Create;
Transform23 := TTransformNode.Create;
ProtoInstance24 := TProtoInstanceNode.Create;
ProtoInstance24.NameField := 'anyShape';
IS25 := TISNode.Create;
connect26 := TconnectNode.Create;
connect26.NodeField := 'myShape';
connect26.ProtoField := 'myShape';
{ .AddConnect }
IS25.Connect := connect26;
{ .SetIS }
ProtoInstance24.IS := IS25;
{ .AddChildren }
Transform23.AddChildren([ProtoInstance24]);
{ .AddChildren }
ProtoBody22.AddChildren([Transform23]);
{ .SetProtoBody }
ProtoDeclare17.ProtoBody := ProtoBody22;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare17]);
ProtoInstance27 := TProtoInstanceNode.Create;
ProtoInstance27.NameField := 'one';
fieldValue28 := TfieldValueNode.Create;
fieldValue28.NameField := 'myShape';
Shape29 := TShapeNode.Create;
Box30 := TBoxNode.Create;
{ .SetGeometry }
Shape29.Geometry := Box30;
{ .AddChildren }
fieldValue28.AddChildren([Shape29]);
{ .AddFieldValue }
ProtoInstance27.FieldValue := fieldValue28;
{ .AddChildren }
Group7.AddChildren([ProtoInstance27]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
