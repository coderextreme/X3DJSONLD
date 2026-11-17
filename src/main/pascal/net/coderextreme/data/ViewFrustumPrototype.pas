unit ViewFrustumPrototype;

interface

uses X3DNodes;

function CreateViewFrustumPrototype: TX3DRootNode;

implementation

uses CastleVectors;

function CreateViewFrustumPrototype: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
WorldInfo16: TWorldInfoNode;
X3DPrototype17: TX3DPrototype;
X3DInterfaceDeclaration18: TX3DInterfaceDeclaration;
X3DField19: TX3DField;
X3DField20: TX3DField;
X3DField21: TX3DField;
X3DField22: TX3DField;
X3DField23: TX3DField;
X3DField24: TX3DField;
X3DField25: TX3DField;
X3DField26: TX3DField;
X3DPrototype27: TX3DPrototype;
Switch28: TSwitchNode;
Transform29: TTransformNode;
Transform30: TTransformNode;
Shape31: TShapeNode;
IndexedLineSet32: TIndexedLineSetNode;
Coordinate33: TCoordinateNode;
Appearance34: TAppearanceNode;
Material35: TMaterialNode;
IS36: TIS;
connect37: Tconnect;
Shape38: TShapeNode;
Extrusion39: TExtrusionNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
IS42: TIS;
connect43: Tconnect;
connect44: Tconnect;
Shape45: TShapeNode;
Sphere46: TSphereNode;
Appearance47: TAppearanceNode;
Script48: TScriptNode;
X3DField49: TX3DField;
X3DField50: TX3DField;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
Coordinate54: TCoordinateNode;
X3DField55: TX3DField;
Extrusion56: TExtrusionNode;
X3DField57: TX3DField;
X3DField58: TX3DField;
X3DField59: TX3DField;
X3DField60: TX3DField;
X3DField61: TX3DField;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
IS65: TIS;
connect66: Tconnect;
connect67: Tconnect;
connect68: Tconnect;
connect69: Tconnect;
connect70: Tconnect;
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
X3D0.Meta['identifier'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'ViewFrustumPrototype.x3d';
{ .AddChildren }
Group15.AddChildren([WorldInfo16]);
X3DPrototype17 := TX3DPrototype.Create;
X3DPrototype17.NameField := 'ViewFrustum';
X3DPrototype17.Appinfo := 'Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes';
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'ViewpointNode';
X3DField19.AccessType := 'initializeOnly';
X3DField19.Appinfo := 'required: insert Viewpoint DEF or USE node for view of interest';
X3DField19.Type := 'SFNode';
{ NULL node, ProtoInstance must provide }
{ .SetX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField19;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'NavigationInfoNode';
X3DField20.AccessType := 'initializeOnly';
X3DField20.Appinfo := 'required: insert NavigationInfo DEF or USE node of interest';
X3DField20.Type := 'SFNode';
{ NULL node, ProtoInstance must provide }
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField20;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'visible';
X3DField21.AccessType := 'inputOutput';
X3DField21.Appinfo := 'whether or not frustum geometry is rendered';
X3DField21.Type := 'SFBool';
X3DField21.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField21;
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'lineColor';
X3DField22.AccessType := 'inputOutput';
X3DField22.Appinfo := 'RGB color of ViewFrustum outline, default value 0.9 0.9 0.9';
X3DField22.Type := 'SFColor';
X3DField22.Value := '0.9 0.9 0.9';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'frustumColor';
X3DField23.AccessType := 'inputOutput';
X3DField23.Appinfo := 'RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8';
X3DField23.Type := 'SFColor';
X3DField23.Value := '0.8 0.8 0.8';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'transparency';
X3DField24.AccessType := 'inputOutput';
X3DField24.Appinfo := 'transparency of ViewFrustum hull geometry, default value 0.5';
X3DField24.Type := 'SFFloat';
X3DField24.Value := '0.5';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField24;
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'aspectRatio';
X3DField25.AccessType := 'inputOutput';
X3DField25.Appinfo := 'assumed ratio height/width, default value 0.75';
X3DField25.Type := 'SFFloat';
X3DField25.Value := '0.75';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'trace';
X3DField26.AccessType := 'initializeOnly';
X3DField26.Appinfo := 'debug support, default false';
X3DField26.Type := 'SFBool';
X3DField26.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField26;
{ .SetX3DInterfaceDeclaration }
X3DPrototype17.X3DInterfaceDeclaration := X3DInterfaceDeclaration18;
X3DPrototype27 := TX3DPrototype.Create;
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
IS36 := TIS.Create;
connect37 := Tconnect.Create;
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
IS42 := TIS.Create;
connect43 := Tconnect.Create;
connect43.NodeField := 'diffuseColor';
connect43.ProtoField := 'frustumColor';
{ .AddConnect }
IS42.Connect := connect43;
connect44 := Tconnect.Create;
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
Appearance47 := Appearance40;
{ .SetAppearance }
Shape45.Appearance := Appearance47;
{ .AddChild }
Transform30.AddChildren([Shape45]);
{ .AddChildren }
Transform29.AddChildren([Transform30]);
{ .AddChildren }
Switch28.AddChildren([Transform29]);
{ .SetSwitch }
X3DPrototype27.Switch := Switch28;
Script48 := TScriptNode.Create;
Script48.DirectOutput := True;
Script48.SetUrl(['ViewFrustumPrototypeScript.js']);
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'visible';
X3DField49.AccessType := 'inputOutput';
X3DField49.Appinfo := 'Whether or not frustum geometry is rendered';
X3DField49.Type := 'SFBool';
{ .SetX3DField }
Script48.X3DField := X3DField49;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'visibilitySwitchSelection';
X3DField50.AccessType := 'outputOnly';
X3DField50.Appinfo := 'Adjust Switch selection to make geometry visible or not';
X3DField50.Type := 'SFInt32';
{ .AddX3DField }
Script48.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'ViewpointNode';
X3DField51.AccessType := 'initializeOnly';
X3DField51.Type := 'SFNode';
{ initialization node (if any) goes here }
{ .AddX3DField }
Script48.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'NavigationInfoNode';
X3DField52.AccessType := 'initializeOnly';
X3DField52.Type := 'SFNode';
{ initialization node (if any) goes here }
{ .AddX3DField }
Script48.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'FrustumCoordinate';
X3DField53.AccessType := 'initializeOnly';
X3DField53.Type := 'SFNode';
Coordinate54 := Coordinate33;
{ .SetCoordinate }
X3DField53.Coordinate := Coordinate54;
{ .AddX3DField }
Script48.X3DField := X3DField53;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'FrustumExtrusion';
X3DField55.AccessType := 'initializeOnly';
X3DField55.Type := 'SFNode';
Extrusion56 := Extrusion39;
{ .SetExtrusion }
X3DField55.Extrusion := Extrusion56;
{ .AddX3DField }
Script48.X3DField := X3DField55;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'recompute';
X3DField57.AccessType := 'inputOnly';
X3DField57.Type := 'SFBool';
{ .AddX3DField }
Script48.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'aspectRatio';
X3DField58.AccessType := 'inputOutput';
X3DField58.Appinfo := 'assumed ratio height/width';
X3DField58.Type := 'SFFloat';
{ .AddX3DField }
Script48.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'position_changed';
X3DField59.AccessType := 'outputOnly';
X3DField59.Type := 'SFVec3f';
{ .AddX3DField }
Script48.X3DField := X3DField59;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'orientation_changed';
X3DField60.AccessType := 'outputOnly';
X3DField60.Type := 'SFRotation';
{ .AddX3DField }
Script48.X3DField := X3DField60;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'spine_changed';
X3DField61.AccessType := 'outputOnly';
X3DField61.Type := 'MFVec3f';
{ .AddX3DField }
Script48.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'scale_changed';
X3DField62.AccessType := 'outputOnly';
X3DField62.Type := 'MFVec2f';
{ .AddX3DField }
Script48.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'point_changed';
X3DField63.AccessType := 'outputOnly';
X3DField63.Type := 'MFVec3f';
{ .AddX3DField }
Script48.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'trace';
X3DField64.AccessType := 'initializeOnly';
X3DField64.Type := 'SFBool';
{ .AddX3DField }
Script48.X3DField := X3DField64;
IS65 := TIS.Create;
connect66 := Tconnect.Create;
connect66.NodeField := 'visible';
connect66.ProtoField := 'visible';
{ .AddConnect }
IS65.Connect := connect66;
connect67 := Tconnect.Create;
connect67.NodeField := 'ViewpointNode';
connect67.ProtoField := 'ViewpointNode';
{ .AddConnect }
IS65.Connect := connect67;
connect68 := Tconnect.Create;
connect68.NodeField := 'NavigationInfoNode';
connect68.ProtoField := 'NavigationInfoNode';
{ .AddConnect }
IS65.Connect := connect68;
connect69 := Tconnect.Create;
connect69.NodeField := 'aspectRatio';
connect69.ProtoField := 'aspectRatio';
{ .AddConnect }
IS65.Connect := connect69;
connect70 := Tconnect.Create;
connect70.NodeField := 'trace';
connect70.ProtoField := 'trace';
{ .AddConnect }
IS65.Connect := connect70;
{ .SetIS }
Script48.IS := IS65;
{ .AddScript }
X3DPrototype27.Script := Script48;
X3DPrototype27.AddRoute(Script48.FdVisibilityswitchselection, Switch28.FdWhichchoice);
{ .AddX3DRoute }
X3DPrototype27.AddRoute(Script48.EventPosition_changed, Transform29.FdTranslation);
{ .AddX3DRoute }
X3DPrototype27.AddRoute(Script48.EventOrientation_changed, Transform30.FdRotation);
{ .AddX3DRoute }
X3DPrototype27.AddRoute(Script48.EventSpine_changed, Extrusion39.EventSet_spine);
{ .AddX3DRoute }
X3DPrototype27.AddRoute(Script48.EventScale_changed, Extrusion39.FdScale);
{ .AddX3DRoute }
X3DPrototype27.AddRoute(Script48.EventPoint_changed, Coordinate33.FdPoint);
{ .AddX3DRoute }
{ .AddX3DPrototype }
X3DPrototype17.X3DPrototype := X3DPrototype27;
{ .AddX3DPrototype }
Group15.X3DPrototype := X3DPrototype17;
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

begin
end.
