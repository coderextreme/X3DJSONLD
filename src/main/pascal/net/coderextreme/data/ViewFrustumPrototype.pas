unit ViewFrustumPrototype;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateViewFrustumPrototype: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group15: TGroupNode;
WorldInfo16: TWorldInfoNode;
X3DPrototype17: TX3DPrototype;
X3DInterfaceDeclaration18: TX3DInterfaceDeclaration;
SFNode19: TSFNode;
SFNode20: TSFNode;
SFBool21: TSFBool;
SFColor22: TSFColor;
SFColor23: TSFColor;
SFFloat24: TSFFloat;
SFFloat25: TSFFloat;
SFBool26: TSFBool;
X3DPrototype27: TX3DPrototype;
Switch28: TSwitchNode;
Transform29: TTransformNode;
Transform30: TTransformNode;
Shape31: TShapeNode;
IndexedLineSet32: TIndexedLineSetNode;
Coordinate33: TCoordinateNode;
Appearance34: TAppearanceNode;
Material35: TMaterialNode;
Shape37: TShapeNode;
Extrusion38: TExtrusionNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;
Shape42: TShapeNode;
Sphere43: TSphereNode;
Appearance44: TAppearanceNode;
Script45: TScriptNode;
SFBool46: TSFBool;
SFInt3247: TSFInt32;
SFNode48: TSFNode;
SFNode49: TSFNode;
SFNode50: TSFNode;
Coordinate51: TCoordinateNode;
SFNode52: TSFNode;
Extrusion53: TExtrusionNode;
SFBool54: TSFBool;
SFFloat55: TSFFloat;
SFVec3f56: TSFVec3f;
SFRotation57: TSFRotation;
MFVec3f58: TMFVec3f;
MFVec2f59: TMFVec2f;
MFVec3f60: TMFVec3f;
SFBool61: TSFBool;
Anchor69: TAnchorNode;
Shape70: TShapeNode;
Appearance71: TAppearanceNode;
Material72: TMaterialNode;
Text73: TTextNode;
FontStyle74: TFontStyleNode;

procedure InitViewFrustumPrototypePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ViewFrustumPrototype.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['translated'] := '16 August 2008';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 October 2019';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'ViewFrustumExample.x3d';
{ METHOD .Meta }
X3D0.Meta['drawing'] := 'ViewFrustumComputation.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'ViewFrustumOverheadView.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'ViewFrustumObliqueView.png';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'view culling frustum';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;;
WorldInfo16 := TWorldInfoNode.Create;;
WorldInfo16.Title := 'ViewFrustumPrototype.x3d';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(WorldInfo16);
X3DPrototype17 := TX3DPrototype.Create;;
X3DPrototype17.Appinfo := 'Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes';
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);;
SFNode19 := TSFNode.CreateUndefined(X3DInterfaceDeclaration18, false, 'ViewpointNode');
SFNode19.Appinfo := 'required: insert Viewpoint DEF or USE node for view of interest';
{ NULL node, ProtoInstance must provide }
{ METHOD .AddSFNode }
X3DInterfaceDeclaration18.AddSFNode([SFNode19]);
SFNode20 := TSFNode.CreateUndefined(X3DInterfaceDeclaration18, false, 'NavigationInfoNode');
SFNode20.Appinfo := 'required: insert NavigationInfo DEF or USE node of interest';
{ NULL node, ProtoInstance must provide }
{ METHOD .AddSFNode }
X3DInterfaceDeclaration18.AddSFNode([SFNode20]);
SFBool21 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'visible');
SFBool21.Appinfo := 'whether or not frustum geometry is rendered';
SFBool21.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool21]);
SFColor22 := TSFColor.CreateUndefined(X3DInterfaceDeclaration18, false, 'lineColor');
SFColor22.Appinfo := 'RGB color of ViewFrustum outline, default value 0.9 0.9 0.9';
end;

procedure InitViewFrustumPrototypePart1;
begin

SFColor22.Value := '0.9 0.9 0.9';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration18.AddSFColor([SFColor22]);
SFColor23 := TSFColor.CreateUndefined(X3DInterfaceDeclaration18, false, 'frustumColor');
SFColor23.Appinfo := 'RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8';
SFColor23.Value := '0.8 0.8 0.8';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration18.AddSFColor([SFColor23]);
SFFloat24 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'transparency');
SFFloat24.Appinfo := 'transparency of ViewFrustum hull geometry, default value 0.5';
SFFloat24.Value := '0.5';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat24]);
SFFloat25 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'aspectRatio');
SFFloat25.Appinfo := 'assumed ratio height/width, default value 0.75';
SFFloat25.Value := '0.75';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat25]);
SFBool26 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'trace');
SFBool26.Appinfo := 'debug support, default false';
SFBool26.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool26]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype17.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration18]);
X3DPrototype27 := TX3DPrototype.Create;;
Switch28 := TSwitchNode.Create;;
Switch28.WhichChoice := -1;
Transform29 := TTransformNode.Create;;
Transform29.Rotation := Vector4(0,1,0,3.14159);
Transform30 := TTransformNode.Create;;
Shape31 := TShapeNode.Create;;
IndexedLineSet32 := TIndexedLineSetNode.Create;;
IndexedLineSet32.SetCoordIndex([0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1]);
Coordinate33 := TCoordinateNode.Create;;
Coordinate33.SetPoint([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet32.Coord := Coordinate33;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape31.Geometry := IndexedLineSet32;
Appearance34 := TAppearanceNode.Create;
end;

procedure InitViewFrustumPrototypePart2;
begin
;
Material35 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance34.Material := Material35;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape31.Appearance := Appearance34;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape31);
Shape37 := TShapeNode.Create;;
Extrusion38 := TExtrusionNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape37.Geometry := Extrusion38;
Appearance39 := TAppearanceNode.Create;;
Material40 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance39.Material := Material40;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape37.Appearance := Appearance39;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape37);
Shape42 := TShapeNode.Create;;
Sphere43 := TSphereNode.Create;;
Sphere43.Radius := 0.08;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape42.Geometry := Sphere43;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape42.Appearance := Appearance39;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape42);
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Transform30);
{ METHOD .FdChildren.Add }
Switch28.FdChildren.Add(Transform29);
{ METHOD .AddSwitch }
X3DPrototype27.AddSwitch([Switch28]);
Script45 := TScriptNode.Create;;
Script45.DirectOutput := True;
Script45.SetUrl(['ViewFrustumPrototypeScript.js']);
SFBool46 := TSFBool.CreateUndefined(Script45, false, 'visible');
SFBool46.Appinfo := 'Whether or not frustum geometry is rendered';
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFBool46);
SFInt3247 := TSFInt32.CreateUndefined(Script45, false, 'visibilitySwitchSelection');
SFInt3247.Appinfo := 'Adjust Switch selection to make geometry visible or not';
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFInt3247);
SFNode48 := TSFNode.CreateUndefined(Script45, false, 'ViewpointNode');
end;

procedure InitViewFrustumPrototypePart3;
begin

{ initialization node (if any) goes here }
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFNode48);
SFNode49 := TSFNode.CreateUndefined(Script45, false, 'NavigationInfoNode');
{ initialization node (if any) goes here }
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFNode49);
SFNode50 := TSFNode.CreateUndefined(Script45, false, 'FrustumCoordinate');
{ METHOD .Fd.Value }
SFNode50.Value := Coordinate33;
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFNode50);
SFNode52 := TSFNode.CreateUndefined(Script45, false, 'FrustumExtrusion');
{ METHOD .AddExtrusion }
SFNode52.AddExtrusion([Extrusion38]);
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFNode52);
SFBool54 := TSFBool.CreateUndefined(Script45, false, 'recompute');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFBool54);
SFFloat55 := TSFFloat.CreateUndefined(Script45, false, 'aspectRatio');
SFFloat55.Appinfo := 'assumed ratio height/width';
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFFloat55);
SFVec3f56 := TSFVec3f.CreateUndefined(Script45, false, 'position_changed');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFVec3f56);
SFRotation57 := TSFRotation.CreateUndefined(Script45, false, 'orientation_changed');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFRotation57);
MFVec3f58 := TMFVec3f.CreateUndefined(Script45, false, 'spine_changed');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(MFVec3f58);
MFVec2f59 := TMFVec2f.CreateUndefined(Script45, false, 'scale_changed');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(MFVec2f59);
MFVec3f60 := TMFVec3f.CreateUndefined(Script45, false, 'point_changed');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(MFVec3f60);
SFBool61 := TSFBool.CreateUndefined(Script45, false, 'trace');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFBool61);
{ METHOD .AddScript }
X3DPrototype27.AddScript([Script45]);
{ Original "GeometryComputationScript.EventVisibilitySwitchSelection TO VisibilitySwitch.whichChoice }
{ Sample GeometryComputationScript.EventVisibilitySwitchSelection TO VisibilitySwitch.whichChoice}
X3DPrototype27.AddRoute(Script45.EventVisibilitySwitchSelection, Switch28.whichChoice);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventPosition_changed TO PositionTransform.translation }
{ Sample GeometryComputationScript.EventPosition_changed TO PositionTransform.translation}
X3DPrototype27.AddRoute(Script45.EventPosition_changed, Transform29.translation);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventOrientation_changed TO OrientationTransform.rotation }
{ Sample GeometryComputationScript.EventOrientation_changed TO OrientationTransform.rotation}
X3DPrototype27.AddRoute(Script45.EventOrientation_changed, Transform30.rotation);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventSpine_changed TO FrustumExtrusion.EventSet_spine }
{ Sample GeometryComputationScript.EventSpine_changed TO FrustumExtrusion.EventSet_spine}
X3DPrototype27.AddRoute(Script45.EventSpine_changed, Extrusion38.EventSet_spine);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventScale_changed TO FrustumExtrusion.scale }
{ Sample GeometryComputationScript.EventScale_changed TO FrustumExtrusion.scale}
X3DPrototype27.AddRoute(Script45.EventScale_changed, Extrusion38.scale);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventPoint_changed TO FrustumCoordinate.point }
{ Sample GeometryComputationScript.EventPoint_changed TO FrustumCoordinate.point}
X3DPrototype27.AddRoute(Script45.EventPoint_changed, Coordinate33.point);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype17.AddX3DPrototype([X3DPrototype27]);
{ METHOD .AddX3DPrototype }
Group15.AddX3DPrototype([X3DPrototype17]);
{ Example use is in separate scene }
Anchor69 := TAnchorNode.Create;;
Anchor69.Description := 'ViewFrustum Example';
Anchor69.SetUrl(['ViewFrustumExample.x3d']);
Shape70 := TShapeNode.Create;
end;

procedure InitViewFrustumPrototypePart4;
begin
;
Appearance71 := TAppearanceNode.Create;;
Material72 := TMaterialNode.Create;;
Material72.DiffuseColor := Vector3(0.8,0.4,0);
{ METHOD .SetMaterial }
Appearance71.Material := Material72;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape70.Appearance := Appearance71;
Text73 := TTextNode.Create;;
Text73.SetText(['ViewFrustumPrototype.x3d','is a Prototype declaration file.','For an example scene using the prototype,','click this text and view','ViewFrustumExample.x3d']);
FontStyle74 := TFontStyleNode.Create;;
FontStyle74.Justify := fjMIDDLE;
FontStyle74.JustifyMinor := fjMIDDLE;
FontStyle74.Size := 0.8;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text73.FontStyle := FontStyle74;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape70.Geometry := Text73;
{ METHOD .FdChildren.Add }
Anchor69.FdChildren.Add(Shape70);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Anchor69);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function CreateViewFrustumPrototype: TX3DRootNode;
begin
InitViewFrustumPrototypePart0;
InitViewFrustumPrototypePart1;
InitViewFrustumPrototypePart2;
InitViewFrustumPrototypePart3;
InitViewFrustumPrototypePart4;
Result := X3D0;
end;

begin
end.
