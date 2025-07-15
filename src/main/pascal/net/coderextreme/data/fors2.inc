function fors2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
ProtoDeclare11: TProtoDeclareNode;
ProtoInterface12: TProtoInterfaceNode;
field13: TfieldNode;
ProtoBody14: TProtoBodyNode;
Group15: TGroupNode;
Transform16: TTransformNode;
IS17: TISNode;
connect18: TconnectNode;
Shape19: TShapeNode;
Sphere20: TSphereNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
PositionInterpolator23: TPositionInterpolatorNode;
Script24: TScriptNode;
field25: TfieldNode;
field26: TfieldNode;
field27: TfieldNode;
field28: TfieldNode;
TimeSensor29: TTimeSensorNode;
ProtoDeclare34: TProtoDeclareNode;
ProtoInterface35: TProtoInterfaceNode;
field36: TfieldNode;
field37: TfieldNode;
ProtoBody38: TProtoBodyNode;
Group39: TGroupNode;
Shape40: TShapeNode;
Extrusion41: TExtrusionNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Script44: TScriptNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
IS48: TISNode;
connect49: TconnectNode;
connect50: TconnectNode;
Transform52: TTransformNode;
ProtoInstance53: TProtoInstanceNode;
fieldValue54: TfieldValueNode;
ProtoInstance55: TProtoInstanceNode;
fieldValue56: TfieldValueNode;
ProtoInstance57: TProtoInstanceNode;
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
ProtoDeclare11 := TProtoDeclareNode.Create;
ProtoDeclare11.NameField := 'node';
ProtoInterface12 := TProtoInterfaceNode.Create;
field13 := TfieldNode.Create;
field13.NameField := 'position';
field13.AccessType := 'inputOutput';
field13.Type := 'SFVec3f';
field13.Value := '0 0 0';
{ .AddField }
ProtoInterface12.Field := field13;
{ .SetProtoInterface }
ProtoDeclare11.ProtoInterface := ProtoInterface12;
ProtoBody14 := TProtoBodyNode.Create;
Group15 := TGroupNode.Create;
Transform16 := TTransformNode.Create;
IS17 := TISNode.Create;
connect18 := TconnectNode.Create;
connect18.NodeField := 'translation';
connect18.ProtoField := 'position';
{ .AddConnect }
IS17.Connect := connect18;
{ .SetIS }
Transform16.IS := IS17;
Shape19 := TShapeNode.Create;
{ comment before Sphere }
{ comment after Sphere }
{ comment after Appearance }
Sphere20 := TSphereNode.Create;
{ .SetGeometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;
{ comment before Material }
{ comment after Material }
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape19.Appearance := Appearance21;
{ .AddChild }
Transform16.AddChildren([Shape19]);
{ .AddChildren }
Group15.AddChildren([Transform16]);
PositionInterpolator23 := TPositionInterpolatorNode.Create;
PositionInterpolator23.SetKey([0,1]);
PositionInterpolator23.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group15.AddChildren([PositionInterpolator23]);
Script24 := TScriptNode.Create;
field25 := TfieldNode.Create;
field25.NameField := 'translation';
field25.AccessType := 'inputOutput';
field25.Type := 'SFVec3f';
field25.Value := '50 50 0';
{ .AddField }
Script24.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'old';
field26.AccessType := 'inputOutput';
field26.Type := 'SFVec3f';
field26.Value := '0 0 0';
{ .AddField }
Script24.Field := field26;
field27 := TfieldNode.Create;
field27.NameField := 'set_cycle';
field27.AccessType := 'inputOnly';
field27.Type := 'SFTime';
{ .AddField }
Script24.Field := field27;
field28 := TfieldNode.Create;
field28.NameField := 'keyValue';
field28.AccessType := 'outputOnly';
field28.Type := 'MFVec3f';
{ .AddField }
Script24.Field := field28;

Script24.SetSourceCode('''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}''');
{ .AddChildren }
Group15.AddChildren([Script24]);
TimeSensor29 := TTimeSensorNode.Create;
TimeSensor29.CycleInterval := 3;
TimeSensor29.Loop := True;
{ .AddChildren }
Group15.AddChildren([TimeSensor29]);
Group15.AddRoute(TimeSensor29.FdCycletime, Script24.EventSet_cycle);
{ .AddX3DRoute }
Group15.AddRoute(TimeSensor29.EventFraction_changed, PositionInterpolator23.EventSet_fraction);
{ .AddX3DRoute }
Group15.AddRoute(Script24.FdKeyvalue, PositionInterpolator23.FdKeyvalue);
{ .AddX3DRoute }
Group15.AddRoute(PositionInterpolator23.EventValue_changed, Transform16.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody14.AddChildren([Group15]);
{ .SetProtoBody }
ProtoDeclare11.ProtoBody := ProtoBody14;
{ .AddChildren }
Group10.AddChildren([ProtoDeclare11]);
ProtoDeclare34 := TProtoDeclareNode.Create;
ProtoDeclare34.NameField := 'cyl';
ProtoInterface35 := TProtoInterfaceNode.Create;
field36 := TfieldNode.Create;
field36.NameField := 'positionA';
field36.AccessType := 'inputOutput';
field36.Type := 'SFVec3f';
{ .AddField }
ProtoInterface35.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'positionB';
field37.AccessType := 'inputOutput';
field37.Type := 'SFVec3f';
{ .AddField }
ProtoInterface35.Field := field37;
{ .SetProtoInterface }
ProtoDeclare34.ProtoInterface := ProtoInterface35;
ProtoBody38 := TProtoBodyNode.Create;
Group39 := TGroupNode.Create;
Shape40 := TShapeNode.Create;
Extrusion41 := TExtrusionNode.Create;
Extrusion41.CreaseAngle := 0.785;
Extrusion41.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion41.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape40.Geometry := Extrusion41;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance42.Material := Material43;
{ .SetAppearance }
Shape40.Appearance := Appearance42;
{ .AddChildren }
Group39.AddChildren([Shape40]);
Script44 := TScriptNode.Create;
field45 := TfieldNode.Create;
field45.NameField := 'spine';
field45.AccessType := 'inputOutput';
field45.Type := 'MFVec3f';
field45.Value := '0 -50 0 0 0 0 0 50 0';
{ .AddField }
Script44.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'endA';
field46.AccessType := 'inputOutput';
field46.Type := 'SFVec3f';
field46.Value := '0 0 0';
{ .AddField }
Script44.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'endB';
field47.AccessType := 'inputOutput';
field47.Type := 'SFVec3f';
field47.Value := '50 50 50';
{ .AddField }
Script44.Field := field47;
IS48 := TISNode.Create;
connect49 := TconnectNode.Create;
connect49.NodeField := 'endA';
connect49.ProtoField := 'positionA';
{ .AddConnect }
IS48.Connect := connect49;
connect50 := TconnectNode.Create;
connect50.NodeField := 'endB';
connect50.ProtoField := 'positionB';
{ .AddConnect }
IS48.Connect := connect50;
{ .SetIS }
Script44.IS := IS48;

Script44.SetSourceCode('''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}''');
{ .AddChildren }
Group39.AddChildren([Script44]);
Group39.AddRoute(Script44.FdSpine, Extrusion41.EventSet_spine);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody38.AddChildren([Group39]);
{ .SetProtoBody }
ProtoDeclare34.ProtoBody := ProtoBody38;
{ .AddChildren }
Group10.AddChildren([ProtoDeclare34]);
Transform52 := TTransformNode.Create;
Transform52.Scale := Vector3(0.1,0.1,0.1);
ProtoInstance53 := TProtoInstanceNode.Create;
ProtoInstance53.NameField := 'node';
fieldValue54 := TfieldValueNode.Create;
fieldValue54.NameField := 'position';
fieldValue54.Value := '-50 -50 -50';
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue54;
{ .AddChildren }
Transform52.AddChildren([ProtoInstance53]);
ProtoInstance55 := TProtoInstanceNode.Create;
ProtoInstance55.NameField := 'node';
fieldValue56 := TfieldValueNode.Create;
fieldValue56.NameField := 'position';
fieldValue56.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance55.FieldValue := fieldValue56;
{ .AddChildren }
Transform52.AddChildren([ProtoInstance55]);
ProtoInstance57 := TProtoInstanceNode.Create;
ProtoInstance57.NameField := 'cyl';
{ .AddChildren }
Transform52.AddChildren([ProtoInstance57]);
{ .AddChildren }
Group10.AddChildren([Transform52]);
Group10.AddRoute(ProtoInstance53.FdPosition, ProtoInstance57.FdPositiona);
{ .AddX3DRoute }
Group10.AddRoute(ProtoInstance55.FdPosition, ProtoInstance57.FdPositionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
