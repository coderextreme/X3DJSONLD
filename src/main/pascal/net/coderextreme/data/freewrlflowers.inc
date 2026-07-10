function freewrlflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
Background10: TBackgroundNode;
Group11: TGroupNode;
ExternProtoDeclare12: TExternProtoDeclareNode;
field13: TfieldNode;
field14: TfieldNode;
ProtoDeclare15: TProtoDeclareNode;
ProtoBody16: TProtoBodyNode;
Group17: TGroupNode;
ProtoInstance18: TProtoInstanceNode;
fieldValue19: TfieldValueNode;
fieldValue20: TfieldValueNode;
ProtoInstance21: TProtoInstanceNode;
ProtoInstance22: TProtoInstanceNode;
ProtoInstance23: TProtoInstanceNode;
ProtoInstance24: TProtoInstanceNode;
ProtoInstance25: TProtoInstanceNode;
ProtoInstance26: TProtoInstanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'freewrlflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Tour Views';
Viewpoint9.Position := Vector3(0,0,50);
{ .AddChildren }
Group7.AddChildren([Viewpoint9]);
Background10 := TBackgroundNode.Create;
Background10.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background10.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background10.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background10.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background10.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background10.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group7.AddChildren([Background10]);
Group11 := TGroupNode.Create;
ExternProtoDeclare12 := TExternProtoDeclareNode.Create;
ExternProtoDeclare12.NameField := 'FlowerProto';
ExternProtoDeclare12.SetUrl(['../data/flowerprotofreewrl.x3d#FlowerProto','https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto']);
field13 := TfieldNode.Create;
field13.NameField := 'vertex';
field13.AccessType := 'inputOutput';
field13.Type := 'MFString';
{ .AddField }
ExternProtoDeclare12.Field := field13;
field14 := TfieldNode.Create;
field14.NameField := 'fragment';
field14.AccessType := 'inputOutput';
field14.Type := 'MFString';
{ .AddField }
ExternProtoDeclare12.Field := field14;
{ .AddChildren }
Group11.AddChildren([ExternProtoDeclare12]);
ProtoDeclare15 := TProtoDeclareNode.Create;
ProtoDeclare15.NameField := 'flower';
ProtoBody16 := TProtoBodyNode.Create;
Group17 := TGroupNode.Create;
ProtoInstance18 := TProtoInstanceNode.Create;
ProtoInstance18.NameField := 'FlowerProto';
fieldValue19 := TfieldValueNode.Create;
fieldValue19.NameField := 'vertex';
fieldValue19.Value := '\"../shaders/freewrl_flowers_chromatic.vs\"';
{ .AddFieldValue }
ProtoInstance18.FieldValue := fieldValue19;
fieldValue20 := TfieldValueNode.Create;
fieldValue20.NameField := 'fragment';
fieldValue20.Value := '\"../shaders/freewrl.fs\"';
{ .AddFieldValue }
ProtoInstance18.FieldValue := fieldValue20;
{ .AddChildren }
Group17.AddChildren([ProtoInstance18]);
{ .AddChildren }
ProtoBody16.AddChildren([Group17]);
{ .SetProtoBody }
ProtoDeclare15.ProtoBody := ProtoBody16;
{ .AddChildren }
Group11.AddChildren([ProtoDeclare15]);
ProtoInstance21 := TProtoInstanceNode.Create;
ProtoInstance21.NameField := 'flower';
{ .AddChildren }
Group11.AddChildren([ProtoInstance21]);
ProtoInstance22 := TProtoInstanceNode.Create;
ProtoInstance22.NameField := 'flower';
{ .AddChildren }
Group11.AddChildren([ProtoInstance22]);
ProtoInstance23 := TProtoInstanceNode.Create;
ProtoInstance23.NameField := 'flower';
{ .AddChildren }
Group11.AddChildren([ProtoInstance23]);
ProtoInstance24 := TProtoInstanceNode.Create;
ProtoInstance24.NameField := 'flower';
{ .AddChildren }
Group11.AddChildren([ProtoInstance24]);
ProtoInstance25 := TProtoInstanceNode.Create;
ProtoInstance25.NameField := 'flower';
{ .AddChildren }
Group11.AddChildren([ProtoInstance25]);
ProtoInstance26 := TProtoInstanceNode.Create;
ProtoInstance26.NameField := 'flower';
{ .AddChildren }
Group11.AddChildren([ProtoInstance26]);
{ .AddChildren }
Group7.AddChildren([Group11]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
