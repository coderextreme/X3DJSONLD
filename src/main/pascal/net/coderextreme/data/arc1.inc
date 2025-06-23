function arc1: TX3DRootNode;
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
Transform33: TTransformNode;
ProtoInstance34: TProtoInstanceNode;
Transform35: TTransformNode;
ProtoInstance36: TProtoInstanceNode;
Transform37: TTransformNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
Cylinder42: TCylinderNode;
ProtoDeclare43: TProtoDeclareNode;
ProtoInterface44: TProtoInterfaceNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
field48: TfieldNode;
field49: TfieldNode;
field50: TfieldNode;
ProtoBody51: TProtoBodyNode;
Script52: TScriptNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
IS59: TISNode;
connect60: TconnectNode;
connect61: TconnectNode;
connect62: TconnectNode;
connect63: TconnectNode;
connect64: TconnectNode;
connect65: TconnectNode;
ProtoInstance66: TProtoInstanceNode;
fieldValue67: TfieldValueNode;
Transform68: TTransformNode;
fieldValue69: TfieldValueNode;
Transform70: TTransformNode;
fieldValue71: TfieldValueNode;
Transform72: TTransformNode;
fieldValue73: TfieldValueNode;
Transform74: TTransformNode;
fieldValue75: TfieldValueNode;
fieldValue76: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc1.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d';
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
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
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
Transform14.AddRoute(Script22.EventTranslation_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody13.AddChildren([Transform14]);
{ .SetProtoBody }
ProtoDeclare10.ProtoBody := ProtoBody13;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare10]);
Transform33 := TTransformNode.Create;
ProtoInstance34 := TProtoInstanceNode.Create;
ProtoInstance34.NameField := 'point';
{ .AddChildren }
Transform33.AddChildren([ProtoInstance34]);
{ .AddChildren }
Group7.AddChildren([Transform33]);
Transform35 := TTransformNode.Create;
ProtoInstance36 := TProtoInstanceNode.Create;
ProtoInstance36.NameField := 'point';
{ .AddChildren }
Transform35.AddChildren([ProtoInstance36]);
{ .AddChildren }
Group7.AddChildren([Transform35]);
Transform37 := TTransformNode.Create;
Transform38 := TTransformNode.Create;
Shape39 := TShapeNode.Create;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
Material41.DiffuseColor := Vector3(0.2,0.7,0.7);
Material41.Transparency := 0.5;
{ .SetMaterial }
Appearance40.Material := Material41;
{ .SetAppearance }
Shape39.Appearance := Appearance40;
Cylinder42 := TCylinderNode.Create;
Cylinder42.Radius := 0.05;
{ .SetGeometry }
Shape39.Geometry := Cylinder42;
{ .AddChild }
Transform38.AddChildren([Shape39]);
{ .AddChildren }
Transform37.AddChildren([Transform38]);
{ .AddChildren }
Group7.AddChildren([Transform37]);
ProtoDeclare43 := TProtoDeclareNode.Create;
ProtoDeclare43.NameField := 'x3dconnector';
ProtoInterface44 := TProtoInterfaceNode.Create;
field45 := TfieldNode.Create;
field45.NameField := 'startnode';
field45.AccessType := 'initializeOnly';
field45.Type := 'SFNode';
{ .AddField }
ProtoInterface44.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'endnode';
field46.AccessType := 'initializeOnly';
field46.Type := 'SFNode';
{ .AddField }
ProtoInterface44.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'transnode';
field47.AccessType := 'inputOutput';
field47.Type := 'SFNode';
{ .AddField }
ProtoInterface44.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'rotscalenode';
field48.AccessType := 'inputOutput';
field48.Type := 'SFNode';
{ .AddField }
ProtoInterface44.Field := field48;
field49 := TfieldNode.Create;
field49.NameField := 'set_startpoint';
field49.AccessType := 'inputOnly';
field49.Type := 'SFVec3f';
{ .AddField }
ProtoInterface44.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'set_endpoint';
field50.AccessType := 'inputOnly';
field50.Type := 'SFVec3f';
{ .AddField }
ProtoInterface44.Field := field50;
{ .SetProtoInterface }
ProtoDeclare43.ProtoInterface := ProtoInterface44;
ProtoBody51 := TProtoBodyNode.Create;
Script52 := TScriptNode.Create;
field53 := TfieldNode.Create;
field53.NameField := 'startnode';
field53.AccessType := 'initializeOnly';
field53.Type := 'SFNode';
{ .AddField }
Script52.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'endnode';
field54.AccessType := 'initializeOnly';
field54.Type := 'SFNode';
{ .AddField }
Script52.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'transnode';
field55.AccessType := 'initializeOnly';
field55.Type := 'SFNode';
{ .AddField }
Script52.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'rotscalenode';
field56.AccessType := 'initializeOnly';
field56.Type := 'SFNode';
{ .AddField }
Script52.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'set_startpoint';
field57.AccessType := 'inputOnly';
field57.Type := 'SFVec3f';
{ .AddField }
Script52.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'set_endpoint';
field58.AccessType := 'inputOnly';
field58.Type := 'SFVec3f';
{ .AddField }
Script52.Field := field58;
IS59 := TISNode.Create;
connect60 := TconnectNode.Create;
connect60.NodeField := 'startnode';
connect60.ProtoField := 'startnode';
{ .AddConnect }
IS59.Connect := connect60;
connect61 := TconnectNode.Create;
connect61.NodeField := 'endnode';
connect61.ProtoField := 'endnode';
{ .AddConnect }
IS59.Connect := connect61;
connect62 := TconnectNode.Create;
connect62.NodeField := 'transnode';
connect62.ProtoField := 'transnode';
{ .AddConnect }
IS59.Connect := connect62;
connect63 := TconnectNode.Create;
connect63.NodeField := 'rotscalenode';
connect63.ProtoField := 'rotscalenode';
{ .AddConnect }
IS59.Connect := connect63;
connect64 := TconnectNode.Create;
connect64.NodeField := 'set_startpoint';
connect64.ProtoField := 'set_startpoint';
{ .AddConnect }
IS59.Connect := connect64;
connect65 := TconnectNode.Create;
connect65.NodeField := 'set_endpoint';
connect65.ProtoField := 'set_endpoint';
{ .AddConnect }
IS59.Connect := connect65;
{ .SetIS }
Script52.IS := IS59;

Script52.SetSourceCode('''ecmascript:\n"+
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
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
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
ProtoBody51.AddChildren([Script52]);
{ .SetProtoBody }
ProtoDeclare43.ProtoBody := ProtoBody51;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare43]);
ProtoInstance66 := TProtoInstanceNode.Create;
ProtoInstance66.NameField := 'x3dconnector';
fieldValue67 := TfieldValueNode.Create;
fieldValue67.NameField := 'startnode';
Transform68 := TTransformNode.Create;
Transform68 := Transform33;
{ .AddChildren }
fieldValue67.AddChildren([Transform68]);
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue67;
fieldValue69 := TfieldValueNode.Create;
fieldValue69.NameField := 'endnode';
Transform70 := TTransformNode.Create;
Transform70 := Transform35;
{ .AddChildren }
fieldValue69.AddChildren([Transform70]);
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue69;
fieldValue71 := TfieldValueNode.Create;
fieldValue71.NameField := 'transnode';
Transform72 := TTransformNode.Create;
Transform72 := Transform37;
{ .AddChildren }
fieldValue71.AddChildren([Transform72]);
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue71;
fieldValue73 := TfieldValueNode.Create;
fieldValue73.NameField := 'rotscalenode';
Transform74 := TTransformNode.Create;
Transform74 := Transform38;
{ .AddChildren }
fieldValue73.AddChildren([Transform74]);
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue73;
fieldValue75 := TfieldValueNode.Create;
fieldValue75.NameField := 'set_startpoint';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue75;
fieldValue76 := TfieldValueNode.Create;
fieldValue76.NameField := 'set_endpoint';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue76;
{ .AddChildren }
Group7.AddChildren([ProtoInstance66]);
Group7.AddRoute(Transform33.EventTranslation_changed, ProtoInstance66.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(Transform35.EventTranslation_changed, ProtoInstance66.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
