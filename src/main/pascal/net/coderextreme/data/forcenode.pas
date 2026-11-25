unit forcenode;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createforcenode: TX3DRootNode;

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
  FieldVal12: TSFVec3f;
  Group14: TGroupNode;
  Transform15: TTransformNode;
  Shape16: TShapeNode;
  Sphere17: TSphereNode;
  Appearance18: TAppearanceNode;
  Material19: TMaterialNode;
  Transform20: TTransformNode;
  Shape21: TShapeNode;
  Text22: TTextNode;
  FontStyle23: TFontStyleNode;
  Appearance24: TAppearanceNode;
  Material25: TMaterialNode;
  PositionInterpolator26: TPositionInterpolatorNode;
  Script27: TScriptNode;
  FieldVal28: TSFVec3f;
  FieldVal29: TSFVec3f;
  FieldVal30: TX3DEvent;
  FieldVal31: TX3DEvent;
  TimeSensor32: TTimeSensorNode;
  ProtoDeclare37: TX3DPrototype;
  FieldDecl39: TX3DInterfaceDeclaration;
  FieldVal39: TSFVec3f;
  FieldDecl40: TX3DInterfaceDeclaration;
  FieldVal40: TSFVec3f;
  Group42: TGroupNode;
  Shape43: TShapeNode;
  Extrusion44: TExtrusionNode;
  Appearance45: TAppearanceNode;
  Material46: TMaterialNode;
  Script47: TScriptNode;
  FieldVal48: TMFVec3f;
  FieldVal49: TSFVec3f;
  FieldVal50: TSFVec3f;
  Transform52: TTransformNode;
  PlaneSensor53: TPlaneSensorNode;
  ProtoInstance54: TX3DPrototypeNode;
  ProtoInstance56: TX3DPrototypeNode;
  ProtoInstance58: TX3DPrototypeNode;
  ProtoInstance60: TX3DPrototypeNode;
  ProtoInstance62: TX3DPrototypeNode;
  ProtoInstance63: TX3DPrototypeNode;
  ProtoInstance64: TX3DPrototypeNode;
  Script65: TScriptNode;
  FieldVal66: TSFInt32;
  FieldVal67: TX3DEvent;
  FieldVal68: TX3DEvent;

procedure InitforcenodePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'forcenode.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group9 := TGroupNode.Create;
ProtoDeclare10 := CreateEmptyPrototype('node');
ProtoDeclare10.X3DName := 'node';
FieldVal12 := TSFVec3f.Create(nil, True, 'position', Vector3(0, 0, 0));
FieldDecl12 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl12.FieldOrEvent := FieldVal12;
FieldVal12.ParentInterfaceDeclaration := FieldDecl12;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl12);
Group14 := TGroupNode.Create;
Transform15 := TTransformNode.Create;
Transform15.X3DName := 'transform';
Transform15.FieldOrEvent('translation', True).IsClauseNamesAdd('position');
Shape16 := TShapeNode.Create;
Sphere17 := TSphereNode.Create;
Shape16.Geometry := Sphere17;
Appearance18 := TAppearanceNode.Create;
Material19 := TMaterialNode.Create;
Material19.DiffuseColor := Vector3(1, 0, 0);
Appearance18.Material := Material19;
Shape16.Appearance := Appearance18;
Transform15.FdChildren.Add(Shape16);
Transform20 := TTransformNode.Create;
Transform20.Translation := Vector3(1, 0, 1);
Shape21 := TShapeNode.Create;
Text22 := TTextNode.Create;
Text22.SetText(['Node']);
FontStyle23 := TFontStyleNode.Create;
FontStyle23.Justify := fjMiddle;
FontStyle23.JustifyMinor := fjMiddle;
end;

procedure InitforcenodePart1;
begin
FontStyle23.Size := 5;
Text22.FontStyle := FontStyle23;
Shape21.Geometry := Text22;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0, 0, 1);
Appearance24.Material := Material25;
Shape21.Appearance := Appearance24;
Transform20.FdChildren.Add(Shape21);
Transform15.FdChildren.Add(Transform20);
Group14.FdChildren.Add(Transform15);
PositionInterpolator26 := TPositionInterpolatorNode.Create;
PositionInterpolator26.X3DName := 'NodePosition';
PositionInterpolator26.SetKey([0, 1]);
PositionInterpolator26.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Group14.FdChildren.Add(PositionInterpolator26);
Script27 := TScriptNode.Create;
Script27.X3DName := 'MoveBall';
FieldVal28 := TSFVec3f.Create(Script27, True, 'translation', Vector3(50, 50, 0));
Script27.AddCustomFieldOrEvent(FieldVal28);
FieldVal29 := TSFVec3f.Create(Script27, True, 'old', Vector3(0, 0, 0));
Script27.AddCustomFieldOrEvent(FieldVal29);
FieldVal30 := TSFTime.CreateEvent(Script27, 'set_cycle', True);
Script27.AddCustomFieldOrEvent(FieldVal30);
FieldVal31 := TMFVec3f.CreateEvent(Script27, 'keyValue', False);
Script27.AddCustomFieldOrEvent(FieldVal31);
Script27.SetSourceCode('ecmascript:' + LineEnding +
  '					function set_cycle(value) {' + LineEnding +
  '                                                old = translation;' + LineEnding +
  '						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);' + LineEnding +
  '			    			keyValue = new MFVec3f(old, translation);' + LineEnding +
  '						// Browser.println(translation);' + LineEnding +
  '					}');
Group14.FdChildren.Add(Script27);
TimeSensor32 := TTimeSensorNode.Create;
TimeSensor32.X3DName := 'nodeClock';
TimeSensor32.CycleInterval := 3;
TimeSensor32.Loop := True;
Group14.FdChildren.Add(TimeSensor32);
{ ROUTE nodeClock.cycleTime TO MoveBall.set_cycle }
Group14.AddRoute(TimeSensor32.EventCycleTime, FieldVal30);
{ ROUTE nodeClock.fraction_changed TO NodePosition.set_fraction }
Group14.AddRoute(TimeSensor32.EventFraction_changed, PositionInterpolator26.EventSet_fraction);
{ ROUTE MoveBall.keyValue TO NodePosition.keyValue }
Group14.AddRoute(FieldVal31, PositionInterpolator26.keyValue);
{ ROUTE NodePosition.value_changed TO transform.set_translation }
end;

procedure InitforcenodePart2;
begin
Group14.AddRoute(PositionInterpolator26.EventValue_changed, Transform15.FdTranslation.EventIn);
ProtoDeclare10.Node.AddChildren([Group14]);
X3D0.AddPrototype(ProtoDeclare10);
ProtoDeclare37 := CreateEmptyPrototype('cyl');
ProtoDeclare37.X3DName := 'cyl';
FieldVal39 := TSFVec3f.CreateUndefined(nil, True, 'set_positionA');
FieldDecl39 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl39.FieldOrEvent := FieldVal39;
FieldVal39.ParentInterfaceDeclaration := FieldDecl39;
ProtoDeclare37.InterfaceDeclarations.Add(FieldDecl39);
FieldVal40 := TSFVec3f.CreateUndefined(nil, True, 'set_positionB');
FieldDecl40 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl40.FieldOrEvent := FieldVal40;
FieldVal40.ParentInterfaceDeclaration := FieldDecl40;
ProtoDeclare37.InterfaceDeclarations.Add(FieldDecl40);
Group42 := TGroupNode.Create;
Shape43 := TShapeNode.Create;
Extrusion44 := TExtrusionNode.Create;
Extrusion44.X3DName := 'extrusion';
Extrusion44.CreaseAngle := 0.785;
Extrusion44.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Extrusion44.SetSpine([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]);
Shape43.Geometry := Extrusion44;
Appearance45 := TAppearanceNode.Create;
Material46 := TMaterialNode.Create;
Material46.DiffuseColor := Vector3(0, 1, 0);
Appearance45.Material := Material46;
Shape43.Appearance := Appearance45;
Group42.FdChildren.Add(Shape43);
Script47 := TScriptNode.Create;
Script47.X3DName := 'MoveCylinder';
FieldVal48 := TMFVec3f.Create(Script47, True, 'spine', ([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]));
Script47.AddCustomFieldOrEvent(FieldVal48);
FieldVal49 := TSFVec3f.CreateUndefined(Script47, True, 'endA');
Script47.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TSFVec3f.CreateUndefined(Script47, True, 'endB');
Script47.AddCustomFieldOrEvent(FieldVal50);
Script47.FieldOrEvent('endA', True).IsClauseNamesAdd('set_positionA');
Script47.FieldOrEvent('endB', True).IsClauseNamesAdd('set_positionB');
Script47.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  '                function set_endA(value) {' + LineEnding +
  '		    spine = new MFVec3f(value, spine[1]);' + LineEnding +
  '                }' + LineEnding +
  '' + LineEnding +
  '                function set_endB(value) {' + LineEnding +
  '		    spine = new MFVec3f(spine[0], value);' + LineEnding +
  '                }');
end;

procedure InitforcenodePart3;
begin
Group42.FdChildren.Add(Script47);
{ ROUTE MoveCylinder.spine TO extrusion.set_spine }
Group42.AddRoute(FieldVal48, Extrusion44.EventSet_spine);
ProtoDeclare37.Node.AddChildren([Group42]);
X3D0.AddPrototype(ProtoDeclare37);
Transform52 := TTransformNode.Create;
Transform52.X3DName := 'HoldsContent';
Transform52.Scale := Vector3(0.1, 0.1, 0.1);
PlaneSensor53 := TPlaneSensorNode.Create;
PlaneSensor53.X3DName := 'clickGenerator';
PlaneSensor53.MinPosition := Vector2(-50, -50);
PlaneSensor53.MaxPosition := Vector2(50, 50);
PlaneSensor53.Description := 'click on background to add nodes, click on nodes to add links';
Transform52.FdChildren.Add(PlaneSensor53);
ProtoInstance54 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance54.X3DName := 'nodeA';
(ProtoInstance54.Field('position') as TSFVec3f).Value := Vector3(0, 0, 0);
Transform52.FdChildren.Add(ProtoInstance54.Instantiate);
ProtoInstance56 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance56.X3DName := 'nodeB';
(ProtoInstance56.Field('position') as TSFVec3f).Value := Vector3(50, 50, 50);
Transform52.FdChildren.Add(ProtoInstance56.Instantiate);
ProtoInstance58 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance58.X3DName := 'nodeC';
(ProtoInstance58.Field('position') as TSFVec3f).Value := Vector3(-50, -50, -50);
Transform52.FdChildren.Add(ProtoInstance58.Instantiate);
ProtoInstance60 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance60.X3DName := 'nodeD';
(ProtoInstance60.Field('position') as TSFVec3f).Value := Vector3(50, 50, -50);
Transform52.FdChildren.Add(ProtoInstance60.Instantiate);
ProtoInstance62 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare37);
ProtoInstance62.X3DName := 'linkA';
Transform52.FdChildren.Add(ProtoInstance62.Instantiate);
ProtoInstance63 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare37);
ProtoInstance63.X3DName := 'linkB';
Transform52.FdChildren.Add(ProtoInstance63.Instantiate);
ProtoInstance64 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare37);
ProtoInstance64.X3DName := 'linkC';
Transform52.FdChildren.Add(ProtoInstance64.Instantiate);
Group9.FdChildren.Add(Transform52);
end;

procedure InitforcenodePart4;
begin
Script65 := TScriptNode.Create;
Script65.X3DName := 'clickHandler';
FieldVal66 := TSFInt32.Create(Script65, True, 'counter', 0);
Script65.AddCustomFieldOrEvent(FieldVal66);
FieldVal67 := TSFNode.CreateEvent(Script65, 'node_changed', False);
Script65.AddCustomFieldOrEvent(FieldVal67);
FieldVal68 := TSFBool.CreateEvent(Script65, 'add_node', True);
Script65.AddCustomFieldOrEvent(FieldVal68);
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> }
{ <Transform USE="HoldsContent"/> }
{ </field> }
Script65.SetSourceCode('ecmascript:' + LineEnding +
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
Group9.FdChildren.Add(Script65);
{ ROUTE clickGenerator.isActive TO clickHandler.add_node }
Group9.AddRoute(PlaneSensor53.EventIsActive, FieldVal68);
{ ROUTE nodeA.position TO linkA.set_positionA }
Group9.AddRoute(ProtoInstance54.position, ProtoInstance62.EventSet_positionA);
{ ROUTE nodeB.position TO linkA.set_positionB }
Group9.AddRoute(ProtoInstance56.position, ProtoInstance62.EventSet_positionB);
{ ROUTE nodeA.position TO linkB.set_positionA }
Group9.AddRoute(ProtoInstance54.position, ProtoInstance63.EventSet_positionA);
{ ROUTE nodeC.position TO linkB.set_positionB }
Group9.AddRoute(ProtoInstance58.position, ProtoInstance63.EventSet_positionB);
{ ROUTE nodeA.position TO linkC.set_positionA }
Group9.AddRoute(ProtoInstance54.position, ProtoInstance64.EventSet_positionA);
{ ROUTE nodeD.position TO linkC.set_positionB }
Group9.AddRoute(ProtoInstance60.position, ProtoInstance64.EventSet_positionB);
X3D0.AddChildren([Group9]);
end;

function Createforcenode: TX3DRootNode;
begin
  InitforcenodePart0;
  InitforcenodePart1;
  InitforcenodePart2;
  InitforcenodePart3;
  InitforcenodePart4;
  Result := X3D0;
end;

begin
end.
