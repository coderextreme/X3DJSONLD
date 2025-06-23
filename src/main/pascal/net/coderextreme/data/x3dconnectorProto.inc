function x3dconnectorProto: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
WorldInfo11: TWorldInfoNode;
Viewpoint12: TViewpointNode;
Background13: TBackgroundNode;
Transform14: TTransformNode;
Shape15: TShapeNode;
Appearance16: TAppearanceNode;
Material17: TMaterialNode;
Sphere18: TSphereNode;
PlaneSensor19: TPlaneSensorNode;
Transform21: TTransformNode;
Shape22: TShapeNode;
Appearance23: TAppearanceNode;
Material24: TMaterialNode;
Sphere25: TSphereNode;
PlaneSensor26: TPlaneSensorNode;
Transform28: TTransformNode;
Shape29: TShapeNode;
Appearance30: TAppearanceNode;
Material31: TMaterialNode;
Sphere32: TSphereNode;
PlaneSensor33: TPlaneSensorNode;
Transform35: TTransformNode;
Shape36: TShapeNode;
Appearance37: TAppearanceNode;
Material38: TMaterialNode;
Sphere39: TSphereNode;
PlaneSensor40: TPlaneSensorNode;
Transform42: TTransformNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Appearance45: TAppearanceNode;
Material46: TMaterialNode;
Cylinder47: TCylinderNode;
Transform48: TTransformNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Appearance51: TAppearanceNode;
Material52: TMaterialNode;
Cylinder53: TCylinderNode;
Transform54: TTransformNode;
Transform55: TTransformNode;
Shape56: TShapeNode;
Appearance57: TAppearanceNode;
Material58: TMaterialNode;
Cylinder59: TCylinderNode;
ProtoDeclare60: TProtoDeclareNode;
ProtoInterface61: TProtoInterfaceNode;
field62: TfieldNode;
field63: TfieldNode;
field64: TfieldNode;
field65: TfieldNode;
field66: TfieldNode;
field67: TfieldNode;
ProtoBody68: TProtoBodyNode;
Script69: TScriptNode;
field70: TfieldNode;
field71: TfieldNode;
field72: TfieldNode;
field73: TfieldNode;
field74: TfieldNode;
field75: TfieldNode;
IS76: TISNode;
connect77: TconnectNode;
connect78: TconnectNode;
connect79: TconnectNode;
connect80: TconnectNode;
connect81: TconnectNode;
connect82: TconnectNode;
ProtoInstance83: TProtoInstanceNode;
fieldValue84: TfieldValueNode;
Transform85: TTransformNode;
fieldValue86: TfieldValueNode;
Transform87: TTransformNode;
fieldValue88: TfieldValueNode;
Transform89: TTransformNode;
fieldValue90: TfieldValueNode;
Transform91: TTransformNode;
fieldValue92: TfieldValueNode;
fieldValue93: TfieldValueNode;
ProtoInstance94: TProtoInstanceNode;
fieldValue95: TfieldValueNode;
Transform96: TTransformNode;
fieldValue97: TfieldValueNode;
Transform98: TTransformNode;
fieldValue99: TfieldValueNode;
Transform100: TTransformNode;
fieldValue101: TfieldValueNode;
Transform102: TTransformNode;
fieldValue103: TfieldValueNode;
fieldValue104: TfieldValueNode;
ProtoInstance105: TProtoInstanceNode;
fieldValue106: TfieldValueNode;
Transform107: TTransformNode;
fieldValue108: TfieldValueNode;
Transform109: TTransformNode;
fieldValue110: TfieldValueNode;
Transform111: TTransformNode;
fieldValue112: TfieldValueNode;
Transform113: TTransformNode;
fieldValue114: TfieldValueNode;
fieldValue115: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'x3dconnectorProto.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['created'] := 'Unknown';
X3D0.Meta['modified'] := 'July 30 2023';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
Group10 := TGroupNode.Create;
WorldInfo11 := TWorldInfoNode.Create;
WorldInfo11.Title := 'Connector Proto';
{ .AddChildren }
Group10.AddChildren([WorldInfo11]);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Position := Vector3(0,0,5);
Viewpoint12.Description := 'Only Viewpoint';
{ .AddChildren }
Group10.AddChildren([Viewpoint12]);
Background13 := TBackgroundNode.Create;
Background13.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ .AddChildren }
Group10.AddChildren([Background13]);
Transform14 := TTransformNode.Create;
Shape15 := TShapeNode.Create;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(0.7,0.2,0.2);
{ .SetMaterial }
Appearance16.Material := Material17;
{ .SetAppearance }
Shape15.Appearance := Appearance16;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.1;
{ .SetGeometry }
Shape15.Geometry := Sphere18;
{ .AddChild }
Transform14.AddChildren([Shape15]);
PlaneSensor19 := TPlaneSensorNode.Create;
PlaneSensor19.Description := 'Grab to move';
{ .AddChildren }
Transform14.AddChildren([PlaneSensor19]);
Transform14.AddRoute(PlaneSensor19.EventTranslation_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group10.AddChildren([Transform14]);
Transform21 := TTransformNode.Create;
Transform21.Translation := Vector3(1,-1,0.01);
Shape22 := TShapeNode.Create;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.2,0.7,0.2);
{ .SetMaterial }
Appearance23.Material := Material24;
{ .SetAppearance }
Shape22.Appearance := Appearance23;
Sphere25 := TSphereNode.Create;
Sphere25.Radius := 0.1;
{ .SetGeometry }
Shape22.Geometry := Sphere25;
{ .AddChild }
Transform21.AddChildren([Shape22]);
PlaneSensor26 := TPlaneSensorNode.Create;
PlaneSensor26.Description := 'Grab to move';
PlaneSensor26.Offset := Vector3(1,-1,0.01);
{ .AddChildren }
Transform21.AddChildren([PlaneSensor26]);
Transform21.AddRoute(PlaneSensor26.EventTranslation_changed, Transform21.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group10.AddChildren([Transform21]);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(1,1,0.01);
Shape29 := TShapeNode.Create;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
Material31.DiffuseColor := Vector3(0.2,0.7,0.2);
{ .SetMaterial }
Appearance30.Material := Material31;
{ .SetAppearance }
Shape29.Appearance := Appearance30;
Sphere32 := TSphereNode.Create;
Sphere32.Radius := 0.1;
{ .SetGeometry }
Shape29.Geometry := Sphere32;
{ .AddChild }
Transform28.AddChildren([Shape29]);
PlaneSensor33 := TPlaneSensorNode.Create;
PlaneSensor33.Description := 'Grab to move';
PlaneSensor33.Offset := Vector3(1,1,0.01);
{ .AddChildren }
Transform28.AddChildren([PlaneSensor33]);
Transform28.AddRoute(PlaneSensor33.EventTranslation_changed, Transform28.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group10.AddChildren([Transform28]);
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(-1,1,0.01);
Shape36 := TShapeNode.Create;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.DiffuseColor := Vector3(0.2,0.7,0.2);
{ .SetMaterial }
Appearance37.Material := Material38;
{ .SetAppearance }
Shape36.Appearance := Appearance37;
Sphere39 := TSphereNode.Create;
Sphere39.Radius := 0.1;
{ .SetGeometry }
Shape36.Geometry := Sphere39;
{ .AddChild }
Transform35.AddChildren([Shape36]);
PlaneSensor40 := TPlaneSensorNode.Create;
PlaneSensor40.Description := 'Grab to move';
PlaneSensor40.Offset := Vector3(-1,1,0.01);
{ .AddChildren }
Transform35.AddChildren([PlaneSensor40]);
Transform35.AddRoute(PlaneSensor40.EventTranslation_changed, Transform35.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group10.AddChildren([Transform35]);
Transform42 := TTransformNode.Create;
Transform43 := TTransformNode.Create;
Shape44 := TShapeNode.Create;
Appearance45 := TAppearanceNode.Create;
Material46 := TMaterialNode.Create;
Material46.DiffuseColor := Vector3(0.2,0.7,0.7);
Material46.Transparency := 0.5;
{ .SetMaterial }
Appearance45.Material := Material46;
{ .SetAppearance }
Shape44.Appearance := Appearance45;
Cylinder47 := TCylinderNode.Create;
Cylinder47.Radius := 0.05;
{ .SetGeometry }
Shape44.Geometry := Cylinder47;
{ .AddChild }
Transform43.AddChildren([Shape44]);
{ .AddChildren }
Transform42.AddChildren([Transform43]);
{ .AddChildren }
Group10.AddChildren([Transform42]);
Transform48 := TTransformNode.Create;
Transform49 := TTransformNode.Create;
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.DiffuseColor := Vector3(0.2,0.7,0.7);
Material52.Transparency := 0.5;
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape50.Appearance := Appearance51;
Cylinder53 := TCylinderNode.Create;
Cylinder53.Radius := 0.05;
{ .SetGeometry }
Shape50.Geometry := Cylinder53;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
Transform48.AddChildren([Transform49]);
{ .AddChildren }
Group10.AddChildren([Transform48]);
Transform54 := TTransformNode.Create;
Transform55 := TTransformNode.Create;
Shape56 := TShapeNode.Create;
Appearance57 := TAppearanceNode.Create;
Material58 := TMaterialNode.Create;
Material58.DiffuseColor := Vector3(0.2,0.7,0.7);
Material58.Transparency := 0.5;
{ .SetMaterial }
Appearance57.Material := Material58;
{ .SetAppearance }
Shape56.Appearance := Appearance57;
Cylinder59 := TCylinderNode.Create;
Cylinder59.Radius := 0.05;
{ .SetGeometry }
Shape56.Geometry := Cylinder59;
{ .AddChild }
Transform55.AddChildren([Shape56]);
{ .AddChildren }
Transform54.AddChildren([Transform55]);
{ .AddChildren }
Group10.AddChildren([Transform54]);
ProtoDeclare60 := TProtoDeclareNode.Create;
ProtoDeclare60.NameField := 'x3dconnector';
ProtoInterface61 := TProtoInterfaceNode.Create;
field62 := TfieldNode.Create;
field62.NameField := 'startnode';
field62.AccessType := 'initializeOnly';
field62.Type := 'SFNode';
{ .AddField }
ProtoInterface61.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'endnode';
field63.AccessType := 'initializeOnly';
field63.Type := 'SFNode';
{ .AddField }
ProtoInterface61.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'transnode';
field64.AccessType := 'initializeOnly';
field64.Type := 'SFNode';
{ .AddField }
ProtoInterface61.Field := field64;
field65 := TfieldNode.Create;
field65.NameField := 'rotscalenode';
field65.AccessType := 'initializeOnly';
field65.Type := 'SFNode';
{ .AddField }
ProtoInterface61.Field := field65;
field66 := TfieldNode.Create;
field66.NameField := 'set_startpoint';
field66.AccessType := 'inputOnly';
field66.Type := 'SFVec3f';
{ .AddField }
ProtoInterface61.Field := field66;
field67 := TfieldNode.Create;
field67.NameField := 'set_endpoint';
field67.AccessType := 'inputOnly';
field67.Type := 'SFVec3f';
{ .AddField }
ProtoInterface61.Field := field67;
{ .SetProtoInterface }
ProtoDeclare60.ProtoInterface := ProtoInterface61;
ProtoBody68 := TProtoBodyNode.Create;
Script69 := TScriptNode.Create;
Script69.DirectOutput := True;
field70 := TfieldNode.Create;
field70.NameField := 'startnode';
field70.AccessType := 'initializeOnly';
field70.Type := 'SFNode';
{ .AddField }
Script69.Field := field70;
field71 := TfieldNode.Create;
field71.NameField := 'endnode';
field71.AccessType := 'initializeOnly';
field71.Type := 'SFNode';
{ .AddField }
Script69.Field := field71;
field72 := TfieldNode.Create;
field72.NameField := 'transnode';
field72.AccessType := 'initializeOnly';
field72.Type := 'SFNode';
{ .AddField }
Script69.Field := field72;
field73 := TfieldNode.Create;
field73.NameField := 'rotscalenode';
field73.AccessType := 'initializeOnly';
field73.Type := 'SFNode';
{ .AddField }
Script69.Field := field73;
field74 := TfieldNode.Create;
field74.NameField := 'set_startpoint';
field74.AccessType := 'inputOnly';
field74.Type := 'SFVec3f';
{ .AddField }
Script69.Field := field74;
field75 := TfieldNode.Create;
field75.NameField := 'set_endpoint';
field75.AccessType := 'inputOnly';
field75.Type := 'SFVec3f';
{ .AddField }
Script69.Field := field75;
IS76 := TISNode.Create;
connect77 := TconnectNode.Create;
connect77.NodeField := 'startnode';
connect77.ProtoField := 'startnode';
{ .AddConnect }
IS76.Connect := connect77;
connect78 := TconnectNode.Create;
connect78.NodeField := 'endnode';
connect78.ProtoField := 'endnode';
{ .AddConnect }
IS76.Connect := connect78;
connect79 := TconnectNode.Create;
connect79.NodeField := 'transnode';
connect79.ProtoField := 'transnode';
{ .AddConnect }
IS76.Connect := connect79;
connect80 := TconnectNode.Create;
connect80.NodeField := 'rotscalenode';
connect80.ProtoField := 'rotscalenode';
{ .AddConnect }
IS76.Connect := connect80;
connect81 := TconnectNode.Create;
connect81.NodeField := 'set_startpoint';
connect81.ProtoField := 'set_startpoint';
{ .AddConnect }
IS76.Connect := connect81;
connect82 := TconnectNode.Create;
connect82.NodeField := 'set_endpoint';
connect82.ProtoField := 'set_endpoint';
{ .AddConnect }
IS76.Connect := connect82;
{ .SetIS }
Script69.IS := IS76;

Script69.SetSourceCode('''ecmascript:\n"+
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
ProtoBody68.AddChildren([Script69]);
{ .SetProtoBody }
ProtoDeclare60.ProtoBody := ProtoBody68;
{ .AddChildren }
Group10.AddChildren([ProtoDeclare60]);
ProtoInstance83 := TProtoInstanceNode.Create;
ProtoInstance83.NameField := 'x3dconnector';
fieldValue84 := TfieldValueNode.Create;
fieldValue84.NameField := 'startnode';
Transform85 := TTransformNode.Create;
Transform85 := Transform14;
{ .AddChildren }
fieldValue84.AddChildren([Transform85]);
{ .AddFieldValue }
ProtoInstance83.FieldValue := fieldValue84;
fieldValue86 := TfieldValueNode.Create;
fieldValue86.NameField := 'endnode';
Transform87 := TTransformNode.Create;
Transform87 := Transform21;
{ .AddChildren }
fieldValue86.AddChildren([Transform87]);
{ .AddFieldValue }
ProtoInstance83.FieldValue := fieldValue86;
fieldValue88 := TfieldValueNode.Create;
fieldValue88.NameField := 'transnode';
Transform89 := TTransformNode.Create;
Transform89 := Transform42;
{ .AddChildren }
fieldValue88.AddChildren([Transform89]);
{ .AddFieldValue }
ProtoInstance83.FieldValue := fieldValue88;
fieldValue90 := TfieldValueNode.Create;
fieldValue90.NameField := 'rotscalenode';
Transform91 := TTransformNode.Create;
Transform91 := Transform43;
{ .AddChildren }
fieldValue90.AddChildren([Transform91]);
{ .AddFieldValue }
ProtoInstance83.FieldValue := fieldValue90;
fieldValue92 := TfieldValueNode.Create;
fieldValue92.NameField := 'set_startpoint';
fieldValue92.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance83.FieldValue := fieldValue92;
fieldValue93 := TfieldValueNode.Create;
fieldValue93.NameField := 'set_endpoint';
fieldValue93.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance83.FieldValue := fieldValue93;
{ .AddChildren }
Group10.AddChildren([ProtoInstance83]);
ProtoInstance94 := TProtoInstanceNode.Create;
ProtoInstance94.NameField := 'x3dconnector';
fieldValue95 := TfieldValueNode.Create;
fieldValue95.NameField := 'startnode';
Transform96 := TTransformNode.Create;
Transform96 := Transform14;
{ .AddChildren }
fieldValue95.AddChildren([Transform96]);
{ .AddFieldValue }
ProtoInstance94.FieldValue := fieldValue95;
fieldValue97 := TfieldValueNode.Create;
fieldValue97.NameField := 'endnode';
Transform98 := TTransformNode.Create;
Transform98 := Transform28;
{ .AddChildren }
fieldValue97.AddChildren([Transform98]);
{ .AddFieldValue }
ProtoInstance94.FieldValue := fieldValue97;
fieldValue99 := TfieldValueNode.Create;
fieldValue99.NameField := 'transnode';
Transform100 := TTransformNode.Create;
Transform100 := Transform48;
{ .AddChildren }
fieldValue99.AddChildren([Transform100]);
{ .AddFieldValue }
ProtoInstance94.FieldValue := fieldValue99;
fieldValue101 := TfieldValueNode.Create;
fieldValue101.NameField := 'rotscalenode';
Transform102 := TTransformNode.Create;
Transform102 := Transform49;
{ .AddChildren }
fieldValue101.AddChildren([Transform102]);
{ .AddFieldValue }
ProtoInstance94.FieldValue := fieldValue101;
fieldValue103 := TfieldValueNode.Create;
fieldValue103.NameField := 'set_startpoint';
fieldValue103.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance94.FieldValue := fieldValue103;
fieldValue104 := TfieldValueNode.Create;
fieldValue104.NameField := 'set_endpoint';
fieldValue104.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance94.FieldValue := fieldValue104;
{ .AddChildren }
Group10.AddChildren([ProtoInstance94]);
ProtoInstance105 := TProtoInstanceNode.Create;
ProtoInstance105.NameField := 'x3dconnector';
fieldValue106 := TfieldValueNode.Create;
fieldValue106.NameField := 'startnode';
Transform107 := TTransformNode.Create;
Transform107 := Transform14;
{ .AddChildren }
fieldValue106.AddChildren([Transform107]);
{ .AddFieldValue }
ProtoInstance105.FieldValue := fieldValue106;
fieldValue108 := TfieldValueNode.Create;
fieldValue108.NameField := 'endnode';
Transform109 := TTransformNode.Create;
Transform109 := Transform35;
{ .AddChildren }
fieldValue108.AddChildren([Transform109]);
{ .AddFieldValue }
ProtoInstance105.FieldValue := fieldValue108;
fieldValue110 := TfieldValueNode.Create;
fieldValue110.NameField := 'transnode';
Transform111 := TTransformNode.Create;
Transform111 := Transform54;
{ .AddChildren }
fieldValue110.AddChildren([Transform111]);
{ .AddFieldValue }
ProtoInstance105.FieldValue := fieldValue110;
fieldValue112 := TfieldValueNode.Create;
fieldValue112.NameField := 'rotscalenode';
Transform113 := TTransformNode.Create;
Transform113 := Transform55;
{ .AddChildren }
fieldValue112.AddChildren([Transform113]);
{ .AddFieldValue }
ProtoInstance105.FieldValue := fieldValue112;
fieldValue114 := TfieldValueNode.Create;
fieldValue114.NameField := 'set_startpoint';
fieldValue114.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance105.FieldValue := fieldValue114;
fieldValue115 := TfieldValueNode.Create;
fieldValue115.NameField := 'set_endpoint';
fieldValue115.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance105.FieldValue := fieldValue115;
{ .AddChildren }
Group10.AddChildren([ProtoInstance105]);
Group10.AddRoute(Transform14.EventTranslation_changed, ProtoInstance83.EventSet_startpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform21.EventTranslation_changed, ProtoInstance83.EventSet_endpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform14.EventTranslation_changed, ProtoInstance94.EventSet_startpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform28.EventTranslation_changed, ProtoInstance94.EventSet_endpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform14.EventTranslation_changed, ProtoInstance105.EventSet_startpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform35.EventTranslation_changed, ProtoInstance105.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
