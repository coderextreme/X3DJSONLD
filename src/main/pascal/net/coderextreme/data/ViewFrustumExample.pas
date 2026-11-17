unit ViewFrustumExample;

interface

uses X3DNodes;

function CreateViewFrustumExample: TX3DRootNode;

implementation

uses CastleVectors;

function CreateViewFrustumExample: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
Viewpoint19: TViewpointNode;
Viewpoint20: TViewpointNode;
Viewpoint21: TViewpointNode;
Viewpoint22: TViewpointNode;
NavigationInfo23: TNavigationInfoNode;
X3DExternalPrototype24: TX3DExternalPrototype;
X3DField25: TX3DField;
X3DField26: TX3DField;
X3DField27: TX3DField;
X3DField28: TX3DField;
X3DField29: TX3DField;
X3DField30: TX3DField;
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DPrototype33: TX3DPrototypeNode;
SFNode34: TSFNode;
Viewpoint35: TViewpointNode;
SFNode36: TSFNode;
NavigationInfo37: TNavigationInfoNode;
SFBool38: TSFBool;
SFColor39: TSFColor;
SFColor40: TSFColor;
SFFloat41: TSFFloat;
SFBool42: TSFBool;
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
X3D0.Meta['identifier'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d';
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
X3DExternalPrototype24 := TX3DExternalPrototype.Create;
X3DExternalPrototype24.NameField := 'ViewFrustum';
X3DExternalPrototype24.Appinfo := 'Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes';
X3DExternalPrototype24.Url := '\"ViewFrustumPrototype.x3d#ViewFrustum\"';
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'ViewpointNode';
X3DField25.AccessType := 'initializeOnly';
X3DField25.Appinfo := 'required: insert Viewpoint DEF or USE node for view of interest';
X3DField25.Type := 'SFNode';
{ .SetX3DField }
X3DExternalPrototype24.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'NavigationInfoNode';
X3DField26.AccessType := 'initializeOnly';
X3DField26.Appinfo := 'required: insert NavigationInfo DEF or USE node of interest';
X3DField26.Type := 'SFNode';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'visible';
X3DField27.AccessType := 'inputOutput';
X3DField27.Appinfo := 'whether or not frustum geometry is rendered';
X3DField27.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField27;
X3DField28 := TX3DField.Create;
X3DField28.NameField := 'lineColor';
X3DField28.AccessType := 'inputOutput';
X3DField28.Appinfo := 'RGB color of ViewFrustum outline, default value 0.9 0.9 0.9';
X3DField28.Type := 'SFColor';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField28;
X3DField29 := TX3DField.Create;
X3DField29.NameField := 'frustumColor';
X3DField29.AccessType := 'inputOutput';
X3DField29.Appinfo := 'RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8';
X3DField29.Type := 'SFColor';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField29;
X3DField30 := TX3DField.Create;
X3DField30.NameField := 'transparency';
X3DField30.AccessType := 'inputOutput';
X3DField30.Appinfo := 'transparency of ViewFrustum hull geometry, default value 0.5';
X3DField30.Type := 'SFFloat';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField30;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'aspectRatio';
X3DField31.AccessType := 'inputOutput';
X3DField31.Appinfo := 'assumed ratio height/width, default value 0.75';
X3DField31.Type := 'SFFloat';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'trace';
X3DField32.AccessType := 'initializeOnly';
X3DField32.Appinfo := 'debug support, default false';
X3DField32.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField32;
{ .AddX3DExternalPrototype }
Group17.X3DExternalPrototype := X3DExternalPrototype24;
{ Example use }
X3DPrototype33 := TX3DPrototypeNode.Create;
X3DPrototype33.NameField := 'ViewFrustum';
SFNode34 := TSFNode.Create;
SFNode34.NameField := 'ViewpointNode';
{ prefer empty description to prevent entry in player's ViewpointList }
Viewpoint35 := TViewpointNode.Create;
Viewpoint35.Description := 'ViewFrustum ViewpointNode';
{ .AddViewpoint }
SFNode34.Viewpoint := Viewpoint35;
{ .SetSFNode }
X3DPrototype33.SFNode := SFNode34;
SFNode36 := TSFNode.Create;
SFNode36.NameField := 'NavigationInfoNode';
NavigationInfo37 := TNavigationInfoNode.Create;
NavigationInfo37.VisibilityLimit := 15;
{ .SetNavigationInfo }
SFNode36.NavigationInfo := NavigationInfo37;
{ .AddSFNode }
X3DPrototype33.SFNode := SFNode36;
SFBool38 := TSFBool.Create(ViewFrustum1, false, 'visible', True);
SFBool38.NameField := 'visible';
SFBool38.Value := 'true';
{ .AddSFBool }
X3DPrototype33.SFBool := SFBool38;
SFColor39 := TSFColor.Create(ViewFrustum1, false, 'lineColor', Vector3(0.9,0.9,0.9));
SFColor39.NameField := 'lineColor';
SFColor39.Value := '0.9 0.9 0.9';
{ .AddSFColor }
X3DPrototype33.SFColor := SFColor39;
SFColor40 := TSFColor.Create(ViewFrustum1, false, 'frustumColor', Vector3(0.8,0.8,0.8));
SFColor40.NameField := 'frustumColor';
SFColor40.Value := '0.8 0.8 0.8';
{ .AddSFColor }
X3DPrototype33.SFColor := SFColor40;
SFFloat41 := TSFFloat.Create(ViewFrustum1, false, 'transparency', 0.75);
SFFloat41.NameField := 'transparency';
SFFloat41.Value := '0.75';
{ .AddSFFloat }
X3DPrototype33.SFFloat := SFFloat41;
SFBool42 := TSFBool.Create(ViewFrustum1, false, 'trace', True);
SFBool42.NameField := 'trace';
SFBool42.Value := 'true';
{ .AddSFBool }
X3DPrototype33.SFBool := SFBool42;
{ .AddX3DPrototype }
Group17.X3DPrototype := X3DPrototype33;
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

begin
end.
