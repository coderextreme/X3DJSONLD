function freewrlflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Background9: TBackgroundNode;
Group10: TGroupNode;
ExternProtoDeclare11: TExternProtoDeclareNode;
field12: TfieldNode;
field13: TfieldNode;
ProtoDeclare14: TProtoDeclareNode;
ProtoBody15: TProtoBodyNode;
Group16: TGroupNode;
ProtoInstance17: TProtoInstanceNode;
fieldValue18: TfieldValueNode;
fieldValue19: TfieldValueNode;
ProtoInstance20: TProtoInstanceNode;
ProtoInstance21: TProtoInstanceNode;
ProtoInstance22: TProtoInstanceNode;
ProtoInstance23: TProtoInstanceNode;
ProtoInstance24: TProtoInstanceNode;
ProtoInstance25: TProtoInstanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'freewrlflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/freewrlflowers.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Background9 := TBackgroundNode.Create;
Background9.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background9.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background9.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background9.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background9.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background9.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group7.AddChildren([Background9]);
Group10 := TGroupNode.Create;
ExternProtoDeclare11 := TExternProtoDeclareNode.Create;
ExternProtoDeclare11.NameField := 'FlowerProto';
ExternProtoDeclare11.SetUrl(['../personal/flowerproto.x3d#FlowerProto']);
field12 := TfieldNode.Create;
field12.NameField := 'vertex';
field12.AccessType := 'inputOutput';
field12.Type := 'MFString';
{ .AddField }
ExternProtoDeclare11.Field := field12;
field13 := TfieldNode.Create;
field13.NameField := 'fragment';
field13.AccessType := 'inputOutput';
field13.Type := 'MFString';
{ .AddField }
ExternProtoDeclare11.Field := field13;
{ .AddChildren }
Group10.AddChildren([ExternProtoDeclare11]);
ProtoDeclare14 := TProtoDeclareNode.Create;
ProtoDeclare14.NameField := 'flower';
ProtoBody15 := TProtoBodyNode.Create;
Group16 := TGroupNode.Create;
ProtoInstance17 := TProtoInstanceNode.Create;
ProtoInstance17.NameField := 'FlowerProto';
fieldValue18 := TfieldValueNode.Create;
fieldValue18.NameField := 'vertex';
fieldValue18.Value := '\"../shaders/freewrl_flowers_chromatic.vs\"';
{ .AddFieldValue }
ProtoInstance17.FieldValue := fieldValue18;
fieldValue19 := TfieldValueNode.Create;
fieldValue19.NameField := 'fragment';
fieldValue19.Value := '\"../shaders/freewrl.fs\"';
{ .AddFieldValue }
ProtoInstance17.FieldValue := fieldValue19;
{ .AddChildren }
Group16.AddChildren([ProtoInstance17]);
{ .AddChildren }
ProtoBody15.AddChildren([Group16]);
{ .SetProtoBody }
ProtoDeclare14.ProtoBody := ProtoBody15;
{ .AddChildren }
Group10.AddChildren([ProtoDeclare14]);
ProtoInstance20 := TProtoInstanceNode.Create;
ProtoInstance20.NameField := 'flower';
{ .AddChildren }
Group10.AddChildren([ProtoInstance20]);
ProtoInstance21 := TProtoInstanceNode.Create;
ProtoInstance21.NameField := 'flower';
{ .AddChildren }
Group10.AddChildren([ProtoInstance21]);
ProtoInstance22 := TProtoInstanceNode.Create;
ProtoInstance22.NameField := 'flower';
{ .AddChildren }
Group10.AddChildren([ProtoInstance22]);
ProtoInstance23 := TProtoInstanceNode.Create;
ProtoInstance23.NameField := 'flower';
{ .AddChildren }
Group10.AddChildren([ProtoInstance23]);
ProtoInstance24 := TProtoInstanceNode.Create;
ProtoInstance24.NameField := 'flower';
{ .AddChildren }
Group10.AddChildren([ProtoInstance24]);
ProtoInstance25 := TProtoInstanceNode.Create;
ProtoInstance25.NameField := 'flower';
{ .AddChildren }
Group10.AddChildren([ProtoInstance25]);
{ .AddChildren }
Group7.AddChildren([Group10]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
