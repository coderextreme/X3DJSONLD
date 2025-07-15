function forcenode: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group9: TGroupNode;
ProtoDeclare10: TProtoDeclareNode;
ProtoInterface11: TProtoInterfaceNode;
field12: TfieldNode;
ProtoBody13: TProtoBodyNode;
Group14: TGroupNode;
Transform15: TTransformNode;
IS16: TISNode;
connect17: TconnectNode;
Shape18: TShapeNode;
Sphere19: TSphereNode;
Appearance20: TAppearanceNode;
Material21: TMaterialNode;
Transform22: TTransformNode;
Shape23: TShapeNode;
Text24: TTextNode;
FontStyle25: TFontStyleNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
PositionInterpolator28: TPositionInterpolatorNode;
Script29: TScriptNode;
field30: TfieldNode;
field31: TfieldNode;
field32: TfieldNode;
field33: TfieldNode;
TimeSensor34: TTimeSensorNode;
ProtoDeclare39: TProtoDeclareNode;
ProtoInterface40: TProtoInterfaceNode;
field41: TfieldNode;
field42: TfieldNode;
ProtoBody43: TProtoBodyNode;
Group44: TGroupNode;
Shape45: TShapeNode;
Extrusion46: TExtrusionNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
Script49: TScriptNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
IS53: TISNode;
connect54: TconnectNode;
connect55: TconnectNode;
Transform57: TTransformNode;
PlaneSensor58: TPlaneSensorNode;
ProtoInstance59: TProtoInstanceNode;
fieldValue60: TfieldValueNode;
ProtoInstance61: TProtoInstanceNode;
fieldValue62: TfieldValueNode;
ProtoInstance63: TProtoInstanceNode;
fieldValue64: TfieldValueNode;
ProtoInstance65: TProtoInstanceNode;
fieldValue66: TfieldValueNode;
ProtoInstance67: TProtoInstanceNode;
ProtoInstance68: TProtoInstanceNode;
ProtoInstance69: TProtoInstanceNode;
Script70: TScriptNode;
field71: TfieldNode;
field72: TfieldNode;
field73: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'forcenode.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
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
Group14 := TGroupNode.Create;
Transform15 := TTransformNode.Create;
IS16 := TISNode.Create;
connect17 := TconnectNode.Create;
connect17.NodeField := 'translation';
connect17.ProtoField := 'position';
{ .AddConnect }
IS16.Connect := connect17;
{ .SetIS }
Transform15.IS := IS16;
Shape18 := TShapeNode.Create;
Sphere19 := TSphereNode.Create;
{ .SetGeometry }
Shape18.Geometry := Sphere19;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance20.Material := Material21;
{ .SetAppearance }
Shape18.Appearance := Appearance20;
{ .AddChild }
Transform15.AddChildren([Shape18]);
Transform22 := TTransformNode.Create;
Transform22.Translation := Vector3(1,0,1);
Shape23 := TShapeNode.Create;
Text24 := TTextNode.Create;
Text24.SetText(['Node']);
FontStyle25 := TFontStyleNode.Create;
FontStyle25.Justify := fjMiddle;
FontStyle25.JustifyMinor := fjMiddle;
FontStyle25.Size := 5;
{ .SetFontStyle }
Text24.FontStyle := FontStyle25;
{ .SetGeometry }
Shape23.Geometry := Text24;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance26.Material := Material27;
{ .SetAppearance }
Shape23.Appearance := Appearance26;
{ .AddChild }
Transform22.AddChildren([Shape23]);
{ .AddChildren }
Transform15.AddChildren([Transform22]);
{ .AddChildren }
Group14.AddChildren([Transform15]);
PositionInterpolator28 := TPositionInterpolatorNode.Create;
PositionInterpolator28.SetKey([0,1]);
PositionInterpolator28.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group14.AddChildren([PositionInterpolator28]);
Script29 := TScriptNode.Create;
field30 := TfieldNode.Create;
field30.NameField := 'translation';
field30.AccessType := 'inputOutput';
field30.Type := 'SFVec3f';
field30.Value := '50 50 0';
{ .AddField }
Script29.Field := field30;
field31 := TfieldNode.Create;
field31.NameField := 'old';
field31.AccessType := 'inputOutput';
field31.Type := 'SFVec3f';
field31.Value := '0 0 0';
{ .AddField }
Script29.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'set_cycle';
field32.AccessType := 'inputOnly';
field32.Type := 'SFTime';
{ .AddField }
Script29.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'keyValue';
field33.AccessType := 'outputOnly';
field33.Type := 'MFVec3f';
{ .AddField }
Script29.Field := field33;

Script29.SetSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			    			keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}''');
{ .AddChildren }
Group14.AddChildren([Script29]);
TimeSensor34 := TTimeSensorNode.Create;
TimeSensor34.CycleInterval := 3;
TimeSensor34.Loop := True;
{ .AddChildren }
Group14.AddChildren([TimeSensor34]);
Group14.AddRoute(TimeSensor34.FdCycletime, Script29.EventSet_cycle);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor34.EventFraction_changed, PositionInterpolator28.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(Script29.FdKeyvalue, PositionInterpolator28.FdKeyvalue);
{ .AddX3DRoute }
Group14.AddRoute(PositionInterpolator28.EventValue_changed, Transform15.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody13.AddChildren([Group14]);
{ .SetProtoBody }
ProtoDeclare10.ProtoBody := ProtoBody13;
{ .AddChildren }
Group9.AddChildren([ProtoDeclare10]);
ProtoDeclare39 := TProtoDeclareNode.Create;
ProtoDeclare39.NameField := 'cyl';
ProtoInterface40 := TProtoInterfaceNode.Create;
field41 := TfieldNode.Create;
field41.NameField := 'set_positionA';
field41.AccessType := 'inputOutput';
field41.Type := 'SFVec3f';
{ .AddField }
ProtoInterface40.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'set_positionB';
field42.AccessType := 'inputOutput';
field42.Type := 'SFVec3f';
{ .AddField }
ProtoInterface40.Field := field42;
{ .SetProtoInterface }
ProtoDeclare39.ProtoInterface := ProtoInterface40;
ProtoBody43 := TProtoBodyNode.Create;
Group44 := TGroupNode.Create;
Shape45 := TShapeNode.Create;
Extrusion46 := TExtrusionNode.Create;
Extrusion46.CreaseAngle := 0.785;
Extrusion46.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion46.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape45.Geometry := Extrusion46;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance47.Material := Material48;
{ .SetAppearance }
Shape45.Appearance := Appearance47;
{ .AddChildren }
Group44.AddChildren([Shape45]);
Script49 := TScriptNode.Create;
field50 := TfieldNode.Create;
field50.NameField := 'spine';
field50.AccessType := 'inputOutput';
field50.Type := 'MFVec3f';
field50.Value := '0 -50 0 0 0 0 0 50 0';
{ .AddField }
Script49.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'endA';
field51.AccessType := 'inputOutput';
field51.Type := 'SFVec3f';
{ .AddField }
Script49.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'endB';
field52.AccessType := 'inputOutput';
field52.Type := 'SFVec3f';
{ .AddField }
Script49.Field := field52;
IS53 := TISNode.Create;
connect54 := TconnectNode.Create;
connect54.NodeField := 'endA';
connect54.ProtoField := 'set_positionA';
{ .AddConnect }
IS53.Connect := connect54;
connect55 := TconnectNode.Create;
connect55.NodeField := 'endB';
connect55.ProtoField := 'set_positionB';
{ .AddConnect }
IS53.Connect := connect55;
{ .SetIS }
Script49.IS := IS53;

Script49.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }''');
{ .AddChildren }
Group44.AddChildren([Script49]);
Group44.AddRoute(Script49.FdSpine, Extrusion46.EventSet_spine);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody43.AddChildren([Group44]);
{ .SetProtoBody }
ProtoDeclare39.ProtoBody := ProtoBody43;
{ .AddChildren }
Group9.AddChildren([ProtoDeclare39]);
Transform57 := TTransformNode.Create;
Transform57.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor58 := TPlaneSensorNode.Create;
PlaneSensor58.MinPosition := Vector2(-50,-50);
PlaneSensor58.MaxPosition := Vector2(50,50);
PlaneSensor58.Description := 'click on background to add nodes, click on nodes to add links';
{ .AddChildren }
Transform57.AddChildren([PlaneSensor58]);
ProtoInstance59 := TProtoInstanceNode.Create;
ProtoInstance59.NameField := 'node';
fieldValue60 := TfieldValueNode.Create;
fieldValue60.NameField := 'position';
fieldValue60.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance59.FieldValue := fieldValue60;
{ .AddChildren }
Transform57.AddChildren([ProtoInstance59]);
ProtoInstance61 := TProtoInstanceNode.Create;
ProtoInstance61.NameField := 'node';
fieldValue62 := TfieldValueNode.Create;
fieldValue62.NameField := 'position';
fieldValue62.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance61.FieldValue := fieldValue62;
{ .AddChildren }
Transform57.AddChildren([ProtoInstance61]);
ProtoInstance63 := TProtoInstanceNode.Create;
ProtoInstance63.NameField := 'node';
fieldValue64 := TfieldValueNode.Create;
fieldValue64.NameField := 'position';
fieldValue64.Value := '-50 -50 -50';
{ .AddFieldValue }
ProtoInstance63.FieldValue := fieldValue64;
{ .AddChildren }
Transform57.AddChildren([ProtoInstance63]);
ProtoInstance65 := TProtoInstanceNode.Create;
ProtoInstance65.NameField := 'node';
fieldValue66 := TfieldValueNode.Create;
fieldValue66.NameField := 'position';
fieldValue66.Value := '50 50 -50';
{ .AddFieldValue }
ProtoInstance65.FieldValue := fieldValue66;
{ .AddChildren }
Transform57.AddChildren([ProtoInstance65]);
ProtoInstance67 := TProtoInstanceNode.Create;
ProtoInstance67.NameField := 'cyl';
{ .AddChildren }
Transform57.AddChildren([ProtoInstance67]);
ProtoInstance68 := TProtoInstanceNode.Create;
ProtoInstance68.NameField := 'cyl';
{ .AddChildren }
Transform57.AddChildren([ProtoInstance68]);
ProtoInstance69 := TProtoInstanceNode.Create;
ProtoInstance69.NameField := 'cyl';
{ .AddChildren }
Transform57.AddChildren([ProtoInstance69]);
{ .AddChildren }
Group9.AddChildren([Transform57]);
Script70 := TScriptNode.Create;
field71 := TfieldNode.Create;
field71.NameField := 'counter';
field71.AccessType := 'inputOutput';
field71.Value := '0';
field71.Type := 'SFInt32';
{ .AddField }
Script70.Field := field71;
field72 := TfieldNode.Create;
field72.NameField := 'node_changed';
field72.AccessType := 'outputOnly';
field72.Type := 'SFNode';
{ .AddField }
Script70.Field := field72;
field73 := TfieldNode.Create;
field73.NameField := 'add_node';
field73.AccessType := 'inputOnly';
field73.Value := 'false';
field73.Type := 'SFBool';
{ .AddField }
Script70.Field := field73;
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> <Transform USE="HoldsContent"/> </field> }

Script70.SetSourceCode('''ecmascript:\n"+
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
Group9.AddChildren([Script70]);
Group9.AddRoute(PlaneSensor58.FdIsactive, Script70.FdAdd_node);
{ .AddX3DRoute }
Group9.AddRoute(ProtoInstance59.FdPosition, ProtoInstance67.EventSet_positiona);
{ .AddX3DRoute }
Group9.AddRoute(ProtoInstance61.FdPosition, ProtoInstance67.EventSet_positionb);
{ .AddX3DRoute }
Group9.AddRoute(ProtoInstance59.FdPosition, ProtoInstance68.EventSet_positiona);
{ .AddX3DRoute }
Group9.AddRoute(ProtoInstance63.FdPosition, ProtoInstance68.EventSet_positionb);
{ .AddX3DRoute }
Group9.AddRoute(ProtoInstance59.FdPosition, ProtoInstance69.EventSet_positiona);
{ .AddX3DRoute }
Group9.AddRoute(ProtoInstance65.FdPosition, ProtoInstance69.EventSet_positionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group9]);
Result := X3D0;
end;
