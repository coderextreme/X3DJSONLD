function ViewFrustumPrototype: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
WorldInfo16: TWorldInfoNode;
ProtoDeclare17: TProtoDeclareNode;
ProtoInterface18: TProtoInterfaceNode;
field19: TfieldNode;
field20: TfieldNode;
field21: TfieldNode;
field22: TfieldNode;
field23: TfieldNode;
field24: TfieldNode;
field25: TfieldNode;
field26: TfieldNode;
ProtoBody27: TProtoBodyNode;
Switch28: TSwitchNode;
Transform29: TTransformNode;
Transform30: TTransformNode;
Shape31: TShapeNode;
IndexedLineSet32: TIndexedLineSetNode;
Coordinate33: TCoordinateNode;
Appearance34: TAppearanceNode;
Material35: TMaterialNode;
IS36: TISNode;
connect37: TconnectNode;
Shape38: TShapeNode;
Extrusion39: TExtrusionNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
IS42: TISNode;
connect43: TconnectNode;
connect44: TconnectNode;
Shape45: TShapeNode;
Sphere46: TSphereNode;
Appearance47: TAppearanceNode;
Script48: TScriptNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
Coordinate54: TCoordinateNode;
field55: TfieldNode;
Extrusion56: TExtrusionNode;
field57: TfieldNode;
field58: TfieldNode;
field59: TfieldNode;
field60: TfieldNode;
field61: TfieldNode;
field62: TfieldNode;
field63: TfieldNode;
field64: TfieldNode;
IS65: TISNode;
connect66: TconnectNode;
connect67: TconnectNode;
connect68: TconnectNode;
connect69: TconnectNode;
connect70: TconnectNode;
Anchor77: TAnchorNode;
Shape78: TShapeNode;
Appearance79: TAppearanceNode;
Material80: TMaterialNode;
Text81: TTextNode;
FontStyle82: TFontStyleNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ViewFrustumPrototype.x3d';
X3D0.Meta['description'] := 'Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['translated'] := '16 August 2008';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['reference'] := 'ViewFrustumExample.x3d';
X3D0.Meta['drawing'] := 'ViewFrustumComputation.png';
X3D0.Meta['Image'] := 'ViewFrustumOverheadView.png';
X3D0.Meta['Image'] := 'ViewFrustumObliqueView.png';
X3D0.Meta['subject'] := 'view culling frustum';
X3D0.Meta['identifier'] := 'http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'ViewFrustumPrototype.x3d';
{ .AddChildren }
Group15.AddChildren([WorldInfo16]);
ProtoDeclare17 := TProtoDeclareNode.Create;
ProtoDeclare17.NameField := 'ViewFrustum';
ProtoDeclare17.Appinfo := 'Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes';
ProtoInterface18 := TProtoInterfaceNode.Create;
field19 := TfieldNode.Create;
field19.NameField := 'ViewpointNode';
field19.AccessType := 'initializeOnly';
field19.Appinfo := 'required: insert Viewpoint DEF or USE node for view of interest';
field19.Type := 'SFNode';
{ NULL node, ProtoInstance must provide }
{ .AddField }
ProtoInterface18.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'NavigationInfoNode';
field20.AccessType := 'initializeOnly';
field20.Appinfo := 'required: insert NavigationInfo DEF or USE node of interest';
field20.Type := 'SFNode';
{ NULL node, ProtoInstance must provide }
{ .AddField }
ProtoInterface18.Field := field20;
field21 := TfieldNode.Create;
field21.NameField := 'visible';
field21.AccessType := 'inputOutput';
field21.Appinfo := 'whether or not frustum geometry is rendered';
field21.Type := 'SFBool';
field21.Value := 'true';
{ .AddField }
ProtoInterface18.Field := field21;
field22 := TfieldNode.Create;
field22.NameField := 'lineColor';
field22.AccessType := 'inputOutput';
field22.Appinfo := 'RGB color of ViewFrustum outline, default value 0.9 0.9 0.9';
field22.Type := 'SFColor';
field22.Value := '0.9 0.9 0.9';
{ .AddField }
ProtoInterface18.Field := field22;
field23 := TfieldNode.Create;
field23.NameField := 'frustumColor';
field23.AccessType := 'inputOutput';
field23.Appinfo := 'RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8';
field23.Type := 'SFColor';
field23.Value := '0.8 0.8 0.8';
{ .AddField }
ProtoInterface18.Field := field23;
field24 := TfieldNode.Create;
field24.NameField := 'transparency';
field24.AccessType := 'inputOutput';
field24.Appinfo := 'transparency of ViewFrustum hull geometry, default value 0.5';
field24.Type := 'SFFloat';
field24.Value := '0.5';
{ .AddField }
ProtoInterface18.Field := field24;
field25 := TfieldNode.Create;
field25.NameField := 'aspectRatio';
field25.AccessType := 'inputOutput';
field25.Appinfo := 'assumed ratio height/width, default value 0.75';
field25.Type := 'SFFloat';
field25.Value := '0.75';
{ .AddField }
ProtoInterface18.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'trace';
field26.AccessType := 'initializeOnly';
field26.Appinfo := 'debug support, default false';
field26.Type := 'SFBool';
field26.Value := 'false';
{ .AddField }
ProtoInterface18.Field := field26;
{ .SetProtoInterface }
ProtoDeclare17.ProtoInterface := ProtoInterface18;
ProtoBody27 := TProtoBodyNode.Create;
Switch28 := TSwitchNode.Create;
Switch28.WhichChoice := -1;
Transform29 := TTransformNode.Create;
Transform29.Rotation := Vector4(0,1,0,3.14159);
Transform30 := TTransformNode.Create;
Shape31 := TShapeNode.Create;
IndexedLineSet32 := TIndexedLineSetNode.Create;
IndexedLineSet32.SetCoordIndex([0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1]);
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ .SetCoord }
IndexedLineSet32.Coord := Coordinate33;
{ .SetGeometry }
Shape31.Geometry := IndexedLineSet32;
Appearance34 := TAppearanceNode.Create;
Material35 := TMaterialNode.Create;
IS36 := TISNode.Create;
connect37 := TconnectNode.Create;
connect37.NodeField := 'emissiveColor';
connect37.ProtoField := 'lineColor';
{ .AddConnect }
IS36.Connect := connect37;
{ .SetIS }
Material35.IS := IS36;
{ .SetMaterial }
Appearance34.Material := Material35;
{ .SetAppearance }
Shape31.Appearance := Appearance34;
{ .AddChild }
Transform30.AddChildren([Shape31]);
Shape38 := TShapeNode.Create;
Extrusion39 := TExtrusionNode.Create;
{ .SetGeometry }
Shape38.Geometry := Extrusion39;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
IS42 := TISNode.Create;
connect43 := TconnectNode.Create;
connect43.NodeField := 'diffuseColor';
connect43.ProtoField := 'frustumColor';
{ .AddConnect }
IS42.Connect := connect43;
connect44 := TconnectNode.Create;
connect44.NodeField := 'transparency';
connect44.ProtoField := 'transparency';
{ .AddConnect }
IS42.Connect := connect44;
{ .SetIS }
Material41.IS := IS42;
{ .SetMaterial }
Appearance40.Material := Material41;
{ .SetAppearance }
Shape38.Appearance := Appearance40;
{ .AddChild }
Transform30.AddChildren([Shape38]);
Shape45 := TShapeNode.Create;
Sphere46 := TSphereNode.Create;
Sphere46.Radius := 0.08;
{ .SetGeometry }
Shape45.Geometry := Sphere46;
Appearance47 := TAppearanceNode.Create;
Appearance47 := Appearance40;
{ .SetAppearance }
Shape45.Appearance := Appearance47;
{ .AddChild }
Transform30.AddChildren([Shape45]);
{ .AddChildren }
Transform29.AddChildren([Transform30]);
{ .AddChildren }
Switch28.AddChildren([Transform29]);
{ .AddChildren }
ProtoBody27.AddChildren([Switch28]);
Script48 := TScriptNode.Create;
Script48.DirectOutput := True;
Script48.SetUrl(['ViewFrustumPrototypeScript.js']);
field49 := TfieldNode.Create;
field49.NameField := 'visible';
field49.AccessType := 'inputOutput';
field49.Appinfo := 'Whether or not frustum geometry is rendered';
field49.Type := 'SFBool';
{ .AddField }
Script48.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'visibilitySwitchSelection';
field50.AccessType := 'outputOnly';
field50.Appinfo := 'Adjust Switch selection to make geometry visible or not';
field50.Type := 'SFInt32';
{ .AddField }
Script48.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'ViewpointNode';
field51.AccessType := 'initializeOnly';
field51.Type := 'SFNode';
{ initialization node (if any) goes here }
{ .AddField }
Script48.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'NavigationInfoNode';
field52.AccessType := 'initializeOnly';
field52.Type := 'SFNode';
{ initialization node (if any) goes here }
{ .AddField }
Script48.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'FrustumCoordinate';
field53.AccessType := 'initializeOnly';
field53.Type := 'SFNode';
Coordinate54 := TCoordinateNode.Create;
Coordinate54 := Coordinate33;
{ .AddChildren }
field53.AddChildren([Coordinate54]);
{ .AddField }
Script48.Field := field53;
field55 := TfieldNode.Create;
field55.NameField := 'FrustumExtrusion';
field55.AccessType := 'initializeOnly';
field55.Type := 'SFNode';
Extrusion56 := TExtrusionNode.Create;
Extrusion56 := Extrusion39;
{ .AddChildren }
field55.AddChildren([Extrusion56]);
{ .AddField }
Script48.Field := field55;
field57 := TfieldNode.Create;
field57.NameField := 'recompute';
field57.AccessType := 'inputOnly';
field57.Type := 'SFBool';
{ .AddField }
Script48.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'aspectRatio';
field58.AccessType := 'inputOutput';
field58.Appinfo := 'assumed ratio height/width';
field58.Type := 'SFFloat';
{ .AddField }
Script48.Field := field58;
field59 := TfieldNode.Create;
field59.NameField := 'position_changed';
field59.AccessType := 'outputOnly';
field59.Type := 'SFVec3f';
{ .AddField }
Script48.Field := field59;
field60 := TfieldNode.Create;
field60.NameField := 'orientation_changed';
field60.AccessType := 'outputOnly';
field60.Type := 'SFRotation';
{ .AddField }
Script48.Field := field60;
field61 := TfieldNode.Create;
field61.NameField := 'spine_changed';
field61.AccessType := 'outputOnly';
field61.Type := 'MFVec3f';
{ .AddField }
Script48.Field := field61;
field62 := TfieldNode.Create;
field62.NameField := 'scale_changed';
field62.AccessType := 'outputOnly';
field62.Type := 'MFVec2f';
{ .AddField }
Script48.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'point_changed';
field63.AccessType := 'outputOnly';
field63.Type := 'MFVec3f';
{ .AddField }
Script48.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'trace';
field64.AccessType := 'initializeOnly';
field64.Type := 'SFBool';
{ .AddField }
Script48.Field := field64;
IS65 := TISNode.Create;
connect66 := TconnectNode.Create;
connect66.NodeField := 'visible';
connect66.ProtoField := 'visible';
{ .AddConnect }
IS65.Connect := connect66;
connect67 := TconnectNode.Create;
connect67.NodeField := 'ViewpointNode';
connect67.ProtoField := 'ViewpointNode';
{ .AddConnect }
IS65.Connect := connect67;
connect68 := TconnectNode.Create;
connect68.NodeField := 'NavigationInfoNode';
connect68.ProtoField := 'NavigationInfoNode';
{ .AddConnect }
IS65.Connect := connect68;
connect69 := TconnectNode.Create;
connect69.NodeField := 'aspectRatio';
connect69.ProtoField := 'aspectRatio';
{ .AddConnect }
IS65.Connect := connect69;
connect70 := TconnectNode.Create;
connect70.NodeField := 'trace';
connect70.ProtoField := 'trace';
{ .AddConnect }
IS65.Connect := connect70;
{ .SetIS }
Script48.IS := IS65;
{ .AddChildren }
ProtoBody27.AddChildren([Script48]);
ProtoBody27.AddRoute(Script48.FdVisibilityswitchselection, Switch28.FdWhichchoice);
{ .AddX3DRoute }
ProtoBody27.AddRoute(Script48.EventPosition_changed, Transform29.FdTranslation);
{ .AddX3DRoute }
ProtoBody27.AddRoute(Script48.EventOrientation_changed, Transform30.FdRotation);
{ .AddX3DRoute }
ProtoBody27.AddRoute(Script48.EventSpine_changed, Extrusion39.EventSet_spine);
{ .AddX3DRoute }
ProtoBody27.AddRoute(Script48.EventScale_changed, Extrusion39.FdScale);
{ .AddX3DRoute }
ProtoBody27.AddRoute(Script48.EventPoint_changed, Coordinate33.FdPoint);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare17.ProtoBody := ProtoBody27;
{ .AddChildren }
Group15.AddChildren([ProtoDeclare17]);
{ Example use is in separate scene }
Anchor77 := TAnchorNode.Create;
Anchor77.Description := 'ViewFrustum Example';
Anchor77.SetUrl(['ViewFrustumExample.x3d']);
Shape78 := TShapeNode.Create;
Appearance79 := TAppearanceNode.Create;
Material80 := TMaterialNode.Create;
Material80.DiffuseColor := Vector3(0.8,0.4,0);
{ .SetMaterial }
Appearance79.Material := Material80;
{ .SetAppearance }
Shape78.Appearance := Appearance79;
Text81 := TTextNode.Create;
Text81.SetText(['ViewFrustumPrototype.x3d','is a Prototype declaration file.','For an example scene using the prototype,','click this text and view','ViewFrustumExample.x3d']);
FontStyle82 := TFontStyleNode.Create;
FontStyle82.Justify := fjMiddle;
FontStyle82.JustifyMinor := fjMiddle;
FontStyle82.Size := 0.8;
{ .SetFontStyle }
Text81.FontStyle := FontStyle82;
{ .SetGeometry }
Shape78.Geometry := Text81;
{ .AddChildren }
Anchor77.AddChildren([Shape78]);
{ .AddChildren }
Group15.AddChildren([Anchor77]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;
