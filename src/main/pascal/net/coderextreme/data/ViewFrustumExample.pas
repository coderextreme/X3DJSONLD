unit ViewFrustumExample;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateViewFrustumExample: TX3DRootNode;

implementation

uses CastleVectors;

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
SFNode25: TSFNode;
SFNode26: TSFNode;
SFBool27: TSFBool;
SFColor28: TSFColor;
SFColor29: TSFColor;
SFFloat30: TSFFloat;
SFFloat31: TSFFloat;
SFBool32: TSFBool;
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

procedure InitViewFrustumExamplePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ViewFrustumExample.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['translated'] := '16 August 2008';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 October 2019';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'ViewFrustumPrototype.x3d';
{ METHOD .Meta }
X3D0.Meta['drawing'] := 'ViewFrustumComputation.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'ViewFrustumOverheadView.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'ViewFrustumObliqueView.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'ViewpointCalculator.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'ViewpointCalculatorComposed.png';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'view culling frustum';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;;
WorldInfo18 := TWorldInfoNode.Create;;
WorldInfo18.Title := 'ViewFrustumExample.x3d';
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(WorldInfo18);
Viewpoint19 := TViewpointNode.Create;;
Viewpoint19.Description := 'ViewFrustum from above, looking down';
Viewpoint19.Orientation := Vector4(1,0,0,-1.57);
Viewpoint19.Position := Vector3(0,40,0);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Viewpoint19);
Viewpoint20 := TViewpointNode.Create;;
Viewpoint20.Description := 'ViewFrustum from point of view';
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Viewpoint20);
Viewpoint21 := TViewpointNode.Create;;
Viewpoint21.Description := 'ViewFrustum behind point of view';
Viewpoint21.Position := Vector3(0,0,15);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Viewpoint21);
end;

procedure InitViewFrustumExamplePart1;
begin

Viewpoint22 := TViewpointNode.Create;;
Viewpoint22.Description := 'ViewFrustum oblique side view';
Viewpoint22.Orientation := Vector4(0.8005,0.5926,0.0898,-0.3743);
Viewpoint22.Position := Vector3(-5,5,20);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Viewpoint22);
NavigationInfo23 := TNavigationInfoNode.Create;;
NavigationInfo23.SetType(['EXAMINE','FLY','ANY']);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(NavigationInfo23);
X3DExternalPrototype24 := TX3DExternalPrototype.Create;;
X3DExternalPrototype24.Appinfo := 'Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes';
X3DExternalPrototype24.Url := '\"ViewFrustumPrototype.x3d#ViewFrustum\"';
SFNode25 := TSFNode.CreateUndefined(X3DExternalPrototype24, false, 'ViewpointNode');
SFNode25.Appinfo := 'required: insert Viewpoint DEF or USE node for view of interest';
{ METHOD .AddSFNode }
X3DExternalPrototype24.AddSFNode([SFNode25]);
SFNode26 := TSFNode.CreateUndefined(X3DExternalPrototype24, false, 'NavigationInfoNode');
SFNode26.Appinfo := 'required: insert NavigationInfo DEF or USE node of interest';
{ METHOD .AddSFNode }
X3DExternalPrototype24.AddSFNode([SFNode26]);
SFBool27 := TSFBool.CreateUndefined(X3DExternalPrototype24, false, 'visible');
SFBool27.Appinfo := 'whether or not frustum geometry is rendered';
{ METHOD .AddSFBool }
X3DExternalPrototype24.AddSFBool([SFBool27]);
SFColor28 := TSFColor.CreateUndefined(X3DExternalPrototype24, false, 'lineColor');
SFColor28.Appinfo := 'RGB color of ViewFrustum outline, default value 0.9 0.9 0.9';
{ METHOD .AddSFColor }
X3DExternalPrototype24.AddSFColor([SFColor28]);
SFColor29 := TSFColor.CreateUndefined(X3DExternalPrototype24, false, 'frustumColor');
SFColor29.Appinfo := 'RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8';
{ METHOD .AddSFColor }
X3DExternalPrototype24.AddSFColor([SFColor29]);
SFFloat30 := TSFFloat.CreateUndefined(X3DExternalPrototype24, false, 'transparency');
SFFloat30.Appinfo := 'transparency of ViewFrustum hull geometry, default value 0.5';
{ METHOD .AddSFFloat }
X3DExternalPrototype24.AddSFFloat([SFFloat30]);
SFFloat31 := TSFFloat.CreateUndefined(X3DExternalPrototype24, false, 'aspectRatio');
SFFloat31.Appinfo := 'assumed ratio height/width, default value 0.75';
{ METHOD .AddSFFloat }
X3DExternalPrototype24.AddSFFloat([SFFloat31]);
SFBool32 := TSFBool.CreateUndefined(X3DExternalPrototype24, false, 'trace');
SFBool32.Appinfo := 'debug support, default false';
{ METHOD .AddSFBool }
X3DExternalPrototype24.AddSFBool([SFBool32]);
{ METHOD .AddX3DExternalPrototype }
Group17.AddX3DExternalPrototype([X3DExternalPrototype24]);
{ Example use }
X3DPrototype33 := TX3DPrototypeNode;
end;

procedure InitViewFrustumExamplePart2;
begin

SFNode34 := TSFNode.CreateUndefined(X3DPrototype33, false, 'ViewpointNode');
{ prefer empty description to prevent entry in player's ViewpointList }
Viewpoint35 := TViewpointNode.Create;;
Viewpoint35.Description := 'ViewFrustum ViewpointNode';
{ METHOD .AddViewpoint }
SFNode34.AddViewpoint([Viewpoint35]);
{ METHOD .AddSFNode }
X3DPrototype33.AddSFNode([SFNode34]);
SFNode36 := TSFNode.CreateUndefined(X3DPrototype33, false, 'NavigationInfoNode');
NavigationInfo37 := TNavigationInfoNode.Create;;
NavigationInfo37.VisibilityLimit := 15;
{ METHOD .AddNavigationInfo }
SFNode36.AddNavigationInfo([NavigationInfo37]);
{ METHOD .AddSFNode }
X3DPrototype33.AddSFNode([SFNode36]);
SFBool38 := TSFBool.CreateUndefined(X3DPrototype33, false, 'visible');
SFBool38.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype33.AddSFBool([SFBool38]);
SFColor39 := TSFColor.CreateUndefined(X3DPrototype33, false, 'lineColor');
SFColor39.Value := '0.9 0.9 0.9';
{ METHOD .AddSFColor }
X3DPrototype33.AddSFColor([SFColor39]);
SFColor40 := TSFColor.CreateUndefined(X3DPrototype33, false, 'frustumColor');
SFColor40.Value := '0.8 0.8 0.8';
{ METHOD .AddSFColor }
X3DPrototype33.AddSFColor([SFColor40]);
SFFloat41 := TSFFloat.CreateUndefined(X3DPrototype33, false, 'transparency');
SFFloat41.Value := '0.75';
{ METHOD .AddSFFloat }
X3DPrototype33.AddSFFloat([SFFloat41]);
SFBool42 := TSFBool.CreateUndefined(X3DPrototype33, false, 'trace');
SFBool42.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype33.AddSFBool([SFBool42]);
{ METHOD .AddX3DPrototype }
Group17.AddX3DPrototype([X3DPrototype33]);
{ Visualization assists }
Inline43 := TInlineNode.Create;;
Inline43.SetUrl(['GridXZ_20x20Fixed.x3d']);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Inline43);
Transform44 := TTransformNode.Create;;
Transform44.Scale := Vector3(5,5,5);
Inline45 := TInlineNode.Create;;
Inline45.SetUrl(['CoordinateAxes.x3d']);
{ METHOD .FdChildren.Add }
Transform44.FdChildren.Add(Inline45);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform44);
end;

procedure InitViewFrustumExamplePart3;
begin

{ METHOD .AddGroup }
X3D0.AddChildren([Group17]);
end;

function CreateViewFrustumExample: TX3DRootNode;
begin
InitViewFrustumExamplePart0;
InitViewFrustumExamplePart1;
InitViewFrustumExamplePart2;
InitViewFrustumExamplePart3;
Result := X3D0;
end;

begin
end.
