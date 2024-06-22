function MyBounce: TX3DRootNode;
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
field15: TfieldNode;
field16: TfieldNode;
field17: TfieldNode;
field18: TfieldNode;
field19: TfieldNode;
TimeSensor20: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
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
field15 := TfieldNode.Create;
field15.NameField := 'set_translation';
field15.AccessType := 'inputOnly';
field15.Type := 'SFVec3f';
field15.Value := '0 0 0';
{ .AddField }
Script14.Field := field15;
field16 := TfieldNode.Create;
field16.NameField := 'translation_changed';
field16.AccessType := 'outputOnly';
field16.Type := 'SFVec3f';
field16.Value := '0 0 0';
{ .AddField }
Script14.Field := field16;
field17 := TfieldNode.Create;
field17.NameField := 'translation';
field17.AccessType := 'inputOutput';
field17.Type := 'SFVec3f';
field17.Value := '0 0 0';
{ .AddField }
Script14.Field := field17;
field18 := TfieldNode.Create;
field18.NameField := 'velocity';
field18.AccessType := 'inputOutput';
field18.Type := 'SFVec3f';
field18.Value := '0 0 0';
{ .AddField }
Script14.Field := field18;
field19 := TfieldNode.Create;
field19.NameField := 'set_fraction';
field19.AccessType := 'inputOnly';
field19.Type := 'SFTime';
{ .AddField }
Script14.Field := field19;

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
