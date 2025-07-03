function fors: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group8: TGroupNode;
ProtoDeclare9: TProtoDeclareNode;
ProtoInterface10: TProtoInterfaceNode;
field11: TfieldNode;
ProtoBody12: TProtoBodyNode;
Transform13: TTransformNode;
IS14: TISNode;
connect15: TconnectNode;
Shape16: TShapeNode;
Sphere17: TSphereNode;
Appearance18: TAppearanceNode;
Material19: TMaterialNode;
Transform20: TTransformNode;
Shape21: TShapeNode;
Text22: TTextNode;
FontStyle23: TFontStyleNode;
Appearance24: TAppearanceNode;
Material25: TMaterialNode;
PositionInterpolator26: TPositionInterpolatorNode;
Script27: TScriptNode;
field28: TfieldNode;
field29: TfieldNode;
field30: TfieldNode;
field31: TfieldNode;
TimeSensor32: TTimeSensorNode;
ProtoDeclare37: TProtoDeclareNode;
ProtoInterface38: TProtoInterfaceNode;
field39: TfieldNode;
field40: TfieldNode;
ProtoBody41: TProtoBodyNode;
Shape42: TShapeNode;
Extrusion43: TExtrusionNode;
Appearance44: TAppearanceNode;
Material45: TMaterialNode;
Script46: TScriptNode;
field47: TfieldNode;
field48: TfieldNode;
field49: TfieldNode;
IS50: TISNode;
connect51: TconnectNode;
connect52: TconnectNode;
Transform54: TTransformNode;
PlaneSensor55: TPlaneSensorNode;
ProtoInstance56: TProtoInstanceNode;
fieldValue57: TfieldValueNode;
ProtoInstance58: TProtoInstanceNode;
fieldValue59: TfieldValueNode;
ProtoInstance60: TProtoInstanceNode;
fieldValue61: TfieldValueNode;
fieldValue62: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['title'] := 'fors.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group8 := TGroupNode.Create;
ProtoDeclare9 := TProtoDeclareNode.Create;
ProtoDeclare9.NameField := 'node';
ProtoInterface10 := TProtoInterfaceNode.Create;
field11 := TfieldNode.Create;
field11.NameField := 'position';
field11.AccessType := 'inputOutput';
field11.Type := 'SFVec3f';
field11.Value := '0 0 0';
{ .AddField }
ProtoInterface10.Field := field11;
{ .SetProtoInterface }
ProtoDeclare9.ProtoInterface := ProtoInterface10;
ProtoBody12 := TProtoBodyNode.Create;
Transform13 := TTransformNode.Create;
IS14 := TISNode.Create;
connect15 := TconnectNode.Create;
connect15.NodeField := 'translation';
connect15.ProtoField := 'position';
{ .AddConnect }
IS14.Connect := connect15;
{ .SetIS }
Transform13.IS := IS14;
Shape16 := TShapeNode.Create;
Sphere17 := TSphereNode.Create;
{ .SetGeometry }
Shape16.Geometry := Sphere17;
Appearance18 := TAppearanceNode.Create;
Material19 := TMaterialNode.Create;
Material19.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance18.Material := Material19;
{ .SetAppearance }
Shape16.Appearance := Appearance18;
{ .AddChild }
Transform13.AddChildren([Shape16]);
Transform20 := TTransformNode.Create;
Transform20.Translation := Vector3(1,0,0);
Shape21 := TShapeNode.Create;
Text22 := TTextNode.Create;
Text22.SetText(['Node']);
FontStyle23 := TFontStyleNode.Create;
FontStyle23.Justify := fjMiddle;
FontStyle23.JustifyMinor := fjMiddle;
FontStyle23.Size := 5;
{ .SetFontStyle }
Text22.FontStyle := FontStyle23;
{ .SetGeometry }
Shape21.Geometry := Text22;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance24.Material := Material25;
{ .SetAppearance }
Shape21.Appearance := Appearance24;
{ .AddChild }
Transform20.AddChildren([Shape21]);
{ .AddChildren }
Transform13.AddChildren([Transform20]);
{ .AddChildren }
ProtoBody12.AddChildren([Transform13]);
PositionInterpolator26 := TPositionInterpolatorNode.Create;
PositionInterpolator26.SetKey([0,1]);
PositionInterpolator26.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
ProtoBody12.AddChildren([PositionInterpolator26]);
Script27 := TScriptNode.Create;
field28 := TfieldNode.Create;
field28.NameField := 'translation';
field28.AccessType := 'inputOutput';
field28.Type := 'SFVec3f';
field28.Value := '50 50 0';
{ .AddField }
Script27.Field := field28;
field29 := TfieldNode.Create;
field29.NameField := 'old';
field29.AccessType := 'inputOutput';
field29.Type := 'SFVec3f';
field29.Value := '0 0 0';
{ .AddField }
Script27.Field := field29;
field30 := TfieldNode.Create;
field30.NameField := 'set_cycle';
field30.AccessType := 'inputOnly';
field30.Type := 'SFTime';
{ .AddField }
Script27.Field := field30;
field31 := TfieldNode.Create;
field31.NameField := 'keyValue';
field31.AccessType := 'outputOnly';
field31.Type := 'MFVec3f';
{ .AddField }
Script27.Field := field31;

Script27.SetSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}''');
{ .AddChildren }
ProtoBody12.AddChildren([Script27]);
TimeSensor32 := TTimeSensorNode.Create;
TimeSensor32.CycleInterval := 3;
TimeSensor32.Loop := True;
{ .AddChildren }
ProtoBody12.AddChildren([TimeSensor32]);
ProtoBody12.AddRoute(TimeSensor32.FdCycletime, Script27.EventSet_cycle);
{ .AddX3DRoute }
ProtoBody12.AddRoute(TimeSensor32.EventFraction_changed, PositionInterpolator26.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody12.AddRoute(Script27.FdKeyvalue, PositionInterpolator26.FdKeyvalue);
{ .AddX3DRoute }
ProtoBody12.AddRoute(PositionInterpolator26.EventValue_changed, Transform13.FdTranslation);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare9.ProtoBody := ProtoBody12;
{ .AddChildren }
Group8.AddChildren([ProtoDeclare9]);
ProtoDeclare37 := TProtoDeclareNode.Create;
ProtoDeclare37.NameField := 'cyl';
ProtoInterface38 := TProtoInterfaceNode.Create;
field39 := TfieldNode.Create;
field39.NameField := 'set_positionA';
field39.AccessType := 'inputOnly';
field39.Type := 'SFVec3f';
{ .AddField }
ProtoInterface38.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'set_positionB';
field40.AccessType := 'inputOnly';
field40.Type := 'SFVec3f';
{ .AddField }
ProtoInterface38.Field := field40;
{ .SetProtoInterface }
ProtoDeclare37.ProtoInterface := ProtoInterface38;
ProtoBody41 := TProtoBodyNode.Create;
Shape42 := TShapeNode.Create;
Extrusion43 := TExtrusionNode.Create;
Extrusion43.CreaseAngle := 0.785;
Extrusion43.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion43.SetSpine([Vector3(0,-50,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape42.Geometry := Extrusion43;
Appearance44 := TAppearanceNode.Create;
Material45 := TMaterialNode.Create;
Material45.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance44.Material := Material45;
{ .SetAppearance }
Shape42.Appearance := Appearance44;
{ .AddChildren }
ProtoBody41.AddChildren([Shape42]);
Script46 := TScriptNode.Create;
field47 := TfieldNode.Create;
field47.NameField := 'spine';
field47.AccessType := 'inputOutput';
field47.Type := 'MFVec3f';
field47.Value := '0 -50 0 0 50 0';
{ .AddField }
Script46.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'set_endA';
field48.AccessType := 'inputOnly';
field48.Type := 'SFVec3f';
{ .AddField }
Script46.Field := field48;
field49 := TfieldNode.Create;
field49.NameField := 'set_endB';
field49.AccessType := 'inputOnly';
field49.Type := 'SFVec3f';
{ .AddField }
Script46.Field := field49;
IS50 := TISNode.Create;
connect51 := TconnectNode.Create;
connect51.NodeField := 'set_endA';
connect51.ProtoField := 'set_positionA';
{ .AddConnect }
IS50.Connect := connect51;
connect52 := TconnectNode.Create;
connect52.NodeField := 'set_endB';
connect52.ProtoField := 'set_positionB';
{ .AddConnect }
IS50.Connect := connect52;
{ .SetIS }
Script46.IS := IS50;

Script46.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }''');
{ .AddChildren }
ProtoBody41.AddChildren([Script46]);
ProtoBody41.AddRoute(Script46.FdSpine, Extrusion43.EventSet_spine);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare37.ProtoBody := ProtoBody41;
{ .AddChildren }
Group8.AddChildren([ProtoDeclare37]);
Transform54 := TTransformNode.Create;
Transform54.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor55 := TPlaneSensorNode.Create;
PlaneSensor55.MinPosition := Vector2(-50,-50);
PlaneSensor55.MaxPosition := Vector2(50,50);
PlaneSensor55.Description := 'click on background to add nodes, click on nodes to add links';
{ .AddChildren }
Transform54.AddChildren([PlaneSensor55]);
ProtoInstance56 := TProtoInstanceNode.Create;
ProtoInstance56.NameField := 'node';
fieldValue57 := TfieldValueNode.Create;
fieldValue57.NameField := 'position';
fieldValue57.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance56.FieldValue := fieldValue57;
{ .AddChildren }
Transform54.AddChildren([ProtoInstance56]);
ProtoInstance58 := TProtoInstanceNode.Create;
ProtoInstance58.NameField := 'node';
fieldValue59 := TfieldValueNode.Create;
fieldValue59.NameField := 'position';
fieldValue59.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance58.FieldValue := fieldValue59;
{ .AddChildren }
Transform54.AddChildren([ProtoInstance58]);
ProtoInstance60 := TProtoInstanceNode.Create;
ProtoInstance60.NameField := 'cyl';
fieldValue61 := TfieldValueNode.Create;
fieldValue61.NameField := 'set_positionA';
fieldValue61.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance60.FieldValue := fieldValue61;
fieldValue62 := TfieldValueNode.Create;
fieldValue62.NameField := 'set_positionB';
fieldValue62.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance60.FieldValue := fieldValue62;
{ .AddChildren }
Transform54.AddChildren([ProtoInstance60]);
{ .AddChildren }
Group8.AddChildren([Transform54]);
Group8.AddRoute(ProtoInstance56.FdPosition, ProtoInstance60.EventSet_positiona);
{ .AddX3DRoute }
Group8.AddRoute(ProtoInstance58.FdPosition, ProtoInstance60.EventSet_positionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group8]);
Result := X3D0;
end;
