function arc: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
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
field36: TfieldNode;
field37: TfieldNode;
ProtoBody38: TProtoBodyNode;
Group39: TGroupNode;
Transform40: TTransformNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
Cylinder45: TCylinderNode;
Script46: TScriptNode;
field47: TfieldNode;
field48: TfieldNode;
field49: TfieldNode;
Transform50: TTransformNode;
field51: TfieldNode;
Transform52: TTransformNode;
field53: TfieldNode;
field54: TfieldNode;
IS55: TISNode;
connect56: TconnectNode;
connect57: TconnectNode;
connect58: TconnectNode;
connect59: TconnectNode;
ProtoInstance60: TProtoInstanceNode;
ProtoInstance61: TProtoInstanceNode;
ProtoInstance62: TProtoInstanceNode;
ProtoInstance63: TProtoInstanceNode;
ProtoInstance64: TProtoInstanceNode;
fieldValue65: TfieldValueNode;
ProtoInstance66: TProtoInstanceNode;
fieldValue67: TfieldValueNode;
ProtoInstance68: TProtoInstanceNode;
fieldValue69: TfieldValueNode;
fieldValue70: TfieldValueNode;
ProtoInstance71: TProtoInstanceNode;
fieldValue72: TfieldValueNode;
ProtoInstance73: TProtoInstanceNode;
fieldValue74: TfieldValueNode;
ProtoInstance75: TProtoInstanceNode;
fieldValue76: TfieldValueNode;
fieldValue77: TfieldValueNode;
ProtoInstance78: TProtoInstanceNode;
fieldValue79: TfieldValueNode;
ProtoInstance80: TProtoInstanceNode;
fieldValue81: TfieldValueNode;
ProtoInstance82: TProtoInstanceNode;
fieldValue83: TfieldValueNode;
fieldValue84: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'arc.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'Only Viewpoint';
{ .AddChildren }
Group7.AddChildren([Viewpoint8]);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ .AddChildren }
Group7.AddChildren([Background9]);
ProtoDeclare10 := TProtoDeclareNode.Create;
ProtoDeclare10.NameField := 'point';
ProtoInterface11 := TProtoInterfaceNode.Create;
field12 := TfieldNode.Create;
field12.NameField := 'translation';
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
connect16.ProtoField := 'translation';
{ .AddConnect }
IS15.Connect := connect16;
{ .SetIS }
Transform14.IS := IS15;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.1;
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
PositionInterpolator21 := TPositionInterpolatorNode.Create;
PositionInterpolator21.SetKey([0,1]);
PositionInterpolator21.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform14.AddChildren([PositionInterpolator21]);
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
field25.NameField := 'set_location';
field25.AccessType := 'inputOnly';
field25.Type := 'SFTime';
{ .AddField }
Script22.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'keyValue';
field26.AccessType := 'inputOutput';
field26.Type := 'MFVec3f';
field26.Value := '0 0 0 0 5 0';
{ .AddField }
Script22.Field := field26;

Script22.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
{ .AddChildren }
Transform14.AddChildren([Script22]);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.CycleInterval := 3;
TimeSensor27.Loop := True;
{ .AddChildren }
Transform14.AddChildren([TimeSensor27]);
Transform14.AddRoute(TimeSensor27.FdCycletime, Script22.EventSet_location);
{ .AddX3DRoute }
Transform14.AddRoute(TimeSensor27.EventFraction_changed, PositionInterpolator21.EventSet_fraction);
{ .AddX3DRoute }
Transform14.AddRoute(Script22.FdKeyvalue, PositionInterpolator21.FdKeyvalue);
{ .AddX3DRoute }
Transform14.AddRoute(PositionInterpolator21.EventValue_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody13.AddChildren([Transform14]);
{ .SetProtoBody }
ProtoDeclare10.ProtoBody := ProtoBody13;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare10]);
ProtoDeclare32 := TProtoDeclareNode.Create;
ProtoDeclare32.NameField := 'x3dconnector';
ProtoInterface33 := TProtoInterfaceNode.Create;
field34 := TfieldNode.Create;
field34.NameField := 'startnode';
field34.AccessType := 'initializeOnly';
field34.Type := 'SFNode';
{ .AddField }
ProtoInterface33.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'endnode';
field35.AccessType := 'initializeOnly';
field35.Type := 'SFNode';
{ .AddField }
ProtoInterface33.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'set_startpoint';
field36.AccessType := 'inputOnly';
field36.Type := 'SFVec3f';
{ .AddField }
ProtoInterface33.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'set_endpoint';
field37.AccessType := 'inputOnly';
field37.Type := 'SFVec3f';
{ .AddField }
ProtoInterface33.Field := field37;
{ .SetProtoInterface }
ProtoDeclare32.ProtoInterface := ProtoInterface33;
ProtoBody38 := TProtoBodyNode.Create;
Group39 := TGroupNode.Create;
Transform40 := TTransformNode.Create;
Transform41 := TTransformNode.Create;
Shape42 := TShapeNode.Create;
Appearance43 := TAppearanceNode.Create;
Material44 := TMaterialNode.Create;
Material44.DiffuseColor := Vector3(0.2,0.7,0.7);
Material44.Transparency := 0.5;
{ .SetMaterial }
Appearance43.Material := Material44;
{ .SetAppearance }
Shape42.Appearance := Appearance43;
Cylinder45 := TCylinderNode.Create;
Cylinder45.Radius := 0.05;
{ .SetGeometry }
Shape42.Geometry := Cylinder45;
{ .AddChild }
Transform41.AddChildren([Shape42]);
{ .AddChildren }
Transform40.AddChildren([Transform41]);
{ .AddChildren }
Group39.AddChildren([Transform40]);
Script46 := TScriptNode.Create;
field47 := TfieldNode.Create;
field47.NameField := 'startnode';
field47.AccessType := 'initializeOnly';
field47.Type := 'SFNode';
{ .AddField }
Script46.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'endnode';
field48.AccessType := 'initializeOnly';
field48.Type := 'SFNode';
{ .AddField }
Script46.Field := field48;
field49 := TfieldNode.Create;
field49.NameField := 'position';
field49.AccessType := 'inputOutput';
field49.Type := 'SFNode';
Transform50 := TTransformNode.Create;
Transform50 := Transform40;
{ .AddChildren }
field49.AddChildren([Transform50]);
{ .AddField }
Script46.Field := field49;
field51 := TfieldNode.Create;
field51.NameField := 'rotscale';
field51.AccessType := 'inputOutput';
field51.Type := 'SFNode';
Transform52 := TTransformNode.Create;
Transform52 := Transform41;
{ .AddChildren }
field51.AddChildren([Transform52]);
{ .AddField }
Script46.Field := field51;
field53 := TfieldNode.Create;
field53.NameField := 'set_startpoint';
field53.AccessType := 'inputOnly';
field53.Type := 'SFVec3f';
{ .AddField }
Script46.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'set_endpoint';
field54.AccessType := 'inputOnly';
field54.Type := 'SFVec3f';
{ .AddField }
Script46.Field := field54;
IS55 := TISNode.Create;
connect56 := TconnectNode.Create;
connect56.NodeField := 'startnode';
connect56.ProtoField := 'startnode';
{ .AddConnect }
IS55.Connect := connect56;
connect57 := TconnectNode.Create;
connect57.NodeField := 'endnode';
connect57.ProtoField := 'endnode';
{ .AddConnect }
IS55.Connect := connect57;
connect58 := TconnectNode.Create;
connect58.NodeField := 'set_startpoint';
connect58.ProtoField := 'set_startpoint';
{ .AddConnect }
IS55.Connect := connect58;
connect59 := TconnectNode.Create;
connect59.NodeField := 'set_endpoint';
connect59.ProtoField := 'set_endpoint';
{ .AddConnect }
IS55.Connect := connect59;
{ .SetIS }
Script46.IS := IS55;

Script46.SetSourceCode('''ecmascript:\n"+
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
"	    } else if (typeof SFRotation !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      position.translation = trafo.translation;\n"+
"		      rotscale.rotation = trafo.rotation;\n"+
"		      rotscale.scale = trafo.scale;\n"+
"	      }\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }''');
{ .AddChildren }
Group39.AddChildren([Script46]);
{ .AddChildren }
ProtoBody38.AddChildren([Group39]);
{ .SetProtoBody }
ProtoDeclare32.ProtoBody := ProtoBody38;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare32]);
ProtoInstance60 := TProtoInstanceNode.Create;
ProtoInstance60.NameField := 'point';
{ .AddChildren }
Group7.AddChildren([ProtoInstance60]);
ProtoInstance61 := TProtoInstanceNode.Create;
ProtoInstance61.NameField := 'point';
{ .AddChildren }
Group7.AddChildren([ProtoInstance61]);
ProtoInstance62 := TProtoInstanceNode.Create;
ProtoInstance62.NameField := 'point';
{ .AddChildren }
Group7.AddChildren([ProtoInstance62]);
ProtoInstance63 := TProtoInstanceNode.Create;
ProtoInstance63.NameField := 'point';
{ .AddChildren }
Group7.AddChildren([ProtoInstance63]);
ProtoInstance64 := TProtoInstanceNode.Create;
ProtoInstance64.NameField := 'x3dconnector';
fieldValue65 := TfieldValueNode.Create;
fieldValue65.NameField := 'startnode';
ProtoInstance66 := TProtoInstanceNode.Create;
ProtoInstance66 := ProtoInstance60;
{ .AddChildren }
fieldValue65.AddChildren([ProtoInstance66]);
{ .AddFieldValue }
ProtoInstance64.FieldValue := fieldValue65;
fieldValue67 := TfieldValueNode.Create;
fieldValue67.NameField := 'endnode';
ProtoInstance68 := TProtoInstanceNode.Create;
ProtoInstance68 := ProtoInstance61;
{ .AddChildren }
fieldValue67.AddChildren([ProtoInstance68]);
{ .AddFieldValue }
ProtoInstance64.FieldValue := fieldValue67;
fieldValue69 := TfieldValueNode.Create;
fieldValue69.NameField := 'set_startpoint';
{ .AddFieldValue }
ProtoInstance64.FieldValue := fieldValue69;
fieldValue70 := TfieldValueNode.Create;
fieldValue70.NameField := 'set_endpoint';
{ .AddFieldValue }
ProtoInstance64.FieldValue := fieldValue70;
{ .AddChildren }
Group7.AddChildren([ProtoInstance64]);
ProtoInstance71 := TProtoInstanceNode.Create;
ProtoInstance71.NameField := 'x3dconnector';
fieldValue72 := TfieldValueNode.Create;
fieldValue72.NameField := 'startnode';
ProtoInstance73 := TProtoInstanceNode.Create;
ProtoInstance73 := ProtoInstance60;
{ .AddChildren }
fieldValue72.AddChildren([ProtoInstance73]);
{ .AddFieldValue }
ProtoInstance71.FieldValue := fieldValue72;
fieldValue74 := TfieldValueNode.Create;
fieldValue74.NameField := 'endnode';
ProtoInstance75 := TProtoInstanceNode.Create;
ProtoInstance75 := ProtoInstance62;
{ .AddChildren }
fieldValue74.AddChildren([ProtoInstance75]);
{ .AddFieldValue }
ProtoInstance71.FieldValue := fieldValue74;
fieldValue76 := TfieldValueNode.Create;
fieldValue76.NameField := 'set_startpoint';
{ .AddFieldValue }
ProtoInstance71.FieldValue := fieldValue76;
fieldValue77 := TfieldValueNode.Create;
fieldValue77.NameField := 'set_endpoint';
{ .AddFieldValue }
ProtoInstance71.FieldValue := fieldValue77;
{ .AddChildren }
Group7.AddChildren([ProtoInstance71]);
ProtoInstance78 := TProtoInstanceNode.Create;
ProtoInstance78.NameField := 'x3dconnector';
fieldValue79 := TfieldValueNode.Create;
fieldValue79.NameField := 'startnode';
ProtoInstance80 := TProtoInstanceNode.Create;
ProtoInstance80 := ProtoInstance60;
{ .AddChildren }
fieldValue79.AddChildren([ProtoInstance80]);
{ .AddFieldValue }
ProtoInstance78.FieldValue := fieldValue79;
fieldValue81 := TfieldValueNode.Create;
fieldValue81.NameField := 'endnode';
ProtoInstance82 := TProtoInstanceNode.Create;
ProtoInstance82 := ProtoInstance63;
{ .AddChildren }
fieldValue81.AddChildren([ProtoInstance82]);
{ .AddFieldValue }
ProtoInstance78.FieldValue := fieldValue81;
fieldValue83 := TfieldValueNode.Create;
fieldValue83.NameField := 'set_startpoint';
{ .AddFieldValue }
ProtoInstance78.FieldValue := fieldValue83;
fieldValue84 := TfieldValueNode.Create;
fieldValue84.NameField := 'set_endpoint';
{ .AddFieldValue }
ProtoInstance78.FieldValue := fieldValue84;
{ .AddChildren }
Group7.AddChildren([ProtoInstance78]);
Group7.AddRoute(ProtoInstance60.FdTranslation, ProtoInstance64.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance61.FdTranslation, ProtoInstance64.EventSet_endpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance60.FdTranslation, ProtoInstance71.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance62.FdTranslation, ProtoInstance71.EventSet_endpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance60.FdTranslation, ProtoInstance78.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(ProtoInstance63.FdTranslation, ProtoInstance78.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
