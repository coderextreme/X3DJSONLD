unit ViewFrustumPrototype;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateViewFrustumPrototype: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  WorldInfo16: TWorldInfoNode;
  ProtoDeclare17: TX3DPrototype;
  FieldDecl19: TX3DInterfaceDeclaration;
  FieldVal19: TSFNode;
  FieldDecl20: TX3DInterfaceDeclaration;
  FieldVal20: TSFNode;
  FieldDecl21: TX3DInterfaceDeclaration;
  FieldVal21: TSFBool;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TSFColor;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TSFColor;
  FieldDecl24: TX3DInterfaceDeclaration;
  FieldVal24: TSFFloat;
  FieldDecl25: TX3DInterfaceDeclaration;
  FieldVal25: TSFFloat;
  FieldDecl26: TX3DInterfaceDeclaration;
  FieldVal26: TSFBool;
  Switch28: TSwitchNode;
  Transform29: TTransformNode;
  Transform30: TTransformNode;
  Shape31: TShapeNode;
  IndexedLineSet32: TIndexedLineSetNode;
  Coordinate33: TCoordinateNode;
  Appearance34: TAppearanceNode;
  Material35: TMaterialNode;
  Shape36: TShapeNode;
  Extrusion37: TExtrusionNode;
  Appearance38: TAppearanceNode;
  Material39: TMaterialNode;
  Shape40: TShapeNode;
  Sphere41: TSphereNode;
  Script43: TScriptNode;
  FieldVal44: TSFBool;
  FieldVal45: TX3DEvent;
  FieldVal46: TSFNode;
  FieldVal47: TSFNode;
  FieldVal48: TSFNode;
  FieldVal50: TSFNode;
  FieldVal52: TX3DEvent;
  FieldVal53: TSFFloat;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  FieldVal58: TX3DEvent;
  FieldVal59: TSFBool;
  Anchor66: TAnchorNode;
  Shape67: TShapeNode;
  Appearance68: TAppearanceNode;
  Material69: TMaterialNode;
  Text70: TTextNode;
  FontStyle71: TFontStyleNode;

procedure InitViewFrustumPrototypePart0;
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
Group15.FdChildren.Add(WorldInfo16);
ProtoDeclare17 := CreateEmptyPrototype('ViewFrustum');
ProtoDeclare17.X3DName := 'ViewFrustum';
ProtoDeclare17.Appinfo := 'Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes';
FieldVal19 := TSFNode.CreateUndefined(nil, False, 'ViewpointNode');
FieldDecl19 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl19.FieldOrEvent := FieldVal19;
FieldVal19.ParentInterfaceDeclaration := FieldDecl19;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl19);
FieldVal20 := TSFNode.CreateUndefined(nil, False, 'NavigationInfoNode');
FieldDecl20 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl20.FieldOrEvent := FieldVal20;
FieldVal20.ParentInterfaceDeclaration := FieldDecl20;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl20);
FieldVal21 := TSFBool.Create(nil, True, 'visible', True);
FieldDecl21 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl21.FieldOrEvent := FieldVal21;
FieldVal21.ParentInterfaceDeclaration := FieldDecl21;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl21);
FieldVal22 := TSFColor.Create(nil, True, 'lineColor', Vector3(0.9, 0.9, 0.9));
end;

procedure InitViewFrustumPrototypePart1;
begin
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl22);
FieldVal23 := TSFColor.Create(nil, True, 'frustumColor', Vector3(0.8, 0.8, 0.8));
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl23);
FieldVal24 := TSFFloat.Create(nil, True, 'transparency', 0.5);
FieldDecl24 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl24.FieldOrEvent := FieldVal24;
FieldVal24.ParentInterfaceDeclaration := FieldDecl24;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl24);
FieldVal25 := TSFFloat.Create(nil, True, 'aspectRatio', 0.75);
FieldDecl25 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl25.FieldOrEvent := FieldVal25;
FieldVal25.ParentInterfaceDeclaration := FieldDecl25;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl25);
FieldVal26 := TSFBool.Create(nil, False, 'trace', False);
FieldDecl26 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl26.FieldOrEvent := FieldVal26;
FieldVal26.ParentInterfaceDeclaration := FieldDecl26;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl26);
Switch28 := TSwitchNode.Create;
Switch28.X3DName := 'VisibilitySwitch';
Switch28.WhichChoice := -1;
Transform29 := TTransformNode.Create;
Transform29.X3DName := 'PositionTransform';
Transform29.Rotation := Vector4(0, 1, 0, 3.14159);
Transform30 := TTransformNode.Create;
Transform30.X3DName := 'OrientationTransform';
Shape31 := TShapeNode.Create;
IndexedLineSet32 := TIndexedLineSetNode.Create;
IndexedLineSet32.X3DName := 'FrustumLines';
IndexedLineSet32.SetCoordIndex([0, 1, 2, 3, 0, -1, 4, 5, 6, 7, 4, -1, 0, 4, -1, 1, 5, -1, 2, 6, -1, 3, 7, -1]);
Coordinate33 := TCoordinateNode.Create;
Coordinate33.X3DName := 'FrustumCoordinate';
Coordinate33.SetPoint([Vector3(0, 0, 0), Vector3(0, 0, 0), Vector3(0, 0, 0), Vector3(0, 0, 0), Vector3(0, 0, 0), Vector3(0, 0, 0), Vector3(0, 0, 0), Vector3(0, 0, 0)]);
IndexedLineSet32.Coord := Coordinate33;
end;

procedure InitViewFrustumPrototypePart2;
begin
Shape31.Geometry := IndexedLineSet32;
Appearance34 := TAppearanceNode.Create;
Material35 := TMaterialNode.Create;
Material35.FieldOrEvent('emissiveColor', True).IsClauseNamesAdd('lineColor');
Appearance34.Material := Material35;
Shape31.Appearance := Appearance34;
Transform30.FdChildren.Add(Shape31);
Shape36 := TShapeNode.Create;
Extrusion37 := TExtrusionNode.Create;
Extrusion37.X3DName := 'FrustumExtrusion';
Shape36.Geometry := Extrusion37;
Appearance38 := TAppearanceNode.Create;
Appearance38.X3DName := 'FrustumAppearance';
Material39 := TMaterialNode.Create;
Material39.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('frustumColor');
Material39.FieldOrEvent('transparency', True).IsClauseNamesAdd('transparency');
Appearance38.Material := Material39;
Shape36.Appearance := Appearance38;
Transform30.FdChildren.Add(Shape36);
Shape40 := TShapeNode.Create;
Sphere41 := TSphereNode.Create;
Sphere41.Radius := 0.08;
Shape40.Geometry := Sphere41;
Shape40.Appearance := Appearance38;
Transform30.FdChildren.Add(Shape40);
Transform29.FdChildren.Add(Transform30);
Switch28.FdChildren.Add(Transform29);
ProtoDeclare17.Node.AddChildren([Switch28]);
Script43 := TScriptNode.Create;
Script43.X3DName := 'GeometryComputationScript';
Script43.DirectOutput := True;
Script43.SetUrl(['ViewFrustumPrototypeScript.js']);
FieldVal44 := TSFBool.CreateUndefined(Script43, True, 'visible');
Script43.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFInt32.CreateEvent(Script43, 'visibilitySwitchSelection', False);
Script43.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFNode.CreateUndefined(Script43, False, 'ViewpointNode');
Script43.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFNode.CreateUndefined(Script43, False, 'NavigationInfoNode');
Script43.AddCustomFieldOrEvent(FieldVal47);
end;

procedure InitViewFrustumPrototypePart3;
begin
FieldVal48 := TSFNode.CreateUndefined(Script43, False, 'FrustumCoordinate');
Script43.AddCustomFieldOrEvent(FieldVal48);
FieldVal48.Value := Coordinate33;
FieldVal50 := TSFNode.CreateUndefined(Script43, False, 'FrustumExtrusion');
Script43.AddCustomFieldOrEvent(FieldVal50);
FieldVal50.Value := Extrusion37;
FieldVal52 := TSFBool.CreateEvent(Script43, 'recompute', True);
Script43.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFFloat.CreateUndefined(Script43, True, 'aspectRatio');
Script43.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFVec3f.CreateEvent(Script43, 'position_changed', False);
Script43.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFRotation.CreateEvent(Script43, 'orientation_changed', False);
Script43.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TMFVec3f.CreateEvent(Script43, 'spine_changed', False);
Script43.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TMFVec2f.CreateEvent(Script43, 'scale_changed', False);
Script43.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TMFVec3f.CreateEvent(Script43, 'point_changed', False);
Script43.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFBool.CreateUndefined(Script43, False, 'trace');
Script43.AddCustomFieldOrEvent(FieldVal59);
Script43.FieldOrEvent('visible', True).IsClauseNamesAdd('visible');
Script43.FieldOrEvent('ViewpointNode', True).IsClauseNamesAdd('ViewpointNode');
Script43.FieldOrEvent('NavigationInfoNode', True).IsClauseNamesAdd('NavigationInfoNode');
Script43.FieldOrEvent('aspectRatio', True).IsClauseNamesAdd('aspectRatio');
Script43.FieldOrEvent('trace', True).IsClauseNamesAdd('trace');
ProtoDeclare17.Node.AddChildren([Script43]);
{ ROUTE GeometryComputationScript.visibilitySwitchSelection TO VisibilitySwitch.whichChoice }
ProtoDeclare17.Node.AddRoute(FieldVal45, Switch28.whichChoice);
{ ROUTE GeometryComputationScript.position_changed TO PositionTransform.translation }
ProtoDeclare17.Node.AddRoute(FieldVal54, Transform29.translation);
{ ROUTE GeometryComputationScript.orientation_changed TO OrientationTransform.rotation }
ProtoDeclare17.Node.AddRoute(FieldVal55, Transform30.rotation);
{ ROUTE GeometryComputationScript.spine_changed TO FrustumExtrusion.set_spine }
ProtoDeclare17.Node.AddRoute(FieldVal56, Extrusion37.EventSet_spine);
{ ROUTE GeometryComputationScript.scale_changed TO FrustumExtrusion.set_scale }
ProtoDeclare17.Node.AddRoute(FieldVal57, Extrusion37.scale);
{ ROUTE GeometryComputationScript.point_changed TO FrustumCoordinate.point }
ProtoDeclare17.Node.AddRoute(FieldVal58, Coordinate33.point);
end;

procedure InitViewFrustumPrototypePart4;
begin
X3D0.AddPrototype(ProtoDeclare17);
{ Example use is in separate scene }
Anchor66 := TAnchorNode.Create;
Anchor66.Description := 'ViewFrustum Example';
Anchor66.SetUrl(['ViewFrustumExample.x3d']);
Shape67 := TShapeNode.Create;
Appearance68 := TAppearanceNode.Create;
Material69 := TMaterialNode.Create;
Material69.DiffuseColor := Vector3(0.8, 0.4, 0);
Appearance68.Material := Material69;
Shape67.Appearance := Appearance68;
Text70 := TTextNode.Create;
Text70.SetText(['ViewFrustumPrototype.x3d', 'is a Prototype declaration file.', 'For an example scene using the prototype,', 'click this text and view', 'ViewFrustumExample.x3d']);
FontStyle71 := TFontStyleNode.Create;
FontStyle71.Justify := fjMiddle;
FontStyle71.JustifyMinor := fjMiddle;
FontStyle71.Size := 0.8;
Text70.FontStyle := FontStyle71;
Shape67.Geometry := Text70;
Anchor66.FdChildren.Add(Shape67);
Group15.FdChildren.Add(Anchor66);
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
