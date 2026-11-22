unit MyBounce;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
SFVec3f15: TSFVec3f;
SFVec3f16: TSFVec3f;
SFVec3f17: TSFVec3f;
SFVec3f18: TSFVec3f;
SFTime19: TSFTime;
TimeSensor20: TTimeSensorNode;

procedure InitMyBouncePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'MyBounce.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := '3 prismatic spheres';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Transform9 := TTransformNode.Create;
Shape10 := TShapeNode.Create;
Appearance11 := TAppearanceNode.Create;
Material12 := TMaterialNode.Create;
Material12.DiffuseColor := Vector3(0.7,0.7,0.7);
Material12.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance11.Material := Material12;
{ METHOD .Appearance }
Shape10.Appearance := Appearance11;
Sphere13 := TSphereNode.Create;
{ METHOD .Geometry }
Shape10.Geometry := Sphere13;
{ METHOD .FdChildren.Add }
Transform9.FdChildren.Add(Shape10);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform9);
Script14 := TScriptNode.Create;
SFVec3f15 := TSFVec3f.CreateUndefined(Script14, false, 'set_translation');
SFVec3f15.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script14.AddCustomField(SFVec3f15);
SFVec3f16 := TSFVec3f.CreateUndefined(Script14, false, 'translation_changed');
SFVec3f16.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script14.AddCustomField(SFVec3f16);
SFVec3f17 := TSFVec3f.CreateUndefined(Script14, false, 'translation');
SFVec3f17.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script14.AddCustomField(SFVec3f17);
SFVec3f18 := TSFVec3f.CreateUndefined(Script14, false, 'velocity');
SFVec3f18.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script14.AddCustomField(SFVec3f18);
SFTime19 := TSFTime.CreateUndefined(Script14, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script14.AddCustomField(SFTime19);

Script14.SetSourceCode('''ecmascript:\n"+
"			function newBubble() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"				if (Math.abs(translation.x) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.y) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.z) > 10) {\n"+
"					newBubble();\n"+
"				} else {\n"+
"					velocity = new SFVec3f(\n"+
"						velocity.x + Math.random() * 0.2 - 0.1,\n"+
"						velocity.y + Math.random() * 0.2 - 0.1,\n"+
"						velocity.z + Math.random() * 0.2 - 0.1\n"+
"					);\n"+
"				}\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     newBubble();\n"+
"			}''');
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Script14);
TimeSensor20 := TTimeSensorNode.Create;
TimeSensor20.CycleInterval := 0.15;
TimeSensor20.Loop := True;
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(TimeSensor20);
{ Original "TourTime.EventCycleTime TO Bounce2.EventSet_fraction }
{ Sample TourTime.EventCycleTime TO Bounce2.EventSet_fraction}
Group7.AddRoute(TimeSensor20.EventCycleTime, Script14.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Bounce2.EventTranslation_changed TO transform.FdTranslation.EventIn }
{ Sample Bounce2.EventTranslation_changed TO transform.FdTranslation.EventIn}
Group7.AddRoute(Script14.EventTranslation_changed, Transform9.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function CreateMyBounce: TX3DRootNode;
begin
InitMyBouncePart0;
Result := X3D0;
end;

begin
end.
