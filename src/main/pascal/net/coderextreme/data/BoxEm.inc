function BoxEm: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
ProtoDeclare10: TProtoDeclareNode;
ProtoInterface11: TProtoInterfaceNode;
field12: TfieldNode;
field13: TfieldNode;
Shape14: TShapeNode;
Sphere15: TSphereNode;
Appearance16: TAppearanceNode;
Material17: TMaterialNode;
ProtoBody18: TProtoBodyNode;
Transform19: TTransformNode;
IS20: TISNode;
connect21: TconnectNode;
connect22: TconnectNode;
ProtoDeclare23: TProtoDeclareNode;
ProtoInterface24: TProtoInterfaceNode;
field25: TfieldNode;
field26: TfieldNode;
Shape27: TShapeNode;
Cylinder28: TCylinderNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
ProtoBody31: TProtoBodyNode;
Transform32: TTransformNode;
IS33: TISNode;
connect34: TconnectNode;
ProtoInstance35: TProtoInstanceNode;
fieldValue36: TfieldValueNode;
IS37: TISNode;
connect38: TconnectNode;
ProtoInstance39: TProtoInstanceNode;
fieldValue40: TfieldValueNode;
IS41: TISNode;
connect42: TconnectNode;
ProtoInstance43: TProtoInstanceNode;
fieldValue44: TfieldValueNode;
IS45: TISNode;
connect46: TconnectNode;
ProtoInstance47: TProtoInstanceNode;
fieldValue48: TfieldValueNode;
fieldValue49: TfieldValueNode;
Shape50: TShapeNode;
Box51: TBoxNode;
Appearance52: TAppearanceNode;
Material53: TMaterialNode;
Transform54: TTransformNode;
Shape55: TShapeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'BoxEm.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d';
X3D0.Meta['description'] := '3 boxes';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Cubes on Fire';
Viewpoint9.Position := Vector3(0,0,12);
{ .AddChildren }
Group7.AddChildren([Viewpoint9]);
ProtoDeclare10 := TProtoDeclareNode.Create;
ProtoDeclare10.NameField := 'anyShape';
ProtoInterface11 := TProtoInterfaceNode.Create;
field12 := TfieldNode.Create;
field12.NameField := 'xtranslation';
field12.AccessType := 'inputOutput';
field12.Type := 'SFVec3f';
field12.Value := '0 0 0';
{ .AddField }
ProtoInterface11.Field := field12;
field13 := TfieldNode.Create;
field13.NameField := 'myShape';
field13.AccessType := 'inputOutput';
field13.Type := 'MFNode';
Shape14 := TShapeNode.Create;
Sphere15 := TSphereNode.Create;
{ .SetGeometry }
Shape14.Geometry := Sphere15;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance16.Material := Material17;
{ .SetAppearance }
Shape14.Appearance := Appearance16;
{ .AddChildren }
field13.AddChildren([Shape14]);
{ .AddField }
ProtoInterface11.Field := field13;
{ .SetProtoInterface }
ProtoDeclare10.ProtoInterface := ProtoInterface11;
ProtoBody18 := TProtoBodyNode.Create;
Transform19 := TTransformNode.Create;
IS20 := TISNode.Create;
connect21 := TconnectNode.Create;
connect21.NodeField := 'translation';
connect21.ProtoField := 'xtranslation';
{ .AddConnect }
IS20.Connect := connect21;
connect22 := TconnectNode.Create;
connect22.NodeField := 'children';
connect22.ProtoField := 'myShape';
{ .AddConnect }
IS20.Connect := connect22;
{ .SetIS }
Transform19.IS := IS20;
{ .AddChildren }
ProtoBody18.AddChildren([Transform19]);
{ .SetProtoBody }
ProtoDeclare10.ProtoBody := ProtoBody18;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare10]);
ProtoDeclare23 := TProtoDeclareNode.Create;
ProtoDeclare23.NameField := 'three';
ProtoInterface24 := TProtoInterfaceNode.Create;
field25 := TfieldNode.Create;
field25.NameField := 'ytranslation';
field25.AccessType := 'inputOutput';
field25.Type := 'SFVec3f';
field25.Value := '0 0 0';
{ .AddField }
ProtoInterface24.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'myShape';
field26.AccessType := 'inputOutput';
field26.Type := 'MFNode';
Shape27 := TShapeNode.Create;
Cylinder28 := TCylinderNode.Create;
{ .SetGeometry }
Shape27.Geometry := Cylinder28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance29.Material := Material30;
{ .SetAppearance }
Shape27.Appearance := Appearance29;
{ .AddChildren }
field26.AddChildren([Shape27]);
{ .AddField }
ProtoInterface24.Field := field26;
{ .SetProtoInterface }
ProtoDeclare23.ProtoInterface := ProtoInterface24;
ProtoBody31 := TProtoBodyNode.Create;
Transform32 := TTransformNode.Create;
IS33 := TISNode.Create;
connect34 := TconnectNode.Create;
connect34.NodeField := 'translation';
connect34.ProtoField := 'ytranslation';
{ .AddConnect }
IS33.Connect := connect34;
{ .SetIS }
Transform32.IS := IS33;
ProtoInstance35 := TProtoInstanceNode.Create;
ProtoInstance35.NameField := 'anyShape';
fieldValue36 := TfieldValueNode.Create;
fieldValue36.NameField := 'xtranslation';
fieldValue36.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance35.FieldValue := fieldValue36;
IS37 := TISNode.Create;
connect38 := TconnectNode.Create;
connect38.NodeField := 'myShape';
connect38.ProtoField := 'myShape';
{ .AddConnect }
IS37.Connect := connect38;
{ .SetIS }
ProtoInstance35.IS := IS37;
{ .AddChildren }
Transform32.AddChildren([ProtoInstance35]);
ProtoInstance39 := TProtoInstanceNode.Create;
ProtoInstance39.NameField := 'anyShape';
fieldValue40 := TfieldValueNode.Create;
fieldValue40.NameField := 'xtranslation';
fieldValue40.Value := '2 0 0';
{ .AddFieldValue }
ProtoInstance39.FieldValue := fieldValue40;
IS41 := TISNode.Create;
connect42 := TconnectNode.Create;
connect42.NodeField := 'myShape';
connect42.ProtoField := 'myShape';
{ .AddConnect }
IS41.Connect := connect42;
{ .SetIS }
ProtoInstance39.IS := IS41;
{ .AddChildren }
Transform32.AddChildren([ProtoInstance39]);
ProtoInstance43 := TProtoInstanceNode.Create;
ProtoInstance43.NameField := 'anyShape';
fieldValue44 := TfieldValueNode.Create;
fieldValue44.NameField := 'xtranslation';
fieldValue44.Value := '-2 0 0';
{ .AddFieldValue }
ProtoInstance43.FieldValue := fieldValue44;
IS45 := TISNode.Create;
connect46 := TconnectNode.Create;
connect46.NodeField := 'myShape';
connect46.ProtoField := 'myShape';
{ .AddConnect }
IS45.Connect := connect46;
{ .SetIS }
ProtoInstance43.IS := IS45;
{ .AddChildren }
Transform32.AddChildren([ProtoInstance43]);
{ .AddChildren }
ProtoBody31.AddChildren([Transform32]);
{ .SetProtoBody }
ProtoDeclare23.ProtoBody := ProtoBody31;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare23]);
ProtoInstance47 := TProtoInstanceNode.Create;
ProtoInstance47.NameField := 'three';
fieldValue48 := TfieldValueNode.Create;
fieldValue48.NameField := 'ytranslation';
fieldValue48.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance47.FieldValue := fieldValue48;
fieldValue49 := TfieldValueNode.Create;
fieldValue49.NameField := 'myShape';
Shape50 := TShapeNode.Create;
Box51 := TBoxNode.Create;
Box51.Size := Vector3(1,1,1);
{ .SetGeometry }
Shape50.Geometry := Box51;
Appearance52 := TAppearanceNode.Create;
Material53 := TMaterialNode.Create;
Material53.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance52.Material := Material53;
{ .SetAppearance }
Shape50.Appearance := Appearance52;
{ .AddChildren }
fieldValue49.AddChildren([Shape50]);
{ .AddFieldValue }
ProtoInstance47.FieldValue := fieldValue49;
{ .AddChildren }
Group7.AddChildren([ProtoInstance47]);
Transform54 := TTransformNode.Create;
Transform54.Translation := Vector3(0,2,0);
Shape55 := TShapeNode.Create;
Shape55 := Shape50;
{ .AddChild }
Transform54.AddChildren([Shape55]);
{ .AddChildren }
Group7.AddChildren([Transform54]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
