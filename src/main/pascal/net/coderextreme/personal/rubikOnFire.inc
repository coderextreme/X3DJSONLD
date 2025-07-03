function rubikOnFire: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
ProtoDeclare10: TProtoDeclareNode;
ProtoInterface11: TProtoInterfaceNode;
field12: TfieldNode;
field13: TfieldNode;
Sphere14: TSphereNode;
ProtoBody15: TProtoBodyNode;
Transform16: TTransformNode;
IS17: TISNode;
connect18: TconnectNode;
Shape19: TShapeNode;
IS20: TISNode;
connect21: TconnectNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
ProtoDeclare24: TProtoDeclareNode;
ProtoInterface25: TProtoInterfaceNode;
field26: TfieldNode;
field27: TfieldNode;
Sphere28: TSphereNode;
ProtoBody29: TProtoBodyNode;
Transform30: TTransformNode;
IS31: TISNode;
connect32: TconnectNode;
ProtoInstance33: TProtoInstanceNode;
fieldValue34: TfieldValueNode;
IS35: TISNode;
connect36: TconnectNode;
ProtoInstance37: TProtoInstanceNode;
fieldValue38: TfieldValueNode;
IS39: TISNode;
connect40: TconnectNode;
ProtoInstance41: TProtoInstanceNode;
fieldValue42: TfieldValueNode;
IS43: TISNode;
connect44: TconnectNode;
ProtoDeclare45: TProtoDeclareNode;
ProtoInterface46: TProtoInterfaceNode;
field47: TfieldNode;
field48: TfieldNode;
Sphere49: TSphereNode;
ProtoBody50: TProtoBodyNode;
Transform51: TTransformNode;
IS52: TISNode;
connect53: TconnectNode;
ProtoInstance54: TProtoInstanceNode;
fieldValue55: TfieldValueNode;
IS56: TISNode;
connect57: TconnectNode;
ProtoInstance58: TProtoInstanceNode;
fieldValue59: TfieldValueNode;
IS60: TISNode;
connect61: TconnectNode;
ProtoInstance62: TProtoInstanceNode;
fieldValue63: TfieldValueNode;
IS64: TISNode;
connect65: TconnectNode;
ProtoDeclare66: TProtoDeclareNode;
ProtoInterface67: TProtoInterfaceNode;
field68: TfieldNode;
field69: TfieldNode;
Sphere70: TSphereNode;
ProtoBody71: TProtoBodyNode;
Transform72: TTransformNode;
IS73: TISNode;
connect74: TconnectNode;
ProtoInstance75: TProtoInstanceNode;
fieldValue76: TfieldValueNode;
IS77: TISNode;
connect78: TconnectNode;
ProtoInstance79: TProtoInstanceNode;
fieldValue80: TfieldValueNode;
IS81: TISNode;
connect82: TconnectNode;
ProtoInstance83: TProtoInstanceNode;
fieldValue84: TfieldValueNode;
IS85: TISNode;
connect86: TconnectNode;
ProtoInstance87: TProtoInstanceNode;
fieldValue88: TfieldValueNode;
fieldValue89: TfieldValueNode;
Box90: TBoxNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'rubikOnFire.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/rubikOnFire.x3d';
X3D0.Meta['description'] := 'a white rubik cube';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Rubiks Cube on Fire';
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
field13.Type := 'SFNode';
Sphere14 := TSphereNode.Create;
{ .AddChildren }
field13.AddChildren([Sphere14]);
{ .AddField }
ProtoInterface11.Field := field13;
{ .SetProtoInterface }
ProtoDeclare10.ProtoInterface := ProtoInterface11;
ProtoBody15 := TProtoBodyNode.Create;
Transform16 := TTransformNode.Create;
IS17 := TISNode.Create;
connect18 := TconnectNode.Create;
connect18.NodeField := 'translation';
connect18.ProtoField := 'xtranslation';
{ .AddConnect }
IS17.Connect := connect18;
{ .SetIS }
Transform16.IS := IS17;
Shape19 := TShapeNode.Create;
IS20 := TISNode.Create;
connect21 := TconnectNode.Create;
connect21.NodeField := 'geometry';
connect21.ProtoField := 'myShape';
{ .AddConnect }
IS20.Connect := connect21;
{ .SetIS }
Shape19.IS := IS20;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape19.Appearance := Appearance22;
{ .AddChild }
Transform16.AddChildren([Shape19]);
{ .AddChildren }
ProtoBody15.AddChildren([Transform16]);
{ .SetProtoBody }
ProtoDeclare10.ProtoBody := ProtoBody15;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare10]);
ProtoDeclare24 := TProtoDeclareNode.Create;
ProtoDeclare24.NameField := 'three';
ProtoInterface25 := TProtoInterfaceNode.Create;
field26 := TfieldNode.Create;
field26.NameField := 'ytranslation';
field26.AccessType := 'inputOutput';
field26.Type := 'SFVec3f';
field26.Value := '0 0 0';
{ .AddField }
ProtoInterface25.Field := field26;
field27 := TfieldNode.Create;
field27.NameField := 'myShape';
field27.AccessType := 'inputOutput';
field27.Type := 'SFNode';
Sphere28 := TSphereNode.Create;
{ .AddChildren }
field27.AddChildren([Sphere28]);
{ .AddField }
ProtoInterface25.Field := field27;
{ .SetProtoInterface }
ProtoDeclare24.ProtoInterface := ProtoInterface25;
ProtoBody29 := TProtoBodyNode.Create;
Transform30 := TTransformNode.Create;
IS31 := TISNode.Create;
connect32 := TconnectNode.Create;
connect32.NodeField := 'translation';
connect32.ProtoField := 'ytranslation';
{ .AddConnect }
IS31.Connect := connect32;
{ .SetIS }
Transform30.IS := IS31;
ProtoInstance33 := TProtoInstanceNode.Create;
ProtoInstance33.NameField := 'anyShape';
fieldValue34 := TfieldValueNode.Create;
fieldValue34.NameField := 'xtranslation';
fieldValue34.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance33.FieldValue := fieldValue34;
IS35 := TISNode.Create;
connect36 := TconnectNode.Create;
connect36.NodeField := 'myShape';
connect36.ProtoField := 'myShape';
{ .AddConnect }
IS35.Connect := connect36;
{ .SetIS }
ProtoInstance33.IS := IS35;
{ .AddChildren }
Transform30.AddChildren([ProtoInstance33]);
ProtoInstance37 := TProtoInstanceNode.Create;
ProtoInstance37.NameField := 'anyShape';
fieldValue38 := TfieldValueNode.Create;
fieldValue38.NameField := 'xtranslation';
fieldValue38.Value := '2 0 0';
{ .AddFieldValue }
ProtoInstance37.FieldValue := fieldValue38;
IS39 := TISNode.Create;
connect40 := TconnectNode.Create;
connect40.NodeField := 'myShape';
connect40.ProtoField := 'myShape';
{ .AddConnect }
IS39.Connect := connect40;
{ .SetIS }
ProtoInstance37.IS := IS39;
{ .AddChildren }
Transform30.AddChildren([ProtoInstance37]);
ProtoInstance41 := TProtoInstanceNode.Create;
ProtoInstance41.NameField := 'anyShape';
fieldValue42 := TfieldValueNode.Create;
fieldValue42.NameField := 'xtranslation';
fieldValue42.Value := '-2 0 0';
{ .AddFieldValue }
ProtoInstance41.FieldValue := fieldValue42;
IS43 := TISNode.Create;
connect44 := TconnectNode.Create;
connect44.NodeField := 'myShape';
connect44.ProtoField := 'myShape';
{ .AddConnect }
IS43.Connect := connect44;
{ .SetIS }
ProtoInstance41.IS := IS43;
{ .AddChildren }
Transform30.AddChildren([ProtoInstance41]);
{ .AddChildren }
ProtoBody29.AddChildren([Transform30]);
{ .SetProtoBody }
ProtoDeclare24.ProtoBody := ProtoBody29;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare24]);
ProtoDeclare45 := TProtoDeclareNode.Create;
ProtoDeclare45.NameField := 'nine';
ProtoInterface46 := TProtoInterfaceNode.Create;
field47 := TfieldNode.Create;
field47.NameField := 'ztranslation';
field47.AccessType := 'inputOutput';
field47.Type := 'SFVec3f';
field47.Value := '0 0 0';
{ .AddField }
ProtoInterface46.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'myShape';
field48.AccessType := 'inputOutput';
field48.Type := 'SFNode';
Sphere49 := TSphereNode.Create;
{ .AddChildren }
field48.AddChildren([Sphere49]);
{ .AddField }
ProtoInterface46.Field := field48;
{ .SetProtoInterface }
ProtoDeclare45.ProtoInterface := ProtoInterface46;
ProtoBody50 := TProtoBodyNode.Create;
Transform51 := TTransformNode.Create;
IS52 := TISNode.Create;
connect53 := TconnectNode.Create;
connect53.NodeField := 'translation';
connect53.ProtoField := 'ztranslation';
{ .AddConnect }
IS52.Connect := connect53;
{ .SetIS }
Transform51.IS := IS52;
ProtoInstance54 := TProtoInstanceNode.Create;
ProtoInstance54.NameField := 'three';
fieldValue55 := TfieldValueNode.Create;
fieldValue55.NameField := 'ytranslation';
fieldValue55.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance54.FieldValue := fieldValue55;
IS56 := TISNode.Create;
connect57 := TconnectNode.Create;
connect57.NodeField := 'myShape';
connect57.ProtoField := 'myShape';
{ .AddConnect }
IS56.Connect := connect57;
{ .SetIS }
ProtoInstance54.IS := IS56;
{ .AddChildren }
Transform51.AddChildren([ProtoInstance54]);
ProtoInstance58 := TProtoInstanceNode.Create;
ProtoInstance58.NameField := 'three';
fieldValue59 := TfieldValueNode.Create;
fieldValue59.NameField := 'ytranslation';
fieldValue59.Value := '0 2 0';
{ .AddFieldValue }
ProtoInstance58.FieldValue := fieldValue59;
IS60 := TISNode.Create;
connect61 := TconnectNode.Create;
connect61.NodeField := 'myShape';
connect61.ProtoField := 'myShape';
{ .AddConnect }
IS60.Connect := connect61;
{ .SetIS }
ProtoInstance58.IS := IS60;
{ .AddChildren }
Transform51.AddChildren([ProtoInstance58]);
ProtoInstance62 := TProtoInstanceNode.Create;
ProtoInstance62.NameField := 'three';
fieldValue63 := TfieldValueNode.Create;
fieldValue63.NameField := 'ytranslation';
fieldValue63.Value := '0 -2 0';
{ .AddFieldValue }
ProtoInstance62.FieldValue := fieldValue63;
IS64 := TISNode.Create;
connect65 := TconnectNode.Create;
connect65.NodeField := 'myShape';
connect65.ProtoField := 'myShape';
{ .AddConnect }
IS64.Connect := connect65;
{ .SetIS }
ProtoInstance62.IS := IS64;
{ .AddChildren }
Transform51.AddChildren([ProtoInstance62]);
{ .AddChildren }
ProtoBody50.AddChildren([Transform51]);
{ .SetProtoBody }
ProtoDeclare45.ProtoBody := ProtoBody50;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare45]);
ProtoDeclare66 := TProtoDeclareNode.Create;
ProtoDeclare66.NameField := 'twentyseven';
ProtoInterface67 := TProtoInterfaceNode.Create;
field68 := TfieldNode.Create;
field68.NameField := 'ttranslation';
field68.AccessType := 'inputOutput';
field68.Type := 'SFVec3f';
field68.Value := '0 0 0';
{ .AddField }
ProtoInterface67.Field := field68;
field69 := TfieldNode.Create;
field69.NameField := 'myShape';
field69.AccessType := 'inputOutput';
field69.Type := 'SFNode';
Sphere70 := TSphereNode.Create;
{ .AddChildren }
field69.AddChildren([Sphere70]);
{ .AddField }
ProtoInterface67.Field := field69;
{ .SetProtoInterface }
ProtoDeclare66.ProtoInterface := ProtoInterface67;
ProtoBody71 := TProtoBodyNode.Create;
Transform72 := TTransformNode.Create;
IS73 := TISNode.Create;
connect74 := TconnectNode.Create;
connect74.NodeField := 'translation';
connect74.ProtoField := 'ttranslation';
{ .AddConnect }
IS73.Connect := connect74;
{ .SetIS }
Transform72.IS := IS73;
ProtoInstance75 := TProtoInstanceNode.Create;
ProtoInstance75.NameField := 'nine';
fieldValue76 := TfieldValueNode.Create;
fieldValue76.NameField := 'ztranslation';
fieldValue76.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance75.FieldValue := fieldValue76;
IS77 := TISNode.Create;
connect78 := TconnectNode.Create;
connect78.NodeField := 'myShape';
connect78.ProtoField := 'myShape';
{ .AddConnect }
IS77.Connect := connect78;
{ .SetIS }
ProtoInstance75.IS := IS77;
{ .AddChildren }
Transform72.AddChildren([ProtoInstance75]);
ProtoInstance79 := TProtoInstanceNode.Create;
ProtoInstance79.NameField := 'nine';
fieldValue80 := TfieldValueNode.Create;
fieldValue80.NameField := 'ztranslation';
fieldValue80.Value := '0 0 2';
{ .AddFieldValue }
ProtoInstance79.FieldValue := fieldValue80;
IS81 := TISNode.Create;
connect82 := TconnectNode.Create;
connect82.NodeField := 'myShape';
connect82.ProtoField := 'myShape';
{ .AddConnect }
IS81.Connect := connect82;
{ .SetIS }
ProtoInstance79.IS := IS81;
{ .AddChildren }
Transform72.AddChildren([ProtoInstance79]);
ProtoInstance83 := TProtoInstanceNode.Create;
ProtoInstance83.NameField := 'nine';
fieldValue84 := TfieldValueNode.Create;
fieldValue84.NameField := 'ztranslation';
fieldValue84.Value := '0 0 -2';
{ .AddFieldValue }
ProtoInstance83.FieldValue := fieldValue84;
IS85 := TISNode.Create;
connect86 := TconnectNode.Create;
connect86.NodeField := 'myShape';
connect86.ProtoField := 'myShape';
{ .AddConnect }
IS85.Connect := connect86;
{ .SetIS }
ProtoInstance83.IS := IS85;
{ .AddChildren }
Transform72.AddChildren([ProtoInstance83]);
{ .AddChildren }
ProtoBody71.AddChildren([Transform72]);
{ .SetProtoBody }
ProtoDeclare66.ProtoBody := ProtoBody71;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare66]);
ProtoInstance87 := TProtoInstanceNode.Create;
ProtoInstance87.NameField := 'twentyseven';
fieldValue88 := TfieldValueNode.Create;
fieldValue88.NameField := 'ttranslation';
fieldValue88.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance87.FieldValue := fieldValue88;
fieldValue89 := TfieldValueNode.Create;
fieldValue89.NameField := 'myShape';
Box90 := TBoxNode.Create;
Box90.Size := Vector3(1,1,1);
{ .AddChildren }
fieldValue89.AddChildren([Box90]);
{ .AddFieldValue }
ProtoInstance87.FieldValue := fieldValue89;
{ .AddChildren }
Group7.AddChildren([ProtoInstance87]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
