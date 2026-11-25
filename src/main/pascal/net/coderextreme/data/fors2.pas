unit fors2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createfors2: TX3DRootNode;

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
  PositionInterpolator21: TPositionInterpolatorNode;
  Script22: TScriptNode;
  FieldVal23: TSFVec3f;
  FieldVal24: TSFVec3f;
  FieldVal25: TX3DEvent;
  FieldVal26: TX3DEvent;
  TimeSensor27: TTimeSensorNode;
  ProtoDeclare32: TX3DPrototype;
  FieldDecl34: TX3DInterfaceDeclaration;
  FieldVal34: TSFVec3f;
  FieldDecl35: TX3DInterfaceDeclaration;
  FieldVal35: TSFVec3f;
  Group37: TGroupNode;
  Shape38: TShapeNode;
  Extrusion39: TExtrusionNode;
  Appearance40: TAppearanceNode;
  Material41: TMaterialNode;
  Script42: TScriptNode;
  FieldVal43: TMFVec3f;
  FieldVal44: TSFVec3f;
  FieldVal45: TSFVec3f;
  Transform47: TTransformNode;
  ProtoInstance48: TX3DPrototypeNode;
  ProtoInstance50: TX3DPrototypeNode;
  ProtoInstance52: TX3DPrototypeNode;

procedure Initfors2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'fors2.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d';
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
{ comment before Sphere }
{ comment after Sphere }
{ comment after Appearance }
Sphere18 := TSphereNode.Create;
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
{ comment before Material }
{ comment after Material }
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1, 0, 0);
Appearance19.Material := Material20;
Shape17.Appearance := Appearance19;
Transform16.FdChildren.Add(Shape17);
Group15.FdChildren.Add(Transform16);
PositionInterpolator21 := TPositionInterpolatorNode.Create;
end;

procedure Initfors2Part1;
begin
PositionInterpolator21.X3DName := 'NodePosition';
PositionInterpolator21.SetKey([0, 1]);
PositionInterpolator21.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Group15.FdChildren.Add(PositionInterpolator21);
Script22 := TScriptNode.Create;
Script22.X3DName := 'MoveBall';
FieldVal23 := TSFVec3f.Create(Script22, True, 'translation', Vector3(50, 50, 0));
Script22.AddCustomFieldOrEvent(FieldVal23);
FieldVal24 := TSFVec3f.Create(Script22, True, 'old', Vector3(0, 0, 0));
Script22.AddCustomFieldOrEvent(FieldVal24);
FieldVal25 := TSFTime.CreateEvent(Script22, 'set_cycle', True);
Script22.AddCustomFieldOrEvent(FieldVal25);
FieldVal26 := TMFVec3f.CreateEvent(Script22, 'keyValue', False);
Script22.AddCustomFieldOrEvent(FieldVal26);
Script22.SetSourceCode('ecmascript:' + LineEnding +
  '			function set_cycle(value) {' + LineEnding +
  '				old = translation;' + LineEnding +
  '				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);' + LineEnding +
  '				keyValue = new MFVec3f(old, translation);' + LineEnding +
  '			}');
Group15.FdChildren.Add(Script22);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.X3DName := 'nodeClock';
TimeSensor27.CycleInterval := 3;
TimeSensor27.Loop := True;
Group15.FdChildren.Add(TimeSensor27);
{ ROUTE nodeClock.cycleTime TO MoveBall.set_cycle }
Group15.AddRoute(TimeSensor27.EventCycleTime, FieldVal25);
{ ROUTE nodeClock.fraction_changed TO NodePosition.set_fraction }
Group15.AddRoute(TimeSensor27.EventFraction_changed, PositionInterpolator21.EventSet_fraction);
{ ROUTE MoveBall.keyValue TO NodePosition.keyValue }
Group15.AddRoute(FieldVal26, PositionInterpolator21.keyValue);
{ ROUTE NodePosition.value_changed TO transform.set_translation }
Group15.AddRoute(PositionInterpolator21.EventValue_changed, Transform16.FdTranslation.EventIn);
ProtoDeclare11.Node.AddChildren([Group15]);
X3D0.AddPrototype(ProtoDeclare11);
ProtoDeclare32 := CreateEmptyPrototype('cyl');
ProtoDeclare32.X3DName := 'cyl';
FieldVal34 := TSFVec3f.CreateUndefined(nil, True, 'positionA');
FieldDecl34 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl34.FieldOrEvent := FieldVal34;
FieldVal34.ParentInterfaceDeclaration := FieldDecl34;
ProtoDeclare32.InterfaceDeclarations.Add(FieldDecl34);
FieldVal35 := TSFVec3f.CreateUndefined(nil, True, 'positionB');
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure Initfors2Part2;
begin
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare32.InterfaceDeclarations.Add(FieldDecl35);
Group37 := TGroupNode.Create;
Shape38 := TShapeNode.Create;
Extrusion39 := TExtrusionNode.Create;
Extrusion39.X3DName := 'extrusion';
Extrusion39.CreaseAngle := 0.785;
Extrusion39.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Extrusion39.SetSpine([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]);
Shape38.Geometry := Extrusion39;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
Material41.DiffuseColor := Vector3(0, 1, 0);
Appearance40.Material := Material41;
Shape38.Appearance := Appearance40;
Group37.FdChildren.Add(Shape38);
Script42 := TScriptNode.Create;
Script42.X3DName := 'MoveCylinder';
FieldVal43 := TMFVec3f.Create(Script42, True, 'spine', ([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]));
Script42.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFVec3f.Create(Script42, True, 'endA', Vector3(0, 0, 0));
Script42.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFVec3f.Create(Script42, True, 'endB', Vector3(50, 50, 50));
Script42.AddCustomFieldOrEvent(FieldVal45);
Script42.FieldOrEvent('endA', True).IsClauseNamesAdd('positionA');
Script42.FieldOrEvent('endB', True).IsClauseNamesAdd('positionB');
Script42.SetSourceCode('ecmascript:' + LineEnding +
  '			function set_endA(value) {' + LineEnding +
  '				spine = new MFVec3f(value, spine[1]);' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function set_endB(value) {' + LineEnding +
  '				spine = new MFVec3f(spine[0], value);' + LineEnding +
  '			}');
Group37.FdChildren.Add(Script42);
{ ROUTE MoveCylinder.spine TO extrusion.set_spine }
Group37.AddRoute(FieldVal43, Extrusion39.EventSet_spine);
ProtoDeclare32.Node.AddChildren([Group37]);
X3D0.AddPrototype(ProtoDeclare32);
Transform47 := TTransformNode.Create;
Transform47.Scale := Vector3(0.1, 0.1, 0.1);
ProtoInstance48 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
ProtoInstance48.X3DName := 'nodeA';
(ProtoInstance48.Field('position') as TSFVec3f).Value := Vector3(-50, -50, -50);
Transform47.FdChildren.Add(ProtoInstance48.Instantiate);
ProtoInstance50 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
end;

procedure Initfors2Part3;
begin
ProtoInstance50.X3DName := 'nodeB';
(ProtoInstance50.Field('position') as TSFVec3f).Value := Vector3(50, 50, 50);
Transform47.FdChildren.Add(ProtoInstance50.Instantiate);
ProtoInstance52 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare32);
ProtoInstance52.X3DName := 'linkA';
Transform47.FdChildren.Add(ProtoInstance52.Instantiate);
Group10.FdChildren.Add(Transform47);
{ ROUTE nodeA.position TO linkA.positionA }
Group10.AddRoute(ProtoInstance48.position, ProtoInstance52.positionA);
{ ROUTE nodeB.position TO linkA.positionB }
Group10.AddRoute(ProtoInstance50.position, ProtoInstance52.positionB);
X3D0.AddChildren([Group10]);
end;

function Createfors2: TX3DRootNode;
begin
  Initfors2Part0;
  Initfors2Part1;
  Initfors2Part2;
  Initfors2Part3;
  Result := X3D0;
end;

begin
end.
