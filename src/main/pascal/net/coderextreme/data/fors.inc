function fors: TX3DRootNode;
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
Transform23: TTransformNode;
Shape24: TShapeNode;
Text25: TTextNode;
FontStyle26: TFontStyleNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
PositionInterpolator29: TPositionInterpolatorNode;
Script30: TScriptNode;
field31: TfieldNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
TimeSensor35: TTimeSensorNode;
ProtoDeclare40: TProtoDeclareNode;
ProtoInterface41: TProtoInterfaceNode;
field42: TfieldNode;
field43: TfieldNode;
ProtoBody44: TProtoBodyNode;
Group45: TGroupNode;
Shape46: TShapeNode;
Extrusion47: TExtrusionNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Script50: TScriptNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
IS54: TISNode;
connect55: TconnectNode;
connect56: TconnectNode;
Transform58: TTransformNode;
PlaneSensor59: TPlaneSensorNode;
ProtoInstance60: TProtoInstanceNode;
fieldValue61: TfieldValueNode;
ProtoInstance62: TProtoInstanceNode;
fieldValue63: TfieldValueNode;
ProtoInstance64: TProtoInstanceNode;
Script65: TScriptNode;
field66: TfieldNode;
field67: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'fors.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
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
Sphere20 := TSphereNode.Create;
{ .SetGeometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape19.Appearance := Appearance21;
{ .AddChild }
Transform16.AddChildren([Shape19]);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(1,0,0);
Shape24 := TShapeNode.Create;
Text25 := TTextNode.Create;
Text25.SetText(['Node']);
FontStyle26 := TFontStyleNode.Create;
FontStyle26.Justify := fjMiddle;
FontStyle26.JustifyMinor := fjMiddle;
FontStyle26.Size := 5;
{ .SetFontStyle }
Text25.FontStyle := FontStyle26;
{ .SetGeometry }
Shape24.Geometry := Text25;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance27.Material := Material28;
{ .SetAppearance }
Shape24.Appearance := Appearance27;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Transform16.AddChildren([Transform23]);
{ .AddChildren }
Group15.AddChildren([Transform16]);
PositionInterpolator29 := TPositionInterpolatorNode.Create;
PositionInterpolator29.SetKey([0,1]);
PositionInterpolator29.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group15.AddChildren([PositionInterpolator29]);
Script30 := TScriptNode.Create;
field31 := TfieldNode.Create;
field31.NameField := 'translation';
field31.AccessType := 'inputOutput';
field31.Type := 'SFVec3f';
field31.Value := '50 50 0';
{ .AddField }
Script30.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'old';
field32.AccessType := 'inputOutput';
field32.Type := 'SFVec3f';
field32.Value := '0 0 0';
{ .AddField }
Script30.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'set_cycle';
field33.AccessType := 'inputOnly';
field33.Type := 'SFTime';
{ .AddField }
Script30.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'keyValue';
field34.AccessType := 'outputOnly';
field34.Type := 'MFVec3f';
{ .AddField }
Script30.Field := field34;

Script30.SetSourceCode('''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}''');
{ .AddChildren }
Group15.AddChildren([Script30]);
TimeSensor35 := TTimeSensorNode.Create;
TimeSensor35.CycleInterval := 3;
TimeSensor35.Loop := True;
{ .AddChildren }
Group15.AddChildren([TimeSensor35]);
Group15.AddRoute(TimeSensor35.FdCycletime, Script30.EventSet_cycle);
{ .AddX3DRoute }
Group15.AddRoute(TimeSensor35.EventFraction_changed, PositionInterpolator29.EventSet_fraction);
{ .AddX3DRoute }
Group15.AddRoute(Script30.FdKeyvalue, PositionInterpolator29.FdKeyvalue);
{ .AddX3DRoute }
Group15.AddRoute(PositionInterpolator29.EventValue_changed, Transform16.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody14.AddChildren([Group15]);
{ .SetProtoBody }
ProtoDeclare11.ProtoBody := ProtoBody14;
{ .AddChildren }
Group10.AddChildren([ProtoDeclare11]);
ProtoDeclare40 := TProtoDeclareNode.Create;
ProtoDeclare40.NameField := 'cyl';
ProtoInterface41 := TProtoInterfaceNode.Create;
field42 := TfieldNode.Create;
field42.NameField := 'set_positionA';
field42.AccessType := 'inputOutput';
field42.Type := 'SFVec3f';
field42.Value := '0 0 0';
{ .AddField }
ProtoInterface41.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'set_positionB';
field43.AccessType := 'inputOutput';
field43.Type := 'SFVec3f';
field43.Value := '50 50 50';
{ .AddField }
ProtoInterface41.Field := field43;
{ .SetProtoInterface }
ProtoDeclare40.ProtoInterface := ProtoInterface41;
ProtoBody44 := TProtoBodyNode.Create;
Group45 := TGroupNode.Create;
Shape46 := TShapeNode.Create;
Extrusion47 := TExtrusionNode.Create;
Extrusion47.CreaseAngle := 0.785;
Extrusion47.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion47.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape46.Geometry := Extrusion47;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance48.Material := Material49;
{ .SetAppearance }
Shape46.Appearance := Appearance48;
{ .AddChildren }
Group45.AddChildren([Shape46]);
Script50 := TScriptNode.Create;
field51 := TfieldNode.Create;
field51.NameField := 'spine';
field51.AccessType := 'inputOutput';
field51.Type := 'MFVec3f';
field51.Value := '0 -50 0 0 0 0 0 50 0';
{ .AddField }
Script50.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'endA';
field52.AccessType := 'inputOutput';
field52.Type := 'SFVec3f';
field52.Value := '0 0 0';
{ .AddField }
Script50.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'endB';
field53.AccessType := 'inputOutput';
field53.Type := 'SFVec3f';
field53.Value := '50 50 50';
{ .AddField }
Script50.Field := field53;
IS54 := TISNode.Create;
connect55 := TconnectNode.Create;
connect55.NodeField := 'endA';
connect55.ProtoField := 'set_positionA';
{ .AddConnect }
IS54.Connect := connect55;
connect56 := TconnectNode.Create;
connect56.NodeField := 'endB';
connect56.ProtoField := 'set_positionB';
{ .AddConnect }
IS54.Connect := connect56;
{ .SetIS }
Script50.IS := IS54;

Script50.SetSourceCode('''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}''');
{ .AddChildren }
Group45.AddChildren([Script50]);
Group45.AddRoute(Script50.FdSpine, Extrusion47.EventSet_spine);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody44.AddChildren([Group45]);
{ .SetProtoBody }
ProtoDeclare40.ProtoBody := ProtoBody44;
{ .AddChildren }
Group10.AddChildren([ProtoDeclare40]);
Transform58 := TTransformNode.Create;
Transform58.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor59 := TPlaneSensorNode.Create;
PlaneSensor59.MinPosition := Vector2(-50,-50);
PlaneSensor59.MaxPosition := Vector2(50,50);
PlaneSensor59.Description := 'click on background to add nodes, click on nodes to add links';
{ .AddChildren }
Transform58.AddChildren([PlaneSensor59]);
ProtoInstance60 := TProtoInstanceNode.Create;
ProtoInstance60.NameField := 'node';
fieldValue61 := TfieldValueNode.Create;
fieldValue61.NameField := 'position';
fieldValue61.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance60.FieldValue := fieldValue61;
{ .AddChildren }
Transform58.AddChildren([ProtoInstance60]);
ProtoInstance62 := TProtoInstanceNode.Create;
ProtoInstance62.NameField := 'node';
fieldValue63 := TfieldValueNode.Create;
fieldValue63.NameField := 'position';
fieldValue63.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance62.FieldValue := fieldValue63;
{ .AddChildren }
Transform58.AddChildren([ProtoInstance62]);
ProtoInstance64 := TProtoInstanceNode.Create;
ProtoInstance64.NameField := 'cyl';
{ .AddChildren }
Transform58.AddChildren([ProtoInstance64]);
{ .AddChildren }
Group10.AddChildren([Transform58]);
Script65 := TScriptNode.Create;
field66 := TfieldNode.Create;
field66.NameField := 'counter';
field66.AccessType := 'inputOutput';
field66.Value := '0';
field66.Type := 'SFInt32';
{ .AddField }
Script65.Field := field66;
field67 := TfieldNode.Create;
field67.NameField := 'add_node';
field67.AccessType := 'inputOnly';
field67.Value := 'false';
field67.Type := 'SFBool';
{ .AddField }
Script65.Field := field67;
{ <field accessType="outputOnly" name="node_changed" type="SFNode"/> }
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> }
{ <Transform USE="HoldsContent"/> }
{ </field> }

Script65.SetSourceCode('''ecmascript:\n"+
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
Group10.AddChildren([Script65]);
Group10.AddRoute(PlaneSensor59.FdIsactive, Script65.FdAdd_node);
{ .AddX3DRoute }
Group10.AddRoute(ProtoInstance60.FdPosition, ProtoInstance64.EventSet_positiona);
{ .AddX3DRoute }
Group10.AddRoute(ProtoInstance62.FdPosition, ProtoInstance64.EventSet_positionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
