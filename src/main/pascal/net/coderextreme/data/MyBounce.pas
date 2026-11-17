unit MyBounce;

interface

uses X3DNodes;

function CreateMyBounce: TX3DRootNode;

implementation

uses CastleVectors;

function CreateMyBounce: TX3DRootNode;
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
X3DField15: TX3DField;
X3DField16: TX3DField;
X3DField17: TX3DField;
X3DField18: TX3DField;
X3DField19: TX3DField;
TimeSensor20: TTimeSensorNode;
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
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Transform9 := TTransformNode.Create;
Shape10 := TShapeNode.Create;
Appearance11 := TAppearanceNode.Create;
Material12 := TMaterialNode.Create;
Material12.DiffuseColor := Vector3(0.7,0.7,0.7);
Material12.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance11.Material := Material12;
{ .SetAppearance }
Shape10.Appearance := Appearance11;
Sphere13 := TSphereNode.Create;
{ .SetGeometry }
Shape10.Geometry := Sphere13;
{ .AddChild }
Transform9.AddChildren([Shape10]);
{ .AddChildren }
Group7.AddChildren([Transform9]);
Script14 := TScriptNode.Create;
X3DField15 := TX3DField.Create;
X3DField15.NameField := 'set_translation';
X3DField15.AccessType := 'inputOnly';
X3DField15.Type := 'SFVec3f';
X3DField15.Value := '0 0 0';
{ .SetX3DField }
Script14.X3DField := X3DField15;
X3DField16 := TX3DField.Create;
X3DField16.NameField := 'translation_changed';
X3DField16.AccessType := 'outputOnly';
X3DField16.Type := 'SFVec3f';
X3DField16.Value := '0 0 0';
{ .AddX3DField }
Script14.X3DField := X3DField16;
X3DField17 := TX3DField.Create;
X3DField17.NameField := 'translation';
X3DField17.AccessType := 'inputOutput';
X3DField17.Type := 'SFVec3f';
X3DField17.Value := '0 0 0';
{ .AddX3DField }
Script14.X3DField := X3DField17;
X3DField18 := TX3DField.Create;
X3DField18.NameField := 'velocity';
X3DField18.AccessType := 'inputOutput';
X3DField18.Type := 'SFVec3f';
X3DField18.Value := '0 0 0';
{ .AddX3DField }
Script14.X3DField := X3DField18;
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'set_fraction';
X3DField19.AccessType := 'inputOnly';
X3DField19.Type := 'SFTime';
{ .AddX3DField }
Script14.X3DField := X3DField19;

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
{ .AddChildren }
Group7.AddChildren([Script14]);
TimeSensor20 := TTimeSensorNode.Create;
TimeSensor20.CycleInterval := 0.15;
TimeSensor20.Loop := True;
{ .AddChildren }
Group7.AddChildren([TimeSensor20]);
Group7.AddRoute(TimeSensor20.FdCycletime, Script14.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(Script14.EventTranslation_changed, Transform9.FdTranslation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
