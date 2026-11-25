unit fors;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createfors: TX3DRootNode;

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
  Group10: TGroupNode;
  ProtoDeclare11: TX3DPrototype;
  FieldDecl13: TX3DInterfaceDeclaration;
  FieldVal13: TSFVec3f;
  Group15: TGroupNode;
  Transform16: TTransformNode;
  Shape17: TShapeNode;
  Sphere18: TSphereNode;
  Appearance19: TAppearanceNode;
  Material20: TMaterialNode;
  Transform21: TTransformNode;
  Shape22: TShapeNode;
  Text23: TTextNode;
  FontStyle24: TFontStyleNode;
  Appearance25: TAppearanceNode;
  Material26: TMaterialNode;
  PositionInterpolator27: TPositionInterpolatorNode;
  Script28: TScriptNode;
  FieldVal29: TSFVec3f;
  FieldVal30: TSFVec3f;
  FieldVal31: TX3DEvent;
  FieldVal32: TX3DEvent;
  TimeSensor33: TTimeSensorNode;
  ProtoDeclare38: TX3DPrototype;
  FieldDecl40: TX3DInterfaceDeclaration;
  FieldVal40: TSFVec3f;
  FieldDecl41: TX3DInterfaceDeclaration;
  FieldVal41: TSFVec3f;
  Group43: TGroupNode;
  Shape44: TShapeNode;
  Extrusion45: TExtrusionNode;
  Appearance46: TAppearanceNode;
  Material47: TMaterialNode;
  Script48: TScriptNode;
  FieldVal49: TMFVec3f;
  FieldVal50: TSFVec3f;
  FieldVal51: TSFVec3f;
  Transform53: TTransformNode;
  PlaneSensor54: TPlaneSensorNode;
  ProtoInstance55: TX3DPrototypeNode;
  ProtoInstance57: TX3DPrototypeNode;
  ProtoInstance59: TX3DPrototypeNode;
  Script60: TScriptNode;
  FieldVal61: TSFInt32;
  FieldVal62: TX3DEvent;

procedure InitforsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'fors.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group10 := TGroupNode.Create;
ProtoDeclare11 := CreateEmptyPrototype('node');
ProtoDeclare11.X3DName := 'node';
FieldVal13 := TSFVec3f.Create(nil, True, 'position', Vector3(0, 0, 0));
FieldDecl13 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl13.FieldOrEvent := FieldVal13;
FieldVal13.ParentInterfaceDeclaration := FieldDecl13;
ProtoDeclare11.InterfaceDeclarations.Add(FieldDecl13);
Group15 := TGroupNode.Create;
Transform16 := TTransformNode.Create;
Transform16.X3DName := 'transform';
Transform16.FieldOrEvent('translation', True).IsClauseNamesAdd('position');
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1, 0, 0);
Appearance19.Material := Material20;
Shape17.Appearance := Appearance19;
Transform16.FdChildren.Add(Shape17);
Transform21 := TTransformNode.Create;
Transform21.Translation := Vector3(1, 0, 0);
Shape22 := TShapeNode.Create;
Text23 := TTextNode.Create;
Text23.SetText(['Node']);
FontStyle24 := TFontStyleNode.Create;
FontStyle24.Justify := fjMiddle;
end;

procedure InitforsPart1;
begin
FontStyle24.JustifyMinor := fjMiddle;
FontStyle24.Size := 5;
Text23.FontStyle := FontStyle24;
Shape22.Geometry := Text23;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0, 0, 1);
Appearance25.Material := Material26;
Shape22.Appearance := Appearance25;
Transform21.FdChildren.Add(Shape22);
Transform16.FdChildren.Add(Transform21);
Group15.FdChildren.Add(Transform16);
PositionInterpolator27 := TPositionInterpolatorNode.Create;
PositionInterpolator27.X3DName := 'NodePosition';
PositionInterpolator27.SetKey([0, 1]);
PositionInterpolator27.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Group15.FdChildren.Add(PositionInterpolator27);
Script28 := TScriptNode.Create;
Script28.X3DName := 'MoveBall';
FieldVal29 := TSFVec3f.Create(Script28, True, 'translation', Vector3(50, 50, 0));
Script28.AddCustomFieldOrEvent(FieldVal29);
FieldVal30 := TSFVec3f.Create(Script28, True, 'old', Vector3(0, 0, 0));
Script28.AddCustomFieldOrEvent(FieldVal30);
FieldVal31 := TSFTime.CreateEvent(Script28, 'set_cycle', True);
Script28.AddCustomFieldOrEvent(FieldVal31);
FieldVal32 := TMFVec3f.CreateEvent(Script28, 'keyValue', False);
Script28.AddCustomFieldOrEvent(FieldVal32);
Script28.SetSourceCode('ecmascript:' + LineEnding +
  '			function set_cycle(value) {' + LineEnding +
  '				old = translation;' + LineEnding +
  '				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);' + LineEnding +
  '				keyValue = new MFVec3f(old, translation);' + LineEnding +
  '			}');
Group15.FdChildren.Add(Script28);
TimeSensor33 := TTimeSensorNode.Create;
TimeSensor33.X3DName := 'nodeClock';
TimeSensor33.CycleInterval := 3;
TimeSensor33.Loop := True;
Group15.FdChildren.Add(TimeSensor33);
{ ROUTE nodeClock.cycleTime TO MoveBall.set_cycle }
Group15.AddRoute(TimeSensor33.EventCycleTime, FieldVal31);
{ ROUTE nodeClock.fraction_changed TO NodePosition.set_fraction }
Group15.AddRoute(TimeSensor33.EventFraction_changed, PositionInterpolator27.EventSet_fraction);
{ ROUTE MoveBall.keyValue TO NodePosition.keyValue }
Group15.AddRoute(FieldVal32, PositionInterpolator27.keyValue);
end;

procedure InitforsPart2;
begin
{ ROUTE NodePosition.value_changed TO transform.set_translation }
Group15.AddRoute(PositionInterpolator27.EventValue_changed, Transform16.FdTranslation.EventIn);
ProtoDeclare11.Node.AddChildren([Group15]);
X3D0.AddPrototype(ProtoDeclare11);
ProtoDeclare38 := CreateEmptyPrototype('cyl');
ProtoDeclare38.X3DName := 'cyl';
FieldVal40 := TSFVec3f.Create(nil, True, 'set_positionA', Vector3(0, 0, 0));
FieldDecl40 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl40.FieldOrEvent := FieldVal40;
FieldVal40.ParentInterfaceDeclaration := FieldDecl40;
ProtoDeclare38.InterfaceDeclarations.Add(FieldDecl40);
FieldVal41 := TSFVec3f.Create(nil, True, 'set_positionB', Vector3(50, 50, 50));
FieldDecl41 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl41.FieldOrEvent := FieldVal41;
FieldVal41.ParentInterfaceDeclaration := FieldDecl41;
ProtoDeclare38.InterfaceDeclarations.Add(FieldDecl41);
Group43 := TGroupNode.Create;
Shape44 := TShapeNode.Create;
Extrusion45 := TExtrusionNode.Create;
Extrusion45.X3DName := 'extrusion';
Extrusion45.CreaseAngle := 0.785;
Extrusion45.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Extrusion45.SetSpine([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]);
Shape44.Geometry := Extrusion45;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0, 1, 0);
Appearance46.Material := Material47;
Shape44.Appearance := Appearance46;
Group43.FdChildren.Add(Shape44);
Script48 := TScriptNode.Create;
Script48.X3DName := 'MoveCylinder';
FieldVal49 := TMFVec3f.Create(Script48, True, 'spine', ([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]));
Script48.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TSFVec3f.Create(Script48, True, 'endA', Vector3(0, 0, 0));
Script48.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFVec3f.Create(Script48, True, 'endB', Vector3(50, 50, 50));
Script48.AddCustomFieldOrEvent(FieldVal51);
Script48.FieldOrEvent('endA', True).IsClauseNamesAdd('set_positionA');
Script48.FieldOrEvent('endB', True).IsClauseNamesAdd('set_positionB');
end;

procedure InitforsPart3;
begin
Script48.SetSourceCode('ecmascript:' + LineEnding +
  '			function set_endA(value) {' + LineEnding +
  '				spine = new MFVec3f(value, spine[1]);' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function set_endB(value) {' + LineEnding +
  '				spine = new MFVec3f(spine[0], value);' + LineEnding +
  '			}');
Group43.FdChildren.Add(Script48);
{ ROUTE MoveCylinder.spine TO extrusion.set_spine }
Group43.AddRoute(FieldVal49, Extrusion45.EventSet_spine);
ProtoDeclare38.Node.AddChildren([Group43]);
X3D0.AddPrototype(ProtoDeclare38);
Transform53 := TTransformNode.Create;
Transform53.X3DName := 'HoldsContent';
Transform53.Scale := Vector3(0.1, 0.1, 0.1);
PlaneSensor54 := TPlaneSensorNode.Create;
PlaneSensor54.X3DName := 'clickGenerator';
PlaneSensor54.MinPosition := Vector2(-50, -50);
PlaneSensor54.MaxPosition := Vector2(50, 50);
PlaneSensor54.Description := 'click on background to add nodes, click on nodes to add links';
Transform53.FdChildren.Add(PlaneSensor54);
ProtoInstance55 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
ProtoInstance55.X3DName := 'nodeA';
(ProtoInstance55.Field('position') as TSFVec3f).Value := Vector3(0, 0, 0);
Transform53.FdChildren.Add(ProtoInstance55.Instantiate);
ProtoInstance57 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
ProtoInstance57.X3DName := 'nodeB';
(ProtoInstance57.Field('position') as TSFVec3f).Value := Vector3(50, 50, 50);
Transform53.FdChildren.Add(ProtoInstance57.Instantiate);
ProtoInstance59 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare38);
ProtoInstance59.X3DName := 'linkA';
Transform53.FdChildren.Add(ProtoInstance59.Instantiate);
Group10.FdChildren.Add(Transform53);
Script60 := TScriptNode.Create;
Script60.X3DName := 'clickHandler';
FieldVal61 := TSFInt32.Create(Script60, True, 'counter', 0);
Script60.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TSFBool.CreateEvent(Script60, 'add_node', True);
Script60.AddCustomFieldOrEvent(FieldVal62);
{ <field accessType="outputOnly" name="node_changed" type="SFNode"/> }
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> }
{ <Transform USE="HoldsContent"/> }
{ </field> }
Script60.SetSourceCode('ecmascript:' + LineEnding +
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
Group10.FdChildren.Add(Script60);
{ ROUTE clickGenerator.isActive TO clickHandler.add_node }
end;

procedure InitforsPart4;
begin
Group10.AddRoute(PlaneSensor54.EventIsActive, FieldVal62);
{ ROUTE nodeA.position TO linkA.set_positionA }
Group10.AddRoute(ProtoInstance55.position, ProtoInstance59.EventSet_positionA);
{ ROUTE nodeB.position TO linkA.set_positionB }
Group10.AddRoute(ProtoInstance57.position, ProtoInstance59.EventSet_positionB);
X3D0.AddChildren([Group10]);
end;

function Createfors: TX3DRootNode;
begin
  InitforsPart0;
  InitforsPart1;
  InitforsPart2;
  InitforsPart3;
  InitforsPart4;
  Result := X3D0;
end;

begin
end.
