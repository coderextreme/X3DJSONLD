function arc2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
Sphere13: TSphereNode;
Appearance14: TAppearanceNode;
Material15: TMaterialNode;
PositionInterpolator16: TPositionInterpolatorNode;
Script17: TScriptNode;
field18: TfieldNode;
field19: TfieldNode;
field20: TfieldNode;
field21: TfieldNode;
TimeSensor22: TTimeSensorNode;
Transform28: TTransformNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
Sphere31: TSphereNode;
Appearance32: TAppearanceNode;
Material33: TMaterialNode;
PositionInterpolator34: TPositionInterpolatorNode;
Script35: TScriptNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
TimeSensor40: TTimeSensorNode;
Transform46: TTransformNode;
Transform47: TTransformNode;
Shape48: TShapeNode;
Appearance49: TAppearanceNode;
Material50: TMaterialNode;
Cylinder51: TCylinderNode;
Script52: TScriptNode;
field53: TfieldNode;
Transform54: TTransformNode;
field55: TfieldNode;
Transform56: TTransformNode;
field57: TfieldNode;
Transform58: TTransformNode;
field59: TfieldNode;
Transform60: TTransformNode;
field61: TfieldNode;
field62: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc2.x3d';
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
Transform10 := TTransformNode.Create;
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
Sphere13.Radius := 0.1;
{ .SetGeometry }
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance14.Material := Material15;
{ .SetAppearance }
Shape12.Appearance := Appearance14;
{ .AddChild }
Transform11.AddChildren([Shape12]);
PositionInterpolator16 := TPositionInterpolatorNode.Create;
PositionInterpolator16.SetKey([0,1]);
PositionInterpolator16.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform11.AddChildren([PositionInterpolator16]);
Script17 := TScriptNode.Create;
field18 := TfieldNode.Create;
field18.NameField := 'translation';
field18.AccessType := 'inputOutput';
field18.Type := 'SFVec3f';
field18.Value := '0 0 0';
{ .AddField }
Script17.Field := field18;
field19 := TfieldNode.Create;
field19.NameField := 'old';
field19.AccessType := 'inputOutput';
field19.Type := 'SFVec3f';
field19.Value := '0 0 0';
{ .AddField }
Script17.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'set_location';
field20.AccessType := 'inputOnly';
field20.Type := 'SFTime';
{ .AddField }
Script17.Field := field20;
field21 := TfieldNode.Create;
field21.NameField := 'keyValue';
field21.AccessType := 'inputOutput';
field21.Type := 'MFVec3f';
field21.Value := '0 0 0 0 5 0';
{ .AddField }
Script17.Field := field21;

Script17.SetSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
{ .AddChildren }
Transform11.AddChildren([Script17]);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.CycleInterval := 3;
TimeSensor22.Loop := True;
{ .AddChildren }
Transform11.AddChildren([TimeSensor22]);
Transform11.AddRoute(TimeSensor22.FdCycletime, Script17.EventSet_location);
{ .AddX3DRoute }
Transform11.AddRoute(TimeSensor22.EventFraction_changed, PositionInterpolator16.EventSet_fraction);
{ .AddX3DRoute }
Transform11.AddRoute(Script17.FdKeyvalue, PositionInterpolator16.FdKeyvalue);
{ .AddX3DRoute }
Transform11.AddRoute(PositionInterpolator16.EventValue_changed, Transform11.FdTranslation);
{ .AddX3DRoute }
Transform11.AddRoute(Script17.EventTranslation_changed, Transform11.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Transform10.AddChildren([Transform11]);
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform28 := TTransformNode.Create;
Transform29 := TTransformNode.Create;
Shape30 := TShapeNode.Create;
Sphere31 := TSphereNode.Create;
Sphere31.Radius := 0.1;
{ .SetGeometry }
Shape30.Geometry := Sphere31;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance32.Material := Material33;
{ .SetAppearance }
Shape30.Appearance := Appearance32;
{ .AddChild }
Transform29.AddChildren([Shape30]);
PositionInterpolator34 := TPositionInterpolatorNode.Create;
PositionInterpolator34.SetKey([0,1]);
PositionInterpolator34.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform29.AddChildren([PositionInterpolator34]);
Script35 := TScriptNode.Create;
field36 := TfieldNode.Create;
field36.NameField := 'translation';
field36.AccessType := 'inputOutput';
field36.Type := 'SFVec3f';
field36.Value := '0 0 0';
{ .AddField }
Script35.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'old';
field37.AccessType := 'inputOutput';
field37.Type := 'SFVec3f';
field37.Value := '0 0 0';
{ .AddField }
Script35.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'set_location';
field38.AccessType := 'inputOnly';
field38.Type := 'SFTime';
{ .AddField }
Script35.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'keyValue';
field39.AccessType := 'inputOutput';
field39.Type := 'MFVec3f';
field39.Value := '0 0 0 0 5 0';
{ .AddField }
Script35.Field := field39;

Script35.SetSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
{ .AddChildren }
Transform29.AddChildren([Script35]);
TimeSensor40 := TTimeSensorNode.Create;
TimeSensor40.CycleInterval := 3;
TimeSensor40.Loop := True;
{ .AddChildren }
Transform29.AddChildren([TimeSensor40]);
Transform29.AddRoute(TimeSensor40.FdCycletime, Script35.EventSet_location);
{ .AddX3DRoute }
Transform29.AddRoute(TimeSensor40.EventFraction_changed, PositionInterpolator34.EventSet_fraction);
{ .AddX3DRoute }
Transform29.AddRoute(Script35.FdKeyvalue, PositionInterpolator34.FdKeyvalue);
{ .AddX3DRoute }
Transform29.AddRoute(PositionInterpolator34.EventValue_changed, Transform29.FdTranslation);
{ .AddX3DRoute }
Transform29.AddRoute(Script35.EventTranslation_changed, Transform29.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Transform28.AddChildren([Transform29]);
{ .AddChildren }
Group7.AddChildren([Transform28]);
Transform46 := TTransformNode.Create;
Transform47 := TTransformNode.Create;
Shape48 := TShapeNode.Create;
Appearance49 := TAppearanceNode.Create;
Material50 := TMaterialNode.Create;
Material50.DiffuseColor := Vector3(0.2,0.7,0.7);
Material50.Transparency := 0.5;
{ .SetMaterial }
Appearance49.Material := Material50;
{ .SetAppearance }
Shape48.Appearance := Appearance49;
Cylinder51 := TCylinderNode.Create;
Cylinder51.Radius := 0.05;
{ .SetGeometry }
Shape48.Geometry := Cylinder51;
{ .AddChild }
Transform47.AddChildren([Shape48]);
{ .AddChildren }
Transform46.AddChildren([Transform47]);
{ .AddChildren }
Group7.AddChildren([Transform46]);
Script52 := TScriptNode.Create;
field53 := TfieldNode.Create;
field53.NameField := 'startnode';
field53.AccessType := 'initializeOnly';
field53.Type := 'SFNode';
Transform54 := TTransformNode.Create;
Transform54 := Transform10;
{ .AddChildren }
field53.AddChildren([Transform54]);
{ .AddField }
Script52.Field := field53;
field55 := TfieldNode.Create;
field55.NameField := 'endnode';
field55.AccessType := 'initializeOnly';
field55.Type := 'SFNode';
Transform56 := TTransformNode.Create;
Transform56 := Transform28;
{ .AddChildren }
field55.AddChildren([Transform56]);
{ .AddField }
Script52.Field := field55;
field57 := TfieldNode.Create;
field57.NameField := 'transC1';
field57.AccessType := 'initializeOnly';
field57.Type := 'SFNode';
Transform58 := TTransformNode.Create;
Transform58 := Transform46;
{ .AddChildren }
field57.AddChildren([Transform58]);
{ .AddField }
Script52.Field := field57;
field59 := TfieldNode.Create;
field59.NameField := 'rotscaleC1';
field59.AccessType := 'initializeOnly';
field59.Type := 'SFNode';
Transform60 := TTransformNode.Create;
Transform60 := Transform47;
{ .AddChildren }
field59.AddChildren([Transform60]);
{ .AddField }
Script52.Field := field59;
field61 := TfieldNode.Create;
field61.NameField := 'set_startpoint';
field61.AccessType := 'inputOnly';
field61.Type := 'SFVec3f';
{ .AddField }
Script52.Field := field61;
field62 := TfieldNode.Create;
field62.NameField := 'set_endpoint';
field62.AccessType := 'inputOnly';
field62.Type := 'SFVec3f';
{ .AddField }
Script52.Field := field62;

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
"	      transC1.translation = trafo.translation;\n"+
"	      rotscaleC1.rotation = trafo.rotation;\n"+
"	      rotscaleC1.scale = trafo.scale;\n"+
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
Group7.AddChildren([Script52]);
Group7.AddRoute(Transform10.EventTranslation_changed, Script52.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(Transform28.EventTranslation_changed, Script52.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
