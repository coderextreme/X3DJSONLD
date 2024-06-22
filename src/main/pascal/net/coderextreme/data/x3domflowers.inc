function x3domflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
NavigationInfo16: TNavigationInfoNode;
Background17: TBackgroundNode;
Group18: TGroupNode;
ExternProtoDeclare19: TExternProtoDeclareNode;
field20: TfieldNode;
field21: TfieldNode;
ProtoDeclare22: TProtoDeclareNode;
ProtoBody23: TProtoBodyNode;
Group24: TGroupNode;
ProtoInstance25: TProtoInstanceNode;
fieldValue26: TfieldValueNode;
fieldValue27: TfieldValueNode;
ProtoInstance28: TProtoInstanceNode;
ProtoInstance29: TProtoInstanceNode;
ProtoInstance30: TProtoInstanceNode;
ProtoInstance31: TProtoInstanceNode;
ProtoInstance32: TProtoInstanceNode;
ProtoInstance33: TProtoInstanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'x3domflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d';
Group15 := TGroupNode.Create;
NavigationInfo16 := TNavigationInfoNode.Create;
{ .AddChildren }
Group15.AddChildren([NavigationInfo16]);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group15.AddChildren([Background17]);
Group18 := TGroupNode.Create;
ExternProtoDeclare19 := TExternProtoDeclareNode.Create;
ExternProtoDeclare19.NameField := 'FlowerProto';
ExternProtoDeclare19.SetUrl(['../data/flowerproto.json#FlowerProto']);
field20 := TfieldNode.Create;
field20.NameField := 'vertex';
field20.AccessType := 'inputOutput';
field20.Type := 'MFString';
{ .AddField }
ExternProtoDeclare19.Field := field20;
field21 := TfieldNode.Create;
field21.NameField := 'fragment';
field21.AccessType := 'inputOutput';
field21.Type := 'MFString';
{ .AddField }
ExternProtoDeclare19.Field := field21;
{ .AddChildren }
Group18.AddChildren([ExternProtoDeclare19]);
ProtoDeclare22 := TProtoDeclareNode.Create;
ProtoDeclare22.NameField := 'flower';
ProtoBody23 := TProtoBodyNode.Create;
Group24 := TGroupNode.Create;
ProtoInstance25 := TProtoInstanceNode.Create;
ProtoInstance25.NameField := 'FlowerProto';
fieldValue26 := TfieldValueNode.Create;
fieldValue26.NameField := 'vertex';
fieldValue26.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .AddFieldValue }
ProtoInstance25.FieldValue := fieldValue26;
fieldValue27 := TfieldValueNode.Create;
fieldValue27.NameField := 'fragment';
fieldValue27.Value := '\"../shaders/common.fs\"';
{ .AddFieldValue }
ProtoInstance25.FieldValue := fieldValue27;
{ .AddChildren }
Group24.AddChildren([ProtoInstance25]);
{ .AddChildren }
ProtoBody23.AddChildren([Group24]);
{ .SetProtoBody }
ProtoDeclare22.ProtoBody := ProtoBody23;
{ .AddChildren }
Group18.AddChildren([ProtoDeclare22]);
ProtoInstance28 := TProtoInstanceNode.Create;
ProtoInstance28.NameField := 'flower';
{ .AddChildren }
Group18.AddChildren([ProtoInstance28]);
ProtoInstance29 := TProtoInstanceNode.Create;
ProtoInstance29.NameField := 'flower';
{ .AddChildren }
Group18.AddChildren([ProtoInstance29]);
ProtoInstance30 := TProtoInstanceNode.Create;
ProtoInstance30.NameField := 'flower';
{ .AddChildren }
Group18.AddChildren([ProtoInstance30]);
ProtoInstance31 := TProtoInstanceNode.Create;
ProtoInstance31.NameField := 'flower';
{ .AddChildren }
Group18.AddChildren([ProtoInstance31]);
ProtoInstance32 := TProtoInstanceNode.Create;
ProtoInstance32.NameField := 'flower';
{ .AddChildren }
Group18.AddChildren([ProtoInstance32]);
ProtoInstance33 := TProtoInstanceNode.Create;
ProtoInstance33.NameField := 'flower';
{ .AddChildren }
Group18.AddChildren([ProtoInstance33]);
{ .AddChildren }
Group15.AddChildren([Group18]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;
