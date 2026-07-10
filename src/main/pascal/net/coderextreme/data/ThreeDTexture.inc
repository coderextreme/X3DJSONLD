function ThreeDTexture: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
ProtoDeclare10: TProtoDeclareNode;
ProtoInterface11: TProtoInterfaceNode;
field12: TfieldNode;
ProtoBody13: TProtoBodyNode;
Transform14: TTransformNode;
IS15: TISNode;
connect16: TconnectNode;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
ProtoDeclare21: TProtoDeclareNode;
ProtoInterface22: TProtoInterfaceNode;
field23: TfieldNode;
ProtoBody24: TProtoBodyNode;
Transform25: TTransformNode;
IS26: TISNode;
connect27: TconnectNode;
ProtoInstance28: TProtoInstanceNode;
fieldValue29: TfieldValueNode;
ProtoInstance30: TProtoInstanceNode;
fieldValue31: TfieldValueNode;
ProtoInstance32: TProtoInstanceNode;
fieldValue33: TfieldValueNode;
ProtoDeclare34: TProtoDeclareNode;
ProtoInterface35: TProtoInterfaceNode;
field36: TfieldNode;
ProtoBody37: TProtoBodyNode;
Transform38: TTransformNode;
IS39: TISNode;
connect40: TconnectNode;
ProtoInstance41: TProtoInstanceNode;
fieldValue42: TfieldValueNode;
ProtoInstance43: TProtoInstanceNode;
fieldValue44: TfieldValueNode;
ProtoInstance45: TProtoInstanceNode;
fieldValue46: TfieldValueNode;
ProtoDeclare47: TProtoDeclareNode;
ProtoInterface48: TProtoInterfaceNode;
field49: TfieldNode;
ProtoBody50: TProtoBodyNode;
Transform51: TTransformNode;
IS52: TISNode;
connect53: TconnectNode;
ProtoInstance54: TProtoInstanceNode;
fieldValue55: TfieldValueNode;
ProtoInstance56: TProtoInstanceNode;
fieldValue57: TfieldValueNode;
ProtoInstance58: TProtoInstanceNode;
fieldValue59: TfieldValueNode;
ProtoInstance60: TProtoInstanceNode;
fieldValue61: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ThreeDTexture.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d';
X3D0.Meta['description'] := 'a kind of ThreeDTexture cube with spheres';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Rubiks Cube';
Viewpoint9.Position := Vector3(0,0,12);
{ .AddChildren }
Group7.AddChildren([Viewpoint9]);
ProtoDeclare10 := TProtoDeclareNode.Create;
ProtoDeclare10.NameField := 'sphereproto';
ProtoInterface11 := TProtoInterfaceNode.Create;
field12 := TfieldNode.Create;
field12.NameField := 'xtranslation';
field12.AccessType := 'inputOutput';
field12.Type := 'SFVec3f';
field12.Value := '0 0 0';
{ .AddField }
ProtoInterface11.Field := field12;
{ .SetProtoInterface }
ProtoDeclare10.ProtoInterface := ProtoInterface11;
ProtoBody13 := TProtoBodyNode.Create;
Transform14 := TTransformNode.Create;
IS15 := TISNode.Create;
connect16 := TconnectNode.Create;
connect16.NodeField := 'translation';
connect16.ProtoField := 'xtranslation';
{ .AddConnect }
IS15.Connect := connect16;
{ .SetIS }
Transform14.IS := IS15;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
{ .SetGeometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape17.Appearance := Appearance19;
{ .AddChild }
Transform14.AddChildren([Shape17]);
{ .AddChildren }
ProtoBody13.AddChildren([Transform14]);
{ .SetProtoBody }
ProtoDeclare10.ProtoBody := ProtoBody13;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare10]);
ProtoDeclare21 := TProtoDeclareNode.Create;
ProtoDeclare21.NameField := 'three';
ProtoInterface22 := TProtoInterfaceNode.Create;
field23 := TfieldNode.Create;
field23.NameField := 'ytranslation';
field23.AccessType := 'inputOutput';
field23.Type := 'SFVec3f';
field23.Value := '0 0 0';
{ .AddField }
ProtoInterface22.Field := field23;
{ .SetProtoInterface }
ProtoDeclare21.ProtoInterface := ProtoInterface22;
ProtoBody24 := TProtoBodyNode.Create;
Transform25 := TTransformNode.Create;
IS26 := TISNode.Create;
connect27 := TconnectNode.Create;
connect27.NodeField := 'translation';
connect27.ProtoField := 'ytranslation';
{ .AddConnect }
IS26.Connect := connect27;
{ .SetIS }
Transform25.IS := IS26;
ProtoInstance28 := TProtoInstanceNode.Create;
ProtoInstance28.NameField := 'sphereproto';
fieldValue29 := TfieldValueNode.Create;
fieldValue29.NameField := 'xtranslation';
fieldValue29.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance28.FieldValue := fieldValue29;
{ .AddChildren }
Transform25.AddChildren([ProtoInstance28]);
ProtoInstance30 := TProtoInstanceNode.Create;
ProtoInstance30.NameField := 'sphereproto';
fieldValue31 := TfieldValueNode.Create;
fieldValue31.NameField := 'xtranslation';
fieldValue31.Value := '2 0 0';
{ .AddFieldValue }
ProtoInstance30.FieldValue := fieldValue31;
{ .AddChildren }
Transform25.AddChildren([ProtoInstance30]);
ProtoInstance32 := TProtoInstanceNode.Create;
ProtoInstance32.NameField := 'sphereproto';
fieldValue33 := TfieldValueNode.Create;
fieldValue33.NameField := 'xtranslation';
fieldValue33.Value := '-2 0 0';
{ .AddFieldValue }
ProtoInstance32.FieldValue := fieldValue33;
{ .AddChildren }
Transform25.AddChildren([ProtoInstance32]);
{ .AddChildren }
ProtoBody24.AddChildren([Transform25]);
{ .SetProtoBody }
ProtoDeclare21.ProtoBody := ProtoBody24;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare21]);
ProtoDeclare34 := TProtoDeclareNode.Create;
ProtoDeclare34.NameField := 'nine';
ProtoInterface35 := TProtoInterfaceNode.Create;
field36 := TfieldNode.Create;
field36.NameField := 'ztranslation';
field36.AccessType := 'inputOutput';
field36.Type := 'SFVec3f';
field36.Value := '0 0 0';
{ .AddField }
ProtoInterface35.Field := field36;
{ .SetProtoInterface }
ProtoDeclare34.ProtoInterface := ProtoInterface35;
ProtoBody37 := TProtoBodyNode.Create;
Transform38 := TTransformNode.Create;
IS39 := TISNode.Create;
connect40 := TconnectNode.Create;
connect40.NodeField := 'translation';
connect40.ProtoField := 'ztranslation';
{ .AddConnect }
IS39.Connect := connect40;
{ .SetIS }
Transform38.IS := IS39;
ProtoInstance41 := TProtoInstanceNode.Create;
ProtoInstance41.NameField := 'three';
fieldValue42 := TfieldValueNode.Create;
fieldValue42.NameField := 'ytranslation';
fieldValue42.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance41.FieldValue := fieldValue42;
{ .AddChildren }
Transform38.AddChildren([ProtoInstance41]);
ProtoInstance43 := TProtoInstanceNode.Create;
ProtoInstance43.NameField := 'three';
fieldValue44 := TfieldValueNode.Create;
fieldValue44.NameField := 'ytranslation';
fieldValue44.Value := '0 2 0';
{ .AddFieldValue }
ProtoInstance43.FieldValue := fieldValue44;
{ .AddChildren }
Transform38.AddChildren([ProtoInstance43]);
ProtoInstance45 := TProtoInstanceNode.Create;
ProtoInstance45.NameField := 'three';
fieldValue46 := TfieldValueNode.Create;
fieldValue46.NameField := 'ytranslation';
fieldValue46.Value := '0 -2 0';
{ .AddFieldValue }
ProtoInstance45.FieldValue := fieldValue46;
{ .AddChildren }
Transform38.AddChildren([ProtoInstance45]);
{ .AddChildren }
ProtoBody37.AddChildren([Transform38]);
{ .SetProtoBody }
ProtoDeclare34.ProtoBody := ProtoBody37;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare34]);
ProtoDeclare47 := TProtoDeclareNode.Create;
ProtoDeclare47.NameField := 'twentyseven';
ProtoInterface48 := TProtoInterfaceNode.Create;
field49 := TfieldNode.Create;
field49.NameField := 'ttranslation';
field49.AccessType := 'inputOutput';
field49.Type := 'SFVec3f';
field49.Value := '0 0 0';
{ .AddField }
ProtoInterface48.Field := field49;
{ .SetProtoInterface }
ProtoDeclare47.ProtoInterface := ProtoInterface48;
ProtoBody50 := TProtoBodyNode.Create;
Transform51 := TTransformNode.Create;
IS52 := TISNode.Create;
connect53 := TconnectNode.Create;
connect53.NodeField := 'translation';
connect53.ProtoField := 'ttranslation';
{ .AddConnect }
IS52.Connect := connect53;
{ .SetIS }
Transform51.IS := IS52;
ProtoInstance54 := TProtoInstanceNode.Create;
ProtoInstance54.NameField := 'nine';
fieldValue55 := TfieldValueNode.Create;
fieldValue55.NameField := 'ztranslation';
fieldValue55.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance54.FieldValue := fieldValue55;
{ .AddChildren }
Transform51.AddChildren([ProtoInstance54]);
ProtoInstance56 := TProtoInstanceNode.Create;
ProtoInstance56.NameField := 'nine';
fieldValue57 := TfieldValueNode.Create;
fieldValue57.NameField := 'ztranslation';
fieldValue57.Value := '0 0 2';
{ .AddFieldValue }
ProtoInstance56.FieldValue := fieldValue57;
{ .AddChildren }
Transform51.AddChildren([ProtoInstance56]);
ProtoInstance58 := TProtoInstanceNode.Create;
ProtoInstance58.NameField := 'nine';
fieldValue59 := TfieldValueNode.Create;
fieldValue59.NameField := 'ztranslation';
fieldValue59.Value := '0 0 -2';
{ .AddFieldValue }
ProtoInstance58.FieldValue := fieldValue59;
{ .AddChildren }
Transform51.AddChildren([ProtoInstance58]);
{ .AddChildren }
ProtoBody50.AddChildren([Transform51]);
{ .SetProtoBody }
ProtoDeclare47.ProtoBody := ProtoBody50;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare47]);
ProtoInstance60 := TProtoInstanceNode.Create;
ProtoInstance60.NameField := 'twentyseven';
fieldValue61 := TfieldValueNode.Create;
fieldValue61.NameField := 'ttranslation';
fieldValue61.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance60.FieldValue := fieldValue61;
{ .AddChildren }
Group7.AddChildren([ProtoInstance60]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
