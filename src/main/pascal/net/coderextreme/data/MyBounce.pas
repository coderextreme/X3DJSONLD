unit MyBounce;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateMyBounce: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  NavigationInfo8: TNavigationInfoNode;
  Transform9: TTransformNode;
  Shape10: TShapeNode;
  Appearance11: TAppearanceNode;
  Material12: TMaterialNode;
  Sphere13: TSphereNode;
  Script14: TScriptNode;
  FieldVal15: TX3DEvent;
  FieldVal16: TX3DEvent;
  FieldVal17: TSFVec3f;
  FieldVal18: TSFVec3f;
  FieldVal19: TX3DEvent;
  TimeSensor20: TTimeSensorNode;

procedure InitMyBouncePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'MyBounce.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '3 prismatic spheres';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
Group7.FdChildren.Add(NavigationInfo8);
Transform9 := TTransformNode.Create;
Transform9.X3DName := 'transform';
Shape10 := TShapeNode.Create;
Appearance11 := TAppearanceNode.Create;
Material12 := TMaterialNode.Create;
Material12.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material12.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance11.Material := Material12;
Shape10.Appearance := Appearance11;
Sphere13 := TSphereNode.Create;
Shape10.Geometry := Sphere13;
Transform9.FdChildren.Add(Shape10);
Group7.FdChildren.Add(Transform9);
Script14 := TScriptNode.Create;
Script14.X3DName := 'Bounce2';
FieldVal15 := TSFVec3f.CreateEvent(Script14, 'set_translation', True);
Script14.AddCustomFieldOrEvent(FieldVal15);
FieldVal16 := TSFVec3f.CreateEvent(Script14, 'translation_changed', False);
Script14.AddCustomFieldOrEvent(FieldVal16);
FieldVal17 := TSFVec3f.Create(Script14, True, 'translation', Vector3(0, 0, 0));
Script14.AddCustomFieldOrEvent(FieldVal17);
FieldVal18 := TSFVec3f.Create(Script14, True, 'velocity', Vector3(0, 0, 0));
Script14.AddCustomFieldOrEvent(FieldVal18);
FieldVal19 := TSFTime.CreateEvent(Script14, 'set_fraction', True);
Script14.AddCustomFieldOrEvent(FieldVal19);
Script14.SetSourceCode('ecmascript:' + LineEnding +
  '			function newBubble() {' + LineEnding +
  '			    translation = new SFVec3f(0, 0, 0);' + LineEnding +
  '			    velocity = new SFVec3f(' + LineEnding +
  '			    	Math.random() - 0.5,' + LineEnding +
  '				Math.random() - 0.5,' + LineEnding +
  '				Math.random() - 0.5);' + LineEnding +
  '			}' + LineEnding +
  '			function set_fraction() {' + LineEnding +
  '			    translation = new SFVec3f(' + LineEnding +
  '			    	translation.x + velocity.x,' + LineEnding +
  '				translation.y + velocity.y,' + LineEnding +
  '				translation.z + velocity.z);' + LineEnding +
  '				if (Math.abs(translation.x) > 10) {' + LineEnding +
  '					newBubble();' + LineEnding +
  '				} else if (Math.abs(translation.y) > 10) {' + LineEnding +
  '					newBubble();' + LineEnding +
  '				} else if (Math.abs(translation.z) > 10) {' + LineEnding +
  '					newBubble();' + LineEnding +
  '				} else {' + LineEnding +
  '					velocity = new SFVec3f(' + LineEnding +
  '						velocity.x + Math.random() * 0.2 - 0.1,' + LineEnding +
  '						velocity.y + Math.random() * 0.2 - 0.1,' + LineEnding +
  '						velocity.z + Math.random() * 0.2 - 0.1' + LineEnding +
  '					);' + LineEnding +
  '				}' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function initialize() {' + LineEnding +
  '			     newBubble();' + LineEnding +
  '			}');
Group7.FdChildren.Add(Script14);
TimeSensor20 := TTimeSensorNode.Create;
end;

procedure InitMyBouncePart1;
begin
TimeSensor20.X3DName := 'TourTime';
TimeSensor20.CycleInterval := 0.15;
TimeSensor20.Loop := True;
Group7.FdChildren.Add(TimeSensor20);
{ ROUTE TourTime.cycleTime TO Bounce2.set_fraction }
Group7.AddRoute(TimeSensor20.EventCycleTime, FieldVal19);
{ ROUTE Bounce2.translation_changed TO transform.set_translation }
Group7.AddRoute(FieldVal16, Transform9.FdTranslation.EventIn);
X3D0.AddChildren([Group7]);
end;

function CreateMyBounce: TX3DRootNode;
begin
  InitMyBouncePart0;
  InitMyBouncePart1;
  Result := X3D0;
end;

begin
end.
