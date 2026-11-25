unit force_tidy;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createforce_tidy: TX3DRootNode;

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
  Group11: TGroupNode;
  ProtoDeclare12: TX3DPrototype;
  FieldDecl14: TX3DInterfaceDeclaration;
  FieldVal14: TSFVec3f;
  Group16: TGroupNode;
  Transform17: TTransformNode;
  Shape18: TShapeNode;
  Sphere19: TSphereNode;
  Appearance20: TAppearanceNode;
  Material21: TMaterialNode;
  Transform22: TTransformNode;
  Shape23: TShapeNode;
  Appearance24: TAppearanceNode;
  Material25: TMaterialNode;
  Text26: TTextNode;
  FontStyle27: TFontStyleNode;
  PositionInterpolator28: TPositionInterpolatorNode;
  Script29: TScriptNode;
  FieldVal30: TSFVec3f;
  FieldVal31: TSFVec3f;
  FieldVal32: TX3DEvent;
  FieldVal33: TX3DEvent;
  TimeSensor34: TTimeSensorNode;
  ProtoDeclare39: TX3DPrototype;
  FieldDecl41: TX3DInterfaceDeclaration;
  FieldVal41: TSFVec3f;
  FieldDecl42: TX3DInterfaceDeclaration;
  FieldVal42: TSFVec3f;
  Group44: TGroupNode;
  Shape45: TShapeNode;
  Appearance46: TAppearanceNode;
  Material47: TMaterialNode;
  Extrusion48: TExtrusionNode;
  Script49: TScriptNode;
  FieldVal50: TMFVec3f;
  FieldVal51: TSFVec3f;
  FieldVal52: TSFVec3f;
  Transform54: TTransformNode;
  PlaneSensor55: TPlaneSensorNode;
  ProtoInstance56: TX3DPrototypeNode;
  ProtoInstance58: TX3DPrototypeNode;
  ProtoInstance60: TX3DPrototypeNode;
  ProtoInstance62: TX3DPrototypeNode;
  ProtoInstance64: TX3DPrototypeNode;
  ProtoInstance65: TX3DPrototypeNode;
  ProtoInstance66: TX3DPrototypeNode;
  Script67: TScriptNode;
  FieldVal68: TSFInt32;
  FieldVal69: TX3DEvent;
  FieldVal70: TX3DEvent;

procedure Initforce_tidyPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'force.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['generator'] := 'x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy';
Group11 := TGroupNode.Create;
ProtoDeclare12 := CreateEmptyPrototype('node');
ProtoDeclare12.X3DName := 'node';
FieldVal14 := TSFVec3f.CreateUndefined(nil, True, 'position');
FieldDecl14 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl14.FieldOrEvent := FieldVal14;
FieldVal14.ParentInterfaceDeclaration := FieldDecl14;
ProtoDeclare12.InterfaceDeclarations.Add(FieldDecl14);
Group16 := TGroupNode.Create;
Transform17 := TTransformNode.Create;
Transform17.X3DName := 'transform';
Transform17.FieldOrEvent('translation', True).IsClauseNamesAdd('position');
Shape18 := TShapeNode.Create;
Sphere19 := TSphereNode.Create;
Shape18.Geometry := Sphere19;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21.DiffuseColor := Vector3(1, 0, 0);
Appearance20.Material := Material21;
Shape18.Appearance := Appearance20;
Transform17.FdChildren.Add(Shape18);
Transform22 := TTransformNode.Create;
Transform22.Translation := Vector3(1, 0, 0);
Shape23 := TShapeNode.Create;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0, 0, 1);
end;

procedure Initforce_tidyPart1;
begin
Appearance24.Material := Material25;
Shape23.Appearance := Appearance24;
Text26 := TTextNode.Create;
Text26.SetText(['Node']);
FontStyle27 := TFontStyleNode.Create;
FontStyle27.Size := 5;
FontStyle27.Justify := fjMiddle;
FontStyle27.JustifyMinor := fjMiddle;
Text26.FontStyle := FontStyle27;
Shape23.Geometry := Text26;
Transform22.FdChildren.Add(Shape23);
Transform17.FdChildren.Add(Transform22);
Group16.FdChildren.Add(Transform17);
PositionInterpolator28 := TPositionInterpolatorNode.Create;
PositionInterpolator28.X3DName := 'NodePosition';
PositionInterpolator28.SetKey([0, 1]);
PositionInterpolator28.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Group16.FdChildren.Add(PositionInterpolator28);
Script29 := TScriptNode.Create;
Script29.X3DName := 'MoveBall';
FieldVal30 := TSFVec3f.Create(Script29, True, 'translation', Vector3(50, 50, 0));
Script29.AddCustomFieldOrEvent(FieldVal30);
FieldVal31 := TSFVec3f.CreateUndefined(Script29, True, 'old');
Script29.AddCustomFieldOrEvent(FieldVal31);
FieldVal32 := TSFTime.CreateEvent(Script29, 'set_cycle', True);
Script29.AddCustomFieldOrEvent(FieldVal32);
FieldVal33 := TMFVec3f.CreateEvent(Script29, 'keyValue', False);
Script29.AddCustomFieldOrEvent(FieldVal33);
Script29.SetSourceCode('ecmascript:' + LineEnding +
  '		function set_cycle(value) {' + LineEnding +
  '			old = translation;' + LineEnding +
  '			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);' + LineEnding +
  '			keyValue = new MFVec3f(old, translation);' + LineEnding +
  '		}');
Group16.FdChildren.Add(Script29);
TimeSensor34 := TTimeSensorNode.Create;
TimeSensor34.X3DName := 'nodeClock';
TimeSensor34.CycleInterval := 3;
TimeSensor34.Loop := True;
Group16.FdChildren.Add(TimeSensor34);
{ ROUTE nodeClock.cycleTime TO MoveBall.set_cycle }
Group16.AddRoute(TimeSensor34.EventCycleTime, FieldVal32);
{ ROUTE nodeClock.fraction_changed TO NodePosition.set_fraction }
Group16.AddRoute(TimeSensor34.EventFraction_changed, PositionInterpolator28.EventSet_fraction);
{ ROUTE MoveBall.keyValue TO NodePosition.set_keyValue }
end;

procedure Initforce_tidyPart2;
begin
Group16.AddRoute(FieldVal33, PositionInterpolator28.EventSet_keyValue);
{ ROUTE NodePosition.value_changed TO transform.set_translation }
Group16.AddRoute(PositionInterpolator28.EventValue_changed, Transform17.FdTranslation.EventIn);
ProtoDeclare12.Node.AddChildren([Group16]);
X3D0.AddPrototype(ProtoDeclare12);
ProtoDeclare39 := CreateEmptyPrototype('cyl');
ProtoDeclare39.X3DName := 'cyl';
FieldVal41 := TSFVec3f.CreateUndefined(nil, True, 'set_positionA');
FieldDecl41 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl41.FieldOrEvent := FieldVal41;
FieldVal41.ParentInterfaceDeclaration := FieldDecl41;
ProtoDeclare39.InterfaceDeclarations.Add(FieldDecl41);
FieldVal42 := TSFVec3f.CreateUndefined(nil, True, 'set_positionB');
FieldDecl42 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl42.FieldOrEvent := FieldVal42;
FieldVal42.ParentInterfaceDeclaration := FieldDecl42;
ProtoDeclare39.InterfaceDeclarations.Add(FieldDecl42);
Group44 := TGroupNode.Create;
Shape45 := TShapeNode.Create;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0, 1, 0);
Appearance46.Material := Material47;
Shape45.Appearance := Appearance46;
Extrusion48 := TExtrusionNode.Create;
Extrusion48.X3DName := 'extrusion';
Extrusion48.CreaseAngle := 0.785;
Extrusion48.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Extrusion48.SetSpine([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]);
Shape45.Geometry := Extrusion48;
Group44.FdChildren.Add(Shape45);
Script49 := TScriptNode.Create;
Script49.X3DName := 'MoveCylinder';
FieldVal50 := TMFVec3f.Create(Script49, True, 'spine', ([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]));
Script49.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFVec3f.CreateUndefined(Script49, True, 'endA');
Script49.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFVec3f.CreateUndefined(Script49, True, 'endB');
Script49.AddCustomFieldOrEvent(FieldVal52);
Script49.FieldOrEvent('endA', True).IsClauseNamesAdd('set_positionA');
end;

procedure Initforce_tidyPart3;
begin
Script49.FieldOrEvent('endB', True).IsClauseNamesAdd('set_positionB');
Script49.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  '                function set_endA(value) {' + LineEnding +
  '		    spine = new MFVec3f(value, spine[1]);' + LineEnding +
  '                }' + LineEnding +
  '' + LineEnding +
  '                function set_endB(value) {' + LineEnding +
  '		    spine = new MFVec3f(spine[0], value);' + LineEnding +
  '                }');
Group44.FdChildren.Add(Script49);
{ ROUTE MoveCylinder.spine_changed TO extrusion.set_spine }
Group44.AddRoute(Script49.EventSpine_changed, Extrusion48.EventSet_spine);
ProtoDeclare39.Node.AddChildren([Group44]);
X3D0.AddPrototype(ProtoDeclare39);
Transform54 := TTransformNode.Create;
Transform54.X3DName := 'HoldsContent';
Transform54.Scale := Vector3(0.1, 0.1, 0.1);
PlaneSensor55 := TPlaneSensorNode.Create;
PlaneSensor55.X3DName := 'clickGenerator';
PlaneSensor55.Description := 'click on background to add nodes, click on nodes to add links';
PlaneSensor55.MinPosition := Vector2(-50, -50);
PlaneSensor55.MaxPosition := Vector2(50, 50);
Transform54.FdChildren.Add(PlaneSensor55);
ProtoInstance56 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance56.X3DName := 'nodeA';
(ProtoInstance56.Field('position') as TSFVec3f).Value := Vector3(0, 1.388333, 0);
Transform54.FdChildren.Add(ProtoInstance56.Instantiate);
ProtoInstance58 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance58.X3DName := 'nodeB';
(ProtoInstance58.Field('position') as TSFVec3f).Value := Vector3(0, 1.388333, 0);
Transform54.FdChildren.Add(ProtoInstance58.Instantiate);
ProtoInstance60 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance60.X3DName := 'nodeC';
(ProtoInstance60.Field('position') as TSFVec3f).Value := Vector3(0, 1.388333, 0);
Transform54.FdChildren.Add(ProtoInstance60.Instantiate);
ProtoInstance62 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance62.X3DName := 'nodeD';
(ProtoInstance62.Field('position') as TSFVec3f).Value := Vector3(0, 1.388333, 0);
Transform54.FdChildren.Add(ProtoInstance62.Instantiate);
ProtoInstance64 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare39);
ProtoInstance64.X3DName := 'linkA';
Transform54.FdChildren.Add(ProtoInstance64.Instantiate);
ProtoInstance65 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare39);
ProtoInstance65.X3DName := 'linkB';
Transform54.FdChildren.Add(ProtoInstance65.Instantiate);
ProtoInstance66 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare39);
ProtoInstance66.X3DName := 'linkC';
end;

procedure Initforce_tidyPart4;
begin
Transform54.FdChildren.Add(ProtoInstance66.Instantiate);
Group11.FdChildren.Add(Transform54);
Script67 := TScriptNode.Create;
Script67.X3DName := 'clickHandler';
FieldVal68 := TSFInt32.CreateUndefined(Script67, True, 'counter');
Script67.AddCustomFieldOrEvent(FieldVal68);
FieldVal69 := TSFNode.CreateEvent(Script67, 'node_changed', False);
Script67.AddCustomFieldOrEvent(FieldVal69);
FieldVal70 := TSFBool.CreateEvent(Script67, 'add_node', True);
Script67.AddCustomFieldOrEvent(FieldVal70);
Script67.SetSourceCode('ecmascript:' + LineEnding +
  '	function add_node(value) {' + LineEnding +
  '                // Browser.print(''hey '', counter);\n                counter = counter++;\n		Browser.appendTo(Browser.getDocument().querySelector("field [name=ModifiableNode]"),\n			{ "ProtoInstance":\n				{ "@name":"node",\n				  "@DEF":"node''+counter+''",' + LineEnding +
  '				  "fieldValue": [' + LineEnding +
  '					{' + LineEnding +
  '						 "@name":"position",' + LineEnding +
  '						 "@value":[0.0,0.0,0.0]' + LineEnding +
  '					}' + LineEnding +
  '				  ]' + LineEnding +
  '				}' + LineEnding +
  '			});' + LineEnding +
  '' + LineEnding +
  '        }');
Group11.FdChildren.Add(Script67);
{ ROUTE clickGenerator.isActive TO clickHandler.add_node }
Group11.AddRoute(PlaneSensor55.EventIsActive, FieldVal70);
{ ROUTE nodeA.position_changed TO linkA.set_positionA }
Group11.AddRoute(ProtoInstance56.EventPosition_changed, ProtoInstance64.EventSet_positionA);
{ ROUTE nodeB.position_changed TO linkA.set_positionB }
Group11.AddRoute(ProtoInstance58.EventPosition_changed, ProtoInstance64.EventSet_positionB);
{ ROUTE nodeA.position_changed TO linkB.set_positionA }
Group11.AddRoute(ProtoInstance56.EventPosition_changed, ProtoInstance65.EventSet_positionA);
{ ROUTE nodeC.position_changed TO linkB.set_positionB }
Group11.AddRoute(ProtoInstance60.EventPosition_changed, ProtoInstance65.EventSet_positionB);
{ ROUTE nodeA.position_changed TO linkC.set_positionA }
Group11.AddRoute(ProtoInstance56.EventPosition_changed, ProtoInstance66.EventSet_positionA);
{ ROUTE nodeD.position_changed TO linkC.set_positionB }
Group11.AddRoute(ProtoInstance62.EventPosition_changed, ProtoInstance66.EventSet_positionB);
X3D0.AddChildren([Group11]);
end;

function Createforce_tidy: TX3DRootNode;
begin
  Initforce_tidyPart0;
  Initforce_tidyPart1;
  Initforce_tidyPart2;
  Initforce_tidyPart3;
  Initforce_tidyPart4;
  Result := X3D0;
end;

begin
end.
