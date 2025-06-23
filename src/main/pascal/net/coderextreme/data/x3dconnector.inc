function x3dconnector: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Shape11: TShapeNode;
Appearance12: TAppearanceNode;
Material13: TMaterialNode;
Sphere14: TSphereNode;
PlaneSensor15: TPlaneSensorNode;
Transform17: TTransformNode;
Shape18: TShapeNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
Sphere21: TSphereNode;
PlaneSensor22: TPlaneSensorNode;
Transform24: TTransformNode;
Transform25: TTransformNode;
Shape26: TShapeNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
Cylinder29: TCylinderNode;
ProtoDeclare30: TProtoDeclareNode;
ProtoInterface31: TProtoInterfaceNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
ProtoBody38: TProtoBodyNode;
Script39: TScriptNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
IS46: TISNode;
connect47: TconnectNode;
connect48: TconnectNode;
connect49: TconnectNode;
connect50: TconnectNode;
connect51: TconnectNode;
connect52: TconnectNode;
ProtoInstance53: TProtoInstanceNode;
fieldValue54: TfieldValueNode;
Transform55: TTransformNode;
fieldValue56: TfieldValueNode;
Transform57: TTransformNode;
fieldValue58: TfieldValueNode;
Transform59: TTransformNode;
fieldValue60: TfieldValueNode;
Transform61: TTransformNode;
fieldValue62: TfieldValueNode;
fieldValue63: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'x3dconnector.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
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
Transform10 := TTransformNode.Create;
Shape11 := TShapeNode.Create;
Appearance12 := TAppearanceNode.Create;
Material13 := TMaterialNode.Create;
Material13.DiffuseColor := Vector3(0.7,0.2,0.2);
{ .SetMaterial }
Appearance12.Material := Material13;
{ .SetAppearance }
Shape11.Appearance := Appearance12;
Sphere14 := TSphereNode.Create;
Sphere14.Radius := 0.1;
{ .SetGeometry }
Shape11.Geometry := Sphere14;
{ .AddChild }
Transform10.AddChildren([Shape11]);
PlaneSensor15 := TPlaneSensorNode.Create;
PlaneSensor15.Description := 'Grab to move';
{ .AddChildren }
Transform10.AddChildren([PlaneSensor15]);
Transform10.AddRoute(PlaneSensor15.EventTranslation_changed, Transform10.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform17 := TTransformNode.Create;
Transform17.Translation := Vector3(1,-1,0.01);
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(0.2,0.7,0.2);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape18.Appearance := Appearance19;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.1;
{ .SetGeometry }
Shape18.Geometry := Sphere21;
{ .AddChild }
Transform17.AddChildren([Shape18]);
PlaneSensor22 := TPlaneSensorNode.Create;
PlaneSensor22.Description := 'Grab to move';
PlaneSensor22.Offset := Vector3(1,-1,0.01);
{ .AddChildren }
Transform17.AddChildren([PlaneSensor22]);
Transform17.AddRoute(PlaneSensor22.EventTranslation_changed, Transform17.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform17]);
Transform24 := TTransformNode.Create;
Transform25 := TTransformNode.Create;
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0.2,0.7,0.7);
Material28.Transparency := 0.5;
{ .SetMaterial }
Appearance27.Material := Material28;
{ .SetAppearance }
Shape26.Appearance := Appearance27;
Cylinder29 := TCylinderNode.Create;
Cylinder29.Radius := 0.05;
{ .SetGeometry }
Shape26.Geometry := Cylinder29;
{ .AddChild }
Transform25.AddChildren([Shape26]);
{ .AddChildren }
Transform24.AddChildren([Transform25]);
{ .AddChildren }
Group7.AddChildren([Transform24]);
ProtoDeclare30 := TProtoDeclareNode.Create;
ProtoDeclare30.NameField := 'x3dconnector';
ProtoInterface31 := TProtoInterfaceNode.Create;
field32 := TfieldNode.Create;
field32.NameField := 'startnode';
field32.AccessType := 'initializeOnly';
field32.Type := 'SFNode';
{ .AddField }
ProtoInterface31.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'endnode';
field33.AccessType := 'initializeOnly';
field33.Type := 'SFNode';
{ .AddField }
ProtoInterface31.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'transnode';
field34.AccessType := 'initializeOnly';
field34.Type := 'SFNode';
{ .AddField }
ProtoInterface31.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'rotscalenode';
field35.AccessType := 'initializeOnly';
field35.Type := 'SFNode';
{ .AddField }
ProtoInterface31.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'set_startpoint';
field36.AccessType := 'inputOnly';
field36.Type := 'SFVec3f';
{ .AddField }
ProtoInterface31.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'set_endpoint';
field37.AccessType := 'inputOnly';
field37.Type := 'SFVec3f';
{ .AddField }
ProtoInterface31.Field := field37;
{ .SetProtoInterface }
ProtoDeclare30.ProtoInterface := ProtoInterface31;
ProtoBody38 := TProtoBodyNode.Create;
Script39 := TScriptNode.Create;
field40 := TfieldNode.Create;
field40.NameField := 'startnode';
field40.AccessType := 'initializeOnly';
field40.Type := 'SFNode';
{ .AddField }
Script39.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'endnode';
field41.AccessType := 'initializeOnly';
field41.Type := 'SFNode';
{ .AddField }
Script39.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'transnode';
field42.AccessType := 'initializeOnly';
field42.Type := 'SFNode';
{ .AddField }
Script39.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'rotscalenode';
field43.AccessType := 'initializeOnly';
field43.Type := 'SFNode';
{ .AddField }
Script39.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'set_startpoint';
field44.AccessType := 'inputOnly';
field44.Type := 'SFVec3f';
{ .AddField }
Script39.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'set_endpoint';
field45.AccessType := 'inputOnly';
field45.Type := 'SFVec3f';
{ .AddField }
Script39.Field := field45;
IS46 := TISNode.Create;
connect47 := TconnectNode.Create;
connect47.NodeField := 'startnode';
connect47.ProtoField := 'startnode';
{ .AddConnect }
IS46.Connect := connect47;
connect48 := TconnectNode.Create;
connect48.NodeField := 'endnode';
connect48.ProtoField := 'endnode';
{ .AddConnect }
IS46.Connect := connect48;
connect49 := TconnectNode.Create;
connect49.NodeField := 'transnode';
connect49.ProtoField := 'transnode';
{ .AddConnect }
IS46.Connect := connect49;
connect50 := TconnectNode.Create;
connect50.NodeField := 'rotscalenode';
connect50.ProtoField := 'rotscalenode';
{ .AddConnect }
IS46.Connect := connect50;
connect51 := TconnectNode.Create;
connect51.NodeField := 'set_startpoint';
connect51.ProtoField := 'set_startpoint';
{ .AddConnect }
IS46.Connect := connect51;
connect52 := TconnectNode.Create;
connect52.NodeField := 'set_endpoint';
connect52.ProtoField := 'set_endpoint';
{ .AddConnect }
IS46.Connect := connect52;
{ .SetIS }
Script39.IS := IS46;

Script39.SetSourceCode('''ecmascript:\n"+
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
ProtoBody38.AddChildren([Script39]);
{ .SetProtoBody }
ProtoDeclare30.ProtoBody := ProtoBody38;
{ .AddChildren }
Group7.AddChildren([ProtoDeclare30]);
ProtoInstance53 := TProtoInstanceNode.Create;
ProtoInstance53.NameField := 'x3dconnector';
fieldValue54 := TfieldValueNode.Create;
fieldValue54.NameField := 'startnode';
Transform55 := TTransformNode.Create;
Transform55 := Transform10;
{ .AddChildren }
fieldValue54.AddChildren([Transform55]);
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue54;
fieldValue56 := TfieldValueNode.Create;
fieldValue56.NameField := 'endnode';
Transform57 := TTransformNode.Create;
Transform57 := Transform17;
{ .AddChildren }
fieldValue56.AddChildren([Transform57]);
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue56;
fieldValue58 := TfieldValueNode.Create;
fieldValue58.NameField := 'transnode';
Transform59 := TTransformNode.Create;
Transform59 := Transform24;
{ .AddChildren }
fieldValue58.AddChildren([Transform59]);
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue58;
fieldValue60 := TfieldValueNode.Create;
fieldValue60.NameField := 'rotscalenode';
Transform61 := TTransformNode.Create;
Transform61 := Transform25;
{ .AddChildren }
fieldValue60.AddChildren([Transform61]);
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue60;
fieldValue62 := TfieldValueNode.Create;
fieldValue62.NameField := 'set_startpoint';
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue62;
fieldValue63 := TfieldValueNode.Create;
fieldValue63.NameField := 'set_endpoint';
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue63;
{ .AddChildren }
Group7.AddChildren([ProtoInstance53]);
Group7.AddRoute(Transform10.EventTranslation_changed, ProtoInstance53.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(Transform17.EventTranslation_changed, ProtoInstance53.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
