function sphereflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
NavigationInfo18: TNavigationInfoNode;
Background19: TBackgroundNode;
Group20: TGroupNode;
ExternProtoDeclare21: TExternProtoDeclareNode;
field22: TfieldNode;
field23: TfieldNode;
ProtoDeclare24: TProtoDeclareNode;
ProtoBody25: TProtoBodyNode;
Group26: TGroupNode;
ProtoInstance27: TProtoInstanceNode;
fieldValue28: TfieldValueNode;
fieldValue29: TfieldValueNode;
ProtoInstance30: TProtoInstanceNode;
ProtoInstance31: TProtoInstanceNode;
ProtoInstance32: TProtoInstanceNode;
ProtoInstance33: TProtoInstanceNode;
ProtoInstance34: TProtoInstanceNode;
ProtoInstance35: TProtoInstanceNode;
TimeSensor36: TTimeSensorNode;
Sound37: TSoundNode;
AudioClip38: TAudioClipNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'sphereflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := 'Jan 17 2022';
X3D0.Meta['modified'] := 'Sep 3 2023';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/sphereflowers.x3d';
Group17 := TGroupNode.Create;
NavigationInfo18 := TNavigationInfoNode.Create;
{ .AddChildren }
Group17.AddChildren([NavigationInfo18]);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group17.AddChildren([Background19]);
Group20 := TGroupNode.Create;
ExternProtoDeclare21 := TExternProtoDeclareNode.Create;
ExternProtoDeclare21.NameField := 'FlowerProto';
ExternProtoDeclare21.SetUrl(['../personal/flowerproto.x3d#FlowerProto','https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.x3d#FlowerProto']);
field22 := TfieldNode.Create;
field22.NameField := 'vertex';
field22.AccessType := 'inputOutput';
field22.Type := 'MFString';
{ .AddField }
ExternProtoDeclare21.Field := field22;
field23 := TfieldNode.Create;
field23.NameField := 'fragment';
field23.AccessType := 'inputOutput';
field23.Type := 'MFString';
{ .AddField }
ExternProtoDeclare21.Field := field23;
{ .AddChildren }
Group20.AddChildren([ExternProtoDeclare21]);
ProtoDeclare24 := TProtoDeclareNode.Create;
ProtoDeclare24.NameField := 'flower';
ProtoBody25 := TProtoBodyNode.Create;
Group26 := TGroupNode.Create;
ProtoInstance27 := TProtoInstanceNode.Create;
ProtoInstance27.NameField := 'FlowerProto';
fieldValue28 := TfieldValueNode.Create;
fieldValue28.NameField := 'vertex';
fieldValue28.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .AddFieldValue }
ProtoInstance27.FieldValue := fieldValue28;
fieldValue29 := TfieldValueNode.Create;
fieldValue29.NameField := 'fragment';
fieldValue29.Value := '\"../shaders/x_ite.fs\"';
{ .AddFieldValue }
ProtoInstance27.FieldValue := fieldValue29;
{ .AddChildren }
Group26.AddChildren([ProtoInstance27]);
{ .AddChildren }
ProtoBody25.AddChildren([Group26]);
{ .SetProtoBody }
ProtoDeclare24.ProtoBody := ProtoBody25;
{ .AddChildren }
Group20.AddChildren([ProtoDeclare24]);
ProtoInstance30 := TProtoInstanceNode.Create;
ProtoInstance30.NameField := 'flower';
{ .AddChildren }
Group20.AddChildren([ProtoInstance30]);
ProtoInstance31 := TProtoInstanceNode.Create;
ProtoInstance31.NameField := 'flower';
{ .AddChildren }
Group20.AddChildren([ProtoInstance31]);
ProtoInstance32 := TProtoInstanceNode.Create;
ProtoInstance32.NameField := 'flower';
{ .AddChildren }
Group20.AddChildren([ProtoInstance32]);
ProtoInstance33 := TProtoInstanceNode.Create;
ProtoInstance33.NameField := 'flower';
{ .AddChildren }
Group20.AddChildren([ProtoInstance33]);
ProtoInstance34 := TProtoInstanceNode.Create;
ProtoInstance34.NameField := 'flower';
{ .AddChildren }
Group20.AddChildren([ProtoInstance34]);
ProtoInstance35 := TProtoInstanceNode.Create;
ProtoInstance35.NameField := 'flower';
{ .AddChildren }
Group20.AddChildren([ProtoInstance35]);
TimeSensor36 := TTimeSensorNode.Create;
TimeSensor36.Loop := True;
{ .AddChildren }
Group20.AddChildren([TimeSensor36]);
Sound37 := TSoundNode.Create;
Sound37.MaxBack := 100;
Sound37.MaxFront := 100;
Sound37.MinBack := 20;
Sound37.MinFront := 20;
Sound37.Location := Vector3(0,1,0);
AudioClip38 := TAudioClipNode.Create;
AudioClip38.Description := 'Chandubabamusic #1';
AudioClip38.SetUrl(['../resources/chandubabamusic1.wav','https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav']);
{ .SetSource }
Sound37.Source := AudioClip38;
{ .AddChildren }
Group20.AddChildren([Sound37]);
Group20.AddRoute(TimeSensor36.FdCycletime, AudioClip38.FdStarttime);
{ .AddX3DRoute }
{ .AddChildren }
Group17.AddChildren([Group20]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;
