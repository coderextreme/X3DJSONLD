function force_tidy: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group11: TGroupNode;
ProtoDeclare12: TProtoDeclareNode;
ProtoInterface13: TProtoInterfaceNode;
field14: TfieldNode;
ProtoBody15: TProtoBodyNode;
Group16: TGroupNode;
Transform17: TTransformNode;
IS18: TISNode;
connect19: TconnectNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Sphere23: TSphereNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
Text28: TTextNode;
FontStyle29: TFontStyleNode;
PositionInterpolator30: TPositionInterpolatorNode;
Script31: TScriptNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
field35: TfieldNode;
TimeSensor36: TTimeSensorNode;
ProtoDeclare41: TProtoDeclareNode;
ProtoInterface42: TProtoInterfaceNode;
field43: TfieldNode;
field44: TfieldNode;
ProtoBody45: TProtoBodyNode;
Group46: TGroupNode;
Shape47: TShapeNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Extrusion50: TExtrusionNode;
Script51: TScriptNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
IS55: TISNode;
connect56: TconnectNode;
connect57: TconnectNode;
Transform59: TTransformNode;
PlaneSensor60: TPlaneSensorNode;
ProtoInstance61: TProtoInstanceNode;
fieldValue62: TfieldValueNode;
ProtoInstance63: TProtoInstanceNode;
fieldValue64: TfieldValueNode;
ProtoInstance65: TProtoInstanceNode;
fieldValue66: TfieldValueNode;
ProtoInstance67: TProtoInstanceNode;
fieldValue68: TfieldValueNode;
ProtoInstance69: TProtoInstanceNode;
ProtoInstance70: TProtoInstanceNode;
ProtoInstance71: TProtoInstanceNode;
Script72: TScriptNode;
field73: TfieldNode;
field74: TfieldNode;
field75: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['title'] := 'force.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['generator'] := 'x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy';
X3D0.Meta['modified'] := 'Sat, 9 Nov 2024 19:29:39 GMT';
Group11 := TGroupNode.Create;
ProtoDeclare12 := TProtoDeclareNode.Create;
ProtoDeclare12.NameField := 'node';
ProtoInterface13 := TProtoInterfaceNode.Create;
field14 := TfieldNode.Create;
field14.NameField := 'position';
field14.AccessType := 'inputOutput';
field14.Type := 'SFVec3f';
{ .AddField }
ProtoInterface13.Field := field14;
{ .SetProtoInterface }
ProtoDeclare12.ProtoInterface := ProtoInterface13;
ProtoBody15 := TProtoBodyNode.Create;
Group16 := TGroupNode.Create;
Transform17 := TTransformNode.Create;
IS18 := TISNode.Create;
connect19 := TconnectNode.Create;
connect19.NodeField := 'translation';
connect19.ProtoField := 'position';
{ .AddConnect }
IS18.Connect := connect19;
{ .SetIS }
Transform17.IS := IS18;
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape20.Appearance := Appearance21;
Sphere23 := TSphereNode.Create;
{ .SetGeometry }
Shape20.Geometry := Sphere23;
{ .AddChild }
Transform17.AddChildren([Shape20]);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(1,0,0);
Shape25 := TShapeNode.Create;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance26.Material := Material27;
{ .SetAppearance }
Shape25.Appearance := Appearance26;
Text28 := TTextNode.Create;
Text28.SetText(['Node']);
FontStyle29 := TFontStyleNode.Create;
FontStyle29.Size := 5;
FontStyle29.Justify := fjMiddle;
FontStyle29.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text28.FontStyle := FontStyle29;
{ .SetGeometry }
Shape25.Geometry := Text28;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Transform17.AddChildren([Transform24]);
{ .AddChildren }
Group16.AddChildren([Transform17]);
PositionInterpolator30 := TPositionInterpolatorNode.Create;
PositionInterpolator30.SetKey([0,1]);
PositionInterpolator30.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group16.AddChildren([PositionInterpolator30]);
Script31 := TScriptNode.Create;
field32 := TfieldNode.Create;
field32.NameField := 'translation';
field32.AccessType := 'inputOutput';
field32.Type := 'SFVec3f';
field32.Value := '50 50 0';
{ .AddField }
Script31.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'old';
field33.AccessType := 'inputOutput';
field33.Type := 'SFVec3f';
{ .AddField }
Script31.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'set_cycle';
field34.AccessType := 'inputOnly';
field34.Type := 'SFTime';
{ .AddField }
Script31.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'keyValue';
field35.AccessType := 'outputOnly';
field35.Type := 'MFVec3f';
{ .AddField }
Script31.Field := field35;

Script31.SetSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"		    				/*\n"+
"                                                var tmpkeyValue = new MFVec3f();\n"+
"			    			tmpkeyValue[0] = old;\n"+
"			    			tmpkeyValue[1] = translation;\n"+
"                                                keyValue = tmpkeyValue;\n"+
"		    				*/\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"			    		\n"+
"						// Browser.println(translation);\n"+
"					}''');
{ .AddChildren }
Group16.AddChildren([Script31]);
TimeSensor36 := TTimeSensorNode.Create;
TimeSensor36.CycleInterval := 3;
TimeSensor36.Loop := True;
{ .AddChildren }
Group16.AddChildren([TimeSensor36]);
{ .AddChildren }
ProtoBody15.AddChildren([Group16]);
ProtoBody15.AddRoute(TimeSensor36.FdCycletime, Script31.EventSet_cycle);
{ .AddX3DRoute }
ProtoBody15.AddRoute(TimeSensor36.EventFraction_changed, PositionInterpolator30.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody15.AddRoute(Script31.FdKeyvalue, PositionInterpolator30.EventSet_keyvalue);
{ .AddX3DRoute }
ProtoBody15.AddRoute(PositionInterpolator30.EventValue_changed, Transform17.FdTranslation);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare12.ProtoBody := ProtoBody15;
{ .AddChildren }
Group11.AddChildren([ProtoDeclare12]);
ProtoDeclare41 := TProtoDeclareNode.Create;
ProtoDeclare41.NameField := 'cyl';
ProtoInterface42 := TProtoInterfaceNode.Create;
field43 := TfieldNode.Create;
field43.NameField := 'set_positionA';
field43.AccessType := 'inputOnly';
field43.Type := 'SFVec3f';
{ .AddField }
ProtoInterface42.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'set_positionB';
field44.AccessType := 'inputOnly';
field44.Type := 'SFVec3f';
{ .AddField }
ProtoInterface42.Field := field44;
{ .SetProtoInterface }
ProtoDeclare41.ProtoInterface := ProtoInterface42;
ProtoBody45 := TProtoBodyNode.Create;
Group46 := TGroupNode.Create;
Shape47 := TShapeNode.Create;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance48.Material := Material49;
{ .SetAppearance }
Shape47.Appearance := Appearance48;
Extrusion50 := TExtrusionNode.Create;
Extrusion50.CreaseAngle := 0.785;
Extrusion50.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion50.SetSpine([Vector3(0,-50,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape47.Geometry := Extrusion50;
{ .AddChildren }
Group46.AddChildren([Shape47]);
Script51 := TScriptNode.Create;
field52 := TfieldNode.Create;
field52.NameField := 'spine';
field52.AccessType := 'inputOutput';
field52.Type := 'MFVec3f';
field52.Value := '0 -50 0 0 50 0';
{ .AddField }
Script51.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'set_endA';
field53.AccessType := 'inputOnly';
field53.Type := 'SFVec3f';
{ .AddField }
Script51.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'set_endB';
field54.AccessType := 'inputOnly';
field54.Type := 'SFVec3f';
{ .AddField }
Script51.Field := field54;
IS55 := TISNode.Create;
connect56 := TconnectNode.Create;
connect56.NodeField := 'set_endA';
connect56.ProtoField := 'set_positionA';
{ .AddConnect }
IS55.Connect := connect56;
connect57 := TconnectNode.Create;
connect57.NodeField := 'set_endB';
connect57.ProtoField := 'set_positionB';
{ .AddConnect }
IS55.Connect := connect57;
{ .SetIS }
Script51.IS := IS55;

Script51.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    	*/\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = spine[1];\n"+
"			spine = tmpspine;\n"+
"		        */\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		        */\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = spine[0];\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    	*/\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }''');
{ .AddChildren }
Group46.AddChildren([Script51]);
{ .AddChildren }
ProtoBody45.AddChildren([Group46]);
ProtoBody45.AddRoute(Script51.EventSpine_changed, Extrusion50.EventSet_spine);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare41.ProtoBody := ProtoBody45;
{ .AddChildren }
Group11.AddChildren([ProtoDeclare41]);
Transform59 := TTransformNode.Create;
Transform59.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor60 := TPlaneSensorNode.Create;
PlaneSensor60.Description := 'click on background to add nodes, click on nodes to add links';
PlaneSensor60.MinPosition := Vector2(-50,-50);
PlaneSensor60.MaxPosition := Vector2(50,50);
{ .AddChildren }
Transform59.AddChildren([PlaneSensor60]);
ProtoInstance61 := TProtoInstanceNode.Create;
ProtoInstance61.NameField := 'node';
fieldValue62 := TfieldValueNode.Create;
fieldValue62.NameField := 'position';
fieldValue62.Value := '0 1.388333 0';
{ .AddFieldValue }
ProtoInstance61.FieldValue := fieldValue62;
{ .AddChildren }
Transform59.AddChildren([ProtoInstance61]);
ProtoInstance63 := TProtoInstanceNode.Create;
ProtoInstance63.NameField := 'node';
fieldValue64 := TfieldValueNode.Create;
fieldValue64.NameField := 'position';
fieldValue64.Value := '0 1.388333 0';
{ .AddFieldValue }
ProtoInstance63.FieldValue := fieldValue64;
{ .AddChildren }
Transform59.AddChildren([ProtoInstance63]);
ProtoInstance65 := TProtoInstanceNode.Create;
ProtoInstance65.NameField := 'node';
fieldValue66 := TfieldValueNode.Create;
fieldValue66.NameField := 'position';
fieldValue66.Value := '0 1.388333 0';
{ .AddFieldValue }
ProtoInstance65.FieldValue := fieldValue66;
{ .AddChildren }
Transform59.AddChildren([ProtoInstance65]);
ProtoInstance67 := TProtoInstanceNode.Create;
ProtoInstance67.NameField := 'node';
fieldValue68 := TfieldValueNode.Create;
fieldValue68.NameField := 'position';
fieldValue68.Value := '0 1.388333 0';
{ .AddFieldValue }
ProtoInstance67.FieldValue := fieldValue68;
{ .AddChildren }
Transform59.AddChildren([ProtoInstance67]);
ProtoInstance69 := TProtoInstanceNode.Create;
ProtoInstance69.NameField := 'cyl';
{ .AddChildren }
Transform59.AddChildren([ProtoInstance69]);
ProtoInstance70 := TProtoInstanceNode.Create;
ProtoInstance70.NameField := 'cyl';
{ .AddChildren }
Transform59.AddChildren([ProtoInstance70]);
ProtoInstance71 := TProtoInstanceNode.Create;
ProtoInstance71.NameField := 'cyl';
{ .AddChildren }
Transform59.AddChildren([ProtoInstance71]);
{ .AddChildren }
Group11.AddChildren([Transform59]);
Script72 := TScriptNode.Create;
field73 := TfieldNode.Create;
field73.NameField := 'counter';
field73.AccessType := 'inputOutput';
field73.Type := 'SFInt32';
{ .AddField }
Script72.Field := field73;
field74 := TfieldNode.Create;
field74.NameField := 'node_changed';
field74.AccessType := 'outputOnly';
field74.Type := 'SFNode';
{ .AddField }
Script72.Field := field74;
field75 := TfieldNode.Create;
field75.NameField := 'add_node';
field75.AccessType := 'inputOnly';
field75.Type := 'SFBool';
{ .AddField }
Script72.Field := field75;

Script72.SetSourceCode('''ecmascript:\n"+
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
Group11.AddChildren([Script72]);
Group11.AddRoute(PlaneSensor60.FdIsactive, Script72.FdAdd_node);
{ .AddX3DRoute }
Group11.AddRoute(ProtoInstance61.EventPosition_changed, ProtoInstance69.EventSet_positiona);
{ .AddX3DRoute }
Group11.AddRoute(ProtoInstance63.EventPosition_changed, ProtoInstance69.EventSet_positionb);
{ .AddX3DRoute }
Group11.AddRoute(ProtoInstance61.EventPosition_changed, ProtoInstance70.EventSet_positiona);
{ .AddX3DRoute }
Group11.AddRoute(ProtoInstance65.EventPosition_changed, ProtoInstance70.EventSet_positionb);
{ .AddX3DRoute }
Group11.AddRoute(ProtoInstance61.EventPosition_changed, ProtoInstance71.EventSet_positiona);
{ .AddX3DRoute }
Group11.AddRoute(ProtoInstance67.EventPosition_changed, ProtoInstance71.EventSet_positionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
