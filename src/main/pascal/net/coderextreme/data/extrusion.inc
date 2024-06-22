function extrusion: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group8: TGroupNode;
Group9: TGroupNode;
Shape10: TShapeNode;
Extrusion11: TExtrusionNode;
Appearance12: TAppearanceNode;
Material13: TMaterialNode;
TimeSensor14: TTimeSensorNode;
Script15: TScriptNode;
field16: TfieldNode;
field17: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['title'] := 'extrusion.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/extrusion.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group8 := TGroupNode.Create;
Group9 := TGroupNode.Create;
Shape10 := TShapeNode.Create;
Extrusion11 := TExtrusionNode.Create;
Extrusion11.SetSpine([Vector3(-50,-50,0),Vector3(50,50,0)]);
Extrusion11.CreaseAngle := 0.785;
Extrusion11.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
{ .SetGeometry }
Shape10.Geometry := Extrusion11;
Appearance12 := TAppearanceNode.Create;
Material13 := TMaterialNode.Create;
Material13.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance12.Material := Material13;
{ .SetAppearance }
Shape10.Appearance := Appearance12;
{ .AddChildren }
Group9.AddChildren([Shape10]);
TimeSensor14 := TTimeSensorNode.Create;
TimeSensor14.Loop := True;
{ .AddChildren }
Group9.AddChildren([TimeSensor14]);
Script15 := TScriptNode.Create;
field16 := TfieldNode.Create;
field16.NameField := 'set_cycle';
field16.AccessType := 'inputOnly';
field16.Type := 'SFTime';
{ .AddField }
Script15.Field := field16;
field17 := TfieldNode.Create;
field17.NameField := 'spine';
field17.AccessType := 'inputOutput';
field17.Type := 'MFVec3f';
field17.Value := '-50 -50 0 50 50 0';
{ .AddField }
Script15.Field := field17;

Script15.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"                        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = endA;\n"+
"			tmpspine[1] = endB;\n"+
"                        spine = tmpspine;\n"+
"                }''');
{ .AddChildren }
Group9.AddChildren([Script15]);
Group9.AddRoute(TimeSensor14.FdCycletime, Script15.EventSet_cycle);
{ .AddX3DRoute }
Group9.AddRoute(Script15.EventSpine_changed, Extrusion11.EventSet_spine);
{ .AddX3DRoute }
{ .AddChildren }
Group8.AddChildren([Group9]);
{ .AddGroup }
X3D0.AddChildren([Group8]);
Result := X3D0;
end;
