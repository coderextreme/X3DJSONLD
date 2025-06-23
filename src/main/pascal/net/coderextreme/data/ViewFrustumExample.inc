function ViewFrustumExample: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
Viewpoint19: TViewpointNode;
Viewpoint20: TViewpointNode;
Viewpoint21: TViewpointNode;
Viewpoint22: TViewpointNode;
NavigationInfo23: TNavigationInfoNode;
ExternProtoDeclare24: TExternProtoDeclareNode;
field25: TfieldNode;
field26: TfieldNode;
field27: TfieldNode;
field28: TfieldNode;
field29: TfieldNode;
field30: TfieldNode;
field31: TfieldNode;
field32: TfieldNode;
ProtoInstance33: TProtoInstanceNode;
fieldValue34: TfieldValueNode;
Viewpoint35: TViewpointNode;
fieldValue36: TfieldValueNode;
NavigationInfo37: TNavigationInfoNode;
fieldValue38: TfieldValueNode;
fieldValue39: TfieldValueNode;
fieldValue40: TfieldValueNode;
fieldValue41: TfieldValueNode;
fieldValue42: TfieldValueNode;
Inline43: TInlineNode;
Transform44: TTransformNode;
Inline45: TInlineNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ViewFrustumExample.x3d';
X3D0.Meta['description'] := 'Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['translated'] := '16 August 2008';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['reference'] := 'ViewFrustumPrototype.x3d';
X3D0.Meta['drawing'] := 'ViewFrustumComputation.png';
X3D0.Meta['Image'] := 'ViewFrustumOverheadView.png';
X3D0.Meta['Image'] := 'ViewFrustumObliqueView.png';
X3D0.Meta['Image'] := 'ViewpointCalculator.png';
X3D0.Meta['Image'] := 'ViewpointCalculatorComposed.png';
X3D0.Meta['subject'] := 'view culling frustum';
X3D0.Meta['identifier'] := 'http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'ViewFrustumExample.x3d';
{ .AddChildren }
Group17.AddChildren([WorldInfo18]);
Viewpoint19 := TViewpointNode.Create;
Viewpoint19.Description := 'ViewFrustum from above, looking down';
Viewpoint19.Orientation := Vector4(1,0,0,-1.57);
Viewpoint19.Position := Vector3(0,40,0);
{ .AddChildren }
Group17.AddChildren([Viewpoint19]);
Viewpoint20 := TViewpointNode.Create;
Viewpoint20.Description := 'ViewFrustum from point of view';
{ .AddChildren }
Group17.AddChildren([Viewpoint20]);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'ViewFrustum behind point of view';
Viewpoint21.Position := Vector3(0,0,15);
{ .AddChildren }
Group17.AddChildren([Viewpoint21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.Description := 'ViewFrustum oblique side view';
Viewpoint22.Orientation := Vector4(0.8005,0.5926,0.0898,-0.3743);
Viewpoint22.Position := Vector3(-5,5,20);
{ .AddChildren }
Group17.AddChildren([Viewpoint22]);
NavigationInfo23 := TNavigationInfoNode.Create;
NavigationInfo23.SetType(['EXAMINE','FLY','ANY']);
{ .AddChildren }
Group17.AddChildren([NavigationInfo23]);
ExternProtoDeclare24 := TExternProtoDeclareNode.Create;
ExternProtoDeclare24.NameField := 'ViewFrustum';
ExternProtoDeclare24.Appinfo := 'Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes';
ExternProtoDeclare24.SetUrl(['ViewFrustumPrototype.x3d#ViewFrustum']);
field25 := TfieldNode.Create;
field25.NameField := 'ViewpointNode';
field25.AccessType := 'initializeOnly';
field25.Appinfo := 'required: insert Viewpoint DEF or USE node for view of interest';
field25.Type := 'SFNode';
{ .AddField }
ExternProtoDeclare24.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'NavigationInfoNode';
field26.AccessType := 'initializeOnly';
field26.Appinfo := 'required: insert NavigationInfo DEF or USE node of interest';
field26.Type := 'SFNode';
{ .AddField }
ExternProtoDeclare24.Field := field26;
field27 := TfieldNode.Create;
field27.NameField := 'visible';
field27.AccessType := 'inputOutput';
field27.Appinfo := 'whether or not frustum geometry is rendered';
field27.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare24.Field := field27;
field28 := TfieldNode.Create;
field28.NameField := 'lineColor';
field28.AccessType := 'inputOutput';
field28.Appinfo := 'RGB color of ViewFrustum outline, default value 0.9 0.9 0.9';
field28.Type := 'SFColor';
{ .AddField }
ExternProtoDeclare24.Field := field28;
field29 := TfieldNode.Create;
field29.NameField := 'frustumColor';
field29.AccessType := 'inputOutput';
field29.Appinfo := 'RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8';
field29.Type := 'SFColor';
{ .AddField }
ExternProtoDeclare24.Field := field29;
field30 := TfieldNode.Create;
field30.NameField := 'transparency';
field30.AccessType := 'inputOutput';
field30.Appinfo := 'transparency of ViewFrustum hull geometry, default value 0.5';
field30.Type := 'SFFloat';
{ .AddField }
ExternProtoDeclare24.Field := field30;
field31 := TfieldNode.Create;
field31.NameField := 'aspectRatio';
field31.AccessType := 'inputOutput';
field31.Appinfo := 'assumed ratio height/width, default value 0.75';
field31.Type := 'SFFloat';
{ .AddField }
ExternProtoDeclare24.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'trace';
field32.AccessType := 'initializeOnly';
field32.Appinfo := 'debug support, default false';
field32.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare24.Field := field32;
{ .AddChildren }
Group17.AddChildren([ExternProtoDeclare24]);
{ Example use }
ProtoInstance33 := TProtoInstanceNode.Create;
ProtoInstance33.NameField := 'ViewFrustum';
fieldValue34 := TfieldValueNode.Create;
fieldValue34.NameField := 'ViewpointNode';
{ prefer empty description to prevent entry in player's ViewpointList }
Viewpoint35 := TViewpointNode.Create;
Viewpoint35.Description := 'ViewFrustum ViewpointNode';
{ .AddChildren }
fieldValue34.AddChildren([Viewpoint35]);
{ .AddFieldValue }
ProtoInstance33.FieldValue := fieldValue34;
fieldValue36 := TfieldValueNode.Create;
fieldValue36.NameField := 'NavigationInfoNode';
NavigationInfo37 := TNavigationInfoNode.Create;
NavigationInfo37.VisibilityLimit := 15;
{ .AddChildren }
fieldValue36.AddChildren([NavigationInfo37]);
{ .AddFieldValue }
ProtoInstance33.FieldValue := fieldValue36;
fieldValue38 := TfieldValueNode.Create;
fieldValue38.NameField := 'visible';
fieldValue38.Value := 'true';
{ .AddFieldValue }
ProtoInstance33.FieldValue := fieldValue38;
fieldValue39 := TfieldValueNode.Create;
fieldValue39.NameField := 'lineColor';
fieldValue39.Value := '0.9 0.9 0.9';
{ .AddFieldValue }
ProtoInstance33.FieldValue := fieldValue39;
fieldValue40 := TfieldValueNode.Create;
fieldValue40.NameField := 'frustumColor';
fieldValue40.Value := '0.8 0.8 0.8';
{ .AddFieldValue }
ProtoInstance33.FieldValue := fieldValue40;
fieldValue41 := TfieldValueNode.Create;
fieldValue41.NameField := 'transparency';
fieldValue41.Value := '0.75';
{ .AddFieldValue }
ProtoInstance33.FieldValue := fieldValue41;
fieldValue42 := TfieldValueNode.Create;
fieldValue42.NameField := 'trace';
fieldValue42.Value := 'true';
{ .AddFieldValue }
ProtoInstance33.FieldValue := fieldValue42;
{ .AddChildren }
Group17.AddChildren([ProtoInstance33]);
{ Visualization assists }
Inline43 := TInlineNode.Create;
Inline43.SetUrl(['GridXZ_20x20Fixed.x3d']);
{ .AddChildren }
Group17.AddChildren([Inline43]);
Transform44 := TTransformNode.Create;
Transform44.Scale := Vector3(5,5,5);
Inline45 := TInlineNode.Create;
Inline45.SetUrl(['CoordinateAxes.x3d']);
{ .AddChildren }
Transform44.AddChildren([Inline45]);
{ .AddChildren }
Group17.AddChildren([Transform44]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;
