function force_tidy: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group12: TGroupNode;
ProtoDeclare13: TProtoDeclareNode;
ProtoInterface14: TProtoInterfaceNode;
field15: TfieldNode;
ProtoBody16: TProtoBodyNode;
Group17: TGroupNode;
Transform18: TTransformNode;
IS19: TISNode;
connect20: TconnectNode;
Shape21: TShapeNode;
Sphere22: TSphereNode;
Appearance23: TAppearanceNode;
Material24: TMaterialNode;
Transform25: TTransformNode;
Shape26: TShapeNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
Text29: TTextNode;
FontStyle30: TFontStyleNode;
PositionInterpolator31: TPositionInterpolatorNode;
Script32: TScriptNode;
field33: TfieldNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
TimeSensor37: TTimeSensorNode;
ProtoDeclare42: TProtoDeclareNode;
ProtoInterface43: TProtoInterfaceNode;
field44: TfieldNode;
field45: TfieldNode;
ProtoBody46: TProtoBodyNode;
Group47: TGroupNode;
Shape48: TShapeNode;
Appearance49: TAppearanceNode;
Material50: TMaterialNode;
Extrusion51: TExtrusionNode;
Script52: TScriptNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
IS56: TISNode;
connect57: TconnectNode;
connect58: TconnectNode;
Transform60: TTransformNode;
PlaneSensor61: TPlaneSensorNode;
ProtoInstance62: TProtoInstanceNode;
fieldValue63: TfieldValueNode;
ProtoInstance64: TProtoInstanceNode;
fieldValue65: TfieldValueNode;
ProtoInstance66: TProtoInstanceNode;
fieldValue67: TfieldValueNode;
ProtoInstance68: TProtoInstanceNode;
fieldValue69: TfieldValueNode;
ProtoInstance70: TProtoInstanceNode;
ProtoInstance71: TProtoInstanceNode;
ProtoInstance72: TProtoInstanceNode;
Script73: TScriptNode;
field74: TfieldNode;
field75: TfieldNode;
field76: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'force.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['generator'] := 'x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy';
X3D0.Meta['modified'] := 'Sat, 9 Nov 2024 19:29:39 GMT';
Group12 := TGroupNode.Create;
ProtoDeclare13 := TProtoDeclareNode.Create;
ProtoDeclare13.NameField := 'node';
ProtoInterface14 := TProtoInterfaceNode.Create;
field15 := TfieldNode.Create;
field15.NameField := 'position';
field15.AccessType := 'inputOutput';
field15.Type := 'SFVec3f';
{ .AddField }
ProtoInterface14.Field := field15;
{ .SetProtoInterface }
ProtoDeclare13.ProtoInterface := ProtoInterface14;
ProtoBody16 := TProtoBodyNode.Create;
Group17 := TGroupNode.Create;
Transform18 := TTransformNode.Create;
IS19 := TISNode.Create;
connect20 := TconnectNode.Create;
connect20.NodeField := 'translation';
connect20.ProtoField := 'position';
{ .AddConnect }
IS19.Connect := connect20;
{ .SetIS }
Transform18.IS := IS19;
Shape21 := TShapeNode.Create;
Sphere22 := TSphereNode.Create;
{ .SetGeometry }
Shape21.Geometry := Sphere22;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance23.Material := Material24;
{ .SetAppearance }
Shape21.Appearance := Appearance23;
{ .AddChild }
Transform18.AddChildren([Shape21]);
Transform25 := TTransformNode.Create;
Transform25.Translation := Vector3(1,0,0);
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance27.Material := Material28;
{ .SetAppearance }
Shape26.Appearance := Appearance27;
Text29 := TTextNode.Create;
Text29.SetText(['Node']);
FontStyle30 := TFontStyleNode.Create;
FontStyle30.Size := 5;
FontStyle30.Justify := fjMiddle;
FontStyle30.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text29.FontStyle := FontStyle30;
{ .SetGeometry }
Shape26.Geometry := Text29;
{ .AddChild }
Transform25.AddChildren([Shape26]);
{ .AddChildren }
Transform18.AddChildren([Transform25]);
{ .AddChildren }
Group17.AddChildren([Transform18]);
PositionInterpolator31 := TPositionInterpolatorNode.Create;
PositionInterpolator31.SetKey([0,1]);
PositionInterpolator31.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group17.AddChildren([PositionInterpolator31]);
Script32 := TScriptNode.Create;
field33 := TfieldNode.Create;
field33.NameField := 'translation';
field33.AccessType := 'inputOutput';
field33.Type := 'SFVec3f';
field33.Value := '50 50 0';
{ .AddField }
Script32.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'old';
field34.AccessType := 'inputOutput';
field34.Type := 'SFVec3f';
{ .AddField }
Script32.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'set_cycle';
field35.AccessType := 'inputOnly';
field35.Type := 'SFTime';
{ .AddField }
Script32.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'keyValue';
field36.AccessType := 'outputOnly';
field36.Type := 'MFVec3f';
{ .AddField }
Script32.Field := field36;

Script32.SetSourceCode('''ecmascript:\n"+
"		function set_cycle(value) {\n"+
"			old = translation;\n"+
"			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			keyValue = new MFVec3f(old, translation);\n"+
"		}''');
{ .AddChildren }
Group17.AddChildren([Script32]);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.CycleInterval := 3;
TimeSensor37.Loop := True;
{ .AddChildren }
Group17.AddChildren([TimeSensor37]);
Group17.AddRoute(TimeSensor37.FdCycletime, Script32.EventSet_cycle);
{ .AddX3DRoute }
Group17.AddRoute(TimeSensor37.EventFraction_changed, PositionInterpolator31.EventSet_fraction);
{ .AddX3DRoute }
Group17.AddRoute(Script32.FdKeyvalue, PositionInterpolator31.EventSet_keyvalue);
{ .AddX3DRoute }
Group17.AddRoute(PositionInterpolator31.EventValue_changed, Transform18.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody16.AddChildren([Group17]);
{ .SetProtoBody }
ProtoDeclare13.ProtoBody := ProtoBody16;
{ .AddChildren }
Group12.AddChildren([ProtoDeclare13]);
ProtoDeclare42 := TProtoDeclareNode.Create;
ProtoDeclare42.NameField := 'cyl';
ProtoInterface43 := TProtoInterfaceNode.Create;
field44 := TfieldNode.Create;
field44.NameField := 'set_positionA';
field44.AccessType := 'inputOutput';
field44.Type := 'SFVec3f';
{ .AddField }
ProtoInterface43.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'set_positionB';
field45.AccessType := 'inputOutput';
field45.Type := 'SFVec3f';
{ .AddField }
ProtoInterface43.Field := field45;
{ .SetProtoInterface }
ProtoDeclare42.ProtoInterface := ProtoInterface43;
ProtoBody46 := TProtoBodyNode.Create;
Group47 := TGroupNode.Create;
Shape48 := TShapeNode.Create;
Appearance49 := TAppearanceNode.Create;
Material50 := TMaterialNode.Create;
Material50.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance49.Material := Material50;
{ .SetAppearance }
Shape48.Appearance := Appearance49;
Extrusion51 := TExtrusionNode.Create;
Extrusion51.CreaseAngle := 0.785;
Extrusion51.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion51.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape48.Geometry := Extrusion51;
{ .AddChildren }
Group47.AddChildren([Shape48]);
Script52 := TScriptNode.Create;
field53 := TfieldNode.Create;
field53.NameField := 'spine';
field53.AccessType := 'inputOutput';
field53.Type := 'MFVec3f';
field53.Value := '0 -50 0 0 0 0 0 50 0';
{ .AddField }
Script52.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'endA';
field54.AccessType := 'inputOutput';
field54.Type := 'SFVec3f';
{ .AddField }
Script52.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'endB';
field55.AccessType := 'inputOutput';
field55.Type := 'SFVec3f';
{ .AddField }
Script52.Field := field55;
IS56 := TISNode.Create;
connect57 := TconnectNode.Create;
connect57.NodeField := 'endA';
connect57.ProtoField := 'set_positionA';
{ .AddConnect }
IS56.Connect := connect57;
connect58 := TconnectNode.Create;
connect58.NodeField := 'endB';
connect58.ProtoField := 'set_positionB';
{ .AddConnect }
IS56.Connect := connect58;
{ .SetIS }
Script52.IS := IS56;

Script52.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }''');
{ .AddChildren }
Group47.AddChildren([Script52]);
Group47.AddRoute(Script52.EventSpine_changed, Extrusion51.EventSet_spine);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody46.AddChildren([Group47]);
{ .SetProtoBody }
ProtoDeclare42.ProtoBody := ProtoBody46;
{ .AddChildren }
Group12.AddChildren([ProtoDeclare42]);
Transform60 := TTransformNode.Create;
Transform60.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor61 := TPlaneSensorNode.Create;
PlaneSensor61.Description := 'click on background to add nodes, click on nodes to add links';
PlaneSensor61.MinPosition := Vector2(-50,-50);
PlaneSensor61.MaxPosition := Vector2(50,50);
{ .AddChildren }
Transform60.AddChildren([PlaneSensor61]);
ProtoInstance62 := TProtoInstanceNode.Create;
ProtoInstance62.NameField := 'node';
fieldValue63 := TfieldValueNode.Create;
fieldValue63.NameField := 'position';
fieldValue63.Value := '0 1.388333 0';
{ .AddFieldValue }
ProtoInstance62.FieldValue := fieldValue63;
{ .AddChildren }
Transform60.AddChildren([ProtoInstance62]);
ProtoInstance64 := TProtoInstanceNode.Create;
ProtoInstance64.NameField := 'node';
fieldValue65 := TfieldValueNode.Create;
fieldValue65.NameField := 'position';
fieldValue65.Value := '0 1.388333 0';
{ .AddFieldValue }
ProtoInstance64.FieldValue := fieldValue65;
{ .AddChildren }
Transform60.AddChildren([ProtoInstance64]);
ProtoInstance66 := TProtoInstanceNode.Create;
ProtoInstance66.NameField := 'node';
fieldValue67 := TfieldValueNode.Create;
fieldValue67.NameField := 'position';
fieldValue67.Value := '0 1.388333 0';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue67;
{ .AddChildren }
Transform60.AddChildren([ProtoInstance66]);
ProtoInstance68 := TProtoInstanceNode.Create;
ProtoInstance68.NameField := 'node';
fieldValue69 := TfieldValueNode.Create;
fieldValue69.NameField := 'position';
fieldValue69.Value := '0 1.388333 0';
{ .AddFieldValue }
ProtoInstance68.FieldValue := fieldValue69;
{ .AddChildren }
Transform60.AddChildren([ProtoInstance68]);
ProtoInstance70 := TProtoInstanceNode.Create;
ProtoInstance70.NameField := 'cyl';
{ .AddChildren }
Transform60.AddChildren([ProtoInstance70]);
ProtoInstance71 := TProtoInstanceNode.Create;
ProtoInstance71.NameField := 'cyl';
{ .AddChildren }
Transform60.AddChildren([ProtoInstance71]);
ProtoInstance72 := TProtoInstanceNode.Create;
ProtoInstance72.NameField := 'cyl';
{ .AddChildren }
Transform60.AddChildren([ProtoInstance72]);
{ .AddChildren }
Group12.AddChildren([Transform60]);
Script73 := TScriptNode.Create;
field74 := TfieldNode.Create;
field74.NameField := 'counter';
field74.AccessType := 'inputOutput';
field74.Type := 'SFInt32';
{ .AddField }
Script73.Field := field74;
field75 := TfieldNode.Create;
field75.NameField := 'node_changed';
field75.AccessType := 'outputOnly';
field75.Type := 'SFNode';
{ .AddField }
Script73.Field := field75;
field76 := TfieldNode.Create;
field76.NameField := 'add_node';
field76.AccessType := 'inputOnly';
field76.Type := 'SFBool';
{ .AddField }
Script73.Field := field76;

Script73.SetSourceCode('''ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\n"+
"			{ \"ProtoInstance\":\n"+
"				{ \"@name\":\"node\",\n"+
"				  \"@DEF\":\"node'+counter+'\",\n"+
"				  \"fieldValue\": [\n"+
"					{\n"+
"						 \"@name\":\"position\",\n"+
"						 \"@value\":[0.0,0.0,0.0]\n"+
"					}\n"+
"				  ]\n"+
"				}\n"+
"			});\n"+
"\n"+
"        }''');
{ .AddChildren }
Group12.AddChildren([Script73]);
Group12.AddRoute(PlaneSensor61.FdIsactive, Script73.FdAdd_node);
{ .AddX3DRoute }
Group12.AddRoute(ProtoInstance62.EventPosition_changed, ProtoInstance70.EventSet_positiona);
{ .AddX3DRoute }
Group12.AddRoute(ProtoInstance64.EventPosition_changed, ProtoInstance70.EventSet_positionb);
{ .AddX3DRoute }
Group12.AddRoute(ProtoInstance62.EventPosition_changed, ProtoInstance71.EventSet_positiona);
{ .AddX3DRoute }
Group12.AddRoute(ProtoInstance66.EventPosition_changed, ProtoInstance71.EventSet_positionb);
{ .AddX3DRoute }
Group12.AddRoute(ProtoInstance62.EventPosition_changed, ProtoInstance72.EventSet_positiona);
{ .AddX3DRoute }
Group12.AddRoute(ProtoInstance68.EventPosition_changed, ProtoInstance72.EventSet_positionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group12]);
Result := X3D0;
end;
