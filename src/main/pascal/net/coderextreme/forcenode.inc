function forcenode: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group8: TGroupNode;
ProtoDeclare9: TProtoDeclareNode;
ProtoInterface10: TProtoInterfaceNode;
field11: TfieldNode;
ProtoBody12: TProtoBodyNode;
Group13: TGroupNode;
Transform14: TTransformNode;
IS15: TISNode;
connect16: TconnectNode;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
Transform21: TTransformNode;
Shape22: TShapeNode;
Text23: TTextNode;
FontStyle24: TFontStyleNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
PositionInterpolator27: TPositionInterpolatorNode;
Script28: TScriptNode;
field29: TfieldNode;
field30: TfieldNode;
field31: TfieldNode;
field32: TfieldNode;
TimeSensor33: TTimeSensorNode;
ProtoDeclare38: TProtoDeclareNode;
ProtoInterface39: TProtoInterfaceNode;
field40: TfieldNode;
field41: TfieldNode;
ProtoBody42: TProtoBodyNode;
Group43: TGroupNode;
Shape44: TShapeNode;
Extrusion45: TExtrusionNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
Script48: TScriptNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
IS52: TISNode;
connect53: TconnectNode;
connect54: TconnectNode;
Transform56: TTransformNode;
PlaneSensor57: TPlaneSensorNode;
ProtoInstance58: TProtoInstanceNode;
fieldValue59: TfieldValueNode;
ProtoInstance60: TProtoInstanceNode;
fieldValue61: TfieldValueNode;
ProtoInstance62: TProtoInstanceNode;
fieldValue63: TfieldValueNode;
ProtoInstance64: TProtoInstanceNode;
fieldValue65: TfieldValueNode;
ProtoInstance66: TProtoInstanceNode;
fieldValue67: TfieldValueNode;
fieldValue68: TfieldValueNode;
ProtoInstance69: TProtoInstanceNode;
fieldValue70: TfieldValueNode;
fieldValue71: TfieldValueNode;
ProtoInstance72: TProtoInstanceNode;
fieldValue73: TfieldValueNode;
fieldValue74: TfieldValueNode;
Script75: TScriptNode;
field76: TfieldNode;
field77: TfieldNode;
field78: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['title'] := 'forcenode.x3d';
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
Group13 := TGroupNode.Create;
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
Sphere18 := TSphereNode.Create;
{ .SetGeometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape17.Appearance := Appearance19;
{ .AddChild }
Transform14.AddChildren([Shape17]);
Transform21 := TTransformNode.Create;
Transform21.Translation := Vector3(1,0,1);
Shape22 := TShapeNode.Create;
Text23 := TTextNode.Create;
Text23.SetText(['Node']);
FontStyle24 := TFontStyleNode.Create;
FontStyle24.Justify := fjMiddle;
FontStyle24.JustifyMinor := fjMiddle;
FontStyle24.Size := 5;
{ .SetFontStyle }
Text23.FontStyle := FontStyle24;
{ .SetGeometry }
Shape22.Geometry := Text23;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance25.Material := Material26;
{ .SetAppearance }
Shape22.Appearance := Appearance25;
{ .AddChild }
Transform21.AddChildren([Shape22]);
{ .AddChildren }
Transform14.AddChildren([Transform21]);
{ .AddChildren }
Group13.AddChildren([Transform14]);
PositionInterpolator27 := TPositionInterpolatorNode.Create;
PositionInterpolator27.SetKey([0,1]);
PositionInterpolator27.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group13.AddChildren([PositionInterpolator27]);
Script28 := TScriptNode.Create;
field29 := TfieldNode.Create;
field29.NameField := 'translation';
field29.AccessType := 'inputOutput';
field29.Type := 'SFVec3f';
field29.Value := '50 50 0';
{ .AddField }
Script28.Field := field29;
field30 := TfieldNode.Create;
field30.NameField := 'old';
field30.AccessType := 'inputOutput';
field30.Type := 'SFVec3f';
field30.Value := '0 0 0';
{ .AddField }
Script28.Field := field30;
field31 := TfieldNode.Create;
field31.NameField := 'set_cycle';
field31.AccessType := 'inputOnly';
field31.Type := 'SFTime';
{ .AddField }
Script28.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'keyValue';
field32.AccessType := 'outputOnly';
field32.Type := 'MFVec3f';
{ .AddField }
Script28.Field := field32;

Script28.SetSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f(...[old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}''');
{ .AddChildren }
Group13.AddChildren([Script28]);
TimeSensor33 := TTimeSensorNode.Create;
TimeSensor33.CycleInterval := 3;
TimeSensor33.Loop := True;
{ .AddChildren }
Group13.AddChildren([TimeSensor33]);
Group13.AddRoute(TimeSensor33.FdCycletime, Script28.EventSet_cycle);
{ .AddX3DRoute }
Group13.AddRoute(TimeSensor33.EventFraction_changed, PositionInterpolator27.EventSet_fraction);
{ .AddX3DRoute }
Group13.AddRoute(Script28.FdKeyvalue, PositionInterpolator27.FdKeyvalue);
{ .AddX3DRoute }
Group13.AddRoute(PositionInterpolator27.EventValue_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody12.AddChildren([Group13]);
{ .SetProtoBody }
ProtoDeclare9.ProtoBody := ProtoBody12;
{ .AddChildren }
Group8.AddChildren([ProtoDeclare9]);
ProtoDeclare38 := TProtoDeclareNode.Create;
ProtoDeclare38.NameField := 'cylinder';
ProtoInterface39 := TProtoInterfaceNode.Create;
field40 := TfieldNode.Create;
field40.NameField := 'set_positionA';
field40.AccessType := 'inputOnly';
field40.Type := 'SFVec3f';
{ .AddField }
ProtoInterface39.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'set_positionB';
field41.AccessType := 'inputOnly';
field41.Type := 'SFVec3f';
{ .AddField }
ProtoInterface39.Field := field41;
{ .SetProtoInterface }
ProtoDeclare38.ProtoInterface := ProtoInterface39;
ProtoBody42 := TProtoBodyNode.Create;
Group43 := TGroupNode.Create;
Shape44 := TShapeNode.Create;
Extrusion45 := TExtrusionNode.Create;
Extrusion45.CreaseAngle := 0.785;
Extrusion45.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion45.SetSpine([Vector3(0,-50,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape44.Geometry := Extrusion45;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance46.Material := Material47;
{ .SetAppearance }
Shape44.Appearance := Appearance46;
{ .AddChildren }
Group43.AddChildren([Shape44]);
Script48 := TScriptNode.Create;
field49 := TfieldNode.Create;
field49.NameField := 'spine';
field49.AccessType := 'inputOutput';
field49.Type := 'MFVec3f';
field49.Value := '0 -50 0 0 50 0';
{ .AddField }
Script48.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'set_endA';
field50.AccessType := 'inputOnly';
field50.Type := 'SFVec3f';
{ .AddField }
Script48.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'set_endB';
field51.AccessType := 'inputOnly';
field51.Type := 'SFVec3f';
{ .AddField }
Script48.Field := field51;
IS52 := TISNode.Create;
connect53 := TconnectNode.Create;
connect53.NodeField := 'set_endA';
connect53.ProtoField := 'set_positionA';
{ .AddConnect }
IS52.Connect := connect53;
connect54 := TconnectNode.Create;
connect54.NodeField := 'set_endB';
connect54.ProtoField := 'set_positionB';
{ .AddConnect }
IS52.Connect := connect54;
{ .SetIS }
Script48.IS := IS52;

Script48.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f(...[value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f(...[value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f(...[value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f(...[spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }''');
{ .AddChildren }
Group43.AddChildren([Script48]);
Group43.AddRoute(Script48.FdSpine, Extrusion45.EventSet_spine);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody42.AddChildren([Group43]);
{ .SetProtoBody }
ProtoDeclare38.ProtoBody := ProtoBody42;
{ .AddChildren }
Group8.AddChildren([ProtoDeclare38]);
Transform56 := TTransformNode.Create;
Transform56.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor57 := TPlaneSensorNode.Create;
PlaneSensor57.MinPosition := Vector2(-50,-50);
PlaneSensor57.MaxPosition := Vector2(50,50);
PlaneSensor57.Description := 'click on background to add nodes, click on nodes to add links';
{ .AddChildren }
Transform56.AddChildren([PlaneSensor57]);
ProtoInstance58 := TProtoInstanceNode.Create;
ProtoInstance58.NameField := 'node';
fieldValue59 := TfieldValueNode.Create;
fieldValue59.NameField := 'position';
fieldValue59.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance58.FieldValue := fieldValue59;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance58]);
ProtoInstance60 := TProtoInstanceNode.Create;
ProtoInstance60.NameField := 'node';
fieldValue61 := TfieldValueNode.Create;
fieldValue61.NameField := 'position';
fieldValue61.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance60.FieldValue := fieldValue61;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance60]);
ProtoInstance62 := TProtoInstanceNode.Create;
ProtoInstance62.NameField := 'node';
fieldValue63 := TfieldValueNode.Create;
fieldValue63.NameField := 'position';
fieldValue63.Value := '-50 -50 -50';
{ .AddFieldValue }
ProtoInstance62.FieldValue := fieldValue63;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance62]);
ProtoInstance64 := TProtoInstanceNode.Create;
ProtoInstance64.NameField := 'node';
fieldValue65 := TfieldValueNode.Create;
fieldValue65.NameField := 'position';
fieldValue65.Value := '50 50 -50';
{ .AddFieldValue }
ProtoInstance64.FieldValue := fieldValue65;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance64]);
ProtoInstance66 := TProtoInstanceNode.Create;
ProtoInstance66.NameField := 'cylinder';
fieldValue67 := TfieldValueNode.Create;
fieldValue67.NameField := 'set_positionA';
fieldValue67.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue67;
fieldValue68 := TfieldValueNode.Create;
fieldValue68.NameField := 'set_positionB';
fieldValue68.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue68;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance66]);
ProtoInstance69 := TProtoInstanceNode.Create;
ProtoInstance69.NameField := 'cylinder';
fieldValue70 := TfieldValueNode.Create;
fieldValue70.NameField := 'set_positionA';
fieldValue70.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance69.FieldValue := fieldValue70;
fieldValue71 := TfieldValueNode.Create;
fieldValue71.NameField := 'set_positionB';
fieldValue71.Value := '-50 -50 -50';
{ .AddFieldValue }
ProtoInstance69.FieldValue := fieldValue71;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance69]);
ProtoInstance72 := TProtoInstanceNode.Create;
ProtoInstance72.NameField := 'cylinder';
fieldValue73 := TfieldValueNode.Create;
fieldValue73.NameField := 'set_positionA';
fieldValue73.Value := '50 50 50';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue73;
fieldValue74 := TfieldValueNode.Create;
fieldValue74.NameField := 'set_positionB';
fieldValue74.Value := '50 50 -50';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue74;
{ .AddChildren }
Transform56.AddChildren([ProtoInstance72]);
{ .AddChildren }
Group8.AddChildren([Transform56]);
Script75 := TScriptNode.Create;
field76 := TfieldNode.Create;
field76.NameField := 'counter';
field76.AccessType := 'inputOutput';
field76.Value := '0';
field76.Type := 'SFInt32';
{ .AddField }
Script75.Field := field76;
field77 := TfieldNode.Create;
field77.NameField := 'node_changed';
field77.AccessType := 'outputOnly';
field77.Type := 'SFNode';
{ .AddField }
Script75.Field := field77;
field78 := TfieldNode.Create;
field78.NameField := 'add_node';
field78.AccessType := 'inputOnly';
field78.Value := 'false';
field78.Type := 'SFBool';
{ .AddField }
Script75.Field := field78;
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> <Transform USE="HoldsContent"/> </field> }

Script75.SetSourceCode('''ecmascript:\n"+
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
Group8.AddChildren([Script75]);
Group8.AddRoute(PlaneSensor57.FdIsactive, Script75.FdAdd_node);
{ .AddX3DRoute }
Group8.AddRoute(ProtoInstance58.FdPosition, ProtoInstance66.EventSet_positiona);
{ .AddX3DRoute }
Group8.AddRoute(ProtoInstance60.FdPosition, ProtoInstance66.EventSet_positionb);
{ .AddX3DRoute }
Group8.AddRoute(ProtoInstance58.FdPosition, ProtoInstance69.EventSet_positiona);
{ .AddX3DRoute }
Group8.AddRoute(ProtoInstance62.FdPosition, ProtoInstance69.EventSet_positionb);
{ .AddX3DRoute }
Group8.AddRoute(ProtoInstance58.FdPosition, ProtoInstance72.EventSet_positiona);
{ .AddX3DRoute }
Group8.AddRoute(ProtoInstance64.FdPosition, ProtoInstance72.EventSet_positionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group8]);
Result := X3D0;
end;
