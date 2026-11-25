unit myextrusion;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createmyextrusion: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group9: TGroupNode;
  Group10: TGroupNode;
  Shape11: TShapeNode;
  Extrusion12: TExtrusionNode;
  Appearance13: TAppearanceNode;
  Material14: TMaterialNode;
  TimeSensor15: TTimeSensorNode;
  Script16: TScriptNode;
  FieldVal17: TX3DEvent;
  FieldVal18: TMFVec3f;

procedure InitmyextrusionPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'November 9 2024';
X3D0.Meta['title'] := 'myextrusion.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group9 := TGroupNode.Create;
Group10 := TGroupNode.Create;
Shape11 := TShapeNode.Create;
Extrusion12 := TExtrusionNode.Create;
Extrusion12.X3DName := 'myextrusion';
Extrusion12.SetSpine([Vector3(-50, -50, 0), Vector3(50, 50, 0)]);
Extrusion12.CreaseAngle := 0.785;
Extrusion12.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Shape11.Geometry := Extrusion12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0, 1, 0);
Appearance13.Material := Material14;
Shape11.Appearance := Appearance13;
Group10.FdChildren.Add(Shape11);
TimeSensor15 := TTimeSensorNode.Create;
TimeSensor15.X3DName := 'TourTime';
TimeSensor15.Loop := True;
Group10.FdChildren.Add(TimeSensor15);
Script16 := TScriptNode.Create;
Script16.X3DName := 'MoveCylinder';
FieldVal17 := TSFTime.CreateEvent(Script16, 'set_cycle', True);
Script16.AddCustomFieldOrEvent(FieldVal17);
FieldVal18 := TMFVec3f.Create(Script16, True, 'spine', ([Vector3(-50, -50, 0), Vector3(50, 50, 0)]));
Script16.AddCustomFieldOrEvent(FieldVal18);
Script16.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  '                function set_cycle(value) {' + LineEnding +
  '                        Browser.print(value);' + LineEnding +
  '                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);' + LineEnding +
  '                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);' + LineEnding +
  '                        var tmpspine = new MFVec3f();' + LineEnding +
  '			tmpspine[0] = endA;' + LineEnding +
  '			tmpspine[1] = endB;' + LineEnding +
  '                        spine = tmpspine;' + LineEnding +
  '                }');
Group10.FdChildren.Add(Script16);
{ ROUTE TourTime.cycleTime TO MoveCylinder.set_cycle }
Group10.AddRoute(TimeSensor15.EventCycleTime, FieldVal17);
end;

procedure InitmyextrusionPart1;
begin
{ ROUTE MoveCylinder.spine_changed TO myextrusion.set_spine }
Group10.AddRoute(Script16.EventSpine_changed, Extrusion12.EventSet_spine);
Group9.FdChildren.Add(Group10);
X3D0.AddChildren([Group9]);
end;

function Createmyextrusion: TX3DRootNode;
begin
  InitmyextrusionPart0;
  InitmyextrusionPart1;
  Result := X3D0;
end;

begin
end.
