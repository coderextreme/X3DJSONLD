unit Connectors;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateConnectors: TX3DRootNode;

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
  Group9: TGroupNode;
  ProtoDeclare10: TX3DPrototype;
  FieldDecl12: TX3DInterfaceDeclaration;
  FieldVal12: TSFFloat;
  FieldDecl13: TX3DInterfaceDeclaration;
  FieldVal13: TSFVec2f;
  FieldDecl14: TX3DInterfaceDeclaration;
  FieldVal14: TSFBool;
  IndexedFaceSet16: TIndexedFaceSetNode;
  Coordinate17: TCoordinateNode;
  Script18: TScriptNode;
  FieldVal19: TSFFloat;
  FieldVal20: TSFFloat;
  FieldVal21: TSFVec2f;
  FieldVal22: TSFNode;
  ProtoDeclare24: TX3DPrototype;
  FieldDecl26: TX3DInterfaceDeclaration;
  FieldVal26: TSFColor;
  FieldDecl27: TX3DInterfaceDeclaration;
  FieldVal27: TSFColor;
  FieldDecl28: TX3DInterfaceDeclaration;
  FieldVal28: TSFFloat;
  FieldDecl29: TX3DInterfaceDeclaration;
  FieldVal29: TSFNode;
  Transform31: TTransformNode;
  Shape32: TShapeNode;
  Appearance33: TAppearanceNode;
  Material34: TMaterialNode;
  Shape35: TShapeNode;
  Appearance36: TAppearanceNode;
  FillProperties37: TFillPropertiesNode;
  LineProperties38: TLinePropertiesNode;
  Material39: TMaterialNode;
  ProtoDeclare40: TX3DPrototype;
  FieldDecl42: TX3DInterfaceDeclaration;
  FieldVal42: TSFVec3f;
  Group44: TGroupNode;
  PlaneSensor45: TPlaneSensorNode;
  Transform46: TTransformNode;
  ProtoInstance47: TX3DPrototypeNode;
  ProtoInstance49: TX3DPrototypeNode;
  Transform52: TTransformNode;
  ProtoInstance53: TX3DPrototypeNode;
  Disk2D56: TDisk2DNode;
  Transform57: TTransformNode;
  ProtoInstance58: TX3DPrototypeNode;
  Script62: TScriptNode;
  FieldVal63: TSFVec3f;
  FieldVal64: TSFNode;
  FieldVal66: TSFNode;
  ProtoDeclare69: TX3DPrototype;
  FieldDecl71: TX3DInterfaceDeclaration;
  FieldVal71: TSFColor;
  FieldDecl72: TX3DInterfaceDeclaration;
  FieldVal72: TSFFloat;
  FieldDecl73: TX3DInterfaceDeclaration;
  FieldVal73: TSFNode;
  FieldDecl74: TX3DInterfaceDeclaration;
  FieldVal74: TSFNode;
  Shape76: TShapeNode;
  Appearance77: TAppearanceNode;
  LineProperties78: TLinePropertiesNode;
  Material79: TMaterialNode;
  LineSet80: TLineSetNode;
  Coordinate81: TCoordinateNode;
  Script82: TScriptNode;
  FieldVal83: TX3DEvent;
  FieldVal84: TSFInt32;
  FieldVal85: TSFNode;
  FieldVal86: TSFNode;
  FieldVal87: TSFNode;
  FieldVal89: TSFNode;
  NavigationInfo91: TNavigationInfoNode;
  Background92: TBackgroundNode;
  OrthoViewpoint93: TOrthoViewpointNode;
  Viewpoint94: TViewpointNode;
  Transform95: TTransformNode;
  ProtoInstance96: TX3DPrototypeNode;
  ProtoInstance98: TX3DPrototypeNode;
  ProtoInstance101: TX3DPrototypeNode;
  ProtoInstance103: TX3DPrototypeNode;
  ProtoInstance107: TX3DPrototypeNode;
  ProtoInstance109: TX3DPrototypeNode;
  ProtoInstance113: TX3DPrototypeNode;
  ProtoInstance115: TX3DPrototypeNode;
  ProtoInstance119: TX3DPrototypeNode;
  ProtoInstance121: TX3DPrototypeNode;
  ProtoInstance125: TX3DPrototypeNode;
  ProtoInstance127: TX3DPrototypeNode;
  ProtoInstance132: TX3DPrototypeNode;
  ProtoInstance136: TX3DPrototypeNode;
  ProtoInstance138: TX3DPrototypeNode;
  ProtoInstance143: TX3DPrototypeNode;
  ProtoInstance147: TX3DPrototypeNode;
  ProtoInstance149: TX3DPrototypeNode;

procedure InitConnectorsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['comment'] := 'World of Titania';
X3D0.Meta['created'] := 'Fri, 04 Sep 2015 10:19:01 GMT';
X3D0.Meta['creator'] := 'Holger Seelig';
X3D0.Meta['generator'] := 'Titania V3.0.4, https://titania.create3000.de';
X3D0.Meta['identifier'] := 'file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d';
X3D0.Meta['modified'] := 'Tue, 25 Jul 2017 09:42:17 GMT';
X3D0.Meta['title'] := 'Connectors';
Group9 := TGroupNode.Create;
ProtoDeclare10 := CreateEmptyPrototype('RoundedRectangle2D');
ProtoDeclare10.X3DName := 'RoundedRectangle2D';
FieldVal12 := TSFFloat.Create(nil, False, 'cornerRadius', 1);
FieldDecl12 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl12.FieldOrEvent := FieldVal12;
FieldVal12.ParentInterfaceDeclaration := FieldDecl12;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl12);
FieldVal13 := TSFVec2f.Create(nil, False, 'size', Vector2(2, 2));
FieldDecl13 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl13.FieldOrEvent := FieldVal13;
FieldVal13.ParentInterfaceDeclaration := FieldDecl13;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl13);
FieldVal14 := TSFBool.Create(nil, False, 'solid', True);
FieldDecl14 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl14.FieldOrEvent := FieldVal14;
FieldVal14.ParentInterfaceDeclaration := FieldDecl14;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl14);
IndexedFaceSet16 := TIndexedFaceSetNode.Create;
IndexedFaceSet16.X3DName := 'Geometry';
IndexedFaceSet16.FieldOrEvent('solid', True).IsClauseNamesAdd('solid');
Coordinate17 := TCoordinateNode.Create;
IndexedFaceSet16.Coord := Coordinate17;
ProtoDeclare10.Node.AddChildren([IndexedFaceSet16]);
Script18 := TScriptNode.Create;
Script18.X3DName := 'RoundedRectangle2D';
Script18.DirectOutput := True;
FieldVal19 := TSFFloat.Create(Script18, False, 'cornerDimension', 10);
Script18.AddCustomFieldOrEvent(FieldVal19);
end;

procedure InitConnectorsPart1;
begin
FieldVal20 := TSFFloat.CreateUndefined(Script18, False, 'cornerRadius');
Script18.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TSFVec2f.CreateUndefined(Script18, False, 'size');
Script18.AddCustomFieldOrEvent(FieldVal21);
FieldVal22 := TSFNode.CreateUndefined(Script18, False, 'geometry');
Script18.AddCustomFieldOrEvent(FieldVal22);
FieldVal22.Value := IndexedFaceSet16;
Script18.FieldOrEvent('cornerRadius', True).IsClauseNamesAdd('cornerRadius');
Script18.FieldOrEvent('size', True).IsClauseNamesAdd('size');
Script18.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  'function initialize ()' + LineEnding +
  '{' + LineEnding +
  '	var point         = new SFVec3f (cornerRadius, 0, 0);' + LineEnding +
  '	var startRotation = new SFRotation ();' + LineEnding +
  '	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);' + LineEnding +
  '	var corner        = new MFVec3f ();' + LineEnding +
  '	var coordIndex    = new MFInt32 ();' + LineEnding +
  '	var points        = new MFVec3f ();' + LineEnding +
  '' + LineEnding +
  '	for (var i = 0; i < cornerDimension * 4; ++ i)' + LineEnding +
  '		coordIndex [coordIndex .length] = i;' + LineEnding +
  '' + LineEnding +
  '	geometry .coordIndex = coordIndex;' + LineEnding +
  '' + LineEnding +
  '	for (var i = 0; i < cornerDimension; ++i)' + LineEnding +
  '		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);' + LineEnding +
  '' + LineEnding +
  '	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);' + LineEnding +
  '' + LineEnding +
  '	for (var i = 0; i < cornerDimension; ++ i)' + LineEnding +
  '		points [points .length] = corner [i] .add (translation);' + LineEnding +
  '' + LineEnding +
  '	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);' + LineEnding +
  '	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);' + LineEnding +
  '' + LineEnding +
  '	for (var i = 0; i < cornerDimension; ++ i)' + LineEnding +
  '		points [points .length] = rotation .multVec (corner [i]) .add (translation);' + LineEnding +
  '' + LineEnding +
  '	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);' + LineEnding +
  '	var rotation    = new SFRotation (0, 0, 1, Math .PI);' + LineEnding +
  '' + LineEnding +
  '	for (var i = 0; i < cornerDimension; ++ i)' + LineEnding +
  '		points [points .length] = rotation .multVec (corner [i]) .add (translation);' + LineEnding +
  '' + LineEnding +
  '	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);' + LineEnding +
  '	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);' + LineEnding +
  '' + LineEnding +
  '	for (var i = 0; i < cornerDimension; ++ i)' + LineEnding +
  '		points [points .length] = rotation .multVec (corner [i]) .add (translation);' + LineEnding +
  '' + LineEnding +
  '	geometry .coord .point = points;' + LineEnding +
  '}');
ProtoDeclare10.Node.AddChildren([Script18]);
X3D0.AddPrototype(ProtoDeclare10);
ProtoDeclare24 := CreateEmptyPrototype('Widget');
ProtoDeclare24.X3DName := 'Widget';
FieldVal26 := TSFColor.Create(nil, True, 'fillColor', Vector3(0.1, 0.1, 0.1));
FieldDecl26 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl26.FieldOrEvent := FieldVal26;
FieldVal26.ParentInterfaceDeclaration := FieldDecl26;
ProtoDeclare24.InterfaceDeclarations.Add(FieldDecl26);
FieldVal27 := TSFColor.Create(nil, True, 'lineColor', Vector3(0.4, 0.4, 0.4));
FieldDecl27 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl27.FieldOrEvent := FieldVal27;
FieldVal27.ParentInterfaceDeclaration := FieldDecl27;
ProtoDeclare24.InterfaceDeclarations.Add(FieldDecl27);
FieldVal28 := TSFFloat.Create(nil, True, 'linewidthScaleFactor', 1);
FieldDecl28 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl28.FieldOrEvent := FieldVal28;
FieldVal28.ParentInterfaceDeclaration := FieldDecl28;
ProtoDeclare24.InterfaceDeclarations.Add(FieldDecl28);
FieldVal29 := TSFNode.CreateUndefined(nil, True, 'geometry');
FieldDecl29 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl29.FieldOrEvent := FieldVal29;
FieldVal29.ParentInterfaceDeclaration := FieldDecl29;
ProtoDeclare24.InterfaceDeclarations.Add(FieldDecl29);
Transform31 := TTransformNode.Create;
Transform31.X3DName := 'Shape';
Shape32 := TShapeNode.Create;
Shape32.FieldOrEvent('geometry', True).IsClauseNamesAdd('geometry');
Appearance33 := TAppearanceNode.Create;
Material34 := TMaterialNode.Create;
end;

procedure InitConnectorsPart2;
begin
Material34.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('fillColor');
Appearance33.Material := Material34;
Shape32.Appearance := Appearance33;
Transform31.FdChildren.Add(Shape32);
Shape35 := TShapeNode.Create;
Shape35.FieldOrEvent('geometry', True).IsClauseNamesAdd('geometry');
Appearance36 := TAppearanceNode.Create;
FillProperties37 := TFillPropertiesNode.Create;
FillProperties37.Filled := False;
FillProperties37.Hatched := False;
Appearance36.FillProperties := FillProperties37;
LineProperties38 := TLinePropertiesNode.Create;
LineProperties38.FieldOrEvent('linewidthScaleFactor', True).IsClauseNamesAdd('linewidthScaleFactor');
Appearance36.LineProperties := LineProperties38;
Material39 := TMaterialNode.Create;
Material39.DiffuseColor := Vector3(0, 0, 0);
Material39.FieldOrEvent('emissiveColor', True).IsClauseNamesAdd('lineColor');
Appearance36.Material := Material39;
Shape35.Appearance := Appearance36;
Transform31.FdChildren.Add(Shape35);
ProtoDeclare24.Node.AddChildren([Transform31]);
X3D0.AddPrototype(ProtoDeclare24);
ProtoDeclare40 := CreateEmptyPrototype('Node');
ProtoDeclare40.X3DName := 'Node';
FieldVal42 := TSFVec3f.CreateUndefined(nil, True, 'translation');
FieldDecl42 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl42.FieldOrEvent := FieldVal42;
FieldVal42.ParentInterfaceDeclaration := FieldDecl42;
ProtoDeclare40.InterfaceDeclarations.Add(FieldDecl42);
Group44 := TGroupNode.Create;
PlaneSensor45 := TPlaneSensorNode.Create;
PlaneSensor45.X3DName := 'PlaneSensor';
Group44.FdChildren.Add(PlaneSensor45);
Transform46 := TTransformNode.Create;
Transform46.X3DName := 'Node';
Transform46.FieldOrEvent('translation', True).IsClauseNamesAdd('translation');
ProtoInstance47 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare24);
ProtoInstance49 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script18);
(ProtoInstance49.Field('cornerRadius') as TSFFloat).Value := 0.12;
(ProtoInstance49.Field('size') as TSFVec2f).Value := Vector2(2, 1);
end;

procedure InitConnectorsPart3;
begin
(ProtoInstance47.Field('geometry') as TSFNode).Value := ProtoInstance49.Instantiate;
Transform46.FdChildren.Add(ProtoInstance47.Instantiate);
Transform52 := TTransformNode.Create;
Transform52.X3DName := 'Input';
Transform52.Translation := Vector3(-1, 0, 0);
ProtoInstance53 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare24);
(ProtoInstance53.Field('lineColor') as TSFColor).Value := Vector3(0.72, 0.14, 0.23);
Disk2D56 := TDisk2DNode.Create;
Disk2D56.X3DName := 'Connector';
Disk2D56.OuterRadius := 0.2;
(ProtoInstance53.Field('geometry') as TSFNode).Value := Disk2D56;
Transform52.FdChildren.Add(ProtoInstance53.Instantiate);
Transform46.FdChildren.Add(Transform52);
Transform57 := TTransformNode.Create;
Transform57.X3DName := 'Output';
Transform57.Translation := Vector3(1, 0, 0);
ProtoInstance58 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare24);
(ProtoInstance58.Field('lineColor') as TSFColor).Value := Vector3(0.44, 0.5, 0.72);
(ProtoInstance58.Field('geometry') as TSFNode).Value := Disk2D56;
Transform57.FdChildren.Add(ProtoInstance58.Instantiate);
Transform46.FdChildren.Add(Transform57);
Group44.FdChildren.Add(Transform46);
ProtoDeclare40.Node.AddChildren([Group44]);
Script62 := TScriptNode.Create;
Script62.DirectOutput := True;
FieldVal63 := TSFVec3f.CreateUndefined(Script62, True, 'translation');
Script62.AddCustomFieldOrEvent(FieldVal63);
FieldVal64 := TSFNode.CreateUndefined(Script62, False, 'sensor');
Script62.AddCustomFieldOrEvent(FieldVal64);
FieldVal64.Value := PlaneSensor45;
FieldVal66 := TSFNode.CreateUndefined(Script62, False, 'transform');
Script62.AddCustomFieldOrEvent(FieldVal66);
FieldVal66.Value := Script62;
Script62.FieldOrEvent('translation', True).IsClauseNamesAdd('translation');
Script62.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize ()' + LineEnding +
  '{' + LineEnding +
  '	sensor .offset = translation;' + LineEnding +
  '}');
ProtoDeclare40.Node.AddChildren([Script62]);
{ ROUTE PlaneSensor.translation_changed TO Node.set_translation }
ProtoBody43.AddRoute(PlaneSensor45.EventTranslation_changed, Script62.FdTranslation.EventIn);
X3D0.AddPrototype(ProtoDeclare40);
ProtoDeclare69 := CreateEmptyPrototype('Route');
end;

procedure InitConnectorsPart4;
begin
ProtoDeclare69.X3DName := 'Route';
FieldVal71 := TSFColor.Create(nil, True, 'lineColor', Vector3(0.43, 0.43, 0.98));
FieldDecl71 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl71.FieldOrEvent := FieldVal71;
FieldVal71.ParentInterfaceDeclaration := FieldDecl71;
ProtoDeclare69.InterfaceDeclarations.Add(FieldDecl71);
FieldVal72 := TSFFloat.Create(nil, True, 'linewidthScaleFactor', 2);
FieldDecl72 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl72.FieldOrEvent := FieldVal72;
FieldVal72.ParentInterfaceDeclaration := FieldDecl72;
ProtoDeclare69.InterfaceDeclarations.Add(FieldDecl72);
FieldVal73 := TSFNode.CreateUndefined(nil, False, 'output');
FieldDecl73 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl73.FieldOrEvent := FieldVal73;
FieldVal73.ParentInterfaceDeclaration := FieldDecl73;
ProtoDeclare69.InterfaceDeclarations.Add(FieldDecl73);
FieldVal74 := TSFNode.CreateUndefined(nil, False, 'input');
FieldDecl74 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl74.FieldOrEvent := FieldVal74;
FieldVal74.ParentInterfaceDeclaration := FieldDecl74;
ProtoDeclare69.InterfaceDeclarations.Add(FieldDecl74);
Shape76 := TShapeNode.Create;
Appearance77 := TAppearanceNode.Create;
LineProperties78 := TLinePropertiesNode.Create;
LineProperties78.FieldOrEvent('linewidthScaleFactor', True).IsClauseNamesAdd('linewidthScaleFactor');
Appearance77.LineProperties := LineProperties78;
Material79 := TMaterialNode.Create;
Material79.DiffuseColor := Vector3(0, 0, 0);
Material79.FieldOrEvent('emissiveColor', True).IsClauseNamesAdd('lineColor');
Appearance77.Material := Material79;
Shape76.Appearance := Appearance77;
LineSet80 := TLineSetNode.Create;
LineSet80.X3DName := 'Geometry_1';
LineSet80.SetVertexCount([2]);
Coordinate81 := TCoordinateNode.Create;
Coordinate81.SetPoint([Vector3(-1, 0, 0), Vector3(1, 0, 0)]);
LineSet80.Coord := Coordinate81;
Shape76.Geometry := LineSet80;
ProtoDeclare69.Node.AddChildren([Shape76]);
Script82 := TScriptNode.Create;
end;

procedure InitConnectorsPart5;
begin
Script82.X3DName := 'Route';
Script82.DirectOutput := True;
FieldVal83 := TSFVec3f.CreateEvent(Script82, 'set_translation', True);
Script82.AddCustomFieldOrEvent(FieldVal83);
FieldVal84 := TSFInt32.Create(Script82, False, 'routeDimension', 21);
Script82.AddCustomFieldOrEvent(FieldVal84);
FieldVal85 := TSFNode.CreateUndefined(Script82, False, 'output');
Script82.AddCustomFieldOrEvent(FieldVal85);
FieldVal86 := TSFNode.CreateUndefined(Script82, False, 'input');
Script82.AddCustomFieldOrEvent(FieldVal86);
FieldVal87 := TSFNode.CreateUndefined(Script82, False, 'geometry');
Script82.AddCustomFieldOrEvent(FieldVal87);
FieldVal87.Value := LineSet80;
FieldVal89 := TSFNode.CreateUndefined(Script82, False, 'self');
Script82.AddCustomFieldOrEvent(FieldVal89);
FieldVal89.Value := Script82;
Script82.FieldOrEvent('output', True).IsClauseNamesAdd('output');
Script82.FieldOrEvent('input', True).IsClauseNamesAdd('input');
Script82.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize ()' + LineEnding +
  '{' + LineEnding +
  '	Browser .addRoute (output, ''translation_changed'', self, ''set_translation'');\n	Browser .addRoute (input,  ''translation_changed'', self, ''set_translation'');' + LineEnding +
  '' + LineEnding +
  '	set_translation ();' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_translation ()' + LineEnding +
  '{' + LineEnding +
  '	geometry .vertexCount [0] = routeDimension;' + LineEnding +
  '' + LineEnding +
  '	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));' + LineEnding +
  '	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));' + LineEnding +
  '' + LineEnding +
  '	var w = inPoint .x - outPoint .x;' + LineEnding +
  '	var h = outPoint .y - inPoint .y;' + LineEnding +
  '' + LineEnding +
  '	for (var i = 0; i < routeDimension; ++ i)' + LineEnding +
  '	{' + LineEnding +
  '		var t = i / (routeDimension - 1);' + LineEnding +
  '		var y = h / 2 * (Math .cos (t * Math .PI) - 1);' + LineEnding +
  '' + LineEnding +
  '		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));' + LineEnding +
  '	}' + LineEnding +
  '}');
ProtoDeclare69.Node.AddChildren([Script82]);
X3D0.AddPrototype(ProtoDeclare69);
NavigationInfo91 := TNavigationInfoNode.Create;
NavigationInfo91.SetType(['FLY', 'ANY']);
Group9.FdChildren.Add(NavigationInfo91);
Background92 := TBackgroundNode.Create;
Background92.SetSkyColor([Vector3(0.2, 0.2, 0.2)]);
Group9.FdChildren.Add(Background92);
OrthoViewpoint93 := TOrthoViewpointNode.Create;
OrthoViewpoint93.Description := 'OthoViewpoint';
OrthoViewpoint93.Position := Vector3(-3.13496, -4.19776, 10);
OrthoViewpoint93.CenterOfRotation := Vector3(-3.13496, -4.19776, 0);
OrthoViewpoint93.SetFieldOfView([0, 0, 10, 10]);
Group9.FdChildren.Add(OrthoViewpoint93);
Viewpoint94 := TViewpointNode.Create;
Viewpoint94.Description := 'Viewpoint';
Group9.FdChildren.Add(Viewpoint94);
Transform95 := TTransformNode.Create;
Transform95.X3DName := 'Connectors';
ProtoInstance96 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
ProtoInstance98 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script62);
end;

procedure InitConnectorsPart6;
begin
ProtoInstance98.X3DName := 'N1';
(ProtoInstance98.Field('translation') as TSFVec3f).Value := Vector3(-3.98323, 2.88948, 0);
(ProtoInstance96.Field('output') as TSFNode).Value := ProtoInstance98.Instantiate;
ProtoInstance101 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script62);
ProtoInstance101.X3DName := 'N2';
(ProtoInstance101.Field('translation') as TSFVec3f).Value := Vector3(-0.0890862, 2.96049, 0);
(ProtoInstance96.Field('input') as TSFNode).Value := ProtoInstance101.Instantiate;
Transform95.FdChildren.Add(ProtoInstance96.Instantiate);
ProtoInstance103 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
(ProtoInstance103.Field('output') as TSFNode).Value := ProtoInstance98;
ProtoInstance107 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script62);
ProtoInstance107.X3DName := 'N3';
(ProtoInstance107.Field('translation') as TSFVec3f).Value := Vector3(-0.104169, 1.16371, 0);
(ProtoInstance103.Field('input') as TSFNode).Value := ProtoInstance107.Instantiate;
Transform95.FdChildren.Add(ProtoInstance103.Instantiate);
ProtoInstance109 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
(ProtoInstance109.Field('output') as TSFNode).Value := ProtoInstance98;
ProtoInstance113 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script62);
ProtoInstance113.X3DName := 'N4';
(ProtoInstance113.Field('translation') as TSFVec3f).Value := Vector3(-0.0998688, -0.40172, 0);
(ProtoInstance109.Field('input') as TSFNode).Value := ProtoInstance113.Instantiate;
Transform95.FdChildren.Add(ProtoInstance109.Instantiate);
ProtoInstance115 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
(ProtoInstance115.Field('output') as TSFNode).Value := ProtoInstance98;
ProtoInstance119 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script62);
ProtoInstance119.X3DName := 'N5';
(ProtoInstance119.Field('translation') as TSFVec3f).Value := Vector3(-0.0998687, -2.14742, 0);
(ProtoInstance115.Field('input') as TSFNode).Value := ProtoInstance119.Instantiate;
Transform95.FdChildren.Add(ProtoInstance115.Instantiate);
ProtoInstance121 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
(ProtoInstance121.Field('output') as TSFNode).Value := ProtoInstance101;
ProtoInstance125 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script62);
ProtoInstance125.X3DName := 'N6';
(ProtoInstance125.Field('translation') as TSFVec3f).Value := Vector3(3.55694, 2.4116, 0);
(ProtoInstance121.Field('input') as TSFNode).Value := ProtoInstance125.Instantiate;
Transform95.FdChildren.Add(ProtoInstance121.Instantiate);
ProtoInstance127 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
(ProtoInstance127.Field('output') as TSFNode).Value := ProtoInstance107;
(ProtoInstance127.Field('input') as TSFNode).Value := ProtoInstance125;
Transform95.FdChildren.Add(ProtoInstance127.Instantiate);
end;

procedure InitConnectorsPart7;
begin
ProtoInstance132 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
(ProtoInstance132.Field('output') as TSFNode).Value := ProtoInstance113;
ProtoInstance136 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script62);
ProtoInstance136.X3DName := 'N7';
(ProtoInstance136.Field('translation') as TSFVec3f).Value := Vector3(3.75106, -0.0794556, 0);
(ProtoInstance132.Field('input') as TSFNode).Value := ProtoInstance136.Instantiate;
Transform95.FdChildren.Add(ProtoInstance132.Instantiate);
ProtoInstance138 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
(ProtoInstance138.Field('output') as TSFNode).Value := ProtoInstance119;
(ProtoInstance138.Field('input') as TSFNode).Value := ProtoInstance136;
Transform95.FdChildren.Add(ProtoInstance138.Instantiate);
ProtoInstance143 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
(ProtoInstance143.Field('output') as TSFNode).Value := ProtoInstance125;
ProtoInstance147 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script62);
ProtoInstance147.X3DName := 'N8';
(ProtoInstance147.Field('translation') as TSFVec3f).Value := Vector3(7.68077, 1.21228, 0);
(ProtoInstance143.Field('input') as TSFNode).Value := ProtoInstance147.Instantiate;
Transform95.FdChildren.Add(ProtoInstance143.Instantiate);
ProtoInstance149 := TX3DPrototypeNode.CreatePrototypeNode('', '', Script82);
(ProtoInstance149.Field('output') as TSFNode).Value := ProtoInstance136;
(ProtoInstance149.Field('input') as TSFNode).Value := ProtoInstance147;
Transform95.FdChildren.Add(ProtoInstance149.Instantiate);
Transform95.FdChildren.Add(ProtoInstance98);
Transform95.FdChildren.Add(ProtoInstance101);
Transform95.FdChildren.Add(ProtoInstance107);
Transform95.FdChildren.Add(ProtoInstance113);
Transform95.FdChildren.Add(ProtoInstance119);
Transform95.FdChildren.Add(ProtoInstance125);
Transform95.FdChildren.Add(ProtoInstance136);
Transform95.FdChildren.Add(ProtoInstance147);
Group9.FdChildren.Add(Transform95);
X3D0.AddChildren([Group9]);
end;

function CreateConnectors: TX3DRootNode;
begin
  InitConnectorsPart0;
  InitConnectorsPart1;
  InitConnectorsPart2;
  InitConnectorsPart3;
  InitConnectorsPart4;
  InitConnectorsPart5;
  InitConnectorsPart6;
  InitConnectorsPart7;
  Result := X3D0;
end;

begin
end.
