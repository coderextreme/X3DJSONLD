function rubikFurnace: TX3DRootNode;
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
Sphere28: TSphereNode;
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
ProtoDeclare47: TProtoDeclareNode;
ProtoInterface48: TProtoInterfaceNode;
field49: TfieldNode;
field50: TfieldNode;
Shape51: TShapeNode;
Sphere52: TSphereNode;
Appearance53: TAppearanceNode;
Material54: TMaterialNode;
ProtoBody55: TProtoBodyNode;
Transform56: TTransformNode;
IS57: TISNode;
connect58: TconnectNode;
ProtoInstance59: TProtoInstanceNode;
fieldValue60: TfieldValueNode;
IS61: TISNode;
connect62: TconnectNode;
ProtoInstance63: TProtoInstanceNode;
fieldValue64: TfieldValueNode;
IS65: TISNode;
connect66: TconnectNode;
ProtoInstance67: TProtoInstanceNode;
fieldValue68: TfieldValueNode;
IS69: TISNode;
connect70: TconnectNode;
ProtoDeclare71: TProtoDeclareNode;
ProtoInterface72: TProtoInterfaceNode;
field73: TfieldNode;
field74: TfieldNode;
Shape75: TShapeNode;
Sphere76: TSphereNode;
Appearance77: TAppearanceNode;
Material78: TMaterialNode;
ProtoBody79: TProtoBodyNode;
Transform80: TTransformNode;
IS81: TISNode;
connect82: TconnectNode;
ProtoInstance83: TProtoInstanceNode;
fieldValue84: TfieldValueNode;
IS85: TISNode;
connect86: TconnectNode;
ProtoInstance87: TProtoInstanceNode;
fieldValue88: TfieldValueNode;
IS89: TISNode;
connect90: TconnectNode;
ProtoInstance91: TProtoInstanceNode;
fieldValue92: TfieldValueNode;
IS93: TISNode;
connect94: TconnectNode;
ProtoInstance95: TProtoInstanceNode;
fieldValue96: TfieldValueNode;
fieldValue97: TfieldValueNode;
Shape98: TShapeNode;
Box99: TBoxNode;
Appearance100: TAppearanceNode;
Material101: TMaterialNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'rubikFurnace.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/rubikFurnace.x3d';
X3D0.Meta['description'] := 'a green rubik cube';
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
Sphere28 := TSphereNode.Create;
{ .SetGeometry }
Shape27.Geometry := Sphere28;
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
ProtoDeclare47 := TProtoDeclareNode.Create;
ProtoDeclare47.NameField := 'nine';
ProtoInterface48 := TProtoInterfaceNode.Create;
field49 := TfieldNode.Create;
field49.NameField := 'ztranslation';
field49.AccessType := 'inputOutput';
field49.Type := 'SFVec3f';
field49.Value := '0 0 0';
{ .AddField }
ProtoInterface48.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'myShape';
field50.AccessType := 'inputOutput';
field50.Type := 'MFNode';
Shape51 := TShapeNode.Create;
Sphere52 := TSphereNode.Create;
{ .SetGeometry }
Shape51.Geometry := Sphere52;
Appearance53 := TAppearanceNode.Create;
Material54 := TMaterialNode.Create;
Material54.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance53.Material := Material54;
{ .SetAppearance }
Shape51.Appearance := Appearance53;
{ .AddChildren }
field50.AddChildren([Shape51]);
{ .AddField }
ProtoInterface48.Field := field50;
{ .SetProtoInterface }
ProtoDeclare47.ProtoInterface := ProtoInterface48;
ProtoBody55 := TProtoBodyNode.Create;
Transform56 := TTransformNode.Create;
IS57 := TISNode.Create;
connect58 := TconnectNode.Create;
connect58.NodeField := 'translation';
connect58.ProtoField := 'ztranslation';
{ .AddConnect }
IS57.Connect := connect58;
{ .SetIS }
Transform56.IS := IS57;
ProtoInstance59 := TProtoInstanceNode.Create;
ProtoInstance59.NameField := 'three';
fieldValue60 := TfieldValueNode.Create;
fieldValue60.NameField := 'ytranslation';
fieldValue60.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance59.FieldValue := fieldValue60;
IS61 := TISNode.Create;
connect62 := TconnectNode.Create;
connect62.NodeField := 'myShape';
connect62.ProtoField := 'myShape';
{ .AddConnect }
IS61.Connect := connect62;
{ .SetIS }
ProtoInstance59.IS := IS61;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance59]);
ProtoInstance63 := TProtoInstanceNode.Create;
ProtoInstance63.NameField := 'three';
fieldValue64 := TfieldValueNode.Create;
fieldValue64.NameField := 'ytranslation';
fieldValue64.Value := '0 2 0';
{ .AddFieldValue }
ProtoInstance63.FieldValue := fieldValue64;
IS65 := TISNode.Create;
connect66 := TconnectNode.Create;
connect66.NodeField := 'myShape';
connect66.ProtoField := 'myShape';
{ .AddConnect }
IS65.Connect := connect66;
{ .SetIS }
ProtoInstance63.IS := IS65;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance63]);
ProtoInstance67 := TProtoInstanceNode.Create;
ProtoInstance67.NameField := 'three';
fieldValue68 := TfieldValueNode.Create;
fieldValue68.NameField := 'ytranslation';
fieldValue68.Value := '0 -2 0';
{ .AddFieldValue }
ProtoInstance67.FieldValue := fieldValue68;
IS69 := TISNode.Create;
connect70 := TconnectNode.Create;
connect70.NodeField := 'myShape';
connect70.ProtoField := 'myShape';
{ .AddConnect }
IS69.Connect := connect70;
{ .SetIS }
ProtoInstance67.IS := IS69;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance67]);
{ .AddChildren }
ProtoBody55.AddChildren([Transform56]);
{ .SetProtoBody }
ProtoDeclare47.ProtoBody := ProtoBody55;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare47]);
ProtoDeclare71 := TProtoDeclareNode.Create;
ProtoDeclare71.NameField := 'twentyseven';
ProtoInterface72 := TProtoInterfaceNode.Create;
field73 := TfieldNode.Create;
field73.NameField := 'ttranslation';
field73.AccessType := 'inputOutput';
field73.Type := 'SFVec3f';
field73.Value := '0 0 0';
{ .AddField }
ProtoInterface72.Field := field73;
field74 := TfieldNode.Create;
field74.NameField := 'myShape';
field74.AccessType := 'inputOutput';
field74.Type := 'MFNode';
Shape75 := TShapeNode.Create;
Sphere76 := TSphereNode.Create;
{ .SetGeometry }
Shape75.Geometry := Sphere76;
Appearance77 := TAppearanceNode.Create;
Material78 := TMaterialNode.Create;
Material78.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance77.Material := Material78;
{ .SetAppearance }
Shape75.Appearance := Appearance77;
{ .AddChildren }
field74.AddChildren([Shape75]);
{ .AddField }
ProtoInterface72.Field := field74;
{ .SetProtoInterface }
ProtoDeclare71.ProtoInterface := ProtoInterface72;
ProtoBody79 := TProtoBodyNode.Create;
Transform80 := TTransformNode.Create;
IS81 := TISNode.Create;
connect82 := TconnectNode.Create;
connect82.NodeField := 'translation';
connect82.ProtoField := 'ttranslation';
{ .AddConnect }
IS81.Connect := connect82;
{ .SetIS }
Transform80.IS := IS81;
ProtoInstance83 := TProtoInstanceNode.Create;
ProtoInstance83.NameField := 'nine';
fieldValue84 := TfieldValueNode.Create;
fieldValue84.NameField := 'ztranslation';
fieldValue84.Value := '0 0 0';
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
Transform80.AddChildren([ProtoInstance83]);
ProtoInstance87 := TProtoInstanceNode.Create;
ProtoInstance87.NameField := 'nine';
fieldValue88 := TfieldValueNode.Create;
fieldValue88.NameField := 'ztranslation';
fieldValue88.Value := '0 0 2';
{ .AddFieldValue }
ProtoInstance87.FieldValue := fieldValue88;
IS89 := TISNode.Create;
connect90 := TconnectNode.Create;
connect90.NodeField := 'myShape';
connect90.ProtoField := 'myShape';
{ .AddConnect }
IS89.Connect := connect90;
{ .SetIS }
ProtoInstance87.IS := IS89;
{ .AddChildren }
Transform80.AddChildren([ProtoInstance87]);
ProtoInstance91 := TProtoInstanceNode.Create;
ProtoInstance91.NameField := 'nine';
fieldValue92 := TfieldValueNode.Create;
fieldValue92.NameField := 'ztranslation';
fieldValue92.Value := '0 0 -2';
{ .AddFieldValue }
ProtoInstance91.FieldValue := fieldValue92;
IS93 := TISNode.Create;
connect94 := TconnectNode.Create;
connect94.NodeField := 'myShape';
connect94.ProtoField := 'myShape';
{ .AddConnect }
IS93.Connect := connect94;
{ .SetIS }
ProtoInstance91.IS := IS93;
{ .AddChildren }
Transform80.AddChildren([ProtoInstance91]);
{ .AddChildren }
ProtoBody79.AddChildren([Transform80]);
{ .SetProtoBody }
ProtoDeclare71.ProtoBody := ProtoBody79;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare71]);
ProtoInstance95 := TProtoInstanceNode.Create;
ProtoInstance95.NameField := 'twentyseven';
fieldValue96 := TfieldValueNode.Create;
fieldValue96.NameField := 'ttranslation';
fieldValue96.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance95.FieldValue := fieldValue96;
fieldValue97 := TfieldValueNode.Create;
fieldValue97.NameField := 'myShape';
Shape98 := TShapeNode.Create;
Box99 := TBoxNode.Create;
Box99.Size := Vector3(1,1,1);
{ .SetGeometry }
Shape98.Geometry := Box99;
Appearance100 := TAppearanceNode.Create;
Material101 := TMaterialNode.Create;
Material101.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance100.Material := Material101;
{ .SetAppearance }
Shape98.Appearance := Appearance100;
{ .AddChildren }
fieldValue97.AddChildren([Shape98]);
{ .AddFieldValue }
ProtoInstance95.FieldValue := fieldValue97;
{ .AddChildren }
Group7.AddChildren([ProtoInstance95]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
