unit ViewFrustumPrototype;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
SFBool49: TSFBool;
SFInt3250: TSFInt32;
SFNode51: TSFNode;
SFNode52: TSFNode;
SFNode53: TSFNode;
Coordinate54: TCoordinateNode;
SFNode55: TSFNode;
Extrusion56: TExtrusionNode;
SFBool57: TSFBool;
SFFloat58: TSFFloat;
SFVec3f59: TSFVec3f;
SFRotation60: TSFRotation;
MFVec3f61: TMFVec3f;
MFVec2f62: TMFVec2f;
MFVec3f63: TMFVec3f;
SFBool64: TSFBool;
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
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'ViewFrustumPrototype.x3d';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(WorldInfo16);
X3DPrototype17 := TX3DPrototype.Create;
X3DPrototype17.Appinfo := 'Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes';
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);
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
SFColor22.Value := '0.9 0.9 0.9';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration18.AddSFColor([SFColor22]);
SFColor23 := TSFColor.CreateUndefined(X3DInterfaceDeclaration18, false, 'frustumColor');
SFColor23.Appinfo := 'RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8';
end;

procedure InitViewFrustumPrototypePart1;
begin

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
{ METHOD .Coord }
IndexedLineSet32.Coord := Coordinate33;
{ METHOD .Geometry }
Shape31.Geometry := IndexedLineSet32;
Appearance34 := TAppearanceNode.Create;
Material35 := TMaterialNode.Create;
IS36 := TIS.Create;
connect37 := Tconnect.Create;
connect37.NodeField := 'emissiveColor';
connect37.ProtoField := 'lineColor';
{ METHOD .Connect }
IS36.Connect := connect37;
{ METHOD .IS }
Material35.IS := IS36;
{ METHOD .SetMaterial }
Appearance34.Material := Material35;
{ METHOD .Appearance }
Shape31.Appearance := Appearance34;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape31);
Shape38 := TShapeNode.Create;
end;

procedure InitViewFrustumPrototypePart2;
begin

Extrusion39 := TExtrusionNode.Create;
{ METHOD .Geometry }
Shape38.Geometry := Extrusion39;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
IS42 := TIS.Create;
connect43 := Tconnect.Create;
connect43.NodeField := 'diffuseColor';
connect43.ProtoField := 'frustumColor';
{ METHOD .Connect }
IS42.Connect := connect43;
connect44 := Tconnect.Create;
connect44.NodeField := 'transparency';
connect44.ProtoField := 'transparency';
{ METHOD .Connect }
IS42.Connect := connect44;
{ METHOD .IS }
Material41.IS := IS42;
{ METHOD .SetMaterial }
Appearance40.Material := Material41;
{ METHOD .Appearance }
Shape38.Appearance := Appearance40;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape38);
Shape45 := TShapeNode.Create;
Sphere46 := TSphereNode.Create;
Sphere46.Radius := 0.08;
{ METHOD .Geometry }
Shape45.Geometry := Sphere46;
{ METHOD .Appearance }
Shape45.Appearance := Appearance40;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape45);
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Transform30);
{ METHOD .FdChildren.Add }
Switch28.FdChildren.Add(Transform29);
{ METHOD .AddSwitch }
X3DPrototype27.AddSwitch([Switch28]);
Script48 := TScriptNode.Create;
Script48.DirectOutput := True;
Script48.SetUrl(['ViewFrustumPrototypeScript.js']);
SFBool49 := TSFBool.CreateUndefined(Script48, false, 'visible');
SFBool49.Appinfo := 'Whether or not frustum geometry is rendered';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFBool49);
SFInt3250 := TSFInt32.CreateUndefined(Script48, false, 'visibilitySwitchSelection');
SFInt3250.Appinfo := 'Adjust Switch selection to make geometry visible or not';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFInt3250);
SFNode51 := TSFNode.CreateUndefined(Script48, false, 'ViewpointNode');
{ initialization node (if any) goes here }
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFNode51);
SFNode52 := TSFNode.CreateUndefined(Script48, false, 'NavigationInfoNode');
{ initialization node (if any) goes here }
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFNode52);
SFNode53 := TSFNode.CreateUndefined(Script48, false, 'FrustumCoordinate');
end;

procedure InitViewFrustumPrototypePart3;
begin

{ METHOD .Fd.Value }
SFNode53.Value := Coordinate33;
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFNode53);
SFNode55 := TSFNode.CreateUndefined(Script48, false, 'FrustumExtrusion');
{ METHOD .AddExtrusion }
SFNode55.AddExtrusion([Extrusion39]);
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFNode55);
SFBool57 := TSFBool.CreateUndefined(Script48, false, 'recompute');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFBool57);
SFFloat58 := TSFFloat.CreateUndefined(Script48, false, 'aspectRatio');
SFFloat58.Appinfo := 'assumed ratio height/width';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat58);
SFVec3f59 := TSFVec3f.CreateUndefined(Script48, false, 'position_changed');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f59);
SFRotation60 := TSFRotation.CreateUndefined(Script48, false, 'orientation_changed');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFRotation60);
MFVec3f61 := TMFVec3f.CreateUndefined(Script48, false, 'spine_changed');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(MFVec3f61);
MFVec2f62 := TMFVec2f.CreateUndefined(Script48, false, 'scale_changed');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(MFVec2f62);
MFVec3f63 := TMFVec3f.CreateUndefined(Script48, false, 'point_changed');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(MFVec3f63);
SFBool64 := TSFBool.CreateUndefined(Script48, false, 'trace');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFBool64);
IS65 := TIS.Create;
connect66 := Tconnect.Create;
connect66.NodeField := 'visible';
connect66.ProtoField := 'visible';
{ METHOD .Connect }
IS65.Connect := connect66;
connect67 := Tconnect.Create;
connect67.NodeField := 'ViewpointNode';
connect67.ProtoField := 'ViewpointNode';
{ METHOD .Connect }
IS65.Connect := connect67;
connect68 := Tconnect.Create;
connect68.NodeField := 'NavigationInfoNode';
connect68.ProtoField := 'NavigationInfoNode';
{ METHOD .Connect }
IS65.Connect := connect68;
connect69 := Tconnect.Create;
connect69.NodeField := 'aspectRatio';
connect69.ProtoField := 'aspectRatio';
{ METHOD .Connect }
IS65.Connect := connect69;
connect70 := Tconnect.Create;
end;

procedure InitViewFrustumPrototypePart4;
begin

connect70.NodeField := 'trace';
connect70.ProtoField := 'trace';
{ METHOD .Connect }
IS65.Connect := connect70;
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(IS65);
{ METHOD .AddScript }
X3DPrototype27.AddScript([Script48]);
{ Original "GeometryComputationScript.EventVisibilitySwitchSelection TO VisibilitySwitch.whichChoice }
{ Sample GeometryComputationScript.EventVisibilitySwitchSelection TO VisibilitySwitch.whichChoice}
X3DPrototype27.AddRoute(Script48.EventVisibilitySwitchSelection, Switch28.set_whichChoice);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventPosition_changed TO PositionTransform.translation }
{ Sample GeometryComputationScript.EventPosition_changed TO PositionTransform.translation}
X3DPrototype27.AddRoute(Script48.EventPosition_changed, Transform29.set_translation);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventOrientation_changed TO OrientationTransform.rotation }
{ Sample GeometryComputationScript.EventOrientation_changed TO OrientationTransform.rotation}
X3DPrototype27.AddRoute(Script48.EventOrientation_changed, Transform30.set_rotation);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventSpine_changed TO FrustumExtrusion.EventSet_spine }
{ Sample GeometryComputationScript.EventSpine_changed TO FrustumExtrusion.EventSet_spine}
X3DPrototype27.AddRoute(Script48.EventSpine_changed, Extrusion39.set_EventSet_spine);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventScale_changed TO FrustumExtrusion.scale }
{ Sample GeometryComputationScript.EventScale_changed TO FrustumExtrusion.scale}
X3DPrototype27.AddRoute(Script48.EventScale_changed, Extrusion39.set_scale);
{ METHOD .AddX3DROUTE }
{ Original "GeometryComputationScript.EventPoint_changed TO FrustumCoordinate.point }
{ Sample GeometryComputationScript.EventPoint_changed TO FrustumCoordinate.point}
X3DPrototype27.AddRoute(Script48.EventPoint_changed, Coordinate33.set_point);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype17.AddX3DPrototype([X3DPrototype27]);
{ METHOD .AddX3DPrototype }
Group15.AddX3DPrototype([X3DPrototype17]);
{ Example use is in separate scene }
Anchor77 := TAnchorNode.Create;
Anchor77.Description := 'ViewFrustum Example';
Anchor77.SetUrl(['ViewFrustumExample.x3d']);
Shape78 := TShapeNode.Create;
Appearance79 := TAppearanceNode.Create;
Material80 := TMaterialNode.Create;
Material80.DiffuseColor := Vector3(0.8,0.4,0);
{ METHOD .SetMaterial }
Appearance79.Material := Material80;
{ METHOD .Appearance }
Shape78.Appearance := Appearance79;
Text81 := TTextNode.Create;
Text81.SetText(['ViewFrustumPrototype.x3d','is a Prototype declaration file.','For an example scene using the prototype,','click this text and view','ViewFrustumExample.x3d']);
FontStyle82 := TFontStyleNode.Create;
FontStyle82.Justify := fjMIDDLE;
FontStyle82.JustifyMinor := fjMIDDLE;
FontStyle82.Size := 0.8;
{ METHOD .FontStyle }
Text81.FontStyle := FontStyle82;
{ METHOD .Geometry }
Shape78.Geometry := Text81;
{ METHOD .FdChildren.Add }
Anchor77.FdChildren.Add(Shape78);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Anchor77);
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
