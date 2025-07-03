function arcold: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
Cylinder15: TCylinderNode;
Transform16: TTransformNode;
Transform17: TTransformNode;
Shape18: TShapeNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
Cylinder21: TCylinderNode;
Transform22: TTransformNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
Cylinder27: TCylinderNode;
ProtoDeclare28: TProtoDeclareNode;
ProtoInterface29: TProtoInterfaceNode;
field30: TfieldNode;
ProtoBody31: TProtoBodyNode;
Transform32: TTransformNode;
IS33: TISNode;
connect34: TconnectNode;
Shape35: TShapeNode;
Sphere36: TSphereNode;
Appearance37: TAppearanceNode;
Material38: TMaterialNode;
PositionInterpolator39: TPositionInterpolatorNode;
Script40: TScriptNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
TimeSensor45: TTimeSensorNode;
ProtoDeclare50: TProtoDeclareNode;
ProtoInterface51: TProtoInterfaceNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
ProtoBody58: TProtoBodyNode;
Script59: TScriptNode;
field60: TfieldNode;
field61: TfieldNode;
field62: TfieldNode;
field63: TfieldNode;
field64: TfieldNode;
field65: TfieldNode;
IS66: TISNode;
connect67: TconnectNode;
connect68: TconnectNode;
connect69: TconnectNode;
connect70: TconnectNode;
connect71: TconnectNode;
connect72: TconnectNode;
ProtoInstance73: TProtoInstanceNode;
ProtoInstance74: TProtoInstanceNode;
ProtoInstance75: TProtoInstanceNode;
ProtoInstance76: TProtoInstanceNode;
ProtoInstance77: TProtoInstanceNode;
fieldValue78: TfieldValueNode;
ProtoInstance79: TProtoInstanceNode;
fieldValue80: TfieldValueNode;
ProtoInstance81: TProtoInstanceNode;
fieldValue82: TfieldValueNode;
Transform83: TTransformNode;
fieldValue84: TfieldValueNode;
Transform85: TTransformNode;
ProtoInstance86: TProtoInstanceNode;
fieldValue87: TfieldValueNode;
ProtoInstance88: TProtoInstanceNode;
fieldValue89: TfieldValueNode;
ProtoInstance90: TProtoInstanceNode;
fieldValue91: TfieldValueNode;
Transform92: TTransformNode;
fieldValue93: TfieldValueNode;
Transform94: TTransformNode;
ProtoInstance95: TProtoInstanceNode;
fieldValue96: TfieldValueNode;
ProtoInstance97: TProtoInstanceNode;
fieldValue98: TfieldValueNode;
ProtoInstance99: TProtoInstanceNode;
fieldValue100: TfieldValueNode;
Transform101: TTransformNode;
fieldValue102: TfieldValueNode;
Transform103: TTransformNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'arcold.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/arc.x3d';
X3D0.Meta['description'] := 'an attempt to implement an arc in a graph';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'a moving graph';
{ .AddChildren }
Group7.AddChildren([Viewpoint8]);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ .AddChildren }
Group7.AddChildren([Background9]);
Transform10 := TTransformNode.Create;
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0.2,0.7,0.7);
{ .SetMaterial }
Appearance13.Material := Material14;
{ .SetAppearance }
Shape12.Appearance := Appearance13;
Cylinder15 := TCylinderNode.Create;
Cylinder15.Radius := 0.1;
{ .SetGeometry }
Shape12.Geometry := Cylinder15;
{ .AddChild }
Transform11.AddChildren([Shape12]);
{ .AddChildren }
Transform10.AddChildren([Transform11]);
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform16 := TTransformNode.Create;
Transform17 := TTransformNode.Create;
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(0.2,0.7,0.7);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape18.Appearance := Appearance19;
Cylinder21 := TCylinderNode.Create;
Cylinder21.Radius := 0.1;
{ .SetGeometry }
Shape18.Geometry := Cylinder21;
{ .AddChild }
Transform17.AddChildren([Shape18]);
{ .AddChildren }
Transform16.AddChildren([Transform17]);
{ .AddChildren }
Group7.AddChildren([Transform16]);
Transform22 := TTransformNode.Create;
Transform23 := TTransformNode.Create;
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.2,0.7,0.7);
{ .SetMaterial }
Appearance25.Material := Material26;
{ .SetAppearance }
Shape24.Appearance := Appearance25;
Cylinder27 := TCylinderNode.Create;
Cylinder27.Radius := 0.1;
{ .SetGeometry }
Shape24.Geometry := Cylinder27;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Transform22.AddChildren([Transform23]);
{ .AddChildren }
Group7.AddChildren([Transform22]);
ProtoDeclare28 := TProtoDeclareNode.Create;
ProtoDeclare28.NameField := 'point';
ProtoInterface29 := TProtoInterfaceNode.Create;
field30 := TfieldNode.Create;
field30.NameField := 'translation';
field30.AccessType := 'inputOutput';
field30.Type := 'SFVec3f';
field30.Value := '0 0 0';
{ .AddField }
ProtoInterface29.Field := field30;
{ .SetProtoInterface }
ProtoDeclare28.ProtoInterface := ProtoInterface29;
ProtoBody31 := TProtoBodyNode.Create;
Transform32 := TTransformNode.Create;
IS33 := TISNode.Create;
connect34 := TconnectNode.Create;
connect34.NodeField := 'translation';
connect34.ProtoField := 'translation';
{ .AddConnect }
IS33.Connect := connect34;
{ .SetIS }
Transform32.IS := IS33;
Shape35 := TShapeNode.Create;
Sphere36 := TSphereNode.Create;
Sphere36.Radius := 0.1;
{ .SetGeometry }
Shape35.Geometry := Sphere36;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance37.Material := Material38;
{ .SetAppearance }
Shape35.Appearance := Appearance37;
{ .AddChild }
Transform32.AddChildren([Shape35]);
PositionInterpolator39 := TPositionInterpolatorNode.Create;
PositionInterpolator39.SetKey([0,1]);
PositionInterpolator39.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform32.AddChildren([PositionInterpolator39]);
Script40 := TScriptNode.Create;
field41 := TfieldNode.Create;
field41.NameField := 'translation';
field41.AccessType := 'inputOutput';
field41.Type := 'SFVec3f';
field41.Value := '50 50 0';
{ .AddField }
Script40.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'old';
field42.AccessType := 'inputOutput';
field42.Type := 'SFVec3f';
field42.Value := '0 0 0';
{ .AddField }
Script40.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'set_location';
field43.AccessType := 'inputOnly';
field43.Type := 'SFTime';
{ .AddField }
Script40.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'keyValue';
field44.AccessType := 'outputOnly';
field44.Type := 'MFVec3f';
{ .AddField }
Script40.Field := field44;

Script40.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}''');
{ .AddChildren }
Transform32.AddChildren([Script40]);
TimeSensor45 := TTimeSensorNode.Create;
TimeSensor45.CycleInterval := 3;
TimeSensor45.Loop := True;
{ .AddChildren }
Transform32.AddChildren([TimeSensor45]);
Transform32.AddRoute(TimeSensor45.FdCycletime, Script40.EventSet_location);
{ .AddX3DRoute }
Transform32.AddRoute(TimeSensor45.EventFraction_changed, PositionInterpolator39.EventSet_fraction);
{ .AddX3DRoute }
Transform32.AddRoute(Script40.FdKeyvalue, PositionInterpolator39.FdKeyvalue);
{ .AddX3DRoute }
Transform32.AddRoute(PositionInterpolator39.EventValue_changed, Transform32.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody31.AddChildren([Transform32]);
{ .SetProtoBody }
ProtoDeclare28.ProtoBody := ProtoBody31;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare28]);
{ from doug sanden }
ProtoDeclare50 := TProtoDeclareNode.Create;
ProtoDeclare50.NameField := 'x3dconnector';
ProtoInterface51 := TProtoInterfaceNode.Create;
field52 := TfieldNode.Create;
field52.NameField := 'startnode';
field52.AccessType := 'inputOutput';
field52.Type := 'SFNode';
{ .AddField }
ProtoInterface51.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'endnode';
field53.AccessType := 'inputOutput';
field53.Type := 'SFNode';
{ .AddField }
ProtoInterface51.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'transnode';
field54.AccessType := 'inputOutput';
field54.Type := 'SFNode';
{ .AddField }
ProtoInterface51.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'rotscalenode';
field55.AccessType := 'inputOutput';
field55.Type := 'SFNode';
{ .AddField }
ProtoInterface51.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'set_startpoint';
field56.AccessType := 'inputOnly';
field56.Type := 'SFVec3f';
{ .AddField }
ProtoInterface51.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'set_endpoint';
field57.AccessType := 'inputOnly';
field57.Type := 'SFVec3f';
{ .AddField }
ProtoInterface51.Field := field57;
{ .SetProtoInterface }
ProtoDeclare50.ProtoInterface := ProtoInterface51;
ProtoBody58 := TProtoBodyNode.Create;
Script59 := TScriptNode.Create;
field60 := TfieldNode.Create;
field60.NameField := 'startnode';
field60.AccessType := 'inputOutput';
field60.Type := 'SFNode';
{ .AddField }
Script59.Field := field60;
field61 := TfieldNode.Create;
field61.NameField := 'endnode';
field61.AccessType := 'inputOutput';
field61.Type := 'SFNode';
{ .AddField }
Script59.Field := field61;
field62 := TfieldNode.Create;
field62.NameField := 'transnode';
field62.AccessType := 'inputOutput';
field62.Type := 'SFNode';
{ .AddField }
Script59.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'rotscalenode';
field63.AccessType := 'inputOutput';
field63.Type := 'SFNode';
{ .AddField }
Script59.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'set_startpoint';
field64.AccessType := 'inputOnly';
field64.Type := 'SFVec3f';
{ .AddField }
Script59.Field := field64;
field65 := TfieldNode.Create;
field65.NameField := 'set_endpoint';
field65.AccessType := 'inputOnly';
field65.Type := 'SFVec3f';
{ .AddField }
Script59.Field := field65;
IS66 := TISNode.Create;
connect67 := TconnectNode.Create;
connect67.NodeField := 'startnode';
connect67.ProtoField := 'startnode';
{ .AddConnect }
IS66.Connect := connect67;
connect68 := TconnectNode.Create;
connect68.NodeField := 'endnode';
connect68.ProtoField := 'endnode';
{ .AddConnect }
IS66.Connect := connect68;
connect69 := TconnectNode.Create;
connect69.NodeField := 'transnode';
connect69.ProtoField := 'transnode';
{ .AddConnect }
IS66.Connect := connect69;
connect70 := TconnectNode.Create;
connect70.NodeField := 'rotscalenode';
connect70.ProtoField := 'rotscalenode';
{ .AddConnect }
IS66.Connect := connect70;
connect71 := TconnectNode.Create;
connect71.NodeField := 'set_startpoint';
connect71.ProtoField := 'set_startpoint';
{ .AddConnect }
IS66.Connect := connect71;
connect72 := TconnectNode.Create;
connect72.NodeField := 'set_endpoint';
connect72.ProtoField := 'set_endpoint';
{ .AddConnect }
IS66.Connect := connect72;
{ .SetIS }
Script59.IS := IS66;

Script59.SetSourceCode('''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"		var trafo = recompute(startpoint, endpoint);\n"+
"		if (typeof trafo !== 'undefined') {\n"+
"			transnode.translation = trafo.translation;\n"+
"			rotscalenode.rotation = trafo.rotation;\n"+
"			rotscalenode.scale = trafo.scale;\n"+
"		} else {\n"+
"			Browser.print(\"recompute returned undefined\");\n"+
"		}\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val || startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val || endnode.translation);\n"+
"        }''');
{ .AddChildren }
ProtoBody58.AddChildren([Script59]);
{ .SetProtoBody }
ProtoDeclare50.ProtoBody := ProtoBody58;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare50]);
ProtoInstance73 := TProtoInstanceNode.Create;
ProtoInstance73.NameField := 'point';
{ .AddChildren }
Group7.AddChildren([ProtoInstance73]);
ProtoInstance74 := TProtoInstanceNode.Create;
ProtoInstance74.NameField := 'point';
{ .AddChildren }
Group7.AddChildren([ProtoInstance74]);
ProtoInstance75 := TProtoInstanceNode.Create;
ProtoInstance75.NameField := 'point';
{ .AddChildren }
Group7.AddChildren([ProtoInstance75]);
ProtoInstance76 := TProtoInstanceNode.Create;
ProtoInstance76.NameField := 'point';
{ .AddChildren }
Group7.AddChildren([ProtoInstance76]);
ProtoInstance77 := TProtoInstanceNode.Create;
ProtoInstance77.NameField := 'x3dconnector';
fieldValue78 := TfieldValueNode.Create;
fieldValue78.NameField := 'startnode';
ProtoInstance79 := TProtoInstanceNode.Create;
ProtoInstance79 := ProtoInstance73;
{ .AddChildren }
fieldValue78.AddChildren([ProtoInstance79]);
{ .AddFieldValue }
ProtoInstance77.FieldValue := fieldValue78;
fieldValue80 := TfieldValueNode.Create;
fieldValue80.NameField := 'endnode';
ProtoInstance81 := TProtoInstanceNode.Create;
ProtoInstance81 := ProtoInstance74;
{ .AddChildren }
fieldValue80.AddChildren([ProtoInstance81]);
{ .AddFieldValue }
ProtoInstance77.FieldValue := fieldValue80;
fieldValue82 := TfieldValueNode.Create;
fieldValue82.NameField := 'transnode';
Transform83 := TTransformNode.Create;
Transform83 := Transform10;
{ .AddChildren }
fieldValue82.AddChildren([Transform83]);
{ .AddFieldValue }
ProtoInstance77.FieldValue := fieldValue82;
fieldValue84 := TfieldValueNode.Create;
fieldValue84.NameField := 'rotscalenode';
Transform85 := TTransformNode.Create;
Transform85 := Transform11;
{ .AddChildren }
fieldValue84.AddChildren([Transform85]);
{ .AddFieldValue }
ProtoInstance77.FieldValue := fieldValue84;
{ .AddChildren }
Group7.AddChildren([ProtoInstance77]);
ProtoInstance86 := TProtoInstanceNode.Create;
ProtoInstance86.NameField := 'x3dconnector';
fieldValue87 := TfieldValueNode.Create;
fieldValue87.NameField := 'startnode';
ProtoInstance88 := TProtoInstanceNode.Create;
ProtoInstance88 := ProtoInstance73;
{ .AddChildren }
fieldValue87.AddChildren([ProtoInstance88]);
{ .AddFieldValue }
ProtoInstance86.FieldValue := fieldValue87;
fieldValue89 := TfieldValueNode.Create;
fieldValue89.NameField := 'endnode';
ProtoInstance90 := TProtoInstanceNode.Create;
ProtoInstance90 := ProtoInstance75;
{ .AddChildren }
fieldValue89.AddChildren([ProtoInstance90]);
{ .AddFieldValue }
ProtoInstance86.FieldValue := fieldValue89;
fieldValue91 := TfieldValueNode.Create;
fieldValue91.NameField := 'transnode';
Transform92 := TTransformNode.Create;
Transform92 := Transform16;
{ .AddChildren }
fieldValue91.AddChildren([Transform92]);
{ .AddFieldValue }
ProtoInstance86.FieldValue := fieldValue91;
fieldValue93 := TfieldValueNode.Create;
fieldValue93.NameField := 'rotscalenode';
Transform94 := TTransformNode.Create;
Transform94 := Transform17;
{ .AddChildren }
fieldValue93.AddChildren([Transform94]);
{ .AddFieldValue }
ProtoInstance86.FieldValue := fieldValue93;
{ .AddChildren }
Group7.AddChildren([ProtoInstance86]);
ProtoInstance95 := TProtoInstanceNode.Create;
ProtoInstance95.NameField := 'x3dconnector';
fieldValue96 := TfieldValueNode.Create;
fieldValue96.NameField := 'startnode';
ProtoInstance97 := TProtoInstanceNode.Create;
ProtoInstance97 := ProtoInstance73;
{ .AddChildren }
fieldValue96.AddChildren([ProtoInstance97]);
{ .AddFieldValue }
ProtoInstance95.FieldValue := fieldValue96;
fieldValue98 := TfieldValueNode.Create;
fieldValue98.NameField := 'endnode';
ProtoInstance99 := TProtoInstanceNode.Create;
ProtoInstance99 := ProtoInstance76;
{ .AddChildren }
fieldValue98.AddChildren([ProtoInstance99]);
{ .AddFieldValue }
ProtoInstance95.FieldValue := fieldValue98;
fieldValue100 := TfieldValueNode.Create;
fieldValue100.NameField := 'transnode';
Transform101 := TTransformNode.Create;
Transform101 := Transform22;
{ .AddChildren }
fieldValue100.AddChildren([Transform101]);
{ .AddFieldValue }
ProtoInstance95.FieldValue := fieldValue100;
fieldValue102 := TfieldValueNode.Create;
fieldValue102.NameField := 'rotscalenode';
Transform103 := TTransformNode.Create;
Transform103 := Transform23;
{ .AddChildren }
fieldValue102.AddChildren([Transform103]);
{ .AddFieldValue }
ProtoInstance95.FieldValue := fieldValue102;
{ .AddChildren }
Group7.AddChildren([ProtoInstance95]);
Group7.AddRoute(ProtoInstance73.EventTranslation_changed, ProtoInstance77.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance74.EventTranslation_changed, ProtoInstance77.EventSet_endpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance73.EventTranslation_changed, ProtoInstance86.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance75.EventTranslation_changed, ProtoInstance86.EventSet_endpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance73.EventTranslation_changed, ProtoInstance95.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance76.EventTranslation_changed, ProtoInstance95.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
