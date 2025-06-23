function arc3: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Shape11: TShapeNode;
Sphere12: TSphereNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
PositionInterpolator15: TPositionInterpolatorNode;
Script16: TScriptNode;
field17: TfieldNode;
field18: TfieldNode;
field19: TfieldNode;
field20: TfieldNode;
TimeSensor21: TTimeSensorNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Sphere28: TSphereNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
PositionInterpolator31: TPositionInterpolatorNode;
Script32: TScriptNode;
field33: TfieldNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
TimeSensor37: TTimeSensorNode;
Group42: TGroupNode;
Transform43: TTransformNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
Cylinder48: TCylinderNode;
Script49: TScriptNode;
field50: TfieldNode;
Group51: TGroupNode;
field52: TfieldNode;
Group53: TGroupNode;
field54: TfieldNode;
Transform55: TTransformNode;
field56: TfieldNode;
Transform57: TTransformNode;
field58: TfieldNode;
field59: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc3.x3d';
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
Sphere12 := TSphereNode.Create;
Sphere12.Radius := 0.1;
{ .SetGeometry }
Shape11.Geometry := Sphere12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance13.Material := Material14;
{ .SetAppearance }
Shape11.Appearance := Appearance13;
{ .AddChild }
Transform10.AddChildren([Shape11]);
PositionInterpolator15 := TPositionInterpolatorNode.Create;
PositionInterpolator15.SetKey([0,1]);
PositionInterpolator15.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform10.AddChildren([PositionInterpolator15]);
Script16 := TScriptNode.Create;
field17 := TfieldNode.Create;
field17.NameField := 'translation';
field17.AccessType := 'inputOutput';
field17.Type := 'SFVec3f';
field17.Value := '0 0 0';
{ .AddField }
Script16.Field := field17;
field18 := TfieldNode.Create;
field18.NameField := 'old';
field18.AccessType := 'inputOutput';
field18.Type := 'SFVec3f';
field18.Value := '0 0 0';
{ .AddField }
Script16.Field := field18;
field19 := TfieldNode.Create;
field19.NameField := 'set_location';
field19.AccessType := 'inputOnly';
field19.Type := 'SFTime';
{ .AddField }
Script16.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'keyValue';
field20.AccessType := 'inputOutput';
field20.Type := 'MFVec3f';
field20.Value := '0 0 0 0 5 0';
{ .AddField }
Script16.Field := field20;

Script16.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
{ .AddChildren }
Transform10.AddChildren([Script16]);
TimeSensor21 := TTimeSensorNode.Create;
TimeSensor21.CycleInterval := 3;
TimeSensor21.Loop := True;
{ .AddChildren }
Transform10.AddChildren([TimeSensor21]);
Transform10.AddRoute(TimeSensor21.FdCycletime, Script16.EventSet_location);
{ .AddX3DRoute }
Transform10.AddRoute(TimeSensor21.EventFraction_changed, PositionInterpolator15.EventSet_fraction);
{ .AddX3DRoute }
Transform10.AddRoute(Script16.FdKeyvalue, PositionInterpolator15.FdKeyvalue);
{ .AddX3DRoute }
Transform10.AddRoute(PositionInterpolator15.EventValue_changed, Transform10.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform26 := TTransformNode.Create;
Shape27 := TShapeNode.Create;
Sphere28 := TSphereNode.Create;
Sphere28.Radius := 0.1;
{ .SetGeometry }
Shape27.Geometry := Sphere28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance29.Material := Material30;
{ .SetAppearance }
Shape27.Appearance := Appearance29;
{ .AddChild }
Transform26.AddChildren([Shape27]);
PositionInterpolator31 := TPositionInterpolatorNode.Create;
PositionInterpolator31.SetKey([0,1]);
PositionInterpolator31.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform26.AddChildren([PositionInterpolator31]);
Script32 := TScriptNode.Create;
field33 := TfieldNode.Create;
field33.NameField := 'translation';
field33.AccessType := 'inputOutput';
field33.Type := 'SFVec3f';
field33.Value := '0 0 0';
{ .AddField }
Script32.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'old';
field34.AccessType := 'inputOutput';
field34.Type := 'SFVec3f';
field34.Value := '0 0 0';
{ .AddField }
Script32.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'set_location';
field35.AccessType := 'inputOnly';
field35.Type := 'SFTime';
{ .AddField }
Script32.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'keyValue';
field36.AccessType := 'inputOutput';
field36.Type := 'MFVec3f';
field36.Value := '0 0 0 0 5 0';
{ .AddField }
Script32.Field := field36;

Script32.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
{ .AddChildren }
Transform26.AddChildren([Script32]);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.CycleInterval := 3;
TimeSensor37.Loop := True;
{ .AddChildren }
Transform26.AddChildren([TimeSensor37]);
Transform26.AddRoute(TimeSensor37.FdCycletime, Script32.EventSet_location);
{ .AddX3DRoute }
Transform26.AddRoute(TimeSensor37.EventFraction_changed, PositionInterpolator31.EventSet_fraction);
{ .AddX3DRoute }
Transform26.AddRoute(Script32.FdKeyvalue, PositionInterpolator31.FdKeyvalue);
{ .AddX3DRoute }
Transform26.AddRoute(PositionInterpolator31.EventValue_changed, Transform26.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform26]);
Group42 := TGroupNode.Create;
Transform43 := TTransformNode.Create;
Transform44 := TTransformNode.Create;
Shape45 := TShapeNode.Create;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0.2,0.7,0.7);
Material47.Transparency := 0.5;
{ .SetMaterial }
Appearance46.Material := Material47;
{ .SetAppearance }
Shape45.Appearance := Appearance46;
Cylinder48 := TCylinderNode.Create;
Cylinder48.Radius := 0.05;
{ .SetGeometry }
Shape45.Geometry := Cylinder48;
{ .AddChild }
Transform44.AddChildren([Shape45]);
{ .AddChildren }
Transform43.AddChildren([Transform44]);
{ .AddChildren }
Group42.AddChildren([Transform43]);
Script49 := TScriptNode.Create;
field50 := TfieldNode.Create;
field50.NameField := 'startnode';
field50.AccessType := 'initializeOnly';
field50.Type := 'SFNode';
Group51 := TGroupNode.Create;
Group51 := Transform10;
{ .AddChildren }
field50.AddChildren([Group51]);
{ .AddField }
Script49.Field := field50;
field52 := TfieldNode.Create;
field52.NameField := 'endnode';
field52.AccessType := 'initializeOnly';
field52.Type := 'SFNode';
Group53 := TGroupNode.Create;
Group53 := Transform26;
{ .AddChildren }
field52.AddChildren([Group53]);
{ .AddField }
Script49.Field := field52;
field54 := TfieldNode.Create;
field54.NameField := 'position';
field54.AccessType := 'inputOutput';
field54.Type := 'SFNode';
Transform55 := TTransformNode.Create;
Transform55 := Transform43;
{ .AddChildren }
field54.AddChildren([Transform55]);
{ .AddField }
Script49.Field := field54;
field56 := TfieldNode.Create;
field56.NameField := 'rotscale';
field56.AccessType := 'inputOutput';
field56.Type := 'SFNode';
Transform57 := TTransformNode.Create;
Transform57 := Transform44;
{ .AddChildren }
field56.AddChildren([Transform57]);
{ .AddField }
Script49.Field := field56;
field58 := TfieldNode.Create;
field58.NameField := 'set_startpoint';
field58.AccessType := 'inputOnly';
field58.Type := 'SFVec3f';
{ .AddField }
Script49.Field := field58;
field59 := TfieldNode.Create;
field59.NameField := 'set_endpoint';
field59.AccessType := 'inputOnly';
field59.Type := 'SFVec3f';
{ .AddField }
Script49.Field := field59;

Script49.SetSourceCode('''ecmascript:\n"+
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
Group42.AddChildren([Script49]);
{ .AddChildren }
Group7.AddChildren([Group42]);
Group7.AddRoute(Transform10.FdTranslation, Script49.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(Transform26.FdTranslation, Script49.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
