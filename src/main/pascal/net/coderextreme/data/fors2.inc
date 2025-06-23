function fors2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group9: TGroupNode;
ProtoDeclare10: TProtoDeclareNode;
ProtoInterface11: TProtoInterfaceNode;
field12: TfieldNode;
ProtoBody13: TProtoBodyNode;
Transform14: TTransformNode;
IS15: TISNode;
connect16: TconnectNode;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
PositionInterpolator21: TPositionInterpolatorNode;
Script22: TScriptNode;
field23: TfieldNode;
field24: TfieldNode;
field25: TfieldNode;
field26: TfieldNode;
TimeSensor27: TTimeSensorNode;
ProtoDeclare32: TProtoDeclareNode;
ProtoInterface33: TProtoInterfaceNode;
field34: TfieldNode;
field35: TfieldNode;
ProtoBody36: TProtoBodyNode;
Shape37: TShapeNode;
Extrusion38: TExtrusionNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;
Script41: TScriptNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
IS45: TISNode;
connect46: TconnectNode;
connect47: TconnectNode;
Transform49: TTransformNode;
ProtoInstance50: TProtoInstanceNode;
fieldValue51: TfieldValueNode;
ProtoInstance52: TProtoInstanceNode;
fieldValue53: TfieldValueNode;
ProtoInstance54: TProtoInstanceNode;
fieldValue55: TfieldValueNode;
fieldValue56: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'April 18 2017';
X3D0.Meta['title'] := 'fors2.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group9 := TGroupNode.Create;
ProtoDeclare10 := TProtoDeclareNode.Create;
ProtoDeclare10.NameField := 'node';
ProtoInterface11 := TProtoInterfaceNode.Create;
field12 := TfieldNode.Create;
field12.NameField := 'position';
field12.AccessType := 'inputOutput';
field12.Type := 'SFVec3f';
field12.Value := '0 0 0';
{ .AddField }
ProtoInterface11.Field := field12;
{ .SetProtoInterface }
ProtoDeclare10.ProtoInterface := ProtoInterface11;
ProtoBody13 := TProtoBodyNode.Create;
Transform14 := TTransformNode.Create;
IS15 := TISNode.Create;
connect16 := TconnectNode.Create;
connect16.NodeField := 'translation';
connect16.ProtoField := 'position';
{ .AddConnect }
IS15.Connect := connect16;
{ .SetIS }
Transform14.IS := IS15;
Shape17 := TShapeNode.Create;
{ comment before Sphere }
{ comment after Sphere }
{ comment after Appearance }
Sphere18 := TSphereNode.Create;
{ .SetGeometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
{ comment before Material }
{ comment after Material }
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape17.Appearance := Appearance19;
{ .AddChild }
Transform14.AddChildren([Shape17]);
{ .AddChildren }
ProtoBody13.AddChildren([Transform14]);
PositionInterpolator21 := TPositionInterpolatorNode.Create;
PositionInterpolator21.SetKey([0,1]);
PositionInterpolator21.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
ProtoBody13.AddChildren([PositionInterpolator21]);
Script22 := TScriptNode.Create;
field23 := TfieldNode.Create;
field23.NameField := 'translation';
field23.AccessType := 'inputOutput';
field23.Type := 'SFVec3f';
field23.Value := '50 50 0';
{ .AddField }
Script22.Field := field23;
field24 := TfieldNode.Create;
field24.NameField := 'old';
field24.AccessType := 'inputOutput';
field24.Type := 'SFVec3f';
field24.Value := '0 0 0';
{ .AddField }
Script22.Field := field24;
field25 := TfieldNode.Create;
field25.NameField := 'set_cycle';
field25.AccessType := 'inputOnly';
field25.Type := 'SFTime';
{ .AddField }
Script22.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'keyValue';
field26.AccessType := 'outputOnly';
field26.Type := 'MFVec3f';
{ .AddField }
Script22.Field := field26;

Script22.SetSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}''');
{ .AddChildren }
ProtoBody13.AddChildren([Script22]);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.CycleInterval := 3;
TimeSensor27.Loop := True;
{ .AddChildren }
ProtoBody13.AddChildren([TimeSensor27]);
ProtoBody13.AddRoute(TimeSensor27.FdCycletime, Script22.EventSet_cycle);
{ .AddX3DRoute }
ProtoBody13.AddRoute(TimeSensor27.EventFraction_changed, PositionInterpolator21.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody13.AddRoute(Script22.FdKeyvalue, PositionInterpolator21.FdKeyvalue);
{ .AddX3DRoute }
ProtoBody13.AddRoute(PositionInterpolator21.EventValue_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare10.ProtoBody := ProtoBody13;
{ .AddChildren }
Group9.AddChildren([ProtoDeclare10]);
ProtoDeclare32 := TProtoDeclareNode.Create;
ProtoDeclare32.NameField := 'cyl';
ProtoInterface33 := TProtoInterfaceNode.Create;
field34 := TfieldNode.Create;
field34.NameField := 'positionA';
field34.AccessType := 'inputOnly';
field34.Type := 'SFVec3f';
{ .AddField }
ProtoInterface33.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'positionB';
field35.AccessType := 'inputOnly';
field35.Type := 'SFVec3f';
{ .AddField }
ProtoInterface33.Field := field35;
{ .SetProtoInterface }
ProtoDeclare32.ProtoInterface := ProtoInterface33;
ProtoBody36 := TProtoBodyNode.Create;
Shape37 := TShapeNode.Create;
Extrusion38 := TExtrusionNode.Create;
Extrusion38.CreaseAngle := 0.785;
Extrusion38.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion38.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape37.Geometry := Extrusion38;
Appearance39 := TAppearanceNode.Create;
Material40 := TMaterialNode.Create;
Material40.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance39.Material := Material40;
{ .SetAppearance }
Shape37.Appearance := Appearance39;
{ .AddChildren }
ProtoBody36.AddChildren([Shape37]);
Script41 := TScriptNode.Create;
field42 := TfieldNode.Create;
field42.NameField := 'spine';
field42.AccessType := 'inputOutput';
field42.Type := 'MFVec3f';
field42.Value := '0 -50 0 0 0 0 0 50 0';
{ .AddField }
Script41.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'set_endA';
field43.AccessType := 'inputOnly';
field43.Type := 'SFVec3f';
{ .AddField }
Script41.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'set_endB';
field44.AccessType := 'inputOnly';
field44.Type := 'SFVec3f';
{ .AddField }
Script41.Field := field44;
IS45 := TISNode.Create;
connect46 := TconnectNode.Create;
connect46.NodeField := 'set_endA';
connect46.ProtoField := 'positionA';
{ .AddConnect }
IS45.Connect := connect46;
connect47 := TconnectNode.Create;
connect47.NodeField := 'set_endB';
connect47.ProtoField := 'positionB';
{ .AddConnect }
IS45.Connect := connect47;
{ .SetIS }
Script41.IS := IS45;

Script41.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }''');
{ .AddChildren }
ProtoBody36.AddChildren([Script41]);
ProtoBody36.AddRoute(Script41.FdSpine, Extrusion38.EventSet_spine);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare32.ProtoBody := ProtoBody36;
{ .AddChildren }
Group9.AddChildren([ProtoDeclare32]);
Transform49 := TTransformNode.Create;
Transform49.Scale := Vector3(0.1,0.1,0.1);
ProtoInstance50 := TProtoInstanceNode.Create;
ProtoInstance50.NameField := 'node';
fieldValue51 := TfieldValueNode.Create;
fieldValue51.NameField := 'position';
fieldValue51.Value := '-50 -50 -50';
{ .AddFieldValue }
ProtoInstance50.FieldValue := fieldValue51;
{ .AddChildren }
Transform49.AddChildren([ProtoInstance50]);
ProtoInstance52 := TProtoInstanceNode.Create;
ProtoInstance52.NameField := 'node';
fieldValue53 := TfieldValueNode.Create;
fieldValue53.NameField := 'position';
fieldValue53.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance52.FieldValue := fieldValue53;
{ .AddChildren }
Transform49.AddChildren([ProtoInstance52]);
ProtoInstance54 := TProtoInstanceNode.Create;
ProtoInstance54.NameField := 'cyl';
fieldValue55 := TfieldValueNode.Create;
fieldValue55.NameField := 'positionA';
fieldValue55.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance54.FieldValue := fieldValue55;
fieldValue56 := TfieldValueNode.Create;
fieldValue56.NameField := 'positionB';
fieldValue56.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance54.FieldValue := fieldValue56;
{ .AddChildren }
Transform49.AddChildren([ProtoInstance54]);
{ .AddChildren }
Group9.AddChildren([Transform49]);
Group9.AddRoute(ProtoInstance50.FdPosition, ProtoInstance54.FdPositiona);
{ .AddX3DRoute }
Group9.AddRoute(ProtoInstance52.FdPosition, ProtoInstance54.FdPositionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group9]);
Result := X3D0;
end;
